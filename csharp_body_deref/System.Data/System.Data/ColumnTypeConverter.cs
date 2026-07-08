using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000006")]
internal sealed class ColumnTypeConverter : TypeConverter
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_types;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection _values;

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x41F43C0", Offset = "0x41F43C0", VA = "0x41F43C0")]
	public ColumnTypeConverter()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x41F43D0", Offset = "0x41F43D0", VA = "0x41F43D0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x41F4470", Offset = "0x41F4470", VA = "0x41F4470", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x41F49E0", Offset = "0x41F49E0", VA = "0x41F49E0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x41F4A60", Offset = "0x41F4A60", VA = "0x41F4A60", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x41F4C80", Offset = "0x41F4C80", VA = "0x41F4C80", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x41F4DB0", Offset = "0x41F4DB0", VA = "0x41F4DB0", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x41F4DC0", Offset = "0x41F4DC0", VA = "0x41F4DC0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
