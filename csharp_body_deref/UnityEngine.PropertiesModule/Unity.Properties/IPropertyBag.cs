// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IPropertyBag
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000032")]
public interface IPropertyBag
{
	[Token(Token = "0x60000BE")]
	void Accept(ITypeVisitor visitor);

	[Token(Token = "0x60000BF")]
	void Accept(IPropertyBagVisitor visitor, ref object container);
}
[Token(Token = "0x2000033")]
public interface IPropertyBag<TContainer> : IPropertyBag
{
	[Token(Token = "0x60000C0")]
	PropertyCollection<TContainer> GetProperties();

	[Token(Token = "0x60000C1")]
	PropertyCollection<TContainer> GetProperties(ref TContainer container);

	[Token(Token = "0x60000C2")]
	void Accept(IPropertyBagVisitor visitor, ref TContainer container);
}
