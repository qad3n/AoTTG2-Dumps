// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderObjectsPass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x662E9B0", Offset = "0x662D9B0", VA = "0x662E9B0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x5C")]
	private RenderQueueType renderQueueType;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x60")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x80")]
	private RenderObjects.CustomCameraSettings m_CameraSettings;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0xA8")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0xB0")]
	private PassData m_PassData;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0xB8")]
	private RenderStateBlock m_RenderStateBlock;

	[Token(Token = "0x1700016D")]
	public Material overrideMaterial
	{
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x662E0F0", Offset = "0x662D0F0", VA = "0x662E0F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x662E100", Offset = "0x662D100", VA = "0x662E100")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700016E")]
	public int overrideMaterialPassIndex
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x662E120", Offset = "0x662D120", VA = "0x662E120")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600050C")]
		[Address(RVA = "0x662E130", Offset = "0x662D130", VA = "0x662E130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700016F")]
	public Shader overrideShader
	{
		[Token(Token = "0x600050D")]
		[Address(RVA = "0x662E140", Offset = "0x662D140", VA = "0x662E140")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600050E")]
		[Address(RVA = "0x662E150", Offset = "0x662D150", VA = "0x662E150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public int overrideShaderPassIndex
	{
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x662E170", Offset = "0x662D170", VA = "0x662E170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000510")]
		[Address(RVA = "0x662E180", Offset = "0x662D180", VA = "0x662E180")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x662E0E0", Offset = "0x662D0E0", VA = "0x662E0E0", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x662E190", Offset = "0x662D190", VA = "0x662E190")]
	[Obsolete("Use SetDepthState instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public void SetDetphState(bool writeEnabled, CompareFunction function = CompareFunction.Less)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x662E1F0", Offset = "0x662D1F0", VA = "0x662E1F0")]
	public void SetDepthState(bool writeEnabled, CompareFunction function = CompareFunction.Less)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x662E250", Offset = "0x662D250", VA = "0x662E250")]
	public void SetStencilState(int reference, CompareFunction compareFunction, StencilOp passOp, StencilOp failOp, StencilOp zFailOp)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x662E320", Offset = "0x662D320", VA = "0x662E320")]
	public RenderObjectsPass(string profilerTag, RenderPassEvent renderPassEvent, string[] shaderTags, RenderQueueType renderQueueType, int layerMask, RenderObjects.CustomCameraSettings cameraSettings)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x662E8C0", Offset = "0x662D8C0", VA = "0x662E8C0")]
	internal RenderObjectsPass(URPProfileId profileId, RenderPassEvent renderPassEvent, string[] shaderTags, RenderQueueType renderQueueType, int layerMask, RenderObjects.CustomCameraSettings cameraSettings)
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x662E420", Offset = "0x662D420", VA = "0x662E420")]
	internal void Init(RenderPassEvent renderPassEvent, string[] shaderTags, RenderQueueType renderQueueType, int layerMask, RenderObjects.CustomCameraSettings cameraSettings)
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x662E9C0", Offset = "0x662D9C0", VA = "0x662E9C0")]
	private static void ExecutePass(PassData passData, RasterCommandBuffer cmd, RendererList rendererList, bool isYFlipped)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x662EFA0", Offset = "0x662DFA0", VA = "0x662EFA0")]
	private void InitPassData(UniversalCameraData cameraData, ref PassData passData, bool isActiveTargetBackBuffer = false)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x662F010", Offset = "0x662E010", VA = "0x662F010")]
	private void InitRendererLists(UniversalRenderingData renderingData, UniversalLightData lightData, ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph)
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x662F590", Offset = "0x662E590", VA = "0x662F590", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
