// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ImmutableObjectAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000165")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ImmutableObjectAttribute : Attribute
{
	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ImmutableObjectAttribute Yes;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ImmutableObjectAttribute No;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ImmutableObjectAttribute Default;

	[Token(Token = "0x170001B6")]
	public bool Immutable
	{
		[Token(Token = "0x60008F8")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public ImmutableObjectAttribute(bool immutable)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x287DE50", Offset = "0x287C450", VA = "0x18287DE50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x287DF30", Offset = "0x287C530", VA = "0x18287DF30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
