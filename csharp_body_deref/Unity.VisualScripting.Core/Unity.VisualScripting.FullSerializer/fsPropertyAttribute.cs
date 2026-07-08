using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000215")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
public class fsPropertyAttribute : Attribute
{
	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x18")]
	public Type Converter;

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x4A5B760", Offset = "0x4A5B760", VA = "0x4A5B760")]
	public fsPropertyAttribute()
	{
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x4A5B7A0", Offset = "0x4A5B7A0", VA = "0x4A5B7A0")]
	public fsPropertyAttribute(string name)
	{
	}
}
