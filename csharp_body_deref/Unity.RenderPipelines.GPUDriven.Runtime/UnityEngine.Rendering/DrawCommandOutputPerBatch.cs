// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DrawCommandOutputPerBatch
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

[Token(Token = "0x2000042")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct DrawCommandOutputPerBatch : IJobParallelFor
{
	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public BinningConfig binningConfig;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x8")]
	[ReadOnly]
	public NativeParallelHashMap<uint, BatchID> batchIDs;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x18")]
	[ReadOnly]
	public GPUInstanceDataBuffer.ReadOnly instanceDataBuffer;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x28")]
	[ReadOnly]
	public NativeList<DrawBatch> drawBatches;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x30")]
	[ReadOnly]
	public NativeArray<int> drawInstanceIndices;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x40")]
	[ReadOnly]
	public CPUInstanceData.ReadOnly instanceData;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x128")]
	[ReadOnly]
	public NativeArray<byte> rendererVisibilityMasks;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x138")]
	[ReadOnly]
	public NativeArray<byte> rendererMeshLodSettings;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x148")]
	[ReadOnly]
	public NativeArray<byte> rendererCrossFadeValues;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x158")]
	[ReadOnly]
	[DeallocateOnJobCompletion]
	public NativeArray<int> batchBinAllocOffsets;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x168")]
	[ReadOnly]
	[DeallocateOnJobCompletion]
	public NativeArray<int> batchBinCounts;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x178")]
	[ReadOnly]
	[DeallocateOnJobCompletion]
	public NativeArray<int> batchDrawCommandOffsets;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x188")]
	[ReadOnly]
	[DeallocateOnJobCompletion]
	public NativeArray<short> binConfigIndices;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x198")]
	[ReadOnly]
	[DeallocateOnJobCompletion]
	public NativeArray<int> binVisibleInstanceOffsets;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x1A8")]
	[ReadOnly]
	[DeallocateOnJobCompletion]
	public NativeArray<int> binVisibleInstanceCounts;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x1B8")]
	[ReadOnly]
	public NativeArray<BatchCullingOutputDrawCommands> cullingOutput;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x1C8")]
	[ReadOnly]
	public IndirectBufferLimits indirectBufferLimits;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x1D0")]
	[ReadOnly]
	public GraphicsBufferHandle visibleInstancesBufferHandle;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x1D4")]
	[ReadOnly]
	public GraphicsBufferHandle indirectArgsBufferHandle;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x1D8")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	public NativeArray<IndirectBufferAllocInfo> indirectBufferAllocInfo;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x1E8")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	public NativeArray<IndirectDrawInfo> indirectDrawInfoGlobalArray;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x1F8")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	public NativeArray<IndirectInstanceInfo> indirectInstanceInfoGlobalArray;

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x2BC0E80", Offset = "0x2BBF480", VA = "0x182BC0E80")]
	private int EncodeGPUInstanceIndexAndCrossFade(int rendererIndex, bool negateCrossFade)
	{
		return default(int);
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x2BC1890", Offset = "0x2BBFE90", VA = "0x182BC1890")]
	private bool IsInstanceFlipped(int rendererIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x2BC1930", Offset = "0x2BBFF30", VA = "0x182BC1930")]
	private bool IsMeshLodVisible(int batchLodLevel, int rendererIndex, bool supportsCrossFade, ref bool negateCrossfade)
	{
		return default(bool);
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x2BC0F50", Offset = "0x2BBF550", VA = "0x182BC0F50", Slot = "4")]
	public void Execute(int batchIndex)
	{
	}
}
