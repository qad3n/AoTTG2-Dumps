using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200001A")]
[PostProcess(typeof(ChromaticAberrationRenderer), "Unity/Chromatic Aberration", true)]
public sealed class ChromaticAberration : PostProcessEffectSettings
{
	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Shifts the hue of chromatic aberrations.")]
	public TextureParameter spectralLut;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 1f)]
	[Tooltip("Amount of tangential distortion.")]
	public FloatParameter intensity;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x40")]
	[FormerlySerializedAs("mobileOptimized")]
	[Tooltip("Boost performances by lowering the effect quality. This settings is meant to be used on mobile and other low-end platforms but can also provide a nice performance boost on desktops and consoles.")]
	public BoolParameter fastMode;

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x48110C0", Offset = "0x48110C0", VA = "0x48110C0", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4811100", Offset = "0x4811100", VA = "0x4811100")]
	public ChromaticAberration()
	{
	}
}
