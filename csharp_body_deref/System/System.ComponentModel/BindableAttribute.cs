// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.BindableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000175")]
[AttributeUsage(AttributeTargets.All)]
public sealed class BindableAttribute : Attribute
{
	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BindableAttribute Yes;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BindableAttribute No;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BindableAttribute Default;

	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x10")]
	private bool _isDefault;

	[Token(Token = "0x170001C8")]
	public bool Bindable
	{
		[Token(Token = "0x600095C")]
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C9")]
	public BindingDirection Direction
	{
		[Token(Token = "0x600095D")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(BindingDirection);
		}
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x2893170", Offset = "0x2891770", VA = "0x182893170")]
	public BindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x28930F0", Offset = "0x28916F0", VA = "0x1828930F0")]
	public BindableAttribute(bool bindable, BindingDirection direction)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x2893130", Offset = "0x2891730", VA = "0x182893130")]
	public BindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x28931A0", Offset = "0x28917A0", VA = "0x1828931A0")]
	public BindableAttribute(BindableSupport flags, BindingDirection direction)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x2892EA0", Offset = "0x28914A0", VA = "0x182892EA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x2892F40", Offset = "0x2891540", VA = "0x182892F40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x2892F80", Offset = "0x2891580", VA = "0x182892F80", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
