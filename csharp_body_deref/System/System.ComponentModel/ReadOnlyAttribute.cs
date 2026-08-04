// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ReadOnlyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200025F")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ReadOnlyAttribute : Attribute
{
	[Token(Token = "0x4000CF6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReadOnlyAttribute Yes;

	[Token(Token = "0x4000CF7")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ReadOnlyAttribute No;

	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ReadOnlyAttribute Default;

	[Token(Token = "0x1700034B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x4883080", Offset = "0x4883080", VA = "0x4883080")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x4883060", Offset = "0x4883060", VA = "0x4883060")]
	public ReadOnlyAttribute(bool isReadOnly)
	{
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x4883090", Offset = "0x4883090", VA = "0x4883090", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x4883150", Offset = "0x4883150", VA = "0x4883150", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x4883160", Offset = "0x4883160", VA = "0x4883160", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
