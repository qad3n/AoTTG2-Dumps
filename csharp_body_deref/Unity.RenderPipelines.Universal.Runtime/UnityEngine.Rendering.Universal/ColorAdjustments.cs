// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ColorAdjustments
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000FA")]
[VolumeComponentMenu("Post-processing/Color Adjustments")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class ColorAdjustments : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Adjusts the overall exposure of the scene in EV100. This is applied after HDR effect and right before tonemapping so it won't affect previous effects in the chain.")]
	public FloatParameter postExposure;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Expands or shrinks the overall range of tonal values.")]
	public ClampedFloatParameter contrast;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Tint the render by multiplying a color.")]
	public ColorParameter colorFilter;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Shift the hue of all colors.")]
	public ClampedFloatParameter hueShift;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Pushes the intensity of all colors.")]
	public ClampedFloatParameter saturation;

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x2C558F0", Offset = "0x2C53EF0", VA = "0x182C558F0", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x2C559E0", Offset = "0x2C53FE0", VA = "0x182C559E0")]
	public ColorAdjustments()
	{
	}
}
