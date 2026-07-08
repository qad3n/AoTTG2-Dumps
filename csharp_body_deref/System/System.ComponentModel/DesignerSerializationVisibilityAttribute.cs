using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000252")]
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event)]
public sealed class DesignerSerializationVisibilityAttribute : Attribute
{
	[Token(Token = "0x4000CDD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignerSerializationVisibilityAttribute Content;

	[Token(Token = "0x4000CDE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignerSerializationVisibilityAttribute Hidden;

	[Token(Token = "0x4000CDF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignerSerializationVisibilityAttribute Visible;

	[Token(Token = "0x4000CE0")]
	[FieldOffset(Offset = "0x18")]
	public static readonly DesignerSerializationVisibilityAttribute Default;

	[Token(Token = "0x1700033D")]
	public DesignerSerializationVisibility Visibility
	{
		[Token(Token = "0x6000E88")]
		[Address(RVA = "0x455CF10", Offset = "0x455CF10", VA = "0x455CF10")]
		[CompilerGenerated]
		get
		{
			return default(DesignerSerializationVisibility);
		}
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x455CEF0", Offset = "0x455CEF0", VA = "0x455CEF0")]
	public DesignerSerializationVisibilityAttribute(DesignerSerializationVisibility visibility)
	{
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x455CF20", Offset = "0x455CF20", VA = "0x455CF20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x455CFD0", Offset = "0x455CFD0", VA = "0x455CFD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x455CFE0", Offset = "0x455CFE0", VA = "0x455CFE0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
