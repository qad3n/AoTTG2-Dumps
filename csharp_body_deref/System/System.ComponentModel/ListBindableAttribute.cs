using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002B4")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ListBindableAttribute : Attribute
{
	[Token(Token = "0x4000D85")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ListBindableAttribute Yes;

	[Token(Token = "0x4000D86")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ListBindableAttribute No;

	[Token(Token = "0x4000D87")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ListBindableAttribute Default;

	[Token(Token = "0x4000D88")]
	[FieldOffset(Offset = "0x10")]
	private bool _isDefault;

	[Token(Token = "0x170003CA")]
	public bool ListBindable
	{
		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x4572280", Offset = "0x4572280", VA = "0x4572280")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x4572230", Offset = "0x4572230", VA = "0x4572230")]
	public ListBindableAttribute(bool listBindable)
	{
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x4572250", Offset = "0x4572250", VA = "0x4572250")]
	public ListBindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x4572290", Offset = "0x4572290", VA = "0x4572290", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x4572320", Offset = "0x4572320", VA = "0x4572320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x4572330", Offset = "0x4572330", VA = "0x4572330", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
