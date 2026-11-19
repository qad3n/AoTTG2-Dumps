// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000126")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture2D.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[HelpURL("texture-type-default")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GeneratedTextures.h")]
[ExcludeFromPreset]
public sealed class Texture2D : Texture
{
	[Token(Token = "0x40003A8")]
	internal const int streamingMipmapsPriorityMin = -128;

	[Token(Token = "0x40003A9")]
	internal const int streamingMipmapsPriorityMax = 127;

	[Token(Token = "0x17000188")]
	public TextureFormat format
	{
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x68EE330", Offset = "0x68ED330", VA = "0x68EE330")]
		[UnityEngine.Bindings.NativeName("GetTextureFormat")]
		get
		{
			return default(TextureFormat);
		}
	}

	[Token(Token = "0x17000189")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Texture2D whiteTexture
	{
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x68EE3E0", Offset = "0x68ED3E0", VA = "0x68EE3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018A")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Texture2D blackTexture
	{
		[Token(Token = "0x6000884")]
		[Address(RVA = "0x68EE470", Offset = "0x68ED470", VA = "0x68EE470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018B")]
	public override bool isReadable
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x68EE7E0", Offset = "0x68ED7E0", VA = "0x68EE7E0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000885")]
	[Address(RVA = "0x68EE500", Offset = "0x68ED500", VA = "0x68EE500")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::CreateEmpty")]
	private static extern bool Internal_CreateEmptyImpl([UnityEngine.Writable] Texture2D mono);

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x68EE530", Offset = "0x68ED530", VA = "0x68EE530")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::Create")]
	private static bool Internal_CreateImpl([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x68EE760", Offset = "0x68ED760", VA = "0x68EE760")]
	private static void Internal_Create([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x68EE890", Offset = "0x68ED890", VA = "0x68EE890")]
	[UnityEngine.Bindings.NativeName("Apply")]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x68EE960", Offset = "0x68ED960", VA = "0x68EE960")]
	[UnityEngine.Bindings.NativeName("Reinitialize")]
	private bool ReinitializeImpl(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x68EEA30", Offset = "0x68EDA30", VA = "0x68EEA30")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x68EEB40", Offset = "0x68EDB40", VA = "0x68EEB40")]
	[UnityEngine.Bindings.NativeName("GetPixelBilinear")]
	private Color GetPixelBilinearImpl(int image, int mip, float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x68EEC60", Offset = "0x68EDC60", VA = "0x68EEC60")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReinitializeWithTextureFormat", HasExplicitThis = true)]
	private bool ReinitializeWithTextureFormatImpl(int width, int height, TextureFormat textureFormat, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x68EED50", Offset = "0x68EDD50", VA = "0x68EED50")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReadPixels", HasExplicitThis = true)]
	private void ReadPixelsImpl(Rect source, int destX, int destY, bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x68EEE50", Offset = "0x68EDE50", VA = "0x68EEE50")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	private void SetPixelsImpl(int x, int y, int w, int h, Color[] pixel, int miplevel, int frame)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x68EEFF0", Offset = "0x68EDFF0", VA = "0x68EEFF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::LoadRawData", HasExplicitThis = true)]
	private bool LoadRawTextureDataImplArray(byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x68EF130", Offset = "0x68EE130", VA = "0x68EF130")]
	private IntPtr GetWritableImageData(int frame)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x68EF1F0", Offset = "0x68EE1F0", VA = "0x68EF1F0")]
	private ulong GetImageDataSize()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x68EF2A0", Offset = "0x68EE2A0", VA = "0x68EF2A0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::SetAllPixels32", HasExplicitThis = true, ThrowsException = true)]
	private void SetAllPixels32(Color32[] colors, int miplevel)
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x68EF3F0", Offset = "0x68EE3F0", VA = "0x68EF3F0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
	public Color[] GetPixels(int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x68EF500", Offset = "0x68EE500", VA = "0x68EF500")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels32", HasExplicitThis = true, ThrowsException = true)]
	public Color32[] GetPixels32([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x68EF5C0", Offset = "0x68EE5C0", VA = "0x68EF5C0")]
	[ExcludeFromDocs]
	public Color32[] GetPixels32()
	{
		return null;
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x68EF640", Offset = "0x68EE640", VA = "0x68EF640")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x68EF730", Offset = "0x68EE730", VA = "0x68EF730")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x68EF870", Offset = "0x68EE870", VA = "0x68EF870")]
	internal Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags, int mipCount, IntPtr nativeTex, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x68EFA70", Offset = "0x68EEA70", VA = "0x68EFA70")]
	[ExcludeFromDocs]
	public Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x68EFB10", Offset = "0x68EEB10", VA = "0x68EFB10")]
	internal Texture2D(int width, int height, TextureFormat textureFormat, int mipCount, bool linear, IntPtr nativeTex, bool createUninitialized, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x68EFD40", Offset = "0x68EED40", VA = "0x68EFD40")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("-1")] int mipCount, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x68EFD70", Offset = "0x68EED70", VA = "0x68EFD70")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("true")] bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x68EFE30", Offset = "0x68EEE30", VA = "0x68EFE30")]
	public Texture2D(int width, int height, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x68EFEE0", Offset = "0x68EEEE0", VA = "0x68EFEE0")]
	public Texture2D(int width, int height)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x68F00E0", Offset = "0x68EF0E0", VA = "0x68F00E0")]
	[ExcludeFromDocs]
	public void SetPixel(int x, int y, Color color)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x68F01D0", Offset = "0x68EF1D0", VA = "0x68F01D0")]
	public void SetPixels(int x, int y, int blockWidth, int blockHeight, Color[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x68F0260", Offset = "0x68EF260", VA = "0x68F0260")]
	[ExcludeFromDocs]
	public void SetPixels(Color[] colors)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x68F0300", Offset = "0x68EF300", VA = "0x68F0300")]
	[ExcludeFromDocs]
	public Color GetPixelBilinear(float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x68F03F0", Offset = "0x68EF3F0", VA = "0x68F03F0")]
	public void LoadRawTextureData(byte[] data)
	{
	}

	[Token(Token = "0x60008A5")]
	public NativeArray<T> GetRawTextureData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x68F04F0", Offset = "0x68EF4F0", VA = "0x68F04F0")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x68F05C0", Offset = "0x68EF5C0", VA = "0x68F05C0")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x68F05D0", Offset = "0x68EF5D0", VA = "0x68F05D0")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x68F05E0", Offset = "0x68EF5E0", VA = "0x68F05E0")]
	public bool Reinitialize(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x68F06A0", Offset = "0x68EF6A0", VA = "0x68F06A0")]
	public bool Reinitialize(int width, int height, TextureFormat format, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x68F0740", Offset = "0x68EF740", VA = "0x68F0740")]
	public void ReadPixels(Rect source, int destX, int destY, [DefaultValue("true")] bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x68F0830", Offset = "0x68EF830", VA = "0x68F0830")]
	[ExcludeFromDocs]
	public void ReadPixels(Rect source, int destX, int destY)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x68F0840", Offset = "0x68EF840", VA = "0x68F0840")]
	public void SetPixels32(Color32[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x68F0850", Offset = "0x68EF850", VA = "0x68F0850")]
	[ExcludeFromDocs]
	public void SetPixels32(Color32[] colors)
	{
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x68F0860", Offset = "0x68EF860", VA = "0x68F0860")]
	public Color[] GetPixels([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x68F0940", Offset = "0x68EF940", VA = "0x68F0940")]
	[ExcludeFromDocs]
	public Color[] GetPixels()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x68EE3B0", Offset = "0x68ED3B0", VA = "0x68EE3B0")]
	private static extern TextureFormat get_format_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x68EE440", Offset = "0x68ED440", VA = "0x68EE440")]
	private static extern IntPtr get_whiteTexture_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x68EE4D0", Offset = "0x68ED4D0", VA = "0x68EE4D0")]
	private static extern IntPtr get_blackTexture_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x68EE700", Offset = "0x68ED700", VA = "0x68EE700")]
	private static extern bool Internal_CreateImpl_Injected([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, bool ignoreMipmapLimit, ref ManagedSpanWrapper mipmapLimitGroupName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x68EE860", Offset = "0x68ED860", VA = "0x68EE860")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x68EE920", Offset = "0x68ED920", VA = "0x68EE920")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x68EE9F0", Offset = "0x68ED9F0", VA = "0x68EE9F0")]
	private static extern bool ReinitializeImpl_Injected(IntPtr _unity_self, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x68EEAE0", Offset = "0x68EDAE0", VA = "0x68EEAE0")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x68EEC00", Offset = "0x68EDC00", VA = "0x68EEC00")]
	private static extern void GetPixelBilinearImpl_Injected(IntPtr _unity_self, int image, int mip, float u, float v, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x68EED00", Offset = "0x68EDD00", VA = "0x68EED00")]
	private static extern bool ReinitializeWithTextureFormatImpl_Injected(IntPtr _unity_self, int width, int height, TextureFormat textureFormat, bool hasMipMap);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x68EEE00", Offset = "0x68EDE00", VA = "0x68EEE00")]
	private static extern void ReadPixelsImpl_Injected(IntPtr _unity_self, [In] ref Rect source, int destX, int destY, bool recalculateMipMaps);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x68EEF90", Offset = "0x68EDF90", VA = "0x68EEF90")]
	private static extern void SetPixelsImpl_Injected(IntPtr _unity_self, int x, int y, int w, int h, ref ManagedSpanWrapper pixel, int miplevel, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x68EF0F0", Offset = "0x68EE0F0", VA = "0x68EF0F0")]
	private static extern bool LoadRawTextureDataImplArray_Injected(IntPtr _unity_self, ref ManagedSpanWrapper data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x68EF1B0", Offset = "0x68EE1B0", VA = "0x68EF1B0")]
	private static extern IntPtr GetWritableImageData_Injected(IntPtr _unity_self, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x68EF270", Offset = "0x68EE270", VA = "0x68EF270")]
	private static extern ulong GetImageDataSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x68EF3B0", Offset = "0x68EE3B0", VA = "0x68EF3B0")]
	private static extern void SetAllPixels32_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x68EF4A0", Offset = "0x68EE4A0", VA = "0x68EF4A0")]
	private static extern Color[] GetPixels_Injected(IntPtr _unity_self, int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x68EF580", Offset = "0x68EE580", VA = "0x68EF580")]
	private static extern Color32[] GetPixels32_Injected(IntPtr _unity_self, [DefaultValue("0")] int miplevel);
}
