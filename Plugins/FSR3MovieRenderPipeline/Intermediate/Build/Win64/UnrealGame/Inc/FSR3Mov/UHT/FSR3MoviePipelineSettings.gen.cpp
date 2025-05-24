// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/FSR3MoviePipelineSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSR3MoviePipelineSettings() {}

// Begin Cross Module References
FSR3MOVIERENDERPIPELINE_API UClass* Z_Construct_UClass_UFSR3MoviePipelineSettings();
FSR3MOVIERENDERPIPELINE_API UClass* Z_Construct_UClass_UFSR3MoviePipelineSettings_NoRegister();
FSR3MOVIERENDERPIPELINE_API UEnum* Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality();
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting();
UPackage* Z_Construct_UPackage__Script_FSR3MovieRenderPipeline();
// End Cross Module References

// Begin Enum EFSR3MoviePipelineQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality;
static UEnum* EFSR3MoviePipelineQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality, (UObject*)Z_Construct_UPackage__Script_FSR3MovieRenderPipeline(), TEXT("EFSR3MoviePipelineQuality"));
	}
	return Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality.OuterSingleton;
}
template<> FSR3MOVIERENDERPIPELINE_API UEnum* StaticEnum<EFSR3MoviePipelineQuality>()
{
	return EFSR3MoviePipelineQuality_StaticEnum();
}
struct Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EFSR3MoviePipelineQuality::Balanced" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FSR3MoviePipelineSettings.h" },
		{ "Native.DisplayName", "Native AA" },
		{ "Native.Name", "EFSR3MoviePipelineQuality::Native" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "EFSR3MoviePipelineQuality::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "EFSR3MoviePipelineQuality::Quality" },
		{ "UltraPerformance.DisplayName", "UltraPerformance" },
		{ "UltraPerformance.Name", "EFSR3MoviePipelineQuality::UltraPerformance" },
		{ "Unused.Hidden", "" },
		{ "Unused.Name", "EFSR3MoviePipelineQuality::Unused" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFSR3MoviePipelineQuality::Unused", (int64)EFSR3MoviePipelineQuality::Unused },
		{ "EFSR3MoviePipelineQuality::Native", (int64)EFSR3MoviePipelineQuality::Native },
		{ "EFSR3MoviePipelineQuality::Quality", (int64)EFSR3MoviePipelineQuality::Quality },
		{ "EFSR3MoviePipelineQuality::Balanced", (int64)EFSR3MoviePipelineQuality::Balanced },
		{ "EFSR3MoviePipelineQuality::Performance", (int64)EFSR3MoviePipelineQuality::Performance },
		{ "EFSR3MoviePipelineQuality::UltraPerformance", (int64)EFSR3MoviePipelineQuality::UltraPerformance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FSR3MovieRenderPipeline,
	nullptr,
	"EFSR3MoviePipelineQuality",
	"EFSR3MoviePipelineQuality",
	Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality()
{
	if (!Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality.InnerSingleton, Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality.InnerSingleton;
}
// End Enum EFSR3MoviePipelineQuality

// Begin Class UFSR3MoviePipelineSettings
void UFSR3MoviePipelineSettings::StaticRegisterNativesUFSR3MoviePipelineSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFSR3MoviePipelineSettings);
UClass* Z_Construct_UClass_UFSR3MoviePipelineSettings_NoRegister()
{
	return UFSR3MoviePipelineSettings::StaticClass();
}
struct Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "FidelityFX Super Resolution 3 Settings" },
		{ "IncludePath", "FSR3MoviePipelineSettings.h" },
		{ "ModuleRelativePath", "Public/FSR3MoviePipelineSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSR3Quality_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Quality Mode" },
		{ "ModuleRelativePath", "Public/FSR3MoviePipelineSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FSR3Quality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FSR3Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSR3MoviePipelineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::NewProp_FSR3Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::NewProp_FSR3Quality = { "FSR3Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFSR3MoviePipelineSettings, FSR3Quality), Z_Construct_UEnum_FSR3MovieRenderPipeline_EFSR3MoviePipelineQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSR3Quality_MetaData), NewProp_FSR3Quality_MetaData) }; // 231738519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::NewProp_FSR3Quality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::NewProp_FSR3Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoviePipelineViewFamilySetting,
	(UObject* (*)())Z_Construct_UPackage__Script_FSR3MovieRenderPipeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::ClassParams = {
	&UFSR3MoviePipelineSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFSR3MoviePipelineSettings()
{
	if (!Z_Registration_Info_UClass_UFSR3MoviePipelineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFSR3MoviePipelineSettings.OuterSingleton, Z_Construct_UClass_UFSR3MoviePipelineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFSR3MoviePipelineSettings.OuterSingleton;
}
template<> FSR3MOVIERENDERPIPELINE_API UClass* StaticClass<UFSR3MoviePipelineSettings>()
{
	return UFSR3MoviePipelineSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFSR3MoviePipelineSettings);
UFSR3MoviePipelineSettings::~UFSR3MoviePipelineSettings() {}
// End Class UFSR3MoviePipelineSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFSR3MoviePipelineQuality_StaticEnum, TEXT("EFSR3MoviePipelineQuality"), &Z_Registration_Info_UEnum_EFSR3MoviePipelineQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 231738519U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFSR3MoviePipelineSettings, UFSR3MoviePipelineSettings::StaticClass, TEXT("UFSR3MoviePipelineSettings"), &Z_Registration_Info_UClass_UFSR3MoviePipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFSR3MoviePipelineSettings), 2062015564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_3658410224(TEXT("/Script/FSR3MovieRenderPipeline"),
	Z_CompiledInDeferFile_FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FSR3_550_FSR3MovieRenderPipeline_HostProject_Plugins_FSR3MovieRenderPipeline_Source_Public_FSR3MoviePipelineSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
