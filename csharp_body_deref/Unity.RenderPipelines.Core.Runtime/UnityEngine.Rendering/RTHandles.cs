// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandles
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000185")]
public static class RTHandles
{
	[Token(Token = "0x40006B1")]
	[FieldOffset(Offset = "0x0")]
	private static RTHandleSystem s_DefaultInstance;

	[Token(Token = "0x17000145")]
	public static int maxWidth
	{
		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x4BE2650", Offset = "0x4BE2650", VA = "0x4BE2650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000146")]
	public static int maxHeight
	{
		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x4BE26D0", Offset = "0x4BE26D0", VA = "0x4BE26D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000147")]
	public static RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x4BE2750", Offset = "0x4BE2750", VA = "0x4BE2750")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x4BE27F0", Offset = "0x4BE27F0", VA = "0x4BE27F0")]
	public static RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x4BE2A50", Offset = "0x4BE2A50", VA = "0x4BE2A50")]
	public static RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x4BE3250", Offset = "0x4BE3250", VA = "0x4BE3250")]
	public static RTHandle Alloc(in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x4BE3530", Offset = "0x4BE3530", VA = "0x4BE3530")]
	public static RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4BE3A00", Offset = "0x4BE3A00", VA = "0x4BE3A00")]
	public static RTHandle Alloc(Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4BE3CA0", Offset = "0x4BE3CA0", VA = "0x4BE3CA0")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4BE3FE0", Offset = "0x4BE3FE0", VA = "0x4BE3FE0")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4BE4320", Offset = "0x4BE4320", VA = "0x4BE4320")]
	public static RTHandle Alloc(Texture tex)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4BE4440", Offset = "0x4BE4440", VA = "0x4BE4440")]
	public static RTHandle Alloc(RenderTexture tex)
	{
		return null;
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4BE4560", Offset = "0x4BE4560", VA = "0x4BE4560")]
	public static RTHandle Alloc(RenderTargetIdentifier tex)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4BE4720", Offset = "0x4BE4720", VA = "0x4BE4720")]
	public static RTHandle Alloc(RenderTargetIdentifier tex, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4BE4970", Offset = "0x4BE4970", VA = "0x4BE4970")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4BE49D0", Offset = "0x4BE49D0", VA = "0x4BE49D0")]
	public static void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4BE4D40", Offset = "0x4BE4D40", VA = "0x4BE4D40")]
	public static void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4BE4DE0", Offset = "0x4BE4DE0", VA = "0x4BE4DE0")]
	public static void SetHardwareDynamicResolutionState(bool hwDynamicResRequested)
	{
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4BE5000", Offset = "0x4BE5000", VA = "0x4BE5000")]
	public static void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x4BE50A0", Offset = "0x4BE50A0", VA = "0x4BE50A0")]
	public static void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x4BE5140", Offset = "0x4BE5140", VA = "0x4BE5140")]
	public static Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}
}
