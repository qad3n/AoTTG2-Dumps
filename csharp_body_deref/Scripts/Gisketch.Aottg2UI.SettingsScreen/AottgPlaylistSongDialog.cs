// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistSongDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200011E")]
[AottgDialog("setting-playlist-add-song")]
public sealed class AottgPlaylistSongDialog : AottgDialog
{
	[Token(Token = "0x40006B5")]
	public const string Id = "setting-playlist-add-song";

	[Token(Token = "0x170000C6")]
	protected override string Title
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x435F4B0", Offset = "0x435F4B0", VA = "0x435F4B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x435F4E0", Offset = "0x435F4E0", VA = "0x435F4E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x435F5B0", Offset = "0x435F5B0", VA = "0x435F5B0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x435F670", Offset = "0x435F670", VA = "0x435F670", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x435FBC0", Offset = "0x435FBC0", VA = "0x435FBC0", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x435FC20", Offset = "0x435FC20", VA = "0x435FC20")]
	private static void Select(GisketchActionContext context, string song)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x435FCE0", Offset = "0x435FCE0", VA = "0x435FCE0")]
	public AottgPlaylistSongDialog()
	{
	}
}
