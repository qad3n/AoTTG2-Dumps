// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderTextureDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x200012D")]
public struct RenderTextureDescriptor
{
	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x14")]
	private GraphicsFormat _graphicsFormat;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x2C")]
	private RenderTextureCreationFlags _flags;

	[Token(Token = "0x170001A5")]
	public int width
	{
		[Token(Token = "0x6000993")]
		[Address(RVA = "0x68F8880", Offset = "0x68F7880", VA = "0x68F8880")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000994")]
		[Address(RVA = "0x68F8890", Offset = "0x68F7890", VA = "0x68F8890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	public int height
	{
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x68F88A0", Offset = "0x68F78A0", VA = "0x68F88A0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x68F88B0", Offset = "0x68F78B0", VA = "0x68F88B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public int msaaSamples
	{
		[Token(Token = "0x6000997")]
		[Address(RVA = "0x68F88C0", Offset = "0x68F78C0", VA = "0x68F88C0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000998")]
		[Address(RVA = "0x68F88D0", Offset = "0x68F78D0", VA = "0x68F88D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public int volumeDepth
	{
		[Token(Token = "0x6000999")]
		[Address(RVA = "0x68F88E0", Offset = "0x68F78E0", VA = "0x68F88E0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600099A")]
		[Address(RVA = "0x68F88F0", Offset = "0x68F78F0", VA = "0x68F88F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public int mipCount
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x68F8900", Offset = "0x68F7900", VA = "0x68F8900")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x68F8910", Offset = "0x68F7910", VA = "0x68F8910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x600099D")]
		[Address(RVA = "0x68F8750", Offset = "0x68F7750", VA = "0x68F8750")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x600099E")]
		[Address(RVA = "0x68F8920", Offset = "0x68F7920", VA = "0x68F8920")]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	public GraphicsFormat stencilFormat
	{
		[Token(Token = "0x600099F")]
		[Address(RVA = "0x68F89A0", Offset = "0x68F79A0", VA = "0x68F89A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	public GraphicsFormat depthStencilFormat
	{
		[Token(Token = "0x60009A0")]
		[Address(RVA = "0x68F89B0", Offset = "0x68F79B0", VA = "0x68F89B0")]
		[CompilerGenerated]
		readonly get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x60009A1")]
		[Address(RVA = "0x68F89C0", Offset = "0x68F79C0", VA = "0x68F89C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	public RenderTextureFormat colorFormat
	{
		[Token(Token = "0x60009A2")]
		[Address(RVA = "0x68F8760", Offset = "0x68F7760", VA = "0x68F8760")]
		get
		{
			return default(RenderTextureFormat);
		}
		[Token(Token = "0x60009A3")]
		[Address(RVA = "0x68F89D0", Offset = "0x68F79D0", VA = "0x68F89D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	public bool sRGB
	{
		[Token(Token = "0x60009A4")]
		[Address(RVA = "0x68F8B30", Offset = "0x68F7B30", VA = "0x68F8B30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0x68F8BD0", Offset = "0x68F7BD0", VA = "0x68F8BD0")]
		set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	public int depthBufferBits
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x68F8B80", Offset = "0x68F7B80", VA = "0x68F8B80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x68F8CE0", Offset = "0x68F7CE0", VA = "0x68F8CE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public TextureDimension dimension
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x68F8D00", Offset = "0x68F7D00", VA = "0x68F8D00")]
		[CompilerGenerated]
		readonly get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x68F8D10", Offset = "0x68F7D10", VA = "0x68F8D10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public ShadowSamplingMode shadowSamplingMode
	{
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x68F8D20", Offset = "0x68F7D20", VA = "0x68F8D20")]
		[CompilerGenerated]
		readonly get
		{
			return default(ShadowSamplingMode);
		}
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x68F8D30", Offset = "0x68F7D30", VA = "0x68F8D30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	public VRTextureUsage vrUsage
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x68F8D40", Offset = "0x68F7D40", VA = "0x68F8D40")]
		[CompilerGenerated]
		readonly get
		{
			return default(VRTextureUsage);
		}
		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x68F8D50", Offset = "0x68F7D50", VA = "0x68F8D50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	public RenderTextureMemoryless memoryless
	{
		[Token(Token = "0x60009AE")]
		[Address(RVA = "0x68F8D60", Offset = "0x68F7D60", VA = "0x68F8D60")]
		[CompilerGenerated]
		readonly get
		{
			return default(RenderTextureMemoryless);
		}
		[Token(Token = "0x60009AF")]
		[Address(RVA = "0x68F8D70", Offset = "0x68F7D70", VA = "0x68F8D70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B4")]
	public bool useMipMap
	{
		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x68F94A0", Offset = "0x68F84A0", VA = "0x68F94A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x68F94B0", Offset = "0x68F84B0", VA = "0x68F94B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	public bool autoGenerateMips
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x68F94C0", Offset = "0x68F84C0", VA = "0x68F94C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x68F94D0", Offset = "0x68F84D0", VA = "0x68F94D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	public bool enableRandomWrite
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x68F94E0", Offset = "0x68F84E0", VA = "0x68F94E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x68F94F0", Offset = "0x68F84F0", VA = "0x68F94F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	public bool bindMS
	{
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x68F9500", Offset = "0x68F8500", VA = "0x68F9500")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x68F9510", Offset = "0x68F8510", VA = "0x68F9510")]
		set
		{
		}
	}

	[Token(Token = "0x170001B8")]
	internal bool createdFromScript
	{
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x68F8870", Offset = "0x68F7870", VA = "0x68F8870")]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	public bool useDynamicScale
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x68F9530", Offset = "0x68F8530", VA = "0x68F9530")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x68F9540", Offset = "0x68F8540", VA = "0x68F9540")]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	public bool useDynamicScaleExplicit
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x68F9560", Offset = "0x68F8560", VA = "0x68F9560")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x68F9570", Offset = "0x68F8570", VA = "0x68F9570")]
		set
		{
		}
	}

	[Token(Token = "0x170001BB")]
	public bool enableShadingRate
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x68F9590", Offset = "0x68F8590", VA = "0x68F9590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x68F95A0", Offset = "0x68F85A0", VA = "0x68F95A0")]
		set
		{
		}
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x68F8D80", Offset = "0x68F7D80", VA = "0x68F8D80")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height)
	{
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x68F8EE0", Offset = "0x68F7EE0", VA = "0x68F8EE0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x68F8F70", Offset = "0x68F7F70", VA = "0x68F8F70")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat, int depthBufferBits)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x68F9020", Offset = "0x68F8020", VA = "0x68F9020")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, int depthBufferBits)
	{
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x68F9000", Offset = "0x68F8000", VA = "0x68F9000")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat, int depthBufferBits, int mipCount)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x68F91B0", Offset = "0x68F81B0", VA = "0x68F91B0")]
	public RenderTextureDescriptor(int width, int height, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat colorFormat, [DefaultValue("0")] int depthBufferBits, [DefaultValue("Texture.GenerateAllMips")] int mipCount, [DefaultValue("RenderTextureReadWrite.Linear")] RenderTextureReadWrite readWrite)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x68F90A0", Offset = "0x68F80A0", VA = "0x68F90A0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, int depthBufferBits, int mipCount)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x68F9380", Offset = "0x68F8380", VA = "0x68F9380")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x68F92C0", Offset = "0x68F82C0", VA = "0x68F92C0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x68F8980", Offset = "0x68F7980", VA = "0x68F8980")]
	private void SetOrClearRenderTextureCreationFlag(bool value, RenderTextureCreationFlags flag)
	{
	}
}
