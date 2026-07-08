using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200025F")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ReadOnlyAttribute : Attribute
{
	[Token(Token = "0x4000CF6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReadOnlyAttribute Yes;

	[Token(Token = "0x4000CF7")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ReadOnlyAttribute No;

	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ReadOnlyAttribute Default;

	[Token(Token = "0x1700034B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x455DF80", Offset = "0x455DF80", VA = "0x455DF80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x455DF60", Offset = "0x455DF60", VA = "0x455DF60")]
	public ReadOnlyAttribute(bool isReadOnly)
	{
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x455DF90", Offset = "0x455DF90", VA = "0x455DF90", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x455E050", Offset = "0x455E050", VA = "0x455E050", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x455E060", Offset = "0x455E060", VA = "0x455E060", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
