// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PrefixSumDrawInstancesJob
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000055")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct PrefixSumDrawInstancesJob : IJob
{
	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeParallelHashMap<RangeKey, int> rangeHash;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x10")]
	public NativeList<DrawRange> drawRanges;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x18")]
	public NativeList<DrawBatch> drawBatches;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<int> drawBatchIndices;

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2BE80A0", Offset = "0x2BE66A0", VA = "0x182BE80A0", Slot = "4")]
	public void Execute()
	{
	}
}
