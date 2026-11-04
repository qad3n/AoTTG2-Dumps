// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UpdateLODGroupDataJob
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

[Token(Token = "0x20000BC")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct UpdateLODGroupDataJob : IJobParallelFor
{
	[Token(Token = "0x4000387")]
	public const int k_BatchSize = 256;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<GPUInstanceIndex> lodGroupInstances;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public UnityEngine.Rendering.GPUDrivenLODGroupData inputData;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0xE0")]
	[ReadOnly]
	public bool supportDitheringCrossFade;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0xE8")]
	public NativeArray<LODGroupData> lodGroupsData;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0xF8")]
	public NativeArray<LODGroupCullingData> lodGroupsCullingData;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x108")]
	[NativeDisableUnsafePtrRestriction]
	public UnsafeAtomicCounter32 rendererCount;

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2BFE710", Offset = "0x2BFCD10", VA = "0x182BFE710", Slot = "4")]
	public void Execute(int index)
	{
	}
}
