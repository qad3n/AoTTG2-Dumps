// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IReadOnlyDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000624")]
public interface IReadOnlyDictionary<TKey, TValue> : IReadOnlyCollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable
{
	[Token(Token = "0x170007B1")]
	TValue this[TKey key]
	{
		[Token(Token = "0x6002F22")]
		get;
	}

	[Token(Token = "0x170007B2")]
	IEnumerable<TKey> Keys
	{
		[Token(Token = "0x6002F23")]
		get;
	}

	[Token(Token = "0x170007B3")]
	IEnumerable<TValue> Values
	{
		[Token(Token = "0x6002F24")]
		get;
	}

	[Token(Token = "0x6002F20")]
	bool ContainsKey(TKey key);

	[Token(Token = "0x6002F21")]
	bool TryGetValue(TKey key, out TValue value);
}
