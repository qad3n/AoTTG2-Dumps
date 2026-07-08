using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F3")]
public class CollectionConverter : TypeConverter
{
	[Token(Token = "0x6001307")]
	[Address(RVA = "0x45891E0", Offset = "0x45891E0", VA = "0x45891E0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x4589340", Offset = "0x4589340", VA = "0x4589340", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x4589350", Offset = "0x4589350", VA = "0x4589350", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x4589360", Offset = "0x4589360", VA = "0x4589360")]
	public CollectionConverter()
	{
	}
}
