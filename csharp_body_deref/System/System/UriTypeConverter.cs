using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000098")]
public class UriTypeConverter : TypeConverter
{
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x45DAFB0", Offset = "0x45DAFB0", VA = "0x45DAFB0")]
	public UriTypeConverter()
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x45DAFC0", Offset = "0x45DAFC0", VA = "0x45DAFC0")]
	private bool CanConvert(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x45DB070", Offset = "0x45DB070", VA = "0x45DB070", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x45DB0F0", Offset = "0x45DB0F0", VA = "0x45DB0F0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x45DB130", Offset = "0x45DB130", VA = "0x45DB130", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x45DB2B0", Offset = "0x45DB2B0", VA = "0x45DB2B0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
