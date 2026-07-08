using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005A")]
public struct TextureDesc
{
	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x0")]
	public TextureSizeMode sizeMode;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x4")]
	public int width;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x8")]
	public int height;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0xC")]
	public int slices;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 scale;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x18")]
	public ScaleFunc func;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x20")]
	public DepthBits depthBufferBits;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x24")]
	public GraphicsFormat colorFormat;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x28")]
	public FilterMode filterMode;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x2C")]
	public TextureWrapMode wrapMode;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x30")]
	public TextureDimension dimension;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x34")]
	public bool enableRandomWrite;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x35")]
	public bool useMipMap;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x36")]
	public bool autoGenerateMips;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x37")]
	public bool isShadowMap;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x38")]
	public int anisoLevel;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x3C")]
	public float mipMapBias;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x40")]
	public MSAASamples msaaSamples;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x44")]
	public bool bindTextureMS;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x45")]
	public bool useDynamicScale;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x48")]
	public RenderTextureMemoryless memoryless;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x4C")]
	public VRTextureUsage vrUsage;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x50")]
	public string name;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x58")]
	public FastMemoryDesc fastMemoryDesc;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x64")]
	public bool fallBackToBlackTexture;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x65")]
	public bool disableFallBackToImportedTexture;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x66")]
	public bool clearBuffer;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x68")]
	public Color clearColor;

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x486DFA0", Offset = "0x486DFA0", VA = "0x486DFA0")]
	private void InitDefaultValues(bool dynamicResolution, bool xrReady)
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x486E080", Offset = "0x486E080", VA = "0x486E080")]
	public TextureDesc(int width, int height, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x486E0C0", Offset = "0x486E0C0", VA = "0x486E0C0")]
	public TextureDesc(Vector2 scale, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x486E110", Offset = "0x486E110", VA = "0x486E110")]
	public TextureDesc(ScaleFunc func, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x486E180", Offset = "0x486E180", VA = "0x486E180")]
	public TextureDesc(TextureDesc input)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x486E1E0", Offset = "0x486E1E0", VA = "0x486E1E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
