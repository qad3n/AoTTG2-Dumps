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

[Token(Token = "0x2000126")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ImmutableObjectAttribute : Attribute
{
	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ImmutableObjectAttribute Yes;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ImmutableObjectAttribute No;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ImmutableObjectAttribute Default;

	[Token(Token = "0x17000187")]
	public bool Immutable
	{
		[Token(Token = "0x6000738")]
		[Address(RVA = "0x6223390", Offset = "0x6222390", VA = "0x6223390")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x6223370", Offset = "0x6222370", VA = "0x6223370")]
	public ImmutableObjectAttribute(bool immutable)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x62233A0", Offset = "0x62223A0", VA = "0x62233A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x6223460", Offset = "0x6222460", VA = "0x6223460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x6223470", Offset = "0x6222470", VA = "0x6223470", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
