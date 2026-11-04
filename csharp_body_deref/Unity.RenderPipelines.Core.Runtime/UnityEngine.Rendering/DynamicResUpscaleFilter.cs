// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DynamicResUpscaleFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200004A")]
public enum DynamicResUpscaleFilter : byte
{
	[Token(Token = "0x400010C")]
	[Obsolete("Bilinear upscale filter is considered obsolete and is not supported anymore, please use CatmullRom for a very cheap, but blurry filter. #from(2022.1)")]
	Bilinear,
	[Token(Token = "0x400010D")]
	CatmullRom,
	[Token(Token = "0x400010E")]
	[Obsolete("Lanczos upscale filter is considered obsolete and is not supported anymore, please use Contrast Adaptive Sharpening for very sharp filter or FidelityFX Super Resolution 1.0. #from(2022.1)")]
	Lanczos,
	[Token(Token = "0x400010F")]
	ContrastAdaptiveSharpen,
	[Token(Token = "0x4000110")]
	[InspectorName("FidelityFX Super Resolution 1.0")]
	EdgeAdaptiveScalingUpres,
	[Token(Token = "0x4000111")]
	[InspectorName("TAA Upscale")]
	TAAU
}
