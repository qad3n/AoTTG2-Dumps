// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PaniniProjection
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C55830", Offset = "0x2C53E30", VA = "0x182C55830", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x2C5DF60", Offset = "0x2C5C560", VA = "0x182C5DF60")]
	public PaniniProjection()
	{
	}
}
