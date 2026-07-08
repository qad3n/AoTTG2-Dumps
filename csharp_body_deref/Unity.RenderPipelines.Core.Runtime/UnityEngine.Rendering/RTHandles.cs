using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000189")]
public static class RTHandles
{
	[Token(Token = "0x40006C0")]
	[FieldOffset(Offset = "0x0")]
	private static RTHandleSystem s_DefaultInstance;

	[Token(Token = "0x17000146")]
	public static int maxWidth
	{
		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x48C05D0", Offset = "0x48C05D0", VA = "0x48C05D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000147")]
	public static int maxHeight
	{
		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x48C0650", Offset = "0x48C0650", VA = "0x48C0650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000148")]
	public static RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x48C06D0", Offset = "0x48C06D0", VA = "0x48C06D0")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x48C0770", Offset = "0x48C0770", VA = "0x48C0770")]
	public static RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x48C0900", Offset = "0x48C0900", VA = "0x48C0900")]
	public static RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x48C0A90", Offset = "0x48C0A90", VA = "0x48C0A90")]
	public static RTHandle Alloc(in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x48C0D70", Offset = "0x48C0D70", VA = "0x48C0D70")]
	public static RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x48C0EF0", Offset = "0x48C0EF0", VA = "0x48C0EF0")]
	public static RTHandle Alloc(Vector2 scaleFactor, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x48C1190", Offset = "0x48C1190", VA = "0x48C1190")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x48C1360", Offset = "0x48C1360", VA = "0x48C1360")]
	public static RTHandle Alloc(ScaleFunc scaleFunc, in RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x48C16A0", Offset = "0x48C16A0", VA = "0x48C16A0")]
	public static RTHandle Alloc(Texture tex)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x48C1730", Offset = "0x48C1730", VA = "0x48C1730")]
	public static RTHandle Alloc(RenderTexture tex)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x48C17C0", Offset = "0x48C17C0", VA = "0x48C17C0")]
	public static RTHandle Alloc(RenderTargetIdentifier tex)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x48C1860", Offset = "0x48C1860", VA = "0x48C1860")]
	public static RTHandle Alloc(RenderTargetIdentifier tex, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x48C19D0", Offset = "0x48C19D0", VA = "0x48C19D0")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x48C1A30", Offset = "0x48C1A30", VA = "0x48C1A30")]
	public static void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x48C1AC0", Offset = "0x48C1AC0", VA = "0x48C1AC0")]
	public static void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x48C1B50", Offset = "0x48C1B50", VA = "0x48C1B50")]
	public static void SetHardwareDynamicResolutionState(bool hwDynamicResRequested)
	{
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x48C1BE0", Offset = "0x48C1BE0", VA = "0x48C1BE0")]
	public static void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x48C1C70", Offset = "0x48C1C70", VA = "0x48C1C70")]
	public static void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x48C1D00", Offset = "0x48C1D00", VA = "0x48C1D00")]
	public static Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}
}
