// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
