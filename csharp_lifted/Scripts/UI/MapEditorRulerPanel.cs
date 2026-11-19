// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorRulerPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorRulerPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20008C8")]
internal class MapEditorRulerPanel : HeadedPanel
{
	[Token(Token = "0x4002C73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private readonly List<FloatSetting> _originX;

	[Token(Token = "0x4002C74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private readonly List<FloatSetting> _originY;

	[Token(Token = "0x4002C75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private readonly List<FloatSetting> _originZ;

	[Token(Token = "0x4002C76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private readonly List<FloatSetting> _length;

	[Token(Token = "0x4002C77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private readonly List<ColorSetting> _color;

	[Token(Token = "0x4002C78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002C79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorMenu _menu;

	[Token(Token = "0x17000EA1")]
	protected override float Width
	{
		[Token(Token = "0x60053BD")]
		[Address(RVA = "0x5C99510", Offset = "0x5C98510", VA = "0x5C99510", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_Width): clean
			return 400.0;
		}
	}

	[Token(Token = "0x17000EA2")]
	protected override float Height
	{
		[Token(Token = "0x60053BE")]
		[Address(RVA = "0x5C99520", Offset = "0x5C98520", VA = "0x5C99520", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_Height): clean
			return 990.0;
		}
	}

	[Token(Token = "0x17000EA3")]
	protected override string Title
	{
		[Token(Token = "0x60053BF")]
		[Address(RVA = "0x5C99530", Offset = "0x5C98530", VA = "0x5C99530", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Tools", "Ruler", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000EA4")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60053C0")]
		[Address(RVA = "0x5C995D0", Offset = "0x5C985D0", VA = "0x5C995D0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000EA5")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60053C1")]
		[Address(RVA = "0x5C995E0", Offset = "0x5C985E0", VA = "0x5C995E0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000EA6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60053C2")]
		[Address(RVA = "0x5C995F0", Offset = "0x5C985F0", VA = "0x5C995F0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_VerticalSpacing): clean
			return 8.0;
		}
	}

	[Token(Token = "0x17000EA7")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60053C3")]
		[Address(RVA = "0x5C99600", Offset = "0x5C98600", VA = "0x5C99600", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000EA8")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60053C4")]
		[Address(RVA = "0x5C99610", Offset = "0x5C98610", VA = "0x5C99610", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_VerticalPadding): clean
			return 0xf;
		}
	}

	[Token(Token = "0x17000EA9")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60053C5")]
		[Address(RVA = "0x5C99620", Offset = "0x5C98620", VA = "0x5C99620", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000EAA")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60053C6")]
		[Address(RVA = "0x5C99630", Offset = "0x5C98630", VA = "0x5C99630", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$get_ThemePanel): clean
			return "MapEditor";
		}
	}

	[Token(Token = "0x60053C7")]
	[Address(RVA = "0x5C99660", Offset = "0x5C98660", VA = "0x5C99660", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$Setup): 4 lines keep C-only constructs
		byte bVar1;
		MapEditorGameManager pGVar2;
		MapEditorMenu pUVar3;

		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar3 != null) goto label_05d996da;
	label_05d99755: ;
			this._menu = null;
		}
		else {
			pUVar3 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar3 == null) goto label_05d99755;
	label_05d996da: ;
			pGVar2 = (MapEditorGameManager)typeof(MapEditorMenu);
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) goto label_05d997d0;
			this._menu = pUVar3;
			if (((((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pGVar2)) goto label_05d997d0;
		}
		pGVar2 = typeof(MapEditorGameManager);
		pUVar3 = (MapEditorMenu)SceneLoader.CurrentGameManager;
		if (pUVar3 == null) {
			this._gameManager = null;
	label_05d997e6: ;
			return;
		}
		bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
		if ((bVar1 <= (((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapEditorGameManager))) {
			this._gameManager = (MapEditorGameManager)pUVar3;
			if ((bVar1 <= (((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pGVar2)) goto label_05d997e6;
		}
	label_05d997d0: ;
		throw new InvalidCastException();
	}

	[Token(Token = "0x60053C8")]
	[Address(RVA = "0x5C96CC0", Offset = "0x5C95CC0", VA = "0x5C96CC0")]
	public new void Show()
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$Show): clean


		this.Show();
		this.Rebuild();
		return;
	}

	[Token(Token = "0x60053C9")]
	[Address(RVA = "0x5C96E10", Offset = "0x5C95E10", VA = "0x5C96E10")]
	public void Rebuild()
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$Rebuild): 60 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		byte bVar4;
		int length;
		uint uVar5;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		List<FloatSetting> pSVar8;
		List<ColorSetting> pSVar9;
		MapEditorGameManager pGVar10;
		MapEditorRuler pMVar11;
		ulong uVar12;
		List<RulerMeasurement> pSVar13;
		FloatSetting[] pSVar15;
		Color255 defaultValue;
		ColorSetting[] pSVar16;
		MapEditorMenu pUVar17;
		ColorBlock value;
		ColorBlock pUVar18;
		bool bVar19;
		int iVar20;
		VirtualInvokeData pVVar21;
		Component __this_00;
		Object obj;
		object pIVar22;
		String pSVar23;
		ElementStyle pUVar24;
		ElementStyle __this_01;
		GameObject pUVar25;
		Transform pUVar26;
		UnityAction pUVar27;
		Button __this_02;
		MapEditorRulerPanel.c__DisplayClass29_0 pUVar28;
		RulerMeasurement __this_03;
		FloatSetting pSVar29;
		ColorSetting __this_04;
		ulong uVar30;
		int iVar32;
		long lVar33;
		MethodInfo pMVar34;
		float fVar35;
		object pIStack_f8;
		ColorSetting pSStack_f0;
		ulong uStack_e8;
		ElementStyle pUStack_d8;
		object pIStack_d0;
		ulong uStack_c8;
		object* ppIStack_c0;
		object* ppIStack_b8;
		List<RulerMeasurement> pSStack_b0;
		ColorPickPopup pUStack_a8;
		ulong uStack_a0;
		ulong uStack_98;
		ulong uStack_90;
		uint uStack_88;
		uint uStack_84;

		if (Il2CppMethodInitialized_07548076 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ColorSetting_Clear) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FloatSetting_Clear) ;
			Il2CppMethodInitialized_07548076 = true;
		}
		pIStack_d0 = null;
		uStack_98 = 0;
		uStack_90 = 0;
		pUVar26 = this.SinglePanel;
		if (pUVar26 != null) {
			pIStack_f8 = (object)pUVar26.GetEnumerator();
			uStack_c8 = 0;
			ppIStack_c0 = &pIStack_f8;
			ppIStack_b8 = &pIStack_d0;
			do {
				pIVar22 = pIStack_f8;
				if (pIStack_f8 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = pIStack_f8.klass;
				uVar30 = (ulong)(pIVar6._2).interface_offsets_count;
				bVar19 = pIVar22.Dispose();
				pIVar22 = pIStack_f8;
				if (!bVar19) {
					pIVar22 = (pIStack_f8 as IDisposable);
					pIStack_d0 = pIVar22;
					if (pIVar22 == null) goto label_05d972c6;
					pIVar6 = pIVar22.klass;
					uVar30 = (ulong)(pIVar6._2).interface_offsets_count;
					if (uVar30 == 0) goto label_05d9729f;
					pIVar7 = (pIVar6._1).interfaceOffsets;
					lVar33 = 0;
					goto label_05d97290;
				}
				if (pIStack_f8 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = pIStack_f8.klass;
				uVar30 = (ulong)(pIVar6._2).interface_offsets_count;
				__this_00 = (Component)pIVar22.Dispose();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar4 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar4) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				obj = (Object)__this_00.gameObject;
				Object.Destroy(obj);
			} while(true);
		}
		goto label_05d982c7;
		while (true) {
			lVar33 = lVar33 + 0x10;
			if (!(uVar30 * 0x10 != lVar33)) break;
	label_05d97290: ;
			if (*(IDisposable*)((long)&pIVar7.interfaceType + lVar33) == typeof(IDisposable)) {
				pVVar21 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar33);
				goto label_05d972bd;
			}
		}
	label_05d9729f: ;
	label_05d972bd: ;
		pIVar22.Dispose();
	label_05d972c6: ;
		pSVar8 = this._originX;
		if (pSVar8 != null) {
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			iVar20 = pSVar8._size;
			pSVar8._size = 0;
			if (0 < iVar20) {
				Array.Clear((Array)pSVar8._items, 0, iVar20);
			}
			pSVar8 = this._originY;
			if (pSVar8 != null) {
				piVar1 = &pSVar8._version;
				*piVar1 = *piVar1 + 1;
				iVar20 = pSVar8._size;
				pSVar8._size = 0;
				if (0 < iVar20) {
					Array.Clear((Array)pSVar8._items, 0, iVar20);
				}
				pSVar8 = this._originZ;
				if (pSVar8 != null) {
					piVar1 = &pSVar8._version;
					*piVar1 = *piVar1 + 1;
					iVar20 = pSVar8._size;
					pSVar8._size = 0;
					if (0 < iVar20) {
						Array.Clear((Array)pSVar8._items, 0, iVar20);
					}
					pSVar8 = this._length;
					if (pSVar8 != null) {
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						iVar20 = pSVar8._size;
						pSVar8._size = 0;
						if (0 < iVar20) {
							Array.Clear((Array)pSVar8._items, 0, iVar20);
						}
						pSVar9 = this._color;
						if (pSVar9 != null) {
							piVar1 = &pSVar9._version;
							*piVar1 = *piVar1 + 1;
							length = pSVar9._size;
							pSVar9._size = 0;
							if (0 < length) {
								Array.Clear((Array)pSVar9._items, 0, length);
							}
							pSVar23 = this.get_ThemePanel();
							pUVar24 = new ElementStyle(0x12, 80.0, 8.0, pSVar23);
							pSVar23 = this.get_ThemePanel();
							__this_01 = new ElementStyle(0x18, 0.0, 8.0, pSVar23);
							pUVar25 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 8.0, 4);
							if (pUVar25 != null) {
								pUVar26 = pUVar25.transform;
								pSVar23 = this.get_Title();
								ElementFactory.CreateDefaultLabel(pUVar26, __this_01, pSVar23, 0, 4);
								pUVar27 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_Rebuild_b__29_0);
								ElementFactory.CreateIconButton(pUVar26, pUVar24, "Icons/Navigation/CloseIcon", 28.0, 28.0, pUVar27, null);
								pUVar26 = this.SinglePanel;
								pSVar23 = UIManager.GetLocale("MapEditor", "Ruler", "CreateMeasurement", "", "");
								pUVar27 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_ToggleCreateMeasurement);
								pUVar25 = ElementFactory.CreateDefaultButton(pUVar26, pUVar24, pSVar23, 0.0, 36.0, pUVar27);
								pGVar10 = this._gameManager;
								if ((pGVar10 != null) &&(pMVar11 = pGVar10.Ruler, pMVar11 != null)) {
									if (pMVar11._creatingMeasurement != false) {
										if ((pUVar25 == null) ||(__this_02 = pUVar25.GetComponent<Button>(), __this_02 == null)) goto label_05d982c7;
										pUVar18 = &__this_02.m_Colors;
										uStack_98._0_4_ = pUVar18.m_PressedColor.r;
										uStack_98._4_4_ = pUVar18.m_PressedColor.g;
										pUVar18 = &__this_02.m_Colors;
										uStack_90._0_4_ = pUVar18.m_PressedColor.b;
										uStack_90._4_4_ = pUVar18.m_PressedColor.a;
										pUVar28 = *(MapEditorRulerPanel.c__DisplayClass29_0*)&__this_02.m_Colors.m_DisabledColor;
										pUVar18 = &__this_02.m_Colors;
										uVar2 = pUVar18.m_DisabledColor.b;
										uVar3 = pUVar18.m_DisabledColor.a;
										uVar12._0_4_ = __this_02.m_Colors.m_ColorMultiplier;
										uVar12._4_4_ = __this_02.m_Colors.m_FadeDuration;
										uStack_88 = (int)pUVar28;
										uStack_84 = (int)((ulong)pUVar28 >> 0x20);
										if ((typeof(ColorBlock)._2).cctor_finished_or_no_cctor == 0) {
											uStack_e8 = pUVar28;
											uStack_88 = (undefined4)uStack_e8;
											uStack_84 = uStack_e8._4_4_;
										}
										value.m_DisabledColor.g = (float)uStack_84;
										value.m_DisabledColor.r = (float)uStack_88;
										value.m_NormalColor.g = (float)uStack_84;
										value.m_NormalColor.r = (float)uStack_88;
										value.m_HighlightedColor.g = (float)uStack_84;
										value.m_HighlightedColor.r = (float)uStack_88;
										value.m_SelectedColor.g = (float)uStack_84;
										value.m_SelectedColor.r = (float)uStack_88;
										value.m_NormalColor.b = (float)uVar2;
										value.m_NormalColor.a = (float)uVar3;
										value.m_HighlightedColor.b = (float)uVar2;
										value.m_HighlightedColor.a = (float)uVar3;
										value.m_PressedColor.r = (float)(undefined4)uStack_98;
										value.m_PressedColor.g = (float)uStack_98._4_4_;
										value.m_PressedColor.b = (float)(undefined4)uStack_90;
										value.m_PressedColor.a = (float)uStack_90._4_4_;
										value.m_SelectedColor.b = (float)uVar2;
										value.m_SelectedColor.a = (float)uVar3;
										value.m_DisabledColor.b = (float)uVar2;
										value.m_DisabledColor.a = (float)uVar3;
										value.m_ColorMultiplier = (float)(undefined4)uVar12;
										value.m_FadeDuration = (float)uVar12._4_4_;
										__this_02.colors = value;
										pUVar26 = this.SinglePanel;
										pSVar23 = UIManager.GetLocale("MapEditor", "Ruler", "PlaceHint", "", "");
										ElementFactory.CreateDefaultLabel(pUVar26, pUVar24, pSVar23, 0, 4);
									}
									this.CreateHorizontalDivider(this.SinglePanel, 1.0);
									pGVar10 = this._gameManager;
									if (((pGVar10 != null) &&(pMVar11 = pGVar10.Ruler, pMVar11 != null)) &&(pSVar13 = pMVar11._measurements, pSVar13 != null)) {
										uVar30 = 0;
										pUStack_d8 = pUVar24;
										pSStack_b0 = pSVar13;
										do {
											pSVar13 = pSStack_b0;
											iVar20 = pSVar13.Dispose();
											iVar32 = (int32_t)uVar30;
											if (iVar20 <= iVar32) {
												return;
											}
											pUVar28 = new MapEditorRulerPanel.c__DisplayClass29_0();
											if (pUVar28 == null) break;
											pUVar28.__4__this = this;
											pUVar28.index = iVar32;
											uStack_e8 = pUVar28;
											uStack_a0 = uVar30;
											__this_03 = (RulerMeasurement)pSVar13.Dispose(iVar32);
											pUVar26 = this.SinglePanel;
											pSVar23 = UIManager.GetLocale("MapEditor", "Ruler", "Measurement", "", "");
											uStack_c8 = CONCAT44(uStack_c8._4_4_, uStack_e8.index + 1);
											pIVar22 = (object)uStack_c8;
											pSVar23 = String.Format(pSVar23, pIVar22);
											ElementFactory.CreateDefaultLabel(pUVar26, pUVar24, pSVar23, 0, 3);
											if (__this_03 == null) break;
											pSVar8 = this._originX;
											fVar35 = __this_03.Origin.x;
											pSVar29 = new FloatSetting(fVar35, -3.4028235e+38, 3.4028235e+38);
											if (pSVar8 == null) break;
											piVar1 = &pSVar8._version;
											*piVar1 = *piVar1 + 1;
											pSVar15 = pSVar8._items;
											if (pSVar15 == null) break;
											uVar5 = pSVar8._size;
											if (uVar5 < (uint)pSVar15.Length) {
												pSVar8._size = uVar5 + 1;
												pSVar15[(int)uVar5] = pSVar29;
											}
											else {
												pSVar8.AddWithResize((object)pSVar29);
											}
											pSVar8 = this._originY;
											fVar35 = __this_03.Origin.y;
											pSVar29 = new FloatSetting(fVar35, -3.4028235e+38, 3.4028235e+38);
											if (pSVar8 == null) break;
											piVar1 = &pSVar8._version;
											*piVar1 = *piVar1 + 1;
											pSVar15 = pSVar8._items;
											if (pSVar15 == null) break;
											uVar5 = pSVar8._size;
											if (uVar5 < (uint)pSVar15.Length) {
												pSVar8._size = uVar5 + 1;
												pSVar15[(int)uVar5] = pSVar29;
											}
											else {
												pSVar8.AddWithResize((object)pSVar29);
											}
											pSVar8 = this._originZ;
											fVar35 = __this_03.Origin.z;
											pSVar29 = new FloatSetting(fVar35, -3.4028235e+38, 3.4028235e+38);
											if (pSVar8 == null) break;
											piVar1 = &pSVar8._version;
											*piVar1 = *piVar1 + 1;
											pSVar15 = pSVar8._items;
											if (pSVar15 == null) break;
											uVar5 = pSVar8._size;
											if (uVar5 < (uint)pSVar15.Length) {
												pSVar8._size = uVar5 + 1;
												pSVar15[(int)uVar5] = pSVar29;
											}
											else {
												pSVar8.AddWithResize((object)pSVar29);
											}
											pSVar8 = this._length;
											fVar35 = __this_03.Length;
											pSVar29 = new FloatSetting(fVar35, 0.0, 3.4028235e+38);
											if (pSVar8 == null) break;
											piVar1 = &pSVar8._version;
											*piVar1 = *piVar1 + 1;
											pSVar15 = pSVar8._items;
											if (pSVar15 == null) break;
											uVar5 = pSVar8._size;
											if (uVar5 < (uint)pSVar15.Length) {
												pSVar8._size = uVar5 + 1;
												pSVar15[(int)uVar5] = pSVar29;
											}
											else {
												pSVar8.AddWithResize((object)pSVar29);
											}
											pSVar9 = this._color;
											defaultValue = __this_03.Color;
											__this_04 = new ColorSetting(defaultValue, 0);
											if (pSVar9 == null) break;
											piVar1 = &pSVar9._version;
											*piVar1 = *piVar1 + 1;
											pSVar16 = pSVar9._items;
											if (pSVar16 == null) break;
											uVar5 = pSVar9._size;
											if (uVar5 < (uint)pSVar16.Length) {
												pSVar9._size = uVar5 + 1;
												pSVar16[(int)uVar5] = __this_04;
											}
											else {
												pSVar9.AddWithResize((object)__this_04);
											}
											pUVar25 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 5.0, 3);
											if (pUVar25 == null) break;
											pUVar26 = pUVar25.transform;
											pSVar23 = this.get_ThemePanel();
											pUVar24 = new ElementStyle(0x10, 16.0, 3.0, pSVar23);
											pUVar28 = uStack_e8;
											pSVar8 = this._originX;
											if (pSVar8 == null) break;
											pSVar29 = pSVar8.get_Item(uStack_e8.index);
											pUVar27 = new UnityAction((object)pUVar28, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_c__DisplayClass29_0_Rebuild_b__1);
											ElementFactory.CreateInputSetting(pUVar26, pUVar24, (BaseSetting)pSVar29, "X", "", 64.0, 32.0, false, null, pUVar27, null, null);
											pSVar8 = this._originY;
											if (pSVar8 == null) break;
											pSVar29 = pSVar8.get_Item(pUVar28.index);
											pUVar27 = new UnityAction((object)pUVar28, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_c__DisplayClass29_0_Rebuild_b__2);
											ElementFactory.CreateInputSetting(pUVar26, pUVar24, (BaseSetting)pSVar29, "Y", "", 64.0, 32.0, false, null, pUVar27, null, null);
											pSVar8 = this._originZ;
											if (pSVar8 == null) break;
											pSVar29 = pSVar8.get_Item(pUVar28.index);
											pUVar27 = new UnityAction((object)pUVar28, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_c__DisplayClass29_0_Rebuild_b__3);
											ElementFactory.CreateInputSetting(pUVar26, pUVar24, (BaseSetting)pSVar29, "Z", "", 64.0, 32.0, false, null, pUVar27, null, null);
											pSVar8 = this._length;
											if (pSVar8 == null) break;
											pUVar26 = this.SinglePanel;
											pSStack_f0 = (ColorSetting)pSVar8.get_Item(pUVar28.index);
											pSVar23 = UIManager.GetLocale("MapEditor", "Ruler", "Length", "", "");
											pUVar27 = new UnityAction((object)pUVar28, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_c__DisplayClass29_0_Rebuild_b__4);
											ElementFactory.CreateInputSetting(pUVar26, pUStack_d8, (BaseSetting)pSStack_f0, pSVar23, "", 120.0, 32.0, false, null, pUVar27, null, null);
											pSVar9 = this._color;
											if (pSVar9 == null) break;
											pUVar26 = this.SinglePanel;
											pSStack_f0 = pSVar9.get_Item(pUVar28.index);
											pSVar23 = MapEditorInspectPanel.Locale("Color");
											pUVar17 = this._menu;
											if (pUVar17 == null) break;
											pUStack_a8 = pUVar17.ColorPickPopup;
											pUVar27 = new UnityAction((object)pUVar28, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_c__DisplayClass29_0_Rebuild_b__5);
											pUVar24 = pUStack_d8;
											pMVar34 = (MethodInfo *)"";
											ElementFactory.CreateColorSetting(pUVar26, pUStack_d8, (BaseSetting)pSStack_f0, pSVar23, pUStack_a8, "", 90.0, 28.0, pUVar27);
											pUVar25 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 8.0, 3);
											if (pUVar25 == null) break;
											pUVar26 = pUVar25.transform;
											pSVar23 = UIManager.GetLocale("MapEditor", "Ruler", "Chain", "", "");
											pUVar27 = new UnityAction((object)pUVar28, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_c__DisplayClass29_0_Rebuild_b__6);
											ElementFactory.CreateDefaultButton(pUVar26, pUVar24, pSVar23, 100.0, 32.0, pUVar27);
											pSVar23 = "Delete";
											pSVar23 = UIManager.GetLocale("Common", pSVar23, "", "", "");
											pUVar27 = new UnityAction((object)uStack_e8, (intptr_t)MethodInfo_UI_MapEditorRulerPanel_c__DisplayClass29_0_Rebuild_b__7);
											ElementFactory.CreateDefaultButton(pUVar26, pUVar24, pSVar23, 100.0, 32.0, pUVar27);
											this.CreateHorizontalDivider(this.SinglePanel, 1.0);
											uVar30 = (ulong)((int)uStack_a0 + 1);
										} while(true);
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d982c7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053CA")]
	[Address(RVA = "0x5C99810", Offset = "0x5C98810", VA = "0x5C99810")]
	private void OnOriginChanged(int index)
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$OnOriginChanged): clean
		float fVar1;
		float fVar2;
		MapEditorGameManager pGVar3;
		List<FloatSetting> pSVar4;
		MapEditorRuler __this_00;
		FloatSetting pSVar5;
		Vector3 origin;

		pGVar3 = this._gameManager;
		if ((pGVar3 != null) &&(pSVar4 = this._originX, pSVar4 != null)) {
			__this_00 = pGVar3.Ruler;
			pSVar5 = pSVar4.get_Item(index);
			if ((pSVar5 != null) &&(pSVar4 = this._originY, pSVar4 != null)) {
				fVar1 = pSVar5._value;
				pSVar5 = pSVar4.get_Item(index);
				if ((pSVar5 != null) &&(pSVar4 = this._originZ, pSVar4 != null )) {
					fVar2 = pSVar5._value;
					pSVar5 = pSVar4.get_Item(index);
					if ((pSVar5 != null) && (__this_00 != null)) {
						origin.y = fVar2;
						origin.x = fVar1;
						origin.z = pSVar5._value;
						__this_00.SetOrigin(index, origin);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053CB")]
	[Address(RVA = "0x5C99900", Offset = "0x5C98900", VA = "0x5C99900")]
	private void ToggleCreateMeasurement()
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$ToggleCreateMeasurement): clean
		MapEditorGameManager pGVar1;
		MapEditorRuler __this_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Ruler, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CreateNewMeasurement();
		return;
	}

	[Token(Token = "0x60053CC")]
	[Address(RVA = "0x5C99930", Offset = "0x5C98930", VA = "0x5C99930")]
	private void OnLengthChanged(int index)
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$OnLengthChanged): clean
		MapEditorGameManager pGVar1;
		List<FloatSetting> __this_00;
		MapEditorRuler __this_01;
		FloatSetting pSVar2;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(__this_00 = this._length, __this_00 != null)) {
			__this_01 = pGVar1.Ruler;
			pSVar2 = __this_00.get_Item(index);
			if ((pSVar2 != null) && (__this_01 != null)) {
				__this_01.SetLength(index, pSVar2._value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053CD")]
	[Address(RVA = "0x5C999C0", Offset = "0x5C989C0", VA = "0x5C999C0")]
	private void OnColorChanged(int index)
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$OnColorChanged): clean
		MapEditorGameManager pGVar1;
		List<ColorSetting> __this_00;
		MapEditorRuler __this_01;
		ColorSetting pSVar2;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(__this_00 = this._color, __this_00 != null )) {
			__this_01 = pGVar1.Ruler;
			pSVar2 = __this_00.get_Item(index);
			if ((pSVar2 != null) && (__this_01 != null)) {
				__this_01.SetColor(index, pSVar2._value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053CE")]
	[Address(RVA = "0x5C99A50", Offset = "0x5C98A50", VA = "0x5C99A50")]
	private void OnDelete(int index)
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$OnDelete): clean
		MapEditorGameManager pGVar1;
		MapEditorRuler __this_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Ruler, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Delete(index);
		this.Rebuild();
		return;
	}

	[Token(Token = "0x60053CF")]
	[Address(RVA = "0x5C99A90", Offset = "0x5C98A90", VA = "0x5C99A90")]
	public MapEditorRulerPanel()
	{
		// Lifted from source/cpp/UI/MapEditorRulerPanel.c (UI.MapEditorRulerPanel$$.ctor): clean
		List<FloatSetting> pSVar1;
		List<ColorSetting> __this_00;

		pSVar1 = new List<FloatSetting>();
		this._originX = pSVar1;
		pSVar1 = new List<FloatSetting>();
		this._originY = pSVar1;
		pSVar1 = new List<FloatSetting>();
		this._originZ = pSVar1;
		pSVar1 = new List<FloatSetting>();
		this._length = pSVar1;
		__this_00 = new List<ColorSetting>();
		this._color = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorRulerPanel.c.

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$.ctor: clean
	private void c__DisplayClass29_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorRulerPanel$$<Rebuild>b__29_0: clean
	private void Rebuild_b__29_0()
	{
		MapEditorMenu pUVar1;
		MapEditorTopPanel __this_00;

		pUVar1 = this._menu;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._topPanel, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseRulerTool();
		return;
	}

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$<Rebuild>b__1: clean
	private void c__DisplayClass29_0__Rebuild_b__1()
	{
		MapEditorRulerPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnOriginChanged(this.index);
		return;
	}

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$<Rebuild>b__2: clean
	private void c__DisplayClass29_0__Rebuild_b__2()
	{
		MapEditorRulerPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnOriginChanged(this.index);
		return;
	}

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$<Rebuild>b__3: clean
	private void c__DisplayClass29_0__Rebuild_b__3()
	{
		MapEditorRulerPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnOriginChanged(this.index);
		return;
	}

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$<Rebuild>b__4: clean
	private void c__DisplayClass29_0__Rebuild_b__4()
	{
		MapEditorRulerPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnLengthChanged(this.index);
		return;
	}

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$<Rebuild>b__5: clean
	private void c__DisplayClass29_0__Rebuild_b__5()
	{
		MapEditorRulerPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnColorChanged(this.index);
		return;
	}

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$<Rebuild>b__6: clean
	private void c__DisplayClass29_0__Rebuild_b__6()
	{
		MapEditorRulerPanel pUVar1;
		MapEditorGameManager pGVar2;
		MapEditorRuler __this_00;

		pUVar1 = this.__4__this;
		if (((pUVar1 == null) ||(pGVar2 = pUVar1._gameManager, pGVar2 == null)) ||(__this_00 = pGVar2.Ruler, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.ChainFrom(this.index);
		return;
	}

	// UI.MapEditorRulerPanel.<>c__DisplayClass29_0$$<Rebuild>b__7: clean
	private void c__DisplayClass29_0__Rebuild_b__7()
	{
		uint index;
		MapEditorRulerPanel __this_00;
		MapEditorGameManager pGVar1;
		MapEditorRuler __this_01;

		__this_00 = this.__4__this;
		if (((__this_00 == null) ||(pGVar1 = __this_00._gameManager, pGVar1 == null)) ||(__this_01 = pGVar1.Ruler, __this_01 == null)) {
			throw new NullReferenceException();
		}
		index = this.index;
		__this_01.Delete(index);
		__this_00.Rebuild();
		return;
	}
}
