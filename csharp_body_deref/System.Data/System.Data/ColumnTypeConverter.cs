// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ColumnTypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000026")]
internal sealed class ColumnTypeConverter : TypeConverter
{
	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_types;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection _values;

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x5E8A740", Offset = "0x5E89740", VA = "0x5E8A740")]
	public ColumnTypeConverter()
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x5E8A750", Offset = "0x5E89750", VA = "0x5E8A750", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x5E8A7F0", Offset = "0x5E897F0", VA = "0x5E8A7F0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x5E8AD20", Offset = "0x5E89D20", VA = "0x5E8AD20", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x5E8ADA0", Offset = "0x5E89DA0", VA = "0x5E8ADA0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x5E8AFC0", Offset = "0x5E89FC0", VA = "0x5E8AFC0", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x5E8B0F0", Offset = "0x5E8A0F0", VA = "0x5E8B0F0", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x5E8B100", Offset = "0x5E8A100", VA = "0x5E8B100", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
