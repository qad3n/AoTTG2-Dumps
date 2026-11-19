// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002A0")]
[AottgDialog("advanced-configuration")]
public sealed class AottgAdvancedConfigurationDialog : AottgDialog
{
	[Token(Token = "0x4000D68")]
	public const string Id = "advanced-configuration";

	[Token(Token = "0x4000D69")]
	private const string Prefix = "MainMenu.AdvancedConfigurationPopup.";

	[Token(Token = "0x4000D6A")]
	private const int KeyMaxLength = 64;

	[Token(Token = "0x4000D6B")]
	private const int UrlMaxLength = 2048;

	[Token(Token = "0x4000D6C")]
	private const int SecretMaxLength = 4096;

	[Token(Token = "0x4000D6D")]
	private const float KeyWidth = 220f;

	[Token(Token = "0x4000D6E")]
	private const float DeleteSize = 44f;

	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0x0")]
	private static AdvancedSettings _draft;

	[Token(Token = "0x170001C1")]
	protected override string Title
	{
		[Token(Token = "0x600100E")]
		[Address(RVA = "0x57BCC80", Offset = "0x57BBC80", VA = "0x57BCC80", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.ToolsPopup.AdvancedConfigurationButton");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001C2")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600100F")]
		[Address(RVA = "0x57BCCE0", Offset = "0x57BBCE0", VA = "0x57BCCE0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_TitleIcon): clean
			return "gear";
		}
	}

	[Token(Token = "0x170001C3")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6001010")]
		[Address(RVA = "0x57BCD10", Offset = "0x57BBD10", VA = "0x57BCD10", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x170001C4")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001011")]
		[Address(RVA = "0x57BCD20", Offset = "0x57BBD20", VA = "0x57BCD20", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLength maxHeight;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(860.0);
			maxWidth = AottgUi.Percent(94.0);
			maxHeight = AottgUi.Percent(86.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, maxHeight, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x170001C5")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001012")]
		[Address(RVA = "0x57BCE10", Offset = "0x57BBE10", VA = "0x57BCE10", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x57BCEC0", Offset = "0x57BBEC0", VA = "0x57BCEC0")]
	public static void Open()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Open): clean
		GisketchOverlayManager __this;
		AdvancedSettings pSVar1;
		GisketchUIRoot pGVar2;

		pSVar1 = new AdvancedSettings();
		AottgAdvancedConfigurationDialog._draft = pSVar1;
		pSVar1 = AottgAdvancedConfigurationDialog._draft;
		if (pSVar1 != null) {
			pSVar1.Copy((BaseSetting)SettingsManager.AdvancedSettings);
			pGVar2 = AottgGisketchUiHost.Root;
			if (pGVar2 != null) {
				__this = pGVar2._Overlays_k__BackingField;
				if (__this == null) {
					return;
				}
				__this.ShowDialog("advanced-configuration", true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x57BCFD0", Offset = "0x57BBFD0", VA = "0x57BCFD0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildBody): 1 lines keep C-only constructs
		AdvancedSettings pSVar1;
		ListSetting<StringSetting> keys;
		ListSetting<StringSetting> values;
		AottgComponent component;
		Action<StringSetting> __this_00;

		pSVar1 = AottgAdvancedConfigurationDialog._draft;
		if (pSVar1 == null) {
			return;
		}
		component = AottgMultiplayerRows.Switch("advanced-configuration-services-enabled", "MainMenu.AdvancedConfigurationPopup.ServicesEnabled", pSVar1.ServicesEnabled, "MainMenu.AdvancedConfigurationPopup.ServicesEnabledTooltip", null);
		if (body != null) {
			body.Component(component);
			body.Separator(null, null);
			pSVar1 = AottgAdvancedConfigurationDialog._draft;
			if (pSVar1 != null) {
				keys = pSVar1.ServiceKeys;
				values = pSVar1.ServiceUrls;
				__this_00 = new Action<StringSetting>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_ValidateUrl);
				AottgAdvancedConfigurationDialog.BuildSection(body, "service", keys, values, "UrlHeader", 0, 0x800, __this_00, "AddServiceButton");
				body.Separator(null, null);
				body.TextKey("MainMenu.AdvancedConfigurationPopup.SecretsTitle", "changelogSectionHeader", "advanced-configuration-secrets-title", null, null);
				body.TextKey("MainMenu.AdvancedConfigurationPopup.SecretsHint", "stateMetaText", "advanced-configuration-secrets-hint", null, null);
				pSVar1 = AottgAdvancedConfigurationDialog._draft;
				if (pSVar1 != null) {
					AottgAdvancedConfigurationDialog.BuildSection(body, "secret", pSVar1.SecretKeys, pSVar1.SecretValues, "ValueHeader", 3, 0x1000, null, "AddSecretButton");
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x57BD2A0", Offset = "0x57BC2A0", VA = "0x57BD2A0")]
	private static void BuildSection(AottgUi body, string id, ListSetting<StringSetting> keys, ListSetting<StringSetting> values, string valueKey, AottgInputType valueType, int valueMaxLength, Action<StringSetting> validate, string addKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildSection): 7 lines keep C-only constructs
		List<object> pSVar1;
		ListSetting<StringSetting> values_00;
		int iVar2;
		ListSetting<StringSetting>* ppSVar3;
		int iVar4;
		AottgAdvancedConfigurationDialog.c__DisplayClass20_0 pGVar5;
		String pSVar6;
		StringSetting key;
		StringSetting value;
		Action<GisketchActionContext> __this;
		String id_00;
		GisketchNodeDefinition pGVar7;
		GisketchLayoutDefinition pGVar8;
		ListSetting<StringSetting> pSVar9;
		int local_64;
		String local_60;
		int local_54;
		AottgAdvancedConfigurationDialog.c__DisplayClass20_0 local_50;
		AottgUi local_48;
		ListSetting<StringSetting>* local_40;
		AottgAdvancedConfigurationDialog.c__DisplayClass20_0 local_38;

		local_60 = id;
		local_54 = valueType;
		if (Il2CppMethodInitialized_075453b8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_075453b8 = true;
		}
		pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgAdvancedConfigurationDialog.c__DisplayClass20_0));
		pGVar5 = new Object();
		if (pGVar5 != null) {
			local_38 = &pGVar5.fields;
			pGVar5.keys = keys;
			local_40 = &pGVar5.values;
			pGVar5.values = values;
			pGVar5.valueMaxLength = valueMaxLength;
			pSVar6 = String.Concat(local_60, "s");
			local_48 = body;
			AottgAdvancedConfigurationDialog.BuildHeader(body, pSVar6, valueKey);
			local_64 = 0;
			pSVar9 = pGVar5.keys;
			local_50 = pGVar5;
			if (pSVar9 != null) {
				while (true) {
					iVar2 = local_64;
					iVar4 = pSVar9.GetCount();
					if (!(iVar2 < iVar4)) break;
					pSVar6 = local_64.ToString();
					pSVar6 = String.Concat(local_60, "-", pSVar6);
					ppSVar3 = local_40;
					pSVar9 = local_38.keys;
					if ((pSVar9 == null) ||(pSVar1 = (List<object>)pSVar9._value, pSVar1 == null)) goto label_058bd662;
					values_00 = *local_40;
					key = pSVar1.get_Item(local_64);
					if ((*ppSVar3 == null) ||(pSVar1 = (List<object>)((*ppSVar3).fields)._value, pSVar1 == null)) goto label_058bd662;
					value = pSVar1.get_Item(local_64);
					pGVar5 = local_50;
					AottgAdvancedConfigurationDialog.BuildRow(local_48, pSVar6, pSVar9, values_00, key, value, local_54, local_50.valueMaxLength, validate);
					local_64 = local_64 + 1;
					pSVar9 = pGVar5.keys;
					if (pSVar9 == null) goto label_058bd662;
				}
				pSVar6 = String.Concat("MainMenu.AdvancedConfigurationPopup.", addKey);
				__this = new Action<GisketchActionContext>((object)local_50, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass20_0_BuildSection_b__0);
				id_00 = String.Concat("advanced-configuration-add-", local_60);
				if (local_48 != null) {
					pGVar7 = local_48.ButtonKey(1, pSVar6, __this, id_00, null, null, null);
					pGVar8 = AottgUi.Layout("Column", null, null, "FlexStart", null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					if (pGVar7 != null) {
						pGVar7.layout = pGVar8;
						return;
					}
				}
			}
		}
	label_058bd662: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x57BD960", Offset = "0x57BC960", VA = "0x57BD960", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Back", "overlay.close");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_Save);
		footer.PrimaryKey("Common.Save", __this_00);
		return;
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x57BD680", Offset = "0x57BC680", VA = "0x57BD680")]
	private static void BuildHeader(AottgUi body, string id, string valueKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildHeader): 2 lines keep C-only constructs
		AottgAdvancedConfigurationDialog.c__DisplayClass22_0 __this;
		Action<AottgUi> __this_00;
		String id_00;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgAdvancedConfigurationDialog.c__DisplayClass22_0));
		__this = new Object();
		if (__this != null) {
			__this.id = id;
			__this.valueKey = valueKey;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass22_0_BuildHeader_b__0);
			method_00 = (MethodInfo *)"advanced-configuration-";
			id_00 = String.Concat("advanced-configuration-", __this.id, "-header");
			layout = AottgAdvancedConfigurationDialog.RowLayout();
			if (body != null) {
				body.Panel("clear", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x57BD7C0", Offset = "0x57BC7C0", VA = "0x57BD7C0")]
	private static void BuildRow(AottgUi body, string id, ListSetting<StringSetting> keys, ListSetting<StringSetting> values, StringSetting key, StringSetting value, AottgInputType valueType, int valueMaxLength, Action<StringSetting> validate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$BuildRow): 2 lines keep C-only constructs
		AottgAdvancedConfigurationDialog.c__DisplayClass23_0 __this;
		Action<AottgUi> __this_00;
		String id_00;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgAdvancedConfigurationDialog.c__DisplayClass23_0));
		__this = new Object();
		if (__this != null) {
			__this.id = id;
			__this.key = key;
			__this.value = value;
			__this.valueType = valueType;
			__this.valueMaxLength = valueMaxLength;
			__this.validate = validate;
			__this.keys = keys;
			__this.values = values;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0_BuildRow_b__0);
			method_00 = (MethodInfo *)"advanced-configuration-";
			id_00 = String.Concat("advanced-configuration-", __this.id);
			layout = AottgAdvancedConfigurationDialog.RowLayout();
			if (body != null) {
				body.Panel("clear", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x57BDB20", Offset = "0x57BCB20", VA = "0x57BDB20")]
	private static void Input(AottgUi row, string id, StringSetting setting, AottgInputType type, int maxLength, GisketchLayoutDefinition layout, Action<StringSetting> validate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Input): 3 lines keep C-only constructs
		String placeholder;
		StringSetting pSVar1;
		AottgAdvancedConfigurationDialog.c__DisplayClass24_0 __this;
		String id_00;
		Action<GisketchActionContext> __this_00;
		Action<GisketchActionContext> __this_01;
		GisketchNodeDefinition pGVar2;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgAdvancedConfigurationDialog.c__DisplayClass24_0));
		__this = new Object();
		if (__this != null) {
			__this.setting = setting;
			__this.validate = validate;
			id_00 = String.Concat("advanced-configuration-", id);
			placeholder = (String)**(ulong*)(g_data_07556758 + 0xb8);
			__this_00 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0_Input_b__0);
			__this_01 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass24_0_Input_b__1);
			if (row != null) {
				pGVar2 = row.InputField(id_00, placeholder, type, "inputField", layout, null, __this_00, 0.05, maxLength, __this_01);
				pSVar1 = __this.setting;
				if ((pSVar1 != null) &&(pGVar2 != null)) {
					pGVar2.value = pSVar1._value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x57BDD00", Offset = "0x57BCD00", VA = "0x57BDD00")]
	private static void ValidateUrl(StringSetting url)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$ValidateUrl): clean
		bool bVar1;
		String pSVar2;
		Uri pSStack_18;

		pSStack_18 = null;
		if (url != null) {
			bVar1 = String.IsNullOrWhiteSpace(url._value);
			if (bVar1) {
				return;
			}
			pSVar2 = url._value;
			bVar1 = Uri.TryCreate(pSVar2, 1, ref pSStack_18);
			if (!bVar1) {
	label_058bde31: ;
				pSVar2 = "InvalidServiceUrl";
				pSVar2 = String.Concat("MainMenu.AdvancedConfigurationPopup.", pSVar2);
				pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
				AottgAdvancedConfigurationDialog.Toast(1, "warning", pSVar2);
				return;
			}
			if (pSStack_18 != null) {
				pSVar2 = pSStack_18.Scheme;
				bVar1 = (pSVar2 == Uri.UriSchemeHttp);
				if (bVar1) {
					return;
				}
				if (pSStack_18 != null) {
					pSVar2 = pSStack_18.Scheme;
					bVar1 = (pSVar2 == Uri.UriSchemeHttps);
					if (bVar1) {
						return;
					}
					goto label_058bde31;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x57BE030", Offset = "0x57BD030", VA = "0x57BE030")]
	private static void Save(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Save): clean
		AdvancedSettings pSVar1;
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar2;
		String pSVar3;

		pSVar1 = SettingsManager.AdvancedSettings;
		if (pSVar1 != null) {
			pSVar1.Copy((BaseSetting)AottgAdvancedConfigurationDialog._draft);
			pSVar1 = SettingsManager.AdvancedSettings;
			if (pSVar1 != null) {
				pSVar1.Save();
				pGVar2 = AottgGisketchUiHost.Root;
				if (pGVar2 != null) {
					__this = pGVar2._Overlays_k__BackingField;
					if (__this != null) {
						__this.CloseTop(true);
					}
					pSVar3 = "Saved";
					pSVar3 = String.Concat("MainMenu.AdvancedConfigurationPopup.", pSVar3);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar3 = Aottg2GisketchLocale.Text(pSVar3);
					AottgAdvancedConfigurationDialog.Toast(4, "checkmark", pSVar3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x57BE190", Offset = "0x57BD190", VA = "0x57BE190")]
	private static void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Refresh): clean
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar1;

		pGVar1 = AottgGisketchUiHost.Root;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		__this = pGVar1._Overlays_k__BackingField;
		if (__this == null) {
			return;
		}
		__this.RefreshDialogContent("advanced-configuration", false);
		return;
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x57BDF40", Offset = "0x57BCF40", VA = "0x57BDF40")]
	private static void Toast(AottgToastVariant variant, string icon, string content)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Toast): clean
		GisketchUIRoot __this;
		String title;
		AottgToastDefinition __this_00;

		__this = AottgGisketchUiHost.Root;
		title = Aottg2GisketchLocale.Text("MainMenu.ToolsPopup.AdvancedConfigurationButton");
		__this_00 = new AottgToastDefinition(variant, icon, title, content, "advanced-configuration");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.ShowToast(__this_00);
		return;
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x57BDA40", Offset = "0x57BCA40", VA = "0x57BDA40")]
	private static GisketchLayoutDefinition RowLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$RowLayout): clean
		GisketchLength width;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Row", null, "Center", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x57BDEC0", Offset = "0x57BCEC0", VA = "0x57BDEC0")]
	private static string Text(string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$Text): clean
		String pSVar1;

		pSVar1 = String.Concat("MainMenu.AdvancedConfigurationPopup.", item);
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x57BE1E0", Offset = "0x57BD1E0", VA = "0x57BE1E0")]
	public AottgAdvancedConfigurationDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c (Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c.

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass22_0$$.ctor: clean
	private void c__DisplayClass22_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass20_0$$<BuildSection>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass20_0__BuildSection_b__0(GisketchActionContext __)
	{
		int maxLength;
		Func<string, GisketchOverlayDefinition> pSVar1;
		GisketchManifestDefinition __this_00;
		GameObject __this_01;
		ListSetting<StringSetting> pSVar2;
		String pSVar3;
		GisketchOverlayManager __this_02;
		GisketchOverlayManager.OverlayInstance __this_03;
		GisketchBuildContext pGVar4;
		GisketchOverlayDefinition overlay;
		Transform parent;
		GisketchView inner;
		StringSetting pSVar5;
		GisketchUIRoot pGVar6;
		MethodInfo id;
		byte[] auVar8 = new byte[16];

		pSVar2 = this.keys;
		pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar5 = new StringSetting(pSVar3, 0x40);
		if (pSVar2 == null) {
	label_058be337: ;
			throw new NullReferenceException();
		}
		pSVar2.AddItem((BaseSetting)pSVar5);
		pSVar2 = this.values;
		pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		maxLength = this.valueMaxLength;
		pSVar5 = new StringSetting(pSVar3, maxLength);
		if (pSVar2 == null) goto label_058be337;
		pSVar2.AddItem((BaseSetting)pSVar5);
		pGVar6 = AottgGisketchUiHost.Root;
		id = (MethodInfo *)"advanced-configuration";
		if (pGVar6 == null) goto label_058be337;
		__this_02 = pGVar6._Overlays_k__BackingField;
		if (__this_02 == null) {
			return;
		}
		__this_03 = __this_02.FindDialog((String)id);
		if (__this_03 == null) {
			return;
		}
		pGVar4 = __this_02._context;
		if (pGVar4 == null) goto label_05356702;
		pSVar1 = pGVar4.DialogResolver;
		if (pSVar1 == null) {
	label_05356631: ;
			__this_00 = pGVar4.Manifest;
			if (__this_00 == null) {
				return;
			}
			overlay = __this_00.FindDialog((String)id);
			if (overlay == null) {
				return;
			}
		}
		else {
			auVar8 = (*(code)pSVar1.invoke_impl)(pSVar1.method_code,id,pSVar1.method);
			overlay = auVar8._0_8_;
			if (overlay == null) {
				pGVar4 = __this_02._context;
				if (pGVar4 == null) goto label_05356702;
				goto label_05356631;
			}
		}
		GisketchOverlayManager.DestroyObject(__this_03._ContentRoot_k__BackingField);
		__this_01 = __this_03.Host;
		if (__this_01 != null) {
			parent = __this_01.transform;
			pGVar4 = __this_02._context;
			inner = GisketchScreenBuilder.BuildOverlay(overlay, parent, pGVar4);
			if (inner != null) {
				GisketchOverlayManager.PrepareLayout(overlay, inner._Root_k__BackingField, __this_03.HostRect, null, false, false, 0.0);
				__this_03.ReplaceContent(inner);
				GisketchScreenBuilder.SettleLayout(__this_03.Host, 1);
				return;
			}
		}
	label_05356702: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass22_0$$<BuildHeader>b__0: clean
	private void c__DisplayClass22_0__BuildHeader_b__0(AottgUi row)
	{
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		String id;

		pSVar1 = String.Concat("advanced-configuration-", this.id, "-key-header");
		if (row != null) {
			pGVar2 = row.TextKey("MainMenu.AdvancedConfigurationPopup.KeyHeader", "stateMetaText", pSVar1, null, null);
			pGVar3 = AottgUi.Points(220.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar2 != null) {
				pGVar2.layout = pGVar4;
				pSVar1 = String.Concat("MainMenu.AdvancedConfigurationPopup.", this.valueKey);
				id = String.Concat("advanced-configuration-", this.id, "-value-header");
				pGVar2 = row.TextKey(pSVar1, "stateMetaText", id, null, null);
				pGVar3 = AottgUi.Points(0.0);
				pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, pGVar3, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				if (pGVar2 != null) {
					pGVar2.layout = pGVar4;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass23_0$$<BuildRow>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass23_0__BuildRow_b__0(AottgUi row)
	{
		int type;
		int maxLength;
		StringSetting pSVar1;
		String pSVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		MethodInfo pMVar5;
		Action<GisketchActionContext> __this_00;
		String id;
		String tooltip;
		GisketchNodeDefinition pGVar6;
		GisketchLength height;

		pSVar2 = String.Concat(this.id, "-key");
		pSVar1 = this.key;
		pGVar3 = AottgUi.Points(220.0);
		pMVar5 = null;
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		AottgAdvancedConfigurationDialog.Input(row, pSVar2, pSVar1, 0, 0x40, pGVar4, null);
		pSVar2 = String.Concat(this.id, "-value");
		pSVar1 = this.value;
		type = this.valueType;
		maxLength = this.valueMaxLength;
		pMVar5 = (MethodInfo)AottgUi.Points(0.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, (GisketchLength)pMVar5, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		AottgAdvancedConfigurationDialog.Input(row, pSVar2, pSVar1, type, maxLength, pGVar4, this.validate);
		pSVar2 = "trashcan";
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_c__DisplayClass23_0_BuildRow_b__1);
			this.__9__1 = __this_00;
		}
		id = String.Concat("advanced-configuration-", this.id, "-delete");
		tooltip = Aottg2GisketchLocale.Text("Common.Delete") ;
		if (row != null) {
			pGVar6 = row.IconButton(6, pSVar2, __this_00, id, tooltip, null);
			pGVar3 = AottgUi.Points(44.0);
			height = AottgUi.Points(44.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar6 != null) {
				pGVar6.layout = pGVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass23_0$$<BuildRow>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass23_0__BuildRow_b__1(GisketchActionContext __)
	{
		ListSetting<StringSetting> pSVar1;
		List<object> pSVar2;
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar3;

		if (Il2CppMethodInitialized_075453c6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_075453c6 = true;
		}
		pSVar1 = this.keys;
		if ((pSVar1 != null) &&(pSVar2 = (List<object>)pSVar1._value, pSVar2 != null)) {
			pSVar2.Remove((object)this.key);
			pSVar1 = this.values;
			if ((pSVar1 != null) &&(pSVar2 = (List<object>)pSVar1._value, pSVar2 != null)) {
				pSVar2.Remove((object)this.value);
				pGVar3 = AottgGisketchUiHost.Root;
				if (pGVar3 != null) {
					__this_00 = pGVar3._Overlays_k__BackingField;
					if (__this_00 == null) {
						return;
					}
					__this_00.RefreshDialogContent("advanced-configuration", false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass24_0$$<Input>b__0: clean
	private void c__DisplayClass24_0__Input_b__0(GisketchActionContext context)
	{
		StringSetting __this_00;
		String value;

		__this_00 = this.setting;
		value = context.InputText;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Value = (object)value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog.<>c__DisplayClass24_0$$<Input>b__1: clean
	private void c__DisplayClass24_0__Input_b__1(GisketchActionContext context)
	{
		StringSetting __this_00;
		Action<StringSetting> pSVar1;
		String value;

		__this_00 = this.setting;
		value = context.InputText;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Value = (object)value;
		pSVar1 = this.validate;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,this.setting,pSVar1.method);
		}
		return;
	}
}
