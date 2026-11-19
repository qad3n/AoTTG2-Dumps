// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200033B")]
[AottgScreen("settings", TitleKey = "SettingsPopup.Title", SearchTitleKey = "Common.Settings", SearchGroup = "main-menu", BackScreenId = "main-menu", BackActionId = "settings.back")]
public sealed class AottgSettingsScreen : AottgScreen
{
	[Token(Token = "0x400102C")]
	public const string Id = "settings";

	[Token(Token = "0x17000236")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001443")]
		[Address(RVA = "0x58108F0", Offset = "0x580F8F0", VA = "0x58108F0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x17000237")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001444")]
		[Address(RVA = "0x5810920", Offset = "0x580F920", VA = "0x5810920", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x58109F0", Offset = "0x580F9F0", VA = "0x58109F0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Build): 3 lines keep C-only constructs
		AottgScreenSection[] sections;
		AottgBrushSidePanelOption[] footerOptions;
		Action<AottgUi> __this_00;
		AottgScreenWithBrushSidePanel __this_01;
		String* ppSVar1;

		if (Il2CppMethodInitialized_075456b6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			ppSVar1 = &"settings-screen";
			Il2CppMethodInitialized_075456b6 = true;
			this = (AottgSettingsScreen)ppSVar1;
		}
		sections = AottgSettingsScreen.Sections();
		footerOptions = AottgSettingsScreen.SettingsFooterOptions();
		__this_00 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildFooter);
		__this_01 = new AottgScreenWithBrushSidePanel("Common.Settings", sections, 1, footerOptions, "settings-screen", __this_00, false, true, true, 1);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_01);
		return;
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x5810AF0", Offset = "0x580FAF0", VA = "0x5810AF0")]
	private static AottgScreenSection[] Sections()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Sections): 22 lines keep C-only constructs
		AottgScreenSection[] pGVar1;
		Action<T1, T2> pSVar2;
		AottgScreenSection local_218;

		if (Il2CppMethodInitialized_075456b7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildUi) ;
			Il2CppMethodInitialized_075456b7 = true;
		}
		pGVar1 = (AottgScreenSection[])new AottgScreenSection[7];
		pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGeneral);
		local_218._buildContent = null;
		local_218._buildHeaderActions = null;
		local_218.Id = null;
		local_218.Text = null;
		local_218.TextKey = null;
		local_218.Icon = null;
		local_218.Keywords = null;
		local_218.AutoAddKeywords = false;
		local_218.HideSearch = false;
		local_218.HideHeader = false;
		local_218._59_5_ = 0;
		local_218 = new AottgScreenSection("general", "SettingsPopup.Top.GeneralButton", "gear", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, null, false, false);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length != 0) {
			pGVar1[0].Keywords = local_218.Keywords;
			pGVar1[0].AutoAddKeywords = local_218.AutoAddKeywords;
			pGVar1[0].HideSearch = local_218.HideSearch;
			pGVar1[0].HideHeader = local_218.HideHeader;
			*(undefined5)&pGVar1[0].field_0x3b = local_218._59_5_;
			pGVar1[0].TextKey = local_218.TextKey;
			pGVar1[0].Icon = local_218.Icon;
			pGVar1[0].Id = local_218.Id;
			pGVar1[0].Text = local_218.Text;
			pGVar1[0]._buildContent = local_218._buildContent;
			pGVar1[0]._buildHeaderActions = local_218._buildHeaderActions;
			pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSound);
			local_218._buildContent = null;
			local_218._buildHeaderActions = null;
			local_218.Id = null;
			local_218.Text = null;
			local_218.TextKey = null;
			local_218.Icon = null;
			local_218.Keywords = null;
			local_218.AutoAddKeywords = false;
			local_218.HideSearch = false;
			local_218.HideHeader = false;
			local_218._59_5_ = 0;
			local_218 = new AottgScreenSection("sound", "SettingsPopup.Top.SoundButton", "audioOn", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, null, false, false);
			if ((pGVar1.Length & 0xfffffffe) != 0) {
				pGVar1[1].Keywords = local_218.Keywords;
				pGVar1[1].AutoAddKeywords = local_218.AutoAddKeywords;
				pGVar1[1].HideSearch = local_218.HideSearch;
				pGVar1[1].HideHeader = local_218.HideHeader;
				*(undefined5)&pGVar1[1].field_0x3b = local_218._59_5_;
				pGVar1[1].TextKey = local_218.TextKey;
				pGVar1[1].Icon = local_218.Icon;
				pGVar1[1].Id = local_218.Id;
				pGVar1[1].Text = local_218.Text;
				pGVar1[1]._buildContent = local_218._buildContent;
				pGVar1[1]._buildHeaderActions = local_218._buildHeaderActions;
				pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGraphics);
				local_218._buildContent = null;
				local_218._buildHeaderActions = null;
				local_218.Id = null;
				local_218.Text = null;
				local_218.TextKey = null;
				local_218.Icon = null;
				local_218.Keywords = null;
				local_218.AutoAddKeywords = false;
				local_218.HideSearch = false;
				local_218.HideHeader = false;
				local_218._59_5_ = 0;
				local_218 = new AottgScreenSection("graphics", "SettingsPopup.Top.GraphicsButton", "contrast", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, null, false, false);
				if (2 < (uint)pGVar1.Length) {
					pGVar1[2].Keywords = local_218.Keywords;
					pGVar1[2].AutoAddKeywords = local_218.AutoAddKeywords;
					pGVar1[2].HideSearch = local_218.HideSearch;
					pGVar1[2].HideHeader = local_218.HideHeader;
					*(undefined5)&pGVar1[2].field_0x3b = local_218._59_5_;
					pGVar1[2].TextKey = local_218.TextKey;
					pGVar1[2].Icon = local_218.Icon;
					pGVar1[2].Id = local_218.Id;
					pGVar1[2].Text = local_218.Text;
					pGVar1[2]._buildContent = local_218._buildContent;
					pGVar1[2]._buildHeaderActions = local_218._buildHeaderActions;
					pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildUi);
					local_218._buildContent = null;
					local_218._buildHeaderActions = null;
					local_218.Id = null;
					local_218.Text = null;
					local_218.TextKey = null;
					local_218.Icon = null;
					local_218.Keywords = null;
					local_218.AutoAddKeywords = false;
					local_218.HideSearch = false;
					local_218.HideHeader = false;
					local_218._59_5_ = 0;
					local_218 = new AottgScreenSection("ui", "SettingsPopup.Top.UIButton", "menuList", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, null, false, false);
					if ((pGVar1.Length & 0xfffffffc) != 0) {
						pGVar1[3].Keywords = local_218.Keywords;
						pGVar1[3].AutoAddKeywords = local_218.AutoAddKeywords;
						pGVar1[3].HideSearch = local_218.HideSearch;
						pGVar1[3].HideHeader = local_218.HideHeader;
						*(undefined5)&pGVar1[3].field_0x3b = local_218._59_5_;
						pGVar1[3].TextKey = local_218.TextKey;
						pGVar1[3].Icon = local_218.Icon;
						pGVar1[3].Id = local_218.Id;
						pGVar1[3].Text = local_218.Text;
						pGVar1[3]._buildContent = local_218._buildContent;
						pGVar1[3]._buildHeaderActions = local_218._buildHeaderActions;
						pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildKeybinds);
						local_218._buildContent = null;
						local_218._buildHeaderActions = null;
						local_218.Id = null;
						local_218.Text = null;
						local_218.TextKey = null;
						local_218.Icon = null;
						local_218.Keywords = null;
						local_218.AutoAddKeywords = false;
						local_218.HideSearch = false;
						local_218.HideHeader = false;
						local_218._59_5_ = 0;
						local_218 = new AottgScreenSection("keybinds", "SettingsPopup.Top.KeybindsButton", "buttonA", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, null, false, false);
						if (4 < (uint)pGVar1.Length) {
							pGVar1[4].Keywords = local_218.Keywords;
							pGVar1[4].AutoAddKeywords = local_218.AutoAddKeywords;
							pGVar1[4].HideSearch = local_218.HideSearch;
							pGVar1[4].HideHeader = local_218.HideHeader;
							*(undefined5)&pGVar1[4].field_0x3b = local_218._59_5_;
							pGVar1[4].TextKey = local_218.TextKey;
							pGVar1[4].Icon = local_218.Icon;
							pGVar1[4].Id = local_218.Id;
							pGVar1[4].Text = local_218.Text;
							pGVar1[4]._buildContent = local_218._buildContent;
							pGVar1[4]._buildHeaderActions = local_218._buildHeaderActions;
							pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSkins);
							local_218._buildContent = null;
							local_218._buildHeaderActions = null;
							local_218.Id = null;
							local_218.Text = null;
							local_218.TextKey = null;
							local_218.Icon = null;
							local_218.Keywords = null;
							local_218.AutoAddKeywords = false;
							local_218.HideSearch = false;
							local_218.HideHeader = false;
							local_218._59_5_ = 0;
							local_218 = new AottgScreenSection("skins", "SettingsPopup.Top.SkinsButton", "shoppingBasket", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, null, false, false);
							if (5 < (uint)pGVar1.Length) {
								pGVar1[5].Keywords = local_218.Keywords;
								pGVar1[5].AutoAddKeywords = local_218.AutoAddKeywords;
								pGVar1[5].HideSearch = local_218.HideSearch;
								pGVar1[5].HideHeader = local_218.HideHeader;
								*(undefined5)&pGVar1[5].field_0x3b = local_218._59_5_;
								pGVar1[5].TextKey = local_218.TextKey;
								pGVar1[5].Icon = local_218.Icon;
								pGVar1[5].Id = local_218.Id;
								pGVar1[5].Text = local_218.Text;
								pGVar1[5]._buildContent = local_218._buildContent;
								pGVar1[5]._buildHeaderActions = local_218._buildHeaderActions;
								pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildAbility);
								local_218._buildContent = null;
								local_218._buildHeaderActions =null;
								local_218.Id = null;
								local_218.Text = null;
								local_218.TextKey = null;
								local_218.Icon = null;
								local_218.Keywords = null;
								local_218.AutoAddKeywords = false;
								local_218.HideSearch = false;
								local_218.HideHeader = false;
								local_218._59_5_ = 0;
								local_218 = new AottgScreenSection("ability", "SettingsPopup.Top.AbilityButton", "target", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, null, false, false);
								if (6 < (uint)pGVar1.Length) {
									pGVar1[6].Keywords = local_218.Keywords;
									pGVar1[6].AutoAddKeywords = local_218.AutoAddKeywords;
									pGVar1[6].HideSearch = local_218.HideSearch;
									pGVar1[6].HideHeader = local_218.HideHeader;
									*(undefined5)&pGVar1[6].field_0x3b = local_218._59_5_;
									pGVar1[6].TextKey = local_218.TextKey;
									pGVar1[6].Icon = local_218.Icon;
									pGVar1[6].Id = local_218.Id;
									pGVar1[6].Text = local_218.Text;
									pGVar1[6]._buildContent = local_218._buildContent;
									pGVar1[6]._buildHeaderActions = local_218._buildHeaderActions;
									return pGVar1;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x58115A0", Offset = "0x58105A0", VA = "0x58115A0")]
	private static AottgScreenSection Category(string id, string icon, string textKey, Action<AottgUi, AottgScreenSectionContext> build)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Category): 1 lines keep C-only constructs
		__return_storage_ptr__.Keywords = null;
		__return_storage_ptr__.AutoAddKeywords = false;
		__return_storage_ptr__.HideSearch = false;
		__return_storage_ptr__.HideHeader = false;
		*(undefined5)&__return_storage_ptr__.field_0x3b = 0;
		__return_storage_ptr__.TextKey = null;
		__return_storage_ptr__.Icon = null;
		__return_storage_ptr__.Id = null;
		__return_storage_ptr__.Text = null;
		__return_storage_ptr__._buildContent = null;
		__return_storage_ptr__._buildHeaderActions =null;
		__return_storage_ptr__ = new AottgScreenSection(id, textKey, icon, build, null, true, null, false, false);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x58115E0", Offset = "0x58105E0", VA = "0x58115E0")]
	internal static bool RefreshCategory(GisketchUIRoot root, string categoryId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$RefreshCategory): 14 lines keep C-only constructs
		AottgSettingsScreen.c__DisplayClass8_0* targetAddress;
		GisketchUIRoot pGVar1;
		GisketchNodeDefinition replacement;
		Action<AottgUi, AottgScreenSectionContext> pSVar2;
		Action<AottgUi, AottgScreenSectionContext> pSVar3;
		String pSVar4;
		String pSVar5;
		bool bVar6;
		bool bVar7;
		undefined5 uVar8;
		bool bVar9;
		AottgSettingsScreen.c__DisplayClass8_0 pGVar10;
		AottgScreenSection[] pGVar11;
		AottgSettingsScreen.c__DisplayClass8_1 __this;
		String pSVar12;
		Action<AottgUi> __this_00;
		String pSVar13;
		GisketchNodeDefinition[] pGVar14;
		GameObject root_00;
		GisketchNodeRefreshOptions __this_01;
		int order;
		MethodInfo method_00;
		AottgScreenSection pGVar15;
		ulong uVar16;
		AottgScreenSectionContext local_58;

		if (Il2CppMethodInitialized_075456b8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1_RefreshCategory_b__0) ;
			Il2CppMethodInitialized_075456b8 = true;
		}
		pGVar10 = new AottgSettingsScreen.c__DisplayClass8_0();
		if (pGVar10 == null) {
	label_05911979: ;
			throw new NullReferenceException();
		}
		pGVar10.root = root;
		pGVar1 = pGVar10.root;
		bVar9 = ((Object)pGVar1 == null);
		if ((!bVar9) &&(method_00 = (MethodInfo)categoryId, bVar9 = String.IsNullOrEmpty(categoryId) , !bVar9)) {
			pGVar11 = AottgSettingsScreen.Sections();
			if (pGVar11 == null) goto label_05911979;
			if (0 < (int)pGVar11.Length) {
				pGVar15 = pGVar11.m_Items;
				order = 0x1e;
				uVar16 = 0;
	label_05911710: ;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsScreen.c__DisplayClass8_1));
				__this = new Object();
				if (__this == null) goto label_05911979;
				targetAddress = &__this.CS___8__locals1;
				__this.CS___8__locals1 = pGVar10;
				if (uVar16 < (uint)pGVar11.Length) {
					pSVar2 = pGVar15._buildContent;
					pSVar3 = pGVar15._buildHeaderActions;
					pSVar12 = pGVar15.Id;
					pSVar13 = pGVar15.Text;
					pSVar4 = pGVar15.TextKey;
					pSVar5 = pGVar15.Icon;
					bVar9 = pGVar15.AutoAddKeywords;
					bVar6 = pGVar15.HideSearch;
					bVar7 = pGVar15.HideHeader;
					uVar8 = *(undefined5)&pGVar15.field_0x3b;
					__this.section.Keywords = pGVar15.Keywords;
					__this.section.AutoAddKeywords = bVar9;
					__this.section.HideSearch = bVar6;
					__this.section.HideHeader = bVar7;
					*(undefined5)&__this.section.field_0x3b = uVar8;
					__this.section.TextKey = pSVar4;
					__this.section.Icon = pSVar5;
					__this.section.Id = pSVar12;
					__this.section.Text = pSVar13;
					__this.section._buildContent = pSVar2;
					__this.section._buildHeaderActions = pSVar3;
					bVar9 = String.Equals(__this.section.Id, categoryId, 5);
					if (!bVar9) {
						uVar16 = uVar16 + 1;
						order = order + 10;
						pGVar15 = pGVar15 + 1;
						if ((long)(int)pGVar11.Length <= (long)uVar16) {
							return false;
						}
						goto label_05911710;
					}
					local_58._SectionId_k__BackingField = null;
					local_58._SectionTitle_k__BackingField = null;
					local_58._group = null;
					local_58._order = 0;
					local_58._12_4_ = 0;
					local_58 = new AottgScreenSectionContext("settings-screen", __this.section.Id, __this.section.Text, order);
					__this.context._SectionId_k__BackingField = local_58._SectionId_k__BackingField;
					__this.context._SectionTitle_k__BackingField = local_58._SectionTitle_k__BackingField;
					__this.context._group = local_58._group;
					__this.context._order = local_58._order;
					*(uint)&__this.context.field_0xc = local_58._12_4_;
					pGVar10 = __this.CS___8__locals1;
					if (pGVar10 == null) goto label_05911979;
					pGVar1 = pGVar10.root;
					pSVar12 = AottgSettingsCategoryPage.ContentId(__this.section.Id);
					__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1_RefreshCategory_b__0);
					pSVar13 = AottgSettingsCategoryPage.OwnerPrefix(__this.section.Id);
					if (pGVar1 == null) goto label_05911979;
					pGVar14 = pGVar1.BuildDetachedNodes(pSVar12, __this_00, pSVar13);
					if (pGVar14 == null) {
						return false;
					}
					if (pGVar14.Length == 0) {
						return false;
					}
					if ((int)pGVar14.Length == 0) goto label_0591197e;
					if (pGVar14[0] == null) {
						return false;
					}
					if ((*targetAddress == null) ||(pGVar1 = ((*targetAddress).fields).root, pGVar1 == null)) goto label_05911979;
					root_00 = pGVar1.gameObject;
					if ((int)pGVar14.Length != 0) {
						bVar9 = AottgLazySidePanelSectionsRuntime.Invalidate(root_00, "settings-screen", __this.section.Id, pGVar14[0]);
						if (bVar9) {
							return true;
						}
						if (*targetAddress == null) goto label_05911979;
						pGVar1 = ((*targetAddress).fields).root;
						pSVar12 = AottgSettingsCategoryPage.ContentId(__this.section.Id);
						if ((int)pGVar14.Length != 0) {
							replacement = pGVar14[0];
							__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchNodeRefreshOptions));
							__this_01 = new GisketchNodeRefreshOptions();
							if (__this_01 != null) {
								__this_01.PreserveScroll = true;
								__this_01.PreserveFocus = true;
								__this_01.SettleLayout = true;
								if (pGVar1 != null) {
									bVar9 = pGVar1.RefreshNode(pSVar12, replacement, __this_01);
									return bVar9;
								}
							}
							goto label_05911979;
						}
					}
				}
	label_0591197e: ;
				throw new IndexOutOfRangeException();
			}
		}
		return false;
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x58119B0", Offset = "0x58109B0", VA = "0x58119B0")]
	internal static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$SyncState): clean
		AottgSettingsGeneralCategory.SyncState(root);
		AottgSettingsSoundCategory.SyncState(root);
		AottgSettingsGraphicsCategory.SyncState(root);
		AottgSettingsUiCategory.SyncState(root);
		AottgSettingsKeybindsCategory.SyncState(root);
		AottgSettingsSkinsCategory.SyncState(root);
		AottgSettingsAbilityCategory.SyncState(root);
		return;
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x5811A30", Offset = "0x5810A30", VA = "0x5811A30")]
	private static void BuildGeneral(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildGeneral): clean
		AottgSettingsGeneralCategory.Build(content, context);
		return;
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x5811A40", Offset = "0x5810A40", VA = "0x5811A40")]
	private static void BuildSound(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildSound): clean
		AottgSettingsSoundCategory.Build(content, context);
		return;
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x5811A50", Offset = "0x5810A50", VA = "0x5811A50")]
	private static void BuildGraphics(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildGraphics): clean
		AottgSettingsGraphicsCategory.Build(content, context);
		return;
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x5811A60", Offset = "0x5810A60", VA = "0x5811A60")]
	private static void BuildUi(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildUi): clean
		AottgSettingsUiCategory.Build(content, context);
		return;
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x5811A70", Offset = "0x5810A70", VA = "0x5811A70")]
	private static void BuildKeybinds(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildKeybinds): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075456ba == false) {
			Il2CppMethodInitialized_075456ba = true;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgSettingsKeybindsCategory.Build(content, context);
			return;
		}
		AottgSettingsKeybindsCategory.Build(content, context);
		return;
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x5811AE0", Offset = "0x5810AE0", VA = "0x5811AE0")]
	private static void BuildSkins(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildSkins): clean
		AottgSettingsSkinsCategory.Build(content, context);
		return;
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x5811AF0", Offset = "0x5810AF0", VA = "0x5811AF0")]
	private static void BuildAbility(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildAbility): clean
		AottgSettingsAbilityCategory.Build(content, context);
		return;
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x5811B00", Offset = "0x5810B00", VA = "0x5811B00")]
	private static void BuildFooter(AottgUi footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildFooter): clean
		GisketchNodeDefinition pGVar1;

		AottgSettingsScreen.FooterButton(footer, 1, "Common.Default", "settings.default", "settings-footer-default", "return");
		AottgSettingsScreen.FooterButton(footer, 1, "Common.Load", "settings.load", "settings-footer-load", "import");
		pGVar1 = AottgSettingsScreen.FooterButton(footer, 0, "Common.Save", "settings.save", "settings-footer-save", "save");
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.style = "brushSidePanelFooterPrimaryButton";
		return;
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x5811380", Offset = "0x5810380", VA = "0x5811380")]
	private static AottgBrushSidePanelOption[] SettingsFooterOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$SettingsFooterOptions): 4 lines keep C-only constructs
		AottgBrushSidePanelOption[] pGVar1;
		String tooltip;
		AottgBrushSidePanelOption local_a8;
		AottgBrushSidePanelOption local_58;

		pGVar1 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[2];
		tooltip = AottgSearchShortcuts.CurrentScreenTooltip();
		local_58.Searchable = false;
		local_58._49_7_ = 0;
		local_58.Tooltip = null;
		local_58.ActionId = null;
		local_58.Action = null;
		local_58.TextKey = null;
		local_58.Icon = null;
		local_58._text = null;
		local_58.Id = null;
		local_58.StackedOptions = null;
		local_58 = new AottgBrushSidePanelOption("search", "Common.Search", "dialog.aottg-settings-search-palette", "zoom", false, tooltip);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length != 0) {
			pGVar1[0].StackedOptions = local_58.StackedOptions;
			pGVar1[0].Searchable = local_58.Searchable;
			*(undefined7)&pGVar1[0].field_0x31 = local_58._49_7_;
			pGVar1[0].Tooltip = local_58.Tooltip;
			pGVar1[0].ActionId = local_58.ActionId;
			pGVar1[0].Action = local_58.Action;
			pGVar1[0].TextKey = local_58.TextKey;
			pGVar1[0].Icon = local_58.Icon;
			pGVar1[0]._text = local_58._text;
			pGVar1[0].Id = local_58.Id;
			local_a8.Searchable = false;
			local_a8._49_7_ = 0;
			local_a8.Tooltip = null;
			local_a8.ActionId = null;
			local_a8.Action = null;
			local_a8.TextKey = null;
			local_a8.Icon = null;
			local_a8._text = null;
			local_a8.Id = null;
			local_a8.StackedOptions = null;
			local_a8 = new AottgBrushSidePanelOption("back", "Common.Back", "settings.back", "exitLeft", false, null);
			if ((pGVar1.Length & 0xfffffffe) != 0) {
				pGVar1[1].StackedOptions = local_a8.StackedOptions;
				pGVar1[1].Searchable = local_a8.Searchable;
				*(undefined7)&pGVar1[1].field_0x31 = local_a8._49_7_;
				pGVar1[1].Tooltip = local_a8.Tooltip;
				pGVar1[1].ActionId = local_a8.ActionId;
				pGVar1[1].Action = local_a8.Action;
				pGVar1[1].TextKey = local_a8.TextKey;
				pGVar1[1].Icon = local_a8.Icon;
				pGVar1[1]._text = local_a8._text;
				pGVar1[1].Id = local_a8.Id;
				return pGVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x5811C80", Offset = "0x5810C80", VA = "0x5811C80")]
	private static GisketchNodeDefinition FooterButton(AottgUi footer, AottgButtonVariant variant, string textKey, string actionId, string id, string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$FooterButton): clean
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;

		if (footer != null) {
			pGVar1 = footer.ButtonKey(variant, textKey, actionId, id, null, null, icon);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return pGVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x5811DB0", Offset = "0x5810DB0", VA = "0x5811DB0")]
	public AottgSettingsScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c (Gisketch.Aottg2UI.Game.AottgSettingsScreen$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c.

	// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_0$$.ctor: clean
	private void c__DisplayClass8_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_1$$.ctor: clean
	private void c__DisplayClass8_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_1$$<RefreshCategory>b__0: clean
	private void c__DisplayClass8_1__RefreshCategory_b__0(AottgUi ui)
	{
		AottgSettingsScreen.c__DisplayClass8_0 pGVar1;
		GisketchUIRoot root;
		AottgScreenSectionContext context;
		bool bVar2;
		String tabId;
		float scrollOffset;

		bVar2 = String.Equals(this.section.Id, "keybinds", 5);
		if (!bVar2) {
			(this.section).Build(ui, (AottgScreenSectionContext)this.context);
			return;
		}
		pGVar1 = this.CS___8__locals1;
		if (pGVar1 != null) {
			root = pGVar1.root;
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
			}
			tabId = AottgSettingsKeybindsCategory.SelectedTab(root);
			context = this.context;
			pGVar1 = this.CS___8__locals1;
			if (pGVar1 != null) {
				scrollOffset = AottgSettingsKeybindsCategory.SavedScroll(pGVar1.root, tabId);
				AottgSettingsKeybindsCategory.Build(ui, (AottgScreenSectionContext)context, tabId, scrollOffset);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
