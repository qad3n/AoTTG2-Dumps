// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000323")]
[AottgScreen("profile", TitleKey = "MainMenu.Profile.Title", SearchTitleKey = "Common.Profile", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgProfileScreen : AottgScreen
{
	[Token(Token = "0x4000FBD")]
	public const string Id = "profile";

	[Token(Token = "0x4000FBE")]
	private const string StatsKeywords = "general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear";

	[Token(Token = "0x4000FBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x1700022A")]
	protected override string RootStyle
	{
		[Token(Token = "0x60013B0")]
		[Address(RVA = "0x5805BD0", Offset = "0x5804BD0", VA = "0x5805BD0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x1700022B")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60013B1")]
		[Address(RVA = "0x5805C00", Offset = "0x5804C00", VA = "0x5805C00", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x5805CD0", Offset = "0x5804CD0", VA = "0x5805CD0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$Build): 1 lines keep C-only constructs
		AottgBrushSidePanelOption[] footerOptions;
		AottgScreenSection[] sections;
		AottgScreenWithBrushSidePanel __this_00;

		if (Il2CppMethodInitialized_07545659 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_07545659 = true;
		}
		sections = AottgProfileScreen.Sections();
		footerOptions = AottgProfileScreen.Footer;
		__this_00 = new AottgScreenWithBrushSidePanel("Common.Profile", sections, 0, footerOptions, "profile-screen", null, true, false, false, 0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_00);
		return;
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x5805DB0", Offset = "0x5804DB0", VA = "0x5805DB0")]
	private static AottgScreenSection[] Sections()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$Sections): 18 lines keep C-only constructs
		AottgScreenSection[] pGVar1;
		Action<T1, T2> pSVar2;
		Action<T1, T2> pSVar3;
		AottgScreenSection local_168;
		AottgScreenSection local_128;
		AottgScreenSection local_e8;
		AottgScreenSection local_a8;
		AottgScreenSection local_68;

		pGVar1 = (AottgScreenSection[])new AottgScreenSection[5];
		pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildAccount);
		pSVar3 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildAccountHeaderActions);
		local_68.Keywords = null;
		local_68.AutoAddKeywords = false;
		local_68.HideSearch = false;
		local_68.HideHeader = false;
		local_68._59_5_ = 0;
		local_68.TextKey = null;
		local_68.Icon = null;
		local_68.Id = null;
		local_68.Text = null;
		local_68._buildContent = null;
		local_68._buildHeaderActions = null;
		local_68 = new AottgScreenSection("account", "MainMenu.Profile.Account", "singleplayer", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, false, (Action<AottgUi, AottgScreenSectionContext>)pSVar3, false, false);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length != 0) {
			pGVar1[0].Keywords = local_68.Keywords;
			pGVar1[0].AutoAddKeywords = local_68.AutoAddKeywords;
			pGVar1[0].HideSearch = local_68.HideSearch;
			pGVar1[0].HideHeader = local_68.HideHeader;
			*(undefined5)&pGVar1[0].field_0x3b = local_68._59_5_;
			pGVar1[0].TextKey = local_68.TextKey;
			pGVar1[0].Icon = local_68.Icon;
			pGVar1[0].Id = local_68.Id;
			pGVar1[0].Text = local_68.Text;
			pGVar1[0]._buildContent = local_68._buildContent;
			pGVar1[0]._buildHeaderActions = local_68._buildHeaderActions;
			pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildCharacter);
			pSVar3 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildCharacterHeaderActions);
			local_a8.Keywords = null;
			local_a8.AutoAddKeywords = false;
			local_a8.HideSearch = false;
			local_a8.HideHeader = false;
			local_a8._59_5_ = 0;
			local_a8.TextKey = null;
			local_a8.Icon = null;
			local_a8.Id = null;
			local_a8.Text = null;
			local_a8._buildContent = null;
			local_a8._buildHeaderActions = null;
			local_a8 = new AottgScreenSection("character", "MainMenu.Profile.Character", "home", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, false, (Action<AottgUi, AottgScreenSectionContext>)pSVar3, false, false);
			if ((pGVar1.Length & 0xfffffffe) != 0) {
				pGVar1[1].Keywords = local_a8.Keywords;
				pGVar1[1].AutoAddKeywords = local_a8.AutoAddKeywords;
				pGVar1[1].HideSearch = local_a8.HideSearch;
				pGVar1[1].HideHeader = local_a8.HideHeader;
				*(undefined5)&pGVar1[1].field_0x3b = local_a8._59_5_;
				pGVar1[1].TextKey = local_a8.TextKey;
				pGVar1[1].Icon = local_a8.Icon;
				pGVar1[1].Id = local_a8.Id;
				pGVar1[1].Text = local_a8.Text;
				pGVar1[1]._buildContent = local_a8._buildContent;
				pGVar1[1]._buildHeaderActions = local_a8._buildHeaderActions;
				pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildInfo);
				pSVar3 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildInfoHeaderActions);
				local_e8.Keywords = null;
				local_e8.AutoAddKeywords = false;
				local_e8.HideSearch = false;
				local_e8.HideHeader = false;
				local_e8._59_5_ = 0;
				local_e8.TextKey = null;
				local_e8.Icon = null;
				local_e8.Id = null;
				local_e8.Text = null;
				local_e8._buildContent = null;
				local_e8._buildHeaderActions = null;
				local_e8 = new AottgScreenSection("info", "MainMenu.Profile.Info", "question", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, true, (Action<AottgUi, AottgScreenSectionContext>)pSVar3, false, false);
				if (2 < (uint)pGVar1.Length) {
					pGVar1[2].Keywords = local_e8.Keywords;
					pGVar1[2].AutoAddKeywords = local_e8.AutoAddKeywords;
					pGVar1[2].HideSearch = local_e8.HideSearch;
					pGVar1[2].HideHeader = local_e8.HideHeader;
					*(undefined5)&pGVar1[2].field_0x3b = local_e8._59_5_;
					pGVar1[2].TextKey = local_e8.TextKey;
					pGVar1[2].Icon = local_e8.Icon;
					pGVar1[2].Id = local_e8.Id;
					pGVar1[2].Text = local_e8.Text;
					pGVar1[2]._buildContent = local_e8._buildContent;
					pGVar1[2]._buildHeaderActions = local_e8._buildHeaderActions;
					pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildEmotes);
					local_128.Keywords = null;
					local_128.AutoAddKeywords = false;
					local_128.HideSearch = false;
					local_128.HideHeader = false;
					local_128._59_5_ = 0;
					local_128.TextKey = null;
					local_128.Icon = null;
					local_128.Id = null;
					local_128.Text = null;
					local_128._buildContent = null;
					local_128._buildHeaderActions = null;
					local_128 = new AottgScreenSection("emotes", "Common.Emotes", "UI/Icons/Profile/EmotesIcon", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, null, false, null, false, false);
					if ((pGVar1.Length & 0xfffffffc) != 0) {
						pGVar1[3].Keywords = local_128.Keywords;
						pGVar1[3].AutoAddKeywords = local_128.AutoAddKeywords;
						pGVar1[3].HideSearch = local_128.HideSearch;
						pGVar1[3].HideHeader = local_128.HideHeader;
						*(undefined5)&pGVar1[3].field_0x3b = local_128._59_5_;
						pGVar1[3].TextKey = local_128.TextKey;
						pGVar1[3].Icon = local_128.Icon;
						pGVar1[3].Id = local_128.Id;
						pGVar1[3].Text = local_128.Text;
						pGVar1[3]._buildContent = local_128._buildContent;
						pGVar1[3]._buildHeaderActions = local_128._buildHeaderActions;
						pSVar2 = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_BuildStats);
						local_168.Keywords = null;
						local_168.AutoAddKeywords = false;
						local_168.HideSearch = false;
						local_168.HideHeader = false;
						local_168._59_5_ = 0;
						local_168.TextKey = null;
						local_168.Icon = null;
						local_168.Id = null;
						local_168.Text = null;
						local_168._buildContent = null;
						local_168._buildHeaderActions = null;
						local_168 = new AottgScreenSection("stats", "Common.Stats", "trophy", (Action<AottgUi, AottgScreenSectionContext>)pSVar2, "general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear", false, null, false, false);
						if (4 < (uint)pGVar1.Length) {
							pGVar1[4].Keywords = local_168.Keywords;
							pGVar1[4].AutoAddKeywords = local_168.AutoAddKeywords;
							pGVar1[4].HideSearch = local_168.HideSearch;
							pGVar1[4].HideHeader = local_168.HideHeader;
							*(undefined5)&pGVar1[4].field_0x3b = local_168._59_5_;
							pGVar1[4].TextKey = local_168.TextKey;
							pGVar1[4].Icon = local_168.Icon;
							pGVar1[4].Id = local_168.Id;
							pGVar1[4].Text = local_168.Text;
							pGVar1[4]._buildContent = local_168._buildContent;
							pGVar1[4]._buildHeaderActions = local_168._buildHeaderActions;
							return pGVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x58063C0", Offset = "0x58053C0", VA = "0x58063C0")]
	private static void BuildAccount(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccount): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition enter;

		style = "default";
		pGVar1 = typeof(AottgProfileScreen.c).static_fields;
		__this = pGVar1.__9__9_0;
		if (__this == null) {
			if ((typeof(AottgProfileScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildAccount_b__9_0);
			pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			pGVar1.__9__9_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		enter = context.RowMotion(0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel(style, __this, "profile-account-card", layout, enter);
		return;
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x58065A0", Offset = "0x58055A0", VA = "0x58065A0")]
	private static void BuildAccountHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildAccountHeaderActions): clean
		GisketchNodeDefinition node;
		GisketchLayoutDefinition pGVar1;
		GisketchUIBindingDefinition __this;
		String title;

		if (header != null) {
			node = header.ButtonKey(1, "Common.Refresh", "account.refresh", "profile-info-account-refresh", null, null, "UI/Icons/Navigation/RefreshIcon");
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (node != null) {
				node.layout = pGVar1;
				__this = new GisketchUIBindingDefinition();
				if (__this != null) {
					__this.text = "account.refreshCta";
					__this.visible = "account.loggedIn";
					__this.enabled = "account.auth.idle";
					node.bind = __this;
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					title = Aottg2GisketchLocale.Text("MainMenu.Account.RefreshAccount");
					AottgSearchableExtensions.Searchable(node, title, null, "UI/Icons/Navigation/RefreshIcon", null, context._SectionId_k__BackingField, context._SectionTitle_k__BackingField, false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x5806820", Offset = "0x5805820", VA = "0x5806820")]
	private static void BuildInfo(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfo): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition enter;

		style = "default";
		pGVar1 = typeof(AottgProfileScreen.c).static_fields;
		__this = pGVar1.__9__11_0;
		if (__this == null) {
			if ((typeof(AottgProfileScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildInfo_b__11_0);
			pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			pGVar1.__9__11_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 20.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		enter = context.RowMotion(0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel(style, __this, "profile-info-connections", layout, enter);
		return;
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x5806A20", Offset = "0x5805A20", VA = "0x5806A20")]
	private static void BuildInfoHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildInfoHeaderActions): clean
		GisketchNodeDefinition node;
		GisketchLayoutDefinition pGVar1;
		GisketchUIBindingDefinition __this;
		String title;

		if (header != null) {
			node = header.ButtonKey(0, "MainMenu.Account.AccountDetails", "account.details", "profile-info-account-details", null, null, "information");
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (node != null) {
				node.layout = pGVar1;
				__this = new GisketchUIBindingDefinition();
				if (__this != null) {
					__this.enabled = "account.auth.idle";
					node.bind = __this;
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					title = Aottg2GisketchLocale.Text("MainMenu.Account.AccountDetails");
					AottgSearchableExtensions.Searchable(node, title, null, "information", null, context._SectionId_k__BackingField, context._SectionTitle_k__BackingField, false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x5806C50", Offset = "0x5805C50", VA = "0x5806C50")]
	private static void BuildCharacter(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacter): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition enter;

		style = "default";
		pGVar1 = typeof(AottgProfileScreen.c).static_fields;
		__this = pGVar1.__9__13_0;
		if (__this == null) {
			if ((typeof(AottgProfileScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildCharacter_b__13_0);
			pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			pGVar1.__9__13_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		enter = context.RowMotion(0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel(style, __this, "profile-character-layout", layout, enter);
		return;
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x5806E30", Offset = "0x5805E30", VA = "0x5806E30")]
	private static void BuildCharacterHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildCharacterHeaderActions): clean
		GisketchNodeDefinition node;
		GisketchLayoutDefinition pGVar1;
		String title;

		if (header != null) {
			node = header.ButtonKey(0, "MainMenu.Profile.EditCharacter", "dialog.profile-edit-character", "profile-character-edit", null, null, "material-icons/edit");
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (node != null) {
				node.layout = pGVar1;
				title = Aottg2GisketchLocale.Text("MainMenu.Profile.EditCharacter");
				AottgSearchableExtensions.Searchable(node, title, null, "material-icons/edit", null, context._SectionId_k__BackingField, context._SectionTitle_k__BackingField, false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x5806FE0", Offset = "0x5805FE0", VA = "0x5806FE0")]
	private static void BuildEmotes(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildEmotes): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition enter;

		style = "default";
		pGVar1 = typeof(AottgProfileScreen.c).static_fields;
		__this = pGVar1.__9__15_0;
		if (__this == null) {
			if ((typeof(AottgProfileScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c_BuildEmotes_b__15_0);
			pGVar1 = typeof(AottgProfileScreen.c).static_fields;
			pGVar1.__9__15_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", "Center", "Center", null, null, 42.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		enter = context.RowMotion(0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel(style, __this, "profile-emote-wheels", layout, enter);
		return;
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x58071E0", Offset = "0x58061E0", VA = "0x58071E0")]
	private static void BuildStats(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$BuildStats): clean
		AottgProfileStatsPanel __this;

		__this = new AottgProfileStatsPanel();
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x5807250", Offset = "0x5806250", VA = "0x5807250")]
	private static void ConnectionRow(AottgUi content, string id, string statusKey, string buttonVisibleKey, string actionId, AottgButtonVariant buttonVariant, [Optional] string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$ConnectionRow): 1 lines keep C-only constructs
		AottgProfileScreen.c__DisplayClass17_0 __this;
		Action<AottgUi> __this_00;
		String id_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = new AottgProfileScreen.c__DisplayClass17_0();
		if (__this != null) {
			__this.id = id;
			__this.statusKey = statusKey;
			__this.buttonVariant = buttonVariant;
			__this.actionId = actionId;
			__this.icon = icon;
			__this.buttonVisibleKey = buttonVisibleKey;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0_ConnectionRow_b__0);
			id_00 = String.Concat("profile-info-", __this.id);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, "Wrap", 20.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (content != null) {
				content.Panel("row", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x58074B0", Offset = "0x58064B0", VA = "0x58074B0")]
	public AottgProfileScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c (Gisketch.Aottg2UI.Game.AottgProfileScreen$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c.

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen$$.cctor: 2 lines keep C-only constructs
	static AottgProfileScreen()
	{
		AottgBrushSidePanelOption[] pGVar1;
		AottgBrushSidePanelOption local_58;

		pGVar1 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[1];
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
		local_58 = new AottgBrushSidePanelOption("back", "Common.Back", "screen.main-menu", "return", false, null);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length == 0) {
			throw new IndexOutOfRangeException();
		}
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
		AottgProfileScreen.Footer = pGVar1;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgProfileScreen.c();
		AottgProfileScreen.c.__9 =(AottgProfileScreen.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildAccount>b__9_0: clean
	private void c__BuildAccount_b__9_0(AottgUi row)
	{
		AottgProfileCard __this_00;

		__this_00 = new AottgProfileCard(true);
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Component((AottgComponent)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildInfo>b__11_0: clean
	private void c__BuildInfo_b__11_0(AottgUi rows)
	{


		AottgProfileScreen.ConnectionRow(rows, "patreon", "profile.patreon.status", "profile.patreon.cta.visible", "main.patreon", 2, "UI/Icons/Intro/PatreonIcon");
		AottgProfileScreen.ConnectionRow(rows, "discord", "profile.discord.status", "profile.discord.link.visible", "account.details", 0, null);
		AottgProfileScreen.ConnectionRow(rows, "google", "profile.google.status", "profile.google.link.visible", "account.details", 0, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildCharacter>b__13_0: clean
	private void c__BuildCharacter_b__13_0(AottgUi preview)
	{
		AottgCharacterNamePreviewPanel __this_00;

		__this_00 = new AottgCharacterNamePreviewPanel("profile-character-name-preview", 420.0, false, null, true);
		if (preview == null) {
			throw new NullReferenceException();
		}
		preview.Component((AottgComponent)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c$$<BuildEmotes>b__15_0: clean
	private void c__BuildEmotes_b__15_0(AottgUi wheels)
	{
		AottgEmoteRadialMenu pGVar1;

		pGVar1 = new AottgEmoteRadialMenu(false);
		if (wheels == null) {
			throw new NullReferenceException();
		}
		wheels.Component((AottgComponent)pGVar1);
		pGVar1 = new AottgEmoteRadialMenu(true);
		wheels.Component((AottgComponent)pGVar1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass17_0__ConnectionRow_b__0(AottgUi row)
	{
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		Action<AottgUi> __this_00;
		String id;

		pSVar1 = String.Concat("MainMenu.Profile.Connection.", this.id);
		if (row != null) {
			pGVar2 = row.TextKey(pSVar1, "header", null, null, null);
			pGVar3 = AottgUi.Points(220.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar2 != null) {
				pGVar2.layout = pGVar4;
				pSVar1 = "default";
				__this_00 = this.__9__1;
				if (__this_00 == null) {
					__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileScreen_c__DisplayClass17_0_ConnectionRow_b__1);
					this.__9__1 = __this_00;
				}
				id = String.Concat("profile-info-", this.id, "-actions");
				pGVar3 = AottgUi.Percent(100.0);
				pGVar4 = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 12.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				row.Panel(pSVar1, __this_00, id, pGVar4, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileScreen.<>c__DisplayClass17_0$$<ConnectionRow>b__1: clean
	private void c__DisplayClass17_0__ConnectionRow_b__1(AottgUi actions)
	{
		int variant;
		String actionId;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;
		String key;
		String id;
		GisketchUIBindingDefinition __this_00;

		if (actions != null) {
			pGVar1 = actions.TextKey("MainMenu.Profile.NotConnected", "profileInfoStatus", null, this.statusKey, null);
			width = AottgUi.Points(560.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				variant = this.buttonVariant;
				key = String.Concat("MainMenu.Profile.Connection.", this.id, "Cta");
				actionId = this.actionId;
				id = String.Concat("profile-info-", this.id, "-link");
				pGVar1 = actions.ButtonKey(variant, key, actionId, id, null, null, this.icon);
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (pGVar1 != null) {
					pGVar1.layout = pGVar2;
					__this_00 = new GisketchUIBindingDefinition();
					if (__this_00 != null) {
						__this_00.visible = this.buttonVisibleKey;
						__this_00.enabled = "account.auth.idle";
						pGVar1.bind = __this_00;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
