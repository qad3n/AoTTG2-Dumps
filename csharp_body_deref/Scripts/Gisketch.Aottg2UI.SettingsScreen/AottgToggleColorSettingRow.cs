// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B3")]
internal sealed class AottgToggleColorSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x400092E")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x400092F")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000930")]
	[FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x5D4AD80", Offset = "0x5D49D80", VA = "0x5D4AD80")]
	public AottgToggleColorSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x5D56EC0", Offset = "0x5D55EC0", VA = "0x5D56EC0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x5D57130", Offset = "0x5D56130", VA = "0x5D57130", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x5D57160", Offset = "0x5D56160", VA = "0x5D57160", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x5D57170", Offset = "0x5D56170", VA = "0x5D57170", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x5D57610", Offset = "0x5D56610", VA = "0x5D57610")]
	private void BuildControl(AottgUi control)
	{
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x5D575C0", Offset = "0x5D565C0", VA = "0x5D575C0")]
	private string ColorEnabledKey()
	{
		return null;
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x5D57570", Offset = "0x5D56570", VA = "0x5D57570")]
	private string ControlValueKey()
	{
		return null;
	}
}
