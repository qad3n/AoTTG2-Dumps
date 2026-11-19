// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DrawObjectsPass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66CBCB0", Offset = "0x66CACB0", VA = "0x66CBCB0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public bool m_IsActiveTargetBackBuffer;

	[Token(Token = "0x4000D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000D12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
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
	[Address(RVA = "0x66C9860", Offset = "0x66C8860", VA = "0x66C9860")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Setup(RTHandle colorAttachment, RTHandle renderingLayersTexture, RTHandle depthAttachment)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x66C9870", Offset = "0x66C8870", VA = "0x66C9870", Slot = "7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x66C9880", Offset = "0x66C8880", VA = "0x66C9880", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x66C9890", Offset = "0x66C8890", VA = "0x66C9890")]
	public DrawObjectsPass(string profilerTag, ShaderTagId[] shaderTagIds, bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference)
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x66C9D20", Offset = "0x66C8D20", VA = "0x66C9D20")]
	public DrawObjectsPass(string profilerTag, bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference)
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x66C9D60", Offset = "0x66C8D60", VA = "0x66C9D60")]
	internal DrawObjectsPass(URPProfileId profileId, bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x66C99B0", Offset = "0x66C89B0", VA = "0x66C99B0")]
	internal void Init(bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference, [Optional] ShaderTagId[] shaderTagIds)
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x66C9E70", Offset = "0x66C8E70", VA = "0x66C9E70")]
	internal static void ExecutePass(RasterCommandBuffer cmd, PassData data, RendererList rendererList, RendererList objectsWithErrorRendererList, bool yFlip)
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x66CA2C0", Offset = "0x66C92C0", VA = "0x66CA2C0")]
	internal void InitPassData(UniversalCameraData cameraData, ref PassData passData, uint batchLayerMask, bool isActiveTargetBackBuffer = false)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x66CA320", Offset = "0x66C9320", VA = "0x66CA320")]
	internal void InitRendererLists(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph, bool zWriteOff)
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x66CA970", Offset = "0x66C9970", VA = "0x66CA970")]
	internal static bool CanDisableZWrite(UniversalCameraData cameraData, bool isOpaque)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x66CA9B0", Offset = "0x66C99B0", VA = "0x66CA9B0")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle colorTarget, TextureHandle depthTarget, TextureHandle mainShadowsTexture, TextureHandle additionalShadowsTexture, uint batchLayerMask = 4294967295u, bool isMainOpaquePass = false)
	{
	}
}
