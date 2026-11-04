// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ICustomTypeDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001A6")]
public interface ICustomTypeDescriptor
{
	[Token(Token = "0x6000ADB")]
	AttributeCollection GetAttributes();

	[Token(Token = "0x6000ADC")]
	string GetClassName();

	[Token(Token = "0x6000ADD")]
	string GetComponentName();

	[Token(Token = "0x6000ADE")]
	TypeConverter GetConverter();

	[Token(Token = "0x6000ADF")]
	EventDescriptor GetDefaultEvent();

	[Token(Token = "0x6000AE0")]
	PropertyDescriptor GetDefaultProperty();

	[Token(Token = "0x6000AE1")]
	object GetEditor(Type editorBaseType);

	[Token(Token = "0x6000AE2")]
	EventDescriptorCollection GetEvents();

	[Token(Token = "0x6000AE3")]
	EventDescriptorCollection GetEvents(Attribute[] attributes);

	[Token(Token = "0x6000AE4")]
	PropertyDescriptorCollection GetProperties();

	[Token(Token = "0x6000AE5")]
	PropertyDescriptorCollection GetProperties(Attribute[] attributes);

	[Token(Token = "0x6000AE6")]
	object GetPropertyOwner(PropertyDescriptor pd);
}
