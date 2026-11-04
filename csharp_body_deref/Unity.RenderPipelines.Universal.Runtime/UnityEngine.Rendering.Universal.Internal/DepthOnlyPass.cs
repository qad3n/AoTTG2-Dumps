// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D0A")]
	[FieldOffset(Offset = "0x64")]
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
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		[CompilerGenerated]
		get
		{
			return default(ShaderTagId);
		}
		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x2CCCAD0", Offset = "0x2CCB0D0", VA = "0x182CCCAD0")]
	public DepthOnlyPass(RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Setup(RenderTextureDescriptor baseDescriptor, RTHandle depthAttachmentHandle)
	{
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x2CCBC60", Offset = "0x2CCA260", VA = "0x182CCBC60")]
	private static void ExecutePass(RasterCommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x2CCBD30", Offset = "0x2CCA330", VA = "0x182CCBD30")]
	private RendererListParams InitRendererListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x2CCC090", Offset = "0x2CCA690", VA = "0x182CCC090")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle depthTexture, uint batchLayerMask, bool setGlobalDepth)
	{
	}
}
