// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShadowsMidtonesHighlights
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x200010E")]
[VolumeComponentMenu("Post-processing/Shadows, Midtones, Highlights")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class ShadowsMidtonesHighlights : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x38")]
	public Vector4Parameter shadows;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x40")]
	public Vector4Parameter midtones;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x48")]
	public Vector4Parameter highlights;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x50")]
	[Header("Shadow Limits")]
	[Tooltip("Start point of the transition between shadows and midtones.")]
	public MinFloatParameter shadowsStart;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("End point of the transition between shadows and midtones.")]
	public MinFloatParameter shadowsEnd;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x60")]
	[Header("Highlight Limits")]
	[Tooltip("Start point of the transition between midtones and highlights.")]
	public MinFloatParameter highlightsStart;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("End point of the transition between midtones and highlights.")]
	public MinFloatParameter highlightsEnd;

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x2C6E280", Offset = "0x2C6C880", VA = "0x182C6E280", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x2C6E330", Offset = "0x2C6C930", VA = "0x182C6E330")]
	public ShadowsMidtonesHighlights()
	{
	}
}
