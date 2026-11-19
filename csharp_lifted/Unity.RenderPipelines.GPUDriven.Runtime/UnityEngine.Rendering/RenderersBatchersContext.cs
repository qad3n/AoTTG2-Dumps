// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderersBatchersContext
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
		[Address(RVA = "0x65EF880", Offset = "0x65EE880", VA = "0x65EF880")]
		get
		{
			return default(RenderersParameters);
		}
	}

	[Token(Token = "0x17000061")]
	public GraphicsBuffer gpuInstanceDataBuffer
	{
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x65EF8D0", Offset = "0x65EE8D0", VA = "0x65EF8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000062")]
	public int activeLodGroupCount
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x65EF8F0", Offset = "0x65EE8F0", VA = "0x65EF8F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000063")]
	public NativeArray<GPUInstanceComponentDesc>.ReadOnly defaultDescriptions
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x65EF940", Offset = "0x65EE940", VA = "0x65EF940")]
		get
		{
			return default(NativeArray<GPUInstanceComponentDesc>.ReadOnly);
		}
	}

	[Token(Token = "0x17000064")]
	public NativeArray<MetadataValue> defaultMetadata
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x65EF990", Offset = "0x65EE990", VA = "0x65EF990")]
		get
		{
			return default(NativeArray<MetadataValue>);
		}
	}

	[Token(Token = "0x17000065")]
	public NativeList<LODGroupCullingData> lodGroupCullingData
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x65EF9B0", Offset = "0x65EE9B0", VA = "0x65EF9B0")]
		get
		{
			return default(NativeList<LODGroupCullingData>);
		}
	}

	[Token(Token = "0x17000066")]
	public int instanceDataBufferVersion
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x65EF9D0", Offset = "0x65EE9D0", VA = "0x65EF9D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000067")]
	public int instanceDataBufferLayoutVersion
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x65EF9F0", Offset = "0x65EE9F0", VA = "0x65EF9F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000068")]
	public SphericalHarmonicsL2 cachedAmbientProbe
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x65EFA10", Offset = "0x65EEA10", VA = "0x65EFA10")]
		get
		{
			return default(SphericalHarmonicsL2);
		}
	}

	[Token(Token = "0x17000069")]
	public bool hasBoundingSpheres
	{
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x65EFA60", Offset = "0x65EEA60", VA = "0x65EFA60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public int cameraCount
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x65EFA80", Offset = "0x65EEA80", VA = "0x65EFA80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public CPUInstanceData.ReadOnly instanceData
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x65EFAA0", Offset = "0x65EEAA0", VA = "0x65EFAA0")]
		get
		{
			return default(CPUInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700006C")]
	public CPUSharedInstanceData.ReadOnly sharedInstanceData
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x65EFAF0", Offset = "0x65EEAF0", VA = "0x65EFAF0")]
		get
		{
			return default(CPUSharedInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700006D")]
	public CPUPerCameraInstanceData perCameraInstanceData
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x65EFB40", Offset = "0x65EEB40", VA = "0x65EFB40")]
		get
		{
			return default(CPUPerCameraInstanceData);
		}
	}

	[Token(Token = "0x1700006E")]
	public GPUInstanceDataBuffer.ReadOnly instanceDataBuffer
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x65EFB70", Offset = "0x65EEB70", VA = "0x65EFB70")]
		get
		{
			return default(GPUInstanceDataBuffer.ReadOnly);
		}
	}

	[Token(Token = "0x1700006F")]
	public NativeArray<InstanceHandle> aliveInstances
	{
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x65EFB90", Offset = "0x65EEB90", VA = "0x65EFB90")]
		get
		{
			return default(NativeArray<InstanceHandle>);
		}
	}

	[Token(Token = "0x17000070")]
	public float smallMeshScreenPercentage
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x65EFBB0", Offset = "0x65EEBB0", VA = "0x65EFBB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000071")]
	public GPUResidentDrawerResources resources
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x65EFBC0", Offset = "0x65EEBC0", VA = "0x65EFBC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000072")]
	internal OcclusionCullingCommon occlusionCullingCommon
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x65EFBD0", Offset = "0x65EEBD0", VA = "0x65EFBD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	internal DebugRendererBatcherStats debugStats
	{
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x65EFBE0", Offset = "0x65EEBE0", VA = "0x65EFBE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x65EFBF0", Offset = "0x65EEBF0", VA = "0x65EFBF0")]
	public RenderersBatchersContext(in RenderersBatchersContextDesc desc, UnityEngine.Rendering.GPUDrivenProcessor gpuDrivenProcessor, GPUResidentDrawerResources resources)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x65F0780", Offset = "0x65EF780", VA = "0x65F0780", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x65F0920", Offset = "0x65EF920", VA = "0x65F0920")]
	public int GetMaxInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x65F0940", Offset = "0x65EF940", VA = "0x65F0940")]
	public int GetAliveInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x65F0960", Offset = "0x65EF960", VA = "0x65F0960")]
	public void GrowInstanceBuffer(in InstanceNumInfo instanceNumInfo)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x65F0AE0", Offset = "0x65EFAE0", VA = "0x65F0AE0")]
	private void EnsureInstanceBufferCapacity()
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x65F0B80", Offset = "0x65EFB80", VA = "0x65F0B80")]
	private void UpdateLODGroupData(in UnityEngine.Rendering.GPUDrivenLODGroupData lodGroupData)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x65F0BA0", Offset = "0x65EFBA0", VA = "0x65F0BA0")]
	private void TransformLODGroupData(in UnityEngine.Rendering.GPUDrivenLODGroupData lodGroupData)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x65F0BC0", Offset = "0x65EFBC0", VA = "0x65F0BC0")]
	public void DestroyLODGroups(NativeArray<EntityId> destroyed)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x65F0BE0", Offset = "0x65EFBE0", VA = "0x65F0BE0")]
	public void UpdateLODGroups(NativeArray<EntityId> changedID)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x65F0C60", Offset = "0x65EFC60", VA = "0x65F0C60")]
	public void ReallocateAndGetInstances(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x65F0C90", Offset = "0x65EFC90", VA = "0x65F0C90")]
	public JobHandle ScheduleUpdateInstanceDataJob(NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x65F0CC0", Offset = "0x65EFCC0", VA = "0x65F0CC0")]
	public void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupsID)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x65F0CE0", Offset = "0x65EFCE0", VA = "0x65F0CE0")]
	public void FreeInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x65F0D00", Offset = "0x65EFD00", VA = "0x65F0D00")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x65F0D20", Offset = "0x65EFD20", VA = "0x65F0D20")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x65F0D40", Offset = "0x65EFD40", VA = "0x65F0D40")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<int> instancesOffset, NativeArray<int> instancesCount, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x65F0D80", Offset = "0x65EFD80", VA = "0x65F0D80")]
	public JobHandle ScheduleQueryMeshInstancesJob(NativeArray<EntityId> sortedMeshIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x65F0DA0", Offset = "0x65EFDA0", VA = "0x65F0DA0")]
	public void ChangeInstanceBufferVersion()
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x65F0DC0", Offset = "0x65EFDC0", VA = "0x65F0DC0")]
	public GPUInstanceDataBufferUploader CreateDataBufferUploader(int capacity, InstanceType instanceType)
	{
		return default(GPUInstanceDataBufferUploader);
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x65F0E10", Offset = "0x65EFE10", VA = "0x65F0E10")]
	public void SubmitToGpu(NativeArray<InstanceHandle> instances, ref GPUInstanceDataBufferUploader uploader, bool submitOnlyWrittenParams)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x65F0E40", Offset = "0x65EFE40", VA = "0x65F0E40")]
	public void SubmitToGpu(NativeArray<GPUInstanceIndex> gpuInstanceIndices, ref GPUInstanceDataBufferUploader uploader, bool submitOnlyWrittenParams)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x65F0E70", Offset = "0x65EFE70", VA = "0x65F0E70")]
	public void InitializeInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, NativeArray<Matrix4x4> prevLocalToWorldMatrices)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x65F0ED0", Offset = "0x65EFED0", VA = "0x65F0ED0")]
	public void UpdateInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x65F0F10", Offset = "0x65EFF10", VA = "0x65F0F10")]
	public void UpdateAmbientProbeAndGpuBuffer(bool forceUpdate)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x65F1130", Offset = "0x65F0130", VA = "0x65F1130")]
	public void UpdateInstanceWindDataHistory(NativeArray<GPUInstanceIndex> gpuInstanceIndices)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x65F11B0", Offset = "0x65F01B0", VA = "0x65F11B0")]
	public void UpdateInstanceMotions()
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x65F11E0", Offset = "0x65F01E0", VA = "0x65F11E0")]
	public void TransformLODGroups(NativeArray<EntityId> lodGroupsID)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x65F1260", Offset = "0x65F0260", VA = "0x65F1260")]
	public void UpdatePerFrameInstanceVisibility(in ParallelBitArray compactedVisibilityMasks)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x65F1280", Offset = "0x65F0280", VA = "0x65F1280")]
	public JobHandle ScheduleCollectInstancesLODGroupAndMasksJob(NativeArray<InstanceHandle> instances, NativeArray<uint> lodGroupAndMasks)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x65F12A0", Offset = "0x65F02A0", VA = "0x65F12A0")]
	public InstanceHandle GetRendererInstanceHandle(EntityId rendererID)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x65F13C0", Offset = "0x65F03C0", VA = "0x65F13C0")]
	public void GetVisibleTreeInstances(in ParallelBitArray compactedVisibilityMasks, in ParallelBitArray processedBits, NativeList<int> visibeTreeRendererIDs, NativeList<InstanceHandle> visibeTreeInstances, bool becomeVisibleOnly, out int becomeVisibeTreeInstancesCount)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x65F13F0", Offset = "0x65F03F0", VA = "0x65F13F0")]
	public GPUInstanceDataBuffer GetInstanceDataBuffer()
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x65F1400", Offset = "0x65F0400", VA = "0x65F1400")]
	public void UpdateFrame()
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x65F1440", Offset = "0x65F0440", VA = "0x65F1440")]
	public void FreePerCameraInstanceData(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x65F1460", Offset = "0x65F0460", VA = "0x65F1460")]
	public void UpdateCameras(NativeArray<EntityId> cameraIDs)
	{
	}
}
