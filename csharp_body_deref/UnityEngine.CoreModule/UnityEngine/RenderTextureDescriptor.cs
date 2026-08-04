// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderTextureDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x2000108")]
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

	[Token(Token = "0x1700014C")]
	public int width
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x4DE1E80", Offset = "0x4DE1E80", VA = "0x4DE1E80")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x4DE1E90", Offset = "0x4DE1E90", VA = "0x4DE1E90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public int height
	{
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x4DE1EA0", Offset = "0x4DE1EA0", VA = "0x4DE1EA0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x4DE1EB0", Offset = "0x4DE1EB0", VA = "0x4DE1EB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014E")]
	public int msaaSamples
	{
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x4DE1EC0", Offset = "0x4DE1EC0", VA = "0x4DE1EC0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x4DE1ED0", Offset = "0x4DE1ED0", VA = "0x4DE1ED0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public int volumeDepth
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x4DE1EE0", Offset = "0x4DE1EE0", VA = "0x4DE1EE0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x4DE1EF0", Offset = "0x4DE1EF0", VA = "0x4DE1EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public int mipCount
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x4DE1F00", Offset = "0x4DE1F00", VA = "0x4DE1F00")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x4DE1F10", Offset = "0x4DE1F10", VA = "0x4DE1F10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x4DE16E0", Offset = "0x4DE16E0", VA = "0x4DE16E0")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x4DE1F20", Offset = "0x4DE1F20", VA = "0x4DE1F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public GraphicsFormat depthStencilFormat
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x4DE2130", Offset = "0x4DE2130", VA = "0x4DE2130")]
		[CompilerGenerated]
		readonly get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x4DE2140", Offset = "0x4DE2140", VA = "0x4DE2140")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public RenderTextureFormat colorFormat
	{
		[Token(Token = "0x6000712")]
		[Address(RVA = "0x4DE2150", Offset = "0x4DE2150", VA = "0x4DE2150")]
		get
		{
			return default(RenderTextureFormat);
		}
		[Token(Token = "0x6000713")]
		[Address(RVA = "0x4DE21C0", Offset = "0x4DE21C0", VA = "0x4DE21C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public bool sRGB
	{
		[Token(Token = "0x6000714")]
		[Address(RVA = "0x4DE2270", Offset = "0x4DE2270", VA = "0x4DE2270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000715")]
		[Address(RVA = "0x4DE22C0", Offset = "0x4DE22C0", VA = "0x4DE22C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public int depthBufferBits
	{
		[Token(Token = "0x6000716")]
		[Address(RVA = "0x4DE2050", Offset = "0x4DE2050", VA = "0x4DE2050")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x4DE20A0", Offset = "0x4DE20A0", VA = "0x4DE20A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public TextureDimension dimension
	{
		[Token(Token = "0x6000718")]
		[Address(RVA = "0x4DE2430", Offset = "0x4DE2430", VA = "0x4DE2430")]
		[CompilerGenerated]
		readonly get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x6000719")]
		[Address(RVA = "0x4DE2440", Offset = "0x4DE2440", VA = "0x4DE2440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public ShadowSamplingMode shadowSamplingMode
	{
		[Token(Token = "0x600071A")]
		[Address(RVA = "0x4DE2450", Offset = "0x4DE2450", VA = "0x4DE2450")]
		[CompilerGenerated]
		readonly get
		{
			return default(ShadowSamplingMode);
		}
		[Token(Token = "0x600071B")]
		[Address(RVA = "0x4DE2460", Offset = "0x4DE2460", VA = "0x4DE2460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public VRTextureUsage vrUsage
	{
		[Token(Token = "0x600071C")]
		[Address(RVA = "0x4DE2470", Offset = "0x4DE2470", VA = "0x4DE2470")]
		[CompilerGenerated]
		readonly get
		{
			return default(VRTextureUsage);
		}
		[Token(Token = "0x600071D")]
		[Address(RVA = "0x4DE2480", Offset = "0x4DE2480", VA = "0x4DE2480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	public RenderTextureMemoryless memoryless
	{
		[Token(Token = "0x600071E")]
		[Address(RVA = "0x4DE2490", Offset = "0x4DE2490", VA = "0x4DE2490")]
		[CompilerGenerated]
		readonly get
		{
			return default(RenderTextureMemoryless);
		}
		[Token(Token = "0x600071F")]
		[Address(RVA = "0x4DE24A0", Offset = "0x4DE24A0", VA = "0x4DE24A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public bool useMipMap
	{
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x4DE2920", Offset = "0x4DE2920", VA = "0x4DE2920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x4DE2930", Offset = "0x4DE2930", VA = "0x4DE2930")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	public bool autoGenerateMips
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x4DE2950", Offset = "0x4DE2950", VA = "0x4DE2950")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x4DE2960", Offset = "0x4DE2960", VA = "0x4DE2960")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public bool enableRandomWrite
	{
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x4DE2980", Offset = "0x4DE2980", VA = "0x4DE2980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x4DE2990", Offset = "0x4DE2990", VA = "0x4DE2990")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public bool bindMS
	{
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x4DE29B0", Offset = "0x4DE29B0", VA = "0x4DE29B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015E")]
	internal bool createdFromScript
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x4DE17A0", Offset = "0x4DE17A0", VA = "0x4DE17A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public bool useDynamicScale
	{
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x4DE29C0", Offset = "0x4DE29C0", VA = "0x4DE29C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000731")]
		[Address(RVA = "0x4DE1AA0", Offset = "0x4DE1AA0", VA = "0x4DE1AA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x4DE24B0", Offset = "0x4DE24B0", VA = "0x4DE24B0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x4DE2610", Offset = "0x4DE2610", VA = "0x4DE2610")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat)
	{
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x4DE26A0", Offset = "0x4DE26A0", VA = "0x4DE26A0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat, int depthBufferBits)
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x4DE2730", Offset = "0x4DE2730", VA = "0x4DE2730")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, RenderTextureFormat colorFormat, int depthBufferBits, int mipCount)
	{
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x4DE2750", Offset = "0x4DE2750", VA = "0x4DE2750")]
	public RenderTextureDescriptor(int width, int height, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat colorFormat, [DefaultValue("0")] int depthBufferBits, [DefaultValue("Texture.GenerateAllMips")] int mipCount, [DefaultValue("RenderTextureReadWrite.Linear")] RenderTextureReadWrite readWrite)
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x4DE19D0", Offset = "0x4DE19D0", VA = "0x4DE19D0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x4DE28B0", Offset = "0x4DE28B0", VA = "0x4DE28B0")]
	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x4DE2030", Offset = "0x4DE2030", VA = "0x4DE2030")]
	private void SetOrClearRenderTextureCreationFlag(bool value, RenderTextureCreationFlags flag)
	{
	}
}
