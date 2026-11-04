// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002A")]
public static class GisketchTypography
{
	[Token(Token = "0x40000DC")]
	private const string FontRoot = "UI/Fonts/";

	[Token(Token = "0x40000DD")]
	private const string ProbeCharacters = "Aa0";

	[Token(Token = "0x40000DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string[] BodyFallbackAssetNames;

	[Token(Token = "0x40000DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly string[] DisplayFallbackAssetNames;

	[Token(Token = "0x40000E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly string[] GlobalFallbackAssetNames;

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x18BB1E0", Offset = "0x18B97E0", VA = "0x1818BB1E0")]
	public static TMP_FontAsset Resolve(string family, int weight, [Optional] string requiredText, bool useLocaleDisplayFont = false)
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x18BADE0", Offset = "0x18B93E0", VA = "0x1818BADE0")]
	public static string Key(string family, int weight)
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x18BAD10", Offset = "0x18B9310", VA = "0x1818BAD10")]
	public static string KeyForLanguage(string family, int weight, string languageName)
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x18BAC70", Offset = "0x18B9270", VA = "0x1818BAC70")]
	public static string KeyForLanguage(string family, int weight, string languageName, bool useLocaleDisplayFont)
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x18BAAA0", Offset = "0x18B90A0", VA = "0x1818BAAA0")]
	public static string[] FallbackAssetNamesFor(string family, int weight)
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x18BA9B0", Offset = "0x18B8FB0", VA = "0x1818BA9B0")]
	public static string[] FallbackAssetNamesForKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x18BAC00", Offset = "0x18B9200", VA = "0x1818BAC00")]
	private static bool IsDisplayKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x18BB400", Offset = "0x18B9A00", VA = "0x1818BB400")]
	private static void ValidateFallbacks(TMP_FontAsset font, string[] assetNames)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x18BAB10", Offset = "0x18B9110", VA = "0x1818BAB10")]
	private static bool FallbacksMatch(List<TMP_FontAsset> current, List<TMP_FontAsset> expected)
	{
		return default(bool);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x18BA640", Offset = "0x18B8C40", VA = "0x1818BA640")]
	private static bool CanRender(TMP_FontAsset font, string requiredText, bool includeProbeCharacters, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x18BB010", Offset = "0x18B9610", VA = "0x1818BB010")]
	private static string RequiredCharacters(string requiredText, bool includeProbeCharacters)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void ReportError(string message)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void ReportWarning(string message)
	{
	}
}
