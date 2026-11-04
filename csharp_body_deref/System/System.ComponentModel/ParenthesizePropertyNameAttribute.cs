// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ParenthesizePropertyNameAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000228")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ParenthesizePropertyNameAttribute : Attribute
{
	[Token(Token = "0x40007FE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ParenthesizePropertyNameAttribute Default;

	[Token(Token = "0x40007FF")]
	[FieldOffset(Offset = "0x10")]
	private bool needParenthesis;

	[Token(Token = "0x170002FF")]
	public bool NeedParenthesis
	{
		[Token(Token = "0x6000F38")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x28AA8F0", Offset = "0x28A8EF0", VA = "0x1828AA8F0")]
	public ParenthesizePropertyNameAttribute()
	{
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public ParenthesizePropertyNameAttribute(bool needParenthesis)
	{
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x28DA750", Offset = "0x28D8D50", VA = "0x1828DA750", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x28DA7E0", Offset = "0x28D8DE0", VA = "0x1828DA7E0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
