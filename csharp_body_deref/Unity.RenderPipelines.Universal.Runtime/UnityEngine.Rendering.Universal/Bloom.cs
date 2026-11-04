// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Bloom
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Bloom.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000B0")]
[VolumeComponentMenu("Post-processing/Bloom")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class Bloom : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x38")]
	[Obsolete("This is obsolete, please use maxIterations instead. #from(2022.2) #breakingFrom(2023.1)", true)]
	[Tooltip("The number of final iterations to skip in the effect processing sequence.")]
	public ClampedIntParameter skipIterations;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x40")]
	[Header("Bloom")]
	[Tooltip("Filters out pixels under this level of brightness. Value is in gamma-space.")]
	public MinFloatParameter threshold;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Strength of the bloom filter.")]
	public MinFloatParameter intensity;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Set the radius of the bloom effect.")]
	public ClampedFloatParameter scatter;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Set the maximum intensity that Unity uses to calculate Bloom. If pixels in your Scene are more intense than this, URP renders them at their current intensity, but uses this intensity value for the purposes of Bloom calculations.")]
	public MinFloatParameter clamp;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("Use the color picker to select a color for the Bloom effect to tint to.")]
	public ColorParameter tint;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("Use bicubic sampling instead of bilinear sampling for the upsampling passes. This is slightly more expensive but helps getting smoother visuals.")]
	public BoolParameter highQualityFiltering;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("Set the filtering algorithm for the Bloom effect.")]
	public BloomFilterModeParameter filter;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x78")]
	[Tooltip("The starting resolution that this effect begins processing.")]
	[AdditionalProperty]
	public DownscaleParameter downscale;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x80")]
	[Tooltip("The maximum number of iterations in the effect processing sequence.")]
	[AdditionalProperty]
	public ClampedIntParameter maxIterations;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x88")]
	[Header("Lens Dirt")]
	[Tooltip("Dirtiness texture to add smudges or dust to the bloom effect.")]
	public TextureParameter dirtTexture;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x90")]
	[Tooltip("Amount of dirtiness.")]
	public MinFloatParameter dirtIntensity;

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x2C19050", Offset = "0x2C17650", VA = "0x182C19050", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x2C19090", Offset = "0x2C17690", VA = "0x182C19090")]
	public Bloom()
	{
	}
}
