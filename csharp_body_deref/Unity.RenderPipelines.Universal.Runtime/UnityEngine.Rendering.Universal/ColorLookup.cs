// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ColorLookup
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000FC")]
[VolumeComponentMenu("Post-processing/Color Lookup")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class ColorLookup : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("A 2D Lookup Texture (LUT) to use for color grading.")]
	public TextureParameter texture;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("How much of the lookup texture will contribute to the color grading effect.")]
	public ClampedFloatParameter contribution;

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x2C56320", Offset = "0x2C54920", VA = "0x182C56320", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x2C56370", Offset = "0x2C54970", VA = "0x182C56370")]
	public bool ValidateLUT()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x2C56610", Offset = "0x2C54C10", VA = "0x182C56610")]
	public ColorLookup()
	{
	}
}
