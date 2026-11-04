// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptiveFramerate
// Update status: NEW in this game update
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
	[Address(RVA = "0x2E81360", Offset = "0x2E7F960", VA = "0x182E81360", Slot = "20")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x2E81400", Offset = "0x2E7FA00", VA = "0x182E81400", Slot = "25")]
	protected override void OnDisabled()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x2E81460", Offset = "0x2E7FA60", VA = "0x182E81460", Slot = "24")]
	protected override void OnEnabled()
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x2E815A0", Offset = "0x2E7FBA0", VA = "0x182E815A0", Slot = "21")]
	protected override void OnLevelIncrease()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x2E814E0", Offset = "0x2E7FAE0", VA = "0x182E814E0", Slot = "22")]
	protected override void OnLevelDecrease()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x2E816E0", Offset = "0x2E7FCE0", VA = "0x182E816E0")]
	public AdaptiveFramerate()
	{
	}
}
