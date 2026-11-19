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

[Token(Token = "0x20003FD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/TextureFormat.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Format.h")]
public class GraphicsFormatUtility
{
	[Token(Token = "0x4000DF5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GraphicsFormat[] tableNoStencil;

	[Token(Token = "0x4000DF6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly GraphicsFormat[] tableStencil;

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x696D7A0", Offset = "0x696C7A0", VA = "0x696D7A0")]
	[UnityEngine.Bindings.FreeFunction("GetGraphicsFormat_Native_Texture")]
	internal static GraphicsFormat GetFormat([UnityEngine.Bindings.NotNull] Texture texture)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x696D8B0", Offset = "0x696C8B0", VA = "0x696D8B0")]
	public static GraphicsFormat GetGraphicsFormat(TextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x696D940", Offset = "0x696C940", VA = "0x696D940")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_TextureFormat(TextureFormat format, bool isSRGB);

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x696D980", Offset = "0x696C980", VA = "0x696D980")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001800")]
	[Address(RVA = "0x696DA10", Offset = "0x696CA10", VA = "0x696DA10")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = false)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(RenderTextureFormat format, bool isSRGB);

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x696DA50", Offset = "0x696CA50", VA = "0x696DA50")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001802")]
	[Address(RVA = "0x696DB40", Offset = "0x696CB40", VA = "0x696DB40")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int minimumDepthBits);

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x696DB70", Offset = "0x696CB70", VA = "0x696DB70")]
	public static GraphicsFormat GetDepthStencilFormat(int depthBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001804")]
	[Address(RVA = "0x696DBF0", Offset = "0x696CBF0", VA = "0x696DBF0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int GetDepthBits(GraphicsFormat format);

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x696DC20", Offset = "0x696CC20", VA = "0x696DC20")]
	public static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits, int minimumStencilBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001806")]
	[Address(RVA = "0x696DE70", Offset = "0x696CE70", VA = "0x696DE70")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001807")]
	[Address(RVA = "0x696DEA0", Offset = "0x696CEA0", VA = "0x696DEA0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001808")]
	[Address(RVA = "0x696DED0", Offset = "0x696CED0", VA = "0x696DED0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetLinearFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001809")]
	[Address(RVA = "0x696DF00", Offset = "0x696CF00", VA = "0x696DF00")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern RenderTextureFormat GetRenderTextureFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600180A")]
	[Address(RVA = "0x696DF30", Offset = "0x696CF30", VA = "0x696DF30")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetAlphaComponentCount(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600180B")]
	[Address(RVA = "0x696DF60", Offset = "0x696CF60", VA = "0x696DF60")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetComponentCount(GraphicsFormat format);

	[Token(Token = "0x600180C")]
	[Address(RVA = "0x696DF90", Offset = "0x696CF90", VA = "0x696DF90")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static string GetFormatString(GraphicsFormat format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600180D")]
	[Address(RVA = "0x696E0D0", Offset = "0x696D0D0", VA = "0x696E0D0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool IsCompressedFormat_Native_TextureFormat(TextureFormat format);

	[Token(Token = "0x600180E")]
	[Address(RVA = "0x696E100", Offset = "0x696D100", VA = "0x696E100")]
	public static bool IsCompressedFormat(TextureFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600180F")]
	[Address(RVA = "0x696E180", Offset = "0x696D180", VA = "0x696E180")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool CanDecompressFormat(GraphicsFormat format, bool wholeImage);

	[Token(Token = "0x6001810")]
	[Address(RVA = "0x696E1C0", Offset = "0x696D1C0", VA = "0x696E1C0")]
	internal static bool CanDecompressFormat(GraphicsFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001811")]
	[Address(RVA = "0x696E250", Offset = "0x696D250", VA = "0x696E250")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsAlphaOnlyFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001812")]
	[Address(RVA = "0x696E280", Offset = "0x696D280", VA = "0x696E280")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool HasAlphaChannel(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001813")]
	[Address(RVA = "0x696E2B0", Offset = "0x696D2B0", VA = "0x696E2B0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsDepthFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001814")]
	[Address(RVA = "0x696E2E0", Offset = "0x696D2E0", VA = "0x696E2E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsStencilFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001815")]
	[Address(RVA = "0x696E310", Offset = "0x696D310", VA = "0x696E310")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsDepthStencilFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001816")]
	[Address(RVA = "0x696E340", Offset = "0x696D340", VA = "0x696E340")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsFloatFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001817")]
	[Address(RVA = "0x696E370", Offset = "0x696D370", VA = "0x696E370")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsHalfFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001818")]
	[Address(RVA = "0x696E3A0", Offset = "0x696D3A0", VA = "0x696E3A0")]
	[Obsolete("Texture compression format PVRTC has been deprecated and will be removed in a future release", false)]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsPVRTCFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001819")]
	[Address(RVA = "0x696E3D0", Offset = "0x696D3D0", VA = "0x696E3D0")]
	[UnityEngine.Bindings.FreeFunction("IsCompressedCrunchTextureFormat", IsThreadSafe = true)]
	public static extern bool IsCrunchFormat(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600181A")]
	[Address(RVA = "0x696E400", Offset = "0x696D400", VA = "0x696E400")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleR(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600181B")]
	[Address(RVA = "0x696E430", Offset = "0x696D430", VA = "0x696E430")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleG(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600181C")]
	[Address(RVA = "0x696E460", Offset = "0x696D460", VA = "0x696E460")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleB(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600181D")]
	[Address(RVA = "0x696E490", Offset = "0x696D490", VA = "0x696E490")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleA(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600181E")]
	[Address(RVA = "0x696E4C0", Offset = "0x696D4C0", VA = "0x696E4C0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetBlockSize(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001820")]
	[Address(RVA = "0x696D880", Offset = "0x696C880", VA = "0x696D880")]
	private static extern GraphicsFormat GetFormat_Injected(IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001821")]
	[Address(RVA = "0x696E090", Offset = "0x696D090", VA = "0x696E090")]
	private static extern void GetFormatString_Injected(GraphicsFormat format, out ManagedSpanWrapper ret);
}
