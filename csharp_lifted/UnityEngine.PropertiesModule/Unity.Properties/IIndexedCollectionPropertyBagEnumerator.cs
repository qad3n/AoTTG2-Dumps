// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IIndexedCollectionPropertyBagEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000034")]
internal interface IIndexedCollectionPropertyBagEnumerator<TContainer>
{
	[Token(Token = "0x60000AC")]
	int GetCount(ref TContainer container);

	[Token(Token = "0x60000AD")]
	IProperty<TContainer> GetSharedProperty();

	[Token(Token = "0x60000AE")]
	IndexedCollectionSharedPropertyState GetSharedPropertyState();

	[Token(Token = "0x60000AF")]
	void SetSharedPropertyState(IndexedCollectionSharedPropertyState state);
}
