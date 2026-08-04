// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IUniTaskOrderedAsyncEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000034")]
public interface IUniTaskOrderedAsyncEnumerable<TElement> : IUniTaskAsyncEnumerable<TElement>
{
	[Token(Token = "0x6000114")]
	IUniTaskOrderedAsyncEnumerable<TElement> CreateOrderedEnumerable<TKey>(Func<TElement, TKey> keySelector, IComparer<TKey> comparer, bool descending);

	[Token(Token = "0x6000115")]
	IUniTaskOrderedAsyncEnumerable<TElement> CreateOrderedEnumerable<TKey>(Func<TElement, UniTask<TKey>> keySelector, IComparer<TKey> comparer, bool descending);

	[Token(Token = "0x6000116")]
	IUniTaskOrderedAsyncEnumerable<TElement> CreateOrderedEnumerable<TKey>(Func<TElement, CancellationToken, UniTask<TKey>> keySelector, IComparer<TKey> comparer, bool descending);
}
