// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.ConditionalWeakTable
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004AF")]
public sealed class ConditionalWeakTable<TKey, TValue> : IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable where TKey : class where TValue : class
{
	[Token(Token = "0x20004B0")]
	public delegate TValue CreateValueCallback(TKey key);

	[Token(Token = "0x20004B1")]
	private sealed class Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40012A3")]
		[FieldOffset(Offset = "0x0")]
		private ConditionalWeakTable<TKey, TValue> _table;

		[Token(Token = "0x40012A4")]
		[FieldOffset(Offset = "0x0")]
		private int _currentIndex;

		[Token(Token = "0x40012A5")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _current;

		[Token(Token = "0x17000485")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6002363")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000486")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002364")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600235F")]
		public Enumerator(ConditionalWeakTable<TKey, TValue> table)
		{
		}

		[Token(Token = "0x6002360")]
		~Enumerator()
		{
		}

		[Token(Token = "0x6002361")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002362")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002365")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40012A0")]
	[FieldOffset(Offset = "0x0")]
	private System.Runtime.CompilerServices.Ephemeron[] data;

	[Token(Token = "0x40012A1")]
	[FieldOffset(Offset = "0x0")]
	private object _lock;

	[Token(Token = "0x40012A2")]
	[FieldOffset(Offset = "0x0")]
	private int size;

	[Token(Token = "0x6002351")]
	public ConditionalWeakTable()
	{
	}

	[Token(Token = "0x6002352")]
	~ConditionalWeakTable()
	{
	}

	[Token(Token = "0x6002353")]
	private void RehashWithoutResize()
	{
	}

	[Token(Token = "0x6002354")]
	private void RecomputeSize()
	{
	}

	[Token(Token = "0x6002355")]
	private void Rehash()
	{
	}

	[Token(Token = "0x6002356")]
	public void AddOrUpdate(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002357")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002358")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002359")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x600235A")]
	public TValue GetValue(TKey key, CreateValueCallback createValueCallback)
	{
		return null;
	}

	[Token(Token = "0x600235B")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600235C")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
