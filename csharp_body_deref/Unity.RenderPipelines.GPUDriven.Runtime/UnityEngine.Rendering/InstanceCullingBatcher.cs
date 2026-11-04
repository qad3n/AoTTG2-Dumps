// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullingBatcher
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BE1B20", Offset = "0x2BE0120", VA = "0x182BE1B20")]
		get
		{
			return default(NativeParallelHashMap<EntityId, BatchMaterialID>);
		}
	}

	[Token(Token = "0x1700002D")]
	public NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialHash
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x2BE1B40", Offset = "0x2BE0140", VA = "0x182BE1B40")]
		get
		{
			return default(NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>);
		}
	}

	[Token(Token = "0x1700002E")]
	internal unsafe ref InstanceCuller culler
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x2BE1B30", Offset = "0x2BE0130", VA = "0x182BE1B30")]
		get
		{
			return ref *(InstanceCuller*)null;
		}
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x2BE1570", Offset = "0x2BDFB70", VA = "0x182BE1570")]
	public InstanceCullingBatcher(RenderersBatchersContext batcherContext, InstanceCullingBatcherDesc desc, BatchRendererGroup.OnFinishedCulling onFinishedCulling)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x2BDF8E0", Offset = "0x2BDDEE0", VA = "0x182BDF8E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x2BDFD60", Offset = "0x2BDE360", VA = "0x182BDFD60")]
	private BatchID GetBatchID(InstanceComponentGroup componentsOverriden)
	{
		return default(BatchID);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x2BE1290", Offset = "0x2BDF890", VA = "0x182BE1290")]
	private void UpdateInstanceDataBufferLayoutVersion()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
	public CPUDrawInstanceData GetDrawInstanceData()
	{
		return null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2BE00F0", Offset = "0x2BDE6F0", VA = "0x182BE00F0")]
	public JobHandle OnPerformCulling(BatchRendererGroup rendererGroup, BatchCullingContext cc, BatchCullingOutput cullingOutput, IntPtr userContext)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x2BE00C0", Offset = "0x2BDE6C0", VA = "0x182BE00C0")]
	public void OnFinishedCulling(IntPtr customCullingResult)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x2BDF410", Offset = "0x2BDDA10", VA = "0x182BDF410")]
	public void DestroyDrawInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x2BDF450", Offset = "0x2BDDA50", VA = "0x182BDF450")]
	public void DestroyMaterials(NativeArray<EntityId> destroyedMaterials)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x2BDF720", Offset = "0x2BDDD20", VA = "0x182BDF720")]
	public void DestroyMeshes(NativeArray<EntityId> destroyedMeshes)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void PostCullBeginCameraRendering(RenderRequestBatcherContext context)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x2BE0CF0", Offset = "0x2BDF2F0", VA = "0x182BE0CF0")]
	private void RegisterBatchMeshes(NativeArray<EntityId> meshIDs)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x2BE0700", Offset = "0x2BDED00", VA = "0x182BE0700")]
	private void RegisterBatchMaterials(in NativeArray<EntityId> usedMaterialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> usedPackedMaterialDatas)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x2BE1160", Offset = "0x2BDF760", VA = "0x182BE1160")]
	public JobHandle SchedulePackedMaterialCacheUpdate(NativeArray<EntityId> materialIDs, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x2BDF2B0", Offset = "0x2BDD8B0", VA = "0x182BDF2B0")]
	public void BuildBatch(NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, bool registerMaterialsAndMeshes)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x2BE0020", Offset = "0x2BDE620", VA = "0x182BE0020")]
	public void InstanceOccludersUpdated(int viewInstanceID, int subviewMask)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x2BE1250", Offset = "0x2BDF850", VA = "0x182BE1250")]
	public void UpdateFrame()
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x2BDFFE0", Offset = "0x2BDE5E0", VA = "0x182BDFFE0")]
	public ParallelBitArray GetCompactedVisibilityMasks(bool syncCullingJobs)
	{
		return default(ParallelBitArray);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x2BE0050", Offset = "0x2BDE650", VA = "0x182BE0050")]
	public void OnEndContextRendering()
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x2BE0040", Offset = "0x2BDE640", VA = "0x182BE0040")]
	public void OnBeginCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x2BE0040", Offset = "0x2BDE640", VA = "0x182BE0040")]
	public void OnEndCameraRendering(Camera camera)
	{
	}
}
