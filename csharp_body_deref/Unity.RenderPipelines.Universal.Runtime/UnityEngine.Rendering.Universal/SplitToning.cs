// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.SplitToning
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x200010F")]
[VolumeComponentMenu("Post-processing/Split Toning")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class SplitToning : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("The color to use for shadows.")]
	public ColorParameter shadows;

	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("The color to use for highlights.")]
	public ColorParameter highlights;

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Balance between the colors in the highlights and shadows.")]
	public ClampedFloatParameter balance;

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x2C6E610", Offset = "0x2C6CC10", VA = "0x182C6E610", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x2C6E6B0", Offset = "0x2C6CCB0", VA = "0x182C6E6B0")]
	public SplitToning()
	{
	}
}
