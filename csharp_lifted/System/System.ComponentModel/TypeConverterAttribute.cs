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

[Token(Token = "0x20001A6")]
[AttributeUsage(AttributeTargets.All)]
public sealed class TypeConverterAttribute : Attribute
{
	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypeConverterAttribute Default;

	[Token(Token = "0x1700026C")]
	public string ConverterTypeName
	{
		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x624A680", Offset = "0x6249680", VA = "0x624A680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x624A5C0", Offset = "0x62495C0", VA = "0x624A5C0")]
	public TypeConverterAttribute()
	{
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x624A600", Offset = "0x6249600", VA = "0x624A600")]
	public TypeConverterAttribute(Type type)
	{
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x624A650", Offset = "0x6249650", VA = "0x624A650")]
	public TypeConverterAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x624A690", Offset = "0x6249690", VA = "0x624A690", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x624A6F0", Offset = "0x62496F0", VA = "0x624A6F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
