using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005FF")]
public interface IList : ICollection, IEnumerable
{
	[Token(Token = "0x1700072B")]
	object this[int index]
	{
		[Token(Token = "0x6002ECB")]
		get;
		[Token(Token = "0x6002ECC")]
		set;
	}

	[Token(Token = "0x1700072C")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002ED0")]
		get;
	}

	[Token(Token = "0x1700072D")]
	bool IsFixedSize
	{
		[Token(Token = "0x6002ED1")]
		get;
	}

	[Token(Token = "0x6002ECD")]
	int Add(object value);

	[Token(Token = "0x6002ECE")]
	bool Contains(object value);

	[Token(Token = "0x6002ECF")]
	void Clear();

	[Token(Token = "0x6002ED2")]
	int IndexOf(object value);

	[Token(Token = "0x6002ED3")]
	void Insert(int index, object value);

	[Token(Token = "0x6002ED4")]
	void Remove(object value);

	[Token(Token = "0x6002ED5")]
	void RemoveAt(int index);
}
