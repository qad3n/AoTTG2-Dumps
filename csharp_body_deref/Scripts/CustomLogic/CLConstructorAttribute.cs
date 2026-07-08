using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000266")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Constructor)]
public sealed class CLConstructorAttribute : Attribute
{
	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x3CB2F20", Offset = "0x3CB2F20", VA = "0x3CB2F20")]
	public CLConstructorAttribute()
	{
	}
}
