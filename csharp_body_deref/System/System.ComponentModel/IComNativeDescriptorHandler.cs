// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IComNativeDescriptorHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001A5")]
[Obsolete("This interface has been deprecated. Add a TypeDescriptionProvider to handle type TypeDescriptor.ComObjectType instead.  https://go.microsoft.com/fwlink/?linkid=14202")]
public interface IComNativeDescriptorHandler
{
	[Token(Token = "0x6000ACF")]
	AttributeCollection GetAttributes(object component);

	[Token(Token = "0x6000AD0")]
	string GetClassName(object component);

	[Token(Token = "0x6000AD1")]
	TypeConverter GetConverter(object component);

	[Token(Token = "0x6000AD2")]
	EventDescriptor GetDefaultEvent(object component);

	[Token(Token = "0x6000AD3")]
	PropertyDescriptor GetDefaultProperty(object component);

	[Token(Token = "0x6000AD4")]
	object GetEditor(object component, Type baseEditorType);

	[Token(Token = "0x6000AD5")]
	string GetName(object component);

	[Token(Token = "0x6000AD6")]
	EventDescriptorCollection GetEvents(object component);

	[Token(Token = "0x6000AD7")]
	EventDescriptorCollection GetEvents(object component, Attribute[] attributes);

	[Token(Token = "0x6000AD8")]
	PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes);

	[Token(Token = "0x6000AD9")]
	object GetPropertyValue(object component, string propertyName, ref bool success);

	[Token(Token = "0x6000ADA")]
	object GetPropertyValue(object component, int dispid, ref bool success);
}
