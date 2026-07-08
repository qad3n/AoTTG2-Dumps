using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000021")]
public class MergedKeyedCollection<TKey, TItem> : IMergedCollection<TItem>, ICollection<TItem>, IEnumerable<TItem>, IEnumerable
{
	[Token(Token = "0x2000022")]
	public struct Enumerator : IEnumerator<TItem>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<Type, IKeyedCollection<TKey, TItem>>.Enumerator collectionsEnumerator;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x0")]
		private TItem currentItem;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x0")]
		private IKeyedCollection<TKey, TItem> currentCollection;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x0")]
		private int indexInCurrentCollection;

		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x0")]
		private bool exceeded;

		[Token(Token = "0x17000027")]
		public TItem Current
		{
			[Token(Token = "0x60000E5")]
			get
			{
				return (TItem)null;
			}
		}

		[Token(Token = "0x17000028")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000E6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000E2")]
		public Enumerator(MergedKeyedCollection<TKey, TItem> merged)
		{
		}

		[Token(Token = "0x60000E3")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60000E4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E7")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	protected readonly Dictionary<Type, IKeyedCollection<TKey, TItem>> collections;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x0")]
	protected readonly Dictionary<Type, IKeyedCollection<TKey, TItem>> collectionsLookup;

	[Token(Token = "0x17000024")]
	public TItem this[TKey key]
	{
		[Token(Token = "0x60000CD")]
		get
		{
			return (TItem)null;
		}
	}

	[Token(Token = "0x17000025")]
	public int Count
	{
		[Token(Token = "0x60000CE")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60000CF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000CC")]
	public MergedKeyedCollection()
	{
	}

	[Token(Token = "0x60000D0")]
	public bool Includes<TSubItem>() where TSubItem : TItem
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	public bool Includes(Type elementType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	public IKeyedCollection<TKey, TSubItem> ForType<TSubItem>() where TSubItem : TItem
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	public virtual void Include<TSubItem>(IKeyedCollection<TKey, TSubItem> collection) where TSubItem : TItem
	{
	}

	[Token(Token = "0x60000D4")]
	protected IKeyedCollection<TKey, TItem> GetCollectionForItem(TItem item)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	protected IKeyedCollection<TKey, TItem> GetCollectionForType(Type type, bool throwOnFail = true)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	protected IKeyedCollection<TKey, TItem> GetCollectionForKey(TKey key, bool throwOnFail = true)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	public bool TryGetValue(TKey key, out TItem value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D8")]
	public virtual void Add(TItem item)
	{
	}

	[Token(Token = "0x60000D9")]
	public void Clear()
	{
	}

	[Token(Token = "0x60000DA")]
	public bool Contains(TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DB")]
	public bool Remove(TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	public void CopyTo(TItem[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60000DD")]
	public bool Contains(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DE")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	private IEnumerator<TItem> System_002ECollections_002EGeneric_002EIEnumerable_003CTItem_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
