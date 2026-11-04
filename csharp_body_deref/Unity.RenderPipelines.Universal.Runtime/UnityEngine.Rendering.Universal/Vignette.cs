// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Vignette
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000117")]
[VolumeComponentMenu("Post-processing/Vignette")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class Vignette : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Vignette color.")]
	public ColorParameter color;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Sets the vignette center point (screen center is [0.5,0.5]).")]
	public Vector2Parameter center;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Use the slider to set the strength of the Vignette effect.")]
	public ClampedFloatParameter intensity;

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Smoothness of the vignette borders.")]
	public ClampedFloatParameter smoothness;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Should the vignette be perfectly round or be dependent on the current aspect ratio?")]
	public BoolParameter rounded;

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x2C19050", Offset = "0x2C17650", VA = "0x182C19050", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x2C6FCC0", Offset = "0x2C6E2C0", VA = "0x182C6FCC0")]
	public Vignette()
	{
	}
}
