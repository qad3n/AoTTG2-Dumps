// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ColorUtility
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200013D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/ColorUtility.h")]
public class ColorUtility
{
	[Token(Token = "0x170001CF")]
	private static ReadOnlySpan<Color32> HtmlColorValues
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x2F01A40", Offset = "0x2F00040", VA = "0x182F01A40")]
		get
		{
			return default(ReadOnlySpan<Color32>);
		}
	}

	[Token(Token = "0x170001D0")]
	private static ReadOnlySpan<string> HtmlColorNames
	{
		[Token(Token = "0x6000A34")]
		[Address(RVA = "0x2F015B0", Offset = "0x2EFFBB0", VA = "0x182F015B0")]
		get
		{
			return default(ReadOnlySpan<string>);
		}
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x2F00560", Offset = "0x2EFEB60", VA = "0x182F00560")]
	[UnityEngine.Bindings.FreeFunction("TryParseHtmlColor", true)]
	internal static bool DoTryParseHtmlColor(string htmlString, out Color32 color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x2F01520", Offset = "0x2EFFB20", VA = "0x182F01520")]
	public static bool TryParseHtmlString(string htmlString, out Color color)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x2F00B90", Offset = "0x2EFF190", VA = "0x182F00B90")]
	public static string ToHtmlStringRGB(Color color)
	{
		return null;
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x2F00B90", Offset = "0x2EFF190", VA = "0x182F00B90")]
	public static string ToHtmlStringRGB(in Color color)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x2F007F0", Offset = "0x2EFEDF0", VA = "0x182F007F0")]
	public static string ToHtmlStringRGBA(Color color)
	{
		return null;
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x2F00800", Offset = "0x2EFEE00", VA = "0x182F00800")]
	public static string ToHtmlStringRGBA(in Color color)
	{
		return null;
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x2F010F0", Offset = "0x2EFF6F0", VA = "0x182F010F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryParseHtmlString(ReadOnlySpan<char> input, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x2F00740", Offset = "0x2EFED40", VA = "0x182F00740")]
	private static bool IsHexString(ReadOnlySpan<char> span)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x2F00E50", Offset = "0x2EFF450", VA = "0x182F00E50")]
	private static bool TryParseHexColor(ReadOnlySpan<char> hex, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x2F00D60", Offset = "0x2EFF360", VA = "0x182F00D60")]
	private static bool TryHexToByte(ReadOnlySpan<char> span, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x2F00700", Offset = "0x2EFED00", VA = "0x182F00700")]
	private static int HexDigitValue(char c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x2F00510", Offset = "0x2EFEB10", VA = "0x182F00510")]
	private static extern bool DoTryParseHtmlColor_Injected(ref ManagedSpanWrapper htmlString, out Color32 color);
}
