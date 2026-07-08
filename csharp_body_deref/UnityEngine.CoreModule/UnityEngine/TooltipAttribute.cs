using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200012A")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public class TooltipAttribute : PropertyAttribute
{
	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x10")]
	public readonly string tooltip;

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x4ACA560", Offset = "0x4ACA560", VA = "0x4ACA560")]
	public TooltipAttribute(string tooltip)
	{
	}
}
