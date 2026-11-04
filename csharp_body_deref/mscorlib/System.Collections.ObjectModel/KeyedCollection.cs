// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ObjectModel.KeyedCollection
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.ObjectModel;

[Serializable]
[Token(Token = "0x200060A")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.CollectionDebugView<>))]
public abstract class KeyedCollection<TKey, TItem> : Collection<TItem>
{
	[Token(Token = "0x4001909")]
	[FieldOffset(Offset = "0x0")]
	private readonly IEqualityComparer<TKey> comparer;

	[Token(Token = "0x400190A")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<TKey, TItem> dict;

	[Token(Token = "0x400190B")]
	[FieldOffset(Offset = "0x0")]
	private int keyCount;

	[Token(Token = "0x400190C")]
	[FieldOffset(Offset = "0x0")]
	private readonly int threshold;

	[Token(Token = "0x17000768")]
	private new List<TItem> Items
	{
		[Token(Token = "0x6002E45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000769")]
	public TItem this[TKey key]
	{
		[Token(Token = "0x6002E46")]
		get
		{
			return (TItem)null;
		}
	}

	[Token(Token = "0x1700076A")]
	protected IDictionary<TKey, TItem> Dictionary
	{
		[Token(Token = "0x6002E4B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002E42")]
	protected KeyedCollection()
	{
	}

	[Token(Token = "0x6002E43")]
	protected KeyedCollection(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002E44")]
	protected KeyedCollection(IEqualityComparer<TKey> comparer, int dictionaryCreationThreshold)
	{
	}

	[Token(Token = "0x6002E47")]
	public bool Contains(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E48")]
	public bool TryGetValue(TKey key, out TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E49")]
	private bool ContainsItem(TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E4A")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E4C")]
	protected void ChangeItemKey(TItem item, TKey newKey)
	{
	}

	[Token(Token = "0x6002E4D")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6002E4E")]
	protected abstract TKey GetKeyForItem(TItem item);

	[Token(Token = "0x6002E4F")]
	protected override void InsertItem(int index, TItem item)
	{
	}

	[Token(Token = "0x6002E50")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6002E51")]
	protected override void SetItem(int index, TItem item)
	{
	}

	[Token(Token = "0x6002E52")]
	private void AddKey(TKey key, TItem item)
	{
	}

	[Token(Token = "0x6002E53")]
	private void CreateDictionary()
	{
	}

	[Token(Token = "0x6002E54")]
	private void RemoveKey(TKey key)
	{
	}
}
