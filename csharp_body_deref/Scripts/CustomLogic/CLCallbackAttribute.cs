using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000265")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Method)]
internal class CLCallbackAttribute : CLBaseAttribute
{
	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x3CB2ED0", Offset = "0x3CB2ED0", VA = "0x3CB2ED0")]
	public CLCallbackAttribute()
	{
	}
}
