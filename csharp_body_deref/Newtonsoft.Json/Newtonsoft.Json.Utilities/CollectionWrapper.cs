using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x200009D")]
internal class CollectionWrapper<T> : ICollection<T>, IEnumerable<T>, IEnumerable, IWrappedCollection, IList, ICollection where T : notnull
{
	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x0")]
	private readonly IList? _list;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x0")]
	private readonly ICollection<T>? _genericCollection;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x0")]
	private object? _syncRoot;

	[Token(Token = "0x170000AD")]
	public virtual int Count
	{
		[Token(Token = "0x600051F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AE")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6000520")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AF")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000529")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B0")]
	private object? System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x600052B")]
		get
		{
			return null;
		}
		[Token(Token = "0x600052C")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600052E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B2")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x600052F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B3")]
	public object UnderlyingCollection
	{
		[Token(Token = "0x6000532")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000519")]
	public CollectionWrapper(IList list)
	{
	}

	[Token(Token = "0x600051A")]
	public CollectionWrapper(ICollection<T> list)
	{
	}

	[Token(Token = "0x600051B")]
	public virtual void Add(T item)
	{
	}

	[Token(Token = "0x600051C")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x600051D")]
	public virtual bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600051E")]
	public virtual void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000521")]
	public virtual bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000522")]
	public virtual IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000523")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000524")]
	private int System_002ECollections_002EIList_002EAdd(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000525")]
	private bool System_002ECollections_002EIList_002EContains(object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000526")]
	private int System_002ECollections_002EIList_002EIndexOf(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000527")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000528")]
	private void System_002ECollections_002EIList_002EInsert(int index, object? value)
	{
	}

	[Token(Token = "0x600052A")]
	private void System_002ECollections_002EIList_002ERemove(object? value)
	{
	}

	[Token(Token = "0x600052D")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000530")]
	private static void VerifyValueType(object? value)
	{
	}

	[Token(Token = "0x6000531")]
	private static bool IsCompatibleObject(object? value)
	{
		return default(bool);
	}
}
