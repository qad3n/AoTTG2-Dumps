using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002D5")]
public class StringConverter : TypeConverter
{
	[Token(Token = "0x6001276")]
	[Address(RVA = "0x4585420", Offset = "0x4585420", VA = "0x4585420", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x45854A0", Offset = "0x45854A0", VA = "0x45854A0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x45854D0", Offset = "0x45854D0", VA = "0x45854D0")]
	public StringConverter()
	{
	}
}
