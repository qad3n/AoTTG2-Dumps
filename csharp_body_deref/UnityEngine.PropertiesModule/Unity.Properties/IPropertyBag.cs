// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200002C")]
public interface IPropertyBag
{
	[Token(Token = "0x600009F")]
	void Accept(ITypeVisitor visitor);

	[Token(Token = "0x60000A0")]
	void Accept(IPropertyBagVisitor visitor, ref object container);
}
[Token(Token = "0x200002D")]
public interface IPropertyBag<TContainer> : IPropertyBag
{
	[Token(Token = "0x60000A1")]
	PropertyCollection<TContainer> GetProperties();

	[Token(Token = "0x60000A2")]
	PropertyCollection<TContainer> GetProperties(ref TContainer container);

	[Token(Token = "0x60000A3")]
	void Accept(IPropertyBagVisitor visitor, ref TContainer container);
}
