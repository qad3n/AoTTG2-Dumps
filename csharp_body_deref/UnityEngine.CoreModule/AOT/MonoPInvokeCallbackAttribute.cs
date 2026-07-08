using System;
using Il2CppDummyDll;

namespace AOT;

[Token(Token = "0x2000004")]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public class MonoPInvokeCallbackAttribute : Attribute
{
	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4A83EF0", Offset = "0x4A83EF0", VA = "0x4A83EF0")]
	public MonoPInvokeCallbackAttribute(Type type)
	{
	}
}
