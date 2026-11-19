// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ICollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x20005F3")]
public interface ICollection<T> : IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x170007A8")]
	int Count
	{
		[Token(Token = "0x6002EE1")]
		get;
	}

	[Token(Token = "0x170007A9")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002EE2")]
		get;
	}

	[Token(Token = "0x6002EE3")]
	void Add(T item);

	[Token(Token = "0x6002EE4")]
	void Clear();

	[Token(Token = "0x6002EE5")]
	bool Contains(T item);

	[Token(Token = "0x6002EE6")]
	void CopyTo(T[] array, int arrayIndex);

	[Token(Token = "0x6002EE7")]
	bool Remove(T item);
}
