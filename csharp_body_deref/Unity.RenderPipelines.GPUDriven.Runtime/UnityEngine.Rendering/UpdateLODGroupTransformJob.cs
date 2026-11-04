// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UpdateLODGroupTransformJob
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

[Token(Token = "0x20000BB")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct UpdateLODGroupTransformJob : IJobParallelFor
{
	[Token(Token = "0x400037D")]
	public const int k_BatchSize = 256;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<EntityId> lodGroupIDs;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x20")]
	[ReadOnly]
	public NativeArray<Vector3> worldSpaceReferencePoints;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x30")]
	[ReadOnly]
	public NativeArray<float> worldSpaceSizes;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x40")]
	[ReadOnly]
	public bool requiresGPUUpload;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x41")]
	[ReadOnly]
	public bool supportDitheringCrossFade;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x48")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[ReadOnly]
	public NativeList<LODGroupData> lodGroupData;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x50")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[WriteOnly]
	public NativeList<LODGroupCullingData> lodGroupCullingData;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x58")]
	[NativeDisableUnsafePtrRestriction]
	public UnsafeAtomicCounter32 atomicUpdateCount;

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2BFEA50", Offset = "0x2BFD050", VA = "0x182BFEA50", Slot = "4")]
	public void Execute(int index)
	{
	}
}
