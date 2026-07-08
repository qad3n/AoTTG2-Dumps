using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200025A")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ImmutableObjectAttribute : Attribute
{
	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ImmutableObjectAttribute Yes;

	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ImmutableObjectAttribute No;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ImmutableObjectAttribute Default;

	[Token(Token = "0x17000347")]
	public bool Immutable
	{
		[Token(Token = "0x6000EB0")]
		[Address(RVA = "0x455D7A0", Offset = "0x455D7A0", VA = "0x455D7A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x455D780", Offset = "0x455D780", VA = "0x455D780")]
	public ImmutableObjectAttribute(bool immutable)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x455D7B0", Offset = "0x455D7B0", VA = "0x455D7B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x455D870", Offset = "0x455D870", VA = "0x455D870", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x455D880", Offset = "0x455D880", VA = "0x455D880", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
