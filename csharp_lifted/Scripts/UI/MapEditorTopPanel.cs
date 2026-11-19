// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorTopPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorTopPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTopPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008D3")]
internal class MapEditorTopPanel : HeadedPanel
{
	[Token(Token = "0x20008D4")]
	public enum LayerOption
	{
		[Token(Token = "0x4002C9F")]
		All,
		[Token(Token = "0x4002CA0")]
		Active,
		[Token(Token = "0x4002CA1")]
		Inactive,
		[Token(Token = "0x4002CA2")]
		Visible,
		[Token(Token = "0x4002CA3")]
		Invisible,
		[Token(Token = "0x4002CA4")]
		Static,
		[Token(Token = "0x4002CA5")]
		NonStatic,
		[Token(Token = "0x4002CA6")]
		Colliders,
		[Token(Token = "0x4002CA7")]
		Triggers,
		[Token(Token = "0x4002CA8")]
		NoColliders,
		[Token(Token = "0x4002CA9")]
		Networked,
		[Token(Token = "0x4002CAA")]
		NonNetworked,
		[Token(Token = "0x4002CAB")]
		NavMesh
	}

	[Token(Token = "0x4002C86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntSetting _dropdownSelection;

	[Token(Token = "0x4002C87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private IntSetting _toolDropdownSelection;

	[Token(Token = "0x4002C88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _playMode;

	[Token(Token = "0x4002C89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSetSetting<int> _gridSelection;

	[Token(Token = "0x4002C8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly HashSetSetting<int> _layerSelection;

	[Token(Token = "0x4002C8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static bool _lightsEnabled;

	[Token(Token = "0x4002C8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002C8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002C8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _currentMap;

	[Token(Token = "0x4002C8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<DropdownSelectElement> _dropdowns;

	[Token(Token = "0x4002C90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MultiSelectDropdownElement _gridDropdown;

	[Token(Token = "0x4002C91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private MultiSelectDropdownElement _layerDropdown;

	[Token(Token = "0x4002C92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private DropdownSelectElement _playModeDropdown;

	[Token(Token = "0x4002C93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _gizmoOrientationButton;

	[Token(Token = "0x4002C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _snapButton;

	[Token(Token = "0x4002C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private GameObject _sideToolbar;

	[Token(Token = "0x4002C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private GameObject _positionButton;

	[Token(Token = "0x4002C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private GameObject _rotationButton;

	[Token(Token = "0x4002C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private GameObject _scaleButton;

	[Token(Token = "0x4002C99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private GameObject _lightButton;

	[Token(Token = "0x4002C9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private RawImage _gridIcon;

	[Token(Token = "0x4002C9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RawImage _layersIcon;

	[Token(Token = "0x4002C9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private string _selectedTool;

	[Token(Token = "0x4002C9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private bool _playModeExplicitlySelected;

	[Token(Token = "0x17000EB9")]
	protected override float Width
	{
		[Token(Token = "0x600540A")]
		[Address(RVA = "0x5C9CFF0", Offset = "0x5C9BFF0", VA = "0x5C9CFF0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_Width): clean
			return 1960.0;
		}
	}

	[Token(Token = "0x17000EBA")]
	protected override float Height
	{
		[Token(Token = "0x600540B")]
		[Address(RVA = "0x5C9D000", Offset = "0x5C9C000", VA = "0x5C9D000", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_Height): clean
			return 60.0;
		}
	}

	[Token(Token = "0x17000EBB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600540C")]
		[Address(RVA = "0x5C9D010", Offset = "0x5C9C010", VA = "0x5C9D010", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000EBC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600540D")]
		[Address(RVA = "0x5C9D020", Offset = "0x5C9C020", VA = "0x5C9D020", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000EBD")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600540E")]
		[Address(RVA = "0x5C9D030", Offset = "0x5C9C030", VA = "0x5C9D030", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_VerticalSpacing): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000EBE")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600540F")]
		[Address(RVA = "0x5C9D040", Offset = "0x5C9C040", VA = "0x5C9D040", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000EBF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005410")]
		[Address(RVA = "0x5C9D050", Offset = "0x5C9C050", VA = "0x5C9D050", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_VerticalPadding): clean
			return 10;
		}
	}

	[Token(Token = "0x17000EC0")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6005411")]
		[Address(RVA = "0x5C9D060", Offset = "0x5C9C060", VA = "0x5C9D060", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$get_ThemePanel): clean
			return "MapEditor";
		}
	}

	[Token(Token = "0x6005412")]
	[Address(RVA = "0x5C9D090", Offset = "0x5C9C090", VA = "0x5C9D090", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$Setup): 108 lines keep C-only constructs
		int piVar1;
		StringSetting* ppSVar2;
		byte bVar3;
		uint uVar4;
		uint uVar5;
		MapEditorSettings pSVar6;
		List<DropdownSelectElement> pSVar7;
		DropdownSelectElement[] pUVar8;
		HashSetSetting<int> pSVar9;
		StringSetting pSVar10;
		MapScript pMVar11;
		Object[] pSVar12;
		Il2CppType handle;
		MapEditorTopPanel pUVar13;
		bool bVar14;
		String pSVar15;
		GameObject pUVar16;
		List<string> pSVar17;
		object pIVar18;
		ulong uVar19;
		String[] pSVar20;
		UnityAction pUVar21;
		DropdownSelectElement pUVar22;
		HoverTooltip pUVar23;
		String pSVar24;
		Type[] components;
		Type pSVar25;
		Transform pUVar26;
		LayoutElement pUVar27;
		MultiSelectDropdownElement pUVar28;
		RawImage pUVar29;
		Action pSVar30;
		String* ppSVar31;
		System_Collections_Generic_List_TSource__o __this_00;
		MethodInfo pMVar32;
		MapEditorTopPanel __this_01;
		MapEditorGameManager pGVar33;
		Il2CppClass item;
		MapEditorGameManager* targetAddress;
		ulong uVar34;
		MethodInfo pMVar35;
		MethodInfo pMVar36;
		MapEditorMenu pUVar37;
		Il2CppClass pIVar38;
		IntSetting pSVar39;
		MethodInfo in_R9;
		Color iconColor;
		Color normal;
		Color highlighted;
		Nullable<float> SStack_88;
		MethodInfo pMStack_80;
		Transform pUStack_78;
		MapEditorTopPanel pUStack_70;
		IntSetting pSStack_68;
		Nullable<float> SStack_60;
		Nullable<float> SStack_58;
		Nullable<float> SStack_50;
		StringSetting* ppSStack_48;
		MapEditorGameManager* ppGStack_40;
		IntSetting pSStack_38;

		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar37 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar37 != null) goto label_05d9d568;
	label_05d9d5e6: ;
			this._menu = null;
		}
		else {
			pUVar37 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar37 == null) goto label_05d9d5e6;
	label_05d9d568: ;
			pGVar33 = (MapEditorGameManager)typeof(MapEditorMenu);
			bVar3 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar37.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseGameManager)pUVar37.klass)._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapEditorMenu))) goto label_05d9f4ed;
			this._menu = pUVar37;
			if (((((BaseGameManager)pUVar37.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseGameManager)pUVar37.klass)._2).typeHierarchy[(ulong)bVar3 - 1] !=(Il2CppClass)pGVar33)) goto label_05d9f4ed;
		}
		pSVar6 = SettingsManager.MapEditorSettings;
		if (pSVar6 == null) goto label_05d9f4e3;
		ppSVar2 = &this._currentMap;
		this._currentMap = pSVar6.CurrentMap;
		pGVar33 = typeof(MapEditorGameManager);
		pUVar37 = (MapEditorMenu)SceneLoader.CurrentGameManager;
		if (pUVar37 == null) {
			this._gameManager = null;
		}
		else {
			bVar3 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar37.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseGameManager)pUVar37.klass)._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapEditorGameManager))) {
	label_05d9f4ed: ;
				throw new InvalidCastException();
			}
			this._gameManager = (MapEditorGameManager)pUVar37;
			if (((((BaseGameManager)pUVar37.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseGameManager)pUVar37.klass)._2).typeHierarchy[(ulong)bVar3 - 1] !=(Il2CppClass)pGVar33)) goto label_05d9f4ed;
		}
		targetAddress = &this._gameManager;
		pSStack_68 = (Settings_IntSetting_o *)"MapEditor";
		pSVar15 = this.get_ThemePanel();
		pMStack_80 = new ElementStyle(0x18, 0.0, 20.0, pSVar15);
		pUStack_70 = this;
		pUVar16 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 10.0, 3);
		if (pUVar16 == null) goto label_05d9f4e3;
		pUStack_78 = pUVar16.transform;
		pSVar17 = new List<string>();
		pIVar18 = new string[10];
		if (pIVar18 == null) goto label_05d9f4e3;
		ppGStack_40 = targetAddress;
		if (*(int)&pIVar18[1].monitor == 0) goto label_05d9f4e8;
		pIVar18[2].klass = (Il2CppClass *)"New";
		if (((ulong)pIVar18[1].monitor & 0xfffffffe) == 0) goto label_05d9f4e8;
		pIVar18[2].monitor = "Open";
		if (*(uint)&pIVar18[1].monitor < 3) goto label_05d9f4e8;
		pIVar18[3].klass = (Il2CppClass *)"Rename";
		if (((ulong)pIVar18[1].monitor & 0xfffffffc) == 0) goto label_05d9f4e8;
		pIVar18[3].monitor = "Save";
		if (*(uint)&pIVar18[1].monitor < 5) goto label_05d9f4e8;
		pIVar18[4].klass = (Il2CppClass *)"Import";
		if (*(uint)&pIVar18[1].monitor < 6) goto label_05d9f4e8;
		pIVar18[4].monitor = "Export";
		if (*(uint)&pIVar18[1].monitor < 7) goto label_05d9f4e8;
		pIVar18[5].klass = (Il2CppClass *)"LoadPreset";
		if (((ulong)pIVar18[1].monitor & 0xfffffff8) == 0) goto label_05d9f4e8;
		pIVar18[5].monitor = "LoadAutosave";
		if (*(uint)&pIVar18[1].monitor < 9) goto label_05d9f4e8;
		pIVar18[6].klass = (Il2CppClass *)"Quit";
		ppSStack_48 = ppSVar2;
		if (*(uint)&pIVar18[1].monitor < 10) goto label_05d9f4e8;
		pIVar18[6].monitor = "SaveQuit";
		if (0 < (int)pIVar18[1].monitor) {
			if (pSVar17 == null) {
				pIVar38 = pIVar18[2].klass;
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_07548101 != false) goto label_05d9f52f;
	label_05d9f5b9: ;
					g_data_07548101 = true;
					uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_07548101 == false) goto label_05d9f5b9;
	label_05d9f52f: ;
					uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar4 == 0) {
				}
				item = (Il2CppClass *)"";
				pSVar39 = (Settings_IntSetting_o *)"Common";
				goto label_05d9f59a;
			}
			uVar19 = (ulong)pIVar18[1].monitor & 0xffffffff;
			uVar34 = 0;
			do {
				if (uVar19 <= uVar34) goto label_05d9f4e8;
				pIVar38 = (&pIVar18[2].klass)[uVar34];
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_07548101 != false) goto label_05d9d990;
	label_05d9da19: ;
					g_data_07548101 = true;
					uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_07548101 == false) goto label_05d9da19;
	label_05d9d990: ;
					uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar4 == 0) {
				}
				pSVar15 = UIManager.GetLocale("Common", (String)pIVar38, "", "", "");
				pMVar32 = MethodInfo_System_Collections_Generic_List_string_Add;
				piVar1 = &pSVar17._version;
				*piVar1 = *piVar1 + 1;
				pSVar20 = pSVar17._items;
				if (pSVar20 == null) goto label_05d9f4e3;
				uVar5 = pSVar17._size;
				if (uVar5 < (uint)pSVar20.Length) {
					pSVar17._size = uVar5 + 1;
					pSVar20[(int)uVar5] = pSVar15;
				}
				else {
					pSVar17.AddWithResize((object)pSVar15);
				}
				uVar34 = uVar34 + 1;
				uVar19 = (ulong)*(uint)&pIVar18[1].monitor;
			} while ((long)uVar34 < (long)(int)*(uint)&pIVar18[1].monitor);
		}
		pSStack_38 = pUStack_70._dropdownSelection;
		pSVar15 = UIManager.GetLocale((String)pSStack_68, "Top", "File", "", "");
		if (pSVar17 == null) goto label_05d9f4e3;
		pSVar20 = (String[])pSVar17.ToArray();
		SStack_88.hasValue = false;
		SStack_88._1_3_ = 0;
		SStack_88.value = 0.0;
		SStack_88 = new Nullable<float>(180.0);
		pUVar13 = pUStack_70;
		pUVar21 = new UnityAction((object)pUStack_70, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_0);
		pMVar32 = (MethodInfo *)"";
		pUVar16 = ElementFactory.CreateDropdownSelect(pUStack_78, (ElementStyle)pMStack_80, (BaseSetting)pSStack_38, pSVar15, pSVar20, "", 100.0, 40.0, 500.0, (Nullable<float>)SStack_88, pUVar21);
		if (pUVar16 == null) goto label_05d9f4e3;
		pSVar7 = pUVar13._dropdowns;
		pUVar22 = pUVar16.GetComponent<DropdownSelectElement>();
		pMVar36 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
		if (pSVar7 == null) goto label_05d9f4e3;
		piVar1 = &pSVar7._version;
		*piVar1 = *piVar1 + 1;
		pUVar8 = pSVar7._items;
		if (pUVar8 == null) goto label_05d9f4e3;
		uVar5 = pSVar7._size;
		if (uVar5 < (uint)pUVar8.Length) {
			pSVar7._size = uVar5 + 1;
			pUVar8[(int)uVar5] = pUVar22;
		}
		else {
			pSVar7.AddWithResize((object)pUVar22);
		}
		pSVar17 = new List<string>();
		pIVar18 = new string[6];
		if (pIVar18 == null) goto label_05d9f4e3;
		if (*(int)&pIVar18[1].monitor == 0) goto label_05d9f4e8;
		pIVar18[2].klass = (Il2CppClass *)"Undo";
		if (((ulong)pIVar18[1].monitor & 0xfffffffe) == 0) goto label_05d9f4e8;
		pIVar18[2].monitor = "Redo";
		if (*(uint)&pIVar18[1].monitor < 3) goto label_05d9f4e8;
		pIVar18[3].klass = (Il2CppClass *)"Copy";
		if (((ulong)pIVar18[1].monitor & 0xfffffffc) == 0) goto label_05d9f4e8;
		pIVar18[3].monitor = "Paste";
		if (*(uint)&pIVar18[1].monitor < 5) goto label_05d9f4e8;
		pIVar18[4].klass = (Il2CppClass *)"Cut";
		if (*(uint)&pIVar18[1].monitor < 6) goto label_05d9f4e8;
		pIVar18[4].monitor = "Delete";
		if (0 < (int)pIVar18[1].monitor) {
			uVar19 = (ulong)pIVar18[1].monitor & 0xffffffff;
			uVar34 = 0;
			do {
				if (uVar19 <= uVar34) goto label_05d9f4e8;
				pIVar38 = (&pIVar18[2].klass)[uVar34];
				bVar14 = ((String)pIVar38 == "Copy");
				if ((bVar14) ||(bVar14 = ((String)pIVar38 == "Delete"))) {
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
						if (g_data_07548101 != false) goto label_05d9ddac;
	label_05d9de05: ;
						g_data_07548101 = true;
						uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (g_data_07548101 == false) goto label_05d9de05;
	label_05d9ddac: ;
						uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
					}
					if (uVar4 == 0) {
					}
					pSVar15 = UIManager.GetLocale("Common", (String)pIVar38, "", "", "");
					pMVar36 = MethodInfo_System_Collections_Generic_List_string_Add;
				}
				else {
					pSVar15 = UIManager.GetLocale("MapEditorSettings", "Keybinds", (String)pIVar38, "", "");
					pMVar36 = MethodInfo_System_Collections_Generic_List_string_Add;
				}
				MethodInfo_System_Collections_Generic_List_string_Add = pMVar36;
				if (pSVar17 == null) goto label_05d9f4e3;
				piVar1 = &pSVar17._version;
				*piVar1 = *piVar1 + 1;
				pSVar20 = pSVar17._items;
				if (pSVar20 == null) goto label_05d9f4e3;
				uVar5 = pSVar17._size;
				if (uVar5 < (uint)pSVar20.Length) {
					pSVar17._size = uVar5 + 1;
					pSVar20[(int)uVar5] = pSVar15;
				}
				else {
					pSVar17.AddWithResize((object)pSVar15);
				}
				uVar34 = uVar34 + 1;
				uVar19 = (ulong)*(uint)&pIVar18[1].monitor;
			} while ((long)uVar34 < (long)(int)*(uint)&pIVar18[1].monitor);
		}
		pSVar39 = pUStack_70._dropdownSelection;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07548101 != false) goto label_05d9df1a;
	label_05d9ef70: ;
			pSVar15 = "Edit";
			g_data_07548101 = true;
			uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07548101 == false) goto label_05d9ef70;
	label_05d9df1a: ;
			uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar15 = "Edit";
		}
		if (uVar4 == 0) {
		}
		pSVar15 = UIManager.GetLocale("Common", pSVar15, "", "", "");
		if (pSVar17 == null) goto label_05d9f4e3;
		pSVar20 = (String[])pSVar17.ToArray();
		SStack_88.hasValue = false;
		SStack_88._1_3_ = 0;
		SStack_88.value = 0.0;
		SStack_88 = new Nullable<float>(180.0);
		pUVar13 = pUStack_70;
		pUVar21 = new UnityAction((object)pUStack_70, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_1);
		in_R9 = (MethodInfo *)"";
		pUVar16 = ElementFactory.CreateDropdownSelect(pUStack_78, (ElementStyle)pMStack_80, (BaseSetting)pSVar39, pSVar15, pSVar20, "", 100.0, 40.0, 500.0, (Nullable<float>)SStack_88, pUVar21);
		if (pUVar16 == null) goto label_05d9f4e3;
		pSVar7 = pUVar13._dropdowns;
		pUVar22 = pUVar16.GetComponent<DropdownSelectElement>();
		pMVar32 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
		if (pSVar7 == null) goto label_05d9f4e3;
		piVar1 = &pSVar7._version;
		*piVar1 = *piVar1 + 1;
		pUVar8 = pSVar7._items;
		if (pUVar8 == null) goto label_05d9f4e3;
		uVar5 = pSVar7._size;
		if (uVar5 < (uint)pUVar8.Length) {
			pSVar7._size = uVar5 + 1;
			pUVar8[(int)uVar5] = pUVar22;
		}
		else {
			pSVar7.AddWithResize((object)pUVar22);
		}
		pSVar17 = new List<string>();
		pIVar18 = new string[5];
		if (pIVar18 == null) goto label_05d9f4e3;
		if (*(int)&pIVar18[1].monitor == 0) goto label_05d9f4e8;
		pIVar18[2].klass = (Il2CppClass *)"Editor";
		if (((ulong)pIVar18[1].monitor & 0xfffffffe) == 0) goto label_05d9f4e8;
		pIVar18[2].monitor = "MapInfo";
		if (*(uint)&pIVar18[1].monitor < 3) goto label_05d9f4e8;
		pIVar18[3].klass = (Il2CppClass *)"Weather";
		if (((ulong)pIVar18[1].monitor & 0xfffffffc) == 0) goto label_05d9f4e8;
		pIVar18[3].monitor = "CustomLogic";
		if (*(uint)&pIVar18[1].monitor < 5) goto label_05d9f4e8;
		pIVar18[4].klass = (Il2CppClass *)"CustomAssets";
		if (0 < (int)pIVar18[1].monitor) {
			if (pSVar17 == null) {
				item = pIVar18[2].klass;
				pIVar38 = (Il2CppClass *)"Top";
				pSVar39 = pSStack_68;
	label_05d9f59a: ;
				UIManager.GetLocale((String)pSVar39, (String)pIVar38, (String)item, "", "");
				throw new NullReferenceException();
			}
			uVar19 = (ulong)pIVar18[1].monitor & 0xffffffff;
			uVar34 = 0;
			do {
				if (uVar19 <= uVar34) goto label_05d9f4e8;
				pIVar38 = (&pIVar18[2].klass)[uVar34];
				pSVar15 = UIManager.GetLocale((String)pSStack_68, "Top", (String)pIVar38, "", "");
				pMVar32 = MethodInfo_System_Collections_Generic_List_string_Add;
				piVar1 = &pSVar17._version;
				*piVar1 = *piVar1 + 1;
				pSVar20 = pSVar17._items;
				if (pSVar20 == null) goto label_05d9f4e3;
				uVar5 = pSVar17._size;
				if (uVar5 < (uint)pSVar20.Length) {
					pSVar17._size = uVar5 + 1;
					pSVar20[(int)uVar5] = pSVar15;
				}
				else {
					pSVar17.AddWithResize((object)pSVar15);
				}
				uVar34 = uVar34 + 1;
				uVar19 = (ulong)*(uint)&pIVar18[1].monitor;
			} while ((long)uVar34 < (long)(int)*(uint)&pIVar18[1].monitor);
		}
		pSStack_68 = pUVar13._dropdownSelection;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07548101 != false) goto label_05d9e2a9;
	label_05d9efd8: ;
			pSVar15 = "Options";
			g_data_07548101 = true;
			uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07548101 == false) goto label_05d9efd8;
	label_05d9e2a9: ;
			uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar15 = "Options";
		}
		if (uVar4 == 0) {
		}
		pSVar15 = UIManager.GetLocale("Common", pSVar15, "", "", "");
		if (pSVar17 == null) goto label_05d9f4e3;
		pSVar20 = (String[])pSVar17.ToArray();
		SStack_88.hasValue = false;
		SStack_88._1_3_ = 0;
		SStack_88.value = 0.0;
		SStack_88 = new Nullable<float>(180.0);
		pUVar13 = pUStack_70;
		pUVar21 = new UnityAction((object)pUStack_70, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_2);
		pMVar32 = (MethodInfo *)"";
		pUVar16 = ElementFactory.CreateDropdownSelect(pUStack_78, (ElementStyle)pMStack_80, (BaseSetting)pSStack_68, pSVar15, pSVar20, "", 130.0, 40.0, 500.0, (Nullable<float>)SStack_88, pUVar21);
		if (pUVar16 == null) goto label_05d9f4e3;
		pSVar7 = pUVar13._dropdowns;
		pUVar22 = pUVar16.GetComponent<DropdownSelectElement>();
		pMVar36 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
		if (pSVar7 == null) goto label_05d9f4e3;
		piVar1 = &pSVar7._version;
		*piVar1 = *piVar1 + 1;
		pUVar8 = pSVar7._items;
		if (pUVar8 == null) goto label_05d9f4e3;
		uVar5 = pSVar7._size;
		if (uVar5 < (uint)pUVar8.Length) {
			pSVar7._size = uVar5 + 1;
			pUVar8[(int)uVar5] = pUVar22;
		}
		else {
			pSVar7.AddWithResize((object)pUVar22);
		}
		pSVar15 = UIManager.GetLocale("MapEditorSettings", "Keybinds", "AddObject", "", "");
		pUVar21 = new UnityAction((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_3);
		pUVar26 = pUStack_78;
		pMVar36 = pMStack_80;
		ElementFactory.CreateDefaultButton(pUStack_78, (ElementStyle)pMStack_80, pSVar15, 0.0, 40.0, pUVar21);
		pSVar15 = pUVar13.GizmoModeText();
		pUVar21 = new UnityAction((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_4);
		pUVar16 = ElementFactory.CreateDefaultButton(pUVar26, (ElementStyle)pMVar36, pSVar15, 88.0, 40.0, pUVar21);
		pUVar13._gizmoOrientationButton = pUVar16;
		pUVar16 = pUVar13._gizmoOrientationButton;
		if (pUVar16 == null) goto label_05d9f4e3;
		pUVar23 = pUVar16.AddComponent<HoverTooltip>();
		pSVar15 = "GizmoOrientation";
		pSVar15 = UIManager.GetLocale("MapEditor", "Top", pSVar15, "", "");
		if (pUVar23 == null) goto label_05d9f4e3;
		pUVar23.Message = pSVar15;
		pSVar15 = "Snap";
		pSVar15 = UIManager.GetLocale("MapEditor", "Top", pSVar15, "", "");
		pUVar21 = new UnityAction((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_5);
		pUVar16 = ElementFactory.CreateDefaultButton(pUStack_78, (ElementStyle)pMStack_80, pSVar15, 72.0, 40.0, pUVar21) ;
		pUVar13._snapButton = pUVar16;
		pSVar39 = pUVar13._toolDropdownSelection;
		pSVar15 = UIManager.GetLocale("MapEditor", "Tools", "Title", "", "");
		pSVar20 = (String[])new string[4];
		pSVar24 = UIManager.GetLocale("MapEditor", "Tools", "Camera", "", "");
		if (pSVar20 == null) goto label_05d9f4e3;
		if ((int)pSVar20.Length == 0) {
	label_05d9f4e8: ;
			throw new IndexOutOfRangeException();
		}
		pSVar20[0] = pSVar24;
		pSVar24 = UIManager.GetLocale("MapEditor", "Tools", "Brush", "", "");
		if ((pSVar20.Length & 0xfffffffe) == 0) goto label_05d9f4e8;
		pSVar20[1] = pSVar24;
		pSVar24 = UIManager.GetLocale("MapEditor", "Tools", "Ruler", "", "");
		if ((uint)pSVar20.Length < 3) goto label_05d9f4e8;
		pSVar20[2] = pSVar24;
		pSVar24 = UIManager.GetLocale("MainMenu", "Intro", "TutorialButton", "", "");
		pUVar13 = pUStack_70;
		if ((pSVar20.Length & 0xfffffffc) == 0) goto label_05d9f4e8;
		pSVar20[3] = pSVar24;
		SStack_50.hasValue = false;
		SStack_50._1_3_ = 0;
		SStack_50.value = 0.0;
		SStack_50 = new Nullable<float>(120.0);
		pUVar21 = new UnityAction((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_6);
		pUVar16 = ElementFactory.CreateDropdownSelect(pUStack_78, (ElementStyle)pMStack_80, (BaseSetting)pSVar39, pSVar15, pSVar20, "", 90.0, 40.0, 200.0, (Nullable<float>)SStack_50, pUVar21);
		if (pUVar16 == null) goto label_05d9f4e3;
		pSVar7 = pUVar13._dropdowns;
		pUVar22 = pUVar16.GetComponent<DropdownSelectElement>();
		pMVar32 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
		if (pSVar7 == null) goto label_05d9f4e3;
		piVar1 = &pSVar7._version;
		*piVar1 = *piVar1 + 1;
		pUVar8 = pSVar7._items;
		if (pUVar8 == null) goto label_05d9f4e3;
		uVar5 = pSVar7._size;
		if (uVar5 < (uint)pUVar8.Length) {
			pSVar7._size = uVar5 + 1;
			pUVar8[(int)uVar5] = pUVar22;
		}
		else {
			pSVar7.AddWithResize((object)pUVar22);
		}
		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar25 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05d9f4e3;
		if ((pSVar25 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pSVar25, (((components.obj).klass)._1).element_class) , pIVar18 == null)) {
	label_05d9f4f8: ;
			pIVar18 = new ArrayTypeMismatchException();
			throw pIVar18;
		}
		if ((int)components.Length == 0) goto label_05d9f4e8;
		components[0] = pSVar25;
		pSVar25 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
		if ((pSVar25 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pSVar25, (((components.obj).klass)._1).element_class) , pIVar18 == null)) goto label_05d9f4f8;
		if ((components.Length & 0xfffffffe) == 0) goto label_05d9f4e8;
		components[1] = pSVar25;
		pUVar16 = new GameObject("Spacer", components);
		if ((pUVar16 == null) ||(pUVar26 = pUVar16.transform, pUVar26 == null)) goto label_05d9f4e3;
		pUVar26.SetParent(pUStack_78, false);
		pUVar27 = pUVar16.GetComponent<LayoutElement>();
		if (pUVar27 == null) goto label_05d9f4e3;
		pUVar27.set_flexibleWidth(1.0);
		pSVar9 = MapEditorTopPanel._gridSelection;
		pMVar32 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar20 = (String[])new string[3];
		if (pSVar20 == null) goto label_05d9f4e3;
		if ((int)pSVar20.Length == 0) goto label_05d9f4e8;
		pSVar20[0] = "X";
		if ((pSVar20.Length & 0xfffffffe) == 0) goto label_05d9f4e8;
		pSVar20[1] = "Y";
		if ((uint)pSVar20.Length < 3) goto label_05d9f4e8;
		pSVar20[2] = "Z";
		SStack_58.hasValue = false;
		SStack_58._1_3_ = 0;
		SStack_58.value = 0.0;
		SStack_58 = new Nullable<float>(100.0);
		pUVar21 = new UnityAction((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_7);
		pMVar36 = (MethodInfo *)"";
		pUVar16 = ElementFactory.CreateMultiSelectDropdown(pUStack_78, (ElementStyle)pMStack_80, pSVar9, (String)pMVar32, pSVar20, "", 64.0, 40.0, 160.0, (Nullable<float>)SStack_58, pUVar21, null);
		if (pUVar16 == null) goto label_05d9f4e3;
		pUVar28 = pUVar16.GetComponent<MultiSelectDropdownElement>();
		pUVar13._gridDropdown = pUVar28;
		pUVar29 = pUVar13.AddDropdownIcon(pUVar16, "Icons/Navigation/GridOff");
		pUVar13._gridIcon = pUVar29;
		pSVar15 = "Lighting";
		pSVar15 = UIManager.GetLocale("MapEditor", "Top", pSVar15, "", "");
		pUVar13 = pUStack_70;
		pSVar30 = new Action((object)pUStack_70, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_8);
		pUVar26 = pUStack_78;
		pUVar16 = pUVar13.CreateStateIconButton(pUStack_78, "Icons/Navigation/LightOff", pSVar15, pSVar30);
		pUVar13._lightButton = pUVar16;
		pSVar9 = MapEditorTopPanel._layerSelection;
		pMVar32 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar25 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_MapEditorTopPanel_LayerOption) ;
		pSVar20 = Enum.GetNames(pSVar25);
		SStack_60.hasValue = false;
		SStack_60._1_3_ = 0;
		SStack_60.value = 0.0;
		SStack_60 = new Nullable<float>(180.0);
		pUVar21 = new UnityAction((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_9);
		pUVar16 = ElementFactory.CreateMultiSelectDropdown(pUVar26, (ElementStyle)pMStack_80, pSVar9, (String)pMVar32, pSVar20, "", 64.0, 40.0, 500.0, (Nullable<float>)SStack_60, pUVar21, null);
		if (pUVar16 == null) goto label_05d9f4e3;
		pUVar28 = pUVar16.GetComponent<MultiSelectDropdownElement>();
		pUVar13._layerDropdown = pUVar28;
		pUVar29 = pUVar13.AddDropdownIcon(pUVar16, "Icons/Navigation/LayersOn");
		pUVar13._layersIcon = pUVar29;
		ppSVar2 = ppSStack_48;
		pSVar10 = pUVar13._currentMap;
		if (pSVar10 == null) goto label_05d9f4e3;
		pSVar15 = String.Concat(pSVar10._value, ".txt");
		pUVar26 = pUStack_78;
		ElementFactory.CreateDefaultLabel(pUStack_78, (ElementStyle)pMStack_80, pSVar15, 0, 4);
		if (*ppGStack_40 == null) goto label_05d9f4e3;
		pMVar11 = ((*ppGStack_40).fields).MapScript;
		if (pMVar11 == null) {
			pSVar10 = pUVar13._playMode;
	joined_r0x05d9f036: ;
			ppSVar31 = &"None";
		}
		else {
			bVar14 = String.IsNullOrWhiteSpace(pMVar11.Logic);
			pSVar10 = pUVar13._playMode;
			if (bVar14) goto joined_r0x05d9f036;
			ppSVar31 = &BuiltinLevels.UseMapLogic;
		}
		if (pSVar10 != null) {
			pSVar10.Value = (object)*ppSVar31;
			if (*ppSVar2 != null) {
				pSVar15 = ((*ppSVar2).fields)._value;
				pSVar20 = BuiltinLevels.GetGameModes("Custom", pSVar15, true);
				__this_00 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar20);
				if (__this_00 != null) {
					pMVar35 = (MethodInfo *)"None";
					bVar14 = __this_00.Contains((Il2CppObject *)"None");
					pMVar36 = (MethodInfo *)"None";
					pMVar32 = MethodInfo_System_Collections_Generic_List_string_Add;
					if (!bVar14) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar12 = __this_00._items;
						if (pSVar12 == null) goto label_05d9f4e3;
						uVar5 = __this_00._size;
						if (uVar5 < (uint)pSVar12.Length) {
							__this_00._size = uVar5 + 1;
							pSVar12[(int)uVar5] = (object)pMVar36;
						}
						else {
							__this_00.AddWithResize((object)pMVar36);
						}
					}
					pSVar10 = pUVar13._playMode;
					pSVar15 = pUVar13.GetPlayModeLabel();
					pSVar20 = (String[])__this_00.ToArray();
					SStack_88.hasValue = false;
					SStack_88._1_3_ = 0;
					SStack_88.value = 0.0;
					SStack_88 = new Nullable<float>(180.0);
					pUVar21 = new UnityAction((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_10);
					pMVar32 = (MethodInfo *)"";
					pUVar16 = ElementFactory.CreateDropdownSelect(pUVar26, (ElementStyle)pMStack_80, (BaseSetting)pSVar10, pSVar15, pSVar20, "", 130.0, 40.0, 500.0, (Nullable<float>)SStack_88, pUVar21);
					if (pUVar16 != null) {
						pUVar22 = pUVar16.GetComponent<DropdownSelectElement>();
						pUVar13._playModeDropdown = pUVar22;
						pMVar36 = MethodInfo_System_Collections_Generic_List_DropdownSelectElement_Add;
						pSVar7 = pUVar13._dropdowns;
						if (pSVar7 != null) {
							pUVar22 = pUVar13._playModeDropdown;
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pUVar8 = pSVar7._items;
							if (pUVar8 != null) {
								uVar5 = pSVar7._size;
								if (uVar5 < (uint)pUVar8.Length) {
									pSVar7._size = uVar5 + 1;
									pUVar8[(int)uVar5] = pUVar22;
									uVar4 = (typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor;
								}
								else {
									pSVar7.AddWithResize((object)pUVar22);
									uVar4 = (typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor;
								}
								if (uVar4 == 0) {
								}
								pSVar15 = "PlayMap";
								if (Il2CppMethodInitialized_075480ac == false) {
									Il2CppMethodInitialized_075480ac = true;
									uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
								}
								else {
									uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
								}
								if (uVar4 == 0) {
								}
								pSVar15 = UIManager.GetLocale("MapEditor", "Top", pSVar15, "", "");
								pSVar30 = new Action((object)pUVar13, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Setup_b__41_11);
								pMVar32 = (MethodInfo)pUVar13.CreateStateIconButton(pUVar26, "Icons/Navigation/Play", pSVar15, pSVar30);
								if ((pMVar32 != null) &&(pUVar23 = pMVar32.GetComponent<HoverTooltip>(), pUVar23 != null)) {
									pUVar23.Offset = 4.0;
									pSVar24 = "TextColor";
									pSVar15 = "IconButton";
									__this_01 = (MapEditorTopPanel)pUVar13.get_ThemePanel();
									iconColor = UIManager.GetThemeColor((String)__this_01, pSVar15, pSVar24, "DefaultPanel");
									normal.b = 1.0;
									normal.a = 1.0;
									normal.r = 1.0;
									normal.g = 1.0;
									highlighted.b = 1.0;
									highlighted.a = 1.0;
									highlighted.r = 1.0;
									highlighted.g = 1.0;
									__this_01.SetIconButtonColors((GameObject)pMVar32, iconColor, normal, highlighted);
									pUVar13.CreateSideToolbar();
									pUVar13.RefreshControlStates();
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05d9f4e3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005413")]
	[Address(RVA = "0x5C9FC00", Offset = "0x5C9EC00", VA = "0x5C9FC00")]
	private GameObject CreateStateIconButton(Transform parent, string icon, string tooltip, Action onClick)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$CreateStateIconButton): 1 lines keep C-only constructs
		String themePanel;
		ElementStyle __this_00;
		UnityAction __this_01;
		GameObject __this_02;
		HoverTooltip pUVar1;

		themePanel = this.get_ThemePanel();
		__this_01 = null;
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, themePanel);
		if (onClick != null) {
			__this_01 = new UnityAction((object)onClick, (intptr_t)MethodInfo_System_Action_Invoke);
		}
		__this_02 = ElementFactory.CreateIconButton(parent, __this_00, icon, 36.0, 36.0, __this_01, null);
		if (__this_02 != null) {
			pUVar1 = __this_02.AddComponent<HoverTooltip>();
			if (pUVar1 != null) {
				pUVar1.Message = tooltip;
				return __this_02;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005414")]
	[Address(RVA = "0x5C9F7B0", Offset = "0x5C9E7B0", VA = "0x5C9F7B0")]
	private RawImage AddDropdownIcon(GameObject dropdown, string icon)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$AddDropdownIcon): 3 lines keep C-only constructs
		String pSVar1;
		Il2CppType handle;
		String item;
		Transform pUVar2;
		Transform pUVar3;
		GameObject pUVar4;
		Type[] components;
		Type pSVar5;
		object pIVar6;
		RectTransform __this_00;
		RawImage __this_01;
		Texture value;
		String panel;
		Color UVar7;

		if (dropdown == null) {
	label_05d9fbdf: ;
			throw new NullReferenceException();
		}
		pUVar2 = dropdown.transform;
		if (pUVar2 == null) goto label_05d9fbdf;
		pUVar2 = pUVar2.Find("Dropdown/SelectedButton");
		if (pUVar2 == null) goto label_05d9fbdf;
		pUVar3 = pUVar2.Find("Label");
		if (pUVar3 == null) goto label_05d9fbdf;
		pUVar4 = pUVar3.gameObject;
		if (pUVar4 == null) goto label_05d9fbdf;
		pUVar4.SetActive(false);
		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05d9fbdf;
		if (pSVar5 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((components.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_05d9fbe9;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_RawImage);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((components.obj).klass)._1).element_class);
				if (pIVar6 == null) {
	label_05d9fbe9: ;
					pIVar6 = new ArrayTypeMismatchException();
					throw pIVar6;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar5;
				pUVar4 = new GameObject("StateIcon", components);
				if (pUVar4 != null) {
					pUVar3 = pUVar4.transform;
					if (pUVar3 != null) {
						pUVar3.SetParent(pUVar2, false);
						__this_00 = pUVar4.GetComponent<RectTransform>();
						if (__this_00 != null) {
							__this_00.anchorMax = (Vector2)0x3f0000003f000000;
							__this_00.anchorMin = (Vector2)0x3f0000003f000000;
							__this_00.sizeDelta = (Vector2)0x41c0000041c00000;
							__this_00.anchoredPosition = (Vector2)0xc1200000;
							__this_01 = pUVar4.GetComponent<RawImage>();
							pSVar1 = ResourcePaths.UI;
							value = (Texture)ResourceManager.LoadAsset(pSVar1, icon, true, false);
							if (__this_01 != null) {
								if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
									throw new InvalidCastException();
								}
								__this_01.texture = value;
								item = "DropdownTextColor";
								pSVar1 = "DefaultSetting";
								panel = this.get_ThemePanel();
								UVar7 = UIManager.GetThemeColor(panel, pSVar1, item, "DefaultPanel");
								__this_01.set_color(UVar7);
								__this_01.set_raycastTarget(false);
								return __this_01;
							}
						}
					}
				}
				goto label_05d9fbdf;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005415")]
	[Address(RVA = "0x5C9FFC0", Offset = "0x5C9EFC0", VA = "0x5C9FFC0")]
	private void CreateSideToolbar()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$CreateSideToolbar): 15 lines keep C-only constructs
		GameObject* targetAddress;
		uint uVar1;
		MapEditorMenu __this_00;
		Il2CppType handle;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject pUVar4;
		Transform pUVar5;
		Transform parent;
		RectTransform __this_01;
		Image pUVar6;
		HorizontalLayoutGroup __this_02;
		RectOffset __this_03;
		String pSVar7;
		Action pSVar8;
		MethodInfo pMVar9;

		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05da06fb;
		if ((pSVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05da0705: ;
			pIVar3 = new ArrayTypeMismatchException();
			throw pIVar3;
		}
		if ((int)components.Length == 0) {
	label_05da0700: ;
			throw new IndexOutOfRangeException();
		}
		components[0] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if ((pSVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class), pIVar3 == null)) goto label_05da0705;
		if ((components.Length & 0xfffffffe) == 0) goto label_05da0700;
		components[1] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_HorizontalLayoutGroup);
		if ((pSVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class), pIVar3 == null)) goto label_05da0705;
		if ((uint)components.Length < 3) goto label_05da0700;
		components[2] = pSVar2;
		pUVar4 = new GameObject("MapEditorSideToolbar", components);
		targetAddress = &this._sideToolbar;
		this._sideToolbar = pUVar4;
		pUVar4 = this._sideToolbar;
		if (pUVar4 == null) goto label_05da06fb;
		pUVar5 = pUVar4.transform;
		__this_00 = this._menu;
		if ((__this_00 == null) ||(parent = __this_00.transform, pUVar5 == null)) goto label_05da06fb;
		pUVar5.SetParent(parent, false);
		if ((*targetAddress == null) ||(__this_01 = (*targetAddress).GetComponent<RectTransform>(), __this_01 == null)) goto label_05da06fb;
		__this_01.anchorMax = (Vector2)0x3f80000000000000;
		__this_01.anchorMin = (Vector2)0x3f80000000000000;
		__this_01.pivot = (Vector2)0x3f80000000000000;
		__this_01.sizeDelta = (Vector2)0x4230000043020000;
		if ((*targetAddress == null) ||(pUVar6 = (*targetAddress).GetComponent<Image>(), pUVar6 == null)) goto label_05da06fb;
		pUVar6.set_color((Color)(ZEXT816(0x3f3851ec00000000) << 0x40));
		if (*targetAddress == null) goto label_05da06fb;
		__this_02 = (*targetAddress).GetComponent<HorizontalLayoutGroup>();
		pMVar9 = null;
		__this_03 = new RectOffset(6, 6, 4, 4);
		if (__this_02 == null) goto label_05da06fb;
		__this_02.padding = __this_03;
		__this_02.spacing = 5.0;
		__this_02.childControlWidth = true;
		__this_02.childControlHeight = true;
		__this_02.childForceExpandWidth = false;
		__this_02.childForceExpandHeight = false;
		if (*targetAddress == null) goto label_05da06fb;
		pUVar5 = (*targetAddress).transform;
		pSVar7 = MapEditorInspectPanel.Locale("Position");
		pSVar8 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_0);
		pUVar4 = this.CreateStateIconButton(pUVar5, "Icons/Navigation/Position", pSVar7, pSVar8);
		this._positionButton = pUVar4;
		pUVar4 = this._sideToolbar;
		if (pUVar4 == null) goto label_05da06fb;
		pUVar5 = pUVar4.transform;
		if ((typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075480ac != false) goto label_05da04dc;
	label_05da06a3: ;
			pSVar7 = "Rotate";
			Il2CppMethodInitialized_075480ac = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075480ac == false) goto label_05da06a3;
	label_05da04dc: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar7 = "Rotate";
		}
		if (uVar1 == 0) {
		}
		pSVar7 = UIManager.GetLocale("MapEditor", "Top", pSVar7, "", "");
		pSVar8 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_1);
		pUVar4 = this.CreateStateIconButton(pUVar5, "Icons/Navigation/Rotate", pSVar7, pSVar8);
		this._rotationButton = pUVar4;
		pUVar4 = this._sideToolbar;
		if (pUVar4 != null) {
			pUVar5 = pUVar4.transform;
			pSVar7 = "Scale";
			pSVar7 = UIManager.GetLocale("MapEditor", "Top", pSVar7, "", "");
			pSVar8 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_CreateSideToolbar_b__44_2);
			pMVar9 = (MethodInfo)this.CreateStateIconButton(pUVar5, "Icons/Navigation/Scale", pSVar7, pSVar8);
			this._scaleButton = (GameObject)pMVar9;
			this.RefreshSideToolbarPosition();
			return;
		}
	label_05da06fb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005416")]
	[Address(RVA = "0x5C98650", Offset = "0x5C97650", VA = "0x5C98650")]
	public void RefreshSideToolbarPosition()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$RefreshSideToolbarPosition): 1 lines keep C-only constructs
		float fVar1;
		Object x;
		MapEditorSettings pSVar2;
		FloatSetting pSVar3;
		GameObject __this_00;
		bool bVar4;
		RectTransform __this_01;
		float fVar5;

		x = (Object)this._sideToolbar;
		bVar4 = (x == null);
		if (bVar4) {
			return;
		}
		pSVar2 = SettingsManager.MapEditorSettings;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.HierarchyPanelWidth, pSVar3 != null)) &&(__this_00 = this._sideToolbar, __this_00 != null)) {
			fVar1 = pSVar3._value;
			__this_01 = __this_00.GetComponent<RectTransform>() ;
			fVar5 = this.GetHeight();
			if (__this_01 != null) {
				__this_01.anchoredPosition = (Vector2)(CONCAT44(fVar5, fVar1 + 8.0) ^ 0x8000000000000000);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005417")]
	[Address(RVA = "0x5C99320", Offset = "0x5C98320", VA = "0x5C99320")]
	public bool IsPointerOverSideToolbar(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$IsPointerOverSideToolbar): clean
		Object x;
		GameObject pUVar1;
		bool bVar2;
		RectTransform rect;

		x = (Object)this._sideToolbar;
		bVar2 = (x != null);
		if (!bVar2) {
			return false;
		}
		pUVar1 = this._sideToolbar;
		if (pUVar1 != null) {
			bVar2 = pUVar1.activeInHierarchy;
			if (!bVar2) {
				return false;
			}
			pUVar1 = this._sideToolbar;
			if (pUVar1 != null) {
				rect = pUVar1.GetComponent<RectTransform>();
				bVar2 = RectTransformUtility.RectangleContainsScreenPoint(rect, screenPosition, null);
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005418")]
	[Address(RVA = "0x5C99110", Offset = "0x5C98110", VA = "0x5C99110")]
	public bool IsDropdownOpen()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$IsDropdownOpen): 4 lines keep C-only constructs
		List<DropdownSelectElement> __this_00;
		MultiSelectDropdownElement pUVar1;
		bool bVar2;
		byte[] local_48 = new byte[16];
		DropdownSettingElement local_38;
		byte[] local_30 = new byte[16];
		DropdownSettingElement local_20;

		__this_00 = this._dropdowns;
		if (__this_00 == null) {
	label_05d992b1: ;
			throw new NullReferenceException();
		}
		local_30.GetEnumerator((List<object>)__this_00);
		local_38 = local_20;
		local_48._0_8_ = local_30._0_8_;
		local_48._8_8_ = local_30._8_8_;
		local_30._0_8_ = null;
		local_30._8_8_ = local_48;
		while(true) {
			bVar2 = local_48.MoveNext();
			if (!bVar2) break;
			if (local_38 == null) {
				throw new NullReferenceException();
			}
			bVar2 = local_38.IsOpen();
			if (bVar2) {
				local_48.Dispose();
				return true;
			}
		}
		local_48.Dispose();
		pUVar1 = this._layerDropdown;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._layerDropdown;
			if (pUVar1 == null) goto label_05d992b1;
			bVar2 = pUVar1.IsOpen();
			if (bVar2) {
				return true;
			}
		}
		pUVar1 = this._gridDropdown;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._gridDropdown;
			if (pUVar1 == null) goto label_05d992b1;
			bVar2 = pUVar1.IsOpen();
			if (bVar2) {
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x6005419")]
	[Address(RVA = "0x5CA1190", Offset = "0x5CA0190", VA = "0x5CA1190")]
	protected void OnFileClick()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnFileClick): 33 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		int length;
		IntSetting pSVar5;
		StringSetting pSVar6;
		ImportPopup __this_00;
		object @object;
		MapEditorMenu pUVar7;
		MapEditorGameManager pGVar8;
		MapScript pMVar9;
		MapScriptObjects pMVar10;
		List<MapScriptBaseObject> __this_01;
		Dictionary<int, @object> __this_02;
		Il2CppClass item;
		MapScriptBaseObject[] pMVar11;
		ExportPopup __this_03;
		bool bVar13;
		String[] pSVar14;
		List<string> items;
		List<string> disallowedDelete;
		Action pSVar15;
		UnityAction pUVar16;
		Func<string, bool> pSVar17;
		UI_MapEditorTopPanel___c_StaticFields pUVar18;
		Func<string, string> __this_04;
		System_Linq_IOrderedEnumerable_TSource__o source;
		String pSVar19;
		UnityAction pUVar20;
		MapScript __this_05;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_06;
		ulong uVar21;
		String pSVar22;
		String[] pSVar23;
		int iVar24;
		ulong uVar25;
		MethodInfo method_02;
		ulong uVar26;
		int local_6c;
		String[] local_68;
		String local_60;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;

		local_6c = 0;
		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentValue = null;
		pSVar14 = BuiltinLevels.GetMapNames("Custom");
		items = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar14);
		pSVar5 = this._dropdownSelection;
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		uVar2 = pSVar5._value;
		disallowedDelete = il2cpp_codegen_object_new(typeof(List<string>)) ;
		disallowedDelete = new List<@object>();
		pSVar6 = this._currentMap;
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		if (disallowedDelete == null) {
			throw new NullReferenceException();
		}
		method_02 = (MethodInfo)pSVar6._value;
		piVar1 = &disallowedDelete._version;
		*piVar1 = *piVar1 + 1;
		pSVar14 = disallowedDelete._items;
		if (pSVar14 == null) {
			throw new NullReferenceException();
		}
		uVar3 = disallowedDelete._size;
		if (uVar3 < (uint)pSVar14.Length) {
			disallowedDelete._size = uVar3 + 1;
			pSVar14[(int)uVar3] = (String)method_02;
			pSVar19 = "Untitled";
		}
		else {
			disallowedDelete.AddWithResize((object)method_02);
			pSVar19 = "Untitled";
		}
		if (9 < uVar2) {
			"Untitled" = pSVar19;
			return;
		}
		"Untitled" = pSVar19;
		switch((long)&switchD_05da14f8::switchdataD_010a5e68 +(long)(int)(&switchD_05da14f8::switchdataD_010a5e68)[uVar2]) {
		case 0x5da14fa:
			local_6c = 1;
			pSVar22 = local_6c.ToString();
			pSVar22 = String.Concat(pSVar19, pSVar22);
			if (items == null) {
				throw new NullReferenceException();
			}
			bVar13 = items.Contains((object)pSVar22);
			if (bVar13) {
				do {
					local_6c = local_6c + 1;
					pSVar22 = local_6c.ToString();
					pSVar22 = String.Concat(pSVar19, pSVar22);
					bVar13 = items.Contains((object)pSVar22);
				} while (bVar13);
			}
			pUVar7 = this._menu;
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			local_68 = (String[])pUVar7.SelectListPopup;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07548101 == false) goto label_05da22d7;
	label_05da15cb: ;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar22 = "New";
			}
			else {
				if (g_data_07548101 != false) goto label_05da15cb;
	label_05da22d7: ;
				pSVar22 = "New";
				g_data_07548101 = true;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			local_60 = UIManager.GetLocale("Common", pSVar22, "", "", "");
			pUVar20 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_5);
			pUVar16 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_6);
			pSVar17 = new Func<string, bool>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_IsValidCustomFileName);
			if (local_68 == null) {
				throw new NullReferenceException();
			}
			local_68.ShowSave(items, local_60, pSVar19, pUVar20, null, pUVar16, disallowedDelete, pSVar17);
			break;
		case 0x5da16ad:
			pUVar7 = this._menu;
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			__this_00 = pUVar7.ImportPopup;
			pUVar20 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_4);
			pSVar19 = "ImportWarning";
			if ((typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor == 0) {
				pSVar19 = "ImportWarning";
			}
			"ImportWarning" = pSVar19;
			if (Il2CppMethodInitialized_075480ac == false) {
				Il2CppMethodInitialized_075480ac = true;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar4 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			pSVar19 = UIManager.GetLocale("MapEditor", "Top", pSVar19, "", "");
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Show(pUVar20, true, pSVar19, "");
			return;
		case 0x5da178c:
			this.SyncMapScriptObjects();
			pSVar15 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
			bVar13 = this.TrySaveMapFile(pSVar15);
			if (bVar13) goto switchD_05da14f8_caseD_5da17fc;
			break;
		case 0x5da17fc:
	switchD_05da14f8_caseD_5da17fc: ;
			SceneLoader.LoadScene(1);
			return;
		case 0x5da1816:
			pUVar7 = this._menu;
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			local_68 = (String[])pUVar7.SelectListPopup;
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07548101 == false) goto label_05da2043;
	label_05da1864: ;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar19 = "Rename";
			}
			else {
				if (g_data_07548101 != false) goto label_05da1864;
	label_05da2043: ;
				pSVar19 = "Rename";
				g_data_07548101 = true;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			local_60 = UIManager.GetLocale("Common", pSVar19, "", "", "");
			pUVar20 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_2);
			pUVar16 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_3);
			pSVar17 = new Func<string, bool>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_IsValidCustomFileName);
			if (local_68 == null) {
				throw new NullReferenceException();
			}
			local_68.ShowSave(items, local_60, "", pUVar20, null, pUVar16, disallowedDelete, pSVar17);
			break;
		case 0x5da194f:
			this.SyncMapScriptObjects();
			pSVar15 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
			this.TrySaveMapFile(pSVar15);
			return;
		case 0x5da19c5:
			if (((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar14 = BuiltinLevels.GetAutosaveNames();
			pUVar18 = typeof(MapEditorTopPanel.c).static_fields;
			__this_04 = pUVar18.__9__48_8;
			if (__this_04 == null) {
				if ((typeof(MapEditorTopPanel.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar18 = typeof(MapEditorTopPanel.c).static_fields;
				}
				@object = (object)pUVar18.__9;
				__this_04 = new Func<string, string>(@object, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c_OnFileClick_b__48_8);
				pUVar18 = typeof(MapEditorTopPanel.c).static_fields;
				pUVar18.__9__48_8 = __this_04;
			}
			source = Enumerable.OrderByDescending<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar14, (System_Func_TSource__TKey__o)__this_04);
			items = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
			pUVar7 = this._menu;
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			pSVar14 = (String[])pUVar7.SelectListPopup;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07548101 == false) goto label_05da20a4;
	label_05da1ae3: ;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar19 = "LoadAutosave";
			}
			else {
				if (g_data_07548101 != false) goto label_05da1ae3;
	label_05da20a4: ;
				pSVar19 = "LoadAutosave";
				g_data_07548101 = true;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			pSVar19 = UIManager.GetLocale("Common", pSVar19, "", "", "");
			pUVar20 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_9);
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
	label_05da2299: ;
			pUVar16 = null;
			disallowedDelete = null;
	label_05da22a5: ;
			pSVar14.ShowLoad(items, pSVar19, pUVar20, pUVar16, disallowedDelete);
			break;
		case 0x5da1b5a:
			pUVar7 = this._menu;
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			local_68 = (String[])pUVar7.SelectListPopup;
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07548101 == false) goto label_05da2105;
	label_05da1ba8: ;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar19 = "Open";
			}
			else {
				if (g_data_07548101 != false) goto label_05da1ba8;
	label_05da2105: ;
				pSVar19 = "Open";
				g_data_07548101 = true;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			pSVar19 = UIManager.GetLocale("Common", pSVar19, "", "", "");
			pUVar20 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_0);
			pUVar16 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_1);
			if (local_68 == null) {
				throw new NullReferenceException();
			}
			pSVar14 = local_68;
			goto label_05da22a5;
		case 0x5da1c54:
			__this_05 = new MapScript();
			pGVar8 = this._gameManager;
			if (pGVar8 == null) {
				throw new NullReferenceException();
			}
			pMVar9 = pGVar8.MapScript;
			if (pMVar9 == null) {
				throw new NullReferenceException();
			}
			pSVar19 = pMVar9.Serialize();
			if (__this_05 == null) {
				throw new NullReferenceException();
			}
			__this_05.Deserialize(pSVar19, false);
			pMVar10 = __this_05.Objects;
			if (pMVar10 == null) {
				throw new NullReferenceException();
			}
			__this_01 = pMVar10.Objects;
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			length = __this_01._size;
			__this_01._size = 0;
			if (0 < length) {
				Array.Clear((Array)__this_01._items, 0, length);
			}
			__this_02 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			__this_06 = __this_02.Values;
			if (__this_06 == null) {
				throw new NullReferenceException();
			}
			local_58 = __this_06.GetEnumerator();
			local_38 = &local_58;
			while(true) {
				bVar13 = local_58.MoveNext();
				if (!bVar13) break;
				if (local_58._currentValue == null) {
					throw new NullReferenceException();
				}
				item = local_58._currentValue[2].klass;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pMVar11 = __this_01._items;
				if (pMVar11 == null) {
					throw new NullReferenceException();
				}
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pMVar11.Length) {
					__this_01._size = uVar2 + 1;
					pMVar11[(int)uVar2] = (MapScriptBaseObject)item;
				}
				else {
					__this_01.AddWithResize((object)item);
				}
			}
			local_58.Dispose();
			pUVar7 = this._menu;
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			__this_03 = pUVar7.ExportPopup;
			if (__this_03 == null) {
				throw new NullReferenceException();
			}
			__this_03.Show(__this_05);
			break;
		case 0x5da1df3:
			items = new List<string>();
			pSVar14 = BuiltinLevels.GetMapCategories();
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			iVar24 = (int)pSVar14.Length;
			uVar21 = pSVar14.Length & 0xffffffff;
			local_68 = pSVar14;
			if (items == null) {
				if (0 < iVar24) {
					uVar25 = 0;
					do {
						if (uVar21 <= uVar25) goto label_05da238c;
						pSVar19 = pSVar14[uVar25];
						bVar13 = (pSVar19 == "Custom");
						if (!bVar13) {
							pSVar23 = BuiltinLevels.GetMapNames(pSVar19);
							if (pSVar23 == null) goto label_05da23a5;
							pSVar14 = local_68;
							if (0 < (int)pSVar23.Length) {
								if ((pSVar23.Length & 0xffffffff) != 0) {
									String.Concat(pSVar19, "/", pSVar23[0]);
									throw new NullReferenceException();
								}
	label_05da21d9: ;
								throw new IndexOutOfRangeException();
							}
						}
						uVar25 = uVar25 + 1;
						uVar2 = (uint)pSVar14.Length;
						uVar21 = (ulong)uVar2;
					} while ((long)uVar25 < (long)(int)uVar2);
				}
			}
			else if (0 < iVar24) {
				uVar25 = 0;
				do {
					if (uVar21 <= uVar25) {
	label_05da238c: ;
						throw new IndexOutOfRangeException();
					}
					pSVar19 = local_68[uVar25];
					bVar13 = (pSVar19 == "Custom");
					if (!bVar13) {
						pSVar14 = BuiltinLevels.GetMapNames(pSVar19);
						if (pSVar14 == null) {
	label_05da23a5: ;
							throw new NullReferenceException();
						}
						if (0 < (int)pSVar14.Length) {
							uVar21 = pSVar14.Length & 0xffffffff;
							uVar26 = 0;
							do {
								if (uVar21 <= uVar26) goto label_05da21d9;
								pSVar22 = String.Concat(pSVar19, "/", pSVar14[uVar26]);
								piVar1 = &items._version;
								*piVar1 = *piVar1 + 1;
								pSVar23 = items._items;
								if (pSVar23 == null) {
									throw new NullReferenceException();
								}
								uVar2 = items._size;
								if (uVar2 < (uint)pSVar23.Length) {
									items._size = uVar2 + 1;
									pSVar23[(int)uVar2] = pSVar22;
								}
								else {
									items.AddWithResize((object)pSVar22);
								}
								uVar26 = uVar26 + 1;
								uVar2 = (uint)pSVar14.Length;
								uVar21 = (ulong)uVar2;
							} while ((long)uVar26 < (long)(int)uVar2);
						}
					}
					uVar25 = uVar25 + 1;
					uVar2 = (uint)local_68.Length;
					uVar21 = (ulong)uVar2;
				} while ((long)uVar25 < (long)(int)uVar2);
			}
			pUVar7 = this._menu;
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			pSVar14 = (String[])pUVar7.SelectListPopup;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07548101 == false) goto label_05da2338;
	label_05da2227: ;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar19 = "LoadPreset";
			}
			else {
				if (g_data_07548101 != false) goto label_05da2227;
	label_05da2338: ;
				pSVar19 = "LoadPreset";
				g_data_07548101 = true;
				uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			pSVar19 = UIManager.GetLocale("Common", pSVar19, "", "", "");
			pUVar20 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnFileClick_b__48_7);
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			goto label_05da2299;
		}
		return;
	}

	[Token(Token = "0x600541A")]
	[Address(RVA = "0x5CA24A0", Offset = "0x5CA14A0", VA = "0x5CA24A0")]
	public bool Save()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$Save): 1 lines keep C-only constructs
		bool bVar1;
		Action __this_00;

		this.SyncMapScriptObjects();
		__this_00 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
		return bVar1;
	}

	[Token(Token = "0x600541B")]
	[Address(RVA = "0x5CA29F0", Offset = "0x5CA19F0", VA = "0x5CA29F0")]
	public void Autosave()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$Autosave): 13 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StringSetting pSVar3;
		MapEditorGameManager pGVar4;
		MapScript script;
		bool bVar5;
		DirectoryInfo __this_00;
		FileInfo[] source;
		UI_MapEditorTopPanel___c_StaticFields pUVar6;
		Func<T, TResult> __this_01;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		object pIVar7;
		VirtualInvokeData pVVar8;
		String str1;
		String pSVar9;
		ulong uVar10;
		long lVar11;
		object local_50;
		DateTime local_48;
		object* local_38;

		local_50 = null;
		local_48._dateData = 0;
		this.SyncMapScriptObjects();
		pSVar9 = FolderPaths.CustomMapAutosave;
		__this_00 = new DirectoryInfo(pSVar9);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		source = __this_00.GetFiles();
		if ((typeof(MapEditorTopPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar6 = typeof(MapEditorTopPanel.c).static_fields;
			__this_01 = (Func<T, TResult>)pUVar6.__9__50_0;
		}
		else {
			pUVar6 = typeof(MapEditorTopPanel.c).static_fields;
			__this_01 = (Func<T, TResult>)pUVar6.__9__50_0;
		}
		if (__this_01 == null) {
			if (((typeof(MapEditorTopPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar6 = typeof(MapEditorTopPanel.c).static_fields;
			}
			pIVar7 = (object)pUVar6.__9;
			__this_01 = new Func<FileInfo, DateTime>(pIVar7, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c_Autosave_b__50_0);
			pUVar6 = typeof(MapEditorTopPanel.c).static_fields;
			pUVar6.__9__50_0 = (Func<FileInfo, DateTime>)__this_01;
		}
		source_00 = Enumerable.OrderByDescending<FileInfo, DateTime>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_01);
		pIVar7 = (object)Enumerable.Skip<FileInfo>((System_Collections_Generic_IEnumerable_TSource__o)source_00, 100);
		if (pIVar7 == null) {
			throw new NullReferenceException();
		}
		pIVar1 = pIVar7.klass;
		uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
		local_50 = pIVar7.Dispose();
		local_38 = &local_50;
		do {
			pIVar7 = local_50;
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_50.klass;
			uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
			bVar5 = pIVar7.Dispose();
			pIVar7 = local_50;
			if (!bVar5) {
				if (local_50 == null) goto label_05da2e36;
				pIVar1 = local_50.klass;
				uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar10 == 0) goto label_05da2e0f;
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar11 = 0;
				break;
			}
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_50.klass;
			uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
			pIVar7 = pIVar7.Dispose();
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			(*pIVar7.klass.vtable[0xb].methodPtr)(pIVar7,pIVar7.klass.vtable[0xb].method);
		} while(true);
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar8 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar11);
				goto label_05da2e2d;
			}
		}
	label_05da2e0f: ;
	label_05da2e2d: ;
		pIVar7.Dispose();
	label_05da2e36: ;
		pSVar3 = this._currentMap;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar9 = pSVar3._value;
		local_48._dateData = (uint64_t)DateTime.Now;
		str1 = local_48.ToString("MM-dd-yyyy-HH-mm");
		pSVar9 = String.Concat(pSVar9, str1);
		pGVar4 = this._gameManager;
		if (pGVar4 == null) {
			throw new NullReferenceException();
		}
		script = pGVar4.MapScript;
		BuiltinLevels.AutosaveCustomMap(pSVar9, script);
		return;
	}

	[Token(Token = "0x600541C")]
	[Address(RVA = "0x5CA2520", Offset = "0x5CA1520", VA = "0x5CA2520")]
	private void SyncMapScriptObjects()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SyncMapScriptObjects): 10 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		MapEditorGameManager pGVar3;
		MapScript pMVar4;
		MapScriptObjects pMVar5;
		List<MapScriptBaseObject> __this_00;
		List<int> __this_01;
		Dictionary<int, object> pSVar6;
		MapScriptBaseObject item;
		MapScriptBaseObject[] pMVar7;
		uint key;
		bool bVar9;
		MapObject pMVar10;
		byte[] local_60 = new byte[16];
		object local_50;
		byte[] local_48 = new byte[24];

		pGVar3 = this._gameManager;
		if ((((pGVar3 != null) &&(pMVar4 = pGVar3.MapScript, pMVar4 != null)) &&(pMVar5 = pMVar4.Objects, pMVar5 != null)) &&(__this_00 = pMVar5.Objects, __this_00 != null)) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			length = __this_00._size;
			__this_00._size = 0;
			if (0 < length) {
				Array.Clear((Array)__this_00._items, 0, length);
			}
			__this_01 = MapLoader.ObjectOrder;
			if (__this_01 != null) {
				local_60.GetEnumerator(__this_01);
				local_48._16_8_ = local_50;
				local_48._0_8_ = local_60._0_8_;
				local_48._8_8_ = local_60._8_8_;
				local_60._0_8_ = null;
				local_60._8_8_ = (System_Collections_Generic_List_Enumerator_int__o)local_48;
				while(true) {
					do {
						bVar9 = local_48.MoveNext();
						if (!bVar9) {
							local_48.Dispose();
							return;
						}
						key = local_48._16_4_;
						pSVar6 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						bVar9 = pSVar6.ContainsKey(key);
					} while (!bVar9);
					pSVar6 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pMVar10 = pSVar6.get_Item(key);
					if (pMVar10 == null) {
						throw new NullReferenceException();
					}
					item = pMVar10.ScriptObject;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pMVar7 = __this_00._items;
					if (pMVar7 == null) break;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pMVar7.Length) {
						__this_00._size = uVar2 + 1;
						pMVar7[(int)uVar2] = item;
					}
					else {
						__this_00.AddWithResize((object)item);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600541D")]
	[Address(RVA = "0x5CA30C0", Offset = "0x5CA20C0", VA = "0x5CA30C0")]
	protected void OnEditClick()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnEditClick): clean
		MapEditorMenu __this_00;
		IntSetting pSVar1;
		MapEditorGameManager pGVar2;
		bool bVar3;

		__this_00 = this._menu;
		if (__this_00 != null) {
			bVar3 = __this_00.IsPopupActive();
			if (bVar3) {
	label_05da30f9: ;
				return;
			}
			pSVar1 = this._dropdownSelection;
			if (pSVar1 != null) {
				switch(pSVar1._value) {
				case 0:
					pGVar2 = this._gameManager;
					if (pGVar2 != null) {
						pGVar2.Undo();
						return;
					}
					break;
				case 1:
					pGVar2 = this._gameManager;
					if (pGVar2 != null) {
						pGVar2.Redo();
						return;
					}
					break;
				case 2:
					pGVar2 = this._gameManager;
					if (pGVar2 != null) {
						pGVar2.Copy();
						return;
					}
					break;
				case 3:
					pGVar2 = this._gameManager;
					if (pGVar2 != null) {
						pGVar2.Paste();
						return;
					}
					break;
				case 4:
					pGVar2 = this._gameManager;
					if (pGVar2 != null) {
						pGVar2.Cut();
						return;
					}
					break;
				case 5:
					pGVar2 = this._gameManager;
					if (pGVar2 != null) {
						pGVar2.Delete();
						return;
					}
					break;
				default: ;
					goto label_05da30f9;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600541E")]
	[Address(RVA = "0x5CA31B0", Offset = "0x5CA21B0", VA = "0x5CA31B0")]
	protected void OnOptionsClick()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnOptionsClick): 1 lines keep C-only constructs
		MapEditorMenu pUVar1;
		IntSetting pSVar2;
		bool bVar3;
		MapEditorCustomAssetPopup pUVar4;

		pUVar1 = this._menu;
		if (pUVar1 != null) {
			bVar3 = pUVar1.IsPopupActive();
			if (bVar3) {
	switchD_05da3212_default: ;
				return;
			}
			pSVar2 = this._dropdownSelection;
			if (pSVar2 != null) {
				switch(pSVar2._value) {
				case 0:
					pUVar1 = this._menu;
					if (pUVar1 == null) goto label_05da3294;
					pUVar4 = (MapEditorCustomAssetPopup)pUVar1.SettingsPopup;
					break;
				case 1:
					pUVar1 = this._menu;
					if (pUVar1 == null) goto label_05da3294;
					pUVar4 = (MapEditorCustomAssetPopup)pUVar1.InfoPopup;
					break;
				case 2:
					pUVar1 = this._menu;
					if (pUVar1 == null) goto label_05da3294;
					pUVar4 = (MapEditorCustomAssetPopup)pUVar1.WeatherPopup;
					break;
				case 3:
					pUVar1 = this._menu;
					if (pUVar1 == null) goto label_05da3294;
					pUVar4 = (MapEditorCustomAssetPopup)pUVar1.CustomLogicPopup;
					break;
				case 4:
					pUVar1 = this._menu;
					if (pUVar1 == null) goto label_05da3294;
					pUVar4 = pUVar1.CustomAssetsPopup;
					break;
				default: ;
					goto switchD_05da3212_default;
				}
				if (pUVar4 != null) {
					(*(((UI_MapEditorSettingsPopup_VTable)&pUVar4.klass.vtable)._21_Show).methodPtr)(pUVar4,(((UI_MapEditorSettingsPopup_VTable)&pUVar4.klass.vtable)._21_Show).method);
					return;
				}
			}
		}
	label_05da3294: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600541F")]
	[Address(RVA = "0x5CA32A0", Offset = "0x5CA22A0", VA = "0x5CA32A0")]
	protected void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnButtonClick): clean
		MapEditorMenu pUVar1;
		MapEditorCameraPopup pUVar2;
		MapEditorGameManager __this_00;
		ExternalLinkPopup __this_01;
		bool bVar3;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo *)"AddObject";
		bVar3 = (name == "AddObject");
		pUVar1 = this._menu;
		if (bVar3) {
			if (pUVar1 != null) {
				pUVar1.ToggleAddObjectPopup();
				return;
			}
		}
		else if (pUVar1 != null) {
			bVar3 = pUVar1.IsPopupActive();
			if (bVar3) {
				return;
			}
			bVar3 = (name == "Camera");
			if (bVar3) {
				pUVar1 = this._menu;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.CameraPopup, pUVar2 != null)) {
					pUVar2.Show();
					return;
				}
			}
			else {
				pMVar4 = (MethodInfo *)"Gizmo";
				bVar3 = (name == "Gizmo");
				if (bVar3) {
					this.NextGizmo();
					return;
				}
				bVar3 = (name == "GizmoOrientation");
				if (bVar3) {
					__this_00 = this._gameManager;
					if (__this_00 != null) {
						bVar3 = __this_00.CurrentGizmoMode == 0;
						__this_00.SetGizmoMode((uint)bVar3);
						this.RefreshControlStates();
						return;
					}
				}
				else {
					pMVar4 = (MethodInfo *)"Snap";
					bVar3 = (name == "Snap");
					if (bVar3) {
						this.ToggleSnap();
						return;
					}
					pMVar4 = (MethodInfo *)"Brush";
					bVar3 = (name == "Brush");
					if (bVar3) {
						this.ToggleBrush();
						return;
					}
					pMVar4 = (MethodInfo *)"Light";
					bVar3 = (name == "Light");
					if (bVar3) {
						this.ToggleLights();
						return;
					}
					bVar3 = (name == "Tutorial");
					if (!bVar3) {
						return;
					}
					pUVar1 = this._menu;
					if ((pUVar1 != null) &&(__this_01 = pUVar1.ExternalLinkPopup, __this_01 != null)) {
						__this_01.Show("https://aottg2.gitbook.io/custom-maps");
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005420")]
	[Address(RVA = "0x5CA3650", Offset = "0x5CA2650", VA = "0x5CA3650")]
	public void ToggleSnap()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$ToggleSnap): 2 lines keep C-only constructs
		bool pbVar1;
		MapEditorGameManager pGVar2;

		pGVar2 = this._gameManager;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		pbVar1 = &pGVar2.Snap;
		*pbVar1 = (bool)(*pbVar1 ^ 1);
		this.RefreshControlStates();
		return;
	}

	[Token(Token = "0x6005421")]
	[Address(RVA = "0x5CA36B0", Offset = "0x5CA26B0", VA = "0x5CA36B0")]
	public void ToggleLights()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$ToggleLights): clean
		bool bVar1;
		MapEditorGameManager pGVar2;

		pGVar2 = this._gameManager;
		if (pGVar2 != null) {
			pGVar2.ToggleLights();
			pGVar2 = this._gameManager;
			if (pGVar2 != null) {
				bVar1 = pGVar2._lightsOn;
				MapEditorTopPanel._lightsEnabled = bVar1;
				this.RefreshControlStates();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005422")]
	[Address(RVA = "0x5CA3730", Offset = "0x5CA2730", VA = "0x5CA3730")]
	public void ApplyViewSettings()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$ApplyViewSettings): clean
		uint uVar1;
		MapEditorGameManager pGVar2;
		HashSetSetting<int> pSVar3;
		MethodInfo method_00;

		pGVar2 = this._gameManager;
		pSVar3 = MapEditorTopPanel._gridSelection;
		if ((pSVar3 != null) &&(pGVar2 != null)) {
			pGVar2.SetGridAxes((HashSet<int>)pSVar3._value);
			pGVar2 = this._gameManager;
			if (pGVar2 != null) {
				if (MapEditorTopPanel._lightsEnabled == pGVar2._lightsOn) {
					uVar1 = (typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor;
				}
				else {
					pGVar2.ToggleLights();
					pGVar2 = this._gameManager;
					uVar1 = (typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				if (pGVar2 != null) {
					method_00 = *(MethodInfo*)((long)(typeof(MapEditorTopPanel)).static_fields + 8);
					pGVar2.SetLayerVisibility((HashSetSetting<int>)method_00);
					this.RefreshControlStates();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005423")]
	[Address(RVA = "0x5CA3670", Offset = "0x5CA2670", VA = "0x5CA3670")]
	public void ToggleBrush()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$ToggleBrush): clean


		this.SelectTool("Brush");
		return;
	}

	[Token(Token = "0x6005424")]
	[Address(RVA = "0x5CA3B20", Offset = "0x5CA2B20", VA = "0x5CA3B20")]
	public void OnLayersChanged()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnLayersChanged): clean
		MapEditorMenu __this_00;
		MapEditorGameManager __this_01;
		bool bVar1;
		MethodInfo method_00;

		__this_00 = this._menu;
		if (__this_00 != null) {
			bVar1 = __this_00.IsPopupActive();
			if (bVar1) {
				return;
			}
			__this_01 = this._gameManager;
			if (__this_01 != null) {
				method_00 = (MethodInfo)MapEditorTopPanel._layerSelection;
				__this_01.SetLayerVisibility((HashSetSetting<int>)method_00);
				this.RefreshControlStates();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005425")]
	[Address(RVA = "0x5CA3620", Offset = "0x5CA2620", VA = "0x5CA3620")]
	public void NextGizmoOrientation()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$NextGizmoOrientation): clean
		MapEditorGameManager __this_00;
		bool bVar1;

		__this_00 = this._gameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.CurrentGizmoMode == 0;
		__this_00.SetGizmoMode((uint)bVar1);
		this.RefreshControlStates();
		return;
	}

	[Token(Token = "0x6005426")]
	[Address(RVA = "0x5CA3500", Offset = "0x5CA2500", VA = "0x5CA3500")]
	public void NextGizmo()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$NextGizmo): 1 lines keep C-only constructs
		BaseGizmo pMVar1;
		PositionGizmo y;
		RotationGizmo y_00;
		bool bVar2;
		String* ppSVar3;
		MethodInfo method_00;
		MapEditorGameManager pGVar4;

		pGVar4 = this._gameManager;
		if (pGVar4 != null) {
			pMVar1 = pGVar4.CurrentGizmo;
			y = pGVar4._positionGizmo;
			bVar2 = ((Object)pMVar1 == (Object)y);
			pGVar4 = this._gameManager;
			if (bVar2) {
				if (pGVar4 != null) {
					ppSVar3 = &"Rotation";
					goto label_05da35f9;
				}
			}
			else if (pGVar4 != null) {
				pMVar1 = pGVar4.CurrentGizmo;
				y_00 = pGVar4._rotationGizmo;
				bVar2 = ((Object)pMVar1 == (Object)y_00);
				pGVar4 = this._gameManager;
				if (bVar2) {
					if (pGVar4 == null) goto label_05da3616;
					ppSVar3 = &"Scale";
				}
				else {
					if (pGVar4 == null) goto label_05da3616;
					ppSVar3 = &"Position";
				}
	label_05da35f9: ;
				method_00 = (MethodInfo)*ppSVar3;
				pGVar4.SetGizmo((String)method_00);
				this.RefreshControlStates();
				return;
			}
		}
	label_05da3616: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005427")]
	[Address(RVA = "0x5CA3BB0", Offset = "0x5CA2BB0", VA = "0x5CA3BB0")]
	private void SelectGizmo(string gizmo)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SelectGizmo): clean
		MapEditorGameManager __this_00;

		__this_00 = this._gameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetGizmo(gizmo);
		this.RefreshControlStates();
		return;
	}

	[Token(Token = "0x6005428")]
	[Address(RVA = "0x5CA3830", Offset = "0x5CA2830", VA = "0x5CA3830")]
	public void SelectTool(string tool)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SelectTool): 3 lines keep C-only constructs
		String* targetAddress;
		MapEditorMenu pUVar1;
		MapEditorCameraPopup pUVar2;
		MapEditorBrush pMVar3;
		MapEditorRuler pMVar4;
		bool bVar5;
		bool bVar6;
		MapEditorGameManager pGVar7;
		MethodInfo pMVar8;

		bVar5 = (this._selectedTool == tool);
		bVar6 = (this._selectedTool == "Camera");
		if ((bVar6) &&((bVar5 || (bVar6 = (tool != "Camera"))))) {
			pUVar1 = this._menu;
			if ((pUVar1 == null) ||(pUVar2 = pUVar1.CameraPopup, pUVar2 == null)) goto label_05da3b11;
			pUVar2.Hide();
		}
		pGVar7 = this._gameManager;
		if ((pGVar7 == null) ||(pMVar3 = pGVar7.Brush, pMVar3 == null)) goto label_05da3b11;
		if (pMVar3.Active != false) {
			if (!bVar5) {
				bVar6 = (tool != "Brush");
				if (!bVar6) goto label_05da3940;
				pGVar7 = this._gameManager;
				if (pGVar7 == null) goto label_05da3b11;
			}
			pGVar7.ToggleBrush();
		}
	label_05da3940: ;
		pGVar7 = this._gameManager;
		if ((pGVar7 == null) ||(pMVar4 = pGVar7.Ruler, pMVar4 == null)) goto label_05da3b11;
		if (pMVar4._Active_k__BackingField == false) {
	label_05da39cc: ;
			if (bVar5) {
				if (this == null) goto label_05da3b11;
				pMVar8 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
				this._selectedTool = (String)pMVar8;
				goto label_05da3aff;
			}
		}
		else {
			if (bVar5) {
	label_05da3997: ;
				pMVar4 = pGVar7.Ruler;
				if (pMVar4 == null) goto label_05da3b11;
				pMVar8 = null;
				pMVar4.SetActive(false, this._menu);
				pUVar1 = this._menu;
				if (pUVar1 == null) goto label_05da3b11;
				pUVar1.HideRulerPanel();
				goto label_05da39cc;
			}
			bVar6 = (tool != "Ruler");
			if (bVar6) {
				pGVar7 = this._gameManager;
				if (pGVar7 == null) goto label_05da3b11;
				goto label_05da3997;
			}
		}
		targetAddress = &this._selectedTool;
		*targetAddress = tool;
		bVar5 = (tool == "Camera");
		if (bVar5) {
			pUVar1 = this._menu;
			if ((pUVar1 == null) ||(pUVar2 = pUVar1.CameraPopup, pUVar2 == null)) goto label_05da3b11;
			pMVar8 = (pUVar2.klass.vtable)._21_Show.method;
			pUVar2.Show();
		}
		else {
			bVar5 = (tool == "Brush");
			if (bVar5) {
				pGVar7 = this._gameManager;
				if ((pGVar7 == null) ||(pMVar3 = pGVar7.Brush, pMVar3 == null)) goto label_05da3b11;
				if (pMVar3.Active == false) {
					pMVar8 = null;
					pGVar7.ToggleBrush();
					goto label_05da3aff;
				}
			}
			pMVar8 = (MethodInfo *)"Ruler";
			bVar5 = (tool == "Ruler");
			if (bVar5) {
				pGVar7 = this._gameManager;
				if ((pGVar7 != null) &&(pMVar4 = pGVar7.Ruler, pMVar4 != null)) {
					pMVar8 = (MethodInfo)0x1;
					pMVar4.SetActive(true, this._menu);
					pUVar1 = this._menu;
					if (pUVar1 != null) {
						pUVar1.ShowRulerPanel();
						goto label_05da3aff;
					}
				}
	label_05da3b11: ;
				throw new NullReferenceException();
			}
		}
	label_05da3aff: ;
		this.RefreshControlStates();
		return;
	}

	[Token(Token = "0x6005429")]
	[Address(RVA = "0x5C99C20", Offset = "0x5C98C20", VA = "0x5C99C20")]
	public void CloseRulerTool()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$CloseRulerTool): 2 lines keep C-only constructs
		String* targetAddress;
		MapEditorGameManager pGVar1;
		MapEditorRuler __this_00;
		MapEditorMenu __this_01;
		bool bVar2;
		MethodInfo method_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(__this_00 = pGVar1.Ruler, __this_00 != null)) {
			if (__this_00._Active_k__BackingField != false) {
				__this_00.SetActive(false, this._menu);
			}
			__this_01 = this._menu;
			if (__this_01 != null) {
				__this_01.HideRulerPanel();
				method_00 = (MethodInfo *)"Ruler";
				bVar2 = (this._selectedTool == "Ruler");
				if (bVar2) {
					targetAddress = &this._selectedTool;
					method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
					*targetAddress = (String)method_00;
				}
				this.RefreshControlStates();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600542A")]
	[Address(RVA = "0x5CA3BE0", Offset = "0x5CA2BE0", VA = "0x5CA3BE0")]
	private void OnToolSelected()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnToolSelected): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		IntSetting pSVar3;
		uint uVar4;
		object pIVar5;
		uint uVar6;

		pSVar3 = this._toolDropdownSelection;
		if (pSVar3 != null) {
			if (pSVar3._value == 3) {
				this.OnButtonClick("Tutorial");
				return;
			}
			pIVar5 = new string[3];
			if (pIVar5 != null) {
				if (*(int)&pIVar5[1].monitor != 0) {
					pIVar5[2].klass = (Il2CppClass *)"Camera";
					if (((ulong)pIVar5[1].monitor & 0xfffffffe) != 0) {
						pIVar5[2].monitor = "Brush";
						if (2 < *(uint)&pIVar5[1].monitor) {
							pIVar5[3].klass = (Il2CppClass *)"Ruler";
							pSVar3 = this._toolDropdownSelection;
							if (pSVar3 == null) goto label_05da3d2a;
							uVar1 = pSVar3._value;
							uVar2 = *(uint)&pIVar5[1].monitor;
							uVar6 = uVar2 - 1;
							if ((int)uVar1 < (int)(uVar2 - 1)) {
								uVar6 = uVar1;
							}
							uVar4 = 0;
							if (-1 < (int)uVar1) {
								uVar4 = uVar6;
							}
							if (uVar4 < uVar2) {
								this.SelectTool((String)(&pIVar5[2].klass)[(int)uVar4]);
								return;
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05da3d2a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600542B")]
	[Address(RVA = "0x5CA3D40", Offset = "0x5CA2D40", VA = "0x5CA3D40")]
	public void CloseBrushTool()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$CloseBrushTool): 2 lines keep C-only constructs
		String* targetAddress;
		MapEditorGameManager __this_00;
		MapEditorBrush pMVar1;
		bool bVar2;
		MethodInfo method_00;

		__this_00 = this._gameManager;
		if ((__this_00 == null) ||(pMVar1 = __this_00.Brush, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		if (pMVar1.Active != false) {
			__this_00.ToggleBrush();
		}
		method_00 = (MethodInfo *)"Brush";
		bVar2 = (this._selectedTool == "Brush");
		if (bVar2) {
			targetAddress = &this._selectedTool;
			method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
			*targetAddress = (String)method_00;
		}
		this.RefreshControlStates();
		return;
	}

	[Token(Token = "0x600542C")]
	[Address(RVA = "0x5CA3DE0", Offset = "0x5CA2DE0", VA = "0x5CA3DE0")]
	private void OnGridChanged()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnGridChanged): clean
		MapEditorGameManager __this_00;
		HashSetSetting<int> pSVar1;
		MethodInfo method_00;

		__this_00 = this._gameManager;
		pSVar1 = MapEditorTopPanel._gridSelection;
		if ((pSVar1 == null) ||(__this_00 == null)) {
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo)pSVar1._value;
		__this_00.SetGridAxes((HashSet<int>)method_00);
		this.RefreshControlStates();
		return;
	}

	[Token(Token = "0x600542D")]
	[Address(RVA = "0x5C9F720", Offset = "0x5C9E720", VA = "0x5C9F720")]
	private static string Locale(string item)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("MapEditor", "Top", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x600542E")]
	[Address(RVA = "0x5C9F600", Offset = "0x5C9E600", VA = "0x5C9F600")]
	private string GizmoModeText()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$GizmoModeText): clean
		uint uVar1;
		MapEditorGameManager pGVar2;
		String pSVar3;

		pGVar2 = this._gameManager;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = (typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor;
		if (pGVar2.CurrentGizmoMode == 0) {
			pSVar3 = "GizmoCenter";
			if (uVar1 == 0) {
				pSVar3 = "GizmoCenter";
			}
		}
		else {
			pSVar3 = "GizmoLocal";
			if (uVar1 == 0) {
				pSVar3 = "GizmoLocal";
			}
		}
		pSVar3 = UIManager.GetLocale("MapEditor", "Top", pSVar3, "", "");
		return pSVar3;
	}

	[Token(Token = "0x600542F")]
	[Address(RVA = "0x5C9FD50", Offset = "0x5C9ED50", VA = "0x5C9FD50")]
	private string GetPlayModeLabel()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$GetPlayModeLabel): clean
		uint uVar1;
		StringSetting pSVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075480ae == false) {
			Il2CppMethodInitialized_075480ae = true;
			uVar1 = (typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = "PlayMode";
		}
		else {
			pSVar3 = "PlayMode";
		}
		"PlayMode" = pSVar3;
		if (Il2CppMethodInitialized_075480ac == false) {
			Il2CppMethodInitialized_075480ac = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = UIManager.GetLocale("MapEditor", "Top", pSVar3, "", "");
		pSVar2 = this._playMode;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = String.Format(pSVar3, (object)pSVar2._value);
		return pSVar3;
	}

	[Token(Token = "0x6005430")]
	[Address(RVA = "0x5CA3E70", Offset = "0x5CA2E70", VA = "0x5CA3E70")]
	private void RefreshPlayModeLabel()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$RefreshPlayModeLabel): clean
		DropdownSelectElement pUVar1;
		bool bVar2;
		Transform pUVar3;
		Text pUVar4;
		String pSVar5;

		pUVar1 = this._playModeDropdown;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._playModeDropdown;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.transform;
				if (pUVar3 != null) {
					pUVar3 = pUVar3.Find("Dropdown/SelectedButton/Label");
					if (pUVar3 != null) {
						pUVar4 = pUVar3.GetComponent<Text>();
						pSVar5 = this.GetPlayModeLabel();
						if (pUVar4 != null) {
							pUVar4.set_text(pSVar5);
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6005431")]
	[Address(RVA = "0x5CA3F60", Offset = "0x5CA2F60", VA = "0x5CA3F60")]
	private void OnPlayModeSelected()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnPlayModeSelected): clean
		this._playModeExplicitlySelected = true;
		this.RefreshPlayModeLabel();
		return;
	}

	[Token(Token = "0x6005432")]
	[Address(RVA = "0x5CA3F70", Offset = "0x5CA2F70", VA = "0x5CA3F70")]
	private void PlayMap()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$PlayMap): 3 lines keep C-only constructs
		MapEditorGameManager pGVar1;
		MapScript pMVar2;
		StringSetting pSVar3;
		InGameSet pSVar4;
		InGameGeneralSettings pSVar5;
		StringSetting pSVar6;
		String gameMode;
		InGameMiscSettings settings;
		InGameModeSettings pSVar7;
		InGameSet pSVar8;
		MultiplayerSettings pSVar9;
		bool bVar10;
		Action __this_00;
		String* ppSVar11;
		String pSVar12;
		Dictionary<string, BaseSetting> pSVar13;
		MethodInfo method_01;

		this.SyncMapScriptObjects();
		__this_00 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
		this.TrySaveMapFile(__this_00);
		if (this._playModeExplicitlySelected == false) {
			pGVar1 = this._gameManager;
			if ((pGVar1 == null) ||(pMVar2 = pGVar1.MapScript, pMVar2 == null)) goto label_05da437a;
			pSVar3 = this._playMode;
			bVar10 = String.IsNullOrWhiteSpace(pMVar2.Logic);
			if (bVar10) {
				ppSVar11 = &"None";
			}
			else {
				ppSVar11 = &BuiltinLevels.UseMapLogic;
			}
			if (pSVar3 == null) goto label_05da437a;
			method_01 = (MethodInfo)*ppSVar11;
			pSVar3.Value = (object)method_01;
			this.RefreshPlayModeLabel();
		}
		pSVar4 = SettingsManager.InGameUI;
		if (pSVar4 != null) {
			pSVar4.SetDefault();
			pSVar5 = pSVar4.General;
			if ((pSVar5 != null) &&(pSVar3 = pSVar5.MapCategory, pSVar3 != null)) {
				pSVar3.Value = (Il2CppObject *)"Custom";
				pSVar5 = pSVar4.General;
				if ((pSVar5 != null) &&((pSVar3 = this._currentMap, pSVar3 != null &&(pSVar6 = pSVar5.MapName, pSVar6 != null)))) {
					pSVar6.Value = (object)pSVar3._value;
					pSVar5 = pSVar4.General;
					if ((pSVar5 != null) &&((pSVar3 = this._playMode, pSVar3 != null &&(pSVar6 = pSVar5.GameMode, pSVar6 != null)))) {
						pSVar6.Value = (object)pSVar3._value;
						pSVar5 = pSVar4.General;
						if ((pSVar5 != null) &&((pSVar3 = this._playMode, pSVar3 != null &&(pSVar6 = pSVar5.PrevGameMode, pSVar6 != null)))) {
							pSVar6.Value = (object)pSVar3._value;
							pSVar3 = this._currentMap;
							if ((pSVar3 != null) &&(pSVar6 = this._playMode, pSVar6 != null)) {
								pSVar12 = pSVar3._value;
								gameMode = pSVar6._value;
								settings = pSVar4.Misc;
								BuiltinLevels.LoadSandboxMiscSettings("Custom", pSVar12, gameMode, settings);
								pSVar3 = this._playMode;
								if (pSVar3 != null) {
									pSVar12 = BuiltinLevels.LoadLogic(pSVar3._value);
									bVar10 = (pSVar12 == BuiltinLevels.UseMapLogic);
									if (bVar10) {
										pGVar1 = this._gameManager;
										if ((pGVar1 == null) ||(pMVar2 = pGVar1.MapScript, pMVar2 == null)) goto label_05da437a;
										pSVar12 = pMVar2.Logic;
									}
									pSVar7 = pSVar4.Mode;
									pSVar13 = CustomLogicManager.GetModeSettings(pSVar12);
									if (pSVar7 != null) {
										pSVar7.Current = pSVar13;
										pSVar8 = SettingsManager.InGameCurrent;
										if (pSVar8 != null) {
											pSVar8.Copy((BaseSetting)pSVar4);
											InGameManager.StartMapEditorPlaytest();
											pSVar9 = SettingsManager.MultiplayerSettings;
											if (pSVar9 != null) {
												pSVar9.ConnectOffline();
												pSVar9 = SettingsManager.MultiplayerSettings;
												if (pSVar9 != null) {
													pSVar9.StartRoom();
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
	label_05da437a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005433")]
	[Address(RVA = "0x5CA0720", Offset = "0x5C9F720", VA = "0x5CA0720")]
	private void RefreshControlStates()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$RefreshControlStates): 44 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		MapEditorGameManager pGVar3;
		GameObject pUVar4;
		PositionGizmo y;
		RotationGizmo y_00;
		ScaleGizmo y_01;
		RawImage pUVar5;
		HashSetSetting<int> pSVar6;
		HashSet<T> pSVar7;
		bool bVar8;
		String pSVar9;
		Transform pUVar10;
		Text pUVar11;
		HoverTooltip pUVar12;
		String pSVar13;
		String* ppSVar14;
		MapEditorTopPanel pUVar15;
		Utility_ResourcePaths_StaticFields pUVar16;
		Texture value;
		String panel;
		MethodInfo in_RCX;
		MethodInfo in_R8;
		ulong uVar18;
		ulong uVar19;
		ulong uVar20;
		Color iconColor;
		Color iconColor_00;
		Color UVar21;
		Color iconColor_01;
		Color UVar22;
		Color normal;
		Color normal_00;
		Color normal_01;
		Color normal_02;
		Color highlighted;
		Color highlighted_00;
		Color highlighted_01;
		Color highlighted_02;

		pGVar3 = this._gameManager;
		if (pGVar3 == null) goto label_05da10d3;
		pUVar4 = this._positionButton;
		pUVar15 = (MapEditorTopPanel)pGVar3.CurrentGizmo;
		bVar8 = ((Object)pUVar15 == null);
		if (bVar8) {
	label_05da08a8: ;
			UVar21._8_8_ = 0x3f8000003f800000;
			uVar18 = UVar21._8_8_;
			uVar20 = UVar21._8_8_;
			uVar19 = UVar21._8_8_;
		}
		else {
			pGVar3 = this._gameManager;
			if (pGVar3 == null) goto label_05da10d3;
			pUVar15 = (MapEditorTopPanel)pGVar3.CurrentGizmo;
			y = pGVar3._positionGizmo;
			bVar8 = ((Object)pUVar15 == (Object)y);
			if (bVar8) goto label_05da08a8;
			uVar19 = 0x3f8000003f59999a;
			uVar20 = 0x3f59999a3f59999a;
			UVar21._8_8_ = 0x3f19999a3f19999a;
			uVar18 = 0x3f8000003f19999a;
		}
		UVar21.b = 1.0;
		UVar21.a = 1.0;
		UVar21.r = 1.0;
		UVar21.g = 1.0;
		normal.b = (float)(int)uVar18;
		normal.a = (float)(int)((ulong)uVar18 >> 0x20);
		normal.r = (float)(int)UVar21._8_8_;
		normal.g = (float)(int)((ulong)UVar21._8_8_ >> 0x20);
		highlighted.b = (float)(int)uVar19;
		highlighted.a = (float)(int)((ulong)uVar19 >> 0x20);
		highlighted.r = (float)(int)uVar20;
		highlighted.g = (float)(int)((ulong)uVar20 >> 0x20);
		pUVar15.SetIconButtonColors(pUVar4, UVar21, normal, highlighted);
		pGVar3 = this._gameManager;
		if (pGVar3 == null) goto label_05da10d3;
		pUVar4 = this._rotationButton;
		pUVar15 = (MapEditorTopPanel)pGVar3.CurrentGizmo;
		bVar8 = ((Object)pUVar15 != null);
		UVar21._8_8_ = 0x3f19999a3f19999a;
		uVar19 = 0x3f8000003f19999a;
		uVar20 = 0x3f59999a3f59999a;
		uVar18 = 0x3f8000003f59999a;
		if (bVar8) {
			pGVar3 = this._gameManager;
			if (pGVar3 == null) goto label_05da10d3;
			pUVar15 = (MapEditorTopPanel)pGVar3.CurrentGizmo;
			y_00 = pGVar3._rotationGizmo;
			bVar8 = ((Object)pUVar15 == (Object)y_00);
			UVar21._8_8_ = 0x3f19999a3f19999a;
			uVar19 = 0x3f8000003f19999a;
			uVar20 = 0x3f59999a3f59999a;
			uVar18 = 0x3f8000003f59999a;
			if (bVar8) {
				UVar21._8_8_ = 0x3f8000003f800000;
				uVar19 = UVar21._8_8_;
				uVar20 = UVar21._8_8_;
				uVar18 = UVar21._8_8_;
			}
		}
		iconColor.b = 1.0;
		iconColor.a = 1.0;
		iconColor.r = 1.0;
		iconColor.g = 1.0;
		normal_00.b = (float)(int)uVar19;
		normal_00.a = (float)(int)((ulong)uVar19 >> 0x20);
		normal_00.r = (float)(int)UVar21._8_8_;
		normal_00.g = (float)(int)((ulong)UVar21._8_8_ >> 0x20);
		highlighted_00.b = (float)(int)uVar18;
		highlighted_00.a = (float)(int)((ulong)uVar18 >> 0x20);
		highlighted_00.r = (float)(int)uVar20;
		highlighted_00.g = (float)(int)((ulong)uVar20 >> 0x20);
		pUVar15.SetIconButtonColors(pUVar4, iconColor, normal_00, highlighted_00);
		pGVar3 = this._gameManager;
		if (pGVar3 == null) goto label_05da10d3;
		pUVar4 = this._scaleButton;
		pUVar15 = (MapEditorTopPanel)pGVar3.CurrentGizmo;
		bVar8 = ((Object)pUVar15 != null);
		UVar21._8_8_ = 0x3f19999a3f19999a;
		uVar19 = 0x3f8000003f19999a;
		uVar20 = 0x3f59999a3f59999a;
		uVar18 = 0x3f8000003f59999a;
		if (bVar8) {
			pGVar3 = this._gameManager;
			if (pGVar3 == null) goto label_05da10d3;
			pUVar15 = (MapEditorTopPanel)pGVar3.CurrentGizmo;
			y_01 = pGVar3._scaleGizmo;
			bVar8 = ((Object)pUVar15 == (Object)y_01);
			UVar21._8_8_ = 0x3f19999a3f19999a;
			uVar19 = 0x3f8000003f19999a;
			uVar20 = 0x3f59999a3f59999a;
			uVar18 = 0x3f8000003f59999a;
			if (bVar8) {
				UVar21._8_8_ = 0x3f8000003f800000;
				uVar19 = UVar21._8_8_;
				uVar20 = UVar21._8_8_;
				uVar18 = UVar21._8_8_;
			}
		}
		iconColor_00.b = 1.0;
		iconColor_00.a = 1.0;
		iconColor_00.r = 1.0;
		iconColor_00.g = 1.0;
		normal_01.b = (float)(int)uVar19;
		normal_01.a = (float)(int)((ulong)uVar19 >> 0x20);
		normal_01.r = (float)(int)UVar21._8_8_;
		normal_01.g = (float)(int)((ulong)UVar21._8_8_ >> 0x20);
		highlighted_01.b = (float)(int)uVar18;
		highlighted_01.a = (float)(int)((ulong)uVar18 >> 0x20);
		highlighted_01.r = (float)(int)uVar20;
		highlighted_01.g = (float)(int)((ulong)uVar20 >> 0x20);
		pUVar15.SetIconButtonColors(pUVar4, iconColor_00, normal_01, highlighted_01);
		pGVar3 = this._gameManager;
		if (pGVar3 == null) goto label_05da10d3;
		this.SetTextButtonActive(this._snapButton, pGVar3.Snap);
		pUVar15 = (MapEditorTopPanel)this._gizmoOrientationButton;
		bVar8 = ((Object)pUVar15 != null);
		if (bVar8) {
			pSVar9 = this.GizmoModeText();
			pUVar4 = this._gizmoOrientationButton;
			if ((((pUVar4 == null) ||(pUVar10 = pUVar4.transform, pUVar10 == null)) ||(pUVar10 = pUVar10.Find("Text"), pUVar10 == null)) ||(pUVar11 = pUVar10.GetComponent<Text>(), pUVar11 == null)) goto label_05da10d3;
			pUVar11.set_text(pSVar9);
			pUVar4 = this._gizmoOrientationButton;
			if (pUVar4 == null) goto label_05da10d3;
			pUVar12 = pUVar4.GetComponent<HoverTooltip>();
			if ((typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_075480ac != false) goto label_05da0bb1;
	label_05da0e18: ;
				pSVar13 = "GizmoOrientationValue";
				Il2CppMethodInitialized_075480ac = true;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075480ac == false) goto label_05da0e18;
	label_05da0bb1: ;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar13 = "GizmoOrientationValue";
			}
			if (uVar1 == 0) {
			}
			in_RCX = (MethodInfo *)"";
			in_R8 = (MethodInfo *)"";
			pSVar13 = UIManager.GetLocale("MapEditor", "Top", pSVar13, "", "");
			pSVar9 = String.Format(pSVar13, (object)pSVar9);
			if (pUVar12 == null) goto label_05da10d3;
			pUVar15 = (MapEditorTopPanel)&pUVar12.Message;
			pUVar12.Message = pSVar9;
		}
		pGVar3 = this._gameManager;
		if (pGVar3 == null) goto label_05da10d3;
		if (pGVar3._lightsOn == false) {
			ppSVar14 = &"Icons/Navigation/LightOff";
		}
		else {
			ppSVar14 = &"Icons/Navigation/LightOn";
		}
		pUVar15.SetIcon(this._lightButton, *ppSVar14);
		pGVar3 = this._gameManager;
		if (pGVar3 == null) goto label_05da10d3;
		pUVar4 = this._lightButton;
		bVar8 = pGVar3._lightsOn;
		pSVar13 = "TextColor";
		pSVar9 = "IconButton";
		pUVar15 = (MapEditorTopPanel)this.get_ThemePanel();
		UVar21 = UIManager.GetThemeColor((String)pUVar15, pSVar9, pSVar13, "DefaultPanel");
		UVar21._8_8_ = UVar21._8_8_;
		iconColor_01._0_8_ = UVar21._0_8_;
		if (bVar8 == false) {
			UVar21._8_8_ = CONCAT44(UVar21.a * 0.5, UVar21.b);
		}
		iconColor_01.b = (float)(int)UVar21._8_8_;
		iconColor_01.a = (float)(int)((ulong)UVar21._8_8_ >> 0x20);
		normal_02.b = 1.0;
		normal_02.a = 1.0;
		normal_02.r = 1.0;
		normal_02.g = 1.0;
		highlighted_02.b = 1.0;
		highlighted_02.a = 1.0;
		highlighted_02.r = 1.0;
		highlighted_02.g = 1.0;
		pUVar15.SetIconButtonColors(pUVar4, iconColor_01, normal_02, highlighted_02);
		pUVar5 = this._gridIcon;
		bVar8 = ((Object)pUVar5 != null);
		if (bVar8) {
			pSVar6 = MapEditorTopPanel._gridSelection;
			if ((pSVar6 == null) ||(pSVar7 = pSVar6._value, pSVar7 == null)) goto label_05da10d3;
			iVar2 = pSVar7._count;
			pUVar5 = this._gridIcon;
			if ((typeof(ResourcePaths)._2).cctor_finished_or_no_cctor == 0) {
				pUVar16 = typeof(ResourcePaths).static_fields;
				if (0 < iVar2) goto label_05da0df0;
	label_05da0e87: ;
				ppSVar14 = &"Icons/Navigation/GridOff";
			}
			else {
				pUVar16 = typeof(ResourcePaths).static_fields;
				if (iVar2 < 1) goto label_05da0e87;
	label_05da0df0: ;
				ppSVar14 = &"Icons/Navigation/GridOn";
			}
			pSVar9 = pUVar16.UI;
			pSVar13 = *ppSVar14;
			value = (Texture)ResourceManager.LoadAsset(pSVar9, pSVar13, true, false);
			if (pUVar5 == null) goto label_05da10d3;
			if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) goto label_05da10d8;
			pUVar5.texture = value;
			pSVar13 = "DropdownTextColor";
			pSVar9 = "DefaultSetting";
			pUVar5 = this._gridIcon;
			panel = this.get_ThemePanel();
			UVar21 = UIManager.GetThemeColor(panel, pSVar9, pSVar13, "DefaultPanel");
			UVar21._8_8_ = UVar21._8_8_;
			UVar22._0_8_ = UVar21._0_8_;
			if (pUVar5 == null) goto label_05da10d3;
			if (iVar2 < 1) {
				UVar21._8_8_ = CONCAT44(UVar21.a * 0.5, UVar21.b);
			}
			UVar22.b = (float)(int)UVar21._8_8_;
			UVar22.a = (float)(int)((ulong)UVar21._8_8_ >> 0x20);
			pUVar5.set_color(UVar22);
		}
		pUVar5 = this._layersIcon;
		bVar8 = ((Object)pUVar5 != null);
		if (!bVar8) {
			return;
		}
		pUVar5 = this._layersIcon;
		pSVar9 = ResourcePaths.UI;
		pSVar6 = MapEditorTopPanel._layerSelection;
		if ((pSVar6 != null) &&(pSVar7 = pSVar6._value, pSVar7 != null)) {
			if (pSVar7._count < 1) {
				ppSVar14 = &"Icons/Navigation/LayersOff";
			}
			else {
				ppSVar14 = &"Icons/Navigation/LayersOn";
			}
			pSVar13 = *ppSVar14;
			value = (Texture)ResourceManager.LoadAsset(pSVar9, pSVar13, true, false);
			if (pUVar5 != null) {
				if ((value == null) ||(value.klass == (Texture)typeof(Texture2D))) {
					pUVar5.texture = value;
					return;
				}
	label_05da10d8: ;
				throw new InvalidCastException();
			}
		}
	label_05da10d3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005434")]
	[Address(RVA = "0x5C9FEC0", Offset = "0x5C9EEC0", VA = "0x5C9FEC0")]
	private void SetButtonActive(GameObject buttonObject, bool active)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SetButtonActive): 4 lines keep C-only constructs
		String category;
		String item;
		MapEditorTopPanel __this_00;
		Color UVar1;
		Color normal;
		Color highlighted;

		item = "TextColor";
		category = "IconButton";
		__this_00 = (MapEditorTopPanel)this.get_ThemePanel();
		UVar1 = UIManager.GetThemeColor((String)__this_00, category, item, "DefaultPanel");
		UVar1._8_8_ = UVar1._8_8_;
		if (!active) {
			UVar1._8_8_ = CONCAT44(UVar1.a * 0.5, UVar1.b);
		}
		UVar1.b = (float)(int)UVar1._8_8_;
		UVar1.a = (float)(int)((ulong)UVar1._8_8_ >> 0x20);
		normal.b = 1.0;
		normal.a = 1.0;
		normal.r = 1.0;
		normal.g = 1.0;
		highlighted.b = 1.0;
		highlighted.a = 1.0;
		highlighted.r = 1.0;
		highlighted.g = 1.0;
		__this_00.SetIconButtonColors(buttonObject, UVar1, normal, highlighted);
		return;
	}

	[Token(Token = "0x6005435")]
	[Address(RVA = "0x5CA4380", Offset = "0x5CA3380", VA = "0x5CA4380")]
	private void SetToolbarButtonActive(GameObject buttonObject, bool active)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SetToolbarButtonActive): 2 lines keep C-only constructs
		undefined3 in_register_00000011;
		Color iconColor;
		Color iconColor_00;
		Color normal;
		Color normal_00;
		Color highlighted;
		Color highlighted_00;

		if (CONCAT31(in_register_00000011, active) == 0) {
			iconColor_00.b = 1.0;
			iconColor_00.a = 1.0;
			iconColor_00.r = 1.0;
			iconColor_00.g = 1.0;
			normal_00.b = 0.6;
			normal_00.a = 1.0;
			normal_00.r = 0.6;
			normal_00.g = 0.6;
			highlighted_00.b = 0.85;
			highlighted_00.a = 1.0;
			highlighted_00.r = 0.85;
			highlighted_00.g = 0.85;
			this.SetIconButtonColors(buttonObject, iconColor_00, normal_00, highlighted_00);
			return;
		}
		iconColor.b = 1.0;
		iconColor.a = 1.0;
		iconColor.r = 1.0;
		iconColor.g = 1.0;
		normal.b = 1.0;
		normal.a = 1.0;
		normal.r = 1.0;
		normal.g = 1.0;
		highlighted.b = 1.0;
		highlighted.a = 1.0;
		highlighted.r = 1.0;
		highlighted.g = 1.0;
		this.SetIconButtonColors(buttonObject, iconColor, normal, highlighted);
		return;
	}

	[Token(Token = "0x6005436")]
	[Address(RVA = "0x5CA4810", Offset = "0x5CA3810", VA = "0x5CA4810")]
	private void SetIconButtonColors(GameObject buttonObject, Color iconColor, Color normal, Color highlighted)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SetIconButtonColors): clean
		uint uVar1;
		uint uVar2;
		ColorBlock value;
		bool bVar3;
		Button __this_00;
		RawImage pUVar4;

		bVar3 = ((Object)buttonObject == null);
		if (bVar3) {
			return;
		}
		if (buttonObject != null) {
			__this_00 = buttonObject.GetComponent<Button>();
			if (__this_00 != null) {
				uVar1 = __this_00.m_Colors.m_ColorMultiplier;
				uVar2 = __this_00.m_Colors.m_FadeDuration;
				value.m_FadeDuration = (float)uVar2;
				value.m_ColorMultiplier = (float)uVar1;
				value.m_HighlightedColor.r = highlighted.r;
				value.m_HighlightedColor.g = highlighted.g;
				value.m_NormalColor = normal;
				value.m_HighlightedColor.b = highlighted.b;
				value.m_HighlightedColor.a = highlighted.a;
				value.m_PressedColor.r = 1.0;
				value.m_PressedColor.g = 1.0;
				value.m_PressedColor.b = 1.0;
				value.m_PressedColor.a = 1.0;
				value.m_SelectedColor.r = normal.r;
				value.m_SelectedColor.g = normal.g;
				value.m_SelectedColor.b = normal.b;
				value.m_SelectedColor.a = normal.a;
				value.m_DisabledColor.r = 1.0;
				value.m_DisabledColor.g = 1.0;
				value.m_DisabledColor.b = 1.0;
				value.m_DisabledColor.a = 0.5;
				__this_00.colors = value;
				pUVar4 = buttonObject.GetComponent<RawImage>();
				if (pUVar4 != null) {
					pUVar4.set_color(iconColor);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005437")]
	[Address(RVA = "0x5CA10E0", Offset = "0x5CA00E0", VA = "0x5CA10E0")]
	private Color ThemeColor(string element, string key, bool active)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$ThemeColor): 4 lines keep C-only constructs
		String panel;
		Color UVar1;

		panel = this.get_ThemePanel();
		UVar1 = UIManager.GetThemeColor(panel, element, key, "DefaultPanel");
		UVar1._8_8_ = UVar1._8_8_;
		if (!active) {
			UVar1._8_8_ = CONCAT44(UVar1.a * 0.5, UVar1.b);
		}
		UVar1.b = (float)(int)UVar1._8_8_;
		UVar1.a = (float)(int)((ulong)UVar1._8_8_ >> 0x20);
		return (Color)UVar1;
	}

	[Token(Token = "0x6005438")]
	[Address(RVA = "0x5CA51D0", Offset = "0x5CA41D0", VA = "0x5CA51D0")]
	private Color ButtonTextColor(bool active)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$ButtonTextColor): 4 lines keep C-only constructs
		String category;
		String item;
		String panel;
		Color UVar1;

		item = "TextColor";
		category = "DefaultButton";
		panel = this.get_ThemePanel();
		UVar1 = UIManager.GetThemeColor(panel, category, item, "DefaultPanel");
		UVar1._8_8_ = UVar1._8_8_;
		if (!active) {
			UVar1._8_8_ = CONCAT44(UVar1.a * 0.5, UVar1.b);
		}
		UVar1.b = (float)(int)UVar1._8_8_;
		UVar1.a = (float)(int)((ulong)UVar1._8_8_ >> 0x20);
		return (Color)UVar1;
	}

	[Token(Token = "0x6005439")]
	[Address(RVA = "0x5CA43D0", Offset = "0x5CA33D0", VA = "0x5CA43D0")]
	private void SetTextButtonActive(GameObject buttonObject, bool active)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SetTextButtonActive): 2 lines keep C-only constructs
		ColorBlock value;
		String item;
		bool bVar1;
		Button __this_00;
		String pSVar2;
		Transform pUVar3;
		Text pUVar4;
		String panel;
		MethodInfo in_R8;
		float fVar5;
		Color UVar6;
		Color UVar7;
		ColorBlock local_88;

		bVar1 = ((Object)buttonObject == null);
		if (bVar1) {
			return;
		}
		if (buttonObject != null) {
			__this_00 = buttonObject.GetComponent<Button>();
			bVar1 = ((Object)__this_00 != null);
			if (bVar1) {
				pSVar2 = this.get_ThemePanel();
				in_R8 = (MethodInfo *)"DefaultPanel";
				local_88 = UIManager.GetThemeColorBlock(pSVar2, "DefaultButton", "", "DefaultPanel");
				if (__this_00 == null) goto label_05da46c4;
				value.m_NormalColor.b = local_88.m_NormalColor.b;
				value.m_NormalColor.a = local_88.m_NormalColor.a;
				value.m_NormalColor.r = local_88.m_NormalColor.r;
				value.m_NormalColor.g = local_88.m_NormalColor.g;
				value.m_HighlightedColor.r = local_88.m_HighlightedColor.r;
				value.m_HighlightedColor.g = local_88.m_HighlightedColor.g;
				value.m_HighlightedColor.b = local_88.m_HighlightedColor.b;
				value.m_HighlightedColor.a = local_88.m_HighlightedColor.a;
				value.m_PressedColor.r = local_88.m_PressedColor.r;
				value.m_PressedColor.g = local_88.m_PressedColor.g;
				value.m_PressedColor.b = local_88.m_PressedColor.b;
				value.m_PressedColor.a = local_88.m_PressedColor.a;
				value.m_SelectedColor.r = local_88.m_SelectedColor.r;
				value.m_SelectedColor.g = local_88.m_SelectedColor.g;
				value.m_SelectedColor.b = local_88.m_SelectedColor.b;
				value.m_SelectedColor.a = local_88.m_SelectedColor.a;
				value.m_DisabledColor.r = local_88.m_DisabledColor.r;
				value.m_DisabledColor.g = local_88.m_DisabledColor.g;
				value.m_DisabledColor.b = local_88.m_DisabledColor.b;
				value.m_DisabledColor.a = local_88.m_DisabledColor.a;
				value.m_ColorMultiplier = local_88.m_ColorMultiplier;
				value.m_FadeDuration = local_88.m_FadeDuration;
				__this_00.colors = value;
			}
			pUVar3 = buttonObject.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.Find("Text");
				if (pUVar3 != null) {
					pUVar4 = pUVar3.GetComponent<Text>();
					item = "TextColor";
					pSVar2 = "DefaultButton";
					panel = this.get_ThemePanel();
					UVar6 = UIManager.GetThemeColor(panel, pSVar2, item, "DefaultPanel");
					UVar7.b = UVar6.b;
					fVar5 = UVar6.a;
					if (pUVar4 != null) {
						if (!active) {
							fVar5 = fVar5 * 0.5;
						}
						UVar7.a = fVar5;
						UVar7.r = UVar6.r;
						UVar7.g = UVar6.g;
						pUVar4.set_color(UVar7);
						return;
					}
				}
			}
		}
	label_05da46c4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600543A")]
	[Address(RVA = "0x5CA46D0", Offset = "0x5CA36D0", VA = "0x5CA46D0")]
	private void SetIcon(GameObject button, string icon)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$SetIcon): 1 lines keep C-only constructs
		String path;
		bool bVar1;
		RawImage __this_00;
		Texture value;

		bVar1 = ((Object)button != null);
		if (bVar1) {
			if (button != null) {
				__this_00 = button.GetComponent<RawImage>();
				path = ResourcePaths.UI;
				value = (Texture)ResourceManager.LoadAsset(path, icon, true, false);
				if (__this_00 != null) {
					if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
						throw new InvalidCastException();
					}
					__this_00.texture = value;
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x600543B")]
	[Address(RVA = "0x5CA5430", Offset = "0x5CA4430", VA = "0x5CA5430")]
	protected void OnDeleteMap()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnDeleteMap): clean
		MapEditorMenu pUVar1;
		SelectListPopup pUVar2;
		StringSetting pSVar3;
		String name;

		pUVar1 = this._menu;
		if (((pUVar1 == null) ||(pUVar2 = pUVar1.SelectListPopup, pUVar2 == null)) ||(pSVar3 = pUVar2.FinishSetting, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		name = pSVar3._value;
		if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
			BuiltinLevels.DeleteCustomMap(name);
			return;
		}
		BuiltinLevels.DeleteCustomMap(name);
		return;
	}

	[Token(Token = "0x600543C")]
	[Address(RVA = "0x5CA54C0", Offset = "0x5CA44C0", VA = "0x5CA54C0")]
	protected void OnNewFinish()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnNewFinish): 1 lines keep C-only constructs
		MapEditorMenu pUVar1;
		SelectListPopup pUVar2;
		StringSetting pSVar3;
		MapEditorSettings pSVar4;
		bool bVar5;
		MapEditorTopPanel.c__DisplayClass83_0 __this_00;
		Action __this_01;

		__this_00 = new MapEditorTopPanel.c__DisplayClass83_0();
		pUVar1 = this._menu;
		if ((((pUVar1 != null) &&(pUVar2 = pUVar1.SelectListPopup, pUVar2 != null)) &&(pSVar3 = pUVar2.FinishSetting, pSVar3 != null)) &&(__this_00 != null)) {
			__this_00.newMap = pSVar3._value;
			__this_01 = new Action((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass83_0_OnNewFinish_b__0);
			bVar5 = this.TrySaveMapFile(__this_01);
			if (!bVar5) {
				return;
			}
			pSVar3 = this._currentMap;
			if (pSVar3 != null) {
				pSVar3.Value = (object)__this_00.newMap;
				pSVar4 = SettingsManager.MapEditorSettings;
				if (pSVar4 != null) {
					pSVar4.Save();
					SceneLoader.LoadScene(3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600543D")]
	[Address(RVA = "0x5CA5650", Offset = "0x5CA4650", VA = "0x5CA5650")]
	protected void OnRenameFinish()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnRenameFinish): 6 lines keep C-only constructs
		String* targetAddress;
		StringSetting pSVar1;
		MapEditorMenu pUVar2;
		SelectListPopup pUVar3;
		MapEditorSettings pSVar4;
		bool bVar5;
		bool bVar6;
		MapEditorTopPanel.c__DisplayClass84_0 __this_00;
		Action __this_01;
		String* targetAddress_00;

		__this_00 = new MapEditorTopPanel.c__DisplayClass84_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pSVar1 = this._currentMap;
			if (pSVar1 != null) {
				targetAddress = &__this_00.oldMap;
				__this_00.oldMap = pSVar1._value;
				pUVar2 = this._menu;
				if (((pUVar2 != null) &&(pUVar3 = pUVar2.SelectListPopup, pUVar3 != null)) &&(pSVar1 = pUVar3.FinishSetting, pSVar1 != null)) {
					targetAddress_00 = &__this_00.newMap;
					__this_00.newMap = pSVar1._value;
					bVar6 = false;
					bVar5 = (__this_00.oldMap != __this_00.newMap);
					__this_00.renamed = bVar5;
					if (bVar5) {
						bVar6 = String.Equals(*targetAddress, *targetAddress_00, 5);
					}
					__this_00.sameFile = bVar6;
					__this_01 = new Action((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass84_0_OnRenameFinish_b__0);
					bVar5 = this.TrySaveMapFile(__this_01);
					if (!bVar5) {
						return;
					}
					pSVar1 = this._currentMap;
					if (pSVar1 != null) {
						pSVar1.Value = (object)*targetAddress_00;
						pSVar4 = SettingsManager.MapEditorSettings;
						if (pSVar4 != null) {
							pSVar4.Save();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600543E")]
	[Address(RVA = "0x5CA2810", Offset = "0x5CA1810", VA = "0x5CA2810")]
	private bool TrySaveMapFile(Action save)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$TrySaveMapFile): clean
		if (save == null) {
			throw new NullReferenceException();
		}
		(*(code)save.invoke_impl)(save.method_code,save.method);
		return true;
	}

	[Token(Token = "0x600543F")]
	[Address(RVA = "0x5CA5840", Offset = "0x5CA4840", VA = "0x5CA5840")]
	protected void OnOpenFinish()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnOpenFinish): 1 lines keep C-only constructs
		MapEditorMenu pUVar1;
		SelectListPopup pUVar2;
		StringSetting pSVar3;
		MapEditorTopPanel.c__DisplayClass86_0 __this_00;
		MapScript pMVar4;
		String pSVar5;
		UnityAction __this_01;

		__this_00 = new MapEditorTopPanel.c__DisplayClass86_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pUVar1 = this._menu;
			if (((pUVar1 != null) &&(pUVar2 = pUVar1.SelectListPopup, pUVar2 != null)) &&(pSVar3 = pUVar2.FinishSetting, pSVar3 != null)) {
				__this_00.mapName = pSVar3._value;
				pMVar4 = new MapScript();
				__this_00.script = pMVar4;
				pSVar5 = __this_00.mapName;
				pMVar4 = __this_00.script;
				pSVar5 = BuiltinLevels.LoadMap("Custom", pSVar5);
				if (pMVar4 != null) {
					pMVar4.Deserialize(pSVar5, false);
					pMVar4 = __this_00.script;
					__this_01 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass86_0_OnOpenFinish_b__0);
					this.ContinueAfterVersionConfirmation(pMVar4, __this_01, __this_00.mapName);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005440")]
	[Address(RVA = "0x5CA5B70", Offset = "0x5CA4B70", VA = "0x5CA5B70")]
	protected void OnImportFinish()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnImportFinish): 1 lines keep C-only constructs
		uint uVar1;
		MapEditorMenu pUVar2;
		ConfirmPopup __this_00;
		String pSVar3;
		UnityAction __this_01;

		pUVar2 = this._menu;
		if (pUVar2 == null) goto label_05da5d04;
		__this_00 = pUVar2.ConfirmPopup;
		if ((typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075480ac != false) goto label_05da5bfd;
	label_05da5cac: ;
			pSVar3 = "ImportOverwrite";
			Il2CppMethodInitialized_075480ac = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075480ac == false) goto label_05da5cac;
	label_05da5bfd: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar3 = "ImportOverwrite";
		}
		if (uVar1 == 0) {
		}
		pSVar3 = UIManager.GetLocale("MapEditor", "Top", pSVar3, "", "");
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportFinish_b__87_0);
		if (__this_00 != null) {
			__this_00.Show(pSVar3, __this_01, null);
			return;
		}
	label_05da5d04: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005441")]
	[Address(RVA = "0x5CA5D10", Offset = "0x5CA4D10", VA = "0x5CA5D10")]
	protected void OnImportConfirm()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnImportConfirm): 4 lines keep C-only constructs
		MapEditorMenu pUVar1;
		ImportPopup pUVar2;
		StringSetting pSVar3;
		MapEditorTopPanel.c__DisplayClass88_0 __this_00;
		MapScript pMVar4;
		UnityAction __this_01;
		MapScript* targetAddress;

		__this_00 = new MapEditorTopPanel.c__DisplayClass88_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		pMVar4 = new MapScript();
		targetAddress = &__this_00.script;
		__this_00.script = pMVar4;
		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = pUVar1.ImportPopup;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = pUVar2.ImportSetting;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pMVar4 = __this_00.script;
		if (pMVar4 == null) {
			throw new NullReferenceException();
		}
		pMVar4.Deserialize(pSVar3._value, false);
		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = pUVar1.ImportPopup;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar2.HideImmediate();
		pMVar4 = *targetAddress;
		__this_01 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass88_0_OnImportConfirm_b__0);
		pSVar3 = this._currentMap;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		this.ContinueAfterVersionConfirmation(pMVar4, __this_01, pSVar3._value);
		return;
	}

	[Token(Token = "0x6005442")]
	[Address(RVA = "0x5CA5FF0", Offset = "0x5CA4FF0", VA = "0x5CA5FF0")]
	protected void OnImportPresetFinish()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnImportPresetFinish): 1 lines keep C-only constructs
		uint uVar1;
		MapEditorMenu pUVar2;
		ConfirmPopup __this_00;
		String pSVar3;
		UnityAction __this_01;

		pUVar2 = this._menu;
		if (pUVar2 == null) goto label_05da6184;
		__this_00 = pUVar2.ConfirmPopup;
		if ((typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075480ac != false) goto label_05da607d;
	label_05da612c: ;
			pSVar3 = "LoadPresetOverwrite";
			Il2CppMethodInitialized_075480ac = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075480ac == false) goto label_05da612c;
	label_05da607d: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar3 = "LoadPresetOverwrite";
		}
		if (uVar1 == 0) {
		}
		pSVar3 = UIManager.GetLocale("MapEditor", "Top", pSVar3, "", "");
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportPresetFinish_b__89_0);
		if (__this_00 != null) {
			__this_00.Show(pSVar3, __this_01, null);
			return;
		}
	label_05da6184: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005443")]
	[Address(RVA = "0x5CA6190", Offset = "0x5CA5190", VA = "0x5CA6190")]
	protected void OnImportAutosaveFinish()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnImportAutosaveFinish): 1 lines keep C-only constructs
		uint uVar1;
		MapEditorMenu pUVar2;
		ConfirmPopup __this_00;
		String pSVar3;
		UnityAction __this_01;

		pUVar2 = this._menu;
		if (pUVar2 == null) goto label_05da6324;
		__this_00 = pUVar2.ConfirmPopup;
		if ((typeof(MapEditorTopPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075480ac != false) goto label_05da621d;
	label_05da62cc: ;
			pSVar3 = "LoadAutosaveOverwrite";
			Il2CppMethodInitialized_075480ac = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075480ac == false) goto label_05da62cc;
	label_05da621d: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar3 = "LoadAutosaveOverwrite";
		}
		if (uVar1 == 0) {
		}
		pSVar3 = UIManager.GetLocale("MapEditor", "Top", pSVar3, "", "");
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorTopPanel_OnImportAutosaveFinish_b__90_0);
		if (__this_00 != null) {
			__this_00.Show(pSVar3, __this_01, null);
			return;
		}
	label_05da6324: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005444")]
	[Address(RVA = "0x5CA6330", Offset = "0x5CA5330", VA = "0x5CA6330")]
	protected void OnImportPresetConfirm()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnImportPresetConfirm): 1 lines keep C-only constructs
		int iVar1;
		MapEditorMenu pUVar2;
		SelectListPopup pUVar3;
		StringSetting pSVar4;
		String name;
		MapEditorTopPanel.c__DisplayClass91_0 __this_00;
		String[] pSVar5;
		MapScript pMVar6;
		String pSVar7;
		UnityAction __this_01;

		__this_00 = new MapEditorTopPanel.c__DisplayClass91_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pUVar2 = this._menu;
			if ((((pUVar2 != null) &&(pUVar3 = pUVar2.SelectListPopup, pUVar3 != null)) &&(pSVar4 = pUVar3.FinishSetting, pSVar4 != null)) &&(pSVar7 = pSVar4._value, pSVar7 != null)) {
				pSVar5 = pSVar7.Split(0x2f, 0);
				if (pSVar5 != null) {
					iVar1 = (int)pSVar5.Length;
					if ((iVar1 == 0) || (iVar1 == 1)) {
						throw new IndexOutOfRangeException();
					}
					pSVar7 = pSVar5[0];
					name = pSVar5[1];
					pMVar6 = new MapScript();
					__this_00.script = pMVar6;
					pMVar6 = __this_00.script;
					pSVar7 = BuiltinLevels.LoadMap(pSVar7, name);
					if (pMVar6 != null) {
						pMVar6.Deserialize(pSVar7, false);
						pMVar6 = __this_00.script;
						__this_01 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass91_0_OnImportPresetConfirm_b__0);
						pSVar4 = this._currentMap;
						if (pSVar4 != null) {
							this.ContinueAfterVersionConfirmation(pMVar6, __this_01, pSVar4._value);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005445")]
	[Address(RVA = "0x5CA6530", Offset = "0x5CA5530", VA = "0x5CA6530")]
	protected void OnImportAutosaveConfirm()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$OnImportAutosaveConfirm): 1 lines keep C-only constructs
		MapEditorMenu pUVar1;
		SelectListPopup pUVar2;
		StringSetting pSVar3;
		MapEditorTopPanel.c__DisplayClass92_0 __this_00;
		MapScript pMVar4;
		String pSVar5;
		UnityAction __this_01;

		__this_00 = new MapEditorTopPanel.c__DisplayClass92_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pUVar1 = this._menu;
			if (((pUVar1 != null) &&(pUVar2 = pUVar1.SelectListPopup, pUVar2 != null)) &&(pSVar3 = pUVar2.FinishSetting, pSVar3 != null)) {
				pSVar5 = pSVar3._value;
				pMVar4 = new MapScript();
				__this_00.script = pMVar4;
				pMVar4 = __this_00.script;
				pSVar5 = BuiltinLevels.LoadAutosave(pSVar5);
				if (pMVar4 != null) {
					pMVar4.Deserialize(pSVar5, false);
					pMVar4 = __this_00.script;
					__this_01 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorTopPanel_c__DisplayClass92_0_OnImportAutosaveConfirm_b__0);
					pSVar3 = this._currentMap;
					if (pSVar3 != null) {
						this.ContinueAfterVersionConfirmation(pMVar4, __this_01, pSVar3._value);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005446")]
	[Address(RVA = "0x5CA5A10", Offset = "0x5CA4A10", VA = "0x5CA5A10")]
	private void ContinueAfterVersionConfirmation(MapScript script, UnityAction continuation, string backupName)
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$ContinueAfterVersionConfirmation): 7 lines keep C-only constructs
		MapScript* targetAddress;
		MapScript pMVar1;
		MapVersionConversionResult pMVar2;
		MapEditorMenu pUVar3;
		MapEditorVersionConversionPopup __this_00;
		int iVar4;
		MapEditorTopPanel.c__DisplayClass93_0 __this_01;
		UnityAction pUVar5;
		UnityAction* targetAddress_00;

		__this_01 = new MapEditorTopPanel.c__DisplayClass93_0();
		if (__this_01 != null) {
			__this_01.backupName = backupName;
			targetAddress = &__this_01.script;
			__this_01.script = script;
			targetAddress_00 = &__this_01.continuation;
			__this_01.continuation = continuation;
			pMVar1 = __this_01.script;
			if (pMVar1 != null) {
				pMVar2 = pMVar1._LastUpgradeResult_k__BackingField;
				if (pMVar2 != null) {
					iVar4 = pMVar2.VersionCount;
					if (0 < iVar4) {
						pUVar3 = this._menu;
						if ((pUVar3 != null) &&(pMVar1 = *targetAddress, pMVar1 != null)) {
							__this_00 = pUVar3.VersionConversionPopup;
							pMVar2 = pMVar1._LastUpgradeResult_k__BackingField;
							pUVar5 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorTopPanel_c__DisplayClass93_0_ContinueAfterVersionConfirmation_b__0);
							if (__this_00 != null) {
								__this_00.Show(pMVar2, pUVar5);
								return;
							}
						}
						goto label_05da5b5d;
					}
				}
				pUVar5 = *targetAddress_00;
				if (pUVar5 != null) {
					(*(code)pUVar5.invoke_impl)(pUVar5.method_code,pUVar5.method);
					return;
				}
			}
		}
	label_05da5b5d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005447")]
	[Address(RVA = "0x5CA7130", Offset = "0x5CA6130", VA = "0x5CA7130")]
	public MapEditorTopPanel()
	{
		// Lifted from source/cpp/UI/MapEditorTopPanel.c (UI.MapEditorTopPanel$$.ctor): clean
		IntSetting pSVar1;
		StringSetting __this_00;
		List<DropdownSelectElement> __this_01;

		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this._dropdownSelection = pSVar1;
		pSVar1 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this._toolDropdownSelection = pSVar1;
		__this_00 = new StringSetting("None", 0x7fffffff);
		this._playMode = __this_00;
		__this_01 = new List<DropdownSelectElement>();
		this._dropdowns = __this_01;
		this._selectedTool = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorTopPanel.c.

	// UI.MapEditorTopPanel.<>c__DisplayClass83_0$$.ctor: clean
	private void c__DisplayClass83_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass84_0$$.ctor: clean
	private void c__DisplayClass84_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass86_0$$.ctor: clean
	private void c__DisplayClass86_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass88_0$$.ctor: clean
	private void c__DisplayClass88_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass91_0$$.ctor: clean
	private void c__DisplayClass91_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass92_0$$.ctor: clean
	private void c__DisplayClass92_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass93_0$$.ctor: clean
	private void c__DisplayClass93_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel$$.cctor: clean
	static MapEditorTopPanel()
	{
		HashSet<int> pSVar2;
		HashSetSetting<int> pSVar3;

		pSVar2 = new HashSet<int>();
		pSVar3 = new HashSetSetting<int>((HashSet<T>)pSVar2);
		MapEditorTopPanel._gridSelection = pSVar3;
		pSVar2 = new HashSet<int>();
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar2.Add(0);
		pSVar3 = new HashSetSetting<int>((HashSet<T>)pSVar2);
		MapEditorTopPanel._layerSelection = pSVar3;
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_0: clean
	private void Setup_b__41_0()
	{
		this.OnFileClick();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_1: clean
	private void Setup_b__41_1()
	{
		this.OnEditClick();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_2: clean
	private void Setup_b__41_2()
	{
		this.OnOptionsClick();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_3: clean
	private void Setup_b__41_3()
	{


		this.OnButtonClick("AddObject");
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_4: clean
	private void Setup_b__41_4()
	{
		MapEditorGameManager __this_00;
		bool bVar1;

		__this_00 = this._gameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.CurrentGizmoMode == 0;
		__this_00.SetGizmoMode((uint)bVar1);
		this.RefreshControlStates();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_5: 2 lines keep C-only constructs
	private void Setup_b__41_5()
	{
		bool pbVar1;
		MapEditorGameManager pGVar2;

		pGVar2 = this._gameManager;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		pbVar1 = &pGVar2.Snap;
		*pbVar1 = (bool)(*pbVar1 ^ 1);
		this.RefreshControlStates();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_6: clean
	private void Setup_b__41_6()
	{
		this.OnToolSelected();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_7: clean
	private void Setup_b__41_7()
	{
		this.OnGridChanged();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_8: clean
	private void Setup_b__41_8()
	{
		this.ToggleLights();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_9: clean
	private void Setup_b__41_9()
	{
		this.OnLayersChanged();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_10: clean
	private void Setup_b__41_10()
	{
		this._playModeExplicitlySelected = true;
		this.RefreshPlayModeLabel();
		return;
	}

	// UI.MapEditorTopPanel$$<Setup>b__41_11: clean
	private void Setup_b__41_11()
	{
		this.PlayMap();
		return;
	}

	// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_0: clean
	private void CreateSideToolbar_b__44_0()
	{
		MapEditorGameManager __this_00;
		MethodInfo method_00;

		__this_00 = this._gameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo *)"Position";
		__this_00.SetGizmo("Position");
		this.RefreshControlStates();
		return;
	}

	// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_1: clean
	private void CreateSideToolbar_b__44_1()
	{
		MapEditorGameManager __this_00;
		MethodInfo method_00;

		__this_00 = this._gameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo *)"Rotation";
		__this_00.SetGizmo("Rotation");
		this.RefreshControlStates();
		return;
	}

	// UI.MapEditorTopPanel$$<CreateSideToolbar>b__44_2: clean
	private void CreateSideToolbar_b__44_2()
	{
		MapEditorGameManager __this_00;
		MethodInfo method_00;

		__this_00 = this._gameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo *)"Scale";
		__this_00.SetGizmo("Scale");
		this.RefreshControlStates();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_5: clean
	private void OnFileClick_b__48_5()
	{
		this.OnNewFinish();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_6: clean
	private void OnFileClick_b__48_6()
	{
		this.OnDeleteMap();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_0: clean
	private void OnFileClick_b__48_0()
	{
		this.OnOpenFinish();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_1: clean
	private void OnFileClick_b__48_1()
	{
		this.OnDeleteMap();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_2: clean
	private void OnFileClick_b__48_2()
	{
		this.OnRenameFinish();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_3: clean
	private void OnFileClick_b__48_3()
	{
		this.OnDeleteMap();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_4: clean
	private void OnFileClick_b__48_4()
	{
		this.OnImportFinish();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_7: clean
	private void OnFileClick_b__48_7()
	{
		this.OnImportPresetFinish();
		return;
	}

	// UI.MapEditorTopPanel$$<OnFileClick>b__48_9: clean
	private void OnFileClick_b__48_9()
	{
		this.OnImportAutosaveFinish();
		return;
	}

	// UI.MapEditorTopPanel$$<Save>b__49_0: clean
	private void Save_b__49_0()
	{
		StringSetting pSVar1;
		MapEditorGameManager pGVar2;
		String name;
		MapScript script;

		pSVar1 = this._currentMap;
		if ((pSVar1 == null) ||(pGVar2 = this._gameManager, pGVar2 == null)) {
			throw new NullReferenceException();
		}
		name = pSVar1._value;
		script = pGVar2.MapScript;
		BuiltinLevels.SaveCustomMap(name, script);
		return;
	}

	// UI.MapEditorTopPanel$$<OnImportFinish>b__87_0: clean
	private void OnImportFinish_b__87_0()
	{
		this.OnImportConfirm();
		return;
	}

	// UI.MapEditorTopPanel$$<OnImportPresetFinish>b__89_0: clean
	private void OnImportPresetFinish_b__89_0()
	{
		this.OnImportPresetConfirm();
		return;
	}

	// UI.MapEditorTopPanel$$<OnImportAutosaveFinish>b__90_0: clean
	private void OnImportAutosaveFinish_b__90_0()
	{
		this.OnImportAutosaveConfirm();
		return;
	}

	// UI.MapEditorTopPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorTopPanel.c();
		MapEditorTopPanel.c.__9 = (MapEditorTopPanel.c)__this;
		return;
	}

	// UI.MapEditorTopPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTopPanel.<>c$$<OnFileClick>b__48_8: clean
	private String c__OnFileClick_b__48_8(String c)
	{
		return c;
	}

	// UI.MapEditorTopPanel.<>c$$<Autosave>b__50_0: clean
	private DateTime c__Autosave_b__50_0(FileInfo x)
	{
		DateTime SVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		SVar1 = x.LastWriteTime;
		return (DateTime)SVar1._dateData;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass83_0$$<OnNewFinish>b__0: clean
	private void c__DisplayClass83_0__OnNewFinish_b__0()
	{
		String name;
		MapScript script;

		name = this.newMap;
		script = MapScript.CreateDefault();
		BuiltinLevels.SaveCustomMap(name, script);
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass84_0$$<OnRenameFinish>b__0: clean
	private void c__DisplayClass84_0__OnRenameFinish_b__0()
	{
		String pSVar1;
		String newName;
		MapEditorTopPanel pUVar2;
		MapEditorGameManager pGVar3;
		MapScript script;

		if (this.sameFile != false) {
			pSVar1 = this.oldMap;
			newName = this.newMap;
			BuiltinLevels.RenameCustomMap(pSVar1, newName);
		}
		pUVar2 = this.__4__this;
		if ((pUVar2 == null) ||(pGVar3 = pUVar2._gameManager, pGVar3 == null)) {
			throw new NullReferenceException();
		}
		pSVar1 = this.newMap;
		script = pGVar3.MapScript;
		BuiltinLevels.SaveCustomMap(pSVar1, script);
		if ((this.renamed == false) || (this.sameFile != false)) {
			return;
		}
		pSVar1 = this.oldMap;
		BuiltinLevels.DeleteCustomMap(pSVar1);
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass86_0$$<OnOpenFinish>b__0: clean
	private void c__DisplayClass86_0__OnOpenFinish_b__0()
	{
		String name;
		MapScript script;
		MapEditorTopPanel pUVar1;
		StringSetting __this_00;
		MapEditorSettings pSVar2;

		name = this.mapName;
		script = this.script;
		BuiltinLevels.SaveCustomMap(name, script);
		pUVar1 = this.__4__this;
		if ((pUVar1 != null) &&(__this_00 = pUVar1._currentMap, __this_00 != null)) {
			__this_00.Value = (object)this.mapName;
			pSVar2 = SettingsManager.MapEditorSettings;
			if (pSVar2 != null) {
				pSVar2.Save();
				SceneLoader.LoadScene(3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass88_0$$<OnImportConfirm>b__0: clean
	private void c__DisplayClass88_0__OnImportConfirm_b__0()
	{
		MapEditorTopPanel pUVar1;
		StringSetting pSVar2;
		String name;
		MapScript script;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(pSVar2 = pUVar1._currentMap, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		name = pSVar2._value;
		script = this.script;
		BuiltinLevels.SaveCustomMap(name, script);
		SceneLoader.LoadScene(3);
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass91_0$$<OnImportPresetConfirm>b__0: clean
	private void c__DisplayClass91_0__OnImportPresetConfirm_b__0()
	{
		MapEditorTopPanel pUVar1;
		StringSetting pSVar2;
		String name;
		MapScript script;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(pSVar2 = pUVar1._currentMap, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		name = pSVar2._value;
		script = this.script;
		BuiltinLevels.SaveCustomMap(name, script);
		SceneLoader.LoadScene(3);
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass92_0$$<OnImportAutosaveConfirm>b__0: clean
	private void c__DisplayClass92_0__OnImportAutosaveConfirm_b__0()
	{
		MapEditorTopPanel pUVar1;
		StringSetting pSVar2;
		String name;
		MapScript script;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(pSVar2 = pUVar1._currentMap, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		name = pSVar2._value;
		script = this.script;
		BuiltinLevels.SaveCustomMap(name, script);
		SceneLoader.LoadScene(3);
		return;
	}

	// UI.MapEditorTopPanel.<>c__DisplayClass93_0$$<ContinueAfterVersionConfirmation>b__0: clean
	private void c__DisplayClass93_0__ContinueAfterVersionConfirmation_b__0()
	{
		MapScript pMVar1;
		MapVersionConversionResult pMVar2;
		String name;
		String map;
		String version;
		UnityAction pUVar3;

		pMVar1 = this.script;
		if ((pMVar1 != null) &&(pMVar2 = pMVar1._LastUpgradeResult_k__BackingField, pMVar2 != null)) {
			name = this.backupName;
			map = pMVar1._OriginalCSV_k__BackingField;
			version = pMVar2._OriginalVersion_k__BackingField;
			BuiltinLevels.BackupCustomMap(name, map, version);
			pUVar3 = this.continuation;
			if (pUVar3 != null) {
				(*(code)pUVar3.invoke_impl)(pUVar3.method_code,pUVar3.method);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
