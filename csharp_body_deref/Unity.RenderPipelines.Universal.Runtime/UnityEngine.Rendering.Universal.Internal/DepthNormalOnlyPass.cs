// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D3")]
	internal bool enableRenderingLayers
	{
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D4")]
	internal RenderingLayerUtils.MaskSize renderingLayersMaskSize
	{
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		[CompilerGenerated]
		get
		{
			return default(RenderingLayerUtils.MaskSize);
		}
		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0xACB520", Offset = "0xAC9B20", VA = "0x180ACB520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x2CCBB20", Offset = "0x2CCA120", VA = "0x182CCBB20")]
	public DepthNormalOnlyPass(RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x2CCA6C0", Offset = "0x2CC8CC0", VA = "0x182CCA6C0")]
	public static GraphicsFormat GetGraphicsFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x2CCB7E0", Offset = "0x2CC9DE0", VA = "0x182CCB7E0")]
	public void Setup(RTHandle depthHandle, RTHandle normalHandle)
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x1D66980", Offset = "0x1D64F80", VA = "0x181D66980")]
	public void Setup(RTHandle depthHandle, RTHandle normalHandle, RTHandle decalLayerHandle)
	{
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x2CCA5E0", Offset = "0x2CC8BE0", VA = "0x182CCA5E0")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x2CCAA70", Offset = "0x2CC9070", VA = "0x182CCAA70", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x2CCA720", Offset = "0x2CC8D20", VA = "0x182CCA720")]
	private RendererListParams InitRendererListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x2CCAB30", Offset = "0x2CC9130", VA = "0x182CCAB30")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle cameraNormalsTexture, in TextureHandle depthTexture, in TextureHandle renderingLayersTexture, uint batchLayerMask, bool setGlobalDepth, bool setGlobalNormalAndRenderingLayers, bool allowPartialPass)
	{
	}
}
