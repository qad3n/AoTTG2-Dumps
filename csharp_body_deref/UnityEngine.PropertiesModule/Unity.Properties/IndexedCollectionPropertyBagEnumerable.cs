// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IndexedCollectionPropertyBagEnumerable
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000029")]
internal readonly struct IndexedCollectionPropertyBagEnumerable<TContainer>
{
	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x0")]
	private readonly IIndexedCollectionPropertyBagEnumerator<TContainer> m_Impl;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x0")]
	private readonly TContainer m_Container;

	[Token(Token = "0x600009C")]
	public IndexedCollectionPropertyBagEnumerable(IIndexedCollectionPropertyBagEnumerator<TContainer> impl, TContainer container)
	{
	}

	[Token(Token = "0x600009D")]
	public IndexedCollectionPropertyBagEnumerator<TContainer> GetEnumerator()
	{
		return default(IndexedCollectionPropertyBagEnumerator<TContainer>);
	}
}
