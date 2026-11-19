// ==================== AoTTG2 cross-reference ====================
// Type: System.WindowsConsoleDriver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001BF")]
internal class WindowsConsoleDriver : System.IConsoleDriver
{
	[Token(Token = "0x40008B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr inputHandle;

	[Token(Token = "0x40008B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr outputHandle;

	[Token(Token = "0x40008B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private short defaultAttribute;

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x5521050", Offset = "0x5520050", VA = "0x5521050")]
	public WindowsConsoleDriver()
	{
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x5521310", Offset = "0x5520310", VA = "0x5521310", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x5521610", Offset = "0x5520610", VA = "0x5521610")]
	private static bool IsModifierKey(short virtualKeyCode)
	{
		return default(bool);
	}

	[PreserveSig]
	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x5521200", Offset = "0x5520200", VA = "0x5521200")]
	private static extern IntPtr GetStdHandle(System.Handles handle);

	[PreserveSig]
	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x5521280", Offset = "0x5520280", VA = "0x5521280")]
	private static extern bool GetConsoleScreenBufferInfo(IntPtr handle, out System.ConsoleScreenBufferInfo info);

	[PreserveSig]
	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x5521510", Offset = "0x5520510", VA = "0x5521510")]
	private static extern bool ReadConsoleInput(IntPtr handle, out System.InputRecord record, int length, out int nread);
}
