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
	[Address(RVA = "0x5027150", Offset = "0x5027150", VA = "0x5027150")]
	public MonoAsyncCall()
	{
	}
}
