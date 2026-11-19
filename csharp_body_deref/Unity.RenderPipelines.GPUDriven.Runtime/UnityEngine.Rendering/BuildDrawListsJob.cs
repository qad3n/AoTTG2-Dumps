// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BuildDrawListsJob
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

[Token(Token = "0x2000056")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct BuildDrawListsJob : IJobParallelFor
{
	[Token(Token = "0x4000178")]
	public const int k_BatchSize = 128;

	[Token(Token = "0x4000179")]
	public const int k_IntsPerCacheLine = 16;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeParallelHashMap<DrawKey, int> batchHash;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x10")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[ReadOnly]
	public NativeList<DrawInstance> drawInstances;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x18")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[ReadOnly]
	public NativeList<DrawBatch> drawBatches;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x20")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<int> internalDrawIndex;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x30")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeArray<int> drawInstanceIndices;

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x65CA550", Offset = "0x65C9550", VA = "0x65CA550")]
	private unsafe static int IncrementCounter(int* counter)
	{
		return default(int);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x65CA580", Offset = "0x65C9580", VA = "0x65CA580", Slot = "4")]
	public void Execute(int index)
	{
	}
}
