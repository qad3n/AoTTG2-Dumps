// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderTexture
// Update status: CHANGED in this game update
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

[Token(Token = "0x200012A")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderBufferManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
public class RenderTexture : Texture
{
	[Token(Token = "0x1700018C")]
	public override int width
	{
		[Token(Token = "0x6000913")]
		[Address(RVA = "0x2EF3E50", Offset = "0x2EF2450", VA = "0x182EF3E50", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x2EF46A0", Offset = "0x2EF2CA0", VA = "0x182EF46A0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public override int height
	{
		[Token(Token = "0x6000915")]
		[Address(RVA = "0x2EF39D0", Offset = "0x2EF1FD0", VA = "0x182EF39D0", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x2EF4340", Offset = "0x2EF2940", VA = "0x182EF4340", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public override TextureDimension dimension
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x2EF3620", Offset = "0x2EF1C20", VA = "0x182EF3620", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x2EF4190", Offset = "0x2EF2790", VA = "0x182EF4190", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public new GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x2EF3910", Offset = "0x2EF1F10", VA = "0x182EF3910")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x2EF1780", Offset = "0x2EEFD80", VA = "0x182EF1780")]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	[UnityEngine.Bindings.NativeProperty("MipMap")]
	public bool useMipMap
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x2EF3CD0", Offset = "0x2EF22D0", VA = "0x182EF3CD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x2EF4500", Offset = "0x2EF2B00", VA = "0x182EF4500")]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	[UnityEngine.Bindings.NativeProperty("SRGBReadWrite")]
	public bool sRGB
	{
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x2EF3A90", Offset = "0x2EF2090", VA = "0x182EF3A90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000192")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x2EF3760", Offset = "0x2EF1D60", VA = "0x182EF3760")]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x17000193")]
	public GraphicsFormat depthStencilFormat
	{
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x2EF3480", Offset = "0x2EF1A80", VA = "0x182EF3480")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x2EF40C0", Offset = "0x2EF26C0", VA = "0x182EF40C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public bool autoGenerateMips
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x2EF3FF0", Offset = "0x2EF25F0", VA = "0x182EF3FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public int volumeDepth
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x2EF3D90", Offset = "0x2EF2390", VA = "0x182EF3D90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x2EF45D0", Offset = "0x2EF2BD0", VA = "0x182EF45D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public int antiAliasing
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x2EF31A0", Offset = "0x2EF17A0", VA = "0x182EF31A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x2EF3F10", Offset = "0x2EF2510", VA = "0x182EF3F10")]
		set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public bool bindTextureMS
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x2EF3260", Offset = "0x2EF1860", VA = "0x182EF3260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000198")]
	public bool enableRandomWrite
	{
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x2EF4270", Offset = "0x2EF2870", VA = "0x182EF4270")]
		set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public bool useDynamicScale
	{
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x2EF3C10", Offset = "0x2EF2210", VA = "0x182EF3C10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x2EF4420", Offset = "0x2EF2A20", VA = "0x182EF4420")]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public bool useDynamicScaleExplicit
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x2EF3B50", Offset = "0x2EF2150", VA = "0x182EF3B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	public bool enableShadingRate
	{
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x2EF36E0", Offset = "0x2EF1CE0", VA = "0x182EF36E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019C")]
	public static RenderTexture active
	{
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x2EF09E0", Offset = "0x2EEEFE0", VA = "0x182EF09E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x2EF16D0", Offset = "0x2EEFCD0", VA = "0x182EF16D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	public RenderBuffer colorBuffer
	{
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x2EF32E0", Offset = "0x2EF18E0", VA = "0x182EF32E0")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x1700019E")]
	public RenderBuffer depthBuffer
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x2EF3390", Offset = "0x2EF1990", VA = "0x182EF3390")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x1700019F")]
	public RenderTextureDescriptor descriptor
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x2EF3500", Offset = "0x2EF1B00", VA = "0x182EF3500")]
		get
		{
			return default(RenderTextureDescriptor);
		}
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x2EF0B70", Offset = "0x2EEF170", VA = "0x182EF0B70")]
	[UnityEngine.Bindings.NativeName("GetColorFormat")]
	private GraphicsFormat GetColorFormat(bool suppressWarnings)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x2EF1780", Offset = "0x2EEFD80", VA = "0x182EF1780")]
	[UnityEngine.Bindings.NativeName("SetColorFormat")]
	private void SetColorFormat(GraphicsFormat format)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x2EF0870", Offset = "0x2EEEE70", VA = "0x182EF0870")]
	public void ApplyDynamicScale()
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x2EF09E0", Offset = "0x2EEEFE0", VA = "0x182EF09E0")]
	[UnityEngine.Bindings.FreeFunction("RenderTexture::GetActiveAsRenderTexture")]
	private static RenderTexture GetActive()
	{
		return null;
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x2EF16D0", Offset = "0x2EEFCD0", VA = "0x182EF16D0")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::SetActive")]
	private static void SetActive(RenderTexture rt)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x2EF0A90", Offset = "0x2EEF090", VA = "0x182EF0A90")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetColorBuffer", HasExplicitThis = true)]
	private RenderBuffer GetColorBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x2EF0DD0", Offset = "0x2EEF3D0", VA = "0x182EF0DD0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetDepthBuffer", HasExplicitThis = true)]
	private RenderBuffer GetDepthBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x2EF1850", Offset = "0x2EEFE50", VA = "0x182EF1850")]
	private void SetMipMapCount(int count)
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x2EF1AE0", Offset = "0x2EF00E0", VA = "0x182EF1AE0")]
	internal void SetShadowSamplingMode(ShadowSamplingMode samplingMode)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x2EF0930", Offset = "0x2EEEF30", VA = "0x182EF0930")]
	public bool Create()
	{
		return default(bool);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x2EF1610", Offset = "0x2EEFC10", VA = "0x182EF1610")]
	public void Release()
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x2EF1A10", Offset = "0x2EF0010", VA = "0x182EF1A10")]
	internal void SetSRGBReadWrite(bool srgb)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600093C")]
	[Address(RVA = "0x2EF14E0", Offset = "0x2EEFAE0", VA = "0x182EF14E0")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::Create")]
	private static extern void Internal_Create([UnityEngine.Writable] RenderTexture rt);

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x2EF1930", Offset = "0x2EEFF30", VA = "0x182EF1930")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureDescFromScript")]
	private void SetRenderTextureDescriptor(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x2EF1020", Offset = "0x2EEF620", VA = "0x182EF1020")]
	[UnityEngine.Bindings.NativeName("GetRenderTextureDesc")]
	private RenderTextureDescriptor GetDescriptor()
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x2EF1110", Offset = "0x2EEF710", VA = "0x182EF1110")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().GetTempBuffer")]
	private static RenderTexture GetTemporary_Internal(RenderTextureDescriptor desc)
	{
		return null;
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x2EF1560", Offset = "0x2EEFB60", VA = "0x182EF1560")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().ReleaseTempBuffer")]
	public static void ReleaseTemporary(RenderTexture temp)
	{
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x2EF2D00", Offset = "0x2EF1300", VA = "0x182EF2D00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected internal RenderTexture()
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x2EF24A0", Offset = "0x2EF0AA0", VA = "0x182EF24A0")]
	public RenderTexture(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x2EF2ED0", Offset = "0x2EF14D0", VA = "0x182EF2ED0")]
	public RenderTexture(RenderTexture textureToCopy)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x2EF2BA0", Offset = "0x2EF11A0", VA = "0x182EF2BA0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, DefaultFormat format)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x2EF2160", Offset = "0x2EF0760", VA = "0x182EF2160")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x2EF27E0", Offset = "0x2EF0DE0", VA = "0x182EF27E0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format, int mipCount)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x2EF21F0", Offset = "0x2EF07F0", VA = "0x182EF21F0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x2EF2E40", Offset = "0x2EF1440", VA = "0x182EF2E40")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x2EF2AD0", Offset = "0x2EF10D0", VA = "0x182EF2AD0")]
	public RenderTexture(int width, int height, int depth, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat format, [DefaultValue("RenderTextureReadWrite.Default")] RenderTextureReadWrite readWrite)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x2EF26E0", Offset = "0x2EF0CE0", VA = "0x182EF26E0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x2EF25E0", Offset = "0x2EF0BE0", VA = "0x182EF25E0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth)
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x2EF2D80", Offset = "0x2EF1380", VA = "0x182EF2D80")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x2EF1200", Offset = "0x2EEF800", VA = "0x182EF1200")]
	private void Initialize(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite, int mipCount)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x2EF0FB0", Offset = "0x2EEF5B0", VA = "0x182EF0FB0")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, GraphicsFormat colorFormat)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x2EF0E70", Offset = "0x2EEF470", VA = "0x182EF0E70")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, RenderTextureFormat format, bool disableFallback = false)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x2EF0FC0", Offset = "0x2EEF5C0", VA = "0x182EF0FC0")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x2EF0E60", Offset = "0x2EEF460", VA = "0x182EF0E60")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, ShadowSamplingMode shadowSamplingMode)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x2EF0EB0", Offset = "0x2EEF4B0", VA = "0x182EF0EB0")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, bool requestedShadowMap)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x2EF1B70", Offset = "0x2EF0170", VA = "0x182EF1B70")]
	private static void ValidateRenderTextureDesc(ref RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x2EF0D30", Offset = "0x2EEF330", VA = "0x182EF0D30")]
	internal static GraphicsFormat GetDefaultColorFormat(DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x2EF0D50", Offset = "0x2EEF350", VA = "0x182EF0D50")]
	internal static GraphicsFormat GetDefaultDepthStencilFormat(DefaultFormat format, int depth)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x2EF10C0", Offset = "0x2EEF6C0", VA = "0x182EF10C0")]
	internal static ShadowSamplingMode GetShadowSamplingModeForFormat(RenderTextureFormat format)
	{
		return default(ShadowSamplingMode);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x2EF10C0", Offset = "0x2EEF6C0", VA = "0x182EF10C0")]
	internal static ShadowSamplingMode GetShadowSamplingModeForFormat(DefaultFormat format)
	{
		return default(ShadowSamplingMode);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x2EF20D0", Offset = "0x2EF06D0", VA = "0x182EF20D0")]
	internal static void WarnAboutFallbackTo16BitsDepth(RenderTextureFormat format)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x2EF0C00", Offset = "0x2EEF200", VA = "0x182EF0C00")]
	internal static GraphicsFormat GetCompatibleFormat(RenderTextureFormat renderTextureFormat, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x2EF1170", Offset = "0x2EEF770", VA = "0x182EF1170")]
	public static RenderTexture GetTemporary(RenderTextureDescriptor desc)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600095C")]
	[Address(RVA = "0x2EF3E10", Offset = "0x2EF2410", VA = "0x182EF3E10")]
	private static extern int get_width_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600095D")]
	[Address(RVA = "0x2EF4660", Offset = "0x2EF2C60", VA = "0x182EF4660")]
	private static extern void set_width_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600095E")]
	[Address(RVA = "0x2EF3990", Offset = "0x2EF1F90", VA = "0x182EF3990")]
	private static extern int get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600095F")]
	[Address(RVA = "0x2EF4300", Offset = "0x2EF2900", VA = "0x182EF4300")]
	private static extern void set_height_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000960")]
	[Address(RVA = "0x2EF35E0", Offset = "0x2EF1BE0", VA = "0x182EF35E0")]
	private static extern TextureDimension get_dimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000961")]
	[Address(RVA = "0x2EF4150", Offset = "0x2EF2750", VA = "0x182EF4150")]
	private static extern void set_dimension_Injected(IntPtr _unity_self, TextureDimension value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000962")]
	[Address(RVA = "0x2EF0B20", Offset = "0x2EEF120", VA = "0x182EF0B20")]
	private static extern GraphicsFormat GetColorFormat_Injected(IntPtr _unity_self, bool suppressWarnings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000963")]
	[Address(RVA = "0x2EF1740", Offset = "0x2EEFD40", VA = "0x182EF1740")]
	private static extern void SetColorFormat_Injected(IntPtr _unity_self, GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000964")]
	[Address(RVA = "0x2EF3C90", Offset = "0x2EF2290", VA = "0x182EF3C90")]
	private static extern bool get_useMipMap_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000965")]
	[Address(RVA = "0x2EF44B0", Offset = "0x2EF2AB0", VA = "0x182EF44B0")]
	private static extern void set_useMipMap_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000966")]
	[Address(RVA = "0x2EF3A50", Offset = "0x2EF2050", VA = "0x182EF3A50")]
	private static extern bool get_sRGB_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000967")]
	[Address(RVA = "0x2EF3440", Offset = "0x2EF1A40", VA = "0x182EF3440")]
	private static extern GraphicsFormat get_depthStencilFormat_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000968")]
	[Address(RVA = "0x2EF4080", Offset = "0x2EF2680", VA = "0x182EF4080")]
	private static extern void set_depthStencilFormat_Injected(IntPtr _unity_self, GraphicsFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000969")]
	[Address(RVA = "0x2EF3FA0", Offset = "0x2EF25A0", VA = "0x182EF3FA0")]
	private static extern void set_autoGenerateMips_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096A")]
	[Address(RVA = "0x2EF3D50", Offset = "0x2EF2350", VA = "0x182EF3D50")]
	private static extern int get_volumeDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096B")]
	[Address(RVA = "0x2EF4590", Offset = "0x2EF2B90", VA = "0x182EF4590")]
	private static extern void set_volumeDepth_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096C")]
	[Address(RVA = "0x2EF3160", Offset = "0x2EF1760", VA = "0x182EF3160")]
	private static extern int get_antiAliasing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096D")]
	[Address(RVA = "0x2EF3ED0", Offset = "0x2EF24D0", VA = "0x182EF3ED0")]
	private static extern void set_antiAliasing_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096E")]
	[Address(RVA = "0x2EF3220", Offset = "0x2EF1820", VA = "0x182EF3220")]
	private static extern bool get_bindTextureMS_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096F")]
	[Address(RVA = "0x2EF4220", Offset = "0x2EF2820", VA = "0x182EF4220")]
	private static extern void set_enableRandomWrite_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000970")]
	[Address(RVA = "0x2EF3BD0", Offset = "0x2EF21D0", VA = "0x182EF3BD0")]
	private static extern bool get_useDynamicScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000971")]
	[Address(RVA = "0x2EF43D0", Offset = "0x2EF29D0", VA = "0x182EF43D0")]
	private static extern void set_useDynamicScale_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000972")]
	[Address(RVA = "0x2EF3B10", Offset = "0x2EF2110", VA = "0x182EF3B10")]
	private static extern bool get_useDynamicScaleExplicit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000973")]
	[Address(RVA = "0x2EF36A0", Offset = "0x2EF1CA0", VA = "0x182EF36A0")]
	private static extern bool get_enableShadingRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000974")]
	[Address(RVA = "0x2EF0830", Offset = "0x2EEEE30", VA = "0x182EF0830")]
	private static extern void ApplyDynamicScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000975")]
	[Address(RVA = "0x2EF09B0", Offset = "0x2EEEFB0", VA = "0x182EF09B0")]
	private static extern IntPtr GetActive_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000976")]
	[Address(RVA = "0x2EF1690", Offset = "0x2EEFC90", VA = "0x182EF1690")]
	private static extern void SetActive_Injected(IntPtr rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000977")]
	[Address(RVA = "0x2EF0A40", Offset = "0x2EEF040", VA = "0x182EF0A40")]
	private static extern void GetColorBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000978")]
	[Address(RVA = "0x2EF0D80", Offset = "0x2EEF380", VA = "0x182EF0D80")]
	private static extern void GetDepthBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000979")]
	[Address(RVA = "0x2EF1810", Offset = "0x2EEFE10", VA = "0x182EF1810")]
	private static extern void SetMipMapCount_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097A")]
	[Address(RVA = "0x2EF1AA0", Offset = "0x2EF00A0", VA = "0x182EF1AA0")]
	private static extern void SetShadowSamplingMode_Injected(IntPtr _unity_self, ShadowSamplingMode samplingMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097B")]
	[Address(RVA = "0x2EF08F0", Offset = "0x2EEEEF0", VA = "0x182EF08F0")]
	private static extern bool Create_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097C")]
	[Address(RVA = "0x2EF15D0", Offset = "0x2EEFBD0", VA = "0x182EF15D0")]
	private static extern void Release_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097D")]
	[Address(RVA = "0x2EF19C0", Offset = "0x2EEFFC0", VA = "0x182EF19C0")]
	private static extern void SetSRGBReadWrite_Injected(IntPtr _unity_self, bool srgb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097E")]
	[Address(RVA = "0x2EF18E0", Offset = "0x2EEFEE0", VA = "0x182EF18E0")]
	private static extern void SetRenderTextureDescriptor_Injected(IntPtr _unity_self, [In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097F")]
	[Address(RVA = "0x2EF0FD0", Offset = "0x2EEF5D0", VA = "0x182EF0FD0")]
	private static extern void GetDescriptor_Injected(IntPtr _unity_self, out RenderTextureDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000980")]
	[Address(RVA = "0x2EF10D0", Offset = "0x2EEF6D0", VA = "0x182EF10D0")]
	private static extern IntPtr GetTemporary_Internal_Injected([In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000981")]
	[Address(RVA = "0x2EF1520", Offset = "0x2EEFB20", VA = "0x182EF1520")]
	private static extern void ReleaseTemporary_Injected(IntPtr temp);
}
