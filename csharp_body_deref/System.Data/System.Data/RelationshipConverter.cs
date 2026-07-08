using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200007B")]
internal sealed class RelationshipConverter : ExpandableObjectConverter
{
	[Token(Token = "0x6000744")]
	[Address(RVA = "0x4281210", Offset = "0x4281210", VA = "0x4281210")]
	public RelationshipConverter()
	{
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x4281220", Offset = "0x4281220", VA = "0x4281220", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x42812C0", Offset = "0x42812C0", VA = "0x42812C0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
