// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.HashSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200028A")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class HashSet<T> : ICollection<T>, IEnumerable<T>, IEnumerable, ISet<T>, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x200028B")]
	internal struct ElementCount
	{
		[Token(Token = "0x40004C0")]
		[FieldOffset(Offset = "0x0")]
		internal int uniqueCount;

		[Token(Token = "0x40004C1")]
		[FieldOffset(Offset = "0x0")]
		internal int unfoundCount;
	}

	[Token(Token = "0x200028C")]
	internal struct Slot
	{
		[Token(Token = "0x40004C2")]
		[FieldOffset(Offset = "0x0")]
		internal int hashCode;

		[Token(Token = "0x40004C3")]
		[FieldOffset(Offset = "0x0")]
		internal int next;

		[Token(Token = "0x40004C4")]
		[FieldOffset(Offset = "0x0")]
		internal T value;
	}

	[Serializable]
	[Token(Token = "0x200028D")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40004C5")]
		[FieldOffset(Offset = "0x0")]
		private HashSet<T> _set;

		[Token(Token = "0x40004C6")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40004C7")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40004C8")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x17000292")]
		public T Current
		{
			[Token(Token = "0x6000D25")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000293")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D22")]
		internal Enumerator(HashSet<T> set)
		{
		}

		[Token(Token = "0x6000D23")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000D24")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D27")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40004B1")]
	private const int Lower31BitMask = 2147483647;

	[Token(Token = "0x40004B2")]
	private const int StackAllocThreshold = 100;

	[Token(Token = "0x40004B3")]
	private const int ShrinkThreshold = 3;

	[Token(Token = "0x40004B4")]
	private const string CapacityName = "Capacity";

	[Token(Token = "0x40004B5")]
	private const string ElementsName = "Elements";

	[Token(Token = "0x40004B6")]
	private const string ComparerName = "Comparer";

	[Token(Token = "0x40004B7")]
	private const string VersionName = "Version";

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x0")]
	private int[] _buckets;

	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x0")]
	private Slot[] _slots;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x0")]
	private int _lastIndex;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x0")]
	private int _freeList;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<T> _comparer;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x0")]
	private SerializationInfo _siInfo;

	[Token(Token = "0x1700028F")]
	public int Count
	{
		[Token(Token = "0x6000CFB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000290")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000CFC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000291")]
	public IEqualityComparer<T> Comparer
	{
		[Token(Token = "0x6000D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CEE")]
	public HashSet()
	{
	}

	[Token(Token = "0x6000CEF")]
	public HashSet(IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000CF0")]
	public HashSet(int capacity)
	{
	}

	[Token(Token = "0x6000CF1")]
	public HashSet(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6000CF2")]
	public HashSet(IEnumerable<T> collection, IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000CF3")]
	protected HashSet(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000CF4")]
	private void CopyFrom(HashSet<T> source)
	{
	}

	[Token(Token = "0x6000CF5")]
	public HashSet(int capacity, IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000CF6")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T item)
	{
	}

	[Token(Token = "0x6000CF7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000CF8")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF9")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000CFA")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFD")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000CFE")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CFF")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000D01")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000D02")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D03")]
	public void UnionWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000D04")]
	public void IntersectWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000D05")]
	public void ExceptWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000D06")]
	public void SymmetricExceptWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000D07")]
	public bool IsSubsetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D08")]
	public bool IsProperSubsetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D09")]
	public bool IsSupersetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0A")]
	public bool IsProperSupersetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0B")]
	public bool Overlaps(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0C")]
	public bool SetEquals(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0D")]
	public void CopyTo(T[] array)
	{
	}

	[Token(Token = "0x6000D0E")]
	public void CopyTo(T[] array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6000D0F")]
	public int RemoveWhere(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6000D11")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000D12")]
	private int Initialize(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000D13")]
	private void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6000D14")]
	private void SetCapacity(int newSize)
	{
	}

	[Token(Token = "0x6000D15")]
	private bool AddIfNotPresent(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D16")]
	private void AddValue(int index, int hashCode, T value)
	{
	}

	[Token(Token = "0x6000D17")]
	private bool ContainsAllElements(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D18")]
	private bool IsSubsetOfHashSetWithSameEC(HashSet<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D19")]
	private void IntersectWithHashSetWithSameEC(HashSet<T> other)
	{
	}

	[Token(Token = "0x6000D1A")]
	private void IntersectWithEnumerable(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000D1B")]
	private int InternalIndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1C")]
	private void SymmetricExceptWithUniqueHashSet(HashSet<T> other)
	{
	}

	[Token(Token = "0x6000D1D")]
	private void SymmetricExceptWithEnumerable(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000D1E")]
	private bool AddOrGetLocation(T value, out int location)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1F")]
	private ElementCount CheckUniqueAndUnfoundElements(IEnumerable<T> other, bool returnIfUnfound)
	{
		return default(ElementCount);
	}

	[Token(Token = "0x6000D20")]
	private static bool AreEqualityComparersEqual(HashSet<T> set1, HashSet<T> set2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D21")]
	private int InternalGetHashCode(T item)
	{
		return default(int);
	}
}
