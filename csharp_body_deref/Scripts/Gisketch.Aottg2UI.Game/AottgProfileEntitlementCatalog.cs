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

[Token(Token = "0x20001B6")]
internal static class AottgProfileEntitlementCatalog
{
	[Token(Token = "0x4000965")]
	private const string InfoPath = "Data/Info/ProfileEntitlementInfo";

	[Token(Token = "0x4000966")]
	private const string ActivePatron = "active_patron";

	[Token(Token = "0x4000967")]
	private const string BadgeIconRoot = "UI/Icons/Roles/";

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x44229D0", Offset = "0x44229D0", VA = "0x44229D0")]
	public static string PresetGuildLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x4422F60", Offset = "0x4422F60", VA = "0x4422F60")]
	public static string BadgeLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x4423030", Offset = "0x4423030", VA = "0x4423030")]
	public static string BadgeIcon(string id)
	{
		return null;
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x4423120", Offset = "0x4423120", VA = "0x4423120")]
	public static JSONArray AllowedBadges(JSONNode requested)
	{
		return null;
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x4424170", Offset = "0x4424170", VA = "0x4424170")]
	public static JSONArray AllowedBadges(JSONNode requested, IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x4424B90", Offset = "0x4424B90", VA = "0x4424B90")]
	public static string[] OrderedBadgeIds(IEnumerable<string> requested)
	{
		return null;
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x4425670", Offset = "0x4425670", VA = "0x4425670")]
	public static JSONNode AllowedPresetGuild(string id)
	{
		return null;
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x4425770", Offset = "0x4425770", VA = "0x4425770")]
	public static bool IsSupporter()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x4425AB0", Offset = "0x4425AB0", VA = "0x4425AB0")]
	public static List<AottgProfileEntitlementOption> AllowedPresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x44260D0", Offset = "0x44260D0", VA = "0x44260D0")]
	public static List<AottgProfileEntitlementOption> VisiblePresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x4426690", Offset = "0x4426690", VA = "0x4426690")]
	public static List<AottgProfileEntitlementOption> AllowedBadges()
	{
		return null;
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x44266C0", Offset = "0x44266C0", VA = "0x44266C0")]
	public static List<AottgProfileEntitlementOption> VisibleBadges()
	{
		return null;
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x44266F0", Offset = "0x44266F0", VA = "0x44266F0")]
	public static string PresetGuildIdForLabel(string label)
	{
		return null;
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x4425AE0", Offset = "0x4425AE0", VA = "0x4425AE0")]
	private static List<AottgProfileEntitlementOption> AllowedOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x4426100", Offset = "0x4426100", VA = "0x4426100")]
	private static List<AottgProfileEntitlementOption> VisibleOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x4426980", Offset = "0x4426980", VA = "0x4426980")]
	private static AottgProfileEntitlementOption Option(string group, JSONNode item, bool enabled)
	{
		return default(AottgProfileEntitlementOption);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x4426720", Offset = "0x4426720", VA = "0x4426720")]
	private static string IdForLabel(string group, string label)
	{
		return null;
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x4423D30", Offset = "0x4423D30", VA = "0x4423D30")]
	private static bool IsAllowed(string group, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x44268E0", Offset = "0x44268E0", VA = "0x44268E0")]
	private static bool IsAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x4426B00", Offset = "0x4426B00", VA = "0x4426B00")]
	private static bool VisibleWhenLocked(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x4422AA0", Offset = "0x4422AA0", VA = "0x4422AA0")]
	private static JSONNode Find(string group, string id)
	{
		return null;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x4426B70", Offset = "0x4426B70", VA = "0x4426B70")]
	private static bool RoleAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x4424770", Offset = "0x4424770", VA = "0x4424770")]
	private static bool RoleAllowed(JSONNode item, IEnumerable<string> roles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x44270A0", Offset = "0x44270A0", VA = "0x44270A0")]
	private static bool PatreonAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x4427630", Offset = "0x4427630", VA = "0x4427630")]
	private static bool HasRoleRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x4427580", Offset = "0x4427580", VA = "0x4427580")]
	private static bool HasPatreonRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x4425830", Offset = "0x4425830", VA = "0x4425830")]
	private static string PatreonValue(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x4425990", Offset = "0x4425990", VA = "0x4425990")]
	private static bool HasAnyPatreonTier()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x44277D0", Offset = "0x44277D0", VA = "0x44277D0")]
	private static bool HasPatreonTier(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x4423C90", Offset = "0x4423C90", VA = "0x4423C90")]
	private static JSONNode Root()
	{
		return null;
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x4423DB0", Offset = "0x4423DB0", VA = "0x4423DB0")]
	private static bool Contains(JSONArray array, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x4423780", Offset = "0x4423780", VA = "0x4423780")]
	private static HashSet<string> IdSet(IEnumerable<JSONNode> ids)
	{
		return null;
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x44251F0", Offset = "0x44251F0", VA = "0x44251F0")]
	private static HashSet<string> IdSet(IEnumerable<string> ids)
	{
		return null;
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x44276E0", Offset = "0x44276E0", VA = "0x44276E0")]
	private static bool HasRole(IEnumerable<string> roles, string required)
	{
		return default(bool);
	}
}
