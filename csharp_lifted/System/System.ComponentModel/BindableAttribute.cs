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

[Token(Token = "0x2000136")]
[AttributeUsage(AttributeTargets.All)]
public sealed class BindableAttribute : Attribute
{
	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BindableAttribute Yes;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BindableAttribute No;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BindableAttribute Default;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0x10")]
	private bool _isDefault;

	[Token(Token = "0x17000199")]
	public bool Bindable
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x6226AE0", Offset = "0x6225AE0", VA = "0x6226AE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	public BindingDirection Direction
	{
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x6226AF0", Offset = "0x6225AF0", VA = "0x6226AF0")]
		[CompilerGenerated]
		get
		{
			return default(BindingDirection);
		}
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x6226A30", Offset = "0x6225A30", VA = "0x6226A30")]
	public BindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x6226A60", Offset = "0x6225A60", VA = "0x6226A60")]
	public BindableAttribute(bool bindable, BindingDirection direction)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x6226A80", Offset = "0x6225A80", VA = "0x6226A80")]
	public BindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x6226AB0", Offset = "0x6225AB0", VA = "0x6226AB0")]
	public BindableAttribute(BindableSupport flags, BindingDirection direction)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x6226B00", Offset = "0x6225B00", VA = "0x6226B00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x6226B70", Offset = "0x6225B70", VA = "0x6226B70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x6226BA0", Offset = "0x6225BA0", VA = "0x6226BA0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
