// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUiCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001AA")]
internal static class AottgSettingsUiCategory
{
	[Token(Token = "0x6000960")]
	[Address(RVA = "0x5D53000", Offset = "0x5D52000", VA = "0x5D53000")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUiCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Build): 2 lines keep C-only constructs
		String categoryId;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this;
		String* method_00;

		if (g_data_0754865c == false) {
			method_00 = &"ui";
			g_data_0754865c = true;
		}
		groups = AottgSettingsUiCategory.Groups();
		categoryId = "ui";
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, 0.0, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x5D54B70", Offset = "0x5D53B70", VA = "0x5D54B70")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUiCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsUiCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x5D530D0", Offset = "0x5D520D0", VA = "0x5D530D0")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUiCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Groups): 104 lines keep C-only constructs
		UISettings settings;
		String pSVar1;
		AottgSettingsGroup[] pGVar2;
		AottgComponent[] pGVar3;
		object pIVar4;
		object pIVar5;
		AottgSettingsGroup pGVar6;
		FloatSetting pSVar7;
		IntSetting pSVar8;
		BoolSetting pSVar9;
		MethodInfo pMVar10;
		ColorSetting setting;

		settings = SettingsManager.UISettings;
		pGVar2 = (AottgSettingsGroup[])new AottgSettingsGroup[6];
		pMVar10 = (MethodInfo)0x7;
		pGVar3 = (AottgComponent[])new AottgComponent[7];
		pIVar4 = (object)AottgSettingsUiCategory.Theme(settings);
		if (pGVar3 == null) goto label_05e54b6b;
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((int)pGVar3.Length == 0) goto label_05e54b57;
		pGVar3[0] = (AottgComponent)pIVar4;
		pSVar1 = "settings-ui-theme-scale";
		if (settings == null) {
			pSVar7 = null;
		}
		else {
			pSVar7 = settings.UIMasterScale;
		}
		pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-master-scale", "UI", "UIScale", pSVar7, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e54b57;
		pGVar3[1] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar7 = null;
		}
		else {
			pSVar7 = settings.HUDScale;
		}
		pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-hud-scale", "UI", "HUDScale", pSVar7, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((uint)pGVar3.Length < 3) goto label_05e54b57;
		pGVar3[2] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar7 = null;
		}
		else {
			pSVar7 = settings.MinimapScale;
		}
		pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-minimap-scale", "UI", "MinimapScale", pSVar7, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((pGVar3.Length & 0xfffffffc) == 0) goto label_05e54b57;
		pGVar3[3] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar7 = null;
		}
		else {
			pSVar7 = settings.StylebarScale;
		}
		pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-stylebar-scale", "UI", "StylebarScale", pSVar7, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((uint)pGVar3.Length < 5) goto label_05e54b57;
		pGVar3[4] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar7 = null;
		}
		else {
			pSVar7 = settings.KillScoreScale;
		}
		pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-kill-score-scale", "UI", "KillScoreScale", pSVar7, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((uint)pGVar3.Length < 6) goto label_05e54b57;
		pGVar3[5] = (AottgComponent)pIVar4;
		if (settings == null) {
			pMVar10 = null;
		}
		else {
			pMVar10 = (MethodInfo)settings.KillFeedScale;
		}
		pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-kill-feed-scale", "UI", "KillFeedScale", (FloatSetting)pMVar10, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((uint)pGVar3.Length < 7) goto label_05e54b57;
		pGVar3[6] = (AottgComponent)pIVar4;
		pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
		if (pGVar2 == null) {
	label_05e54b6b: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar2.Length == 0) goto label_05e54b57;
		pGVar2[0] = pGVar6;
		pGVar3 = (AottgComponent[])new AottgComponent[10];
		pSVar1 = "settings-ui-hud-feed";
		if (settings == null) {
			pSVar8 = null;
		}
		else {
			pSVar8 = settings.KDR;
		}
		pIVar4 = (object)AottgSettingsRows.Select("settings-ui-kdr", "UI", "KDR", pSVar8, null, null);
		if (pGVar3 == null) goto label_05e54b6b;
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((int)pGVar3.Length == 0) goto label_05e54b57;
		pGVar3[0] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar9 = null;
		}
		else {
			pSVar9 = settings.ShowStylebar;
		}
		pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-stylebar", "UI", "ShowStylebar", pSVar9, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e54b57;
		pGVar3[1] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar9 = null;
		}
		else {
			pSVar9 = settings.GameFeed;
		}
		pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-game-feed", "UI", "GameFeed", pSVar9, "GameFeedTooltip", null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((uint)pGVar3.Length < 3) goto label_05e54b57;
		pGVar3[2] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar9 = null;
		}
		else {
			pSVar9 = settings.FeedConsole;
		}
		pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-feed-console", "UI", "FeedConsole", pSVar9, "FeedConsoleTooltip", null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((pGVar3.Length & 0xfffffffc) == 0) goto label_05e54b57;
		pGVar3[3] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar9 = null;
		}
		else {
			pSVar9 = settings.JoinNotifications;
		}
		pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-join-notifications", "UI", "JoinNotifications", pSVar9, "JoinNotificationsTooltip", null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if ((uint)pGVar3.Length < 5) goto label_05e54b57;
		pGVar3[4] = (AottgComponent)pIVar4;
		if (settings == null) {
			pSVar9 = null;
		}
		else {
			pSVar9 = settings.ShowPing;
		}
		pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-ping", "UI", "ShowPing", pSVar9, null, null);
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e54b5c;
		}
		if (5 < (uint)pGVar3.Length) {
			pGVar3[5] = (AottgComponent)pIVar4;
			if (settings == null) {
				pSVar9 = null;
			}
			else {
				pSVar9 = settings.ShowGameTime;
			}
			pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-game-time", "UI", "ShowGameTime", pSVar9, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) {
	label_05e54b5c: ;
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
			}
			if (6 < (uint)pGVar3.Length) {
				pGVar3[6] = (AottgComponent)pIVar4;
				if (settings == null) {
					pSVar9 = null;
					pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-song-popup", "UI", "ShowSongPopup", null, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
					il2cpp_codegen_array_set_ref((Array)pGVar3, 7, pIVar4);
				}
				else {
					pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-song-popup", "UI", "ShowSongPopup", settings.ShowSongPopup, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
					il2cpp_codegen_array_set_ref((Array)pGVar3, 7, pIVar4);
					pSVar9 = settings.ShowEmotes;
				}
				pMVar10 = null;
				pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-emotes", "UI", "ShowEmotes", pSVar9, null, null);
				il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
				il2cpp_codegen_array_set_ref((Array)pGVar3, 8, pIVar4);
				if (settings != null) {
					pMVar10 = (MethodInfo)settings.Coordinates;
				}
				pSVar8 = null;
				pIVar4 = (object)AottgSettingsRows.Select("settings-ui-coordinates", "UI", "Coordinates", (IntSetting)pMVar10, null, null);
				il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
				il2cpp_codegen_array_set_ref((Array)pGVar3, 9, pIVar4);
				pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
				il2cpp_runtime_helper_02fe1060(pGVar2, 1, pGVar6);
				pGVar3 = (AottgComponent[])new AottgComponent[9];
				pSVar1 = "settings-ui-name-visibility";
				if (settings != null) {
					pSVar8 = settings.ShowNames;
				}
				pIVar4 = (object)AottgSettingsRows.Select("settings-ui-show-names", "UI", "ShowNames", pSVar8, null, null);
				if (pGVar3 != null) {
					il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
					il2cpp_codegen_array_set_ref((Array)pGVar3, 0, pIVar4);
					if (settings == null) {
						pSVar8 = null;
						pIVar4 = (object)AottgSettingsRows.Select("settings-ui-show-healthbars", "UI", "ShowHealthbars", null, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
					}
					else {
						pIVar4 = (object)AottgSettingsRows.Select("settings-ui-show-healthbars", "UI", "ShowHealthbars", settings.ShowHealthbars, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
						pSVar8 = settings.HumanNameDistance;
					}
					pIVar4 = (object)AottgSettingsRows.Input("settings-ui-human-name-distance", "UI", "HumanNameDistance", pSVar8, "HumanNameDistanceTooltip", null);
					il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
					il2cpp_codegen_array_set_ref((Array)pGVar3, 2, pIVar4);
					if (settings == null) {
						pSVar8 = null;
						pIVar4 = (object)AottgSettingsRows.Select("settings-ui-name-override-target", "UI", "NameOverrideTarget", null, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
					}
					else {
						pIVar4 = (object)AottgSettingsRows.Select("settings-ui-name-override-target", "UI", "NameOverrideTarget", settings.NameOverrideTarget, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
						pSVar8 = settings.NameBackgroundType;
					}
					pIVar4 = (object)AottgSettingsRows.Select("settings-ui-name-background-type", "UI", "NameBackgroundType", pSVar8, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
					il2cpp_codegen_array_set_ref((Array)pGVar3, 4, pIVar4);
					if (settings == null) {
						setting = null;
						pIVar4 = (object)AottgSettingsRows.ToggleColor("settings-ui-force-name-color", "UI", "ForceNameColor", null, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
					}
					else {
						pIVar4 = (object)AottgSettingsRows.ToggleColor("settings-ui-force-name-color", "UI", "ForceNameColor", settings.ForceNameColor, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
						setting = settings.ForceBackgroundColor;
					}
					pIVar4 = (object)AottgSettingsRows.Color("settings-ui-force-background-color", "UI", "ForceBackgroundColor", setting, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
					il2cpp_codegen_array_set_ref((Array)pGVar3, 6, pIVar4);
					if (settings == null) {
						pMVar10 = null;
						pIVar4 = (object)AottgSettingsRows.Input("settings-ui-min-name-length", "UI", "MinNameLength", null, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 7, pIVar4);
					}
					else {
						pIVar4 = (object)AottgSettingsRows.Input("settings-ui-min-name-length", "UI", "MinNameLength", settings.MinNameLength, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 7, pIVar4);
						pMVar10 = (MethodInfo)settings.MaxNameLength;
					}
					pSVar8 = null;
					pIVar4 = (object)AottgSettingsRows.Input("settings-ui-max-name-length", "UI", "MaxNameLength", (IntSetting)pMVar10, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
					il2cpp_codegen_array_set_ref((Array)pGVar3, 8, pIVar4);
					pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
					il2cpp_runtime_helper_02fe1060(pGVar2, 2, pGVar6);
					pGVar3 = (AottgComponent[])new AottgComponent[7];
					pSVar1 = "settings-ui-crosshair";
					if (settings != null) {
						pSVar8 = settings.CrosshairStyle;
					}
					pIVar4 = (object)AottgSettingsRows.Dropdown("settings-ui-crosshair-style", "UI", "CrosshairStyle", pSVar8, null, null);
					if (pGVar3 != null) {
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 0, pIVar4);
						if (settings == null) {
							pSVar7 = null;
							pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-crosshair-scale", "UI", "CrosshairScale", null, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
						}
						else {
							pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-crosshair-scale", "UI", "CrosshairScale", settings.CrosshairScale, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
							pSVar7 = settings.CrosshairTextScale;
						}
						pIVar4 = (object)AottgSettingsRows.Slider("settings-ui-crosshair-text-scale", "UI", "CrosshairTextScale", pSVar7, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 2, pIVar4);
						if (settings == null) {
							pSVar9 = null;
							pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-crosshair-distance", "UI", "ShowCrosshairDistance", null, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
						}
						else {
							pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-crosshair-distance", "UI", "ShowCrosshairDistance", settings.ShowCrosshairDistance, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
							pSVar9 = settings.ShowCrosshairArrows;
						}
						pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-crosshair-arrows", "UI", "ShowCrosshairArrows", pSVar9, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 4, pIVar4);
						if (settings == null) {
							pMVar10 = null;
							pIVar4 = (object)AottgSettingsRows.Input("settings-ui-crosshair-skin", "UI", "CrosshairSkin", null, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
						}
						else {
							pIVar4 = (object)AottgSettingsRows.Input("settings-ui-crosshair-skin", "UI", "CrosshairSkin", settings.CrosshairSkin, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
							pMVar10 = (MethodInfo)settings.Speedometer;
						}
						pSVar9 = null;
						pIVar4 = (object)AottgSettingsRows.Select("settings-ui-speedometer", "UI", "Speedometer", (IntSetting)pMVar10, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
						il2cpp_codegen_array_set_ref((Array)pGVar3, 6, pIVar4);
						pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
						il2cpp_runtime_helper_02fe1060(pGVar2, 3, pGVar6);
						pGVar3 = (AottgComponent[])new AottgComponent[7];
						pSVar1 = "settings-ui-chat";
						if (settings != null) {
							pSVar9 = settings.ShowChatTimestamp;
						}
						pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-chat-timestamp", "UI", "ShowChatTimestamp", pSVar9, null, null);
						if (pGVar3 != null) {
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 0, pIVar4);
							if (settings == null) {
								pSVar8 = null;
								pIVar4 = (object)AottgSettingsRows.Input("settings-ui-chat-width", "UI", "ChatWidth", null, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
							}
							else {
								pIVar4 = (object)AottgSettingsRows.Input("settings-ui-chat-width", "UI", "ChatWidth", settings.ChatWidth, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
								pSVar8 = settings.ChatHeight;
							}
							pIVar4 = (object)AottgSettingsRows.Input("settings-ui-chat-height", "UI", "ChatHeight", pSVar8, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 2, pIVar4);
							if (settings == null) {
								pSVar8 = null;
								pIVar4 = (object)AottgSettingsRows.Input("settings-ui-chat-font-size", "UI", "ChatFontSize", null, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
							}
							else {
								pIVar4 = (object)AottgSettingsRows.Input("settings-ui-chat-font-size", "UI", "ChatFontSize", settings.ChatFontSize, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
								pSVar8 = settings.ChatScrollSensitivity;
							}
							pIVar4 = (object)AottgSettingsRows.Input("settings-ui-chat-scroll-sensitivity", "UI", "ChatScrollSensitivity", pSVar8, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 4, pIVar4);
							if (settings == null) {
								pMVar10 = null;
								pIVar4 = (object)AottgSettingsRows.Color("settings-ui-chat-background-color", "UI", "ChatBackgroundColor", null, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
							}
							else {
								pIVar4 = (object)AottgSettingsRows.Color("settings-ui-chat-background-color", "UI", "ChatBackgroundColor", settings.ChatBackgroundColor, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
								pMVar10 = (MethodInfo)settings.ChatCLErrors;
							}
							pSVar8 = null;
							pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-chat-cl-errors", "UI", "ChatCLErrors", (BoolSetting)pMVar10, "ChatCLErrorsTooltip", null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 6, pIVar4);
							pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
							il2cpp_runtime_helper_02fe1060(pGVar2, 4, pGVar6);
							pGVar3 = (AottgComponent[])new AottgComponent[4];
							pSVar1 = "settings-ui-misc";
							if (settings != null) {
								pSVar8 = settings.KillFeedCount;
							}
							pIVar4 = (object)AottgSettingsRows.Input("settings-ui-kill-feed-count", "UI", "KillFeedCount", pSVar8, "KillFeedCountTooltip", null);
							if (pGVar3 != null) {
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 0, pIVar4);
								if (settings == null) {
									pSVar9 = null;
									pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-fade-main-menu", "UI", "FadeMainMenu", null, "FadeMainMenuTooltip", null);
									il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
									il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
								}
								else {
									pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-fade-main-menu", "UI", "FadeMainMenu", settings.FadeMainMenu, "FadeMainMenuTooltip", null);
									il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
									il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
									pSVar9 = settings.FadeLoadscreen;
								}
								pMVar10 = null;
								pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-fade-loadscreen", "UI", "FadeLoadscreen", pSVar9, "FadeLoadscreenTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 2, pIVar4);
								if (settings != null) {
									pMVar10 = (MethodInfo)settings.ShowInterpolation;
								}
								pIVar4 = (object)AottgSettingsRows.Switch("settings-ui-show-interpolation", "UI", "ShowInterpolation", (BoolSetting)pMVar10, "ShowInterpolationTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
								pGVar6 = il2cpp_codegen_object_new(typeof(AottgSettingsGroup)) ;
								pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
								il2cpp_runtime_helper_02fe1060(pGVar2, 5, pGVar6);
								return pGVar2;
							}
						}
					}
				}
				goto label_05e54b6b;
			}
		}
	label_05e54b57: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x5D54B90", Offset = "0x5D53B90", VA = "0x5D54B90")]
	private static AottgComponent Theme(UISettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUiCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Theme): 1 lines keep C-only constructs
		object @object;
		String item;
		String sub;
		AottgStringSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		String[] values;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c_StaticFields pGVar1;
		Converter<TInput, TOutput> __this_00;
		String[] localizedText;
		AottgSettingOption[] pGVar2;
		AottgSettingRow __this_01;
		MethodInfo method_00;
		StringSetting setting;

		method_00 = (MethodInfo *)"settings-ui-theme";
		sub = "UI";
		item = "Theme";
		if (settings == null) {
			setting = null;
		}
		else {
			setting = settings.UITheme;
		}
		__this = new AottgStringSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor((String)method_00, sub, item, 2, (IAottgSettingAdapter)__this, null, null);
		values = AottgSettingsRows.SafeThemes();
		if ((typeof(AottgSettingsUiCategory.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar1 = typeof(AottgSettingsUiCategory.c).static_fields;
			__this_00 = (Converter<TInput, TOutput>)pGVar1.__9__3_0;
		}
		else {
			pGVar1 = typeof(AottgSettingsUiCategory.c).static_fields;
			__this_00 = (Converter<TInput, TOutput>)pGVar1.__9__3_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgSettingsUiCategory.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgSettingsUiCategory.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Converter<string, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c_Theme_b__3_0);
			pGVar1 = typeof(AottgSettingsUiCategory.c).static_fields;
			pGVar1.__9__3_0 = (Converter<string, string>)__this_00;
		}
		localizedText =(String[])Array.ConvertAll<string, string>((Object[])values, __this_00);
		pGVar2 = AottgSettingOption.LocalizedStringOptions(values, localizedText);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.Options = pGVar2;
		__this_01 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_01;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUiCategory.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgSettingsUiCategory.c();
		AottgSettingsUiCategory.c.__9 =(AottgSettingsUiCategory.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory.<>c$$<Theme>b__3_0: clean
	private String c__Theme_b__3_0(String theme)
	{
		String pSVar1;

		pSVar1 = String.Concat("Theme", theme);
		pSVar1 = UIManager.GetLocale("SettingsPopup", "UI", pSVar1, "", theme);
		return pSVar1;
	}
}
