// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ParenthesizePropertyNameAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001E9")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ParenthesizePropertyNameAttribute : Attribute
{
	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ParenthesizePropertyNameAttribute Default;

	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x10")]
	private bool needParenthesis;

	[Token(Token = "0x170002D0")]
	public bool NeedParenthesis
	{
		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x627BB20", Offset = "0x627AB20", VA = "0x627BB20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x627BAE0", Offset = "0x627AAE0", VA = "0x627BAE0")]
	public ParenthesizePropertyNameAttribute()
	{
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x627BB00", Offset = "0x627AB00", VA = "0x627BB00")]
	public ParenthesizePropertyNameAttribute(bool needParenthesis)
	{
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x627BB30", Offset = "0x627AB30", VA = "0x627BB30", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x627BB90", Offset = "0x627AB90", VA = "0x627BB90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x627BBA0", Offset = "0x627ABA0", VA = "0x627BBA0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
