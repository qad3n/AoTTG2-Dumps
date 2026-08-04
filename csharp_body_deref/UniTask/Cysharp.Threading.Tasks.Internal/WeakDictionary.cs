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

[Token(Token = "0x200024C")]
internal class WeakDictionary<TKey, TValue> where TKey : class
{
	[Token(Token = "0x200024D")]
	private class Entry
	{
		[Token(Token = "0x4000698")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public WeakReference<TKey> Key;

		[Token(Token = "0x4000699")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TValue Value;

		[Token(Token = "0x400069A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int Hash;

		[Token(Token = "0x400069B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Entry Prev;

		[Token(Token = "0x400069C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Entry Next;

		[Token(Token = "0x6000D22")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000D23")]
		private int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000D24")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x4000693")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Entry[] buckets;

	[Token(Token = "0x4000694")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int size;

	[Token(Token = "0x4000695")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private SpinLock gate;

	[Token(Token = "0x4000696")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly float loadFactor;

	[Token(Token = "0x4000697")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IEqualityComparer<TKey> keyEqualityComparer;

	[Token(Token = "0x6000D17")]
	public WeakDictionary([Optional][DefaultParameterValue(4)] int capacity, [Optional][DefaultParameterValue(0.75f)] float loadFactor, [Optional] IEqualityComparer<TKey> keyComparer)
	{
	}

	[Token(Token = "0x6000D18")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D19")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1A")]
	public bool TryRemove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1B")]
	private bool TryAddInternal(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1C")]
	private bool AddToBuckets(Entry[] targetBuckets, TKey newKey, TValue value, int keyHash)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1D")]
	private bool TryGetEntry(TKey key, out int hashIndex, out Entry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1E")]
	private void Remove(int hashIndex, Entry entry)
	{
	}

	[Token(Token = "0x6000D1F")]
	public List<KeyValuePair<TKey, TValue>> ToList()
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	public int ToList(ref List<KeyValuePair<TKey, TValue>> list, bool clear = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000D21")]
	private static int CalculateCapacity(int collectionSize, float loadFactor)
	{
		return default(int);
	}
}
