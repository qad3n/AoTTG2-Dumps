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

[Token(Token = "0x2000102")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapTexture.h")]
[ExcludeFromPreset]
public sealed class Cubemap : Texture
{
	[Token(Token = "0x17000131")]
	public override bool isReadable
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x4DD9EC0", Offset = "0x4DD9EC0", VA = "0x4DD9EC0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4DD9CB0", Offset = "0x4DD9CB0", VA = "0x4DD9CB0")]
	[UnityEngine.Bindings.FreeFunction("CubemapScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x4DD9D10", Offset = "0x4DD9D10", VA = "0x4DD9D10")]
	private static void Internal_Create([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4DD9DD0", Offset = "0x4DD9DD0", VA = "0x4DD9DD0")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x4DD9F90", Offset = "0x4DD9F90", VA = "0x4DD9F90")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x4DDA0C0", Offset = "0x4DDA0C0", VA = "0x4DDA0C0")]
	internal bool ValidateFormat(TextureFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x4DDA1A0", Offset = "0x4DDA1A0", VA = "0x4DDA1A0")]
	internal bool ValidateFormat(GraphicsFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x4DDA2C0", Offset = "0x4DDA2C0", VA = "0x4DDA2C0")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x4DDA3B0", Offset = "0x4DDA3B0", VA = "0x4DDA3B0")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x4DDA340", Offset = "0x4DDA340", VA = "0x4DDA340")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x4DDA3F0", Offset = "0x4DDA3F0", VA = "0x4DDA3F0")]
	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x4DDA550", Offset = "0x4DDA550", VA = "0x4DDA550")]
	internal Cubemap(int width, TextureFormat textureFormat, int mipCount, IntPtr nativeTex, bool createUninitialized)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4DDA6E0", Offset = "0x4DDA6E0", VA = "0x4DDA6E0")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x4DDA760", Offset = "0x4DDA760", VA = "0x4DDA760")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x4DDA7F0", Offset = "0x4DDA7F0", VA = "0x4DDA7F0")]
	public Cubemap(int width, TextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x4DDA800", Offset = "0x4DDA800", VA = "0x4DDA800")]
	public Cubemap(int width, TextureFormat format, int mipCount, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x4DDA810", Offset = "0x4DDA810", VA = "0x4DDA810")]
	[ExcludeFromDocs]
	public void SetPixel(CubemapFace face, int x, int y, Color color)
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x4DDA820", Offset = "0x4DDA820", VA = "0x4DDA820")]
	public void SetPixel(CubemapFace face, int x, int y, Color color, [DefaultValue("0")] int mip)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x4DDA940", Offset = "0x4DDA940", VA = "0x4DDA940")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4DDAA30", Offset = "0x4DDAA30", VA = "0x4DDAA30")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x4DDA500", Offset = "0x4DDA500", VA = "0x4DDA500")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x4DD9E80", Offset = "0x4DD9E80", VA = "0x4DD9E80")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000645")]
	[Address(RVA = "0x4DD9F60", Offset = "0x4DD9F60", VA = "0x4DD9F60")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000646")]
	[Address(RVA = "0x4DDA060", Offset = "0x4DDA060", VA = "0x4DDA060")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);
}
