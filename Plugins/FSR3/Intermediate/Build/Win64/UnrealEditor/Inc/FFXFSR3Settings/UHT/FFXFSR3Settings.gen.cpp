// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFXFSR3Settings/Public/FFXFSR3Settings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFXFSR3Settings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
FFXFSR3SETTINGS_API UClass* Z_Construct_UClass_UFFXFSR3Settings();
FFXFSR3SETTINGS_API UClass* Z_Construct_UClass_UFFXFSR3Settings_NoRegister();
FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode();
FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode();
FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat();
FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode();
FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode();
FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode();
UPackage* Z_Construct_UPackage__Script_FFXFSR3Settings();
// End Cross Module References

// Begin Enum EFFXFSR3QualityMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3QualityMode;
static UEnum* EFFXFSR3QualityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3QualityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFXFSR3QualityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3QualityMode"));
	}
	return Z_Registration_Info_UEnum_EFFXFSR3QualityMode.OuterSingleton;
}
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3QualityMode>()
{
	return EFFXFSR3QualityMode_StaticEnum();
}
struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EFFXFSR3QualityMode::Balanced" },
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The official FSR3 quality modes.\n//-------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "NativeAA.DisplayName", "Native AA" },
		{ "NativeAA.Name", "EFFXFSR3QualityMode::NativeAA" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "EFFXFSR3QualityMode::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "EFFXFSR3QualityMode::Quality" },
		{ "ToolTip", "The official FSR3 quality modes." },
		{ "UltraPerformance.DisplayName", "Ultra Performance" },
		{ "UltraPerformance.Name", "EFFXFSR3QualityMode::UltraPerformance" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFXFSR3QualityMode::NativeAA", (int64)EFFXFSR3QualityMode::NativeAA },
		{ "EFFXFSR3QualityMode::Quality", (int64)EFFXFSR3QualityMode::Quality },
		{ "EFFXFSR3QualityMode::Balanced", (int64)EFFXFSR3QualityMode::Balanced },
		{ "EFFXFSR3QualityMode::Performance", (int64)EFFXFSR3QualityMode::Performance },
		{ "EFFXFSR3QualityMode::UltraPerformance", (int64)EFFXFSR3QualityMode::UltraPerformance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
	nullptr,
	"EFFXFSR3QualityMode",
	"EFFXFSR3QualityMode",
	Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3QualityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3QualityMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFXFSR3QualityMode.InnerSingleton;
}
// End Enum EFFXFSR3QualityMode

// Begin Enum EFFXFSR3HistoryFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat;
static UEnum* EFFXFSR3HistoryFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3HistoryFormat"));
	}
	return Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.OuterSingleton;
}
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3HistoryFormat>()
{
	return EFFXFSR3HistoryFormat_StaticEnum();
}
struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The support texture formats for the FSR3 history data.\n//-------------------------------------------------------------------------------------\n" },
		{ "FloatR11G11B10.DisplayName", "PF_FloatR11G11B10" },
		{ "FloatR11G11B10.Name", "EFFXFSR3HistoryFormat::FloatR11G11B10" },
		{ "FloatRGBA.DisplayName", "PF_FloatRGBA" },
		{ "FloatRGBA.Name", "EFFXFSR3HistoryFormat::FloatRGBA" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "The support texture formats for the FSR3 history data." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFXFSR3HistoryFormat::FloatRGBA", (int64)EFFXFSR3HistoryFormat::FloatRGBA },
		{ "EFFXFSR3HistoryFormat::FloatR11G11B10", (int64)EFFXFSR3HistoryFormat::FloatR11G11B10 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
	nullptr,
	"EFFXFSR3HistoryFormat",
	"EFFXFSR3HistoryFormat",
	Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.InnerSingleton;
}
// End Enum EFFXFSR3HistoryFormat

// Begin Enum EFFXFSR3DeDitherMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode;
static UEnum* EFFXFSR3DeDitherMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3DeDitherMode"));
	}
	return Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.OuterSingleton;
}
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3DeDitherMode>()
{
	return EFFXFSR3DeDitherMode_StaticEnum();
}
struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The support texture formats for the FSR3 history data.\n//-------------------------------------------------------------------------------------\n" },
		{ "Full.DisplayName", "Full" },
		{ "Full.Name", "EFFXFSR3DeDitherMode::Full" },
		{ "HairOnly.DisplayName", "Hair Only" },
		{ "HairOnly.Name", "EFFXFSR3DeDitherMode::HairOnly" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EFFXFSR3DeDitherMode::Off" },
		{ "ToolTip", "The support texture formats for the FSR3 history data." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFXFSR3DeDitherMode::Off", (int64)EFFXFSR3DeDitherMode::Off },
		{ "EFFXFSR3DeDitherMode::Full", (int64)EFFXFSR3DeDitherMode::Full },
		{ "EFFXFSR3DeDitherMode::HairOnly", (int64)EFFXFSR3DeDitherMode::HairOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
	nullptr,
	"EFFXFSR3DeDitherMode",
	"EFFXFSR3DeDitherMode",
	Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.InnerSingleton;
}
// End Enum EFFXFSR3DeDitherMode

// Begin Enum EFFXFSR3LandscapeHISMMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode;
static UEnum* EFFXFSR3LandscapeHISMMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3LandscapeHISMMode"));
	}
	return Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.OuterSingleton;
}
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3LandscapeHISMMode>()
{
	return EFFXFSR3LandscapeHISMMode_StaticEnum();
}
struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllStatic.DisplayName", "All Instances" },
		{ "AllStatic.Name", "EFFXFSR3LandscapeHISMMode::AllStatic" },
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The modes for forcing Landscape Hierachical Instance Static Model to not be Static.\n//-------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EFFXFSR3LandscapeHISMMode::Off" },
		{ "StaticWPO.DisplayName", "Instances with World-Position-Offset" },
		{ "StaticWPO.Name", "EFFXFSR3LandscapeHISMMode::StaticWPO" },
		{ "ToolTip", "The modes for forcing Landscape Hierachical Instance Static Model to not be Static." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFXFSR3LandscapeHISMMode::Off", (int64)EFFXFSR3LandscapeHISMMode::Off },
		{ "EFFXFSR3LandscapeHISMMode::AllStatic", (int64)EFFXFSR3LandscapeHISMMode::AllStatic },
		{ "EFFXFSR3LandscapeHISMMode::StaticWPO", (int64)EFFXFSR3LandscapeHISMMode::StaticWPO },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
	nullptr,
	"EFFXFSR3LandscapeHISMMode",
	"EFFXFSR3LandscapeHISMMode",
	Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.InnerSingleton;
}
// End Enum EFFXFSR3LandscapeHISMMode

// Begin Enum EFFXFSR3FrameGenUIMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode;
static UEnum* EFFXFSR3FrameGenUIMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3FrameGenUIMode"));
	}
	return Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode.OuterSingleton;
}
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3FrameGenUIMode>()
{
	return EFFXFSR3FrameGenUIMode_StaticEnum();
}
struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The modes for rendering UI when using Frame Generation.\n//-------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "SlateRedraw.DisplayName", "Slate Redraw" },
		{ "SlateRedraw.Name", "EFFXFSR3FrameGenUIMode::SlateRedraw" },
		{ "ToolTip", "The modes for rendering UI when using Frame Generation." },
		{ "UIExtraction.DisplayName", "UI Extraction" },
		{ "UIExtraction.Name", "EFFXFSR3FrameGenUIMode::UIExtraction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFXFSR3FrameGenUIMode::SlateRedraw", (int64)EFFXFSR3FrameGenUIMode::SlateRedraw },
		{ "EFFXFSR3FrameGenUIMode::UIExtraction", (int64)EFFXFSR3FrameGenUIMode::UIExtraction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
	nullptr,
	"EFFXFSR3FrameGenUIMode",
	"EFFXFSR3FrameGenUIMode",
	Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode.InnerSingleton;
}
// End Enum EFFXFSR3FrameGenUIMode

// Begin Enum EFFXFSR3PaceRHIFrameMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode;
static UEnum* EFFXFSR3PaceRHIFrameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3PaceRHIFrameMode"));
	}
	return Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode.OuterSingleton;
}
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3PaceRHIFrameMode>()
{
	return EFFXFSR3PaceRHIFrameMode_StaticEnum();
}
struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The modes for pacing frames when using the RHI backend.\n//-------------------------------------------------------------------------------------\n" },
		{ "CustomPresentVSync.DisplayName", "Custom Present VSync" },
		{ "CustomPresentVSync.Name", "EFFXFSR3PaceRHIFrameMode::CustomPresentVSync" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EFFXFSR3PaceRHIFrameMode::None" },
		{ "ToolTip", "The modes for pacing frames when using the RHI backend." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFXFSR3PaceRHIFrameMode::None", (int64)EFFXFSR3PaceRHIFrameMode::None },
		{ "EFFXFSR3PaceRHIFrameMode::CustomPresentVSync", (int64)EFFXFSR3PaceRHIFrameMode::CustomPresentVSync },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
	nullptr,
	"EFFXFSR3PaceRHIFrameMode",
	"EFFXFSR3PaceRHIFrameMode",
	Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode()
{
	if (!Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode.InnerSingleton;
}
// End Enum EFFXFSR3PaceRHIFrameMode

// Begin Class UFFXFSR3Settings
void UFFXFSR3Settings::StaticRegisterNativesUFFXFSR3Settings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFFXFSR3Settings);
UClass* Z_Construct_UClass_UFFXFSR3Settings_NoRegister()
{
	return UFFXFSR3Settings::StaticClass();
}
struct Z_Construct_UClass_UFFXFSR3Settings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------\n// Settings for FSR3 exposed through the Editor UI.\n//-------------------------------------------------------------------------------------\n" },
		{ "DisplayName", "FidelityFX Super Resolution 3.1" },
		{ "IncludePath", "FFXFSR3Settings.h" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Settings for FSR3 exposed through the Editor UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.Enabled" },
		{ "DisplayName", "Enabled" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExposure_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.AutoExposure" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Enable to use FSR3's own auto-exposure, otherwise the engine's auto-exposure value is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledInEditorViewport_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.EnabledInEditorViewport" },
		{ "DisplayName", "Enabled in Editor Viewport" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "When enabled use FSR3 by default in the Editor viewports." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSSRExperimentalDenoiser_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.UseSSRExperimentalDenoiser" },
		{ "DisplayName", "Use SSR Experimental Denoiser" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Set to 1 to use r.SSR.ExperimentalDenoiser when FSR3 is enabled. This is required when r.FidelityFX.FSR3.CreateReactiveMask is enabled as the FSR3 plugin sets r.SSR.ExperimentalDenoiser to 1 in order to capture reflection data to generate the reactive mask." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRHIBackend_MetaData[] = {
		{ "Category", "Backend Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.UseRHI" },
		{ "DisplayName", "RHI Backend" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "True to enable FSR3's default RHI backend, when false a native backend must be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bD3D12Backend_MetaData[] = {
		{ "Category", "Backend Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.UseNativeDX12" },
		{ "DisplayName", "D3D12 Backend" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "True to use FSR3's native & optimised D3D12 backend, when false the RHI backend must be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrameGenEnabled_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.Enabled" },
		{ "DisplayName", "Frame Generation Enabled" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureDebugUI_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.CaptureDebugUI" },
		{ "DisplayName", "Capture Debug UI" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Force FidelityFX Frame Generation to detect and copy any debug UI which only renders on the first invocation of Slate's DrawWindow command." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateGlobalFrameTime_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.UpdateGlobalFrameTime" },
		{ "DisplayName", "Update Global Frame Time" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Update the GAverageMS and GAverageFPS engine globals with the frame time & FPS including frame generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModifySlateDeltaTime_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.ModifySlateDeltaTime" },
		{ "DisplayName", "Modify Slate Delta Time" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Set the FSlateApplication delta time to 0.0 when redrawing the UI for the 'Slate Redraw' UI mode to prevent widgets' NativeTick implementations updating incorrectly, ignored when using 'UI Extraction'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMode_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.UIMode" },
		{ "DisplayName", "UI Mode" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "The method to render the UI when using Frame Generation.\nSlate Redraw (0): will cause Slate to render the UI on to both the real & generation images each frame, this is higher quality but requires UI elements to be able to render multiple times per game frame.\nUI Extraction (1): will compare the pre & post UI frame to extract the UI and copy it on to the generated frame, this might result in lower quality for translucent UI elements but doesn't require re-rendering UI elements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistortionTexture_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.UseDistortionTexture" },
		{ "DisplayName", "Use Distortion Texture" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Set to 1 to bind the UE distortion texture to the Frame Interpolation context to better interpolate distortion, set to 0 to ignore distortion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bD3D12AsyncInterpolation_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.AllowAsyncWorkloads" },
		{ "DisplayName", "D3D12 Async. Interpolation" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "True to use async. execution of Frame Interpolation, false to run Frame Interpolation synchronously with the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bD3D12AsyncPresent_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.OverrideSwapChainDX12" },
		{ "DisplayName", "D3D12 Async. Present" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "True to use FSR3's D3D12 swap-chain override that improves frame pacing, false to use the fallback implementation based on Unreal's RHI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaceMode_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.RHIPacingMode" },
		{ "DisplayName", "RHI Pacing Mode" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "The modes for pacing frames when using the RHI backend.\nNone (0): No frame pacing - default.\nCPU Wait (1): Wait on the CPU before the second presented frame for Max(VBlank Interval, Half GPU Frame Time) - this doesn't interfere with presentation state but won't hold frames on screen for ideal durations and can still tear.\nCustom Present VSync (2): enable VSync for the second presented frame, tearing will only affect the interpolated frame which will be held on screen for at least one VBlank but interferes with presentation state which may not always work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityMode_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.QualityMode" },
		{ "DisplayName", "Quality Mode" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Selects the default quality mode to be used when upscaling with FSR3." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistoryFormat_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.HistoryFormat" },
		{ "DisplayName", "History Format" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Selects the bit-depth for the FSR3 history texture format, defaults to PF_FloatRGBA but can be set to PF_FloatR11G11B10 to reduce bandwidth at the expense of quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeDither_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.DeDither" },
		{ "DisplayName", "De-Dither Rendering" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Enable an extra pass to de-dither rendering before handing over to FSR3 to avoid over-thinning, defaults to Off but can be set to Full for all pixels or to Hair Only for just around Hair (requires Deffered Renderer)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sharpness_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.Sharpness" },
		{ "DisplayName", "Sharpness" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "When greater than 0.0 this enables Robust Contrast Adaptive Sharpening Filter to sharpen the output image." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustMipBias_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.AdjustMipBias" },
		{ "DisplayName", "Adjust Mip Bias & Offset" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Applies negative MipBias to material textures, improving results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceVertexDeformationOutputsVelocity_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ForceVertexDeformationOutputsVelocity" },
		{ "DisplayName", "Force Vertex Deformation To Output Velocity" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Force enables materials with World Position Offset and/or World Displacement to output velocities during velocity pass even when the actor has not moved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceLandscapeHISMMobility_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ForceLandscapeHISMMobility" },
		{ "DisplayName", "Force Landscape HISM Mobility" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Allow FSR3 to force the mobility of Landscape actors Hierarchical Instance Static Mesh components that use World-Position-Offset materials so they render valid velocities.\nSetting 'All Instances' is faster on the CPU, 'Instances with World-Position-Offset' is faster on the GPU." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityFactor_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.VelocityFactor" },
		{ "DisplayName", "Velocity Factor" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Range from 0.0 to 1.0 (Default 1.0), value of 0.0f can improve temporal stability of bright pixels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReactiveMask_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.CreateReactiveMask" },
		{ "DisplayName", "Reactive Mask" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Enable to generate a mask from the SceneColor, GBuffer, SeparateTranslucency & ScreenspaceReflections that determines how reactive each pixel should be." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskReflectionScale" },
		{ "DisplayName", "Reflection Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Scales the Unreal engine reflection contribution to the reactive mask, which can be used to control the amount of aliasing on reflective surfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionLuminanceBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskReflectionLumaBias" },
		{ "DisplayName", "Reflection Luminance Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Biases the reactive mask by the luminance of the reflection. Use to balance aliasing against ghosting on brightly lit reflective surfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessScale" },
		{ "DisplayName", "Roughness Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Scales the GBuffer roughness to provide a fallback value for the reactive mask when screenspace & planar reflections are disabled or don't affect a pixel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessBias" },
		{ "DisplayName", "Roughness Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Biases the reactive mask value when screenspace/planar reflections are weak with the GBuffer roughness to account for reflection environment captures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessMaxDistance_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessMaxDistance" },
		{ "DisplayName", "Roughness Max Distance" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Maximum distance in world units for using material roughness to contribute to the reactive mask, the maximum of this value and View.FurthestReflectionCaptureDistance will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReactiveMaskRoughnessForceMaxDistance_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessForceMaxDistance" },
		{ "DisplayName", "Force Roughness Max Distance" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Enable to force the maximum distance in world units for using material roughness to contribute to the reactive mask rather than using View.FurthestReflectionCaptureDistance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskTranslucencyBias" },
		{ "DisplayName", "Translucency Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Scales how much contribution translucency makes to the reactive mask. Higher values will make translucent materials less reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyLuminanceBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskTranslucencyLumaBias" },
		{ "DisplayName", "Translucency Luminance Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Biases the translucency contribution to the reactive mask by the luminance of the transparency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyMaxDistance_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskTranslucencyMaxDistance" },
		{ "DisplayName", "Translucency Max Distance" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Maximum distance in world units for using translucency to contribute to the reactive mask. This is another way to remove sky-boxes and other back-planes from the reactive mask, at the expense of nearer translucency not being reactive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveShadingModelID_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskReactiveShadingModelID" },
		{ "DisplayName", "Reactive Shading Model" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Treat the specified shading model as reactive, taking the CustomData0.x value as the reactive value to write into the mask. Default is MSM_NUM (Off)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceReactiveMaterialValue_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskForceReactiveMaterialValue" },
		{ "DisplayName", "Force value for Reactive Shading Model" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Force the reactive mask value for Reactive Shading Model materials, when > 0 this value can be used to override the value supplied in the Material Graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveHistoryTranslucencyBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveHistoryTranslucencyBias" },
		{ "DisplayName", "Translucency Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Scales how much contribution translucency makes to suppress history via the reactive mask. Higher values will make translucent materials less reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveHistoryTranslucencyLumaBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveHistoryTranslucencyLumaBias" },
		{ "DisplayName", "Translucency Luminance Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Biases the translucency contribution to suppress history via the reactive mask by the luminance of the transparency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDOFTranslucencyScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskPreDOFTranslucencyScale" },
		{ "DisplayName", "Pre Depth-of-Field Translucency Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Scales how much contribution pre-Depth-of-Field translucency color makes to the reactive mask. Higher values will make translucent materials less reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreDOFTranslucencyMax_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskPreDOFTranslucencyMax" },
		{ "DisplayName", "Pre Depth-of-Field Translucency Max/Average" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Toggle to determine whether to use the max(SceneColorPostDepthOfField - SceneColorPreDepthOfField) or length(SceneColorPostDepthOfField - SceneColorPreDepthOfField) to determine the contribution of Pre-Depth-of-Field translucency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveMaskDeferredDecalScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskDeferredDecalScale" },
		{ "DisplayName", "Deferred Decal Reactive Mask Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Range from 0.0 to 1.0 (Default 0.0), scales how much deferred decal values contribute to the reactive mask. Higher values will make translucent materials more reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveHistoryDeferredDecalScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveHistoryDeferredDecalScale" },
		{ "DisplayName", "Deferred Decal Reactive History Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Range from 0.0 to 1.0 (Default 0.0), scales how much deferred decal values contribute to supressing hitory. Higher values will make translucent materials more reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveMaskTAAResponsiveValue_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskTAAResponsiveValue" },
		{ "DisplayName", "Responsive TAA Reactive Mask Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Range from 0.0 to 1.0 (Default 0.0), value to write to reactive mask when pixels are marked in the stencil buffer as TAA Responsive. Higher values will make translucent materials more reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveHistoryTAAResponsiveValue_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveHistoryTAAResponsiveValue" },
		{ "DisplayName", "Responsive TAA Reactive Mask Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Range from 0.0 to 1.0 (Default 0.0), value to write to reactive history when pixels are marked in the stencil buffer as TAA Responsive. Higher values will make translucent materials more reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveMaskCustomStencilScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskCustomStencilScale" },
		{ "DisplayName", "Custom Stencil Reactive Mask Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Range from 0.0 to 1.0 (Default 0.0), scales how much customm stencil values contribute to the reactive mask. Higher values will make translucent materials more reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveHistoryCustomStencilScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveHistoryCustomStencilScale" },
		{ "DisplayName", "Custom Stencil Reactive History Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Range from 0.0 to 1.0 (Default 0.0), scales how much customm stencil values contribute to supressing hitory. Higher values will make translucent materials more reactive which can reduce smearing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomStencilMask_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.CustomStencilMask" },
		{ "DisplayName", "CustomS tencil Bit Mask" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "A bitmask 0-255 (0-0xff) used when accessing the custom stencil to read reactive mask values. Setting to 0 will disable use of the custom-depth/stencil buffer. Default is 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomStencilShift_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "31" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.CustomStencilShift" },
		{ "DisplayName", "Custom Stencil Bit Shift" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "ToolTip", "Bitshift to apply to the value read from the custom stencil when using it to provide reactive mask values. Default is 0." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bAutoExposure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExposure;
	static void NewProp_bEnabledInEditorViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledInEditorViewport;
	static void NewProp_bUseSSRExperimentalDenoiser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSSRExperimentalDenoiser;
	static void NewProp_bRHIBackend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRHIBackend;
	static void NewProp_bD3D12Backend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bD3D12Backend;
	static void NewProp_bFrameGenEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrameGenEnabled;
	static void NewProp_bCaptureDebugUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureDebugUI;
	static void NewProp_bUpdateGlobalFrameTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateGlobalFrameTime;
	static void NewProp_bModifySlateDeltaTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifySlateDeltaTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UIMode;
	static void NewProp_bUseDistortionTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistortionTexture;
	static void NewProp_bD3D12AsyncInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bD3D12AsyncInterpolation;
	static void NewProp_bD3D12AsyncPresent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bD3D12AsyncPresent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PaceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PaceMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QualityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HistoryFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeDither_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeDither;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
	static void NewProp_bAdjustMipBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustMipBias;
	static void NewProp_bForceVertexDeformationOutputsVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceVertexDeformationOutputsVelocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForceLandscapeHISMMobility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceLandscapeHISMMobility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityFactor;
	static void NewProp_bReactiveMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReactiveMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionLuminanceBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessMaxDistance;
	static void NewProp_bReactiveMaskRoughnessForceMaxDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReactiveMaskRoughnessForceMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencyBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencyLuminanceBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencyMaxDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReactiveShadingModelID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceReactiveMaterialValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveHistoryTranslucencyBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveHistoryTranslucencyLumaBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreDOFTranslucencyScale;
	static void NewProp_bPreDOFTranslucencyMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreDOFTranslucencyMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveMaskDeferredDecalScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveHistoryDeferredDecalScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveMaskTAAResponsiveValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveHistoryTAAResponsiveValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveMaskCustomStencilScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveHistoryCustomStencilScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomStencilMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomStencilShift;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFFXFSR3Settings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bAutoExposure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure = { "bAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoExposure_MetaData), NewProp_bAutoExposure_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bEnabledInEditorViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport = { "bEnabledInEditorViewport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledInEditorViewport_MetaData), NewProp_bEnabledInEditorViewport_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bUseSSRExperimentalDenoiser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser = { "bUseSSRExperimentalDenoiser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSSRExperimentalDenoiser_MetaData), NewProp_bUseSSRExperimentalDenoiser_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bRHIBackend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend = { "bRHIBackend", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRHIBackend_MetaData), NewProp_bRHIBackend_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bD3D12Backend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend = { "bD3D12Backend", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bD3D12Backend_MetaData), NewProp_bD3D12Backend_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bFrameGenEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled = { "bFrameGenEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrameGenEnabled_MetaData), NewProp_bFrameGenEnabled_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bCaptureDebugUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI = { "bCaptureDebugUI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureDebugUI_MetaData), NewProp_bCaptureDebugUI_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bUpdateGlobalFrameTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime = { "bUpdateGlobalFrameTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateGlobalFrameTime_MetaData), NewProp_bUpdateGlobalFrameTime_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bModifySlateDeltaTime_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bModifySlateDeltaTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bModifySlateDeltaTime = { "bModifySlateDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bModifySlateDeltaTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModifySlateDeltaTime_MetaData), NewProp_bModifySlateDeltaTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_UIMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_UIMode = { "UIMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, UIMode), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3FrameGenUIMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMode_MetaData), NewProp_UIMode_MetaData) }; // 3171022840
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseDistortionTexture_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bUseDistortionTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseDistortionTexture = { "bUseDistortionTexture", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseDistortionTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistortionTexture_MetaData), NewProp_bUseDistortionTexture_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bD3D12AsyncInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation = { "bD3D12AsyncInterpolation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bD3D12AsyncInterpolation_MetaData), NewProp_bD3D12AsyncInterpolation_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bD3D12AsyncPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent = { "bD3D12AsyncPresent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bD3D12AsyncPresent_MetaData), NewProp_bD3D12AsyncPresent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_PaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_PaceMode = { "PaceMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, PaceMode), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3PaceRHIFrameMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaceMode_MetaData), NewProp_PaceMode_MetaData) }; // 3104659678
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, QualityMode), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityMode_MetaData), NewProp_QualityMode_MetaData) }; // 768429268
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat = { "HistoryFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, HistoryFormat), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistoryFormat_MetaData), NewProp_HistoryFormat_MetaData) }; // 1616154203
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither = { "DeDither", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, DeDither), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeDither_MetaData), NewProp_DeDither_MetaData) }; // 1168129432
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, Sharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sharpness_MetaData), NewProp_Sharpness_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bAdjustMipBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias = { "bAdjustMipBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdjustMipBias_MetaData), NewProp_bAdjustMipBias_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bForceVertexDeformationOutputsVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity = { "bForceVertexDeformationOutputsVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceVertexDeformationOutputsVelocity_MetaData), NewProp_bForceVertexDeformationOutputsVelocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility = { "ForceLandscapeHISMMobility", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ForceLandscapeHISMMobility), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceLandscapeHISMMobility_MetaData), NewProp_ForceLandscapeHISMMobility_MetaData) }; // 2841187643
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_VelocityFactor = { "VelocityFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, VelocityFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityFactor_MetaData), NewProp_VelocityFactor_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bReactiveMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask = { "bReactiveMask", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReactiveMask_MetaData), NewProp_bReactiveMask_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionScale = { "ReflectionScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReflectionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionScale_MetaData), NewProp_ReflectionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionLuminanceBias = { "ReflectionLuminanceBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReflectionLuminanceBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionLuminanceBias_MetaData), NewProp_ReflectionLuminanceBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessScale = { "RoughnessScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, RoughnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoughnessScale_MetaData), NewProp_RoughnessScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessBias = { "RoughnessBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, RoughnessBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoughnessBias_MetaData), NewProp_RoughnessBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessMaxDistance = { "RoughnessMaxDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, RoughnessMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoughnessMaxDistance_MetaData), NewProp_RoughnessMaxDistance_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bReactiveMaskRoughnessForceMaxDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance = { "bReactiveMaskRoughnessForceMaxDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReactiveMaskRoughnessForceMaxDistance_MetaData), NewProp_bReactiveMaskRoughnessForceMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyBias = { "TranslucencyBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, TranslucencyBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencyBias_MetaData), NewProp_TranslucencyBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyLuminanceBias = { "TranslucencyLuminanceBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, TranslucencyLuminanceBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencyLuminanceBias_MetaData), NewProp_TranslucencyLuminanceBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyMaxDistance = { "TranslucencyMaxDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, TranslucencyMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencyMaxDistance_MetaData), NewProp_TranslucencyMaxDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveShadingModelID = { "ReactiveShadingModelID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveShadingModelID), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveShadingModelID_MetaData), NewProp_ReactiveShadingModelID_MetaData) }; // 1797132865
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceReactiveMaterialValue = { "ForceReactiveMaterialValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ForceReactiveMaterialValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceReactiveMaterialValue_MetaData), NewProp_ForceReactiveMaterialValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyBias = { "ReactiveHistoryTranslucencyBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveHistoryTranslucencyBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveHistoryTranslucencyBias_MetaData), NewProp_ReactiveHistoryTranslucencyBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyLumaBias = { "ReactiveHistoryTranslucencyLumaBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveHistoryTranslucencyLumaBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveHistoryTranslucencyLumaBias_MetaData), NewProp_ReactiveHistoryTranslucencyLumaBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_PreDOFTranslucencyScale = { "PreDOFTranslucencyScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, PreDOFTranslucencyScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDOFTranslucencyScale_MetaData), NewProp_PreDOFTranslucencyScale_MetaData) };
void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bPreDOFTranslucencyMax_SetBit(void* Obj)
{
	((UFFXFSR3Settings*)Obj)->bPreDOFTranslucencyMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bPreDOFTranslucencyMax = { "bPreDOFTranslucencyMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bPreDOFTranslucencyMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreDOFTranslucencyMax_MetaData), NewProp_bPreDOFTranslucencyMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveMaskDeferredDecalScale = { "ReactiveMaskDeferredDecalScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveMaskDeferredDecalScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveMaskDeferredDecalScale_MetaData), NewProp_ReactiveMaskDeferredDecalScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryDeferredDecalScale = { "ReactiveHistoryDeferredDecalScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveHistoryDeferredDecalScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveHistoryDeferredDecalScale_MetaData), NewProp_ReactiveHistoryDeferredDecalScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveMaskTAAResponsiveValue = { "ReactiveMaskTAAResponsiveValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveMaskTAAResponsiveValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveMaskTAAResponsiveValue_MetaData), NewProp_ReactiveMaskTAAResponsiveValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTAAResponsiveValue = { "ReactiveHistoryTAAResponsiveValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveHistoryTAAResponsiveValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveHistoryTAAResponsiveValue_MetaData), NewProp_ReactiveHistoryTAAResponsiveValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveMaskCustomStencilScale = { "ReactiveMaskCustomStencilScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveMaskCustomStencilScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveMaskCustomStencilScale_MetaData), NewProp_ReactiveMaskCustomStencilScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryCustomStencilScale = { "ReactiveHistoryCustomStencilScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveHistoryCustomStencilScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveHistoryCustomStencilScale_MetaData), NewProp_ReactiveHistoryCustomStencilScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_CustomStencilMask = { "CustomStencilMask", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, CustomStencilMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomStencilMask_MetaData), NewProp_CustomStencilMask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_CustomStencilShift = { "CustomStencilShift", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, CustomStencilShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomStencilShift_MetaData), NewProp_CustomStencilShift_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bModifySlateDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_UIMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_UIMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseDistortionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_PaceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_PaceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_Sharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_VelocityFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionLuminanceBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyLuminanceBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveShadingModelID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceReactiveMaterialValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyLumaBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_PreDOFTranslucencyScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bPreDOFTranslucencyMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveMaskDeferredDecalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryDeferredDecalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveMaskTAAResponsiveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTAAResponsiveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveMaskCustomStencilScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryCustomStencilScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_CustomStencilMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_CustomStencilShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFFXFSR3Settings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFFXFSR3Settings_Statics::ClassParams = {
	&UFFXFSR3Settings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFFXFSR3Settings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFFXFSR3Settings()
{
	if (!Z_Registration_Info_UClass_UFFXFSR3Settings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFFXFSR3Settings.OuterSingleton, Z_Construct_UClass_UFFXFSR3Settings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFFXFSR3Settings.OuterSingleton;
}
template<> FFXFSR3SETTINGS_API UClass* StaticClass<UFFXFSR3Settings>()
{
	return UFFXFSR3Settings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFFXFSR3Settings);
UFFXFSR3Settings::~UFFXFSR3Settings() {}
// End Class UFFXFSR3Settings

// Begin Registration
struct Z_CompiledInDeferFile_FID_FSR3_550_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFFXFSR3QualityMode_StaticEnum, TEXT("EFFXFSR3QualityMode"), &Z_Registration_Info_UEnum_EFFXFSR3QualityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 768429268U) },
		{ EFFXFSR3HistoryFormat_StaticEnum, TEXT("EFFXFSR3HistoryFormat"), &Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1616154203U) },
		{ EFFXFSR3DeDitherMode_StaticEnum, TEXT("EFFXFSR3DeDitherMode"), &Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1168129432U) },
		{ EFFXFSR3LandscapeHISMMode_StaticEnum, TEXT("EFFXFSR3LandscapeHISMMode"), &Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2841187643U) },
		{ EFFXFSR3FrameGenUIMode_StaticEnum, TEXT("EFFXFSR3FrameGenUIMode"), &Z_Registration_Info_UEnum_EFFXFSR3FrameGenUIMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3171022840U) },
		{ EFFXFSR3PaceRHIFrameMode_StaticEnum, TEXT("EFFXFSR3PaceRHIFrameMode"), &Z_Registration_Info_UEnum_EFFXFSR3PaceRHIFrameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3104659678U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFFXFSR3Settings, UFFXFSR3Settings::StaticClass, TEXT("UFFXFSR3Settings"), &Z_Registration_Info_UClass_UFFXFSR3Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFFXFSR3Settings), 3234615719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FSR3_550_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_444600711(TEXT("/Script/FFXFSR3Settings"),
	Z_CompiledInDeferFile_FID_FSR3_550_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FSR3_550_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FSR3_550_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FSR3_550_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
