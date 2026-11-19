// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceRuleEngine
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceRuleEngine.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AD")]
internal static class ExperienceRuleEngine
{
	[Token(Token = "0x400038A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Type> NamedIntSettings;

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x58D39E0", Offset = "0x58D29E0", VA = "0x58D39E0")]
	public static bool TryGetValueName(string id, int value, out string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x58D3B50", Offset = "0x58D2B50", VA = "0x58D3B50")]
	public static bool TryParseValueName(string id, string name, out int value)
	{
		return default(bool);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x58D3F70", Offset = "0x58D2F70", VA = "0x58D3F70")]
	public static ExperienceRuleResult Apply(PresetDefinition experience, InGameSet settings, [Optional] Func<string, string> mapCategoryResolver, [Optional] string variant)
	{
		return null;
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x58D65A0", Offset = "0x58D55A0", VA = "0x58D65A0")]
	public static bool Validate(ExperienceRuleResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x58D5190", Offset = "0x58D4190", VA = "0x58D5190")]
	public static bool TryResolveSetting(InGameSet settings, string id, out BaseSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x58D5410", Offset = "0x58D4410", VA = "0x58D5410")]
	private static void ApplyBounds(BaseSetting setting, UIRule rule, List<string> errors)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x58D5700", Offset = "0x58D4700", VA = "0x58D5700")]
	private static void ApplyValue(BaseSetting setting, string id, object rawValue, List<string> errors)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x58D69A0", Offset = "0x58D59A0", VA = "0x58D69A0")]
	private static bool TryParseInt(string id, string value, out int parsed)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x58D6250", Offset = "0x58D5250", VA = "0x58D6250")]
	private static bool ChangesDefaultValue(BaseSetting setting, string id, object ruleValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x58D5BB0", Offset = "0x58D4BB0", VA = "0x58D5BB0")]
	private static bool MatchesDefaultValue(BaseSetting setting, string id, object defaultValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x58D6850", Offset = "0x58D5850", VA = "0x58D6850")]
	private static bool MatchesRange(BaseSetting setting, UIRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x58D5EB0", Offset = "0x58D4EB0", VA = "0x58D5EB0")]
	private static bool MatchesAllowedValue(BaseSetting setting, string id, UIRule rule)
	{
		return default(bool);
	}
}
