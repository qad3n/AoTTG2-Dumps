// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptiveFramerate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000042")]
public class AdaptiveFramerate : AdaptivePerformanceScaler
{
	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x40")]
	private int m_DefaultFPS;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x44")]
	private int m_FirstTimeStart;

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x688FDB0", Offset = "0x688EDB0", VA = "0x688FDB0", Slot = "20")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x688FE50", Offset = "0x688EE50", VA = "0x688FE50", Slot = "25")]
	protected override void OnDisabled()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x688FEC0", Offset = "0x688EEC0", VA = "0x688FEC0", Slot = "24")]
	protected override void OnEnabled()
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x688FF30", Offset = "0x688EF30", VA = "0x688FF30", Slot = "21")]
	protected override void OnLevelIncrease()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x68900C0", Offset = "0x688F0C0", VA = "0x68900C0", Slot = "22")]
	protected override void OnLevelDecrease()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x6890180", Offset = "0x688F180", VA = "0x6890180")]
	public AdaptiveFramerate()
	{
	}
}
