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

[Token(Token = "0x2000157")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface)]
public sealed class DesignTimeVisibleAttribute : Attribute
{
	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignTimeVisibleAttribute Yes;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignTimeVisibleAttribute No;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignTimeVisibleAttribute Default;

	[Token(Token = "0x170001CB")]
	public bool Visible
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x62319F0", Offset = "0x62309F0", VA = "0x62319F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x62319C0", Offset = "0x62309C0", VA = "0x62319C0")]
	public DesignTimeVisibleAttribute(bool visible)
	{
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x62319E0", Offset = "0x62309E0", VA = "0x62319E0")]
	public DesignTimeVisibleAttribute()
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x6231A00", Offset = "0x6230A00", VA = "0x6231A00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x6231A70", Offset = "0x6230A70", VA = "0x6231A70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x6231B00", Offset = "0x6230B00", VA = "0x6231B00", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
