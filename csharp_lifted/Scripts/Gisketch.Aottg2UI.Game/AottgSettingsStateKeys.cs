// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsStateKeys
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200033F")]
internal static class AottgSettingsStateKeys
{
	[Token(Token = "0x4001032")]
	public const string CurrentSong = "settings.sound.currentSong";

	[Token(Token = "0x4001033")]
	public const string CustomPlaylist = "settings.sound.customPlaylist";

	[Token(Token = "0x4001034")]
	public const string CustomPlaylistAvailableEmpty = "settings.sound.customPlaylist.available.empty";

	[Token(Token = "0x4001035")]
	public const string CustomPlaylistSelectedEmpty = "settings.sound.customPlaylist.selected.empty";

	[Token(Token = "0x4001036")]
	public const string DirtyCount = "settings.dirty.count";

	[Token(Token = "0x4001037")]
	public const string HasDirty = "settings.dirty.hasDirty";

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x5812100", Offset = "0x5811100", VA = "0x5812100")]
	public static string CustomPlaylistAvailable(string songId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c (Gisketch.Aottg2UI.Game.AottgSettingsStateKeys$$CustomPlaylistAvailable): clean
		String pSVar1;

		pSVar1 = String.Concat("settings.sound.customPlaylist.available.", songId);
		return pSVar1;
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x5812140", Offset = "0x5811140", VA = "0x5812140")]
	public static string CustomPlaylistSelected(string songId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c (Gisketch.Aottg2UI.Game.AottgSettingsStateKeys$$CustomPlaylistSelected): clean
		String pSVar1;

		pSVar1 = String.Concat("settings.sound.customPlaylist.selected.", songId);
		return pSVar1;
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x5812180", Offset = "0x5811180", VA = "0x5812180")]
	public static string DirtyRow(string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c (Gisketch.Aottg2UI.Game.AottgSettingsStateKeys$$DirtyRow): clean
		String pSVar1;

		pSVar1 = String.Concat(rowId, ".dirty");
		return pSVar1;
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x58121C0", Offset = "0x58111C0", VA = "0x58121C0")]
	public static string KeybindConflictRow(string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c (Gisketch.Aottg2UI.Game.AottgSettingsStateKeys$$KeybindConflictRow): clean
		String pSVar1;

		pSVar1 = String.Concat(rowId, ".keybindConflict");
		return pSVar1;
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x5812200", Offset = "0x5811200", VA = "0x5812200")]
	public static string KeybindConflictTooltip(string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c (Gisketch.Aottg2UI.Game.AottgSettingsStateKeys$$KeybindConflictTooltip): clean
		String pSVar1;

		pSVar1 = String.Concat(rowId, ".keybindConflict.tooltip");
		return pSVar1;
	}
}
