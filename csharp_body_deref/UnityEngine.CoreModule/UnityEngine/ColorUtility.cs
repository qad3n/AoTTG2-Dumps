// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ColorUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200013E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/ColorUtility.h")]
public class ColorUtility
{
	[Token(Token = "0x170001D4")]
	private static ReadOnlySpan<Color32> HtmlColorValues
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x68FD730", Offset = "0x68FC730", VA = "0x68FD730")]
		get
		{
			return default(ReadOnlySpan<Color32>);
		}
	}

	[Token(Token = "0x170001D5")]
	private static ReadOnlySpan<string> HtmlColorNames
	{
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x68FD8F0", Offset = "0x68FC8F0", VA = "0x68FD8F0")]
		get
		{
			return default(ReadOnlySpan<string>);
		}
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x68FD580", Offset = "0x68FC580", VA = "0x68FD580")]
	[UnityEngine.Bindings.FreeFunction("TryParseHtmlColor", true)]
	internal static bool DoTryParseHtmlColor(string htmlString, out Color32 color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x68FDDB0", Offset = "0x68FCDB0", VA = "0x68FDDB0")]
	public static bool TryParseHtmlString(string htmlString, out Color color)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x68FDE30", Offset = "0x68FCE30", VA = "0x68FDE30")]
	public static string ToHtmlStringRGB(Color color)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x68FDE50", Offset = "0x68FCE50", VA = "0x68FDE50")]
	public static string ToHtmlStringRGB(in Color color)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x68FE2C0", Offset = "0x68FD2C0", VA = "0x68FE2C0")]
	public static string ToHtmlStringRGBA(Color color)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x68FE2E0", Offset = "0x68FD2E0", VA = "0x68FE2E0")]
	public static string ToHtmlStringRGBA(in Color color)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x68FE8A0", Offset = "0x68FD8A0", VA = "0x68FE8A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryParseHtmlString(ReadOnlySpan<char> input, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x68FED00", Offset = "0x68FDD00", VA = "0x68FED00")]
	private static bool IsHexString(ReadOnlySpan<char> span)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x68FEDB0", Offset = "0x68FDDB0", VA = "0x68FEDB0")]
	private static bool TryParseHexColor(ReadOnlySpan<char> hex, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x68FF2C0", Offset = "0x68FE2C0", VA = "0x68FF2C0")]
	private static bool TryHexToByte(ReadOnlySpan<char> span, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x68FF3A0", Offset = "0x68FE3A0", VA = "0x68FF3A0")]
	private static int HexDigitValue(char c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x68FD6F0", Offset = "0x68FC6F0", VA = "0x68FD6F0")]
	private static extern bool DoTryParseHtmlColor_Injected(ref ManagedSpanWrapper htmlString, out Color32 color);
}
