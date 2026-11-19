// ==================== AoTTG2 cross-reference ====================
// Type: UI.LanguageFonts
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/LanguageFonts.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000878")]
internal static class LanguageFonts
{
	[Token(Token = "0x4002AF4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<Text, Font> DesignedFonts;

	[Token(Token = "0x4002AF5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ConditionalWeakTable<Text, string> AssignedValues;

	[Token(Token = "0x4002AF6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ConditionalWeakTable<Text, Font> PinnedFonts;

	[Token(Token = "0x4002AF7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<Font, Font> LegacyFonts;

	[Token(Token = "0x4002AF8")]
	[FieldOffset(Offset = "0x20")]
	private static string _legacyFontsLanguage;

	[Token(Token = "0x4002AF9")]
	[FieldOffset(Offset = "0x28")]
	private static bool _rightToLeftLanguage;

	[Token(Token = "0x4002AFA")]
	[FieldOffset(Offset = "0x30")]
	private static TMP_FontAsset _designedDefault;

	[Token(Token = "0x60050C3")]
	[Address(RVA = "0x5C54A10", Offset = "0x5C53A10", VA = "0x5C54A10")]
	public static void Apply()
	{
	}

	[Token(Token = "0x60050C4")]
	[Address(RVA = "0x5C54C80", Offset = "0x5C53C80", VA = "0x5C54C80")]
	public static void Localize(GameObject root)
	{
	}

	[Token(Token = "0x60050C5")]
	[Address(RVA = "0x5C54F00", Offset = "0x5C53F00", VA = "0x5C54F00")]
	public static Font LegacyFont(Font font)
	{
		return null;
	}

	[Token(Token = "0x60050C6")]
	[Address(RVA = "0x5C55250", Offset = "0x5C54250", VA = "0x5C55250")]
	public static void KeepDesignedFont(Text text)
	{
	}

	[Token(Token = "0x60050C7")]
	[Address(RVA = "0x5C53D90", Offset = "0x5C52D90", VA = "0x5C53D90")]
	public static void SetText(Text text, string value)
	{
	}

	[Token(Token = "0x60050C8")]
	[Address(RVA = "0x5C55190", Offset = "0x5C54190", VA = "0x5C55190")]
	private static void EnsureRightToLeftLines(Text text)
	{
	}

	[Token(Token = "0x60050C9")]
	[Address(RVA = "0x5C54E10", Offset = "0x5C53E10", VA = "0x5C54E10")]
	private static Font DesignedFont(Text text)
	{
		return null;
	}
}
