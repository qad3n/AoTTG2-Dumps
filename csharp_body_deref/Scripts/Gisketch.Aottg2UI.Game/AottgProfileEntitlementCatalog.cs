using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000183")]
internal static class AottgProfileEntitlementCatalog
{
	[Token(Token = "0x400089F")]
	private const string InfoPath = "Data/Info/ProfileEntitlementInfo";

	[Token(Token = "0x40008A0")]
	private const string ActivePatron = "active_patron";

	[Token(Token = "0x40008A1")]
	private const string BadgeIconRoot = "UI/Icons/Roles/";

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x40F1240", Offset = "0x40F1240", VA = "0x40F1240")]
	public static string PresetGuildLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x40F17D0", Offset = "0x40F17D0", VA = "0x40F17D0")]
	public static string BadgeLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x40F18A0", Offset = "0x40F18A0", VA = "0x40F18A0")]
	public static string BadgeIcon(string id)
	{
		return null;
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x40E36E0", Offset = "0x40E36E0", VA = "0x40E36E0")]
	public static JSONArray AllowedBadges(JSONNode requested)
	{
		return null;
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x40F2380", Offset = "0x40F2380", VA = "0x40F2380")]
	public static JSONArray AllowedBadges(JSONNode requested, IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x40E1BF0", Offset = "0x40E1BF0", VA = "0x40E1BF0")]
	public static string[] OrderedBadgeIds(IEnumerable<string> requested)
	{
		return null;
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x40F3220", Offset = "0x40F3220", VA = "0x40F3220")]
	public static JSONNode AllowedPresetGuild(string id)
	{
		return null;
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x40F3320", Offset = "0x40F3320", VA = "0x40F3320")]
	public static bool IsSupporter()
	{
		return default(bool);
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x40F3660", Offset = "0x40F3660", VA = "0x40F3660")]
	public static List<AottgProfileEntitlementOption> AllowedPresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x40E48C0", Offset = "0x40E48C0", VA = "0x40E48C0")]
	public static List<AottgProfileEntitlementOption> VisiblePresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x40F4210", Offset = "0x40F4210", VA = "0x40F4210")]
	public static List<AottgProfileEntitlementOption> AllowedBadges()
	{
		return null;
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x40E3370", Offset = "0x40E3370", VA = "0x40E3370")]
	public static List<AottgProfileEntitlementOption> VisibleBadges()
	{
		return null;
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x40F4240", Offset = "0x40F4240", VA = "0x40F4240")]
	public static string PresetGuildIdForLabel(string label)
	{
		return null;
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x40F3690", Offset = "0x40F3690", VA = "0x40F3690")]
	private static List<AottgProfileEntitlementOption> AllowedOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x40F3C80", Offset = "0x40F3C80", VA = "0x40F3C80")]
	private static List<AottgProfileEntitlementOption> VisibleOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x40F44D0", Offset = "0x40F44D0", VA = "0x40F44D0")]
	private static AottgProfileEntitlementOption Option(string group, JSONNode item, bool enabled)
	{
		return default(AottgProfileEntitlementOption);
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x40F4270", Offset = "0x40F4270", VA = "0x40F4270")]
	private static string IdForLabel(string group, string label)
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x40F1F40", Offset = "0x40F1F40", VA = "0x40F1F40")]
	private static bool IsAllowed(string group, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x40F4430", Offset = "0x40F4430", VA = "0x40F4430")]
	private static bool IsAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x40F4650", Offset = "0x40F4650", VA = "0x40F4650")]
	private static bool VisibleWhenLocked(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x40F1310", Offset = "0x40F1310", VA = "0x40F1310")]
	private static JSONNode Find(string group, string id)
	{
		return null;
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x40F46C0", Offset = "0x40F46C0", VA = "0x40F46C0")]
	private static bool RoleAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x40F2980", Offset = "0x40F2980", VA = "0x40F2980")]
	private static bool RoleAllowed(JSONNode item, IEnumerable<string> roles)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x40F4BF0", Offset = "0x40F4BF0", VA = "0x40F4BF0")]
	private static bool PatreonAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x40F5180", Offset = "0x40F5180", VA = "0x40F5180")]
	private static bool HasRoleRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x40F50D0", Offset = "0x40F50D0", VA = "0x40F50D0")]
	private static bool HasPatreonRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x40F33E0", Offset = "0x40F33E0", VA = "0x40F33E0")]
	private static string PatreonValue(string key)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x40F3540", Offset = "0x40F3540", VA = "0x40F3540")]
	private static bool HasAnyPatreonTier()
	{
		return default(bool);
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x40F5320", Offset = "0x40F5320", VA = "0x40F5320")]
	private static bool HasPatreonTier(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x40F1EA0", Offset = "0x40F1EA0", VA = "0x40F1EA0")]
	private static JSONNode Root()
	{
		return null;
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x40F1FC0", Offset = "0x40F1FC0", VA = "0x40F1FC0")]
	private static bool Contains(JSONArray array, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x40F1990", Offset = "0x40F1990", VA = "0x40F1990")]
	private static HashSet<string> IdSet(IEnumerable<JSONNode> ids)
	{
		return null;
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x40F2DA0", Offset = "0x40F2DA0", VA = "0x40F2DA0")]
	private static HashSet<string> IdSet(IEnumerable<string> ids)
	{
		return null;
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x40F5230", Offset = "0x40F5230", VA = "0x40F5230")]
	private static bool HasRole(IEnumerable<string> roles, string required)
	{
		return default(bool);
	}
}
