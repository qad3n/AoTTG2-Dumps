// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B1")]
[AottgDialog("setting-skin-set-delete")]
public sealed class AottgSkinSetDeleteDialog : AottgDialog
{
	[Token(Token = "0x400092B")]
	public const string Id = "setting-skin-set-delete";

	[Token(Token = "0x1700011B")]
	protected override string Title
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x5D56400", Offset = "0x5D55400", VA = "0x5D56400", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.Skins.Common.DeleteSkinSet");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700011C")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x5D56460", Offset = "0x5D55460", VA = "0x5D56460", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x1700011D")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x5D56470", Offset = "0x5D55470", VA = "0x5D56470", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(420.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x5D56530", Offset = "0x5D55530", VA = "0x5D56530", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$BuildBody): clean
		String pSVar1;
		String arg0;
		MethodInfo method_00;

		method_00 = (MethodInfo *)"Common.DeleteConfirm";
		pSVar1 = Aottg2GisketchLocale.Text("Common.DeleteConfirm");
		arg0 = AottgSkinSetActions.SelectedName();
		pSVar1 = String.Format(pSVar1, (object)arg0);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Callout(3, pSVar1, null);
		return;
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x5D565D0", Offset = "0x5D555D0", VA = "0x5D565D0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_Delete);
		footer.PrimaryKey("Common.Delete", __this_00);
		return;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x5D566A0", Offset = "0x5D556A0", VA = "0x5D566A0")]
	private static void Delete(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$Delete): 2 lines keep C-only constructs
		GisketchOverlayManager __this;
		bool bVar1;
		GisketchUIRoot pGVar2;
		Object* ppUVar3;

		if (Il2CppMethodInitialized_07548676 == false) {
			ppUVar3 = &typeof(Object);
			Il2CppMethodInitialized_07548676 = true;
		}
		AottgSkinSetActions.DeleteSelected();
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			pGVar2 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar2 != null) &&(__this = pGVar2._Overlays_k__BackingField, __this != null)) {
				__this.CloseTop(true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x5D56740", Offset = "0x5D55740", VA = "0x5D56740")]
	public AottgSkinSetDeleteDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$.ctor): clean
		base();
		return;
	}
}
