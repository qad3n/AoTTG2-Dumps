using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200000F")]
[PostProcess(typeof(AmbientOcclusionRenderer), "Unity/Ambient Occlusion", true)]
public sealed class AmbientOcclusion : PostProcessEffectSettings
{
	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("The ambient occlusion method to use. \"Multi Scale Volumetric Obscurance\" is higher quality and faster on desktop & console platforms but requires compute shader support.")]
	public AmbientOcclusionModeParameter mode;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 4f)]
	[Tooltip("The degree of darkness added by ambient occlusion. Higher values produce darker areas.")]
	public FloatParameter intensity;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x40")]
	[ColorUsage(false)]
	[Tooltip("The custom color to use for the ambient occlusion. The default is black.")]
	public ColorParameter color;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Check this box to mark this Volume as to only affect ambient lighting. This mode is only available with the Deferred rendering path and HDR rendering. Objects rendered with the Forward rendering path won't get any ambient occlusion.")]
	public BoolParameter ambientOnly;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x50")]
	[Range(-8f, 0f)]
	public FloatParameter noiseFilterTolerance;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x58")]
	[Range(-8f, -1f)]
	public FloatParameter blurTolerance;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x60")]
	[Range(-12f, -1f)]
	public FloatParameter upsampleTolerance;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x68")]
	[Range(1f, 10f)]
	[Tooltip("This modifies the thickness of occluders. It increases the size of dark areas and also introduces a dark halo around objects.")]
	public FloatParameter thicknessModifier;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x70")]
	[Range(0f, 0.001f)]
	[Tooltip("Add a bias distance to sampled depth in AO to reduce self-shadowing aliasing artifacts. ")]
	public FloatParameter zBias;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x78")]
	[Range(0f, 1f)]
	[Tooltip("Modifies the influence of direct lighting on ambient occlusion.")]
	public FloatParameter directLightingStrength;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x80")]
	[Tooltip("The radius of sample points. This affects the size of darkened areas.")]
	public FloatParameter radius;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x88")]
	[Tooltip("The number of sample points. This affects both quality and performance. For \"Lowest\", \"Low\", and \"Medium\", passes are downsampled. For \"High\" and \"Ultra\", they are not and therefore you should only \"High\" and \"Ultra\" on high-end hardware.")]
	public AmbientOcclusionQualityParameter quality;

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x480D6C0", Offset = "0x480D6C0", VA = "0x480D6C0", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x480DAA0", Offset = "0x480DAA0", VA = "0x480DAA0")]
	public AmbientOcclusion()
	{
	}
}
