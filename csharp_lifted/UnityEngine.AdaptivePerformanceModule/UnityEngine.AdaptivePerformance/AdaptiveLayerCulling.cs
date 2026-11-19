// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptiveLayerCulling
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000044")]
public class AdaptiveLayerCulling : AdaptivePerformanceScaler
{
	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x40")]
	private float[] m_defaultDistances;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x48")]
	private float[] m_scaledDistances;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x50")]
	private bool init;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x58")]
	private Camera m_cachedCamera;

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x68903A0", Offset = "0x688F3A0", VA = "0x68903A0", Slot = "20")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x6890440", Offset = "0x688F440", VA = "0x6890440", Slot = "25")]
	protected override void OnDisabled()
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x68904D0", Offset = "0x688F4D0", VA = "0x68904D0", Slot = "24")]
	protected override void OnEnabled()
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x6890600", Offset = "0x688F600", VA = "0x6890600", Slot = "23")]
	protected override void OnLevel()
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x68904E0", Offset = "0x688F4E0", VA = "0x68904E0")]
	private void AsignDefaultValues()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x6890800", Offset = "0x688F800", VA = "0x6890800")]
	public AdaptiveLayerCulling()
	{
	}
}
