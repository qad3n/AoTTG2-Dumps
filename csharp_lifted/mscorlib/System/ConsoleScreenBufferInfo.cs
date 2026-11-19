// ==================== AoTTG2 cross-reference ====================
// Type: System.ConsoleScreenBufferInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001BD")]
internal struct ConsoleScreenBufferInfo
{
	[Token(Token = "0x40008AA")]
	[FieldOffset(Offset = "0x0")]
	public System.Coord Size;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0x4")]
	public System.Coord CursorPosition;

	[Token(Token = "0x40008AC")]
	[FieldOffset(Offset = "0x8")]
	public short Attribute;

	[Token(Token = "0x40008AD")]
	[FieldOffset(Offset = "0xA")]
	public System.SmallRect Window;

	[Token(Token = "0x40008AE")]
	[FieldOffset(Offset = "0x12")]
	public System.Coord MaxWindowSize;
}
