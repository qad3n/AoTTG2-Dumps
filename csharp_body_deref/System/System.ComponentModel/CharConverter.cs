using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000271")]
public class CharConverter : TypeConverter
{
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4561EE0", Offset = "0x4561EE0", VA = "0x4561EE0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4561F60", Offset = "0x4561F60", VA = "0x4561F60", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x4562040", Offset = "0x4562040", VA = "0x4562040", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x4562150", Offset = "0x4562150", VA = "0x4562150")]
	public CharConverter()
	{
	}
}
