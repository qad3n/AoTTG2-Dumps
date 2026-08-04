// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.EnumerableSorter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000040")]
internal abstract class EnumerableSorter<TElement>
{
	[Token(Token = "0x600019E")]
	internal abstract void ComputeKeys(TElement[] elements, int count);

	[Token(Token = "0x600019F")]
	internal abstract int CompareKeys(int index1, int index2);

	[Token(Token = "0x60001A0")]
	internal int[] Sort(TElement[] elements, int count)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	private void QuickSort(int[] map, int left, int right)
	{
	}

	[Token(Token = "0x60001A2")]
	protected EnumerableSorter()
	{
	}
}
[Token(Token = "0x2000041")]
internal class EnumerableSorter<TElement, TKey> : EnumerableSorter<TElement>
{
	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x0")]
	internal Func<TElement, TKey> keySelector;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x0")]
	internal IComparer<TKey> comparer;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x0")]
	internal bool descending;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x0")]
	internal EnumerableSorter<TElement> next;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x0")]
	internal TKey[] keys;

	[Token(Token = "0x60001A3")]
	internal EnumerableSorter(Func<TElement, TKey> keySelector, IComparer<TKey> comparer, bool descending, EnumerableSorter<TElement> next)
	{
	}

	[Token(Token = "0x60001A4")]
	internal override void ComputeKeys(TElement[] elements, int count)
	{
	}

	[Token(Token = "0x60001A5")]
	internal override int CompareKeys(int index1, int index2)
	{
		return default(int);
	}
}
