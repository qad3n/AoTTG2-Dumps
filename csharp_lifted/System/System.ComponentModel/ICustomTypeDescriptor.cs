// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ICustomTypeDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000167")]
public interface ICustomTypeDescriptor
{
	[Token(Token = "0x600091B")]
	AttributeCollection GetAttributes();

	[Token(Token = "0x600091C")]
	string GetClassName();

	[Token(Token = "0x600091D")]
	string GetComponentName();

	[Token(Token = "0x600091E")]
	TypeConverter GetConverter();

	[Token(Token = "0x600091F")]
	EventDescriptor GetDefaultEvent();

	[Token(Token = "0x6000920")]
	PropertyDescriptor GetDefaultProperty();

	[Token(Token = "0x6000921")]
	object GetEditor(Type editorBaseType);

	[Token(Token = "0x6000922")]
	EventDescriptorCollection GetEvents();

	[Token(Token = "0x6000923")]
	EventDescriptorCollection GetEvents(Attribute[] attributes);

	[Token(Token = "0x6000924")]
	PropertyDescriptorCollection GetProperties();

	[Token(Token = "0x6000925")]
	PropertyDescriptorCollection GetProperties(Attribute[] attributes);

	[Token(Token = "0x6000926")]
	object GetPropertyOwner(PropertyDescriptor pd);
}
