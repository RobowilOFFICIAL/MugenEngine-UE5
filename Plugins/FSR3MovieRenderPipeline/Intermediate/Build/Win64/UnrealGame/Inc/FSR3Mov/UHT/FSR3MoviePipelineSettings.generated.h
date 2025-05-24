// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FSR3MoviePipelineSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSR3MOVIERENDERPIPELINE_FSR3MoviePipelineSettings_generated_h
#error "FSR3MoviePipelineSettings.generated.h already included, missing '#pragma once' in FSR3MoviePipelineSettings.h"
#endif
#define FSR3MOVIERENDERPIPELINE_FSR3MoviePipelineSettings_generated_h

#define FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFSR3MoviePipelineSettings(); \
	friend struct Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics; \
public: \
	DECLARE_CLASS(UFSR3MoviePipelineSettings, UMoviePipelineViewFamilySetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FSR3MovieRenderPipeline"), NO_API) \
	DECLARE_SERIALIZER(UFSR3MoviePipelineSettings)


#define FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFSR3MoviePipelineSettings(UFSR3MoviePipelineSettings&&); \
	UFSR3MoviePipelineSettings(const UFSR3MoviePipelineSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFSR3MoviePipelineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFSR3MoviePipelineSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFSR3MoviePipelineSettings) \
	NO_API virtual ~UFSR3MoviePipelineSettings();


#define FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_40_PROLOG
#define FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_43_INCLASS_NO_PURE_DECLS \
	FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSR3MOVIERENDERPIPELINE_API UClass* StaticClass<class UFSR3MoviePipelineSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h


#define FOREACH_ENUM_EFSR3MOVIEPIPELINEQUALITY(op) \
	op(EFSR3MoviePipelineQuality::Unused) \
	op(EFSR3MoviePipelineQuality::Native) \
	op(EFSR3MoviePipelineQuality::Quality) \
	op(EFSR3MoviePipelineQuality::Balanced) \
	op(EFSR3MoviePipelineQuality::Performance) \
	op(EFSR3MoviePipelineQuality::UltraPerformance) 

enum class EFSR3MoviePipelineQuality : uint8;
template<> struct TIsUEnumClass<EFSR3MoviePipelineQuality> { enum { Value = true }; };
template<> FSR3MOVIERENDERPIPELINE_API UEnum* StaticEnum<EFSR3MoviePipelineQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
