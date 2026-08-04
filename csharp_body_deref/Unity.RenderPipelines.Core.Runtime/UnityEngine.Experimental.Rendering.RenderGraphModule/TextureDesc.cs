// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005E")]
public struct TextureDesc
{
	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x0")]
	public TextureSizeMode sizeMode;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x4")]
	public int width;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x8")]
	public int height;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0xC")]
	public int slices;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 scale;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x18")]
	public ScaleFunc func;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x20")]
	public DepthBits depthBufferBits;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x24")]
	public GraphicsFormat colorFormat;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x28")]
	public FilterMode filterMode;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x2C")]
	public TextureWrapMode wrapMode;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x30")]
	public TextureDimension dimension;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x34")]
	public bool enableRandomWrite;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x35")]
	public bool useMipMap;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x36")]
	public bool autoGenerateMips;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x37")]
	public bool isShadowMap;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x38")]
	public int anisoLevel;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x3C")]
	public float mipMapBias;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x40")]
	public MSAASamples msaaSamples;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x44")]
	public bool bindTextureMS;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x45")]
	public bool useDynamicScale;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x48")]
	public RenderTextureMemoryless memoryless;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x4C")]
	public VRTextureUsage vrUsage;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x50")]
	public string name;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x58")]
	public FastMemoryDesc fastMemoryDesc;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x64")]
	public bool fallBackToBlackTexture;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x65")]
	public bool disableFallBackToImportedTexture;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x66")]
	public bool clearBuffer;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x68")]
	public Color clearColor;

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4B93250", Offset = "0x4B93250", VA = "0x4B93250")]
	private void InitDefaultValues(bool dynamicResolution, bool xrReady)
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x4B93330", Offset = "0x4B93330", VA = "0x4B93330")]
	public TextureDesc(int width, int height, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4B93370", Offset = "0x4B93370", VA = "0x4B93370")]
	public TextureDesc(Vector2 scale, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4B933C0", Offset = "0x4B933C0", VA = "0x4B933C0")]
	public TextureDesc(ScaleFunc func, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4B93430", Offset = "0x4B93430", VA = "0x4B93430")]
	public TextureDesc(TextureDesc input)
	{
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4B93490", Offset = "0x4B93490", VA = "0x4B93490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
