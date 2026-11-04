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
[Token(Token = "0x200016E")]
public abstract class Array : ICollection, IEnumerable, IList, IStructuralComparable, IStructuralEquatable, ICloneable
{
	[Token(Token = "0x200016F")]
	private sealed class ArrayEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x400055E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Array _array;

		[Token(Token = "0x400055F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x4000560")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int _endIndex;

		[Token(Token = "0x17000121")]
		public object Current
		{
			[Token(Token = "0x6000D7A")]
			[Address(RVA = "0x1B5B060", Offset = "0x1B59660", VA = "0x181B5B060", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x1B5B000", Offset = "0x1B59600", VA = "0x181B5B000")]
		internal ArrayEnumerator(Array array)
		{
		}

		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x1B5AFD0", Offset = "0x1B595D0", VA = "0x181B5AFD0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "6")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "7")]
		public object Clone()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)0)]
	[Token(Token = "0x2000170")]
	private class RawData
	{
		[Token(Token = "0x4000561")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public IntPtr Bounds;

		[Token(Token = "0x4000562")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public IntPtr Count;

		[Token(Token = "0x4000563")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public byte Data;
	}

	[Token(Token = "0x2000171")]
	internal struct InternalEnumerator<T> : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000564")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Array array;

		[Token(Token = "0x4000565")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int idx;

		[Token(Token = "0x17000122")]
		public T Current
		{
			[Token(Token = "0x6000D7E")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000123")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D7B")]
		internal InternalEnumerator(Array array)
		{
		}

		[Token(Token = "0x6000D7C")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000D7D")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D7F")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000172")]
	internal class EmptyInternalEnumerator<T> : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000566")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly EmptyInternalEnumerator<T> Value;

		[Token(Token = "0x17000124")]
		public T Current
		{
			[Token(Token = "0x6000D83")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000125")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D84")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D81")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000D82")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D85")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D86")]
		public EmptyInternalEnumerator()
		{
		}
	}

	[Token(Token = "0x2000173")]
	private struct SorterObjectArray
	{
		[Token(Token = "0x4000567")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object[] keys;

		[Token(Token = "0x4000568")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private object[] items;

		[Token(Token = "0x4000569")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IComparer comparer;

		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x1B7A420", Offset = "0x1B78A20", VA = "0x181B7A420")]
		internal SorterObjectArray(object[] keys, object[] items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x1B7A000", Offset = "0x1B78600", VA = "0x181B7A000")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x1B7A250", Offset = "0x1B78850", VA = "0x181B7A250")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D8B")]
		[Address(RVA = "0x1B79FF0", Offset = "0x1B785F0", VA = "0x181B79FF0")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x1B79D80", Offset = "0x1B78380", VA = "0x181B79D80")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x1B79CA0", Offset = "0x1B782A0", VA = "0x181B79CA0")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x1B79E70", Offset = "0x1B78470", VA = "0x181B79E70")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x1B79930", Offset = "0x1B77F30", VA = "0x181B79930")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x1B795B0", Offset = "0x1B77BB0", VA = "0x181B795B0")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x1B799C0", Offset = "0x1B77FC0", VA = "0x181B799C0")]
		private void InsertionSort(int lo, int hi)
		{
		}
	}

	[Token(Token = "0x2000174")]
	private struct SorterGenericArray
	{
		[Token(Token = "0x400056A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Array keys;

		[Token(Token = "0x400056B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Array items;

		[Token(Token = "0x400056C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IComparer comparer;

		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x1B79510", Offset = "0x1B77B10", VA = "0x181B79510")]
		internal SorterGenericArray(Array keys, Array items, IComparer comparer)
		{
		}

		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x1B792B0", Offset = "0x1B778B0", VA = "0x181B792B0")]
		internal void SwapIfGreaterWithItems(int a, int b)
		{
		}

		[Token(Token = "0x6000D94")]
		[Address(RVA = "0x1B79430", Offset = "0x1B77A30", VA = "0x181B79430")]
		private void Swap(int i, int j)
		{
		}

		[Token(Token = "0x6000D95")]
		[Address(RVA = "0x1B792A0", Offset = "0x1B778A0", VA = "0x181B792A0")]
		internal void Sort(int left, int length)
		{
		}

		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x1B79030", Offset = "0x1B77630", VA = "0x181B79030")]
		private void IntrospectiveSort(int left, int length)
		{
		}

		[Token(Token = "0x6000D97")]
		[Address(RVA = "0x1B78F50", Offset = "0x1B77550", VA = "0x181B78F50")]
		private void IntroSort(int lo, int hi, int depthLimit)
		{
		}

		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x1B79120", Offset = "0x1B77720", VA = "0x181B79120")]
		private int PickPivotAndPartition(int lo, int hi)
		{
			return default(int);
		}

		[Token(Token = "0x6000D99")]
		[Address(RVA = "0x1B78D20", Offset = "0x1B77320", VA = "0x181B78D20")]
		private void Heapsort(int lo, int hi)
		{
		}

		[Token(Token = "0x6000D9A")]
		[Address(RVA = "0x1B78AE0", Offset = "0x1B770E0", VA = "0x181B78AE0")]
		private void DownHeap(int i, int n, int lo)
		{
		}

		[Token(Token = "0x6000D9B")]
		[Address(RVA = "0x1B78DB0", Offset = "0x1B773B0", VA = "0x181B78DB0")]
		private void InsertionSort(int lo, int hi)
		{
		}
	}

	[Token(Token = "0x17000117")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000CDE")]
		[Address(RVA = "0x1B41100", Offset = "0x1B3F700", VA = "0x181B41100", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000118")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000CDF")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000119")]
	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x1B42ED0", Offset = "0x1B414D0", VA = "0x181B42ED0", Slot = "9")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x1B42EE0", Offset = "0x1B414E0", VA = "0x181B42EE0", Slot = "10")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x1700011A")]
	public long LongLength
	{
		[Token(Token = "0x6000CF5")]
		[Address(RVA = "0x1B43510", Offset = "0x1B41B10", VA = "0x181B43510")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700011B")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6000CFB")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011C")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011D")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011E")]
	public object SyncRoot
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011F")]
	public int Length
	{
		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x1B41100", Offset = "0x1B3F700", VA = "0x181B41100")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000120")]
	public int Rank
	{
		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x1B40320", Offset = "0x1B3E920", VA = "0x181B40320")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x1B400C0", Offset = "0x1B3E6C0", VA = "0x181B400C0")]
	public static Array CreateInstance(Type elementType, params long[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000CDC")]
	public static ReadOnlyCollection<T> AsReadOnly<T>(T[] array)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	public static void Resize<T>(ref T[] array, int newSize)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x1B42AE0", Offset = "0x1B410E0", VA = "0x181B42AE0", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x1B42CF0", Offset = "0x1B412F0", VA = "0x181B42CF0", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x1B42B30", Offset = "0x1B41130", VA = "0x181B42B30", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x1B40CE0", Offset = "0x1B3F2E0", VA = "0x181B40CE0", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x1B42DE0", Offset = "0x1B413E0", VA = "0x181B42DE0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x1B42E80", Offset = "0x1B41480", VA = "0x181B42E80", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x1B42E30", Offset = "0x1B41430", VA = "0x181B42E30", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x1B3EBB0", Offset = "0x1B3D1B0", VA = "0x181B3EBB0", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "23")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x1B42F00", Offset = "0x1B41500", VA = "0x181B42F00", Slot = "20")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x1B43140", Offset = "0x1B41740", VA = "0x181B43140", Slot = "21")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0xA43250", Offset = "0xA41850", VA = "0x180A43250")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x1B43310", Offset = "0x1B41910", VA = "0x181B43310", Slot = "22")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x1B3E1D0", Offset = "0x1B3C7D0", VA = "0x181B3E1D0")]
	public static int BinarySearch(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CF0")]
	public static TOutput[] ConvertAll<TInput, TOutput>(TInput[] array, Converter<TInput, TOutput> converter)
	{
		return null;
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x1B3ECB0", Offset = "0x1B3D2B0", VA = "0x181B3ECB0")]
	public static void Copy(Array sourceArray, Array destinationArray, long length)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x1B3EF10", Offset = "0x1B3D510", VA = "0x181B3EF10")]
	public static void Copy(Array sourceArray, long sourceIndex, Array destinationArray, long destinationIndex, long length)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x1B3EA40", Offset = "0x1B3D040", VA = "0x181B3EA40")]
	public void CopyTo(Array array, long index)
	{
	}

	[Token(Token = "0x6000CF4")]
	public static void ForEach<T>(T[] array, Action<T> action)
	{
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x1B402F0", Offset = "0x1B3E8F0", VA = "0x181B402F0")]
	public long GetLongLength(int dimension)
	{
		return default(long);
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x1B406C0", Offset = "0x1B3ECC0", VA = "0x181B406C0")]
	public object GetValue(long index)
	{
		return null;
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x1B40550", Offset = "0x1B3EB50", VA = "0x181B40550")]
	public object GetValue(long index1, long index2)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x1B40A20", Offset = "0x1B3F020", VA = "0x181B40A20")]
	public object GetValue(long index1, long index2, long index3)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x1B40760", Offset = "0x1B3ED60", VA = "0x181B40760")]
	public object GetValue(params long[] indices)
	{
		return null;
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x1B3E760", Offset = "0x1B3CD60", VA = "0x181B3E760")]
	public static int BinarySearch(Array array, int index, int length, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x1B3E2C0", Offset = "0x1B3C8C0", VA = "0x181B3E2C0")]
	public static int BinarySearch(Array array, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x1B3E3B0", Offset = "0x1B3C9B0", VA = "0x181B3E3B0")]
	public static int BinarySearch(Array array, int index, int length, object value, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x1B40310", Offset = "0x1B3E910", VA = "0x181B40310")]
	private static int GetMedian(int low, int hi)
	{
		return default(int);
	}

	[Token(Token = "0x6000D03")]
	public static int BinarySearch<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D04")]
	public static int BinarySearch<T>(T[] array, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000D05")]
	public static int BinarySearch<T>(T[] array, int index, int length, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D06")]
	public static int BinarySearch<T>(T[] array, int index, int length, T value, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x1B40CE0", Offset = "0x1B3F2E0", VA = "0x181B40CE0")]
	public static int IndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x1B40BF0", Offset = "0x1B3F1F0", VA = "0x181B40BF0")]
	public static int IndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x1B40DD0", Offset = "0x1B3F3D0", VA = "0x181B40DD0")]
	public static int IndexOf(Array array, object value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0A")]
	public static int IndexOf<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0B")]
	public static int IndexOf<T>(T[] array, T value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0C")]
	public static int IndexOf<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x1B411B0", Offset = "0x1B3F7B0", VA = "0x181B411B0")]
	public static int LastIndexOf(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x1B412D0", Offset = "0x1B3F8D0", VA = "0x181B412D0")]
	public static int LastIndexOf(Array array, object value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x1B41350", Offset = "0x1B3F950", VA = "0x181B41350")]
	public static int LastIndexOf(Array array, object value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D10")]
	public static int LastIndexOf<T>(T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D11")]
	public static int LastIndexOf<T>(T[] array, T value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000D12")]
	public static int LastIndexOf<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x1B416B0", Offset = "0x1B3FCB0", VA = "0x181B416B0")]
	public static void Reverse(Array array)
	{
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x1B41780", Offset = "0x1B3FD80", VA = "0x181B41780")]
	public static void Reverse(Array array, int index, int length)
	{
	}

	[Token(Token = "0x6000D15")]
	public static void Reverse<T>(T[] array)
	{
	}

	[Token(Token = "0x6000D16")]
	public static void Reverse<T>(T[] array, int index, int length)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x1B41CF0", Offset = "0x1B402F0", VA = "0x181B41CF0")]
	public void SetValue(object value, long index)
	{
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x1B42120", Offset = "0x1B40720", VA = "0x181B42120")]
	public void SetValue(object value, long index1, long index2)
	{
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x1B41D90", Offset = "0x1B40390", VA = "0x181B41D90")]
	public void SetValue(object value, long index1, long index2, long index3)
	{
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x1B41A90", Offset = "0x1B40090", VA = "0x181B41A90")]
	public void SetValue(object value, params long[] indices)
	{
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x1B427F0", Offset = "0x1B40DF0", VA = "0x181B427F0")]
	public static void Sort(Array array)
	{
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x1B427C0", Offset = "0x1B40DC0", VA = "0x181B427C0")]
	public static void Sort(Array array, int index, int length)
	{
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x1B428D0", Offset = "0x1B40ED0", VA = "0x181B428D0")]
	public static void Sort(Array array, IComparer comparer)
	{
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x1B429C0", Offset = "0x1B40FC0", VA = "0x181B429C0")]
	public static void Sort(Array array, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x1B429F0", Offset = "0x1B40FF0", VA = "0x181B429F0")]
	public static void Sort(Array keys, Array items)
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x1B426D0", Offset = "0x1B40CD0", VA = "0x181B426D0")]
	public static void Sort(Array keys, Array items, IComparer comparer)
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x1B426B0", Offset = "0x1B40CB0", VA = "0x181B426B0")]
	public static void Sort(Array keys, Array items, int index, int length)
	{
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x1B42380", Offset = "0x1B40980", VA = "0x181B42380")]
	public static void Sort(Array keys, Array items, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000D23")]
	public static void Sort<T>(T[] array)
	{
	}

	[Token(Token = "0x6000D24")]
	public static void Sort<T>(T[] array, int index, int length)
	{
	}

	[Token(Token = "0x6000D25")]
	public static void Sort<T>(T[] array, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000D26")]
	public static void Sort<T>(T[] array, int index, int length, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000D27")]
	public static void Sort<T>(T[] array, Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6000D28")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items)
	{
	}

	[Token(Token = "0x6000D29")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, int index, int length)
	{
	}

	[Token(Token = "0x6000D2A")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000D2B")]
	public static void Sort<TKey, TValue>(TKey[] keys, TValue[] items, int index, int length, IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000D2C")]
	public static bool Exists<T>(T[] array, Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2D")]
	public static void Fill<T>(T[] array, T value)
	{
	}

	[Token(Token = "0x6000D2E")]
	public static void Fill<T>(T[] array, T value, int startIndex, int count)
	{
	}

	[Token(Token = "0x6000D2F")]
	public static T Find<T>(T[] array, Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D30")]
	public static T[] FindAll<T>(T[] array, Predicate<T> match)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	public static int FindIndex<T>(T[] array, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D32")]
	public static int FindIndex<T>(T[] array, int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D33")]
	public static int FindIndex<T>(T[] array, int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D34")]
	public static T FindLast<T>(T[] array, Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D35")]
	public static int FindLastIndex<T>(T[] array, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D36")]
	public static int FindLastIndex<T>(T[] array, int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D37")]
	public static int FindLastIndex<T>(T[] array, int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D38")]
	public static bool TrueForAll<T>(T[] array, Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x1B40280", Offset = "0x1B3E880", VA = "0x181B40280", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private Array()
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x1B41100", Offset = "0x1B3F700", VA = "0x181B41100")]
	internal int InternalArray__ICollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	internal bool InternalArray__ICollection_get_IsReadOnly()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x1B40330", Offset = "0x1B3E930", VA = "0x181B40330")]
	internal unsafe ref byte GetRawSzArrayData()
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000D3E")]
	internal IEnumerator<T> InternalArray__IEnumerable_GetEnumerator<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x1B410B0", Offset = "0x1B3F6B0", VA = "0x181B410B0")]
	internal void InternalArray__ICollection_Clear()
	{
	}

	[Token(Token = "0x6000D40")]
	internal void InternalArray__ICollection_Add<T>(T item)
	{
	}

	[Token(Token = "0x6000D41")]
	internal bool InternalArray__ICollection_Remove<T>(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D42")]
	internal bool InternalArray__ICollection_Contains<T>(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D43")]
	internal void InternalArray__ICollection_CopyTo<T>(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000D44")]
	internal T InternalArray__IReadOnlyList_get_Item<T>(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x1B41100", Offset = "0x1B3F700", VA = "0x181B41100")]
	internal int InternalArray__IReadOnlyCollection_get_Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000D46")]
	internal void InternalArray__Insert<T>(int index, T item)
	{
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x1B41160", Offset = "0x1B3F760", VA = "0x181B41160")]
	internal void InternalArray__RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000D48")]
	internal int InternalArray__IndexOf<T>(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000D49")]
	internal T InternalArray__get_Item<T>(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D4A")]
	internal void InternalArray__set_Item<T>(int index, T item)
	{
	}

	[Token(Token = "0x6000D4B")]
	internal void GetGenericValueImpl<T>(int pos, out T value)
	{
	}

	[Token(Token = "0x6000D4C")]
	internal void SetGenericValueImpl<T>(int pos, ref T value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x1B40320", Offset = "0x1B3E920", VA = "0x181B40320")]
	private extern int GetRank();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x1B402E0", Offset = "0x1B3E8E0", VA = "0x181B402E0")]
	public extern int GetLength(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x1B40300", Offset = "0x1B3E900", VA = "0x181B40300")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public extern int GetLowerBound(int dimension);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x1B406B0", Offset = "0x1B3ECB0", VA = "0x181B406B0")]
	public extern object GetValue(params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x1B41CE0", Offset = "0x1B402E0", VA = "0x181B41CE0")]
	public extern void SetValue(object value, params int[] indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x1B40390", Offset = "0x1B3E990", VA = "0x181B40390")]
	internal extern object GetValueImpl(int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x1B419F0", Offset = "0x1B3FFF0", VA = "0x181B419F0")]
	internal extern void SetValueImpl(object value, int pos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x1B40270", Offset = "0x1B3E870", VA = "0x181B40270")]
	internal static extern bool FastCopy(Array source, int source_idx, Array dest, int dest_idx, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x1B3F6E0", Offset = "0x1B3DCE0", VA = "0x181B3F6E0")]
	internal static extern Array CreateInstanceImpl(Type elementType, int[] lengths, int[] bounds);

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x1B40350", Offset = "0x1B3E950", VA = "0x181B40350")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public int GetUpperBound(int dimension)
	{
		return default(int);
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x1B403A0", Offset = "0x1B3E9A0", VA = "0x181B403A0")]
	public object GetValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x1B40910", Offset = "0x1B3EF10", VA = "0x181B40910")]
	public object GetValue(int index1, int index2)
	{
		return null;
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x1B409A0", Offset = "0x1B3EFA0", VA = "0x181B409A0")]
	public object GetValue(int index1, int index2, int index3)
	{
		return null;
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x1B41F70", Offset = "0x1B40570", VA = "0x181B41F70")]
	public void SetValue(object value, int index)
	{
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x1B41C60", Offset = "0x1B40260", VA = "0x181B41C60")]
	public void SetValue(object value, int index1, int index2)
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x1B41A00", Offset = "0x1B40000", VA = "0x181B41A00")]
	public void SetValue(object value, int index1, int index2, int index3)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x1B434F0", Offset = "0x1B41AF0", VA = "0x181B434F0")]
	internal static Array UnsafeCreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x1B3F760", Offset = "0x1B3DD60", VA = "0x181B3F760")]
	internal static Array UnsafeCreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x1B43500", Offset = "0x1B41B00", VA = "0x181B43500")]
	internal static Array UnsafeCreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x1B3F6F0", Offset = "0x1B3DCF0", VA = "0x181B3F6F0")]
	public static Array CreateInstance(Type elementType, int length)
	{
		return null;
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x1B3F760", Offset = "0x1B3DD60", VA = "0x181B3F760")]
	public static Array CreateInstance(Type elementType, int length1, int length2)
	{
		return null;
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x1B40030", Offset = "0x1B3E630", VA = "0x181B40030")]
	public static Array CreateInstance(Type elementType, int length1, int length2, int length3)
	{
		return null;
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x1B3F7F0", Offset = "0x1B3DDF0", VA = "0x181B3F7F0")]
	public static Array CreateInstance(Type elementType, params int[] lengths)
	{
		return null;
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x1B3FB00", Offset = "0x1B3E100", VA = "0x181B3FB00")]
	public static Array CreateInstance(Type elementType, int[] lengths, int[] lowerBounds)
	{
		return null;
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x1B3E8A0", Offset = "0x1B3CEA0", VA = "0x181B3E8A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void Clear(Array array, int index, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x1B3E890", Offset = "0x1B3CE90", VA = "0x181B3E890")]
	private static extern void ClearInternal(Array a, int index, int count);

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x1B3EE20", Offset = "0x1B3D420", VA = "0x181B3EE20")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, Array destinationArray, int length)
	{
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x1B3F080", Offset = "0x1B3D680", VA = "0x181B3F080")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static void Copy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x1B3F690", Offset = "0x1B3DC90", VA = "0x181B3F690")]
	private static ArrayTypeMismatchException CreateArrayTypeMismatchException()
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x1B3E780", Offset = "0x1B3CD80", VA = "0x181B3E780")]
	private static bool CanAssignArrayElement(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x1B3EA30", Offset = "0x1B3D030", VA = "0x181B3EA30")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void ConstrainedCopy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
	{
	}

	[Token(Token = "0x6000D6E")]
	public static T[] Empty<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000D70")]
	private static int IndexOfImpl<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D71")]
	private static int LastIndexOfImpl<T>(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x1B42280", Offset = "0x1B40880", VA = "0x181B42280")]
	private static void SortImpl(Array keys, Array items, int index, int length, IComparer comparer)
	{
	}

	[Token(Token = "0x6000D73")]
	internal static T UnsafeLoad<T>(T[] array, int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D74")]
	internal static void UnsafeStore<T>(T[] array, int index, T value)
	{
	}

	[Token(Token = "0x6000D75")]
	internal static R UnsafeMov<S, R>(S instance)
	{
		return (R)null;
	}
}
