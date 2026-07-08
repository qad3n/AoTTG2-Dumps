using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200026E")]
public class BooleanConverter : TypeConverter
{
	[Token(Token = "0x4000D21")]
	[FieldOffset(Offset = "0x0")]
	private static StandardValuesCollection s_values;

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x4561820", Offset = "0x4561820", VA = "0x4561820", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x45618A0", Offset = "0x45618A0", VA = "0x45618A0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x4561A40", Offset = "0x4561A40", VA = "0x4561A40", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x4561BD0", Offset = "0x4561BD0", VA = "0x4561BD0", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x4561BE0", Offset = "0x4561BE0", VA = "0x4561BE0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4561BF0", Offset = "0x4561BF0", VA = "0x4561BF0")]
	public BooleanConverter()
	{
	}
}
