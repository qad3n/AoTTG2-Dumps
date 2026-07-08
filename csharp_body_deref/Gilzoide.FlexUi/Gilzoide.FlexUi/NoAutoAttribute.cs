using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000009")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public class NoAutoAttribute : Attribute
{
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x39BCD90", Offset = "0x39BCD90", VA = "0x39BCD90")]
	public NoAutoAttribute()
	{
	}
}
