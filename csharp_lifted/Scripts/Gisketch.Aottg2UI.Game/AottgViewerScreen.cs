// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgViewerScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000359")]
public abstract class AottgViewerScreen : AottgScreen
{
	[Token(Token = "0x40010CA")]
	private const string CounterKey = "viewer.counter";

	[Token(Token = "0x40010CB")]
	private const float CounterMargin = 24f;

	[Token(Token = "0x40010CC")]
	private const float CounterWidth = 160f;

	[Token(Token = "0x40010CD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x40010CE")]
	[FieldOffset(Offset = "0x8")]
	protected static readonly AottgBrushSidePanelOption[] StepOptions;

	[Token(Token = "0x17000242")]
	protected abstract string ViewerId
	{
		[Token(Token = "0x60014DF")]
		get;
	}

	[Token(Token = "0x17000243")]
	protected abstract string PanelTitleKey
	{
		[Token(Token = "0x60014E0")]
		get;
	}

	[Token(Token = "0x17000244")]
	protected virtual AottgBrushSidePanelOption[] Options
	{
		[Token(Token = "0x60014E1")]
		[Address(RVA = "0x5819620", Offset = "0x5818620", VA = "0x5819620", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c (Gisketch.Aottg2UI.Game.AottgViewerScreen$$get_Options): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545714 == false) {
				Il2CppMethodInitialized_07545714 = true;
				uVar1 = (typeof(AottgViewerScreen)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgViewerScreen)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgViewerScreen.StepOptions;
			}
			return *(AottgBrushSidePanelOption[]*)((long)(typeof(AottgViewerScreen)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000245")]
	protected override string RootStyle
	{
		[Token(Token = "0x60014E2")]
		[Address(RVA = "0x5819690", Offset = "0x5818690", VA = "0x5819690", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c (Gisketch.Aottg2UI.Game.AottgViewerScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x17000246")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x58196C0", Offset = "0x58186C0", VA = "0x58196C0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c (Gisketch.Aottg2UI.Game.AottgViewerScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x5819790", Offset = "0x5818790", VA = "0x5819790", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c (Gisketch.Aottg2UI.Game.AottgViewerScreen$$Build): 2 lines keep C-only constructs
		Action<AottgUi> pSVar1;
		String pSVar2;
		GisketchLength pGVar3;
		GisketchLength height;
		GisketchLayoutDefinition pGVar4;

		pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_0);
		pSVar2 = (String)this.unknown();
		pSVar2 = String.Concat(pSVar2, "-side-panel-layer");
		pGVar3 = AottgUi.Percent(100.0);
		height = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar3, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("default", pSVar1, pSVar2, pGVar4, null);
		pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_1);
		pSVar2 = (String)this.unknown();
		pSVar2 = String.Concat(pSVar2, "-counter-layer");
		pGVar3 = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Layout("Column", null, "FlexEnd", "Absolute", null, 0.0, pGVar3, null, null, null, null, null, 24.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		ui.Panel("clear", pSVar1, pSVar2, pGVar4, null);
		return;
	}

	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x5819A70", Offset = "0x5818A70", VA = "0x5819A70")]
	public static void SetCounter(int position, int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c (Gisketch.Aottg2UI.Game.AottgViewerScreen$$SetCounter): 1 lines keep C-only constructs
		GisketchUIState __this;
		GisketchUIRoot pGVar1;
		String pSVar2;
		String str2;
		int local_18;
		int local_14;

		_local_18 = CONCAT44(position, count);
		pGVar1 = AottgGisketchUiHost.Root;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		__this = pGVar1._State_k__BackingField;
		if (__this != null) {
			pSVar2 = local_14.ToString();
			str2 = local_18.ToString();
			pSVar2 = String.Concat(pSVar2, " / ", str2);
			__this.Set("viewer.counter", pSVar2);
		}
		return;
	}

	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x5819B10", Offset = "0x5818B10", VA = "0x5819B10")]
	protected AottgViewerScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c (Gisketch.Aottg2UI.Game.AottgViewerScreen$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c.

	// Gisketch.Aottg2UI.Game.AottgViewerScreen$$.cctor: 6 lines keep C-only constructs
	static AottgViewerScreen()
	{
		AottgBrushSidePanelOption[] pGVar2;
		AottgBrushSidePanelOption local_108;
		AottgBrushSidePanelOption local_b8;
		AottgBrushSidePanelOption local_68;

		pGVar2 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[1];
		local_68.Searchable = false;
		local_68._49_7_ = 0;
		local_68.Tooltip = null;
		local_68.ActionId = null;
		local_68.Action = null;
		local_68.TextKey = null;
		local_68.Icon = null;
		local_68._text = null;
		local_68.Id = null;
		local_68.StackedOptions = null;
		local_68 = new AottgBrushSidePanelOption("back", "Common.Back", null, "viewer.exit", null, "exitLeft", false, null, null);
		if (pGVar2 == null) {
	label_05919ec1: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar2.Length != 0) {
			pGVar2[0].StackedOptions = local_68.StackedOptions;
			pGVar2[0].Searchable = local_68.Searchable;
			*(undefined7)&pGVar2[0].field_0x31 = local_68._49_7_;
			pGVar2[0].Tooltip = local_68.Tooltip;
			pGVar2[0].ActionId = local_68.ActionId;
			pGVar2[0].Action = local_68.Action;
			pGVar2[0].TextKey = local_68.TextKey;
			pGVar2[0].Icon = local_68.Icon;
			pGVar2[0]._text = local_68._text;
			pGVar2[0].Id = local_68.Id;
			AottgViewerScreen.Footer = pGVar2;
			pGVar2 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[2];
			local_b8.Searchable = false;
			local_b8._49_7_ = 0;
			local_b8.Tooltip = null;
			local_b8.ActionId = null;
			local_b8.Action = null;
			local_b8.TextKey = null;
			local_b8.Icon = null;
			local_b8._text = null;
			local_b8.Id = null;
			local_b8.StackedOptions = null;
			local_b8 = new AottgBrushSidePanelOption("previous", "Common.Previous", null, "viewer.previous", null, "arrowLeft", false, null, null);
			if (pGVar2 == null) goto label_05919ec1;
			if ((int)pGVar2.Length != 0) {
				pGVar2[0].StackedOptions = local_b8.StackedOptions;
				pGVar2[0].Searchable = local_b8.Searchable;
				*(undefined7)&pGVar2[0].field_0x31 = local_b8._49_7_;
				pGVar2[0].Tooltip = local_b8.Tooltip;
				pGVar2[0].ActionId = local_b8.ActionId;
				pGVar2[0].Action = local_b8.Action;
				pGVar2[0].TextKey = local_b8.TextKey;
				pGVar2[0].Icon = local_b8.Icon;
				pGVar2[0]._text = local_b8._text;
				pGVar2[0].Id = local_b8.Id;
				local_108.Searchable = false;
				local_108._49_7_ = 0;
				local_108.Tooltip = null;
				local_108.ActionId = null;
				local_108.Action = null;
				local_108.TextKey = null;
				local_108.Icon = null;
				local_108._text = null;
				local_108.Id = null;
				local_108.StackedOptions = null;
				local_108 = new AottgBrushSidePanelOption("next", "Common.Next", null, "viewer.next", null, "arrowRight", false, null, null);
				if ((pGVar2.Length & 0xfffffffe) != 0) {
					pGVar2[1].StackedOptions = local_108.StackedOptions;
					pGVar2[1].Searchable = local_108.Searchable;
					*(undefined7)&pGVar2[1].field_0x31 = local_108._49_7_;
					pGVar2[1].Tooltip = local_108.Tooltip;
					pGVar2[1].ActionId = local_108.ActionId;
					pGVar2[1].Action = local_108.Action;
					pGVar2[1].TextKey = local_108.TextKey;
					pGVar2[1].Icon = local_108.Icon;
					pGVar2[1]._text = local_108._text;
					pGVar2[1].Id = local_108.Id;
					AottgViewerScreen.StepOptions = pGVar2;
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Gisketch.Aottg2UI.Game.AottgViewerScreen$$<Build>b__15_0: clean
	private void Build_b__15_0(AottgUi panel)
	{
		AottgBrushSidePanelOption[] footerOptions;
		String titleKey;
		AottgBrushSidePanelOption[] options;
		AottgBrushSidePanel __this_00;

		titleKey = (String)this.unknown() ;
		options = this.get_Options();
		footerOptions = AottgViewerScreen.Footer;
		__this_00 = new AottgBrushSidePanel(titleKey, options, footerOptions, 0.0);
		if (panel == null) {
			throw new NullReferenceException();
		}
		panel.Component((AottgComponent)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgViewerScreen$$<Build>b__15_1: 1 lines keep C-only constructs
	private void Build_b__15_1(AottgUi layer)
	{
		Action<AottgUi> __this_00;
		String pSVar1;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen_Build_b__15_2);
		pSVar1 = (String)this.unknown();
		pSVar1 = String.Concat(pSVar1, "-counter-card");
		width = AottgUi.Points(160.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (layer == null) {
			throw new NullReferenceException();
		}
		layer.Panel("card", __this_00, pSVar1, layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgViewerScreen$$<Build>b__15_2: clean
	private void Build_b__15_2(AottgUi card)
	{
		String text;
		String pSVar1;

		text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar1 = (String)this.unknown();
		pSVar1 = String.Concat(pSVar1, "-counter");
		if (card == null) {
			throw new NullReferenceException();
		}
		card.Text(text, "inGameText", pSVar1, "viewer.counter", null);
		return;
	}
}
