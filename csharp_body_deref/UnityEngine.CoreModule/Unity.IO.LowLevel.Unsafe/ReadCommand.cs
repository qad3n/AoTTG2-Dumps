// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.ReadCommand
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x200003B")]
public struct ReadCommand
{
	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x0")]
	public unsafe void* Buffer;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x8")]
	public long Offset;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x10")]
	public long Size;
}
