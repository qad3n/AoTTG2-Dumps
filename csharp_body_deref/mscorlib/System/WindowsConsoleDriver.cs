using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001BC")]
internal class WindowsConsoleDriver : System.IConsoleDriver
{
	[Token(Token = "0x40008F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr inputHandle;

	[Token(Token = "0x40008F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr outputHandle;

	[Token(Token = "0x40008F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private short defaultAttribute;

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x5038320", Offset = "0x5038320", VA = "0x5038320")]
	public WindowsConsoleDriver()
	{
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x50385E0", Offset = "0x50385E0", VA = "0x50385E0", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x50388E0", Offset = "0x50388E0", VA = "0x50388E0")]
	private static bool IsModifierKey(short virtualKeyCode)
	{
		return default(bool);
	}

	[PreserveSig]
	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x50384D0", Offset = "0x50384D0", VA = "0x50384D0")]
	private static extern IntPtr GetStdHandle(System.Handles handle);

	[PreserveSig]
	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x5038550", Offset = "0x5038550", VA = "0x5038550")]
	private static extern bool GetConsoleScreenBufferInfo(IntPtr handle, out System.ConsoleScreenBufferInfo info);

	[PreserveSig]
	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x50387E0", Offset = "0x50387E0", VA = "0x50387E0")]
	private static extern bool ReadConsoleInput(IntPtr handle, out System.InputRecord record, int length, out int nread);
}
