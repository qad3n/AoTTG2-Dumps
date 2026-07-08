using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000028")]
public class NonNullableHashSet<T> : ISet<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x0")]
	private readonly HashSet<T> set;

	[Token(Token = "0x1700003A")]
	public int Count
	{
		[Token(Token = "0x6000130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000131")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600012C")]
	public NonNullableHashSet()
	{
	}

	[Token(Token = "0x600012D")]
	public NonNullableHashSet(IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x600012E")]
	public NonNullableHashSet(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x600012F")]
	public NonNullableHashSet(IEnumerable<T> collection, IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000132")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000134")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000136")]
	public void ExceptWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000137")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	public void IntersectWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000139")]
	public bool IsProperSubsetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600013A")]
	public bool IsProperSupersetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600013B")]
	public bool IsSubsetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600013C")]
	public bool IsSupersetOf(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600013D")]
	public bool Overlaps(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600013E")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600013F")]
	public bool SetEquals(IEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000140")]
	public void SymmetricExceptWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000141")]
	public void UnionWith(IEnumerable<T> other)
	{
	}

	[Token(Token = "0x6000142")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T item)
	{
	}

	[Token(Token = "0x6000143")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
