// ==================== AoTTG2 cross-reference ====================
// Type: System.MonoAsyncCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000191")]
internal class MonoAsyncCall
{
	[Token(Token = "0x40006AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object msg;

	[Token(Token = "0x40006AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr cb_method;

	[Token(Token = "0x40006AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object cb_target;

	[Token(Token = "0x40006AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object state;

	[Token(Token = "0x40006AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object res;

	[Token(Token = "0x40006AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object out_args;

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x3D0CC70", Offset = "0x3D0CC70", VA = "0x3D0CC70")]
	public MonoAsyncCall()
	{
	}
}
