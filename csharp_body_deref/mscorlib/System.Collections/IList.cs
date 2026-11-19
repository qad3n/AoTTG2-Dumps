// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005AE")]
public interface IList : ICollection, IEnumerable
{
	[Token(Token = "0x170006B9")]
	object this[int index]
	{
		[Token(Token = "0x6002BB9")]
		get;
		[Token(Token = "0x6002BBA")]
		set;
	}

	[Token(Token = "0x170006BA")]
	bool IsReadOnly
	{
		[Token(Token = "0x6002BBE")]
		get;
	}

	[Token(Token = "0x170006BB")]
	bool IsFixedSize
	{
		[Token(Token = "0x6002BBF")]
		get;
	}

	[Token(Token = "0x6002BBB")]
	int Add(object value);

	[Token(Token = "0x6002BBC")]
	bool Contains(object value);

	[Token(Token = "0x6002BBD")]
	void Clear();

	[Token(Token = "0x6002BC0")]
	int IndexOf(object value);

	[Token(Token = "0x6002BC1")]
	void Insert(int index, object value);

	[Token(Token = "0x6002BC2")]
	void Remove(object value);

	[Token(Token = "0x6002BC3")]
	void RemoveAt(int index);
}
