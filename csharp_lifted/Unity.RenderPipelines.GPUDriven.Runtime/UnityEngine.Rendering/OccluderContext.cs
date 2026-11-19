// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderContext
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65E5560", Offset = "0x65E4560", VA = "0x65E5560")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000051")]
	public Vector2 depthBufferSizeInOccluderPixels
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x65E5590", Offset = "0x65E4590", VA = "0x65E5590")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x65E5570", Offset = "0x65E4570", VA = "0x65E5570")]
	public bool IsSubviewValid(int subviewIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x65E55A0", Offset = "0x65E45A0", VA = "0x65E55A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x65E56D0", Offset = "0x65E46D0", VA = "0x65E56D0")]
	private void UpdateMipBounds()
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x65E5A40", Offset = "0x65E4A40", VA = "0x65E5A40")]
	private void AllocateTexturesIfNecessary(bool debugOverlayEnabled)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x65E5CD0", Offset = "0x65E4CD0", VA = "0x65E5CD0")]
	internal static void SetKeyword(ComputeCommandBuffer cmd, ComputeShader cs, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x65E5D00", Offset = "0x65E4D00", VA = "0x65E5D00")]
	private OccluderDepthPyramidConstants SetupFarDepthPyramidConstants(ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates, NativeArray<Plane> silhouettePlanes)
	{
		return default(OccluderDepthPyramidConstants);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x65E63B0", Offset = "0x65E53B0", VA = "0x65E63B0")]
	public void CreateFarDepthPyramid(ComputeCommandBuffer cmd, in OccluderParameters occluderParams, ReadOnlySpan<OccluderSubviewUpdate> occluderSubviewUpdates, in OccluderHandles occluderHandles, NativeArray<Plane> silhouettePlanes, ComputeShader occluderDepthPyramidCS, int occluderDepthDownscaleKernel)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x65E6B00", Offset = "0x65E5B00", VA = "0x65E6B00")]
	public OccluderHandles Import(RenderGraph renderGraph)
	{
		return default(OccluderHandles);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x65E6BC0", Offset = "0x65E5BC0", VA = "0x65E6BC0")]
	public void PrepareOccluders(in OccluderParameters occluderParams)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x65E6CB0", Offset = "0x65E5CB0", VA = "0x65E6CB0")]
	internal OcclusionCullingDebugOutput GetDebugOutput()
	{
		return default(OcclusionCullingDebugOutput);
	}
}
