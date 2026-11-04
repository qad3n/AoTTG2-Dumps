// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000AC")]
internal struct OccluderContext : IDisposable
{
	[Token(Token = "0x20000AD")]
	private static class ShaderIDs
	{
		[Token(Token = "0x4000341")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _SrcDepth;

		[Token(Token = "0x4000342")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _DstDepth;

		[Token(Token = "0x4000343")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int OccluderDepthPyramidConstants;
	}

	[Token(Token = "0x4000330")]
	public const int k_FirstDepthMipIndex = 3;

	[Token(Token = "0x4000331")]
	public const int k_MaxOccluderMips = 8;

	[Token(Token = "0x4000332")]
	public const int k_MaxSilhouettePlanes = 6;

	[Token(Token = "0x4000333")]
	public const int k_MaxSubviewsPerView = 6;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x0")]
	public int version;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x4")]
	public Vector2Int depthBufferSize;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<OccluderDerivedData> subviewData;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0x20")]
	public int subviewValidMask;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x28")]
	public NativeArray<OccluderMipBounds> occluderMipBounds;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x38")]
	public Vector2Int occluderMipLayoutSize;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x40")]
	public Vector2Int occluderDepthPyramidSize;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x48")]
	public RTHandle occluderDepthPyramid;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x50")]
	public int occlusionDebugOverlaySize;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x58")]
	public GraphicsBuffer occlusionDebugOverlay;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x60")]
	public bool debugNeedsClear;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x68")]
	public ComputeBuffer constantBuffer;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x70")]
	public NativeArray<OccluderDepthPyramidConstants> constantBufferData;

	[Token(Token = "0x17000050")]
	public int subviewCount
	{
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000051")]
	public Vector2 depthBufferSizeInOccluderPixels
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x2BF3E00", Offset = "0x2BF2400", VA = "0x182BF3E00")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x2BF35E0", Offset = "0x2BF1BE0", VA = "0x182BF35E0")]
	public bool IsSubviewValid(int subviewIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x2BF3220", Offset = "0x2BF1820", VA = "0x182BF3220", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x2BF3C10", Offset = "0x2BF2210", VA = "0x182BF3C10")]
	private void UpdateMipBounds()
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x2BF28C0", Offset = "0x2BF0EC0", VA = "0x182BF28C0")]
	private void AllocateTexturesIfNecessary(bool debugOverlayEnabled)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x2BF36E0", Offset = "0x2BF1CE0", VA = "0x182BF36E0")]
	internal static void SetKeyword(ComputeCommandBuffer cmd, ComputeShader cs, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x2BF3710", Offset = "0x2BF1D10", VA = "0x182BF3710")]
	private OccluderDepthPyramidConstants SetupFarDepthPyramidConstants(ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates, NativeArray<Plane> silhouettePlanes)
	{
		return default(OccluderDepthPyramidConstants);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x2BF2BC0", Offset = "0x2BF11C0", VA = "0x182BF2BC0")]
	public void CreateFarDepthPyramid(ComputeCommandBuffer cmd, in OccluderParameters occluderParams, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates, in OccluderHandles occluderHandles, NativeArray<Plane> silhouettePlanes, ComputeShader occluderDepthPyramidCS, int occluderDepthDownscaleKernel)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x2BF34D0", Offset = "0x2BF1AD0", VA = "0x182BF34D0")]
	public OccluderHandles Import(RenderGraph renderGraph)
	{
		return default(OccluderHandles);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x2BF3600", Offset = "0x2BF1C00", VA = "0x182BF3600")]
	public void PrepareOccluders(in OccluderParameters occluderParams)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x2BF3340", Offset = "0x2BF1940", VA = "0x182BF3340")]
	internal OcclusionCullingDebugOutput GetDebugOutput()
	{
		return default(OcclusionCullingDebugOutput);
	}
}
