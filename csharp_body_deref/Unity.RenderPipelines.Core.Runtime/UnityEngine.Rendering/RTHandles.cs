// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandles
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2B494F0", Offset = "0x2B47AF0", VA = "0x182B494F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000193")]
	public static int maxHeight
	{
		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x2B49490", Offset = "0x2B47A90", VA = "0x182B49490")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000194")]
	public static RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x2B49550", Offset = "0x2B47B50", VA = "0x182B49550")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x2B48B60", Offset = "0x2B47160", VA = "0x182B48B60")]
	public static Vector2Int CalculateDimensions(Vector2 scaleFactor)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x2B48BE0", Offset = "0x2B471E0", VA = "0x182B48BE0")]
	public static Vector2Int CalculateDimensions(ScaleFunc scaleFunc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x2B489A0", Offset = "0x2B46FA0", VA = "0x182B489A0")]
	public static RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x2B48550", Offset = "0x2B46B50", VA = "0x182B48550")]
	public static RTHandle Alloc(int width, int height, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x2B48370", Offset = "0x2B46970", VA = "0x182B48370")]
	public static RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x2B47F90", Offset = "0x2B46590", VA = "0x182B47F90")]
	public static RTHandle Alloc(int width, int height, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x2B47E70", Offset = "0x2B46470", VA = "0x182B47E70")]
	public static RTHandle Alloc(in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x2B48D20", Offset = "0x2B47320", VA = "0x182B48D20")]
	internal static GraphicsFormat GetFormat(GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x2B48D30", Offset = "0x2B47330", VA = "0x182B48D30")]
	internal static RTHandleAllocInfo GetRTHandleAllocInfo(in RenderTextureDescriptor desc, FilterMode filterMode, TextureWrapMode wrapMode, int anisoLevel, float mipMapBias, string name)
	{
		return default(RTHandleAllocInfo);
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x2B47890", Offset = "0x2B45E90", VA = "0x182B47890")]
	public static RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x2B486C0", Offset = "0x2B46CC0", VA = "0x182B486C0")]
	public static RTHandle Alloc(Vector2 scaleFactor, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x2B47770", Offset = "0x2B45D70", VA = "0x182B47770")]
	public static RTHandle Alloc(Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x2B488E0", Offset = "0x2B46EE0", VA = "0x182B488E0")]
	public static RTHandle Alloc(Vector2 scaleFactor, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x2B48120", Offset = "0x2B46720", VA = "0x182B48120")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x2B479E0", Offset = "0x2B45FE0", VA = "0x182B479E0")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, GraphicsFormat format, int slices = 1, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, bool useDynamicScaleExplicit = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x2B48260", Offset = "0x2B46860", VA = "0x182B48260")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x2B47C60", Offset = "0x2B46260", VA = "0x182B47C60")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, RTHandleAllocInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x2B47D10", Offset = "0x2B46310", VA = "0x182B47D10")]
	public static RTHandle Alloc(Texture tex)
	{
		return null;
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x2B47B40", Offset = "0x2B46140", VA = "0x182B47B40")]
	public static RTHandle Alloc(RenderTexture tex, bool transferOwnership = false)
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x2B48060", Offset = "0x2B46660", VA = "0x182B48060")]
	public static RTHandle Alloc(RenderTargetIdentifier tex)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x2B48840", Offset = "0x2B46E40", VA = "0x182B48840")]
	public static RTHandle Alloc(RenderTargetIdentifier tex, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x2B484F0", Offset = "0x2B46AF0", VA = "0x182B484F0")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x2B48FB0", Offset = "0x2B475B0", VA = "0x182B48FB0")]
	public static void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x2B49030", Offset = "0x2B47630", VA = "0x182B49030")]
	[Obsolete("useLegacyDynamicResControl is deprecated. Please use SetHardwareDynamicResolutionState() instead. #from(2023.3)")]
	public static void Initialize(int width, int height, bool useLegacyDynamicResControl = false)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x2B490C0", Offset = "0x2B476C0", VA = "0x182B490C0")]
	public static void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x2B491C0", Offset = "0x2B477C0", VA = "0x182B491C0")]
	public static void SetHardwareDynamicResolutionState(bool hwDynamicResRequested)
	{
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x2B49390", Offset = "0x2B47990", VA = "0x182B49390")]
	public static void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x2B49130", Offset = "0x2B47730", VA = "0x182B49130")]
	public static void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x2B48C90", Offset = "0x2B47290", VA = "0x182B48C90")]
	public static Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}
}
