// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000021")]
public static class GisketchTypography
{
	[Token(Token = "0x40000B2")]
	private const string FontRoot = "UI/Fonts/";

	[Token(Token = "0x40000B3")]
	private const string ProbeCharacters = "Aa0";

	[Token(Token = "0x40000B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string[] BodyFallbackAssetNames;

	[Token(Token = "0x40000B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly string[] DisplayFallbackAssetNames;

	[Token(Token = "0x40000B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly string[] GlobalFallbackAssetNames;

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3A42C40", Offset = "0x3A42C40", VA = "0x3A42C40")]
	public static TMP_FontAsset Resolve(string family, int weight, [Optional] string requiredText, bool useLocaleDisplayFont = false)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3A42F00", Offset = "0x3A42F00", VA = "0x3A42F00")]
	public static string Key(string family, int weight)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3A43AA0", Offset = "0x3A43AA0", VA = "0x3A43AA0")]
	public static string KeyForLanguage(string family, int weight, string languageName)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3A432C0", Offset = "0x3A432C0", VA = "0x3A432C0")]
	public static string KeyForLanguage(string family, int weight, string languageName, bool useLocaleDisplayFont)
	{
		return null;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3A43EF0", Offset = "0x3A43EF0", VA = "0x3A43EF0")]
	public static string[] FallbackAssetNamesFor(string family, int weight)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3A43370", Offset = "0x3A43370", VA = "0x3A43370")]
	public static string[] FallbackAssetNamesForKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3A43F50", Offset = "0x3A43F50", VA = "0x3A43F50")]
	private static bool IsDisplayKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3A43470", Offset = "0x3A43470", VA = "0x3A43470")]
	private static void ValidateFallbacks(TMP_FontAsset font, string[] assetNames)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3A43FC0", Offset = "0x3A43FC0", VA = "0x3A43FC0")]
	private static bool FallbacksMatch(List<TMP_FontAsset> current, List<TMP_FontAsset> expected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3A438C0", Offset = "0x3A438C0", VA = "0x3A438C0")]
	private static bool CanRender(TMP_FontAsset font, string requiredText, bool includeProbeCharacters, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3A440A0", Offset = "0x3A440A0", VA = "0x3A440A0")]
	private static string RequiredCharacters(string requiredText, bool includeProbeCharacters)
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3A43360", Offset = "0x3A43360", VA = "0x3A43360")]
	private static void ReportError(string message)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3A43FB0", Offset = "0x3A43FB0", VA = "0x3A43FB0")]
	private static void ReportWarning(string message)
	{
	}
}
