// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200061B")]
public interface IDictionary<TKey, TValue> : ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable
{
	[Token(Token = "0x170007AB")]
	TValue this[TKey key]
	{
		[Token(Token = "0x6002F0E")]
		get;
		[Token(Token = "0x6002F0F")]
		set;
	}

	[Token(Token = "0x170007AC")]
	ICollection<TKey> Keys
	{
		[Token(Token = "0x6002F10")]
		get;
	}

	[Token(Token = "0x170007AD")]
	ICollection<TValue> Values
	{
		[Token(Token = "0x6002F11")]
		get;
	}

	[Token(Token = "0x6002F12")]
	bool ContainsKey(TKey key);

	[Token(Token = "0x6002F13")]
	void Add(TKey key, TValue value);

	[Token(Token = "0x6002F14")]
	bool Remove(TKey key);

	[Token(Token = "0x6002F15")]
	bool TryGetValue(TKey key, out TValue value);
}
