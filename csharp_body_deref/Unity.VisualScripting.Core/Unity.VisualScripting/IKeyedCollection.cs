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
