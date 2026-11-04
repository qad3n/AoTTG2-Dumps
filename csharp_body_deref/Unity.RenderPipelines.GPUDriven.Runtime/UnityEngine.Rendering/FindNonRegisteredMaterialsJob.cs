// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FindNonRegisteredMaterialsJob
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

[Token(Token = "0x200005A")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct FindNonRegisteredMaterialsJob : IJobParallelForBatch
{
	[Token(Token = "0x400018B")]
	public const int k_BatchSize = 128;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<EntityId> instanceIDs;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x20")]
	[ReadOnly]
	public NativeParallelHashMap<EntityId, BatchMaterialID> hashMap;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x30")]
	[WriteOnly]
	public NativeList<EntityId>.ParallelWriter outInstancesWriter;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x38")]
	[WriteOnly]
	public NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ParallelWriter outPackedMaterialDatasWriter;

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x2BDA510", Offset = "0x2BD8B10", VA = "0x182BDA510", Slot = "4")]
	public void Execute(int startIndex, int count)
	{
	}
}
