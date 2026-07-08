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
