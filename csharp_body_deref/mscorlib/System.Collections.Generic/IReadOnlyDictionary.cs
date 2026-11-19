// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IReadOnlyDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x20005FF")]
public interface IReadOnlyDictionary<TKey, TValue> : IReadOnlyCollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable
{
	[Token(Token = "0x170007B0")]
	TValue this[TKey key]
	{
		[Token(Token = "0x6002EFD")]
		get;
	}

	[Token(Token = "0x170007B1")]
	IEnumerable<TKey> Keys
	{
		[Token(Token = "0x6002EFE")]
		get;
	}

	[Token(Token = "0x170007B2")]
	IEnumerable<TValue> Values
	{
		[Token(Token = "0x6002EFF")]
		get;
	}

	[Token(Token = "0x6002EFB")]
	bool ContainsKey(TKey key);

	[Token(Token = "0x6002EFC")]
	bool TryGetValue(TKey key, out TValue value);
}
