// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ISet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200001E")]
public interface ISet<T> : ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x60000A9")]
	new bool Add(T item);

	[Token(Token = "0x60000AA")]
	void UnionWith(IEnumerable<T> other);

	[Token(Token = "0x60000AB")]
	void IntersectWith(IEnumerable<T> other);

	[Token(Token = "0x60000AC")]
	void ExceptWith(IEnumerable<T> other);

	[Token(Token = "0x60000AD")]
	void SymmetricExceptWith(IEnumerable<T> other);

	[Token(Token = "0x60000AE")]
	bool IsSubsetOf(IEnumerable<T> other);

	[Token(Token = "0x60000AF")]
	bool IsSupersetOf(IEnumerable<T> other);

	[Token(Token = "0x60000B0")]
	bool IsProperSupersetOf(IEnumerable<T> other);

	[Token(Token = "0x60000B1")]
	bool IsProperSubsetOf(IEnumerable<T> other);

	[Token(Token = "0x60000B2")]
	bool Overlaps(IEnumerable<T> other);

	[Token(Token = "0x60000B3")]
	bool SetEquals(IEnumerable<T> other);
}
