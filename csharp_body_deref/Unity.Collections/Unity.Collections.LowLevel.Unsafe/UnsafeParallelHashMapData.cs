// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000121")]
[GenerateTestsForBurstCompatibility]
internal struct UnsafeParallelHashMapData
{
	[Token(Token = "0x40004EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal unsafe byte* values;

	[Token(Token = "0x40004F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal unsafe byte* keys;

	[Token(Token = "0x40004F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal unsafe byte* next;

	[Token(Token = "0x40004F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal unsafe byte* buckets;

	[Token(Token = "0x40004F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int keyCapacity;

	[Token(Token = "0x40004F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal int bucketCapacityMask;

	[Token(Token = "0x40004F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int allocatedIndexLength;

	[Token(Token = "0x40004F6")]
	internal const int kMaxCapacity = 1073741823;

	[Token(Token = "0x40004F7")]
	private const int kFirstFreeTLSOffset = 64;

	[Token(Token = "0x40004F8")]
	internal const int IntsPerCacheLine = 16;

	[Token(Token = "0x1700016E")]
	internal unsafe int* firstFreeTLS
	{
		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x29BC050", Offset = "0x29BA650", VA = "0x1829BC050")]
		get
		{
			//IL_0002: Expected I, but got O
			return (int*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x29BF850", Offset = "0x29BDE50", VA = "0x1829BF850")]
	internal static long GetBucketSize(int capacity)
	{
		return default(long);
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x29BF8F0", Offset = "0x29BDEF0", VA = "0x1829BF8F0")]
	internal static int GrowCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	internal unsafe static void AllocateHashMap<TKey, TValue>(int length, long bucketLength, AllocatorManager.AllocatorHandle label, out UnsafeParallelHashMapData* outBuf) where TKey : struct where TValue : struct
	{
	}

	[Token(Token = "0x6000C40")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	internal unsafe static void ReallocateHashMap<TKey, TValue>(UnsafeParallelHashMapData* data, int newCapacity, long newBucketCapacity, AllocatorManager.AllocatorHandle label) where TKey : struct where TValue : struct
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x29BF7B0", Offset = "0x29BDDB0", VA = "0x1829BF7B0")]
	internal unsafe static void DeallocateHashMap(UnsafeParallelHashMapData* data, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000C42")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	internal static long CalculateDataSize<TKey, TValue>(int length, long bucketLength, out long keyOffset, out long nextOffset, out long bucketOffset) where TKey : struct where TValue : struct
	{
		return default(long);
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x29BF900", Offset = "0x29BDF00", VA = "0x1829BF900")]
	internal unsafe static bool IsEmpty(UnsafeParallelHashMapData* data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x29BF860", Offset = "0x29BDE60", VA = "0x1829BF860")]
	internal unsafe static int GetCount(UnsafeParallelHashMapData* data)
	{
		return default(int);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x29BF950", Offset = "0x29BDF50", VA = "0x1829BF950")]
	internal unsafe static bool MoveNextSearch(UnsafeParallelHashMapData* data, ref int bucketIndex, ref int nextIndex, out int index)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x29BF9E0", Offset = "0x29BDFE0", VA = "0x1829BF9E0")]
	internal unsafe static bool MoveNext(UnsafeParallelHashMapData* data, ref int bucketIndex, ref int nextIndex, out int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C47")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal unsafe static void GetKeyArray<TKey>(UnsafeParallelHashMapData* data, NativeArray<TKey> result) where TKey : struct
	{
	}

	[Token(Token = "0x6000C48")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal unsafe static void GetValueArray<TValue>(UnsafeParallelHashMapData* data, NativeArray<TValue> result) where TValue : struct
	{
	}

	[Token(Token = "0x6000C49")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	internal unsafe static void GetKeyValueArrays<TKey, TValue>(UnsafeParallelHashMapData* data, NativeKeyValueArrays<TKey, TValue> result) where TKey : struct where TValue : struct
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x29BF820", Offset = "0x29BDE20", VA = "0x1829BF820")]
	internal UnsafeParallelHashMapBucketData GetBucketData()
	{
		return default(UnsafeParallelHashMapBucketData);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x29BF740", Offset = "0x29BDD40", VA = "0x1829BF740")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private unsafe static void CheckHashMapReallocateDoesNotShrink(UnsafeParallelHashMapData* data, int newCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x29BF680", Offset = "0x29BDC80", VA = "0x1829BF680")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCapacity(int capacity)
	{
	}
}
