// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000315")]
[AottgDialog("profile-edit-details")]
public sealed class AottgEditProfileDetailsDialog : AottgDialog
{
	[Token(Token = "0x4000F95")]
	public const string Id = "profile-edit-details";

	[Token(Token = "0x17000224")]
	protected override string Title
	{
		[Token(Token = "0x600134B")]
		[Address(RVA = "0x57FDA80", Offset = "0x57FCA80", VA = "0x57FDA80", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.EditDetails");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000225")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600134C")]
		[Address(RVA = "0x57FDAE0", Offset = "0x57FCAE0", VA = "0x57FDAE0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_TitleIcon): clean
			return "material-icons/edit";
		}
	}

	[Token(Token = "0x17000226")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x600134D")]
		[Address(RVA = "0x57FDB10", Offset = "0x57FCB10", VA = "0x57FDB10", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_GuardUnsavedChanges): clean
			return true;
		}
	}

	[Token(Token = "0x17000227")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600134E")]
		[Address(RVA = "0x57FDB20", Offset = "0x57FCB20", VA = "0x57FDB20", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(720.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x57FDBE0", Offset = "0x57FCBE0", VA = "0x57FDBE0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$BuildBody): 4 lines keep C-only constructs
		String pSVar1;
		AottgProfileSocialLinksEditor __this_00;
		MethodInfo method_00;
		bool[] local_49 = new bool[9];
		GisketchUiPerfLog.Scope local_40;
		GisketchUiPerfLog.Scope local_38;

		if (Il2CppMethodInitialized_0754560b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgProfileSocialLinksEditor)) ;
			Il2CppMethodInitialized_0754560b = true;
		}
		local_38._startMs = 0;
		local_38._enabled = false;
		local_38._hotLoop = false;
		local_38._26_6_ = 0;
		local_38._area = null;
		local_38._detail = null;
		local_49[0] = AccountManager.IsLoggedIn;
		pSVar1 = local_49.ToString();
		pSVar1 = String.Concat("loggedIn=", pSVar1);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		method_00 = (MethodInfo *)"Dialog.EditProfileDetails.BuildBody";
		local_38 = GisketchUiPerfLog.Time("Dialog.EditProfileDetails.BuildBody", pSVar1);
		local_49[1] = false;
		local_49[2] = false;
		local_49[3] = false;
		local_49[4] = false;
		local_49[5] = false;
		local_49[6] = false;
		local_49[7] = false;
		local_49[8] = false;
		local_40 = &local_38;
		ProfileDialogUi.SaveCallout(body);
		AottgEditProfileDetailsDialog.AccountNameInput(body);
		AottgEditProfileDetailsDialog.LocalBioImport(body);
		AottgEditProfileDetailsDialog.LabeledTextArea(body, "Common.About", "profile-details-bio", "MainMenu.Profile.BioPlaceholder");
		__this_00 = new AottgProfileSocialLinksEditor();
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Component((AottgComponent)__this_00);
		local_38.Dispose();
		return;
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x57FE5C0", Offset = "0x57FD5C0", VA = "0x57FE5C0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$BuildFooter): clean


		ProfileDialogUi.SaveFooter(footer, "profile.save.details");
		return;
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x57FDEB0", Offset = "0x57FCEB0", VA = "0x57FDEB0")]
	private static void AccountNameInput(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$AccountNameInput): 2 lines keep C-only constructs
		String label;
		bool bVar1;
		String* ppSVar2;
		GisketchNodeDefinition pGVar3;
		String placeholder;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		String pSVar4;
		GisketchUIBindingDefinition __this;

		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			ppSVar2 = &"MainMenu.Account.DisplayNamePlaceholder";
		}
		else {
			ppSVar2 = &"MainMenu.Profile.LoginToSetAccountName";
		}
		if (ui != null) {
			pSVar4 = *ppSVar2;
			pGVar3 = ui.TextKey("MainMenu.Account.DisplayName", "accountInputLabel", null, null, null);
			if (pGVar3 != null) {
				label = pGVar3.text;
				placeholder = Aottg2GisketchLocale.Text(pSVar4);
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pGVar3 = ui.FormInput("profile-details-name", label, placeholder, 0, "inputField", layout, null, null, 0.2, 0x19, null, null);
				if (pGVar3 != null) {
					pGVar3.textKey = pSVar4;
					if (bVar1) {
						pSVar4 = AottgActiveProfile.AccountName();
					}
					else {
						pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					pGVar3.value = pSVar4;
					__this = new GisketchUIBindingDefinition();
					if (__this != null) {
						__this.enabled = "account.loggedIn";
						pGVar3.bind = __this;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x57FE190", Offset = "0x57FD190", VA = "0x57FE190")]
	private static void LocalBioImport(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$LocalBioImport): 1 lines keep C-only constructs
		object @object;
		String style;
		bool bVar1;
		Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		bVar1 = AottgActiveProfile.CanImportLocalBio();
		if (bVar1) {
			if (ui == null) {
				throw new NullReferenceException();
			}
			ui.CalloutKey(2, "MainMenu.Profile.LocalBioImport", "profile-details-local-bio-import");
			style = "default";
			pGVar2 = typeof(AottgEditProfileDetailsDialog.c).static_fields;
			__this = pGVar2.__9__12_0;
			if (__this == null) {
				if ((typeof(AottgEditProfileDetailsDialog.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar2 = typeof(AottgEditProfileDetailsDialog.c).static_fields;
				}
				@object = (object)pGVar2.__9;
				__this = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_c_LocalBioImport_b__12_0);
				pGVar2 = typeof(AottgEditProfileDetailsDialog.c).static_fields;
				pGVar2.__9__12_0 = __this;
			}
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			ui.Panel(style, __this, "profile-details-import-local-bio-row", layout, null);
		}
		return;
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x57FE3D0", Offset = "0x57FD3D0", VA = "0x57FE3D0")]
	private static void LabeledTextArea(AottgUi ui, string labelKey, string id, string placeholderKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$LabeledTextArea): 2 lines keep C-only constructs
		AottgEditProfileDetailsDialog.c__DisplayClass13_0 __this;
		Action<AottgUi> __this_00;
		String id_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgEditProfileDetailsDialog.c__DisplayClass13_0));
		__this = new Object();
		if (__this != null) {
			__this.labelKey = labelKey;
			__this.id = id;
			__this.placeholderKey = placeholderKey;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_c__DisplayClass13_0_LabeledTextArea_b__0);
			id_00 = String.Concat(__this.id, "-field");
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 5.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				ui.Panel("default", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x57FE710", Offset = "0x57FD710", VA = "0x57FE710")]
	public AottgEditProfileDetailsDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c (Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c.

	// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c__DisplayClass13_0$$.ctor: clean
	private void c__DisplayClass13_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgEditProfileDetailsDialog.c();
		AottgEditProfileDetailsDialog.c.__9 =(AottgEditProfileDetailsDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c$$<LocalBioImport>b__12_0: clean
	private void c__LocalBioImport_b__12_0(AottgUi row)
	{
		if (row == null) {
			throw new NullReferenceException();
		}
		row.ButtonKey(1, "MainMenu.Profile.UseLocalBio", "profile.importLocalBio", "profile-details-import-local-bio", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c__DisplayClass13_0$$<LabeledTextArea>b__0: clean
	private void c__DisplayClass13_0__LabeledTextArea_b__0(AottgUi field)
	{
		uint uVar1;
		String label;
		bool bVar2;
		GisketchNodeDefinition pGVar3;
		String pSVar4;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		String pSVar5;

		if ((field == null) ||(pGVar3 = field.TextKey(this.labelKey, "accountInputLabel", null, null, null), pGVar3 == null )) {
	label_058feaec: ;
			throw new NullReferenceException();
		}
		pSVar5 = this.id;
		label = pGVar3.text;
		pSVar4 = this.placeholderKey;
		pSVar4 = Aottg2GisketchLocale.Text(pSVar4);
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(132.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		pGVar3 = field.FormTextArea(pSVar5, label, pSVar4, "textArea", layout, null, 0x200, null);
		if (pGVar3 == null) goto label_058feaec;
		pGVar3.textKey = this.placeholderKey;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar2 = AccountManager.IsLoggedIn;
			if (bVar2) goto label_058fea02;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
			if (bVar2) {
	label_058fea02: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_075454ec != false) goto label_058fea20;
	label_058feaaa: ;
					g_data_075454ec = true;
					uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_075454ec == false) goto label_058feaaa;
	label_058fea20: ;
					uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					pSVar5 = AccountManager. _ProfileDescription_k__BackingField;
				}
				else {
					pSVar5 = *(String*)((long)(typeof(AccountManager)).static_fields + 8);
				}
				goto joined_r0x058fea3f;
			}
		}
		pSVar5 = AottgActiveProfile.LocalBio();
	joined_r0x058fea3f: ;
		if (pSVar5 == null) {
			pSVar5 = (String)**(long*)(g_data_07556758 + 0xb8);
		}
		pGVar3.value = pSVar5;
		return;
	}
}
