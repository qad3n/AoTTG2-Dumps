// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DesignTimeVisibleAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000196")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface)]
public sealed class DesignTimeVisibleAttribute : Attribute
{
	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignTimeVisibleAttribute Yes;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignTimeVisibleAttribute No;

	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignTimeVisibleAttribute Default;

	[Token(Token = "0x170001FA")]
	public bool Visible
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public DesignTimeVisibleAttribute(bool visible)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DesignTimeVisibleAttribute()
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x289BA90", Offset = "0x289A090", VA = "0x18289BA90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x289BB10", Offset = "0x289A110", VA = "0x18289BB10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x289BBA0", Offset = "0x289A1A0", VA = "0x18289BBA0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
