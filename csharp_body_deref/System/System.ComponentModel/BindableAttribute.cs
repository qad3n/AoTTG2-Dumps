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
		[Address(RVA = "0x4886710", Offset = "0x4886710", VA = "0x4886710")]
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
		[Address(RVA = "0x4886720", Offset = "0x4886720", VA = "0x4886720")]
		[CompilerGenerated]
		get
		{
			return default(BindingDirection);
		}
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x4886660", Offset = "0x4886660", VA = "0x4886660")]
	public BindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x4886690", Offset = "0x4886690", VA = "0x4886690")]
	public BindableAttribute(bool bindable, BindingDirection direction)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x48866B0", Offset = "0x48866B0", VA = "0x48866B0")]
	public BindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x48866E0", Offset = "0x48866E0", VA = "0x48866E0")]
	public BindableAttribute(BindableSupport flags, BindingDirection direction)
	{
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x4886730", Offset = "0x4886730", VA = "0x4886730", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x48867A0", Offset = "0x48867A0", VA = "0x48867A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x48867D0", Offset = "0x48867D0", VA = "0x48867D0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
