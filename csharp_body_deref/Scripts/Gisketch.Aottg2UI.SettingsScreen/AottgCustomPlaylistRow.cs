// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000155")]
internal sealed class AottgCustomPlaylistRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x40007BB")]
	private const float ControlWidth = 620f;

	[Token(Token = "0x40007BC")]
	private const float ManageButtonWidth = 150f;

	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40007BF")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x40007C0")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _stateKey;

	[Token(Token = "0x40007C1")]
	[FieldOffset(Offset = "0x30")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x40007C2")]
	[FieldOffset(Offset = "0x38")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x60")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x1E19AF0", Offset = "0x1E180F0", VA = "0x181E19AF0")]
	public AottgCustomPlaylistRow(string id, string label, string labelKey, string stateKey, Func<string> dirtyValue)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x21EC700", Offset = "0x21EAD00", VA = "0x1821EC700", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x21E9DB0", Offset = "0x21E83B0", VA = "0x1821E9DB0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x21EC890", Offset = "0x21EAE90", VA = "0x1821EC890", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x21EC540", Offset = "0x21EAB40", VA = "0x1821EC540")]
	private void BuildControl(AottgUi control)
	{
	}
}
