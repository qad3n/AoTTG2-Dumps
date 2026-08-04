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
	[Address(RVA = "0x3D1DE40", Offset = "0x3D1DE40", VA = "0x3D1DE40")]
	public WindowsConsoleDriver()
	{
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x3D1E100", Offset = "0x3D1E100", VA = "0x3D1E100", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x3D1E400", Offset = "0x3D1E400", VA = "0x3D1E400")]
	private static bool IsModifierKey(short virtualKeyCode)
	{
		return default(bool);
	}

	[PreserveSig]
	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x3D1DFF0", Offset = "0x3D1DFF0", VA = "0x3D1DFF0")]
	private static extern IntPtr GetStdHandle(System.Handles handle);

	[PreserveSig]
	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x3D1E070", Offset = "0x3D1E070", VA = "0x3D1E070")]
	private static extern bool GetConsoleScreenBufferInfo(IntPtr handle, out System.ConsoleScreenBufferInfo info);

	[PreserveSig]
	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x3D1E300", Offset = "0x3D1E300", VA = "0x3D1E300")]
	private static extern bool ReadConsoleInput(IntPtr handle, out System.InputRecord record, int length, out int nread);
}
