// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchFontFallback
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000027")]
public static class GisketchFontFallback
{
	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<TMP_Text> Pending;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x8")]
	private static int _designedCount;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x522F480", Offset = "0x522E480", VA = "0x522F480")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void Install()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x522F5C0", Offset = "0x522E5C0", VA = "0x522F5C0")]
	public static void Ensure(TMP_FontAsset preferred, string characters)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x522F9C0", Offset = "0x522E9C0", VA = "0x522F9C0")]
	private static void OnMissingCharacter(int unicode, int stringIndex, string text, TMP_FontAsset fontAsset, TMP_Text textComponent)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x522F8C0", Offset = "0x522E8C0", VA = "0x522F8C0")]
	private static bool Add(int unicode)
	{
		return default(bool);
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x522FBA0", Offset = "0x522EBA0", VA = "0x522FBA0")]
	private static bool TryCover(string key, int unicode, out bool added)
	{
		return default(bool);
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x522FFB0", Offset = "0x522EFB0", VA = "0x522FFB0")]
	public static void ApplyLanguage()
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x5230590", Offset = "0x522F590", VA = "0x5230590")]
	private static string LanguageKey()
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x5230600", Offset = "0x522F600", VA = "0x5230600")]
	private static int Priority(TMP_FontAsset font, string languageKey)
	{
		return default(int);
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x5230730", Offset = "0x522F730", VA = "0x5230730")]
	private static int Priority(string key, string languageKey)
	{
		return default(int);
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x522FD80", Offset = "0x522ED80", VA = "0x522FD80")]
	private static int InsertIndex(List<TMP_FontAsset> fallbacks, string key)
	{
		return default(int);
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x522F810", Offset = "0x522E810", VA = "0x522F810")]
	private static bool Has(TMP_FontAsset font, int unicode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x52307C0", Offset = "0x522F7C0", VA = "0x52307C0")]
	private static void Refresh()
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x5230A10", Offset = "0x522FA10", VA = "0x5230A10")]
	private static void Restore()
	{
	}
}
