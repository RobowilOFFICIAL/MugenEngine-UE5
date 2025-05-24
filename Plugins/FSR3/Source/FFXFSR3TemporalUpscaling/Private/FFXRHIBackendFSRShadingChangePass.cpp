// This file is part of the FidelityFX Super Resolution 3.1 Unreal Engine Plugin.
//
// Copyright (c) 2023-2025 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include "FFXRHIBackendFSRShaders.h"
#include "FFXRHIBackendSubPass.h"
#include "FFXRHIBackend.h"
#include "ShaderParameterStruct.h"
#include "ShaderCompilerCore.h"
#if UE_VERSION_AT_LEAST(5, 2, 0)
#include "DataDrivenShaderPlatformInfo.h"
#else
#include "RHIDefinitions.h"
#endif

#include "FFXFSR3.h"
#include "ffx_fsr3upscaler_private.h"

class FFXRHIShadingChangeCS : public FFXFSRGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FFXRHIShadingChangeCS);
	SHADER_USE_PARAMETER_STRUCT(FFXRHIShadingChangeCS, FFXFSRGlobalShader);

	using FParameters = FFXFSRGlobalShader::FParameters;

	static void BindParameters(FRDGBuilder& GraphBuilder, FFXBackendState* Context, const FfxGpuJobDescription* job, FParameters* Parameters)
	{
		FFXFSRGlobalShader::BindParameters(GraphBuilder, Context, job, Parameters);
	}

	using FPermutationDomain = FFXFSRGlobalShader::FPermutationDomain;

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return FFXFSRGlobalShader::ShouldCompilePermutation(Parameters);
	}
	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
		FFXFSRGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);
	}

	

	static const wchar_t** GetBoundSRVNames()
	{
		static const wchar_t* SRVs[] = {
			L"r_spd_mips",
		};
		return SRVs;
	}

	static const wchar_t** GetBoundUAVNames()
	{
		static const wchar_t* UAVs[] = {
			L"rw_shading_change",
		};
		return UAVs;
	}

	static const wchar_t** GetBoundCBNames()
	{
		static const wchar_t* CBs[] = {
			L"cbFSR3Upscaler",
		};
		return CBs;
	}

	static uint32* GetBoundSRVs()
	{
		static uint32 SRVs[] = {
			FFX_FSR3UPSCALER_RESOURCE_IDENTIFIER_SPD_MIPS,             
		};
		return SRVs;
	}

	static uint32 GetNumBoundSRVs()
	{
		return 1;
	}

	static uint32* GetBoundUAVs()
	{
		static uint32 UAVs[] = { 
			FFX_FSR3UPSCALER_RESOURCE_IDENTIFIER_SHADING_CHANGE,                
		};
		return UAVs;
	}

	static uint32 GetNumBoundUAVs()
	{
		return 1;
	}

	static uint32* GetBoundCBs()
	{
		static uint32 CBs[] = { 
			FFX_FSR3UPSCALER_CONSTANTBUFFER_IDENTIFIER_FSR3UPSCALER,           
		};
		return CBs;
	}

	static uint32 GetNumConstants()
	{
		return 1;
	}

	static uint32 GetConstantSizeInDWords(uint32 Index)
	{
		static uint32 Sizes[] = { sizeof(FFXFSRPassParameters) / sizeof(uint32) };
		return Sizes[Index];
	}
};
IMPLEMENT_GLOBAL_SHADER(FFXRHIShadingChangeCS, "/Plugin/FFX/Private/ffx_fsr3upscaler_shading_change_pass.usf", "CS", SF_Compute);

IFFXRHIBackendSubPass* GetShadingChangePass(FfxPass pass, uint32_t permutationOptions, const FfxPipelineDescription* desc, FfxPipelineState* outPipeline, bool bSupportHalf, bool bPreferWave64)
{
	auto* Pipeline = new TFFXRHIBackendSubPass<FFXRHIShadingChangeCS>(TEXT("FidelityFX-FSR3/ShadingChange (CS)"), desc, outPipeline, bSupportHalf);
	Pipeline->Permutation.template Set<FFX_IsHDR>(desc->contextFlags & FFX_FSR3UPSCALER_ENABLE_HIGH_DYNAMIC_RANGE);
	Pipeline->Permutation.template Set<FFX_MVLowRes>(!(desc->contextFlags & FFX_FSR3UPSCALER_ENABLE_DISPLAY_RESOLUTION_MOTION_VECTORS));
	Pipeline->Permutation.template Set<FFX_MVJittered>(desc->contextFlags & FFX_FSR3UPSCALER_ENABLE_MOTION_VECTORS_JITTER_CANCELLATION);
	Pipeline->Permutation.template Set<FFX_DepthInverted>(desc->contextFlags & FFX_FSR3UPSCALER_ENABLE_DEPTH_INVERTED);
	Pipeline->Permutation.template Set<FFX_DoSharpening>(pass == FFX_FSR3UPSCALER_PASS_ACCUMULATE_SHARPEN);
	Pipeline->Permutation.template Set<FFX_UseLanczosType>(permutationOptions & FSR3UPSCALER_SHADER_PERMUTATION_USE_LANCZOS_TYPE);
	Pipeline->Permutation.template Set<FFX_UseHalf>(bSupportHalf);
	Pipeline->Permutation.template Set<FFX_PreferWave64>(bPreferWave64);
	return Pipeline;
}
