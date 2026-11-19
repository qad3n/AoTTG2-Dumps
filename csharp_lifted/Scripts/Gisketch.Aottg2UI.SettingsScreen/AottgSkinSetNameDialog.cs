// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B2")]
[AottgDialog("setting-skin-set-name")]
public sealed class AottgSkinSetNameDialog : AottgDialog
{
	[Token(Token = "0x400092C")]
	public const string Id = "setting-skin-set-name";

	[Token(Token = "0x400092D")]
	private const string InputId = "setting-skin-set-name-input";

	[Token(Token = "0x1700011E")]
	protected override string Title
	{
		[Token(Token = "0x6000984")]
		[Address(RVA = "0x5D56750", Offset = "0x5D55750", VA = "0x5D56750", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_Title): clean
			String pSVar1;

			return pSVar1;
		}
	}

	[Token(Token = "0x1700011F")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000985")]
		[Address(RVA = "0x5D56850", Offset = "0x5D55850", VA = "0x5D56850", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000120")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000986")]
		[Address(RVA = "0x5D56860", Offset = "0x5D55860", VA = "0x5D56860", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(420.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x17000121")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x5D56920", Offset = "0x5D55920", VA = "0x5D56920", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x5D569D0", Offset = "0x5D559D0", VA = "0x5D569D0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$BuildBody): 2 lines keep C-only constructs
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar1;
		String pSVar2;
		AottgSkinSetActions* ppGVar3;

		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body != null) {
			pGVar1 = body.InputFieldKey("setting-skin-set-name-input", "Common.SetName", 0, "inputField", layout, null, null, 0.2, 0x28, null);
			if (Il2CppMethodInitialized_07548686 == false) {
				ppGVar3 = &typeof(AottgSkinSetActions);
				Il2CppMethodInitialized_07548686 = true;
				body = (AottgUi)ppGVar3;
			}
			if (AottgSkinSetActions._operation == 0) {
				pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar2 = AottgSkinSetActions.SelectedName();
			}
			if (pGVar1 != null) {
				pGVar1.value = pSVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x5D56B70", Offset = "0x5D55B70", VA = "0x5D56B70", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_Save);
		footer.PrimaryKey("Common.Save", __this_00);
		return;
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x5D56760", Offset = "0x5D55760", VA = "0x5D56760")]
	private static string TitleText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$TitleText): 4 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		String pSVar3;
		String* ppSVar4;

		if (Il2CppMethodInitialized_07548686 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_07548686 = true;
		}
		iVar1 = AottgSkinSetActions._operation;
		if (iVar1 == 2) {
			ppSVar4 = &"SettingsPopup.Skins.Common.CopySkinSet";
			uVar2 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else if (iVar1 == 1) {
			ppSVar4 = &"SettingsPopup.Skins.Common.RenameSkinSet";
			uVar2 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			ppSVar4 = &"SettingsPopup.Skins.Common.CreateSkinSet";
			uVar2 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
			return pSVar3;
		}
		pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
		return pSVar3;
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x5D56C40", Offset = "0x5D55C40", VA = "0x5D56C40")]
	private static void Save(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$Save): clean
		GisketchOverlayManager __this;
		bool bVar1;
		String name;
		GisketchUIRoot pGVar2;

		name = AottgSkinSetNameDialog.InputText(context.GameObject);
		AottgSkinSetActions.ApplyName(name);
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

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x5D56CF0", Offset = "0x5D55CF0", VA = "0x5D56CF0")]
	private static string InputText(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$InputText): 2 lines keep C-only constructs
		uint uVar1;
		Object x;
		bool bVar2;
		Transform pUVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String pSVar6;
		ulong uVar7;

		pUVar3 = null;
		bVar2 = ((Object)source != null);
		if (bVar2) {
			if (source == null) goto label_05e56e9f;
			pUVar3 = source.transform;
			if (pUVar3 == null) goto label_05e56e9f;
			pUVar3 = pUVar3.root;
		}
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
	label_05e56e7d: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (pUVar3 != null) {
			pSVar4 = pUVar3.GetComponentsInChildren<TMP_InputField>(true);
			if (pSVar4 != null) {
				if (0 < (int)pSVar4.Length) {
					uVar5 = pSVar4.Length & 0xffffffff;
					uVar7 = 0;
					do {
						if (uVar5 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						x = (Object)pSVar4[uVar7];
						bVar2 = (x != null);
						if (bVar2) {
							if (x == null) goto label_05e56e9f;
							__this = (Object)x.gameObject;
							if (__this == null) goto label_05e56e9f;
							pSVar6 = __this.name;
							bVar2 = (pSVar6 == "setting-skin-set-name-input");
							if (bVar2) {
								if (x[0x16].klass != null) {
									pSVar6 = x[0x16].klass.Trim();
									return pSVar6;
								}
								goto label_05e56e9f;
							}
						}
						uVar7 = uVar7 + 1;
						uVar1 = (uint)pSVar4.Length;
						uVar5 = (ulong)uVar1;
					} while ((long)uVar7 < (long)(int)uVar1);
				}
				goto label_05e56e7d;
			}
		}
	label_05e56e9f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x5D56EB0", Offset = "0x5D55EB0", VA = "0x5D56EB0")]
	public AottgSkinSetNameDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$.ctor): clean
		base();
		return;
	}
}
