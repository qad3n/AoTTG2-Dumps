using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002D7")]
public class TimeSpanConverter : TypeConverter
{
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x4585670", Offset = "0x4585670", VA = "0x4585670", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x45856F0", Offset = "0x45856F0", VA = "0x45856F0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x4585790", Offset = "0x4585790", VA = "0x4585790", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x4585970", Offset = "0x4585970", VA = "0x4585970", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x4585C80", Offset = "0x4585C80", VA = "0x4585C80")]
	public TimeSpanConverter()
	{
	}
}
