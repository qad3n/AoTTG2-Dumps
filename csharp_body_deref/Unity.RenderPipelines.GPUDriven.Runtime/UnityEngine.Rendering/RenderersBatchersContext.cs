// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderersBatchersContext
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

[Token(Token = "0x20000E1")]
internal class RenderersBatchersContext : IDisposable
{
	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x10")]
	private InstanceDataSystem m_InstanceDataSystem;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x18")]
	private GPUResidentDrawerResources m_Resources;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x20")]
	private UnityEngine.Rendering.GPUDrivenProcessor m_GPUDrivenProcessor;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x28")]
	private LODGroupDataPool m_LODGroupDataPool;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x30")]
	internal GPUInstanceDataBuffer m_InstanceDataBuffer;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x38")]
	private RenderersParameters m_RenderersParameters;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0xA8")]
	private GPUInstanceDataBufferUploader.GPUResources m_UploadResources;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0xE8")]
	private GPUInstanceDataBufferGrower.GPUResources m_GrowerResources;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0xF8")]
	internal CommandBuffer m_CmdBuffer;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x100")]
	private SphericalHarmonicsL2 m_CachedAmbientProbe;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x16C")]
	private float m_SmallMeshScreenPercentage;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x170")]
	private UnityEngine.Rendering.GPUDrivenLODGroupDataCallback m_UpdateLODGroupCallback;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x178")]
	private UnityEngine.Rendering.GPUDrivenLODGroupDataCallback m_TransformLODGroupCallback;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x180")]
	private OcclusionCullingCommon m_OcclusionCullingCommon;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x188")]
	private DebugRendererBatcherStats m_DebugStats;

	[Token(Token = "0x17000060")]
	public RenderersParameters renderersParameters
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x2BFBEC0", Offset = "0x2BFA4C0", VA = "0x182BFBEC0")]
		get
		{
			return default(RenderersParameters);
		}
	}

	[Token(Token = "0x17000061")]
	public GraphicsBuffer gpuInstanceDataBuffer
	{
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x2BFBD00", Offset = "0x2BFA300", VA = "0x182BFBD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000062")]
	public int activeLodGroupCount
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x2BFBB50", Offset = "0x2BFA150", VA = "0x182BFBB50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000063")]
	public NativeArray<GPUInstanceComponentDesc>.ReadOnly defaultDescriptions
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x2BFBC60", Offset = "0x2BFA260", VA = "0x182BFBC60")]
		get
		{
			return default(NativeArray<GPUInstanceComponentDesc>.ReadOnly);
		}
	}

	[Token(Token = "0x17000064")]
	public NativeArray<MetadataValue> defaultMetadata
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x2BFBCD0", Offset = "0x2BFA2D0", VA = "0x182BFBCD0")]
		get
		{
			return default(NativeArray<MetadataValue>);
		}
	}

	[Token(Token = "0x17000065")]
	public NativeList<LODGroupCullingData> lodGroupCullingData
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x1CB2C30", Offset = "0x1CB1230", VA = "0x181CB2C30")]
		get
		{
			return default(NativeList<LODGroupCullingData>);
		}
	}

	[Token(Token = "0x17000066")]
	public int instanceDataBufferVersion
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x2717ED0", Offset = "0x27164D0", VA = "0x182717ED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000067")]
	public int instanceDataBufferLayoutVersion
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x2BFBD40", Offset = "0x2BFA340", VA = "0x182BFBD40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000068")]
	public SphericalHarmonicsL2 cachedAmbientProbe
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x2BFBBF0", Offset = "0x2BFA1F0", VA = "0x182BFBBF0")]
		get
		{
			return default(SphericalHarmonicsL2);
		}
	}

	[Token(Token = "0x17000069")]
	public bool hasBoundingSpheres
	{
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x2BFBD20", Offset = "0x2BFA320", VA = "0x182BFBD20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public int cameraCount
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x2BFBC40", Offset = "0x2BFA240", VA = "0x182BFBC40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public CPUInstanceData.ReadOnly instanceData
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x2BFBDA0", Offset = "0x2BFA3A0", VA = "0x182BFBDA0")]
		get
		{
			return default(CPUInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700006C")]
	public CPUSharedInstanceData.ReadOnly sharedInstanceData
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x2BFBF10", Offset = "0x2BFA510", VA = "0x182BFBF10")]
		get
		{
			return default(CPUSharedInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700006D")]
	public CPUPerCameraInstanceData perCameraInstanceData
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x2BFBE90", Offset = "0x2BFA490", VA = "0x182BFBE90")]
		get
		{
			return default(CPUPerCameraInstanceData);
		}
	}

	[Token(Token = "0x1700006E")]
	public GPUInstanceDataBuffer.ReadOnly instanceDataBuffer
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x2BFBD60", Offset = "0x2BFA360", VA = "0x182BFBD60")]
		get
		{
			return default(GPUInstanceDataBuffer.ReadOnly);
		}
	}

	[Token(Token = "0x1700006F")]
	public NativeArray<InstanceHandle> aliveInstances
	{
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x2BFBBB0", Offset = "0x2BFA1B0", VA = "0x182BFBBB0")]
		get
		{
			return default(NativeArray<InstanceHandle>);
		}
	}

	[Token(Token = "0x17000070")]
	public float smallMeshScreenPercentage
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x2BFBFB0", Offset = "0x2BFA5B0", VA = "0x182BFBFB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000071")]
	public GPUResidentDrawerResources resources
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000072")]
	internal OcclusionCullingCommon occlusionCullingCommon
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x2BFBE80", Offset = "0x2BFA480", VA = "0x182BFBE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	internal DebugRendererBatcherStats debugStats
	{
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x1D6BB50", Offset = "0x1D6A150", VA = "0x181D6BB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x2BFB5E0", Offset = "0x2BF9BE0", VA = "0x182BFB5E0")]
	public RenderersBatchersContext(in RenderersBatchersContextDesc desc, UnityEngine.Rendering.GPUDrivenProcessor gpuDrivenProcessor, GPUResidentDrawerResources resources)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x2BFA460", Offset = "0x2BF8A60", VA = "0x182BFA460", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x2BFA810", Offset = "0x2BF8E10", VA = "0x182BFA810")]
	public int GetMaxInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x2BFA7F0", Offset = "0x2BF8DF0", VA = "0x182BFA7F0")]
	public int GetAliveInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x2BFA9C0", Offset = "0x2BF8FC0", VA = "0x182BFA9C0")]
	public void GrowInstanceBuffer(in InstanceNumInfo instanceNumInfo)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x2BFA6B0", Offset = "0x2BF8CB0", VA = "0x182BFA6B0")]
	private void EnsureInstanceBufferCapacity()
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x2BFB510", Offset = "0x2BF9B10", VA = "0x182BFB510")]
	private void UpdateLODGroupData(in UnityEngine.Rendering.GPUDrivenLODGroupData lodGroupData)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x2BFAF70", Offset = "0x2BF9570", VA = "0x182BFAF70")]
	private void TransformLODGroupData(in UnityEngine.Rendering.GPUDrivenLODGroupData lodGroupData)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x2BFA400", Offset = "0x2BF8A00", VA = "0x182BFA400")]
	public void DestroyLODGroups(NativeArray<EntityId> destroyed)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x2BFB530", Offset = "0x2BF9B30", VA = "0x182BFB530")]
	public void UpdateLODGroups(NativeArray<EntityId> changedID)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x2BFABC0", Offset = "0x2BF91C0", VA = "0x182BFABC0")]
	public void ReallocateAndGetInstances(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x2BFAE80", Offset = "0x2BF9480", VA = "0x182BFAE80")]
	public JobHandle ScheduleUpdateInstanceDataJob(NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x2BFA7C0", Offset = "0x2BF8DC0", VA = "0x182BFA7C0")]
	public void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupsID)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x2BFA760", Offset = "0x2BF8D60", VA = "0x182BFA760")]
	public void FreeInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x2BFAD50", Offset = "0x2BF9350", VA = "0x182BFAD50")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x2BFADB0", Offset = "0x2BF93B0", VA = "0x182BFADB0")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x2BFAE00", Offset = "0x2BF9400", VA = "0x182BFAE00")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<int> instancesOffset, NativeArray<int> instancesCount, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x2BFAD00", Offset = "0x2BF9300", VA = "0x182BFAD00")]
	public JobHandle ScheduleQueryMeshInstancesJob(NativeArray<EntityId> sortedMeshIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x2BFA390", Offset = "0x2BF8990", VA = "0x182BFA390")]
	public void ChangeInstanceBufferVersion()
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x2BFA3B0", Offset = "0x2BF89B0", VA = "0x182BFA3B0")]
	public GPUInstanceDataBufferUploader CreateDataBufferUploader(int capacity, InstanceType instanceType)
	{
		return default(GPUInstanceDataBufferUploader);
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x2BFAF30", Offset = "0x2BF9530", VA = "0x182BFAF30")]
	public void SubmitToGpu(NativeArray<InstanceHandle> instances, ref GPUInstanceDataBufferUploader uploader, bool submitOnlyWrittenParams)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x2BFAEF0", Offset = "0x2BF94F0", VA = "0x182BFAEF0")]
	public void SubmitToGpu(NativeArray<GPUInstanceIndex> gpuInstanceIndices, ref GPUInstanceDataBufferUploader uploader, bool submitOnlyWrittenParams)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x2BFAB40", Offset = "0x2BF9140", VA = "0x182BFAB40")]
	public void InitializeInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, NativeArray<Matrix4x4> prevLocalToWorldMatrices)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x2BFB400", Offset = "0x2BF9A00", VA = "0x182BFB400")]
	public void UpdateInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x2BFB150", Offset = "0x2BF9750", VA = "0x182BFB150")]
	public void UpdateAmbientProbeAndGpuBuffer(bool forceUpdate)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x2BFB470", Offset = "0x2BF9A70", VA = "0x182BFB470")]
	public void UpdateInstanceWindDataHistory(NativeArray<GPUInstanceIndex> gpuInstanceIndices)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x2BFB3C0", Offset = "0x2BF99C0", VA = "0x182BFB3C0")]
	public void UpdateInstanceMotions()
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x2BFB0C0", Offset = "0x2BF96C0", VA = "0x182BFB0C0")]
	public void TransformLODGroups(NativeArray<EntityId> lodGroupsID)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x2BFB5C0", Offset = "0x2BF9BC0", VA = "0x182BFB5C0")]
	public void UpdatePerFrameInstanceVisibility(in ParallelBitArray compactedVisibilityMasks)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x2BFACA0", Offset = "0x2BF92A0", VA = "0x182BFACA0")]
	public JobHandle ScheduleCollectInstancesLODGroupAndMasksJob(NativeArray<InstanceHandle> instances, NativeArray<uint> lodGroupAndMasks)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x2BFA830", Offset = "0x2BF8E30", VA = "0x182BFA830")]
	public InstanceHandle GetRendererInstanceHandle(EntityId rendererID)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x2BFA980", Offset = "0x2BF8F80", VA = "0x182BFA980")]
	public void GetVisibleTreeInstances(in ParallelBitArray compactedVisibilityMasks, in ParallelBitArray processedBits, NativeList<int> visibeTreeRendererIDs, NativeList<InstanceHandle> visibeTreeInstances, bool becomeVisibleOnly, out int becomeVisibeTreeInstancesCount)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
	public GPUInstanceDataBuffer GetInstanceDataBuffer()
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x2BFB360", Offset = "0x2BF9960", VA = "0x182BFB360")]
	public void UpdateFrame()
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x2BFA790", Offset = "0x2BF8D90", VA = "0x182BFA790")]
	public void FreePerCameraInstanceData(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x2BFB330", Offset = "0x2BF9930", VA = "0x182BFB330")]
	public void UpdateCameras(NativeArray<EntityId> cameraIDs)
	{
	}
}
