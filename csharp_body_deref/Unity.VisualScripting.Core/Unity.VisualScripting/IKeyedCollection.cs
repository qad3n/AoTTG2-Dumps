// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IKeyedCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000019")]
public interface IKeyedCollection<TKey, TItem> : ICollection<TItem>, IEnumerable<TItem>, IEnumerable
{
	[Token(Token = "0x1700001D")]
	TItem this[TKey key]
	{
		[Token(Token = "0x6000092")]
		get;
	}

	[Token(Token = "0x1700001E")]
	TItem this[int index]
	{
		[Token(Token = "0x6000093")]
		get;
	}

	[Token(Token = "0x6000094")]
	bool TryGetValue(TKey key, out TItem value);

	[Token(Token = "0x6000095")]
	bool Contains(TKey key);

	[Token(Token = "0x6000096")]
	bool Remove(TKey key);
}
