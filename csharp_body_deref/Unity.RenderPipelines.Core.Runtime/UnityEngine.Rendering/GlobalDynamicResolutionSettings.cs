// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GlobalDynamicResolutionSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000082")]
public struct GlobalDynamicResolutionSettings
{
	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x0")]
	public bool enabled;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x1")]
	public bool useMipBias;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x2")]
	public bool enableDLSS;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x4")]
	public uint DLSSPerfQualitySetting;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x8")]
	public DynamicResolutionHandler.UpsamplerScheduleType DLSSInjectionPoint;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0xC")]
	public bool DLSSUseOptimalSettings;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x10")]
	[Range(0f, 1f)]
	public float DLSSSharpness;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x14")]
	public bool fsrOverrideSharpness;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x18")]
	[Range(0f, 1f)]
	public float fsrSharpness;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x1C")]
	public float maxPercentage;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x20")]
	public float minPercentage;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x24")]
	public DynamicResolutionType dynResType;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x25")]
	public DynamicResUpscaleFilter upsampleFilter;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x26")]
	public bool forceResolution;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x28")]
	public float forcedPercentage;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x2C")]
	public float lowResTransparencyMinimumThreshold;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x30")]
	public float rayTracingHalfResThreshold;

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4B981E0", Offset = "0x4B981E0", VA = "0x4B981E0")]
	public static GlobalDynamicResolutionSettings NewDefault()
	{
		return default(GlobalDynamicResolutionSettings);
	}
}
