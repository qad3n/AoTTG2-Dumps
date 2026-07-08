using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A5")]
public interface ITypedList
{
	[Token(Token = "0x60010B1")]
	string GetListName(PropertyDescriptor[] listAccessors);

	[Token(Token = "0x60010B2")]
	PropertyDescriptorCollection GetItemProperties(PropertyDescriptor[] listAccessors);
}
