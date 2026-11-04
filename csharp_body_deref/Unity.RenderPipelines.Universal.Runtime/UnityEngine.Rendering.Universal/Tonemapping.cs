// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Tonemapping
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Tonemapping.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000113")]
[VolumeComponentMenu("Post-processing/Tonemapping")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class Tonemapping : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x400060F")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Select a tonemapping algorithm to use for the color grading process.")]
	public TonemappingModeParameter mode;

	[Token(Token = "0x4000610")]
	[FieldOffset(Offset = "0x40")]
	[AdditionalProperty]
	[Tooltip("Specifies the range reduction mode used when HDR output is enabled and Neutral tonemapping is enabled.")]
	public NeutralRangeReductionModeParameter neutralHDRRangeReductionMode;

	[Token(Token = "0x4000611")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Use the ACES preset for HDR displays.")]
	public HDRACESPresetParameter acesPreset;

	[Token(Token = "0x4000612")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Specify how much hue to preserve. Values closer to 0 are likely to preserve hue. As values get closer to 1, Unity doesn't correct hue shifts.")]
	public ClampedFloatParameter hueShiftAmount;

	[Token(Token = "0x4000613")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Enable to use values detected from the output device as paper white. When enabled, output images might differ between SDR and HDR. For best accuracy, set this value manually.")]
	public BoolParameter detectPaperWhite;

	[Token(Token = "0x4000614")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("The reference brightness of a paper white surface. This property determines the maximum brightness of UI. The brightness of the scene is scaled relative to this value. The value is in nits.")]
	public ClampedFloatParameter paperWhite;

	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("Enable to use the minimum and maximum brightness values detected from the output device. For best accuracy, considering calibrating these values manually.")]
	public BoolParameter detectBrightnessLimits;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("The minimum brightness of the screen (in nits). This value is assumed to be 0.005f with ACES Tonemap.")]
	public ClampedFloatParameter minNits;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x78")]
	[Tooltip("The maximum brightness of the screen (in nits). This value is defined by the preset when using ACES Tonemap.")]
	public ClampedFloatParameter maxNits;

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x2C6E860", Offset = "0x2C6CE60", VA = "0x182C6E860", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x2C6E890", Offset = "0x2C6CE90", VA = "0x182C6E890")]
	public Tonemapping()
	{
	}
}
