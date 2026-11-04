// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RegisterNewMeshesJob
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

[Token(Token = "0x200005B")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct RegisterNewMeshesJob : IJobParallelFor
{
	[Token(Token = "0x4000191")]
	public const int k_BatchSize = 128;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<EntityId> instanceIDs;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<BatchMeshID> batchIDs;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x20")]
	[WriteOnly]
	public NativeParallelHashMap<EntityId, BatchMeshID>.ParallelWriter hashMap;

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x2BE99A0", Offset = "0x2BE7FA0", VA = "0x182BE99A0", Slot = "4")]
	public void Execute(int index)
	{
	}
}
