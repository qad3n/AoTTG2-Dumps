// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture2DArray
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000128")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture2DArray.h")]
public sealed class Texture2DArray : Texture
{
	[Token(Token = "0x17000189")]
	public static extern int allSlices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x2EF9D10", Offset = "0x2EF8310", VA = "0x182EF9D10")]
		[UnityEngine.Bindings.NativeName("GetAllTextureLayersIdentifier")]
		get;
	}

	[Token(Token = "0x1700018A")]
	public override bool isReadable
	{
		[Token(Token = "0x60008EA")]
		[Address(RVA = "0x2EF9D80", Offset = "0x2EF8380", VA = "0x182EF9D80", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x2EF8C60", Offset = "0x2EF7260", VA = "0x182EF8C60")]
	[UnityEngine.Bindings.FreeFunction("Texture2DArrayScripting::Create")]
	private static bool Internal_CreateImpl([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x2EF8E80", Offset = "0x2EF7480", VA = "0x182EF8E80")]
	private static void Internal_Create([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x2EF9050", Offset = "0x2EF7650", VA = "0x182EF9050")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x2EF8F40", Offset = "0x2EF7540", VA = "0x182EF8F40")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x2EF9C50", Offset = "0x2EF8250", VA = "0x182EF9C50")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x2EF9250", Offset = "0x2EF7850", VA = "0x182EF9250")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x2EF9330", Offset = "0x2EF7930", VA = "0x182EF9330")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x2EF93B0", Offset = "0x2EF79B0", VA = "0x182EF93B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x2EF9720", Offset = "0x2EF7D20", VA = "0x182EF9720")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x2EF9460", Offset = "0x2EF7A60", VA = "0x182EF9460")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x2EF9960", Offset = "0x2EF7F60", VA = "0x182EF9960")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x2EF92D0", Offset = "0x2EF78D0", VA = "0x182EF92D0")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x2EF9770", Offset = "0x2EF7D70", VA = "0x182EF9770")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x2EF9890", Offset = "0x2EF7E90", VA = "0x182EF9890")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x2EF97D0", Offset = "0x2EF7DD0", VA = "0x182EF97D0")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x2EF9190", Offset = "0x2EF7790", VA = "0x182EF9190")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x2EF9130", Offset = "0x2EF7730", VA = "0x182EF9130")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x2EF9D40", Offset = "0x2EF8340", VA = "0x182EF9D40")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x2EF8C00", Offset = "0x2EF7200", VA = "0x182EF8C00")]
	private static extern bool Internal_CreateImpl_Injected([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, bool ignoreMipmapLimit, ref ManagedSpanWrapper mipmapLimitGroupName);
}
