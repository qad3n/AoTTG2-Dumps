using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000351")]
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

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x4B135B0", Offset = "0x4B135B0", VA = "0x4B135B0")]
	[UnityEngine.Bindings.FreeFunction("GetGraphicsFormat_Native_Texture")]
	internal static GraphicsFormat GetFormat([UnityEngine.Bindings.NotNull("NullExceptionObject")] Texture texture)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x4B136B0", Offset = "0x4B136B0", VA = "0x4B136B0")]
	public static GraphicsFormat GetGraphicsFormat(TextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x4B13740", Offset = "0x4B13740", VA = "0x4B13740")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_TextureFormat(TextureFormat format, bool isSRGB);

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x4B13780", Offset = "0x4B13780", VA = "0x4B13780")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x4B13810", Offset = "0x4B13810", VA = "0x4B13810")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = false)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(RenderTextureFormat format, bool isSRGB);

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x4B13850", Offset = "0x4B13850", VA = "0x4B13850")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x4B13930", Offset = "0x4B13930", VA = "0x4B13930")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int minimumDepthBits);

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x4B13960", Offset = "0x4B13960", VA = "0x4B13960")]
	internal static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x4B139E0", Offset = "0x4B139E0", VA = "0x4B139E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int GetDepthBits(GraphicsFormat format);

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x4B13A10", Offset = "0x4B13A10", VA = "0x4B13A10")]
	public static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits, int minimumStencilBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x4B13C50", Offset = "0x4B13C50", VA = "0x4B13C50")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x4B13C80", Offset = "0x4B13C80", VA = "0x4B13C80")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x4B13CB0", Offset = "0x4B13CB0", VA = "0x4B13CB0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetLinearFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x4B13CE0", Offset = "0x4B13CE0", VA = "0x4B13CE0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern RenderTextureFormat GetRenderTextureFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x4B13D10", Offset = "0x4B13D10", VA = "0x4B13D10")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetComponentCount(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x4B13D40", Offset = "0x4B13D40", VA = "0x4B13D40")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool IsCompressedFormat_Native_TextureFormat(TextureFormat format);

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x4B13D70", Offset = "0x4B13D70", VA = "0x4B13D70")]
	public static bool IsCompressedFormat(TextureFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x4B13DF0", Offset = "0x4B13DF0", VA = "0x4B13DF0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool CanDecompressFormat(GraphicsFormat format, bool wholeImage);

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x4B13E30", Offset = "0x4B13E30", VA = "0x4B13E30")]
	internal static bool CanDecompressFormat(GraphicsFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x4B13EC0", Offset = "0x4B13EC0", VA = "0x4B13EC0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsAlphaOnlyFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x4B13EF0", Offset = "0x4B13EF0", VA = "0x4B13EF0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool HasAlphaChannel(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x4B13F20", Offset = "0x4B13F20", VA = "0x4B13F20")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsDepthStencilFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x4B13F50", Offset = "0x4B13F50", VA = "0x4B13F50")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsPVRTCFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x4B13F80", Offset = "0x4B13F80", VA = "0x4B13F80")]
	[UnityEngine.Bindings.FreeFunction("IsCompressedCrunchTextureFormat", IsThreadSafe = true)]
	public static extern bool IsCrunchFormat(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x4B13FB0", Offset = "0x4B13FB0", VA = "0x4B13FB0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleR(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x4B13FE0", Offset = "0x4B13FE0", VA = "0x4B13FE0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleG(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x4B14010", Offset = "0x4B14010", VA = "0x4B14010")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleB(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x4B14040", Offset = "0x4B14040", VA = "0x4B14040")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleA(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x4B14070", Offset = "0x4B14070", VA = "0x4B14070")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetBlockSize(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x4B13680", Offset = "0x4B13680", VA = "0x4B13680")]
	private static extern GraphicsFormat GetFormat_Injected(IntPtr texture);
}
