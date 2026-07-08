using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000016")]
public class DebugDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection
{
	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TKey, TValue> dictionary;

	[Token(Token = "0x1700000E")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000063")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000064")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x6000065")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000066")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public string label
	{
		[Token(Token = "0x6000067")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000068")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool debug
	{
		[Token(Token = "0x6000069")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600006A")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int Count
	{
		[Token(Token = "0x600006B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000013")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x600006C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600006D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x600006E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x600006F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000071")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public ICollection<TKey> Keys
	{
		[Token(Token = "0x6000072")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6000073")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public ICollection<TValue> Values
	{
		[Token(Token = "0x6000074")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000075")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000076")]
	private void Debug(string message)
	{
	}

	[Token(Token = "0x6000077")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6000079")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x600007B")]
	public void Clear()
	{
	}

	[Token(Token = "0x600007C")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	public bool Contains(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x600007E")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> item)
	{
	}

	[Token(Token = "0x600007F")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000080")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6000084")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	public DebugDictionary()
	{
	}
}
