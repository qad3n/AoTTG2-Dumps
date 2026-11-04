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

[Token(Token = "0x200016A")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ReadOnlyAttribute : Attribute
{
	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReadOnlyAttribute Yes;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ReadOnlyAttribute No;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ReadOnlyAttribute Default;

	[Token(Token = "0x170001BA")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000911")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public ReadOnlyAttribute(bool isReadOnly)
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x287FC30", Offset = "0x287E230", VA = "0x18287FC30", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x287FD10", Offset = "0x287E310", VA = "0x18287FD10", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
