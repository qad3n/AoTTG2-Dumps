// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001A")]
public interface IPropertyBag
{
	[Token(Token = "0x6000052")]
	void Accept(ITypeVisitor visitor);
}
[Token(Token = "0x200001B")]
public interface IPropertyBag<TContainer> : IPropertyBag
{
}
