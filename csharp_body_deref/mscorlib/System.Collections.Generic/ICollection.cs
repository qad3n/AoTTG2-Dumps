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
