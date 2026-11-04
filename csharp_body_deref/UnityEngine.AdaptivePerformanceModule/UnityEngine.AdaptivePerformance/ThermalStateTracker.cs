// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.ThermalStateTracker
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000018")]
internal class ThermalStateTracker
{
	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x10")]
	private float warningTemp;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x14")]
	private float throttlingTemp;

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2E93770", Offset = "0x2E91D70", VA = "0x182E93770")]
	public ThermalStateTracker()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2E932F0", Offset = "0x2E918F0", VA = "0x182E932F0")]
	public StateAction Update()
	{
		return default(StateAction);
	}
}
