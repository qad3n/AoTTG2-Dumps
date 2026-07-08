using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200025E")]
[AttributeUsage(AttributeTargets.All)]
public sealed class MergablePropertyAttribute : Attribute
{
	[Token(Token = "0x4000CF2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly MergablePropertyAttribute Yes;

	[Token(Token = "0x4000CF3")]
	[FieldOffset(Offset = "0x8")]
	public static readonly MergablePropertyAttribute No;

	[Token(Token = "0x4000CF4")]
	[FieldOffset(Offset = "0x10")]
	public static readonly MergablePropertyAttribute Default;

	[Token(Token = "0x1700034A")]
	public bool AllowMerge
	{
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x455DD50", Offset = "0x455DD50", VA = "0x455DD50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x455DD30", Offset = "0x455DD30", VA = "0x455DD30")]
	public MergablePropertyAttribute(bool allowMerge)
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x455DD60", Offset = "0x455DD60", VA = "0x455DD60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x455DE20", Offset = "0x455DE20", VA = "0x455DE20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x455DE30", Offset = "0x455DE30", VA = "0x455DE30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
