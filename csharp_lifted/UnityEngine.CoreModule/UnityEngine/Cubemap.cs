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

[Token(Token = "0x2000127")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapTexture.h")]
public sealed class Cubemap : Texture
{
	[Token(Token = "0x1700018C")]
	public override bool isReadable
	{
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x68F0C00", Offset = "0x68EFC00", VA = "0x68F0C00", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x68F0A10", Offset = "0x68EFA10", VA = "0x68F0A10")]
	[UnityEngine.Bindings.FreeFunction("CubemapScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x68F0A70", Offset = "0x68EFA70", VA = "0x68F0A70")]
	private static void Internal_Create([UnityEngine.Writable] Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x68F0B30", Offset = "0x68EFB30", VA = "0x68F0B30")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x68F0CB0", Offset = "0x68EFCB0", VA = "0x68F0CB0")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x68F0DC0", Offset = "0x68EFDC0", VA = "0x68F0DC0")]
	internal bool ValidateFormat(TextureFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x68F0EA0", Offset = "0x68EFEA0", VA = "0x68F0EA0")]
	internal bool ValidateFormat(GraphicsFormat format, int width)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x68F0FA0", Offset = "0x68EFFA0", VA = "0x68F0FA0")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x68F1090", Offset = "0x68F0090", VA = "0x68F1090")]
	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x68F1020", Offset = "0x68F0020", VA = "0x68F1020")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x68F10D0", Offset = "0x68F00D0", VA = "0x68F10D0")]
	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x68F1320", Offset = "0x68F0320", VA = "0x68F1320")]
	internal Cubemap(int width, TextureFormat textureFormat, int mipCount, IntPtr nativeTex, bool createUninitialized)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x68F1530", Offset = "0x68F0530", VA = "0x68F1530")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x68F15B0", Offset = "0x68F05B0", VA = "0x68F15B0")]
	public Cubemap(int width, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x68F1640", Offset = "0x68F0640", VA = "0x68F1640")]
	public Cubemap(int width, TextureFormat format, int mipCount)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x68F1650", Offset = "0x68F0650", VA = "0x68F1650")]
	public Cubemap(int width, TextureFormat format, int mipCount, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x68F1660", Offset = "0x68F0660", VA = "0x68F1660")]
	[ExcludeFromDocs]
	public void SetPixel(CubemapFace face, int x, int y, Color color)
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x68F1670", Offset = "0x68F0670", VA = "0x68F1670")]
	public void SetPixel(CubemapFace face, int x, int y, Color color, [DefaultValue("0")] int mip)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x68F1770", Offset = "0x68F0770", VA = "0x68F1770")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x68F1840", Offset = "0x68F0840", VA = "0x68F1840")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x68F12D0", Offset = "0x68F02D0", VA = "0x68F12D0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x68F0BC0", Offset = "0x68EFBC0", VA = "0x68F0BC0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x68F0C80", Offset = "0x68EFC80", VA = "0x68F0C80")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x68F0D60", Offset = "0x68EFD60", VA = "0x68F0D60")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int image, int mip, int x, int y, [In] ref Color color);
}
