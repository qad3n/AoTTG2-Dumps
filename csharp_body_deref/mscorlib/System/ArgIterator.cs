// ==================== AoTTG2 cross-reference ====================
// Type: System.ArgIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x200017E")]
public struct ArgIterator
{
	[Token(Token = "0x4000638")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr sig;

	[Token(Token = "0x4000639")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr args;

	[Token(Token = "0x400063A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int next_arg;

	[Token(Token = "0x400063B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int num_args;

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x550B8E0", Offset = "0x550A8E0", VA = "0x550B8E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x550B930", Offset = "0x550A930", VA = "0x550B930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
