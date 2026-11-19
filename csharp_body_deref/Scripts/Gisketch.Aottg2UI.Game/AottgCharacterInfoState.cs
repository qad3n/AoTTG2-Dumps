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

[Token(Token = "0x20002EA")]
internal static class AottgCharacterInfoState
{
	[Token(Token = "0x4000EBA")]
	private const int MaxVisibleTextLength = 31;

	[Token(Token = "0x4000EBB")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _remote;

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x57D56D0", Offset = "0x57D46D0", VA = "0x57D56D0")]
	public static JSONNode Current()
	{
		return null;
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x57D9990", Offset = "0x57D8990", VA = "0x57D9990")]
	public static void SetRemote(JSONNode node)
	{
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x57D9FA0", Offset = "0x57D8FA0", VA = "0x57D9FA0")]
	public static void ClearRemote()
	{
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x57D9FF0", Offset = "0x57D8FF0", VA = "0x57D9FF0")]
	public static void ApplyCurrentToRuntime()
	{
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x57DA330", Offset = "0x57D9330", VA = "0x57DA330")]
	public static void ApplyLocalToRuntime()
	{
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x57DA3D0", Offset = "0x57D93D0", VA = "0x57DA3D0")]
	public static void SaveLocal(JSONNode node)
	{
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x57DA3E0", Offset = "0x57D93E0", VA = "0x57DA3E0")]
	public static JSONNode WithNameAndGuild(string name, string guild, string guildPresetId, IEnumerable<string> badges, bool nameEffectEnabled, string nameEffectType, IEnumerable<string> nameEffectColors, bool guildEffectEnabled, string guildEffectType, IEnumerable<string> guildEffectColors, string nameFont, string guildFont)
	{
		return null;
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x57D99E0", Offset = "0x57D89E0", VA = "0x57D99E0")]
	public static JSONNode Sanitize(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x57DC2E0", Offset = "0x57DB2E0", VA = "0x57DC2E0")]
	public static string DisplayGuild(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x57D9880", Offset = "0x57D8880", VA = "0x57D9880")]
	private static JSONNode Local()
	{
		return null;
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x57DADD0", Offset = "0x57D9DD0", VA = "0x57DADD0")]
	private static string LocalName()
	{
		return null;
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x57DAF80", Offset = "0x57D9F80", VA = "0x57DAF80")]
	private static string LocalGuild()
	{
		return null;
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x57DC1E0", Offset = "0x57DB1E0", VA = "0x57DC1E0")]
	private static string LocalNameFont()
	{
		return null;
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x57DC260", Offset = "0x57DB260", VA = "0x57DC260")]
	private static string LocalGuildFont()
	{
		return null;
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x57DAE50", Offset = "0x57D9E50", VA = "0x57DAE50")]
	private static string String(JSONNode node, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x57DB000", Offset = "0x57DA000", VA = "0x57DB000")]
	private static string StringAllowEmpty(JSONNode node, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x57DB100", Offset = "0x57DA100", VA = "0x57DB100")]
	private static string OptionalString(JSONNode node, string key, int max)
	{
		return null;
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x57DB280", Offset = "0x57DA280", VA = "0x57DB280")]
	private static JSONArray Badges(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x57DA850", Offset = "0x57D9850", VA = "0x57DA850")]
	private static JSONArray BadgesArray(IEnumerable<string> items)
	{
		return null;
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x57DBBA0", Offset = "0x57DABA0", VA = "0x57DBBA0")]
	private static JSONObject Effect(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x57DAC20", Offset = "0x57D9C20", VA = "0x57DAC20")]
	private static JSONObject EffectWith(JSONNode current, bool enabled, string type, IEnumerable<string> colors)
	{
		return null;
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x57DC680", Offset = "0x57DB680", VA = "0x57DC680")]
	private static JSONArray ColorArray(IEnumerable<string> colors, JSONNode fallback)
	{
		return null;
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x57DA010", Offset = "0x57D9010", VA = "0x57DA010")]
	private static void ApplyToRuntime(JSONNode node, bool saveLocal)
	{
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x57DCB00", Offset = "0x57DBB00", VA = "0x57DCB00")]
	private static void ApplyEffect(JSONNode effect, BoolSetting enabled, StringSetting type, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD)
	{
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x57DB6D0", Offset = "0x57DA6D0", VA = "0x57DB6D0")]
	private static JSONObject LegacyEffect(bool name)
	{
		return null;
	}

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x57DC530", Offset = "0x57DB530", VA = "0x57DC530")]
	private static string ColorString(JSONNode colors, int index, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x57DCA80", Offset = "0x57DBA80", VA = "0x57DCA80")]
	private static string ColorStringValue(string value, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x57DCE20", Offset = "0x57DBE20", VA = "0x57DCE20")]
	private static Color255 ParseColor(JSONNode colors, int index, Color255 fallback)
	{
		return null;
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x57DCF80", Offset = "0x57DBF80", VA = "0x57DCF80")]
	private static string ColorHex(Color255 color)
	{
		return null;
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x57DC4F0", Offset = "0x57DB4F0", VA = "0x57DC4F0")]
	private static string Trim(string value, int max)
	{
		return null;
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x57DA780", Offset = "0x57D9780", VA = "0x57DA780")]
	private static string TrimColoredText(string value, int max)
	{
		return null;
	}
}
