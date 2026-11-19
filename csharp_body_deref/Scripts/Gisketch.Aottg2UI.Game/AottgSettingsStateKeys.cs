// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsStateKeys
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
		return null;
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x5812140", Offset = "0x5811140", VA = "0x5812140")]
	public static string CustomPlaylistSelected(string songId)
	{
		return null;
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x5812180", Offset = "0x5811180", VA = "0x5812180")]
	public static string DirtyRow(string rowId)
	{
		return null;
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x58121C0", Offset = "0x58111C0", VA = "0x58121C0")]
	public static string KeybindConflictRow(string rowId)
	{
		return null;
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x5812200", Offset = "0x5811200", VA = "0x5812200")]
	public static string KeybindConflictTooltip(string rowId)
	{
		return null;
	}
}
