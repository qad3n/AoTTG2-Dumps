using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Mono.Util;

[Token(Token = "0x2000007")]
[Conditional("UNITY")]
[Conditional("FULL_AOT_RUNTIME")]
[Conditional("MONOTOUCH")]
[AttributeUsage(AttributeTargets.Method)]
internal sealed class MonoPInvokeCallbackAttribute : Attribute
{
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4534580", Offset = "0x4534580", VA = "0x4534580")]
	public MonoPInvokeCallbackAttribute(Type t)
	{
	}
}
