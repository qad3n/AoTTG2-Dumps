// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.ReadCommandArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x200003C")]
public struct ReadCommandArray
{
	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x0")]
	public unsafe ReadCommand* ReadCommands;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x8")]
	public int CommandCount;
}
