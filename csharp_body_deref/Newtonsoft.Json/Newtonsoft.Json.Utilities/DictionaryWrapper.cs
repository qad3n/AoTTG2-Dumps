using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000A8")]
internal class DictionaryWrapper<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IWrappedDictionary, IDictionary, ICollection where TKey : notnull where TValue : notnull
{
	[Token(Token = "0x20000A9")]
	private readonly struct DictionaryEnumerator<TEnumeratorKey, TEnumeratorValue> : IDictionaryEnumerator, IEnumerator where TEnumeratorKey : notnull where TEnumeratorValue : notnull
	{
		[Token(Token = "0x4000409")]
		[FieldOffset(Offset = "0x0")]
		private readonly IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> _e;

		[Token(Token = "0x170000C4")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x600059B")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170000C5")]
		public object Key
		{
			[Token(Token = "0x600059C")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C6")]
		public object? Value
		{
			[Token(Token = "0x600059D")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C7")]
		public object Current
		{
			[Token(Token = "0x600059E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600059A")]
		public DictionaryEnumerator(IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> e)
		{
		}

		[Token(Token = "0x600059F")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005A0")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x0")]
	private readonly IDictionary? _dictionary;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x0")]
	private readonly IDictionary<TKey, TValue>? _genericDictionary;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x0")]
	private readonly IReadOnlyDictionary<TKey, TValue>? _readOnlyDictionary;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x0")]
	private object? _syncRoot;

	[Token(Token = "0x170000B7")]
	internal IDictionary<TKey, TValue> GenericDictionary
	{
		[Token(Token = "0x600057B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	public ICollection<TKey> Keys
	{
		[Token(Token = "0x600057E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	public ICollection<TValue> Values
	{
		[Token(Token = "0x6000581")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000582")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000583")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public int Count
	{
		[Token(Token = "0x6000588")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000BC")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000589")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BD")]
	private object? System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x600058E")]
		get
		{
			return null;
		}
		[Token(Token = "0x600058F")]
		set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000592")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BF")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6000593")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6000595")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000597")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C2")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000598")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	public object UnderlyingDictionary
	{
		[Token(Token = "0x6000599")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000578")]
	public DictionaryWrapper(IDictionary dictionary)
	{
	}

	[Token(Token = "0x6000579")]
	public DictionaryWrapper(IDictionary<TKey, TValue> dictionary)
	{
	}

	[Token(Token = "0x600057A")]
	public DictionaryWrapper(IReadOnlyDictionary<TKey, TValue> dictionary)
	{
	}

	[Token(Token = "0x600057C")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x600057D")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600057F")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000580")]
	public bool TryGetValue(TKey key, out TValue? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000584")]
	public void Add(KeyValuePair<TKey, TValue> item)
	{
	}

	[Token(Token = "0x6000585")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000586")]
	public bool Contains(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000587")]
	public void CopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600058A")]
	public bool Remove(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x600058B")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600058C")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600058D")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object? value)
	{
	}

	[Token(Token = "0x6000590")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000591")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000594")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6000596")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
