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

[Token(Token = "0x200011F")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Event)]
public class DisplayNameAttribute : Attribute
{
	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DisplayNameAttribute Default;

	[Token(Token = "0x1700017E")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x6222DC0", Offset = "0x6221DC0", VA = "0x6222DC0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017F")]
	protected string DisplayNameValue
	{
		[Token(Token = "0x6000718")]
		[Address(RVA = "0x6222DD0", Offset = "0x6221DD0", VA = "0x6222DD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000719")]
		[Address(RVA = "0x6222DE0", Offset = "0x6221DE0", VA = "0x6222DE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x6222D50", Offset = "0x6221D50", VA = "0x6222D50")]
	public DisplayNameAttribute()
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x6222D90", Offset = "0x6221D90", VA = "0x6222D90")]
	public DisplayNameAttribute(string displayName)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x6222DF0", Offset = "0x6221DF0", VA = "0x6222DF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x6222EA0", Offset = "0x6221EA0", VA = "0x6222EA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x6222EE0", Offset = "0x6221EE0", VA = "0x6222EE0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
