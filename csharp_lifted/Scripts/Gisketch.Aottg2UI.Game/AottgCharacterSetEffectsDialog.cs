// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002EF")]
[AottgDialog("profile-character-set-effects")]
public sealed class AottgCharacterSetEffectsDialog : AottgDialog
{
	[Token(Token = "0x4000ECF")]
	public const string Id = "profile-character-set-effects";

	[Token(Token = "0x4000ED0")]
	private const string TextPickerId = "profile-character-set-effects-text-picker";

	[Token(Token = "0x4000ED1")]
	private const string EffectSelectId = "profile-character-set-effects-type";

	[Token(Token = "0x4000ED2")]
	private const string FontSelectId = "profile-character-set-effects-font";

	[Token(Token = "0x4000ED3")]
	private const string EffectDialogDraftKey = "profile-character-set-effects.draft";

	[Token(Token = "0x4000ED4")]
	private const string EffectColorsVisibleKey = "profile-character-set-effects.effect-colors.visible";

	[Token(Token = "0x4000ED5")]
	private const string TextColorHelpVisibleKey = "profile-character-set-effects.text-color-help.visible";

	[Token(Token = "0x4000ED6")]
	private const string TextColorsEnabledKey = "profile-character-set-effects.text-colors.enabled";

	[Token(Token = "0x4000ED7")]
	private const string TextColorHelpKey = "MainMenu.Profile.TextColorHelp";

	[Token(Token = "0x4000ED8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] DraftColors;

	[Token(Token = "0x4000ED9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] DefaultGradientColors;

	[Token(Token = "0x4000EDA")]
	[FieldOffset(Offset = "0x10")]
	private static string _targetId;

	[Token(Token = "0x4000EDB")]
	[FieldOffset(Offset = "0x18")]
	private static string _effectPrefix;

	[Token(Token = "0x4000EDC")]
	[FieldOffset(Offset = "0x20")]
	private static string _initialValue;

	[Token(Token = "0x4000EDD")]
	[FieldOffset(Offset = "0x28")]
	private static string _initialFont;

	[Token(Token = "0x4000EDE")]
	[FieldOffset(Offset = "0x30")]
	private static string _draftFont;

	[Token(Token = "0x4000EDF")]
	[FieldOffset(Offset = "0x38")]
	private static string _draftType;

	[Token(Token = "0x4000EE0")]
	[FieldOffset(Offset = "0x40")]
	private static string _textMode;

	[Token(Token = "0x4000EE1")]
	[FieldOffset(Offset = "0x48")]
	private static GameObject _ownerSource;

	[Token(Token = "0x4000EE2")]
	[FieldOffset(Offset = "0x50")]
	private static bool _draftEnabled;

	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x51")]
	private static bool _hasAccess;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x52")]
	private static bool _textEditable;

	[Token(Token = "0x170001FD")]
	protected override string Title
	{
		[Token(Token = "0x60011FE")]
		[Address(RVA = "0x57E1350", Offset = "0x57E0350", VA = "0x57E1350", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.SetEffects");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001FE")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x57E13B0", Offset = "0x57E03B0", VA = "0x57E13B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_TitleIcon): clean
			return "UI/Icons/Profile/SparkleIcon";
		}
	}

	[Token(Token = "0x170001FF")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x6001200")]
		[Address(RVA = "0x57E13E0", Offset = "0x57E03E0", VA = "0x57E13E0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_GuardUnsavedChanges): clean
			return true;
		}
	}

	[Token(Token = "0x17000200")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001201")]
		[Address(RVA = "0x57E13F0", Offset = "0x57E03F0", VA = "0x57E13F0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(760.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x17000201")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001202")]
		[Address(RVA = "0x57E14B0", Offset = "0x57E04B0", VA = "0x57E14B0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x57E1560", Offset = "0x57E0560", VA = "0x57E1560")]
	public static void Open(GisketchActionContext context, string targetId, string effectPrefix, bool textEditable)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Open): 17 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar2;
		IntPtr pvVar3;
		String[] pSVar4;
		GisketchUIState __this;
		GisketchOverlayManager __this_00;
		bool bVar5;
		MethodInfo pMVar6;
		String pSVar7;
		GisketchUIRoot root;
		Action<GameObject> __this_01;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		ulong uVar8;
		Il2CppClass pIVar9;
		long lVar10;

		if (Il2CppMethodInitialized_07545507 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFormDiscardActions)) ;
			Il2CppMethodInitialized_07545507 = true;
		}
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar2._targetId = targetId;
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar2._effectPrefix = effectPrefix;
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar2._textEditable = textEditable;
		pGVar2._ownerSource = context.GameObject;
		bVar5 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		AottgCharacterSetEffectsDialog._hasAccess = bVar5;
		pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pMVar6 = extraout_RDX;
		if ((typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor == 0) {
			pMVar6 = extraout_RDX_00;
		}
		pMVar6 = (MethodInfo)AottgCharacterTextField.Value(targetId, pSVar7);
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar2._initialValue = (String)pMVar6;
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar7 = AottgEditCharacterDialog.Font(effectPrefix);
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar2._initialFont = pSVar7;
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pMVar6 = (MethodInfo)pGVar2._initialFont;
		pGVar2._draftFont = (String)pMVar6;
		if (AottgCharacterSetEffectsDialog._hasAccess == false) {
			bVar5 = false;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			pIVar9 = typeof(AottgCharacterSetEffectsDialog);
		}
		else {
			bVar5 = AottgEditCharacterDialog.EffectEnabled(effectPrefix);
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			pIVar9 = typeof(AottgCharacterSetEffectsDialog);
		}
		typeof(AottgCharacterSetEffectsDialog) =(AottgCharacterSetEffectsDialog)pIVar9;
		if (uVar1 == 0) {
			pIVar9 = typeof(AottgCharacterSetEffectsDialog);
			AottgCharacterSetEffectsDialog._draftEnabled = bVar5;
		}
		else {
			*(bool)((long)pIVar9.static_fields + 0x50) = bVar5;
		}
		if (bVar5 == false) {
			uVar1 = (pIVar9._2).cctor_finished_or_no_cctor;
			pSVar7 = "None";
		}
		else {
			if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar7 = AottgEditCharacterDialog.EffectType(effectPrefix);
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			pIVar9 = typeof(AottgCharacterSetEffectsDialog);
		}
		if (uVar1 == 0) {
			pIVar9 = typeof(AottgCharacterSetEffectsDialog);
		}
		pvVar3 = pIVar9.static_fields;
		*(String*)((long)pvVar3 + 0x38) = pSVar7;
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar2._textMode = "Color";
		lVar10 = 0x20;
		uVar8 = 0;
		uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		pMVar6 = extraout_RDX_01;
		while(true) {
			if (uVar1 == 0) {
				pMVar6 = extraout_RDX_02;
			}
			pSVar4 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar4 == null) break;
			if ((long)(int)pSVar4.Length <= (long)uVar8) {
				root = null;
				bVar5 = ((Object)context.GameObject != null);
				if (bVar5) {
					if (context.GameObject == null) break;
					root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
				}
				__this_01 = new Action<GameObject>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_DiscardPreview);
				GisketchFormDiscardActions.Register("profile-character-set-effects", __this_01);
				if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0 ) {
					AottgCharacterSetEffectsDialog.SetColorVisibility(root);
					pIVar9 = typeof(AottgCharacterSetEffectsDialog);
				}
				else {
					AottgCharacterSetEffectsDialog.SetColorVisibility(root);
					pIVar9 = typeof(AottgCharacterSetEffectsDialog);
				}
				typeof(AottgCharacterSetEffectsDialog) =(AottgCharacterSetEffectsDialog)pIVar9;
				if (root != null) {
					__this = root._State_k__BackingField;
					if (__this != null) {
						bVar5 = AottgCharacterSetEffectsDialog.TextColorsEnabled();
						__this.SetBool("profile-character-set-effects.text-colors.enabled", bVar5);
					}
					__this_00 = root._Overlays_k__BackingField;
					if (__this_00 != null) {
						__this_00.ShowDialog("profile-character-set-effects", true);
						return;
					}
				}
				return;
			}
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pSVar4 = AottgCharacterSetEffectsDialog.DraftColors;
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
				pMVar6 = extraout_RDX_04;
			}
			else {
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pMVar6 = extraout_RDX_05;
			}
			pSVar7 = AottgEditCharacterDialog.EffectColor(effectPrefix, (int32_t)uVar8);
			if (pSVar4 == null) break;
			if ((uint)pSVar4.Length <= uVar8) {
				throw new IndexOutOfRangeException();
			}
			pSVar4[uVar8] = pSVar7;
			uVar8 = uVar8 + 1;
			lVar10 = lVar10 + 8;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			pMVar6 = extraout_RDX_03;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x57E2200", Offset = "0x57E1200", VA = "0x57E2200", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildBody): 6 lines keep C-only constructs
		uint uVar1;
		String previewFont;
		object pIVar2;
		String pickerId;
		String colorsEnabledKey;
		bool colorsEnabled;
		bool bVar3;
		int iVar4;
		Action<GisketchActionContext> __this_00;
		Action<GameObject> __this_01;
		MethodInfo method_00;
		String pSVar5;
		Action<AottgUi> pSVar6;
		GisketchLength pGVar7;
		GisketchLayoutDefinition pGVar8;
		GisketchLength height;
		GisketchNodeDefinition pGVar9;
		GisketchUIBindingDefinition pGVar10;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_StaticFields pGVar11;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar12;
		String previewEffectType;
		String[] previewEffectColors;

		if (Il2CppMethodInitialized_07545508 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgCharacterTextColorEditor)) ;
			Il2CppMethodInitialized_07545508 = true;
		}
		AottgCharacterStyleChoicePreview.Register();
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplySelectedTextColor);
		GisketchUIColorPicker.Register("profile-character-set-effects-text-picker", "#FFFFFF", __this_00, false, true, false);
		pSVar5 = AottgCharacterSetEffectsDialog._initialValue;
		colorsEnabled = AottgCharacterSetEffectsDialog.TextColorsEnabled();
		bVar3 = AottgCharacterSetEffectsDialog._textEditable;
		previewEffectType = null;
		__this_01 = new Action<GameObject>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ImportedColoredText);
		colorsEnabledKey = "profile-character-set-effects.text-colors.enabled";
		pickerId = "profile-character-set-effects-text-picker";
		pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		if (pGVar12._draftEnabled != false) {
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			previewEffectType = pGVar12._draftType;
		}
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			if (pGVar12._draftEnabled == false) goto label_058e28e5;
	label_058e24fe: ;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			previewEffectColors = pGVar12.DraftColors;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			if (pGVar12._draftEnabled != false) goto label_058e24fe;
	label_058e28e5: ;
			previewEffectColors = null;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		previewFont = AottgCharacterSetEffectsDialog._draftFont;
		method_00 = new AottgCharacterTextColorEditor(pSVar5, pickerId, colorsEnabledKey, colorsEnabled, bVar3, __this_01, previewEffectType, (IList<string>)previewEffectColors, previewFont);
		if (body == null) goto label_058e2bfe;
		body.Component((AottgComponent)method_00);
		pSVar5 = AottgCharacterSetEffectsDialog.EffectDialogDraftValue(AottgCharacterSetEffectsDialog. _initialValue);
		body.FormDraft("profile-character-set-effects.draft", pSVar5, "Effects", null) ;
		pSVar5 = "row";
		pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
		pSVar6 = pGVar11.__9__33_0;
		if (pSVar6 == null) {
			if ((typeof(AottgCharacterSetEffectsDialog.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
			}
			pIVar2 = (object)pGVar11.__9;
			pSVar6 = new Action<AottgUi>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_0);
			pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
			pGVar11.__9__33_0 = pSVar6;
		}
		pGVar7 = AottgUi.Percent(100.0);
		pGVar8 = AottgUi.Layout("Row", null, "Center", null, null, 10.0, pGVar7, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		body.Panel(pSVar5, pSVar6, "profile-character-set-effects-select-row", pGVar8, null);
		pSVar5 = "callout";
		pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
		pSVar6 = pGVar11.__9__33_1;
		if (pSVar6 == null) {
			if ((typeof(AottgCharacterSetEffectsDialog.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
			}
			pIVar2 = (object)pGVar11.__9;
			pSVar6 = new Action<AottgUi>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_1);
			pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
			pGVar11.__9__33_1 = pSVar6;
		}
		pGVar7 = AottgUi.Percent(100.0);
		height = AottgUi.Points(84.0);
		pGVar8 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, pGVar7, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		pGVar9 = body.Panel(pSVar5, pSVar6, "profile-character-set-effects-text-color-help", pGVar8, null);
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545515 == false) goto label_058e2908;
	label_058e28a0: ;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor != 0) goto label_058e28b3;
	label_058e292e: ;
			bVar3 = AottgCharacterSetEffectsDialog.TextColorsEnabled();
		}
		else {
			if (Il2CppMethodInitialized_07545515 != false) goto label_058e28a0;
	label_058e2908: ;
			Il2CppMethodInitialized_07545515 = true;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) goto label_058e292e;
	label_058e28b3: ;
			bVar3 = AottgCharacterSetEffectsDialog.TextColorsEnabled();
		}
		if (pGVar9 == null) goto label_058e2bfe;
		pGVar9.active = bVar3;
		pGVar10 = new GisketchUIBindingDefinition();
		if (pGVar10 == null) goto label_058e2bfe;
		pGVar10.visible = "profile-character-set-effects.text-color-help.visible";
		pGVar9.bind = pGVar10;
		pSVar5 = "row";
		pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
		pSVar6 = pGVar11.__9__33_2;
		if (pSVar6 == null) {
			if ((typeof(AottgCharacterSetEffectsDialog.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
			}
			pIVar2 = (object)pGVar11.__9;
			pSVar6 = new Action<AottgUi>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_2);
			pGVar11 = typeof(AottgCharacterSetEffectsDialog.c).static_fields;
			pGVar11.__9__33_2 = pSVar6;
		}
		pGVar7 = AottgUi.Percent(100.0);
		pGVar8 = AottgUi.Layout("Row", "SpaceEvenly", "Center", null, null, 10.0, pGVar7, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		pGVar9 = body.Panel(pSVar5, pSVar6, "profile-character-set-effects-effect-colors", pGVar8, null);
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545514 == false) goto label_058e2b3a;
	label_058e2b06: ;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor != 0) goto label_058e2b13;
	label_058e2b5a: ;
			pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			if (pGVar12._draftEnabled == false) goto label_058e2b72;
	label_058e2b22: ;
			bVar3 = true;
		}
		else {
			if (Il2CppMethodInitialized_07545514 != false) goto label_058e2b06;
	label_058e2b3a: ;
			Il2CppMethodInitialized_07545514 = true;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) goto label_058e2b5a;
	label_058e2b13: ;
			pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			if (pGVar12._draftEnabled != false) goto label_058e2b22;
	label_058e2b72: ;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar12 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			iVar4 = AottgCharacterEffectUi.GradientStops(pGVar12._textMode) ;
			bVar3 = 0 < iVar4;
		}
		if (pGVar9 != null) {
			pGVar9.active = bVar3;
			pGVar10 = new GisketchUIBindingDefinition();
			if (pGVar10 != null) {
				pGVar10.visible = "profile-character-set-effects.effect-colors.visible";
				pGVar9.bind = pGVar10;
				return;
			}
		}
	label_058e2bfe: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x57E3390", Offset = "0x57E2390", VA = "0x57E3390", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_Save);
		footer.PrimaryKey("Common.Save", __this_00);
		return;
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x57E3460", Offset = "0x57E2460", VA = "0x57E3460")]
	private static void SelectEffect(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectEffect): 8 lines keep C-only constructs
		uint uVar1;
		GisketchUIState __this;
		bool bVar2;
		int iVar3;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar4;
		GisketchUIRoot pGVar5;
		String* ppSVar6;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar7;
		String pSVar8;
		MethodInfo key;
		String type;

		ppSVar6 = &((context.Node).fields).value;
		if (context.Node == null) {
			ppSVar6 = &"Color";
		}
		type = *ppSVar6;
		bVar2 = AottgCharacterEffectUi.IsTextColorMode(type);
		pSVar8 = type;
		if (!bVar2) {
			pSVar8 = "Color";
		}
		pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar4._textMode = pSVar8;
		if (AottgCharacterSetEffectsDialog._hasAccess == false) {
			bVar2 = false;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar2 = AottgCharacterEffectUi.IsTextColorMode(type);
			bVar2 = !bVar2;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			pGVar4._draftEnabled = bVar2;
			if (bVar2 == false) {
				type = "None";
			}
			if (uVar1 == 0) {
				pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
		}
		else {
			pGVar4 = (typeof(AottgCharacterSetEffectsDialog)).static_fields;
			pGVar4._draftEnabled = bVar2;
			if (bVar2 == false) {
				type = "None";
			}
		}
		pGVar4._draftType = type;
		pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		if (pGVar4._draftEnabled == false) {
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			pMVar7 = null;
			iVar3 = AottgCharacterEffectUi.GradientStops(pGVar4._textMode);
			if (0 < iVar3) {
				if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0 ) {
				}
				AottgCharacterSetEffectsDialog.LoadGradientColors(context.GameObject);
			}
		}
		else {
			pMVar7 = extraout_RDX;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
				pMVar7 = extraout_RDX_00;
			}
			AottgCharacterSetEffectsDialog.LoadPresetColors(context.GameObject, pGVar4._draftType);
		}
		pGVar5 = null;
		pMVar7 = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			pMVar7 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
			pGVar5 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		AottgCharacterSetEffectsDialog.SetColorVisibility(pGVar5);
		bVar2 = AottgCharacterSetEffectsDialog.TextColorsEnabled();
		key = (MethodInfo *)"profile-character-set-effects.text-colors.enabled";
		if (((context.GameObject != null) &&(pMVar7 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot, pGVar5 = context.GameObject.GetComponentInParent<GisketchUIRoot>(), pGVar5 != null)) &&(__this = pGVar5._State_k__BackingField, __this != null)) {
			__this.SetBool((String)key, bVar2);
			pMVar7 = key;
		}
		uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		if (AottgCharacterSetEffectsDialog._draftEnabled == false) {
			if (uVar1 == 0) {
			}
			AottgCharacterSetEffectsDialog.ApplyGradientPreview(context.GameObject);
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (uVar1 == 0) {
			}
			AottgCharacterSetEffectsDialog.ApplyEffectPreview(context.GameObject);
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgCharacterSetEffectsDialog.SyncDialogDraft(context.GameObject);
		return;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x57E3ED0", Offset = "0x57E2ED0", VA = "0x57E3ED0")]
	private static void SelectFont(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectFont): 7 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		String font;
		String* ppSVar4;
		String pSVar5;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar6;

		if (context.Node == null) {
			ppSVar4 = &"Normal";
		}
		else {
			ppSVar4 = &((context.Node).fields).value;
		}
		pSVar5 = *ppSVar4;
		if (((typeof(AottgCharacterSetEffectsDialog))._2). cctor_finished_or_no_cctor == 0) {
			cVar1 = AottgCharacterSetEffectsDialog._hasAccess;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AottgCharacterSetEffectsDialog)). static_fields + 0x51);
		}
		if (cVar1 == false) {
			uVar2 = ((typeof(AottgCharacterSetEffectsDialog))._2). cctor_finished_or_no_cctor;
			pSVar5 = "Normal";
		}
		else {
			if (((typeof(NameFontCatalog))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar5 = NameFontCatalog.Normalize(pSVar5);
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		AottgCharacterSetEffectsDialog._draftFont = pSVar5;
		pSVar5 = AottgCharacterSetEffectsDialog._effectPrefix;
		font = AottgCharacterSetEffectsDialog._draftFont;
		pMVar6 = extraout_RDX;
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			pMVar6 = extraout_RDX_00;
		}
		AottgEditCharacterDialog.SetFont(pSVar5, font);
		pMVar6 = (MethodInfo)AottgCharacterSetEffectsDialog._draftFont;
		AottgCharacterSetEffectsDialog.ApplyFontPreview(context.GameObject, (String)pMVar6);
		AottgCharacterSetEffectsDialog.SyncDialogDraft(context.GameObject);
		return;
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x57E3780", Offset = "0x57E2780", VA = "0x57E3780")]
	private static void LoadPresetColors(GameObject source, string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadPresetColors): 4 lines keep C-only constructs
		String value;
		ulong in_RAX;
		String[] pSVar1;
		String[] pSVar2;
		String pSVar3;
		ulong uVar4;
		ulong uStack_38;

		uStack_38 = in_RAX;
		pSVar1 = AottgCharacterEffectUi.PresetColors(type);
		if (pSVar1 == null) {
			pSVar1 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar1 != null) {
				if ((int)pSVar1.Length < 1) {
					return;
				}
				if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0 ) {
				}
			}
	label_058e395f: ;
			throw new NullReferenceException();
		}
		uVar4 = 0;
		while(true) {
			pSVar2 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar2 == null) goto label_058e395f;
			if ((long)(int)pSVar2.Length <= (long)uVar4) {
				return;
			}
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pSVar2 = AottgCharacterSetEffectsDialog.DraftColors;
			}
			if ((uint)pSVar1.Length <= uVar4) break;
			if (pSVar2 == null) goto label_058e395f;
			if ((uint)pSVar2.Length <= uVar4) break;
			pSVar2[uVar4] = pSVar1[uVar4];
			uStack_38 = CONCAT44((int)uVar4, (undefined4)uStack_38);
			pSVar3 = (((long)&uStack_38 + 4)).ToString();
			pSVar3 = String.Concat("profile-character-set-effects-draft-color-", pSVar3);
			pSVar2 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar2 == null) goto label_058e395f;
			if ((uint)pSVar2.Length <= uVar4) break;
			value = pSVar2[uVar4];
			GisketchUIColorPicker.SetValue(pSVar3, value, true, source);
			uVar4 = uVar4 + 1;
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x57E3970", Offset = "0x57E2970", VA = "0x57E3970")]
	private static void LoadGradientColors(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadGradientColors): 4 lines keep C-only constructs
		String[] pSVar1;
		String value;
		ulong in_RAX;
		String[] pSVar2;
		String pSVar3;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar4;
		ulong uVar5;
		ulong uStack_38;

		uStack_38 = in_RAX;
		uVar5 = 0;
		do {
			pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			pSVar2 = pGVar4.DraftColors;
			if (pSVar2 == null) {
	label_058e3af4: ;
				throw new NullReferenceException();
			}
			if ((long)(int)pSVar2.Length <= (long)uVar5) {
				return;
			}
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
				pSVar2 = pGVar4.DraftColors;
			}
			pSVar1 = pGVar4.DefaultGradientColors;
			if (pSVar1 == null) goto label_058e3af4;
			if ((uint)pSVar1.Length <= uVar5) {
	label_058e3af9: ;
				throw new IndexOutOfRangeException();
			}
			if (pSVar2 == null) goto label_058e3af4;
			if ((uint)pSVar2.Length <= uVar5) goto label_058e3af9;
			pSVar2[uVar5] = pSVar1[uVar5];
			uStack_38 = CONCAT44((int)uVar5, (undefined4)uStack_38);
			pSVar3 = (((long)&uStack_38 + 4)).ToString();
			pSVar3 = String.Concat("profile-character-set-effects-draft-color-", pSVar3);
			pSVar2 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar2 == null) goto label_058e3af4;
			if ((uint)pSVar2.Length <= uVar5) goto label_058e3af9;
			value = pSVar2[uVar5];
			GisketchUIColorPicker.SetValue(pSVar3, value, true, source);
			uVar5 = uVar5 + 1;
		} while(true);
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x57E42C0", Offset = "0x57E32C0", VA = "0x57E42C0")]
	private static void ApplyDraftColor(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyDraftColor): 4 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		bool bVar3;
		uint uVar4;
		ulong in_RAX;
		String pSVar5;
		MethodInfo method_00;
		String text;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			uVar4 = AottgCharacterSetEffectsDialog.DraftColorIndex(context.ElementId);
		}
		else {
			uVar4 = AottgCharacterSetEffectsDialog.DraftColorIndex(context.ElementId);
		}
		if ((int)uVar4 < 0) {
			return;
		}
		if (((typeof(AottgCharacterSetEffectsDialog))._2). cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = AottgCharacterSetEffectsDialog.DraftColors;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((uint)pSVar2.Length <= uVar4) goto label_058e44f1;
		text = pSVar2[uVar4];
		if (context.Node == null) {
	label_058e4436: ;
			method_00 = (MethodInfo)GisketchUIColorPickerValue.Normalize(text, true, null);
		}
		else {
			bVar3 = (((context.Node).fields).id == "cancel");
			if (!bVar3) {
				text = ((context.Node).fields).value;
				goto label_058e4436;
			}
			uStack_38 = CONCAT44(uVar4, (undefined4)uStack_38);
			pSVar5 = (((long)&uStack_38 + 4)).ToString();
			pSVar5 = String.Concat("profile-character-set-effects-draft-color-", pSVar5);
			method_00 = (MethodInfo)GisketchUIColorPicker.Value(pSVar5, text, true);
		}
		if (uVar4 < (uint)pSVar2.Length) {
			pSVar2[uVar4] = (String)method_00;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			if (AottgCharacterSetEffectsDialog._draftEnabled == false) {
				if (uVar1 == 0) {
				}
				AottgCharacterSetEffectsDialog.ApplyGradientPreview(context.GameObject);
				uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (uVar1 == 0) {
				}
				AottgCharacterSetEffectsDialog.ApplyEffectPreview(context.GameObject);
				uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			AottgCharacterSetEffectsDialog.SyncDialogDraft(context.GameObject);
			return;
		}
	label_058e44f1: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x57E4600", Offset = "0x57E3600", VA = "0x57E4600")]
	private static void ApplySelectedTextColor(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplySelectedTextColor): clean
		uint uVar1;
		bool bVar2;
		AottgCharacterTextColorEditorRuntime __this;
		MethodInfo method_00;

		__this = AottgCharacterSetEffectsDialog.Runtime(context.GameObject);
		bVar2 = ((Object)__this == null);
		if (bVar2) {
			return;
		}
		if (context.Node == null) {
	label_058e472c: ;
			method_00 = (MethodInfo)GisketchUIColorPicker.Value("profile-character-set-effects-text-picker", "#FFFFFF", false);
			if (context.Node != null) goto label_058e4771;
			bVar2 = true;
		}
		else {
			method_00 = (MethodInfo *)"cancel";
			bVar2 = (((context.Node).fields).id == "cancel");
			if (bVar2) {
				if (__this == null) goto label_058e47bc;
				__this.RestorePreviewColors();
				__this.ClearSelection();
				uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
				goto joined_r0x058e47a4;
			}
			bVar2 = String.IsNullOrEmpty(((context.Node).fields).value);
			if (bVar2) goto label_058e472c;
			method_00 = (MethodInfo)((context.Node).fields).value;
	label_058e4771: ;
			bVar2 = (((context.Node).fields).id == "save");
		}
		if (__this == null) {
	label_058e47bc: ;
			throw new NullReferenceException();
		}
		__this.ApplyColor((String)method_00, bVar2);
		uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
	joined_r0x058e47a4: ;
		if (uVar1 == 0) {
		}
		AottgCharacterSetEffectsDialog.SyncDialogDraft(context.GameObject);
		return;
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x57E4A80", Offset = "0x57E3A80", VA = "0x57E4A80")]
	private static void ImportedColoredText(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ImportedColoredText): clean
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar1;
		GisketchUIState __this;
		bool bVar2;
		GisketchUIRoot root;
		MethodInfo method_00;

		pGVar1 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar1._textMode = "Color";
		pGVar1 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pGVar1._draftEnabled = false;
		pGVar1._draftType = "None";
		root = null;
		bVar2 = ((Object)source != null);
		if (bVar2) {
			if (source == null) {
				throw new NullReferenceException();
			}
			root = source.GetComponentInParent<GisketchUIRoot>();
		}
		AottgCharacterSetEffectsDialog.SetColorVisibility(root);
		if ((root != null) &&(__this = root._State_k__BackingField, __this != null)) {
			bVar2 = AottgCharacterSetEffectsDialog.TextColorsEnabled();
			__this.SetBool("profile-character-set-effects.text-colors.enabled", bVar2);
		}
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
		}
		method_00 = (MethodInfo *)"Color";
		AottgCharacterSetEffectsDialog.SetChoiceValue(source, "Color");
		AottgCharacterSetEffectsDialog.SyncDialogDraft(source);
		return;
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x57E4DB0", Offset = "0x57E3DB0", VA = "0x57E4DB0")]
	private static void Save(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Save): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		TMP_InputField pTVar3;
		GisketchOverlayManager __this;
		bool bVar4;
		int count;
		ulong in_RAX;
		AottgCharacterTextColorEditorRuntime __this_00;
		String[] pSVar5;
		String pSVar6;
		String* ppSVar7;
		String pSVar8;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar9;
		GisketchUIRoot pGVar10;
		AottgCharacterTextColorCodec.Document pGVar11;
		MethodInfo pMVar12;
		GameObject source;
		Il2CppClass klass;
		sbyte cVar13;
		ulong uVar14;
		ulong uStack_38;

		uStack_38 = in_RAX;
		__this_00 = AottgCharacterSetEffectsDialog.Runtime(context.GameObject) ;
		bVar4 = ((Object)__this_00 == null);
		if (bVar4) {
			return;
		}
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			if (pGVar9._hasAccess == false) goto label_058e4fc1;
	label_058e4ea6: ;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			cVar13 = pGVar9._draftEnabled;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			if (pGVar9._hasAccess != false) goto label_058e4ea6;
	label_058e4fc1: ;
			cVar13 = false;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		count = AottgCharacterEffectUi.GradientStops(AottgCharacterSetEffectsDialog._textMode);
		if (count < 1) {
			if (__this_00 == null) goto label_058e539f;
			pTVar3 = __this_00._input;
			bVar4 = ((Object)pTVar3 != null);
			if (bVar4) {
				pTVar3 = __this_00._input;
				if (pTVar3 == null) goto label_058e539f;
				ppSVar7 = &pTVar3.m_Text;
			}
			else {
				ppSVar7 = &__this_00._lastText;
			}
			pSVar5 = (String[])__this_00._colors;
			pSVar6 = AottgCharacterTextColorCodec.Serialize(*ppSVar7, (IList<string>)pSVar5);
			if (cVar13 != false) goto label_058e536f;
	label_058e4f2b: ;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar5 = AottgCharacterSetEffectsDialog.GradientColors(count);
			if (__this_00 == null) goto label_058e539f;
			pSVar6 = __this_00.ApplyGradient((IList<string>)pSVar5);
			if (cVar13 == false) goto label_058e4f2b;
	label_058e536f: ;
			pGVar11 = AottgCharacterTextColorCodec.Parse(pSVar6);
			if (pGVar11 == null) goto label_058e539f;
			pSVar6 = pGVar11.Text;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar8 = AottgCharacterSetEffectsDialog._targetId;
		AottgCharacterTextField.SetValue(context.GameObject, pSVar8, pSVar6);
		pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pSVar6 = pGVar9._effectPrefix;
		if (cVar13 == false) {
			ppSVar7 = &"None";
		}
		else {
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
				pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			ppSVar7 = &pGVar9._draftType;
		}
		pSVar8 = *ppSVar7;
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog.SetEffect(pSVar6, cVar13 != false, pSVar8);
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgEditCharacterDialog.SetFont(AottgCharacterSetEffectsDialog._effectPrefix, AottgCharacterSetEffectsDialog._draftFont);
		uVar14 = 0;
		while(true) {
			pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			if (pGVar9.DraftColors == null) break;
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			if ((long)(int)pGVar9.DraftColors.Length <= (long)uVar14) {
				if (uVar2 == 0) {
					pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
				}
				pSVar6 = pGVar9._targetId;
				pSVar8 = pGVar9._draftFont;
				AottgCharacterTextField.SetFont(context.GameObject, pSVar6, pSVar8) ;
				source = AottgCharacterSetEffectsDialog._ownerSource;
				if (source == null) {
					source = context.GameObject;
				}
				if (Il2CppMethodInitialized_0754558c == false) {
					Il2CppMethodInitialized_0754558c = true;
					uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
					klass = typeof(AottgEditCharacterDialog);
				}
				else {
					uVar1 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
					klass = typeof(AottgEditCharacterDialog);
				}
				typeof(AottgEditCharacterDialog) =(AottgEditCharacterDialog)klass;
				if (uVar1 == 0) {
				}
				pSVar6 = AottgEditCharacterDialog.EffectsDraftValue();
				pMVar12 = (MethodInfo *)"profile-character-effects-draft";
				GisketchFormState.SetDraft(source, "profile-character-effects-draft", pSVar6);
				AottgCharacterNamePreview.Refresh(context.GameObject);
				if (((context.GameObject != null) &&(pGVar10 = context.GameObject.GetComponentInParent<GisketchUIRoot>(), pGVar10 != null)) &&(__this = pGVar10._Overlays_k__BackingField, __this != null)) {
					__this.CloseTopForced(true);
				}
				return;
			}
			if (uVar2 == 0) {
				pGVar9 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			pSVar6 = pGVar9._effectPrefix;
			uStack_38 = CONCAT44((int)uVar14, (undefined4)uStack_38);
			pSVar8 = (((long)&uStack_38 + 4)).ToString();
			pSVar6 = String.Concat(pSVar6, "-color-", pSVar8);
			pSVar5 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar5 == null) break;
			if ((uint)pSVar5.Length <= uVar14) {
				throw new IndexOutOfRangeException();
			}
			pSVar8 = pSVar5[uVar14];
			GisketchUIColorPicker.SetValue(pSVar6, pSVar8, true, context.GameObject);
			uVar14 = uVar14 + 1;
		}
	label_058e539f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x57E5900", Offset = "0x57E4900", VA = "0x57E5900")]
	private static void DiscardPreview(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DiscardPreview): 1 lines keep C-only constructs
		String prefix;
		String font;
		GameObject pUVar1;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar2;

		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
		}
		prefix = AottgCharacterSetEffectsDialog._effectPrefix;
		font = AottgCharacterSetEffectsDialog._initialFont;
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog.SetFont(prefix, font);
		pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		pUVar1 = pGVar2._ownerSource;
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		}
		if (pUVar1 != null) {
			source = pUVar1;
		}
		AottgCharacterSetEffectsDialog.ApplyFontPreview(source, pGVar2._initialFont);
		return;
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x57E2130", Offset = "0x57E1130", VA = "0x57E2130")]
	private static bool TextColorsEnabled()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorsEnabled): clean
		sbyte cVar1;
		uint uVar2;
		bool bVar3;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar4;

		if (Il2CppMethodInitialized_07545513 == false) {
			Il2CppMethodInitialized_07545513 = true;
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			cVar1 = pGVar4._textEditable;
		}
		else {
			pGVar4 = (typeof(AottgCharacterSetEffectsDialog)).static_fields;
			cVar1 = pGVar4._textEditable;
		}
		if (cVar1 != false) {
			if (((typeof(AottgCharacterSetEffectsDialog))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
				cVar1 = pGVar4._draftEnabled;
			}
			else {
				cVar1 = pGVar4._draftEnabled;
			}
			if (cVar1 == false) {
				if (((typeof(AottgCharacterSetEffectsDialog))._2). cctor_finished_or_no_cctor == 0) {
					pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
				}
				bVar3 = (pGVar4._textMode == "Color");
				return bVar3;
			}
		}
		return false;
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x57E32F0", Offset = "0x57E22F0", VA = "0x57E32F0")]
	private static bool ColorPanelVisible()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorPanelVisible): clean
		sbyte cVar1;
		uint uVar2;
		int iVar3;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar4;

		if (Il2CppMethodInitialized_07545514 == false) {
			Il2CppMethodInitialized_07545514 = true;
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			cVar1 = pGVar4._draftEnabled;
		}
		else {
			pGVar4 = (typeof(AottgCharacterSetEffectsDialog)).static_fields;
			cVar1 = pGVar4._draftEnabled;
		}
		if (cVar1 != false) {
			return true;
		}
		if (((typeof(AottgCharacterSetEffectsDialog))._2). cctor_finished_or_no_cctor == 0) {
			pGVar4 = typeof(AottgCharacterSetEffectsDialog).static_fields;
		}
		return 0 < iVar3;
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x57E3290", Offset = "0x57E2290", VA = "0x57E3290")]
	private static bool TextColorHelpVisible()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorHelpVisible): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545515 == false) {
			Il2CppMethodInitialized_07545515 = true;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgCharacterSetEffectsDialog);
		}
		else {
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgCharacterSetEffectsDialog);
		}
		typeof(AottgCharacterSetEffectsDialog) =(AottgCharacterSetEffectsDialog)klass;
		if (uVar1 == 0) {
			return bVar2;
		}
		return bVar2;
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x57E59D0", Offset = "0x57E49D0", VA = "0x57E59D0")]
	private static bool ColorVisible(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorVisible): clean
		int iVar1;

		iVar1 = AottgCharacterEffectUi.GradientStops(AottgCharacterSetEffectsDialog._textMode);
		return AottgCharacterSetEffectsDialog._draftEnabled != false || index < iVar1 && 0 < iVar1;
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x57E1DF0", Offset = "0x57E0DF0", VA = "0x57E1DF0")]
	private static void SetColorVisibility(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetColorVisibility): 8 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		GisketchUIState pGVar3;
		String[] pSVar4;
		bool bVar5;
		int iVar6;
		ulong in_RAX;
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar7;
		String pSVar8;
		Il2CppClass klass;
		int iVar9;
		ulong uStack_38;

		uStack_38 = in_RAX;
		bVar5 = ((Object)root == null);
		if (bVar5) {
			return;
		}
		if (root == null) goto label_058e212b;
		pGVar3 = root._State_k__BackingField;
		if (pGVar3 == null) {
			return;
		}
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545514 == false) goto label_058e1ecc;
	label_058e1ea0: ;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor != 0) goto label_058e1ead;
	label_058e1eec: ;
			pGVar7 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			cVar1 = pGVar7._draftEnabled;
		}
		else {
			if (Il2CppMethodInitialized_07545514 != false) goto label_058e1ea0;
	label_058e1ecc: ;
			Il2CppMethodInitialized_07545514 = true;
			if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) goto label_058e1eec;
	label_058e1ead: ;
			pGVar7 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			cVar1 = pGVar7._draftEnabled;
		}
		bVar5 = true;
		if (cVar1 == false) {
			if (((typeof(AottgCharacterSetEffectsDialog))._2). cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgCharacterSetEffectsDialog).static_fields;
			}
			iVar6 = AottgCharacterEffectUi.GradientStops(pGVar7._textMode);
			bVar5 = 0 < iVar6;
		}
		pGVar3.SetBool("profile-character-set-effects.effect-colors.visible", bVar5);
		pGVar3 = root._State_k__BackingField;
		if (Il2CppMethodInitialized_07545515 == false) {
			Il2CppMethodInitialized_07545515 = true;
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgCharacterSetEffectsDialog);
		}
		else {
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgCharacterSetEffectsDialog);
		}
		typeof(AottgCharacterSetEffectsDialog) =(AottgCharacterSetEffectsDialog)klass;
		if (uVar2 == 0) {
			bVar5 = AottgCharacterSetEffectsDialog.TextColorsEnabled();
		}
		else {
			bVar5 = AottgCharacterSetEffectsDialog.TextColorsEnabled();
		}
		if (pGVar3 != null) {
			iVar9 = 0;
			pGVar3.SetBool("profile-character-set-effects.text-color-help.visible", bVar5);
			uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			while(true) {
				if (uVar2 == 0) {
				}
				pSVar4 = AottgCharacterSetEffectsDialog.DraftColors;
				if (pSVar4 == null) break;
				if ((int)pSVar4.Length <= iVar9) {
					return;
				}
				pGVar3 = root._State_k__BackingField;
				if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0 ) {
				}
				else {
				}
				uStack_38 = CONCAT44(iVar9, (undefined4)uStack_38);
				pSVar8 = (((long)&uStack_38 + 4)).ToString();
				pSVar8 = String.Concat("profile-character-set-effects.draft-color-", pSVar8, ".visible");
				if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0 ) {
				}
				iVar6 = AottgCharacterEffectUi.GradientStops(AottgCharacterSetEffectsDialog. _textMode);
				if (pGVar3 == null) break;
				pGVar3.SetBool(pSVar8, AottgCharacterSetEffectsDialog._draftEnabled != false || iVar9 < iVar6 && 0 < iVar6);
				iVar9 = iVar9 + 1;
				uVar2 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
			}
		}
	label_058e212b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x57E3C60", Offset = "0x57E2C60", VA = "0x57E3C60")]
	private static void ApplyGradientPreview(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyGradientPreview): clean
		bool bVar1;
		int count;
		AottgCharacterTextColorEditorRuntime __this;
		String[] stops;

		count = AottgCharacterEffectUi.GradientStops(AottgCharacterSetEffectsDialog._textMode);
		__this = AottgCharacterSetEffectsDialog.Runtime(source);
		bVar1 = ((Object)__this == null);
		if (bVar1) {
			return;
		}
		if (count < 1) {
			if (__this != null) {
				__this.ClearNameEffectPreview();
				__this._gradientStops = null;
				return;
			}
		}
		else {
			stops = AottgCharacterSetEffectsDialog.GradientColors(count);
			if (__this != null) {
				__this.SetGradient((IList<string>)stops);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x57E3B70", Offset = "0x57E2B70", VA = "0x57E3B70")]
	private static void ApplyEffectPreview(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyEffectPreview): clean
		String[] colors;
		bool bVar1;
		AottgCharacterTextColorEditorRuntime __this;
		MethodInfo method_00;

		__this = AottgCharacterSetEffectsDialog.Runtime(source);
		bVar1 = ((Object)__this == null);
		if (bVar1) {
			return;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		colors = AottgCharacterSetEffectsDialog.DraftColors;
		method_00 = (MethodInfo)AottgCharacterSetEffectsDialog._draftType;
		__this._gradientStops = null;
		__this.StoreEffectPreview((String)method_00, (IList<string>)colors);
		__this.ApplyStoredEffectPreview();
		return;
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x57E4160", Offset = "0x57E3160", VA = "0x57E4160")]
	private static void ApplyFontPreview(GameObject source, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyFontPreview): clean
		bool bVar1;
		AottgCharacterTextColorEditorRuntime __this;
		MethodInfo pMVar2;

		pMVar2 = (MethodInfo)AottgCharacterSetEffectsDialog._targetId;
		AottgCharacterTextField.SetFont(source, (String)pMVar2, font);
		__this = AottgCharacterSetEffectsDialog.Runtime(source);
		pMVar2 = null;
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.SetFont(font);
			pMVar2 = (MethodInfo)font;
		}
		AottgCharacterNamePreview.Refresh(source);
		return;
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x57E5430", Offset = "0x57E4430", VA = "0x57E5430")]
	private static string[] GradientColors(int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$GradientColors): clean
		String[] pSVar1;
		String[] pSVar2;
		ulong uVar3;
		long lVar4;

		pSVar2 = (String[])new string[count];
		if (0 < count) {
			if (pSVar2 == null) {
				if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0 ) {
				}
				pSVar2 = AottgCharacterSetEffectsDialog.DraftColors;
				if ((pSVar2 != null) && ((int)pSVar2.Length == 0)) {
	label_058e551f: ;
					throw new IndexOutOfRangeException();
				}
	label_058e5524: ;
				throw new NullReferenceException();
			}
			lVar4 = 0x20;
			uVar3 = 0;
			do {
				if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0 ) {
				}
				pSVar1 = AottgCharacterSetEffectsDialog.DraftColors;
				if (pSVar1 == null) goto label_058e5524;
				if (((uint)pSVar1.Length <= uVar3) || ((uint)pSVar2.Length <= uVar3)) goto label_058e551f;
				*(ulong)((long)pSVar2.m_Items + lVar4 + -0x20) = *(ulong)((long)pSVar1.m_Items + lVar4 + -0x20);
				uVar3 = uVar3 + 1;
				lVar4 = lVar4 + 8;
			} while ((uint)count != uVar3);
		}
		return pSVar2;
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x57E3B00", Offset = "0x57E2B00", VA = "0x57E3B00")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetState): clean
		GisketchUIState __this;
		GisketchUIRoot pGVar1;

		if (context.GameObject != null) {
			pGVar1 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar1 != null) &&(__this = pGVar1._State_k__BackingField, __this != null)) {
				__this.SetBool(key, value);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x57E47D0", Offset = "0x57E37D0", VA = "0x57E47D0")]
	private static AottgCharacterTextColorEditorRuntime Runtime(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Runtime): 1 lines keep C-only constructs
		bool bVar1;
		Transform pUVar2;
		Object[] pSVar3;

		if (Il2CppMethodInitialized_0754551d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgCharacterTextColorEditorRuntime) ;
			Il2CppMethodInitialized_0754551d = true;
		}
		bVar1 = ((Object)source == null);
		if (bVar1) {
			return null;
		}
		if ((((source == null) ||(pUVar2 = source.transform, pUVar2 == null)) ||(pUVar2 = pUVar2.root, pUVar2 == null)) ||(pSVar3 = pUVar2.GetComponentsInChildren<AottgCharacterTextColorEditorRuntime>(true), pSVar3 == null)) {
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length < 1) {
			return null;
		}
		return (AottgCharacterTextColorEditorRuntime)pSVar3[0];
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x57E4C20", Offset = "0x57E3C20", VA = "0x57E4C20")]
	private static void SetChoiceValue(GameObject source, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetChoiceValue): clean
		uint uVar1;
		AottgChoiceControl __this;
		bool bVar2;
		Transform pUVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this_00;
		String a;
		ulong uVar6;

		bVar2 = ((Object)source == null);
		if (bVar2) {
			return;
		}
		if ((((source == null) ||(pUVar3 = source.transform, pUVar3 == null)) ||(pUVar3 = pUVar3.root, pUVar3 == null)) ||(pSVar4 = pUVar3.GetComponentsInChildren<AottgChoiceControl>(true), pSVar4 == null)) {
	label_058e4d9b: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar4.Length < 1) {
			return;
		}
		uVar5 = pSVar4.Length & 0xffffffff;
		uVar6 = 0;
		do {
			if (uVar5 <= uVar6) {
				throw new IndexOutOfRangeException();
			}
			__this = (AottgChoiceControl)pSVar4[uVar6];
			bVar2 = ((Object)__this != null);
			if (bVar2) {
				if ((__this == null) ||(__this_00 = (Object)__this.gameObject, __this_00 == null)) goto label_058e4d9b;
				a = __this_00.name;
				bVar2 = (a == "profile-character-set-effects-type");
				if (bVar2) {
					__this.SetValueWithoutNotify(value);
					return;
				}
			}
			uVar6 = uVar6 + 1;
			uVar1 = (uint)pSVar4.Length;
			uVar5 = (ulong)uVar1;
			if ((long)(int)uVar1 <= (long)uVar6) {
				return;
			}
		} while(true);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x57E4270", Offset = "0x57E3270", VA = "0x57E4270")]
	private static string DraftColorId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorId): clean
		String pSVar1;
		int iStack_4;

		pSVar1 = iStack_4.ToString();
		pSVar1 = String.Concat("profile-character-set-effects-draft-color-", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x57E5A50", Offset = "0x57E4A50", VA = "0x57E5A50")]
	private static string DraftColorVisibleKey(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorVisibleKey): clean
		String pSVar1;
		int iStack_4;

		pSVar1 = iStack_4.ToString();
		pSVar1 = String.Concat("profile-character-set-effects.draft-color-", pSVar1, ".visible") ;
		return pSVar1;
	}

	[Token(Token = "0x600121D")]
	[Address(RVA = "0x57E3D60", Offset = "0x57E2D60", VA = "0x57E3D60")]
	private static void SyncDialogDraft(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SyncDialogDraft): 4 lines keep C-only constructs
		uint uVar1;
		TMP_InputField pTVar2;
		bool bVar3;
		AottgCharacterTextColorEditorRuntime x;
		String* ppSVar4;
		String pSVar5;
		MethodInfo method_01;

		x = AottgCharacterSetEffectsDialog.Runtime(source);
		method_01 = null;
		bVar3 = ((Object)x != null);
		if (bVar3) {
			if (x == null) {
	label_058e3ec9: ;
				throw new NullReferenceException();
			}
			pTVar2 = x._input;
			bVar3 = ((Object)pTVar2 != null);
			if (bVar3) {
				pTVar2 = x._input;
				if (pTVar2 == null) goto label_058e3ec9;
				ppSVar4 = &pTVar2.m_Text;
			}
			else {
				ppSVar4 = &x._lastText;
			}
			method_01 = (MethodInfo)x._colors;
			pSVar5 = AottgCharacterTextColorCodec.Serialize(*ppSVar4, (IList<string>)method_01);
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar5 = AottgCharacterSetEffectsDialog._initialValue;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar5 = AottgCharacterSetEffectsDialog.EffectDialogDraftValue(pSVar5);
		GisketchFormState.SetDraft(source, "profile-character-set-effects.draft", pSVar5);
		return;
	}

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x57E2EA0", Offset = "0x57E1EA0", VA = "0x57E2EA0")]
	private static string EffectDialogDraftValue(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$EffectDialogDraftValue): 20 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		MethodInfo pMVar4;
		List<string> __this;
		String pSVar5;
		String[] pSVar6;
		ulong uVar7;

		__this = new List<string>();
		if ((typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor == 0) {
			uVar2 = (g_data_075566f0._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (g_data_075566f0._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar5 = (AottgCharacterSetEffectsDialog. _draftEnabled).ToString();
		pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = __this._items;
			if (pSVar6 != null) {
				uVar3 = __this._size;
				if (uVar3 < (uint)pSVar6.Length) {
					__this._size = uVar3 + 1;
					pSVar6[(int)uVar3] = pSVar5;
				}
				else {
					__this.AddWithResize((object)pSVar5);
				}
				pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
				pSVar5 = AottgCharacterSetEffectsDialog._draftType;
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar6 = __this._items;
				if (pSVar6 != null) {
					uVar3 = __this._size;
					if (uVar3 < (uint)pSVar6.Length) {
						__this._size = uVar3 + 1;
						pSVar6[(int)uVar3] = pSVar5;
					}
					else {
						__this.AddWithResize((object)pSVar5);
					}
					pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
					pSVar5 = AottgCharacterSetEffectsDialog._draftFont;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this._items;
					if (pSVar6 != null) {
						uVar3 = __this._size;
						if (uVar3 < (uint)pSVar6.Length) {
							__this._size = uVar3 + 1;
							pSVar6[(int)uVar3] = pSVar5;
						}
						else {
							__this.AddWithResize((object)pSVar5);
						}
						pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
						pSVar5 = AottgCharacterSetEffectsDialog._textMode;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this._items;
						if (pSVar6 != null) {
							uVar3 = __this._size;
							if (uVar3 < (uint)pSVar6.Length) {
								__this._size = uVar3 + 1;
								pSVar6[(int)uVar3] = pSVar5;
								pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
							}
							else {
								__this.AddWithResize((object)pSVar5);
								pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
							}
							if (text == null) {
								text = (String)**(ulong*)(g_data_07556758 + 0xb8);
							}
							piVar1 = &__this._version;
							MethodInfo_System_Collections_Generic_List_string_Add = pMVar4;
							*piVar1 = *piVar1 + 1;
							pSVar6 = __this._items;
							if (pSVar6 != null) {
								uVar3 = __this._size;
								if (uVar3 < (uint)pSVar6.Length) {
									__this._size = uVar3 + 1;
									pSVar6[(int)uVar3] = text;
									uVar7 = 0;
								}
								else {
									__this.AddWithResize((object)text);
									uVar7 = 0;
								}
								while(true) {
									if ((typeof(AottgCharacterSetEffectsDialog)._2). cctor_finished_or_no_cctor == 0) {
									}
									pSVar6 = AottgCharacterSetEffectsDialog. DraftColors;
									if (pSVar6 == null) break;
									if ((long)(int)pSVar6.Length <= (long)uVar7) {
										pSVar6 = (String[])__this.ToArray();
										pSVar5 = String.Join("|", pSVar6);
										return pSVar5;
									}
									if ((typeof(AottgCharacterSetEffectsDialog)._2). cctor_finished_or_no_cctor == 0) {
										pSVar6 = AottgCharacterSetEffectsDialog. DraftColors;
										if (pSVar6 == null) break;
									}
									pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
									if ((uint)pSVar6.Length <= uVar7) {
										throw new IndexOutOfRangeException();
									}
									pSVar5 = pSVar6[uVar7];
									piVar1 = &__this._version;
									*piVar1 = *piVar1 + 1;
									pSVar6 = __this._items;
									if (pSVar6 == null) break;
									uVar3 = __this._size;
									if (uVar3 < (uint)pSVar6.Length) {
										__this._size = uVar3 + 1;
										pSVar6[(int)uVar3] = pSVar5;
									}
									else {
										__this.AddWithResize((object)pSVar5);
									}
									uVar7 = uVar7 + 1;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x57E4500", Offset = "0x57E3500", VA = "0x57E4500")]
	private static int DraftColorIndex(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorIndex): clean
		uint uVar1;
		String[] pSVar2;
		bool bVar3;
		String pSVar4;
		int iVar5;
		int local_2c;

		iVar5 = 0;
		uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		while(true) {
			if (uVar1 == 0) {
			}
			pSVar2 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			if ((int)pSVar2.Length <= iVar5) {
				return -1;
			}
			local_2c = iVar5;
			pSVar4 = local_2c.ToString();
			pSVar4 = String.Concat("profile-character-set-effects-draft-color-", pSVar4);
			bVar3 = (id == pSVar4);
			if (bVar3) break;
			iVar5 = iVar5 + 1;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		return iVar5;
	}

	[Token(Token = "0x6001220")]
	[Address(RVA = "0x57E60B0", Offset = "0x57E50B0", VA = "0x57E60B0")]
	public AottgCharacterSetEffectsDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c (Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c.

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.cctor: clean
	static AottgCharacterSetEffectsDialog()
	{
		Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields pGVar1;
		String[] pSVar2;

		pSVar2 = (String[])new string[4];
		if (pSVar2 == null) {
	label_058e6352: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "#FFFFFFFF";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "#FFFFFFFF";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "#FFFFFFFF";
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3] = "#FFFFFFFF";
						AottgCharacterSetEffectsDialog.DraftColors = pSVar2;
						pSVar2 = (String[])new string[4];
						if (pSVar2 == null) goto label_058e6352;
						if ((int)pSVar2.Length != 0) {
							pSVar2[0] = "#B7F8C8FF";
							if ((pSVar2.Length & 0xfffffffe) != 0) {
								pSVar2[1] = "#A8F5D6FF";
								if (2 < (uint)pSVar2.Length) {
									pSVar2[2] = "#97F0E8FF";
									if ((pSVar2.Length & 0xfffffffc) != 0) {
										pSVar2[3] = "#8CEBFFFF";
										pGVar1 = typeof(AottgCharacterSetEffectsDialog).static_fields;
										pGVar1.DefaultGradientColors = pSVar2;
										pGVar1 = typeof(AottgCharacterSetEffectsDialog).static_fields;
										pGVar1._initialFont = "Normal";
										pGVar1 = typeof(AottgCharacterSetEffectsDialog).static_fields;
										pGVar1._draftFont = "Normal";
										pGVar1 = typeof(AottgCharacterSetEffectsDialog).static_fields;
										pGVar1._draftType = "None";
										pGVar1 = typeof(AottgCharacterSetEffectsDialog).static_fields;
										pGVar1._textMode = "Color";
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgCharacterSetEffectsDialog.c();
		AottgCharacterSetEffectsDialog.c.__9 =(AottgCharacterSetEffectsDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__33_0: 2 lines keep C-only constructs
	private void c__BuildBody_b__33_0(AottgUi row)
	{
		String pSVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		Action<GisketchActionContext> pSVar4;
		GisketchNodeDefinition pGVar5;
		GisketchLength pGVar6;
		GisketchLayoutDefinition pGVar7;

		pSVar2 = AottgCharacterEffectUi.SelectValue(AottgCharacterSetEffectsDialog._hasAccess, AottgCharacterSetEffectsDialog._draftEnabled, AottgCharacterSetEffectsDialog._draftType);
		pGVar3 = AottgCharacterEffectUi.Options(AottgCharacterSetEffectsDialog. _hasAccess);
		pSVar4 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectEffect);
		if (row != null) {
			pGVar5 = row.FormSelect("profile-character-set-effects-type", "Effect", pSVar2, pGVar3, pSVar4, null, 8, null);
			if ((typeof(AottgCharacterStyleChoicePreview)._2).cctor_finished_or_no_cctor == 0 ) {
			}
			if (pGVar5 != null) {
				pGVar5.choiceOptionRenderer = "profile-character-effect-preview";
			}
			pGVar6 = AottgUi.Percent(50.0);
			pGVar7 = AottgUi.Layout("Row", null, "Center", null, null, 0.0, pGVar6, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar5 != null) {
				pGVar5.layout = pGVar7;
				pSVar2 = AottgCharacterSetEffectsDialog._draftFont;
				pGVar3 = AottgCharacterFontUi.Options(AottgCharacterSetEffectsDialog. _hasAccess);
				pSVar4 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectFont);
				pGVar5 = row.FormSelect("profile-character-set-effects-font", "Font", pSVar2, pGVar3, pSVar4, null, 8, null);
				if (pGVar5 != null) {
					pGVar5.choiceOptionRenderer = "profile-character-font-preview";
				}
				pGVar6 = AottgUi.Percent(50.0);
				pGVar7 = AottgUi.Layout("Row", null, "Center", null, null, 0.0, pGVar6, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				if (pGVar5 != null) {
					pGVar5.layout = pGVar7;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__33_1: clean
	private void c__BuildBody_b__33_1(AottgUi callout)
	{
		if (callout == null) {
			throw new NullReferenceException();
		}
		callout.TextKey("MainMenu.Profile.TextColorHelp", "calloutText", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__33_2: 2 lines keep C-only constructs
	private void c__BuildBody_b__33_2(AottgUi row)
	{
		uint uVar1;
		AottgCharacterSetEffectsDialog.c__DisplayClass33_0 GVar2;
		int iVar3;
		String[] pSVar4;
		int iVar5;
		AottgCharacterSetEffectsDialog.c__DisplayClass33_0 __this_00;
		Action<AottgUi> __this_01;
		String pSVar6;
		GisketchNodeDefinition pGVar7;
		GisketchUIBindingDefinition __this_02;
		int iVar8;
		AottgCharacterSetEffectsDialog.c__DisplayClass33_0 GStack_38;
		AottgCharacterSetEffectsDialog.c__DisplayClass33_0 GStack_34;

		iVar8 = 0;
		uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		while(true) {
			if (uVar1 == 0) {
			}
			pSVar4 = AottgCharacterSetEffectsDialog.DraftColors;
			if (pSVar4 == null) break;
			if ((int)pSVar4.Length <= iVar8) {
				return;
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgCharacterSetEffectsDialog.c__DisplayClass33_0)) ;
			__this_00 = new Object();
			if (__this_00 == null) break;
			__this_00.index = iVar8;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass33_0_BuildBody_b__3);
			GVar2.index = __this_00.index;
			GStack_38.index = GVar2.index;
			pSVar6 = GStack_38.index.ToString();
			pSVar6 = String.Concat("profile-character-set-effects-draft-color-", pSVar6);
			pSVar6 = String.Concat(pSVar6, "-slot");
			if (row == null) break;
			pGVar7 = row.Panel("clear", __this_01, pSVar6, null, null);
			iVar3 = __this_00.index;
			iVar5 = AottgCharacterEffectUi.GradientStops(AottgCharacterSetEffectsDialog. _textMode);
			if (pGVar7 == null) break;
			pGVar7.active = AottgCharacterSetEffectsDialog._draftEnabled != false || iVar3 < iVar5 && 0 < iVar5;
			__this_02 = new GisketchUIBindingDefinition();
			GStack_34.index = __this_00.index;
			pSVar6 = GStack_34.index.ToString();
			pSVar6 = String.Concat("profile-character-set-effects.draft-color-", pSVar6, ".visible");
			if (__this_02 == null) break;
			__this_02.visible = pSVar6;
			pGVar7.bind = __this_02;
			iVar8 = iVar8 + 1;
			uVar1 = (typeof(AottgCharacterSetEffectsDialog)._2).cctor_finished_or_no_cctor;
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass33_0$$.ctor: clean
	private void c__DisplayClass33_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass33_0$$<BuildBody>b__3: 7 lines keep C-only constructs
	private void c__DisplayClass33_0__BuildBody_b__3(AottgUi swatch)
	{
		int iVar1;
		uint uVar2;
		String[] pSVar3;
		String value;
		uint in_EAX;
		String pSVar4;
		String label;
		Action<GisketchActionContext> __this_00;
		GisketchUIColorPicker __this_01;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		iVar1 = this.index;
		uStack_38 = CONCAT44(iVar1, (undefined4)uStack_38);
		pSVar4 = (((long)&uStack_38 + 4)).ToString();
		pSVar4 = String.Concat("profile-character-set-effects-draft-color-", pSVar4);
		uStack_38._0_4_ = CONCAT22((short)this.index + 0x41, (undefined2)uStack_38);
		label = Char.ToString((ushort)((long)&uStack_38 + 2));
		pSVar3 = AottgCharacterSetEffectsDialog.DraftColors;
		if (pSVar3 != null) {
			uVar2 = this.index;
			if ((uint)pSVar3.Length <= uVar2) {
				throw new IndexOutOfRangeException();
			}
			value = pSVar3[(int)uVar2];
			__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplyDraftColor);
			__this_01 = new GisketchUIColorPicker(pSVar4, label, value, __this_00, true, true, true, false);
			if (swatch != null) {
				swatch.Component((AottgComponent)__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
