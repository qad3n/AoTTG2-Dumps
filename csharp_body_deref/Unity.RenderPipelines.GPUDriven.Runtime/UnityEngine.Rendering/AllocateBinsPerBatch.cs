// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AllocateBinsPerBatch
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

[Token(Token = "0x2000040")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct AllocateBinsPerBatch : IJobParallelFor
{
	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public BinningConfig binningConfig;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x8")]
	[ReadOnly]
	public NativeList<DrawBatch> drawBatches;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<int> drawInstanceIndices;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x20")]
	[ReadOnly]
	public CPUInstanceData.ReadOnly instanceData;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x108")]
	[ReadOnly]
	public NativeArray<byte> rendererVisibilityMasks;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x118")]
	[ReadOnly]
	public NativeArray<byte> rendererMeshLodSettings;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x128")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<int> batchBinAllocOffsets;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x138")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<int> batchBinCounts;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x148")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[DeallocateOnJobCompletion]
	public NativeArray<int> binAllocCounter;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x158")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<short> binConfigIndices;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x168")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<int> binVisibleInstanceCounts;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x178")]
	[ReadOnly]
	public int debugCounterIndexBase;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x180")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	public NativeArray<int> splitDebugCounters;

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x2BBC700", Offset = "0x2BBAD00", VA = "0x182BBC700")]
	private bool IsInstanceFlipped(int rendererIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x2BBC790", Offset = "0x2BBAD90", VA = "0x182BBC790")]
	private bool IsMeshLodVisible(int batchLodLevel, int rendererIndex, bool supportsCrossFade)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x2BBC690", Offset = "0x2BBAC90", VA = "0x182BBC690")]
	private static int GetPrimitiveCount(int indexCount, MeshTopology topology, bool nativeQuads)
	{
		return default(int);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x2BBBFF0", Offset = "0x2BBA5F0", VA = "0x182BBBFF0", Slot = "4")]
	public void Execute(int batchIndex)
	{
	}
}
