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
[Token(Token = "0x20001A6")]
public struct ArgIterator
{
	[Token(Token = "0x40006DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr sig;

	[Token(Token = "0x40006DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr args;

	[Token(Token = "0x40006DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int next_arg;

	[Token(Token = "0x40006DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int num_args;

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x1B7BC70", Offset = "0x1B7A270", VA = "0x181B7BC70", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
