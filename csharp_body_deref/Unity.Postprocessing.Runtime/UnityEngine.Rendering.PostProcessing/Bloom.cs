// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Bloom
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Bloom.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000016")]
[PostProcess(typeof(BloomRenderer), "Unity/Bloom", true)]
public sealed class Bloom : PostProcessEffectSettings
{
	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x30")]
	[Min(0f)]
	[Tooltip("Strength of the bloom filter. Values higher than 1 will make bloom contribute more energy to the final render.")]
	public FloatParameter intensity;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x38")]
	[Min(0f)]
	[Tooltip("Filters out pixels under this level of brightness. Value is in gamma-space.")]
	public FloatParameter threshold;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x40")]
	[Range(0f, 1f)]
	[Tooltip("Makes transitions between under/over-threshold gradual. 0 for a hard threshold, 1 for a soft threshold).")]
	public FloatParameter softKnee;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Clamps pixels to control the bloom amount. Value is in gamma-space.")]
	public FloatParameter clamp;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x50")]
	[Range(1f, 10f)]
	[Tooltip("Changes the extent of veiling effects. For maximum quality, use integer values. Because this value changes the internal iteration count, You should not animating it as it may introduce issues with the perceived radius.")]
	public FloatParameter diffusion;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x58")]
	[Range(-1f, 1f)]
	[Tooltip("Distorts the bloom to give an anamorphic look. Negative values distort vertically, positive values distort horizontally.")]
	public FloatParameter anamorphicRatio;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x60")]
	[ColorUsage(false, true)]
	[Tooltip("Global tint of the bloom filter.")]
	public ColorParameter color;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x68")]
	[FormerlySerializedAs("mobileOptimized")]
	[Tooltip("Boost performance by lowering the effect quality. This settings is meant to be used on mobile and other low-end platforms but can also provide a nice performance boost on desktops and consoles.")]
	public BoolParameter fastMode;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("The lens dirt texture used to add smudges or dust to the bloom effect.")]
	[DisplayName("Texture")]
	public TextureParameter dirtTexture;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x78")]
	[Min(0f)]
	[Tooltip("The intensity of the lens dirtiness.")]
	[DisplayName("Intensity")]
	public FloatParameter dirtIntensity;

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4B34AB0", Offset = "0x4B34AB0", VA = "0x4B34AB0", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B34AF0", Offset = "0x4B34AF0", VA = "0x4B34AF0")]
	public Bloom()
	{
	}
}
