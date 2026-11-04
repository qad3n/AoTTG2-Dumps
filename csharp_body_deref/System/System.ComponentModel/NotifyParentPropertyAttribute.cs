// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.NotifyParentPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000227")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class NotifyParentPropertyAttribute : Attribute
{
	[Token(Token = "0x40007FA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly NotifyParentPropertyAttribute Yes;

	[Token(Token = "0x40007FB")]
	[FieldOffset(Offset = "0x8")]
	public static readonly NotifyParentPropertyAttribute No;

	[Token(Token = "0x40007FC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly NotifyParentPropertyAttribute Default;

	[Token(Token = "0x40007FD")]
	[FieldOffset(Offset = "0x10")]
	private bool notifyParent;

	[Token(Token = "0x170002FE")]
	public bool NotifyParent
	{
		[Token(Token = "0x6000F31")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public NotifyParentPropertyAttribute(bool notifyParent)
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x28D89D0", Offset = "0x28D6FD0", VA = "0x1828D89D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x28D8A70", Offset = "0x28D7070", VA = "0x1828D8A70", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
