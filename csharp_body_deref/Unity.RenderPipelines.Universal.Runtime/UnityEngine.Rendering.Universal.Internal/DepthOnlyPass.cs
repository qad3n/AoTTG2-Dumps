// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x200021A")]
public class DepthOnlyPass : ScriptableRenderPass
{
	[Token(Token = "0x200021B")]
	private class PassData
	{
		[Token(Token = "0x4000D0D")]
		[FieldOffset(Offset = "0x10")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x66C9740", Offset = "0x66C8740", VA = "0x66C9740")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D0A")]
	[FieldOffset(Offset = "0x60")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000D0B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId k_ShaderTagId;

	[Token(Token = "0x4000D0C")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int s_CameraDepthTextureID;

	[Token(Token = "0x170002D5")]
	internal ShaderTagId shaderTagId
	{
		[Token(Token = "0x6000BB2")]
		[Address(RVA = "0x66C8A90", Offset = "0x66C7A90", VA = "0x66C8A90")]
		[CompilerGenerated]
		get
		{
			return default(ShaderTagId);
		}
		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x66C8AA0", Offset = "0x66C7AA0", VA = "0x66C8AA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x66C8A70", Offset = "0x66C7A70", VA = "0x66C8A70", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x66C8A80", Offset = "0x66C7A80", VA = "0x66C8A80", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x66C8AB0", Offset = "0x66C7AB0", VA = "0x66C8AB0")]
	public DepthOnlyPass(RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x66C8C10", Offset = "0x66C7C10", VA = "0x66C8C10")]
	public void Setup(RenderTextureDescriptor baseDescriptor, RTHandle depthAttachmentHandle)
	{
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x66C8C20", Offset = "0x66C7C20", VA = "0x66C8C20")]
	private static void ExecutePass(RasterCommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x66C8D20", Offset = "0x66C7D20", VA = "0x66C8D20")]
	private RendererListParams InitRendererListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x66C8E90", Offset = "0x66C7E90", VA = "0x66C8E90")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle depthTexture, uint batchLayerMask, bool setGlobalDepth)
	{
	}
}
