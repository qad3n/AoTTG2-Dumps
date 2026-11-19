// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.NotifyParentPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001E8")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class NotifyParentPropertyAttribute : Attribute
{
	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly NotifyParentPropertyAttribute Yes;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x8")]
	public static readonly NotifyParentPropertyAttribute No;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x10")]
	public static readonly NotifyParentPropertyAttribute Default;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x10")]
	private bool notifyParent;

	[Token(Token = "0x170002CF")]
	public bool NotifyParent
	{
		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x627B920", Offset = "0x627A920", VA = "0x627B920")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x627B900", Offset = "0x627A900", VA = "0x627B900")]
	public NotifyParentPropertyAttribute(bool notifyParent)
	{
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x627B930", Offset = "0x627A930", VA = "0x627B930", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x627B9A0", Offset = "0x627A9A0", VA = "0x627B9A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x627B9B0", Offset = "0x627A9B0", VA = "0x627B9B0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
