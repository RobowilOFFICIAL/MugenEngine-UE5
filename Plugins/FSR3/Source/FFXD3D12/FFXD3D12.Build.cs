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

using UnrealBuildTool;
using System;
using System.IO;

public class FFXD3D12 : ModuleRules
{
	public FFXD3D12(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "../fidelityfx-sdk/sdk/include"),
				Path.Combine(ModuleDirectory, "../fidelityfx-sdk/ffx-api/include/ffx_api/dx12")
			}
			);

		PrivateIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "../fidelityfx-sdk/sdk/src"),
				Path.Combine(ModuleDirectory, "../fidelityfx-sdk/sdk/src/shared"),
				Path.Combine(ModuleDirectory, "../fidelityfx-sdk/sdk/src/components"),
				Path.Combine(ModuleDirectory, "../fidelityfx-sdk/sdk/src/backends/shared"),
				Path.Combine(ModuleDirectory, "../fidelityfx-sdk/sdk/libs")
			}
			);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Engine",
				"FFXShared",
				"FFXFrameInterpolationApi"
			}
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine",	
			}
			);

		if (Target.Platform.IsInGroup(UnrealPlatformGroup.Microsoft))
		{
			AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12");
		}

		// New FfxApi DLL for DX12
		{
			string AmdApiLibPath = Path.Combine(ModuleDirectory, "../fidelityfx-sdk/PrebuiltSignedDLL");
			RuntimeDependencies.Add("$(TargetOutputDir)/amd_fidelityfx_dx12.dll", Path.Combine(AmdApiLibPath, "amd_fidelityfx_dx12.dll"));
			PublicDelayLoadDLLs.Add("amd_fidelityfx_dx12.dll");
		}

		PrecompileForTargets = PrecompileTargetsType.Any;
	}
}
