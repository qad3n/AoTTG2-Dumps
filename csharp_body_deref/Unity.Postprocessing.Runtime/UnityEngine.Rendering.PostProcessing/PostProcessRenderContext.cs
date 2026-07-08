using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000073")]
public sealed class PostProcessRenderContext
{
	[Token(Token = "0x2000074")]
	public enum StereoRenderingMode
	{
		[Token(Token = "0x40001F5")]
		MultiPass,
		[Token(Token = "0x40001F6")]
		SinglePass,
		[Token(Token = "0x40001F7")]
		SinglePassInstanced,
		[Token(Token = "0x40001F8")]
		SinglePassMultiview
	}

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x10")]
	private Camera m_Camera;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0xC8")]
	internal PropertySheet uberSheet;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0xD0")]
	internal Texture autoExposureTexture;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0xD8")]
	internal LogHistogram logHistogram;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0xE0")]
	internal Texture logLut;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0xE8")]
	internal AutoExposure autoExposure;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0xF0")]
	internal int bloomBufferNameID;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0xF4")]
	internal bool physicalCamera;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0xF8")]
	private RenderTextureDescriptor m_sourceDescriptor;

	[Token(Token = "0x1700000F")]
	public Camera camera
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x48392B0", Offset = "0x48392B0", VA = "0x48392B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x482E4E0", Offset = "0x482E4E0", VA = "0x482E4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public CommandBuffer command
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x48392C0", Offset = "0x48392C0", VA = "0x48392C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x48392D0", Offset = "0x48392D0", VA = "0x48392D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public RenderTargetIdentifier source
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x48392E0", Offset = "0x48392E0", VA = "0x48392E0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4839300", Offset = "0x4839300", VA = "0x4839300")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public RenderTargetIdentifier destination
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x4839320", Offset = "0x4839320", VA = "0x4839320")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4839340", Offset = "0x4839340", VA = "0x4839340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public RenderTextureFormat sourceFormat
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4839360", Offset = "0x4839360", VA = "0x4839360")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureFormat);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4839370", Offset = "0x4839370", VA = "0x4839370")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool flip
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4839380", Offset = "0x4839380", VA = "0x4839380")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x4839390", Offset = "0x4839390", VA = "0x4839390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public PostProcessResources resources
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x48393A0", Offset = "0x48393A0", VA = "0x48393A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x48393B0", Offset = "0x48393B0", VA = "0x48393B0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public PropertySheetFactory propertySheets
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x48393C0", Offset = "0x48393C0", VA = "0x48393C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x48393D0", Offset = "0x48393D0", VA = "0x48393D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Dictionary<string, object> userData
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x48393E0", Offset = "0x48393E0", VA = "0x48393E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x48393F0", Offset = "0x48393F0", VA = "0x48393F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public PostProcessDebugLayer debugLayer
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x4839410", Offset = "0x4839410", VA = "0x4839410")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x4839420", Offset = "0x4839420", VA = "0x4839420")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public int width
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x4839440", Offset = "0x4839440", VA = "0x4839440")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x4839450", Offset = "0x4839450", VA = "0x4839450")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public int height
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x4839460", Offset = "0x4839460", VA = "0x4839460")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x4839470", Offset = "0x4839470", VA = "0x4839470")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool stereoActive
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x4839480", Offset = "0x4839480", VA = "0x4839480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x4839490", Offset = "0x4839490", VA = "0x4839490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public int xrActiveEye
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x48394A0", Offset = "0x48394A0", VA = "0x48394A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x48394B0", Offset = "0x48394B0", VA = "0x48394B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public int numberOfEyes
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x48394C0", Offset = "0x48394C0", VA = "0x48394C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x48394D0", Offset = "0x48394D0", VA = "0x48394D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public StereoRenderingMode stereoRenderingMode
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x48394E0", Offset = "0x48394E0", VA = "0x48394E0")]
		[CompilerGenerated]
		get
		{
			return default(StereoRenderingMode);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x48394F0", Offset = "0x48394F0", VA = "0x48394F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int screenWidth
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x4839500", Offset = "0x4839500", VA = "0x4839500")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x4839510", Offset = "0x4839510", VA = "0x4839510")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public int screenHeight
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x4839520", Offset = "0x4839520", VA = "0x4839520")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x4839530", Offset = "0x4839530", VA = "0x4839530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public bool isSceneView
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x4839540", Offset = "0x4839540", VA = "0x4839540")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x4839550", Offset = "0x4839550", VA = "0x4839550")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public PostProcessLayer.Antialiasing antialiasing
	{
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x4839560", Offset = "0x4839560", VA = "0x4839560")]
		[CompilerGenerated]
		get
		{
			return default(PostProcessLayer.Antialiasing);
		}
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x4839570", Offset = "0x4839570", VA = "0x4839570")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public TemporalAntialiasing temporalAntialiasing
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x4839580", Offset = "0x4839580", VA = "0x4839580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4839590", Offset = "0x4839590", VA = "0x4839590")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x482E220", Offset = "0x482E220", VA = "0x482E220")]
	public void Reset()
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x482C8B0", Offset = "0x482C8B0", VA = "0x482C8B0")]
	public bool IsTemporalAntialiasingActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x48395B0", Offset = "0x48395B0", VA = "0x48395B0")]
	public bool IsDebugOverlayEnabled(DebugOverlay overlay)
	{
		return default(bool);
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x48395D0", Offset = "0x48395D0", VA = "0x48395D0")]
	public void PushDebugOverlay(CommandBuffer cmd, RenderTargetIdentifier source, PropertySheet sheet, int pass)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4839630", Offset = "0x4839630", VA = "0x4839630")]
	internal RenderTextureDescriptor GetDescriptor(int depthBufferBits = 0, RenderTextureFormat colorFormat = RenderTextureFormat.Default, RenderTextureReadWrite readWrite = RenderTextureReadWrite.Default)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x482E080", Offset = "0x482E080", VA = "0x482E080")]
	public void GetScreenSpaceTemporaryRT(CommandBuffer cmd, int nameID, int depthBufferBits = 0, RenderTextureFormat colorFormat = RenderTextureFormat.Default, RenderTextureReadWrite readWrite = RenderTextureReadWrite.Default, FilterMode filter = FilterMode.Bilinear, int widthOverride = 0, int heightOverride = 0)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4839820", Offset = "0x4839820", VA = "0x4839820")]
	public RenderTexture GetScreenSpaceTemporaryRT(int depthBufferBits = 0, RenderTextureFormat colorFormat = RenderTextureFormat.Default, RenderTextureReadWrite readWrite = RenderTextureReadWrite.Default, int widthOverride = 0, int heightOverride = 0)
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x482EB10", Offset = "0x482EB10", VA = "0x482EB10")]
	public void UpdateSinglePassStereoState(bool isTAAEnabled, bool isAOEnabled, bool isSSREnabled)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x482B000", Offset = "0x482B000", VA = "0x482B000")]
	public PostProcessRenderContext()
	{
	}
}
