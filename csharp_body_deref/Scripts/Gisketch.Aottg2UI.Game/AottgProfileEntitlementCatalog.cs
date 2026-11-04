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

[Token(Token = "0x20002BC")]
internal static class AottgProfileEntitlementCatalog
{
	[Token(Token = "0x4000E10")]
	private const string InfoPath = "Data/Info/ProfileEntitlementInfo";

	[Token(Token = "0x4000E11")]
	private const string ActivePatron = "active_patron";

	[Token(Token = "0x4000E12")]
	private const string BadgeIconRoot = "UI/Icons/Roles/";

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x1E186E0", Offset = "0x1E16CE0", VA = "0x181E186E0")]
	public static string PresetGuildLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x1E16950", Offset = "0x1E14F50", VA = "0x181E16950")]
	public static string BadgeLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x1E16860", Offset = "0x1E14E60", VA = "0x181E16860")]
	public static string BadgeIcon(string id)
	{
		return null;
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x1E15C50", Offset = "0x1E14250", VA = "0x181E15C50")]
	public static JSONArray AllowedBadges(JSONNode requested)
	{
		return null;
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x1E16050", Offset = "0x1E14650", VA = "0x181E16050")]
	public static JSONArray AllowedBadges(JSONNode requested, IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x1E17EE0", Offset = "0x1E164E0", VA = "0x181E17EE0")]
	public static string[] OrderedBadgeIds(IEnumerable<string> requested)
	{
		return null;
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x1E16770", Offset = "0x1E14D70", VA = "0x181E16770")]
	public static JSONNode AllowedPresetGuild(string id)
	{
		return null;
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x1E17CB0", Offset = "0x1E162B0", VA = "0x181E17CB0")]
	public static bool IsSupporter()
	{
		return default(bool);
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x1E16820", Offset = "0x1E14E20", VA = "0x181E16820")]
	public static List<AottgProfileEntitlementOption> AllowedPresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x1E19060", Offset = "0x1E17660", VA = "0x181E19060")]
	public static List<AottgProfileEntitlementOption> VisiblePresetGuilds()
	{
		return null;
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x1E16010", Offset = "0x1E14610", VA = "0x181E16010")]
	public static List<AottgProfileEntitlementOption> AllowedBadges()
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x1E18D20", Offset = "0x1E17320", VA = "0x181E18D20")]
	public static List<AottgProfileEntitlementOption> VisibleBadges()
	{
		return null;
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x1E186A0", Offset = "0x1E16CA0", VA = "0x181E186A0")]
	public static string PresetGuildIdForLabel(string label)
	{
		return null;
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x1E16420", Offset = "0x1E14A20", VA = "0x181E16420")]
	private static List<AottgProfileEntitlementOption> AllowedOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x1E18D60", Offset = "0x1E17360", VA = "0x181E18D60")]
	private static List<AottgProfileEntitlementOption> VisibleOptions(string group)
	{
		return null;
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x1E17D50", Offset = "0x1E16350", VA = "0x181E17D50")]
	private static AottgProfileEntitlementOption Option(string group, JSONNode item, bool enabled)
	{
		return default(AottgProfileEntitlementOption);
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x1E17460", Offset = "0x1E15A60", VA = "0x181E17460")]
	private static string IdForLabel(string group, string label)
	{
		return null;
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x1E17B80", Offset = "0x1E16180", VA = "0x181E17B80")]
	private static bool IsAllowed(string group, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x1E17C10", Offset = "0x1E16210", VA = "0x181E17C10")]
	private static bool IsAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x1E190A0", Offset = "0x1E176A0", VA = "0x181E190A0")]
	private static bool VisibleWhenLocked(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x1E16BE0", Offset = "0x1E151E0", VA = "0x181E16BE0")]
	private static JSONNode Find(string group, string id)
	{
		return null;
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x1E189F0", Offset = "0x1E16FF0", VA = "0x181E189F0")]
	private static bool RoleAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x1E187C0", Offset = "0x1E16DC0", VA = "0x181E187C0")]
	private static bool RoleAllowed(JSONNode item, IEnumerable<string> roles)
	{
		return default(bool);
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x1E18270", Offset = "0x1E16870", VA = "0x181E18270")]
	private static bool PatreonAllowed(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x1E172B0", Offset = "0x1E158B0", VA = "0x181E172B0")]
	private static bool HasRoleRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x1E16F70", Offset = "0x1E15570", VA = "0x181E16F70")]
	private static bool HasPatreonRequirement(JSONNode item)
	{
		return default(bool);
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x1E18540", Offset = "0x1E16B40", VA = "0x181E18540")]
	private static string PatreonValue(string key)
	{
		return null;
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x1E16E50", Offset = "0x1E15450", VA = "0x181E16E50")]
	private static bool HasAnyPatreonTier()
	{
		return default(bool);
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x1E17020", Offset = "0x1E15620", VA = "0x181E17020")]
	private static bool HasPatreonTier(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001134")]
	[Address(RVA = "0x1E18C70", Offset = "0x1E17270", VA = "0x181E18C70")]
	private static JSONNode Root()
	{
		return null;
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x1E16A30", Offset = "0x1E15030", VA = "0x181E16A30")]
	private static bool Contains(JSONArray array, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x1E175E0", Offset = "0x1E15BE0", VA = "0x181E175E0")]
	private static HashSet<string> IdSet(IEnumerable<JSONNode> ids)
	{
		return null;
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x1E178F0", Offset = "0x1E15EF0", VA = "0x181E178F0")]
	private static HashSet<string> IdSet(IEnumerable<string> ids)
	{
		return null;
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x1E17360", Offset = "0x1E15960", VA = "0x181E17360")]
	private static bool HasRole(IEnumerable<string> roles, string required)
	{
		return default(bool);
	}
}
