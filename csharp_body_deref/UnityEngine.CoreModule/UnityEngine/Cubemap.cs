using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000FF")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapTexture.h")]
[ExcludeFromPreset]
public sealed class Cubemap : Texture
{
	[Token(Token = "0x17000130")]
	public override bool isReadable
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x4AB2590", Offset = "0x4AB2590", VA = "0x4AB2590", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4AB2380", Offset = "0x4AB2380", VA = "0x4AB2380")]
	[UnityEngine.Bindings.FreeFunction("CubemapScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x4AB23E0", Offset = "0x4AB23E0", VA = "0x4AB23E0")]
	private static void Internal_Create([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4AB24A0", Offset = "0x4AB24A0", VA = "0x4AB24A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4AB2660", Offset = "0x4AB2660", VA = "0x4AB2660")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x4AB2790", Offset = "0x4AB2790", VA = "0x4AB2790")]
	internal bool ValidateFormat(TextureFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x4AB2870", Offset = "0x4AB2870", VA = "0x4AB2870")]
	internal bool ValidateFormat(GraphicsFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x4AB2990", Offset = "0x4AB2990", VA = "0x4AB2990")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x4AB2A80", Offset = "0x4AB2A80", VA = "0x4AB2A80")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x4AB2A10", Offset = "0x4AB2A10", VA = "0x4AB2A10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x4AB2AC0", Offset = "0x4AB2AC0", VA = "0x4AB2AC0")]
	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x4AB2C20", Offset = "0x4AB2C20", VA = "0x4AB2C20")]
	internal Cubemap(int width, TextureFormat textureFormat, int mipCount, IntPtr nativeTex, bool createUninitialized)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x4AB2DB0", Offset = "0x4AB2DB0", VA = "0x4AB2DB0")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x4AB2E30", Offset = "0x4AB2E30", VA = "0x4AB2E30")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4AB2EC0", Offset = "0x4AB2EC0", VA = "0x4AB2EC0")]
	public Cubemap(int width, TextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x4AB2ED0", Offset = "0x4AB2ED0", VA = "0x4AB2ED0")]
	public Cubemap(int width, TextureFormat format, int mipCount, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x4AB2EE0", Offset = "0x4AB2EE0", VA = "0x4AB2EE0")]
	[ExcludeFromDocs]
	public void SetPixel(CubemapFace face, int x, int y, Color color)
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x4AB2EF0", Offset = "0x4AB2EF0", VA = "0x4AB2EF0")]
	public void SetPixel(CubemapFace face, int x, int y, Color color, [DefaultValue("0")] int mip)
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x4AB3010", Offset = "0x4AB3010", VA = "0x4AB3010")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x4AB3100", Offset = "0x4AB3100", VA = "0x4AB3100")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x4AB2BD0", Offset = "0x4AB2BD0", VA = "0x4AB2BD0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4AB2550", Offset = "0x4AB2550", VA = "0x4AB2550")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000643")]
	[Address(RVA = "0x4AB2630", Offset = "0x4AB2630", VA = "0x4AB2630")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x4AB2730", Offset = "0x4AB2730", VA = "0x4AB2730")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);
}
