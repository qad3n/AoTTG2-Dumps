// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ITypedList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
