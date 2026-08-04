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

[Token(Token = "0x2000105")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapArrayTexture.h")]
public sealed class CubemapArray : Texture
{
	[Token(Token = "0x17000136")]
	public override bool isReadable
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x4DDC740", Offset = "0x4DDC740", VA = "0x4DDC740", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4DDC810", Offset = "0x4DDC810", VA = "0x4DDC810")]
	[UnityEngine.Bindings.FreeFunction("CubemapArrayScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags);

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x4DDC870", Offset = "0x4DDC870", VA = "0x4DDC870")]
	private static void Internal_Create([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x4DDC930", Offset = "0x4DDC930", VA = "0x4DDC930")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4DDCA20", Offset = "0x4DDCA20", VA = "0x4DDCA20")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement, int miplevel)
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x4DDCBA0", Offset = "0x4DDCBA0", VA = "0x4DDCBA0")]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4DDCBB0", Offset = "0x4DDCBB0", VA = "0x4DDCBB0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x4DDCCC0", Offset = "0x4DDCCC0", VA = "0x4DDCCC0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x4DDCC40", Offset = "0x4DDCC40", VA = "0x4DDCC40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x4DDCD10", Offset = "0x4DDCD10", VA = "0x4DDCD10")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4DDCE70", Offset = "0x4DDCE70", VA = "0x4DDCE70")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4DDD010", Offset = "0x4DDD010", VA = "0x4DDD010")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4DDD030", Offset = "0x4DDD030", VA = "0x4DDD030")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4DDD0D0", Offset = "0x4DDD0D0", VA = "0x4DDD0D0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x4DDD170", Offset = "0x4DDD170", VA = "0x4DDD170")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4DDD200", Offset = "0x4DDD200", VA = "0x4DDD200")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4DDD2F0", Offset = "0x4DDD2F0", VA = "0x4DDD2F0")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4DDCE20", Offset = "0x4DDCE20", VA = "0x4DDCE20")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4DDC7E0", Offset = "0x4DDC7E0", VA = "0x4DDC7E0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068A")]
	[Address(RVA = "0x4DDC9E0", Offset = "0x4DDC9E0", VA = "0x4DDC9E0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068B")]
	[Address(RVA = "0x4DDCB50", Offset = "0x4DDCB50", VA = "0x4DDCB50")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, CubemapFace face, int arrayElement, int miplevel);
}
