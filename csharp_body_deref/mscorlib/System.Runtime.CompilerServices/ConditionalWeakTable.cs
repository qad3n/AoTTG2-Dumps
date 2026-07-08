using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004A6")]
public sealed class ConditionalWeakTable<TKey, TValue> : IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable where TKey : class where TValue : class
{
	[Token(Token = "0x20004A7")]
	public delegate TValue CreateValueCallback(TKey key);

	[Token(Token = "0x20004A8")]
	private sealed class Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001343")]
		[FieldOffset(Offset = "0x0")]
		private ConditionalWeakTable<TKey, TValue> _table;

		[Token(Token = "0x4001344")]
		[FieldOffset(Offset = "0x0")]
		private int _currentIndex;

		[Token(Token = "0x4001345")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _current;

		[Token(Token = "0x17000483")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6002314")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000484")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002315")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002310")]
		public Enumerator(ConditionalWeakTable<TKey, TValue> table)
		{
		}

		[Token(Token = "0x6002311")]
		~Enumerator()
		{
		}

		[Token(Token = "0x6002312")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002313")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002316")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400133C")]
	private const int INITIAL_SIZE = 13;

	[Token(Token = "0x400133D")]
	private const float LOAD_FACTOR = 0.7f;

	[Token(Token = "0x400133E")]
	private const float COMPACT_FACTOR = 0.5f;

	[Token(Token = "0x400133F")]
	private const float EXPAND_FACTOR = 1.1f;

	[Token(Token = "0x4001340")]
	[FieldOffset(Offset = "0x0")]
	private System.Runtime.CompilerServices.Ephemeron[] data;

	[Token(Token = "0x4001341")]
	[FieldOffset(Offset = "0x0")]
	private object _lock;

	[Token(Token = "0x4001342")]
	[FieldOffset(Offset = "0x0")]
	private int size;

	[Token(Token = "0x6002303")]
	public ConditionalWeakTable()
	{
	}

	[Token(Token = "0x6002304")]
	~ConditionalWeakTable()
	{
	}

	[Token(Token = "0x6002305")]
	private void RehashWithoutResize()
	{
	}

	[Token(Token = "0x6002306")]
	private void RecomputeSize()
	{
	}

	[Token(Token = "0x6002307")]
	private void Rehash()
	{
	}

	[Token(Token = "0x6002308")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002309")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600230A")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x600230B")]
	public TValue GetValue(TKey key, CreateValueCallback createValueCallback)
	{
		return null;
	}

	[Token(Token = "0x600230C")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600230D")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
