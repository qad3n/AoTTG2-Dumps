// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RegisterNewMaterialsJob
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

[Token(Token = "0x200005C")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct RegisterNewMaterialsJob : IJobParallelFor
{
	[Token(Token = "0x4000195")]
	public const int k_BatchSize = 128;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<EntityId> instanceIDs;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x20")]
	[ReadOnly]
	public NativeArray<BatchMaterialID> batchIDs;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x30")]
	[WriteOnly]
	public NativeParallelHashMap<EntityId, BatchMaterialID>.ParallelWriter batchMaterialHashMap;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x40")]
	[WriteOnly]
	public NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ParallelWriter packedMaterialHashMap;

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x2BE9910", Offset = "0x2BE7F10", VA = "0x182BE9910", Slot = "4")]
	public void Execute(int index)
	{
	}
}
