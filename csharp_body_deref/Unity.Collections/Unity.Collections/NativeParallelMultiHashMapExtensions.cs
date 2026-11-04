// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelMultiHashMapExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000B2")]
[GenerateTestsForBurstCompatibility]
public static class NativeParallelMultiHashMapExtensions
{
	[Token(Token = "0x60008C6")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int),
		typeof(AllocatorManager.AllocatorHandle)
	})]
	internal static void Initialize<TKey, TValue, U>(this ref NativeParallelMultiHashMap<TKey, TValue> container, int capacity, ref U allocator) where TKey : struct, IEquatable<TKey> where TValue : struct where U : struct, AllocatorManager.IAllocator
	{
	}
}
