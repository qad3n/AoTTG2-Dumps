// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture2DArray
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000129")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture2DArray.h")]
public sealed class Texture2DArray : Texture
{
	[Token(Token = "0x1700018E")]
	public static extern int allSlices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60008FA")]
		[Address(RVA = "0x68F2960", Offset = "0x68F1960", VA = "0x68F2960")]
		[UnityEngine.Bindings.NativeName("GetAllTextureLayersIdentifier")]
		get;
	}

	[Token(Token = "0x1700018F")]
	public override bool isReadable
	{
		[Token(Token = "0x60008FB")]
		[Address(RVA = "0x68F2990", Offset = "0x68F1990", VA = "0x68F2990", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x68F2A40", Offset = "0x68F1A40", VA = "0x68F2A40")]
	[UnityEngine.Bindings.FreeFunction("Texture2DArrayScripting::Create")]
	private static bool Internal_CreateImpl([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x68F2C70", Offset = "0x68F1C70", VA = "0x68F2C70")]
	private static void Internal_Create([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x68F2CF0", Offset = "0x68F1CF0", VA = "0x68F2CF0")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x68F2DE0", Offset = "0x68F1DE0", VA = "0x68F2DE0")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x68F2F20", Offset = "0x68F1F20", VA = "0x68F2F20")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x68F3080", Offset = "0x68F2080", VA = "0x68F3080")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x68F3120", Offset = "0x68F2120", VA = "0x68F3120")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x68F2FD0", Offset = "0x68F1FD0", VA = "0x68F2FD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x68F30F0", Offset = "0x68F20F0", VA = "0x68F30F0")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x68F3180", Offset = "0x68F2180", VA = "0x68F3180")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x68F3410", Offset = "0x68F2410", VA = "0x68F3410")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized, MipmapLimitDescriptor mipmapLimitDescriptor)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x68F3690", Offset = "0x68F2690", VA = "0x68F3690")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x68F36D0", Offset = "0x68F26D0", VA = "0x68F36D0")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x68F3710", Offset = "0x68F2710", VA = "0x68F3710")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x68F37E0", Offset = "0x68F27E0", VA = "0x68F37E0")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x68F38B0", Offset = "0x68F28B0", VA = "0x68F38B0")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x68F33C0", Offset = "0x68F23C0", VA = "0x68F33C0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600090D")]
	[Address(RVA = "0x68F2A10", Offset = "0x68F1A10", VA = "0x68F2A10")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600090E")]
	[Address(RVA = "0x68F2C10", Offset = "0x68F1C10", VA = "0x68F2C10")]
	private static extern bool Internal_CreateImpl_Injected([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, bool ignoreMipmapLimit, ref ManagedSpanWrapper mipmapLimitGroupName);
}
