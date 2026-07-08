using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000059")]
public class MonoPInvokeCallbackAttribute : Attribute
{
	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3C26730", Offset = "0x3C26730", VA = "0x3C26730")]
	public MonoPInvokeCallbackAttribute(Type t)
	{
	}
}
