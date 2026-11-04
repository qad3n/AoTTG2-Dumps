// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005D3")]
public interface IList : ICollection, IEnumerable
{
	[Token(Token = "0x170006B8")]
	object this[int index]
	{
		[Token(Token = "0x6002BDA")]
		get;
		[Token(Token = "0x6002BDB")]
		set;
	}

	[Token(Token = "0x170006B9")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002BDF")]
		get;
	}

	[Token(Token = "0x170006BA")]
	bool IsFixedSize
	{
		[Token(Token = "0x6002BE0")]
		get;
	}

	[Token(Token = "0x6002BDC")]
	int Add(object value);

	[Token(Token = "0x6002BDD")]
	bool Contains(object value);

	[Token(Token = "0x6002BDE")]
	void Clear();

	[Token(Token = "0x6002BE1")]
	int IndexOf(object value);

	[Token(Token = "0x6002BE2")]
	void Insert(int index, object value);

	[Token(Token = "0x6002BE3")]
	void Remove(object value);

	[Token(Token = "0x6002BE4")]
	void RemoveAt(int index);
}
