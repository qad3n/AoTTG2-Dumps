// ==================== AoTTG2 cross-reference ====================
// Type: System.Timers.ElapsedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Timers;

[Token(Token = "0x20000DB")]
public class ElapsedEventArgs : EventArgs
{
	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x10")]
	private DateTime time;

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x284A820", Offset = "0x2848E20", VA = "0x18284A820")]
	internal ElapsedEventArgs(DateTime time)
	{
	}
}
