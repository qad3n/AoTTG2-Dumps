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
[Token(Token = "0x20001BC")]
internal class MonoAsyncCall
{
	[Token(Token = "0x400070E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object msg;

	[Token(Token = "0x400070F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr cb_method;

	[Token(Token = "0x4000710")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object cb_target;

	[Token(Token = "0x4000711")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object state;

	[Token(Token = "0x4000712")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object res;

	[Token(Token = "0x4000713")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object out_args;

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public MonoAsyncCall()
	{
	}
}
