using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000007")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public class FoldoutHeaderAttribute : Attribute
{
	[Token(Token = "0x1700002B")]
	public string Title
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x39BCD40", Offset = "0x39BCD40", VA = "0x39BCD40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x39BCD50", Offset = "0x39BCD50", VA = "0x39BCD50")]
	public FoldoutHeaderAttribute(string title)
	{
	}
}
