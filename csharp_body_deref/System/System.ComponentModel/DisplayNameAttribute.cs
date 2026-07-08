using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000253")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Event)]
public class DisplayNameAttribute : Attribute
{
	[Token(Token = "0x4000CE2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DisplayNameAttribute Default;

	[Token(Token = "0x1700033E")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x455D1B0", Offset = "0x455D1B0", VA = "0x455D1B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033F")]
	protected string DisplayNameValue
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x455D1C0", Offset = "0x455D1C0", VA = "0x455D1C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x455D1D0", Offset = "0x455D1D0", VA = "0x455D1D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x455D140", Offset = "0x455D140", VA = "0x455D140")]
	public DisplayNameAttribute()
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x455D180", Offset = "0x455D180", VA = "0x455D180")]
	public DisplayNameAttribute(string displayName)
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x455D1E0", Offset = "0x455D1E0", VA = "0x455D1E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x455D2B0", Offset = "0x455D2B0", VA = "0x455D2B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x455D2F0", Offset = "0x455D2F0", VA = "0x455D2F0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
