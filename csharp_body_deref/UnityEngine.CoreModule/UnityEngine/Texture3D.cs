// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture3D
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000127")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture3D.h")]
[ExcludeFromPreset]
public sealed class Texture3D : Texture
{
	[Token(Token = "0x17000188")]
	public override bool isReadable
	{
		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x2EFD940", Offset = "0x2EFBF40", VA = "0x182EFD940", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x2EFCDA0", Offset = "0x2EFB3A0", VA = "0x182EFCDA0")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int mip, int x, int y, int z, Color color)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x2EFCC30", Offset = "0x2EFB230", VA = "0x182EFCC30")]
	[UnityEngine.Bindings.FreeFunction("Texture3DScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x2EFCC80", Offset = "0x2EFB280", VA = "0x182EFCC80")]
	private static void Internal_Create([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x2EFC9E0", Offset = "0x2EFAFE0", VA = "0x182EFC9E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x2EFCFA0", Offset = "0x2EFB5A0", VA = "0x182EFCFA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, int miplevel)
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x2EFCBB0", Offset = "0x2EFB1B0", VA = "0x182EFCBB0")]
	private IntPtr GetImageData()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x2EFD720", Offset = "0x2EFBD20", VA = "0x182EFD720")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x2EFD1D0", Offset = "0x2EFB7D0", VA = "0x182EFD1D0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x2EFD680", Offset = "0x2EFBC80", VA = "0x182EFD680")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x2EFD220", Offset = "0x2EFB820", VA = "0x182EFD220")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x2EFD8C0", Offset = "0x2EFBEC0", VA = "0x182EFD8C0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount)
	{
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x2EFD880", Offset = "0x2EFBE80", VA = "0x182EFD880")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x2EFD480", Offset = "0x2EFBA80", VA = "0x182EFD480")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x2EFD120", Offset = "0x2EFB720", VA = "0x182EFD120")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x2EFD3D0", Offset = "0x2EFB9D0", VA = "0x182EFD3D0")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x2EFD7D0", Offset = "0x2EFBDD0", VA = "0x182EFD7D0")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x2EFCAA0", Offset = "0x2EFB0A0", VA = "0x182EFCAA0")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x2EFCA90", Offset = "0x2EFB090", VA = "0x182EFCA90")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x2EFCA80", Offset = "0x2EFB080", VA = "0x182EFCA80")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x2EFCE50", Offset = "0x2EFB450", VA = "0x182EFCE50")]
	public void SetPixel(int x, int y, int z, Color color, [DefaultValue("0")] int mipLevel)
	{
	}

	[Token(Token = "0x60008E2")]
	public NativeArray<T> GetPixelData<T>(int mipLevel) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x2EFD0C0", Offset = "0x2EFB6C0", VA = "0x182EFD0C0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x2EFD900", Offset = "0x2EFBF00", VA = "0x182EFD900")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x2EFCD50", Offset = "0x2EFB350", VA = "0x182EFCD50")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int mip, int x, int y, int z, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x2EFC980", Offset = "0x2EFAF80", VA = "0x182EFC980")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x2EFCF40", Offset = "0x2EFB540", VA = "0x182EFCF40")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x2EFCB70", Offset = "0x2EFB170", VA = "0x182EFCB70")]
	private static extern IntPtr GetImageData_Injected(IntPtr _unity_self);
}
