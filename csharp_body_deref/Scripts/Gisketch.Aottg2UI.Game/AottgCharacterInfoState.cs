// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterInfoState
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000188")]
internal static class AottgCharacterInfoState
{
	[Token(Token = "0x4000880")]
	private const int MaxVisibleTextLength = 31;

	[Token(Token = "0x4000881")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _remote;

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x43F90C0", Offset = "0x43F90C0", VA = "0x43F90C0")]
	public static JSONNode Current()
	{
		return null;
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x43FD6C0", Offset = "0x43FD6C0", VA = "0x43FD6C0")]
	public static void SetRemote(JSONNode node)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x43FDCC0", Offset = "0x43FDCC0", VA = "0x43FDCC0")]
	public static void ClearRemote()
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x43FDD10", Offset = "0x43FDD10", VA = "0x43FDD10")]
	public static void ApplyCurrentToRuntime()
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x43FE040", Offset = "0x43FE040", VA = "0x43FE040")]
	public static void ApplyLocalToRuntime()
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x43FE0E0", Offset = "0x43FE0E0", VA = "0x43FE0E0")]
	public static void SaveLocal(JSONNode node)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x43FE0F0", Offset = "0x43FE0F0", VA = "0x43FE0F0")]
	public static JSONNode WithNameAndGuild(string name, string guild, string guildPresetId, IEnumerable<string> badges, bool nameEffectEnabled, string nameEffectType, IEnumerable<string> nameEffectColors, bool guildEffectEnabled, string guildEffectType, IEnumerable<string> guildEffectColors, string nameFont, string guildFont)
	{
		return null;
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x43FD710", Offset = "0x43FD710", VA = "0x43FD710")]
	public static JSONNode Sanitize(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x4400110", Offset = "0x4400110", VA = "0x4400110")]
	public static string DisplayGuild(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x43FD5A0", Offset = "0x43FD5A0", VA = "0x43FD5A0")]
	private static JSONNode Local()
	{
		return null;
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x43FEBA0", Offset = "0x43FEBA0", VA = "0x43FEBA0")]
	private static string LocalName()
	{
		return null;
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x43FED50", Offset = "0x43FED50", VA = "0x43FED50")]
	private static string LocalGuild()
	{
		return null;
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x4400010", Offset = "0x4400010", VA = "0x4400010")]
	private static string LocalNameFont()
	{
		return null;
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x4400090", Offset = "0x4400090", VA = "0x4400090")]
	private static string LocalGuildFont()
	{
		return null;
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x43FEC20", Offset = "0x43FEC20", VA = "0x43FEC20")]
	private static string String(JSONNode node, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x43FEDD0", Offset = "0x43FEDD0", VA = "0x43FEDD0")]
	private static string StringAllowEmpty(JSONNode node, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x43FEED0", Offset = "0x43FEED0", VA = "0x43FEED0")]
	private static string OptionalString(JSONNode node, string key, int max)
	{
		return null;
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x43FF050", Offset = "0x43FF050", VA = "0x43FF050")]
	private static JSONArray Badges(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x43FE560", Offset = "0x43FE560", VA = "0x43FE560")]
	private static JSONArray BadgesArray(IEnumerable<string> items)
	{
		return null;
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x43FFA40", Offset = "0x43FFA40", VA = "0x43FFA40")]
	private static JSONObject Effect(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x43FE9F0", Offset = "0x43FE9F0", VA = "0x43FE9F0")]
	private static JSONObject EffectWith(JSONNode current, bool enabled, string type, IEnumerable<string> colors)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x44004B0", Offset = "0x44004B0", VA = "0x44004B0")]
	private static JSONArray ColorArray(IEnumerable<string> colors, JSONNode fallback)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x43FDD20", Offset = "0x43FDD20", VA = "0x43FDD20")]
	private static void ApplyToRuntime(JSONNode node, bool saveLocal)
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x4400B90", Offset = "0x4400B90", VA = "0x4400B90")]
	private static void ApplyEffect(JSONNode effect, BoolSetting enabled, StringSetting type, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x43FF570", Offset = "0x43FF570", VA = "0x43FF570")]
	private static JSONObject LegacyEffect(bool name)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x4400360", Offset = "0x4400360", VA = "0x4400360")]
	private static string ColorString(JSONNode colors, int index, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x4400B10", Offset = "0x4400B10", VA = "0x4400B10")]
	private static string ColorStringValue(string value, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x4400EC0", Offset = "0x4400EC0", VA = "0x4400EC0")]
	private static Color255 ParseColor(JSONNode colors, int index, Color255 fallback)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x4401020", Offset = "0x4401020", VA = "0x4401020")]
	private static string ColorHex(Color255 color)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x4400320", Offset = "0x4400320", VA = "0x4400320")]
	private static string Trim(string value, int max)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x43FE490", Offset = "0x43FE490", VA = "0x43FE490")]
	private static string TrimColoredText(string value, int max)
	{
		return null;
	}
}
