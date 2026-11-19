// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.ITypeDescriptorFilterService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x20001F9")]
public interface ITypeDescriptorFilterService
{
	[Token(Token = "0x6000DA4")]
	bool FilterAttributes(IComponent component, IDictionary attributes);

	[Token(Token = "0x6000DA5")]
	bool FilterEvents(IComponent component, IDictionary events);

	[Token(Token = "0x6000DA6")]
	bool FilterProperties(IComponent component, IDictionary properties);
}
