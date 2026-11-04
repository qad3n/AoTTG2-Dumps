// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IListPropertyBagAccept
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200004A")]
public interface IListPropertyBagAccept<TContainer>
{
	[Token(Token = "0x600012E")]
	void Accept(IListPropertyBagVisitor visitor, ref TContainer container);
}
