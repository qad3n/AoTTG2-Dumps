using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x2000105")]
public struct RenderTextureDescriptor
{
	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x14")]
	private GraphicsFormat _graphicsFormat;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private GraphicsFormat _003CstencilFormat_003Ek__BackingField;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x2C")]
	private RenderTextureCreationFlags _flags;

	[Token(Token = "0x1700014B")]
	public int width
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x4ABA550", Offset = "0x4ABA550", VA = "0x4ABA550")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x4ABA560", Offset = "0x4ABA560", VA = "0x4ABA560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public int height
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x4ABA570", Offset = "0x4ABA570", VA = "0x4ABA570")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x4ABA580", Offset = "0x4ABA580", VA = "0x4ABA580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public int msaaSamples
	{
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x4ABA590", Offset = "0x4ABA590", VA = "0x4ABA590")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x4ABA5A0", Offset = "0x4ABA5A0", VA = "0x4ABA5A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014E")]
	public int volumeDepth
	{
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x4ABA5B0", Offset = "0x4ABA5B0", VA = "0x4ABA5B0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x4ABA5C0", Offset = "0x4ABA5C0", VA = "0x4ABA5C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public int mipCount
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x4ABA5D0", Offset = "0x4ABA5D0", VA = "0x4ABA5D0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x4ABA5E0", Offset = "0x4ABA5E0", VA = "0x4ABA5E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x4AB9DB0", Offset = "0x4AB9DB0", VA = "0x4AB9DB0")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x4ABA5F0", Offset = "0x4ABA5F0", VA = "0x4ABA5F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public GraphicsFormat depthStencilFormat
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x4ABA800", Offset = "0x4ABA800", VA = "0x4ABA800")]
		[CompilerGenerated]
		readonly get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x4ABA810", Offset = "0x4ABA810", VA = "0x4ABA810")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public RenderTextureFormat colorFormat
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x4ABA820", Offset = "0x4ABA820", VA = "0x4ABA820")]
		get
		{
			return default(RenderTextureFormat);
		}
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x4ABA890", Offset = "0x4ABA890", VA = "0x4ABA890")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public bool sRGB
	{
		[Token(Token = "0x6000712")]
		[Address(RVA = "0x4ABA940", Offset = "0x4ABA940", VA = "0x4ABA940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000713")]
		[Address(RVA = "0x4ABA990", Offset = "0x4ABA990", VA = "0x4ABA990")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public int depthBufferBits
	{
		[Token(Token = "0x6000714")]
		[Address(RVA = "0x4ABA720", Offset = "0x4ABA720", VA = "0x4ABA720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000715")]
		[Address(RVA = "0x4ABA770", Offset = "0x4ABA770", VA = "0x4ABA770")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public TextureDimension dimension
	{
		[Token(Token = "0x6000716")]
		[Address(RVA = "0x4ABAB00", Offset = "0x4ABAB00", VA = "0x4ABAB00")]
		[CompilerGenerated]
		readonly get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x4ABAB10", Offset = "0x4ABAB10", VA = "0x4ABAB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public ShadowSamplingMode shadowSamplingMode
	{
		[Token(Token = "0x6000718")]
		[Address(RVA = "0x4ABAB20", Offset = "0x4ABAB20", VA = "0x4ABAB20")]
		[CompilerGenerated]
		readonly get
		{
			return default(ShadowSamplingMode);
		}
		[Token(Token = "0x6000719")]
		[Address(RVA = "0x4ABAB30", Offset = "0x4ABAB30", VA = "0x4ABAB30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public VRTextureUsage vrUsage
	{
		[Token(Token = "0x600071A")]
		[Address(RVA = "0x4ABAB40", Offset = "0x4ABAB40", VA = "0x4ABAB40")]
		[CompilerGenerated]
		readonly get
		{
			return default(VRTextureUsage);
		}
		[Token(Token = "0x600071B")]
		[Address(RVA = "0x4ABAB50", Offset = "0x4ABAB50", VA = "0x4ABAB50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public RenderTextureMemoryless memoryless
	{
		[Token(Token = "0x600071C")]
		[Address(RVA = "0x4ABAB60", Offset = "0x4ABAB60", VA = "0x4ABAB60")]
		[CompilerGenerated]
		readonly get
		{
			return default(RenderTextureMemoryless);
		}
		[Token(Token = "0x600071D")]
		[Address(RVA = "0x4ABAB70", Offset = "0x4ABAB70", VA = "0x4ABAB70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	public bool useMipMap
	{
		[Token(Token = "0x6000726")]
		[Address(RVA = "0x4ABAFF0", Offset = "0x4ABAFF0", VA = "0x4ABAFF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x4ABB000", Offset = "0x4ABB000", VA = "0x4ABB000")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public bool autoGenerateMips
	{
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x4ABB020", Offset = "0x4ABB020", VA = "0x4ABB020")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x4ABB030", Offset = "0x4ABB030", VA = "0x4ABB030")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	public bool enableRandomWrite
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x4ABB050", Offset = "0x4ABB050", VA = "0x4ABB050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x4ABB060", Offset = "0x4ABB060", VA = "0x4ABB060")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public bool bindMS
	{
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x4ABB080", Offset = "0x4ABB080", VA = "0x4ABB080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015D")]
	internal bool createdFromScript
	{
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x4AB9E70", Offset = "0x4AB9E70", VA = "0x4AB9E70")]
		set
		{
		}
	}

	[Token(Token = "0x1700015E")]
	public bool useDynamicScale
	{
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x4ABB090", Offset = "0x4ABB090", VA = "0x4ABB090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x4ABA170", Offset = "0x4ABA170", VA = "0x4ABA170")]
		set
		{
		}
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x4ABAB80", Offset = "0x4ABAB80", VA = "0x4ABAB80")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height)
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x4ABACE0", Offset = "0x4ABACE0", VA = "0x4ABACE0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat)
	{
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x4ABAD70", Offset = "0x4ABAD70", VA = "0x4ABAD70")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat, int depthBufferBits)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x4ABAE00", Offset = "0x4ABAE00", VA = "0x4ABAE00")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat, int depthBufferBits, int mipCount)
	{
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x4ABAE20", Offset = "0x4ABAE20", VA = "0x4ABAE20")]
	public RenderTextureDescriptor(int width, int height, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat colorFormat, [DefaultValue("0")] int depthBufferBits, [DefaultValue("Texture.GenerateAllMips")] int mipCount, [DefaultValue("RenderTextureReadWrite.Linear")] RenderTextureReadWrite readWrite)
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x4ABA0A0", Offset = "0x4ABA0A0", VA = "0x4ABA0A0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x4ABAF80", Offset = "0x4ABAF80", VA = "0x4ABAF80")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x4ABA700", Offset = "0x4ABA700", VA = "0x4ABA700")]
	private void SetOrClearRenderTextureCreationFlag(bool value, RenderTextureCreationFlags flag)
	{
	}
}
