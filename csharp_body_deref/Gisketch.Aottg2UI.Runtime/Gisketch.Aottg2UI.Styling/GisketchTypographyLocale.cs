// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypographyLocale
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002B")]
public static class GisketchTypographyLocale
{
	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type SettingsManagerType;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type GeneralSettingsType;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type StringSettingType;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x18")]
	private static readonly FieldInfo GeneralSettingsField;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x20")]
	private static readonly FieldInfo LanguageField;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x28")]
	private static readonly PropertyInfo ValueProperty;

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x18B9CC0", Offset = "0x18B82C0", VA = "0x1818B9CC0")]
	public static string CurrentLanguageName()
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x18B9F30", Offset = "0x18B8530", VA = "0x1818B9F30")]
	public static string DisplayKeyForLanguage(string baseKey, string languageName)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x18B9ED0", Offset = "0x18B84D0", VA = "0x1818B9ED0")]
	public static string DisplayKeyForCurrentLanguage(string baseKey)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x18BA2A0", Offset = "0x18B88A0", VA = "0x1818BA2A0")]
	private static bool IsDisplayKey(string key)
	{
		return default(bool);
	}
}
