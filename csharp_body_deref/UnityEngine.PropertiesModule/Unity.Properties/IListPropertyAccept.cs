// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IListPropertyAccept
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200004E")]
public interface IListPropertyAccept<TList>
{
	[Token(Token = "0x6000132")]
	void Accept<TContainer>(IListPropertyVisitor visitor, Property<TContainer, TList> property, ref TContainer container, ref TList list);
}
