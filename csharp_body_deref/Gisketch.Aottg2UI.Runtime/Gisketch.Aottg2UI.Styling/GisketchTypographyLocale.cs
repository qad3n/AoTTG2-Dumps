// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypographyLocale
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000022")]
public static class GisketchTypographyLocale
{
	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type SettingsManagerType;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type GeneralSettingsType;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type StringSettingType;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x18")]
	private static readonly FieldInfo GeneralSettingsField;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x20")]
	private static readonly FieldInfo LanguageField;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x28")]
	private static readonly PropertyInfo ValueProperty;

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3A430F0", Offset = "0x3A430F0", VA = "0x3A430F0")]
	public static string CurrentLanguageName()
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3A43B90", Offset = "0x3A43B90", VA = "0x3A43B90")]
	public static string DisplayKeyForLanguage(string baseKey, string languageName)
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3A447F0", Offset = "0x3A447F0", VA = "0x3A447F0")]
	public static string DisplayKeyForCurrentLanguage(string baseKey)
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3A44790", Offset = "0x3A44790", VA = "0x3A44790")]
	private static bool IsDisplayKey(string key)
	{
		return default(bool);
	}
}
