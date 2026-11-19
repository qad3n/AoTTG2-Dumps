// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgDirectConnectDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BF")]
[AottgDialog("multiplayer-direct-connect")]
public sealed class AottgDirectConnectDialog : AottgDialog
{
	[Token(Token = "0x4000DF7")]
	public const string Id = "multiplayer-direct-connect";

	[Token(Token = "0x4000DF8")]
	public const string TitleKey = "MainMenu.MultiplayerLanPopup.Title";

	[Token(Token = "0x4000DF9")]
	private const string Prefix = "MainMenu.MultiplayerLanPopup.";

	[Token(Token = "0x170001D6")]
	protected override string Title
	{
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x57C6D30", Offset = "0x57C5D30", VA = "0x57C6D30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D7")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600109C")]
		[Address(RVA = "0x57C6D90", Offset = "0x57C5D90", VA = "0x57C6D90", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600109D")]
		[Address(RVA = "0x57C6DA0", Offset = "0x57C5DA0", VA = "0x57C6DA0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x57C6E60", Offset = "0x57C5E60", VA = "0x57C6E60", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x57C73F0", Offset = "0x57C63F0", VA = "0x57C73F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x57C74D0", Offset = "0x57C64D0", VA = "0x57C74D0")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x57C7520", Offset = "0x57C6520", VA = "0x57C7520")]
	private static void Back(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x57C75A0", Offset = "0x57C65A0", VA = "0x57C75A0")]
	private static void Connect(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x57C7790", Offset = "0x57C6790", VA = "0x57C7790")]
	public AottgDirectConnectDialog()
	{
	}
}
