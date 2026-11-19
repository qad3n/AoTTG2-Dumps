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

[Token(Token = "0x200011C")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = true)]
public sealed class DesignerCategoryAttribute : Attribute
{
	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignerCategoryAttribute Component;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignerCategoryAttribute Default;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignerCategoryAttribute Form;

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x18")]
	public static readonly DesignerCategoryAttribute Generic;

	[Token(Token = "0x1700017B")]
	public string Category
	{
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x6222800", Offset = "0x6221800", VA = "0x6222800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public override object TypeId
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x6222930", Offset = "0x6221930", VA = "0x6222930", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x6222790", Offset = "0x6221790", VA = "0x6222790")]
	public DesignerCategoryAttribute()
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x62227D0", Offset = "0x62217D0", VA = "0x62227D0")]
	public DesignerCategoryAttribute(string category)
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x6222810", Offset = "0x6221810", VA = "0x6222810", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x6222880", Offset = "0x6221880", VA = "0x6222880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x62228B0", Offset = "0x62218B0", VA = "0x62228B0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
