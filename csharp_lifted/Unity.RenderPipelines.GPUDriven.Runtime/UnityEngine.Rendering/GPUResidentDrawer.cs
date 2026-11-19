// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentDrawer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.SceneManagement;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001B")]
public class GPUResidentDrawer
{
	[Token(Token = "0x200001C")]
	private static class Strings
	{
		[Token(Token = "0x4000056")]
		[FieldOffset(Offset = "0x0")]
		public static readonly string drawerModeDisabled;

		[Token(Token = "0x4000057")]
		[FieldOffset(Offset = "0x8")]
		public static readonly string allowInEditModeDisabled;

		[Token(Token = "0x4000058")]
		[FieldOffset(Offset = "0x10")]
		public static readonly string notGPUResidentRenderPipeline;

		[Token(Token = "0x4000059")]
		[FieldOffset(Offset = "0x18")]
		public static readonly string rawBufferNotSupportedByPlatform;

		[Token(Token = "0x400005A")]
		[FieldOffset(Offset = "0x20")]
		public static readonly string kernelNotPresent;

		[Token(Token = "0x400005B")]
		[FieldOffset(Offset = "0x28")]
		public static readonly string batchRendererGroupShaderStrippingModeInvalid;

		[Token(Token = "0x400005C")]
		[FieldOffset(Offset = "0x30")]
		public static readonly string visionOSNotSupported;
	}

	[Token(Token = "0x200001D")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct FindRenderersFromMaterialOrMeshJob : IJobParallelForBatch
	{
		[Token(Token = "0x400005D")]
		public const int k_BatchSize = 128;

		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeHashSet<EntityId>.ReadOnly materialIDs;

		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays;

		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0x18")]
		[ReadOnly]
		public NativeArray<EntityId>.ReadOnly meshIDs;

		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x28")]
		[ReadOnly]
		public NativeArray<EntityId>.ReadOnly meshIDArray;

		[Token(Token = "0x4000062")]
		[FieldOffset(Offset = "0x38")]
		[ReadOnly]
		public NativeArray<EntityId>.ReadOnly rendererGroupIDs;

		[Token(Token = "0x4000063")]
		[FieldOffset(Offset = "0x48")]
		[ReadOnly]
		public NativeArray<EntityId>.ReadOnly sortedExcludeRendererIDs;

		[Token(Token = "0x4000064")]
		[FieldOffset(Offset = "0x58")]
		[WriteOnly]
		public NativeList<EntityId>.ParallelWriter selectedRenderGroupsForMaterials;

		[Token(Token = "0x4000065")]
		[FieldOffset(Offset = "0x60")]
		[WriteOnly]
		public NativeList<EntityId>.ParallelWriter selectedRenderGroupsForMeshes;

		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x65BFC50", Offset = "0x65BEC50", VA = "0x65BFC50", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x0")]
	private static GPUResidentDrawer s_Instance;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_ContextIntPtr;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	private GPUResidentDrawerSettings m_Settings;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x30")]
	private UnityEngine.Rendering.GPUDrivenProcessor m_GPUDrivenProcessor;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x38")]
	private RenderersBatchersContext m_BatchersContext;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x40")]
	private GPUResidentBatcher m_Batcher;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x48")]
	private UnityEngine.ObjectDispatcher m_Dispatcher;

	[Token(Token = "0x17000010")]
	internal static GPUResidentDrawer instance
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x65BBF70", Offset = "0x65BAF70", VA = "0x65BBF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	internal static bool MaintainContext
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x65BCF20", Offset = "0x65BBF20", VA = "0x65BCF20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x65BCF60", Offset = "0x65BBF60", VA = "0x65BCF60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	internal static bool ForceOcclusion
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x65BCFA0", Offset = "0x65BBFA0", VA = "0x65BCFA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x65BCFE0", Offset = "0x65BBFE0", VA = "0x65BCFE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	internal GPUResidentBatcher batcher
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x65BDA20", Offset = "0x65BCA20", VA = "0x65BDA20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	internal GPUResidentDrawerSettings settings
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x65BDA30", Offset = "0x65BCA30", VA = "0x65BDA30")]
		get
		{
			return default(GPUResidentDrawerSettings);
		}
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x65BBD80", Offset = "0x65BAD80", VA = "0x65BBD80")]
	internal static bool IsProjectSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x65BBDB0", Offset = "0x65BADB0", VA = "0x65BBDB0")]
	internal static bool IsProjectSupported(out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x65B5FE0", Offset = "0x65B4FE0", VA = "0x65B5FE0")]
	internal static bool IsGPUResidentDrawerSupportedBySRP(GPUResidentDrawerSettings settings, out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x65BBEE0", Offset = "0x65BAEE0", VA = "0x65BBEE0")]
	internal static void LogMessage(string message, LogType severity)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x65BBFB0", Offset = "0x65BAFB0", VA = "0x65BBFB0")]
	public static bool IsInstanceOcclusionCullingEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x65BC000", Offset = "0x65BB000", VA = "0x65BC000")]
	public static void PostCullBeginCameraRendering(RenderRequestBatcherContext context)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x65BC060", Offset = "0x65BB060", VA = "0x65BC060")]
	public static void OnSetupAmbientProbe()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x65BC0C0", Offset = "0x65BB0C0", VA = "0x65BC0C0")]
	public static void InstanceOcclusionTest(RenderGraph renderGraph, in OcclusionCullingSettings settings, ReadOnlySpan<SubviewOcclusionTest> subviewOcclusionTests)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x65BC170", Offset = "0x65BB170", VA = "0x65BC170")]
	public static void UpdateInstanceOccluders(RenderGraph renderGraph, in OccluderParameters occluderParameters, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x65BC220", Offset = "0x65BB220", VA = "0x65BC220")]
	public static void ReinitializeIfNeeded()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x65BC230", Offset = "0x65BB230", VA = "0x65BC230")]
	public static void RenderDebugOcclusionTestOverlay(RenderGraph renderGraph, DebugDisplayGPUResidentDrawer debugSettings, int viewInstanceID, TextureHandle colorBuffer)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x65BC2C0", Offset = "0x65BB2C0", VA = "0x65BC2C0")]
	public static void RenderDebugOccluderOverlay(RenderGraph renderGraph, DebugDisplayGPUResidentDrawer debugSettings, Vector2 screenPos, float maxHeight, TextureHandle colorBuffer)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x65B1320", Offset = "0x65B0320", VA = "0x65B1320")]
	internal static DebugRendererBatcherStats GetDebugStats()
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x65BC360", Offset = "0x65BB360", VA = "0x65BC360")]
	private void InsertIntoPlayerLoop()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x65BCA20", Offset = "0x65BBA20", VA = "0x65BCA20")]
	private void RemoveFromPlayerLoop()
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x65B6230", Offset = "0x65B5230", VA = "0x65B6230")]
	internal static bool IsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x65B5E70", Offset = "0x65B4E70", VA = "0x65B5E70")]
	internal static GPUResidentDrawerSettings GetGlobalSettingsFromRPAsset()
	{
		return default(GPUResidentDrawerSettings);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x65BBED0", Offset = "0x65BAED0", VA = "0x65BBED0")]
	internal static bool IsForcedOnViaCommandLine()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x65BCF10", Offset = "0x65BBF10", VA = "0x65BCF10")]
	internal static bool IsOcclusionForcedOnViaCommandLine()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x65BD020", Offset = "0x65BC020", VA = "0x65BD020")]
	internal static void Reinitialize()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x65BD1E0", Offset = "0x65BC1E0", VA = "0x65BD1E0")]
	private static void CleanUp()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x65BD050", Offset = "0x65BC050", VA = "0x65BD050")]
	private static void Recreate(GPUResidentDrawerSettings settings)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x65BD520", Offset = "0x65BC520", VA = "0x65BD520")]
	private GPUResidentDrawer(GPUResidentDrawerSettings settings, int maxInstanceCount, int maxTreeInstanceCount)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x65BD290", Offset = "0x65BC290", VA = "0x65BD290")]
	private void Dispose()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x65BDA50", Offset = "0x65BCA50", VA = "0x65BDA50")]
	private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x65BDA80", Offset = "0x65BCA80", VA = "0x65BDA80")]
	private static void PostPostLateUpdateStatic()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x65BE250", Offset = "0x65BD250", VA = "0x65BE250")]
	private void OnBeginContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x65BE310", Offset = "0x65BD310", VA = "0x65BE310")]
	private void OnEndContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x65BE3C0", Offset = "0x65BD3C0", VA = "0x65BE3C0")]
	private void OnBeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x65BE3F0", Offset = "0x65BD3F0", VA = "0x65BE3F0")]
	private void OnEndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x65BDAC0", Offset = "0x65BCAC0", VA = "0x65BDAC0")]
	private void PostPostLateUpdate()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x65BE7B0", Offset = "0x65BD7B0", VA = "0x65BE7B0")]
	private void ProcessMaterials(NativeArray<EntityId> destroyedID, NativeArray<EntityId> unsupportedMaterials)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x65BE9A0", Offset = "0x65BD9A0", VA = "0x65BE9A0")]
	private void ProcessCameras(NativeArray<EntityId> changedIDs, NativeArray<EntityId> destroyedIDs)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x65BE810", Offset = "0x65BD810", VA = "0x65BE810")]
	private void ProcessMeshes(NativeArray<EntityId> destroyedID)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x65BE940", Offset = "0x65BD940", VA = "0x65BE940")]
	private void ProcessLODGroups(NativeArray<EntityId> changedID, NativeArray<EntityId> destroyed, NativeArray<EntityId> transformedID)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x65BEC50", Offset = "0x65BDC50", VA = "0x65BEC50")]
	private void ProcessRendererMaterialAndMeshChanges(NativeArray<EntityId> excludedRenderers, NativeArray<EntityId> changedMaterials, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> changedPackedMaterialDatas, NativeArray<EntityId> changedMeshes)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x65BE9E0", Offset = "0x65BD9E0", VA = "0x65BE9E0")]
	private void ProcessRenderers(UnityEngine.TypeDispatchData rendererChanges, NativeArray<EntityId> unsupportedRenderers)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x65BF7B0", Offset = "0x65BE7B0", VA = "0x65BF7B0")]
	private void TransformInstances(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x65BF7D0", Offset = "0x65BE7D0", VA = "0x65BF7D0")]
	private void FreeInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x65BF700", Offset = "0x65BE700", VA = "0x65BF700")]
	private void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupIDs, NativeArray<EntityId> unsupportedRendererGroupIDs)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x65BF820", Offset = "0x65BE820", VA = "0x65BF820")]
	private InstanceHandle AppendNewInstance(int rendererGroupID, in Matrix4x4 instanceTransform)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x65BF6E0", Offset = "0x65BE6E0", VA = "0x65BF6E0")]
	private JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x65BF860", Offset = "0x65BE860", VA = "0x65BF860")]
	private JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x65BF880", Offset = "0x65BE880", VA = "0x65BF880")]
	private JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<int> instancesOffset, NativeArray<int> instancesCount, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x65BF190", Offset = "0x65BE190", VA = "0x65BF190")]
	private JobHandle ScheduleQueryMeshInstancesJob(NativeArray<EntityId> sortedMeshIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x65BE420", Offset = "0x65BD420", VA = "0x65BE420")]
	private void ClassifyMaterials(NativeArray<EntityId> materials, out NativeList<EntityId> unsupportedMaterials, out NativeList<EntityId> supportedMaterials, out NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas, Allocator allocator)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x65BE630", Offset = "0x65BD630", VA = "0x65BE630")]
	private NativeList<EntityId> FindUnsupportedRenderers(NativeArray<EntityId> unsupportedMaterials)
	{
		return default(NativeList<EntityId>);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x65BF1B0", Offset = "0x65BE1B0", VA = "0x65BF1B0")]
	private NativeHashSet<EntityId> GetMaterialsWithChangedPackedMaterial(NativeArray<EntityId> materials, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, Allocator allocator)
	{
		return default(NativeHashSet<EntityId>);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x65BF290", Offset = "0x65BE290", VA = "0x65BF290")]
	private (NativeList<EntityId>, NativeList<EntityId>) FindRenderersFromMaterialsOrMeshes(NativeArray<EntityId> sortedExcludeRenderers, NativeHashSet<EntityId> materials, NativeArray<EntityId> meshes, Allocator rendererListAllocator)
	{
		return default((NativeList<EntityId>, NativeList<EntityId>));
	}
}
