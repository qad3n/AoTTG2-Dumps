// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ListBindableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001BF")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ListBindableAttribute : Attribute
{
	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ListBindableAttribute Yes;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ListBindableAttribute No;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ListBindableAttribute Default;

	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x10")]
	private bool _isDefault;

	[Token(Token = "0x17000239")]
	public bool ListBindable
	{
		[Token(Token = "0x6000B45")]
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x28A1800", Offset = "0x289FE00", VA = "0x1828A1800")]
	public ListBindableAttribute(bool listBindable)
	{
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x28A1830", Offset = "0x289FE30", VA = "0x1828A1830")]
	public ListBindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x28A1620", Offset = "0x289FC20", VA = "0x1828A1620", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x28A16A0", Offset = "0x289FCA0", VA = "0x1828A16A0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
