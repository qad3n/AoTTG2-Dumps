// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000031")]
public static class GisketchTypography
{
	[Token(Token = "0x40000FA")]
	private const string FontRoot = "UI/Fonts/";

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x5241DB0", Offset = "0x5240DB0", VA = "0x5241DB0")]
	public static TMP_FontAsset Resolve(string family, int weight, [Optional] string requiredText)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x5242230", Offset = "0x5241230", VA = "0x5242230")]
	public static TMP_FontAsset Load(string key)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x5242460", Offset = "0x5241460", VA = "0x5242460")]
	public static string Key(string family, int weight)
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x5242650", Offset = "0x5241650", VA = "0x5242650")]
	public static float FontSize(string family, int weight, float size)
	{
		return default(float);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x5242390", Offset = "0x5241390", VA = "0x5242390")]
	public static TMP_FontAsset ForText(string text, TMP_FontAsset preferred)
	{
		return null;
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x5242B20", Offset = "0x5241B20", VA = "0x5242B20")]
	public static Font LegacyFont(Font designed, string languageLetters)
	{
		return null;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x52421D0", Offset = "0x52411D0", VA = "0x52421D0")]
	public static string KeyForLanguage(string family, int weight, string languageName)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x5242F80", Offset = "0x5241F80", VA = "0x5242F80")]
	private static Font SourceFont(string key)
	{
		return null;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x5242CF0", Offset = "0x5241CF0", VA = "0x5242CF0")]
	private static bool Covers(Font font, string characters)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x5242890", Offset = "0x5241890", VA = "0x5242890")]
	private static bool IsAscii(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x52428E0", Offset = "0x52418E0", VA = "0x52428E0")]
	private static string VisibleCharacters(string text)
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x52422A0", Offset = "0x52412A0", VA = "0x52422A0")]
	private static bool HasUsableMaterial(TMP_FontAsset font, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x5242290", Offset = "0x5241290", VA = "0x5242290")]
	private static void ReportError(string message)
	{
	}
}
