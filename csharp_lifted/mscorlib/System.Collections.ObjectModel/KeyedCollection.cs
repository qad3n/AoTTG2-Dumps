// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ObjectModel.KeyedCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.ObjectModel;

[Serializable]
[Token(Token = "0x20005E5")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.CollectionDebugView<>))]
public abstract class KeyedCollection<TKey, TItem> : Collection<TItem>
{
	[Token(Token = "0x4001870")]
	[FieldOffset(Offset = "0x0")]
	private readonly IEqualityComparer<TKey> comparer;

	[Token(Token = "0x4001871")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<TKey, TItem> dict;

	[Token(Token = "0x4001872")]
	[FieldOffset(Offset = "0x0")]
	private int keyCount;

	[Token(Token = "0x4001873")]
	[FieldOffset(Offset = "0x0")]
	private readonly int threshold;

	[Token(Token = "0x17000767")]
	private new List<TItem> Items
	{
		[Token(Token = "0x6002E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000768")]
	public TItem this[TKey key]
	{
		[Token(Token = "0x6002E21")]
		get
		{
			return (TItem)null;
		}
	}

	[Token(Token = "0x17000769")]
	protected IDictionary<TKey, TItem> Dictionary
	{
		[Token(Token = "0x6002E26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002E1D")]
	protected KeyedCollection()
	{
	}

	[Token(Token = "0x6002E1E")]
	protected KeyedCollection(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002E1F")]
	protected KeyedCollection(IEqualityComparer<TKey> comparer, int dictionaryCreationThreshold)
	{
	}

	[Token(Token = "0x6002E22")]
	public bool Contains(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E23")]
	public bool TryGetValue(TKey key, out TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E24")]
	private bool ContainsItem(TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E25")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E27")]
	protected void ChangeItemKey(TItem item, TKey newKey)
	{
	}

	[Token(Token = "0x6002E28")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6002E29")]
	protected abstract TKey GetKeyForItem(TItem item);

	[Token(Token = "0x6002E2A")]
	protected override void InsertItem(int index, TItem item)
	{
	}

	[Token(Token = "0x6002E2B")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6002E2C")]
	protected override void SetItem(int index, TItem item)
	{
	}

	[Token(Token = "0x6002E2D")]
	private void AddKey(TKey key, TItem item)
	{
	}

	[Token(Token = "0x6002E2E")]
	private void CreateDictionary()
	{
	}

	[Token(Token = "0x6002E2F")]
	private void RemoveKey(TKey key)
	{
	}
}
