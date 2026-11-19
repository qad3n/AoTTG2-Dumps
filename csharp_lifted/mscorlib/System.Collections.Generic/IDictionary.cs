// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x20005F6")]
public interface IDictionary<TKey, TValue> : ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable
{
	[Token(Token = "0x170007AA")]
	TValue this[TKey key]
	{
		[Token(Token = "0x6002EE9")]
		get;
		[Token(Token = "0x6002EEA")]
		set;
	}

	[Token(Token = "0x170007AB")]
	ICollection<TKey> Keys
	{
		[Token(Token = "0x6002EEB")]
		get;
	}

	[Token(Token = "0x170007AC")]
	ICollection<TValue> Values
	{
		[Token(Token = "0x6002EEC")]
		get;
	}

	[Token(Token = "0x6002EED")]
	bool ContainsKey(TKey key);

	[Token(Token = "0x6002EEE")]
	void Add(TKey key, TValue value);

	[Token(Token = "0x6002EEF")]
	bool Remove(TKey key);

	[Token(Token = "0x6002EF0")]
	bool TryGetValue(TKey key, out TValue value);
}
