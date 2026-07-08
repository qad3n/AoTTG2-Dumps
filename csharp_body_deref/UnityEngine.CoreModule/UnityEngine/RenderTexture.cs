using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000103")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderBufferManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
public class RenderTexture : Texture
{
	[Token(Token = "0x17000136")]
	public override int width
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x4AB59D0", Offset = "0x4AB59D0", VA = "0x4AB59D0", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x4AB5AA0", Offset = "0x4AB5AA0", VA = "0x4AB5AA0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000137")]
	public override int height
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x4AB5B80", Offset = "0x4AB5B80", VA = "0x4AB5B80", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x4AB5C50", Offset = "0x4AB5C50", VA = "0x4AB5C50", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public override TextureDimension dimension
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x4AB5D30", Offset = "0x4AB5D30", VA = "0x4AB5D30", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x600068F")]
		[Address(RVA = "0x4AB5E00", Offset = "0x4AB5E00", VA = "0x4AB5E00", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public new GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x6000692")]
		[Address(RVA = "0x4AB60A0", Offset = "0x4AB60A0", VA = "0x4AB60A0")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x6000693")]
		[Address(RVA = "0x4AB6140", Offset = "0x4AB6140", VA = "0x4AB6140")]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	[UnityEngine.Bindings.NativeProperty("MipMap")]
	public bool useMipMap
	{
		[Token(Token = "0x6000694")]
		[Address(RVA = "0x4AB61E0", Offset = "0x4AB61E0", VA = "0x4AB61E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x4AB62B0", Offset = "0x4AB62B0", VA = "0x4AB62B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	[UnityEngine.Bindings.NativeProperty("SRGBReadWrite")]
	public bool sRGB
	{
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x4AB6390", Offset = "0x4AB6390", VA = "0x4AB6390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	[UnityEngine.Bindings.NativeProperty("VRUsage")]
	public VRTextureUsage vrUsage
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x4AB6460", Offset = "0x4AB6460", VA = "0x4AB6460")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	[UnityEngine.Bindings.NativeProperty("Memoryless")]
	public RenderTextureMemoryless memorylessMode
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x4AB6540", Offset = "0x4AB6540", VA = "0x4AB6540")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x4AB6620", Offset = "0x4AB6620", VA = "0x4AB6620")]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x1700013F")]
	public GraphicsFormat stencilFormat
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x4AB6960", Offset = "0x4AB6960", VA = "0x4AB6960")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public GraphicsFormat depthStencilFormat
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x4AB6A40", Offset = "0x4AB6A40", VA = "0x4AB6A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public bool autoGenerateMips
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x4AB6B20", Offset = "0x4AB6B20", VA = "0x4AB6B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public int volumeDepth
	{
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x4AB6C00", Offset = "0x4AB6C00", VA = "0x4AB6C00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x4AB6CD0", Offset = "0x4AB6CD0", VA = "0x4AB6CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public int antiAliasing
	{
		[Token(Token = "0x600069F")]
		[Address(RVA = "0x4AB6DB0", Offset = "0x4AB6DB0", VA = "0x4AB6DB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x4AB6E80", Offset = "0x4AB6E80", VA = "0x4AB6E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public bool bindTextureMS
	{
		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x4AB6F60", Offset = "0x4AB6F60", VA = "0x4AB6F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public bool enableRandomWrite
	{
		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x4AB7040", Offset = "0x4AB7040", VA = "0x4AB7040")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x4AB7110", Offset = "0x4AB7110", VA = "0x4AB7110")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public bool useDynamicScale
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x4AB71F0", Offset = "0x4AB71F0", VA = "0x4AB71F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x4AB72C0", Offset = "0x4AB72C0", VA = "0x4AB72C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public static RenderTexture active
	{
		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x4AB74B0", Offset = "0x4AB74B0", VA = "0x4AB74B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006A9")]
		[Address(RVA = "0x4AB74E0", Offset = "0x4AB74E0", VA = "0x4AB74E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public RenderBuffer colorBuffer
	{
		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x4AB7850", Offset = "0x4AB7850", VA = "0x4AB7850")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x17000149")]
	public RenderBuffer depthBuffer
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x4AB7860", Offset = "0x4AB7860", VA = "0x4AB7860")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x1700014A")]
	public RenderTextureDescriptor descriptor
	{
		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x4AB8890", Offset = "0x4AB8890", VA = "0x4AB8890")]
		get
		{
			return default(RenderTextureDescriptor);
		}
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x4AB5EE0", Offset = "0x4AB5EE0", VA = "0x4AB5EE0")]
	[UnityEngine.Bindings.NativeName("GetColorFormat")]
	private GraphicsFormat GetColorFormat(bool suppressWarnings)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x4AB5FC0", Offset = "0x4AB5FC0", VA = "0x4AB5FC0")]
	[UnityEngine.Bindings.NativeName("SetColorFormat")]
	private void SetColorFormat(GraphicsFormat format)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4AB73A0", Offset = "0x4AB73A0", VA = "0x4AB73A0")]
	[UnityEngine.Bindings.FreeFunction("RenderTexture::GetActive")]
	private static extern RenderTexture GetActive();

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x4AB73D0", Offset = "0x4AB73D0", VA = "0x4AB73D0")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::SetActive")]
	private static void SetActive(RenderTexture rt)
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x4AB7590", Offset = "0x4AB7590", VA = "0x4AB7590")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetColorBuffer", HasExplicitThis = true)]
	private RenderBuffer GetColorBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x4AB7680", Offset = "0x4AB7680", VA = "0x4AB7680")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetDepthBuffer", HasExplicitThis = true)]
	private RenderBuffer GetDepthBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x4AB7770", Offset = "0x4AB7770", VA = "0x4AB7770")]
	private void SetMipMapCount(int count)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x4AB7870", Offset = "0x4AB7870", VA = "0x4AB7870")]
	public void DiscardContents(bool discardColor, bool discardDepth)
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x4AB7960", Offset = "0x4AB7960", VA = "0x4AB7960")]
	[Obsolete("This function has no effect.", false)]
	public void MarkRestoreExpected()
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x4AB7A30", Offset = "0x4AB7A30", VA = "0x4AB7A30")]
	public void DiscardContents()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4AB7AE0", Offset = "0x4AB7AE0", VA = "0x4AB7AE0")]
	public bool Create()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4AB7BB0", Offset = "0x4AB7BB0", VA = "0x4AB7BB0")]
	public void Release()
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4AB7C80", Offset = "0x4AB7C80", VA = "0x4AB7C80")]
	public bool IsCreated()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4AB7D50", Offset = "0x4AB7D50", VA = "0x4AB7D50")]
	internal void SetSRGBReadWrite(bool srgb)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4AB7E30", Offset = "0x4AB7E30", VA = "0x4AB7E30")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::Create")]
	private static extern void Internal_Create([UnityEngine.Writable] RenderTexture rt);

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4AB7E60", Offset = "0x4AB7E60", VA = "0x4AB7E60")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureDescFromScript")]
	private void SetRenderTextureDescriptor(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x4AB6870", Offset = "0x4AB6870", VA = "0x4AB6870")]
	[UnityEngine.Bindings.NativeName("GetRenderTextureDesc")]
	private RenderTextureDescriptor GetDescriptor()
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x4AB7F90", Offset = "0x4AB7F90", VA = "0x4AB7F90")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().GetTempBuffer")]
	private static RenderTexture GetTemporary_Internal(RenderTextureDescriptor desc)
	{
		return null;
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x4AB8000", Offset = "0x4AB8000", VA = "0x4AB8000")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().ReleaseTempBuffer")]
	public static void ReleaseTemporary(RenderTexture temp)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x4AB80E0", Offset = "0x4AB80E0", VA = "0x4AB80E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected internal RenderTexture()
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x4AB8150", Offset = "0x4AB8150", VA = "0x4AB8150")]
	public RenderTexture(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x4AB8670", Offset = "0x4AB8670", VA = "0x4AB8670")]
	public RenderTexture(RenderTexture textureToCopy)
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x4AB89B0", Offset = "0x4AB89B0", VA = "0x4AB89B0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, DefaultFormat format)
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4AB8F10", Offset = "0x4AB8F10", VA = "0x4AB8F10")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x4AB8F90", Offset = "0x4AB8F90", VA = "0x4AB8F90")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format, int mipCount)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4AB8B70", Offset = "0x4AB8B70", VA = "0x4AB8B70")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4AB9460", Offset = "0x4AB9460", VA = "0x4AB9460")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4AB94E0", Offset = "0x4AB94E0", VA = "0x4AB94E0")]
	public RenderTexture(int width, int height, int depth, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat format, [DefaultValue("RenderTextureReadWrite.Default")] RenderTextureReadWrite readWrite)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x4AB9960", Offset = "0x4AB9960", VA = "0x4AB9960")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4AB9B00", Offset = "0x4AB9B00", VA = "0x4AB9B00")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4AB9A70", Offset = "0x4AB9A70", VA = "0x4AB9A70")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4AB9580", Offset = "0x4AB9580", VA = "0x4AB9580")]
	private void Initialize(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite, int mipCount)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4AB93E0", Offset = "0x4AB93E0", VA = "0x4AB93E0")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, GraphicsFormat colorFormat)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4AB9C30", Offset = "0x4AB9C30", VA = "0x4AB9C30")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, RenderTextureFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x4AB9D30", Offset = "0x4AB9D30", VA = "0x4AB9D30")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x4AB9CB0", Offset = "0x4AB9CB0", VA = "0x4AB9CB0")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, bool requestedShadowMap)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x4AB82B0", Offset = "0x4AB82B0", VA = "0x4AB82B0")]
	private static void ValidateRenderTextureDesc(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x4AB8AB0", Offset = "0x4AB8AB0", VA = "0x4AB8AB0")]
	internal static GraphicsFormat GetDefaultColorFormat(DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x4AB8AD0", Offset = "0x4AB8AD0", VA = "0x4AB8AD0")]
	internal static GraphicsFormat GetDefaultDepthStencilFormat(DefaultFormat format, int depth)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x4AB9B10", Offset = "0x4AB9B10", VA = "0x4AB9B10")]
	internal static GraphicsFormat GetCompatibleFormat(RenderTextureFormat renderTextureFormat, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x4AB9DC0", Offset = "0x4AB9DC0", VA = "0x4AB9DC0")]
	public static RenderTexture GetTemporary(RenderTextureDescriptor desc)
	{
		return null;
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x4AB9E90", Offset = "0x4AB9E90", VA = "0x4AB9E90")]
	private static RenderTexture GetTemporaryImpl(int width, int height, GraphicsFormat depthStencilFormat, GraphicsFormat colorFormat, int antiAliasing = 1, RenderTextureMemoryless memorylessMode = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, bool useDynamicScale = false)
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x4ABA190", Offset = "0x4ABA190", VA = "0x4ABA190")]
	public static RenderTexture GetTemporary(int width, int height, [DefaultValue("0")] int depthBuffer, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat format, [DefaultValue("RenderTextureReadWrite.Default")] RenderTextureReadWrite readWrite, [DefaultValue("1")] int antiAliasing, [DefaultValue("RenderTextureMemoryless.None")] RenderTextureMemoryless memorylessMode, [DefaultValue("VRTextureUsage.None")] VRTextureUsage vrUsage, [DefaultValue("false")] bool useDynamicScale)
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4ABA250", Offset = "0x4ABA250", VA = "0x4ABA250")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode, VRTextureUsage vrUsage)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x4ABA310", Offset = "0x4ABA310", VA = "0x4ABA310")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x4ABA3E0", Offset = "0x4ABA3E0", VA = "0x4ABA3E0")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4ABA400", Offset = "0x4ABA400", VA = "0x4ABA400")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
		return null;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x4ABA420", Offset = "0x4ABA420", VA = "0x4ABA420")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x4ABA440", Offset = "0x4ABA440", VA = "0x4ABA440")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer)
	{
		return null;
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x4ABA4D0", Offset = "0x4ABA4D0", VA = "0x4ABA4D0")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x4AB5A70", Offset = "0x4AB5A70", VA = "0x4AB5A70")]
	private static extern int get_width_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4AB5B40", Offset = "0x4AB5B40", VA = "0x4AB5B40")]
	private static extern void set_width_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4AB5C20", Offset = "0x4AB5C20", VA = "0x4AB5C20")]
	private static extern int get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4AB5CF0", Offset = "0x4AB5CF0", VA = "0x4AB5CF0")]
	private static extern void set_height_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4AB5DD0", Offset = "0x4AB5DD0", VA = "0x4AB5DD0")]
	private static extern TextureDimension get_dimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x4AB5EA0", Offset = "0x4AB5EA0", VA = "0x4AB5EA0")]
	private static extern void set_dimension_Injected(IntPtr _unity_self, TextureDimension value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x4AB5F80", Offset = "0x4AB5F80", VA = "0x4AB5F80")]
	private static extern GraphicsFormat GetColorFormat_Injected(IntPtr _unity_self, bool suppressWarnings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x4AB6060", Offset = "0x4AB6060", VA = "0x4AB6060")]
	private static extern void SetColorFormat_Injected(IntPtr _unity_self, GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4AB6280", Offset = "0x4AB6280", VA = "0x4AB6280")]
	private static extern bool get_useMipMap_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x4AB6350", Offset = "0x4AB6350", VA = "0x4AB6350")]
	private static extern void set_useMipMap_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x4AB6430", Offset = "0x4AB6430", VA = "0x4AB6430")]
	private static extern bool get_sRGB_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x4AB6500", Offset = "0x4AB6500", VA = "0x4AB6500")]
	private static extern void set_vrUsage_Injected(IntPtr _unity_self, VRTextureUsage value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x4AB65E0", Offset = "0x4AB65E0", VA = "0x4AB65E0")]
	private static extern void set_memorylessMode_Injected(IntPtr _unity_self, RenderTextureMemoryless value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x4AB6A00", Offset = "0x4AB6A00", VA = "0x4AB6A00")]
	private static extern void set_stencilFormat_Injected(IntPtr _unity_self, GraphicsFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4AB6AE0", Offset = "0x4AB6AE0", VA = "0x4AB6AE0")]
	private static extern void set_depthStencilFormat_Injected(IntPtr _unity_self, GraphicsFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4AB6BC0", Offset = "0x4AB6BC0", VA = "0x4AB6BC0")]
	private static extern void set_autoGenerateMips_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4AB6CA0", Offset = "0x4AB6CA0", VA = "0x4AB6CA0")]
	private static extern int get_volumeDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4AB6D70", Offset = "0x4AB6D70", VA = "0x4AB6D70")]
	private static extern void set_volumeDepth_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x4AB6E50", Offset = "0x4AB6E50", VA = "0x4AB6E50")]
	private static extern int get_antiAliasing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4AB6F20", Offset = "0x4AB6F20", VA = "0x4AB6F20")]
	private static extern void set_antiAliasing_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4AB7000", Offset = "0x4AB7000", VA = "0x4AB7000")]
	private static extern void set_bindTextureMS_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4AB70E0", Offset = "0x4AB70E0", VA = "0x4AB70E0")]
	private static extern bool get_enableRandomWrite_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4AB71B0", Offset = "0x4AB71B0", VA = "0x4AB71B0")]
	private static extern void set_enableRandomWrite_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4AB7290", Offset = "0x4AB7290", VA = "0x4AB7290")]
	private static extern bool get_useDynamicScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4AB7360", Offset = "0x4AB7360", VA = "0x4AB7360")]
	private static extern void set_useDynamicScale_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x4AB7480", Offset = "0x4AB7480", VA = "0x4AB7480")]
	private static extern void SetActive_Injected(IntPtr rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x4AB7640", Offset = "0x4AB7640", VA = "0x4AB7640")]
	private static extern void GetColorBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4AB7730", Offset = "0x4AB7730", VA = "0x4AB7730")]
	private static extern void GetDepthBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x4AB7810", Offset = "0x4AB7810", VA = "0x4AB7810")]
	private static extern void SetMipMapCount_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4AB7920", Offset = "0x4AB7920", VA = "0x4AB7920")]
	private static extern void DiscardContents_Injected(IntPtr _unity_self, bool discardColor, bool discardDepth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4AB7A00", Offset = "0x4AB7A00", VA = "0x4AB7A00")]
	private static extern void MarkRestoreExpected_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x4AB7B80", Offset = "0x4AB7B80", VA = "0x4AB7B80")]
	private static extern bool Create_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x4AB7C50", Offset = "0x4AB7C50", VA = "0x4AB7C50")]
	private static extern void Release_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4AB7D20", Offset = "0x4AB7D20", VA = "0x4AB7D20")]
	private static extern bool IsCreated_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4AB7DF0", Offset = "0x4AB7DF0", VA = "0x4AB7DF0")]
	private static extern void SetSRGBReadWrite_Injected(IntPtr _unity_self, bool srgb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4AB7F10", Offset = "0x4AB7F10", VA = "0x4AB7F10")]
	private static extern void SetRenderTextureDescriptor_Injected(IntPtr _unity_self, [In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4AB7F50", Offset = "0x4AB7F50", VA = "0x4AB7F50")]
	private static extern void GetDescriptor_Injected(IntPtr _unity_self, out RenderTextureDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000700")]
	[Address(RVA = "0x4AB7FD0", Offset = "0x4AB7FD0", VA = "0x4AB7FD0")]
	private static extern RenderTexture GetTemporary_Internal_Injected([In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4AB80B0", Offset = "0x4AB80B0", VA = "0x4AB80B0")]
	private static extern void ReleaseTemporary_Injected(IntPtr temp);
}
