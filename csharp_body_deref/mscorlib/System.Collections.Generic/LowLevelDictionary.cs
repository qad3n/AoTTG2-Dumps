using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200065B")]
internal class LowLevelDictionary<TKey, TValue>
{
	[Token(Token = "0x200065C")]
	private sealed class Entry
	{
		[Token(Token = "0x4001B4C")]
		[FieldOffset(Offset = "0x0")]
		public TKey _key;

		[Token(Token = "0x4001B4D")]
		[FieldOffset(Offset = "0x0")]
		public TValue _value;

		[Token(Token = "0x4001B4E")]
		[FieldOffset(Offset = "0x0")]
		public Entry _next;

		[Token(Token = "0x600327E")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x200065D")]
	private sealed class DefaultComparer<T> : IEqualityComparer<T>
	{
		[Token(Token = "0x600327F")]
		public bool Equals(T x, T y)
		{
			return default(bool);
		}

		[Token(Token = "0x6003280")]
		public int GetHashCode(T obj)
		{
			return default(int);
		}

		[Token(Token = "0x6003281")]
		public DefaultComparer()
		{
		}
	}

	[Token(Token = "0x4001B48")]
	[FieldOffset(Offset = "0x0")]
	private Entry[] _buckets;

	[Token(Token = "0x4001B49")]
	[FieldOffset(Offset = "0x0")]
	private int _numEntries;

	[Token(Token = "0x4001B4A")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x4001B4B")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[Token(Token = "0x17000837")]
	public TKey this[TKey key]
	{
		[Token(Token = "0x6003277")]
		set
		{
		}
	}

	[Token(Token = "0x6003275")]
	public LowLevelDictionary()
	{
	}

	[Token(Token = "0x6003276")]
	public LowLevelDictionary(int capacity, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003278")]
	public void Clear(int capacity = 17)
	{
	}

	[Token(Token = "0x6003279")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600327A")]
	private Entry Find(TKey key)
	{
		return null;
	}

	[Token(Token = "0x600327B")]
	private Entry UncheckedAdd(TKey key, TValue value)
	{
		return null;
	}

	[Token(Token = "0x600327C")]
	private void ExpandBuckets()
	{
	}

	[Token(Token = "0x600327D")]
	private int GetBucket(TKey key, int numBuckets = 0)
	{
		return default(int);
	}
}
