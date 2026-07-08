using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using Utility;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000156")]
internal static class AottgCharacterInfoState
{
	[Token(Token = "0x40007BF")]
	private const int MaxVisibleTextLength = 31;

	[Token(Token = "0x40007C0")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _remote;

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x40C8240", Offset = "0x40C8240", VA = "0x40C8240")]
	public static JSONNode Current()
	{
		return null;
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x40CC1E0", Offset = "0x40CC1E0", VA = "0x40CC1E0")]
	public static void SetRemote(JSONNode node)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x40CC7E0", Offset = "0x40CC7E0", VA = "0x40CC7E0")]
	public static void ClearRemote()
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x40CC830", Offset = "0x40CC830", VA = "0x40CC830")]
	public static void ApplyCurrentToRuntime()
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x40CCB60", Offset = "0x40CCB60", VA = "0x40CCB60")]
	public static void ApplyLocalToRuntime()
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x40CCC00", Offset = "0x40CCC00", VA = "0x40CCC00")]
	public static void SaveLocal(JSONNode node)
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x40CCC10", Offset = "0x40CCC10", VA = "0x40CCC10")]
	public static JSONNode WithNameAndGuild(string name, string guild, string guildPresetId, IEnumerable<string> badges, bool nameEffectEnabled, string nameEffectType, IEnumerable<string> nameEffectColors, bool guildEffectEnabled, string guildEffectType, IEnumerable<string> guildEffectColors, string nameFont, string guildFont)
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x40CC230", Offset = "0x40CC230", VA = "0x40CC230")]
	public static JSONNode Sanitize(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x40CEB30", Offset = "0x40CEB30", VA = "0x40CEB30")]
	public static string DisplayGuild(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x40CC0C0", Offset = "0x40CC0C0", VA = "0x40CC0C0")]
	private static JSONNode Local()
	{
		return null;
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x40CD6C0", Offset = "0x40CD6C0", VA = "0x40CD6C0")]
	private static string LocalName()
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x40CD870", Offset = "0x40CD870", VA = "0x40CD870")]
	private static string LocalGuild()
	{
		return null;
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x40CEA30", Offset = "0x40CEA30", VA = "0x40CEA30")]
	private static string LocalNameFont()
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x40CEAB0", Offset = "0x40CEAB0", VA = "0x40CEAB0")]
	private static string LocalGuildFont()
	{
		return null;
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x40CD740", Offset = "0x40CD740", VA = "0x40CD740")]
	private static string String(JSONNode node, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x40CD8F0", Offset = "0x40CD8F0", VA = "0x40CD8F0")]
	private static string OptionalString(JSONNode node, string key, int max)
	{
		return null;
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x40CDA70", Offset = "0x40CDA70", VA = "0x40CDA70")]
	private static JSONArray Badges(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x40CD080", Offset = "0x40CD080", VA = "0x40CD080")]
	private static JSONArray BadgesArray(IEnumerable<string> items)
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x40CE460", Offset = "0x40CE460", VA = "0x40CE460")]
	private static JSONObject Effect(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x40CD510", Offset = "0x40CD510", VA = "0x40CD510")]
	private static JSONObject EffectWith(JSONNode current, bool enabled, string type, IEnumerable<string> colors)
	{
		return null;
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x40CEED0", Offset = "0x40CEED0", VA = "0x40CEED0")]
	private static JSONArray ColorArray(IEnumerable<string> colors, JSONNode fallback)
	{
		return null;
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x40CC840", Offset = "0x40CC840", VA = "0x40CC840")]
	private static void ApplyToRuntime(JSONNode node, bool saveLocal)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x40CF5B0", Offset = "0x40CF5B0", VA = "0x40CF5B0")]
	private static void ApplyEffect(JSONNode effect, BoolSetting enabled, StringSetting type, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x40CDF90", Offset = "0x40CDF90", VA = "0x40CDF90")]
	private static JSONObject LegacyEffect(bool name)
	{
		return null;
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x40CED80", Offset = "0x40CED80", VA = "0x40CED80")]
	private static string ColorString(JSONNode colors, int index, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x40CF530", Offset = "0x40CF530", VA = "0x40CF530")]
	private static string ColorStringValue(string value, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x40CF8E0", Offset = "0x40CF8E0", VA = "0x40CF8E0")]
	private static Color255 ParseColor(JSONNode colors, int index, Color255 fallback)
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x40CFA40", Offset = "0x40CFA40", VA = "0x40CFA40")]
	private static string ColorHex(Color255 color)
	{
		return null;
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x40CED40", Offset = "0x40CED40", VA = "0x40CED40")]
	private static string Trim(string value, int max)
	{
		return null;
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x40CCFB0", Offset = "0x40CCFB0", VA = "0x40CCFB0")]
	private static string TrimColoredText(string value, int max)
	{
		return null;
	}
}
