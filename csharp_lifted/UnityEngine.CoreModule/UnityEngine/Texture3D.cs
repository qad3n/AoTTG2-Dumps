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

[Token(Token = "0x2000128")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture3D.h")]
public sealed class Texture3D : Texture
{
	[Token(Token = "0x1700018D")]
	public override bool isReadable
	{
		[Token(Token = "0x60008DB")]
		[Address(RVA = "0x68F1850", Offset = "0x68F0850", VA = "0x68F1850", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x68F1900", Offset = "0x68F0900", VA = "0x68F1900")]
	[UnityEngine.Bindings.NativeName("SetPixel")]
	private void SetPixelImpl(int mip, int x, int y, int z, Color color)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x68F1A10", Offset = "0x68F0A10", VA = "0x68F1A10")]
	[UnityEngine.Bindings.FreeFunction("Texture3DScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex);

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x68F1A70", Offset = "0x68F0A70", VA = "0x68F1A70")]
	private static void Internal_Create([UnityEngine.Writable] Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x68F1B50", Offset = "0x68F0B50", VA = "0x68F1B50")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::Apply", HasExplicitThis = true)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x68F1C20", Offset = "0x68F0C20", VA = "0x68F1C20")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
	public void SetPixels(Color[] colors, int miplevel)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x68F1D70", Offset = "0x68F0D70", VA = "0x68F1D70")]
	[UnityEngine.Bindings.FreeFunction(Name = "Texture3DScripting::SetPixelDataArray", HasExplicitThis = true, ThrowsException = true)]
	private bool SetPixelDataImplArray(Array data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x68F1E80", Offset = "0x68F0E80", VA = "0x68F1E80")]
	private IntPtr GetImageData()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x68F1F30", Offset = "0x68F0F30", VA = "0x68F1F30")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x68F2070", Offset = "0x68F1070", VA = "0x68F2070")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x68F1FD0", Offset = "0x68F0FD0", VA = "0x68F1FD0")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x68F20D0", Offset = "0x68F10D0", VA = "0x68F20D0")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, [DefaultValue("Texture.GenerateAllMips")] int mipCount)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x68F2310", Offset = "0x68F1310", VA = "0x68F2310")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x68F2330", Offset = "0x68F1330", VA = "0x68F2330")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x68F2350", Offset = "0x68F1350", VA = "0x68F2350")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, int mipCount, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x68F2570", Offset = "0x68F1570", VA = "0x68F2570")]
	[ExcludeFromDocs]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x68F2610", Offset = "0x68F1610", VA = "0x68F2610")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x68F26C0", Offset = "0x68F16C0", VA = "0x68F26C0")]
	public Texture3D(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("IntPtr.Zero")] IntPtr nativeTex)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x68F2770", Offset = "0x68F1770", VA = "0x68F2770")]
	public void Apply([DefaultValue("true")] bool updateMipmaps, [DefaultValue("false")] bool makeNoLongerReadable)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x68F2840", Offset = "0x68F1840", VA = "0x68F2840")]
	[ExcludeFromDocs]
	public void Apply(bool updateMipmaps)
	{
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x68F2850", Offset = "0x68F1850", VA = "0x68F2850")]
	[ExcludeFromDocs]
	public void Apply()
	{
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x68F2860", Offset = "0x68F1860", VA = "0x68F2860")]
	public void SetPixel(int x, int y, int z, Color color, [DefaultValue("0")] int mipLevel)
	{
	}

	[Token(Token = "0x60008F1")]
	public void SetPixelData<T>(T[] data, int mipLevel, [DefaultValue("0")] int sourceDataStartIndex = 0)
	{
	}

	[Token(Token = "0x60008F2")]
	public NativeArray<T> GetPixelData<T>(int mipLevel) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x68F22C0", Offset = "0x68F12C0", VA = "0x68F22C0")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x68F18D0", Offset = "0x68F08D0", VA = "0x68F18D0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x68F19B0", Offset = "0x68F09B0", VA = "0x68F19B0")]
	private static extern void SetPixelImpl_Injected(IntPtr _unity_self, int mip, int x, int y, int z, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x68F1BE0", Offset = "0x68F0BE0", VA = "0x68F1BE0")]
	private static extern void ApplyImpl_Injected(IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x68F1D30", Offset = "0x68F0D30", VA = "0x68F1D30")]
	private static extern void SetPixels_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, int miplevel);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x68F1E20", Offset = "0x68F0E20", VA = "0x68F1E20")]
	private static extern bool SetPixelDataImplArray_Injected(IntPtr _unity_self, Array data, int mipLevel, int elementSize, int dataArraySize, int sourceDataStartIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x68F1F00", Offset = "0x68F0F00", VA = "0x68F1F00")]
	private static extern IntPtr GetImageData_Injected(IntPtr _unity_self);
}
