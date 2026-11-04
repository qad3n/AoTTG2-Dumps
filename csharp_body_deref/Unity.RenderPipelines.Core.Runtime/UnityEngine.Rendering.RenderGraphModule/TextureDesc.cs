// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TextureDesc
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x20002A1")]
public struct TextureDesc
{
	[Token(Token = "0x4000BB8")]
	[FieldOffset(Offset = "0x0")]
	public TextureSizeMode sizeMode;

	[Token(Token = "0x4000BB9")]
	[FieldOffset(Offset = "0x4")]
	public int width;

	[Token(Token = "0x4000BBA")]
	[FieldOffset(Offset = "0x8")]
	public int height;

	[Token(Token = "0x4000BBB")]
	[FieldOffset(Offset = "0xC")]
	public int slices;

	[Token(Token = "0x4000BBC")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 scale;

	[Token(Token = "0x4000BBD")]
	[FieldOffset(Offset = "0x18")]
	public ScaleFunc func;

	[Token(Token = "0x4000BBE")]
	[FieldOffset(Offset = "0x20")]
	public GraphicsFormat format;

	[Token(Token = "0x4000BBF")]
	[FieldOffset(Offset = "0x24")]
	public FilterMode filterMode;

	[Token(Token = "0x4000BC0")]
	[FieldOffset(Offset = "0x28")]
	public TextureWrapMode wrapMode;

	[Token(Token = "0x4000BC1")]
	[FieldOffset(Offset = "0x2C")]
	public TextureDimension dimension;

	[Token(Token = "0x4000BC2")]
	[FieldOffset(Offset = "0x30")]
	public bool enableRandomWrite;

	[Token(Token = "0x4000BC3")]
	[FieldOffset(Offset = "0x31")]
	public bool useMipMap;

	[Token(Token = "0x4000BC4")]
	[FieldOffset(Offset = "0x32")]
	public bool autoGenerateMips;

	[Token(Token = "0x4000BC5")]
	[FieldOffset(Offset = "0x33")]
	public bool isShadowMap;

	[Token(Token = "0x4000BC6")]
	[FieldOffset(Offset = "0x34")]
	public int anisoLevel;

	[Token(Token = "0x4000BC7")]
	[FieldOffset(Offset = "0x38")]
	public float mipMapBias;

	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0x3C")]
	public MSAASamples msaaSamples;

	[Token(Token = "0x4000BC9")]
	[FieldOffset(Offset = "0x40")]
	public bool bindTextureMS;

	[Token(Token = "0x4000BCA")]
	[FieldOffset(Offset = "0x41")]
	public bool useDynamicScale;

	[Token(Token = "0x4000BCB")]
	[FieldOffset(Offset = "0x42")]
	public bool useDynamicScaleExplicit;

	[Token(Token = "0x4000BCC")]
	[FieldOffset(Offset = "0x44")]
	public RenderTextureMemoryless memoryless;

	[Token(Token = "0x4000BCD")]
	[FieldOffset(Offset = "0x48")]
	public VRTextureUsage vrUsage;

	[Token(Token = "0x4000BCE")]
	[FieldOffset(Offset = "0x4C")]
	public bool enableShadingRate;

	[Token(Token = "0x4000BCF")]
	[FieldOffset(Offset = "0x50")]
	public string name;

	[Token(Token = "0x4000BD0")]
	[FieldOffset(Offset = "0x58")]
	public FastMemoryDesc fastMemoryDesc;

	[Token(Token = "0x4000BD1")]
	[FieldOffset(Offset = "0x64")]
	public bool fallBackToBlackTexture;

	[Token(Token = "0x4000BD2")]
	[FieldOffset(Offset = "0x65")]
	public bool disableFallBackToImportedTexture;

	[Token(Token = "0x4000BD3")]
	[FieldOffset(Offset = "0x66")]
	public bool clearBuffer;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x68")]
	public Color clearColor;

	[Token(Token = "0x4000BD5")]
	[FieldOffset(Offset = "0x78")]
	public bool discardBuffer;

	[Token(Token = "0x1700025A")]
	public DepthBits depthBufferBits
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x2BA6C20", Offset = "0x2BA5220", VA = "0x182BA6C20")]
		get
		{
			return default(DepthBits);
		}
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0x2BA6C70", Offset = "0x2BA5270", VA = "0x182BA6C70")]
		set
		{
		}
	}

	[Token(Token = "0x1700025B")]
	public GraphicsFormat colorFormat
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x2BA6BB0", Offset = "0x2BA51B0", VA = "0x182BA6BB0")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		set
		{
		}
	}

	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x2BA66F0", Offset = "0x2BA4CF0", VA = "0x182BA66F0")]
	private void InitDefaultValues(bool dynamicResolution, bool xrReady)
	{
	}

	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x2BA68B0", Offset = "0x2BA4EB0", VA = "0x182BA68B0")]
	public TextureDesc(int width, int height, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x2BA6980", Offset = "0x2BA4F80", VA = "0x182BA6980")]
	public TextureDesc(Vector2 scale, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x2BA6900", Offset = "0x2BA4F00", VA = "0x182BA6900")]
	public TextureDesc(ScaleFunc func, bool dynamicResolution = false, bool xrReady = false)
	{
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x2BA69E0", Offset = "0x2BA4FE0", VA = "0x182BA69E0")]
	public TextureDesc(TextureDesc input)
	{
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x2BA6A30", Offset = "0x2BA5030", VA = "0x182BA6A30")]
	public TextureDesc(RenderTextureDescriptor input)
	{
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x2BA67C0", Offset = "0x2BA4DC0", VA = "0x182BA67C0")]
	public TextureDesc(RenderTexture input)
	{
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x2BA6550", Offset = "0x2BA4B50", VA = "0x182BA6550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x2BA6450", Offset = "0x2BA4A50", VA = "0x182BA6450")]
	public Vector2Int CalculateFinalDimensions()
	{
		return default(Vector2Int);
	}
}
