// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture3D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x2000103")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture3D.h")]
public sealed class Texture3D : Texture
{
	[Token(Token = "0x17000132")]
	public int depth
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x4DDAA40", Offset = "0x4DDAA40", VA = "0x4DDAA40")]
		[UnityEngine.Bindings.NativeName("GetTextureLayerCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000133")]
	public override bool isReadable
	{
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x4DDAB10", Offset = "0x4DDAB10", VA = "0x4DDAB10", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4DDABE0", Offset = "0x4DDABE0", VA = "0x4DDABE0")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int mip, int x, int y, int z, Color color)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4DDAD10", Offset = "0x4DDAD10", VA = "0x4DDAD10")]
	[UnityEngine.Bindings.FreeFunction("Texture3DScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4DDAD70", Offset = "0x4DDAD70", VA = "0x4DDAD70")]
	private static void Internal_Create([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4DDAE50", Offset = "0x4DDAE50", VA = "0x4DDAE50")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4DDAF40", Offset = "0x4DDAF40", VA = "0x4DDAF40")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, int miplevel)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4DDB0A0", Offset = "0x4DDB0A0", VA = "0x4DDB0A0")]
	public void SetPixels(Color[] colors)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x4DDB0B0", Offset = "0x4DDB0B0", VA = "0x4DDB0B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::SetPixelData", HasExplicitThis = true, ThrowsException = true)]
	private bool SetPixelDataImpl(IntPtr data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x4DDB1E0", Offset = "0x4DDB1E0", VA = "0x4DDB1E0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x4DDB320", Offset = "0x4DDB320", VA = "0x4DDB320")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x4DDB280", Offset = "0x4DDB280", VA = "0x4DDB280")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x4DDB380", Offset = "0x4DDB380", VA = "0x4DDB380")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x4DDB4E0", Offset = "0x4DDB4E0", VA = "0x4DDB4E0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x4DDB500", Offset = "0x4DDB500", VA = "0x4DDB500")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x4DDB520", Offset = "0x4DDB520", VA = "0x4DDB520")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x4DDB6D0", Offset = "0x4DDB6D0", VA = "0x4DDB6D0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x4DDB770", Offset = "0x4DDB770", VA = "0x4DDB770")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x4DDB810", Offset = "0x4DDB810", VA = "0x4DDB810")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x4DDB8C0", Offset = "0x4DDB8C0", VA = "0x4DDB8C0")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4DDB9B0", Offset = "0x4DDB9B0", VA = "0x4DDB9B0")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x4DDB9C0", Offset = "0x4DDB9C0", VA = "0x4DDB9C0")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4DDB9D0", Offset = "0x4DDB9D0", VA = "0x4DDB9D0")]
	public void SetPixel(int x, int y, int z, Color color, [DefaultValue("0")] int mipLevel)
	{
	}

	[Token(Token = "0x600065E")]
	public void SetPixelData<T>(NativeArray<T> data, int mipLevel, [DefaultValue("0")] int sourceDataStartIndex = 0) where T : struct
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x4DDB490", Offset = "0x4DDB490", VA = "0x4DDB490")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000660")]
	[Address(RVA = "0x4DDAAE0", Offset = "0x4DDAAE0", VA = "0x4DDAAE0")]
	private static extern int get_depth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4DDABB0", Offset = "0x4DDABB0", VA = "0x4DDABB0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000662")]
	[Address(RVA = "0x4DDACB0", Offset = "0x4DDACB0", VA = "0x4DDACB0")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int mip, int x, int y, int z, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000663")]
	[Address(RVA = "0x4DDAF00", Offset = "0x4DDAF00", VA = "0x4DDAF00")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000664")]
	[Address(RVA = "0x4DDB060", Offset = "0x4DDB060", VA = "0x4DDB060")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000665")]
	[Address(RVA = "0x4DDB180", Offset = "0x4DDB180", VA = "0x4DDB180")]
	private static extern bool SetPixelDataImpl_Injected(IntPtr _unity_self, IntPtr data, int mipLevel, int elementSize, int dataArraySize, [Optional] int sourceDataStartIndex);
}
