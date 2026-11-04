// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ICollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000618")]
public interface ICollection<T> : IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x170007A9")]
	int Count
	{
		[Token(Token = "0x6002F06")]
		get;
	}

	[Token(Token = "0x170007AA")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002F07")]
		get;
	}

	[Token(Token = "0x6002F08")]
	void Add(T item);

	[Token(Token = "0x6002F09")]
	void Clear();

	[Token(Token = "0x6002F0A")]
	bool Contains(T item);

	[Token(Token = "0x6002F0B")]
	void CopyTo(T[] array, int arrayIndex);

	[Token(Token = "0x6002F0C")]
	bool Remove(T item);
}
