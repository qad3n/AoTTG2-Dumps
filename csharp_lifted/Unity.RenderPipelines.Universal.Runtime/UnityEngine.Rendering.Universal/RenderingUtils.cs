// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderingUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000198")]
public static class RenderingUtils
{
	[Token(Token = "0x40008F8")]
	[FieldOffset(Offset = "0x0")]
	private static List<ShaderTagId> m_LegacyShaderPassNames;

	[Token(Token = "0x40008F9")]
	[FieldOffset(Offset = "0x8")]
	private static AttachmentDescriptor s_EmptyAttachment;

	[Token(Token = "0x40008FA")]
	[FieldOffset(Offset = "0x80")]
	private static Mesh s_FullscreenMesh;

	[Token(Token = "0x40008FB")]
	[FieldOffset(Offset = "0x88")]
	private static Material s_ErrorMaterial;

	[Token(Token = "0x40008FC")]
	[FieldOffset(Offset = "0x90")]
	private static ShaderTagId[] s_ShaderTagValues;

	[Token(Token = "0x40008FD")]
	[FieldOffset(Offset = "0x98")]
	private static RenderStateBlock[] s_RenderStateBlocks;

	[Token(Token = "0x40008FE")]
	[FieldOffset(Offset = "0xA0")]
	private static Dictionary<RenderTextureFormat, bool> m_RenderTextureFormatSupport;

	[Token(Token = "0x1700021D")]
	internal static AttachmentDescriptor emptyAttachment
	{
		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x66820E0", Offset = "0x66810E0", VA = "0x66820E0")]
		get
		{
			return default(AttachmentDescriptor);
		}
	}

	[Token(Token = "0x1700021E")]
	[Obsolete("Use Blitter.BlitCameraTexture instead of CommandBuffer.DrawMesh(fullscreenMesh, ...). #from(2022.2)")]
	public static Mesh fullscreenMesh
	{
		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x6682170", Offset = "0x6681170", VA = "0x6682170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	internal static bool useStructuredBuffer
	{
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x6682700", Offset = "0x6681700", VA = "0x6682700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000220")]
	private static Material errorMaterial
	{
		[Token(Token = "0x60008C0")]
		[Address(RVA = "0x6682720", Offset = "0x6681720", VA = "0x6682720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x6682710", Offset = "0x6681710", VA = "0x6682710")]
	internal static bool SupportsLightLayers(GraphicsDeviceType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x66828C0", Offset = "0x66818C0", VA = "0x66828C0")]
	public static void SetViewAndProjectionMatrices(CommandBuffer cmd, Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x6682A00", Offset = "0x6681A00", VA = "0x6682A00")]
	public static void SetViewAndProjectionMatrices(RasterCommandBuffer cmd, Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x6683190", Offset = "0x6682190", VA = "0x6683190")]
	internal static void SetScaleBiasRt(RasterCommandBuffer cmd, in UniversalCameraData cameraData, RTHandle rTHandle)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x6683360", Offset = "0x6682360", VA = "0x6683360")]
	internal static void SetupOffscreenUIViewportParams(Material material, ref Rect pixelRect, bool isRenderToBackBufferTarget)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x6683470", Offset = "0x6682470", VA = "0x6683470")]
	internal static void Blit(CommandBuffer cmd, RTHandle source, Rect viewport, RTHandle destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x66835F0", Offset = "0x66825F0", VA = "0x66835F0")]
	internal static void Blit(CommandBuffer cmd, RTHandle source, Rect viewport, RTHandle destinationColor, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RTHandle destinationDepthStencil, RenderBufferLoadAction depthStencilLoadAction, RenderBufferStoreAction depthStencilStoreAction, ClearFlag clearFlag, Color clearColor, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x66837C0", Offset = "0x66827C0", VA = "0x66837C0")]
	internal static void FinalBlit(CommandBuffer cmd, UniversalCameraData cameraData, RTHandle source, RTHandle destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, Material material, int passIndex)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x6683DA0", Offset = "0x6682DA0", VA = "0x6683DA0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void CreateRendererParamsObjectsWithError(ref CullingResults cullResults, Camera camera, FilteringSettings filterSettings, SortingCriteria sortFlags, ref RendererListParams param)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x66841C0", Offset = "0x66831C0", VA = "0x66841C0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void CreateRendererListObjectsWithError(ScriptableRenderContext context, ref CullingResults cullResults, Camera camera, FilteringSettings filterSettings, SortingCriteria sortFlags, ref RendererList rl)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x66842F0", Offset = "0x66832F0", VA = "0x66842F0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void CreateRendererListObjectsWithError(RenderGraph renderGraph, ref CullingResults cullResults, Camera camera, FilteringSettings filterSettings, SortingCriteria sortFlags, ref RendererListHandle rl)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x66843C0", Offset = "0x66833C0", VA = "0x66843C0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void DrawRendererListObjectsWithError(RasterCommandBuffer cmd, ref RendererList rl)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x66843F0", Offset = "0x66833F0", VA = "0x66843F0")]
	internal static void CreateRendererListWithRenderStateBlock(ScriptableRenderContext context, ref CullingResults cullResults, DrawingSettings ds, FilteringSettings fs, RenderStateBlock rsb, ref RendererList rl)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x6673AB0", Offset = "0x6672AB0", VA = "0x6673AB0")]
	internal static void CreateRendererListWithRenderStateBlock(RenderGraph renderGraph, ref CullingResults cullResults, DrawingSettings ds, FilteringSettings fs, RenderStateBlock rsb, ref RendererListHandle rl)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x66846B0", Offset = "0x66836B0", VA = "0x66846B0")]
	internal static void ClearSystemInfoCache()
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x6684750", Offset = "0x6683750", VA = "0x6684750")]
	public static bool SupportsRenderTextureFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x6684840", Offset = "0x6683840", VA = "0x6684840")]
	[Obsolete("Use SystemInfo.IsFormatSupported instead. #from(2023.2)")]
	public static bool SupportsGraphicsFormat(GraphicsFormat format, FormatUsage usage)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x6684850", Offset = "0x6683850", VA = "0x6684850")]
	internal static int GetLastValidColorBufferIndex(RenderTargetIdentifier[] colorBuffers)
	{
		return default(int);
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x6684970", Offset = "0x6683970", VA = "0x6684970")]
	internal static uint GetValidColorBufferCount(RTHandle[] colorBuffers)
	{
		return default(uint);
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x6684AA0", Offset = "0x6683AA0", VA = "0x6684AA0")]
	internal static bool IsMRT(RTHandle[] colorBuffers)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x6684AF0", Offset = "0x6683AF0", VA = "0x6684AF0")]
	internal static bool Contains(RenderTargetIdentifier[] source, RenderTargetIdentifier value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x6684C10", Offset = "0x6683C10", VA = "0x6684C10")]
	internal static int IndexOf(RTHandle[] source, RenderTargetIdentifier value)
	{
		return default(int);
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x6684D20", Offset = "0x6683D20", VA = "0x6684D20")]
	internal static int IndexOf(RTHandle[] source, RTHandle value)
	{
		return default(int);
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x6684DC0", Offset = "0x6683DC0", VA = "0x6684DC0")]
	internal static uint CountDistinct(RTHandle[] source, RTHandle value)
	{
		return default(uint);
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x6684FD0", Offset = "0x6683FD0", VA = "0x6684FD0")]
	internal static int LastValid(RTHandle[] source)
	{
		return default(int);
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x6685100", Offset = "0x6684100", VA = "0x6685100")]
	internal static bool Contains(ClearFlag a, ClearFlag b)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x6685110", Offset = "0x6684110", VA = "0x6685110")]
	internal static bool SequenceEqual(RTHandle[] left, RTHandle[] right)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x6685510", Offset = "0x6684510", VA = "0x6685510")]
	internal static bool MultisampleDepthResolveSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x66855C0", Offset = "0x66845C0", VA = "0x66855C0")]
	internal static bool RTHandleNeedsReAlloc(RTHandle handle, in TextureDesc descriptor, bool scaled)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x6685960", Offset = "0x6684960", VA = "0x6685960")]
	internal static RenderTargetIdentifier GetCameraTargetIdentifier(ref RenderingData renderingData)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x6685C00", Offset = "0x6684C00", VA = "0x6685C00")]
	[Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
	public static bool ReAllocateIfNeeded(ref RTHandle handle, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x6686130", Offset = "0x6685130", VA = "0x6686130")]
	[Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
	public static bool ReAllocateIfNeeded(ref RTHandle handle, Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x6686600", Offset = "0x6685600", VA = "0x6686600")]
	[Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
	public static bool ReAllocateIfNeeded(ref RTHandle handle, ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x6686B10", Offset = "0x6685B10", VA = "0x6686B10")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x6687050", Offset = "0x6686050", VA = "0x6687050")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, TextureDesc descriptor, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x6687540", Offset = "0x6686540", VA = "0x6687540")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x6687AE0", Offset = "0x6686AE0", VA = "0x6687AE0")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x66880C0", Offset = "0x66870C0", VA = "0x66880C0")]
	public static bool SetMaxRTHandlePoolCapacity(int capacity)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x6686080", Offset = "0x6685080", VA = "0x6686080")]
	internal static void AddStaleResourceToPoolOrRelease(TextureDesc desc, RTHandle handle)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x6688210", Offset = "0x6687210", VA = "0x6688210")]
	public static DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x6688330", Offset = "0x6687330", VA = "0x6688330")]
	public static DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x6688600", Offset = "0x6687600", VA = "0x6688600")]
	public static DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x6688720", Offset = "0x6687720", VA = "0x6688720")]
	public static DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x6688990", Offset = "0x6687990", VA = "0x6688990")]
	internal static bool IsHandleYFlipped(in RasterGraphContext renderGraphContext, in TextureHandle textureHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x666D290", Offset = "0x666C290", VA = "0x666D290")]
	internal static Vector4 GetFinalBlitScaleBias(in RasterGraphContext renderGraphContext, in TextureHandle source, in TextureHandle destination)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x66889F0", Offset = "0x66879F0", VA = "0x66889F0")]
	internal static RTHandleAllocInfo CreateRTHandleAllocInfo(in RenderTextureDescriptor descriptor, FilterMode filterMode, TextureWrapMode wrapMode, int anisoLevel, float mipMapBias, string name)
	{
		return default(RTHandleAllocInfo);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x6688CB0", Offset = "0x6687CB0", VA = "0x6688CB0")]
	internal static RTHandleAllocInfo CreateRTHandleAllocInfo(in TextureDesc descriptor, string name)
	{
		return default(RTHandleAllocInfo);
	}
}
