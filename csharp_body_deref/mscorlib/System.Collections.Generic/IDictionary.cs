// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000647")]
public interface IDictionary<TKey, TValue> : ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable
{
	[Token(Token = "0x1700081C")]
	TValue this[TKey key]
	{
		[Token(Token = "0x60031F9")]
		get;
		[Token(Token = "0x60031FA")]
		set;
	}

	[Token(Token = "0x1700081D")]
	ICollection<TKey> Keys
	{
		[Token(Token = "0x60031FB")]
		get;
	}

	[Token(Token = "0x1700081E")]
	ICollection<TValue> Values
	{
		[Token(Token = "0x60031FC")]
		get;
	}

	[Token(Token = "0x60031FD")]
	bool ContainsKey(TKey key);

	[Token(Token = "0x60031FE")]
	void Add(TKey key, TValue value);

	[Token(Token = "0x60031FF")]
	bool Remove(TKey key);

	[Token(Token = "0x6003200")]
	bool TryGetValue(TKey key, out TValue value);
}
