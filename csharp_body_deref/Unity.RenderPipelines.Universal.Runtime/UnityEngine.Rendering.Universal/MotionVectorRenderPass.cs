// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.MotionVectorRenderPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200012D")]
internal sealed class MotionVectorRenderPass : ScriptableRenderPass
{
	[Token(Token = "0x200012E")]
	private class PassData
	{
		[Token(Token = "0x400066E")]
		[FieldOffset(Offset = "0x10")]
		internal Camera camera;

		[Token(Token = "0x400066F")]
		[FieldOffset(Offset = "0x18")]
		internal XRPass xr;

		[Token(Token = "0x4000670")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle cameraDepth;

		[Token(Token = "0x4000671")]
		[FieldOffset(Offset = "0x30")]
		internal Material cameraMaterial;

		[Token(Token = "0x4000672")]
		[FieldOffset(Offset = "0x38")]
		internal RendererListHandle rendererListHdl;

		[Token(Token = "0x4000673")]
		[FieldOffset(Offset = "0x48")]
		internal RendererList rendererList;

		[Token(Token = "0x6000732")]
		[Address(RVA = "0x6654E80", Offset = "0x6653E80", VA = "0x6654E80")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x200012F")]
	public class MotionMatrixPassData
	{
		[Token(Token = "0x4000674")]
		[FieldOffset(Offset = "0x10")]
		public MotionVectorsPersistentData motionData;

		[Token(Token = "0x4000675")]
		[FieldOffset(Offset = "0x18")]
		public XRPass xr;

		[Token(Token = "0x6000733")]
		[Address(RVA = "0x6654E90", Offset = "0x6653E90", VA = "0x6654E90")]
		public MotionMatrixPassData()
		{
		}
	}

	[Token(Token = "0x4000665")]
	internal const string k_MotionVectorTextureName = "_MotionVectorTexture";

	[Token(Token = "0x4000666")]
	internal const string k_MotionVectorDepthTextureName = "_MotionVectorDepthTexture";

	[Token(Token = "0x4000667")]
	internal const GraphicsFormat k_TargetFormat = GraphicsFormat.R16G16_SFloat;

	[Token(Token = "0x4000668")]
	public const string k_MotionVectorsLightModeTag = "MotionVectors";

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] s_ShaderTags;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int s_CameraDepthTextureID;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilingSampler s_SetMotionMatrixProfilingSampler;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x60")]
	private readonly Material m_CameraMaterial;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x68")]
	private readonly FilteringSettings m_FilteringSettings;

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x6653020", Offset = "0x6652020", VA = "0x6653020")]
	internal MotionVectorRenderPass(RenderPassEvent evt, Material cameraMaterial, LayerMask opaqueLayerMask)
	{
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x6653160", Offset = "0x6652160", VA = "0x6653160")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x66534B0", Offset = "0x66524B0", VA = "0x66534B0")]
	private static DrawingSettings GetDrawingSettings(Camera camera, bool supportsDynamicBatching)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x6653250", Offset = "0x6652250", VA = "0x6653250")]
	private static void DrawCameraMotionVectors(RasterCommandBuffer cmd, XRPass xr, Material cameraMaterial)
	{
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x6653420", Offset = "0x6652420", VA = "0x6653420")]
	private static void DrawObjectMotionVectors(RasterCommandBuffer cmd, XRPass xr, ref RendererList rendererList)
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x66537F0", Offset = "0x66527F0", VA = "0x66537F0")]
	private void InitPassData(ref PassData passData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x6653860", Offset = "0x6652860", VA = "0x6653860")]
	private void InitRendererLists(ref PassData passData, ref CullingResults cullResults, bool supportsDynamicBatching, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x6653CD0", Offset = "0x6652CD0", VA = "0x6653CD0")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle cameraDepthTexture, TextureHandle motionVectorColor, TextureHandle motionVectorDepth)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x66548E0", Offset = "0x66538E0", VA = "0x66548E0")]
	internal static void SetRenderGraphMotionVectorGlobalMatrices(RenderGraph renderGraph, UniversalCameraData cameraData)
	{
	}
}
