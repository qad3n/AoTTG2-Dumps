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

[Token(Token = "0x2000253")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Event)]
public class DisplayNameAttribute : Attribute
{
	[Token(Token = "0x4000CE2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DisplayNameAttribute Default;

	[Token(Token = "0x1700033E")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x48822B0", Offset = "0x48822B0", VA = "0x48822B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033F")]
	protected string DisplayNameValue
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x48822C0", Offset = "0x48822C0", VA = "0x48822C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x48822D0", Offset = "0x48822D0", VA = "0x48822D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x4882240", Offset = "0x4882240", VA = "0x4882240")]
	public DisplayNameAttribute()
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x4882280", Offset = "0x4882280", VA = "0x4882280")]
	public DisplayNameAttribute(string displayName)
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x48822E0", Offset = "0x48822E0", VA = "0x48822E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x48823B0", Offset = "0x48823B0", VA = "0x48823B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x48823F0", Offset = "0x48823F0", VA = "0x48823F0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
