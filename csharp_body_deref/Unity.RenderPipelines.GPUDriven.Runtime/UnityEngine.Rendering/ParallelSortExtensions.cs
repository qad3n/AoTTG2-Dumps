// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ParallelSortExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E9")]
internal static class ParallelSortExtensions
{
	[Token(Token = "0x20000EA")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal struct RadixSortBucketCountJob : IJobFor
	{
		[Token(Token = "0x4000447")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public int radix;

		[Token(Token = "0x4000448")]
		[FieldOffset(Offset = "0x4")]
		[ReadOnly]
		public int jobsCount;

		[Token(Token = "0x4000449")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public int batchSize;

		[Token(Token = "0x400044A")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> array;

		[Token(Token = "0x400044B")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> buckets;

		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x2BF9A30", Offset = "0x2BF8030", VA = "0x182BF9A30", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x20000EB")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal struct RadixSortBatchPrefixSumJob : IJobFor
	{
		[Token(Token = "0x400044C")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public int radix;

		[Token(Token = "0x400044D")]
		[FieldOffset(Offset = "0x4")]
		[ReadOnly]
		public int jobsCount;

		[Token(Token = "0x400044E")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> array;

		[Token(Token = "0x400044F")]
		[FieldOffset(Offset = "0x18")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> counter;

		[Token(Token = "0x4000450")]
		[FieldOffset(Offset = "0x28")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> indicesSum;

		[Token(Token = "0x4000451")]
		[FieldOffset(Offset = "0x38")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> buckets;

		[Token(Token = "0x4000452")]
		[FieldOffset(Offset = "0x48")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> indices;

		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x2BF9840", Offset = "0x2BF7E40", VA = "0x182BF9840")]
		private static int AtomicIncrement(NativeArray<int> counter)
		{
			return default(int);
		}

		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x2BF99C0", Offset = "0x2BF7FC0", VA = "0x182BF99C0")]
		private int JobIndexPrefixSum(int sum, int i)
		{
			return default(int);
		}

		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x2BF98A0", Offset = "0x2BF7EA0", VA = "0x182BF98A0", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x20000EC")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal struct RadixSortPrefixSumJob : IJobFor
	{
		[Token(Token = "0x4000453")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public int jobsCount;

		[Token(Token = "0x4000454")]
		[FieldOffset(Offset = "0x8")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> indicesSum;

		[Token(Token = "0x4000455")]
		[FieldOffset(Offset = "0x18")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> indices;

		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x2BF9B30", Offset = "0x2BF8130", VA = "0x182BF9B30", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x20000ED")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal struct RadixSortBucketSortJob : IJobFor
	{
		[Token(Token = "0x4000456")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public int radix;

		[Token(Token = "0x4000457")]
		[FieldOffset(Offset = "0x4")]
		[ReadOnly]
		public int batchSize;

		[Token(Token = "0x4000458")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> array;

		[Token(Token = "0x4000459")]
		[FieldOffset(Offset = "0x18")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> indices;

		[Token(Token = "0x400045A")]
		[FieldOffset(Offset = "0x28")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public NativeArray<int> arraySorted;

		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x2BF9AA0", Offset = "0x2BF80A0", VA = "0x182BF9AA0", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x4000445")]
	private const int kMinRadixSortArraySize = 2048;

	[Token(Token = "0x4000446")]
	private const int kMinRadixSortBatchSize = 256;

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x2BF88B0", Offset = "0x2BF6EB0", VA = "0x182BF88B0")]
	internal static JobHandle ParallelSort(this NativeArray<int> array)
	{
		return default(JobHandle);
	}
}
