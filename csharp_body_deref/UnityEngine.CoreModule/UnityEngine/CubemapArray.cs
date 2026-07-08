using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000102")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapArrayTexture.h")]
public sealed class CubemapArray : Texture
{
	[Token(Token = "0x17000135")]
	public override bool isReadable
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x4AB4E10", Offset = "0x4AB4E10", VA = "0x4AB4E10", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4AB4EE0", Offset = "0x4AB4EE0", VA = "0x4AB4EE0")]
	[UnityEngine.Bindings.FreeFunction("CubemapArrayScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags);

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4AB4F40", Offset = "0x4AB4F40", VA = "0x4AB4F40")]
	private static void Internal_Create([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4AB5000", Offset = "0x4AB5000", VA = "0x4AB5000")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x4AB50F0", Offset = "0x4AB50F0", VA = "0x4AB50F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement, int miplevel)
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x4AB5270", Offset = "0x4AB5270", VA = "0x4AB5270")]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement)
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4AB5280", Offset = "0x4AB5280", VA = "0x4AB5280")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x4AB5390", Offset = "0x4AB5390", VA = "0x4AB5390")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4AB5310", Offset = "0x4AB5310", VA = "0x4AB5310")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x4AB53E0", Offset = "0x4AB53E0", VA = "0x4AB53E0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x4AB5540", Offset = "0x4AB5540", VA = "0x4AB5540")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x4AB56E0", Offset = "0x4AB56E0", VA = "0x4AB56E0")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4AB5700", Offset = "0x4AB5700", VA = "0x4AB5700")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4AB57A0", Offset = "0x4AB57A0", VA = "0x4AB57A0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4AB5840", Offset = "0x4AB5840", VA = "0x4AB5840")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4AB58D0", Offset = "0x4AB58D0", VA = "0x4AB58D0")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x4AB59C0", Offset = "0x4AB59C0", VA = "0x4AB59C0")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4AB54F0", Offset = "0x4AB54F0", VA = "0x4AB54F0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4AB4EB0", Offset = "0x4AB4EB0", VA = "0x4AB4EB0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4AB50B0", Offset = "0x4AB50B0", VA = "0x4AB50B0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4AB5220", Offset = "0x4AB5220", VA = "0x4AB5220")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, CubemapFace face, int arrayElement, int miplevel);
}
