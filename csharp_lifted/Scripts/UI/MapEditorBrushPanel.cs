// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorBrushPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorBrushPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200089A")]
internal class MapEditorBrushPanel : HeadedPanel
{
	[Token(Token = "0x4002B3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002B3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002B40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private FloatSetting _radius;

	[Token(Token = "0x4002B41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private IntSetting _count;

	[Token(Token = "0x4002B42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private BoolSetting _randomize;

	[Token(Token = "0x4002B43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _mode;

	[Token(Token = "0x4002B44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private IntSetting _gridX;

	[Token(Token = "0x4002B45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private IntSetting _gridY;

	[Token(Token = "0x4002B46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IntSetting _gridZ;

	[Token(Token = "0x4002B47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _spacingX;

	[Token(Token = "0x4002B48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _spacingY;

	[Token(Token = "0x4002B49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _spacingZ;

	[Token(Token = "0x4002B4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private BoolSetting _boundsSnap;

	[Token(Token = "0x4002B4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private StringSetting _curveAxis;

	[Token(Token = "0x4002B4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private FloatSetting _curveAmount;

	[Token(Token = "0x4002B4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private BoolSetting _flatPlane;

	[Token(Token = "0x4002B4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private BoolSetting _alignToSurface;

	[Token(Token = "0x4002B4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private List<FloatSetting> _weight;

	[Token(Token = "0x4002B50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private List<BoolSetting> _advanced;

	[Token(Token = "0x4002B51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private List<FloatSetting> _scaleMin;

	[Token(Token = "0x4002B52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private List<FloatSetting> _scaleMax;

	[Token(Token = "0x4002B53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private List<FloatSetting> _yawMin;

	[Token(Token = "0x4002B54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private List<FloatSetting> _yawMax;

	[Token(Token = "0x4002B55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private List<FloatSetting> _scaleXMin;

	[Token(Token = "0x4002B56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private List<FloatSetting> _scaleXMax;

	[Token(Token = "0x4002B57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private List<FloatSetting> _scaleYMin;

	[Token(Token = "0x4002B58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private List<FloatSetting> _scaleYMax;

	[Token(Token = "0x4002B59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private List<FloatSetting> _scaleZMin;

	[Token(Token = "0x4002B5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private List<FloatSetting> _scaleZMax;

	[Token(Token = "0x4002B5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private List<FloatSetting> _rotXMin;

	[Token(Token = "0x4002B5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private List<FloatSetting> _rotXMax;

	[Token(Token = "0x4002B5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private List<FloatSetting> _rotYMin;

	[Token(Token = "0x4002B5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private List<FloatSetting> _rotYMax;

	[Token(Token = "0x4002B5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private List<FloatSetting> _rotZMin;

	[Token(Token = "0x4002B60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<FloatSetting> _rotZMax;

	[Token(Token = "0x4002B61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<BoolSetting> _active;

	[Token(Token = "0x4002B62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<BoolSetting> _static;

	[Token(Token = "0x4002B63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private List<BoolSetting> _visible;

	[Token(Token = "0x4002B64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private List<StringSetting> _collideMode;

	[Token(Token = "0x4002B65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private List<StringSetting> _collideWith;

	[Token(Token = "0x4002B66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private List<StringSetting> _physicsMaterial;

	[Token(Token = "0x4002B67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private List<StringSetting> _shader;

	[Token(Token = "0x4002B68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private List<ColorSetting> _color;

	[Token(Token = "0x4002B69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private List<ColorSetting> _reflectColor;

	[Token(Token = "0x4002B6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private List<StringSetting> _texture;

	[Token(Token = "0x4002B6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private List<FloatSetting> _tilingX;

	[Token(Token = "0x4002B6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private List<FloatSetting> _tilingY;

	[Token(Token = "0x4002B6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private List<FloatSetting> _offsetX;

	[Token(Token = "0x4002B6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private List<FloatSetting> _offsetY;

	[Token(Token = "0x4002B6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private List<FloatSetting> _yOffset;

	[Token(Token = "0x17000E62")]
	protected override float Width
	{
		[Token(Token = "0x60051B6")]
		[Address(RVA = "0x5C62340", Offset = "0x5C61340", VA = "0x5C62340", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_Width): clean
			return 400.0;
		}
	}

	[Token(Token = "0x17000E63")]
	protected override float Height
	{
		[Token(Token = "0x60051B7")]
		[Address(RVA = "0x5C62350", Offset = "0x5C61350", VA = "0x5C62350", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_Height): clean
			return 990.0;
		}
	}

	[Token(Token = "0x17000E64")]
	protected override string Title
	{
		[Token(Token = "0x60051B8")]
		[Address(RVA = "0x5C62360", Offset = "0x5C61360", VA = "0x5C62360", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Tools", "Brush", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E65")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60051B9")]
		[Address(RVA = "0x5C62400", Offset = "0x5C61400", VA = "0x5C62400", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E66")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60051BA")]
		[Address(RVA = "0x5C62410", Offset = "0x5C61410", VA = "0x5C62410", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E67")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60051BB")]
		[Address(RVA = "0x5C62420", Offset = "0x5C61420", VA = "0x5C62420", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_VerticalSpacing): clean
			return 8.0;
		}
	}

	[Token(Token = "0x17000E68")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60051BC")]
		[Address(RVA = "0x5C62430", Offset = "0x5C61430", VA = "0x5C62430", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000E69")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60051BD")]
		[Address(RVA = "0x5C62440", Offset = "0x5C61440", VA = "0x5C62440", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_VerticalPadding): clean
			return 0xf;
		}
	}

	[Token(Token = "0x17000E6A")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60051BE")]
		[Address(RVA = "0x5C62450", Offset = "0x5C61450", VA = "0x5C62450", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000E6B")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60051BF")]
		[Address(RVA = "0x5C62460", Offset = "0x5C61460", VA = "0x5C62460", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$get_ThemePanel): clean
			return "MapEditor";
		}
	}

	[Token(Token = "0x60051C0")]
	[Address(RVA = "0x5C62490", Offset = "0x5C61490", VA = "0x5C62490", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$Setup): 4 lines keep C-only constructs
		byte bVar1;
		MapEditorGameManager pGVar2;
		MapEditorMenu pUVar3;

		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar3 != null) goto label_05d6250a;
	label_05d62585: ;
			this._menu = null;
		}
		else {
			pUVar3 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar3 == null) goto label_05d62585;
	label_05d6250a: ;
			pGVar2 = (MapEditorGameManager)typeof(MapEditorMenu);
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) goto label_05d62600;
			this._menu = pUVar3;
			if (((((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pGVar2)) goto label_05d62600;
		}
		pGVar2 = typeof(MapEditorGameManager);
		pUVar3 = (MapEditorMenu)SceneLoader.CurrentGameManager;
		if (pUVar3 == null) {
			this._gameManager = null;
	label_05d62616: ;
			return;
		}
		bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
		if ((bVar1 <= (((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapEditorGameManager))) {
			this._gameManager = (MapEditorGameManager)pUVar3;
			if ((bVar1 <= (((BaseGameManager)pUVar3.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pGVar2)) goto label_05d62616;
		}
	label_05d62600: ;
		throw new InvalidCastException();
	}

	[Token(Token = "0x60051C1")]
	[Address(RVA = "0x5C62630", Offset = "0x5C61630", VA = "0x5C62630")]
	public new void Show()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$Show): clean


		this.Show();
		this.Rebuild();
		return;
	}

	[Token(Token = "0x60051C2")]
	[Address(RVA = "0x5C694D0", Offset = "0x5C684D0", VA = "0x5C694D0")]
	public void SyncValues()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$SyncValues): 2 lines keep C-only constructs
		int iVar1;
		MapEditorGameManager pGVar2;
		MapEditorBrush pMVar3;
		FloatSetting pSVar4;
		IntSetting pSVar5;
		BoolSetting pSVar6;
		StringSetting __this_00;
		Transform __this_01;
		object pIVar7;
		uint uVar8;
		String* ppSVar9;
		Object[] pSVar10;
		uint uVar11;

		pGVar2 = this._gameManager;
		if (((pGVar2 != null) &&(pMVar3 = pGVar2.Brush, pMVar3 != null)) &&(pSVar4 = this._radius, pSVar4 != null)) {
			pSVar4.Value = pMVar3.Radius;
			pSVar5 = this._count;
			if (pSVar5 != null) {
				pSVar5.Value = pMVar3.Count;
				pSVar6 = this._randomize;
				if (pSVar6 != null) {
					pSVar6.Value = pMVar3.RandomizeEachPlacement;
					pSVar5 = this._gridX;
					if (pSVar5 != null) {
						pSVar5.Value = pMVar3.GridX;
						pSVar5 = this._gridY;
						if (pSVar5 != null) {
							pSVar5.Value = pMVar3.GridY;
							pSVar5 = this._gridZ;
							if (pSVar5 != null) {
								pSVar5.Value = pMVar3.GridZ;
								pSVar4 = this._spacingX;
								if (pSVar4 != null) {
									pSVar4.Value = pMVar3.SpacingX;
									pSVar4 = this._spacingY;
									if (pSVar4 != null) {
										pSVar4.Value = pMVar3.SpacingY;
										pSVar4 = this._spacingZ;
										if (pSVar4 != null) {
											pSVar4.Value = pMVar3.SpacingZ;
											pSVar6 = this._boundsSnap;
											if (pSVar6 != null) {
												pSVar6.Value = pMVar3.BoundsSnap;
												__this_00 = this._curveAxis;
												iVar1 = pMVar3.CurveAxis;
												if (iVar1 == 1) {
													ppSVar9 = &"X";
												}
												else if (iVar1 == 2) {
													ppSVar9 = &"Y";
												}
												else if (iVar1 == 3) {
													ppSVar9 = &"Z";
												}
												else {
													ppSVar9 = &"None";
												}
												if (__this_00 != null) {
													__this_00.Value = (object)*ppSVar9;
													pSVar4 = this._curveAmount;
													if (pSVar4 != null) {
														pSVar4.Value = pMVar3.CurveAmount;
														pSVar6 = this._flatPlane;
														if (pSVar6 != null) {
															pSVar6.Value = pMVar3.FlatPlane;
															pSVar6 = this._alignToSurface;
															if (pSVar6 != null) {
																pSVar6.Value = pMVar3.AlignToSurface;
																__this_01 = this.SinglePanel;
																if (__this_01 != null) {
																	pSVar10 = __this_01.GetComponentsInChildren<BaseSettingElement>(true);
																	if (pSVar10 != null) {
																		uVar8 = (uint)pSVar10.Length;
																		if (0 < (int)uVar8) {
																			uVar11 = 0;
																			do {
																				if (uVar8 <= uVar11) {
																					throw new IndexOutOfRangeException();
																				}
																				pIVar7 = pSVar10[(int)uVar11];
																				if (pIVar7 == null) goto label_05d697c9;
																				(*pIVar7.klass.vtable[6].methodPtr)(pIVar7,pIVar7.klass.vtable[6].method);
																				uVar11 = uVar11 + 1;
																				uVar8 = (uint)pSVar10.Length;
																			} while ((int)uVar11 < (int)uVar8);
																		}
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
				}
			}
		}
	label_05d697c9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051C3")]
	[Address(RVA = "0x5C62650", Offset = "0x5C61650", VA = "0x5C62650")]
	public void Rebuild()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$Rebuild): 340 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int iVar3;
		int iVar4;
		uint uVar5;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		List<FloatSetting> pSVar8;
		List<BoolSetting> pSVar9;
		List<StringSetting> pSVar10;
		List<ColorSetting> pSVar11;
		MapEditorGameManager pGVar12;
		IntSetting pSVar13;
		FloatSetting[] pSVar14;
		BoolSetting[] pSVar15;
		StringSetting[] pSVar16;
		Color255 pUVar17;
		ColorSetting[] pSVar18;
		MapEditorMenu pUVar19;
		ColorPickPopup pUVar20;
		MethodInfo pMVar21;
		bool bVar22;
		VirtualInvokeData pVVar23;
		Component __this_00;
		Object obj;
		object pIVar24;
		String pSVar25;
		ElementStyle pUVar26;
		ElementStyle pUVar27;
		GameObject pUVar28;
		Transform pUVar29;
		UnityAction pUVar30;
		String* ppSVar31;
		String[] pSVar32;
		String pSVar33;
		ElementStyle __this_01;
		List<BrushEntry> pSVar34;
		MapEditorBrushPanel.c__DisplayClass73_0 __this_02;
		BrushEntry pMVar35;
		FloatSetting pSVar36;
		BoolSetting pSVar37;
		StringSetting pSVar38;
		ColorSetting pSVar39;
		LayoutElement pUVar40;
		ulong uVar41;
		MapEditorBrush pMVar42;
		long lVar43;
		MapEditorBrushPanel.c__DisplayClass73_0 pUVar44;
		float fVar45;
		object local_70;
		MapEditorBrush local_68;
		ulong local_60;
		object local_58;
		String local_50;
		object* local_40;
		object* local_38;

		if (Il2CppMethodInitialized_07547f86 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ColorSetting_Clear) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FloatSetting_Clear) ;
			Il2CppMethodInitialized_07547f86 = true;
		}
		local_58 = null;
		pUVar29 = this.SinglePanel;
		if (pUVar29 != null) {
			local_70 = (object)pUVar29.GetEnumerator();
			local_40 = &local_70;
			local_38 = &local_58;
			do {
				pIVar24 = local_70;
				if (local_70 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = local_70.klass;
				uVar41 = (ulong)(pIVar6._2).interface_offsets_count;
				bVar22 = pIVar24.Dispose();
				pIVar24 = local_70;
				if (!bVar22) {
					pIVar24 = (local_70 as IDisposable);
					local_58 = pIVar24;
					if (pIVar24 == null) goto label_05d63036;
					pIVar6 = pIVar24.klass;
					uVar41 = (ulong)(pIVar6._2).interface_offsets_count;
					if (uVar41 == 0) goto label_05d6300f;
					pIVar7 = (pIVar6._1).interfaceOffsets;
					lVar43 = 0;
					goto label_05d63000;
				}
				if (local_70 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = local_70.klass;
				uVar41 = (ulong)(pIVar6._2).interface_offsets_count;
				__this_00 = (Component)pIVar24.Dispose();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar2 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				obj = (Object)__this_00.gameObject;
				Object.Destroy(obj);
			} while(true);
		}
		goto label_05d693d0;
		while (true) {
			lVar43 = lVar43 + 0x10;
			if (!(uVar41 * 0x10 != lVar43)) break;
	label_05d63000: ;
			if (*(IDisposable*)((long)&pIVar7.interfaceType + lVar43) == typeof(IDisposable)) {
				pVVar23 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar43);
				goto label_05d6302d;
			}
		}
	label_05d6300f: ;
	label_05d6302d: ;
		pIVar24.Dispose();
	label_05d63036: ;
		pSVar8 = this._weight;
		if (pSVar8 != null) {
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			iVar3 = pSVar8._size;
			pSVar8._size = 0;
			if (0 < iVar3) {
				Array.Clear((Array)pSVar8._items, 0, iVar3);
			}
			pSVar9 = this._advanced;
			if (pSVar9 != null) {
				piVar1 = &pSVar9._version;
				*piVar1 = *piVar1 + 1;
				iVar3 = pSVar9._size;
				pSVar9._size = 0;
				if (0 < iVar3) {
					Array.Clear((Array)pSVar9._items, 0, iVar3);
				}
				pSVar8 = this._scaleMin;
				if (pSVar8 != null) {
					piVar1 = &pSVar8._version;
					*piVar1 = *piVar1 + 1;
					iVar3 = pSVar8._size;
					pSVar8._size = 0;
					if (0 < iVar3) {
						Array.Clear((Array)pSVar8._items, 0, iVar3);
					}
					pSVar8 = this._scaleMax;
					if (pSVar8 != null) {
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						iVar3 = pSVar8._size;
						pSVar8._size = 0;
						if (0 < iVar3) {
							Array.Clear((Array)pSVar8._items, 0, iVar3);
						}
						pSVar8 = this._yawMin;
						if (pSVar8 != null) {
							piVar1 = &pSVar8._version;
							*piVar1 = *piVar1 + 1;
							iVar3 = pSVar8._size;
							pSVar8._size = 0;
							if (0 < iVar3) {
								Array.Clear((Array)pSVar8._items, 0, iVar3);
							}
							pSVar8 = this._yawMax;
							if (pSVar8 != null) {
								piVar1 = &pSVar8._version;
								*piVar1 = *piVar1 + 1;
								iVar3 = pSVar8._size;
								pSVar8._size = 0;
								if (0 < iVar3) {
									Array.Clear((Array)pSVar8._items, 0, iVar3);
								}
								pSVar8 = this._scaleXMin;
								if (pSVar8 != null) {
									piVar1 = &pSVar8._version;
									*piVar1 = *piVar1 + 1;
									iVar3 = pSVar8._size;
									pSVar8._size = 0;
									if (0 < iVar3) {
										Array.Clear((Array)pSVar8._items, 0, iVar3);
									}
									pSVar8 = this._scaleXMax;
									if (pSVar8 != null) {
										piVar1 = &pSVar8._version;
										*piVar1 = *piVar1 + 1;
										iVar3 = pSVar8._size;
										pSVar8._size = 0;
										if (0 < iVar3) {
											Array.Clear((Array)pSVar8._items, 0, iVar3);
										}
										pSVar8 = this._scaleYMin;
										if (pSVar8 != null) {
											piVar1 = &pSVar8._version;
											*piVar1 = *piVar1 + 1;
											iVar3 = pSVar8._size;
											pSVar8._size = 0;
											if (0 < iVar3) {
												Array.Clear((Array)pSVar8._items, 0, iVar3) ;
											}
											pSVar8 = this._scaleYMax;
											if (pSVar8 != null) {
												piVar1 = &pSVar8._version;
												*piVar1 = *piVar1 + 1;
												iVar3 = pSVar8._size;
												pSVar8._size = 0;
												if (0 < iVar3) {
													Array.Clear((Array)pSVar8._items, 0, iVar3);
												}
												pSVar8 = this._scaleZMin;
												if (pSVar8 != null) {
													piVar1 = &pSVar8._version;
													*piVar1 = *piVar1 + 1;
													iVar3 = pSVar8._size;
													pSVar8._size = 0;
													if (0 < iVar3) {
														Array.Clear((Array)pSVar8._items, 0, iVar3);
													}
													pSVar8 = this._scaleZMax;
													if (pSVar8 != null) {
														piVar1 = &pSVar8._version;
														*piVar1 = *piVar1 + 1;
														iVar3 = pSVar8._size;
														pSVar8._size = 0;
														if (0 < iVar3) {
															Array.Clear((Array)pSVar8._items, 0, iVar3);
														}
														pSVar8 = this._rotXMin;
														if (pSVar8 != null) {
															piVar1 = &pSVar8._version;
															*piVar1 = *piVar1 + 1;
															iVar3 = pSVar8._size;
															pSVar8._size = 0;
															if (0 < iVar3) {
																Array.Clear((Array)pSVar8._items, 0, iVar3);
															}
															pSVar8 = this._rotXMax;
															if (pSVar8 != null) {
																piVar1 = &pSVar8._version;
																*piVar1 = *piVar1 + 1;
																iVar3 = pSVar8._size;
																pSVar8._size = 0;
																if (0 < iVar3) {
																	Array.Clear((Array)pSVar8._items, 0, iVar3);
																}
																pSVar8 = this._rotYMin;
																if (pSVar8 != null) {
																	piVar1 = &pSVar8._version;
																	*piVar1 = *piVar1 + 1;
																	iVar3 = pSVar8._size;
																	pSVar8._size = 0;
																	if (0 < iVar3) {
																		Array.Clear((Array)pSVar8._items, 0, iVar3);
																	}
																	pSVar8 = this._rotYMax;
																	if (pSVar8 != null) {
																		piVar1 = &pSVar8._version;
																		*piVar1 = *piVar1 + 1;
																		iVar3 = pSVar8._size;
																		pSVar8._size = 0;
																		if (0 < iVar3) {
																			Array.Clear((Array)pSVar8._items, 0, iVar3);
																		}
																		pSVar8 = this._rotZMin;
																		if (pSVar8 != null) {
																			piVar1 = &pSVar8._version;
																			*piVar1 = *piVar1 + 1;
																			iVar3 = pSVar8._size;
																			pSVar8._size = 0;
																			if (0 < iVar3) {
																				Array.Clear((Array)pSVar8._items, 0, iVar3);
																			}
																			pSVar8 = this._rotZMax;
																			if (pSVar8 != null) {
																				piVar1 = &pSVar8._version;
																				*piVar1 = *piVar1 + 1;
																				iVar3 = pSVar8._size;
																				pSVar8._size = 0;
																				if (0 < iVar3) {
																					Array.Clear((Array)pSVar8._items, 0, iVar3);
																				}
																				pSVar9 = this._active;
																				if (pSVar9 != null) {
																					piVar1 = &pSVar9._version;
																					*piVar1 = *piVar1 + 1;
																					iVar3 = pSVar9._size;
																					pSVar9._size = 0;
																					if (0 < iVar3) {
																						Array.Clear((Array)pSVar9._items, 0, iVar3);
																					}
																					pSVar9 = this._static;
																					if (pSVar9 != null) {
																						piVar1 = &pSVar9._version;
																						*piVar1 = *piVar1 + 1;
																						iVar3 = pSVar9._size;
																						pSVar9._size = 0;
																						if (0 < iVar3) {
																							Array.Clear((Array)pSVar9._items, 0, iVar3);
																						}
																						pSVar9 = this._visible;
																						if (pSVar9 != null) {
																							piVar1 = &pSVar9._version;
																							*piVar1 = *piVar1 + 1;
																							iVar3 = pSVar9._size;
																							pSVar9._size = 0;
																							if (0 < iVar3) {
																								Array.Clear((Array)pSVar9._items, 0, iVar3);
																							}
																							pSVar10 = this._collideMode;
																							if (pSVar10 !=null) {
																								piVar1 = &pSVar10._version;
																								*piVar1 = *piVar1 + 1;
																								iVar3 = pSVar10._size;
																								pSVar10._size = 0;
																								if (0 < iVar3) {
																									Array.Clear((Array)pSVar10._items, 0, iVar3);
																								}
																								pSVar10 = this._collideWith;
																								if (pSVar10 !=null) {
																									piVar1 = &pSVar10._version;
																									*piVar1 = *piVar1 + 1;
																									iVar3 = pSVar10._size;
																									pSVar10._size = 0;
																									if (0 < iVar3) {
																										Array.Clear((Array)pSVar10._items, 0, iVar3);
																									}
																									pSVar10 = this._physicsMaterial;
																									if (pSVar10 !=null) {
																										piVar1 = &pSVar10._version;
																										*piVar1 = *piVar1 + 1;
																										iVar3 = pSVar10._size;
																										pSVar10._size = 0;
																										if (0 < iVar3) {
																											Array.Clear((Array)pSVar10._items, 0, iVar3);
																										}
																										pSVar10 = this._shader;
																										if (pSVar10 !=null) {
																											piVar1 = &pSVar10._version;
																											*piVar1 = *piVar1 + 1;
																											iVar3 = pSVar10._size;
																											pSVar10._size = 0;
																											if (0 < iVar3) {
																												Array.Clear((Array)pSVar10._items, 0, iVar3);
																											}
																											pSVar11 = this._color;
																											if (pSVar11 !=null ) {
																												piVar1 = &pSVar11._version;
																												*piVar1 = *piVar1 + 1;
																												iVar3 = pSVar11._size;
																												pSVar11._size = 0;
																												if (0 < iVar3) {
																													Array.Clear((Array)pSVar11._items, 0, iVar3);
																												}
																												pSVar11 = this._reflectColor;
																												if (pSVar11 !=(List<ColorSetting>)0x0) {
																													piVar1 = &pSVar11._version;
																													*piVar1 = *piVar1 + 1;
																													iVar3 = pSVar11._size;
																													pSVar11._size = 0;
																													if (0 < iVar3) {
																														Array.Clear((Array)pSVar11._items, 0, iVar3);
																													}
																													pSVar10 = this._texture;
																													if (pSVar10 !=null) {
																														piVar1 = &pSVar10._version;
																														*piVar1 = *piVar1 + 1;
																														iVar3 = pSVar10._size;
																														pSVar10._size = 0;
																														if (0 < iVar3) {
																															Array.Clear((Array)pSVar10._items, 0, iVar3);
																														}
																														pSVar8 = this._tilingX;
																														if (pSVar8 != null) {
																													piVar1 = &pSVar8._version;
																													*piVar1 = *piVar1 + 1;
																													iVar3 = pSVar8._size;
																													pSVar8._size = 0;
																													if (0 < iVar3) {
																														Array.Clear((Array)pSVar8._items, 0, iVar3);
																													}
																													pSVar8 = this._tilingY;
																													if (pSVar8 != null) {
																													piVar1 = &pSVar8._version;
																													*piVar1 = *piVar1 + 1;
																													iVar3 = pSVar8._size;
																													pSVar8._size = 0;
																													if (0 < iVar3) {
																														Array.Clear((Array)pSVar8._items, 0, iVar3);
																													}
																													pSVar8 = this._offsetX;
																													if (pSVar8 != null) {
																													piVar1 = &pSVar8._version;
																													*piVar1 = *piVar1 + 1;
																													iVar3 = pSVar8._size;
																													pSVar8._size = 0;
																													if (0 < iVar3) {
																														Array.Clear((Array)pSVar8._items, 0, iVar3);
																													}
																													pSVar8 = this._offsetY;
																													if (pSVar8 != null) {
																													piVar1 = &pSVar8._version;
																													*piVar1 = *piVar1 + 1;
																													iVar4 = pSVar8._size;
																													pSVar8._size = 0;
																													if (0 < iVar4) {
																														Array.Clear((Array)pSVar8._items, 0, iVar4);
																													}
																													pSVar25 = (*(this.klass.vtable)._4_get_ThemePanel .methodPtr)(this,(this.klass.vtable )._4_get_ThemePanel. method);
																													pUVar26 = il2cpp_codegen_object_new((Il2CppClass)typeof(ElementStyle));
																													pUVar26 = new ElementStyle(0x12, 140.0, 10.0, pSVar25);
																													pGVar12 = this._gameManager;
																													if (pGVar12 !=null) {
																														pMVar42 = pGVar12.Brush;
																														pSVar25 = (*(this.klass.vtable). _4_get_ThemePanel.methodPtr)(this,(this.klass.vtable) ._4_get_ThemePanel. method);
																														pUVar27 = il2cpp_codegen_object_new((Il2CppClass)typeof(ElementStyle));
																														pUVar27 = new ElementStyle(0x18, 0.0, 10.0, pSVar25);
																														pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 8.0, 4);
																														if (pUVar28 != null) {
																															pUVar29 = pUVar28.transform;
																															pSVar25 = (*(this.klass.vtable)._35_get_Title .methodPtr)(this,(this.klass. vtable). _35_get_Title.method);
																												ElementFactory.CreateDefaultLabel(pUVar29, pUVar27, pSVar25, 0, 4);
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_0);
																												ElementFactory.CreateIconButton(pUVar29, pUVar26, "Icons/Navigation/CloseIcon", 28.0, 28.0, pUVar30, null);
																												this.CreateHorizontalDivider(this.SinglePanel, 1.0);
																												if ((pMVar42 != null) &&(pSVar36 = this._radius, pSVar36 != null)) {
																													pSVar36.Value = pMVar42.Radius;
																												pSVar13 = this._count;
																												if (pSVar13 != null) {
																													pSVar13.Value = pMVar42.Count;
																												pSVar37 = this._randomize;
																												if (pSVar37 != null) {
																													pSVar37.Value = pMVar42.RandomizeEachPlacement;
																												pSVar38 = this._mode;
																												if (pSVar38 != null) {
																													if (pMVar42.Mode == 1) {
																														ppSVar31 = &"Grid";
																													}
																													else {
																														ppSVar31 = &"Scatter";
																													}
																													pSVar38.Value = (object)*ppSVar31;
																												pSVar13 = this._gridX;
																												if (pSVar13 != null) {
																													pSVar13.Value = pMVar42.GridX;
																												pSVar13 = this._gridY;
																												if (pSVar13 != null) {
																													pSVar13.Value = pMVar42.GridY;
																												pSVar13 = this._gridZ;
																												if (pSVar13 != null) {
																													pSVar13.Value = pMVar42.GridZ;
																												pSVar36 = this._spacingX;
																												if (pSVar36 != null) {
																													pSVar36.Value = pMVar42.SpacingX;
																												pSVar36 = this._spacingY;
																												if (pSVar36 != null) {
																													pSVar36.Value = pMVar42.SpacingY;
																												pSVar36 = this._spacingZ;
																												if (pSVar36 != null) {
																													pSVar36.Value = pMVar42.SpacingZ;
																												pSVar37 = this._boundsSnap;
																												if (pSVar37 != null) {
																													pSVar37.Value = pMVar42.BoundsSnap;
																												pSVar38 = this._curveAxis;
																												iVar4 = pMVar42.CurveAxis;
																												if (iVar4 == 1) {
																													ppSVar31 = &"X";
																												}
																												else if (iVar4 == 2) {
																													ppSVar31 = &"Y";
																												}
																												else if (iVar4 == 3) {
																													ppSVar31 = &"Z";
																												}
																												else {
																													ppSVar31 = &"None";
																												}
																												if (pSVar38 != null) {
																													pSVar38.Value = (object)*ppSVar31;
																												pSVar36 = this._curveAmount;
																												if (pSVar36 != null) {
																													pSVar36.Value = pMVar42.CurveAmount;
																												pSVar37 = this._flatPlane;
																												if (pSVar37 != null) {
																													pSVar37.Value = pMVar42.FlatPlane;
																												pSVar37 = this._alignToSurface;
																												if (pSVar37 != null) {
																													local_68 = pMVar42;
																													pSVar37.Value = pMVar42.AlignToSurface;
																												pSVar25 = "Mode";
																												pUVar29 = this.SinglePanel;
																												pSVar38 = this._mode;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar32 = (String[])new string[2];
																												if (pSVar32 != null) {
																													if ((int)pSVar32.Length != 0) {
																														pSVar32[0] = "Scatter";
																														if ((pSVar32.Length & 0xfffffffe) != 0) {
																															pSVar32[1] = "Grid";
																															pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_1);
																												ElementFactory.CreateDropdownSetting(pUVar29, pUVar26, (BaseSetting)pSVar38, pSVar25, pSVar32, "", 140.0, 35.0, 300.0, (Nullable<float>)0x0, pUVar30, null, null);
																												pSVar25 = "FlatPlane";
																												pUVar29 = this.SinglePanel;
																												pSVar37 = this._flatPlane;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "FlatPlaneTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_2);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar33, pSVar25, 25.0, 25.0, pUVar30) ;
																												pSVar25 = "AlignToSurface";
																												pUVar29 = this.SinglePanel;
																												pSVar37 = this._alignToSurface;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "AlignToSurfaceTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_3);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar33, pSVar25, 25.0, 25.0, pUVar30) ;
																												pSVar25 = "Radius";
																												if (local_68.Mode == 1) {
																													pSVar25 = (*(this.klass.vtable)._4_get_ThemePanel .methodPtr)(this,(this.klass.vtable )._4_get_ThemePanel. method);
																													pUVar27 = il2cpp_codegen_object_new((Il2CppClass)typeof(ElementStyle));
																													pUVar27 = new ElementStyle(0x12, 20.0, 6.0, pSVar25);
																													pSVar25 = (*(this.klass.vtable)._4_get_ThemePanel .methodPtr)(this,(this.klass.vtable )._4_get_ThemePanel. method);
																													__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(ElementStyle));
																													__this_01 = new ElementStyle(0x12, 40.0, 6.0, pSVar25);
																													pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																													if (pUVar28 == null) goto label_05d693d0;
																													pUVar29 = pUVar28.transform;
																													pSVar13 = this._gridX;
																													pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_9);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar27, (BaseSetting)pSVar13, "X", "", 60.0, 35.0, false, null, pUVar30, null, null);
																												pSVar13 = this._gridY;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_10);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar27, (BaseSetting)pSVar13, "Y", "", 60.0, 35.0, false, null, pUVar30, null, null);
																												pSVar13 = this._gridZ;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_11);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar27, (BaseSetting)pSVar13, "Z", "", 60.0, 35.0, false, null, pUVar30, null, null);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) goto label_05d693d0;
																												pUVar29 = pUVar28.transform;
																												pSVar25 = "SpacingX";
																												pSVar36 = this._spacingX;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_12);
																												ElementFactory.CreateInputSetting(pUVar29, __this_01, (BaseSetting)pSVar36, pSVar25, "", 70.0, 35.0, false, null, pUVar30, null, null);
																												pSVar25 = "SpacingY";
																												pSVar36 = this._spacingY;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_13);
																												ElementFactory.CreateInputSetting(pUVar29, __this_01, (BaseSetting)pSVar36, pSVar25, "", 70.0, 35.0, false, null, pUVar30, null, null);
																												pSVar25 = "SpacingZ";
																												pSVar36 = this._spacingZ;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_14);
																												ElementFactory.CreateInputSetting(pUVar29, __this_01, (BaseSetting)pSVar36, pSVar25, "", 70.0, 35.0, false, null, pUVar30, null, null);
																												pSVar25 = "BoundsSnap";
																												pUVar29 = this.SinglePanel;
																												pSVar37 = this._boundsSnap;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "BoundsSnapTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_15);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar33, pSVar25, 25.0, 25.0, pUVar30) ;
																												pSVar25 = "CurveAxis";
																												pUVar29 = this.SinglePanel;
																												pSVar38 = this._curveAxis;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar32 = (String[])new string[4];
																												if (pSVar32 == null) goto label_05d693d0;
																												if ((int)pSVar32.Length == 0) goto label_05d6949a;
																												pSVar32[0] = "None";
																												if ((pSVar32.Length & 0xfffffffe) == 0) goto label_05d6949a;
																												pSVar32[1] = "X";
																												if ((uint)pSVar32.Length < 3) goto label_05d6949a;
																												pSVar32[2] = "Y";
																												if ((pSVar32.Length & 0xfffffffc) == 0) goto label_05d6949a;
																												pSVar32[3] = "Z";
																												pSVar33 = "CurveAxisTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar33, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_16);
																												ElementFactory.CreateDropdownSetting(pUVar29, pUVar26, (BaseSetting)pSVar38, pSVar25, pSVar32, pSVar33, 140.0, 35.0, 300.0, (Nullable<float>)0x0, pUVar30, null, null);
																												pSVar25 = "CurveAmount";
																												pUVar29 = this.SinglePanel;
																												pSVar36 = this._curveAmount;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "CurveAmountTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_17);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar33, pSVar25, 100.0, 35.0, false, null, pUVar30, null, null);
																												}
																												else {
																													pUVar29 = this.SinglePanel;
																													pSVar36 = this._radius;
																													if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																													pSVar25 = "RadiusTooltip";
																													if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																													pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_4);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar33, pSVar25, 100.0, 35.0, false, null, pUVar30, null, null);
																												pSVar25 = "Density";
																												pUVar29 = this.SinglePanel;
																												pSVar13 = this._count;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "DensityTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_5);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar13, pSVar33, pSVar25, 100.0, 35.0, false, null, pUVar30, null, null);
																												pSVar25 = "Randomize";
																												pUVar29 = this.SinglePanel;
																												pSVar37 = this._randomize;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "RandomizeTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_6);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar33, pSVar25, 25.0, 25.0, pUVar30) ;
																												}
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 10.0, 3);
																												pMVar42 = local_68;
																												if (pUVar28 != null) {
																													pUVar29 = pUVar28.transform;
																													pSVar25 = "AddAsset";
																													if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																													pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_7);
																												ElementFactory.CreateDefaultButton(pUVar29, pUVar26, pSVar25, 0.0, 35.0, pUVar30);
																												pSVar25 = "ReRoll";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_8);
																												ElementFactory.CreateDefaultButton(pUVar29, pUVar26, pSVar25, 0.0, 35.0, pUVar30);
																												this.CreateHorizontalDivider(this.SinglePanel, 1.0);
																												pSVar25 = (*(this.klass.vtable)._4_get_ThemePanel. methodPtr)(this,(this.klass.vtable). _4_get_ThemePanel.method) ;
																												pUVar26 = il2cpp_codegen_object_new((Il2CppClass)typeof(ElementStyle));
																												pUVar26 = new ElementStyle(0x10, 80.0, 4.0, pSVar25);
																												uVar41 = 0;
																												pSVar34 = pMVar42.Entries;
																												if (pSVar34 !=(List<BrushEntry>)0x0) {
																													while(true) {
																														pSVar25 = "NoAssets";
																														iVar4 = pSVar34._size;
																														if (iVar4 <= (int)uVar41) {
																															if (iVar4 == 0) {
																																pUVar29 = this.SinglePanel;
																																if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																																}
																																pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												ElementFactory.CreateDefaultLabel(pUVar29, pUVar26, pSVar25, 0, 3);
																												}
																												return;
																												}
																												local_60 = uVar41;
																												__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapEditorBrushPanel.c__DisplayClass73_0));
																												__this_02 = new MapEditorBrushPanel.c__DisplayClass73_0();
																												if (__this_02 ==(MapEditorBrushPanel.c__DisplayClass73_0)0x0) break;
																												__this_02.__4__this = this;
																												__this_02.index = (int32_t)local_60;
																												pSVar34 = pMVar42.Entries;
																												if ((pSVar34 ==(List<BrushEntry>)0x0) || (pMVar35 = pSVar34.get_Item((int32_t)local_60), pMVar35 == null)) break;
																												pSVar8 = this._weight;
																												fVar45 = pMVar35.Weight;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar9 = this._advanced;
																												bVar22 = pMVar35.Advanced;
																												pSVar37 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar37 = new BoolSetting(bVar22);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_BoolSetting_Add ;
																												if (pSVar9 == null) break;
																												piVar1 = &pSVar9._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar15 = pSVar9._items;
																												if (pSVar15 == null) break;
																												uVar5 = pSVar9._size;
																												if (uVar5 < (uint)pSVar15.Length) {
																													pSVar9._size = uVar5 + 1;
																													pSVar15[(int)uVar5] = pSVar37;
																												}
																												else {

																												pSVar9.AddWithResize((object)pSVar37);
																												}
																												pSVar8 = this._scaleMin;
																												fVar45 = pMVar35.ScaleMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._scaleMax;
																												fVar45 = pMVar35.ScaleMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._yawMin;
																												fVar45 = pMVar35.YawMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._yawMax;
																												fVar45 = pMVar35.YawMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._scaleXMin;
																												fVar45 = pMVar35.ScaleXMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._scaleXMax;
																												fVar45 = pMVar35.ScaleXMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._scaleYMin;
																												fVar45 = pMVar35.ScaleYMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._scaleYMax;
																												fVar45 = pMVar35.ScaleYMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._scaleZMin;
																												fVar45 = pMVar35.ScaleZMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._scaleZMax;
																												fVar45 = pMVar35.ScaleZMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._rotXMin;
																												fVar45 = pMVar35.RotXMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._rotXMax;
																												fVar45 = pMVar35.RotXMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._rotYMin;
																												fVar45 = pMVar35.RotYMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._rotYMax;
																												fVar45 = pMVar35.RotYMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._rotZMin;
																												fVar45 = pMVar35.RotZMin;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._rotZMax;
																												fVar45 = pMVar35.RotZMax;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar9 = this._active;
																												bVar22 = pMVar35.Active;
																												pSVar37 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar37 = new BoolSetting(bVar22);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_BoolSetting_Add ;
																												if (pSVar9 == null) break;
																												piVar1 = &pSVar9._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar15 = pSVar9._items;
																												if (pSVar15 == null) break;
																												uVar5 = pSVar9._size;
																												if (uVar5 < (uint)pSVar15.Length) {
																													pSVar9._size = uVar5 + 1;
																													pSVar15[(int)uVar5] = pSVar37;
																												}
																												else {

																												pSVar9.AddWithResize((object)pSVar37);
																												}
																												pSVar9 = this._static;
																												bVar22 = pMVar35.Static;
																												pSVar37 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar37 = new BoolSetting(bVar22);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_BoolSetting_Add ;
																												if (pSVar9 == null) break;
																												piVar1 = &pSVar9._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar15 = pSVar9._items;
																												if (pSVar15 == null) break;
																												uVar5 = pSVar9._size;
																												if (uVar5 < (uint)pSVar15.Length) {
																													pSVar9._size = uVar5 + 1;
																													pSVar15[(int)uVar5] = pSVar37;
																												}
																												else {

																												pSVar9.AddWithResize((object)pSVar37);
																												}
																												pSVar9 = this._visible;
																												bVar22 = pMVar35.Visible;
																												pSVar37 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar37 = new BoolSetting(bVar22);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_BoolSetting_Add ;
																												if (pSVar9 == null) break;
																												piVar1 = &pSVar9._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar15 = pSVar9._items;
																												if (pSVar15 == null) break;
																												uVar5 = pSVar9._size;
																												if (uVar5 < (uint)pSVar15.Length) {
																													pSVar9._size = uVar5 + 1;
																													pSVar15[(int)uVar5] = pSVar37;
																												}
																												else {

																												pSVar9.AddWithResize((object)pSVar37);
																												}
																												pSVar10 = this._collideMode;
																												pSVar25 = pMVar35.CollideMode;
																												pSVar38 = il2cpp_codegen_object_new((Il2CppClass)typeof(StringSetting));
																												pSVar38 = new StringSetting(pSVar25, 0x7fffffff);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_StringSetting_Add ;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												piVar1 = &pSVar10._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar16 = pSVar10._items;
																												if (pSVar16 == null) break;
																												uVar5 = pSVar10._size;
																												if (uVar5 < (uint)pSVar16.Length) {
																													pSVar10._size = uVar5 + 1;
																													pSVar16[(int)uVar5] = pSVar38;
																												}
																												else {

																												pSVar10.AddWithResize((object)pSVar38);
																												}
																												pSVar10 = this._collideWith;
																												pSVar25 = pMVar35.CollideWith;
																												pSVar38 = il2cpp_codegen_object_new((Il2CppClass)typeof(StringSetting));
																												pSVar38 = new StringSetting(pSVar25, 0x7fffffff);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_StringSetting_Add ;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												piVar1 = &pSVar10._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar16 = pSVar10._items;
																												if (pSVar16 == null) break;
																												uVar5 = pSVar10._size;
																												if (uVar5 < (uint)pSVar16.Length) {
																													pSVar10._size = uVar5 + 1;
																													pSVar16[(int)uVar5] = pSVar38;
																												}
																												else {

																												pSVar10.AddWithResize((object)pSVar38);
																												}
																												pSVar10 = this._physicsMaterial;
																												pSVar25 = pMVar35.PhysicsMaterial;
																												pSVar38 = il2cpp_codegen_object_new((Il2CppClass)typeof(StringSetting));
																												pSVar38 = new StringSetting(pSVar25, 0x7fffffff);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_StringSetting_Add ;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												piVar1 = &pSVar10._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar16 = pSVar10._items;
																												if (pSVar16 == null) break;
																												uVar5 = pSVar10._size;
																												if (uVar5 < (uint)pSVar16.Length) {
																													pSVar10._size = uVar5 + 1;
																													pSVar16[(int)uVar5] = pSVar38;
																												}
																												else {

																												pSVar10.AddWithResize((object)pSVar38);
																												}
																												pSVar10 = this._shader;
																												pSVar25 = pMVar35.Shader;
																												pSVar38 = il2cpp_codegen_object_new((Il2CppClass)typeof(StringSetting));
																												pSVar38 = new StringSetting(pSVar25, 0x7fffffff);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_StringSetting_Add ;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												piVar1 = &pSVar10._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar16 = pSVar10._items;
																												if (pSVar16 == null) break;
																												uVar5 = pSVar10._size;
																												if (uVar5 < (uint)pSVar16.Length) {
																													pSVar10._size = uVar5 + 1;
																													pSVar16[(int)uVar5] = pSVar38;
																												}
																												else {

																												pSVar10.AddWithResize((object)pSVar38);
																												}
																												pSVar11 = this._color;
																												pUVar17 = pMVar35.Color;
																												pSVar39 = il2cpp_codegen_object_new((Il2CppClass)typeof(ColorSetting));
																												pSVar39 = new ColorSetting(pUVar17, 0);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_ColorSetting_Add ;
																												if (pSVar11 ==(List<ColorSetting>)0x0) break;
																												piVar1 = &pSVar11._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar18 = pSVar11._items;
																												if (pSVar18 == null) break;
																												uVar5 = pSVar11._size;
																												if (uVar5 < (uint)pSVar18.Length) {
																													pSVar11._size = uVar5 + 1;
																													pSVar18[(int)uVar5] = pSVar39;
																												}
																												else {

																												pSVar11.AddWithResize((object)pSVar39);
																												}
																												pSVar11 = this._reflectColor;
																												pUVar17 = pMVar35.ReflectColor;
																												pSVar39 = il2cpp_codegen_object_new((Il2CppClass)typeof(ColorSetting));
																												pSVar39 = new ColorSetting(pUVar17, 0);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_ColorSetting_Add ;
																												if (pSVar11 ==(List<ColorSetting>)0x0) break;
																												piVar1 = &pSVar11._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar18 = pSVar11._items;
																												if (pSVar18 == null) break;
																												uVar5 = pSVar11._size;
																												if (uVar5 < (uint)pSVar18.Length) {
																													pSVar11._size = uVar5 + 1;
																													pSVar18[(int)uVar5] = pSVar39;
																												}
																												else {

																												pSVar11.AddWithResize((object)pSVar39);
																												}
																												pSVar10 = this._texture;
																												pSVar25 = pMVar35.Texture;
																												pSVar38 = il2cpp_codegen_object_new((Il2CppClass)typeof(StringSetting));
																												pSVar38 = new StringSetting(pSVar25, 0x7fffffff);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_StringSetting_Add ;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												piVar1 = &pSVar10._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar16 = pSVar10._items;
																												if (pSVar16 == null) break;
																												uVar5 = pSVar10._size;
																												if (uVar5 < (uint)pSVar16.Length) {
																													pSVar10._size = uVar5 + 1;
																													pSVar16[(int)uVar5] = pSVar38;
																												}
																												else {

																												pSVar10.AddWithResize((object)pSVar38);
																												}
																												pSVar8 = this._tilingX;
																												fVar45 = pMVar35.Tiling.x;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._tilingY;
																												fVar45 = pMVar35.Tiling.y;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._offsetX;
																												fVar45 = pMVar35.Offset.x;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._offsetY;
																												fVar45 = pMVar35.Offset.y;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pSVar8 = this._yOffset;
																												fVar45 = pMVar35.YOffset;
																												pSVar36 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												pSVar36 = new FloatSetting(fVar45, -3.4028235e+38, 3.4028235e+38);
																												pMVar21 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add ;
																												if (pSVar8 == null) break;
																												piVar1 = &pSVar8._version;
																												*piVar1 = *piVar1 + 1;
																												pSVar14 = pSVar8._items;
																												if (pSVar14 == null) break;
																												uVar5 = pSVar8._size;
																												if (uVar5 < (uint)pSVar14.Length) {
																													pSVar8._size = uVar5 + 1;
																													pSVar14[(int)uVar5] = pSVar36;
																												}
																												else {

																												pSVar8.AddWithResize((object)pSVar36);
																												}
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												ElementFactory.CreateDefaultLabel(pUVar29, pUVar26, pMVar35.AssetName, 0, 3);
																												pSVar25 = "Remove";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__18);
																												ElementFactory.CreateDefaultButton(pUVar29, pUVar26, pSVar25, 80.0, 28.0, pUVar30);
																												pSVar8 = this._weight;
																												if (pSVar8 == null) break;
																												pUVar44 = &__this_02.fields;
																												pUVar29 = this.SinglePanel;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "Weight";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__19);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 80.0, 30.0, false, null, pUVar30, null, null);
																												pSVar9 = this._advanced;
																												if (pSVar9 == null) break;
																												pUVar29 = this.SinglePanel;
																												pSVar37 = pSVar9.get_Item(pUVar44.index);
																												pSVar25 = "Advanced";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "AdvancedTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__20);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar33, pSVar25, 25.0, 25.0, pUVar30) ;
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 10.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												pSVar9 = this._active;
																												if (pSVar9 == null) break;
																												pSVar37 = pSVar9.get_Item(pUVar44.index);
																												if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = MapEditorInspectPanel.Locale("Active");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__21);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar25, "", 25.0, 25.0, pUVar30);
																												pSVar9 = this._static;
																												if (pSVar9 == null) break;
																												pSVar37 = pSVar9.get_Item(__this_02.index);
																												pSVar25 = MapEditorInspectPanel.Locale("Static");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__22);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar25, "", 25.0, 25.0, pUVar30);
																												pSVar10 = this._collideMode;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												pUVar29 = this.SinglePanel;
																												pSVar38 = pSVar10.get_Item(pUVar44.index);
																												pSVar25 = MapEditorInspectPanel.Locale("CollideMode");
																												pSVar32 = (String[])new string[3];
																												if ((typeof(MapObjectCollideMode)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												if (pSVar32 == null) break;
																												if ((int)pSVar32.Length == 0) goto label_05d6949a;
																												pSVar32[0] = MapObjectCollideMode. Physical;
																												if ((pSVar32.Length & 0xfffffffe) == 0) goto label_05d6949a;
																												pSVar32[1] = MapObjectCollideMode. Region;
																												if ((uint)pSVar32.Length < 3) goto label_05d6949a;
																												pSVar32[2] = MapObjectCollideMode. None;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__23);
																												ElementFactory.CreateDropdownSetting(pUVar29, pUVar26, (BaseSetting)pSVar38, pSVar25, pSVar32, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, pUVar30, null, null);
																												pUVar29 = this.SinglePanel;
																												if (pMVar35.Advanced == false) {
																													pUVar28 = ElementFactory.CreateHorizontalGroup(pUVar29, 6.0, 3) ;
																													if (pUVar28 == null) break;
																													pUVar29 = pUVar28.transform;
																													pSVar8 = this._scaleMin;
																													if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "ScaleMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__30);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 70.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._scaleMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "ScaleMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__31);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 70.0, 30.0, false, null, pUVar30, null, null);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												pSVar8 = this._yawMin;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "YawMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__32);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 70.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._yawMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "YawMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__33);
																												fVar45 = 70.0;
																												}
																												else {
																													if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													pSVar25 = MapEditorInspectPanel.Locale("Scale");
																													ElementFactory.CreateDefaultLabel(pUVar29, pUVar26, pSVar25, 0, 3);
																													pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																													if (pUVar28 == null) break;
																													pUVar29 = pUVar28.transform;
																													pSVar8 = this._scaleXMin;
																													if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "XMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__34);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._scaleXMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "XMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__35);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												pSVar8 = this._scaleYMin;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "YMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__36);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._scaleYMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "YMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__37);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												pSVar8 = this._scaleZMin;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "ZMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__38);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._scaleZMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "ZMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__39);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pUVar29 = this.SinglePanel;
																												pSVar25 = MapEditorInspectPanel.Locale("Rotation");
																												ElementFactory.CreateDefaultLabel(pUVar29, pUVar26, pSVar25, 0, 3);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												pSVar8 = this._rotXMin;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "XMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__40);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._rotXMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "XMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__41);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												pSVar8 = this._rotYMin;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "YMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__42);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._rotYMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "YMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__43);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 == null) break;
																												pUVar29 = pUVar28.transform;
																												pSVar8 = this._rotZMin;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "ZMin";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__44);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._rotZMax;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "ZMax";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__45);
																												fVar45 = 60.0;
																												}
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", fVar45, 30.0, false, null, pUVar30, null, null);
																												if (pMVar35.Advanced != false) {
																													pSVar8 = this._yOffset;
																													if (pSVar8 == null) break;
																												pUVar29 = this.SinglePanel;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												pSVar25 = "YOffset";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar33 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pSVar25 = "YOffsetTooltip";
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = UIManager.GetLocale("MapEditor", "Brush", pSVar25, "", "");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__24);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar33, pSVar25, 80.0, 30.0, false, null, pUVar30, null, null);
																												pSVar10 = this._collideWith;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												pUVar29 = this.SinglePanel;
																												pSVar38 = pSVar10.get_Item(pUVar44.index);
																												if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = MapEditorInspectPanel.Locale("CollideWith");
																												pSVar32 = (String[])new string[8];
																												if ((typeof(MapObjectCollideWith)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												if (pSVar32 == null) break;
																												if ((int)pSVar32.Length == 0) goto label_05d6949a;
																												pSVar32[0] = MapObjectCollideWith. Entities;
																												if ((pSVar32.Length & 0xfffffffe) == 0) goto label_05d6949a;
																												pSVar32[1] = MapObjectCollideWith. Characters;
																												if ((uint)pSVar32.Length < 3) goto label_05d6949a;
																												pSVar32[2] = MapObjectCollideWith. Titans;
																												if ((pSVar32.Length & 0xfffffffc) == 0) goto label_05d6949a;
																												pSVar32[3] = MapObjectCollideWith. Humans;
																												if ((uint)pSVar32.Length < 5) goto label_05d6949a;
																												pSVar32[4] = MapObjectCollideWith. Projectiles;
																												if ((uint)pSVar32.Length < 6) goto label_05d6949a;
																												pSVar32[5] = MapObjectCollideWith. Hitboxes;
																												if ((uint)pSVar32.Length < 7) goto label_05d6949a;
																												pSVar32[6] = MapObjectCollideWith. MapObjects;
																												if ((pSVar32.Length & 0xfffffff8) == 0) goto label_05d6949a;
																												pSVar32[7] = MapObjectCollideWith. All;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__25);
																												ElementFactory.CreateDropdownSetting(pUVar29, pUVar26, (BaseSetting)pSVar38, pSVar25, pSVar32, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, pUVar30, null, null);
																												pSVar10 = this._physicsMaterial;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												pUVar29 = this.SinglePanel;
																												pSVar38 = pSVar10.get_Item(pUVar44.index);
																												pSVar25 = MapEditorInspectPanel.Locale("PhysicsMaterial");
																												pSVar32 = (String[])new string[2];
																												if ((typeof(MapObjectPhysicsMaterial)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												if (pSVar32 == null) break;
																												if ((int)pSVar32.Length == 0) goto label_05d6949a;
																												pSVar32[0] = typeof(MapObjectPhysicsMaterial). static_fields.Default;
																												local_50 = pSVar25;
																												if ((pSVar32.Length & 0xfffffffe) == 0) goto label_05d6949a;
																												pSVar32[1] = typeof(MapObjectPhysicsMaterial). static_fields.Ice;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__26);
																												ElementFactory.CreateDropdownSetting(pUVar29, pUVar26, (BaseSetting)pSVar38, local_50, pSVar32, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, pUVar30, null, null);
																												pSVar9 = this._visible;
																												if (pSVar9 == null) break;
																												pUVar29 = this.SinglePanel;
																												pSVar37 = pSVar9.get_Item(__this_02.index);
																												pSVar25 = MapEditorInspectPanel.Locale("Visible");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__27);
																												ElementFactory.CreateToggleSetting(pUVar29, pUVar26, (BaseSetting)pSVar37, pSVar25, "", 25.0, 25.0, pUVar30);
																												}
																												pSVar10 = this._shader;
																												if (pSVar10 ==(System_Collections_Generic_List_StringSetting__o * )0x0) break;
																												pUVar29 = this.SinglePanel;
																												pSVar38 = pSVar10.get_Item(pUVar44.index);
																												if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = MapEditorInspectPanel.Locale("Shader");
																												pSVar32 = (String[])new string[6];
																												if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												if (pSVar32 == null) break;
																												if ((int)pSVar32.Length == 0) goto label_05d6949a;
																												pSVar32[0] = MapObjectShader. Default;
																												if ((pSVar32.Length & 0xfffffffe) == 0) goto label_05d6949a;
																												pSVar32[1] = MapObjectShader.Basic ;
																												if ((uint)pSVar32.Length < 3) goto label_05d6949a;
																												pSVar32[2] = MapObjectShader. Transparent;
																												if ((pSVar32.Length & 0xfffffffc) == 0) goto label_05d6949a;
																												pSVar32[3] = MapObjectShader. Reflective;
																												if ((uint)pSVar32.Length < 5) goto label_05d6949a;
																												pSVar32[4] = MapObjectShader. DefaultNoTint;
																												if ((uint)pSVar32.Length < 6) goto label_05d6949a;
																												pSVar32[5] = MapObjectShader. DefaultTiled;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__28);
																												ElementFactory.CreateDropdownSetting(pUVar29, pUVar26, (BaseSetting)pSVar38, pSVar25, pSVar32, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, pUVar30, null, null);
																												bVar22 = (pMVar35.Shader != typeof(MapObjectShader). static_fields.DefaultNoTint);
																												if (bVar22) {
																													pSVar11 = this._color;
																													if (pSVar11 ==null) break;
																													pUVar29 = this.SinglePanel;
																													pSVar39 = pSVar11.get_Item(pUVar44.index);
																												if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = MapEditorInspectPanel.Locale("Color");
																												pUVar19 = this._menu;
																												if (pUVar19 == null) break;
																												pUVar20 = pUVar19.ColorPickPopup;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__29);
																												ElementFactory.CreateColorSetting(pUVar29, pUVar26, (BaseSetting)pSVar39, pSVar25, pUVar20, "", 90.0, 25.0, pUVar30);
																												}
																												pSVar25 = pMVar35.Shader;
																												if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												bVar22 = (pSVar25 == MapObjectShader. DefaultTiled);
																												if (bVar22) {
	label_05d68bc8: ;
																													pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																													if (pUVar28 == null) break;
																													pUVar29 = pUVar28.transform;
																													pSVar8 = this._tilingX;
																													if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(pUVar44.index);
																												if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = MapEditorInspectPanel.Locale("TilingX");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__46);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._tilingY;
																												if (pSVar8 == null) break;
																												pSVar36 = pSVar8.get_Item(__this_02.index);
																												pSVar25 = MapEditorInspectPanel.Locale("TilingY");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__47);
	label_05d6937d: ;
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												}
																												else {
																													pSVar25 = pMVar35.Shader;
																													if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													bVar22 = MapObjectShader.IsLegacyShader(pSVar25);
																													if (bVar22) goto label_05d68bc8;
																													pSVar25 = pMVar35.Shader;
																													if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													bVar22 = (pSVar25 == MapObjectShader.Basic);
																												if (bVar22) {
	label_05d68e30: ;
																													pSVar25 = pMVar35.Shader;
																													if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													bVar22 = (pSVar25 == MapObjectShader.Reflective);
																												if (bVar22) {
																													pSVar11 = this._reflectColor;
																													if (pSVar11 ==null) break;
																													pUVar29 = this.SinglePanel;
																													pSVar39 = pSVar11.get_Item(pUVar44.index);
																												if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar25 = MapEditorInspectPanel.Locale("ReflectColor");
																												pUVar19 = this._menu;
																												if (pUVar19 == null) break;
																												pUVar20 = pUVar19.ColorPickPopup;
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__48);
																												ElementFactory.CreateColorSetting(pUVar29, pUVar26, (BaseSetting)pSVar39, pSVar25, pUVar20, "", 90.0, 25.0, pUVar30);
																												}
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 10.0, 3);
																												if (pUVar28 != null) {
																													pUVar29 = pUVar28.transform;
																													if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													pSVar25 = MapEditorInspectPanel.Locale("Texture");
																													pUVar28 = ElementFactory.CreateDefaultLabel(pUVar29, pUVar26, pSVar25, 0, 3);
																													if ((pUVar28 != null) &&(pUVar40 = pUVar28.GetComponent<LayoutElement>(), pUVar40 != null)) {
																													(*(pUVar40.klass.vtable)._36_set_preferredWidth. methodPtr)(pUVar40,80.0,(pUVar40.klass.vtable). _36_set_preferredWidth.method);
																													pSVar25 = pMVar35.Texture;
																													pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__49);
																												ElementFactory.CreateDefaultButton(pUVar29, pUVar26, pSVar25, 0.0, 0.0, pUVar30);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 != null) {
																													pUVar29 = pUVar28.transform;
																													pSVar8 = this._tilingX;
																													if (pSVar8 != null) {
																													pSVar36 = pSVar8.get_Item(__this_02.index);
																												pSVar25 = MapEditorInspectPanel.Locale("TilingX");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__50);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._tilingY;
																												if (pSVar8 != null) {
																													pSVar36 = pSVar8.get_Item(__this_02.index);
																												pSVar25 = MapEditorInspectPanel.Locale("TilingY");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__51);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pUVar28 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 6.0, 3);
																												if (pUVar28 != null) {
																													pUVar29 = pUVar28.transform;
																													pSVar8 = this._offsetX;
																													if (pSVar8 != null) {
																													pSVar36 = pSVar8.get_Item(__this_02.index);
																												pSVar25 = MapEditorInspectPanel.Locale("OffsetX");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__52);
																												ElementFactory.CreateInputSetting(pUVar29, pUVar26, (BaseSetting)pSVar36, pSVar25, "", 60.0, 30.0, false, null, pUVar30, null, null);
																												pSVar8 = this._offsetY;
																												if (pSVar8 != null) {
																													pSVar36 = pSVar8.get_Item(__this_02.index);
																												pSVar25 = MapEditorInspectPanel.Locale("OffsetY");
																												pUVar30 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												pUVar30 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__53);
																												goto label_05d6937d;
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												break;
																												}
																												pSVar25 = pMVar35.Shader;
																												if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												bVar22 = (pSVar25 == MapObjectShader. Transparent);
																												if (bVar22) goto label_05d68e30;
																												pSVar25 = pMVar35.Shader;
																												if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												bVar22 = (pSVar25 == MapObjectShader.Reflective);
																												if (bVar22) goto label_05d68e30;
																												}
																												this.CreateHorizontalDivider(this.SinglePanel, 1.0);
																												uVar41 = (ulong)((int)local_60 + 1);
																												pSVar34 = local_68.Entries;
																												pMVar42 = local_68;
																												if (pSVar34 ==(List<BrushEntry>)0x0) break;
																												}
																												}
																												}
																												goto label_05d693d0;
																												}
																												}
	label_05d6949a: ;
																												throw new IndexOutOfRangeException();
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
	label_05d693d0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051C4")]
	[Address(RVA = "0x5C697E0", Offset = "0x5C687E0", VA = "0x5C697E0")]
	private static string Locale(string item)
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("MapEditor", "Brush", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x60051C5")]
	[Address(RVA = "0x5C69870", Offset = "0x5C68870", VA = "0x5C69870")]
	private void OnRadiusChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnRadiusChanged): clean
		MapEditorGameManager pGVar1;
		FloatSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._radius, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SetRadius(pSVar2._value);
		return;
	}

	[Token(Token = "0x60051C6")]
	[Address(RVA = "0x5C698D0", Offset = "0x5C688D0", VA = "0x5C698D0")]
	private void OnCountChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnCountChanged): clean
		MapEditorGameManager pGVar1;
		IntSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._count, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SetCount(pSVar2._value);
		return;
	}

	[Token(Token = "0x60051C7")]
	[Address(RVA = "0x5C69930", Offset = "0x5C68930", VA = "0x5C69930")]
	private void OnRandomizeChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnRandomizeChanged): clean
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush pMVar3;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._randomize, pSVar2 == null)) ||(pMVar3 = pGVar1.Brush, pMVar3 == null)) {
			throw new NullReferenceException();
		}
		pMVar3.RandomizeEachPlacement = pSVar2._value;
		return;
	}

	[Token(Token = "0x60051C8")]
	[Address(RVA = "0x5C69990", Offset = "0x5C68990", VA = "0x5C69990")]
	private void OnModeChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnModeChanged): clean
		MapEditorGameManager pGVar1;
		StringSetting pSVar2;
		MapEditorBrush __this_00;
		bool bVar3;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(pSVar2 = this._mode, pSVar2 != null)) {
			__this_00 = pGVar1.Brush;
			bVar3 = (pSVar2._value == "Grid");
			if (__this_00 != null) {
				if (__this_00.Mode == (uint)bVar3) {
					return;
				}
				__this_00.Mode = (uint)bVar3;
				__this_00.RegenerateGhosts();
				this.Rebuild();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051C9")]
	[Address(RVA = "0x5C69A30", Offset = "0x5C68A30", VA = "0x5C69A30")]
	private void OnFlatPlaneChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnFlatPlaneChanged): clean
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._flatPlane, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.FlatPlane = pSVar2._value;
		__this_00.RegenerateGhosts();
		return;
	}

	[Token(Token = "0x60051CA")]
	[Address(RVA = "0x5C69A90", Offset = "0x5C68A90", VA = "0x5C69A90")]
	private void OnAlignToSurfaceChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnAlignToSurfaceChanged): clean
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._alignToSurface, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SetAlignToSurface(pSVar2._value);
		return;
	}

	[Token(Token = "0x60051CB")]
	[Address(RVA = "0x5C69AF0", Offset = "0x5C68AF0", VA = "0x5C69AF0")]
	private void OnGridChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnGridChanged): clean
		MapEditorGameManager pGVar1;
		IntSetting pSVar2;
		IntSetting pSVar3;
		IntSetting pSVar4;
		MapEditorBrush __this_00;
		FloatSetting pSVar5;

		pGVar1 = this._gameManager;
		if ((((pGVar1 != null) &&(pSVar2 = this._gridX, pSVar2 != null)) &&(pSVar3 = this._gridY, pSVar3 != null)) &&((pSVar4 = this._gridZ, pSVar4 != null &&(__this_00 = pGVar1.Brush, __this_00 != null)))) {
			__this_00.SetGrid(pSVar2._value, pSVar3._value, pSVar4._value);
			pSVar2 = this._gridX;
			if (pSVar2 != null) {
				pSVar2.Value = __this_00.GridX;
				pSVar2 = this._gridY;
				if (pSVar2 != null) {
					pSVar2.Value = __this_00.GridY;
					pSVar2 = this._gridZ;
					if (pSVar2 != null) {
						pSVar2.Value = __this_00.GridZ;
						pSVar5 = this._spacingX;
						if (pSVar5 != null) {
							__this_00.SpacingX = pSVar5._value;
							pSVar5 = this._spacingY;
							if (pSVar5 != null) {
								__this_00.SpacingY = pSVar5._value;
								pSVar5 = this._spacingZ;
								if (pSVar5 != null) {
									__this_00.SpacingZ = pSVar5._value;
									__this_00.RegenerateGhosts();
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051CC")]
	[Address(RVA = "0x5C69C40", Offset = "0x5C68C40", VA = "0x5C69C40")]
	private void OnBoundsSnapChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnBoundsSnapChanged): clean
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._boundsSnap, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.BoundsSnap = pSVar2._value;
		__this_00.RegenerateGhosts();
		return;
	}

	[Token(Token = "0x60051CD")]
	[Address(RVA = "0x5C69CA0", Offset = "0x5C68CA0", VA = "0x5C69CA0")]
	private void OnCurveAxisChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnCurveAxisChanged): clean
		MapEditorGameManager pGVar1;
		StringSetting pSVar2;
		MapEditorBrush __this_00;
		bool bVar3;
		int iVar4;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(pSVar2 = this._curveAxis, pSVar2 != null)) {
			__this_00 = pGVar1.Brush;
			bVar3 = (pSVar2._value == "X");
			iVar4 = 1;
			if (!bVar3) {
				pSVar2 = this._curveAxis;
				if (pSVar2 == null) goto label_05d69d9f;
				bVar3 = (pSVar2._value == "Y");
				iVar4 = 2;
				if (!bVar3) {
					pSVar2 = this._curveAxis;
					if (pSVar2 == null) goto label_05d69d9f;
					bVar3 = (pSVar2._value == "Z");
					iVar4 = (uint)bVar3 * 3;
				}
			}
			if (__this_00 != null) {
				__this_00.CurveAxis = iVar4;
				__this_00.RegenerateGhosts();
				return;
			}
		}
	label_05d69d9f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051CE")]
	[Address(RVA = "0x5C69DB0", Offset = "0x5C68DB0", VA = "0x5C69DB0")]
	private void OnCurveAmountChanged()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnCurveAmountChanged): clean
		MapEditorGameManager pGVar1;
		FloatSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._curveAmount, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CurveAmount = pSVar2._value;
		__this_00.RegenerateGhosts();
		return;
	}

	[Token(Token = "0x60051CF")]
	[Address(RVA = "0x5C69E10", Offset = "0x5C68E10", VA = "0x5C69E10")]
	private void OnAddAsset()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnAddAsset): clean
		MapEditorGameManager pGVar1;
		MapEditorBrush pMVar2;
		MapEditorMenu pUVar3;
		MapEditorAddObjectPopup pUVar4;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(pMVar2 = pGVar1.Brush, pMVar2 != null)) {
			pMVar2.AssetSelectMode = true;
			pUVar3 = this._menu;
			if ((pUVar3 != null) &&(pUVar4 = pUVar3.AddObjectPopup, pUVar4 != null)) {
				pUVar4.Show();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051D0")]
	[Address(RVA = "0x5C69E60", Offset = "0x5C68E60", VA = "0x5C69E60")]
	private void OnReroll()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnReroll): clean
		MapEditorGameManager pGVar1;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RegenerateGhosts();
		return;
	}

	[Token(Token = "0x60051D1")]
	[Address(RVA = "0x5C69E90", Offset = "0x5C68E90", VA = "0x5C69E90")]
	private void OnRemove(int index)
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnRemove): clean
		MapEditorGameManager pGVar1;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RemoveEntry(index);
		this.Rebuild();
		return;
	}

	[Token(Token = "0x60051D2")]
	[Address(RVA = "0x5C69ED0", Offset = "0x5C68ED0", VA = "0x5C69ED0")]
	private void OnEntryChanged(int index)
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnEntryChanged): clean
		float fVar1;
		MapEditorGameManager pGVar2;
		MapEditorBrush __this_00;
		List<BrushEntry> __this_01;
		List<FloatSetting> pSVar3;
		List<BoolSetting> pSVar4;
		List<StringSetting> pSVar5;
		List<ColorSetting> pSVar6;
		BrushEntry pMVar7;
		FloatSetting pSVar8;
		BoolSetting pSVar9;
		StringSetting pSVar10;
		ColorSetting pSVar11;
		float fVar12;

		pGVar2 = this._gameManager;
		if (((pGVar2 != null) &&(__this_00 = pGVar2.Brush, __this_00 != null)) &&(__this_01 = __this_00.Entries, __this_01 != null)) {
			if (__this_01._size <= index) {
				return;
			}
			pMVar7 = __this_01.get_Item(index);
			pSVar3 = this._weight;
			if (pSVar3 != null) {
				pSVar8 = pSVar3.get_Item(index);
				if ((pSVar8 != null) && (pMVar7 != null)) {
					fVar1 = pSVar8._value;
					fVar12 = 0.0;
					if (0.0 <= fVar1) {
						fVar12 = fVar1;
					}
					pMVar7.Weight = fVar12;
					pSVar3 = this._scaleMin;
					if (pSVar3 != null) {
						pSVar8 = pSVar3.get_Item(index);
						if (pSVar8 != null) {
							pMVar7.ScaleMin = pSVar8._value;
							pSVar3 = this._scaleMax;
							if (pSVar3 != null) {
								pSVar8 = pSVar3.get_Item(index);
								if (pSVar8 != null) {
									pMVar7.ScaleMax = pSVar8._value;
									pSVar3 = this._yawMin;
									if (pSVar3 != null) {
										pSVar8 = pSVar3.get_Item(index);
										if (pSVar8 != null) {
											pMVar7.YawMin = pSVar8._value;
											pSVar3 = this._yawMax;
											if (pSVar3 != null) {
												pSVar8 = pSVar3.get_Item(index);
												if (pSVar8 != null) {
													pMVar7.YawMax = pSVar8._value;
													pSVar3 = this._scaleXMin;
													if (pSVar3 != null) {
														pSVar8 = pSVar3.get_Item(index);
														if (pSVar8 != null) {
															pMVar7.ScaleXMin = pSVar8._value;
															pSVar3 = this._scaleXMax;
															if (pSVar3 != null) {
																pSVar8 = pSVar3.get_Item(index);
																if (pSVar8 != null) {
																	pMVar7.ScaleXMax = pSVar8._value;
																	pSVar3 = this._scaleYMin;
																	if (pSVar3 != null) {
																		pSVar8 = pSVar3.get_Item(index);
																		if (pSVar8 != null) {
																			pMVar7.ScaleYMin = pSVar8._value;
																			pSVar3 = this._scaleYMax;
																			if (pSVar3 != null) {
																				pSVar8 = pSVar3.get_Item(index);
																				if (pSVar8 != null) {
																					pMVar7.ScaleYMax = pSVar8._value;
																					pSVar3 = this._scaleZMin;
																					if (pSVar3 != null) {
																						pSVar8 = pSVar3.get_Item(index);
																						if (pSVar8 != null) {
																							pMVar7.ScaleZMin = pSVar8._value;
																							pSVar3 = this._scaleZMax;
																							if (pSVar3 != (List<FloatSetting>)0x0) {
																								pSVar8 = pSVar3.get_Item(index);
																								if (pSVar8 != null) {
																									pMVar7.ScaleZMax = pSVar8._value;
																									pSVar3 = this._rotXMin;
																									if (pSVar3 != null) {
																										pSVar8 = pSVar3.get_Item(index);
																										if (pSVar8 != null) {
																											pMVar7.RotXMin = pSVar8._value;
																											pSVar3 = this._rotXMax;
																											if (pSVar3 != null) {
																												pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													pMVar7.RotXMax = pSVar8._value;
																													pSVar3 = this._rotYMin;
																													if (pSVar3 != null) {
																													pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													pMVar7.RotYMin = pSVar8._value;
																													pSVar3 = this._rotYMax;
																													if (pSVar3 != null) {
																													pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													pMVar7.RotYMax = pSVar8._value;
																													pSVar3 = this._rotZMin;
																													if (pSVar3 != null) {
																													pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													pMVar7.RotZMin = pSVar8._value;
																													pSVar3 = this._rotZMax;
																													if (pSVar3 != null) {
																													pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													pMVar7.RotZMax = pSVar8._value;
																													pSVar4 = this._active;
																													if (pSVar4 != null) {
																													pSVar9 = pSVar4.get_Item(index);
																												if (pSVar9 != null) {
																													pMVar7.Active = pSVar9._value;
																													pSVar4 = this._static;
																													if (pSVar4 != null) {
																													pSVar9 = pSVar4.get_Item(index);
																												if (pSVar9 != null) {
																													pMVar7.Static = pSVar9._value;
																													pSVar4 = this._visible;
																													if (pSVar4 != null) {
																													pSVar9 = pSVar4.get_Item(index);
																												if (pSVar9 != null) {
																													pMVar7.Visible = pSVar9._value;
																													pSVar5 = this._collideMode;
																													if (pSVar5 != null) {
																													pSVar10 = pSVar5.get_Item(index);
																												if (pSVar10 != null) {
																													pMVar7.CollideMode =pSVar10._value;
																													pSVar5 = this._collideWith;
																													if (pSVar5 != null) {
																													pSVar10 = pSVar5.get_Item(index);
																												if (pSVar10 != null) {
																													pMVar7.CollideWith =pSVar10._value;
																													pSVar5 = this._physicsMaterial;
																													if (pSVar5 != null) {
																													pSVar10 = pSVar5.get_Item(index);
																												if (pSVar10 != null) {
																													pMVar7.PhysicsMaterial =pSVar10._value;
																													pSVar5 = this._shader;
																													if (pSVar5 != null) {
																													pSVar10 = pSVar5.get_Item(index);
																												if (pSVar10 != null) {
																													pMVar7.Shader = pSVar10._value;
																													pSVar6 = this._color;
																													if (pSVar6 != null) {
																													pSVar11 = pSVar6.get_Item(index);
																												if (pSVar11 != null) {
																													pMVar7.Color = pSVar11._value;
																													pSVar6 = this._reflectColor;
																													if (pSVar6 != null) {
																													pSVar11 = pSVar6.get_Item(index);
																												if (pSVar11 != null) {
																													pMVar7.ReflectColor =pSVar11._value;
																													pSVar5 = this._texture;
																													if (pSVar5 != null) {
																													pSVar10 = pSVar5.get_Item(index);
																												if (pSVar10 != null) {
																													pMVar7.Texture = pSVar10._value;
																													pSVar3 = this._tilingX;
																													if (pSVar3 != null) {
																													pSVar8 = pSVar3.get_Item(index);
																												if ((pSVar8 != null) &&(pSVar3 = this._tilingY, pSVar3 != null)) {
																													fVar1 = pSVar8._value;
																													pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													fVar12 = pSVar8._value;
																													pMVar7.Tiling.x = fVar1;
																													pMVar7.Tiling.y = fVar12;
																													pSVar3 = this._offsetX;
																													if (pSVar3 != null) {
																													pSVar8 = pSVar3.get_Item(index);
																												if ((pSVar8 != null) &&(pSVar3 = this._offsetY, pSVar3 != null)) {
																													fVar1 = pSVar8._value;
																													pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													fVar12 = pSVar8._value;
																													pMVar7.Offset.x = fVar1;
																													pMVar7.Offset.y = fVar12;
																													pSVar3 = this._yOffset;
																													if (pSVar3 != null) {
																													pSVar8 = pSVar3.get_Item(index);
																												if (pSVar8 != null) {
																													pMVar7.YOffset = pSVar8._value;
																													__this_00.RegenerateGhosts();
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051D3")]
	[Address(RVA = "0x5C6A630", Offset = "0x5C69630", VA = "0x5C6A630")]
	private void OnShaderChanged(int index)
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnShaderChanged): clean
		MapEditorGameManager pGVar1;
		MapEditorBrush __this_00;
		List<BrushEntry> pSVar2;
		List<StringSetting> pSVar3;
		String a;
		bool bVar4;
		BrushEntry pMVar5;
		StringSetting pSVar6;
		MethodInfo method_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 != null) &&(__this_00 = pGVar1.Brush, __this_00 != null)) &&(pSVar2 = __this_00.Entries, pSVar2 != null)) {
			if (pSVar2._size <= index) {
				return;
			}
			pMVar5 = pSVar2.get_Item(index);
			if ((pMVar5 != null) &&(pSVar3 = this._shader, pSVar3 != null)) {
				a = pMVar5.Shader;
				pSVar6 = pSVar3.get_Item(index);
				if (pSVar6 != null) {
					bVar4 = (a == pSVar6._value);
					if (bVar4) {
						return;
					}
					pSVar2 = __this_00.Entries;
					if (pSVar2 != null) {
						pMVar5 = pSVar2.get_Item(index);
						pSVar3 = this._shader;
						if (((pSVar3 != null) &&(pSVar6 = pSVar3.get_Item(index), pSVar6 != null)) && (pMVar5 != null)) {
							method_00 = (MethodInfo)pSVar6._value;
							pMVar5.Shader = (String)method_00;
							this.Rebuild();
							__this_00.RegenerateGhosts();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051D4")]
	[Address(RVA = "0x5C6A7A0", Offset = "0x5C697A0", VA = "0x5C6A7A0")]
	private void OnPickTexture(int index)
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnPickTexture): 1 lines keep C-only constructs
		MapEditorMenu pUVar1;
		MapEditorTexturePopup pUVar2;
		MapEditorBrushPanel.c__DisplayClass90_0 __this_00;
		Action<string> __this_01;

		__this_00 = new MapEditorBrushPanel.c__DisplayClass90_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.index = index;
			pUVar1 = this._menu;
			__this_01 = new Action<string>((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass90_0_OnPickTexture_b__0);
			if (pUVar1 != null) {
				pUVar1.TexturePopupTarget = __this_01;
				pUVar1 = this._menu;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.TexturePopup, pUVar2 != null)) {
					pUVar2.Show();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051D5")]
	[Address(RVA = "0x5C6A8B0", Offset = "0x5C698B0", VA = "0x5C6A8B0")]
	private void OnAdvancedChanged(int index)
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$OnAdvancedChanged): clean
		bool bVar1;
		MapEditorGameManager pGVar2;
		MapEditorBrush __this_00;
		List<BrushEntry> pSVar3;
		List<BoolSetting> pSVar4;
		BrushEntry pMVar5;
		BoolSetting pSVar6;

		pGVar2 = this._gameManager;
		if (((pGVar2 != null) &&(__this_00 = pGVar2.Brush, __this_00 != null)) &&(pSVar3 = __this_00.Entries, pSVar3 != null)) {
			if (pSVar3._size <= index) {
				return;
			}
			pMVar5 = pSVar3.get_Item(index);
			if ((pMVar5 != null) &&(pSVar4 = this._advanced, pSVar4 != null)) {
				bVar1 = pMVar5.Advanced;
				pSVar6 = pSVar4.get_Item(index);
				if (pSVar6 != null) {
					if (bVar1 == pSVar6._value) {
						return;
					}
					pSVar3 = __this_00.Entries;
					if (pSVar3 != null) {
						pMVar5 = pSVar3.get_Item(index);
						pSVar4 = this._advanced;
						if (((pSVar4 != null) &&(pSVar6 = pSVar4.get_Item(index), pSVar6 != null)) && (pMVar5 != null)) {
							pMVar5.Advanced = pSVar6._value;
							this.Rebuild();
							__this_00.RegenerateGhosts();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051D6")]
	[Address(RVA = "0x5C6AA00", Offset = "0x5C69A00", VA = "0x5C6AA00")]
	public MapEditorBrushPanel()
	{
		// Lifted from source/cpp/UI/MapEditorBrushPanel.c (UI.MapEditorBrushPanel$$.ctor): 1 lines keep C-only constructs
		FloatSetting pSVar1;
		IntSetting pSVar2;
		BoolSetting pSVar3;
		StringSetting pSVar4;
		List<FloatSetting> pSVar5;
		List<BoolSetting> pSVar6;
		List<StringSetting> pSVar7;
		List<ColorSetting> pSVar8;

		if (Il2CppMethodInitialized_07547f96 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor) ;
			Il2CppMethodInitialized_07547f96 = true;
		}
		pSVar1 = new FloatSetting(10.0, -3.4028235e+38, 3.4028235e+38);
		this._radius = pSVar1;
		pSVar2 = new IntSetting(8, -0x80000000, 0x7fffffff);
		this._count = pSVar2;
		pSVar3 = new BoolSetting(true);
		this._randomize = pSVar3;
		pSVar4 = new StringSetting("Scatter", 0x7fffffff);
		this._mode = pSVar4;
		pSVar2 = new IntSetting(3, -0x80000000, 0x7fffffff);
		this._gridX = pSVar2;
		pSVar2 = new IntSetting(1, -0x80000000, 0x7fffffff);
		this._gridY = pSVar2;
		pSVar2 = new IntSetting(3, -0x80000000, 0x7fffffff);
		this._gridZ = pSVar2;
		pSVar1 = new FloatSetting(5.0, -3.4028235e+38, 3.4028235e+38);
		this._spacingX = pSVar1;
		pSVar1 = new FloatSetting(5.0, -3.4028235e+38, 3.4028235e+38);
		this._spacingY = pSVar1;
		pSVar1 = new FloatSetting(5.0, -3.4028235e+38, 3.4028235e+38);
		this._spacingZ = pSVar1;
		pSVar3 = new BoolSetting(false);
		this._boundsSnap = pSVar3;
		pSVar4 = new StringSetting("None", 0x7fffffff);
		this._curveAxis = pSVar4;
		pSVar1 = new FloatSetting(0.0, -3.4028235e+38, 3.4028235e+38);
		this._curveAmount = pSVar1;
		pSVar3 = new BoolSetting(false);
		this._flatPlane = pSVar3;
		pSVar3 = new BoolSetting(false);
		this._alignToSurface = pSVar3;
		pSVar5 = new List<FloatSetting>();
		this._weight = pSVar5;
		pSVar6 = new List<BoolSetting>();
		this._advanced = pSVar6;
		pSVar5 = new List<FloatSetting>();
		this._scaleMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._scaleMax = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._yawMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._yawMax = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._scaleXMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._scaleXMax = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._scaleYMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._scaleYMax = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._scaleZMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._scaleZMax = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._rotXMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._rotXMax = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._rotYMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._rotYMax = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._rotZMin = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._rotZMax = pSVar5;
		pSVar6 = new List<BoolSetting>();
		this._active = pSVar6;
		pSVar6 = new List<BoolSetting>();
		this._static = pSVar6;
		pSVar6 = new List<BoolSetting>();
		this._visible = pSVar6;
		pSVar7 = new List<StringSetting>();
		this._collideMode = pSVar7;
		pSVar7 = new List<StringSetting>();
		this._collideWith = pSVar7;
		pSVar7 = new List<StringSetting>();
		this._physicsMaterial = pSVar7;
		pSVar7 = new List<StringSetting>();
		this._shader = pSVar7;
		pSVar8 = new List<ColorSetting>();
		this._color = pSVar8;
		pSVar8 = new List<ColorSetting>();
		this._reflectColor = pSVar8;
		pSVar7 = new List<StringSetting>();
		this._texture = pSVar7;
		pSVar5 = new List<FloatSetting>();
		this._tilingX = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._tilingY = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._offsetX = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._offsetY = pSVar5;
		pSVar5 = new List<FloatSetting>();
		this._yOffset = pSVar5;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorBrushPanel.c.

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_0: clean
	private void Rebuild_b__73_0()
	{
		MapEditorMenu pUVar1;
		MapEditorTopPanel __this_00;

		pUVar1 = this._menu;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._topPanel, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseBrushTool();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_1: clean
	private void Rebuild_b__73_1()
	{
		this.OnModeChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_2: clean
	private void Rebuild_b__73_2()
	{
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._flatPlane, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.FlatPlane = pSVar2._value;
		__this_00.RegenerateGhosts();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_3: clean
	private void Rebuild_b__73_3()
	{
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._alignToSurface, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SetAlignToSurface(pSVar2._value);
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_9: clean
	private void Rebuild_b__73_9()
	{
		this.OnGridChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_10: clean
	private void Rebuild_b__73_10()
	{
		this.OnGridChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_11: clean
	private void Rebuild_b__73_11()
	{
		this.OnGridChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_12: clean
	private void Rebuild_b__73_12()
	{
		this.OnGridChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_13: clean
	private void Rebuild_b__73_13()
	{
		this.OnGridChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_14: clean
	private void Rebuild_b__73_14()
	{
		this.OnGridChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_15: clean
	private void Rebuild_b__73_15()
	{
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._boundsSnap, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.BoundsSnap = pSVar2._value;
		__this_00.RegenerateGhosts();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_16: clean
	private void Rebuild_b__73_16()
	{
		this.OnCurveAxisChanged();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_17: clean
	private void Rebuild_b__73_17()
	{
		MapEditorGameManager pGVar1;
		FloatSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._curveAmount, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CurveAmount = pSVar2._value;
		__this_00.RegenerateGhosts();
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_4: clean
	private void Rebuild_b__73_4()
	{
		MapEditorGameManager pGVar1;
		FloatSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._radius, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SetRadius(pSVar2._value);
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_5: clean
	private void Rebuild_b__73_5()
	{
		MapEditorGameManager pGVar1;
		IntSetting pSVar2;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._count, pSVar2 == null)) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SetCount(pSVar2._value);
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_6: clean
	private void Rebuild_b__73_6()
	{
		MapEditorGameManager pGVar1;
		BoolSetting pSVar2;
		MapEditorBrush pMVar3;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._randomize, pSVar2 == null)) ||(pMVar3 = pGVar1.Brush, pMVar3 == null)) {
			throw new NullReferenceException();
		}
		pMVar3.RandomizeEachPlacement = pSVar2._value;
		return;
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_7: clean
	private void Rebuild_b__73_7()
	{
		MapEditorGameManager pGVar1;
		MapEditorBrush pMVar2;
		MapEditorMenu pUVar3;
		MapEditorAddObjectPopup pUVar4;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(pMVar2 = pGVar1.Brush, pMVar2 != null)) {
			pMVar2.AssetSelectMode = true;
			pUVar3 = this._menu;
			if ((pUVar3 != null) &&(pUVar4 = pUVar3.AddObjectPopup, pUVar4 != null)) {
				pUVar4.Show();
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorBrushPanel$$<Rebuild>b__73_8: clean
	private void Rebuild_b__73_8()
	{
		MapEditorGameManager pGVar1;
		MapEditorBrush __this_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Brush, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RegenerateGhosts();
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$.ctor: clean
	private void c__DisplayClass73_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__18: clean
	private void c__DisplayClass73_0__Rebuild_b__18()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnRemove(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__19: clean
	private void c__DisplayClass73_0__Rebuild_b__19()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__20: clean
	private void c__DisplayClass73_0__Rebuild_b__20()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnAdvancedChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__21: clean
	private void c__DisplayClass73_0__Rebuild_b__21()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__22: clean
	private void c__DisplayClass73_0__Rebuild_b__22()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__23: clean
	private void c__DisplayClass73_0__Rebuild_b__23()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__30: clean
	private void c__DisplayClass73_0__Rebuild_b__30()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__31: clean
	private void c__DisplayClass73_0__Rebuild_b__31()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__32: clean
	private void c__DisplayClass73_0__Rebuild_b__32()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__33: clean
	private void c__DisplayClass73_0__Rebuild_b__33()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__34: clean
	private void c__DisplayClass73_0__Rebuild_b__34()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__35: clean
	private void c__DisplayClass73_0__Rebuild_b__35()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__36: clean
	private void c__DisplayClass73_0__Rebuild_b__36()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__37: clean
	private void c__DisplayClass73_0__Rebuild_b__37()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__38: clean
	private void c__DisplayClass73_0__Rebuild_b__38()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__39: clean
	private void c__DisplayClass73_0__Rebuild_b__39()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__40: clean
	private void c__DisplayClass73_0__Rebuild_b__40()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__41: clean
	private void c__DisplayClass73_0__Rebuild_b__41()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__42: clean
	private void c__DisplayClass73_0__Rebuild_b__42()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__43: clean
	private void c__DisplayClass73_0__Rebuild_b__43()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__44: clean
	private void c__DisplayClass73_0__Rebuild_b__44()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__45: clean
	private void c__DisplayClass73_0__Rebuild_b__45()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__24: clean
	private void c__DisplayClass73_0__Rebuild_b__24()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__25: clean
	private void c__DisplayClass73_0__Rebuild_b__25()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__26: clean
	private void c__DisplayClass73_0__Rebuild_b__26()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__27: clean
	private void c__DisplayClass73_0__Rebuild_b__27()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__28: clean
	private void c__DisplayClass73_0__Rebuild_b__28()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnShaderChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__29: clean
	private void c__DisplayClass73_0__Rebuild_b__29()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__46: clean
	private void c__DisplayClass73_0__Rebuild_b__46()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__47: clean
	private void c__DisplayClass73_0__Rebuild_b__47()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__48: clean
	private void c__DisplayClass73_0__Rebuild_b__48()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__49: clean
	private void c__DisplayClass73_0__Rebuild_b__49()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnPickTexture(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__50: clean
	private void c__DisplayClass73_0__Rebuild_b__50()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__51: clean
	private void c__DisplayClass73_0__Rebuild_b__51()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__52: clean
	private void c__DisplayClass73_0__Rebuild_b__52()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__53: clean
	private void c__DisplayClass73_0__Rebuild_b__53()
	{
		MapEditorBrushPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnEntryChanged(this.index);
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass90_0$$.ctor: clean
	private void c__DisplayClass90_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorBrushPanel.<>c__DisplayClass90_0$$<OnPickTexture>b__0: clean
	private void c__DisplayClass90_0__OnPickTexture_b__0(String texture)
	{
		int index;
		MapEditorBrushPanel pUVar1;
		MapEditorGameManager pGVar2;
		MapEditorBrush __this_00;
		List<BrushEntry> __this_01;
		Dictionary<object, object> __this_02;
		BrushEntry pMVar3;
		MapScriptBasicMaterial pMVar4;

		pUVar1 = this.__4__this;
		if ((((pUVar1 != null) &&(pGVar2 = pUVar1._gameManager, pGVar2 != null)) &&(__this_00 = pGVar2.Brush, __this_00 != null)) &&(__this_01 = __this_00.Entries, __this_01 != null)) {
			index = this.index;
			if (__this_01._size <= index) {
				return;
			}
			pMVar3 = __this_01.get_Item(index);
			__this_02 = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
			if (__this_02 != null) {
				pMVar4 = __this_02.get_Item((object)texture);
				if ((pMVar4 != null) && (pMVar3 != null)) {
					pMVar3.Texture = pMVar4.Texture;
					pUVar1 = this.__4__this;
					if (pUVar1 != null) {
						pUVar1.Rebuild();
						__this_00.RegenerateGhosts();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
