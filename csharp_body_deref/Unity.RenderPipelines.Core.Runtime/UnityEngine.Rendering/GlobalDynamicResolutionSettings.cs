// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GlobalDynamicResolutionSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200004C")]
public struct GlobalDynamicResolutionSettings
{
	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x0")]
	public bool enabled;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x1")]
	public bool useMipBias;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x8")]
	[Obsolete("Obsolete, use advancedUpscalerNames list instead.")]
	public List<AdvancedUpscalers> advancedUpscalersByPriority;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x10")]
	public List<string> advancedUpscalerNames;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x18")]
	public uint DLSSPerfQualitySetting;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x1C")]
	public DynamicResolutionHandler.UpsamplerScheduleType DLSSInjectionPoint;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x20")]
	public DynamicResolutionHandler.UpsamplerScheduleType TAAUInjectionPoint;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x24")]
	public DynamicResolutionHandler.UpsamplerScheduleType STPInjectionPoint;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x28")]
	public DynamicResolutionHandler.UpsamplerScheduleType defaultInjectionPoint;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x2C")]
	public bool DLSSUseOptimalSettings;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 1f)]
	public float DLSSSharpness;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x34")]
	public uint DLSSRenderPresetForQuality;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x38")]
	public uint DLSSRenderPresetForBalanced;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x3C")]
	public uint DLSSRenderPresetForPerformance;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x40")]
	public uint DLSSRenderPresetForUltraPerformance;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x44")]
	public uint DLSSRenderPresetForDLAA;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x48")]
	public bool FSR2EnableSharpness;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x4C")]
	[Range(0f, 1f)]
	public float FSR2Sharpness;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x50")]
	public bool FSR2UseOptimalSettings;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x54")]
	public uint FSR2QualitySetting;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x58")]
	public DynamicResolutionHandler.UpsamplerScheduleType FSR2InjectionPoint;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x5C")]
	public bool fsrOverrideSharpness;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x60")]
	[Range(0f, 1f)]
	public float fsrSharpness;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x64")]
	public float maxPercentage;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x68")]
	public float minPercentage;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x6C")]
	public DynamicResolutionType dynResType;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x6D")]
	public DynamicResUpscaleFilter upsampleFilter;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x6E")]
	public bool forceResolution;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x70")]
	public float forcedPercentage;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x74")]
	public float lowResTransparencyMinimumThreshold;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x78")]
	public float rayTracingHalfResThreshold;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x7C")]
	public float lowResSSGIMinimumThreshold;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x80")]
	public float lowResVolumetricCloudsMinimumThreshold;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x84")]
	[Obsolete("Obsolete, used only for data migration. Use the advancedUpscalersByPriority list instead to add the proper supported advanced upscaler by priority. #from(2023.3)")]
	public bool enableDLSS;

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x2AE2E70", Offset = "0x2AE1470", VA = "0x182AE2E70")]
	public static GlobalDynamicResolutionSettings NewDefault()
	{
		return default(GlobalDynamicResolutionSettings);
	}
}
