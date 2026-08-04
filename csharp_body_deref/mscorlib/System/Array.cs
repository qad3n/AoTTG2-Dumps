// ==================== AoTTG2 cross-reference ====================
// Type: System.Array
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000146")]
public abstract class Array : ICollection, IEnumerable, IList, IStructuralComparable, IStructuralEquatable, ICloneable
{
	[Token(Token = "0x2000147")]
	private sealed class ArrayEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x4000501")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Array _array;

		[Token(Token = "0x4000502")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x4000503")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int _endIndex;

		[Token(Token = "0x17000120")]
		public object Current
		{
			[Token(Token = "0x6000D30")]
			[Address(RVA = "0x3CE3520", Offset = "0x3CE3520", VA = "0x3CE3520", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x3CE3490", Offset = "0x3CE3490", VA = "0x3CE3490")]
		internal ArrayEnumerator(Array array)
		{
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x3CE34E0", Offset = "0x3CE34E0", VA = "0x3CE34E0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x3CE3500", Offset = "0x3CE3500", VA = "0x3CE3500", Slot = "6")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x3CE3510", Offset = "0x3CE3510", VA = "0x3CE3510", Slot = "7")]
		public object Clone()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)0)]
	[Token(Token = "0x2000148")]
	private class RawData
	{
		[Token(Token = "0x4000504")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public IntPtr Bounds;

		[Token(Token = "0x4000505")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public IntPtr Count;

		[Token(Token = "0x4000506")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public byte Data;
	}

	[Token(Token = "0x2000149")]
	internal struct InternalEnumerator<T> : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000507")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Array array;

		[Token(Token = "0x4000508")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int idx;

		[Token(Token = "0x17000121")]
		public T Current
		{
			[Token(Token = "0x6000D34")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000122")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D36")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D31")]
		internal InternalEnumerator(Array array)
		{
		}

		[Token(Token = "0x6000D32")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000D33")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D35")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200014A")]
	internal class EmptyInternalEnumerator<T> : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000509")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly EmptyInternalEnumerator<T> Value;

		[Token(Token = "0x17000123")]
		public T Current
		{
			[Token(Token = "0x6000D39")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000124")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D3A")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D37")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000D38")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D3B")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D3C")]
		public EmptyInternalEnumerator()
		{
		}
	}

	[Token(Token = "0x200014B")]
	private struct SorterObjectArray
	{
		[Token(Token = "0x400050A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object[] keys;

		[Token(Token = "0x400050B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private object[] items;

		[Token(Token = "0x400050C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IComparer comparer;

		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x3CE3630", Offset = "0x3CE3630", VA = "0x3CE3630")]
		internal SorterObjectArray(object[] keys, object[] items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x3CE36D0", Offset = "0x3CE36D0", VA = "0x3CE36D0")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x3CE3990", Offset = "0x3CE3990", VA = "0x3CE3990")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D41")]
		[Address(RVA = "0x3CE3B60", Offset = "0x3CE3B60", VA = "0x3CE3B60")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x3CE3B70", Offset = "0x3CE3B70", VA = "0x3CE3B70")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x3CE3CC0", Offset = "0x3CE3CC0", VA = "0x3CE3CC0")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x3CE4210", Offset = "0x3CE4210", VA = "0x3CE4210")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x3CE4180", Offset = "0x3CE4180", VA = "0x3CE4180")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x3CE44A0", Offset = "0x3CE44A0", VA = "0x3CE44A0")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x3CE3E20", Offset = "0x3CE3E20", VA = "0x3CE3E20")]
		private void InsertionSort(int lo, int hi)
		{
		}
	}

	[Token(Token = "0x200014C")]
	private struct SorterGenericArray
	{
		[Token(Token = "0x400050D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Array keys;

		[Token(Token = "0x400050E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Array items;

		[Token(Token = "0x400050F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IComparer comparer;

		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x3CE48F0", Offset = "0x3CE48F0", VA = "0x3CE48F0")]
		internal SorterGenericArray(Array keys, Array items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x3CE4990", Offset = "0x3CE4990", VA = "0x3CE4990")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x3CE4B60", Offset = "0x3CE4B60", VA = "0x3CE4B60")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x3CE4C30", Offset = "0x3CE4C30", VA = "0x3CE4C30")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x3CE4C40", Offset = "0x3CE4C40", VA = "0x3CE4C40")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x3CE4DA0", Offset = "0x3CE4DA0", VA = "0x3CE4DA0")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x3CE51B0", Offset = "0x3CE51B0", VA = "0x3CE51B0")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x3CE5120", Offset = "0x3CE5120", VA = "0x3CE5120")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D50")]
		[Address(RVA = "0x3CE5440", Offset = "0x3CE5440", VA = "0x3CE5440")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x3CE4F00", Offset = "0x3CE4F00", VA = "0x3CE4F00")]
		private void InsertionSort(int lo, int hi)
		{
		}
	}

	[Token(Token = "0x17000116")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x3CDE8C0", Offset = "0x3CDE8C0", VA = "0x3CDE8C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000117")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000C95")]
		[Address(RVA = "0x3CDE920", Offset = "0x3CDE920", VA = "0x3CDE920", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000118")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000C96")]
		[Address(RVA = "0x3CDE930", Offset = "0x3CDE930", VA = "0x3CDE930", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x3CDE940", Offset = "0x3CDE940", VA = "0x3CDE940", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public long LongLength
	{
		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x3CE0670", Offset = "0x3CE0670", VA = "0x3CE0670")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700011A")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x3CE0BC0", Offset = "0x3CE0BC0", VA = "0x3CE0BC0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x3CE0BD0", Offset = "0x3CE0BD0", VA = "0x3CE0BD0", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011C")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x3CE0BE0", Offset = "0x3CE0BE0", VA = "0x3CE0BE0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011D")]
	public object SyncRoot
	{
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x3CE0BF0", Offset = "0x3CE0BF0", VA = "0x3CE0BF0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	public int Length
	{
		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x3CD4250", Offset = "0x3CD4250", VA = "0x3CD4250")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011F")]
	public int Rank
	{
		[Token(Token = "0x6000D04")]
		[Address(RVA = "0x3CDEFA0", Offset = "0x3CDEFA0", VA = "0x3CDEFA0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x3CDE480", Offset = "0x3CDE480", VA = "0x3CDE480")]
	public static Array CreateInstance(Type elementType, params long[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000C92")]
	public static ReadOnlyCollection<T> AsReadOnly<T>(T[] array)
	{
		return null;
	}

	[Token(Token = "0x6000C93")]
	public static void Resize<T>(ref T[] array, int newSize)
	{
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x3CDEAB0", Offset = "0x3CDEAB0", VA = "0x3CDEAB0", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x3CDEB00", Offset = "0x3CDEB00", VA = "0x3CDEB00", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x3CDEBD0", Offset = "0x3CDEBD0", VA = "0x3CDEBD0", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x3CDEDB0", Offset = "0x3CDEDB0", VA = "0x3CDEDB0", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x3CDEDC0", Offset = "0x3CDEDC0", VA = "0x3CDEDC0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x3CDEE10", Offset = "0x3CDEE10", VA = "0x3CDEE10", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x3CDEE60", Offset = "0x3CDEE60", VA = "0x3CDEE60", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x3CDEEB0", Offset = "0x3CDEEB0", VA = "0x3CDEEB0", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x3CDF580", Offset = "0x3CDF580", VA = "0x3CDF580", Slot = "23")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x3CDF590", Offset = "0x3CDF590", VA = "0x3CDF590", Slot = "20")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x3CDF890", Offset = "0x3CDF890", VA = "0x3CDF890", Slot = "21")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x3CDFB20", Offset = "0x3CDFB20", VA = "0x3CDFB20")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x3CDFB30", Offset = "0x3CDFB30", VA = "0x3CDFB30", Slot = "22")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x3CDFD60", Offset = "0x3CDFD60", VA = "0x3CDFD60")]
	public static int BinarySearch(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA6")]
	public static TOutput[] ConvertAll<TInput, TOutput>(TInput[] array, Converter<TInput, TOutput> converter)
	{
		return null;
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x3CE03F0", Offset = "0x3CE03F0", VA = "0x3CE03F0")]
	public static void Copy(Array sourceArray, Array destinationArray, long length)
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x3CE0520", Offset = "0x3CE0520", VA = "0x3CE0520")]
	public static void Copy(Array sourceArray, long sourceIndex, Array destinationArray, long destinationIndex, long length)
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x3CE05F0", Offset = "0x3CE05F0", VA = "0x3CE05F0")]
	public void CopyTo(Array array, long index)
	{
	}

	[Token(Token = "0x6000CAA")]
	public static void ForEach<T>(T[] array, Action<T> action)
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x3CE06E0", Offset = "0x3CE06E0", VA = "0x3CE06E0")]
	public long GetLongLength(int dimension)
	{
		return default(long);
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x3CE06F0", Offset = "0x3CE06F0", VA = "0x3CE06F0")]
	public object GetValue(long index)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x3CE0770", Offset = "0x3CE0770", VA = "0x3CE0770")]
	public object GetValue(long index1, long index2)
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x3CE08F0", Offset = "0x3CE08F0", VA = "0x3CE08F0")]
	public object GetValue(long index1, long index2, long index3)
	{
		return null;
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x3CE0A40", Offset = "0x3CE0A40", VA = "0x3CE0A40")]
	public object GetValue(params long[] indices)
	{
		return null;
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x3CE0C00", Offset = "0x3CE0C00", VA = "0x3CE0C00")]
	public static int BinarySearch(Array array, int index, int length, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x3CE0C10", Offset = "0x3CE0C10", VA = "0x3CE0C10")]
	public static int BinarySearch(Array array, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x3CDFE20", Offset = "0x3CDFE20", VA = "0x3CDFE20")]
	public static int BinarySearch(Array array, int index, int length, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x3CE0CF0", Offset = "0x3CE0CF0", VA = "0x3CE0CF0")]
	private static int GetMedian(int low, int hi)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB9")]
	public static int BinarySearch<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBA")]
	public static int BinarySearch<T>(T[] array, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBB")]
	public static int BinarySearch<T>(T[] array, int index, int length, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBC")]
	public static int BinarySearch<T>(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x3CDEB10", Offset = "0x3CDEB10", VA = "0x3CDEB10")]
	public static int IndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x3CE1080", Offset = "0x3CE1080", VA = "0x3CE1080")]
	public static int IndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x3CE0D00", Offset = "0x3CE0D00", VA = "0x3CE0D00")]
	public static int IndexOf(Array array, object value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC0")]
	public static int IndexOf<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC1")]
	public static int IndexOf<T>(T[] array, T value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC2")]
	public static int IndexOf<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x3CE1160", Offset = "0x3CE1160", VA = "0x3CE1160")]
	public static int LastIndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x3CE15E0", Offset = "0x3CE15E0", VA = "0x3CE15E0")]
	public static int LastIndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x3CE1260", Offset = "0x3CE1260", VA = "0x3CE1260")]
	public static int LastIndexOf(Array array, object value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC6")]
	public static int LastIndexOf<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC7")]
	public static int LastIndexOf<T>(T[] array, T value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC8")]
	public static int LastIndexOf<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x3CE1640", Offset = "0x3CE1640", VA = "0x3CE1640")]
	public static void Reverse(Array array)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x3CE1700", Offset = "0x3CE1700", VA = "0x3CE1700")]
	public static void Reverse(Array array, int index, int length)
	{
	}

	[Token(Token = "0x6000CCB")]
	public static void Reverse<T>(T[] array)
	{
	}

	[Token(Token = "0x6000CCC")]
	public static void Reverse<T>(T[] array, int index, int length)
	{
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x3CE1990", Offset = "0x3CE1990", VA = "0x3CE1990")]
	public void SetValue(object value, long index)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x3CE1A10", Offset = "0x3CE1A10", VA = "0x3CE1A10")]
	public void SetValue(object value, long index1, long index2)
	{
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x3CE1BA0", Offset = "0x3CE1BA0", VA = "0x3CE1BA0")]
	public void SetValue(object value, long index1, long index2, long index3)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x3CE1D00", Offset = "0x3CE1D00", VA = "0x3CE1D00")]
	public void SetValue(object value, params long[] indices)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x3CE1E90", Offset = "0x3CE1E90", VA = "0x3CE1E90")]
	public static void Sort(Array array)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x3CE2220", Offset = "0x3CE2220", VA = "0x3CE2220")]
	public static void Sort(Array array, int index, int length)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x3CE2230", Offset = "0x3CE2230", VA = "0x3CE2230")]
	public static void Sort(Array array, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x3CE22F0", Offset = "0x3CE22F0", VA = "0x3CE22F0")]
	public static void Sort(Array array, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x3CE2300", Offset = "0x3CE2300", VA = "0x3CE2300")]
	public static void Sort(Array keys, Array items)
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x3CE23C0", Offset = "0x3CE23C0", VA = "0x3CE23C0")]
	public static void Sort(Array keys, Array items, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x3CE24A0", Offset = "0x3CE24A0", VA = "0x3CE24A0")]
	public static void Sort(Array keys, Array items, int index, int length)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x3CE1F50", Offset = "0x3CE1F50", VA = "0x3CE1F50")]
	public static void Sort(Array keys, Array items, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CD9")]
	public static void Sort<T>(T[] array)
	{
	}

	[Token(Token = "0x6000CDA")]
	public static void Sort<T>(T[] array, int index, int length)
	{
	}

	[Token(Token = "0x6000CDB")]
	public static void Sort<T>(T[] array, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000CDC")]
	public static void Sort<T>(T[] array, int index, int length, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000CDD")]
	public static void Sort<T>(T[] array, Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6000CDE")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items)
	{
	}

	[Token(Token = "0x6000CDF")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, int index, int length)
	{
	}

	[Token(Token = "0x6000CE0")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000CE1")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, int index, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000CE2")]
	public static bool Exists<T>(T[] array, Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE3")]
	public static void Fill<T>(T[] array, T value)
	{
	}

	[Token(Token = "0x6000CE4")]
	public static void Fill<T>(T[] array, T value, int startIndex, int count)
	{
	}

	[Token(Token = "0x6000CE5")]
	public static T Find<T>(T[] array, Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6000CE6")]
	public static T[] FindAll<T>(T[] array, Predicate<T> match)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	public static int FindIndex<T>(T[] array, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE8")]
	public static int FindIndex<T>(T[] array, int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE9")]
	public static int FindIndex<T>(T[] array, int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEA")]
	public static T FindLast<T>(T[] array, Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6000CEB")]
	public static int FindLastIndex<T>(T[] array, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEC")]
	public static int FindLastIndex<T>(T[] array, int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000CED")]
	public static int FindLastIndex<T>(T[] array, int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEE")]
	public static bool TrueForAll<T>(T[] array, Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x3CE25A0", Offset = "0x3CE25A0", VA = "0x3CE25A0", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x3CE25F0", Offset = "0x3CE25F0", VA = "0x3CE25F0")]
	private Array()
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x3CE2600", Offset = "0x3CE2600", VA = "0x3CE2600")]
	internal int InternalArray__ICollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x3CE2660", Offset = "0x3CE2660", VA = "0x3CE2660")]
	internal bool InternalArray__ICollection_get_IsReadOnly()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x3CE2670", Offset = "0x3CE2670", VA = "0x3CE2670")]
	internal unsafe ref byte GetRawSzArrayData()
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000CF4")]
	internal IEnumerator<T> InternalArray__IEnumerable_GetEnumerator<T>()
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x3CE2690", Offset = "0x3CE2690", VA = "0x3CE2690")]
	internal void InternalArray__ICollection_Clear()
	{
	}

	[Token(Token = "0x6000CF6")]
	internal void InternalArray__ICollection_Add<T>(T item)
	{
	}

	[Token(Token = "0x6000CF7")]
	internal bool InternalArray__ICollection_Remove<T>(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF8")]
	internal bool InternalArray__ICollection_Contains<T>(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF9")]
	internal void InternalArray__ICollection_CopyTo<T>(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000CFA")]
	internal T InternalArray__IReadOnlyList_get_Item<T>(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x3CE26E0", Offset = "0x3CE26E0", VA = "0x3CE26E0")]
	internal int InternalArray__IReadOnlyCollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000CFC")]
	internal void InternalArray__Insert<T>(int index, T item)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x3CE2740", Offset = "0x3CE2740", VA = "0x3CE2740")]
	internal void InternalArray__RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000CFE")]
	internal int InternalArray__IndexOf<T>(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFF")]
	internal T InternalArray__get_Item<T>(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D00")]
	internal void InternalArray__set_Item<T>(int index, T item)
	{
	}

	[Token(Token = "0x6000D01")]
	internal void GetGenericValueImpl<T>(int pos, out T value)
	{
	}

	[Token(Token = "0x6000D02")]
	internal void SetGenericValueImpl<T>(int pos, ref T value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x3CE2790", Offset = "0x3CE2790", VA = "0x3CE2790")]
	private extern int GetRank();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x3CE06D0", Offset = "0x3CE06D0", VA = "0x3CE06D0")]
	public extern int GetLength(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x3CDEC40", Offset = "0x3CDEC40", VA = "0x3CDEC40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public extern int GetLowerBound(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x3CE0BB0", Offset = "0x3CE0BB0", VA = "0x3CE0BB0")]
	public extern object GetValue(params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x3CE1E80", Offset = "0x3CE1E80", VA = "0x3CE1E80")]
	public extern void SetValue(object value, params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x3CE27A0", Offset = "0x3CE27A0", VA = "0x3CE27A0")]
	internal extern object GetValueImpl(int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x3CE27B0", Offset = "0x3CE27B0", VA = "0x3CE27B0")]
	internal extern void SetValueImpl(object value, int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x3CE27C0", Offset = "0x3CE27C0", VA = "0x3CE27C0")]
	internal static extern bool FastCopy(Array source, int source_idx, Array dest, int dest_idx, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x3CE27D0", Offset = "0x3CE27D0", VA = "0x3CE27D0")]
	internal static extern Array CreateInstanceImpl(Type elementType, int[] lengths, int[] bounds);

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x3CE27E0", Offset = "0x3CE27E0", VA = "0x3CE27E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public int GetUpperBound(int dimension)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x3CD42B0", Offset = "0x3CD42B0", VA = "0x3CD42B0")]
	public object GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x3CE0880", Offset = "0x3CE0880", VA = "0x3CE0880")]
	public object GetValue(int index1, int index2)
	{
		return null;
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x3CE09C0", Offset = "0x3CE09C0", VA = "0x3CE09C0")]
	public object GetValue(int index1, int index2, int index3)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x3CDE950", Offset = "0x3CDE950", VA = "0x3CDE950")]
	public void SetValue(object value, int index)
	{
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x3CE1B20", Offset = "0x3CE1B20", VA = "0x3CE1B20")]
	public void SetValue(object value, int index1, int index2)
	{
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x3CE1C70", Offset = "0x3CE1C70", VA = "0x3CE1C70")]
	public void SetValue(object value, int index1, int index2, int index3)
	{
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x3CE2810", Offset = "0x3CE2810", VA = "0x3CE2810")]
	internal static Array UnsafeCreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x3CE2C40", Offset = "0x3CE2C40", VA = "0x3CE2C40")]
	internal static Array UnsafeCreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x3CE2D20", Offset = "0x3CE2D20", VA = "0x3CE2D20")]
	internal static Array UnsafeCreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x3CE2D30", Offset = "0x3CE2D30", VA = "0x3CE2D30")]
	public static Array CreateInstance(Type elementType, int length)
	{
		return null;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x3CE2CB0", Offset = "0x3CE2CB0", VA = "0x3CE2CB0")]
	public static Array CreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x3CE2DA0", Offset = "0x3CE2DA0", VA = "0x3CE2DA0")]
	public static Array CreateInstance(Type elementType, int length1, int length2, int length3)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x3CDE5F0", Offset = "0x3CDE5F0", VA = "0x3CDE5F0")]
	public static Array CreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x3CE2820", Offset = "0x3CE2820", VA = "0x3CE2820")]
	public static Array CreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x3CDEC50", Offset = "0x3CDEC50", VA = "0x3CDEC50")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void Clear(Array array, int index, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x3CE2E20", Offset = "0x3CE2E20", VA = "0x3CE2E20")]
	private static extern void ClearInternal(Array a, int index, int count);

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x3CE0460", Offset = "0x3CE0460", VA = "0x3CE0460")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, Array destinationArray, int length)
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x3CDEFB0", Offset = "0x3CDEFB0", VA = "0x3CDEFB0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x3CE2E30", Offset = "0x3CE2E30", VA = "0x3CE2E30")]
	private static ArrayTypeMismatchException CreateArrayTypeMismatchException()
	{
		return null;
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x3CE2E70", Offset = "0x3CE2E70", VA = "0x3CE2E70")]
	private static bool CanAssignArrayElement(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x3CE2F50", Offset = "0x3CE2F50", VA = "0x3CE2F50")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void ConstrainedCopy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
	{
	}

	[Token(Token = "0x6000D24")]
	public static T[] Empty<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x3CE2F60", Offset = "0x3CE2F60", VA = "0x3CE2F60")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000D26")]
	private static int IndexOfImpl<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D27")]
	private static int LastIndexOfImpl<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x3CE24B0", Offset = "0x3CE24B0", VA = "0x3CE24B0")]
	private static void SortImpl(Array keys, Array items, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000D29")]
	internal static T UnsafeLoad<T>(T[] array, int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D2A")]
	internal static void UnsafeStore<T>(T[] array, int index, T value)
	{
	}

	[Token(Token = "0x6000D2B")]
	internal static R UnsafeMov<S, R>(S instance)
	{
		return (R)null;
	}
}
