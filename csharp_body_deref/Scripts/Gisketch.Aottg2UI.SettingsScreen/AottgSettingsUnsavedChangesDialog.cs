// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200019D")]
[AottgDialog("settings-unsaved-changes")]
public sealed class AottgSettingsUnsavedChangesDialog : AottgDialog
{
	[Token(Token = "0x200019E")]
	public enum ActionKind
	{
		[Token(Token = "0x40008C4")]
		Back,
		[Token(Token = "0x40008C5")]
		Load
	}

	[Token(Token = "0x40008C1")]
	public const string Id = "settings-unsaved-changes";

	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x0")]
	private static ActionKind _actionKind;

	[Token(Token = "0x17000113")]
	protected override string Title
	{
		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x239DE40", Offset = "0x239C440", VA = "0x18239DE40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000115")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x239DD40", Offset = "0x239C340", VA = "0x18239DD40", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x239DC60", Offset = "0x239C260", VA = "0x18239DC60")]
	public static void Open(GisketchUIRoot root, ActionKind actionKind)
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x239D600", Offset = "0x239BC00", VA = "0x18239D600", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x239D9C0", Offset = "0x239BFC0", VA = "0x18239D9C0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x239DB50", Offset = "0x239C150", VA = "0x18239DB50")]
	private static string Message(int count)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x239DCE0", Offset = "0x239C2E0", VA = "0x18239DCE0")]
	private static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgSettingsUnsavedChangesDialog()
	{
	}
}
