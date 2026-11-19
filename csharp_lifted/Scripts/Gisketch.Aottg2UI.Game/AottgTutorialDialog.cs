// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgTutorialDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B8")]
[AottgDialog("tutorial")]
public sealed class AottgTutorialDialog : AottgButtonListDialog
{
	[Token(Token = "0x4000DDA")]
	public const string Id = "tutorial";

	[Token(Token = "0x4000DDB")]
	private const string BasicVideos = "https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt";

	[Token(Token = "0x4000DDC")]
	private const string AdvancedVideos = "https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I";

	[Token(Token = "0x4000DDD")]
	private const string MiscVideos = "https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH";

	[Token(Token = "0x170001D2")]
	protected override string Title
	{
		[Token(Token = "0x6001078")]
		[Address(RVA = "0x57C3EA0", Offset = "0x57C2EA0", VA = "0x57C3EA0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c (Gisketch.Aottg2UI.Game.AottgTutorialDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Intro.TutorialButton");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001D3")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001079")]
		[Address(RVA = "0x57C3F00", Offset = "0x57C2F00", VA = "0x57C3F00", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c (Gisketch.Aottg2UI.Game.AottgTutorialDialog$$get_TitleIcon): clean
			return "question";
		}
	}

	[Token(Token = "0x170001D4")]
	protected override Entry[] Entries
	{
		[Token(Token = "0x600107A")]
		[Address(RVA = "0x57C3F30", Offset = "0x57C2F30", VA = "0x57C3F30", Slot = "22")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c (Gisketch.Aottg2UI.Game.AottgTutorialDialog$$get_Entries): 12 lines keep C-only constructs
			object pIVar1;
			String pSVar2;
			String pSVar3;
			AottgButtonListDialog.Entry[] pGVar4;
			Action __this_00;
			Action<GisketchActionContext> pSVar5;
			Gisketch_Aottg2UI_Game_AottgTutorialDialog___c_StaticFields pGVar6;
			AottgButtonListDialog.Entry GStack_58;

			pGVar4 = (AottgButtonListDialog.Entry[])new AottgButtonListDialog.Entry[4];
			__this_00 = new Action(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgTutorialDialog_StartBasicTutorial);
			pSVar5 = AottgButtonListDialog.CloseThen(__this_00);
			GStack_58.Icon = null;
			GStack_58.Action = null;
			GStack_58.Variant = 0;
			GStack_58._4_4_ = 0;
			GStack_58.Key = null;
			GStack_58 = new AottgButtonListDialog.Entry(0, "MainMenu.TutorialPopup.BasicButton", "singleplayer", pSVar5);
			if (pGVar4 == null) {
				throw new NullReferenceException();
			}
			if ((int)pGVar4.Length != 0) {
				pGVar4[0].Icon = GStack_58.Icon;
				pGVar4[0].Action = GStack_58.Action;
				pGVar4[0].Variant = GStack_58.Variant;
				*(uint)&pGVar4[0].field_0x4 = GStack_58._4_4_;
				pGVar4[0].Key = GStack_58.Key;
				pSVar3 = "movie";
				pSVar2 = "MainMenu.TutorialPopup.VideoBasicTutorialsButton";
				pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
				pSVar5 = pGVar6.__9__9_0;
				if (pSVar5 == null) {
					if ((typeof(AottgTutorialDialog.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
					}
					pIVar1 = (object)pGVar6.__9;
					pSVar5 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgTutorialDialog_c_get_Entries_b__9_0);
					pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
					pGVar6.__9__9_0 = pSVar5;
				}
				GStack_58.Icon = null;
				GStack_58.Action = null;
				GStack_58.Variant = 0;
				GStack_58._4_4_ = 0;
				GStack_58.Key = null;
				GStack_58 = new AottgButtonListDialog.Entry(3, pSVar2, pSVar3, pSVar5);
				if ((pGVar4.Length & 0xfffffffe) != 0) {
					pGVar4[1].Icon = GStack_58.Icon;
					pGVar4[1].Action = GStack_58.Action;
					pGVar4[1].Variant = GStack_58.Variant;
					*(uint)&pGVar4[1].field_0x4 = GStack_58._4_4_;
					pGVar4[1].Key = GStack_58.Key;
					pSVar3 = "movie";
					pSVar2 = "MainMenu.TutorialPopup.VideoAdvancedTutorialsButton";
					pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
					pSVar5 = pGVar6.__9__9_1;
					if (pSVar5 == null) {
						if ((typeof(AottgTutorialDialog.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
						}
						pIVar1 = (object)pGVar6.__9;
						pSVar5 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgTutorialDialog_c_get_Entries_b__9_1);
						pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
						pGVar6.__9__9_1 = pSVar5;
					}
					GStack_58.Icon = null;
					GStack_58.Action = null;
					GStack_58.Variant = 0;
					GStack_58._4_4_ = 0;
					GStack_58.Key = null;
					GStack_58 = new AottgButtonListDialog.Entry(3, pSVar2, pSVar3, pSVar5);
					if (2 < (uint)pGVar4.Length) {
						pGVar4[2].Icon = GStack_58.Icon;
						pGVar4[2].Action = GStack_58.Action;
						pGVar4[2].Variant = GStack_58.Variant;
						*(uint)&pGVar4[2].field_0x4 = GStack_58._4_4_;
						pGVar4[2].Key = GStack_58.Key;
						pSVar3 = "movie";
						pSVar2 = "MainMenu.TutorialPopup.VideoMiscTutorialsButton";
						pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
						pSVar5 = pGVar6.__9__9_2;
						if (pSVar5 == null) {
							if ((typeof(AottgTutorialDialog.c)._2).cctor_finished_or_no_cctor == 0) {
								pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
							}
							pIVar1 = (object)pGVar6.__9;
							pSVar5 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgTutorialDialog_c_get_Entries_b__9_2);
							pGVar6 = typeof(AottgTutorialDialog.c).static_fields;
							pGVar6.__9__9_2 = pSVar5;
						}
						GStack_58.Icon = null;
						GStack_58.Action = null;
						GStack_58.Variant = 0;
						GStack_58._4_4_ = 0;
						GStack_58.Key = null;
						GStack_58 = new AottgButtonListDialog.Entry(3, pSVar2, pSVar3, pSVar5);
						if ((pGVar4.Length & 0xfffffffc) != 0) {
							pGVar4[3].Icon = GStack_58.Icon;
							pGVar4[3].Action = GStack_58.Action;
							pGVar4[3].Variant = GStack_58.Variant;
							*(uint)&pGVar4[3].field_0x4 = GStack_58._4_4_;
							pGVar4[3].Key = GStack_58.Key;
							return pGVar4;
						}
					}
				}
			}
			throw new IndexOutOfRangeException();
		}
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x57C43B0", Offset = "0x57C33B0", VA = "0x57C43B0")]
	private static void StartBasicTutorial()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c (Gisketch.Aottg2UI.Game.AottgTutorialDialog$$StartBasicTutorial): clean
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		InGameMiscSettings pSVar4;
		BoolSetting pSVar5;
		FloatSetting __this;
		InGameSet pSVar6;
		MultiplayerSettings pSVar7;

		MusicManager.PlayEffect();
		MusicManager.PlayTransition();
		pSVar1 = SettingsManager.InGameUI;
		if (pSVar1 != null) {
			pSVar1.SetDefault();
			pSVar2 = pSVar1.General;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.MapCategory, pSVar3 != null)) {
				pSVar3.Value = (Il2CppObject *)"Tutorial";
				pSVar2 = pSVar1.General;
				if ((pSVar2 != null) &&(pSVar3 = pSVar2.MapName, pSVar3 != null)) {
					pSVar3.Value = (Il2CppObject *)"Basic Tutorial";
					pSVar2 = pSVar1.General;
					if ((pSVar2 != null) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) {
						pSVar3.Value = (Il2CppObject *)"Map Logic";
						pSVar4 = pSVar1.Misc;
						if ((pSVar4 != null) &&(pSVar5 = pSVar4.AllowPlayerTitans, pSVar5 != null)) {
							pSVar5.Value = false;
							pSVar4 = pSVar1.Misc;
							if ((pSVar4 != null) &&(pSVar5 = pSVar4.EndlessRespawnEnabled, pSVar5 != null)) {
								pSVar5.Value = true;
								pSVar4 = pSVar1.Misc;
								if ((pSVar4 != null) &&(__this = pSVar4.EndlessRespawnTime, __this != null)) {
									__this.Value = 1.0;
									pSVar6 = SettingsManager.InGameCurrent;
									if (pSVar6 != null) {
										pSVar6.Copy((BaseSetting)pSVar1);
										pSVar7 = SettingsManager.MultiplayerSettings;
										if (pSVar7 != null) {
											pSVar7.ConnectOffline();
											pSVar7 = SettingsManager.MultiplayerSettings;
											if (pSVar7 != null) {
												pSVar7.StartRoom();
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x57C45D0", Offset = "0x57C35D0", VA = "0x57C45D0")]
	public AottgTutorialDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c (Gisketch.Aottg2UI.Game.AottgTutorialDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTutorialDialog.c.

	// Gisketch.Aottg2UI.Game.AottgTutorialDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgTutorialDialog.c();
		AottgTutorialDialog.c.__9 =(AottgTutorialDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgTutorialDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgTutorialDialog.<>c$$<get_Entries>b__9_0: 1 lines keep C-only constructs
	private void c__get_Entries_b__9_0(GisketchActionContext context)
	{
		AottgExternalLinks.Show(context, "https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgTutorialDialog.<>c$$<get_Entries>b__9_1: 1 lines keep C-only constructs
	private void c__get_Entries_b__9_1(GisketchActionContext context)
	{
		AottgExternalLinks.Show(context, "https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgTutorialDialog.<>c$$<get_Entries>b__9_2: 1 lines keep C-only constructs
	private void c__get_Entries_b__9_2(GisketchActionContext context)
	{
		AottgExternalLinks.Show(context, "https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH");
		return;
	}
}
