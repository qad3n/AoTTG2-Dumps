using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005FA")]
public interface IDictionary : ICollection, IEnumerable
{
	[Token(Token = "0x17000722")]
	object this[object key]
	{
		[Token(Token = "0x6002EB7")]
		get;
		[Token(Token = "0x6002EB8")]
		set;
	}

	[Token(Token = "0x17000723")]
	ICollection Keys
	{
		[Token(Token = "0x6002EB9")]
		get;
	}

	[Token(Token = "0x17000724")]
	ICollection Values
	{
		[Token(Token = "0x6002EBA")]
		get;
	}

	[Token(Token = "0x17000725")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002EBE")]
		get;
	}

	[Token(Token = "0x17000726")]
	bool IsFixedSize
	{
		[Token(Token = "0x6002EBF")]
		get;
	}

	[Token(Token = "0x6002EBB")]
	bool Contains(object key);

	[Token(Token = "0x6002EBC")]
	void Add(object key, object value);

	[Token(Token = "0x6002EBD")]
	void Clear();

	[Token(Token = "0x6002EC0")]
	new IDictionaryEnumerator GetEnumerator();

	[Token(Token = "0x6002EC1")]
	void Remove(object key);
}
