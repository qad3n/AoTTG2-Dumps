// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001A4")]
internal sealed class AottgToggleColorSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public AottgToggleColorSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x239F7B0", Offset = "0x239DDB0", VA = "0x18239F7B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x21EBCD0", Offset = "0x21EA2D0", VA = "0x1821EBCD0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x239FB30", Offset = "0x239E130", VA = "0x18239FB30", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x239F5B0", Offset = "0x239DBB0", VA = "0x18239F5B0")]
	private void BuildControl(AottgUi control)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x239FA90", Offset = "0x239E090", VA = "0x18239FA90")]
	private string ColorEnabledKey()
	{
		return null;
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x239FAE0", Offset = "0x239E0E0", VA = "0x18239FAE0")]
	private string ControlValueKey()
	{
		return null;
	}
}
