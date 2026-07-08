using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x200017B")]
public struct ArgIterator
{
	[Token(Token = "0x4000676")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr sig;

	[Token(Token = "0x4000677")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr args;

	[Token(Token = "0x4000678")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int next_arg;

	[Token(Token = "0x4000679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int num_args;

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x5022520", Offset = "0x5022520", VA = "0x5022520", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x5022570", Offset = "0x5022570", VA = "0x5022570", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
