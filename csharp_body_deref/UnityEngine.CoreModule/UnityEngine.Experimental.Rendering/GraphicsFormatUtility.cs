// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.GraphicsFormatUtility
// Update status: CHANGED in this game update
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
	[Token(Token = "0x4000DF7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GraphicsFormat[] tableNoStencil;

	[Token(Token = "0x4000DF8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly GraphicsFormat[] tableStencil;

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x2F77490", Offset = "0x2F75A90", VA = "0x182F77490")]
	[UnityEngine.Bindings.FreeFunction("GetGraphicsFormat_Native_Texture")]
	internal static GraphicsFormat GetFormat([UnityEngine.Bindings.NotNull] Texture texture)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x2F77720", Offset = "0x2F75D20", VA = "0x182F77720")]
	public static GraphicsFormat GetGraphicsFormat(TextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017EA")]
	[Address(RVA = "0x2F77590", Offset = "0x2F75B90", VA = "0x182F77590")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_TextureFormat(TextureFormat format, bool isSRGB);

	[Token(Token = "0x60017EB")]
	[Address(RVA = "0x2F776A0", Offset = "0x2F75CA0", VA = "0x182F776A0")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, bool isSRGB)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017EC")]
	[Address(RVA = "0x2F77550", Offset = "0x2F75B50", VA = "0x182F77550")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = false)]
	private static extern GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(RenderTextureFormat format, bool isSRGB);

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x2F775D0", Offset = "0x2F75BD0", VA = "0x182F775D0")]
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x2F76FE0", Offset = "0x2F755E0", VA = "0x182F76FE0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int minimumDepthBits);

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x2F77020", Offset = "0x2F75620", VA = "0x182F77020")]
	public static GraphicsFormat GetDepthStencilFormat(int depthBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x2F76FA0", Offset = "0x2F755A0", VA = "0x182F76FA0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int GetDepthBits(GraphicsFormat format);

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x2F77090", Offset = "0x2F75690", VA = "0x182F77090")]
	public static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits, int minimumStencilBits)
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x2F77C10", Offset = "0x2F76210", VA = "0x182F77C10")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x2F77820", Offset = "0x2F75E20", VA = "0x182F77820")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetSRGBFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x2F777A0", Offset = "0x2F75DA0", VA = "0x182F777A0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern GraphicsFormat GetLinearFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x2F777E0", Offset = "0x2F75DE0", VA = "0x182F777E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern RenderTextureFormat GetRenderTextureFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x2F76EE0", Offset = "0x2F754E0", VA = "0x182F76EE0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetAlphaComponentCount(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x2F76F60", Offset = "0x2F75560", VA = "0x182F76F60")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetComponentCount(GraphicsFormat format);

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x2F77360", Offset = "0x2F75960", VA = "0x182F77360")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static string GetFormatString(GraphicsFormat format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x2F779E0", Offset = "0x2F75FE0", VA = "0x182F779E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool IsCompressedFormat_Native_TextureFormat(TextureFormat format);

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x2F77A20", Offset = "0x2F76020", VA = "0x182F77A20")]
	public static bool IsCompressedFormat(TextureFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x2F76EA0", Offset = "0x2F754A0", VA = "0x182F76EA0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern bool CanDecompressFormat(GraphicsFormat format, bool wholeImage);

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x2F76E30", Offset = "0x2F75430", VA = "0x182F76E30")]
	internal static bool CanDecompressFormat(GraphicsFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x2F779A0", Offset = "0x2F75FA0", VA = "0x182F779A0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsAlphaOnlyFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x2F77960", Offset = "0x2F75F60", VA = "0x182F77960")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool HasAlphaChannel(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x2F77AD0", Offset = "0x2F760D0", VA = "0x182F77AD0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsDepthFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001800")]
	[Address(RVA = "0x2F77C50", Offset = "0x2F76250", VA = "0x182F77C50")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsStencilFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001801")]
	[Address(RVA = "0x2F77B10", Offset = "0x2F76110", VA = "0x182F77B10")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsDepthStencilFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001802")]
	[Address(RVA = "0x2F77B50", Offset = "0x2F76150", VA = "0x182F77B50")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsFloatFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001803")]
	[Address(RVA = "0x2F77B90", Offset = "0x2F76190", VA = "0x182F77B90")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsHalfFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001804")]
	[Address(RVA = "0x2F77BD0", Offset = "0x2F761D0", VA = "0x182F77BD0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	[Obsolete("Texture compression format PVRTC has been deprecated and will be removed in a future release", false)]
	public static extern bool IsPVRTCFormat(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001805")]
	[Address(RVA = "0x2F77A90", Offset = "0x2F76090", VA = "0x182F77A90")]
	[UnityEngine.Bindings.FreeFunction("IsCompressedCrunchTextureFormat", IsThreadSafe = true)]
	public static extern bool IsCrunchFormat(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001806")]
	[Address(RVA = "0x2F77920", Offset = "0x2F75F20", VA = "0x182F77920")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleR(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001807")]
	[Address(RVA = "0x2F778E0", Offset = "0x2F75EE0", VA = "0x182F778E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleG(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001808")]
	[Address(RVA = "0x2F778A0", Offset = "0x2F75EA0", VA = "0x182F778A0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleB(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001809")]
	[Address(RVA = "0x2F77860", Offset = "0x2F75E60", VA = "0x182F77860")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern FormatSwizzle GetSwizzleA(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600180A")]
	[Address(RVA = "0x2F76F20", Offset = "0x2F75520", VA = "0x182F76F20")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern uint GetBlockSize(GraphicsFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600180C")]
	[Address(RVA = "0x2F77450", Offset = "0x2F75A50", VA = "0x182F77450")]
	private static extern GraphicsFormat GetFormat_Injected(IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600180D")]
	[Address(RVA = "0x2F77320", Offset = "0x2F75920", VA = "0x182F77320")]
	private static extern void GetFormatString_Injected(GraphicsFormat format, out ManagedSpanWrapper ret);
}
