// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C1")]
[AottgDialog("multiplayer-settings")]
public sealed class AottgMultiplayerSettingsDialog : AottgDialog
{
	[Token(Token = "0x4000DFB")]
	public const string Id = "multiplayer-settings";

	[Token(Token = "0x4000DFC")]
	private const string Category = "MainMenu";

	[Token(Token = "0x4000DFD")]
	private const string Sub = "MultiplayerSettingsPopup";

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0x0")]
	private static MultiplayerSettings _draft;

	[Token(Token = "0x170001D9")]
	protected override string Title
	{
		[Token(Token = "0x60010AC")]
		[Address(RVA = "0x57C7C40", Offset = "0x57C6C40", VA = "0x57C7C40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60010AD")]
		[Address(RVA = "0x57C7CE0", Offset = "0x57C6CE0", VA = "0x57C7CE0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DB")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60010AE")]
		[Address(RVA = "0x57C7CF0", Offset = "0x57C6CF0", VA = "0x57C7CF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x57C7DB0", Offset = "0x57C6DB0", VA = "0x57C7DB0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x57C8190", Offset = "0x57C7190", VA = "0x57C8190", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x57C8220", Offset = "0x57C7220", VA = "0x57C8220")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x57C82D0", Offset = "0x57C72D0", VA = "0x57C82D0")]
	public AottgMultiplayerSettingsDialog()
	{
	}
}
