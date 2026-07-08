using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001BA")]
internal struct ConsoleScreenBufferInfo
{
	[Token(Token = "0x40008E8")]
	[FieldOffset(Offset = "0x0")]
	public System.Coord Size;

	[Token(Token = "0x40008E9")]
	[FieldOffset(Offset = "0x4")]
	public System.Coord CursorPosition;

	[Token(Token = "0x40008EA")]
	[FieldOffset(Offset = "0x8")]
	public short Attribute;

	[Token(Token = "0x40008EB")]
	[FieldOffset(Offset = "0xA")]
	public System.SmallRect Window;

	[Token(Token = "0x40008EC")]
	[FieldOffset(Offset = "0x12")]
	public System.Coord MaxWindowSize;
}
