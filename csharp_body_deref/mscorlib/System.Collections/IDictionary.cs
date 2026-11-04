// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005CE")]
public interface IDictionary : ICollection, IEnumerable
{
	[Token(Token = "0x170006AF")]
	object this[object key]
	{
		[Token(Token = "0x6002BC6")]
		get;
		[Token(Token = "0x6002BC7")]
		set;
	}

	[Token(Token = "0x170006B0")]
	ICollection Keys
	{
		[Token(Token = "0x6002BC8")]
		get;
	}

	[Token(Token = "0x170006B1")]
	ICollection Values
	{
		[Token(Token = "0x6002BC9")]
		get;
	}

	[Token(Token = "0x170006B2")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002BCD")]
		get;
	}

	[Token(Token = "0x170006B3")]
	bool IsFixedSize
	{
		[Token(Token = "0x6002BCE")]
		get;
	}

	[Token(Token = "0x6002BCA")]
	bool Contains(object key);

	[Token(Token = "0x6002BCB")]
	void Add(object key, object value);

	[Token(Token = "0x6002BCC")]
	void Clear();

	[Token(Token = "0x6002BCF")]
	new IDictionaryEnumerator GetEnumerator();

	[Token(Token = "0x6002BD0")]
	void Remove(object key);
}
