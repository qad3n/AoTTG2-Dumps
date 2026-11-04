// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.WeakDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200024F")]
internal class WeakDictionary<TKey, TValue> where TKey : class
{
	[Token(Token = "0x2000250")]
	private class Entry
	{
		[Token(Token = "0x40006AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public WeakReference<TKey> Key;

		[Token(Token = "0x40006AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TValue Value;

		[Token(Token = "0x40006AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int Hash;

		[Token(Token = "0x40006AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Entry Prev;

		[Token(Token = "0x40006AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Entry Next;

		[Token(Token = "0x6000D46")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000D47")]
		private int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000D48")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x40006A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Entry[] buckets;

	[Token(Token = "0x40006A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int size;

	[Token(Token = "0x40006A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private SpinLock gate;

	[Token(Token = "0x40006A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly float loadFactor;

	[Token(Token = "0x40006AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IEqualityComparer<TKey> keyEqualityComparer;

	[Token(Token = "0x6000D3B")]
	public WeakDictionary([Optional][DefaultParameterValue(4)] int capacity, [Optional][DefaultParameterValue(0.75f)] float loadFactor, [Optional] IEqualityComparer<TKey> keyComparer)
	{
	}

	[Token(Token = "0x6000D3C")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3D")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3E")]
	public bool TryRemove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3F")]
	private bool TryAddInternal(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D40")]
	private bool AddToBuckets(Entry[] targetBuckets, TKey newKey, TValue value, int keyHash)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D41")]
	private bool TryGetEntry(TKey key, out int hashIndex, out Entry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D42")]
	private void Remove(int hashIndex, Entry entry)
	{
	}

	[Token(Token = "0x6000D43")]
	public List<KeyValuePair<TKey, TValue>> ToList()
	{
		return null;
	}

	[Token(Token = "0x6000D44")]
	public int ToList(ref List<KeyValuePair<TKey, TValue>> list, bool clear = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000D45")]
	private static int CalculateCapacity(int collectionSize, float loadFactor)
	{
		return default(int);
	}
}
