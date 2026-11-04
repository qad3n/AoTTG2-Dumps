// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Cubemap
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000126")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapTexture.h")]
public sealed class Cubemap : Texture
{
	[Token(Token = "0x17000187")]
	public override bool isReadable
	{
		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x2ED9380", Offset = "0x2ED7980", VA = "0x182ED9380", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x2ED8560", Offset = "0x2ED6B60", VA = "0x182ED8560")]
	[UnityEngine.Bindings.FreeFunction("CubemapScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x2ED85B0", Offset = "0x2ED6BB0", VA = "0x182ED85B0")]
	private static void Internal_Create([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x2ED8340", Offset = "0x2ED6940", VA = "0x182ED8340")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x2ED86C0", Offset = "0x2ED6CC0", VA = "0x182ED86C0")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x2ED8950", Offset = "0x2ED6F50", VA = "0x182ED8950")]
	internal bool ValidateFormat(TextureFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x2ED8A10", Offset = "0x2ED7010", VA = "0x182ED8A10")]
	internal bool ValidateFormat(GraphicsFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x2ED8C30", Offset = "0x2ED7230", VA = "0x182ED8C30")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x2ED8CC0", Offset = "0x2ED72C0", VA = "0x182ED8CC0")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x2ED8D10", Offset = "0x2ED7310", VA = "0x182ED8D10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x2ED8D90", Offset = "0x2ED7390", VA = "0x182ED8D90")]
	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x2ED90C0", Offset = "0x2ED76C0", VA = "0x182ED90C0")]
	internal Cubemap(int width, TextureFormat textureFormat, int mipCount, IntPtr nativeTex, bool createUninitialized)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x2ED9000", Offset = "0x2ED7600", VA = "0x182ED9000")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x2ED8B90", Offset = "0x2ED7190", VA = "0x182ED8B90")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x2ED8FE0", Offset = "0x2ED75E0", VA = "0x182ED8FE0")]
	public Cubemap(int width, TextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x2ED9090", Offset = "0x2ED7690", VA = "0x182ED9090")]
	public Cubemap(int width, TextureFormat format, int mipCount, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x2ED8770", Offset = "0x2ED6D70", VA = "0x182ED8770")]
	[ExcludeFromDocs]
	public void SetPixel(CubemapFace face, int x, int y, Color color)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x2ED8860", Offset = "0x2ED6E60", VA = "0x182ED8860")]
	public void SetPixel(CubemapFace face, int x, int y, Color color, [DefaultValue("0")] int mip)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x2ED8490", Offset = "0x2ED6A90", VA = "0x182ED8490")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x2ED83E0", Offset = "0x2ED69E0", VA = "0x182ED83E0")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x2ED8B30", Offset = "0x2ED7130", VA = "0x182ED8B30")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x2ED82E0", Offset = "0x2ED68E0", VA = "0x182ED82E0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x2ED9340", Offset = "0x2ED7940", VA = "0x182ED9340")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x2ED8670", Offset = "0x2ED6C70", VA = "0x182ED8670")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);
}
