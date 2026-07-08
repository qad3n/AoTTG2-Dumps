using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000282")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultBindingPropertyAttribute : Attribute
{
	[Token(Token = "0x4000D43")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultBindingPropertyAttribute Default;

	[Token(Token = "0x17000381")]
	public string Name
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x456A850", Offset = "0x456A850", VA = "0x456A850")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x456A810", Offset = "0x456A810", VA = "0x456A810")]
	public DefaultBindingPropertyAttribute()
	{
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x456A820", Offset = "0x456A820", VA = "0x456A820")]
	public DefaultBindingPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x456A860", Offset = "0x456A860", VA = "0x456A860", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x456A8D0", Offset = "0x456A8D0", VA = "0x456A8D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
