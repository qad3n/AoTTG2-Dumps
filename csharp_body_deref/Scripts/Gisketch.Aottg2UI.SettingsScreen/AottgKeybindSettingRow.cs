// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015E")]
internal sealed class AottgKeybindSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x40007F4")]
	private const int SlotCount = 2;

	[Token(Token = "0x40007F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40007F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly KeybindSetting _setting;

	[Token(Token = "0x40007F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _tooltip;

	[Token(Token = "0x40007F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x40007FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public string LabelKey;

	[Token(Token = "0x40007FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public string TooltipKey;

	[Token(Token = "0x40007FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public bool WarnOnConflict;

	[Token(Token = "0x40007FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ConflictScopeId;

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x2308D90", Offset = "0x2307390", VA = "0x182308D90")]
	public AottgKeybindSettingRow(string id, string label, KeybindSetting setting, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x2308480", Offset = "0x2306A80", VA = "0x182308480", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x21EA430", Offset = "0x21E8A30", VA = "0x1821EA430", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x2308AD0", Offset = "0x23070D0", VA = "0x182308AD0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x23082B0", Offset = "0x23068B0", VA = "0x1823082B0")]
	private void BuildSlots(AottgUi control)
	{
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x2307EF0", Offset = "0x23064F0", VA = "0x182307EF0")]
	private void BuildSlot(AottgUi row, int slot)
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x2308CE0", Offset = "0x23072E0", VA = "0x182308CE0")]
	internal static string Text(InputKey key)
	{
		return null;
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x2308A20", Offset = "0x2307020", VA = "0x182308A20")]
	private string LabelText()
	{
		return null;
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x2308AF0", Offset = "0x23070F0", VA = "0x182308AF0")]
	internal static void Sync(GisketchUIRoot root, string rowId, KeybindSetting setting)
	{
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x2308780", Offset = "0x2306D80", VA = "0x182308780")]
	private string DirtyValue()
	{
		return null;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x2308A60", Offset = "0x2307060", VA = "0x182308A60")]
	private static string SlotTextKey(string rowId, int slot)
	{
		return null;
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x2308900", Offset = "0x2306F00", VA = "0x182308900")]
	internal static void EnsureSlots(KeybindSetting setting)
	{
	}
}
