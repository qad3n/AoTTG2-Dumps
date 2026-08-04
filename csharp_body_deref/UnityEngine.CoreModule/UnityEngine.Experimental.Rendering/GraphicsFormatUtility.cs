// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.GraphicsFormatUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000354")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/TextureFormat.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Format.h")]
public class GraphicsFormatUtility
{
	[Token(Token = "0x4000B5A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GraphicsFormat[] tableNoStencil;

	[Token(Token = "0x4000B5B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly GraphicsFormat[] tableStencil;

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x4E3AEE0", Offset = "0x4E3AEE0", VA = "0x4E3AEE0")]
	[UnityEngine.Bindings.FreeFunction("GetGraphicsFormat_Native_Texture")]
	internal static GraphicsFormat GetFormat([UnityEngine.Bindings.NotNull("NullExceptionObject")] Texture texture)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x4E3AFE0", Offset = "0x4E3AFE0", VA = "0x4E3AFE0")]
	public static GraphicsFormat GetGraphicsFormat(TextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x4E3B070", Offset = "0x4E3B070", VA = "0x4E3B070")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_TextureFormat(TextureFormat format, bool isSRGB);

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x4E3B0B0", Offset = "0x4E3B0B0", VA = "0x4E3B0B0")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x4E3B140", Offset = "0x4E3B140", VA = "0x4E3B140")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = false)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(RenderTextureFormat format, bool isSRGB);

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x4E3B180", Offset = "0x4E3B180", VA = "0x4E3B180")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x4E3B260", Offset = "0x4E3B260", VA = "0x4E3B260")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int minimumDepthBits);

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x4E3B290", Offset = "0x4E3B290", VA = "0x4E3B290")]
	internal static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x4E3B310", Offset = "0x4E3B310", VA = "0x4E3B310")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int GetDepthBits(GraphicsFormat format);

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x4E3B340", Offset = "0x4E3B340", VA = "0x4E3B340")]
	public static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits, int minimumStencilBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x4E3B580", Offset = "0x4E3B580", VA = "0x4E3B580")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x4E3B5B0", Offset = "0x4E3B5B0", VA = "0x4E3B5B0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x4E3B5E0", Offset = "0x4E3B5E0", VA = "0x4E3B5E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetLinearFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x4E3B610", Offset = "0x4E3B610", VA = "0x4E3B610")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern RenderTextureFormat GetRenderTextureFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x4E3B640", Offset = "0x4E3B640", VA = "0x4E3B640")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetComponentCount(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x4E3B670", Offset = "0x4E3B670", VA = "0x4E3B670")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool IsCompressedFormat_Native_TextureFormat(TextureFormat format);

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x4E3B6A0", Offset = "0x4E3B6A0", VA = "0x4E3B6A0")]
	public static bool IsCompressedFormat(TextureFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x4E3B720", Offset = "0x4E3B720", VA = "0x4E3B720")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool CanDecompressFormat(GraphicsFormat format, bool wholeImage);

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x4E3B760", Offset = "0x4E3B760", VA = "0x4E3B760")]
	internal static bool CanDecompressFormat(GraphicsFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x4E3B7F0", Offset = "0x4E3B7F0", VA = "0x4E3B7F0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsAlphaOnlyFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x4E3B820", Offset = "0x4E3B820", VA = "0x4E3B820")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool HasAlphaChannel(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x4E3B850", Offset = "0x4E3B850", VA = "0x4E3B850")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsDepthStencilFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x4E3B880", Offset = "0x4E3B880", VA = "0x4E3B880")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsPVRTCFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x4E3B8B0", Offset = "0x4E3B8B0", VA = "0x4E3B8B0")]
	[UnityEngine.Bindings.FreeFunction("IsCompressedCrunchTextureFormat", IsThreadSafe = true)]
	public static extern bool IsCrunchFormat(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x4E3B8E0", Offset = "0x4E3B8E0", VA = "0x4E3B8E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleR(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x4E3B910", Offset = "0x4E3B910", VA = "0x4E3B910")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleG(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x4E3B940", Offset = "0x4E3B940", VA = "0x4E3B940")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleB(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x4E3B970", Offset = "0x4E3B970", VA = "0x4E3B970")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleA(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x4E3B9A0", Offset = "0x4E3B9A0", VA = "0x4E3B9A0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetBlockSize(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x4E3AFB0", Offset = "0x4E3AFB0", VA = "0x4E3AFB0")]
	private static extern GraphicsFormat GetFormat_Injected(IntPtr texture);
}
