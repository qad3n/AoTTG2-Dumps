// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorWeatherPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorWeatherPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorWeatherPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20008DE")]
internal class MapEditorWeatherPopup : BasePopup
{
	[Token(Token = "0x4002CC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private BoolSetting _hasWeather;

	[Token(Token = "0x4002CC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ToggleSettingElement _hasWeatherElement;

	[Token(Token = "0x4002CC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _elements;

	[Token(Token = "0x17000EC6")]
	protected override string Title
	{
		[Token(Token = "0x600547E")]
		[Address(RVA = "0x5CA7D80", Offset = "0x5CA6D80", VA = "0x5CA7D80", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Top", "Weather", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000EC7")]
	protected override float Width
	{
		[Token(Token = "0x600547F")]
		[Address(RVA = "0x5CA7E20", Offset = "0x5CA6E20", VA = "0x5CA7E20", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$get_Width): clean
			return 1010.0;
		}
	}

	[Token(Token = "0x17000EC8")]
	protected override float Height
	{
		[Token(Token = "0x6005480")]
		[Address(RVA = "0x5CA7E30", Offset = "0x5CA6E30", VA = "0x5CA7E30", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$get_Height): clean
			return 630.0;
		}
	}

	[Token(Token = "0x17000EC9")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6005481")]
		[Address(RVA = "0x5CA7E40", Offset = "0x5CA6E40", VA = "0x5CA7E40", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000ECA")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6005482")]
		[Address(RVA = "0x5CA7E50", Offset = "0x5CA6E50", VA = "0x5CA7E50", Slot = "14")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$get_DoublePanelDivider): clean
			return true;
		}
	}

	[Token(Token = "0x17000ECB")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005483")]
		[Address(RVA = "0x5CA7E60", Offset = "0x5CA6E60", VA = "0x5CA7E60", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6005484")]
	[Address(RVA = "0x5CA7E70", Offset = "0x5CA6E70", VA = "0x5CA7E70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$Setup): 10 lines keep C-only constructs
		uint uVar1;
		BoolSetting setting;
		String pSVar2;
		ElementStyle __this_00;
		String title;
		GameObject pUVar3;
		ToggleSettingElement pUVar4;
		object pIVar5;
		UnityAction pUVar6;
		MapEditorWeatherPopup.c__DisplayClass15_0 pUVar7;
		Transform pUVar8;
		ulong uVar9;

		this.Setup(parent);
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 180.0, 20.0, pSVar2);
		pSVar2 = "MapHasWeather";
		pUVar8 = this.DoublePanelLeft;
		setting = this._hasWeather;
		title = UIManager.GetLocale("MapEditor", "Weather", pSVar2, "", "");
		pSVar2 = "MapHasWeatherTooltip";
		pSVar2 = UIManager.GetLocale("MapEditor", "Weather", pSVar2, "", "");
		pUVar3 = ElementFactory.CreateToggleSetting(pUVar8, __this_00, (BaseSetting)setting, title, pSVar2, 30.0, 30.0, null);
		if (pUVar3 != null) {
			pUVar4 = pUVar3.GetComponent<ToggleSettingElement>();
			this._hasWeatherElement = pUVar4;
			this.CreateHorizontalDivider(this.DoublePanelLeft, 1.0);
			ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 0);
			pUVar3 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 0);
			pIVar5 = new string[2];
			if (pIVar5 != null) {
				if (*(int)&pIVar5[1].monitor != 0) {
					pIVar5[2].klass = (Il2CppClass *)"Import";
					if (((ulong)pIVar5[1].monitor & 0xfffffffe) != 0) {
						pIVar5[2].monitor = "Export";
						if (0 < *(int)&pIVar5[1].monitor) {
							if (pUVar3 == null) {
								pUVar7 = new MapEditorWeatherPopup.c__DisplayClass15_0();
								if (pUVar7 != null) {
									pUVar7.__4__this = this;
									if (*(int)&pIVar5[1].monitor == 0) goto label_05da84af;
									pUVar7.button = (String)pIVar5[2].klass;
								}
								goto label_05da84c7;
							}
							uVar9 = 0;
							do {
								pUVar7 = new MapEditorWeatherPopup.c__DisplayClass15_0();
								if (pUVar7 == null) goto label_05da84c7;
								pUVar7.__4__this = this;
								if (*(uint)&pIVar5[1].monitor <= uVar9) goto label_05da84af;
								pUVar7.button = (String)(&pIVar5[2].klass)[uVar9];
								pUVar8 = pUVar3.transform;
								pSVar2 = pUVar7.button;
								pSVar2 = UIManager.GetLocale("Common", pSVar2, "", "", "");
								pUVar6 = new UnityAction((object)pUVar7, (intptr_t)MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass15_0_Setup_b__1);
								ElementFactory.CreateDefaultButton(pUVar8, __this_00, pSVar2, 0.0, 0.0, pUVar6) ;
								uVar9 = uVar9 + 1;
							} while ((long)uVar9 < (long)*(int)&pIVar5[1].monitor);
						}
						pUVar8 = this.BottomBar;
						pSVar2 = "Save";
						if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
							pSVar2 = "Save";
						}
						"Save" = pSVar2;
						if (Il2CppMethodInitialized_07548101 == false) {
							Il2CppMethodInitialized_07548101 = true;
							uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						pSVar2 = UIManager.GetLocale("Common", pSVar2, "", "", "");
						pUVar6 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorWeatherPopup_Setup_b__15_0);
						ElementFactory.CreateTextButton(pUVar8, __this_00, pSVar2, 0.0, pUVar6);
						return;
					}
				}
	label_05da84af: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_05da84c7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005485")]
	[Address(RVA = "0x5CA8570", Offset = "0x5CA7570", VA = "0x5CA8570", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$Show): 80 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int length;
		uint uVar3;
		List<GameObject> pSVar4;
		BaseGameManager pGVar5;
		BaseMenu pUVar6;
		IntPtr pvVar7;
		BoolSetting __this_00;
		ColorPickPopup colorPickPopup;
		ToggleSettingElement pUVar8;
		long lVar9;
		BaseSetting pSVar10;
		GameObject[] pUVar11;
		Vector3Popup vector3Popup;
		Object obj;
		bool bVar12;
		String pSVar13;
		MethodInfo pMVar14;
		String title;
		MethodInfo pMVar15;
		GameObject pUVar16;
		object pIVar17;
		UnityAction __this_01;
		MapEditorWeatherPopup.c__DisplayClass16_0 pUVar18;
		Transform pUVar19;
		String[] options;
		MethodInfo pMVar20;
		DropdownSettingElement __this_02;
		ulong uVar21;
		byte[] auStack_68 = new byte[8];
		Object pUStack_58;
		byte[] auStack_48 = new byte[16];
		Object pUStack_38;

		auStack_68 = (byte[])0x0;
		pUStack_58 = null;
		this.Show();
		pSVar4 = this._elements;
		if (pSVar4 != null) {
			auStack_48.GetEnumerator((List<object>)pSVar4);
			pUStack_58 = pUStack_38;
			auStack_68 = (byte[])auStack_48._0_8_;
			auStack_48._0_8_ = null;
			auStack_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_68;
			while (true) {
				bVar12 = auStack_68.MoveNext();
				obj = pUStack_58;
				if (!(bVar12)) break;
				Object.Destroy(obj);
			}
			auStack_68.Dispose() ;
			pSVar4 = this._elements;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar4._size;
				pSVar4._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar4._items, 0, length);
				}
				pGVar5 = SceneLoader.CurrentGameManager;
				if (pGVar5 != null) {
					bVar2 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
					if (((pGVar5.klass._2).typeHierarchyDepth < bVar2) ||((pGVar5.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapEditorGameManager))) {
						throw new InvalidCastException();
					}
				}
				pSVar13 = this.get_ThemePanel();
				pMVar14 = new ElementStyle(0x18, 180.0, 20.0, pSVar13);
				pUVar6 = UIManager.CurrentMenu;
				if ((((pUVar6 != null) && (pGVar5 != null)) &&((*(ulong)((sbyte)pGVar5 + 0x28)) != null)) &&((pvVar7 = (((*(Il2CppClass*)((sbyte)pGVar5 + 0x28)))._1).byval_arg.data, pvVar7 != null &&(__this_00 = this._hasWeather, __this_00 != null)))) {
					colorPickPopup = pUVar6.ColorPickPopup;
					__this_00.Value = *(bool)((long)pvVar7 + 0x20);
					pUVar8 = this._hasWeatherElement;
					if (pUVar8 != null) {
						pMVar20 = (pUVar8.klass.vtable)._6_SyncElement.method;
						pUVar8.SyncElement();
						if (((*(ulong)((sbyte)pGVar5 + 0x28)) != null) &&(lVar9 = *(long)&(((*(Il2CppClass*)((sbyte)pGVar5 + 0x28)))._1).this_arg.bits, lVar9 != 0)) {
							pUVar19 = this.DoublePanelLeft;
							pSVar4 = this._elements;
							pSVar10 = *(BaseSetting*)(lVar9 + 0xd0);
							title = MapEditorWeatherPopup.WeatherLocale("UseSchedule");
							pSVar13 = "UseScheduleTooltip";
							pSVar13 = UIManager.GetLocale("MapEditor", "Weather", pSVar13, "", "");
							pMVar15 = (MethodInfo)ElementFactory.CreateToggleSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, title, pSVar13, 30.0, 30.0, null);
							pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
							if (pSVar4 != null) {
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								pUVar11 = pSVar4._items;
								if (pUVar11 != null) {
									uVar3 = pSVar4._size;
									if (uVar3 < (uint)pUVar11.Length) {
										pSVar4._size = uVar3 + 1;
										pUVar11[(int)uVar3] = (GameObject)pMVar15;
									}
									else {
										pSVar4.AddWithResize((object)pMVar15);
									}
									pUVar19 = this.DoublePanelLeft;
									pSVar4 = this._elements;
									pSVar10 = *(BaseSetting*)(lVar9 + 0xd8);
									pSVar13 = MapEditorWeatherPopup.WeatherLocale("ScheduleLoop");
									pMVar20 = null;
									pUVar16 = ElementFactory.CreateToggleSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 30.0, 30.0, null);
									pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
									if (pSVar4 != null) {
										piVar1 = &pSVar4._version;
										*piVar1 = *piVar1 + 1;
										pUVar11 = pSVar4._items;
										if (pUVar11 != null) {
											uVar3 = pSVar4._size;
											if (uVar3 < (uint)pUVar11.Length) {
												pSVar4._size = uVar3 + 1;
												pUVar11[(int)uVar3] = pUVar16;
											}
											else {
												pSVar4.AddWithResize((object)pUVar16);
											}
											pUVar16 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 0);
											pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
											pSVar4 = this._elements;
											if (pSVar4 != null) {
												piVar1 = &pSVar4._version;
												*piVar1 = *piVar1 + 1;
												pUVar11 = pSVar4._items;
												if (pUVar11 != null) {
													uVar3 = pSVar4._size;
													if (uVar3 < (uint)pUVar11.Length) {
														pSVar4._size = uVar3 + 1;
														pUVar11[(int)uVar3] = pUVar16;
													}
													else {
														pSVar4.AddWithResize((object)pUVar16);
													}
													pIVar17 = new string[2];
													if (pIVar17 != null) {
														if (*(int)&pIVar17[1].monitor != 0) {
															pIVar17[2].klass = (Il2CppClass *)"Import";
															pMVar15 = (MethodInfo *)"Export";
															if (((ulong)pIVar17[1].monitor & 0xfffffffe) != 0) {
																pIVar17[2].monitor = "Export";
																if (0 < *(int)&pIVar17[1].monitor) {
																	if (pUVar16 == null) {
																		pUVar18 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapEditorWeatherPopup.c__DisplayClass16_0));
																		pUVar18 = new Object();
																		if (pUVar18 == null) goto label_05da9c13;
																		pUVar18.__4__this = this;
																		if (*(int)&pIVar17[1].monitor != 0) {
																			pUVar18.button = (String)pIVar17[2].klass;
																			throw new NullReferenceException();
																		}
																		goto label_05da9c30;
																	}
																	uVar21 = 0;
																	do {
																		pUVar18 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapEditorWeatherPopup.c__DisplayClass16_0));
																		pUVar18 = new Object();
																		if (pUVar18 == null) goto label_05da9c13;
																		pUVar18.__4__this = this;
																		if (*(uint)&pIVar17[1].monitor <= uVar21) goto label_05da9c30;
																		pUVar18.button = (String)(&pIVar17[2].klass)[uVar21];
																		pUVar19 = pUVar16.transform;
																		pSVar13 = pUVar18.button;
																		pSVar13 = UIManager.GetLocale("Common", pSVar13, "", "", "");
																		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																		__this_01 = new UnityAction((object)pUVar18, (intptr_t) MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass16_0_Show_b__0);
																		pMVar15 = pMVar14;
																		ElementFactory.CreateDefaultButton(pUVar19, (ElementStyle)pMVar14, pSVar13, 0.0, 0.0, __this_01);
																		uVar21 = uVar21 + 1;
																	} while ((long)uVar21 < (long)*(int)&pIVar17[1].monitor);
																}
																pUVar6 = UIManager.CurrentMenu;
																if (pUVar6 != null) {
																	vector3Popup = pUVar6.Vector3Popup;
																	pUVar19 = this.DoublePanelRight;
																	pSVar10 = *(BaseSetting*)(lVar9 + 0x48);
																	pSVar13 = MapEditorWeatherPopup.WeatherLocale("Skybox");
																	options = Util.EnumToStringArray<WeatherSkybox>();
																	pMVar20 = (MethodInfo)ElementFactory.CreateDropdownSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, options, "", 140.0, 40.0, 300.0, (Nullable<float>)0x0, null, null, null);
																	if ((pMVar20 != null) &&(__this_02 = pMVar20.GetComponent<DropdownSettingElement>(), __this_02 != null)) {
																		__this_02.FixScale();
																		pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
																		pSVar4 = this._elements;
																		if (pSVar4 != null) {
																			piVar1 = &pSVar4._version;
																			*piVar1 = *piVar1 + 1;
																			pUVar11 = pSVar4._items;
																			if (pUVar11 != null) {
																				uVar3 = pSVar4._size;
																				if (uVar3 < (uint)pUVar11.Length) {
																					pSVar4._size = uVar3 + 1;
																					pUVar11[(int)uVar3] = (GameObject)pMVar20;
																				}
																				else {
																					pSVar4.AddWithResize((object)pMVar20);
																				}
																				pUVar19 = this.DoublePanelRight;
																				pSVar4 = this._elements;
																				pSVar10 = *(BaseSetting*)(lVar9 + 0x50);
																				pSVar13 = MapEditorWeatherPopup.WeatherLocale("SkyboxColor");
																				pMVar15 = (MethodInfo)ElementFactory.CreateColorSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, colorPickPopup, "", 90.0, 30.0, null);
																				pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
																				if (pSVar4 != null) {
																					piVar1 = &pSVar4._version;
																					*piVar1 = *piVar1 + 1;
																					pUVar11 = pSVar4._items;
																					if (pUVar11 != null) {
																						uVar3 = pSVar4._size;
																						if (uVar3 < (uint)pUVar11.Length) {
																							pSVar4._size = uVar3 + 1;
																							pUVar11[(int)uVar3] = (GameObject)pMVar15 ;
																						}
																						else {
																							pSVar4.AddWithResize((object)pMVar15);
																						}
																						pUVar19 = this.DoublePanelRight;
																						pSVar4 = this._elements;
																						pSVar10 = *(BaseSetting*)(lVar9 + 0x58);
																						pSVar13 = MapEditorWeatherPopup.WeatherLocale("Daylight");
																						pMVar15 = (MethodInfo)ElementFactory.CreateColorSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, colorPickPopup, "", 90.0, 30.0, null);
																						pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
																						if (pSVar4 != null) {
																							piVar1 = &pSVar4._version;
																							*piVar1 = *piVar1 + 1;
																							pUVar11 = pSVar4._items;
																							if (pUVar11 != null) {
																								uVar3 = pSVar4._size;
																								if (uVar3 < (uint)pUVar11.Length) {
																									pSVar4._size = uVar3 + 1;
																									pUVar11[(int)uVar3] =(GameObject)pMVar15;
																								}
																								else {
																									pSVar4.AddWithResize((object)pMVar15);
																								}
																								pUVar19 = this.DoublePanelRight;
																								pSVar4 = this._elements;
																								pSVar10 = *(BaseSetting*)(lVar9 + 0x60);
																								pSVar13 = MapEditorWeatherPopup.WeatherLocale("DaylightIntensity");
																								pMVar15 = (MethodInfo)ElementFactory.CreateSliderSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 150.0, 16.0, 2, 0.0, null);
																								pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
																								if (pSVar4 != (List<GameObject>)0x0) {
																									piVar1 = &pSVar4._version;
																									*piVar1 = *piVar1 + 1;
																									pUVar11 = pSVar4._items;
																									if (pUVar11 != null) {
																										uVar3 = pSVar4._size;
																										if (uVar3 < (uint)pUVar11.Length) {
																											pSVar4._size = uVar3 + 1;
																											pUVar11[(int)uVar3] =(GameObject)pMVar15;
																										}
																										else {
																											pSVar4.AddWithResize((object)pMVar15);
																										}
																										pUVar19 = this.DoublePanelRight;
																										pSVar4 = this._elements;
																										pSVar10 = *(BaseSetting*)(lVar9 + 0x68);
																										pSVar13 = MapEditorWeatherPopup.WeatherLocale("DaylightDirection");
																										pMVar15 = (MethodInfo)ElementFactory.CreateVector3Setting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, vector3Popup, "", 90.0, 30.0, null);
																										pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
																										if (pSVar4 != null) {
																											piVar1 = &pSVar4._version;
																											*piVar1 = *piVar1 + 1;
																											pUVar11 = pSVar4._items;
																											if (pUVar11 != null) {
																												uVar3 = pSVar4._size;
																												if (uVar3 < (uint)pUVar11.Length) {
																													pSVar4._size = uVar3 + 1;
																													pUVar11[(int)uVar3] =(GameObject)pMVar15;
																												}
																												else {
																													pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0x70);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("AmbientLight");
																												pMVar15 = (MethodInfo)ElementFactory.CreateColorSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, colorPickPopup, "", 90.0, 30.0, (UnityEngine_Events_UnityAction_o * )0x0);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0x78);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("Flashlight");
																												pMVar15 = (MethodInfo)ElementFactory.CreateColorSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, colorPickPopup, "", 90.0, 30.0, null);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0x88);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("FogColor");
																												pMVar15 = (MethodInfo)ElementFactory.CreateColorSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, colorPickPopup, "", 90.0, 30.0, null);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0x80);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("FogDensity");
																												pMVar15 = (MethodInfo)ElementFactory.CreateSliderInputSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 130.0, 16.0, 70.0, 40.0, 3);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0x90);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("Rain");
																												pMVar15 = (MethodInfo)ElementFactory.CreateSliderSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 150.0, 16.0, 2, 0.0, null);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0x98);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("Thunder");
																												pMVar15 = (MethodInfo)ElementFactory.CreateSliderSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 150.0, 16.0, 2, 0.0, null);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0xa0);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("Snow");
																												pMVar15 = (MethodInfo)ElementFactory.CreateSliderSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 150.0, 16.0, 2, 0.0, null);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0xa8);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("Wind");
																												pMVar15 = (MethodInfo)ElementFactory.CreateSliderSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 150.0, 16.0, 2, 0.0, null);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0xb0);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("WindDirection");
																												pMVar15 = (MethodInfo)ElementFactory.CreateVector3Setting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, vector3Popup, "", 90.0, 30.0, null);
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0xb8);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("RainForce");
																												pMVar15 = (MethodInfo)ElementFactory.CreateInputSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 140.0, 40.0, false, null, null, null, null) ;
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 0xc0);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("SnowForce");
																												pMVar15 = (MethodInfo)ElementFactory.CreateInputSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 140.0, 40.0, false, null, null, null, null) ;
																												pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] =(GameObject)pMVar15;
																														}
																														else {

																												pSVar4.AddWithResize((object)pMVar15);
																												}
																												pUVar19 = this.DoublePanelRight;
																												pSVar4 = this._elements;
																												pSVar10 = *(BaseSetting*)(lVar9 + 200);
																												pSVar13 = MapEditorWeatherPopup.WeatherLocale("WindForce");
																												pUVar16 = ElementFactory.CreateInputSetting(pUVar19, (ElementStyle)pMVar14, pSVar10, pSVar13, "", 140.0, 40.0, false, null, null, null, null) ;
																												pMVar14 = MethodInfo_System_Collections_Generic_List_GameObject_Add ;
																												if (pSVar4 != null) {
																													piVar1 = &pSVar4._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar11 = pSVar4._items;
																													if (pUVar11 != null) {
																														uVar3 = pSVar4._size;
																														if (uVar3 < (uint)pUVar11.Length) {
																															pSVar4._size = uVar3 + 1;
																															pUVar11[(int)uVar3] = pUVar16;
																														}
																														else {

																												pSVar4.AddWithResize((object)pUVar16);
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
																goto label_05da9c13;
															}
														}
	label_05da9c30: ;
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
	label_05da9c13: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005486")]
	[Address(RVA = "0x5CA84D0", Offset = "0x5CA74D0", VA = "0x5CA84D0")]
	private static string Locale(string item)
	{
		// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("MapEditor", "Weather", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x6005487")]
	[Address(RVA = "0x5CA9CC0", Offset = "0x5CA8CC0", VA = "0x5CA9CC0")]
	private static string WeatherLocale(string item)
	{
		// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$WeatherLocale): clean
		String pSVar1;

		pSVar1 = String.Concat("Weather.", item);
		pSVar1 = UIManager.GetLocale("GameCreate", "Sandbox", pSVar1, "", "");
		return pSVar1;
	}

	[Token(Token = "0x6005488")]
	[Address(RVA = "0x5CA9D80", Offset = "0x5CA8D80", VA = "0x5CA9D80")]
	private void OnWeatherButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$OnWeatherButtonClick): 12 lines keep C-only constructs
		byte bVar1;
		TooltipPopup pUVar2;
		List<BasePopup> pSVar3;
		long lVar4;
		BoolSetting pSVar5;
		Transform pUVar6;
		MapEditorTopPanel __this_00;
		bool bVar7;
		sbyte cVar8;
		MapEditorWeatherPopup.c__DisplayClass19_0 __this_01;
		UnityAction __this_02;
		MethodInfo* ppMVar9;
		long plVar10;
		JSONNode pSVar11;
		String pSVar12;
		Action __this_03;
		String* targetAddress;
		ExportPopup __this_04;
		BaseMenu pUVar13;
		ImportPopup __this_05;

		__this_01 = new MapEditorWeatherPopup.c__DisplayClass19_0();
		if (__this_01 == null) goto label_05daa388;
		__this_01.__4__this = this;
		targetAddress = &__this_01.name;
		__this_01.name = name;
		pUVar13 = (BaseMenu)SceneLoader.CurrentGameManager;
		if (pUVar13 == null) goto label_05daa388;
		bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
		if (((((BaseGameManager)pUVar13.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar13.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorGameManager))) {
	label_05daa390: ;
			throw new InvalidCastException();
		}
		pUVar2 = pUVar13.TooltipPopup;
		if (pUVar2 == null) goto label_05daa388;
		pSVar3 = pUVar2._popups;
		if (UIManager.CurrentMenu == null) goto label_05daa388;
		pSVar12 = *targetAddress;
		bVar7 = (pSVar12 == "Import");
		if (bVar7) {
			pUVar13 = UIManager.CurrentMenu;
			if (pUVar13 == null) goto label_05daa388;
			__this_05 = pUVar13.ImportPopup;
			ppMVar9 = &MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0_OnWeatherButtonClick_b__0;
		}
		else {
			bVar7 = (pSVar12 == "Export");
			if (bVar7) {
				if ((pSVar3 == null) ||(plVar10 = (long)pSVar3.set_Item(), plVar10 == null)) goto label_05daa388;
				cVar8 = (**(code*)(*plVar10 + 0x2f8))(plVar10,"Preset",*(ulong)(*plVar10 + 0x300)) ;
				if (cVar8 == false) {
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05daa086;
	label_05daa166: ;
					pUVar13 = UIManager.CurrentMenu;
				}
				else {
					pSVar11 = ((JSONNode)false);
					(**(code*)(*plVar10 + 0x1b8))(plVar10,"Preset",pSVar11,*(ulong)(*plVar10 + 0x1c0));
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05daa166;
	label_05daa086: ;
					pUVar13 = UIManager.CurrentMenu;
				}
				if (pUVar13 != null) {
					__this_04 = pUVar13.ExportPopup;
					pSVar12 = (String)(**(code*)(*plVar10 + 0x318))(plVar10,4,*(ulong)(*plVar10 + 800));
					if (__this_04 != null) {
	label_05daa1a5: ;
						__this_04.Show(pSVar12);
						return;
					}
				}
				goto label_05daa388;
			}
			bVar7 = (pSVar12 == "ImportSchedule");
			if (!bVar7) {
				bVar7 = (pSVar12 == "ExportSchedule");
				if (!bVar7) {
					bVar7 = (pSVar12 == "Save");
					if (!bVar7) {
						return;
					}
					pUVar2 = pUVar13.TooltipPopup;
					if (((pUVar2 != null) &&(pSVar5 = this._hasWeather, pSVar5 != null)) &&(pUVar6 = pUVar2.SinglePanel, pUVar6 != null)) {
						*(bool)&(*(ulong)((sbyte)pUVar6 + 0x20)) = pSVar5._value;
						pUVar13 = UIManager.CurrentMenu;
						if (pUVar13 != null) {
							bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
							if (((((BaseGameManager)pUVar13.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar13.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) goto label_05daa390;
							__this_00 = (MapEditorTopPanel)(*(ulong)((sbyte)pUVar13 + 0xb8));
							if (__this_00 != null) {
								__this_00.SyncMapScriptObjects();
								__this_03 = new Action((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
								__this_00.TrySaveMapFile(__this_03);
								this.Hide();
								return;
							}
						}
					}
					goto label_05daa388;
				}
				pUVar13 = UIManager.CurrentMenu;
				if (((pUVar13 == null) ||(pSVar3 == null)) ||((lVar4 = *(long)&(*(uint)((sbyte)pSVar3 + 0xe0)), lVar4 == 0 ||(__this_04 = pUVar13.ExportPopup, __this_04 == null)))) goto label_05daa388;
				pSVar12 = *(String*)(lVar4 + 0x20);
				goto label_05daa1a5;
			}
			pUVar13 = UIManager.CurrentMenu;
			if (pUVar13 == null) goto label_05daa388;
			__this_05 = pUVar13.ImportPopup;
			ppMVar9 = &MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0_OnWeatherButtonClick_b__1;
		}
		__this_02 = new UnityAction((object)__this_01, (intptr_t)*ppMVar9);
		if (__this_05 != null) {
			__this_05.Show(__this_02, true, "", "");
			return;
		}
	label_05daa388: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005489")]
	[Address(RVA = "0x5CAA3B0", Offset = "0x5CA93B0", VA = "0x5CAA3B0")]
	private void OnWeatherSetOperationFinish(string name)
	{
		// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$OnWeatherSetOperationFinish): 3 lines keep C-only constructs
		byte bVar1;
		BaseMenu pUVar2;
		BaseGameManager pGVar3;
		ImportPopup __this_00;
		long plVar4;
		StringSetting pSVar5;
		object value;
		bool bVar6;
		WeatherSchedule __this_01;
		String a;

		if (Il2CppMethodInitialized_075480d9 == false) {
			Il2CppMethodInitialized_075480d9 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05daa484;
	label_05daa3e1: ;
			pUVar2 = UIManager.CurrentMenu;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05daa3e1;
	label_05daa484: ;
			pUVar2 = UIManager.CurrentMenu;
		}
		if ((pUVar2 != null) &&(pGVar3 = SceneLoader.CurrentGameManager, pGVar3 != null)) {
			bVar1 = ((typeof(MapEditorGameManager))._2).typeHierarchyDepth;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorGameManager))) {
				throw new InvalidCastException();
			}
			if ((*(ulong)((sbyte)pGVar3 + 0x28)) != null) {
				__this_00 = pUVar2.ImportPopup;
				plVar4 = *(long*)&(((*(Il2CppClass*)((sbyte)pGVar3 + 0x28)))._1).this_arg.bits;
				bVar6 = (name == "Import");
				if (bVar6) {
					if (plVar4 == null) {
						throw new NullReferenceException();
					}
					if (plVar4[6] == 0) {
						throw new NullReferenceException();
					}
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pSVar5 = __this_00.ImportSetting;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					value = *(object*)(plVar4[6] + 0x20);
					(**(code*)(*plVar4 + 0x1c8))(plVar4,pSVar5._value,*(ulong)(*plVar4 + 0x1d0));
					if ((Settings_TypedSetting_bool__o)plVar4[7] == null) {
						throw new NullReferenceException();
					}
					plVar4[7].Value = false;
					if ((TypedSetting<T>)plVar4[6] == null) {
						throw new NullReferenceException();
					}
					plVar4[6].Value = value;
					__this_00.Hide() ;
				}
				else {
					bVar6 = (name == "ImportSchedule");
					if (bVar6) {
						__this_01 = new WeatherSchedule();
						if (((__this_00 == null) ||(pSVar5 = __this_00.ImportSetting, pSVar5 == null)) ||(__this_01 == null)) goto label_05daa7c4;
						a = __this_01.DeserializeFromCSV(pSVar5._value) ;
						bVar6 = (a != (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (bVar6) {
							__this_00.ShowError(a);
						}
						else {
							if (((plVar4 == null) ||(pSVar5 = __this_00.ImportSetting, pSVar5 == null)) ||((TypedSetting<T>)plVar4[0x1c] == null)) goto label_05daa7c4;
							plVar4[0x1c].Value = (object)pSVar5._value;
							__this_00.Hide();
						}
					}
				}
				this.Show();
				return;
			}
		}
	label_05daa7c4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600548A")]
	[Address(RVA = "0x5CAA810", Offset = "0x5CA9810", VA = "0x5CAA810")]
	public MapEditorWeatherPopup()
	{
		// Lifted from source/cpp/UI/MapEditorWeatherPopup.c (UI.MapEditorWeatherPopup$$.ctor): clean
		BoolSetting __this_00;
		List<GameObject> __this_01;

		__this_00 = new BoolSetting(false);
		this._hasWeather = __this_00;
		__this_01 = new List<GameObject>();
		this._elements = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorWeatherPopup.c.

	// UI.MapEditorWeatherPopup.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorWeatherPopup.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorWeatherPopup.<>c__DisplayClass19_0$$.ctor: clean
	private void c__DisplayClass19_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorWeatherPopup$$<Setup>b__15_0: clean
	private void Setup_b__15_0()
	{


		this.OnWeatherButtonClick("Save");
		return;
	}

	// UI.MapEditorWeatherPopup.<>c__DisplayClass15_0$$<Setup>b__1: clean
	private void c__DisplayClass15_0__Setup_b__1()
	{
		MapEditorWeatherPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnWeatherButtonClick(this.button);
		return;
	}

	// UI.MapEditorWeatherPopup.<>c__DisplayClass16_0$$<Show>b__0: clean
	private void c__DisplayClass16_0__Show_b__0()
	{
		MapEditorWeatherPopup __this_00;
		String name;

		__this_00 = this.__4__this;
		name = String.Concat(this.button, "Schedule");
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnWeatherButtonClick(name);
		return;
	}

	// UI.MapEditorWeatherPopup.<>c__DisplayClass19_0$$<OnWeatherButtonClick>b__0: clean
	private void c__DisplayClass19_0__OnWeatherButtonClick_b__0()
	{
		MapEditorWeatherPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnWeatherSetOperationFinish(this.name);
		return;
	}

	// UI.MapEditorWeatherPopup.<>c__DisplayClass19_0$$<OnWeatherButtonClick>b__1: clean
	private void c__DisplayClass19_0__OnWeatherButtonClick_b__1()
	{
		MapEditorWeatherPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnWeatherSetOperationFinish(this.name);
		return;
	}
}
