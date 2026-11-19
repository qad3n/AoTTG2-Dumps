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
		[Token(Token = "0x40004BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Array _array;

		[Token(Token = "0x40004BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x40004BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int _endIndex;

		[Token(Token = "0x17000121")]
		public object Current
		{
			[Token(Token = "0x6000D55")]
			[Address(RVA = "0x54E77A0", Offset = "0x54E67A0", VA = "0x54E77A0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x54E7710", Offset = "0x54E6710", VA = "0x54E7710")]
		internal ArrayEnumerator(Array array)
		{
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x54E7760", Offset = "0x54E6760", VA = "0x54E7760", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x54E7780", Offset = "0x54E6780", VA = "0x54E7780", Slot = "6")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x54E7790", Offset = "0x54E6790", VA = "0x54E7790", Slot = "7")]
		public object Clone()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)0)]
	[Token(Token = "0x2000148")]
	private class RawData
	{
		[Token(Token = "0x40004BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public IntPtr Bounds;

		[Token(Token = "0x40004C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public IntPtr Count;

		[Token(Token = "0x40004C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public byte Data;
	}

	[Token(Token = "0x2000149")]
	internal struct InternalEnumerator<T> : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40004C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Array array;

		[Token(Token = "0x40004C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int idx;

		[Token(Token = "0x17000122")]
		public T Current
		{
			[Token(Token = "0x6000D59")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000123")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D5B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D56")]
		internal InternalEnumerator(Array array)
		{
		}

		[Token(Token = "0x6000D57")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000D58")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D5A")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200014A")]
	internal class EmptyInternalEnumerator<T> : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40004C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly EmptyInternalEnumerator<T> Value;

		[Token(Token = "0x17000124")]
		public T Current
		{
			[Token(Token = "0x6000D5E")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000125")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D5F")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D5C")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000D5D")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D60")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D61")]
		public EmptyInternalEnumerator()
		{
		}
	}

	[Token(Token = "0x200014B")]
	private struct SorterObjectArray
	{
		[Token(Token = "0x40004C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object[] keys;

		[Token(Token = "0x40004C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private object[] items;

		[Token(Token = "0x40004C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IComparer comparer;

		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x54E78B0", Offset = "0x54E68B0", VA = "0x54E78B0")]
		internal SorterObjectArray(object[] keys, object[] items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x54E7950", Offset = "0x54E6950", VA = "0x54E7950")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x54E7C10", Offset = "0x54E6C10", VA = "0x54E7C10")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x54E7DF0", Offset = "0x54E6DF0", VA = "0x54E7DF0")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x54E7E00", Offset = "0x54E6E00", VA = "0x54E7E00")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D68")]
		[Address(RVA = "0x54E7F40", Offset = "0x54E6F40", VA = "0x54E7F40")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x54E8480", Offset = "0x54E7480", VA = "0x54E8480")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x54E83F0", Offset = "0x54E73F0", VA = "0x54E83F0")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x54E8710", Offset = "0x54E7710", VA = "0x54E8710")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x54E8090", Offset = "0x54E7090", VA = "0x54E8090")]
		private void InsertionSort(int lo, int hi)
		{
		}
	}

	[Token(Token = "0x200014C")]
	private struct SorterGenericArray
	{
		[Token(Token = "0x40004C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Array keys;

		[Token(Token = "0x40004C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Array items;

		[Token(Token = "0x40004CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IComparer comparer;

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x54E8B50", Offset = "0x54E7B50", VA = "0x54E8B50")]
		internal SorterGenericArray(Array keys, Array items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D6E")]
		[Address(RVA = "0x54E8BF0", Offset = "0x54E7BF0", VA = "0x54E8BF0")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x54E8DC0", Offset = "0x54E7DC0", VA = "0x54E8DC0")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D70")]
		[Address(RVA = "0x54E8E90", Offset = "0x54E7E90", VA = "0x54E8E90")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x54E8EA0", Offset = "0x54E7EA0", VA = "0x54E8EA0")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x54E8FF0", Offset = "0x54E7FF0", VA = "0x54E8FF0")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D73")]
		[Address(RVA = "0x54E93D0", Offset = "0x54E83D0", VA = "0x54E93D0")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x54E9340", Offset = "0x54E8340", VA = "0x54E9340")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x54E9660", Offset = "0x54E8660", VA = "0x54E9660")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x54E9140", Offset = "0x54E8140", VA = "0x54E9140")]
		private void InsertionSort(int lo, int hi)
		{
		}
	}

	[Token(Token = "0x17000117")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x54E2A50", Offset = "0x54E1A50", VA = "0x54E2A50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000118")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x54E2AB0", Offset = "0x54E1AB0", VA = "0x54E2AB0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000119")]
	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x54E2AC0", Offset = "0x54E1AC0", VA = "0x54E2AC0", Slot = "9")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x54E2AD0", Offset = "0x54E1AD0", VA = "0x54E2AD0", Slot = "10")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x1700011A")]
	public long LongLength
	{
		[Token(Token = "0x6000CD0")]
		[Address(RVA = "0x54E47A0", Offset = "0x54E37A0", VA = "0x54E47A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700011B")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6000CD6")]
		[Address(RVA = "0x54E4D00", Offset = "0x54E3D00", VA = "0x54E4D00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011C")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000CD7")]
		[Address(RVA = "0x54E4D10", Offset = "0x54E3D10", VA = "0x54E4D10", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011D")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000CD8")]
		[Address(RVA = "0x54E4D20", Offset = "0x54E3D20", VA = "0x54E4D20", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011E")]
	public object SyncRoot
	{
		[Token(Token = "0x6000CD9")]
		[Address(RVA = "0x54E4D30", Offset = "0x54E3D30", VA = "0x54E4D30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011F")]
	public int Length
	{
		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x54D82A0", Offset = "0x54D72A0", VA = "0x54D82A0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000120")]
	public int Rank
	{
		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x54E3140", Offset = "0x54E2140", VA = "0x54E3140")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x54E25E0", Offset = "0x54E15E0", VA = "0x54E25E0")]
	public static Array CreateInstance(Type elementType, params long[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000CB7")]
	public static ReadOnlyCollection<T> AsReadOnly<T>(T[] array)
	{
		return null;
	}

	[Token(Token = "0x6000CB8")]
	public static void Resize<T>(ref T[] array, int newSize)
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x54E2C40", Offset = "0x54E1C40", VA = "0x54E2C40", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x54E2C90", Offset = "0x54E1C90", VA = "0x54E2C90", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x54E2D60", Offset = "0x54E1D60", VA = "0x54E2D60", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x54E2F50", Offset = "0x54E1F50", VA = "0x54E2F50", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x54E2F60", Offset = "0x54E1F60", VA = "0x54E2F60", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x54E2FB0", Offset = "0x54E1FB0", VA = "0x54E2FB0", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x54E3000", Offset = "0x54E2000", VA = "0x54E3000", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x54E3050", Offset = "0x54E2050", VA = "0x54E3050", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x54E3710", Offset = "0x54E2710", VA = "0x54E3710", Slot = "23")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x54E3720", Offset = "0x54E2720", VA = "0x54E3720", Slot = "20")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x54E3A20", Offset = "0x54E2A20", VA = "0x54E3A20", Slot = "21")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x54E3CD0", Offset = "0x54E2CD0", VA = "0x54E3CD0")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x54E3CE0", Offset = "0x54E2CE0", VA = "0x54E3CE0", Slot = "22")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x54E3F10", Offset = "0x54E2F10", VA = "0x54E3F10")]
	public static int BinarySearch(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCB")]
	public static TOutput[] ConvertAll<TInput, TOutput>(TInput[] array, Converter<TInput, TOutput> converter)
	{
		return null;
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x54E4530", Offset = "0x54E3530", VA = "0x54E4530")]
	public static void Copy(Array sourceArray, Array destinationArray, long length)
	{
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x54E4660", Offset = "0x54E3660", VA = "0x54E4660")]
	public static void Copy(Array sourceArray, long sourceIndex, Array destinationArray, long destinationIndex, long length)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x54E4730", Offset = "0x54E3730", VA = "0x54E4730")]
	public void CopyTo(Array array, long index)
	{
	}

	[Token(Token = "0x6000CCF")]
	public static void ForEach<T>(T[] array, Action<T> action)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x54E4810", Offset = "0x54E3810", VA = "0x54E4810")]
	public long GetLongLength(int dimension)
	{
		return default(long);
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x54E4820", Offset = "0x54E3820", VA = "0x54E4820")]
	public object GetValue(long index)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x54E4890", Offset = "0x54E3890", VA = "0x54E4890")]
	public object GetValue(long index1, long index2)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x54E4A10", Offset = "0x54E3A10", VA = "0x54E4A10")]
	public object GetValue(long index1, long index2, long index3)
	{
		return null;
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x54E4B60", Offset = "0x54E3B60", VA = "0x54E4B60")]
	public object GetValue(params long[] indices)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x54E4D40", Offset = "0x54E3D40", VA = "0x54E4D40")]
	public static int BinarySearch(Array array, int index, int length, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x54E4D50", Offset = "0x54E3D50", VA = "0x54E4D50")]
	public static int BinarySearch(Array array, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x54E3FD0", Offset = "0x54E2FD0", VA = "0x54E3FD0")]
	public static int BinarySearch(Array array, int index, int length, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x54E4E30", Offset = "0x54E3E30", VA = "0x54E4E30")]
	private static int GetMedian(int low, int hi)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDE")]
	public static int BinarySearch<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDF")]
	public static int BinarySearch<T>(T[] array, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE0")]
	public static int BinarySearch<T>(T[] array, int index, int length, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE1")]
	public static int BinarySearch<T>(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x54E2CA0", Offset = "0x54E1CA0", VA = "0x54E2CA0")]
	public static int IndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x54E51C0", Offset = "0x54E41C0", VA = "0x54E51C0")]
	public static int IndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x54E4E40", Offset = "0x54E3E40", VA = "0x54E4E40")]
	public static int IndexOf(Array array, object value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE5")]
	public static int IndexOf<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE6")]
	public static int IndexOf<T>(T[] array, T value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE7")]
	public static int IndexOf<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x54E52A0", Offset = "0x54E42A0", VA = "0x54E52A0")]
	public static int LastIndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x54E5720", Offset = "0x54E4720", VA = "0x54E5720")]
	public static int LastIndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x54E53A0", Offset = "0x54E43A0", VA = "0x54E53A0")]
	public static int LastIndexOf(Array array, object value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEB")]
	public static int LastIndexOf<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEC")]
	public static int LastIndexOf<T>(T[] array, T value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000CED")]
	public static int LastIndexOf<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x54E5780", Offset = "0x54E4780", VA = "0x54E5780")]
	public static void Reverse(Array array)
	{
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x54E5840", Offset = "0x54E4840", VA = "0x54E5840")]
	public static void Reverse(Array array, int index, int length)
	{
	}

	[Token(Token = "0x6000CF0")]
	public static void Reverse<T>(T[] array)
	{
	}

	[Token(Token = "0x6000CF1")]
	public static void Reverse<T>(T[] array, int index, int length)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x54E5AB0", Offset = "0x54E4AB0", VA = "0x54E5AB0")]
	public void SetValue(object value, long index)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x54E5B20", Offset = "0x54E4B20", VA = "0x54E5B20")]
	public void SetValue(object value, long index1, long index2)
	{
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x54E5CB0", Offset = "0x54E4CB0", VA = "0x54E5CB0")]
	public void SetValue(object value, long index1, long index2, long index3)
	{
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x54E5E10", Offset = "0x54E4E10", VA = "0x54E5E10")]
	public void SetValue(object value, params long[] indices)
	{
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x54E5FC0", Offset = "0x54E4FC0", VA = "0x54E5FC0")]
	public static void Sort(Array array)
	{
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x54E6340", Offset = "0x54E5340", VA = "0x54E6340")]
	public static void Sort(Array array, int index, int length)
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x54E6350", Offset = "0x54E5350", VA = "0x54E6350")]
	public static void Sort(Array array, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x54E6410", Offset = "0x54E5410", VA = "0x54E6410")]
	public static void Sort(Array array, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x54E6420", Offset = "0x54E5420", VA = "0x54E6420")]
	public static void Sort(Array keys, Array items)
	{
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x54E64E0", Offset = "0x54E54E0", VA = "0x54E64E0")]
	public static void Sort(Array keys, Array items, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x54E65C0", Offset = "0x54E55C0", VA = "0x54E65C0")]
	public static void Sort(Array keys, Array items, int index, int length)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x54E6080", Offset = "0x54E5080", VA = "0x54E6080")]
	public static void Sort(Array keys, Array items, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000CFE")]
	public static void Sort<T>(T[] array)
	{
	}

	[Token(Token = "0x6000CFF")]
	public static void Sort<T>(T[] array, int index, int length)
	{
	}

	[Token(Token = "0x6000D00")]
	public static void Sort<T>(T[] array, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000D01")]
	public static void Sort<T>(T[] array, int index, int length, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000D02")]
	public static void Sort<T>(T[] array, Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6000D03")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items)
	{
	}

	[Token(Token = "0x6000D04")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, int index, int length)
	{
	}

	[Token(Token = "0x6000D05")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000D06")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, int index, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000D07")]
	public static bool Exists<T>(T[] array, Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D08")]
	public static void Fill<T>(T[] array, T value)
	{
	}

	[Token(Token = "0x6000D09")]
	public static void Fill<T>(T[] array, T value, int startIndex, int count)
	{
	}

	[Token(Token = "0x6000D0A")]
	public static T Find<T>(T[] array, Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D0B")]
	public static T[] FindAll<T>(T[] array, Predicate<T> match)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	public static int FindIndex<T>(T[] array, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0D")]
	public static int FindIndex<T>(T[] array, int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0E")]
	public static int FindIndex<T>(T[] array, int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0F")]
	public static T FindLast<T>(T[] array, Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D10")]
	public static int FindLastIndex<T>(T[] array, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D11")]
	public static int FindLastIndex<T>(T[] array, int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D12")]
	public static int FindLastIndex<T>(T[] array, int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D13")]
	public static bool TrueForAll<T>(T[] array, Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x54E66C0", Offset = "0x54E56C0", VA = "0x54E66C0", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x54E6710", Offset = "0x54E5710", VA = "0x54E6710")]
	private Array()
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x54E6720", Offset = "0x54E5720", VA = "0x54E6720")]
	internal int InternalArray__ICollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x54E6780", Offset = "0x54E5780", VA = "0x54E6780")]
	internal bool InternalArray__ICollection_get_IsReadOnly()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x54E6790", Offset = "0x54E5790", VA = "0x54E6790")]
	internal unsafe ref byte GetRawSzArrayData()
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000D19")]
	internal IEnumerator<T> InternalArray__IEnumerable_GetEnumerator<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x54E67B0", Offset = "0x54E57B0", VA = "0x54E67B0")]
	internal void InternalArray__ICollection_Clear()
	{
	}

	[Token(Token = "0x6000D1B")]
	internal void InternalArray__ICollection_Add<T>(T item)
	{
	}

	[Token(Token = "0x6000D1C")]
	internal bool InternalArray__ICollection_Remove<T>(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1D")]
	internal bool InternalArray__ICollection_Contains<T>(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1E")]
	internal void InternalArray__ICollection_CopyTo<T>(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000D1F")]
	internal T InternalArray__IReadOnlyList_get_Item<T>(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x54E6800", Offset = "0x54E5800", VA = "0x54E6800")]
	internal int InternalArray__IReadOnlyCollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000D21")]
	internal void InternalArray__Insert<T>(int index, T item)
	{
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x54E6860", Offset = "0x54E5860", VA = "0x54E6860")]
	internal void InternalArray__RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000D23")]
	internal int InternalArray__IndexOf<T>(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000D24")]
	internal T InternalArray__get_Item<T>(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D25")]
	internal void InternalArray__set_Item<T>(int index, T item)
	{
	}

	[Token(Token = "0x6000D26")]
	internal void GetGenericValueImpl<T>(int pos, out T value)
	{
	}

	[Token(Token = "0x6000D27")]
	internal void SetGenericValueImpl<T>(int pos, ref T value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x54E68B0", Offset = "0x54E58B0", VA = "0x54E68B0")]
	private extern int GetRank();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x54E4800", Offset = "0x54E3800", VA = "0x54E4800")]
	public extern int GetLength(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x54E2DE0", Offset = "0x54E1DE0", VA = "0x54E2DE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public extern int GetLowerBound(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x54E4CF0", Offset = "0x54E3CF0", VA = "0x54E4CF0")]
	public extern object GetValue(params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x54E5FB0", Offset = "0x54E4FB0", VA = "0x54E5FB0")]
	public extern void SetValue(object value, params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x54E68C0", Offset = "0x54E58C0", VA = "0x54E68C0")]
	internal extern object GetValueImpl(int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x54E68D0", Offset = "0x54E58D0", VA = "0x54E68D0")]
	internal extern void SetValueImpl(object value, int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x54E68E0", Offset = "0x54E58E0", VA = "0x54E68E0")]
	internal static extern bool FastCopy(Array source, int source_idx, Array dest, int dest_idx, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x54E68F0", Offset = "0x54E58F0", VA = "0x54E68F0")]
	internal static extern Array CreateInstanceImpl(Type elementType, int[] lengths, int[] bounds);

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x54E6900", Offset = "0x54E5900", VA = "0x54E6900")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public int GetUpperBound(int dimension)
	{
		return default(int);
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x54D8300", Offset = "0x54D7300", VA = "0x54D8300")]
	public object GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x54E49A0", Offset = "0x54E39A0", VA = "0x54E49A0")]
	public object GetValue(int index1, int index2)
	{
		return null;
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x54E4AE0", Offset = "0x54E3AE0", VA = "0x54E4AE0")]
	public object GetValue(int index1, int index2, int index3)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x54E2AE0", Offset = "0x54E1AE0", VA = "0x54E2AE0")]
	public void SetValue(object value, int index)
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x54E5C30", Offset = "0x54E4C30", VA = "0x54E5C30")]
	public void SetValue(object value, int index1, int index2)
	{
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x54E5D80", Offset = "0x54E4D80", VA = "0x54E5D80")]
	public void SetValue(object value, int index1, int index2, int index3)
	{
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x54E6930", Offset = "0x54E5930", VA = "0x54E6930")]
	internal static Array UnsafeCreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x54E6D60", Offset = "0x54E5D60", VA = "0x54E6D60")]
	internal static Array UnsafeCreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x54E6E40", Offset = "0x54E5E40", VA = "0x54E6E40")]
	internal static Array UnsafeCreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x54E6E50", Offset = "0x54E5E50", VA = "0x54E6E50")]
	public static Array CreateInstance(Type elementType, int length)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x54E6DD0", Offset = "0x54E5DD0", VA = "0x54E6DD0")]
	public static Array CreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x54E6EC0", Offset = "0x54E5EC0", VA = "0x54E6EC0")]
	public static Array CreateInstance(Type elementType, int length1, int length2, int length3)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x54E2760", Offset = "0x54E1760", VA = "0x54E2760")]
	public static Array CreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x54E6940", Offset = "0x54E5940", VA = "0x54E6940")]
	public static Array CreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x54E2DF0", Offset = "0x54E1DF0", VA = "0x54E2DF0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void Clear(Array array, int index, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x54E6F40", Offset = "0x54E5F40", VA = "0x54E6F40")]
	private static extern void ClearInternal(Array a, int index, int count);

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x54E45A0", Offset = "0x54E35A0", VA = "0x54E45A0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, Array destinationArray, int length)
	{
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x54E3150", Offset = "0x54E2150", VA = "0x54E3150")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
	{
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x54E6F50", Offset = "0x54E5F50", VA = "0x54E6F50")]
	private static ArrayTypeMismatchException CreateArrayTypeMismatchException()
	{
		return null;
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x54E6F90", Offset = "0x54E5F90", VA = "0x54E6F90")]
	private static bool CanAssignArrayElement(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x54E7070", Offset = "0x54E6070", VA = "0x54E7070")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void ConstrainedCopy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
	{
	}

	[Token(Token = "0x6000D49")]
	public static T[] Empty<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x54E7080", Offset = "0x54E6080", VA = "0x54E7080")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000D4B")]
	private static int IndexOfImpl<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4C")]
	private static int LastIndexOfImpl<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x54E65D0", Offset = "0x54E55D0", VA = "0x54E65D0")]
	private static void SortImpl(Array keys, Array items, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000D4E")]
	internal static T UnsafeLoad<T>(T[] array, int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D4F")]
	internal static void UnsafeStore<T>(T[] array, int index, T value)
	{
	}

	[Token(Token = "0x6000D50")]
	internal static R UnsafeMov<S, R>(S instance)
	{
		return (R)null;
	}
}
