// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DescriptionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000159")]
[AttributeUsage(AttributeTargets.All)]
public class DescriptionAttribute : Attribute
{
	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DescriptionAttribute Default;

	[Token(Token = "0x170001A7")]
	public virtual string Description
	{
		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A8")]
	protected string DescriptionValue
	{
		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008BC")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x287CF80", Offset = "0x287B580", VA = "0x18287CF80")]
	public DescriptionAttribute()
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DescriptionAttribute(string description)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x287CD70", Offset = "0x287B370", VA = "0x18287CD70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x287CE30", Offset = "0x287B430", VA = "0x18287CE30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x287CE70", Offset = "0x287B470", VA = "0x18287CE70", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
