using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000A")]
internal sealed class ConstraintConverter : ExpandableObjectConverter
{
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x41F9950", Offset = "0x41F9950", VA = "0x41F9950")]
	public ConstraintConverter()
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x41F9960", Offset = "0x41F9960", VA = "0x41F9960", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x41F9A00", Offset = "0x41F9A00", VA = "0x41F9A00", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
