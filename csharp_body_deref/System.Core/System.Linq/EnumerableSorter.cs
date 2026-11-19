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

[Token(Token = "0x2000041")]
internal abstract class EnumerableSorter<TElement>
{
	[Token(Token = "0x60001A8")]
	internal abstract void ComputeKeys(TElement[] elements, int count);

	[Token(Token = "0x60001A9")]
	internal abstract int CompareKeys(int index1, int index2);

	[Token(Token = "0x60001AA")]
	internal int[] Sort(TElement[] elements, int count)
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	private void QuickSort(int[] map, int left, int right)
	{
	}

	[Token(Token = "0x60001AC")]
	protected EnumerableSorter()
	{
	}
}
[Token(Token = "0x2000042")]
internal class EnumerableSorter<TElement, TKey> : EnumerableSorter<TElement>
{
	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x0")]
	internal Func<TElement, TKey> keySelector;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x0")]
	internal IComparer<TKey> comparer;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x0")]
	internal bool descending;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x0")]
	internal EnumerableSorter<TElement> next;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x0")]
	internal TKey[] keys;

	[Token(Token = "0x60001AD")]
	internal EnumerableSorter(Func<TElement, TKey> keySelector, IComparer<TKey> comparer, bool descending, EnumerableSorter<TElement> next)
	{
	}

	[Token(Token = "0x60001AE")]
	internal override void ComputeKeys(TElement[] elements, int count)
	{
	}

	[Token(Token = "0x60001AF")]
	internal override int CompareKeys(int index1, int index2)
	{
		return default(int);
	}
}
