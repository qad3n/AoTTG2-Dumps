// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000163")]
[AottgDialog("setting-playlist-manager")]
public sealed class AottgPlaylistManagerDialog : AottgDialog
{
	[Token(Token = "0x4000808")]
	public const string Id = "setting-playlist-manager";

	[Token(Token = "0x170000DD")]
	protected override string Title
	{
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x230BCF0", Offset = "0x230A2F0", VA = "0x18230BCF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x230BBF0", Offset = "0x230A1F0", VA = "0x18230BBF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x230BAF0", Offset = "0x230A0F0", VA = "0x18230BAF0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x230AB40", Offset = "0x2309140", VA = "0x18230AB40", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x230AF60", Offset = "0x2309560", VA = "0x18230AF60", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x230AAC0", Offset = "0x23090C0", VA = "0x18230AAC0")]
	private static void BuildAvailableColumn(AottgUi body)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x230AFE0", Offset = "0x23095E0", VA = "0x18230AFE0")]
	private static void BuildSelectedColumn(AottgUi body)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x230ACF0", Offset = "0x23092F0", VA = "0x18230ACF0")]
	private static void BuildColumn(AottgUi body, string kind, string titleKey, string title, List<string> songs, bool available)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x230B120", Offset = "0x2309720", VA = "0x18230B120")]
	private static void BuildSongList(AottgUi list, string kind, List<string> songs, bool available)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x230B7C0", Offset = "0x2309DC0", VA = "0x18230B7C0")]
	private static void ToggleSong(GisketchActionContext context, string song, bool available)
	{
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x230BA10", Offset = "0x230A010", VA = "0x18230BA10")]
	private static int VisibleCount(List<string> songs, List<string> selected, bool available)
	{
		return default(int);
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgPlaylistManagerDialog()
	{
	}
}
