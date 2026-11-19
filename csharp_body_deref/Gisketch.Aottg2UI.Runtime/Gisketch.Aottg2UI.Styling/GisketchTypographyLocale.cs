// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypographyLocale
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000032")]
public static class GisketchTypographyLocale
{
	[Token(Token = "0x40000FB")]
	private const string LatinDisplayKey = "Barlow-Bold SDF";

	[Token(Token = "0x40000FC")]
	private const string NotoKey = "NotoSans-Regular SDF";

	[Token(Token = "0x40000FD")]
	private const string ArabicKey = "NotoSansArabic-VariableFont_wdth,wght SDF";

	[Token(Token = "0x40000FE")]
	private const string SimplifiedChineseKey = "NotoSansSC-Regular SDF";

	[Token(Token = "0x40000FF")]
	private const string JapaneseKey = "NotoSansJP-Regular SDF";

	[Token(Token = "0x4000100")]
	private const string KoreanKey = "NotoSansKR-Regular SDF";

	[Token(Token = "0x4000101")]
	private const string ThaiKey = "NotoSansThai-Regular SDF";

	[Token(Token = "0x4000102")]
	public const string SymbolKey = "Symbola SDF";

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] FallbackFontKeys;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type SettingsManagerType;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type GeneralSettingsType;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Type StringSettingType;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x20")]
	private static readonly FieldInfo GeneralSettingsField;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x28")]
	private static readonly FieldInfo LanguageField;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x30")]
	private static readonly PropertyInfo ValueProperty;

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x5242000", Offset = "0x5241000", VA = "0x5242000")]
	public static string CurrentLanguageName()
	{
		return null;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x5242E00", Offset = "0x5241E00", VA = "0x5242E00")]
	public static string FontKeyForLanguage(string baseKey, string languageName)
	{
		return null;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x52426C0", Offset = "0x52416C0", VA = "0x52426C0")]
	public static float SizeScale(string baseKey, string languageName)
	{
		return default(float);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x5243510", Offset = "0x5242510", VA = "0x5243510")]
	public static string CharacterFontKey(int unicode, string languageName)
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x52436D0", Offset = "0x52426D0", VA = "0x52436D0")]
	private static string HanFontKey(string languageName)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x52430D0", Offset = "0x52420D0", VA = "0x52430D0")]
	public static bool SupportsLegacyText(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x5242C90", Offset = "0x5241C90", VA = "0x5242C90")]
	public static bool UsesDesignedFonts(string languageName)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x5243110", Offset = "0x5242110", VA = "0x5243110")]
	private static bool UsesLatinFonts(string languageName)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x5243370", Offset = "0x5242370", VA = "0x5243370")]
	private static string ScriptFontKey(string languageName)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x5243330", Offset = "0x5242330", VA = "0x5243330")]
	private static bool IsBarlowKey(string key)
	{
		return default(bool);
	}
}
