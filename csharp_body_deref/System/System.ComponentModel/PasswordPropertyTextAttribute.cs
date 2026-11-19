// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PasswordPropertyTextAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000192")]
[AttributeUsage(AttributeTargets.All)]
public sealed class PasswordPropertyTextAttribute : Attribute
{
	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PasswordPropertyTextAttribute Yes;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x8")]
	public static readonly PasswordPropertyTextAttribute No;

	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x10")]
	public static readonly PasswordPropertyTextAttribute Default;

	[Token(Token = "0x17000241")]
	public bool Password
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x6240D70", Offset = "0x623FD70", VA = "0x6240D70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x6240D30", Offset = "0x623FD30", VA = "0x6240D30")]
	public PasswordPropertyTextAttribute()
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x6240D50", Offset = "0x623FD50", VA = "0x6240D50")]
	public PasswordPropertyTextAttribute(bool password)
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x6240D80", Offset = "0x623FD80", VA = "0x6240D80", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x6240DE0", Offset = "0x623FDE0", VA = "0x6240DE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x6240DF0", Offset = "0x623FDF0", VA = "0x6240DF0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
