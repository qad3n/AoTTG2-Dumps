// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000217")]
public class DepthNormalOnlyPass : ScriptableRenderPass
{
	[Token(Token = "0x2000218")]
	private class PassData
	{
		[Token(Token = "0x4000D04")]
		[FieldOffset(Offset = "0x10")]
		internal bool enableRenderingLayers;

		[Token(Token = "0x4000D05")]
		[FieldOffset(Offset = "0x14")]
		internal RenderingLayerUtils.MaskSize maskSize;

		[Token(Token = "0x4000D06")]
		[FieldOffset(Offset = "0x18")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x66C8940", Offset = "0x66C7940", VA = "0x66C8940")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x70")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<ShaderTagId> k_DepthNormals;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<ShaderTagId> k_DepthNormalsOnly;

	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly string k_CameraNormalsTextureName;

	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int s_CameraDepthTextureID;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int s_CameraNormalsTextureID;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int s_CameraRenderingLayersTextureID;

	[Token(Token = "0x170002D2")]
	internal List<ShaderTagId> shaderTagIds
	{
		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x66C75E0", Offset = "0x66C65E0", VA = "0x66C75E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x66C75F0", Offset = "0x66C65F0", VA = "0x66C75F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D3")]
	internal bool enableRenderingLayers
	{
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x66C7600", Offset = "0x66C6600", VA = "0x66C7600")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x66C7610", Offset = "0x66C6610", VA = "0x66C7610")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D4")]
	internal RenderingLayerUtils.MaskSize renderingLayersMaskSize
	{
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x66C7620", Offset = "0x66C6620", VA = "0x66C7620")]
		[CompilerGenerated]
		get
		{
			return default(RenderingLayerUtils.MaskSize);
		}
		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0x66C7630", Offset = "0x66C6630", VA = "0x66C7630")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x66C75C0", Offset = "0x66C65C0", VA = "0x66C75C0", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x66C75D0", Offset = "0x66C65D0", VA = "0x66C75D0", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x66C7640", Offset = "0x66C6640", VA = "0x66C7640")]
	public DepthNormalOnlyPass(RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x66C7780", Offset = "0x66C6780", VA = "0x66C7780")]
	public static GraphicsFormat GetGraphicsFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x66C77C0", Offset = "0x66C67C0", VA = "0x66C77C0")]
	public void Setup(RTHandle depthHandle, RTHandle normalHandle)
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x66C77D0", Offset = "0x66C67D0", VA = "0x66C77D0")]
	public void Setup(RTHandle depthHandle, RTHandle normalHandle, RTHandle decalLayerHandle)
	{
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x66C77E0", Offset = "0x66C67E0", VA = "0x66C77E0")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x66C78E0", Offset = "0x66C68E0", VA = "0x66C78E0", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x66C7990", Offset = "0x66C6990", VA = "0x66C7990")]
	private RendererListParams InitRendererListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x66C7B00", Offset = "0x66C6B00", VA = "0x66C7B00")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle cameraNormalsTexture, in TextureHandle depthTexture, in TextureHandle renderingLayersTexture, uint batchLayerMask, bool setGlobalDepth, bool setGlobalNormalAndRenderingLayers, bool allowPartialPass)
	{
	}
}
