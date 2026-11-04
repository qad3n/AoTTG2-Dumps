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

[Token(Token = "0x20001D1")]
[AttributeUsage(AttributeTargets.All)]
public sealed class PasswordPropertyTextAttribute : Attribute
{
	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PasswordPropertyTextAttribute Yes;

	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x8")]
	public static readonly PasswordPropertyTextAttribute No;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x10")]
	public static readonly PasswordPropertyTextAttribute Default;

	[Token(Token = "0x17000270")]
	public bool Password
	{
		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x28AA8F0", Offset = "0x28A8EF0", VA = "0x1828AA8F0")]
	public PasswordPropertyTextAttribute()
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public PasswordPropertyTextAttribute(bool password)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x28AA700", Offset = "0x28A8D00", VA = "0x1828AA700", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x28AA790", Offset = "0x28A8D90", VA = "0x1828AA790", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
