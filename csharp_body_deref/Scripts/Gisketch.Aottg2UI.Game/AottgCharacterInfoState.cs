// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterInfoState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using Utility;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028E")]
internal static class AottgCharacterInfoState
{
	[Token(Token = "0x4000D21")]
	private const int MaxVisibleTextLength = 31;

	[Token(Token = "0x4000D22")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _remote;

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x1DF3120", Offset = "0x1DF1720", VA = "0x181DF3120")]
	public static JSONNode Current()
	{
		return null;
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x1DF4C30", Offset = "0x1DF3230", VA = "0x181DF4C30")]
	public static void SetRemote(JSONNode node)
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x1DF2DA0", Offset = "0x1DF13A0", VA = "0x181DF2DA0")]
	public static void ClearRemote()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x1DF20D0", Offset = "0x1DF06D0", VA = "0x181DF20D0")]
	public static void ApplyCurrentToRuntime()
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x1DF2400", Offset = "0x1DF0A00", VA = "0x181DF2400")]
	public static void ApplyLocalToRuntime()
	{
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x1DF4C20", Offset = "0x1DF3220", VA = "0x181DF4C20")]
	public static void SaveLocal(JSONNode node)
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x1DF5040", Offset = "0x1DF3640", VA = "0x181DF5040")]
	public static JSONNode WithNameAndGuild(string name, string guild, string guildPresetId, IEnumerable<string> badges, bool nameEffectEnabled, string nameEffectType, IEnumerable<string> nameEffectColors, bool guildEffectEnabled, string guildEffectType, IEnumerable<string> guildEffectColors, string nameFont, string guildFont)
	{
		return null;
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x1DF4430", Offset = "0x1DF2A30", VA = "0x181DF4430")]
	public static JSONNode Sanitize(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x1DF31E0", Offset = "0x1DF17E0", VA = "0x181DF31E0")]
	public static string DisplayGuild(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x1DF4070", Offset = "0x1DF2670", VA = "0x181DF4070")]
	private static JSONNode Local()
	{
		return null;
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x1DF3FF0", Offset = "0x1DF25F0", VA = "0x181DF3FF0")]
	private static string LocalName()
	{
		return null;
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x1DF3EF0", Offset = "0x1DF24F0", VA = "0x181DF3EF0")]
	private static string LocalGuild()
	{
		return null;
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x1DF3F70", Offset = "0x1DF2570", VA = "0x181DF3F70")]
	private static string LocalNameFont()
	{
		return null;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x1DF3E70", Offset = "0x1DF2470", VA = "0x181DF3E70")]
	private static string LocalGuildFont()
	{
		return null;
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x1DF4DB0", Offset = "0x1DF33B0", VA = "0x181DF4DB0")]
	private static string String(JSONNode node, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x1DF4C90", Offset = "0x1DF3290", VA = "0x181DF4C90")]
	private static string StringAllowEmpty(JSONNode node, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x1DF4120", Offset = "0x1DF2720", VA = "0x181DF4120")]
	private static string OptionalString(JSONNode node, string key, int max)
	{
		return null;
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x1DF2A90", Offset = "0x1DF1090", VA = "0x181DF2A90")]
	private static JSONArray Badges(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x1DF27F0", Offset = "0x1DF0DF0", VA = "0x181DF27F0")]
	private static JSONArray BadgesArray(IEnumerable<string> items)
	{
		return null;
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x1DF3690", Offset = "0x1DF1C90", VA = "0x181DF3690")]
	private static JSONObject Effect(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x1DF33E0", Offset = "0x1DF19E0", VA = "0x181DF33E0")]
	private static JSONObject EffectWith(JSONNode current, bool enabled, string type, IEnumerable<string> colors)
	{
		return null;
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x1DF2DF0", Offset = "0x1DF13F0", VA = "0x181DF2DF0")]
	private static JSONArray ColorArray(IEnumerable<string> colors, JSONNode fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x1DF24B0", Offset = "0x1DF0AB0", VA = "0x181DF24B0")]
	private static void ApplyToRuntime(JSONNode node, bool saveLocal)
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x1DF20F0", Offset = "0x1DF06F0", VA = "0x181DF20F0")]
	private static void ApplyEffect(JSONNode effect, BoolSetting enabled, StringSetting type, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD)
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x1DF3980", Offset = "0x1DF1F80", VA = "0x181DF3980")]
	private static JSONObject LegacyEffect(bool name)
	{
		return null;
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x1DF3010", Offset = "0x1DF1610", VA = "0x181DF3010")]
	private static string ColorString(JSONNode colors, int index, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x1DF2F80", Offset = "0x1DF1580", VA = "0x181DF2F80")]
	private static string ColorStringValue(string value, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x1DF42B0", Offset = "0x1DF28B0", VA = "0x181DF42B0")]
	private static Color255 ParseColor(JSONNode colors, int index, Color255 fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x1DF2F10", Offset = "0x1DF1510", VA = "0x181DF2F10")]
	private static string ColorHex(Color255 color)
	{
		return null;
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x1DF4FF0", Offset = "0x1DF35F0", VA = "0x181DF4FF0")]
	private static string Trim(string value, int max)
	{
		return null;
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x1DF4F00", Offset = "0x1DF3500", VA = "0x181DF4F00")]
	private static string TrimColoredText(string value, int max)
	{
		return null;
	}
}
