using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000178")]
internal class MonoTypeInfo
{
	[Token(Token = "0x400065A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string full_name;

	[Token(Token = "0x400065B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public System.Reflection.RuntimeConstructorInfo default_ctor;

	[Token(Token = "0x6000F3E")]
	[Address(RVA = "0x5021980", Offset = "0x5021980", VA = "0x5021980")]
	public MonoTypeInfo()
	{
	}
}
