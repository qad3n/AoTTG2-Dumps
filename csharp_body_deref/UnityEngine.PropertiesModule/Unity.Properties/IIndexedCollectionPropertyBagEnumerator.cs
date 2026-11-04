// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IIndexedCollectionPropertyBagEnumerator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200002B")]
internal interface IIndexedCollectionPropertyBagEnumerator<TContainer>
{
	[Token(Token = "0x60000A4")]
	int GetCount(ref TContainer container);

	[Token(Token = "0x60000A5")]
	IProperty<TContainer> GetSharedProperty();

	[Token(Token = "0x60000A6")]
	IndexedCollectionSharedPropertyState GetSharedPropertyState();

	[Token(Token = "0x60000A7")]
	void SetSharedPropertyState(IndexedCollectionSharedPropertyState state);
}
