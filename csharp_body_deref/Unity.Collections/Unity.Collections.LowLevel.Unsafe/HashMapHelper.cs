// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.HashMapHelper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000107")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
internal struct HashMapHelper<TKey> where TKey : struct, IEquatable<TKey>
{
	[Token(Token = "0x2000108")]
	internal struct Enumerator
	{
		[Token(Token = "0x40004BA")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe HashMapHelper<TKey>* m_Data;

		[Token(Token = "0x40004BB")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Index;

		[Token(Token = "0x40004BC")]
		[FieldOffset(Offset = "0x0")]
		internal int m_BucketIndex;

		[Token(Token = "0x40004BD")]
		[FieldOffset(Offset = "0x0")]
		internal int m_NextIndex;

		[Token(Token = "0x6000B5B")]
		internal unsafe Enumerator(HashMapHelper<TKey>* data)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5C")]
		internal bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B5D")]
		internal void Reset()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5E")]
		internal KVPair<TKey, TValue> GetCurrent<TValue>() where TValue : struct
		{
			return default(KVPair<TKey, TValue>);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5F")]
		internal TKey GetCurrentKey()
		{
			return (TKey)null;
		}
	}

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe byte* Ptr;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe TKey* Keys;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe int* Next;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe int* Buckets;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x0")]
	internal int Count;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x0")]
	internal int Capacity;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x0")]
	internal int Log2MinGrowth;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x0")]
	internal int BucketCapacity;

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x0")]
	internal int AllocatedIndex;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x0")]
	internal int FirstFreeIdx;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x0")]
	internal int SizeOfTValue;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x0")]
	internal AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x40004B8")]
	internal const int kMinCapacity = 256;

	[Token(Token = "0x40004B9")]
	internal const int kMaxCapacity = 536870912;

	[Token(Token = "0x17000141")]
	internal readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000142")]
	internal readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B44")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B41")]
	internal int CalcCapacityCeilPow2(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000B42")]
	internal static int GetBucketSize(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000B45")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000B46")]
	internal void Init(int capacity, int sizeOfValueT, int minGrowth, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000B47")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6000B48")]
	internal unsafe static HashMapHelper<TKey>* Alloc(int capacity, int sizeOfValueT, int minGrowth, AllocatorManager.AllocatorHandle allocator)
	{
		//IL_0002: Expected I, but got O
		return (HashMapHelper<TKey>*)unchecked((nint)null);
	}

	[Token(Token = "0x6000B49")]
	internal unsafe static void Free(HashMapHelper<TKey>* data)
	{
	}

	[Token(Token = "0x6000B4A")]
	internal void Resize(int newCapacity)
	{
	}

	[Token(Token = "0x6000B4B")]
	internal void ResizeExact(int newCapacity, int newBucketCapacity)
	{
	}

	[Token(Token = "0x6000B4C")]
	internal void TrimExcess()
	{
	}

	[Token(Token = "0x6000B4D")]
	internal static long CalculateDataSize(int capacity, int bucketCapacity, int sizeOfTValue, out long outKeyOffset, out long outNextOffset, out long outBucketOffset)
	{
		return default(long);
	}

	[Token(Token = "0x6000B4E")]
	internal readonly int GetCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4F")]
	private int GetBucket(in TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000B50")]
	internal int TryAdd(in TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000B51")]
	internal int Find(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000B52")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal bool TryGetValue<TValue>(TKey key, out TValue item) where TValue : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000B53")]
	internal int TryRemove(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000B54")]
	internal bool MoveNextSearch(ref int bucketIndex, ref int nextIndex, out int index)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B55")]
	internal bool MoveNext(ref int bucketIndex, ref int nextIndex, out int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B56")]
	internal NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TKey>);
	}

	[Token(Token = "0x6000B57")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal NativeArray<TValue> GetValueArray<TValue>(AllocatorManager.AllocatorHandle allocator) where TValue : struct
	{
		return default(NativeArray<TValue>);
	}

	[Token(Token = "0x6000B58")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays<TValue>(AllocatorManager.AllocatorHandle allocator) where TValue : struct
	{
		return default(NativeKeyValueArrays<TKey, TValue>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B59")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIndexOutOfBounds(int idx)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5A")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCapacity(int capacity)
	{
	}
}
