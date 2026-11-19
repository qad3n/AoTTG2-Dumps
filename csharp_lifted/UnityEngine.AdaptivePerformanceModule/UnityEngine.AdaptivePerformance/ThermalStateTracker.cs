// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.ThermalStateTracker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200002A")]
internal class ThermalStateTracker
{
	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x10")]
	private float warningTemp;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x14")]
	private float throttlingTemp;

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x6886540", Offset = "0x6885540", VA = "0x6886540")]
	public ThermalStateTracker()
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x6886560", Offset = "0x6885560", VA = "0x6886560")]
	public StateAction Update()
	{
		return default(StateAction);
	}
}
