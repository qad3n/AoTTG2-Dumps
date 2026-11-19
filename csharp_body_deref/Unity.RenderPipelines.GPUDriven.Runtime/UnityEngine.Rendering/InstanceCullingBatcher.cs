// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullingBatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x200005F")]
internal class InstanceCullingBatcher : IDisposable
{
	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x10")]
	private RenderersBatchersContext m_BatchersContext;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x18")]
	private CPUDrawInstanceData m_DrawInstanceData;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x20")]
	private BatchRendererGroup m_BRG;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x28")]
	private NativeParallelHashMap<uint, BatchID> m_GlobalBatchIDs;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x38")]
	private InstanceCuller m_Culler;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x1D8")]
	private NativeParallelHashMap<EntityId, BatchMaterialID> m_BatchMaterialHash;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x1E8")]
	private NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> m_PackedMaterialHash;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x1F8")]
	private NativeParallelHashMap<EntityId, BatchMeshID> m_BatchMeshHash;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x208")]
	private int m_CachedInstanceDataBufferLayoutVersion;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x210")]
	private OnCullingCompleteCallback m_OnCompleteCallback;

	[Token(Token = "0x1700002C")]
	public NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x65CBEE0", Offset = "0x65CAEE0", VA = "0x65CBEE0")]
		get
		{
			return default(NativeParallelHashMap<EntityId, BatchMaterialID>);
		}
	}

	[Token(Token = "0x1700002D")]
	public NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialHash
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x65CBEF0", Offset = "0x65CAEF0", VA = "0x65CBEF0")]
		get
		{
			return default(NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>);
		}
	}

	[Token(Token = "0x1700002E")]
	internal unsafe ref InstanceCuller culler
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x65C9BC0", Offset = "0x65C8BC0", VA = "0x65C9BC0")]
		get
		{
			return ref *(InstanceCuller*)null;
		}
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x65CBF00", Offset = "0x65CAF00", VA = "0x65CBF00")]
	public InstanceCullingBatcher(RenderersBatchersContext batcherContext, InstanceCullingBatcherDesc desc, BatchRendererGroup.OnFinishedCulling onFinishedCulling)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x65CC510", Offset = "0x65CB510", VA = "0x65CC510", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x65CC2D0", Offset = "0x65CB2D0", VA = "0x65CC2D0")]
	private BatchID GetBatchID(InstanceComponentGroup componentsOverriden)
	{
		return default(BatchID);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x65CC850", Offset = "0x65CB850", VA = "0x65CC850")]
	private void UpdateInstanceDataBufferLayoutVersion()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x65CCB30", Offset = "0x65CBB30", VA = "0x65CCB30")]
	public CPUDrawInstanceData GetDrawInstanceData()
	{
		return null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x65CCB40", Offset = "0x65CBB40", VA = "0x65CCB40")]
	public JobHandle OnPerformCulling(BatchRendererGroup rendererGroup, BatchCullingContext cc, BatchCullingOutput cullingOutput, IntPtr userContext)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x65CD160", Offset = "0x65CC160", VA = "0x65CD160")]
	public void OnFinishedCulling(IntPtr customCullingResult)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x65CD180", Offset = "0x65CC180", VA = "0x65CD180")]
	public void DestroyDrawInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x65CD1A0", Offset = "0x65CC1A0", VA = "0x65CD1A0")]
	public void DestroyMaterials(NativeArray<EntityId> destroyedMaterials)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x65CD4D0", Offset = "0x65CC4D0", VA = "0x65CD4D0")]
	public void DestroyMeshes(NativeArray<EntityId> destroyedMeshes)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x65CD700", Offset = "0x65CC700", VA = "0x65CD700")]
	public void PostCullBeginCameraRendering(RenderRequestBatcherContext context)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x65CD710", Offset = "0x65CC710", VA = "0x65CD710")]
	private void RegisterBatchMeshes(NativeArray<EntityId> meshIDs)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x65CDBB0", Offset = "0x65CCBB0", VA = "0x65CDBB0")]
	private void RegisterBatchMaterials(in NativeArray<EntityId> usedMaterialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> usedPackedMaterialDatas)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x65CE270", Offset = "0x65CD270", VA = "0x65CE270")]
	public JobHandle SchedulePackedMaterialCacheUpdate(NativeArray<EntityId> materialIDs, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x65CE390", Offset = "0x65CD390", VA = "0x65CE390")]
	public void BuildBatch(NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, bool registerMaterialsAndMeshes)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x65CE4D0", Offset = "0x65CD4D0", VA = "0x65CE4D0")]
	public void InstanceOccludersUpdated(int viewInstanceID, int subviewMask)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x65CE4E0", Offset = "0x65CD4E0", VA = "0x65CE4E0")]
	public void UpdateFrame()
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x65CE510", Offset = "0x65CD510", VA = "0x65CE510")]
	public ParallelBitArray GetCompactedVisibilityMasks(bool syncCullingJobs)
	{
		return default(ParallelBitArray);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x65CE540", Offset = "0x65CD540", VA = "0x65CE540")]
	public void OnEndContextRendering()
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x65CE5A0", Offset = "0x65CD5A0", VA = "0x65CE5A0")]
	public void OnBeginCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x65CE5B0", Offset = "0x65CD5B0", VA = "0x65CE5B0")]
	public void OnEndCameraRendering(Camera camera)
	{
	}
}
