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

[Token(Token = "0x20000FE")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GeneratedTextures.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture2D.h")]
public sealed class Texture2D : Texture
{
	[Token(Token = "0x4000347")]
	internal const int streamingMipmapsPriorityMin = -128;

	[Token(Token = "0x4000348")]
	internal const int streamingMipmapsPriorityMax = 127;

	[Token(Token = "0x1700012C")]
	public TextureFormat format
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x4AAFF60", Offset = "0x4AAFF60", VA = "0x4AAFF60")]
		[UnityEngine.Bindings.NativeName("GetTextureFormat")]
		get
		{
			return default(TextureFormat);
		}
	}

	[Token(Token = "0x1700012D")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static extern Texture2D whiteTexture
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x4AB0030", Offset = "0x4AB0030", VA = "0x4AB0030")]
		get;
	}

	[Token(Token = "0x1700012E")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static extern Texture2D blackTexture
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x4AB0060", Offset = "0x4AB0060", VA = "0x4AB0060")]
		get;
	}

	[Token(Token = "0x1700012F")]
	public override bool isReadable
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x4AB0200", Offset = "0x4AB0200", VA = "0x4AB0200", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4AB0090", Offset = "0x4AB0090", VA = "0x4AB0090")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::CreateEmpty")]
	private static extern bool Internal_CreateEmptyImpl([UnityEngine.Writable] Texture2D mono);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4AB00C0", Offset = "0x4AB00C0", VA = "0x4AB00C0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName);

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4AB0120", Offset = "0x4AB0120", VA = "0x4AB0120")]
	private static void Internal_Create([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4AB02D0", Offset = "0x4AB02D0", VA = "0x4AB02D0")]
	[UnityEngine.Bindings.NativeName("Apply")]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4AB03C0", Offset = "0x4AB03C0", VA = "0x4AB03C0")]
	[UnityEngine.Bindings.NativeName("Reinitialize")]
	private bool ReinitializeImpl(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4AB04B0", Offset = "0x4AB04B0", VA = "0x4AB04B0")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4AB05E0", Offset = "0x4AB05E0", VA = "0x4AB05E0")]
	[UnityEngine.Bindings.NativeName("GetPixelBilinear")]
	private Color GetPixelBilinearImpl(int image, int mip, float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4AB0720", Offset = "0x4AB0720", VA = "0x4AB0720")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReinitializeWithTextureFormat", HasExplicitThis = true)]
	private bool ReinitializeWithTextureFormatImpl(int width, int height, TextureFormat textureFormat, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4AB0830", Offset = "0x4AB0830", VA = "0x4AB0830")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReadPixels", HasExplicitThis = true)]
	private void ReadPixelsImpl(Rect source, int destX, int destY, bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4AB0950", Offset = "0x4AB0950", VA = "0x4AB0950")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	private void SetPixelsImpl(int x, int y, int w, int h, Color[] pixel, int miplevel, int frame)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4AB0B00", Offset = "0x4AB0B00", VA = "0x4AB0B00")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::LoadRawData", HasExplicitThis = true)]
	private bool LoadRawTextureDataImplArray(byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x4AB0C60", Offset = "0x4AB0C60", VA = "0x4AB0C60")]
	private IntPtr GetWritableImageData(int frame)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4AB0D40", Offset = "0x4AB0D40", VA = "0x4AB0D40")]
	private ulong GetRawImageDataSize()
	{
		return default(ulong);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x4AB0E10", Offset = "0x4AB0E10", VA = "0x4AB0E10")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::SetAllPixels32", HasExplicitThis = true, ThrowsException = true)]
	private void SetAllPixels32(Color32[] colors, int miplevel)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x4AB0F70", Offset = "0x4AB0F70", VA = "0x4AB0F70")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
	public Color[] GetPixels(int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x4AB10A0", Offset = "0x4AB10A0", VA = "0x4AB10A0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels32", HasExplicitThis = true, ThrowsException = true)]
	public Color32[] GetPixels32([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x4AB1180", Offset = "0x4AB1180", VA = "0x4AB1180")]
	[ExcludeFromDocs]
	public Color32[] GetPixels32()
	{
		return null;
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x4AB1220", Offset = "0x4AB1220", VA = "0x4AB1220")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4AB1340", Offset = "0x4AB1340", VA = "0x4AB1340")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x4AB1470", Offset = "0x4AB1470", VA = "0x4AB1470")]
	internal Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags, int mipCount, IntPtr nativeTex, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4AB1540", Offset = "0x4AB1540", VA = "0x4AB1540")]
	[ExcludeFromDocs]
	public Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4AB15D0", Offset = "0x4AB15D0", VA = "0x4AB15D0")]
	internal Texture2D(int width, int height, TextureFormat textureFormat, int mipCount, bool linear, IntPtr nativeTex, bool createUninitialized, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4AB1740", Offset = "0x4AB1740", VA = "0x4AB1740")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("-1")] int mipCount, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4AB1760", Offset = "0x4AB1760", VA = "0x4AB1760")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("true")] bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4AB1800", Offset = "0x4AB1800", VA = "0x4AB1800")]
	public Texture2D(int width, int height, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4AB18A0", Offset = "0x4AB18A0", VA = "0x4AB18A0")]
	public Texture2D(int width, int height)
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x4AB19E0", Offset = "0x4AB19E0", VA = "0x4AB19E0")]
	[ExcludeFromDocs]
	public void SetPixel(int x, int y, Color color)
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x4AB1AF0", Offset = "0x4AB1AF0", VA = "0x4AB1AF0")]
	public void SetPixels(int x, int y, int blockWidth, int blockHeight, Color[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x4AB1B80", Offset = "0x4AB1B80", VA = "0x4AB1B80")]
	[ExcludeFromDocs]
	public void SetPixels(Color[] colors)
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x4AB1C20", Offset = "0x4AB1C20", VA = "0x4AB1C20")]
	[ExcludeFromDocs]
	public Color GetPixelBilinear(float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x4AB1C90", Offset = "0x4AB1C90", VA = "0x4AB1C90")]
	public void LoadRawTextureData(byte[] data)
	{
	}

	[Token(Token = "0x6000610")]
	public NativeArray<T> GetRawTextureData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x4AB1D90", Offset = "0x4AB1D90", VA = "0x4AB1D90")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x4AB1E80", Offset = "0x4AB1E80", VA = "0x4AB1E80")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x4AB1E90", Offset = "0x4AB1E90", VA = "0x4AB1E90")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x4AB1EA0", Offset = "0x4AB1EA0", VA = "0x4AB1EA0")]
	public bool Reinitialize(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x4AB1F90", Offset = "0x4AB1F90", VA = "0x4AB1F90")]
	public bool Reinitialize(int width, int height, TextureFormat format, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x4AB2050", Offset = "0x4AB2050", VA = "0x4AB2050")]
	[Obsolete("Texture2D.Resize(int, int) has been deprecated because it actually reinitializes the texture. Use Texture2D.Reinitialize(int, int) instead (UnityUpgradable) -> Reinitialize([*] System.Int32, [*] System.Int32)", false)]
	public bool Resize(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x4AB2060", Offset = "0x4AB2060", VA = "0x4AB2060")]
	[Obsolete("Texture2D.Resize(int, int, TextureFormat, bool) has been deprecated because it actually reinitializes the texture. Use Texture2D.Reinitialize(int, int, TextureFormat, bool) instead (UnityUpgradable) -> Reinitialize([*] System.Int32, [*] System.Int32, UnityEngine.TextureFormat, [*] System.Boolean)", false)]
	public bool Resize(int width, int height, TextureFormat format, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x4AB2120", Offset = "0x4AB2120", VA = "0x4AB2120")]
	public void ReadPixels(Rect source, int destX, int destY, [DefaultValue("true")] bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4AB2240", Offset = "0x4AB2240", VA = "0x4AB2240")]
	[ExcludeFromDocs]
	public void ReadPixels(Rect source, int destX, int destY)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4AB2250", Offset = "0x4AB2250", VA = "0x4AB2250")]
	public void SetPixels32(Color32[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4AB2260", Offset = "0x4AB2260", VA = "0x4AB2260")]
	[ExcludeFromDocs]
	public void SetPixels32(Color32[] colors)
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x4AB2270", Offset = "0x4AB2270", VA = "0x4AB2270")]
	public Color[] GetPixels([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4AB2370", Offset = "0x4AB2370", VA = "0x4AB2370")]
	[ExcludeFromDocs]
	public Color[] GetPixels()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4AB0000", Offset = "0x4AB0000", VA = "0x4AB0000")]
	private static extern TextureFormat get_format_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4AB02A0", Offset = "0x4AB02A0", VA = "0x4AB02A0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4AB0380", Offset = "0x4AB0380", VA = "0x4AB0380")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4AB0470", Offset = "0x4AB0470", VA = "0x4AB0470")]
	private static extern bool ReinitializeImpl_Injected(IntPtr _unity_self, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4AB0580", Offset = "0x4AB0580", VA = "0x4AB0580")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4AB06C0", Offset = "0x4AB06C0", VA = "0x4AB06C0")]
	private static extern void GetPixelBilinearImpl_Injected(IntPtr _unity_self, int image, int mip, float u, float v, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4AB07E0", Offset = "0x4AB07E0", VA = "0x4AB07E0")]
	private static extern bool ReinitializeWithTextureFormatImpl_Injected(IntPtr _unity_self, int width, int height, TextureFormat textureFormat, bool hasMipMap);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4AB0900", Offset = "0x4AB0900", VA = "0x4AB0900")]
	private static extern void ReadPixelsImpl_Injected(IntPtr _unity_self, [In] ref Rect source, int destX, int destY, bool recalculateMipMaps);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4AB0AA0", Offset = "0x4AB0AA0", VA = "0x4AB0AA0")]
	private static extern void SetPixelsImpl_Injected(IntPtr _unity_self, int x, int y, int w, int h, ref ManagedSpanWrapper pixel, int miplevel, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4AB0C20", Offset = "0x4AB0C20", VA = "0x4AB0C20")]
	private static extern bool LoadRawTextureDataImplArray_Injected(IntPtr _unity_self, ref ManagedSpanWrapper data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4AB0D00", Offset = "0x4AB0D00", VA = "0x4AB0D00")]
	private static extern IntPtr GetWritableImageData_Injected(IntPtr _unity_self, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4AB0DE0", Offset = "0x4AB0DE0", VA = "0x4AB0DE0")]
	private static extern ulong GetRawImageDataSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062A")]
	[Address(RVA = "0x4AB0F30", Offset = "0x4AB0F30", VA = "0x4AB0F30")]
	private static extern void SetAllPixels32_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4AB1040", Offset = "0x4AB1040", VA = "0x4AB1040")]
	private static extern Color[] GetPixels_Injected(IntPtr _unity_self, int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4AB1140", Offset = "0x4AB1140", VA = "0x4AB1140")]
	private static extern Color32[] GetPixels32_Injected(IntPtr _unity_self, [DefaultValue("0")] int miplevel);
}
