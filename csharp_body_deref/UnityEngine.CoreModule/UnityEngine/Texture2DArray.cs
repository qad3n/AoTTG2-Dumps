using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000101")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture2DArray.h")]
public sealed class Texture2DArray : Texture
{
	[Token(Token = "0x17000133")]
	public static extern int allSlices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x4AB41C0", Offset = "0x4AB41C0", VA = "0x4AB41C0")]
		[UnityEngine.Bindings.NativeName("GetAllTextureLayersIdentifier")]
		get;
	}

	[Token(Token = "0x17000134")]
	public override bool isReadable
	{
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x4AB41F0", Offset = "0x4AB41F0", VA = "0x4AB41F0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000666")]
	[Address(RVA = "0x4AB42C0", Offset = "0x4AB42C0", VA = "0x4AB42C0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DArrayScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags);

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4AB4320", Offset = "0x4AB4320", VA = "0x4AB4320")]
	private static void Internal_Create([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4AB43F0", Offset = "0x4AB43F0", VA = "0x4AB43F0")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4AB44E0", Offset = "0x4AB44E0", VA = "0x4AB44E0")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4AB4610", Offset = "0x4AB4610", VA = "0x4AB4610")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4AB4750", Offset = "0x4AB4750", VA = "0x4AB4750")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4AB46B0", Offset = "0x4AB46B0", VA = "0x4AB46B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x4AB4940", Offset = "0x4AB4940", VA = "0x4AB4940")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4AB4A50", Offset = "0x4AB4A50", VA = "0x4AB4A50")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4AB4C00", Offset = "0x4AB4C00", VA = "0x4AB4C00")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4AB4C20", Offset = "0x4AB4C20", VA = "0x4AB4C20")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4AB4CD0", Offset = "0x4AB4CD0", VA = "0x4AB4CD0")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4AB4D70", Offset = "0x4AB4D70", VA = "0x4AB4D70")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4AB48F0", Offset = "0x4AB48F0", VA = "0x4AB48F0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000674")]
	[Address(RVA = "0x4AB4290", Offset = "0x4AB4290", VA = "0x4AB4290")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);
}
