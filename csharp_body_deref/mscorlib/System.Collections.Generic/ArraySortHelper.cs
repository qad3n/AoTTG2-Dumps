// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ArraySortHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200061A")]
internal class ArraySortHelper<T>
{
	[Token(Token = "0x40018D6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.ArraySortHelper<T> s_defaultArraySortHelper;

	[Token(Token = "0x170007D6")]
	public static System.Collections.Generic.ArraySortHelper<T> Default
	{
		[Token(Token = "0x6002FDD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FD1")]
	public void Sort(T[] keys, int index, int length, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6002FD2")]
	public int BinarySearch(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002FD3")]
	internal static void Sort(T[] keys, int index, int length, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FD4")]
	internal static int InternalBinarySearch(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002FD5")]
	private static void SwapIfGreater(T[] keys, Comparison<T> comparer, int a, int b)
	{
	}

	[Token(Token = "0x6002FD6")]
	private static void Swap(T[] a, int i, int j)
	{
	}

	[Token(Token = "0x6002FD7")]
	internal static void IntrospectiveSort(T[] keys, int left, int length, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FD8")]
	private static void IntroSort(T[] keys, int lo, int hi, int depthLimit, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FD9")]
	private static int PickPivotAndPartition(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002FDA")]
	private static void Heapsort(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FDB")]
	private static void DownHeap(T[] keys, int i, int n, int lo, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FDC")]
	private static void InsertionSort(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FDE")]
	public ArraySortHelper()
	{
	}
}
[Token(Token = "0x200061B")]
internal class ArraySortHelper<TKey, TValue>
{
	[Token(Token = "0x40018D7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.ArraySortHelper<TKey, TValue> s_defaultArraySortHelper;

	[Token(Token = "0x170007D7")]
	public static System.Collections.Generic.ArraySortHelper<TKey, TValue> Default
	{
		[Token(Token = "0x6002FE9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FE0")]
	public void Sort(TKey[] keys, TValue[] values, int index, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002FE1")]
	private static void SwapIfGreaterWithItems(TKey[] keys, TValue[] values, IComparer<TKey> comparer, int a, int b)
	{
	}

	[Token(Token = "0x6002FE2")]
	private static void Swap(TKey[] keys, TValue[] values, int i, int j)
	{
	}

	[Token(Token = "0x6002FE3")]
	internal static void IntrospectiveSort(TKey[] keys, TValue[] values, int left, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002FE4")]
	private static void IntroSort(TKey[] keys, TValue[] values, int lo, int hi, int depthLimit, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002FE5")]
	private static int PickPivotAndPartition(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002FE6")]
	private static void Heapsort(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002FE7")]
	private static void DownHeap(TKey[] keys, TValue[] values, int i, int n, int lo, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002FE8")]
	private static void InsertionSort(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002FEA")]
	public ArraySortHelper()
	{
	}
}
