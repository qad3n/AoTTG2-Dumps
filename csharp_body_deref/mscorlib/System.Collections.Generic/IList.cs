// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x20005FD")]
public interface IList<T> : ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x170007AE")]
	T this[int index]
	{
		[Token(Token = "0x6002EF5")]
		get;
		[Token(Token = "0x6002EF6")]
		set;
	}

	[Token(Token = "0x6002EF7")]
	int IndexOf(T item);

	[Token(Token = "0x6002EF8")]
	void Insert(int index, T item);

	[Token(Token = "0x6002EF9")]
	void RemoveAt(int index);
}
