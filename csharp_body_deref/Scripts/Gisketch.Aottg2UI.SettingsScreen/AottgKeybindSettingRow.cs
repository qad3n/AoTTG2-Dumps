// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000166")]
internal sealed class AottgKeybindSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x400083F")]
	private const int SlotCount = 2;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x20")]
	private readonly KeybindSetting _setting;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x28")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x50")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x58")]
	public string LabelKey;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x60")]
	public string TooltipKey;

	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x68")]
	public bool WarnOnConflict;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x70")]
	public string ConflictScopeId;

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x5CC2610", Offset = "0x5CC1610", VA = "0x5CC2610")]
	public AottgKeybindSettingRow(string id, string label, KeybindSetting setting)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x5CC2670", Offset = "0x5CC1670", VA = "0x5CC2670", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x5CC2930", Offset = "0x5CC1930", VA = "0x5CC2930", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x5CC2960", Offset = "0x5CC1960", VA = "0x5CC2960", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x5CC2980", Offset = "0x5CC1980", VA = "0x5CC2980", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x5CC2990", Offset = "0x5CC1990", VA = "0x5CC2990")]
	private void BuildSlots(AottgUi control)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x5CC2B30", Offset = "0x5CC1B30", VA = "0x5CC2B30")]
	private void BuildSlot(AottgUi row, int slot)
	{
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x5CC2EC0", Offset = "0x5CC1EC0", VA = "0x5CC2EC0")]
	internal static string Text(InputKey key)
	{
		return null;
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x5CBF290", Offset = "0x5CBE290", VA = "0x5CBF290")]
	internal static void Sync(GisketchUIRoot root, string rowId, KeybindSetting setting)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x5CC2FB0", Offset = "0x5CC1FB0", VA = "0x5CC2FB0")]
	private string DirtyValue()
	{
		return null;
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x5CC2F40", Offset = "0x5CC1F40", VA = "0x5CC2F40")]
	private static string SlotTextKey(string rowId, int slot)
	{
		return null;
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x5CBE570", Offset = "0x5CBD570", VA = "0x5CBE570")]
	internal static void EnsureSlots(KeybindSetting setting)
	{
	}
}
