using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200004C")]
internal sealed class DefaultValueTypeConverter : StringConverter
{
	[Token(Token = "0x6000598")]
	[Address(RVA = "0x425D590", Offset = "0x425D590", VA = "0x425D590")]
	public DefaultValueTypeConverter()
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x425D5A0", Offset = "0x425D5A0", VA = "0x425D5A0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x425D730", Offset = "0x425D730", VA = "0x425D730", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}
}
