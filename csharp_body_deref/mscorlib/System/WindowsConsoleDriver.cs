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

[Token(Token = "0x20001E7")]
internal class WindowsConsoleDriver : System.IConsoleDriver
{
	[Token(Token = "0x4000955")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr inputHandle;

	[Token(Token = "0x4000956")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr outputHandle;

	[Token(Token = "0x4000957")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private short defaultAttribute;

	[Token(Token = "0x6001109")]
	[Address(RVA = "0x1BA9BD0", Offset = "0x1BA81D0", VA = "0x181BA9BD0")]
	public WindowsConsoleDriver()
	{
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x1BA99C0", Offset = "0x1BA7FC0", VA = "0x181BA99C0", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x1BA9880", Offset = "0x1BA7E80", VA = "0x181BA9880")]
	private static bool IsModifierKey(short virtualKeyCode)
	{
		return default(bool);
	}

	[PreserveSig]
	[Token(Token = "0x600110C")]
	[Address(RVA = "0x1BA97F0", Offset = "0x1BA7DF0", VA = "0x181BA97F0")]
	private static extern IntPtr GetStdHandle(System.Handles handle);

	[PreserveSig]
	[Token(Token = "0x600110D")]
	[Address(RVA = "0x1BA9750", Offset = "0x1BA7D50", VA = "0x181BA9750")]
	private static extern bool GetConsoleScreenBufferInfo(IntPtr handle, out System.ConsoleScreenBufferInfo info);

	[PreserveSig]
	[Token(Token = "0x600110E")]
	[Address(RVA = "0x1BA98B0", Offset = "0x1BA7EB0", VA = "0x181BA98B0")]
	private static extern bool ReadConsoleInput(IntPtr handle, out System.InputRecord record, int length, out int nread);
}
