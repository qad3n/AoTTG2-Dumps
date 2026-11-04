// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CubemapArray
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
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapArrayTexture.h")]
[ExcludeFromPreset]
public sealed class CubemapArray : Texture
{
	[Token(Token = "0x1700018B")]
	public override bool isReadable
	{
		[Token(Token = "0x60008FE")]
		[Address(RVA = "0x2ED8260", Offset = "0x2ED6860", VA = "0x182ED8260", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x2ED76E0", Offset = "0x2ED5CE0", VA = "0x182ED76E0")]
	[UnityEngine.Bindings.FreeFunction("CubemapArrayScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags);

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x2ED7730", Offset = "0x2ED5D30", VA = "0x182ED7730")]
	private static void Internal_Create([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x2ED74C0", Offset = "0x2ED5AC0", VA = "0x182ED74C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x2ED7840", Offset = "0x2ED5E40", VA = "0x182ED7840")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement, int miplevel)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x2ED7970", Offset = "0x2ED5F70", VA = "0x182ED7970")]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement)
	{
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x2ED7CB0", Offset = "0x2ED62B0", VA = "0x182ED7CB0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x2ED80A0", Offset = "0x2ED66A0", VA = "0x182ED80A0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x2ED80F0", Offset = "0x2ED66F0", VA = "0x182ED80F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x2ED7AF0", Offset = "0x2ED60F0", VA = "0x182ED7AF0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x2ED7D50", Offset = "0x2ED6350", VA = "0x182ED7D50")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x2ED7C80", Offset = "0x2ED6280", VA = "0x182ED7C80")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x2ED7F40", Offset = "0x2ED6540", VA = "0x182ED7F40")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x2ED8000", Offset = "0x2ED6600", VA = "0x182ED8000")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x2ED8180", Offset = "0x2ED6780", VA = "0x182ED8180")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x2ED7560", Offset = "0x2ED5B60", VA = "0x182ED7560")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x2ED7630", Offset = "0x2ED5C30", VA = "0x182ED7630")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x2ED7A90", Offset = "0x2ED6090", VA = "0x182ED7A90")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000910")]
	[Address(RVA = "0x2ED8220", Offset = "0x2ED6820", VA = "0x182ED8220")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000911")]
	[Address(RVA = "0x2ED7460", Offset = "0x2ED5A60", VA = "0x182ED7460")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000912")]
	[Address(RVA = "0x2ED77F0", Offset = "0x2ED5DF0", VA = "0x182ED77F0")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, CubemapFace face, int arrayElement, int miplevel);
}
