// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgToolsDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using ApplicationManagers;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B6")]
[AottgDialog("tools")]
public sealed class AottgToolsDialog : AottgButtonListDialog
{
	[Token(Token = "0x4000DD8")]
	public const string Id = "tools";

	[Token(Token = "0x170001CF")]
	protected override string Title
	{
		[Token(Token = "0x6001071")]
		[Address(RVA = "0x57C3A00", Offset = "0x57C2A00", VA = "0x57C3A00", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c (Gisketch.Aottg2UI.Game.AottgToolsDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Intro.ToolsButton");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001D0")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001072")]
		[Address(RVA = "0x57C3A60", Offset = "0x57C2A60", VA = "0x57C3A60", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c (Gisketch.Aottg2UI.Game.AottgToolsDialog$$get_TitleIcon): clean
			return "wrench";
		}
	}

	[Token(Token = "0x170001D1")]
	protected override Entry[] Entries
	{
		[Token(Token = "0x6001073")]
		[Address(RVA = "0x57C3A90", Offset = "0x57C2A90", VA = "0x57C3A90", Slot = "22")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c (Gisketch.Aottg2UI.Game.AottgToolsDialog$$get_Entries): 7 lines keep C-only constructs
			AottgButtonListDialog.Entry[] pGVar1;
			Action __this_00;
			Action<GisketchActionContext> action;
			AottgButtonListDialog.Entry GStack_b8;
			AottgButtonListDialog.Entry GStack_90;
			AottgButtonListDialog.Entry GStack_70;
			AottgButtonListDialog.Entry GStack_50;
			AottgButtonListDialog.Entry GStack_30;

			pGVar1 = (AottgButtonListDialog.Entry[])new AottgButtonListDialog.Entry[5];
			GStack_30 = AottgToolsDialog.SceneEntry("MapEditorButton", "material-icons/map", 3);
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			if ((int)pGVar1.Length != 0) {
				pGVar1[0].Icon = GStack_30.Icon;
				pGVar1[0].Action = GStack_30.Action;
				pGVar1[0].Variant = GStack_30.Variant;
				*(uint)&pGVar1[0].field_0x4 = GStack_30._4_4_;
				pGVar1[0].Key = GStack_30.Key;
				GStack_50 = AottgToolsDialog.SceneEntry("CharacterEditorButton", "singleplayer", 4);
				if ((pGVar1.Length & 0xfffffffe) != 0) {
					pGVar1[1].Icon = GStack_50.Icon;
					pGVar1[1].Action = GStack_50.Action;
					pGVar1[1].Variant = GStack_50.Variant;
					*(uint)&pGVar1[1].field_0x4 = GStack_50._4_4_;
					pGVar1[1].Key = GStack_50.Key;
					GStack_70 = AottgToolsDialog.SceneEntry("SnapshotViewerButton", "video", 5);
					if (2 < (uint)pGVar1.Length) {
						pGVar1[2].Icon = GStack_70.Icon;
						pGVar1[2].Action = GStack_70.Action;
						pGVar1[2].Variant = GStack_70.Variant;
						*(uint)&pGVar1[2].field_0x4 = GStack_70._4_4_;
						pGVar1[2].Key = GStack_70.Key;
						GStack_90 = AottgToolsDialog.SceneEntry("GalleryButton", "menuGrid", 6);
						if ((pGVar1.Length & 0xfffffffc) != 0) {
							pGVar1[3].Icon = GStack_90.Icon;
							pGVar1[3].Action = GStack_90.Action;
							pGVar1[3].Variant = GStack_90.Variant;
							*(uint)&pGVar1[3].field_0x4 = GStack_90._4_4_;
							pGVar1[3].Key = GStack_90.Key;
							__this_00 = new Action(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_Open);
							action = AottgButtonListDialog.CloseThen(__this_00);
							GStack_b8.Icon = null;
							GStack_b8.Action = null;
							GStack_b8.Variant = 0;
							GStack_b8._4_4_ = 0;
							GStack_b8.Key = null;
							GStack_b8 = new AottgButtonListDialog.Entry(3, "MainMenu.ToolsPopup.AdvancedConfigurationButton", "gear", action);
							if (4 < (uint)pGVar1.Length) {
								pGVar1[4].Icon = GStack_b8.Icon;
								pGVar1[4].Action = GStack_b8.Action;
								pGVar1[4].Variant = GStack_b8.Variant;
								*(uint)&pGVar1[4].field_0x4 = GStack_b8._4_4_;
								pGVar1[4].Key = GStack_b8.Key;
								return pGVar1;
							}
						}
					}
				}
			}
			throw new IndexOutOfRangeException();
		}
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x57C3D60", Offset = "0x57C2D60", VA = "0x57C3D60")]
	private static Entry SceneEntry(string item, string icon, SceneName scene)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c (Gisketch.Aottg2UI.Game.AottgToolsDialog$$SceneEntry): 2 lines keep C-only constructs
		AottgToolsDialog.c__DisplayClass7_0 __this;
		String key;
		Action __this_00;
		Action<GisketchActionContext> action;

		__this = new AottgToolsDialog.c__DisplayClass7_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.scene = scene;
		key = String.Concat("MainMenu.ToolsPopup.", item);
		__this_00 = new Action((object)__this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgToolsDialog_c__DisplayClass7_0_SceneEntry_b__0);
		action = AottgButtonListDialog.CloseThen(__this_00);
		*(ulong)&__return_storage_ptr__.fields = 0;
		__return_storage_ptr__.Key = null;
		__return_storage_ptr__.Icon = null;
		__return_storage_ptr__.Action = null;
		__return_storage_ptr__ = new AottgButtonListDialog.Entry(3, key, icon, action);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x57C3E80", Offset = "0x57C2E80", VA = "0x57C3E80")]
	public AottgToolsDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c (Gisketch.Aottg2UI.Game.AottgToolsDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgToolsDialog.c.

	// Gisketch.Aottg2UI.Game.AottgToolsDialog.<>c__DisplayClass7_0$$.ctor: clean
	private void c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgToolsDialog.<>c__DisplayClass7_0$$<SceneEntry>b__0: clean
	private void c__DisplayClass7_0__SceneEntry_b__0()
	{
		SceneLoader.LoadScene(this.scene);
		return;
	}
}
