// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PrefixSumDrawsAndInstances
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

[Token(Token = "0x2000041")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct PrefixSumDrawsAndInstances : IJob
{
	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeList<DrawRange> drawRanges;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x8")]
	[ReadOnly]
	public NativeArray<int> drawBatchIndices;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x18")]
	[ReadOnly]
	public NativeArray<int> batchBinAllocOffsets;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x28")]
	[ReadOnly]
	public NativeArray<int> batchBinCounts;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x38")]
	[ReadOnly]
	public NativeArray<int> binVisibleInstanceCounts;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x48")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<int> batchDrawCommandOffsets;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x58")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<int> binVisibleInstanceOffsets;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x68")]
	[NativeDisableUnsafePtrRestriction]
	public NativeArray<BatchCullingOutputDrawCommands> cullingOutput;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x78")]
	[ReadOnly]
	public IndirectBufferLimits indirectBufferLimits;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x80")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	public NativeArray<IndirectBufferAllocInfo> indirectBufferAllocInfo;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x90")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	public NativeArray<int> indirectAllocationCounters;

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x2BCED10", Offset = "0x2BCD310", VA = "0x182BCED10", Slot = "4")]
	public void Execute()
	{
	}
}
