// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog
// Update status: CHANGED in this game update
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

[Token(Token = "0x200016B")]
[AottgDialog("setting-playlist-manager")]
public sealed class AottgPlaylistManagerDialog : AottgDialog
{
	[Token(Token = "0x4000852")]
	public const string Id = "setting-playlist-manager";

	[Token(Token = "0x170000E0")]
	protected override string Title
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x5CC4970", Offset = "0x5CC3970", VA = "0x5CC4970", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x5CC49D0", Offset = "0x5CC39D0", VA = "0x5CC49D0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E2")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x5CC49E0", Offset = "0x5CC39E0", VA = "0x5CC49E0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x5CC4AA0", Offset = "0x5CC3AA0", VA = "0x5CC4AA0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x5CC4B60", Offset = "0x5CC3B60", VA = "0x5CC4B60", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x5CC4CD0", Offset = "0x5CC3CD0", VA = "0x5CC4CD0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x5CC4C10", Offset = "0x5CC3C10", VA = "0x5CC4C10")]
	private static void BuildAvailableColumn(AottgUi body)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x5CC4C70", Offset = "0x5CC3C70", VA = "0x5CC4C70")]
	private static void BuildSelectedColumn(AottgUi body)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x5CC4D30", Offset = "0x5CC3D30", VA = "0x5CC4D30")]
	private static void BuildColumn(AottgUi body, string kind, string titleKey, List<string> songs, bool available)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x5CC4F60", Offset = "0x5CC3F60", VA = "0x5CC4F60")]
	private static void BuildSongList(AottgUi list, string kind, List<string> songs, bool available)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x5CC55D0", Offset = "0x5CC45D0", VA = "0x5CC55D0")]
	private static void ToggleSong(GisketchActionContext context, string song, bool available)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x5CC54F0", Offset = "0x5CC44F0", VA = "0x5CC54F0")]
	private static int VisibleCount(List<string> songs, List<string> selected, bool available)
	{
		return default(int);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x5CC55F0", Offset = "0x5CC45F0", VA = "0x5CC55F0")]
	public AottgPlaylistManagerDialog()
	{
	}
}
