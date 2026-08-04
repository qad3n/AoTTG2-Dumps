// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Grain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200002B")]
[PostProcess(typeof(GrainRenderer), "Unity/Grain", true)]
public sealed class Grain : PostProcessEffectSettings
{
	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Enable the use of colored grain.")]
	public BoolParameter colored;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 1f)]
	[Tooltip("Grain strength. Higher values mean more visible grain.")]
	public FloatParameter intensity;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x40")]
	[Range(0.3f, 3f)]
	[Tooltip("Grain particle size.")]
	public FloatParameter size;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x48")]
	[Range(0f, 1f)]
	[DisplayName("Luminance Contribution")]
	[Tooltip("Controls the noise response curve based on scene luminance. Lower values mean less noise in dark areas.")]
	public FloatParameter lumContrib;

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4B3C970", Offset = "0x4B3C970", VA = "0x4B3C970", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4B3C9B0", Offset = "0x4B3C9B0", VA = "0x4B3C9B0")]
	public Grain()
	{
	}
}
