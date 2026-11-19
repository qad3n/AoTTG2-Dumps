// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentBatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001A")]
internal class GPUResidentBatcher : IDisposable
{
	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x10")]
	private ParallelBitArray m_ProcessedThisFrameTreeBits;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x30")]
	private RenderersBatchersContext m_BatchersContext;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x38")]
	private UnityEngine.Rendering.GPUDrivenProcessor m_GPUDrivenProcessor;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x40")]
	private UnityEngine.Rendering.GPUDrivenRendererDataCallback m_UpdateRendererInstancesAndBatchesCallback;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x48")]
	private UnityEngine.Rendering.GPUDrivenRendererDataCallback m_UpdateRendererBatchesCallback;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x50")]
	private InstanceCullingBatcher m_InstanceCullingBatcher;

	[Token(Token = "0x1700000D")]
	internal RenderersBatchersContext batchersContext
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x65BAD70", Offset = "0x65B9D70", VA = "0x65BAD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	internal OcclusionCullingCommon occlusionCullingCommon
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x65BAD80", Offset = "0x65B9D80", VA = "0x65BAD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	internal InstanceCullingBatcher instanceCullingBatcher
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x65BADA0", Offset = "0x65B9DA0", VA = "0x65BADA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x65BA680", Offset = "0x65B9680", VA = "0x65BA680")]
	private void ProcessTrees()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x65BAA00", Offset = "0x65B9A00", VA = "0x65BAA00")]
	private void UpdateSpeedTreeWindAndUploadWindParamsToGPU(NativeArray<int> treeRendererIDs, NativeArray<InstanceHandle> treeInstances, bool history)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x65BADB0", Offset = "0x65B9DB0", VA = "0x65BADB0")]
	public GPUResidentBatcher(RenderersBatchersContext batcherContext, InstanceCullingBatcherDesc instanceCullerBatcherDesc, UnityEngine.Rendering.GPUDrivenProcessor gpuDrivenProcessor)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x65BAF20", Offset = "0x65B9F20", VA = "0x65BAF20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x65BAF70", Offset = "0x65B9F70", VA = "0x65BAF70")]
	public void OnBeginContextRendering()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x65BAFA0", Offset = "0x65B9FA0", VA = "0x65BAFA0")]
	public void OnEndContextRendering()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x65BAFC0", Offset = "0x65B9FC0", VA = "0x65BAFC0")]
	public void OnBeginCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x65BAFE0", Offset = "0x65B9FE0", VA = "0x65BAFE0")]
	public void OnEndCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x65BB000", Offset = "0x65BA000", VA = "0x65BB000")]
	public void UpdateFrame()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x65BB030", Offset = "0x65BA030", VA = "0x65BB030")]
	public void DestroyMaterials(NativeArray<EntityId> destroyedMaterials)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x65BB050", Offset = "0x65BA050", VA = "0x65BB050")]
	public void DestroyDrawInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x65BB070", Offset = "0x65BA070", VA = "0x65BB070")]
	public void DestroyMeshes(NativeArray<EntityId> destroyedMeshes)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x65BB090", Offset = "0x65BA090", VA = "0x65BB090")]
	internal void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupIDs)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x65BB1B0", Offset = "0x65BA1B0", VA = "0x65BB1B0")]
	public void InstanceOcclusionTest(RenderGraph renderGraph, in OcclusionCullingSettings settings, ReadOnlySpan<SubviewOcclusionTest> subviewOcclusionTests)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x65BB7B0", Offset = "0x65BA7B0", VA = "0x65BB7B0")]
	public void UpdateInstanceOccluders(RenderGraph renderGraph, in OccluderParameters occluderParams, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x65BB820", Offset = "0x65BA820", VA = "0x65BB820")]
	public void UpdateRenderers(NativeArray<EntityId> renderersID, bool materialUpdateOnly = false)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x65BB8C0", Offset = "0x65BA8C0", VA = "0x65BB8C0")]
	public JobHandle SchedulePackedMaterialCacheUpdate(NativeArray<EntityId> materialIDs, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x65BB8E0", Offset = "0x65BA8E0", VA = "0x65BB8E0")]
	public void PostCullBeginCameraRendering(RenderRequestBatcherContext context)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x65BB900", Offset = "0x65BA900", VA = "0x65BB900")]
	public void OnSetupAmbientProbe()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x65BB920", Offset = "0x65BA920", VA = "0x65BB920")]
	private void UpdateRendererInstancesAndBatches(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, IList<Mesh> meshes, IList<Material> materials)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x65BBC30", Offset = "0x65BAC30", VA = "0x65BBC30")]
	private void UpdateRendererBatches(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, IList<Mesh> meshes, IList<Material> materials)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x65BBD50", Offset = "0x65BAD50", VA = "0x65BBD50")]
	private void OnFinishedCulling(IntPtr customCullingResult)
	{
	}
}
