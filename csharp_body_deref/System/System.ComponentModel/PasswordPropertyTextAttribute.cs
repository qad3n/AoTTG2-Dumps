using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002C6")]
[AttributeUsage(AttributeTargets.All)]
public sealed class PasswordPropertyTextAttribute : Attribute
{
	[Token(Token = "0x4000DE7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PasswordPropertyTextAttribute Yes;

	[Token(Token = "0x4000DE8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly PasswordPropertyTextAttribute No;

	[Token(Token = "0x4000DE9")]
	[FieldOffset(Offset = "0x10")]
	public static readonly PasswordPropertyTextAttribute Default;

	[Token(Token = "0x17000401")]
	public bool Password
	{
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x457C160", Offset = "0x457C160", VA = "0x457C160")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x457C120", Offset = "0x457C120", VA = "0x457C120")]
	public PasswordPropertyTextAttribute()
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x457C140", Offset = "0x457C140", VA = "0x457C140")]
	public PasswordPropertyTextAttribute(bool password)
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x457C170", Offset = "0x457C170", VA = "0x457C170", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x457C1D0", Offset = "0x457C1D0", VA = "0x457C1D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x457C1E0", Offset = "0x457C1E0", VA = "0x457C1E0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
