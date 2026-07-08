using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F6")]
public class ComponentConverter : ReferenceConverter
{
	[Token(Token = "0x600131D")]
	[Address(RVA = "0x458A020", Offset = "0x458A020", VA = "0x458A020")]
	public ComponentConverter(Type type)
	{
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x458A090", Offset = "0x458A090", VA = "0x458A090", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x458A0F0", Offset = "0x458A0F0", VA = "0x458A0F0", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
