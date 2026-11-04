// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DrawObjectsPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x200021D")]
public class DrawObjectsPass : ScriptableRenderPass
{
	[Token(Token = "0x200021E")]
	internal class PassData
	{
		[Token(Token = "0x4000D17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal TextureHandle albedoHdl;

		[Token(Token = "0x4000D18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal TextureHandle depthHdl;

		[Token(Token = "0x4000D19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal TextureHandle screenSpaceIrradianceHdl;

		[Token(Token = "0x4000D1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000D1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal bool isOpaque;

		[Token(Token = "0x4000D1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		internal bool shouldTransparentsReceiveShadows;

		[Token(Token = "0x4000D1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		internal uint batchLayerMask;

		[Token(Token = "0x4000D1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal bool isActiveTargetBackBuffer;

		[Token(Token = "0x4000D1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		internal RendererListHandle rendererListHdl;

		[Token(Token = "0x4000D20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal RendererListHandle objectsWithErrorRendererListHdl;

		[Token(Token = "0x4000D21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal DebugRendererLists debugRendererLists;

		[Token(Token = "0x4000D22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal RendererList rendererList;

		[Token(Token = "0x4000D23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		internal RendererList objectsWithErrorRendererList;

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public bool m_IsActiveTargetBackBuffer;

	[Token(Token = "0x4000D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000D12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private RenderStateBlock m_RenderStateBlock;

	[Token(Token = "0x4000D13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x4000D14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private bool m_IsOpaque;

	[Token(Token = "0x4000D15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF9")]
	public bool m_ShouldTransparentsReceiveShadows;

	[Token(Token = "0x4000D16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int s_DrawObjectPassDataPropID;

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Setup(RTHandle colorAttachment, RTHandle renderingLayersTexture, RTHandle depthAttachment)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x2CCE8C0", Offset = "0x2CCCEC0", VA = "0x182CCE8C0")]
	public DrawObjectsPass(string profilerTag, ShaderTagId[] shaderTagIds, bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference)
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x2CCE7A0", Offset = "0x2CCCDA0", VA = "0x182CCE7A0")]
	public DrawObjectsPass(string profilerTag, bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference)
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x2CCE9F0", Offset = "0x2CCCFF0", VA = "0x182CCE9F0")]
	internal DrawObjectsPass(URPProfileId profileId, bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x2CCD860", Offset = "0x2CCBE60", VA = "0x182CCD860")]
	internal void Init(bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference, [Optional] ShaderTagId[] shaderTagIds)
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x2CCCC80", Offset = "0x2CCB280", VA = "0x182CCCC80")]
	internal static void ExecutePass(RasterCommandBuffer cmd, PassData data, RendererList rendererList, RendererList objectsWithErrorRendererList, bool yFlip)
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x2CCCFD0", Offset = "0x2CCB5D0", VA = "0x182CCCFD0")]
	internal void InitPassData(UniversalCameraData cameraData, ref PassData passData, uint batchLayerMask, bool isActiveTargetBackBuffer = false)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x2CCD060", Offset = "0x2CCB660", VA = "0x182CCD060")]
	internal void InitRendererLists(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph, bool zWriteOff)
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x2CCCC30", Offset = "0x2CCB230", VA = "0x182CCCC30")]
	internal static bool CanDisableZWrite(UniversalCameraData cameraData, bool isOpaque)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x2CCDBD0", Offset = "0x2CCC1D0", VA = "0x182CCDBD0")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle colorTarget, TextureHandle depthTarget, TextureHandle mainShadowsTexture, TextureHandle additionalShadowsTexture, uint batchLayerMask = 4294967295u, bool isMainOpaquePass = false)
	{
	}
}
