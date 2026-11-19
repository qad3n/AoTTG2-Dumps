// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000182")]
[AottgDialog("settings-default-confirm")]
public sealed class AottgSettingsDefaultConfirmDialog : AottgDialog
{
	[Token(Token = "0x40008A5")]
	public const string Id = "settings-default-confirm";

	[Token(Token = "0x1700010C")]
	protected override string Title
	{
		[Token(Token = "0x600085E")]
		[Address(RVA = "0x5D3B210", Offset = "0x5D3A210", VA = "0x5D3B210", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.Defaults.Title");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700010D")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x600085F")]
		[Address(RVA = "0x5D3B270", Offset = "0x5D3A270", VA = "0x5D3B270", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x1700010E")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000860")]
		[Address(RVA = "0x5D3B280", Offset = "0x5D3A280", VA = "0x5D3B280", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x1700010F")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000861")]
		[Address(RVA = "0x5D3B290", Offset = "0x5D3A290", VA = "0x5D3B290", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(520.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x5D3B350", Offset = "0x5D3A350", VA = "0x5D3B350", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$BuildBody): clean
		if (body == null) {
			throw new NullReferenceException();
		}
		body.CalloutKey(2, "SettingsPopup.Defaults.Message", null);
		return;
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x5D3B3A0", Offset = "0x5D3A3A0", VA = "0x5D3B3A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		footer.PrimaryKey("SettingsPopup.Defaults.Restore", "settings.confirm.default");
		return;
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x5D3B430", Offset = "0x5D3A430", VA = "0x5D3B430")]
	public AottgSettingsDefaultConfirmDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$.ctor): clean
		base();
		return;
	}
}
