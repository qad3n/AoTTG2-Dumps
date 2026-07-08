using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000100")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture3D.h")]
public sealed class Texture3D : Texture
{
	[Token(Token = "0x17000131")]
	public int depth
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x4AB3110", Offset = "0x4AB3110", VA = "0x4AB3110")]
		[UnityEngine.Bindings.NativeName("GetTextureLayerCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000132")]
	public override bool isReadable
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x4AB31E0", Offset = "0x4AB31E0", VA = "0x4AB31E0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x4AB32B0", Offset = "0x4AB32B0", VA = "0x4AB32B0")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int mip, int x, int y, int z, Color color)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4AB33E0", Offset = "0x4AB33E0", VA = "0x4AB33E0")]
	[UnityEngine.Bindings.FreeFunction("Texture3DScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4AB3440", Offset = "0x4AB3440", VA = "0x4AB3440")]
	private static void Internal_Create([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4AB3520", Offset = "0x4AB3520", VA = "0x4AB3520")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4AB3610", Offset = "0x4AB3610", VA = "0x4AB3610")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, int miplevel)
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4AB3770", Offset = "0x4AB3770", VA = "0x4AB3770")]
	public void SetPixels(Color[] colors)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4AB3780", Offset = "0x4AB3780", VA = "0x4AB3780")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::SetPixelData", HasExplicitThis = true, ThrowsException = true)]
	private bool SetPixelDataImpl(IntPtr data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4AB38B0", Offset = "0x4AB38B0", VA = "0x4AB38B0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x4AB39F0", Offset = "0x4AB39F0", VA = "0x4AB39F0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x4AB3950", Offset = "0x4AB3950", VA = "0x4AB3950")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x4AB3A50", Offset = "0x4AB3A50", VA = "0x4AB3A50")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x4AB3BB0", Offset = "0x4AB3BB0", VA = "0x4AB3BB0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x4AB3BD0", Offset = "0x4AB3BD0", VA = "0x4AB3BD0")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x4AB3BF0", Offset = "0x4AB3BF0", VA = "0x4AB3BF0")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x4AB3DA0", Offset = "0x4AB3DA0", VA = "0x4AB3DA0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x4AB3E40", Offset = "0x4AB3E40", VA = "0x4AB3E40")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x4AB3EE0", Offset = "0x4AB3EE0", VA = "0x4AB3EE0")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x4AB3F90", Offset = "0x4AB3F90", VA = "0x4AB3F90")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x4AB4080", Offset = "0x4AB4080", VA = "0x4AB4080")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x4AB4090", Offset = "0x4AB4090", VA = "0x4AB4090")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4AB40A0", Offset = "0x4AB40A0", VA = "0x4AB40A0")]
	public void SetPixel(int x, int y, int z, Color color, [DefaultValue("0")] int mipLevel)
	{
	}

	[Token(Token = "0x600065C")]
	public void SetPixelData<T>(NativeArray<T> data, int mipLevel, [DefaultValue("0")] int sourceDataStartIndex = 0) where T : struct
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4AB3B60", Offset = "0x4AB3B60", VA = "0x4AB3B60")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600065E")]
	[Address(RVA = "0x4AB31B0", Offset = "0x4AB31B0", VA = "0x4AB31B0")]
	private static extern int get_depth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600065F")]
	[Address(RVA = "0x4AB3280", Offset = "0x4AB3280", VA = "0x4AB3280")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000660")]
	[Address(RVA = "0x4AB3380", Offset = "0x4AB3380", VA = "0x4AB3380")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int mip, int x, int y, int z, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4AB35D0", Offset = "0x4AB35D0", VA = "0x4AB35D0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000662")]
	[Address(RVA = "0x4AB3730", Offset = "0x4AB3730", VA = "0x4AB3730")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000663")]
	[Address(RVA = "0x4AB3850", Offset = "0x4AB3850", VA = "0x4AB3850")]
	private static extern bool SetPixelDataImpl_Injected(IntPtr _unity_self, IntPtr data, int mipLevel, int elementSize, int dataArraySize, [Optional] int sourceDataStartIndex);
}
