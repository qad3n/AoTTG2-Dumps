using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002D1")]
[AttributeUsage(AttributeTargets.Class)]
public class RunInstallerAttribute : Attribute
{
	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RunInstallerAttribute Yes;

	[Token(Token = "0x4000E10")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RunInstallerAttribute No;

	[Token(Token = "0x4000E11")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RunInstallerAttribute Default;

	[Token(Token = "0x17000424")]
	public bool RunInstaller
	{
		[Token(Token = "0x6001261")]
		[Address(RVA = "0x4584D80", Offset = "0x4584D80", VA = "0x4584D80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x4584D60", Offset = "0x4584D60", VA = "0x4584D60")]
	public RunInstallerAttribute(bool runInstaller)
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x4584D90", Offset = "0x4584D90", VA = "0x4584D90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x4584E30", Offset = "0x4584E30", VA = "0x4584E30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x4584E40", Offset = "0x4584E40", VA = "0x4584E40", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
