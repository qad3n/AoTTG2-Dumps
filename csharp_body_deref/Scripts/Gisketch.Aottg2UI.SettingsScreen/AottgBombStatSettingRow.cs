// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000151")]
internal sealed class AottgBombStatSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x2000152")]
	internal enum StatKind
	{
		[Token(Token = "0x40007AD")]
		Radius,
		[Token(Token = "0x40007AE")]
		Range,
		[Token(Token = "0x40007AF")]
		Speed,
		[Token(Token = "0x40007B0")]
		Cooldown
	}

	[Token(Token = "0x40007A0")]
	private const int MaxTotal = 20;

	[Token(Token = "0x40007A1")]
	internal const string RadiusId = "settings-ability-bomb-radius";

	[Token(Token = "0x40007A2")]
	internal const string RangeId = "settings-ability-bomb-range";

	[Token(Token = "0x40007A3")]
	internal const string SpeedId = "settings-ability-bomb-speed";

	[Token(Token = "0x40007A4")]
	internal const string CooldownId = "settings-ability-bomb-cooldown";

	[Token(Token = "0x40007A5")]
	internal const string UnusedPointsKey = "settings-ability-bomb-unused-points.value";

	[Token(Token = "0x40007A6")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007A7")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40007A8")]
	[FieldOffset(Offset = "0x20")]
	private readonly IntSetting _setting;

	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x28")]
	private readonly StatKind _kind;

	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x58")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x21EBC70", Offset = "0x21EA270", VA = "0x1821EBC70")]
	public AottgBombStatSettingRow(string id, string label, IntSetting setting, StatKind kind)
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x21EA620", Offset = "0x21E8C20", VA = "0x1821EA620", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x21EA430", Offset = "0x21E8A30", VA = "0x1821EA430", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x21EB3A0", Offset = "0x21E99A0", VA = "0x1821EB3A0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x21EA460", Offset = "0x21E8A60", VA = "0x1821EA460")]
	private void BuildStepper(AottgUi control)
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x21EAB20", Offset = "0x21E9120", VA = "0x1821EAB20")]
	private string LabelText()
	{
		return null;
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x21EAAA0", Offset = "0x21E90A0", VA = "0x1821EAAA0")]
	private static string LabelText(string label, IntSetting setting, StatKind kind)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x21EABC0", Offset = "0x21E91C0", VA = "0x1821EABC0")]
	private static string StatValue(IntSetting setting, StatKind kind)
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x21EA8E0", Offset = "0x21E8EE0", VA = "0x1821EA8E0")]
	private void Change(GisketchActionContext context, int delta)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x21EA9F0", Offset = "0x21E8FF0", VA = "0x1821EA9F0")]
	private string DirtyValue()
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x21EA840", Offset = "0x21E8E40", VA = "0x1821EA840")]
	private bool CanIncrement()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x21EA890", Offset = "0x21E8E90", VA = "0x1821EA890")]
	private static bool CanIncrement(IntSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x21EB3B0", Offset = "0x21E99B0", VA = "0x1821EB3B0")]
	internal static int TotalPoints()
	{
		return default(int);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x21EBC10", Offset = "0x21EA210", VA = "0x1821EBC10")]
	internal static int UnusedPoints()
	{
		return default(int);
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x21EAEA0", Offset = "0x21E94A0", VA = "0x1821EAEA0")]
	internal static void SyncAll(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x21EB160", Offset = "0x21E9760", VA = "0x1821EB160")]
	private static void SyncRow(GisketchUIRoot root, string id, string label, IntSetting setting, StatKind kind)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x21EAA60", Offset = "0x21E9060", VA = "0x1821EAA60")]
	private static string LabelKey(string id)
	{
		return null;
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x21EBC30", Offset = "0x21EA230", VA = "0x1821EBC30")]
	private static string ValueKey(string id)
	{
		return null;
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x21EAB40", Offset = "0x21E9140", VA = "0x1821EAB40")]
	private static string MinusEnabledKey(string id)
	{
		return null;
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x21EAB80", Offset = "0x21E9180", VA = "0x1821EAB80")]
	private static string PlusEnabledKey(string id)
	{
		return null;
	}
}
