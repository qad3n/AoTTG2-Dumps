// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.NotifyParentPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200031C")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class NotifyParentPropertyAttribute : Attribute
{
	[Token(Token = "0x4000EC3")]
	[FieldOffset(Offset = "0x0")]
	public static readonly NotifyParentPropertyAttribute Yes;

	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x8")]
	public static readonly NotifyParentPropertyAttribute No;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x10")]
	public static readonly NotifyParentPropertyAttribute Default;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x10")]
	private bool notifyParent;

	[Token(Token = "0x1700048F")]
	public bool NotifyParent
	{
		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x48DE880", Offset = "0x48DE880", VA = "0x48DE880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x48DE860", Offset = "0x48DE860", VA = "0x48DE860")]
	public NotifyParentPropertyAttribute(bool notifyParent)
	{
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x48DE890", Offset = "0x48DE890", VA = "0x48DE890", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x48DE900", Offset = "0x48DE900", VA = "0x48DE900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x48DE910", Offset = "0x48DE910", VA = "0x48DE910", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
