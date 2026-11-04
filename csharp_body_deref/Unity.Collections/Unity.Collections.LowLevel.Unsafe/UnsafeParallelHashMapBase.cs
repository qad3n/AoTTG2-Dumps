// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapBase
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000124")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
internal struct UnsafeParallelHashMapBase<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x40004FC")]
	private const int SentinelRefilling = -2;

	[Token(Token = "0x40004FD")]
	private const int SentinelSwapInProgress = -3;

	[Token(Token = "0x6000C4F")]
	internal unsafe static void Clear(UnsafeParallelHashMapData* data)
	{
	}

	[Token(Token = "0x6000C50")]
	internal unsafe static int AllocEntry(UnsafeParallelHashMapData* data, int threadIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000C51")]
	internal unsafe static void FreeEntry(UnsafeParallelHashMapData* data, int idx, int threadIndex)
	{
	}

	[Token(Token = "0x6000C52")]
	internal unsafe static bool TryAddAtomic(UnsafeParallelHashMapData* data, TKey key, TValue item, int threadIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C53")]
	internal unsafe static void AddAtomicMulti(UnsafeParallelHashMapData* data, TKey key, TValue item, int threadIndex)
	{
	}

	[Token(Token = "0x6000C54")]
	internal unsafe static bool TryAdd(UnsafeParallelHashMapData* data, TKey key, TValue item, bool isMultiHashMap, AllocatorManager.AllocatorHandle allocation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C55")]
	internal unsafe static int Remove(UnsafeParallelHashMapData* data, TKey key, bool isMultiHashMap)
	{
		return default(int);
	}

	[Token(Token = "0x6000C56")]
	internal unsafe static void Remove(UnsafeParallelHashMapData* data, NativeParallelMultiHashMapIterator<TKey> it)
	{
	}

	[Token(Token = "0x6000C57")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal unsafe static void RemoveKeyValue<TValueEQ>(UnsafeParallelHashMapData* data, TKey key, TValueEQ value) where TValueEQ : struct, IEquatable<TValueEQ>
	{
	}

	[Token(Token = "0x6000C58")]
	internal unsafe static bool TryGetFirstValueAtomic(UnsafeParallelHashMapData* data, TKey key, out TValue item, out NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C59")]
	internal unsafe static bool TryGetNextValueAtomic(UnsafeParallelHashMapData* data, out TValue item, ref NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5A")]
	internal unsafe static bool SetValue(UnsafeParallelHashMapData* data, ref NativeParallelMultiHashMapIterator<TKey> it, ref TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5B")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckOutOfCapacity(int idx, int keyCapacity)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private unsafe static void CheckIndexOutOfBounds(UnsafeParallelHashMapData* data, int idx)
	{
	}

	[Token(Token = "0x6000C5D")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void ThrowFull()
	{
	}

	[Token(Token = "0x6000C5E")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void ThrowInvalidIterator()
	{
	}
}
