// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IComNativeDescriptorHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200029A")]
[Obsolete("This interface has been deprecated. Add a TypeDescriptionProvider to handle type TypeDescriptor.ComObjectType instead.  https://go.microsoft.com/fwlink/?linkid=14202")]
public interface IComNativeDescriptorHandler
{
	[Token(Token = "0x6001087")]
	AttributeCollection GetAttributes(object component);

	[Token(Token = "0x6001088")]
	string GetClassName(object component);

	[Token(Token = "0x6001089")]
	TypeConverter GetConverter(object component);

	[Token(Token = "0x600108A")]
	EventDescriptor GetDefaultEvent(object component);

	[Token(Token = "0x600108B")]
	PropertyDescriptor GetDefaultProperty(object component);

	[Token(Token = "0x600108C")]
	object GetEditor(object component, Type baseEditorType);

	[Token(Token = "0x600108D")]
	string GetName(object component);

	[Token(Token = "0x600108E")]
	EventDescriptorCollection GetEvents(object component);

	[Token(Token = "0x600108F")]
	EventDescriptorCollection GetEvents(object component, Attribute[] attributes);

	[Token(Token = "0x6001090")]
	PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes);

	[Token(Token = "0x6001091")]
	object GetPropertyValue(object component, string propertyName, ref bool success);

	[Token(Token = "0x6001092")]
	object GetPropertyValue(object component, int dispid, ref bool success);
}
