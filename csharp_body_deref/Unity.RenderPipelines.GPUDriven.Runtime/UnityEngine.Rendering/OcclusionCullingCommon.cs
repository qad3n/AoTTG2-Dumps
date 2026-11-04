// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OcclusionCullingCommon
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000CF")]
internal class OcclusionCullingCommon : IDisposable
{
	[Token(Token = "0x20000D0")]
	private struct OccluderContextSlot
	{
		[Token(Token = "0x40003D4")]
		[FieldOffset(Offset = "0x0")]
		public bool valid;

		[Token(Token = "0x40003D5")]
		[FieldOffset(Offset = "0x4")]
		public int lastUsedFrameIndex;

		[Token(Token = "0x40003D6")]
		[FieldOffset(Offset = "0x8")]
		public int viewInstanceID;
	}

	[Token(Token = "0x20000D1")]
	private static class ShaderIDs
	{
		[Token(Token = "0x40003D7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int OcclusionCullingCommonShaderVariables;

		[Token(Token = "0x40003D8")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _OccluderDepthPyramid;

		[Token(Token = "0x40003D9")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _OcclusionDebugOverlay;

		[Token(Token = "0x40003DA")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int OcclusionCullingDebugShaderVariables;
	}

	[Token(Token = "0x20000D2")]
	private class OcclusionTestOverlaySetupPassData
	{
		[Token(Token = "0x40003DB")]
		[FieldOffset(Offset = "0x10")]
		public OcclusionCullingDebugShaderVariables cb;

		[Token(Token = "0x6000372")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public OcclusionTestOverlaySetupPassData()
		{
		}
	}

	[Token(Token = "0x20000D3")]
	private class OcclusionTestOverlayPassData
	{
		[Token(Token = "0x40003DC")]
		[FieldOffset(Offset = "0x10")]
		public BufferHandle debugPyramid;

		[Token(Token = "0x6000373")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public OcclusionTestOverlayPassData()
		{
		}
	}

	[Token(Token = "0x20000D4")]
	private struct DebugOccluderViewData
	{
		[Token(Token = "0x40003DD")]
		[FieldOffset(Offset = "0x0")]
		public int passIndex;

		[Token(Token = "0x40003DE")]
		[FieldOffset(Offset = "0x4")]
		public Rect viewport;

		[Token(Token = "0x40003DF")]
		[FieldOffset(Offset = "0x14")]
		public bool valid;
	}

	[Token(Token = "0x20000D5")]
	private class OccluderOverlayPassData
	{
		[Token(Token = "0x40003E0")]
		[FieldOffset(Offset = "0x10")]
		public Material debugMaterial;

		[Token(Token = "0x40003E1")]
		[FieldOffset(Offset = "0x18")]
		public RTHandle occluderTexture;

		[Token(Token = "0x40003E2")]
		[FieldOffset(Offset = "0x20")]
		public Rect viewport;

		[Token(Token = "0x40003E3")]
		[FieldOffset(Offset = "0x30")]
		public int passIndex;

		[Token(Token = "0x40003E4")]
		[FieldOffset(Offset = "0x34")]
		public Vector2 validRange;

		[Token(Token = "0x6000374")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public OccluderOverlayPassData()
		{
		}
	}

	[Token(Token = "0x20000D6")]
	private class UpdateOccludersPassData
	{
		[Token(Token = "0x40003E5")]
		[FieldOffset(Offset = "0x10")]
		public OccluderParameters occluderParams;

		[Token(Token = "0x40003E6")]
		[FieldOffset(Offset = "0x38")]
		public List<OccluderSubviewUpdate> occluderSubviewUpdates;

		[Token(Token = "0x40003E7")]
		[FieldOffset(Offset = "0x40")]
		public OccluderHandles occluderHandles;

		[Token(Token = "0x6000375")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UpdateOccludersPassData()
		{
		}
	}

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_MaxContextGCFrame;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x10")]
	private Material m_DebugOcclusionTestMaterial;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x18")]
	private Material m_OccluderDebugViewMaterial;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x20")]
	private ComputeShader m_OcclusionDebugCS;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x28")]
	private int m_ClearOcclusionDebugKernel;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x30")]
	private ComputeShader m_OccluderDepthPyramidCS;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x38")]
	private int m_OccluderDepthDownscaleKernel;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x3C")]
	private int m_FrameIndex;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x40")]
	private SilhouettePlaneCache m_SilhouettePlaneCache;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x68")]
	private NativeParallelHashMap<int, int> m_ViewIDToIndexMap;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x78")]
	private List<OccluderContext> m_OccluderContextData;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x80")]
	private NativeList<OccluderContextSlot> m_OccluderContextSlots;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x88")]
	private NativeList<int> m_FreeOccluderContexts;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x90")]
	private NativeArray<OcclusionCullingCommonShaderVariables> m_CommonShaderVariables;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0xA0")]
	private ComputeBuffer m_CommonConstantBuffer;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0xA8")]
	private NativeArray<OcclusionCullingDebugShaderVariables> m_DebugShaderVariables;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0xB8")]
	private ComputeBuffer m_DebugConstantBuffer;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0xC0")]
	private ProfilingSampler m_ProfilingSamplerUpdateOccluders;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0xC8")]
	private ProfilingSampler m_ProfilingSamplerOcclusionTestOverlay;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0xD0")]
	private ProfilingSampler m_ProfilingSamplerOccluderOverlay;

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x2BF56F0", Offset = "0x2BF3CF0", VA = "0x182BF56F0")]
	internal void Init(GPUResidentDrawerResources resources)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x2BF8100", Offset = "0x2BF6700", VA = "0x182BF8100")]
	internal static bool UseOcclusionDebug(in OccluderContext occluderCtx)
	{
		return default(bool);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x2BF5E70", Offset = "0x2BF4470", VA = "0x182BF5E70")]
	internal void PrepareCulling(ComputeCommandBuffer cmd, in OccluderContext occluderCtx, in OcclusionCullingSettings settings, in InstanceOcclusionTestSubviewSettings subviewSettings, in OcclusionTestComputeShader shader, bool useOcclusionDebug)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x2BF70F0", Offset = "0x2BF56F0", VA = "0x182BF70F0")]
	internal static void SetDepthPyramid(ComputeCommandBuffer cmd, in OcclusionTestComputeShader shader, int kernel, in OccluderHandles occluderHandles)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x2BF7010", Offset = "0x2BF5610", VA = "0x182BF7010")]
	internal static void SetDebugPyramid(ComputeCommandBuffer cmd, in OcclusionTestComputeShader shader, int kernel, in OccluderHandles occluderHandles)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x2BF68E0", Offset = "0x2BF4EE0", VA = "0x182BF68E0")]
	public void RenderDebugOcclusionTestOverlay(RenderGraph renderGraph, DebugDisplayGPUResidentDrawer debugSettings, int viewInstanceID, in TextureHandle colorBuffer)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x2BF6400", Offset = "0x2BF4A00", VA = "0x182BF6400")]
	public void RenderDebugOccluderOverlay(RenderGraph renderGraph, DebugDisplayGPUResidentDrawer debugSettings, Vector2 screenPos, float maxHeight, in TextureHandle colorBuffer)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x2BF4C50", Offset = "0x2BF3250", VA = "0x182BF4C50")]
	private void DispatchDebugClear(ComputeCommandBuffer cmd, int viewInstanceID)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x2BF60D0", Offset = "0x2BF46D0", VA = "0x182BF60D0")]
	private OccluderHandles PrepareOccluders(RenderGraph renderGraph, in OccluderParameters occluderParams)
	{
		return default(OccluderHandles);
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x2BF4790", Offset = "0x2BF2D90", VA = "0x182BF4790")]
	private void CreateFarDepthPyramid(ComputeCommandBuffer cmd, in OccluderParameters occluderParams, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates, in OccluderHandles occluderHandles)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x2BF75B0", Offset = "0x2BF5BB0", VA = "0x182BF75B0")]
	public bool UpdateInstanceOccluders(RenderGraph renderGraph, in OccluderParameters occluderParams, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates)
	{
		return default(bool);
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x2BF80D0", Offset = "0x2BF66D0", VA = "0x182BF80D0")]
	internal void UpdateSilhouettePlanes(int viewInstanceID, NativeArray<Plane> planes)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x2BF5460", Offset = "0x2BF3A60", VA = "0x182BF5460")]
	internal OcclusionCullingDebugOutput GetOcclusionTestDebugOutput(int viewInstanceID)
	{
		return default(OcclusionCullingDebugOutput);
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x2BF7D70", Offset = "0x2BF6370", VA = "0x182BF7D70")]
	public void UpdateOccluderStats(DebugRendererBatcherStats debugStats)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x2BF56A0", Offset = "0x2BF3CA0", VA = "0x182BF56A0")]
	internal bool HasOccluderContext(int viewInstanceID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x2BF52D0", Offset = "0x2BF38D0", VA = "0x182BF52D0")]
	internal bool GetOccluderContext(int viewInstanceID, out OccluderContext occluderContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x2BF72C0", Offset = "0x2BF58C0", VA = "0x182BF72C0")]
	internal void UpdateFrame()
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x2BF5B40", Offset = "0x2BF4140", VA = "0x182BF5B40")]
	private int NewContext(int viewInstanceID)
	{
		return default(int);
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x2BF4A30", Offset = "0x2BF3030", VA = "0x182BF4A30")]
	private void DeleteContext(int viewInstanceID)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x2BF4FA0", Offset = "0x2BF35A0", VA = "0x182BF4FA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public OcclusionCullingCommon()
	{
	}
}
