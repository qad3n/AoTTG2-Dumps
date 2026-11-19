// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSnapshotViewerScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200035B")]
[AottgScreen("snapshot-viewer", TitleKey = "MainMenu.ToolsPopup.SnapshotViewerButton", BackActionId = "viewer.exit")]
public sealed class AottgSnapshotViewerScreen : AottgViewerScreen
{
	[Token(Token = "0x40010D1")]
	public const string Id = "snapshot-viewer";

	[Token(Token = "0x40010D2")]
	private const string TitleKey = "MainMenu.ToolsPopup.SnapshotViewerButton";

	[Token(Token = "0x40010D3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] SnapshotOptions;

	[Token(Token = "0x17000249")]
	protected override string ViewerId
	{
		[Token(Token = "0x60014EE")]
		[Address(RVA = "0x581A2E0", Offset = "0x58192E0", VA = "0x581A2E0", Slot = "7")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSnapshotViewerScreen.c (Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$get_ViewerId): clean
			return "snapshot-viewer";
		}
	}

	[Token(Token = "0x1700024A")]
	protected override string PanelTitleKey
	{
		[Token(Token = "0x60014EF")]
		[Address(RVA = "0x581A310", Offset = "0x5819310", VA = "0x581A310", Slot = "8")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSnapshotViewerScreen.c (Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$get_PanelTitleKey): clean
			return "MainMenu.ToolsPopup.SnapshotViewerButton";
		}
	}

	[Token(Token = "0x1700024B")]
	protected override AottgBrushSidePanelOption[] Options
	{
		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x581A340", Offset = "0x5819340", VA = "0x581A340", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSnapshotViewerScreen.c (Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$get_Options): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545722 == false) {
				Il2CppMethodInitialized_07545722 = true;
				uVar1 = (typeof(AottgSnapshotViewerScreen)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgSnapshotViewerScreen)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgSnapshotViewerScreen.SnapshotOptions;
			}
			return *(AottgBrushSidePanelOption[]*)(typeof(AottgSnapshotViewerScreen)).static_fields;
		}
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x581A3B0", Offset = "0x58193B0", VA = "0x581A3B0")]
	public AottgSnapshotViewerScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSnapshotViewerScreen.c (Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545723 == false) {
			Il2CppMethodInitialized_07545723 = true;
			uVar1 = (typeof(AottgViewerScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgViewerScreen)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSnapshotViewerScreen.c.

	// Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen$$.cctor: 7 lines keep C-only constructs
	static AottgSnapshotViewerScreen()
	{
		AottgBrushSidePanelOption[] pGVar1;
		String pSVar2;
		String pSVar3;
		String pSVar4;
		String pSVar5;
		String pSVar6;
		Action<GisketchActionContext> pSVar7;
		String pSVar8;
		bool bVar9;
		undefined7 uVar10;
		AottgBrushSidePanelOption[] pGVar11;
		AottgBrushSidePanelOption GStack_58;

		pGVar11 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[3];
		pGVar1 = AottgViewerScreen.StepOptions;
		if (pGVar1 == null) {
	label_0591a672: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length != 0) {
			if (pGVar11 == null) goto label_0591a672;
			if ((int)pGVar11.Length != 0) {
				pSVar2 = pGVar1[0]._text;
				pSVar3 = pGVar1[0].Id;
				pSVar4 = pGVar1[0].TextKey;
				pSVar5 = pGVar1[0].Icon;
				pSVar6 = pGVar1[0].ActionId;
				pSVar7 = pGVar1[0].Action;
				bVar9 = pGVar1[0].Searchable;
				uVar10 = *(undefined7)&pGVar1[0].field_0x31;
				pSVar8 = pGVar1[0].Tooltip;
				pGVar11[0].StackedOptions = pGVar1[0].StackedOptions;
				pGVar11[0].Searchable = bVar9;
				*(undefined7)&pGVar11[0].field_0x31 = uVar10;
				pGVar11[0].Tooltip = pSVar8;
				pGVar11[0].ActionId = pSVar6;
				pGVar11[0].Action = pSVar7;
				pGVar11[0].TextKey = pSVar4;
				pGVar11[0].Icon = pSVar5;
				pGVar11[0]._text = pSVar2;
				pGVar11[0].Id = pSVar3;
				pGVar1 = AottgViewerScreen.StepOptions;
				if (pGVar1 == null) goto label_0591a672;
				if (((pGVar1.Length & 0xfffffffe) != 0) && ((pGVar11.Length & 0xfffffffe) != 0)) {
					pSVar2 = pGVar1[1]._text;
					pSVar3 = pGVar1[1].Id;
					pSVar4 = pGVar1[1].TextKey;
					pSVar5 = pGVar1[1].Icon;
					pSVar6 = pGVar1[1].ActionId;
					pSVar7 = pGVar1[1].Action;
					bVar9 = pGVar1[1].Searchable;
					uVar10 = *(undefined7)&pGVar1[1].field_0x31;
					pSVar8 = pGVar1[1].Tooltip;
					pGVar11[1].StackedOptions = pGVar1[1].StackedOptions;
					pGVar11[1].Searchable = bVar9;
					*(undefined7)&pGVar11[1].field_0x31 = uVar10;
					pGVar11[1].Tooltip = pSVar8;
					pGVar11[1].ActionId = pSVar6;
					pGVar11[1].Action = pSVar7;
					pGVar11[1].TextKey = pSVar4;
					pGVar11[1].Icon = pSVar5;
					pGVar11[1]._text = pSVar2;
					pGVar11[1].Id = pSVar3;
					GStack_58.Searchable = false;
					GStack_58._49_7_ = 0;
					GStack_58.Tooltip = null;
					GStack_58.ActionId = null;
					GStack_58.Action = null;
					GStack_58.TextKey = null;
					GStack_58.Icon = null;
					GStack_58._text = null;
					GStack_58.Id = null;
					GStack_58.StackedOptions = null;
					GStack_58 = new AottgBrushSidePanelOption("save", "Common.Save", null, "viewer.snapshot.save", null, "save", false, null, null);
					if (2 < (uint)pGVar11.Length) {
						pGVar11[2].StackedOptions = GStack_58.StackedOptions;
						pGVar11[2].Searchable = GStack_58.Searchable;
						*(undefined7)&pGVar11[2].field_0x31 = GStack_58._49_7_;
						pGVar11[2].Tooltip = GStack_58.Tooltip;
						pGVar11[2].ActionId = GStack_58.ActionId;
						pGVar11[2].Action = GStack_58.Action;
						pGVar11[2].TextKey = GStack_58.TextKey;
						pGVar11[2].Icon = GStack_58.Icon;
						pGVar11[2]._text = GStack_58._text;
						pGVar11[2].Id = GStack_58.Id;
						AottgSnapshotViewerScreen.SnapshotOptions = pGVar11;
						return;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
