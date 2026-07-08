using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200064E")]
public interface IList<T> : ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x17000820")]
	T this[int index]
	{
		[Token(Token = "0x6003205")]
		get;
		[Token(Token = "0x6003206")]
		set;
	}

	[Token(Token = "0x6003207")]
	int IndexOf(T item);

	[Token(Token = "0x6003208")]
	void Insert(int index, T item);

	[Token(Token = "0x6003209")]
	void RemoveAt(int index);
}
