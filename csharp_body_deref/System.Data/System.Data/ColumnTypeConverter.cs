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
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ColumnTypeConverter()
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x24E4B80", Offset = "0x24E3180", VA = "0x1824E4B80", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x24E4E10", Offset = "0x24E3410", VA = "0x1824E4E10", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x24E4B10", Offset = "0x24E3110", VA = "0x1824E4B10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x24E4C10", Offset = "0x24E3210", VA = "0x1824E4C10", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x24E5350", Offset = "0x24E3950", VA = "0x1824E5350", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
