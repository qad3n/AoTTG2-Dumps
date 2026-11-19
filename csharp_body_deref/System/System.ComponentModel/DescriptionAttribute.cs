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

[Token(Token = "0x200011A")]
[AttributeUsage(AttributeTargets.All)]
public class DescriptionAttribute : Attribute
{
	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DescriptionAttribute Default;

	[Token(Token = "0x17000178")]
	public virtual string Description
	{
		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x6222320", Offset = "0x6221320", VA = "0x6222320", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	protected string DescriptionValue
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x6222330", Offset = "0x6221330", VA = "0x6222330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x6222340", Offset = "0x6221340", VA = "0x6222340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x62222B0", Offset = "0x62212B0", VA = "0x62222B0")]
	public DescriptionAttribute()
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x62222F0", Offset = "0x62212F0", VA = "0x62222F0")]
	public DescriptionAttribute(string description)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x6222350", Offset = "0x6221350", VA = "0x6222350", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x6222400", Offset = "0x6221400", VA = "0x6222400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x6222440", Offset = "0x6221440", VA = "0x6222440", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
