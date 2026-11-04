// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LowLevelDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200062F")]
internal class LowLevelDictionary<TKey, TValue>
{
	[Token(Token = "0x2000630")]
	private sealed class Entry
	{
		[Token(Token = "0x4001952")]
		[FieldOffset(Offset = "0x0")]
		public TKey _key;

		[Token(Token = "0x4001953")]
		[FieldOffset(Offset = "0x0")]
		public TValue _value;

		[Token(Token = "0x4001954")]
		[FieldOffset(Offset = "0x0")]
		public Entry _next;

		[Token(Token = "0x6002F96")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x2000631")]
	private sealed class DefaultComparer<T> : IEqualityComparer<T>
	{
		[Token(Token = "0x6002F97")]
		public bool Equals(T x, T y)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F98")]
		public int GetHashCode(T obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002F99")]
		public DefaultComparer()
		{
		}
	}

	[Token(Token = "0x400194E")]
	[FieldOffset(Offset = "0x0")]
	private Entry[] _buckets;

	[Token(Token = "0x400194F")]
	[FieldOffset(Offset = "0x0")]
	private int _numEntries;

	[Token(Token = "0x4001950")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x4001951")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[Token(Token = "0x170007C6")]
	public TKey this[TKey key]
	{
		[Token(Token = "0x6002F8F")]
		set
		{
		}
	}

	[Token(Token = "0x6002F8D")]
	public LowLevelDictionary()
	{
	}

	[Token(Token = "0x6002F8E")]
	public LowLevelDictionary(int capacity, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002F90")]
	public void Clear(int capacity = 17)
	{
	}

	[Token(Token = "0x6002F91")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F92")]
	private Entry Find(TKey key)
	{
		return null;
	}

	[Token(Token = "0x6002F93")]
	private Entry UncheckedAdd(TKey key, TValue value)
	{
		return null;
	}

	[Token(Token = "0x6002F94")]
	private void ExpandBuckets()
	{
	}

	[Token(Token = "0x6002F95")]
	private int GetBucket(TKey key, int numBuckets = 0)
	{
		return default(int);
	}
}
