// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderingUtils
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C803D0", Offset = "0x2C7E9D0", VA = "0x182C803D0")]
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
		[Address(RVA = "0x2C805C0", Offset = "0x2C7EBC0", VA = "0x182C805C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	internal static bool useStructuredBuffer
	{
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000220")]
	private static Material errorMaterial
	{
		[Token(Token = "0x60008C0")]
		[Address(RVA = "0x2C80470", Offset = "0x2C7EA70", VA = "0x182C80470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	internal static bool SupportsLightLayers(GraphicsDeviceType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x2C7FAF0", Offset = "0x2C7E0F0", VA = "0x182C7FAF0")]
	public static void SetViewAndProjectionMatrices(CommandBuffer cmd, Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x2C7F6F0", Offset = "0x2C7DCF0", VA = "0x182C7F6F0")]
	public static void SetViewAndProjectionMatrices(RasterCommandBuffer cmd, Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x2C7F500", Offset = "0x2C7DB00", VA = "0x182C7F500")]
	internal static void SetScaleBiasRt(RasterCommandBuffer cmd, in UniversalCameraData cameraData, RTHandle rTHandle)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x2C7FBF0", Offset = "0x2C7E1F0", VA = "0x182C7FBF0")]
	internal static void SetupOffscreenUIViewportParams(Material material, ref Rect pixelRect, bool isRenderToBackBufferTarget)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x2C79540", Offset = "0x2C77B40", VA = "0x182C79540")]
	internal static void Blit(CommandBuffer cmd, RTHandle source, Rect viewport, RTHandle destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x2C79710", Offset = "0x2C77D10", VA = "0x182C79710")]
	internal static void Blit(CommandBuffer cmd, RTHandle source, Rect viewport, RTHandle destinationColor, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RTHandle destinationDepthStencil, RenderBufferLoadAction depthStencilLoadAction, RenderBufferStoreAction depthStencilStoreAction, ClearFlag clearFlag, Color clearColor, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x2C7B5F0", Offset = "0x2C79BF0", VA = "0x182C7B5F0")]
	internal static void FinalBlit(CommandBuffer cmd, UniversalCameraData cameraData, RTHandle source, RTHandle destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, Material material, int passIndex)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x2C7B0A0", Offset = "0x2C796A0", VA = "0x182C7B0A0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void CreateRendererParamsObjectsWithError(ref CullingResults cullResults, Camera camera, FilteringSettings filterSettings, SortingCriteria sortFlags, ref RendererListParams param)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x2C7A7D0", Offset = "0x2C78DD0", VA = "0x182C7A7D0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void CreateRendererListObjectsWithError(ScriptableRenderContext context, ref CullingResults cullResults, Camera camera, FilteringSettings filterSettings, SortingCriteria sortFlags, ref RendererList rl)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x2C7A6C0", Offset = "0x2C78CC0", VA = "0x182C7A6C0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void CreateRendererListObjectsWithError(RenderGraph renderGraph, ref CullingResults cullResults, Camera camera, FilteringSettings filterSettings, SortingCriteria sortFlags, ref RendererListHandle rl)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x2C7B5B0", Offset = "0x2C79BB0", VA = "0x182C7B5B0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal static void DrawRendererListObjectsWithError(RasterCommandBuffer cmd, ref RendererList rl)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x2C7AD30", Offset = "0x2C79330", VA = "0x182C7AD30")]
	internal static void CreateRendererListWithRenderStateBlock(ScriptableRenderContext context, ref CullingResults cullResults, DrawingSettings ds, FilteringSettings fs, RenderStateBlock rsb, ref RendererList rl)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x2C7A900", Offset = "0x2C78F00", VA = "0x182C7A900")]
	internal static void CreateRendererListWithRenderStateBlock(RenderGraph renderGraph, ref CullingResults cullResults, DrawingSettings ds, FilteringSettings fs, RenderStateBlock rsb, ref RendererListHandle rl)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x2C79910", Offset = "0x2C77F10", VA = "0x182C79910")]
	internal static void ClearSystemInfoCache()
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x2C7FD70", Offset = "0x2C7E370", VA = "0x182C7FD70")]
	public static bool SupportsRenderTextureFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x2C7FD50", Offset = "0x2C7E350", VA = "0x182C7FD50")]
	[Obsolete("Use SystemInfo.IsFormatSupported instead. #from(2023.2)")]
	public static bool SupportsGraphicsFormat(GraphicsFormat format, FormatUsage usage)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x2C7BFD0", Offset = "0x2C7A5D0", VA = "0x182C7BFD0")]
	internal static int GetLastValidColorBufferIndex(RenderTargetIdentifier[] colorBuffers)
	{
		return default(int);
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x2C7C100", Offset = "0x2C7A700", VA = "0x182C7C100")]
	internal static uint GetValidColorBufferCount(RTHandle[] colorBuffers)
	{
		return default(uint);
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x2C7C590", Offset = "0x2C7AB90", VA = "0x182C7C590")]
	internal static bool IsMRT(RTHandle[] colorBuffers)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x2C79990", Offset = "0x2C77F90", VA = "0x182C79990")]
	internal static bool Contains(RenderTargetIdentifier[] source, RenderTargetIdentifier value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x2C7C3F0", Offset = "0x2C7A9F0", VA = "0x182C7C3F0")]
	internal static int IndexOf(RTHandle[] source, RenderTargetIdentifier value)
	{
		return default(int);
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x2C7C240", Offset = "0x2C7A840", VA = "0x182C7C240")]
	internal static int IndexOf(RTHandle[] source, RTHandle value)
	{
		return default(int);
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x2C79AC0", Offset = "0x2C780C0", VA = "0x182C79AC0")]
	internal static uint CountDistinct(RTHandle[] source, RTHandle value)
	{
		return default(uint);
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x2C7C700", Offset = "0x2C7AD00", VA = "0x182C7C700")]
	internal static int LastValid(RTHandle[] source)
	{
		return default(int);
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x1A14800", Offset = "0x1A12E00", VA = "0x181A14800")]
	internal static bool Contains(ClearFlag a, ClearFlag b)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x2C7F0F0", Offset = "0x2C7D6F0", VA = "0x182C7F0F0")]
	internal static bool SequenceEqual(RTHandle[] left, RTHandle[] right)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x2C7C840", Offset = "0x2C7AE40", VA = "0x182C7C840")]
	internal static bool MultisampleDepthResolveSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x2C7C8C0", Offset = "0x2C7AEC0", VA = "0x182C7C8C0")]
	internal static bool RTHandleNeedsReAlloc(RTHandle handle, in TextureDesc descriptor, bool scaled)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x2C7BC10", Offset = "0x2C7A210", VA = "0x182C7BC10")]
	internal static RenderTargetIdentifier GetCameraTargetIdentifier(ref RenderingData renderingData)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x2C7E720", Offset = "0x2C7CD20", VA = "0x182C7E720")]
	[Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
	public static bool ReAllocateIfNeeded(ref RTHandle handle, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x2C7EBC0", Offset = "0x2C7D1C0", VA = "0x182C7EBC0")]
	[Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
	public static bool ReAllocateIfNeeded(ref RTHandle handle, Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x2C7E1E0", Offset = "0x2C7C7E0", VA = "0x182C7E1E0")]
	[Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
	public static bool ReAllocateIfNeeded(ref RTHandle handle, ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x2C7D740", Offset = "0x2C7BD40", VA = "0x182C7D740")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x2C7D1D0", Offset = "0x2C7B7D0", VA = "0x182C7D1D0")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, TextureDesc descriptor, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x2C7CC50", Offset = "0x2C7B250", VA = "0x182C7CC50")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x2C7DC40", Offset = "0x2C7C240", VA = "0x182C7DC40")]
	public static bool ReAllocateHandleIfNeeded(ref RTHandle handle, ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x2C7F3F0", Offset = "0x2C7D9F0", VA = "0x182C7F3F0")]
	public static bool SetMaxRTHandlePoolCapacity(int capacity)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x2C79470", Offset = "0x2C77A70", VA = "0x182C79470")]
	internal static void AddStaleResourceToPoolOrRelease(TextureDesc desc, RTHandle handle)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x2C7A450", Offset = "0x2C78A50", VA = "0x182C7A450")]
	public static DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x2C79CF0", Offset = "0x2C782F0", VA = "0x182C79CF0")]
	public static DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x2C7A2A0", Offset = "0x2C788A0", VA = "0x182C7A2A0")]
	public static DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x2C79F30", Offset = "0x2C78530", VA = "0x182C79F30")]
	public static DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x2C7C530", Offset = "0x2C7AB30", VA = "0x182C7C530")]
	internal static bool IsHandleYFlipped(in RasterGraphContext renderGraphContext, in TextureHandle textureHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x2C7BE60", Offset = "0x2C7A460", VA = "0x182C7BE60")]
	internal static Vector4 GetFinalBlitScaleBias(in RasterGraphContext renderGraphContext, in TextureHandle source, in TextureHandle destination)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x2C70100", Offset = "0x2C6E700", VA = "0x182C70100")]
	internal static RTHandleAllocInfo CreateRTHandleAllocInfo(in RenderTextureDescriptor descriptor, FilterMode filterMode, TextureWrapMode wrapMode, int anisoLevel, float mipMapBias, string name)
	{
		return default(RTHandleAllocInfo);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x2C7A600", Offset = "0x2C78C00", VA = "0x182C7A600")]
	internal static RTHandleAllocInfo CreateRTHandleAllocInfo(in TextureDesc descriptor, string name)
	{
		return default(RTHandleAllocInfo);
	}
}
