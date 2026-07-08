using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200012C")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = true)]
public class HeaderAttribute : PropertyAttribute
{
	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x10")]
	public readonly string header;

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x4ACA5E0", Offset = "0x4ACA5E0", VA = "0x4ACA5E0")]
	public HeaderAttribute(string header)
	{
	}
}
