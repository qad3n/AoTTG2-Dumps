// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderObjectsPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000C5")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.Universal", null, null)]
public class RenderObjectsPass : ScriptableRenderPass
{
	[Token(Token = "0x20000C6")]
	private class PassData
	{
		[Token(Token = "0x400043E")]
		[FieldOffset(Offset = "0x10")]
		internal RenderObjects.CustomCameraSettings cameraSettings;

		[Token(Token = "0x400043F")]
		[FieldOffset(Offset = "0x18")]
		internal RenderPassEvent renderPassEvent;

		[Token(Token = "0x4000440")]
		[FieldOffset(Offset = "0x1C")]
		internal TextureHandle color;

		[Token(Token = "0x4000441")]
		[FieldOffset(Offset = "0x2C")]
		internal RendererListHandle rendererListHdl;

		[Token(Token = "0x4000442")]
		[FieldOffset(Offset = "0x38")]
		internal DebugRendererLists debugRendererLists;

		[Token(Token = "0x4000443")]
		[FieldOffset(Offset = "0x40")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000444")]
		[FieldOffset(Offset = "0x48")]
		internal RendererList rendererList;

		[Token(Token = "0x4000445")]
		[FieldOffset(Offset = "0x60")]
		internal bool isActiveTargetBackBuffer;

		[Token(Token = "0x600051B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x60")]
	private RenderQueueType renderQueueType;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x64")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x88")]
	private RenderObjects.CustomCameraSettings m_CameraSettings;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0xB0")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0xB8")]
	private PassData m_PassData;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0xC0")]
	private RenderStateBlock m_RenderStateBlock;

	[Token(Token = "0x1700016D")]
	public Material overrideMaterial
	{
		[Token(Token = "0x6000509")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600050A")]
		[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700016E")]
	public int overrideMaterialPassIndex
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0xB5B9F0", Offset = "0xB59FF0", VA = "0x180B5B9F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600050C")]
		[Address(RVA = "0xB5BE70", Offset = "0xB5A470", VA = "0x180B5BE70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700016F")]
	public Shader overrideShader
	{
		[Token(Token = "0x600050D")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600050E")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public int overrideShaderPassIndex
	{
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x266C1E0", Offset = "0x266A7E0", VA = "0x18266C1E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000510")]
		[Address(RVA = "0x2B9B710", Offset = "0x2B99D10", VA = "0x182B9B710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x2C3F6D0", Offset = "0x2C3DCD0", VA = "0x182C3F6D0")]
	[Obsolete("Use SetDepthState instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public void SetDetphState(bool writeEnabled, CompareFunction function = CompareFunction.Less)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x2C3F6D0", Offset = "0x2C3DCD0", VA = "0x182C3F6D0")]
	public void SetDepthState(bool writeEnabled, CompareFunction function = CompareFunction.Less)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x2C3F740", Offset = "0x2C3DD40", VA = "0x182C3F740")]
	public void SetStencilState(int reference, CompareFunction compareFunction, StencilOp passOp, StencilOp failOp, StencilOp zFailOp)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x2C3F930", Offset = "0x2C3DF30", VA = "0x182C3F930")]
	public RenderObjectsPass(string profilerTag, RenderPassEvent renderPassEvent, string[] shaderTags, RenderQueueType renderQueueType, int layerMask, RenderObjects.CustomCameraSettings cameraSettings)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x2C3F840", Offset = "0x2C3DE40", VA = "0x182C3F840")]
	internal RenderObjectsPass(URPProfileId profileId, RenderPassEvent renderPassEvent, string[] shaderTags, RenderQueueType renderQueueType, int layerMask, RenderObjects.CustomCameraSettings cameraSettings)
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x2C3E5F0", Offset = "0x2C3CBF0", VA = "0x182C3E5F0")]
	internal void Init(RenderPassEvent renderPassEvent, string[] shaderTags, RenderQueueType renderQueueType, int layerMask, RenderObjects.CustomCameraSettings cameraSettings)
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x2C3D800", Offset = "0x2C3BE00", VA = "0x182C3D800")]
	private static void ExecutePass(PassData passData, RasterCommandBuffer cmd, RendererList rendererList, bool isYFlipped)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x2C3DDF0", Offset = "0x2C3C3F0", VA = "0x182C3DDF0")]
	private void InitPassData(UniversalCameraData cameraData, ref PassData passData, bool isActiveTargetBackBuffer = false)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x2C3DE70", Offset = "0x2C3C470", VA = "0x182C3DE70")]
	private void InitRendererLists(UniversalRenderingData renderingData, UniversalLightData lightData, ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph)
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x2C3EA90", Offset = "0x2C3D090", VA = "0x182C3EA90", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
