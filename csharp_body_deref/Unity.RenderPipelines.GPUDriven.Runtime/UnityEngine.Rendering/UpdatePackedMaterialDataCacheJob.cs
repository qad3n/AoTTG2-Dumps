// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UpdatePackedMaterialDataCacheJob
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

[Token(Token = "0x200005D")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct UpdatePackedMaterialDataCacheJob : IJob
{
	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<EntityId>.ReadOnly materialIDs;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialDatas;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x20")]
	public NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialHash;

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x2BEB320", Offset = "0x2BE9920", VA = "0x182BEB320")]
	private void ProcessMaterial(int i)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x2BEB2D0", Offset = "0x2BE98D0", VA = "0x182BEB2D0", Slot = "4")]
	public void Execute()
	{
	}
}
