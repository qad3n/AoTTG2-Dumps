// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCuller
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x200004A")]
internal struct InstanceCuller : IDisposable
{
	[Token(Token = "0x200004B")]
	private struct AnimatedFadeData
	{
		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int cameraID;

		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public JobHandle jobHandle;
	}

	[Token(Token = "0x200004C")]
	private static class ShaderIDs
	{
		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly int InstanceOcclusionCullerShaderVariables;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public static readonly int _DrawInfo;

		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly int _InstanceInfo;

		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public static readonly int _DispatchArgs;

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly int _DrawArgs;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public static readonly int _InstanceIndices;

		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly int _InstanceDataBuffer;

		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public static readonly int _OccluderDepthPyramid;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly int _OcclusionDebugCounters;
	}

	[Token(Token = "0x200004D")]
	private class InstanceOcclusionTestPassData
	{
		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public OcclusionCullingSettings settings;

		[Token(Token = "0x4000169")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public InstanceOcclusionTestSubviewSettings subviewSettings;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public OccluderHandles occluderHandles;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		public IndirectBufferContextHandles bufferHandles;

		[Token(Token = "0x600015F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public InstanceOcclusionTestPassData()
		{
		}
	}

	[Token(Token = "0x400014E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private NativeParallelHashMap<int, AnimatedFadeData> m_LODParamsToCameraID;

	[Token(Token = "0x400014F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private ParallelBitArray m_CompactedVisibilityMasks;

	[Token(Token = "0x4000150")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private JobHandle m_CompactedVisibilityMasksJobsHandle;

	[Token(Token = "0x4000151")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IndirectBufferContextStorage m_IndirectStorage;

	[Token(Token = "0x4000152")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private OcclusionTestComputeShader m_OcclusionTestShader;

	[Token(Token = "0x4000153")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int m_ResetDrawArgsKernel;

	[Token(Token = "0x4000154")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private int m_CopyInstancesKernel;

	[Token(Token = "0x4000155")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private int m_CullInstancesKernel;

	[Token(Token = "0x4000156")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private DebugRendererBatcherStats m_DebugStats;

	[Token(Token = "0x4000157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private InstanceCullerSplitDebugArray m_SplitDebugArray;

	[Token(Token = "0x4000158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private InstanceOcclusionEventDebugArray m_OcclusionEventDebugArray;

	[Token(Token = "0x4000159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private ProfilingSampler m_ProfilingSampleInstanceOcclusionTest;

	[Token(Token = "0x400015A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private NativeArray<InstanceOcclusionCullerShaderVariables> m_ShaderVariables;

	[Token(Token = "0x400015B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private ComputeBuffer m_ConstantBuffer;

	[Token(Token = "0x400015C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private CommandBuffer m_CommandBuffer;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x2BCD360", Offset = "0x2BCB960", VA = "0x182BCD360")]
	internal void Init(GPUResidentDrawerResources resources, [Optional] DebugRendererBatcherStats debugStats)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x2BCAFC0", Offset = "0x2BC95C0", VA = "0x182BCAFC0")]
	private JobHandle AnimateCrossFades(CPUPerCameraInstanceData perCameraInstanceData, BatchCullingContext cc, out CPUPerCameraInstanceData.PerCameraInstanceDataArrays cameraInstanceData, out bool hasAnimatedCrossfade)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x2BCC4E0", Offset = "0x2BCAAE0", VA = "0x182BCC4E0")]
	private JobHandle CreateFrustumCullingJob(in BatchCullingContext cc, in CPUInstanceData.ReadOnly instanceData, in CPUSharedInstanceData.ReadOnly sharedInstanceData, in CPUPerCameraInstanceData perCameraInstanceData, NativeList<LODGroupCullingData> lodGroupCullingData, in BinningConfig binningConfig, float smallMeshScreenPercentage, OcclusionCullingCommon occlusionCullingCommon, NativeArray<byte> rendererVisibilityMasks, NativeArray<byte> rendererMeshLodSettings, NativeArray<byte> rendererCrossFadeValues)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x2BCB2D0", Offset = "0x2BC98D0", VA = "0x182BCB2D0")]
	private int ComputeWorstCaseDrawCommandCount(in BatchCullingContext cc, BinningConfig binningConfig, CPUDrawInstanceData drawInstanceData)
	{
		return default(int);
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x2BCB4F0", Offset = "0x2BC9AF0", VA = "0x182BCB4F0")]
	public JobHandle CreateCullJobTree(in BatchCullingContext cc, BatchCullingOutput cullingOutput, in CPUInstanceData.ReadOnly instanceData, in CPUSharedInstanceData.ReadOnly sharedInstanceData, in CPUPerCameraInstanceData perCameraInstanceData, in GPUInstanceDataBuffer.ReadOnly instanceDataBuffer, NativeList<LODGroupCullingData> lodGroupCullingData, CPUDrawInstanceData drawInstanceData, NativeParallelHashMap<uint, BatchID> batchIDs, float smallMeshScreenPercentage, OcclusionCullingCommon occlusionCullingCommon)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x2BCB3A0", Offset = "0x2BC99A0", VA = "0x182BCB3A0")]
	private JobHandle CreateCompactedVisibilityMaskJob(in CPUInstanceData.ReadOnly instanceData, NativeArray<byte> rendererVisibilityMasks, JobHandle cullingJobHandle)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x2BCD670", Offset = "0x2BCBC70", VA = "0x182BCD670")]
	public void InstanceOccludersUpdated(int viewInstanceID, int subviewMask, RenderersBatchersContext batchersContext)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x2BC3500", Offset = "0x2BC1B00", VA = "0x182BC3500")]
	private void DisposeCompactVisibilityMasks()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void DisposeSceneViewHiddenBits()
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x2BCD320", Offset = "0x2BCB920", VA = "0x182BCD320")]
	public ParallelBitArray GetCompactedVisibilityMasks(bool syncCullingJobs)
	{
		return default(ParallelBitArray);
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x2BCD730", Offset = "0x2BCBD30", VA = "0x182BCD730")]
	public void InstanceOcclusionTest(RenderGraph renderGraph, in OcclusionCullingSettings settings, ReadOnlySpan<SubviewOcclusionTest> subviewOcclusionTests, RenderersBatchersContext batchersContext)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x2BCCF70", Offset = "0x2BCB570", VA = "0x182BCCF70")]
	internal void EnsureValidOcclusionTestResults(int viewInstanceID)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x2BCA3B0", Offset = "0x2BC89B0", VA = "0x182BCA3B0")]
	private void AddOcclusionCullingDispatch(ComputeCommandBuffer cmd, in OcclusionCullingSettings settings, in InstanceOcclusionTestSubviewSettings subviewSettings, in IndirectBufferContextHandles bufferHandles, in OccluderHandles occluderHandles, RenderersBatchersContext batchersContext)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x2BCD2B0", Offset = "0x2BCB8B0", VA = "0x182BCD2B0")]
	private void FlushDebugCounters()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnBeginSceneViewCameraRendering()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnEndSceneViewCameraRendering()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x2BCDCA0", Offset = "0x2BCC2A0", VA = "0x182BCDCA0")]
	public void UpdateFrame(int cameraCount)
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x2BCDC70", Offset = "0x2BCC270", VA = "0x182BCDC70")]
	public void OnBeginCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x2BCDC70", Offset = "0x2BCC270", VA = "0x182BCDC70")]
	public void OnEndCameraRendering(Camera camera)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x2BCCE90", Offset = "0x2BCB490", VA = "0x182BCCE90", Slot = "4")]
	public void Dispose()
	{
	}
}
