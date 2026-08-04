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
		[Address(RVA = "0x4881CD0", Offset = "0x4881CD0", VA = "0x4881CD0")]
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
		[Address(RVA = "0x4881E20", Offset = "0x4881E20", VA = "0x4881E20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x4881C60", Offset = "0x4881C60", VA = "0x4881C60")]
	public DesignerCategoryAttribute()
	{
	}

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x4881CA0", Offset = "0x4881CA0", VA = "0x4881CA0")]
	public DesignerCategoryAttribute(string category)
	{
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x4881CE0", Offset = "0x4881CE0", VA = "0x4881CE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x4881D70", Offset = "0x4881D70", VA = "0x4881D70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x4881DA0", Offset = "0x4881DA0", VA = "0x4881DA0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
