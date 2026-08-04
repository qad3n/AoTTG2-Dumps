// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B5E3A0", Offset = "0x4B5E3A0", VA = "0x4B5E3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x4B535D0", Offset = "0x4B535D0", VA = "0x4B535D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public CommandBuffer command
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x4B5E3B0", Offset = "0x4B5E3B0", VA = "0x4B5E3B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x4B5E3C0", Offset = "0x4B5E3C0", VA = "0x4B5E3C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public RenderTargetIdentifier source
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4B5E3D0", Offset = "0x4B5E3D0", VA = "0x4B5E3D0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4B5E3F0", Offset = "0x4B5E3F0", VA = "0x4B5E3F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public RenderTargetIdentifier destination
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x4B5E410", Offset = "0x4B5E410", VA = "0x4B5E410")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4B5E430", Offset = "0x4B5E430", VA = "0x4B5E430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public RenderTextureFormat sourceFormat
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4B5E450", Offset = "0x4B5E450", VA = "0x4B5E450")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureFormat);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4B5E460", Offset = "0x4B5E460", VA = "0x4B5E460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool flip
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4B5E470", Offset = "0x4B5E470", VA = "0x4B5E470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x4B5E480", Offset = "0x4B5E480", VA = "0x4B5E480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public PostProcessResources resources
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x4B5E490", Offset = "0x4B5E490", VA = "0x4B5E490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x4B5E4A0", Offset = "0x4B5E4A0", VA = "0x4B5E4A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public PropertySheetFactory propertySheets
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x4B5E4B0", Offset = "0x4B5E4B0", VA = "0x4B5E4B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x4B5E4C0", Offset = "0x4B5E4C0", VA = "0x4B5E4C0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Dictionary<string, object> userData
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x4B5E4D0", Offset = "0x4B5E4D0", VA = "0x4B5E4D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x4B5E4E0", Offset = "0x4B5E4E0", VA = "0x4B5E4E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public PostProcessDebugLayer debugLayer
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x4B5E500", Offset = "0x4B5E500", VA = "0x4B5E500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x4B5E510", Offset = "0x4B5E510", VA = "0x4B5E510")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public int width
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x4B5E530", Offset = "0x4B5E530", VA = "0x4B5E530")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x4B5E540", Offset = "0x4B5E540", VA = "0x4B5E540")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public int height
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x4B5E550", Offset = "0x4B5E550", VA = "0x4B5E550")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x4B5E560", Offset = "0x4B5E560", VA = "0x4B5E560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool stereoActive
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x4B5E570", Offset = "0x4B5E570", VA = "0x4B5E570")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x4B5E580", Offset = "0x4B5E580", VA = "0x4B5E580")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public int xrActiveEye
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x4B5E590", Offset = "0x4B5E590", VA = "0x4B5E590")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x4B5E5A0", Offset = "0x4B5E5A0", VA = "0x4B5E5A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public int numberOfEyes
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x4B5E5B0", Offset = "0x4B5E5B0", VA = "0x4B5E5B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x4B5E5C0", Offset = "0x4B5E5C0", VA = "0x4B5E5C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public StereoRenderingMode stereoRenderingMode
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x4B5E5D0", Offset = "0x4B5E5D0", VA = "0x4B5E5D0")]
		[CompilerGenerated]
		get
		{
			return default(StereoRenderingMode);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x4B5E5E0", Offset = "0x4B5E5E0", VA = "0x4B5E5E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int screenWidth
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x4B5E5F0", Offset = "0x4B5E5F0", VA = "0x4B5E5F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x4B5E600", Offset = "0x4B5E600", VA = "0x4B5E600")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public int screenHeight
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x4B5E610", Offset = "0x4B5E610", VA = "0x4B5E610")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x4B5E620", Offset = "0x4B5E620", VA = "0x4B5E620")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public bool isSceneView
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x4B5E630", Offset = "0x4B5E630", VA = "0x4B5E630")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x4B5E640", Offset = "0x4B5E640", VA = "0x4B5E640")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public PostProcessLayer.Antialiasing antialiasing
	{
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x4B5E650", Offset = "0x4B5E650", VA = "0x4B5E650")]
		[CompilerGenerated]
		get
		{
			return default(PostProcessLayer.Antialiasing);
		}
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x4B5E660", Offset = "0x4B5E660", VA = "0x4B5E660")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public TemporalAntialiasing temporalAntialiasing
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x4B5E670", Offset = "0x4B5E670", VA = "0x4B5E670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4B5E680", Offset = "0x4B5E680", VA = "0x4B5E680")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4B53310", Offset = "0x4B53310", VA = "0x4B53310")]
	public void Reset()
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4B519A0", Offset = "0x4B519A0", VA = "0x4B519A0")]
	public bool IsTemporalAntialiasingActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4B5E6A0", Offset = "0x4B5E6A0", VA = "0x4B5E6A0")]
	public bool IsDebugOverlayEnabled(DebugOverlay overlay)
	{
		return default(bool);
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4B5E6C0", Offset = "0x4B5E6C0", VA = "0x4B5E6C0")]
	public void PushDebugOverlay(CommandBuffer cmd, RenderTargetIdentifier source, PropertySheet sheet, int pass)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4B5E720", Offset = "0x4B5E720", VA = "0x4B5E720")]
	internal RenderTextureDescriptor GetDescriptor(int depthBufferBits = 0, RenderTextureFormat colorFormat = RenderTextureFormat.Default, RenderTextureReadWrite readWrite = RenderTextureReadWrite.Default)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4B53170", Offset = "0x4B53170", VA = "0x4B53170")]
	public void GetScreenSpaceTemporaryRT(CommandBuffer cmd, int nameID, int depthBufferBits = 0, RenderTextureFormat colorFormat = RenderTextureFormat.Default, RenderTextureReadWrite readWrite = RenderTextureReadWrite.Default, FilterMode filter = FilterMode.Bilinear, int widthOverride = 0, int heightOverride = 0)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4B5E910", Offset = "0x4B5E910", VA = "0x4B5E910")]
	public RenderTexture GetScreenSpaceTemporaryRT(int depthBufferBits = 0, RenderTextureFormat colorFormat = RenderTextureFormat.Default, RenderTextureReadWrite readWrite = RenderTextureReadWrite.Default, int widthOverride = 0, int heightOverride = 0)
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4B53C00", Offset = "0x4B53C00", VA = "0x4B53C00")]
	public void UpdateSinglePassStereoState(bool isTAAEnabled, bool isAOEnabled, bool isSSREnabled)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4B500F0", Offset = "0x4B500F0", VA = "0x4B500F0")]
	public PostProcessRenderContext()
	{
	}
}
