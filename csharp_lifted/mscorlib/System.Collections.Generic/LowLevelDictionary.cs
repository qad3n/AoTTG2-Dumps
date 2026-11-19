// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LowLevelDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200060A")]
internal class LowLevelDictionary<TKey, TValue>
{
	[Token(Token = "0x200060B")]
	private sealed class Entry
	{
		[Token(Token = "0x40018B9")]
		[FieldOffset(Offset = "0x0")]
		public TKey _key;

		[Token(Token = "0x40018BA")]
		[FieldOffset(Offset = "0x0")]
		public TValue _value;

		[Token(Token = "0x40018BB")]
		[FieldOffset(Offset = "0x0")]
		public Entry _next;

		[Token(Token = "0x6002F75")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x200060C")]
	private sealed class DefaultComparer<T> : IEqualityComparer<T>
	{
		[Token(Token = "0x6002F76")]
		public bool Equals(T x, T y)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F77")]
		public int GetHashCode(T obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002F78")]
		public DefaultComparer()
		{
		}
	}

	[Token(Token = "0x40018B5")]
	[FieldOffset(Offset = "0x0")]
	private Entry[] _buckets;

	[Token(Token = "0x40018B6")]
	[FieldOffset(Offset = "0x0")]
	private int _numEntries;

	[Token(Token = "0x40018B7")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x40018B8")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[Token(Token = "0x170007C5")]
	public TKey this[TKey key]
	{
		[Token(Token = "0x6002F6E")]
		set
		{
		}
	}

	[Token(Token = "0x6002F6C")]
	public LowLevelDictionary()
	{
	}

	[Token(Token = "0x6002F6D")]
	public LowLevelDictionary(int capacity, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002F6F")]
	public void Clear(int capacity = 17)
	{
	}

	[Token(Token = "0x6002F70")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F71")]
	private Entry Find(TKey key)
	{
		return null;
	}

	[Token(Token = "0x6002F72")]
	private Entry UncheckedAdd(TKey key, TValue value)
	{
		return null;
	}

	[Token(Token = "0x6002F73")]
	private void ExpandBuckets()
	{
	}

	[Token(Token = "0x6002F74")]
	private int GetBucket(TKey key, int numBuckets = 0)
	{
		return default(int);
	}
}
