// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture2D
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000125")]
[ExcludeFromPreset]
[UnityEngine.Scripting.UsedByNativeCode]
[HelpURL("texture-type-default")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture2D.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GeneratedTextures.h")]
public sealed class Texture2D : Texture
{
	[Token(Token = "0x40003A3")]
	internal const int streamingMipmapsPriorityMin = -128;

	[Token(Token = "0x40003A4")]
	internal const int streamingMipmapsPriorityMax = 127;

	[Token(Token = "0x17000183")]
	public TextureFormat format
	{
		[Token(Token = "0x6000874")]
		[Address(RVA = "0x2EFC7B0", Offset = "0x2EFADB0", VA = "0x182EFC7B0")]
		[UnityEngine.Bindings.NativeName("GetTextureFormat")]
		get
		{
			return default(TextureFormat);
		}
	}

	[Token(Token = "0x17000184")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Texture2D whiteTexture
	{
		[Token(Token = "0x6000875")]
		[Address(RVA = "0x2EFC920", Offset = "0x2EFAF20", VA = "0x182EFC920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000185")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Texture2D blackTexture
	{
		[Token(Token = "0x6000876")]
		[Address(RVA = "0x2EFC710", Offset = "0x2EFAD10", VA = "0x182EFC710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public override bool isReadable
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x2EFC870", Offset = "0x2EFAE70", VA = "0x182EFC870", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000877")]
	[Address(RVA = "0x2EFA770", Offset = "0x2EF8D70", VA = "0x182EFA770")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::CreateEmpty")]
	private static extern bool Internal_CreateEmptyImpl([UnityEngine.Writable] Texture2D mono);

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x2EFA810", Offset = "0x2EF8E10", VA = "0x182EFA810")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::Create")]
	private static bool Internal_CreateImpl([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x2EFAA30", Offset = "0x2EF9030", VA = "0x182EFAA30")]
	private static void Internal_Create([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x2EF9E60", Offset = "0x2EF8460", VA = "0x182EF9E60")]
	[UnityEngine.Bindings.NativeName("Apply")]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x2EFB120", Offset = "0x2EF9720", VA = "0x182EFB120")]
	[UnityEngine.Bindings.NativeName("Reinitialize")]
	private bool ReinitializeImpl(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x2EFB560", Offset = "0x2EF9B60", VA = "0x182EFB560")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x2EFA110", Offset = "0x2EF8710", VA = "0x182EFA110")]
	[UnityEngine.Bindings.NativeName("GetPixelBilinear")]
	private Color GetPixelBilinearImpl(int image, int mip, float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x2EFB220", Offset = "0x2EF9820", VA = "0x182EFB220")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReinitializeWithTextureFormat", HasExplicitThis = true)]
	private bool ReinitializeWithTextureFormatImpl(int width, int height, TextureFormat textureFormat, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x2EFAE90", Offset = "0x2EF9490", VA = "0x182EFAE90")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReadPixels", HasExplicitThis = true)]
	private void ReadPixelsImpl(Rect source, int destX, int destY, bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x2EFB840", Offset = "0x2EF9E40", VA = "0x182EFB840")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	private void SetPixelsImpl(int x, int y, int w, int h, Color[] pixel, int miplevel, int frame)
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x2EFAB40", Offset = "0x2EF9140", VA = "0x182EFAB40")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::LoadRawData", HasExplicitThis = true)]
	private bool LoadRawTextureDataImplArray(byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x2EFA6E0", Offset = "0x2EF8CE0", VA = "0x182EFA6E0")]
	private IntPtr GetWritableImageData(int frame)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x2EFA030", Offset = "0x2EF8630", VA = "0x182EFA030")]
	private ulong GetImageDataSize()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x2EFB3F0", Offset = "0x2EF99F0", VA = "0x182EFB3F0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::SetAllPixels32", HasExplicitThis = true, ThrowsException = true)]
	private void SetAllPixels32(Color32[] colors, int miplevel)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x2EFA600", Offset = "0x2EF8C00", VA = "0x182EFA600")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
	public Color[] GetPixels(int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x2EFA320", Offset = "0x2EF8920", VA = "0x182EFA320")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels32", HasExplicitThis = true, ThrowsException = true)]
	public Color32[] GetPixels32([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x2EFA3B0", Offset = "0x2EF89B0", VA = "0x182EFA3B0")]
	[ExcludeFromDocs]
	public Color32[] GetPixels32()
	{
		return null;
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x2EFBDB0", Offset = "0x2EFA3B0", VA = "0x182EFBDB0")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x2EFBCA0", Offset = "0x2EFA2A0", VA = "0x182EFBCA0")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x2EFC0D0", Offset = "0x2EFA6D0", VA = "0x182EFC0D0")]
	internal Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags, int mipCount, IntPtr nativeTex, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x2EFBE90", Offset = "0x2EFA490", VA = "0x182EFBE90")]
	[ExcludeFromDocs]
	public Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x2EFC330", Offset = "0x2EFA930", VA = "0x182EFC330")]
	internal Texture2D(int width, int height, TextureFormat textureFormat, int mipCount, bool linear, IntPtr nativeTex, bool createUninitialized, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x2EFC520", Offset = "0x2EFAB20", VA = "0x182EFC520")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("-1")] int mipCount, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x2EFC570", Offset = "0x2EFAB70", VA = "0x182EFC570")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("true")] bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x2EFC630", Offset = "0x2EFAC30", VA = "0x182EFC630")]
	public Texture2D(int width, int height, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x2EFBF30", Offset = "0x2EFA530", VA = "0x182EFBF30")]
	public Texture2D(int width, int height)
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x2EFB610", Offset = "0x2EF9C10", VA = "0x182EFB610")]
	[ExcludeFromDocs]
	public void SetPixel(int x, int y, Color color)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x2EFB990", Offset = "0x2EF9F90", VA = "0x182EFB990")]
	public void SetPixels(int x, int y, int blockWidth, int blockHeight, Color[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x2EFBB10", Offset = "0x2EFA110", VA = "0x182EFBB10")]
	[ExcludeFromDocs]
	public void SetPixels(Color[] colors)
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x2EFA1D0", Offset = "0x2EF87D0", VA = "0x182EFA1D0")]
	[ExcludeFromDocs]
	public Color GetPixelBilinear(float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x2EFAC50", Offset = "0x2EF9250", VA = "0x182EFAC50")]
	public void LoadRawTextureData(byte[] data)
	{
	}

	[Token(Token = "0x6000897")]
	public NativeArray<T> GetRawTextureData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x2EF9F00", Offset = "0x2EF8500", VA = "0x182EF9F00")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x2EF9FE0", Offset = "0x2EF85E0", VA = "0x182EF9FE0")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x2EF9FD0", Offset = "0x2EF85D0", VA = "0x182EF9FD0")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x2EFB2C0", Offset = "0x2EF98C0", VA = "0x182EFB2C0")]
	public bool Reinitialize(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x2EFB220", Offset = "0x2EF9820", VA = "0x182EFB220")]
	public bool Reinitialize(int width, int height, TextureFormat format, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x2EFB000", Offset = "0x2EF9600", VA = "0x182EFB000")]
	public void ReadPixels(Rect source, int destX, int destY, [DefaultValue("true")] bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x2EFAF30", Offset = "0x2EF9530", VA = "0x182EFAF30")]
	[ExcludeFromDocs]
	public void ReadPixels(Rect source, int destX, int destY)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x2EFB3F0", Offset = "0x2EF99F0", VA = "0x182EFB3F0")]
	public void SetPixels32(Color32[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x2EFB6E0", Offset = "0x2EF9CE0", VA = "0x182EFB6E0")]
	[ExcludeFromDocs]
	public void SetPixels32(Color32[] colors)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x2EFA480", Offset = "0x2EF8A80", VA = "0x182EFA480")]
	public Color[] GetPixels([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x2EFA540", Offset = "0x2EF8B40", VA = "0x182EFA540")]
	[ExcludeFromDocs]
	public Color[] GetPixels()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x2EFC770", Offset = "0x2EFAD70", VA = "0x182EFC770")]
	private static extern TextureFormat get_format_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x2EFC8F0", Offset = "0x2EFAEF0", VA = "0x182EFC8F0")]
	private static extern IntPtr get_whiteTexture_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x2EFC6E0", Offset = "0x2EFACE0", VA = "0x182EFC6E0")]
	private static extern IntPtr get_blackTexture_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x2EFA7B0", Offset = "0x2EF8DB0", VA = "0x182EFA7B0")]
	private static extern bool Internal_CreateImpl_Injected([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, bool ignoreMipmapLimit, ref ManagedSpanWrapper mipmapLimitGroupName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x2EFC830", Offset = "0x2EFAE30", VA = "0x182EFC830")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x2EF9E00", Offset = "0x2EF8400", VA = "0x182EF9E00")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x2EFB0D0", Offset = "0x2EF96D0", VA = "0x182EFB0D0")]
	private static extern bool ReinitializeImpl_Injected(IntPtr _unity_self, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x2EFB510", Offset = "0x2EF9B10", VA = "0x182EFB510")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x2EFA0B0", Offset = "0x2EF86B0", VA = "0x182EFA0B0")]
	private static extern void GetPixelBilinearImpl_Injected(IntPtr _unity_self, int image, int mip, float u, float v, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x2EFB1C0", Offset = "0x2EF97C0", VA = "0x182EFB1C0")]
	private static extern bool ReinitializeWithTextureFormatImpl_Injected(IntPtr _unity_self, int width, int height, TextureFormat textureFormat, bool hasMipMap);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x2EFAE30", Offset = "0x2EF9430", VA = "0x182EFAE30")]
	private static extern void ReadPixelsImpl_Injected(IntPtr _unity_self, [In] ref Rect source, int destX, int destY, bool recalculateMipMaps);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x2EFB7F0", Offset = "0x2EF9DF0", VA = "0x182EFB7F0")]
	private static extern void SetPixelsImpl_Injected(IntPtr _unity_self, int x, int y, int w, int h, ref ManagedSpanWrapper pixel, int miplevel, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x2EFAAF0", Offset = "0x2EF90F0", VA = "0x182EFAAF0")]
	private static extern bool LoadRawTextureDataImplArray_Injected(IntPtr _unity_self, ref ManagedSpanWrapper data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x2EFA6A0", Offset = "0x2EF8CA0", VA = "0x182EFA6A0")]
	private static extern IntPtr GetWritableImageData_Injected(IntPtr _unity_self, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x2EF9FF0", Offset = "0x2EF85F0", VA = "0x182EF9FF0")]
	private static extern ulong GetImageDataSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x2EFB390", Offset = "0x2EF9990", VA = "0x182EFB390")]
	private static extern void SetAllPixels32_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x2EFA430", Offset = "0x2EF8A30", VA = "0x182EFA430")]
	private static extern Color[] GetPixels_Injected(IntPtr _unity_self, int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x2EFA2E0", Offset = "0x2EF88E0", VA = "0x182EFA2E0")]
	private static extern Color32[] GetPixels32_Injected(IntPtr _unity_self, [DefaultValue("0")] int miplevel);
}
