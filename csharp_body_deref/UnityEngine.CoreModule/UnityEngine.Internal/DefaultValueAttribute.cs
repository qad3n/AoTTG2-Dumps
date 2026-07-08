using System;
using Il2CppDummyDll;

namespace UnityEngine.Internal;

[Serializable]
[Token(Token = "0x200029A")]
[AttributeUsage(AttributeTargets.Parameter | AttributeTargets.GenericParameter)]
public class DefaultValueAttribute : Attribute
{
	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0x10")]
	private object DefaultValue;

	[Token(Token = "0x1700025D")]
	public object Value
	{
		[Token(Token = "0x6000E0A")]
		[Address(RVA = "0x4AF0920", Offset = "0x4AF0920", VA = "0x4AF0920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x4AF08F0", Offset = "0x4AF08F0", VA = "0x4AF08F0")]
	public DefaultValueAttribute(string value)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x4AF0930", Offset = "0x4AF0930", VA = "0x4AF0930", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x4AF09F0", Offset = "0x4AF09F0", VA = "0x4AF09F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
