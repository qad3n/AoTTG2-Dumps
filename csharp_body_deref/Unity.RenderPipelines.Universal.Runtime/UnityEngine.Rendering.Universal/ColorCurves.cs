// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ColorCurves
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000FB")]
[VolumeComponentMenu("Post-processing/Color Curves")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class ColorCurves : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Affects the luminance across the whole image.")]
	public TextureCurveParameter master;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Affects the red channel intensity across the whole image.")]
	public TextureCurveParameter red;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Affects the green channel intensity across the whole image.")]
	public TextureCurveParameter green;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Affects the blue channel intensity across the whole image.")]
	public TextureCurveParameter blue;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Shifts the input hue (x-axis) according to the output hue (y-axis).")]
	public TextureCurveParameter hueVsHue;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("Adjusts saturation (y-axis) according to the input hue (x-axis).")]
	public TextureCurveParameter hueVsSat;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("Adjusts saturation (y-axis) according to the input saturation (x-axis).")]
	public TextureCurveParameter satVsSat;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("Adjusts saturation (y-axis) according to the input luminance (x-axis).")]
	public TextureCurveParameter lumVsSat;

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x2C55B90", Offset = "0x2C54190", VA = "0x182C55B90")]
	public ColorCurves()
	{
	}
}
