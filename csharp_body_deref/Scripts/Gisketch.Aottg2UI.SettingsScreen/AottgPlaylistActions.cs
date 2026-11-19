// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000169")]
internal static class AottgPlaylistActions
{
	[Token(Token = "0x4000850")]
	private const string PlaylistRowId = "settings-sound-custom-playlist";

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x5CC3710", Offset = "0x5CC2710", VA = "0x5CC3710")]
	public static void OpenManagerDialog(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x5CC3CC0", Offset = "0x5CC2CC0", VA = "0x5CC3CC0")]
	internal static void AddSong(GisketchActionContext context, string song)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x5CC3E70", Offset = "0x5CC2E70", VA = "0x5CC3E70")]
	internal static void RemoveSong(GisketchActionContext context, string song)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x5CC3CD0", Offset = "0x5CC2CD0", VA = "0x5CC3CD0")]
	private static void AddSong(string song)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x5CC3E80", Offset = "0x5CC2E80", VA = "0x5CC3E80")]
	private static void RemoveSong(string song)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x5CC3FB0", Offset = "0x5CC2FB0", VA = "0x5CC3FB0")]
	internal static List<string> CurrentSongs()
	{
		return null;
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x5CC4530", Offset = "0x5CC3530", VA = "0x5CC4530")]
	internal static List<string> AllSongs()
	{
		return null;
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x5CC4640", Offset = "0x5CC3640", VA = "0x5CC4640")]
	internal static List<string> AvailableSongs()
	{
		return null;
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x5CC4710", Offset = "0x5CC3710", VA = "0x5CC4710")]
	internal static List<string> PlaylistManagerSongs()
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x5CBD3C0", Offset = "0x5CBC3C0", VA = "0x5CBD3C0")]
	internal static string CustomPlaylistText()
	{
		return null;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x5CC38B0", Offset = "0x5CC28B0", VA = "0x5CC38B0")]
	internal static void SyncCustomPlaylist(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x5CC3950", Offset = "0x5CC2950", VA = "0x5CC3950")]
	internal static void SyncPlaylistManager(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x5CC4870", Offset = "0x5CC3870", VA = "0x5CC4870")]
	internal static string SongStateId(string song)
	{
		return null;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x5CC41E0", Offset = "0x5CC31E0", VA = "0x5CC41E0")]
	private static void SetSongs(List<string> songs)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x5CC3DD0", Offset = "0x5CC2DD0", VA = "0x5CC3DD0")]
	private static void SyncAfterChange(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x5CC3830", Offset = "0x5CC2830", VA = "0x5CC3830")]
	private static GisketchUIRoot Root(GisketchActionContext context)
	{
		return null;
	}
}
