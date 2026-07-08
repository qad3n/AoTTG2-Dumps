using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200025D")]
[AttributeUsage(AttributeTargets.All)]
public sealed class LocalizableAttribute : Attribute
{
	[Token(Token = "0x4000CEF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly LocalizableAttribute Yes;

	[Token(Token = "0x4000CF0")]
	[FieldOffset(Offset = "0x8")]
	public static readonly LocalizableAttribute No;

	[Token(Token = "0x4000CF1")]
	[FieldOffset(Offset = "0x10")]
	public static readonly LocalizableAttribute Default;

	[Token(Token = "0x17000349")]
	public bool IsLocalizable
	{
		[Token(Token = "0x6000EBD")]
		[Address(RVA = "0x455DB20", Offset = "0x455DB20", VA = "0x455DB20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x455DB00", Offset = "0x455DB00", VA = "0x455DB00")]
	public LocalizableAttribute(bool isLocalizable)
	{
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x455DB30", Offset = "0x455DB30", VA = "0x455DB30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x455DBF0", Offset = "0x455DBF0", VA = "0x455DBF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x455DC00", Offset = "0x455DC00", VA = "0x455DC00", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
