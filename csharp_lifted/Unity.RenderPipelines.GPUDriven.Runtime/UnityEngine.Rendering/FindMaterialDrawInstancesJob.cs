// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FindMaterialDrawInstancesJob
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000058")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct FindMaterialDrawInstancesJob : IJobParallelForBatch
{
	[Token(Token = "0x4000183")]
	public const int k_BatchSize = 128;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<uint> materialsSorted;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x10")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[ReadOnly]
	public NativeList<DrawInstance> drawInstances;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x18")]
	[WriteOnly]
	public NativeList<int>.ParallelWriter outDrawInstanceIndicesWriter;

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x65CA8C0", Offset = "0x65C98C0", VA = "0x65CA8C0", Slot = "4")]
	public void Execute(int startIndex, int count)
	{
	}
}
