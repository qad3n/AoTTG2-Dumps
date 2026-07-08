using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F9")]
public class DateTimeOffsetConverter : TypeConverter
{
	[Token(Token = "0x6001334")]
	[Address(RVA = "0x458B5D0", Offset = "0x458B5D0", VA = "0x458B5D0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x458B650", Offset = "0x458B650", VA = "0x458B650", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x458B6F0", Offset = "0x458B6F0", VA = "0x458B6F0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x458BAD0", Offset = "0x458BAD0", VA = "0x458BAD0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x458C740", Offset = "0x458C740", VA = "0x458C740")]
	public DateTimeOffsetConverter()
	{
	}
}
