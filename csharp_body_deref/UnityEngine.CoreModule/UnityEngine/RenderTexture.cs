// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderTexture
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x2000106")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderBufferManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
public class RenderTexture : Texture
{
	[Token(Token = "0x17000137")]
	public override int width
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x4DDD300", Offset = "0x4DDD300", VA = "0x4DDD300", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x4DDD3D0", Offset = "0x4DDD3D0", VA = "0x4DDD3D0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public override int height
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x4DDD4B0", Offset = "0x4DDD4B0", VA = "0x4DDD4B0", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600068F")]
		[Address(RVA = "0x4DDD580", Offset = "0x4DDD580", VA = "0x4DDD580", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public override TextureDimension dimension
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x4DDD660", Offset = "0x4DDD660", VA = "0x4DDD660", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x4DDD730", Offset = "0x4DDD730", VA = "0x4DDD730", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public new GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x6000694")]
		[Address(RVA = "0x4DDD9D0", Offset = "0x4DDD9D0", VA = "0x4DDD9D0")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x4DDDA70", Offset = "0x4DDDA70", VA = "0x4DDDA70")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	[UnityEngine.Bindings.NativeProperty("MipMap")]
	public bool useMipMap
	{
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x4DDDB10", Offset = "0x4DDDB10", VA = "0x4DDDB10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x4DDDBE0", Offset = "0x4DDDBE0", VA = "0x4DDDBE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	[UnityEngine.Bindings.NativeProperty("SRGBReadWrite")]
	public bool sRGB
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x4DDDCC0", Offset = "0x4DDDCC0", VA = "0x4DDDCC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	[UnityEngine.Bindings.NativeProperty("VRUsage")]
	public VRTextureUsage vrUsage
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x4DDDD90", Offset = "0x4DDDD90", VA = "0x4DDDD90")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	[UnityEngine.Bindings.NativeProperty("Memoryless")]
	public RenderTextureMemoryless memorylessMode
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x4DDDE70", Offset = "0x4DDDE70", VA = "0x4DDDE70")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x4DDDF50", Offset = "0x4DDDF50", VA = "0x4DDDF50")]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x17000140")]
	public GraphicsFormat stencilFormat
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x4DDE290", Offset = "0x4DDE290", VA = "0x4DDE290")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public GraphicsFormat depthStencilFormat
	{
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x4DDE370", Offset = "0x4DDE370", VA = "0x4DDE370")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public bool autoGenerateMips
	{
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x4DDE450", Offset = "0x4DDE450", VA = "0x4DDE450")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public int volumeDepth
	{
		[Token(Token = "0x600069F")]
		[Address(RVA = "0x4DDE530", Offset = "0x4DDE530", VA = "0x4DDE530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x4DDE600", Offset = "0x4DDE600", VA = "0x4DDE600")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public int antiAliasing
	{
		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x4DDE6E0", Offset = "0x4DDE6E0", VA = "0x4DDE6E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x4DDE7B0", Offset = "0x4DDE7B0", VA = "0x4DDE7B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public bool bindTextureMS
	{
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x4DDE890", Offset = "0x4DDE890", VA = "0x4DDE890")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public bool enableRandomWrite
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x4DDE970", Offset = "0x4DDE970", VA = "0x4DDE970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x4DDEA40", Offset = "0x4DDEA40", VA = "0x4DDEA40")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public bool useDynamicScale
	{
		[Token(Token = "0x60006A6")]
		[Address(RVA = "0x4DDEB20", Offset = "0x4DDEB20", VA = "0x4DDEB20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x4DDEBF0", Offset = "0x4DDEBF0", VA = "0x4DDEBF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public static RenderTexture active
	{
		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x4DDEDE0", Offset = "0x4DDEDE0", VA = "0x4DDEDE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x4DDEE10", Offset = "0x4DDEE10", VA = "0x4DDEE10")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public RenderBuffer colorBuffer
	{
		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x4DDF180", Offset = "0x4DDF180", VA = "0x4DDF180")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x1700014A")]
	public RenderBuffer depthBuffer
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x4DDF190", Offset = "0x4DDF190", VA = "0x4DDF190")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x1700014B")]
	public RenderTextureDescriptor descriptor
	{
		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x4DE01C0", Offset = "0x4DE01C0", VA = "0x4DE01C0")]
		get
		{
			return default(RenderTextureDescriptor);
		}
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x4DDD810", Offset = "0x4DDD810", VA = "0x4DDD810")]
	[UnityEngine.Bindings.NativeName("GetColorFormat")]
	private GraphicsFormat GetColorFormat(bool suppressWarnings)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x4DDD8F0", Offset = "0x4DDD8F0", VA = "0x4DDD8F0")]
	[UnityEngine.Bindings.NativeName("SetColorFormat")]
	private void SetColorFormat(GraphicsFormat format)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4DDECD0", Offset = "0x4DDECD0", VA = "0x4DDECD0")]
	[UnityEngine.Bindings.FreeFunction("RenderTexture::GetActive")]
	private static extern RenderTexture GetActive();

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4DDED00", Offset = "0x4DDED00", VA = "0x4DDED00")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::SetActive")]
	private static void SetActive(RenderTexture rt)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x4DDEEC0", Offset = "0x4DDEEC0", VA = "0x4DDEEC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetColorBuffer", HasExplicitThis = true)]
	private RenderBuffer GetColorBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x4DDEFB0", Offset = "0x4DDEFB0", VA = "0x4DDEFB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetDepthBuffer", HasExplicitThis = true)]
	private RenderBuffer GetDepthBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x4DDF0A0", Offset = "0x4DDF0A0", VA = "0x4DDF0A0")]
	private void SetMipMapCount(int count)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x4DDF1A0", Offset = "0x4DDF1A0", VA = "0x4DDF1A0")]
	public void DiscardContents(bool discardColor, bool discardDepth)
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4DDF290", Offset = "0x4DDF290", VA = "0x4DDF290")]
	[Obsolete("This function has no effect.", false)]
	public void MarkRestoreExpected()
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4DDF360", Offset = "0x4DDF360", VA = "0x4DDF360")]
	public void DiscardContents()
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4DDF410", Offset = "0x4DDF410", VA = "0x4DDF410")]
	public bool Create()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4DDF4E0", Offset = "0x4DDF4E0", VA = "0x4DDF4E0")]
	public void Release()
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4DDF5B0", Offset = "0x4DDF5B0", VA = "0x4DDF5B0")]
	public bool IsCreated()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4DDF680", Offset = "0x4DDF680", VA = "0x4DDF680")]
	internal void SetSRGBReadWrite(bool srgb)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x4DDF760", Offset = "0x4DDF760", VA = "0x4DDF760")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::Create")]
	private static extern void Internal_Create([UnityEngine.Writable] RenderTexture rt);

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x4DDF790", Offset = "0x4DDF790", VA = "0x4DDF790")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureDescFromScript")]
	private void SetRenderTextureDescriptor(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x4DDE1A0", Offset = "0x4DDE1A0", VA = "0x4DDE1A0")]
	[UnityEngine.Bindings.NativeName("GetRenderTextureDesc")]
	private RenderTextureDescriptor GetDescriptor()
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x4DDF8C0", Offset = "0x4DDF8C0", VA = "0x4DDF8C0")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().GetTempBuffer")]
	private static RenderTexture GetTemporary_Internal(RenderTextureDescriptor desc)
	{
		return null;
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x4DDF930", Offset = "0x4DDF930", VA = "0x4DDF930")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().ReleaseTempBuffer")]
	public static void ReleaseTemporary(RenderTexture temp)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x4DDFA10", Offset = "0x4DDFA10", VA = "0x4DDFA10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected internal RenderTexture()
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x4DDFA80", Offset = "0x4DDFA80", VA = "0x4DDFA80")]
	public RenderTexture(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4DDFFA0", Offset = "0x4DDFFA0", VA = "0x4DDFFA0")]
	public RenderTexture(RenderTexture textureToCopy)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x4DE02E0", Offset = "0x4DE02E0", VA = "0x4DE02E0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, DefaultFormat format)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4DE0840", Offset = "0x4DE0840", VA = "0x4DE0840")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4DE08C0", Offset = "0x4DE08C0", VA = "0x4DE08C0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format, int mipCount)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4DE04A0", Offset = "0x4DE04A0", VA = "0x4DE04A0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x4DE0D90", Offset = "0x4DE0D90", VA = "0x4DE0D90")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4DE0E10", Offset = "0x4DE0E10", VA = "0x4DE0E10")]
	public RenderTexture(int width, int height, int depth, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat format, [DefaultValue("RenderTextureReadWrite.Default")] RenderTextureReadWrite readWrite)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4DE1290", Offset = "0x4DE1290", VA = "0x4DE1290")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4DE1430", Offset = "0x4DE1430", VA = "0x4DE1430")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4DE13A0", Offset = "0x4DE13A0", VA = "0x4DE13A0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4DE0EB0", Offset = "0x4DE0EB0", VA = "0x4DE0EB0")]
	private void Initialize(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite, int mipCount)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x4DE0D10", Offset = "0x4DE0D10", VA = "0x4DE0D10")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, GraphicsFormat colorFormat)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x4DE1560", Offset = "0x4DE1560", VA = "0x4DE1560")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, RenderTextureFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x4DE1660", Offset = "0x4DE1660", VA = "0x4DE1660")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x4DE15E0", Offset = "0x4DE15E0", VA = "0x4DE15E0")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, bool requestedShadowMap)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x4DDFBE0", Offset = "0x4DDFBE0", VA = "0x4DDFBE0")]
	private static void ValidateRenderTextureDesc(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x4DE03E0", Offset = "0x4DE03E0", VA = "0x4DE03E0")]
	internal static GraphicsFormat GetDefaultColorFormat(DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x4DE0400", Offset = "0x4DE0400", VA = "0x4DE0400")]
	internal static GraphicsFormat GetDefaultDepthStencilFormat(DefaultFormat format, int depth)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x4DE1440", Offset = "0x4DE1440", VA = "0x4DE1440")]
	internal static GraphicsFormat GetCompatibleFormat(RenderTextureFormat renderTextureFormat, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x4DE16F0", Offset = "0x4DE16F0", VA = "0x4DE16F0")]
	public static RenderTexture GetTemporary(RenderTextureDescriptor desc)
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4DE17C0", Offset = "0x4DE17C0", VA = "0x4DE17C0")]
	private static RenderTexture GetTemporaryImpl(int width, int height, GraphicsFormat depthStencilFormat, GraphicsFormat colorFormat, int antiAliasing = 1, RenderTextureMemoryless memorylessMode = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, bool useDynamicScale = false)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x4DE1AC0", Offset = "0x4DE1AC0", VA = "0x4DE1AC0")]
	public static RenderTexture GetTemporary(int width, int height, [DefaultValue("0")] int depthBuffer, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat format, [DefaultValue("RenderTextureReadWrite.Default")] RenderTextureReadWrite readWrite, [DefaultValue("1")] int antiAliasing, [DefaultValue("RenderTextureMemoryless.None")] RenderTextureMemoryless memorylessMode, [DefaultValue("VRTextureUsage.None")] VRTextureUsage vrUsage, [DefaultValue("false")] bool useDynamicScale)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x4DE1B80", Offset = "0x4DE1B80", VA = "0x4DE1B80")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode, VRTextureUsage vrUsage)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4DE1C40", Offset = "0x4DE1C40", VA = "0x4DE1C40")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode)
	{
		return null;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x4DE1D10", Offset = "0x4DE1D10", VA = "0x4DE1D10")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x4DE1D30", Offset = "0x4DE1D30", VA = "0x4DE1D30")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
		return null;
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x4DE1D50", Offset = "0x4DE1D50", VA = "0x4DE1D50")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format)
	{
		return null;
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x4DE1D70", Offset = "0x4DE1D70", VA = "0x4DE1D70")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer)
	{
		return null;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4DE1E00", Offset = "0x4DE1E00", VA = "0x4DE1E00")]
	[ExcludeFromDocs]
	public static RenderTexture GetTemporary(int width, int height)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4DDD3A0", Offset = "0x4DDD3A0", VA = "0x4DDD3A0")]
	private static extern int get_width_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4DDD470", Offset = "0x4DDD470", VA = "0x4DDD470")]
	private static extern void set_width_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4DDD550", Offset = "0x4DDD550", VA = "0x4DDD550")]
	private static extern int get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x4DDD620", Offset = "0x4DDD620", VA = "0x4DDD620")]
	private static extern void set_height_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x4DDD700", Offset = "0x4DDD700", VA = "0x4DDD700")]
	private static extern TextureDimension get_dimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x4DDD7D0", Offset = "0x4DDD7D0", VA = "0x4DDD7D0")]
	private static extern void set_dimension_Injected(IntPtr _unity_self, TextureDimension value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4DDD8B0", Offset = "0x4DDD8B0", VA = "0x4DDD8B0")]
	private static extern GraphicsFormat GetColorFormat_Injected(IntPtr _unity_self, bool suppressWarnings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x4DDD990", Offset = "0x4DDD990", VA = "0x4DDD990")]
	private static extern void SetColorFormat_Injected(IntPtr _unity_self, GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x4DDDBB0", Offset = "0x4DDDBB0", VA = "0x4DDDBB0")]
	private static extern bool get_useMipMap_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x4DDDC80", Offset = "0x4DDDC80", VA = "0x4DDDC80")]
	private static extern void set_useMipMap_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x4DDDD60", Offset = "0x4DDDD60", VA = "0x4DDDD60")]
	private static extern bool get_sRGB_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x4DDDE30", Offset = "0x4DDDE30", VA = "0x4DDDE30")]
	private static extern void set_vrUsage_Injected(IntPtr _unity_self, VRTextureUsage value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4DDDF10", Offset = "0x4DDDF10", VA = "0x4DDDF10")]
	private static extern void set_memorylessMode_Injected(IntPtr _unity_self, RenderTextureMemoryless value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4DDE330", Offset = "0x4DDE330", VA = "0x4DDE330")]
	private static extern void set_stencilFormat_Injected(IntPtr _unity_self, GraphicsFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4DDE410", Offset = "0x4DDE410", VA = "0x4DDE410")]
	private static extern void set_depthStencilFormat_Injected(IntPtr _unity_self, GraphicsFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4DDE4F0", Offset = "0x4DDE4F0", VA = "0x4DDE4F0")]
	private static extern void set_autoGenerateMips_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x4DDE5D0", Offset = "0x4DDE5D0", VA = "0x4DDE5D0")]
	private static extern int get_volumeDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4DDE6A0", Offset = "0x4DDE6A0", VA = "0x4DDE6A0")]
	private static extern void set_volumeDepth_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4DDE780", Offset = "0x4DDE780", VA = "0x4DDE780")]
	private static extern int get_antiAliasing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4DDE850", Offset = "0x4DDE850", VA = "0x4DDE850")]
	private static extern void set_antiAliasing_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4DDE930", Offset = "0x4DDE930", VA = "0x4DDE930")]
	private static extern void set_bindTextureMS_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4DDEA10", Offset = "0x4DDEA10", VA = "0x4DDEA10")]
	private static extern bool get_enableRandomWrite_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4DDEAE0", Offset = "0x4DDEAE0", VA = "0x4DDEAE0")]
	private static extern void set_enableRandomWrite_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x4DDEBC0", Offset = "0x4DDEBC0", VA = "0x4DDEBC0")]
	private static extern bool get_useDynamicScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x4DDEC90", Offset = "0x4DDEC90", VA = "0x4DDEC90")]
	private static extern void set_useDynamicScale_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4DDEDB0", Offset = "0x4DDEDB0", VA = "0x4DDEDB0")]
	private static extern void SetActive_Injected(IntPtr rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x4DDEF70", Offset = "0x4DDEF70", VA = "0x4DDEF70")]
	private static extern void GetColorBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4DDF060", Offset = "0x4DDF060", VA = "0x4DDF060")]
	private static extern void GetDepthBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4DDF140", Offset = "0x4DDF140", VA = "0x4DDF140")]
	private static extern void SetMipMapCount_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x4DDF250", Offset = "0x4DDF250", VA = "0x4DDF250")]
	private static extern void DiscardContents_Injected(IntPtr _unity_self, bool discardColor, bool discardDepth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x4DDF330", Offset = "0x4DDF330", VA = "0x4DDF330")]
	private static extern void MarkRestoreExpected_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4DDF4B0", Offset = "0x4DDF4B0", VA = "0x4DDF4B0")]
	private static extern bool Create_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4DDF580", Offset = "0x4DDF580", VA = "0x4DDF580")]
	private static extern void Release_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4DDF650", Offset = "0x4DDF650", VA = "0x4DDF650")]
	private static extern bool IsCreated_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4DDF720", Offset = "0x4DDF720", VA = "0x4DDF720")]
	private static extern void SetSRGBReadWrite_Injected(IntPtr _unity_self, bool srgb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000700")]
	[Address(RVA = "0x4DDF840", Offset = "0x4DDF840", VA = "0x4DDF840")]
	private static extern void SetRenderTextureDescriptor_Injected(IntPtr _unity_self, [In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4DDF880", Offset = "0x4DDF880", VA = "0x4DDF880")]
	private static extern void GetDescriptor_Injected(IntPtr _unity_self, out RenderTextureDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000702")]
	[Address(RVA = "0x4DDF900", Offset = "0x4DDF900", VA = "0x4DDF900")]
	private static extern RenderTexture GetTemporary_Internal_Injected([In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000703")]
	[Address(RVA = "0x4DDF9E0", Offset = "0x4DDF9E0", VA = "0x4DDF9E0")]
	private static extern void ReleaseTemporary_Injected(IntPtr temp);
}
