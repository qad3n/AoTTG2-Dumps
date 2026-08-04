// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ICollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000644")]
public interface ICollection<T> : IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x1700081A")]
	int Count
	{
		[Token(Token = "0x60031F1")]
		get;
	}

	[Token(Token = "0x1700081B")]
	bool IsReadOnly
	{
		[Token(Token = "0x60031F2")]
		get;
	}

	[Token(Token = "0x60031F3")]
	void Add(T item);

	[Token(Token = "0x60031F4")]
	void Clear();

	[Token(Token = "0x60031F5")]
	bool Contains(T item);

	[Token(Token = "0x60031F6")]
	void CopyTo(T[] array, int arrayIndex);

	[Token(Token = "0x60031F7")]
	bool Remove(T item);
}
