// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeConverterAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001E5")]
[AttributeUsage(AttributeTargets.All)]
public sealed class TypeConverterAttribute : Attribute
{
	[Token(Token = "0x4000754")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypeConverterAttribute Default;

	[Token(Token = "0x1700029B")]
	public string ConverterTypeName
	{
		[Token(Token = "0x6000CD5")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x287D4D0", Offset = "0x287BAD0", VA = "0x18287D4D0")]
	public TypeConverterAttribute()
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x289EE70", Offset = "0x289D470", VA = "0x18289EE70")]
	public TypeConverterAttribute(Type type)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public TypeConverterAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x28CA000", Offset = "0x28C8600", VA = "0x1828CA000", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
