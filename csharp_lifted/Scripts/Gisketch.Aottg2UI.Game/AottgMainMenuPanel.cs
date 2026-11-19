// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002A5")]
public sealed class AottgMainMenuPanel : AottgComponent
{
	[Token(Token = "0x20002A6")]
	private readonly struct MainMenuOption
	{
		[Token(Token = "0x4000D9A")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x4000D9B")]
		[FieldOffset(Offset = "0x8")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000D9C")]
		[FieldOffset(Offset = "0x10")]
		public readonly string ActionId;

		[Token(Token = "0x4000D9D")]
		[FieldOffset(Offset = "0x18")]
		public readonly string Icon;

		[Token(Token = "0x6001032")]
		[Address(RVA = "0x57C0050", Offset = "0x57BF050", VA = "0x57C0050")]
		public MainMenuOption(string id, string localeKey, string actionId, string icon)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$.ctor): clean
			this.Id = id;
			this.LocaleKey = localeKey;
			this.ActionId = actionId;
			this.Icon = icon;
			return;
		}
	}

	[Token(Token = "0x20002A7")]
	private readonly struct FooterIcon
	{
		[Token(Token = "0x4000D9E")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x4000D9F")]
		[FieldOffset(Offset = "0x8")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000DA0")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Sprite;

		[Token(Token = "0x4000DA1")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x6001033")]
		[Address(RVA = "0x57C00B0", Offset = "0x57BF0B0", VA = "0x57C00B0")]
		public FooterIcon(string id, string localeKey, string sprite, string actionId)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$.ctor): clean
			this.Id = id;
			this.LocaleKey = localeKey;
			this.Sprite = sprite;
			this.ActionId = actionId;
			return;
		}
	}

	[Token(Token = "0x4000D80")]
	public const string PanelId = "main-menu-panel";

	[Token(Token = "0x4000D81")]
	public const string PanelVisualId = "main-menu-panel-visual";

	[Token(Token = "0x4000D82")]
	private const string Panel = "UI/AoTTG/MainMenu/MainMenuPanel";

	[Token(Token = "0x4000D83")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000D84")]
	private const string LogoBlades = "UI/AoTTG/MainMenu/LogoBlades";

	[Token(Token = "0x4000D85")]
	private const string LogoText = "UI/AoTTG/MainMenu/LogoTextOnly";

	[Token(Token = "0x4000D86")]
	private const float PanelWidth = 979f;

	[Token(Token = "0x4000D87")]
	private const float PanelHeight = 1080f;

	[Token(Token = "0x4000D88")]
	private const float LogoSlotWidth = 747.175f;

	[Token(Token = "0x4000D89")]
	private const float LogoSlotHeight = 543.4f;

	[Token(Token = "0x4000D8A")]
	private const float ButtonListX = -86f;

	[Token(Token = "0x4000D8B")]
	private const float ButtonStartY = 360f;

	[Token(Token = "0x4000D8C")]
	private const float ButtonHeight = 118f;

	[Token(Token = "0x4000D8D")]
	private const float ButtonPitch = 74f;

	[Token(Token = "0x4000D8E")]
	private const float BrushGlyphWidth = 37f;

	[Token(Token = "0x4000D8F")]
	private const float BrushHorizontalPadding = 32f;

	[Token(Token = "0x4000D90")]
	private const float FooterIconSize = 48f;

	[Token(Token = "0x4000D91")]
	private const float FooterGap = 10f;

	[Token(Token = "0x4000D92")]
	private const float FooterOffsetX = 22f;

	[Token(Token = "0x4000D93")]
	private const float FooterOffsetY = -1018f;

	[Token(Token = "0x4000D94")]
	private const float ContentPaddingY = 36f;

	[Token(Token = "0x4000D95")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4000D96")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4000D97")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MainMenuOption[] Options;

	[Token(Token = "0x4000D98")]
	[FieldOffset(Offset = "0x8")]
	private static readonly FooterIcon[] FooterIcons;

	[Token(Token = "0x4000D99")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _quitActionId;

	[Token(Token = "0x170001C6")]
	private static float MainMenuPanelMobileSafeHeight
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x57BEB50", Offset = "0x57BDB50", VA = "0x57BEB50")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$get_MainMenuPanelMobileSafeHeight): clean
			bool bVar1;

			bVar1 = MobilePlatformUtility.IsMobileRuntime();
			if (bVar1) {
				return 42.0;
			}
			return 0.0;
		}
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x57BEB70", Offset = "0x57BDB70", VA = "0x57BEB70")]
	public AottgMainMenuPanel(string quitActionId = "main.quit")
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.ctor): clean
		base();
		this._quitActionId = quitActionId;
		return;
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x57BEBA0", Offset = "0x57BDBA0", VA = "0x57BEBA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Build): 2 lines keep C-only constructs
		bool bVar1;
		AottgMainMenuPanel.c__DisplayClass29_0 __this_00;
		Action<AottgUi> __this_01;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchLayoutDefinition contentLayout;
		GisketchNodeDefinition pGVar2;
		GisketchMotionDefinition pGVar3;
		float fVar4;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgMainMenuPanel.c__DisplayClass29_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			fVar4 = AottgMainMenuPanel.BrushWidth();
			__this_00.brushWidth = fVar4;
			bVar1 = MobilePlatformUtility.IsMobileRuntime();
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_Build_b__0);
			width = AottgUi.Points(979.0);
			height = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, "FlexStart", "FlexStart", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			contentLayout = AottgUi.Layout("Column", null, "FlexStart", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 36.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				if (bVar1) {
					fVar4 = 1122.0;
				}
				else {
					fVar4 = 1080.0;
				}
				pGVar2 = ui.ScaleBox("main-menu-panel", 979.0, fVar4, __this_01, "main-menu-panel", layout, contentLayout, null);
				pGVar3 = AottgUi.Motion("mainMenuPanel", null, 0.14, 0.0, 0.0, 0);
				if (pGVar2 != null) {
					pGVar2.exit = pGVar3;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x57BEFB0", Offset = "0x57BDFB0", VA = "0x57BEFB0")]
	private static void AddOption(AottgUi buttons, MainMenuOption option, int index, float brushWidth, string quitActionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$AddOption): 1 lines keep C-only constructs
		AottgMainMenuPanel.c__DisplayClass30_0 __this;
		GisketchMotionDefinition pGVar1;
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this = new AottgMainMenuPanel.c__DisplayClass30_0();
		if (__this != null) {
			__this.option.ActionId = option.ActionId;
			__this.option.Icon = option.Icon;
			__this.option.Id = option.Id;
			__this.option.LocaleKey = option.LocaleKey;
			__this.quitActionId = quitActionId;
			pGVar1 = AottgUi.Motion("mainMenuBrushIntro", "main-menu-buttons", 0.120000005, 0.030000001, 0.027000003, index + 10);
			__this.enter = pGVar1;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass30_0_AddOption_b__0);
			id = String.Concat("main-menu-button-", __this.option.Id);
			width = AottgUi.Points(brushWidth);
			height = AottgUi.Points(118.0);
			layout = AottgUi.Layout("Column", null, "FlexStart", "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, (float)-index * 74.0, 0.0, 1.0);
			if (buttons != null) {
				buttons.Panel("default", __this_00, id, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x57BEE80", Offset = "0x57BDE80", VA = "0x57BEE80")]
	private static float BrushWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$BrushWidth): 3 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		uint uVar3;
		AottgMainMenuPanel.MainMenuOption[] pGVar4;
		ulong uVar5;
		String pSVar6;
		ulong uVar7;
		int iVar8;
		String* ppSVar9;
		float fVar10;

		if (Il2CppMethodInitialized_075453cb == false) {
			Il2CppMethodInitialized_075453cb = true;
			uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar4 = AottgMainMenuPanel.Options;
		}
		else {
			pGVar4 = *(AottgMainMenuPanel.MainMenuOption[]*)(typeof(AottgMainMenuPanel)).static_fields;
		}
		if (pGVar4 == null) {
	label_058befa4: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar4.Length < 1) {
		}
		else {
			uVar5 = pGVar4.Length & 0xffffffff;
			ppSVar9 = &pGVar4[0].LocaleKey;
			uVar7 = 0;
			iVar8 = 0;
			do {
				if (uVar5 <= uVar7) {
					throw new IndexOutOfRangeException();
				}
				pSVar6 = *ppSVar9;
				pSVar6 = Aottg2GisketchLocale.Text(pSVar6);
				if (pSVar6 == null) goto label_058befa4;
				iVar2 = pSVar6._stringLength;
				if (iVar8 < iVar2) {
					iVar8 = iVar2;
				}
				uVar7 = uVar7 + 1;
				uVar3 = (uint)pGVar4.Length;
				uVar5 = (ulong)uVar3;
				ppSVar9 = ppSVar9 + 4;
			} while ((long)uVar7 < (long)(int)uVar3);
			fVar10 = (float)iVar8 * 37.0 + 32.0;
		}
		return fVar10;
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x57BF240", Offset = "0x57BE240", VA = "0x57BF240")]
	private static float FooterWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$FooterWidth): clean
		uint uVar1;
		int iVar2;
		AottgMainMenuPanel.FooterIcon[] pGVar3;

		if (Il2CppMethodInitialized_075453cc == false) {
			Il2CppMethodInitialized_075453cc = true;
			uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar3 = AottgMainMenuPanel.FooterIcons;
		}
		else {
			pGVar3 = *(AottgMainMenuPanel.FooterIcon[]*)((long)(typeof(AottgMainMenuPanel)).static_fields + 8);
		}
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		iVar2 = (int)pGVar3.Length;
		return (float)(iVar2 + -1) * 10.0 + (float)iVar2 * 48.0;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c.

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$.ctor: clean
	private void c__DisplayClass29_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.cctor: clean
	static AottgMainMenuPanel()
	{
		String pSVar2;
		String pSVar3;
		String pSVar4;
		AottgMainMenuPanel.MainMenuOption[] pGVar5;
		AottgMainMenuPanel.FooterIcon[] pGVar6;
		String pSStack_1d0;
		String pSStack_1c8;
		String pSStack_1c0;
		String pSStack_1b8;
		String pSStack_1b0;
		String pSStack_1a8;
		String pSStack_1a0;
		String pSStack_198;
		String pSStack_190;
		String pSStack_188;
		String pSStack_180;
		String pSStack_178;
		String pSStack_170;
		String pSStack_168;
		String pSStack_160;
		String pSStack_158;
		String pSStack_150;
		String pSStack_148;
		String pSStack_140;
		String pSStack_138;
		String pSStack_130;
		String pSStack_128;
		String pSStack_120;
		String pSStack_118;
		String pSStack_110;
		String pSStack_108;
		String pSStack_100;
		String pSStack_f8;
		String pSStack_f0;
		String pSStack_e8;
		String pSStack_e0;
		String pSStack_d8;
		String pSStack_d0;
		String pSStack_c8;
		String pSStack_c0;
		String pSStack_b8;
		String pSStack_b0;
		String pSStack_a8;
		String pSStack_a0;
		String pSStack_98;
		String pSStack_90;
		String pSStack_88;
		String pSStack_80;
		String pSStack_78;
		String pSStack_70;
		String pSStack_68;
		String pSStack_60;
		String pSStack_58;
		String pSStack_50;
		String pSStack_48;
		String pSStack_40;
		String pSStack_38;

		pGVar5 = (AottgMainMenuPanel.MainMenuOption[])new AottgMainMenuPanel.MainMenuOption[8];
		pSVar4 = "question";
		pSVar3 = "main.tutorial";
		pSVar2 = "MainMenu.Intro.TutorialButton";
		pSStack_48 = null;
		pSStack_40 = null;
		pSStack_38 = null;
		pSStack_50 = "tutorial";
		pSStack_48 = pSVar2;
		pSStack_40 = pSVar3;
		pSStack_38 = pSVar4;
		if (pGVar5 == null) {
	label_058c004a: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar5.Length != 0) {
			pGVar5[0].ActionId = pSStack_40;
			pGVar5[0].Icon = pSStack_38;
			pGVar5[0].Id = pSStack_50;
			pGVar5[0].LocaleKey = pSStack_48;
			pSVar4 = "singleplayer";
			pSVar3 = "main.singleplayer";
			pSVar2 = "MainMenu.Intro.SingleplayerButton";
			pSStack_68 = null;
			pSStack_60 = null;
			pSStack_58 = null;
			pSStack_70 = "singleplayer";
			pSStack_68 = pSVar2;
			pSStack_60 = pSVar3;
			pSStack_58 = pSVar4;
			if ((pGVar5.Length & 0xfffffffe) != 0) {
				pGVar5[1].ActionId = pSStack_60;
				pGVar5[1].Icon = pSStack_58;
				pGVar5[1].Id = pSStack_70;
				pGVar5[1].LocaleKey = pSStack_68;
				pSVar4 = "multiplayer";
				pSVar3 = "main.multiplayer";
				pSVar2 = "MainMenu.Intro.MultiplayerButton";
				pSStack_88 = null;
				pSStack_80 = null;
				pSStack_78 = null;
				pSStack_90 = "multiplayer";
				pSStack_88 = pSVar2;
				pSStack_80 = pSVar3;
				pSStack_78 = pSVar4;
				if (2 < (uint)pGVar5.Length) {
					pGVar5[2].ActionId = pSStack_80;
					pGVar5[2].Icon = pSStack_78;
					pGVar5[2].Id = pSStack_90;
					pGVar5[2].LocaleKey = pSStack_88;
					pSVar4 = "main.profile";
					pSVar3 = "home";
					pSVar2 = "Common.Profile";
					pSStack_a8 = null;
					pSStack_a0 = null;
					pSStack_98 = null;
					pSStack_b0 = "profile";
					pSStack_a8 = pSVar2;
					pSStack_a0 = pSVar4;
					pSStack_98 = pSVar3;
					if ((pGVar5.Length & 0xfffffffc) != 0) {
						pGVar5[3].ActionId = pSStack_a0;
						pGVar5[3].Icon = pSStack_98;
						pGVar5[3].Id = pSStack_b0;
						pGVar5[3].LocaleKey = pSStack_a8;
						pSVar4 = "main.settings";
						pSVar3 = "gear";
						pSVar2 = "Common.Settings";
						pSStack_c8 = null;
						pSStack_c0 = null;
						pSStack_b8 = null;
						pSStack_d0 = "settings";
						pSStack_c8 = pSVar2;
						pSStack_c0 = pSVar4;
						pSStack_b8 = pSVar3;
						if (4 < (uint)pGVar5.Length) {
							pGVar5[4].ActionId = pSStack_c0;
							pGVar5[4].Icon = pSStack_b8;
							pGVar5[4].Id = pSStack_d0;
							pGVar5[4].LocaleKey = pSStack_c8;
							pSVar4 = "wrench";
							pSVar3 = "main.tools";
							pSVar2 = "MainMenu.Intro.ToolsButton";
							pSStack_e8 = null;
							pSStack_e0 = null;
							pSStack_d8 = null;
							pSStack_f0 = "tools";
							pSStack_e8 = pSVar2;
							pSStack_e0 = pSVar3;
							pSStack_d8 = pSVar4;
							if (5 < (uint)pGVar5.Length) {
								pGVar5[5].ActionId = pSStack_e0;
								pGVar5[5].Icon = pSStack_d8;
								pGVar5[5].Id = pSStack_f0;
								pGVar5[5].LocaleKey = pSStack_e8;
								pSVar4 = "trophy";
								pSVar3 = "main.credits";
								pSVar2 = "Common.Credits";
								pSStack_108 = null;
								pSStack_100 = null;
								pSStack_f8 = null;
								pSStack_110 = "credits";
								pSStack_108 = pSVar2;
								pSStack_100 = pSVar3;
								pSStack_f8 = pSVar4;
								if (6 < (uint)pGVar5.Length) {
									pGVar5[6].ActionId = pSStack_100;
									pGVar5[6].Icon = pSStack_f8;
									pGVar5[6].Id = pSStack_110;
									pGVar5[6].LocaleKey = pSStack_108;
									pSVar4 = "main.quit";
									pSVar3 = "exit";
									pSVar2 = "Common.Quit";
									pSStack_128 = null;
									pSStack_120 = null;
									pSStack_118 = null;
									pSStack_130 = "quit";
									pSStack_128 = pSVar2;
									pSStack_120 = pSVar4;
									pSStack_118 = pSVar3;
									if ((pGVar5.Length & 0xfffffff8) != 0) {
										pGVar5[7].ActionId = pSStack_120;
										pGVar5[7].Icon = pSStack_118;
										pGVar5[7].Id = pSStack_130;
										pGVar5[7].LocaleKey = pSStack_128;
										AottgMainMenuPanel.Options = pGVar5;
										pGVar6 = (AottgMainMenuPanel.FooterIcon[])new AottgMainMenuPanel.FooterIcon[5];
										pSVar4 = "main.quests";
										pSVar3 = "UI/Icons/Intro/UserIcon";
										pSVar2 = "MainMenu.Intro.QuestButton";
										pSStack_148 = null;
										pSStack_140 = null;
										pSStack_138 = null;
										pSStack_150 = "quests";
										pSStack_148 = pSVar2;
										pSStack_140 = pSVar3;
										pSStack_138 = pSVar4;
										if (pGVar6 == null) goto label_058c004a;
										if ((int)pGVar6.Length != 0) {
											pGVar6[0].Sprite = pSStack_140;
											pGVar6[0].ActionId = pSStack_138;
											pGVar6[0].Id = pSStack_150;
											pGVar6[0].LocaleKey = pSStack_148;
											pSVar4 = "main.leaderboard";
											pSVar3 = "UI/Icons/Intro/LeaderboardIcon";
											pSVar2 = "MainMenu.LeaderboardPopup.Title";
											pSStack_168 = null;
											pSStack_160 = null;
											pSStack_158 = null;
											pSStack_170 = "leaderboard";
											pSStack_168 = pSVar2;
											pSStack_160 = pSVar3;
											pSStack_158 = pSVar4;
											if ((pGVar6.Length & 0xfffffffe) != 0) {
												pGVar6[1].Sprite = pSStack_160;
												pGVar6[1].ActionId = pSStack_158;
												pGVar6[1].Id = pSStack_170;
												pGVar6[1].LocaleKey = pSStack_168;
												pSVar4 = "main.social";
												pSVar3 = "UI/Icons/Intro/SocialIcon";
												pSVar2 = "Common.Social";
												pSStack_188 = null;
												pSStack_180 = null;
												pSStack_178 = null;
												pSStack_190 = "social";
												pSStack_188 = pSVar2;
												pSStack_180 = pSVar3;
												pSStack_178 = pSVar4;
												if (2 < (uint)pGVar6.Length) {
													pGVar6[2].Sprite = pSStack_180;
													pGVar6[2].ActionId = pSStack_178;
													pGVar6[2].Id = pSStack_190;
													pGVar6[2].LocaleKey = pSStack_188;
													pSVar4 = "main.help";
													pSVar3 = "UI/Icons/Intro/ProfileIcon";
													pSVar2 = "Common.Help";
													pSStack_1a8 = null;
													pSStack_1a0 = null;
													pSStack_198 = null;
													pSStack_1b0 = "help";
													pSStack_1a8 = pSVar2;
													pSStack_1a0 = pSVar3;
													pSStack_198 = pSVar4;
													if ((pGVar6.Length & 0xfffffffc) != 0) {
														pGVar6[3].Sprite = pSStack_1a0;
														pGVar6[3].ActionId = pSStack_198;
														pGVar6[3].Id = pSStack_1b0;
														pGVar6[3].LocaleKey = pSStack_1a8;
														pSVar4 = "main.patreon";
														pSVar3 = "UI/Icons/Intro/PatreonIcon";
														pSVar2 = "MainMenu.Intro.PatreonButton";
														pSStack_1c8 = null;
														pSStack_1c0 = null;
														pSStack_1b8 = null;
														pSStack_1d0 = "patreon";
														pSStack_1c8 = pSVar2;
														pSStack_1c0 = pSVar3;
														pSStack_1b8 = pSVar4;
														if (4 < (uint)pGVar6.Length) {
															pGVar6[4].Sprite = pSStack_1c0;
															pGVar6[4].ActionId = pSStack_1b8;
															pGVar6[4].Id = pSStack_1d0;
															pGVar6[4].LocaleKey = pSStack_1c8;
															AottgMainMenuPanel.FooterIcons = pGVar6;
															return;
														}
													}
												}
											}
										}
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

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgMainMenuPanel.c();
		AottgMainMenuPanel.c.__9 =(AottgMainMenuPanel.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__29_1: clean
	private void c__Build_b__29_1(AottgUi logo)
	{
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;
		GisketchMotionDefinition pGVar4;

		pGVar1 = AottgUi.Points(747.175);
		pGVar2 = AottgUi.Points(543.4);
		pGVar3 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		pGVar4 = AottgUi.Motion("mainMenuLogoBlades", null, 0.24000001, 0.030000001, 0.0, 2);
		if (logo == null) {
			throw new NullReferenceException();
		}
		logo.Image("UI/AoTTG/MainMenu/LogoBlades", "mainMenuLogo", "main-menu-logo-blades", pGVar3, pGVar4);
		pGVar1 = AottgUi.Points(747.175);
		pGVar2 = AottgUi.Points(543.4);
		pGVar3 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		pGVar4 = AottgUi.Motion("mainMenuLogoText", null, 0.24000001, 0.030000001, 0.0, 1);
		logo.Image("UI/AoTTG/MainMenu/LogoTextOnly", "mainMenuLogo", "main-menu-logo-text", pGVar3, pGVar4);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__29_3: 1 lines keep C-only constructs
	private void c__Build_b__29_3(AottgUi footer)
	{
		uint uVar1;
		String sprite;
		String actionId;
		AottgMainMenuPanel.FooterIcon[] pGVar2;
		String pSVar3;
		String pSVar4;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition enter;
		GisketchNodeDefinition node;
		long lVar5;
		ulong uVar6;

		lVar5 = 0x38;
		uVar6 = 0;
		uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		while(true) {
			if (uVar1 == 0) {
			}
			pGVar2 = AottgMainMenuPanel.FooterIcons;
			if (pGVar2 == null) break;
			if ((long)(int)pGVar2.Length <= (long)uVar6) {
				return;
			}
			if ((typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = AottgMainMenuPanel.FooterIcons;
				if (pGVar2 == null) break;
			}
			if ((uint)pGVar2.Length <= uVar6) {
				throw new IndexOutOfRangeException();
			}
			pSVar4 = *(String*)((long)pGVar2.m_Items + lVar5 + -0x38);
			pSVar3 = *(String*)((long)pGVar2.m_Items + lVar5 + -0x30);
			sprite = *(String*)((long)pGVar2.m_Items + lVar5 + -0x28);
			actionId = *(String*)((long)&(((AottgMainMenuPanel.FooterIcon[])(pGVar2.m_Items + -1) ).obj).klass + lVar5);
			pSVar3 = Aottg2GisketchLocale.Text(pSVar3);
			pSVar4 = String.Concat("main-menu-footer-", pSVar4);
			width = AottgUi.Points(48.0);
			height = AottgUi.Points(48.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			enter = AottgUi.Motion("mainMenuFooterIconIntro", "main-menu-footer", 0.120000005, 0.024, 0.009000001, (int)uVar6 + 0x14);
			if (footer == null) break;
			node = footer.SpriteButton(sprite, pSVar3, actionId, pSVar4, "mainMenuFooterSpriteButton", layout, enter);
			AottgSearchableExtensions.Searchable(node, pSVar3, null, null, null, null, null, false);
			uVar6 = uVar6 + 1;
			lVar5 = lVar5 + 0x20;
			uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$<Build>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass29_0__Build_b__0(AottgUi menu)
	{
		uint uVar1;
		int iVar2;
		object pIVar3;
		AottgMainMenuPanel.MainMenuOption[] pGVar4;
		AottgMainMenuPanel.FooterIcon[] pGVar5;
		String pSVar6;
		GisketchLength pGVar7;
		GisketchLength pGVar8;
		GisketchLayoutDefinition pGVar9;
		GisketchMotionDefinition enter;
		Action<AottgUi> pSVar10;
		Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_StaticFields pGVar11;

		pGVar7 = AottgUi.Points(979.0);
		pGVar8 = AottgUi.Points(1080.0);
		pGVar9 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		enter = AottgUi.Motion("mainMenuPanel", null, 0.33600003, 0.0, 0.0, 0);
		if (menu == null) goto label_058c0df8;
		menu.Image("UI/AoTTG/MainMenu/MainMenuPanel", "mainMenuPanel", "main-menu-panel-visual", pGVar9, enter);
		pSVar6 = "mainMenuLogoSlot";
		pGVar11 = typeof(AottgMainMenuPanel.c).static_fields;
		pSVar10 = pGVar11.__9__29_1;
		if (pSVar10 == null) {
			if ((typeof(AottgMainMenuPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar11 = typeof(AottgMainMenuPanel.c).static_fields;
			}
			pIVar3 = (object)pGVar11.__9;
			pSVar10 = new Action<AottgUi>(pIVar3, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__29_1);
			pGVar11 = typeof(AottgMainMenuPanel.c).static_fields;
			pGVar11.__9__29_1 = pSVar10;
		}
		pGVar7 = AottgUi.Points(747.175);
		pGVar8 = AottgUi.Points(543.4);
		pGVar9 = AottgUi.Layout("Column", null, "FlexStart", null, null, 0.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 70.0, 0.0, 1.0);
		menu.Panel(pSVar6, pSVar10, "main-menu-logo-slot", pGVar9, null);
		pSVar6 = "default";
		pSVar10 = this.__9__2;
		if (pSVar10 == null) {
			pSVar10 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_Build_b__2);
			this.__9__2 = pSVar10;
		}
		pGVar7 = AottgUi.Points(this.brushWidth);
		pGVar4 = AottgMainMenuPanel.Options;
		if (pGVar4 == null) goto label_058c0df8;
		pGVar8 = AottgUi.Points((float)((int)pGVar4.Length + -1) * 74.0 + 118.0);
		pGVar9 = AottgUi.Layout("Column", null, "FlexStart", "Absolute", null, 0.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -86.0, -360.0, 0.0, 1.0);
		menu.Panel(pSVar6, pSVar10, "main-menu-buttons", pGVar9, null);
		pSVar6 = "default";
		pGVar11 = typeof(AottgMainMenuPanel.c).static_fields;
		pSVar10 = pGVar11.__9__29_3;
		if (pSVar10 == null) {
			if ((typeof(AottgMainMenuPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar11 = typeof(AottgMainMenuPanel.c).static_fields;
			}
			pIVar3 = (object)pGVar11.__9;
			pSVar10 = new Action<AottgUi>(pIVar3, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__29_3);
			pGVar11 = typeof(AottgMainMenuPanel.c).static_fields;
			pGVar11.__9__29_3 = pSVar10;
			if ((typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor != 0) goto label_058c0c0b;
	label_058c0da7: ;
			if (Il2CppMethodInitialized_075453cc != false) goto label_058c0c18;
	label_058c0db9: ;
			Il2CppMethodInitialized_075453cc = true;
			uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor == 0) goto label_058c0da7;
	label_058c0c0b: ;
			if (Il2CppMethodInitialized_075453cc == false) goto label_058c0db9;
	label_058c0c18: ;
			uVar1 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar5 = AottgMainMenuPanel.FooterIcons;
		}
		else {
			pGVar5 = *(AottgMainMenuPanel.FooterIcon[]*)((long)(typeof(AottgMainMenuPanel)).static_fields + 8);
		}
		if (pGVar5 != null) {
			iVar2 = (int)pGVar5.Length;
			pGVar7 = AottgUi.Points((float)(iVar2 + -1) * 10.0 + (float)iVar2 * 48.0);
			pGVar8 = AottgUi.Points(48.0);
			pGVar9 = AottgUi.Layout("Row", null, "Center", "Absolute", null, 10.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 22.0, -1018.0, 0.0, 1.0);
			menu.Panel(pSVar6, pSVar10, "main-menu-footer", pGVar9, null);
			return;
		}
	label_058c0df8: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$<Build>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass29_0__Build_b__2(AottgUi buttons)
	{
		ulong puVar1;
		uint uVar2;
		MethodInfo method_00;
		AottgMainMenuPanel.MainMenuOption option;
		AottgMainMenuPanel.MainMenuOption[] pGVar3;
		ulong uVar4;
		long lVar5;

		lVar5 = 0x20;
		uVar4 = 0;
		uVar2 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		while(true) {
			if (uVar2 == 0) {
			}
			pGVar3 = AottgMainMenuPanel.Options;
			if (pGVar3 == null) break;
			if ((long)(int)pGVar3.Length <= (long)uVar4) {
				return;
			}
			if ((typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = AottgMainMenuPanel.Options;
				if (pGVar3 == null) break;
			}
			if ((uint)pGVar3.Length <= uVar4) {
				throw new IndexOutOfRangeException();
			}
			method_00 = (MethodInfo)this.__4__this;
			if (method_00 == null) break;
			puVar1 = (ulong)((long)pGVar3.m_Items + lVar5 + -0x10);
			option.ActionId = (String)*puVar1;
			__ghidra(@"option._0_16_ = *(undefined1 (*) [16])((long)&(((AottgMainMenuPanel.MainMenuOption[])(pGVar3.m_Items + -1)) .obj).klass + lVar5);");
			option.Icon = (String)puVar1[1];
			AottgMainMenuPanel.AddOption(buttons, option, (int32_t)uVar4, this.brushWidth, (String)method_00.invoker_method);
			uVar4 = uVar4 + 1;
			lVar5 = lVar5 + 0x20;
			uVar2 = (typeof(AottgMainMenuPanel)._2).cctor_finished_or_no_cctor;
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass30_0$$<AddOption>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass30_0__AddOption_b__0(AottgUi row)
	{
		String actionId;
		bool bVar1;
		String pSVar2;
		String text;
		String id;
		GisketchNodeDefinition pGVar3;
		GisketchSearchDefinition pGVar4;

		bVar1 = (this.option.ActionId == "main.quit");
		actionId = (&this.option.ActionId)[(ulong)bVar1 * 2];
		pSVar2 = this.option.LocaleKey;
		pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
		text = AottgBrushButton.DisplayCase(pSVar2);
		id = String.Concat("main-menu-option-", this.option.Id);
		if (row != null) {
			pGVar3 = row.Button(3, text, actionId, id, null, this.enter, this.option.Icon);
			if (pGVar3 != null) {
				pGVar3.style = "mainMenuBrushButton";
				pGVar3.sprite = "UI/Sprites/Elements/Brush";
				bVar1 = String.IsNullOrEmpty(this.option.Icon);
				pGVar3.hasIcon = !bVar1;
				pGVar4 = AottgUi.Search(pSVar2, null, false, this.option.Icon, null, null, null, false);
				pGVar3.search = pGVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}
}
