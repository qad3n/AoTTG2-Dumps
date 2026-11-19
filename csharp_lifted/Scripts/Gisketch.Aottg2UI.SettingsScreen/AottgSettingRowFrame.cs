// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200017A")]
internal sealed class AottgSettingRowFrame : AottgComponent
{
	[Token(Token = "0x4000889")]
	private const float TooltipIconGap = 8f;

	[Token(Token = "0x400088A")]
	private const float DirtyMarkerWidth = 18f;

	[Token(Token = "0x400088B")]
	private const float LabelGap = 6f;

	[Token(Token = "0x400088C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400088D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x400088E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x400088F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _labelBindKey;

	[Token(Token = "0x4000890")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _controlWidth;

	[Token(Token = "0x4000891")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _controlVisualWidth;

	[Token(Token = "0x4000892")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _tooltip;

	[Token(Token = "0x4000893")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _tooltipKey;

	[Token(Token = "0x4000894")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _searchTitle;

	[Token(Token = "0x4000895")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly string _searchKeywords;

	[Token(Token = "0x4000896")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly string _icon;

	[Token(Token = "0x4000897")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly string _warningVisibleKey;

	[Token(Token = "0x4000898")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly string _warningTooltipKey;

	[Token(Token = "0x4000899")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400089A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x400089B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private readonly Action<AottgUi> _buildControl;

	[Token(Token = "0x400089C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x5CBA430", Offset = "0x5CB9430", VA = "0x5CBA430")]
	public AottgSettingRowFrame(string id, string label, float controlWidth, Action<AottgUi> buildControl, [Optional] string tooltip, [Optional] string searchTitle, [Optional] string searchKeywords, [Optional] string icon, [Optional] float? controlVisualWidth, [Optional] string labelKey, [Optional] string tooltipKey, [Optional] string labelBindKey, [Optional] AottgSettingsSearchContext searchContext, [Optional] Func<string> dirtyValue, [Optional] string warningVisibleKey, [Optional] string warningTooltipKey, AottgSettingRowLayoutMode layoutMode = AottgSettingRowLayoutMode.Standard)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$.ctor): clean
		base();
		this._id = id;
		this._label = label;
		this._labelKey = labelKey;
		this._labelBindKey = labelBindKey;
		this._controlWidth = controlWidth;
		if (controlVisualWidth.hasValue != false) {
			controlWidth = controlVisualWidth.value;
		}
		this._controlVisualWidth = controlWidth;
		this._buildControl = buildControl;
		this._tooltip = tooltip;
		this._tooltipKey = tooltipKey;
		this._searchTitle = searchTitle;
		this._searchKeywords = searchKeywords;
		this._icon = icon;
		this._warningVisibleKey = warningVisibleKey;
		this._warningTooltipKey = warningTooltipKey;
		this._searchContext.GroupTitle = searchContext.GroupTitle;
		this._searchContext.CategoryTitle = searchContext.CategoryTitle;
		this._searchContext.GroupId = searchContext.GroupId;
		this._searchContext.ScreenTitle = searchContext.ScreenTitle;
		this._searchContext.CategoryId = searchContext.CategoryId;
		this._dirtyValue = dirtyValue;
		this._layoutMode = layoutMode;
		return;
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x5CC9CA0", Offset = "0x5CC8CA0", VA = "0x5CC9CA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$Build): 6 lines keep C-only constructs
		AottgSettingsSearchContext __this_00;
		Func<string> value;
		bool bVar1;
		Action<AottgUi> __this_01;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		String title;
		String keywords;
		String sectionTitle;
		MethodInfo method_00;
		String pSVar3;
		String* ppSVar4;
		String pSVar5;

		bVar1 = String.IsNullOrEmpty(this._id);
		if ((bVar1) || (this._buildControl == null)) {
			return;
		}
		GisketchResponsiveRowLayout.RegisterFactory();
		__this_01 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_0);
		pSVar5 = this._id;
		layout = this.RootLayout();
		if (ui != null) {
			pGVar2 = ui.Panel("clear", __this_01, pSVar5, layout, null);
			if (pGVar2 != null) {
				pGVar2.type = "ResponsiveRowLayout";
				pSVar5 = null;
				if (this._layoutMode == 1) {
					pSVar5 = "Compact";
				}
				pGVar2.value = pSVar5;
				__this_00 = &this._searchContext;
				bVar1 = String.IsNullOrEmpty(this._searchTitle);
				ppSVar4 = &this._label;
				if (!bVar1) {
					ppSVar4 = &this._searchTitle;
				}
				title = __this_00.Title(*ppSVar4);
				keywords = __this_00.Keywords(this._searchKeywords);
				pSVar5 = this._icon;
				pSVar3 = this._searchContext.CategoryId;
				sectionTitle = __this_00.SectionTitle;
				method_00 = (MethodInfo)AottgUi.Search(title, keywords, false, pSVar5, "setting", pSVar3, sectionTitle, false);
				pGVar2.search = (GisketchSearchDefinition)method_00;
				pSVar5 = this._id;
				pSVar3 = this.DirtyPath();
				value = this._dirtyValue;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				AottgSettingsDirtyRegistry.Register(pSVar5, pSVar3, value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x5CCA150", Offset = "0x5CC9150", VA = "0x5CCA150")]
	private void BuildControlShell(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildControlShell): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String id;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell_b__22_0);
		method_00 = (MethodInfo *)"-control-shell";
		id = String.Concat(this._id, "-control-shell");
		layout = this.ControlShellLayout();
		if (control == null) {
			throw new NullReferenceException();
		}
		control.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x5CCA330", Offset = "0x5CC9330", VA = "0x5CCA330")]
	private void BuildLabel(AottgUi row)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildLabel): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String id;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildLabel_b__23_0);
		method_00 = (MethodInfo *)"-label-cell";
		id = String.Concat(this._id, "-label-cell");
		layout = this.LabelLayout();
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x5CCA060", Offset = "0x5CC9060", VA = "0x5CCA060")]
	private string SearchTitle()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$SearchTitle): 4 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String* ppSVar3;

		bVar1 = String.IsNullOrEmpty(this._searchTitle);
		ppSVar3 = &this._label;
		if (!bVar1) {
			ppSVar3 = &this._searchTitle;
		}
		pSVar2 = (this._searchContext).Title(*ppSVar3);
		return pSVar2;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x5CCA0A0", Offset = "0x5CC90A0", VA = "0x5CCA0A0")]
	private string SearchKeywords()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$SearchKeywords): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x5CCA0B0", Offset = "0x5CC90B0", VA = "0x5CCA0B0")]
	private string DirtyPath()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$DirtyPath): 5 lines keep C-only constructs
		AottgSettingsSearchContext __this_00;
		bool bVar1;
		String pSVar2;
		String value;
		String* ppSVar3;

		__this_00 = &this._searchContext;
		bVar1 = String.IsNullOrEmpty(this._searchTitle);
		ppSVar3 = &this._label;
		if (!bVar1) {
			ppSVar3 = &this._searchTitle;
		}
		pSVar2 = __this_00.Title(*ppSVar3);
		value = __this_00.SectionTitle;
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return pSVar2;
		}
		pSVar2 = String.Concat(value, " > ", pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x5CCA5D0", Offset = "0x5CC95D0", VA = "0x5CCA5D0")]
	private void BuildDirtyMarker(AottgUi row)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildDirtyMarker): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		String pSVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		if (this._dirtyValue == null) {
			return;
		}
		AottgSettingsDirtyMarkerRuntime.RegisterFactory();
		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "AottgSettingsDirtyMarker";
			pSVar1 = String.Concat(this._id, "-dirty-marker");
			__this_00.id = pSVar1;
			__this_00.style = "clear";
			pSVar1 = this._id;
			pSVar1 = AottgSettingsDirtyRegistry.DirtyStateKey(pSVar1);
			__this_00.value = pSVar1;
			width = AottgUi.Points(18.0);
			height = AottgUi.Percent(100.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar2;
			if (row != null) {
				row.Add(__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x5CCA7E0", Offset = "0x5CC97E0", VA = "0x5CCA7E0")]
	private void BuildTooltip(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildTooltip): 1 lines keep C-only constructs
		bool bVar1;
		GisketchNodeDefinition __this_00;
		String pSVar2;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		float fVar4;

		bVar1 = String.IsNullOrEmpty(this._tooltip);
		if (bVar1) {
			bVar1 = String.IsNullOrEmpty(this._tooltipKey);
			if (bVar1) {
				return;
			}
		}
		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "Image";
			pSVar2 = String.Concat(this._id, "-info");
			__this_00.id = pSVar2;
			__this_00.sprite = "Icons/kenney-icons/information";
			__this_00.style = "settingInfoIcon";
			__this_00.tooltip = this._tooltip;
			__this_00.tooltipKey = this._tooltipKey;
			width = AottgUi.Points(24.0);
			height = AottgUi.Points(24.0);
			if (this._layoutMode == 1) {
				fVar4 = this._controlVisualWidth;
				fVar4 = Math.Min(fVar4, 300.0);
			}
			else {
				fVar4 = (this._controlWidth + this._controlVisualWidth) * 0.5;
			}
			pGVar3 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, fVar4 + 8.0, -10.0, 0.0, 0.0);
			__this_00.layout = pGVar3;
			if (control != null) {
				control.Add(__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x5CCAB40", Offset = "0x5CC9B40", VA = "0x5CCAB40")]
	private void BuildWarning(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildWarning): clean
		String str0;
		bool bVar1;
		GisketchNodeDefinition __this_00;
		String pSVar2;
		MethodInfo pMVar3;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar4;
		float offsetX;

		bVar1 = String.IsNullOrEmpty(this._warningVisibleKey);
		if (!bVar1) {
			pMVar3 = (MethodInfo)this._warningTooltipKey;
			bVar1 = String.IsNullOrEmpty((String)pMVar3);
			if (!bVar1) {
				AottgKeybindConflictWarningRuntime.RegisterFactory();
				__this_00 = new GisketchNodeDefinition();
				if (__this_00 != null) {
					__this_00.type = "AottgKeybindConflictWarning";
					pSVar2 = String.Concat(this._id, "-warning");
					__this_00.id = pSVar2;
					str0 = this._warningVisibleKey;
					pSVar2 = this._warningTooltipKey;
					if (str0 == null) {
						str0 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					if (pSVar2 == null) {
						pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					pMVar3 = (MethodInfo)String.Concat(str0, "\n", pSVar2);
					__this_00.value = (String)pMVar3;
					width = AottgUi.Points(24.0);
					height = AottgUi.Points(24.0);
					offsetX = this.WarningIconOffsetX();
					pGVar4 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, offsetX, -10.0, 0.0, 0.0);
					__this_00.layout = pGVar4;
					if (control != null) {
						control.Add(__this_00);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x5CCAE90", Offset = "0x5CC9E90", VA = "0x5CCAE90")]
	private GisketchLayoutDefinition ControlLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlLayout): clean
		GisketchLayoutDefinition pGVar1;
		float grow;
		float shrink;

		if (this._layoutMode == 1) {
			shrink = 0.0;
			grow = 0.0;
		}
		else {
			shrink = 1.0;
			grow = 1.0;
		}
		pGVar1 = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, grow, shrink);
		return pGVar1;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x5CCA230", Offset = "0x5CC9230", VA = "0x5CCA230")]
	private GisketchLayoutDefinition ControlShellLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlShellLayout): clean
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar1;
		float value;

		if (this._layoutMode == 1) {
			value = 300.0;
		}
		else {
			value = this._controlWidth;
		}
		width = AottgUi.Points(value);
		maxWidth = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Row", "FlexStart", "Center", null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x5CCAF80", Offset = "0x5CC9F80", VA = "0x5CCAF80")]
	private static GisketchLayoutDefinition ControlLaneLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlLaneLayout): clean
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Points(620.0);
		maxWidth = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Row", "FlexStart", "Center", null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x5CC9F10", Offset = "0x5CC8F10", VA = "0x5CC9F10")]
	private GisketchLayoutDefinition RootLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$RootLayout): 1 lines keep C-only constructs
		float gap;
		String alignItems;
		String direction;
		GisketchLength width;
		GisketchLength height;
		GisketchLength minHeight;
		GisketchLayoutDefinition pGVar1;
		String justify;
		bool bVar2;

		direction = "Row";
		alignItems = "Center";
		bVar2 = this._layoutMode == 1;
		justify = null;
		if (bVar2) {
			justify = "SpaceBetween";
		}
		gap = *(float)(&g_data_0100ac80 + (ulong)bVar2 * 4);
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(72.0);
		minHeight = AottgUi.Points(72.0);
		pGVar1 = AottgUi.Layout(direction, justify, alignItems, null, null, gap, width, height, null, minHeight, null, null, 0.0, 8.0, 6.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x5CCA410", Offset = "0x5CC9410", VA = "0x5CCA410")]
	private GisketchLayoutDefinition LabelLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$LabelLayout): clean
		int iVar1;
		GisketchLength width;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar2;
		float grow;
		float local_c;

		if (this._dirtyValue == null) {
			local_c = 24.0;
			iVar1 = this._layoutMode;
		}
		else {
			local_c = 0.0;
			iVar1 = this._layoutMode;
		}
		if (iVar1 == 1) {
			minWidth = AottgUi.Points(0.0);
			grow = 1.0;
			width = null;
		}
		else {
			width = AottgUi.Points(300.0);
			minWidth = AottgUi.Points(180.0);
			grow = 0.0;
		}
		pGVar2 = AottgUi.Layout("Row", null, "Center", null, null, 6.0, width, null, minWidth, null, null, null, 0.0, 0.0, 0.0, local_c, 0.0, 0.0, 0.0, 0.0, 0.0, grow, 1.0);
		return pGVar2;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x5CCAAA0", Offset = "0x5CC9AA0", VA = "0x5CCAAA0")]
	private float TooltipIconOffsetX()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$TooltipIconOffsetX): clean
		int iVar1;
		float fVar2;

		if (Il2CppMethodInitialized_075481f1 == false) {
			Il2CppMethodInitialized_075481f1 = true;
			iVar1 = this._layoutMode;
		}
		else {
			iVar1 = this._layoutMode;
		}
		if (iVar1 != 1) {
			return (this._controlWidth + this._controlVisualWidth) * 0.5 + 8.0;
		}
		fVar2 = this._controlVisualWidth;
		if (((typeof(Math))._2).cctor_finished_or_no_cctor == 0) {
		}
		fVar2 = Math.Min(fVar2, 300.0);
		return fVar2 + 8.0;
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x5CCADC0", Offset = "0x5CC9DC0", VA = "0x5CCADC0")]
	private float WarningIconOffsetX()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$WarningIconOffsetX): clean
		int iVar1;
		bool bVar2;
		float fVar3;

		if (Il2CppMethodInitialized_075481f1 == false) {
			Il2CppMethodInitialized_075481f1 = true;
			iVar1 = this._layoutMode;
		}
		else {
			iVar1 = this._layoutMode;
		}
		if (iVar1 == 1) {
			fVar3 = this._controlVisualWidth;
			if (((typeof(Math))._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar3 = Math.Min(fVar3, 300.0);
		}
		else {
			fVar3 = (this._controlWidth + this._controlVisualWidth) * 0.5;
		}
		bVar2 = String.IsNullOrEmpty(this._tooltip);
		if ((bVar2) && (bVar2 = String.IsNullOrEmpty(this._tooltipKey)) ) {
			return fVar3 + 8.0;
		}
		return fVar3 + 8.0 + 32.0;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__21_0: 1 lines keep C-only constructs
	private void Build_b__21_0(AottgUi row)
	{
		Action<AottgUi> __this_00;
		String id;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;

		this.BuildLabel(row);
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_Build_b__21_1);
		method_00 = (MethodInfo *)"-control";
		id = String.Concat(this._id, "-control");
		layout = this.ControlLayout();
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Panel("clear", __this_00, id, layout, null);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__21_1: 1 lines keep C-only constructs
	private void Build_b__21_1(AottgUi control)
	{
		Action<AottgUi> __this_00;
		String id;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;

		if (this._layoutMode == 1) {
			this.BuildControlShell(control);
			return;
		}
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_BuildControlShell);
		method_00 = (MethodInfo)this._id;
		id = String.Concat((String)method_00, "-control-lane");
		layout = AottgSettingRowFrame.ControlLaneLayout();
		if (control == null) {
			throw new NullReferenceException();
		}
		control.Panel("clear", __this_00, id, layout, null);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<BuildControlShell>b__22_0: clean
	private void BuildControlShell_b__22_0(AottgUi shell)
	{
		Action<AottgUi> pSVar1;

		pSVar1 = this._buildControl;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,shell,pSVar1.method);
		this.BuildTooltip(shell);
		this.BuildWarning(shell);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<BuildLabel>b__23_0: clean
	private void BuildLabel_b__23_0(AottgUi label)
	{
		String text;
		bool bVar1;
		String id;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;
		GisketchLength minWidth;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;

		this.BuildDirtyMarker(label);
		text = this._label;
		id = String.Concat(this._id, "-label");
		if (label == null) {
	label_05dcb4d6: ;
			throw new NullReferenceException();
		}
		pGVar2 = label.Text(text, "settingLabel", id, null, null);
		if (this._layoutMode == 1) {
			if (pGVar2 == null) goto label_05dcb4d6;
			pGVar2.tooltip = this._label;
			pGVar2.tooltipKey = this._labelKey;
			pGVar2.tooltipMode = "OverflowLabel";
		}
		else if (pGVar2 == null) goto label_05dcb4d6;
		pGVar2.textKey = this._labelKey;
		bVar1 = String.IsNullOrEmpty(this._labelBindKey);
		if (!bVar1) {
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 == null) goto label_05dcb4d6;
			__this_00.text = this._labelBindKey;
			pGVar2.bind = __this_00;
		}
		minWidth = AottgUi.Points(0.0);
		height = AottgUi.Points(60.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, height, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		pGVar2.layout = pGVar3;
		return;
	}
}
