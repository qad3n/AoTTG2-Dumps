using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000263")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class BuiltinTypeManagerAttribute : Attribute
{
	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x3CB2E10", Offset = "0x3CB2E10", VA = "0x3CB2E10")]
	public BuiltinTypeManagerAttribute()
	{
	}
}
