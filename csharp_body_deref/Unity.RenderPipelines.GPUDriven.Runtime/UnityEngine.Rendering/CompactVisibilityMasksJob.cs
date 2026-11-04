// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CompactVisibilityMasksJob
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

[Token(Token = "0x2000043")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct CompactVisibilityMasksJob : IJobParallelForBatch
{
	[Token(Token = "0x4000130")]
	public const int k_BatchSize = 64;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<byte> rendererVisibilityMasks;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x10")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	public ParallelBitArray compactedVisibilityMasks;

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x2BBCF80", Offset = "0x2BBB580", VA = "0x182BBCF80", Slot = "4")]
	public void Execute(int startIndex, int count)
	{
	}
}
