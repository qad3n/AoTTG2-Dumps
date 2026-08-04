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
	[Address(RVA = "0x3D08040", Offset = "0x3D08040", VA = "0x3D08040", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x3D08090", Offset = "0x3D08090", VA = "0x3D08090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
