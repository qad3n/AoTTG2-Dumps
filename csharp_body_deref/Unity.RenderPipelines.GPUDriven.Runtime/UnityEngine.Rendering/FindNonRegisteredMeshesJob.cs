// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FindNonRegisteredMeshesJob
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

[Token(Token = "0x2000059")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct FindNonRegisteredMeshesJob : IJobParallelForBatch
{
	[Token(Token = "0x4000187")]
	public const int k_BatchSize = 128;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<EntityId> instanceIDs;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeParallelHashMap<EntityId, BatchMeshID> hashMap;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x20")]
	[WriteOnly]
	public NativeList<EntityId>.ParallelWriter outInstancesWriter;

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x2BDA780", Offset = "0x2BD8D80", VA = "0x182BDA780", Slot = "4")]
	public void Execute(int startIndex, int count)
	{
	}
}
