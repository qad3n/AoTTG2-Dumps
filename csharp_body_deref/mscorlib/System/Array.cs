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
			[Address(RVA = "0x4FFDA00", Offset = "0x4FFDA00", VA = "0x4FFDA00", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x4FFD970", Offset = "0x4FFD970", VA = "0x4FFD970")]
		internal ArrayEnumerator(Array array)
		{
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x4FFD9C0", Offset = "0x4FFD9C0", VA = "0x4FFD9C0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x4FFD9E0", Offset = "0x4FFD9E0", VA = "0x4FFD9E0", Slot = "6")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x4FFD9F0", Offset = "0x4FFD9F0", VA = "0x4FFD9F0", Slot = "7")]
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
		[Address(RVA = "0x4FFDB10", Offset = "0x4FFDB10", VA = "0x4FFDB10")]
		internal SorterObjectArray(object[] keys, object[] items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x4FFDBB0", Offset = "0x4FFDBB0", VA = "0x4FFDBB0")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x4FFDE70", Offset = "0x4FFDE70", VA = "0x4FFDE70")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D41")]
		[Address(RVA = "0x4FFE040", Offset = "0x4FFE040", VA = "0x4FFE040")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x4FFE050", Offset = "0x4FFE050", VA = "0x4FFE050")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x4FFE1A0", Offset = "0x4FFE1A0", VA = "0x4FFE1A0")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x4FFE6F0", Offset = "0x4FFE6F0", VA = "0x4FFE6F0")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x4FFE660", Offset = "0x4FFE660", VA = "0x4FFE660")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x4FFE980", Offset = "0x4FFE980", VA = "0x4FFE980")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x4FFE300", Offset = "0x4FFE300", VA = "0x4FFE300")]
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
		[Address(RVA = "0x4FFEDD0", Offset = "0x4FFEDD0", VA = "0x4FFEDD0")]
		internal SorterGenericArray(Array keys, Array items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x4FFEE70", Offset = "0x4FFEE70", VA = "0x4FFEE70")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x4FFF040", Offset = "0x4FFF040", VA = "0x4FFF040")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x4FFF110", Offset = "0x4FFF110", VA = "0x4FFF110")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x4FFF120", Offset = "0x4FFF120", VA = "0x4FFF120")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x4FFF280", Offset = "0x4FFF280", VA = "0x4FFF280")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x4FFF690", Offset = "0x4FFF690", VA = "0x4FFF690")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x4FFF600", Offset = "0x4FFF600", VA = "0x4FFF600")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D50")]
		[Address(RVA = "0x4FFF920", Offset = "0x4FFF920", VA = "0x4FFF920")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x4FFF3E0", Offset = "0x4FFF3E0", VA = "0x4FFF3E0")]
		private void InsertionSort(int lo, int hi)
		{
		}
	}

	[Token(Token = "0x17000116")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x4FF8DA0", Offset = "0x4FF8DA0", VA = "0x4FF8DA0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000117")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000C95")]
		[Address(RVA = "0x4FF8E00", Offset = "0x4FF8E00", VA = "0x4FF8E00", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000118")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000C96")]
		[Address(RVA = "0x4FF8E10", Offset = "0x4FF8E10", VA = "0x4FF8E10", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x4FF8E20", Offset = "0x4FF8E20", VA = "0x4FF8E20", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public long LongLength
	{
		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x4FFAB50", Offset = "0x4FFAB50", VA = "0x4FFAB50")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700011A")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x4FFB0A0", Offset = "0x4FFB0A0", VA = "0x4FFB0A0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x4FFB0B0", Offset = "0x4FFB0B0", VA = "0x4FFB0B0", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011C")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x4FFB0C0", Offset = "0x4FFB0C0", VA = "0x4FFB0C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011D")]
	public object SyncRoot
	{
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x4FFB0D0", Offset = "0x4FFB0D0", VA = "0x4FFB0D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	public int Length
	{
		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x4FEE730", Offset = "0x4FEE730", VA = "0x4FEE730")]
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
		[Address(RVA = "0x4FF9480", Offset = "0x4FF9480", VA = "0x4FF9480")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4FF8960", Offset = "0x4FF8960", VA = "0x4FF8960")]
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
	[Address(RVA = "0x4FF8F90", Offset = "0x4FF8F90", VA = "0x4FF8F90", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x4FF8FE0", Offset = "0x4FF8FE0", VA = "0x4FF8FE0", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x4FF90B0", Offset = "0x4FF90B0", VA = "0x4FF90B0", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x4FF9290", Offset = "0x4FF9290", VA = "0x4FF9290", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x4FF92A0", Offset = "0x4FF92A0", VA = "0x4FF92A0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x4FF92F0", Offset = "0x4FF92F0", VA = "0x4FF92F0", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x4FF9340", Offset = "0x4FF9340", VA = "0x4FF9340", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x4FF9390", Offset = "0x4FF9390", VA = "0x4FF9390", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x4FF9A60", Offset = "0x4FF9A60", VA = "0x4FF9A60", Slot = "23")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x4FF9A70", Offset = "0x4FF9A70", VA = "0x4FF9A70", Slot = "20")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x4FF9D70", Offset = "0x4FF9D70", VA = "0x4FF9D70", Slot = "21")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x4FFA000", Offset = "0x4FFA000", VA = "0x4FFA000")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x4FFA010", Offset = "0x4FFA010", VA = "0x4FFA010", Slot = "22")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x4FFA240", Offset = "0x4FFA240", VA = "0x4FFA240")]
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
	[Address(RVA = "0x4FFA8D0", Offset = "0x4FFA8D0", VA = "0x4FFA8D0")]
	public static void Copy(Array sourceArray, Array destinationArray, long length)
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x4FFAA00", Offset = "0x4FFAA00", VA = "0x4FFAA00")]
	public static void Copy(Array sourceArray, long sourceIndex, Array destinationArray, long destinationIndex, long length)
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x4FFAAD0", Offset = "0x4FFAAD0", VA = "0x4FFAAD0")]
	public void CopyTo(Array array, long index)
	{
	}

	[Token(Token = "0x6000CAA")]
	public static void ForEach<T>(T[] array, Action<T> action)
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x4FFABC0", Offset = "0x4FFABC0", VA = "0x4FFABC0")]
	public long GetLongLength(int dimension)
	{
		return default(long);
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x4FFABD0", Offset = "0x4FFABD0", VA = "0x4FFABD0")]
	public object GetValue(long index)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4FFAC50", Offset = "0x4FFAC50", VA = "0x4FFAC50")]
	public object GetValue(long index1, long index2)
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4FFADD0", Offset = "0x4FFADD0", VA = "0x4FFADD0")]
	public object GetValue(long index1, long index2, long index3)
	{
		return null;
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4FFAF20", Offset = "0x4FFAF20", VA = "0x4FFAF20")]
	public object GetValue(params long[] indices)
	{
		return null;
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x4FFB0E0", Offset = "0x4FFB0E0", VA = "0x4FFB0E0")]
	public static int BinarySearch(Array array, int index, int length, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x4FFB0F0", Offset = "0x4FFB0F0", VA = "0x4FFB0F0")]
	public static int BinarySearch(Array array, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x4FFA300", Offset = "0x4FFA300", VA = "0x4FFA300")]
	public static int BinarySearch(Array array, int index, int length, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x4FFB1D0", Offset = "0x4FFB1D0", VA = "0x4FFB1D0")]
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
	[Address(RVA = "0x4FF8FF0", Offset = "0x4FF8FF0", VA = "0x4FF8FF0")]
	public static int IndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x4FFB560", Offset = "0x4FFB560", VA = "0x4FFB560")]
	public static int IndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x4FFB1E0", Offset = "0x4FFB1E0", VA = "0x4FFB1E0")]
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
	[Address(RVA = "0x4FFB640", Offset = "0x4FFB640", VA = "0x4FFB640")]
	public static int LastIndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x4FFBAC0", Offset = "0x4FFBAC0", VA = "0x4FFBAC0")]
	public static int LastIndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x4FFB740", Offset = "0x4FFB740", VA = "0x4FFB740")]
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
	[Address(RVA = "0x4FFBB20", Offset = "0x4FFBB20", VA = "0x4FFBB20")]
	public static void Reverse(Array array)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x4FFBBE0", Offset = "0x4FFBBE0", VA = "0x4FFBBE0")]
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
	[Address(RVA = "0x4FFBE70", Offset = "0x4FFBE70", VA = "0x4FFBE70")]
	public void SetValue(object value, long index)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4FFBEF0", Offset = "0x4FFBEF0", VA = "0x4FFBEF0")]
	public void SetValue(object value, long index1, long index2)
	{
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4FFC080", Offset = "0x4FFC080", VA = "0x4FFC080")]
	public void SetValue(object value, long index1, long index2, long index3)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4FFC1E0", Offset = "0x4FFC1E0", VA = "0x4FFC1E0")]
	public void SetValue(object value, params long[] indices)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x4FFC370", Offset = "0x4FFC370", VA = "0x4FFC370")]
	public static void Sort(Array array)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x4FFC700", Offset = "0x4FFC700", VA = "0x4FFC700")]
	public static void Sort(Array array, int index, int length)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x4FFC710", Offset = "0x4FFC710", VA = "0x4FFC710")]
	public static void Sort(Array array, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x4FFC7D0", Offset = "0x4FFC7D0", VA = "0x4FFC7D0")]
	public static void Sort(Array array, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x4FFC7E0", Offset = "0x4FFC7E0", VA = "0x4FFC7E0")]
	public static void Sort(Array keys, Array items)
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x4FFC8A0", Offset = "0x4FFC8A0", VA = "0x4FFC8A0")]
	public static void Sort(Array keys, Array items, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x4FFC980", Offset = "0x4FFC980", VA = "0x4FFC980")]
	public static void Sort(Array keys, Array items, int index, int length)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x4FFC430", Offset = "0x4FFC430", VA = "0x4FFC430")]
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
	[Address(RVA = "0x4FFCA80", Offset = "0x4FFCA80", VA = "0x4FFCA80", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x4FFCAD0", Offset = "0x4FFCAD0", VA = "0x4FFCAD0")]
	private Array()
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4FFCAE0", Offset = "0x4FFCAE0", VA = "0x4FFCAE0")]
	internal int InternalArray__ICollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x4FFCB40", Offset = "0x4FFCB40", VA = "0x4FFCB40")]
	internal bool InternalArray__ICollection_get_IsReadOnly()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x4FFCB50", Offset = "0x4FFCB50", VA = "0x4FFCB50")]
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
	[Address(RVA = "0x4FFCB70", Offset = "0x4FFCB70", VA = "0x4FFCB70")]
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
	[Address(RVA = "0x4FFCBC0", Offset = "0x4FFCBC0", VA = "0x4FFCBC0")]
	internal int InternalArray__IReadOnlyCollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000CFC")]
	internal void InternalArray__Insert<T>(int index, T item)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x4FFCC20", Offset = "0x4FFCC20", VA = "0x4FFCC20")]
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
	[Address(RVA = "0x4FFCC70", Offset = "0x4FFCC70", VA = "0x4FFCC70")]
	private extern int GetRank();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4FFABB0", Offset = "0x4FFABB0", VA = "0x4FFABB0")]
	public extern int GetLength(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x4FF9120", Offset = "0x4FF9120", VA = "0x4FF9120")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public extern int GetLowerBound(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x4FFB090", Offset = "0x4FFB090", VA = "0x4FFB090")]
	public extern object GetValue(params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x4FFC360", Offset = "0x4FFC360", VA = "0x4FFC360")]
	public extern void SetValue(object value, params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x4FFCC80", Offset = "0x4FFCC80", VA = "0x4FFCC80")]
	internal extern object GetValueImpl(int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x4FFCC90", Offset = "0x4FFCC90", VA = "0x4FFCC90")]
	internal extern void SetValueImpl(object value, int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x4FFCCA0", Offset = "0x4FFCCA0", VA = "0x4FFCCA0")]
	internal static extern bool FastCopy(Array source, int source_idx, Array dest, int dest_idx, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x4FFCCB0", Offset = "0x4FFCCB0", VA = "0x4FFCCB0")]
	internal static extern Array CreateInstanceImpl(Type elementType, int[] lengths, int[] bounds);

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x4FFCCC0", Offset = "0x4FFCCC0", VA = "0x4FFCCC0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public int GetUpperBound(int dimension)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x4FEE790", Offset = "0x4FEE790", VA = "0x4FEE790")]
	public object GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x4FFAD60", Offset = "0x4FFAD60", VA = "0x4FFAD60")]
	public object GetValue(int index1, int index2)
	{
		return null;
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x4FFAEA0", Offset = "0x4FFAEA0", VA = "0x4FFAEA0")]
	public object GetValue(int index1, int index2, int index3)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x4FF8E30", Offset = "0x4FF8E30", VA = "0x4FF8E30")]
	public void SetValue(object value, int index)
	{
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x4FFC000", Offset = "0x4FFC000", VA = "0x4FFC000")]
	public void SetValue(object value, int index1, int index2)
	{
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x4FFC150", Offset = "0x4FFC150", VA = "0x4FFC150")]
	public void SetValue(object value, int index1, int index2, int index3)
	{
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x4FFCCF0", Offset = "0x4FFCCF0", VA = "0x4FFCCF0")]
	internal static Array UnsafeCreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x4FFD120", Offset = "0x4FFD120", VA = "0x4FFD120")]
	internal static Array UnsafeCreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x4FFD200", Offset = "0x4FFD200", VA = "0x4FFD200")]
	internal static Array UnsafeCreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x4FFD210", Offset = "0x4FFD210", VA = "0x4FFD210")]
	public static Array CreateInstance(Type elementType, int length)
	{
		return null;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x4FFD190", Offset = "0x4FFD190", VA = "0x4FFD190")]
	public static Array CreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x4FFD280", Offset = "0x4FFD280", VA = "0x4FFD280")]
	public static Array CreateInstance(Type elementType, int length1, int length2, int length3)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x4FF8AD0", Offset = "0x4FF8AD0", VA = "0x4FF8AD0")]
	public static Array CreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x4FFCD00", Offset = "0x4FFCD00", VA = "0x4FFCD00")]
	public static Array CreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x4FF9130", Offset = "0x4FF9130", VA = "0x4FF9130")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void Clear(Array array, int index, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x4FFD300", Offset = "0x4FFD300", VA = "0x4FFD300")]
	private static extern void ClearInternal(Array a, int index, int count);

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4FFA940", Offset = "0x4FFA940", VA = "0x4FFA940")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, Array destinationArray, int length)
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4FF9490", Offset = "0x4FF9490", VA = "0x4FF9490")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x4FFD310", Offset = "0x4FFD310", VA = "0x4FFD310")]
	private static ArrayTypeMismatchException CreateArrayTypeMismatchException()
	{
		return null;
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4FFD350", Offset = "0x4FFD350", VA = "0x4FFD350")]
	private static bool CanAssignArrayElement(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x4FFD430", Offset = "0x4FFD430", VA = "0x4FFD430")]
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
	[Address(RVA = "0x4FFD440", Offset = "0x4FFD440", VA = "0x4FFD440")]
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
	[Address(RVA = "0x4FFC990", Offset = "0x4FFC990", VA = "0x4FFC990")]
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
