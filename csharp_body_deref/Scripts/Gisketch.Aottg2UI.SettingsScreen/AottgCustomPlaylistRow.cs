// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015D")]
internal sealed class AottgCustomPlaylistRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x4000808")]
	private const float ControlWidth = 620f;

	[Token(Token = "0x4000809")]
	private const float ManageButtonWidth = 150f;

	[Token(Token = "0x400080A")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400080B")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _labelKey;

	[Token(Token = "0x400080C")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _stateKey;

	[Token(Token = "0x400080D")]
	[FieldOffset(Offset = "0x28")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x400080E")]
	[FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400080F")]
	[FieldOffset(Offset = "0x58")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x5CBD0D0", Offset = "0x5CBC0D0", VA = "0x5CBD0D0")]
	public AottgCustomPlaylistRow(string id, string labelKey, string stateKey, Func<string> dirtyValue)
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x5CBD140", Offset = "0x5CBC140", VA = "0x5CBD140", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x5CBD2E0", Offset = "0x5CBC2E0", VA = "0x5CBD2E0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x5CBD310", Offset = "0x5CBC310", VA = "0x5CBD310", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x5CBD320", Offset = "0x5CBC320", VA = "0x5CBD320", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x5CBD480", Offset = "0x5CBC480", VA = "0x5CBD480")]
	private void BuildControl(AottgUi control)
	{
	}
}
