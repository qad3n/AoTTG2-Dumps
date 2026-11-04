// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000622")]
public interface IList<T> : ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x170007AF")]
	T this[int index]
	{
		[Token(Token = "0x6002F1A")]
		get;
		[Token(Token = "0x6002F1B")]
		set;
	}

	[Token(Token = "0x6002F1C")]
	int IndexOf(T item);

	[Token(Token = "0x6002F1D")]
	void Insert(int index, T item);

	[Token(Token = "0x6002F1E")]
	void RemoveAt(int index);
}
