// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.MergedKeyedCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<Type, IKeyedCollection<TKey, TItem>>.Enumerator collectionsEnumerator;

		[Token(Token = "0x4000024")]
		[FieldOffset(Offset = "0x0")]
		private TItem currentItem;

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0x0")]
		private IKeyedCollection<TKey, TItem> currentCollection;

		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x0")]
		private int indexInCurrentCollection;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x0")]
		private bool exceeded;

		[Token(Token = "0x17000028")]
		public TItem Current
		{
			[Token(Token = "0x60000E9")]
			get
			{
				return (TItem)null;
			}
		}

		[Token(Token = "0x17000029")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000EA")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000E6")]
		public Enumerator(MergedKeyedCollection<TKey, TItem> merged)
		{
		}

		[Token(Token = "0x60000E7")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60000E8")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000EB")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x0")]
	protected readonly Dictionary<Type, IKeyedCollection<TKey, TItem>> collections;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x0")]
	protected readonly Dictionary<Type, IKeyedCollection<TKey, TItem>> collectionsLookup;

	[Token(Token = "0x17000025")]
	public TItem this[TKey key]
	{
		[Token(Token = "0x60000D1")]
		get
		{
			return (TItem)null;
		}
	}

	[Token(Token = "0x17000026")]
	public int Count
	{
		[Token(Token = "0x60000D2")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60000D3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000D0")]
	public MergedKeyedCollection()
	{
	}

	[Token(Token = "0x60000D4")]
	public bool Includes<TSubItem>() where TSubItem : TItem
	{
		return default(bool);
	}

	[Token(Token = "0x60000D5")]
	public bool Includes(Type elementType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D6")]
	public IKeyedCollection<TKey, TSubItem> ForType<TSubItem>() where TSubItem : TItem
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	public virtual void Include<TSubItem>(IKeyedCollection<TKey, TSubItem> collection) where TSubItem : TItem
	{
	}

	[Token(Token = "0x60000D8")]
	protected IKeyedCollection<TKey, TItem> GetCollectionForItem(TItem item)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	protected IKeyedCollection<TKey, TItem> GetCollectionForType(Type type, bool throwOnFail = true)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	protected IKeyedCollection<TKey, TItem> GetCollectionForKey(TKey key, bool throwOnFail = true)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	public bool TryGetValue(TKey key, out TItem value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	public virtual void Add(TItem item)
	{
	}

	[Token(Token = "0x60000DD")]
	public void Clear()
	{
	}

	[Token(Token = "0x60000DE")]
	public bool Contains(TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	public bool Remove(TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E0")]
	public void CopyTo(TItem[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60000E1")]
	public bool Contains(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E2")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E3")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	private IEnumerator<TItem> System_002ECollections_002EGeneric_002EIEnumerable_003CTItem_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
