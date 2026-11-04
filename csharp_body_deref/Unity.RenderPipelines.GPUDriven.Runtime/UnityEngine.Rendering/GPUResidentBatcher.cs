// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentBatcher
// Update status: NEW in this game update
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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	internal OcclusionCullingCommon occlusionCullingCommon
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x2BC4550", Offset = "0x2BC2B50", VA = "0x182BC4550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	internal InstanceCullingBatcher instanceCullingBatcher
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2BC35E0", Offset = "0x2BC1BE0", VA = "0x182BC35E0")]
	private void ProcessTrees()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2BC4080", Offset = "0x2BC2680", VA = "0x182BC4080")]
	private void UpdateSpeedTreeWindAndUploadWindParamsToGPU(NativeArray<int> treeRendererIDs, NativeArray<InstanceHandle> treeInstances, bool history)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2BC43E0", Offset = "0x2BC29E0", VA = "0x182BC43E0")]
	public GPUResidentBatcher(RenderersBatchersContext batcherContext, InstanceCullingBatcherDesc instanceCullerBatcherDesc, UnityEngine.Rendering.GPUDrivenProcessor gpuDrivenProcessor)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2BC32C0", Offset = "0x2BC18C0", VA = "0x182BC32C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2BC3500", Offset = "0x2BC1B00", VA = "0x182BC3500")]
	public void OnBeginContextRendering()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2BC3530", Offset = "0x2BC1B30", VA = "0x182BC3530")]
	public void OnEndContextRendering()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2BC34E0", Offset = "0x2BC1AE0", VA = "0x182BC34E0")]
	public void OnBeginCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2BC34E0", Offset = "0x2BC1AE0", VA = "0x182BC34E0")]
	public void OnEndCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2BC3A00", Offset = "0x2BC2000", VA = "0x182BC3A00")]
	public void UpdateFrame()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2BC3260", Offset = "0x2BC1860", VA = "0x182BC3260")]
	public void DestroyMaterials(NativeArray<EntityId> destroyedMaterials)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2BC3230", Offset = "0x2BC1830", VA = "0x182BC3230")]
	public void DestroyDrawInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2BC3290", Offset = "0x2BC1890", VA = "0x182BC3290")]
	public void DestroyMeshes(NativeArray<EntityId> destroyedMeshes)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2BC3320", Offset = "0x2BC1920", VA = "0x182BC3320")]
	internal void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupIDs)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2BC3460", Offset = "0x2BC1A60", VA = "0x182BC3460")]
	public void InstanceOcclusionTest(RenderGraph renderGraph, in OcclusionCullingSettings settings, ReadOnlySpan<SubviewOcclusionTest> subviewOcclusionTests)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2BC3A40", Offset = "0x2BC2040", VA = "0x182BC3A40")]
	public void UpdateInstanceOccluders(RenderGraph renderGraph, in OccluderParameters occluderParams, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2BC3FB0", Offset = "0x2BC25B0", VA = "0x182BC3FB0")]
	public void UpdateRenderers(NativeArray<EntityId> renderersID, bool materialUpdateOnly = false)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2BC39A0", Offset = "0x2BC1FA0", VA = "0x182BC39A0")]
	public JobHandle SchedulePackedMaterialCacheUpdate(NativeArray<EntityId> materialIDs, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2BC35C0", Offset = "0x2BC1BC0", VA = "0x182BC35C0")]
	public void PostCullBeginCameraRendering(RenderRequestBatcherContext context)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2BC3590", Offset = "0x2BC1B90", VA = "0x182BC3590")]
	public void OnSetupAmbientProbe()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2BC3C00", Offset = "0x2BC2200", VA = "0x182BC3C00")]
	private void UpdateRendererInstancesAndBatches(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, IList<Mesh> meshes, IList<Material> materials)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x2BC3AB0", Offset = "0x2BC20B0", VA = "0x182BC3AB0")]
	private void UpdateRendererBatches(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, IList<Mesh> meshes, IList<Material> materials)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x2BC3550", Offset = "0x2BC1B50", VA = "0x182BC3550")]
	private void OnFinishedCulling(IntPtr customCullingResult)
	{
	}
}
