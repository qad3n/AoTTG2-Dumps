using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200066B")]
internal class ArraySortHelper<T>
{
	[Token(Token = "0x4001B6D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.ArraySortHelper<T> s_defaultArraySortHelper;

	[Token(Token = "0x17000848")]
	public static System.Collections.Generic.ArraySortHelper<T> Default
	{
		[Token(Token = "0x60032E4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032D8")]
	public void Sort(T[] keys, int index, int length, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x60032D9")]
	public int BinarySearch(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60032DA")]
	internal static void Sort(T[] keys, int index, int length, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x60032DB")]
	internal static int InternalBinarySearch(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60032DC")]
	private static void SwapIfGreater(T[] keys, Comparison<T> comparer, int a, int b)
	{
	}

	[Token(Token = "0x60032DD")]
	private static void Swap(T[] a, int i, int j)
	{
	}

	[Token(Token = "0x60032DE")]
	internal static void IntrospectiveSort(T[] keys, int left, int length, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x60032DF")]
	private static void IntroSort(T[] keys, int lo, int hi, int depthLimit, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x60032E0")]
	private static int PickPivotAndPartition(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60032E1")]
	private static void Heapsort(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x60032E2")]
	private static void DownHeap(T[] keys, int i, int n, int lo, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x60032E3")]
	private static void InsertionSort(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x60032E5")]
	public ArraySortHelper()
	{
	}
}
[Token(Token = "0x200066C")]
internal class ArraySortHelper<TKey, TValue>
{
	[Token(Token = "0x4001B6E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.ArraySortHelper<TKey, TValue> s_defaultArraySortHelper;

	[Token(Token = "0x17000849")]
	public static System.Collections.Generic.ArraySortHelper<TKey, TValue> Default
	{
		[Token(Token = "0x60032F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032E7")]
	public void Sort(TKey[] keys, TValue[] values, int index, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60032E8")]
	private static void SwapIfGreaterWithItems(TKey[] keys, TValue[] values, IComparer<TKey> comparer, int a, int b)
	{
	}

	[Token(Token = "0x60032E9")]
	private static void Swap(TKey[] keys, TValue[] values, int i, int j)
	{
	}

	[Token(Token = "0x60032EA")]
	internal static void IntrospectiveSort(TKey[] keys, TValue[] values, int left, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60032EB")]
	private static void IntroSort(TKey[] keys, TValue[] values, int lo, int hi, int depthLimit, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60032EC")]
	private static int PickPivotAndPartition(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60032ED")]
	private static void Heapsort(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60032EE")]
	private static void DownHeap(TKey[] keys, TValue[] values, int i, int n, int lo, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60032EF")]
	private static void InsertionSort(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60032F1")]
	public ArraySortHelper()
	{
	}
}
