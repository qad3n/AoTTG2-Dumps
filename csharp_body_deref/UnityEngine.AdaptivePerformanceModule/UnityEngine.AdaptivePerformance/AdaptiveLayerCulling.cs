// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptiveLayerCulling
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000043")]
public class AdaptiveLayerCulling : AdaptivePerformanceScaler
{
	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x40")]
	private float[] m_defaultDistances;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x48")]
	private float[] m_scaledDistances;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x50")]
	private bool init;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x58")]
	private Camera m_cachedCamera;

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x2E819A0", Offset = "0x2E7FFA0", VA = "0x182E819A0", Slot = "20")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x2E81A40", Offset = "0x2E80040", VA = "0x182E81A40", Slot = "25")]
	protected override void OnDisabled()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x2E81AD0", Offset = "0x2E800D0", VA = "0x182E81AD0", Slot = "24")]
	protected override void OnEnabled()
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x2E81AE0", Offset = "0x2E800E0", VA = "0x182E81AE0", Slot = "23")]
	protected override void OnLevel()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x2E81880", Offset = "0x2E7FE80", VA = "0x182E81880")]
	private void AsignDefaultValues()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x2E81C20", Offset = "0x2E80220", VA = "0x182E81C20")]
	public AdaptiveLayerCulling()
	{
	}
}
