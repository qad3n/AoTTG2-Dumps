// ==================== AoTTG2 cross-reference ====================
// Type: System.InputRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001B7")]
internal struct InputRecord
{
	[Token(Token = "0x40008D9")]
	[FieldOffset(Offset = "0x0")]
	public short EventType;

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x2")]
	public bool KeyDown;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x4")]
	public short RepeatCount;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x6")]
	public short VirtualKeyCode;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x8")]
	public short VirtualScanCode;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0xA")]
	public char Character;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0xC")]
	public int ControlKeyState;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x10")]
	private int pad1;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x14")]
	private bool pad2;
}
