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

[Token(Token = "0x200012A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CubemapArrayTexture.h")]
[ExcludeFromPreset]
public sealed class CubemapArray : Texture
{
	[Token(Token = "0x17000190")]
	public override bool isReadable
	{
		[Token(Token = "0x600090F")]
		[Address(RVA = "0x68F3970", Offset = "0x68F2970", VA = "0x68F3970", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000910")]
	[Address(RVA = "0x68F3A20", Offset = "0x68F2A20", VA = "0x68F3A20")]
	[UnityEngine.Bindings.FreeFunction("CubemapArrayScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags);

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x68F3A80", Offset = "0x68F2A80", VA = "0x68F3A80")]
	private static void Internal_Create([UnityEngine.Writable] CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x68F3B40", Offset = "0x68F2B40", VA = "0x68F3B40")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x68F3C10", Offset = "0x68F2C10", VA = "0x68F3C10")]
	[UnityEngine.Bindings.FreeFunction(Name = "CubemapArrayScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement, int miplevel)
	{
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x68F3D80", Offset = "0x68F2D80", VA = "0x68F3D80")]
	public void SetPixels(Color[] colors, CubemapFace face, int arrayElement)
	{
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x68F3D90", Offset = "0x68F2D90", VA = "0x68F3D90")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x68F3EA0", Offset = "0x68F2EA0", VA = "0x68F3EA0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x68F3E20", Offset = "0x68F2E20", VA = "0x68F3E20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x68F3EF0", Offset = "0x68F2EF0", VA = "0x68F3EF0")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x68F4140", Offset = "0x68F3140", VA = "0x68F4140")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x68F4360", Offset = "0x68F3360", VA = "0x68F4360")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x68F4380", Offset = "0x68F3380", VA = "0x68F4380")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x68F4420", Offset = "0x68F3420", VA = "0x68F4420")]
	[ExcludeFromDocs]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x68F44C0", Offset = "0x68F34C0", VA = "0x68F44C0")]
	public CubemapArray(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x68F4550", Offset = "0x68F3550", VA = "0x68F4550")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x68F4620", Offset = "0x68F3620", VA = "0x68F4620")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x68F40F0", Offset = "0x68F30F0", VA = "0x68F40F0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000921")]
	[Address(RVA = "0x68F39F0", Offset = "0x68F29F0", VA = "0x68F39F0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000922")]
	[Address(RVA = "0x68F3BD0", Offset = "0x68F2BD0", VA = "0x68F3BD0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000923")]
	[Address(RVA = "0x68F3D30", Offset = "0x68F2D30", VA = "0x68F3D30")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, CubemapFace face, int arrayElement, int miplevel);
}
