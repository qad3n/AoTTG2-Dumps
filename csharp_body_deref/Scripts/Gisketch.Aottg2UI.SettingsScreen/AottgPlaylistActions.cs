// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000161")]
internal static class AottgPlaylistActions
{
	[Token(Token = "0x4000806")]
	private const string PlaylistRowId = "settings-sound-custom-playlist";

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x2309C00", Offset = "0x2308200", VA = "0x182309C00")]
	public static void OpenManagerDialog(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x23096F0", Offset = "0x2307CF0", VA = "0x1823096F0")]
	internal static void AddSong(GisketchActionContext context, string song)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x2309F00", Offset = "0x2308500", VA = "0x182309F00")]
	internal static void RemoveSong(GisketchActionContext context, string song)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x2309630", Offset = "0x2307C30", VA = "0x182309630")]
	private static void AddSong(string song)
	{
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x2309DE0", Offset = "0x23083E0", VA = "0x182309DE0")]
	private static void RemoveSong(string song)
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x23099A0", Offset = "0x2307FA0", VA = "0x1823099A0")]
	internal static List<string> CurrentSongs()
	{
		return null;
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x2309840", Offset = "0x2307E40", VA = "0x182309840")]
	internal static List<string> AllSongs()
	{
		return null;
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x23098E0", Offset = "0x2307EE0", VA = "0x1823098E0")]
	internal static List<string> AvailableSongs()
	{
		return null;
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x2309CF0", Offset = "0x23082F0", VA = "0x182309CF0")]
	internal static List<string> PlaylistManagerSongs()
	{
		return null;
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x2309B30", Offset = "0x2308130", VA = "0x182309B30")]
	internal static string CustomPlaylistText()
	{
		return null;
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x230A4E0", Offset = "0x2308AE0", VA = "0x18230A4E0")]
	internal static void SyncCustomPlaylist(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x230A650", Offset = "0x2308C50", VA = "0x18230A650")]
	internal static void SyncPlaylistManager(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x230A350", Offset = "0x2308950", VA = "0x18230A350")]
	internal static string SongStateId(string song)
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x230A130", Offset = "0x2308730", VA = "0x18230A130")]
	private static void SetSongs(List<string> songs)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x230A440", Offset = "0x2308A40", VA = "0x18230A440")]
	private static void SyncAfterChange(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x230A0B0", Offset = "0x23086B0", VA = "0x18230A0B0")]
	private static GisketchUIRoot Root(GisketchActionContext context)
	{
		return null;
	}
}
