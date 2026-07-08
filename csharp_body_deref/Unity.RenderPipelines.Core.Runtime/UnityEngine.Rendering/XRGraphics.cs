using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000099")]
public class XRGraphics
{
	[Token(Token = "0x200009A")]
	public enum StereoRenderingMode
	{
		[Token(Token = "0x4000233")]
		MultiPass,
		[Token(Token = "0x4000234")]
		SinglePass,
		[Token(Token = "0x4000235")]
		SinglePassInstanced,
		[Token(Token = "0x4000236")]
		SinglePassMultiView
	}

	[Token(Token = "0x17000068")]
	public static float eyeTextureResolutionScale
	{
		[Token(Token = "0x6000659")]
		[Address(RVA = "0x48746F0", Offset = "0x48746F0", VA = "0x48746F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x4874720", Offset = "0x4874720", VA = "0x4874720")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public static float renderViewportScale
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x4874730", Offset = "0x4874730", VA = "0x4874730")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700006A")]
	public static bool enabled
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x4874710", Offset = "0x4874710", VA = "0x4874710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public static bool isDeviceActive
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x4874750", Offset = "0x4874750", VA = "0x4874750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	public static string loadedDeviceName
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x4874770", Offset = "0x4874770", VA = "0x4874770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public static string[] supportedDevices
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x48747B0", Offset = "0x48747B0", VA = "0x48747B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006E")]
	public static StereoRenderingMode stereoRenderingMode
	{
		[Token(Token = "0x6000660")]
		[Address(RVA = "0x4874800", Offset = "0x4874800", VA = "0x4874800")]
		get
		{
			return default(StereoRenderingMode);
		}
	}

	[Token(Token = "0x1700006F")]
	public static RenderTextureDescriptor eyeTextureDesc
	{
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x4874820", Offset = "0x4874820", VA = "0x4874820")]
		get
		{
			return default(RenderTextureDescriptor);
		}
	}

	[Token(Token = "0x17000070")]
	public static int eyeTextureWidth
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x48748A0", Offset = "0x48748A0", VA = "0x48748A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public static int eyeTextureHeight
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x48748C0", Offset = "0x48748C0", VA = "0x48748C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x48748E0", Offset = "0x48748E0", VA = "0x48748E0")]
	public XRGraphics()
	{
	}
}
