// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandleSystem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A0")]
public class RTHandleSystem : IDisposable
{
	[Token(Token = "0x20001A1")]
	internal enum ResizeMode
	{
		[Token(Token = "0x400081A")]
		Auto,
		[Token(Token = "0x400081B")]
		OnDemand
	}

	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x10")]
	private bool m_HardwareDynamicResRequested;

	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<RTHandle> m_AutoSizedRTs;

	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x20")]
	private RTHandle[] m_AutoSizedRTsArray;

	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<RTHandle> m_ResizeOnDemandRTs;

	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x30")]
	private RTHandleProperties m_RTHandleProperties;

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x60")]
	private int m_MaxWidths;

	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x64")]
	private int m_MaxHeights;

	[Token(Token = "0x17000191")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x2B46E30", Offset = "0x2B45430", VA = "0x182B46E30")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x2B46D70", Offset = "0x2B45370", VA = "0x182B46D70")]
	public RTHandleSystem()
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x2B45C10", Offset = "0x2B44210", VA = "0x182B45C10", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x2B46050", Offset = "0x2B44650", VA = "0x182B46050")]
	public void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x2B46020", Offset = "0x2B44620", VA = "0x182B46020")]
	[Obsolete("useLegacyDynamicResControl is deprecated. Please use SetHardwareDynamicResolutionState() instead. #from(2023.3)")]
	public void Initialize(int width, int height, bool useLegacyDynamicResControl = false)
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x2B462D0", Offset = "0x2B448D0", VA = "0x182B462D0")]
	public void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x2B463F0", Offset = "0x2B449F0", VA = "0x182B463F0")]
	internal void Remove(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x2B46450", Offset = "0x2B44A50", VA = "0x182B46450")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x2B46C50", Offset = "0x2B45250", VA = "0x182B46C50")]
	public void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x2B46A10", Offset = "0x2B45010", VA = "0x182B46A10")]
	public void SetReferenceSize(int width, int height, bool reset)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x2B44FB0", Offset = "0x2B435B0", VA = "0x182B44FB0")]
	internal Vector2 CalculateRatioAgainstMaxSize(in Vector2Int viewportSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x2B46880", Offset = "0x2B44E80", VA = "0x182B46880")]
	public void SetHardwareDynamicResolutionState(bool enableHWDynamicRes)
	{
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x2B46C70", Offset = "0x2B45270", VA = "0x182B46C70")]
	internal void SwitchResizeMode(RTHandle rth, ResizeMode mode)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x2B457A0", Offset = "0x2B43DA0", VA = "0x182B457A0")]
	private void DemandResize(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
	public int GetMaxWidth()
	{
		return default(int);
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0xCDE980", Offset = "0xCDCF80", VA = "0x180CDE980")]
	public int GetMaxHeight()
	{
		return default(int);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x2B45A60", Offset = "0x2B44060", VA = "0x182B45A60")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x2B46480", Offset = "0x2B44A80", VA = "0x182B46480")]
	private void Resize(int width, int height, bool sizeChanged)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x2B437E0", Offset = "0x2B41DE0", VA = "0x182B437E0")]
	public RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x2B44B60", Offset = "0x2B43160", VA = "0x182B44B60")]
	public RTHandle Alloc(int width, int height, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x2B43F20", Offset = "0x2B42520", VA = "0x182B43F20")]
	public RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x2B43B00", Offset = "0x2B42100", VA = "0x182B43B00")]
	public RTHandle Alloc(int width, int height, GraphicsFormat format, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x2B451D0", Offset = "0x2B437D0", VA = "0x182B451D0")]
	private RenderTexture CreateRenderTexture(int width, int height, GraphicsFormat format, int slices, FilterMode filterMode, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW, TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, RenderTextureMemoryless memoryless, VRTextureUsage vrUsage, bool enableShadingRate, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x2B440A0", Offset = "0x2B426A0", VA = "0x182B440A0")]
	public RTHandle Alloc(int width, int height, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x2B44EC0", Offset = "0x2B434C0", VA = "0x182B44EC0")]
	public Vector2Int CalculateDimensions(Vector2 scaleFactor)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x2B44F40", Offset = "0x2B43540", VA = "0x182B44F40")]
	private static Vector2Int CalculateDimensions(Vector2 scaleFactor, Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x2B44980", Offset = "0x2B42F80", VA = "0x182B44980")]
	public RTHandle Alloc(Vector2 scaleFactor, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x2B445E0", Offset = "0x2B42BE0", VA = "0x182B445E0")]
	public RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x2B43D00", Offset = "0x2B42300", VA = "0x182B43D00")]
	public RTHandle Alloc(Vector2 scaleFactor, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x2B44E60", Offset = "0x2B43460", VA = "0x182B44E60")]
	public Vector2Int CalculateDimensions(ScaleFunc scaleFunc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x2B44820", Offset = "0x2B42E20", VA = "0x182B44820")]
	public RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x2B43960", Offset = "0x2B41F60", VA = "0x182B43960")]
	public RTHandle Alloc(ScaleFunc scaleFunc, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x2B44C50", Offset = "0x2B43250", VA = "0x182B44C50")]
	public RTHandle Alloc(ScaleFunc scaleFunc, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x2B435C0", Offset = "0x2B41BC0", VA = "0x182B435C0")]
	internal RTHandle AllocAutoSizedRenderTexture(int width, int height, int slices, GraphicsFormat format, FilterMode filterMode, TextureWrapMode wrapMode, TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, RenderTextureMemoryless memoryless, VRTextureUsage vrUsage, bool enableShadingRate, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x2B433F0", Offset = "0x2B419F0", VA = "0x182B433F0")]
	internal RTHandle AllocAutoSizedRenderTexture(int width, int height, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x2B44530", Offset = "0x2B42B30", VA = "0x182B44530")]
	public RTHandle Alloc(RenderTexture texture, bool transferOwnership = false)
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x2B44420", Offset = "0x2B42A20", VA = "0x182B44420")]
	public RTHandle Alloc(Texture texture)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x2B443B0", Offset = "0x2B429B0", VA = "0x182B443B0")]
	public RTHandle Alloc(RenderTargetIdentifier texture)
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x2B44760", Offset = "0x2B42D60", VA = "0x182B44760")]
	public RTHandle Alloc(RenderTargetIdentifier texture, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x2B44B00", Offset = "0x2B43100", VA = "0x182B44B00")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x2B45C20", Offset = "0x2B44220", VA = "0x182B45C20")]
	internal string DumpRTInfo()
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x2B45FB0", Offset = "0x2B445B0", VA = "0x182B45FB0")]
	private GraphicsFormat GetStencilFormat(GraphicsFormat depthStencilFormat)
	{
		return default(GraphicsFormat);
	}
}
