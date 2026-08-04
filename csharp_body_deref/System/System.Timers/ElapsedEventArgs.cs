// ==================== AoTTG2 cross-reference ====================
// Type: System.Timers.ElapsedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Timers;

[Token(Token = "0x200009C")]
public class ElapsedEventArgs : EventArgs
{
	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x10")]
	private DateTime time;

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x4901550", Offset = "0x4901550", VA = "0x4901550")]
	internal ElapsedEventArgs(DateTime time)
	{
	}
}
