using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200024E")]
[AttributeUsage(AttributeTargets.All)]
public class DescriptionAttribute : Attribute
{
	[Token(Token = "0x4000CCE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DescriptionAttribute Default;

	[Token(Token = "0x17000338")]
	public virtual string Description
	{
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x455C6D0", Offset = "0x455C6D0", VA = "0x455C6D0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000339")]
	protected string DescriptionValue
	{
		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x455C6E0", Offset = "0x455C6E0", VA = "0x455C6E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x455C6F0", Offset = "0x455C6F0", VA = "0x455C6F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x455C660", Offset = "0x455C660", VA = "0x455C660")]
	public DescriptionAttribute()
	{
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x455C6A0", Offset = "0x455C6A0", VA = "0x455C6A0")]
	public DescriptionAttribute(string description)
	{
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x455C700", Offset = "0x455C700", VA = "0x455C700", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x455C7D0", Offset = "0x455C7D0", VA = "0x455C7D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x455C810", Offset = "0x455C810", VA = "0x455C810", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
