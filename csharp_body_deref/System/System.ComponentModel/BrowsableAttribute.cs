// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.BrowsableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000157")]
[AttributeUsage(AttributeTargets.All)]
public sealed class BrowsableAttribute : Attribute
{
	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BrowsableAttribute Yes;

	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BrowsableAttribute No;

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BrowsableAttribute Default;

	[Token(Token = "0x170001A4")]
	public bool Browsable
	{
		[Token(Token = "0x60008AF")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public BrowsableAttribute(bool browsable)
	{
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x287BF80", Offset = "0x287A580", VA = "0x18287BF80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x287C060", Offset = "0x287A660", VA = "0x18287C060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x287C0A0", Offset = "0x287A6A0", VA = "0x18287C0A0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
