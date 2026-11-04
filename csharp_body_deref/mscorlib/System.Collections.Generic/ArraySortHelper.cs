// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ArraySortHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200063F")]
internal class ArraySortHelper<T>
{
	[Token(Token = "0x400196F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.ArraySortHelper<T> s_defaultArraySortHelper;

	[Token(Token = "0x170007D7")]
	public static System.Collections.Generic.ArraySortHelper<T> Default
	{
		[Token(Token = "0x6002FFE")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FF2")]
	public void Sort(T[] keys, int index, int length, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6002FF3")]
	public int BinarySearch(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002FF4")]
	internal static void Sort(T[] keys, int index, int length, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FF5")]
	internal static int InternalBinarySearch(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002FF6")]
	private static void SwapIfGreater(T[] keys, Comparison<T> comparer, int a, int b)
	{
	}

	[Token(Token = "0x6002FF7")]
	private static void Swap(T[] a, int i, int j)
	{
	}

	[Token(Token = "0x6002FF8")]
	internal static void IntrospectiveSort(T[] keys, int left, int length, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FF9")]
	private static void IntroSort(T[] keys, int lo, int hi, int depthLimit, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FFA")]
	private static int PickPivotAndPartition(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002FFB")]
	private static void Heapsort(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FFC")]
	private static void DownHeap(T[] keys, int i, int n, int lo, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FFD")]
	private static void InsertionSort(T[] keys, int lo, int hi, Comparison<T> comparer)
	{
	}

	[Token(Token = "0x6002FFF")]
	public ArraySortHelper()
	{
	}
}
[Token(Token = "0x2000640")]
internal class ArraySortHelper<TKey, TValue>
{
	[Token(Token = "0x4001970")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.ArraySortHelper<TKey, TValue> s_defaultArraySortHelper;

	[Token(Token = "0x170007D8")]
	public static System.Collections.Generic.ArraySortHelper<TKey, TValue> Default
	{
		[Token(Token = "0x600300A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003001")]
	public void Sort(TKey[] keys, TValue[] values, int index, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003002")]
	private static void SwapIfGreaterWithItems(TKey[] keys, TValue[] values, IComparer<TKey> comparer, int a, int b)
	{
	}

	[Token(Token = "0x6003003")]
	private static void Swap(TKey[] keys, TValue[] values, int i, int j)
	{
	}

	[Token(Token = "0x6003004")]
	internal static void IntrospectiveSort(TKey[] keys, TValue[] values, int left, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003005")]
	private static void IntroSort(TKey[] keys, TValue[] values, int lo, int hi, int depthLimit, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003006")]
	private static int PickPivotAndPartition(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6003007")]
	private static void Heapsort(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003008")]
	private static void DownHeap(TKey[] keys, TValue[] values, int i, int n, int lo, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003009")]
	private static void InsertionSort(TKey[] keys, TValue[] values, int lo, int hi, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600300B")]
	public ArraySortHelper()
	{
	}
}
