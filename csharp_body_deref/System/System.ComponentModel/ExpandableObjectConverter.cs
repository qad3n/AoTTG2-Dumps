using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000291")]
public class ExpandableObjectConverter : TypeConverter
{
	[Token(Token = "0x6001047")]
	[Address(RVA = "0x456E5D0", Offset = "0x456E5D0", VA = "0x456E5D0")]
	public ExpandableObjectConverter()
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x456E5E0", Offset = "0x456E5E0", VA = "0x456E5E0", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x456E640", Offset = "0x456E640", VA = "0x456E640", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
