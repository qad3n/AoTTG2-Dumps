// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandleSystem
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x652C220", Offset = "0x652B220", VA = "0x652C220")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x6527DA0", Offset = "0x6526DA0", VA = "0x6527DA0")]
	public RTHandleSystem()
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x6527C80", Offset = "0x6526C80", VA = "0x6527C80", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x652C420", Offset = "0x652B420", VA = "0x652C420")]
	public void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x652C6D0", Offset = "0x652B6D0", VA = "0x652C6D0")]
	[Obsolete("useLegacyDynamicResControl is deprecated. Please use SetHardwareDynamicResolutionState() instead. #from(2023.3)")]
	public void Initialize(int width, int height, bool useLegacyDynamicResControl = false)
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x6527300", Offset = "0x6526300", VA = "0x6527300")]
	public void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x652B6C0", Offset = "0x652A6C0", VA = "0x652B6C0")]
	internal void Remove(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x65276D0", Offset = "0x65266D0", VA = "0x65276D0")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x65276A0", Offset = "0x65266A0", VA = "0x65276A0")]
	public void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x652C6F0", Offset = "0x652B6F0", VA = "0x652C6F0")]
	public void SetReferenceSize(int width, int height, bool reset)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x6527790", Offset = "0x6526790", VA = "0x6527790")]
	internal Vector2 CalculateRatioAgainstMaxSize(in Vector2Int viewportSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x652CC10", Offset = "0x652BC10", VA = "0x652CC10")]
	public void SetHardwareDynamicResolutionState(bool enableHWDynamicRes)
	{
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x6526A00", Offset = "0x6525A00", VA = "0x6526A00")]
	internal void SwitchResizeMode(RTHandle rth, ResizeMode mode)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x652CDB0", Offset = "0x652BDB0", VA = "0x652CDB0")]
	private void DemandResize(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x652D010", Offset = "0x652C010", VA = "0x652D010")]
	public int GetMaxWidth()
	{
		return default(int);
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x652D020", Offset = "0x652C020", VA = "0x652D020")]
	public int GetMaxHeight()
	{
		return default(int);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x652C240", Offset = "0x652B240", VA = "0x652C240")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x652C8C0", Offset = "0x652B8C0", VA = "0x652C8C0")]
	private void Resize(int width, int height, bool sizeChanged)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x652D030", Offset = "0x652C030", VA = "0x652D030")]
	public RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x652D410", Offset = "0x652C410", VA = "0x652D410")]
	public RTHandle Alloc(int width, int height, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x652D4F0", Offset = "0x652C4F0", VA = "0x652D4F0")]
	public RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x652D1A0", Offset = "0x652C1A0", VA = "0x652D1A0")]
	public RTHandle Alloc(int width, int height, GraphicsFormat format, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x652D690", Offset = "0x652C690", VA = "0x652D690")]
	private RenderTexture CreateRenderTexture(int width, int height, GraphicsFormat format, int slices, FilterMode filterMode, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW, TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, RenderTextureMemoryless memoryless, VRTextureUsage vrUsage, bool enableShadingRate, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x6526E90", Offset = "0x6525E90", VA = "0x6526E90")]
	public RTHandle Alloc(int width, int height, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x652DDA0", Offset = "0x652CDA0", VA = "0x652DDA0")]
	public Vector2Int CalculateDimensions(Vector2 scaleFactor)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x652DDB0", Offset = "0x652CDB0", VA = "0x652DDB0")]
	private static Vector2Int CalculateDimensions(Vector2 scaleFactor, Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x652DFF0", Offset = "0x652CFF0", VA = "0x652DFF0")]
	public RTHandle Alloc(Vector2 scaleFactor, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x652E3B0", Offset = "0x652D3B0", VA = "0x652E3B0")]
	public RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x652E530", Offset = "0x652D530", VA = "0x652E530")]
	public RTHandle Alloc(Vector2 scaleFactor, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x652EB60", Offset = "0x652DB60", VA = "0x652EB60")]
	public Vector2Int CalculateDimensions(ScaleFunc scaleFunc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x652EBB0", Offset = "0x652DBB0", VA = "0x652EBB0")]
	public RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x652ED70", Offset = "0x652DD70", VA = "0x652ED70")]
	public RTHandle Alloc(ScaleFunc scaleFunc, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x652EEF0", Offset = "0x652DEF0", VA = "0x652EEF0")]
	public RTHandle Alloc(ScaleFunc scaleFunc, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x652E120", Offset = "0x652D120", VA = "0x652E120")]
	internal RTHandle AllocAutoSizedRenderTexture(int width, int height, int slices, GraphicsFormat format, FilterMode filterMode, TextureWrapMode wrapMode, TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, RenderTextureMemoryless memoryless, VRTextureUsage vrUsage, bool enableShadingRate, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x652E8F0", Offset = "0x652D8F0", VA = "0x652E8F0")]
	internal RTHandle AllocAutoSizedRenderTexture(int width, int height, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x652F0F0", Offset = "0x652E0F0", VA = "0x652F0F0")]
	public RTHandle Alloc(RenderTexture texture, bool transferOwnership = false)
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x652F200", Offset = "0x652E200", VA = "0x652F200")]
	public RTHandle Alloc(Texture texture)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x652F300", Offset = "0x652E300", VA = "0x652F300")]
	public RTHandle Alloc(RenderTargetIdentifier texture)
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x652F400", Offset = "0x652E400", VA = "0x652F400")]
	public RTHandle Alloc(RenderTargetIdentifier texture, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x652F4E0", Offset = "0x652E4E0", VA = "0x652F4E0")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x652F540", Offset = "0x652E540", VA = "0x652F540")]
	internal string DumpRTInfo()
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x652DD30", Offset = "0x652CD30", VA = "0x652DD30")]
	private GraphicsFormat GetStencilFormat(GraphicsFormat depthStencilFormat)
	{
		return default(GraphicsFormat);
	}
}
