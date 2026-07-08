using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000650")]
public interface IReadOnlyDictionary<TKey, TValue> : IReadOnlyCollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable
{
	[Token(Token = "0x17000822")]
	TValue this[TKey key]
	{
		[Token(Token = "0x600320D")]
		get;
	}

	[Token(Token = "0x17000823")]
	IEnumerable<TKey> Keys
	{
		[Token(Token = "0x600320E")]
		get;
	}

	[Token(Token = "0x17000824")]
	IEnumerable<TValue> Values
	{
		[Token(Token = "0x600320F")]
		get;
	}

	[Token(Token = "0x600320B")]
	bool ContainsKey(TKey key);

	[Token(Token = "0x600320C")]
	bool TryGetValue(TKey key, out TValue value);
}
