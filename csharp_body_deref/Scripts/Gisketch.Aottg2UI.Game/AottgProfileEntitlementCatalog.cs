// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000319")]
internal static class AottgProfileEntitlementCatalog
{
	[Token(Token = "0x4000FA1")]
	private const string InfoPath = "Data/Info/ProfileEntitlementInfo";

	[Token(Token = "0x4000FA2")]
	private const string ActivePatron = "active_patron";

	[Token(Token = "0x4000FA3")]
	private const string BadgeIconRoot = "UI/Icons/Roles/";

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x57FF180", Offset = "0x57FE180", VA = "0x57FF180")]
	public static string PresetGuildLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x57FF660", Offset = "0x57FE660", VA = "0x57FF660")]
	public static string BadgeLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x57FF730", Offset = "0x57FE730", VA = "0x57FF730")]
	public static string BadgeIcon(string id)
	{
		return null;
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x57FF820", Offset = "0x57FE820", VA = "0x57FF820")]
	public static JSONArray AllowedBadges(JSONNode requested)
	{
		return null;
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x5800680", Offset = "0x57FF680", VA = "0x5800680")]
	public static JSONArray AllowedBadges(JSONNode requested, IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x5800F50", Offset = "0x57FFF50", VA = "0x5800F50")]
	public static string[] OrderedBadgeIds(IEnumerable<string> requested)
	{
		return null;
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x5801940", Offset = "0x5800940", VA = "0x5801940")]
	public static JSONNode AllowedPresetGuild(string id)
	{
		return null;
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x5801A40", Offset = "0x5800A40", VA = "0x5801A40")]
	public static bool IsSupporter()
	{
		return default(bool);
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x5801D80", Offset = "0x5800D80", VA = "0x5801D80")]
	public static List<AottgProfileEntitlementOption> AllowedPresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x58022C0", Offset = "0x58012C0", VA = "0x58022C0")]
	public static List<AottgProfileEntitlementOption> VisiblePresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x58027D0", Offset = "0x58017D0", VA = "0x58027D0")]
	public static List<AottgProfileEntitlementOption> AllowedBadges()
	{
		return null;
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x5802800", Offset = "0x5801800", VA = "0x5802800")]
	public static List<AottgProfileEntitlementOption> VisibleBadges()
	{
		return null;
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x5802830", Offset = "0x5801830", VA = "0x5802830")]
	public static string PresetGuildIdForLabel(string label)
	{
		return null;
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x5801DB0", Offset = "0x5800DB0", VA = "0x5801DB0")]
	private static List<AottgProfileEntitlementOption> AllowedOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x58022F0", Offset = "0x58012F0", VA = "0x58022F0")]
	private static List<AottgProfileEntitlementOption> VisibleOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x5802AA0", Offset = "0x5801AA0", VA = "0x5802AA0")]
	private static AottgProfileEntitlementOption Option(string group, JSONNode item, bool enabled)
	{
		return default(AottgProfileEntitlementOption);
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x5802870", Offset = "0x5801870", VA = "0x5802870")]
	private static string IdForLabel(string group, string label)
	{
		return null;
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x58002C0", Offset = "0x57FF2C0", VA = "0x58002C0")]
	private static bool IsAllowed(string group, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x5802A00", Offset = "0x5801A00", VA = "0x5802A00")]
	private static bool IsAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x5802C20", Offset = "0x5801C20", VA = "0x5802C20")]
	private static bool VisibleWhenLocked(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x57FF250", Offset = "0x57FE250", VA = "0x57FF250")]
	private static JSONNode Find(string group, string id)
	{
		return null;
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x5802C90", Offset = "0x5801C90", VA = "0x5802C90")]
	private static bool RoleAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x5800B90", Offset = "0x57FFB90", VA = "0x5800B90")]
	private static bool RoleAllowed(JSONNode item, IEnumerable<string> roles)
	{
		return default(bool);
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x5803130", Offset = "0x5802130", VA = "0x5803130")]
	private static bool PatreonAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x5803630", Offset = "0x5802630", VA = "0x5803630")]
	private static bool HasRoleRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x5803580", Offset = "0x5802580", VA = "0x5803580")]
	private static bool HasPatreonRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x5801B00", Offset = "0x5800B00", VA = "0x5801B00")]
	private static string PatreonValue(string key)
	{
		return null;
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x5801C60", Offset = "0x5800C60", VA = "0x5801C60")]
	private static bool HasAnyPatreonTier()
	{
		return default(bool);
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x58037D0", Offset = "0x58027D0", VA = "0x58037D0")]
	private static bool HasPatreonTier(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x5800220", Offset = "0x57FF220", VA = "0x5800220")]
	private static JSONNode Root()
	{
		return null;
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x5800340", Offset = "0x57FF340", VA = "0x5800340")]
	private static bool Contains(JSONArray array, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x57FFDB0", Offset = "0x57FEDB0", VA = "0x57FFDB0")]
	private static HashSet<string> IdSet(IEnumerable<JSONNode> ids)
	{
		return null;
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x5801550", Offset = "0x5800550", VA = "0x5801550")]
	private static HashSet<string> IdSet(IEnumerable<string> ids)
	{
		return null;
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x58036E0", Offset = "0x58026E0", VA = "0x58036E0")]
	private static bool HasRole(IEnumerable<string> roles, string required)
	{
		return default(bool);
	}
}
