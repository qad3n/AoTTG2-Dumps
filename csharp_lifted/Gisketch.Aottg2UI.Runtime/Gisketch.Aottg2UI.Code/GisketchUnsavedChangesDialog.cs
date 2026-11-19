// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x20000A6")]
[AottgDialog("gisketch-unsaved-changes", DismissOnBackdrop = false)]
public sealed class GisketchUnsavedChangesDialog : AottgDialog
{
	[Token(Token = "0x400038C")]
	public const string Id = "gisketch-unsaved-changes";

	[Token(Token = "0x17000095")]
	protected override string Title
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x527B210", Offset = "0x527A210", VA = "0x527B210", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c (Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.UnsavedChanges.Title");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000096")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x527B270", Offset = "0x527A270", VA = "0x527B270", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c (Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x17000097")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x527B280", Offset = "0x527A280", VA = "0x527B280", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c (Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_RootLayout): clean
			GisketchLength __this_00;
			GisketchLayoutDefinition pGVar1;

			__this_00 = new GisketchLength();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.value = 520.0;
			__this_00.unit = "point";
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x527B3A0", Offset = "0x527A3A0", VA = "0x527B3A0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c (Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$BuildBody): clean


		if (body == null) {
			throw new NullReferenceException();
		}
		body.CalloutKey(2, "Common.UnsavedChangesMessage", null);
		return;
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x527B3F0", Offset = "0x527A3F0", VA = "0x527B3F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c (Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.KeepEditing", "overlay.close");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_Discard);
		footer.DangerKey("SettingsPopup.UnsavedChanges.DiscardChanges", __this_00);
		return;
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x527B4B0", Offset = "0x527A4B0", VA = "0x527B4B0")]
	private static void Discard(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c (Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$Discard): clean
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar1;

		if (context.GameObject != null) {
			pGVar1 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar1 != null) &&(__this = pGVar1._Overlays_k__BackingField, __this != null)) {
				__this.DiscardPendingUnsavedChanges();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x527B510", Offset = "0x527A510", VA = "0x527B510")]
	public GisketchUnsavedChangesDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c (Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$.ctor): clean
		base();
		return;
	}
}
