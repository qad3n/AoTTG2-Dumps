using System;
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000008")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public class NaNIsDisabledAttribute : PropertyAttribute
{
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x39BCD80", Offset = "0x39BCD80", VA = "0x39BCD80")]
	public NaNIsDisabledAttribute()
	{
	}
}
