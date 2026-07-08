using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000081")]
public enum DynamicResUpscaleFilter : byte
{
	[Token(Token = "0x4000200")]
	[Obsolete("Bilinear upscale filter is considered obsolete and is not supported anymore, please use CatmullRom for a very cheap, but blurry filter.", false)]
	Bilinear,
	[Token(Token = "0x4000201")]
	CatmullRom,
	[Token(Token = "0x4000202")]
	[Obsolete("Lanczos upscale filter is considered obsolete and is not supported anymore, please use Contrast Adaptive Sharpening for very sharp filter or FidelityFX Super Resolution 1.0.", false)]
	Lanczos,
	[Token(Token = "0x4000203")]
	ContrastAdaptiveSharpen,
	[Token(Token = "0x4000204")]
	[InspectorName("FidelityFX Super Resolution 1.0")]
	EdgeAdaptiveScalingUpres,
	[Token(Token = "0x4000205")]
	[InspectorName("TAA Upscale")]
	TAAU
}
