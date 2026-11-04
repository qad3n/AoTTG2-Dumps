// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DesignerCategoryAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015B")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = true)]
public sealed class DesignerCategoryAttribute : Attribute
{
	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignerCategoryAttribute Component;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignerCategoryAttribute Default;

	[Token(Token = "0x400060D")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignerCategoryAttribute Form;

	[Token(Token = "0x400060E")]
	[FieldOffset(Offset = "0x18")]
	public static readonly DesignerCategoryAttribute Generic;

	[Token(Token = "0x170001AA")]
	public string Category
	{
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	public override object TypeId
	{
		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x287D510", Offset = "0x287BB10", VA = "0x18287D510", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x287D4D0", Offset = "0x287BAD0", VA = "0x18287D4D0")]
	public DesignerCategoryAttribute()
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DesignerCategoryAttribute(string category)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x287D200", Offset = "0x287B800", VA = "0x18287D200", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x287D280", Offset = "0x287B880", VA = "0x18287D280", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
