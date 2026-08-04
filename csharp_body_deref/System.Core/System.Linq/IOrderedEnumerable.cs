// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.IOrderedEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000034")]
public interface IOrderedEnumerable<TElement> : IEnumerable<TElement>, IEnumerable
{
	[Token(Token = "0x6000163")]
	IOrderedEnumerable<TElement> CreateOrderedEnumerable<TKey>(Func<TElement, TKey> keySelector, IComparer<TKey> comparer, bool descending);
}
