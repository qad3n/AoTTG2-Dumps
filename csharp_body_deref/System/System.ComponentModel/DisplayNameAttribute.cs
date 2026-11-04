// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DisplayNameAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015E")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Event)]
public class DisplayNameAttribute : Attribute
{
	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DisplayNameAttribute Default;

	[Token(Token = "0x170001AD")]
	public virtual string DisplayName
	{
		[Token(Token = "0x60008D7")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AE")]
	protected string DisplayNameValue
	{
		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008D9")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x287CF80", Offset = "0x287B580", VA = "0x18287CF80")]
	public DisplayNameAttribute()
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DisplayNameAttribute(string displayName)
	{
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x287D7F0", Offset = "0x287BDF0", VA = "0x18287D7F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x287CE30", Offset = "0x287B430", VA = "0x18287CE30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x287D8B0", Offset = "0x287BEB0", VA = "0x18287D8B0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
