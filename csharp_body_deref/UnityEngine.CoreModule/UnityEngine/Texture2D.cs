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

[Token(Token = "0x2000101")]
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

	[Token(Token = "0x1700012D")]
	public TextureFormat format
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x4DD7890", Offset = "0x4DD7890", VA = "0x4DD7890")]
		[UnityEngine.Bindings.NativeName("GetTextureFormat")]
		get
		{
			return default(TextureFormat);
		}
	}

	[Token(Token = "0x1700012E")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static extern Texture2D whiteTexture
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x4DD7960", Offset = "0x4DD7960", VA = "0x4DD7960")]
		get;
	}

	[Token(Token = "0x1700012F")]
	[UnityEngine.Bindings.StaticAccessor("builtintex", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static extern Texture2D blackTexture
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x4DD7990", Offset = "0x4DD7990", VA = "0x4DD7990")]
		get;
	}

	[Token(Token = "0x17000130")]
	public override bool isReadable
	{
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x4DD7B30", Offset = "0x4DD7B30", VA = "0x4DD7B30", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4DD79C0", Offset = "0x4DD79C0", VA = "0x4DD79C0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::CreateEmpty")]
	private static extern bool Internal_CreateEmptyImpl([UnityEngine.Writable] Texture2D mono);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4DD79F0", Offset = "0x4DD79F0", VA = "0x4DD79F0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName);

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4DD7A50", Offset = "0x4DD7A50", VA = "0x4DD7A50")]
	private static void Internal_Create([UnityEngine.Writable] Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4DD7C00", Offset = "0x4DD7C00", VA = "0x4DD7C00")]
	[UnityEngine.Bindings.NativeName("Apply")]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4DD7CF0", Offset = "0x4DD7CF0", VA = "0x4DD7CF0")]
	[UnityEngine.Bindings.NativeName("Reinitialize")]
	private bool ReinitializeImpl(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4DD7DE0", Offset = "0x4DD7DE0", VA = "0x4DD7DE0")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4DD7F10", Offset = "0x4DD7F10", VA = "0x4DD7F10")]
	[UnityEngine.Bindings.NativeName("GetPixelBilinear")]
	private Color GetPixelBilinearImpl(int image, int mip, float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4DD8050", Offset = "0x4DD8050", VA = "0x4DD8050")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReinitializeWithTextureFormat", HasExplicitThis = true)]
	private bool ReinitializeWithTextureFormatImpl(int width, int height, TextureFormat textureFormat, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4DD8160", Offset = "0x4DD8160", VA = "0x4DD8160")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::ReadPixels", HasExplicitThis = true)]
	private void ReadPixelsImpl(Rect source, int destX, int destY, bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x4DD8280", Offset = "0x4DD8280", VA = "0x4DD8280")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	private void SetPixelsImpl(int x, int y, int w, int h, Color[] pixel, int miplevel, int frame)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4DD8430", Offset = "0x4DD8430", VA = "0x4DD8430")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture2DScripting::LoadRawData", HasExplicitThis = true)]
	private bool LoadRawTextureDataImplArray(byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x4DD8590", Offset = "0x4DD8590", VA = "0x4DD8590")]
	private IntPtr GetWritableImageData(int frame)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x4DD8670", Offset = "0x4DD8670", VA = "0x4DD8670")]
	private ulong GetRawImageDataSize()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x4DD8740", Offset = "0x4DD8740", VA = "0x4DD8740")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::SetAllPixels32", HasExplicitThis = true, ThrowsException = true)]
	private void SetAllPixels32(Color32[] colors, int miplevel)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x4DD88A0", Offset = "0x4DD88A0", VA = "0x4DD88A0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
	public Color[] GetPixels(int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x4DD89D0", Offset = "0x4DD89D0", VA = "0x4DD89D0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DScripting::GetPixels32", HasExplicitThis = true, ThrowsException = true)]
	public Color32[] GetPixels32([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4DD8AB0", Offset = "0x4DD8AB0", VA = "0x4DD8AB0")]
	[ExcludeFromDocs]
	public Color32[] GetPixels32()
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x4DD8B50", Offset = "0x4DD8B50", VA = "0x4DD8B50")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4DD8C70", Offset = "0x4DD8C70", VA = "0x4DD8C70")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4DD8DA0", Offset = "0x4DD8DA0", VA = "0x4DD8DA0")]
	internal Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags, int mipCount, IntPtr nativeTex, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4DD8E70", Offset = "0x4DD8E70", VA = "0x4DD8E70")]
	[ExcludeFromDocs]
	public Texture2D(int width, int height, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4DD8F00", Offset = "0x4DD8F00", VA = "0x4DD8F00")]
	internal Texture2D(int width, int height, TextureFormat textureFormat, int mipCount, bool linear, IntPtr nativeTex, bool createUninitialized, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4DD9070", Offset = "0x4DD9070", VA = "0x4DD9070")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("-1")] int mipCount, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4DD9090", Offset = "0x4DD9090", VA = "0x4DD9090")]
	public Texture2D(int width, int height, [DefaultValue("TextureFormat.RGBA32")] TextureFormat textureFormat, [DefaultValue("true")] bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x4DD9130", Offset = "0x4DD9130", VA = "0x4DD9130")]
	public Texture2D(int width, int height, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x4DD91D0", Offset = "0x4DD91D0", VA = "0x4DD91D0")]
	public Texture2D(int width, int height)
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x4DD9310", Offset = "0x4DD9310", VA = "0x4DD9310")]
	[ExcludeFromDocs]
	public void SetPixel(int x, int y, Color color)
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x4DD9420", Offset = "0x4DD9420", VA = "0x4DD9420")]
	public void SetPixels(int x, int y, int blockWidth, int blockHeight, Color[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x4DD94B0", Offset = "0x4DD94B0", VA = "0x4DD94B0")]
	[ExcludeFromDocs]
	public void SetPixels(Color[] colors)
	{
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x4DD9550", Offset = "0x4DD9550", VA = "0x4DD9550")]
	[ExcludeFromDocs]
	public Color GetPixelBilinear(float u, float v)
	{
		return default(Color);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x4DD95C0", Offset = "0x4DD95C0", VA = "0x4DD95C0")]
	public void LoadRawTextureData(byte[] data)
	{
	}

	[Token(Token = "0x6000612")]
	public NativeArray<T> GetRawTextureData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x4DD96C0", Offset = "0x4DD96C0", VA = "0x4DD96C0")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x4DD97B0", Offset = "0x4DD97B0", VA = "0x4DD97B0")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x4DD97C0", Offset = "0x4DD97C0", VA = "0x4DD97C0")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x4DD97D0", Offset = "0x4DD97D0", VA = "0x4DD97D0")]
	public bool Reinitialize(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x4DD98C0", Offset = "0x4DD98C0", VA = "0x4DD98C0")]
	public bool Reinitialize(int width, int height, TextureFormat format, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x4DD9980", Offset = "0x4DD9980", VA = "0x4DD9980")]
	[Obsolete("Texture2D.Resize(int, int) has been deprecated because it actually reinitializes the texture. Use Texture2D.Reinitialize(int, int) instead (UnityUpgradable) -> Reinitialize([*] System.Int32, [*] System.Int32)", false)]
	public bool Resize(int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4DD9990", Offset = "0x4DD9990", VA = "0x4DD9990")]
	[Obsolete("Texture2D.Resize(int, int, TextureFormat, bool) has been deprecated because it actually reinitializes the texture. Use Texture2D.Reinitialize(int, int, TextureFormat, bool) instead (UnityUpgradable) -> Reinitialize([*] System.Int32, [*] System.Int32, UnityEngine.TextureFormat, [*] System.Boolean)", false)]
	public bool Resize(int width, int height, TextureFormat format, bool hasMipMap)
	{
		return default(bool);
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4DD9A50", Offset = "0x4DD9A50", VA = "0x4DD9A50")]
	public void ReadPixels(Rect source, int destX, int destY, [DefaultValue("true")] bool recalculateMipMaps)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4DD9B70", Offset = "0x4DD9B70", VA = "0x4DD9B70")]
	[ExcludeFromDocs]
	public void ReadPixels(Rect source, int destX, int destY)
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x4DD9B80", Offset = "0x4DD9B80", VA = "0x4DD9B80")]
	public void SetPixels32(Color32[] colors, [DefaultValue("0")] int miplevel)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4DD9B90", Offset = "0x4DD9B90", VA = "0x4DD9B90")]
	[ExcludeFromDocs]
	public void SetPixels32(Color32[] colors)
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4DD9BA0", Offset = "0x4DD9BA0", VA = "0x4DD9BA0")]
	public Color[] GetPixels([DefaultValue("0")] int miplevel)
	{
		return null;
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4DD9CA0", Offset = "0x4DD9CA0", VA = "0x4DD9CA0")]
	[ExcludeFromDocs]
	public Color[] GetPixels()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4DD7930", Offset = "0x4DD7930", VA = "0x4DD7930")]
	private static extern TextureFormat get_format_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4DD7BD0", Offset = "0x4DD7BD0", VA = "0x4DD7BD0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4DD7CB0", Offset = "0x4DD7CB0", VA = "0x4DD7CB0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4DD7DA0", Offset = "0x4DD7DA0", VA = "0x4DD7DA0")]
	private static extern bool ReinitializeImpl_Injected(IntPtr _unity_self, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4DD7EB0", Offset = "0x4DD7EB0", VA = "0x4DD7EB0")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4DD7FF0", Offset = "0x4DD7FF0", VA = "0x4DD7FF0")]
	private static extern void GetPixelBilinearImpl_Injected(IntPtr _unity_self, int image, int mip, float u, float v, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4DD8110", Offset = "0x4DD8110", VA = "0x4DD8110")]
	private static extern bool ReinitializeWithTextureFormatImpl_Injected(IntPtr _unity_self, int width, int height, TextureFormat textureFormat, bool hasMipMap);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4DD8230", Offset = "0x4DD8230", VA = "0x4DD8230")]
	private static extern void ReadPixelsImpl_Injected(IntPtr _unity_self, [In] ref Rect source, int destX, int destY, bool recalculateMipMaps);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4DD83D0", Offset = "0x4DD83D0", VA = "0x4DD83D0")]
	private static extern void SetPixelsImpl_Injected(IntPtr _unity_self, int x, int y, int w, int h, ref ManagedSpanWrapper pixel, int miplevel, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4DD8550", Offset = "0x4DD8550", VA = "0x4DD8550")]
	private static extern bool LoadRawTextureDataImplArray_Injected(IntPtr _unity_self, ref ManagedSpanWrapper data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062A")]
	[Address(RVA = "0x4DD8630", Offset = "0x4DD8630", VA = "0x4DD8630")]
	private static extern IntPtr GetWritableImageData_Injected(IntPtr _unity_self, int frame);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4DD8710", Offset = "0x4DD8710", VA = "0x4DD8710")]
	private static extern ulong GetRawImageDataSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4DD8860", Offset = "0x4DD8860", VA = "0x4DD8860")]
	private static extern void SetAllPixels32_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4DD8970", Offset = "0x4DD8970", VA = "0x4DD8970")]
	private static extern Color[] GetPixels_Injected(IntPtr _unity_self, int x, int y, int blockWidth, int blockHeight, [DefaultValue("0")] int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062E")]
	[Address(RVA = "0x4DD8A70", Offset = "0x4DD8A70", VA = "0x4DD8A70")]
	private static extern Color32[] GetPixels32_Injected(IntPtr _unity_self, [DefaultValue("0")] int miplevel);
}
