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
[Token(Token = "0x2000636")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.CollectionDebugView<>))]
public abstract class KeyedCollection<TKey, TItem> : Collection<TItem>
{
	[Token(Token = "0x4001AFD")]
	private const int defaultThreshold = 0;

	[Token(Token = "0x4001AFE")]
	[FieldOffset(Offset = "0x0")]
	private readonly IEqualityComparer<TKey> comparer;

	[Token(Token = "0x4001AFF")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<TKey, TItem> dict;

	[Token(Token = "0x4001B00")]
	[FieldOffset(Offset = "0x0")]
	private int keyCount;

	[Token(Token = "0x4001B01")]
	[FieldOffset(Offset = "0x0")]
	private readonly int threshold;

	[Token(Token = "0x170007D9")]
	private new List<TItem> Items
	{
		[Token(Token = "0x6003132")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007DA")]
	public TItem this[TKey key]
	{
		[Token(Token = "0x6003133")]
		get
		{
			return (TItem)null;
		}
	}

	[Token(Token = "0x170007DB")]
	protected IDictionary<TKey, TItem> Dictionary
	{
		[Token(Token = "0x6003138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600312F")]
	protected KeyedCollection()
	{
	}

	[Token(Token = "0x6003130")]
	protected KeyedCollection(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003131")]
	protected KeyedCollection(IEqualityComparer<TKey> comparer, int dictionaryCreationThreshold)
	{
	}

	[Token(Token = "0x6003134")]
	public bool Contains(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003135")]
	public bool TryGetValue(TKey key, out TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x6003136")]
	private bool ContainsItem(TItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x6003137")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003139")]
	protected void ChangeItemKey(TItem item, TKey newKey)
	{
	}

	[Token(Token = "0x600313A")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x600313B")]
	protected abstract TKey GetKeyForItem(TItem item);

	[Token(Token = "0x600313C")]
	protected override void InsertItem(int index, TItem item)
	{
	}

	[Token(Token = "0x600313D")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x600313E")]
	protected override void SetItem(int index, TItem item)
	{
	}

	[Token(Token = "0x600313F")]
	private void AddKey(TKey key, TItem item)
	{
	}

	[Token(Token = "0x6003140")]
	private void CreateDictionary()
	{
	}

	[Token(Token = "0x6003141")]
	private void RemoveKey(TKey key)
	{
	}
}
