using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200029B")]
public interface ICustomTypeDescriptor
{
	[Token(Token = "0x6001093")]
	AttributeCollection GetAttributes();

	[Token(Token = "0x6001094")]
	string GetClassName();

	[Token(Token = "0x6001095")]
	string GetComponentName();

	[Token(Token = "0x6001096")]
	TypeConverter GetConverter();

	[Token(Token = "0x6001097")]
	EventDescriptor GetDefaultEvent();

	[Token(Token = "0x6001098")]
	PropertyDescriptor GetDefaultProperty();

	[Token(Token = "0x6001099")]
	object GetEditor(Type editorBaseType);

	[Token(Token = "0x600109A")]
	EventDescriptorCollection GetEvents();

	[Token(Token = "0x600109B")]
	EventDescriptorCollection GetEvents(Attribute[] attributes);

	[Token(Token = "0x600109C")]
	PropertyDescriptorCollection GetProperties();

	[Token(Token = "0x600109D")]
	PropertyDescriptorCollection GetProperties(Attribute[] attributes);

	[Token(Token = "0x600109E")]
	object GetPropertyOwner(PropertyDescriptor pd);
}
