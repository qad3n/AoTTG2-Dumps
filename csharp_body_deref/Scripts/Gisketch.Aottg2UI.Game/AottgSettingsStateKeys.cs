// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsStateKeys
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsStateKeys.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E2")]
internal static class AottgSettingsStateKeys
{
	[Token(Token = "0x4000EA4")]
	public const string CurrentSong = "settings.sound.currentSong";

	[Token(Token = "0x4000EA5")]
	public const string CustomPlaylist = "settings.sound.customPlaylist";

	[Token(Token = "0x4000EA6")]
	public const string CustomPlaylistAvailableEmpty = "settings.sound.customPlaylist.available.empty";

	[Token(Token = "0x4000EA7")]
	public const string CustomPlaylistSelectedEmpty = "settings.sound.customPlaylist.selected.empty";

	[Token(Token = "0x4000EA8")]
	public const string DirtyCount = "settings.dirty.count";

	[Token(Token = "0x4000EA9")]
	public const string HasDirty = "settings.dirty.hasDirty";

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x1E32030", Offset = "0x1E30630", VA = "0x181E32030")]
	public static string CustomPlaylistAvailable(string songId)
	{
		return null;
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x1E32070", Offset = "0x1E30670", VA = "0x181E32070")]
	public static string CustomPlaylistSelected(string songId)
	{
		return null;
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x1E320B0", Offset = "0x1E306B0", VA = "0x181E320B0")]
	public static string DirtyRow(string rowId)
	{
		return null;
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x1E320F0", Offset = "0x1E306F0", VA = "0x181E320F0")]
	public static string KeybindConflictRow(string rowId)
	{
		return null;
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x1E32130", Offset = "0x1E30730", VA = "0x181E32130")]
	public static string KeybindConflictTooltip(string rowId)
	{
		return null;
	}
}
