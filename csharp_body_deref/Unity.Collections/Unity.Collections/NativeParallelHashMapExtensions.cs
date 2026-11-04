// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelHashMapExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000A4")]
[GenerateTestsForBurstCompatibility]
public static class NativeParallelHashMapExtensions
{
	[Token(Token = "0x6000818")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static int Unique<T>(this NativeArray<T> array) where T : struct, IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000819")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static (NativeArray<TKey>, int) GetUniqueKeyArray<TKey, TValue>(this UnsafeParallelMultiHashMap<TKey, TValue> container, AllocatorManager.AllocatorHandle allocator) where TKey : struct, IEquatable<TKey>, IComparable<TKey> where TValue : struct
	{
		return default((NativeArray<TKey>, int));
	}

	[Token(Token = "0x600081A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static (NativeArray<TKey>, int) GetUniqueKeyArray<TKey, TValue>(this NativeParallelMultiHashMap<TKey, TValue> container, AllocatorManager.AllocatorHandle allocator) where TKey : struct, IEquatable<TKey>, IComparable<TKey> where TValue : struct
	{
		return default((NativeArray<TKey>, int));
	}

	[Token(Token = "0x600081B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static UnsafeParallelHashMapBucketData GetUnsafeBucketData<TKey, TValue>(this NativeParallelHashMap<TKey, TValue> container) where TKey : struct, IEquatable<TKey> where TValue : struct
	{
		return default(UnsafeParallelHashMapBucketData);
	}

	[Token(Token = "0x600081C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static UnsafeParallelHashMapBucketData GetUnsafeBucketData<TKey, TValue>(this NativeParallelMultiHashMap<TKey, TValue> container) where TKey : struct, IEquatable<TKey> where TValue : struct
	{
		return default(UnsafeParallelHashMapBucketData);
	}

	[Token(Token = "0x600081D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static void Remove<TKey, TValue>(this NativeParallelMultiHashMap<TKey, TValue> container, TKey key, TValue value) where TKey : struct, IEquatable<TKey> where TValue : struct, IEquatable<TValue>
	{
	}
}
