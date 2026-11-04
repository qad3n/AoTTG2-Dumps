// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.FilmGrain
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000101")]
[VolumeComponentMenu("Post-processing/Film Grain")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class FilmGrain : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("The type of grain to use. You can select a preset or provide your own texture by selecting Custom.")]
	public FilmGrainLookupParameter type;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Use the slider to set the strength of the Film Grain effect.")]
	public ClampedFloatParameter intensity;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Controls the noisiness response curve based on scene luminance. Higher values mean less noise in light areas.")]
	public ClampedFloatParameter response;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("A tileable texture to use for the grain. The neutral value is 0.5 where no grain is applied.")]
	public NoInterpTextureParameter texture;

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x2C57F80", Offset = "0x2C56580", VA = "0x182C57F80", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x2C58050", Offset = "0x2C56650", VA = "0x182C58050")]
	public FilmGrain()
	{
	}
}
