// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200017A")]
[AottgDialog("settings-default-confirm")]
public sealed class AottgSettingsDefaultConfirmDialog : AottgDialog
{
	[Token(Token = "0x400085C")]
	public const string Id = "settings-default-confirm";

	[Token(Token = "0x17000109")]
	protected override string Title
	{
		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x23145E0", Offset = "0x2312BE0", VA = "0x1823145E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010A")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700010B")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010C")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x23144E0", Offset = "0x2312AE0", VA = "0x1823144E0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x23143B0", Offset = "0x23129B0", VA = "0x1823143B0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x2314420", Offset = "0x2312A20", VA = "0x182314420", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgSettingsDefaultConfirmDialog()
	{
	}
}
