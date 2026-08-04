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

[Token(Token = "0x200024E")]
[AttributeUsage(AttributeTargets.All)]
public class DescriptionAttribute : Attribute
{
	[Token(Token = "0x4000CCE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DescriptionAttribute Default;

	[Token(Token = "0x17000338")]
	public virtual string Description
	{
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x48817D0", Offset = "0x48817D0", VA = "0x48817D0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000339")]
	protected string DescriptionValue
	{
		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x48817E0", Offset = "0x48817E0", VA = "0x48817E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x48817F0", Offset = "0x48817F0", VA = "0x48817F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x4881760", Offset = "0x4881760", VA = "0x4881760")]
	public DescriptionAttribute()
	{
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x48817A0", Offset = "0x48817A0", VA = "0x48817A0")]
	public DescriptionAttribute(string description)
	{
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x4881800", Offset = "0x4881800", VA = "0x4881800", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x48818D0", Offset = "0x48818D0", VA = "0x48818D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x4881910", Offset = "0x4881910", VA = "0x4881910", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
