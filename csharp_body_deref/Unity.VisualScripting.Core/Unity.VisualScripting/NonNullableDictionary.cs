// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.NonNullableDictionary
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

[Token(Token = "0x2000027")]
public class NonNullableDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TKey, TValue> dictionary;

	[Token(Token = "0x1700002F")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x600010F")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000110")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x6000111")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000112")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int Count
	{
		[Token(Token = "0x6000113")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000032")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000114")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public object SyncRoot
	{
		[Token(Token = "0x6000115")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000116")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000035")]
	public ICollection<TKey> Keys
	{
		[Token(Token = "0x6000117")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6000118")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000037")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6000119")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public ICollection<TValue> Values
	{
		[Token(Token = "0x600011A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public bool IsFixedSize
	{
		[Token(Token = "0x600011B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000109")]
	public NonNullableDictionary()
	{
	}

	[Token(Token = "0x600010A")]
	public NonNullableDictionary(int capacity)
	{
	}

	[Token(Token = "0x600010B")]
	public NonNullableDictionary(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600010C")]
	public NonNullableDictionary(IDictionary<TKey, TValue> dictionary)
	{
	}

	[Token(Token = "0x600010D")]
	public NonNullableDictionary(int capacity, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600010E")]
	public NonNullableDictionary(IDictionary<TKey, TValue> dictionary, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600011C")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600011D")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> item)
	{
	}

	[Token(Token = "0x600011E")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x600011F")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6000120")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000121")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000122")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6000124")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000125")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000127")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000129")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600012A")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x600012B")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
