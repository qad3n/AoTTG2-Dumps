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

[Token(Token = "0x2000159")]
internal sealed class AottgBombStatSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x200015A")]
	internal enum StatKind
	{
		[Token(Token = "0x40007FA")]
		Radius,
		[Token(Token = "0x40007FB")]
		Range,
		[Token(Token = "0x40007FC")]
		Speed,
		[Token(Token = "0x40007FD")]
		Cooldown
	}

	[Token(Token = "0x40007EE")]
	private const int MaxTotal = 20;

	[Token(Token = "0x40007EF")]
	internal const string RadiusId = "settings-ability-bomb-radius";

	[Token(Token = "0x40007F0")]
	internal const string RangeId = "settings-ability-bomb-range";

	[Token(Token = "0x40007F1")]
	internal const string SpeedId = "settings-ability-bomb-speed";

	[Token(Token = "0x40007F2")]
	internal const string CooldownId = "settings-ability-bomb-cooldown";

	[Token(Token = "0x40007F3")]
	internal const string UnusedPointsKey = "settings-ability-bomb-unused-points.value";

	[Token(Token = "0x40007F4")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007F5")]
	[FieldOffset(Offset = "0x18")]
	private readonly IntSetting _setting;

	[Token(Token = "0x40007F6")]
	[FieldOffset(Offset = "0x20")]
	private readonly StatKind _kind;

	[Token(Token = "0x40007F7")]
	[FieldOffset(Offset = "0x28")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007F8")]
	[FieldOffset(Offset = "0x50")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x5CBAD40", Offset = "0x5CB9D40", VA = "0x5CBAD40")]
	public AottgBombStatSettingRow(string id, IntSetting setting, StatKind kind)
	{
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x5CBAD90", Offset = "0x5CB9D90", VA = "0x5CBAD90", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x5CBB170", Offset = "0x5CBA170", VA = "0x5CBB170", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x5CBB1A0", Offset = "0x5CBA1A0", VA = "0x5CBB1A0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x5CBB1B0", Offset = "0x5CBA1B0", VA = "0x5CBB1B0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x5CBB410", Offset = "0x5CBA410", VA = "0x5CBB410")]
	private void BuildStepper(AottgUi control)
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x5CBAFF0", Offset = "0x5CB9FF0", VA = "0x5CBAFF0")]
	private string LabelText()
	{
		return null;
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x5CBB5B0", Offset = "0x5CBA5B0", VA = "0x5CBB5B0")]
	private static string LabelText(IntSetting setting, StatKind kind)
	{
		return null;
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x5CBB060", Offset = "0x5CBA060", VA = "0x5CBB060")]
	private static string StatLabel(StatKind kind)
	{
		return null;
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x5CBB620", Offset = "0x5CBA620", VA = "0x5CBB620")]
	private static string StatValue(IntSetting setting, StatKind kind)
	{
		return null;
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x5CBB8B0", Offset = "0x5CBA8B0", VA = "0x5CBB8B0")]
	private void Change(GisketchActionContext context, int delta)
	{
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x5CBB9F0", Offset = "0x5CBA9F0", VA = "0x5CBB9F0")]
	private string DirtyValue()
	{
		return null;
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x5CBB9B0", Offset = "0x5CBA9B0", VA = "0x5CBB9B0")]
	private bool CanIncrement()
	{
		return default(bool);
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x5CBBA60", Offset = "0x5CBAA60", VA = "0x5CBBA60")]
	private static bool CanIncrement(IntSetting setting)
	{
		return default(bool);
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x5CBBAA0", Offset = "0x5CBAAA0", VA = "0x5CBBAA0")]
	internal static int TotalPoints()
	{
		return default(int);
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x5CBBB20", Offset = "0x5CBAB20", VA = "0x5CBBB20")]
	internal static int UnusedPoints()
	{
		return default(int);
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x5CBB1C0", Offset = "0x5CBA1C0", VA = "0x5CBB1C0")]
	internal static void SyncAll(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x5CBBB40", Offset = "0x5CBAB40", VA = "0x5CBBB40")]
	private static void SyncRow(GisketchUIRoot root, string id, IntSetting setting, StatKind kind)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x5CBB130", Offset = "0x5CBA130", VA = "0x5CBB130")]
	private static string LabelKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x5CBBDF0", Offset = "0x5CBADF0", VA = "0x5CBBDF0")]
	private static string ValueKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x5CBBE30", Offset = "0x5CBAE30", VA = "0x5CBBE30")]
	private static string MinusEnabledKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x5CBBE70", Offset = "0x5CBAE70", VA = "0x5CBBE70")]
	private static string PlusEnabledKey(string id)
	{
		return null;
	}
}
