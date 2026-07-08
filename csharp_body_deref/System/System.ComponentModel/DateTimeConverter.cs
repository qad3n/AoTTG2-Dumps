using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000280")]
public class DateTimeConverter : TypeConverter
{
	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x4569A10", Offset = "0x4569A10", VA = "0x4569A10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x4569A90", Offset = "0x4569A90", VA = "0x4569A90", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x4569B30", Offset = "0x4569B30", VA = "0x4569B30", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x4569E60", Offset = "0x4569E60", VA = "0x4569E60", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x456A1C0", Offset = "0x456A1C0", VA = "0x456A1C0")]
	public DateTimeConverter()
	{
	}
}
