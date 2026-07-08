using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000250")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = true)]
public sealed class DesignerCategoryAttribute : Attribute
{
	[Token(Token = "0x4000CD4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignerCategoryAttribute Component;

	[Token(Token = "0x4000CD5")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignerCategoryAttribute Default;

	[Token(Token = "0x4000CD6")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignerCategoryAttribute Form;

	[Token(Token = "0x4000CD7")]
	[FieldOffset(Offset = "0x18")]
	public static readonly DesignerCategoryAttribute Generic;

	[Token(Token = "0x1700033B")]
	public string Category
	{
		[Token(Token = "0x6000E81")]
		[Address(RVA = "0x455CBD0", Offset = "0x455CBD0", VA = "0x455CBD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033C")]
	public override object TypeId
	{
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x455CD20", Offset = "0x455CD20", VA = "0x455CD20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x455CB60", Offset = "0x455CB60", VA = "0x455CB60")]
	public DesignerCategoryAttribute()
	{
	}

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x455CBA0", Offset = "0x455CBA0", VA = "0x455CBA0")]
	public DesignerCategoryAttribute(string category)
	{
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x455CBE0", Offset = "0x455CBE0", VA = "0x455CBE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x455CC70", Offset = "0x455CC70", VA = "0x455CC70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x455CCA0", Offset = "0x455CCA0", VA = "0x455CCA0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
