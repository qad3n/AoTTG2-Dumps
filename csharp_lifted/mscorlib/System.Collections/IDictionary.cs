// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005A9")]
public interface IDictionary : ICollection, IEnumerable
{
	[Token(Token = "0x170006B0")]
	object this[object key]
	{
		[Token(Token = "0x6002BA5")]
		get;
		[Token(Token = "0x6002BA6")]
		set;
	}

	[Token(Token = "0x170006B1")]
	ICollection Keys
	{
		[Token(Token = "0x6002BA7")]
		get;
	}

	[Token(Token = "0x170006B2")]
	ICollection Values
	{
		[Token(Token = "0x6002BA8")]
		get;
	}

	[Token(Token = "0x170006B3")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002BAC")]
		get;
	}

	[Token(Token = "0x170006B4")]
	bool IsFixedSize
	{
		[Token(Token = "0x6002BAD")]
		get;
	}

	[Token(Token = "0x6002BA9")]
	bool Contains(object key);

	[Token(Token = "0x6002BAA")]
	void Add(object key, object value);

	[Token(Token = "0x6002BAB")]
	void Clear();

	[Token(Token = "0x6002BAE")]
	new IDictionaryEnumerator GetEnumerator();

	[Token(Token = "0x6002BAF")]
	void Remove(object key);
}
