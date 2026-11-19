// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PaniniProjection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x200010A")]
[VolumeComponentMenu("Post-processing/Panini Projection")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class PaniniProjection : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Panini projection distance.")]
	public ClampedFloatParameter distance;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Panini projection crop to fit.")]
	public ClampedFloatParameter cropToFit;

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x664BBF0", Offset = "0x664ABF0", VA = "0x664BBF0", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x664BC20", Offset = "0x664AC20", VA = "0x664BC20", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x664BC30", Offset = "0x664AC30", VA = "0x664BC30")]
	public PaniniProjection()
	{
	}
}
