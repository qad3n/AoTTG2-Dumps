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

[Token(Token = "0x200012B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderBufferManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
public class RenderTexture : Texture
{
	[Token(Token = "0x17000191")]
	public override int width
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x68F4630", Offset = "0x68F3630", VA = "0x68F4630", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x68F46E0", Offset = "0x68F36E0", VA = "0x68F46E0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	public override int height
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x68F47A0", Offset = "0x68F37A0", VA = "0x68F47A0", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x68F4850", Offset = "0x68F3850", VA = "0x68F4850", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public override TextureDimension dimension
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x68F4910", Offset = "0x68F3910", VA = "0x68F4910", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x68F49C0", Offset = "0x68F39C0", VA = "0x68F49C0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public new GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x68F4C00", Offset = "0x68F3C00", VA = "0x68F4C00")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x68F4C80", Offset = "0x68F3C80", VA = "0x68F4C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000195")]
	[UnityEngine.Bindings.NativeProperty("MipMap")]
	public bool useMipMap
	{
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x68F4D00", Offset = "0x68F3D00", VA = "0x68F4D00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x68F4DB0", Offset = "0x68F3DB0", VA = "0x68F4DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000196")]
	[UnityEngine.Bindings.NativeProperty("SRGBReadWrite")]
	public bool sRGB
	{
		[Token(Token = "0x6000930")]
		[Address(RVA = "0x68F4E70", Offset = "0x68F3E70", VA = "0x68F4E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000197")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x68F4F20", Offset = "0x68F3F20", VA = "0x68F4F20")]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x17000198")]
	public GraphicsFormat depthStencilFormat
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x68F5220", Offset = "0x68F4220", VA = "0x68F5220")]
		get
		{
			return default(GraphicsFormat);
		}
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x68F52D0", Offset = "0x68F42D0", VA = "0x68F52D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public bool autoGenerateMips
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x68F5390", Offset = "0x68F4390", VA = "0x68F5390")]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public int volumeDepth
	{
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x68F5450", Offset = "0x68F4450", VA = "0x68F5450")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x68F5500", Offset = "0x68F4500", VA = "0x68F5500")]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public int antiAliasing
	{
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x68F55C0", Offset = "0x68F45C0", VA = "0x68F55C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x68F5670", Offset = "0x68F4670", VA = "0x68F5670")]
		set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public bool bindTextureMS
	{
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x68F5730", Offset = "0x68F4730", VA = "0x68F5730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public bool enableRandomWrite
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x68F57E0", Offset = "0x68F47E0", VA = "0x68F57E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	public bool useDynamicScale
	{
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x68F58A0", Offset = "0x68F48A0", VA = "0x68F58A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x68F5950", Offset = "0x68F4950", VA = "0x68F5950")]
		set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public bool useDynamicScaleExplicit
	{
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x68F5A10", Offset = "0x68F4A10", VA = "0x68F5A10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A0")]
	public bool enableShadingRate
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x68F5AC0", Offset = "0x68F4AC0", VA = "0x68F5AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A1")]
	public static RenderTexture active
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x68F5D70", Offset = "0x68F4D70", VA = "0x68F5D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000943")]
		[Address(RVA = "0x68F5DD0", Offset = "0x68F4DD0", VA = "0x68F5DD0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public RenderBuffer colorBuffer
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x68F6180", Offset = "0x68F5180", VA = "0x68F6180")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x170001A3")]
	public RenderBuffer depthBuffer
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x68F6210", Offset = "0x68F5210", VA = "0x68F6210")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x170001A4")]
	public RenderTextureDescriptor descriptor
	{
		[Token(Token = "0x6000964")]
		[Address(RVA = "0x68F70A0", Offset = "0x68F60A0", VA = "0x68F70A0")]
		get
		{
			return default(RenderTextureDescriptor);
		}
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x68F4A80", Offset = "0x68F3A80", VA = "0x68F4A80")]
	[UnityEngine.Bindings.NativeName("GetColorFormat")]
	private GraphicsFormat GetColorFormat(bool suppressWarnings)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x68F4B40", Offset = "0x68F3B40", VA = "0x68F4B40")]
	[UnityEngine.Bindings.NativeName("SetColorFormat")]
	private void SetColorFormat(GraphicsFormat format)
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x68F5B70", Offset = "0x68F4B70", VA = "0x68F5B70")]
	public void ApplyDynamicScale()
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x68F5C20", Offset = "0x68F4C20", VA = "0x68F5C20")]
	[UnityEngine.Bindings.FreeFunction("RenderTexture::GetActiveAsRenderTexture")]
	private static RenderTexture GetActive()
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x68F5CB0", Offset = "0x68F4CB0", VA = "0x68F5CB0")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::SetActive")]
	private static void SetActive(RenderTexture rt)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x68F5E60", Offset = "0x68F4E60", VA = "0x68F5E60")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetColorBuffer", HasExplicitThis = true)]
	private RenderBuffer GetColorBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x68F5F30", Offset = "0x68F4F30", VA = "0x68F5F30")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderTextureScripting::GetDepthBuffer", HasExplicitThis = true)]
	private RenderBuffer GetDepthBuffer()
	{
		return default(RenderBuffer);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x68F6000", Offset = "0x68F5000", VA = "0x68F6000")]
	private void SetMipMapCount(int count)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x68F60C0", Offset = "0x68F50C0", VA = "0x68F60C0")]
	internal void SetShadowSamplingMode(ShadowSamplingMode samplingMode)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x68F62A0", Offset = "0x68F52A0", VA = "0x68F62A0")]
	public bool Create()
	{
		return default(bool);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x68F6350", Offset = "0x68F5350", VA = "0x68F6350")]
	public void Release()
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x68F6400", Offset = "0x68F5400", VA = "0x68F6400")]
	internal void SetSRGBReadWrite(bool srgb)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600094D")]
	[Address(RVA = "0x68F64C0", Offset = "0x68F54C0", VA = "0x68F64C0")]
	[UnityEngine.Bindings.FreeFunction("RenderTextureScripting::Create")]
	private static extern void Internal_Create([UnityEngine.Writable] RenderTexture rt);

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x68F64F0", Offset = "0x68F54F0", VA = "0x68F64F0")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureDescFromScript")]
	private void SetRenderTextureDescriptor(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x68F5150", Offset = "0x68F4150", VA = "0x68F5150")]
	[UnityEngine.Bindings.NativeName("GetRenderTextureDesc")]
	private RenderTextureDescriptor GetDescriptor()
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x68F6600", Offset = "0x68F5600", VA = "0x68F6600")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().GetTempBuffer")]
	private static RenderTexture GetTemporary_Internal(RenderTextureDescriptor desc)
	{
		return null;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x68F6690", Offset = "0x68F5690", VA = "0x68F6690")]
	[UnityEngine.Bindings.FreeFunction("GetRenderBufferManager().GetTextures().ReleaseTempBuffer")]
	public static void ReleaseTemporary(RenderTexture temp)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x68F6750", Offset = "0x68F5750", VA = "0x68F6750")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected internal RenderTexture()
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x68F6810", Offset = "0x68F5810", VA = "0x68F6810")]
	public RenderTexture(RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x68F6DB0", Offset = "0x68F5DB0", VA = "0x68F6DB0")]
	public RenderTexture(RenderTexture textureToCopy)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x68F7180", Offset = "0x68F6180", VA = "0x68F7180")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, DefaultFormat format)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x68F7740", Offset = "0x68F6740", VA = "0x68F7740")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x68F77C0", Offset = "0x68F67C0", VA = "0x68F77C0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format, int mipCount)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x68F7350", Offset = "0x68F6350", VA = "0x68F7350")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x68F7CB0", Offset = "0x68F6CB0", VA = "0x68F7CB0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x68F7D30", Offset = "0x68F6D30", VA = "0x68F7D30")]
	public RenderTexture(int width, int height, int depth, [DefaultValue("RenderTextureFormat.Default")] RenderTextureFormat format, [DefaultValue("RenderTextureReadWrite.Default")] RenderTextureReadWrite readWrite)
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x68F8230", Offset = "0x68F7230", VA = "0x68F8230")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format)
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x68F83B0", Offset = "0x68F73B0", VA = "0x68F83B0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x68F82B0", Offset = "0x68F72B0", VA = "0x68F82B0")]
	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x68F7E50", Offset = "0x68F6E50", VA = "0x68F7E50")]
	private void Initialize(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite, int mipCount)
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x68F7C30", Offset = "0x68F6C30", VA = "0x68F7C30")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, GraphicsFormat colorFormat)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x68F8550", Offset = "0x68F7550", VA = "0x68F8550")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, RenderTextureFormat format, bool disableFallback = false)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x68F8730", Offset = "0x68F7730", VA = "0x68F8730")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x68F8740", Offset = "0x68F7740", VA = "0x68F8740")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, ShadowSamplingMode shadowSamplingMode)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x68F85A0", Offset = "0x68F75A0", VA = "0x68F85A0")]
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, bool requestedShadowMap)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x68F6990", Offset = "0x68F5990", VA = "0x68F6990")]
	private static void ValidateRenderTextureDesc(ref RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x68F7300", Offset = "0x68F6300", VA = "0x68F7300")]
	internal static GraphicsFormat GetDefaultColorFormat(DefaultFormat format)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x68F7320", Offset = "0x68F6320", VA = "0x68F7320")]
	internal static GraphicsFormat GetDefaultDepthStencilFormat(DefaultFormat format, int depth)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x68F8590", Offset = "0x68F7590", VA = "0x68F8590")]
	internal static ShadowSamplingMode GetShadowSamplingModeForFormat(RenderTextureFormat format)
	{
		return default(ShadowSamplingMode);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x68F7730", Offset = "0x68F6730", VA = "0x68F7730")]
	internal static ShadowSamplingMode GetShadowSamplingModeForFormat(DefaultFormat format)
	{
		return default(ShadowSamplingMode);
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x68F8690", Offset = "0x68F7690", VA = "0x68F8690")]
	internal static void WarnAboutFallbackTo16BitsDepth(RenderTextureFormat format)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x68F8430", Offset = "0x68F7430", VA = "0x68F8430")]
	internal static GraphicsFormat GetCompatibleFormat(RenderTextureFormat renderTextureFormat, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x68F87D0", Offset = "0x68F77D0", VA = "0x68F87D0")]
	public static RenderTexture GetTemporary(RenderTextureDescriptor desc)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096D")]
	[Address(RVA = "0x68F46B0", Offset = "0x68F36B0", VA = "0x68F46B0")]
	private static extern int get_width_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096E")]
	[Address(RVA = "0x68F4760", Offset = "0x68F3760", VA = "0x68F4760")]
	private static extern void set_width_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096F")]
	[Address(RVA = "0x68F4820", Offset = "0x68F3820", VA = "0x68F4820")]
	private static extern int get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000970")]
	[Address(RVA = "0x68F48D0", Offset = "0x68F38D0", VA = "0x68F48D0")]
	private static extern void set_height_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000971")]
	[Address(RVA = "0x68F4990", Offset = "0x68F3990", VA = "0x68F4990")]
	private static extern TextureDimension get_dimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000972")]
	[Address(RVA = "0x68F4A40", Offset = "0x68F3A40", VA = "0x68F4A40")]
	private static extern void set_dimension_Injected(IntPtr _unity_self, TextureDimension value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000973")]
	[Address(RVA = "0x68F4B00", Offset = "0x68F3B00", VA = "0x68F4B00")]
	private static extern GraphicsFormat GetColorFormat_Injected(IntPtr _unity_self, bool suppressWarnings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000974")]
	[Address(RVA = "0x68F4BC0", Offset = "0x68F3BC0", VA = "0x68F4BC0")]
	private static extern void SetColorFormat_Injected(IntPtr _unity_self, GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000975")]
	[Address(RVA = "0x68F4D80", Offset = "0x68F3D80", VA = "0x68F4D80")]
	private static extern bool get_useMipMap_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000976")]
	[Address(RVA = "0x68F4E30", Offset = "0x68F3E30", VA = "0x68F4E30")]
	private static extern void set_useMipMap_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000977")]
	[Address(RVA = "0x68F4EF0", Offset = "0x68F3EF0", VA = "0x68F4EF0")]
	private static extern bool get_sRGB_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000978")]
	[Address(RVA = "0x68F52A0", Offset = "0x68F42A0", VA = "0x68F52A0")]
	private static extern GraphicsFormat get_depthStencilFormat_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000979")]
	[Address(RVA = "0x68F5350", Offset = "0x68F4350", VA = "0x68F5350")]
	private static extern void set_depthStencilFormat_Injected(IntPtr _unity_self, GraphicsFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097A")]
	[Address(RVA = "0x68F5410", Offset = "0x68F4410", VA = "0x68F5410")]
	private static extern void set_autoGenerateMips_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097B")]
	[Address(RVA = "0x68F54D0", Offset = "0x68F44D0", VA = "0x68F54D0")]
	private static extern int get_volumeDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097C")]
	[Address(RVA = "0x68F5580", Offset = "0x68F4580", VA = "0x68F5580")]
	private static extern void set_volumeDepth_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097D")]
	[Address(RVA = "0x68F5640", Offset = "0x68F4640", VA = "0x68F5640")]
	private static extern int get_antiAliasing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097E")]
	[Address(RVA = "0x68F56F0", Offset = "0x68F46F0", VA = "0x68F56F0")]
	private static extern void set_antiAliasing_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600097F")]
	[Address(RVA = "0x68F57B0", Offset = "0x68F47B0", VA = "0x68F57B0")]
	private static extern bool get_bindTextureMS_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000980")]
	[Address(RVA = "0x68F5860", Offset = "0x68F4860", VA = "0x68F5860")]
	private static extern void set_enableRandomWrite_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000981")]
	[Address(RVA = "0x68F5920", Offset = "0x68F4920", VA = "0x68F5920")]
	private static extern bool get_useDynamicScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000982")]
	[Address(RVA = "0x68F59D0", Offset = "0x68F49D0", VA = "0x68F59D0")]
	private static extern void set_useDynamicScale_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000983")]
	[Address(RVA = "0x68F5A90", Offset = "0x68F4A90", VA = "0x68F5A90")]
	private static extern bool get_useDynamicScaleExplicit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000984")]
	[Address(RVA = "0x68F5B40", Offset = "0x68F4B40", VA = "0x68F5B40")]
	private static extern bool get_enableShadingRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000985")]
	[Address(RVA = "0x68F5BF0", Offset = "0x68F4BF0", VA = "0x68F5BF0")]
	private static extern void ApplyDynamicScale_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000986")]
	[Address(RVA = "0x68F5C80", Offset = "0x68F4C80", VA = "0x68F5C80")]
	private static extern IntPtr GetActive_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000987")]
	[Address(RVA = "0x68F5D40", Offset = "0x68F4D40", VA = "0x68F5D40")]
	private static extern void SetActive_Injected(IntPtr rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000988")]
	[Address(RVA = "0x68F5EF0", Offset = "0x68F4EF0", VA = "0x68F5EF0")]
	private static extern void GetColorBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000989")]
	[Address(RVA = "0x68F5FC0", Offset = "0x68F4FC0", VA = "0x68F5FC0")]
	private static extern void GetDepthBuffer_Injected(IntPtr _unity_self, out RenderBuffer ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098A")]
	[Address(RVA = "0x68F6080", Offset = "0x68F5080", VA = "0x68F6080")]
	private static extern void SetMipMapCount_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098B")]
	[Address(RVA = "0x68F6140", Offset = "0x68F5140", VA = "0x68F6140")]
	private static extern void SetShadowSamplingMode_Injected(IntPtr _unity_self, ShadowSamplingMode samplingMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098C")]
	[Address(RVA = "0x68F6320", Offset = "0x68F5320", VA = "0x68F6320")]
	private static extern bool Create_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098D")]
	[Address(RVA = "0x68F63D0", Offset = "0x68F53D0", VA = "0x68F63D0")]
	private static extern void Release_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098E")]
	[Address(RVA = "0x68F6480", Offset = "0x68F5480", VA = "0x68F6480")]
	private static extern void SetSRGBReadWrite_Injected(IntPtr _unity_self, bool srgb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098F")]
	[Address(RVA = "0x68F6580", Offset = "0x68F5580", VA = "0x68F6580")]
	private static extern void SetRenderTextureDescriptor_Injected(IntPtr _unity_self, [In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000990")]
	[Address(RVA = "0x68F65C0", Offset = "0x68F55C0", VA = "0x68F65C0")]
	private static extern void GetDescriptor_Injected(IntPtr _unity_self, out RenderTextureDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000991")]
	[Address(RVA = "0x68F6660", Offset = "0x68F5660", VA = "0x68F6660")]
	private static extern IntPtr GetTemporary_Internal_Injected([In] ref RenderTextureDescriptor desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000992")]
	[Address(RVA = "0x68F6720", Offset = "0x68F5720", VA = "0x68F6720")]
	private static extern void ReleaseTemporary_Injected(IntPtr temp);
}
