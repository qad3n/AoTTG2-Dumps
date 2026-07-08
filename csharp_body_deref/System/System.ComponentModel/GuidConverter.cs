using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000294")]
public class GuidConverter : TypeConverter
{
	[Token(Token = "0x6001060")]
	[Address(RVA = "0x456F030", Offset = "0x456F030", VA = "0x456F030", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x456F0B0", Offset = "0x456F0B0", VA = "0x456F0B0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x456F150", Offset = "0x456F150", VA = "0x456F150", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x456F210", Offset = "0x456F210", VA = "0x456F210", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x456F530", Offset = "0x456F530", VA = "0x456F530")]
	public GuidConverter()
	{
	}
}
