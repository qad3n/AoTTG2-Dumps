using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200026A")]
[AttributeUsage(AttributeTargets.All)]
public sealed class BindableAttribute : Attribute
{
	[Token(Token = "0x4000D08")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BindableAttribute Yes;

	[Token(Token = "0x4000D09")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BindableAttribute No;

	[Token(Token = "0x4000D0A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BindableAttribute Default;

	[Token(Token = "0x4000D0B")]
	[FieldOffset(Offset = "0x10")]
	private bool _isDefault;

	[Token(Token = "0x17000359")]
	public bool Bindable
	{
		[Token(Token = "0x6000F14")]
		[Address(RVA = "0x4561610", Offset = "0x4561610", VA = "0x4561610")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700035A")]
	public BindingDirection Direction
	{
		[Token(Token = "0x6000F15")]
		[Address(RVA = "0x4561620", Offset = "0x4561620", VA = "0x4561620")]
		[CompilerGenerated]
		get
		{
			return default(BindingDirection);
		}
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x4561560", Offset = "0x4561560", VA = "0x4561560")]
	public BindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x4561590", Offset = "0x4561590", VA = "0x4561590")]
	public BindableAttribute(bool bindable, BindingDirection direction)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x45615B0", Offset = "0x45615B0", VA = "0x45615B0")]
	public BindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x45615E0", Offset = "0x45615E0", VA = "0x45615E0")]
	public BindableAttribute(BindableSupport flags, BindingDirection direction)
	{
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x4561630", Offset = "0x4561630", VA = "0x4561630", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x45616A0", Offset = "0x45616A0", VA = "0x45616A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x45616D0", Offset = "0x45616D0", VA = "0x45616D0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
