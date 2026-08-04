// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.GroupedEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x200003C")]
internal class GroupedEnumerable<TSource, TKey, TElement> : IEnumerable<IGrouping<TKey, TElement>>, IEnumerable
{
	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x0")]
	private IEnumerable<TSource> source;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x0")]
	private Func<TSource, TKey> keySelector;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	private Func<TSource, TElement> elementSelector;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> comparer;

	[Token(Token = "0x600018E")]
	public GroupedEnumerable(IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600018F")]
	public IEnumerator<IGrouping<TKey, TElement>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
