// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandles
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A5")]
public static class RTHandles
{
	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x0")]
	private static RTHandleSystem s_DefaultInstance;

	[Token(Token = "0x17000192")]
	public static int maxWidth
	{
		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x652F960", Offset = "0x652E960", VA = "0x652F960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000193")]
	public static int maxHeight
	{
		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x652F9E0", Offset = "0x652E9E0", VA = "0x652F9E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000194")]
	public static RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x652FA60", Offset = "0x652EA60", VA = "0x652FA60")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x652FB00", Offset = "0x652EB00", VA = "0x652FB00")]
	public static Vector2Int CalculateDimensions(Vector2 scaleFactor)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x652FB90", Offset = "0x652EB90", VA = "0x652FB90")]
	public static Vector2Int CalculateDimensions(ScaleFunc scaleFunc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x652FC50", Offset = "0x652EC50", VA = "0x652FC50")]
	public static RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x652FE40", Offset = "0x652EE40", VA = "0x652FE40")]
	public static RTHandle Alloc(int width, int height, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x652FFD0", Offset = "0x652EFD0", VA = "0x652FFD0")]
	public static RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x65301E0", Offset = "0x652F1E0", VA = "0x65301E0")]
	public static RTHandle Alloc(int width, int height, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x6530270", Offset = "0x652F270", VA = "0x6530270")]
	public static RTHandle Alloc(in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x6530380", Offset = "0x652F380", VA = "0x6530380")]
	internal static GraphicsFormat GetFormat(GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x6530390", Offset = "0x652F390", VA = "0x6530390")]
	internal static RTHandleAllocInfo GetRTHandleAllocInfo(in RenderTextureDescriptor desc, FilterMode filterMode, TextureWrapMode wrapMode, int anisoLevel, float mipMapBias, string name)
	{
		return default(RTHandleAllocInfo);
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x65306B0", Offset = "0x652F6B0", VA = "0x65306B0")]
	public static RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x6530840", Offset = "0x652F840", VA = "0x6530840")]
	public static RTHandle Alloc(Vector2 scaleFactor, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x65309F0", Offset = "0x652F9F0", VA = "0x65309F0")]
	public static RTHandle Alloc(Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x6530B00", Offset = "0x652FB00", VA = "0x6530B00")]
	public static RTHandle Alloc(Vector2 scaleFactor, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x6530B90", Offset = "0x652FB90", VA = "0x6530B90")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x6530D10", Offset = "0x652FD10", VA = "0x6530D10")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x6530F10", Offset = "0x652FF10", VA = "0x6530F10")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x6531020", Offset = "0x6530020", VA = "0x6531020")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x65310B0", Offset = "0x65300B0", VA = "0x65310B0")]
	public static RTHandle Alloc(Texture tex)
	{
		return null;
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x6531140", Offset = "0x6530140", VA = "0x6531140")]
	public static RTHandle Alloc(RenderTexture tex, bool transferOwnership = false)
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x652B0B0", Offset = "0x652A0B0", VA = "0x652B0B0")]
	public static RTHandle Alloc(RenderTargetIdentifier tex)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x65311D0", Offset = "0x65301D0", VA = "0x65311D0")]
	public static RTHandle Alloc(RenderTargetIdentifier tex, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x6531320", Offset = "0x6530320", VA = "0x6531320")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x6531380", Offset = "0x6530380", VA = "0x6531380")]
	public static void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x6531410", Offset = "0x6530410", VA = "0x6531410")]
	[Obsolete("useLegacyDynamicResControl is deprecated. Please use SetHardwareDynamicResolutionState() instead. #from(2023.3)")]
	public static void Initialize(int width, int height, bool useLegacyDynamicResControl = false)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x65314B0", Offset = "0x65304B0", VA = "0x65314B0")]
	public static void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x6531540", Offset = "0x6530540", VA = "0x6531540")]
	public static void SetHardwareDynamicResolutionState(bool hwDynamicResRequested)
	{
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x65315D0", Offset = "0x65305D0", VA = "0x65315D0")]
	public static void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x6531660", Offset = "0x6530660", VA = "0x6531660")]
	public static void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x65316F0", Offset = "0x65306F0", VA = "0x65316F0")]
	public static Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}
}
