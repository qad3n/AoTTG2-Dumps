// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentDrawer
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BC1BB0", Offset = "0x2BC01B0", VA = "0x182BC1BB0", Slot = "4")]
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
		[Address(RVA = "0x2BC9520", Offset = "0x2BC7B20", VA = "0x182BC9520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	internal static bool MaintainContext
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x2BC94E0", Offset = "0x2BC7AE0", VA = "0x182BC94E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x2BC95A0", Offset = "0x2BC7BA0", VA = "0x182BC95A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	internal static bool ForceOcclusion
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x2BC94A0", Offset = "0x2BC7AA0", VA = "0x182BC94A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x2BC9560", Offset = "0x2BC7B60", VA = "0x182BC9560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	internal GPUResidentBatcher batcher
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	internal GPUResidentDrawerSettings settings
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x1164F60", Offset = "0x1163560", VA = "0x181164F60")]
		get
		{
			return default(GPUResidentDrawerSettings);
		}
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x2BC6820", Offset = "0x2BC4E20", VA = "0x182BC6820")]
	internal static bool IsProjectSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2BC66F0", Offset = "0x2BC4CF0", VA = "0x182BC66F0")]
	internal static bool IsProjectSupported(out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2BC64D0", Offset = "0x2BC4AD0", VA = "0x182BC64D0")]
	internal static bool IsGPUResidentDrawerSupportedBySRP(GPUResidentDrawerSettings settings, out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2BC6850", Offset = "0x2BC4E50", VA = "0x182BC6850")]
	internal static void LogMessage(string message, LogType severity)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2BC66A0", Offset = "0x2BC4CA0", VA = "0x182BC66A0")]
	public static bool IsInstanceOcclusionCullingEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2BC6B30", Offset = "0x2BC5130", VA = "0x182BC6B30")]
	public static void PostCullBeginCameraRendering(RenderRequestBatcherContext context)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2BC6AC0", Offset = "0x2BC50C0", VA = "0x182BC6AC0")]
	public static void OnSetupAmbientProbe()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2BC63E0", Offset = "0x2BC49E0", VA = "0x182BC63E0")]
	public static void InstanceOcclusionTest(RenderGraph renderGraph, in OcclusionCullingSettings settings, ReadOnlySpan<SubviewOcclusionTest> subviewOcclusionTests)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2BC8DD0", Offset = "0x2BC73D0", VA = "0x182BC8DD0")]
	public static void UpdateInstanceOccluders(RenderGraph renderGraph, in OccluderParameters occluderParameters, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void ReinitializeIfNeeded()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2BC8B80", Offset = "0x2BC7180", VA = "0x182BC8B80")]
	public static void RenderDebugOcclusionTestOverlay(RenderGraph renderGraph, DebugDisplayGPUResidentDrawer debugSettings, int viewInstanceID, TextureHandle colorBuffer)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x2BC8AC0", Offset = "0x2BC70C0", VA = "0x182BC8AC0")]
	public static void RenderDebugOccluderOverlay(RenderGraph renderGraph, DebugDisplayGPUResidentDrawer debugSettings, Vector2 screenPos, float maxHeight, TextureHandle colorBuffer)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2BC5C70", Offset = "0x2BC4270", VA = "0x182BC5C70")]
	internal static DebugRendererBatcherStats GetDebugStats()
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2BC5F70", Offset = "0x2BC4570", VA = "0x182BC5F70")]
	private void InsertIntoPlayerLoop()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x2BC87A0", Offset = "0x2BC6DA0", VA = "0x182BC87A0")]
	private void RemoveFromPlayerLoop()
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x2BC6490", Offset = "0x2BC4A90", VA = "0x182BC6490")]
	internal static bool IsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x2BC5CD0", Offset = "0x2BC42D0", VA = "0x182BC5CD0")]
	internal static GPUResidentDrawerSettings GetGlobalSettingsFromRPAsset()
	{
		return default(GPUResidentDrawerSettings);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	internal static bool IsForcedOnViaCommandLine()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	internal static bool IsOcclusionForcedOnViaCommandLine()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2BC8760", Offset = "0x2BC6D60", VA = "0x182BC8760")]
	internal static void Reinitialize()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2BC5290", Offset = "0x2BC3890", VA = "0x182BC5290")]
	private static void CleanUp()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2BC84F0", Offset = "0x2BC6AF0", VA = "0x182BC84F0")]
	private static void Recreate(GPUResidentDrawerSettings settings)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x2BC8E80", Offset = "0x2BC7480", VA = "0x182BC8E80")]
	private GPUResidentDrawer(GPUResidentDrawerSettings settings, int maxInstanceCount, int maxTreeInstanceCount)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2BC5350", Offset = "0x2BC3950", VA = "0x182BC5350")]
	private void Dispose()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2BC6A90", Offset = "0x2BC5090", VA = "0x182BC6A90")]
	private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x2BC6BA0", Offset = "0x2BC51A0", VA = "0x182BC6BA0")]
	private static void PostPostLateUpdateStatic()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x2BC6930", Offset = "0x2BC4F30", VA = "0x182BC6930")]
	private void OnBeginContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2BC69E0", Offset = "0x2BC4FE0", VA = "0x182BC69E0")]
	private void OnEndContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x2BC68F0", Offset = "0x2BC4EF0", VA = "0x182BC68F0")]
	private void OnBeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x2BC68F0", Offset = "0x2BC4EF0", VA = "0x182BC68F0")]
	private void OnEndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x2BC6BF0", Offset = "0x2BC51F0", VA = "0x182BC6BF0")]
	private void PostPostLateUpdate()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2BC78D0", Offset = "0x2BC5ED0", VA = "0x182BC78D0")]
	private void ProcessMaterials(NativeArray<EntityId> destroyedID, NativeArray<EntityId> unsupportedMaterials)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x2BC77E0", Offset = "0x2BC5DE0", VA = "0x182BC77E0")]
	private void ProcessCameras(NativeArray<EntityId> changedIDs, NativeArray<EntityId> destroyedIDs)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x2BC7950", Offset = "0x2BC5F50", VA = "0x182BC7950")]
	private void ProcessMeshes(NativeArray<EntityId> destroyedID)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2BC7840", Offset = "0x2BC5E40", VA = "0x182BC7840")]
	private void ProcessLODGroups(NativeArray<EntityId> changedID, NativeArray<EntityId> destroyed, NativeArray<EntityId> transformedID)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2BC7AB0", Offset = "0x2BC60B0", VA = "0x182BC7AB0")]
	private void ProcessRendererMaterialAndMeshChanges(NativeArray<EntityId> excludedRenderers, NativeArray<EntityId> changedMaterials, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> changedPackedMaterialDatas, NativeArray<EntityId> changedMeshes)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2BC8160", Offset = "0x2BC6760", VA = "0x182BC8160")]
	private void ProcessRenderers(UnityEngine.TypeDispatchData rendererChanges, NativeArray<EntityId> unsupportedRenderers)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2BC8D90", Offset = "0x2BC7390", VA = "0x182BC8D90")]
	private void TransformInstances(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x2BC5B30", Offset = "0x2BC4130", VA = "0x182BC5B30")]
	private void FreeInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2BC5BA0", Offset = "0x2BC41A0", VA = "0x182BC5BA0")]
	private void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupIDs, NativeArray<EntityId> unsupportedRendererGroupIDs)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x2BC50B0", Offset = "0x2BC36B0", VA = "0x182BC50B0")]
	private InstanceHandle AppendNewInstance(int rendererGroupID, in Matrix4x4 instanceTransform)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2BC8C60", Offset = "0x2BC7260", VA = "0x182BC8C60")]
	private JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x2BC8D40", Offset = "0x2BC7340", VA = "0x182BC8D40")]
	private JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2BC8CC0", Offset = "0x2BC72C0", VA = "0x182BC8CC0")]
	private JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<int> instancesOffset, NativeArray<int> instancesCount, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x2BC8C10", Offset = "0x2BC7210", VA = "0x182BC8C10")]
	private JobHandle ScheduleQueryMeshInstancesJob(NativeArray<EntityId> sortedMeshIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x2BC50F0", Offset = "0x2BC36F0", VA = "0x182BC50F0")]
	private void ClassifyMaterials(NativeArray<EntityId> materials, out NativeList<EntityId> unsupportedMaterials, out NativeList<EntityId> supportedMaterials, out NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas, Allocator allocator)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x2BC5950", Offset = "0x2BC3F50", VA = "0x182BC5950")]
	private NativeList<EntityId> FindUnsupportedRenderers(NativeArray<EntityId> unsupportedMaterials)
	{
		return default(NativeList<EntityId>);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x2BC5E60", Offset = "0x2BC4460", VA = "0x182BC5E60")]
	private NativeHashSet<EntityId> GetMaterialsWithChangedPackedMaterial(NativeArray<EntityId> materials, NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, Allocator allocator)
	{
		return default(NativeHashSet<EntityId>);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2BC55E0", Offset = "0x2BC3BE0", VA = "0x182BC55E0")]
	private (NativeList<EntityId>, NativeList<EntityId>) FindRenderersFromMaterialsOrMeshes(NativeArray<EntityId> sortedExcludeRenderers, NativeHashSet<EntityId> materials, NativeArray<EntityId> meshes, Allocator rendererListAllocator)
	{
		return default((NativeList<EntityId>, NativeList<EntityId>));
	}
}
