// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceRuleEngine
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceRuleEngine.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000076")]
internal static class ExperienceRuleEngine
{
	[Token(Token = "0x400025D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, int> DifficultyValues;

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x1DBBDA0", Offset = "0x1DBA3A0", VA = "0x181DBBDA0")]
	public static ExperienceRuleResult Apply(PresetDefinition experience, InGameSet settings, [Optional] Func<string, string> mapCategoryResolver, [Optional] string variant)
	{
		return null;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x1DBE110", Offset = "0x1DBC710", VA = "0x181DBE110")]
	public static bool Validate(ExperienceRuleResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x1DBDE30", Offset = "0x1DBC430", VA = "0x181DBDE30")]
	public static bool TryResolveSetting(InGameSet settings, string id, out BaseSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x1DBB7D0", Offset = "0x1DB9DD0", VA = "0x181DBB7D0")]
	private static void ApplyBounds(BaseSetting setting, UIRule rule, List<string> errors)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x1DBBA40", Offset = "0x1DBA040", VA = "0x181DBBA40")]
	private static void ApplyValue(BaseSetting setting, string id, object rawValue, List<string> errors)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x1DBDD10", Offset = "0x1DBC310", VA = "0x181DBDD10")]
	private static bool TryParseInt(string id, string value, out int parsed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x1DBD210", Offset = "0x1DBB810", VA = "0x181DBD210")]
	private static bool ChangesDefaultValue(BaseSetting setting, string id, object ruleValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x1DBD8A0", Offset = "0x1DBBEA0", VA = "0x181DBD8A0")]
	private static bool MatchesDefaultValue(BaseSetting setting, string id, object defaultValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x1DBDBC0", Offset = "0x1DBC1C0", VA = "0x181DBDBC0")]
	private static bool MatchesRange(BaseSetting setting, UIRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x1DBD5F0", Offset = "0x1DBBBF0", VA = "0x181DBD5F0")]
	private static bool MatchesAllowedValue(BaseSetting setting, string id, UIRule rule)
	{
		return default(bool);
	}
}
