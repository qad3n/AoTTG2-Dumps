// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using RuntimeSceneGizmo;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008C7")]
internal class MapEditorMenu : BaseMenu
{
	[Token(Token = "0x4002C5C")]
	[FieldOffset(Offset = "0x98")]
	public MapEditorInspectPanel InspectPanel;

	[Token(Token = "0x4002C5D")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrushPanel BrushPanel;

	[Token(Token = "0x4002C5E")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorRulerPanel RulerPanel;

	[Token(Token = "0x4002C5F")]
	[FieldOffset(Offset = "0xB0")]
	public MapEditorHierarchyPanel HierarchyPanel;

	[Token(Token = "0x4002C60")]
	[FieldOffset(Offset = "0xB8")]
	public MapEditorTopPanel _topPanel;

	[Token(Token = "0x4002C61")]
	[FieldOffset(Offset = "0xC0")]
	public MapEditorAddObjectPopup AddObjectPopup;

	[Token(Token = "0x4002C62")]
	[FieldOffset(Offset = "0xC8")]
	public MapEditorAddVariantPopup AddVariantPopup;

	[Token(Token = "0x4002C63")]
	[FieldOffset(Offset = "0xD0")]
	public MapEditorTexturePopup TexturePopup;

	[Token(Token = "0x4002C64")]
	[FieldOffset(Offset = "0xD8")]
	public MapEditorCameraPopup CameraPopup;

	[Token(Token = "0x4002C65")]
	[FieldOffset(Offset = "0xE0")]
	public MapEditorInfoPopup InfoPopup;

	[Token(Token = "0x4002C66")]
	[FieldOffset(Offset = "0xE8")]
	public MapEditorSettingsPopup SettingsPopup;

	[Token(Token = "0x4002C67")]
	[FieldOffset(Offset = "0xF0")]
	public MapEditorCustomLogicPopup CustomLogicPopup;

	[Token(Token = "0x4002C68")]
	[FieldOffset(Offset = "0xF8")]
	public MapEditorAddComponentPopup AddComponentPopup;

	[Token(Token = "0x4002C69")]
	[FieldOffset(Offset = "0x100")]
	public MapEditorMapObjectPickerPopup MapObjectPickerPopup;

	[Token(Token = "0x4002C6A")]
	[FieldOffset(Offset = "0x108")]
	public MapEditorErrorPopup ErrorPopup;

	[Token(Token = "0x4002C6B")]
	[FieldOffset(Offset = "0x110")]
	public MapEditorCustomAssetPopup CustomAssetsPopup;

	[Token(Token = "0x4002C6C")]
	[FieldOffset(Offset = "0x118")]
	public MapEditorWeatherPopup WeatherPopup;

	[Token(Token = "0x4002C6D")]
	[FieldOffset(Offset = "0x120")]
	public MapEditorVersionConversionPopup VersionConversionPopup;

	[Token(Token = "0x4002C6E")]
	[FieldOffset(Offset = "0x128")]
	public SceneGizmoRenderer OrientationGizmo;

	[Token(Token = "0x4002C6F")]
	[FieldOffset(Offset = "0x130")]
	public Image DragImage;

	[Token(Token = "0x4002C70")]
	[FieldOffset(Offset = "0x138")]
	public bool IsMouseUI;

	[Token(Token = "0x4002C71")]
	[FieldOffset(Offset = "0x139")]
	public bool IsInputFocused;

	[Token(Token = "0x4002C72")]
	[FieldOffset(Offset = "0x140")]
	public Action<string> TexturePopupTarget;

	[Token(Token = "0x600539F")]
	[Address(RVA = "0x5C958E0", Offset = "0x5C948E0", VA = "0x5C958E0", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$Setup): 3 lines keep C-only constructs
		Image* targetAddress;
		Transform pUVar1;
		MapEditorTopPanel pUVar2;
		GameObject pUVar3;
		Image pUVar4;

		this.Setup();
		pUVar1 = this.transform;
		pUVar2 = ElementFactory.CreateHeadedPanel<MapEditorTopPanel>(pUVar1, true);
		this._topPanel = pUVar2;
		pUVar2 = this._topPanel;
		if (pUVar2 != null) {
			pUVar3 = pUVar2.gameObject;
			ElementFactory.SetAnchor(pUVar3, 1, 1, (Vector2)0x40a00000c0a00000);
			pUVar1 = this.transform;
			pUVar3 = ElementFactory.InstantiateAndBind(pUVar1, "Prefabs/Misc/MapEditorDragImage");
			if (pUVar3 != null) {
				pUVar4 = pUVar3.GetComponent<Image>();
				targetAddress = &this.DragImage;
				this.DragImage = pUVar4;
				pUVar4 = this.DragImage;
				if (pUVar4 != null) {
					pUVar3 = pUVar4.gameObject;
					ElementFactory.SetAnchor(pUVar3, 6, 6, (Vector2)(Vector2.zeroVector));
					pUVar4 = *targetAddress;
					if (pUVar4 != null) {
						pUVar3 = pUVar4.gameObject;
						if (pUVar3 != null) {
							pUVar3.SetActive(false);
							pUVar1 = this.transform ;
							AottgMobileUi.CreateControls(pUVar1, this);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A0")]
	[Address(RVA = "0x5C95AC0", Offset = "0x5C94AC0", VA = "0x5C95AC0", Slot = "5")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$SetupPopups): 30 lines keep C-only constructs
		int piVar1;
		MapEditorTexturePopup* targetAddress;
		uint uVar2;
		List<BasePopup> pSVar3;
		BasePopup[] pUVar4;
		MethodInfo pMVar5;
		Transform pUVar6;
		MapEditorAddObjectPopup pUVar7;
		MapEditorAddVariantPopup pUVar8;
		MapEditorTexturePopup pUVar9;
		GameObject pUVar10;
		MapEditorCameraPopup pUVar11;
		MapEditorInfoPopup pUVar12;
		MapEditorSettingsPopup pUVar13;
		MapEditorCustomLogicPopup pUVar14;
		MapEditorAddComponentPopup pUVar15;
		MapEditorMapObjectPickerPopup pUVar16;
		MapEditorErrorPopup pUVar17;
		MapEditorCustomAssetPopup pUVar18;
		MapEditorWeatherPopup pUVar19;
		MapEditorVersionConversionPopup pUVar20;

		this.SetupPopups();
		pUVar6 = this.transform;
		pUVar7 = ElementFactory.CreateDefaultPopup<MapEditorAddObjectPopup>(pUVar6, false);
		this.AddObjectPopup = pUVar7;
		pUVar6 = this.transform;
		pUVar8 = ElementFactory.CreateDefaultPopup<MapEditorAddVariantPopup>(pUVar6, false);
		this.AddVariantPopup = pUVar8;
		pUVar6 = this.transform;
		pUVar9 = ElementFactory.CreateDefaultPopup<MapEditorTexturePopup>(pUVar6, false);
		targetAddress = &this.TexturePopup;
		this.TexturePopup = pUVar9;
		pUVar7 = this.AddObjectPopup;
		if (pUVar7 != null) {
			pUVar10 = pUVar7.gameObject;
			ElementFactory.SetAnchor(pUVar10, 4, 4, (Vector2)0xc2820000);
			pUVar9 = *targetAddress;
			if (pUVar9 != null) {
				pUVar10 = pUVar9.gameObject;
				ElementFactory.SetAnchor(pUVar10, 4, 4, (Vector2)0xc2820000);
				pUVar6 = this.transform;
				pUVar11 = ElementFactory.CreateDefaultPopup<MapEditorCameraPopup>(pUVar6, false);
				this.CameraPopup = pUVar11;
				pUVar6 = this.transform;
				pUVar12 = ElementFactory.CreateDefaultPopup<MapEditorInfoPopup>(pUVar6, false);
				this.InfoPopup = pUVar12;
				pUVar6 = this.transform;
				pUVar13 = ElementFactory.CreateDefaultPopup<MapEditorSettingsPopup>(pUVar6, false);
				this.SettingsPopup = pUVar13;
				pUVar6 = this.transform;
				pUVar14 = ElementFactory.CreateDefaultPopup<MapEditorCustomLogicPopup>(pUVar6, false);
				this.CustomLogicPopup = pUVar14;
				pUVar6 = this.transform;
				pUVar15 = ElementFactory.CreateDefaultPopup<MapEditorAddComponentPopup>(pUVar6, false);
				this.AddComponentPopup = pUVar15;
				pUVar6 = this.transform;
				pUVar16 = ElementFactory.CreateDefaultPopup<MapEditorMapObjectPickerPopup>(pUVar6, false);
				this.MapObjectPickerPopup = pUVar16;
				pUVar6 = this.transform;
				pUVar17 = ElementFactory.CreateDefaultPopup<MapEditorErrorPopup>(pUVar6, false);
				this.ErrorPopup = pUVar17;
				pUVar6 = this.transform;
				pUVar18 = ElementFactory.CreateDefaultPopup<MapEditorCustomAssetPopup>(pUVar6, false);
				this.CustomAssetsPopup = pUVar18;
				pUVar6 = this.transform;
				pUVar19 = ElementFactory.CreateDefaultPopup<MapEditorWeatherPopup>(pUVar6, false);
				this.WeatherPopup = pUVar19;
				pUVar6 = this.transform;
				pUVar20 = ElementFactory.CreateDefaultPopup<MapEditorVersionConversionPopup>(pUVar6, false);
				this.VersionConversionPopup = pUVar20;
				pSVar3 = this._popups;
				if (pSVar3 != null) {
					pUVar7 = this.AddObjectPopup;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = pSVar3._items;
					if (pUVar4 != null) {
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pUVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pUVar4[(int)uVar2] = (BasePopup)pUVar7;
						}
						else {
							pSVar3.AddWithResize((object)pUVar7);
						}
						pSVar3 = this._popups;
						if (pSVar3 != null) {
							pUVar8 = this.AddVariantPopup;
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = pSVar3._items;
							if (pUVar4 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar4.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar4[(int)uVar2] = (BasePopup)pUVar8;
								}
								else {
									pSVar3.AddWithResize((object)pUVar8);
								}
								pSVar3 = this._popups;
								if (pSVar3 != null) {
									pUVar9 = this.TexturePopup;
									piVar1 = &pSVar3._version;
									*piVar1 = *piVar1 + 1;
									pUVar4 = pSVar3._items;
									if (pUVar4 != null) {
										uVar2 = pSVar3._size;
										if (uVar2 < (uint)pUVar4.Length) {
											pSVar3._size = uVar2 + 1;
											pUVar4[(int)uVar2] = (BasePopup)pUVar9;
										}
										else {
											pSVar3.AddWithResize((object)pUVar9);
										}
										pSVar3 = this._popups;
										if (pSVar3 != null) {
											pUVar11 = this.CameraPopup;
											piVar1 = &pSVar3._version;
											*piVar1 = *piVar1 + 1;
											pUVar4 = pSVar3._items;
											if (pUVar4 != null) {
												uVar2 = pSVar3._size;
												if (uVar2 < (uint)pUVar4.Length) {
													pSVar3._size = uVar2 + 1;
													pUVar4[(int)uVar2] = (BasePopup)pUVar11;
												}
												else {
													pSVar3.AddWithResize((object)pUVar11);
												}
												pSVar3 = this._popups;
												if (pSVar3 != null) {
													pUVar12 = this.InfoPopup;
													piVar1 = &pSVar3._version;
													*piVar1 = *piVar1 + 1;
													pUVar4 = pSVar3._items;
													if (pUVar4 != null) {
														uVar2 = pSVar3._size;
														if (uVar2 < (uint)pUVar4.Length) {
															pSVar3._size = uVar2 + 1;
															pUVar4[(int)uVar2] = (BasePopup)pUVar12;
														}
														else {
															pSVar3.AddWithResize((object)pUVar12);
														}
														pSVar3 = this._popups;
														if (pSVar3 != null) {
															pUVar13 = this.SettingsPopup;
															piVar1 = &pSVar3._version;
															*piVar1 = *piVar1 + 1;
															pUVar4 = pSVar3._items;
															if (pUVar4 != null) {
																uVar2 = pSVar3._size;
																if (uVar2 < (uint)pUVar4.Length) {
																	pSVar3._size = uVar2 + 1;
																	pUVar4[(int)uVar2] = (BasePopup)pUVar13;
																}
																else {
																	pSVar3.AddWithResize((object)pUVar13);
																}
																pSVar3 = this._popups;
																if (pSVar3 != null) {
																	pUVar14 = this.CustomLogicPopup;
																	piVar1 = &pSVar3._version;
																	*piVar1 = *piVar1 + 1;
																	pUVar4 = pSVar3._items;
																	if (pUVar4 != null) {
																		uVar2 = pSVar3._size;
																		if (uVar2 < (uint)pUVar4.Length) {
																			pSVar3._size = uVar2 + 1;
																			pUVar4[(int)uVar2] = (BasePopup)pUVar14;
																		}
																		else {
																			pSVar3.AddWithResize((object)pUVar14);
																		}
																		pSVar3 = this._popups;
																		if (pSVar3 != null) {
																			pUVar15 = this.AddComponentPopup;
																			piVar1 = &pSVar3._version;
																			*piVar1 = *piVar1 + 1;
																			pUVar4 = pSVar3._items;
																			if (pUVar4 != null) {
																				uVar2 = pSVar3._size;
																				if (uVar2 < (uint)pUVar4.Length) {
																					pSVar3._size = uVar2 + 1;
																					pUVar4[(int)uVar2] = (BasePopup)pUVar15;
																				}
																				else {
																					pSVar3.AddWithResize((object)pUVar15);
																				}
																				pSVar3 = this._popups;
																				if (pSVar3 != null) {
																					pUVar16 = this.MapObjectPickerPopup;
																					piVar1 = &pSVar3._version;
																					*piVar1 = *piVar1 + 1;
																					pUVar4 = pSVar3._items;
																					if (pUVar4 != null) {
																						uVar2 = pSVar3._size;
																						if (uVar2 < (uint)pUVar4.Length) {
																							pSVar3._size = uVar2 + 1;
																							pUVar4[(int)uVar2] = (BasePopup)pUVar16;
																						}
																						else {
																							pSVar3.AddWithResize((object)pUVar16);
																						}
																						pSVar3 = this._popups;
																						if (pSVar3 != null) {
																							pUVar17 = this.ErrorPopup;
																							piVar1 = &pSVar3._version;
																							*piVar1 = *piVar1 + 1;
																							pUVar4 = pSVar3._items;
																							if (pUVar4 != null) {
																								uVar2 = pSVar3._size;
																								if (uVar2 < (uint)pUVar4.Length) {
																									pSVar3._size = uVar2 + 1;
																									pUVar4[(int)uVar2] = (BasePopup)pUVar17;
																								}
																								else {
																									pSVar3.AddWithResize((object)pUVar17);
																								}
																								pSVar3 = this._popups;
																								if (pSVar3 != (List<BasePopup>)0x0) {
																									pUVar18 = this.CustomAssetsPopup;
																									piVar1 = &pSVar3._version;
																									*piVar1 = *piVar1 + 1;
																									pUVar4 = pSVar3._items;
																									if (pUVar4 != null) {
																										uVar2 = pSVar3._size;
																										if (uVar2 < (uint)pUVar4.Length) {
																											pSVar3._size = uVar2 + 1;
																											pUVar4[(int)uVar2] = (BasePopup)pUVar18;
																										}
																										else {
																											pSVar3.AddWithResize((object)pUVar18);
																										}
																										pSVar3 = this._popups;
																										if (pSVar3 != null) {
																											pUVar19 = this.WeatherPopup;
																											piVar1 = &pSVar3._version;
																											*piVar1 = *piVar1 + 1;
																											pUVar4 = pSVar3._items;
																											if (pUVar4 != null) {
																												uVar2 = pSVar3._size;
																												if (uVar2 < (uint)pUVar4.Length) {
																													pSVar3._size = uVar2 + 1;
																													pUVar4[(int)uVar2] =(BasePopup)pUVar19;
																												}
																												else {
																													pSVar3.AddWithResize((object)pUVar19);
																												}
																												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add ;
																												pSVar3 = this._popups;
																												if (pSVar3 != null) {
																													pUVar20 = this.VersionConversionPopup;
																													piVar1 = &pSVar3._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar4 = pSVar3._items;
																													if (pUVar4 != null) {
																														uVar2 = pSVar3._size;
																														if (uVar2 < (uint)pUVar4.Length) {
																															pSVar3._size = uVar2 + 1;
																															pUVar4[(int)uVar2] =(BasePopup)pUVar20;
																															return;
																														}

																												pSVar3.AddWithResize((object)pUVar20);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A1")]
	[Address(RVA = "0x5C96370", Offset = "0x5C95370", VA = "0x5C96370")]
	public void SetDrag(bool active, Vector2 start, Vector2 end)
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$SetDrag): 32 lines keep C-only constructs
		Image pUVar1;
		BaseMenu __this_00;
		byte[] auVar2 = new byte[16];
		byte[] auVar3 = new byte[16];
		bool bVar4;
		GameObject pUVar5;
		Canvas __this_01;
		RectTransform pUVar6;
		float fVar7;
		Vector2 value;
		ulong in_XMM0_Qb;
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float local_28;
		float fStack_24;

		auVar10._8_4_ = in_XMM1_Dc;
		auVar10._0_8_ = end;
		auVar10._12_4_ = in_XMM1_Dd;
		pUVar1 = this.DragImage;
		if (active) {
			if (pUVar1 != null) {
				pUVar5 = pUVar1.gameObject;
				if (pUVar5 != null) {
					bVar4 = pUVar5.activeSelf;
					if (!bVar4) {
						pUVar1 = this.DragImage;
						if (pUVar1 == null) goto label_05d9653d;
						pUVar5 = pUVar1.gameObject;
						if (pUVar5 == null) goto label_05d9653d;
						pUVar5.SetActive(true);
					}
					__this_00 = UIManager.CurrentMenu;
					if (__this_00 != null) {
						__this_01 = __this_00.GetComponent<Canvas>();
						if (__this_01 != null) {
							fVar7 = __this_01.scaleFactor;
							pUVar1 = this.DragImage;
							if (pUVar1 != null) {
								pUVar6 = pUVar1.rectTransform;
								if (pUVar6 != null) {
									auVar8._8_8_ = in_XMM0_Qb;
									auVar8._0_8_ = start;
									auVar8 = minps(auVar8, auVar10);
									auVar9._4_4_ = fVar7;
									auVar9._0_4_ = fVar7;
									auVar9._8_4_ = fVar7;
									auVar9._12_4_ = fVar7;
									auVar9 = divps(auVar8, auVar9);
									pUVar6.anchoredPosition = (Vector2)auVar9._0_8_;
									pUVar1 = this.DragImage;
									if (pUVar1 != null) {
										pUVar6 = pUVar1.rectTransform;
										if (pUVar6 != null) {
											auVar3._8_8_ = in_XMM0_Qb;
											auVar3._0_8_ = start;
											auVar10 = maxps(auVar3, auVar10);
											auVar2._4_4_ = fVar7;
											auVar2._0_4_ = fVar7;
											auVar2._8_4_ = fVar7;
											auVar2._12_4_ = fVar7;
											auVar10 = divps(auVar10, auVar2);
											local_28 = auVar9._0_4_;
											fStack_24 = auVar9._4_4_;
											value.x = auVar10._0_4_ - local_28;
											value.y = auVar10._4_4_ - fStack_24;
											pUVar6.sizeDelta = value;
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
		else if (pUVar1 != null) {
			pUVar5 = pUVar1.gameObject;
			if (pUVar5 != null) {
				bVar4 = pUVar5.activeSelf;
				if (!bVar4) {
					return;
				}
				pUVar1 = this.DragImage;
				if (pUVar1 != null) {
					pUVar5 = pUVar1.gameObject;
					if (pUVar5 != null) {
						pUVar5.SetActive(false);
						return;
					}
				}
			}
		}
	label_05d9653d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A2")]
	[Address(RVA = "0x5C96550", Offset = "0x5C95550", VA = "0x5C96550")]
	public void ShowInspector(MapObject obj)
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ShowInspector): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MapObject[] pMVar3;
		List<MapObject> objs;

		objs = new List<MapObject>();
		if (objs != null) {
			piVar1 = &objs._version;
			*piVar1 = *piVar1 + 1;
			pMVar3 = objs._items;
			if (pMVar3 != null) {
				uVar2 = objs._size;
				if (uVar2 < (uint)pMVar3.Length) {
					objs._size = uVar2 + 1;
					pMVar3[(int)uVar2] = obj;
				}
				else {
					objs.AddWithResize((object)obj);
				}
				this.ShowInspector(objs);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A3")]
	[Address(RVA = "0x5C96630", Offset = "0x5C95630", VA = "0x5C96630")]
	public void ShowInspector(List<MapObject> objs)
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ShowInspector): 2 lines keep C-only constructs
		Transform parent;
		MapEditorInspectPanel pUVar1;
		RectTransform rt;
		MethodInfo* method_00;

		this.HideInspector();
		if ((objs == null) || (objs._size == 0)) {
			return;
		}
		parent = this.transform;
		method_00 = &MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorInspectPanel;
		pUVar1 = ElementFactory.CreateHeadedPanel<MapEditorInspectPanel>(parent, false);
		this.InspectPanel = pUVar1;
		pUVar1 = this.InspectPanel;
		if (pUVar1 != null) {
			rt = pUVar1.GetComponent<RectTransform>();
			this.ApplyStretchAnchor(rt, false);
			pUVar1 = this.InspectPanel;
			if (pUVar1 != null) {
				pUVar1.Show(objs);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A4")]
	[Address(RVA = "0x5C96940", Offset = "0x5C95940", VA = "0x5C96940")]
	public void RebuildInspectorPreservingScroll(List<MapObject> objs)
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$RebuildInspectorPreservingScroll): clean
		MapEditorInspectPanel pUVar1;
		bool bVar2;
		float position;

		pUVar1 = this.InspectPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.InspectPanel;
			if (pUVar1 == null) goto label_05d96a21;
			position = pUVar1.GetScrollPosition();
		}
		else {
			position = 1.0;
		}
		this.ShowInspector(objs);
		pUVar1 = this.InspectPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (!bVar2) {
			return;
		}
		pUVar1 = this.InspectPanel;
		if (pUVar1 != null) {
			pUVar1.RestoreScrollPosition(position);
			return;
		}
	label_05d96a21: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A5")]
	[Address(RVA = "0x5C96710", Offset = "0x5C95710", VA = "0x5C96710")]
	public void HideInspector()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$HideInspector): clean
		MapEditorInspectPanel pUVar1;
		bool bVar2;
		Object obj;

		pUVar1 = this.InspectPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.InspectPanel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			obj = (Object)pUVar1.gameObject;
			Object.Destroy(obj);
			return;
		}
		return;
	}

	[Token(Token = "0x60053A6")]
	[Address(RVA = "0x5C96A30", Offset = "0x5C95A30", VA = "0x5C96A30")]
	public void ShowBrushPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ShowBrushPanel): 3 lines keep C-only constructs
		MapEditorBrushPanel* targetAddress;
		bool bVar1;
		Transform parent;
		MapEditorBrushPanel pUVar2;
		GameObject obj;

		this.HideInspector();
		pUVar2 = this.BrushPanel;
		targetAddress = &this.BrushPanel;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			parent = this.transform;
			pUVar2 = ElementFactory.CreateHeadedPanel<MapEditorBrushPanel>(parent, false);
			this.BrushPanel = pUVar2;
			pUVar2 = this.BrushPanel;
			if (pUVar2 == null) goto label_05d96b10;
			obj = pUVar2.gameObject;
			ElementFactory.SetAnchor(obj, 2, 2, (Vector2)0xc2820000c0a00000);
		}
		pUVar2 = *targetAddress;
		if (pUVar2 != null) {
			pUVar2.Show();
			return;
		}
	label_05d96b10: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A7")]
	[Address(RVA = "0x5C96B20", Offset = "0x5C95B20", VA = "0x5C96B20")]
	public void HideBrushPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$HideBrushPanel): 4 lines keep C-only constructs
		MapEditorBrushPanel x;
		bool bVar1;
		Object obj;
		MapEditorBrushPanel* targetAddress;

		x = this.BrushPanel;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			targetAddress = &this.BrushPanel;
			if (*targetAddress == null) {
				throw new NullReferenceException();
			}
			obj = (Object)(*targetAddress).gameObject;
			Object.Destroy(obj);
			*targetAddress = null;
			return;
		}
		return;
	}

	[Token(Token = "0x60053A8")]
	[Address(RVA = "0x5C96BD0", Offset = "0x5C95BD0", VA = "0x5C96BD0")]
	public void ShowRulerPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ShowRulerPanel): 3 lines keep C-only constructs
		MapEditorRulerPanel* targetAddress;
		bool bVar1;
		Transform parent;
		MapEditorRulerPanel pUVar2;
		GameObject obj;

		this.HideInspector();
		pUVar2 = this.RulerPanel;
		targetAddress = &this.RulerPanel;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			parent = this.transform;
			pUVar2 = ElementFactory.CreateHeadedPanel<MapEditorRulerPanel>(parent, false);
			this.RulerPanel = pUVar2;
			pUVar2 = this.RulerPanel;
			if (pUVar2 == null) goto label_05d96cbb;
			obj = pUVar2.gameObject;
			ElementFactory.SetAnchor(obj, 2, 2, (Vector2)0xc2820000c0a00000);
		}
		pUVar2 = *targetAddress;
		if (pUVar2 != null) {
			pUVar2.Show();
			pUVar2.Rebuild();
			return;
		}
	label_05d96cbb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053A9")]
	[Address(RVA = "0x5C96CE0", Offset = "0x5C95CE0", VA = "0x5C96CE0")]
	public void HideRulerPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$HideRulerPanel): 4 lines keep C-only constructs
		MapEditorRulerPanel x;
		bool bVar1;
		Object obj;
		MapEditorRulerPanel* targetAddress;

		x = this.RulerPanel;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			targetAddress = &this.RulerPanel;
			if (*targetAddress == null) {
				throw new NullReferenceException();
			}
			obj = (Object)(*targetAddress).gameObject;
			Object.Destroy(obj);
			*targetAddress = null;
			return;
		}
		return;
	}

	[Token(Token = "0x60053AA")]
	[Address(RVA = "0x5C96D90", Offset = "0x5C95D90", VA = "0x5C96D90")]
	public void SyncRulerPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$SyncRulerPanel): clean
		MapEditorRulerPanel pUVar1;
		bool bVar2;

		pUVar1 = this.RulerPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.RulerPanel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.Rebuild();
			return;
		}
		return;
	}

	[Token(Token = "0x60053AB")]
	[Address(RVA = "0x5C98340", Offset = "0x5C97340", VA = "0x5C98340")]
	public void SyncBrushPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$SyncBrushPanel): clean
		MapEditorBrushPanel pUVar1;
		bool bVar2;

		pUVar1 = this.BrushPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.BrushPanel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.Rebuild();
			return;
		}
		return;
	}

	[Token(Token = "0x60053AC")]
	[Address(RVA = "0x5C983C0", Offset = "0x5C973C0", VA = "0x5C983C0")]
	public void SyncBrushPanelValues()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$SyncBrushPanelValues): clean
		MapEditorBrushPanel pUVar1;
		bool bVar2;

		pUVar1 = this.BrushPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.BrushPanel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.SyncValues();
			return;
		}
		return;
	}

	[Token(Token = "0x60053AD")]
	[Address(RVA = "0x5C98440", Offset = "0x5C97440", VA = "0x5C98440")]
	public void SyncInspector()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$SyncInspector): clean
		MapEditorInspectPanel pUVar1;
		bool bVar2;

		pUVar1 = this.InspectPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.InspectPanel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			this.ShowInspector(pUVar1._mapObjects);
			return;
		}
		return;
	}

	[Token(Token = "0x60053AE")]
	[Address(RVA = "0x5C984D0", Offset = "0x5C974D0", VA = "0x5C984D0")]
	public void ShowHierarchyPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ShowHierarchyPanel): 5 lines keep C-only constructs
		MapEditorHierarchyPanel* targetAddress;
		MapEditorTopPanel pUVar1;
		bool bVar2;
		Object obj;
		Transform parent;
		MapEditorHierarchyPanel pUVar3;
		RectTransform rt;
		MethodInfo* method_00;

		pUVar3 = this.HierarchyPanel;
		targetAddress = &this.HierarchyPanel;
		bVar2 = ((Object)pUVar3 != null);
		if (bVar2) {
			pUVar3 = *targetAddress;
			if (pUVar3 == null) goto label_05d98644;
			obj = (Object)pUVar3.gameObject;
			Object.Destroy(obj);
		}
		parent = this.transform;
		method_00 = &MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorHierarchyPanel;
		pUVar3 = ElementFactory.CreateHeadedPanel<MapEditorHierarchyPanel>(parent, false);
		this.HierarchyPanel = pUVar3;
		pUVar3 = this.HierarchyPanel;
		if (pUVar3 != null) {
			rt = pUVar3.GetComponent<RectTransform>();
			this.ApplyStretchAnchor(rt, true);
			pUVar3 = this.HierarchyPanel;
			if (pUVar3 != null) {
				pUVar3.Show();
				pUVar1 = this._topPanel;
				bVar2 = ((Object)pUVar1 != null);
				if (!bVar2) {
					return;
				}
				pUVar1 = this._topPanel;
				if (pUVar1 != null) {
					pUVar1.RefreshSideToolbarPosition();
					return;
				}
			}
		}
	label_05d98644: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053AF")]
	[Address(RVA = "0x5C967B0", Offset = "0x5C957B0", VA = "0x5C967B0")]
	private void ApplyStretchAnchor(RectTransform rt, bool isLeft)
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ApplyStretchAnchor): 1 lines keep C-only constructs
		MapEditorTopPanel pUVar1;
		Vector2 UVar2;
		Vector2 UVar3;
		bool bVar4;
		RectTransform __this_00;
		float fVar5;
		float fVar6;
		float local_48;
		float fStack_44;

		pUVar1 = this._topPanel;
		bVar4 = ((Object)pUVar1 != null);
		if (bVar4) {
			pUVar1 = this._topPanel;
			if ((pUVar1 == null) ||(__this_00 = pUVar1.GetComponent<RectTransform>(), __this_00 == null)) goto label_05d96931;
			UVar2 = __this_00.sizeDelta;
			UVar3 = __this_00.anchoredPosition;
			fStack_44 = UVar2.y;
			fStack_44 = fStack_44 - UVar3.y;
			fVar5 = 0.0;
			if (0.0 <= fStack_44) {
				fVar5 = fStack_44;
			}
		}
		else {
			fVar5 = 55.0;
		}
		if (rt != null) {
			UVar2 = rt.sizeDelta;
			local_48 = UVar2.x;
			if (isLeft) {
				rt.anchorMin = (Vector2)0x0;
				rt.anchorMax = (Vector2)0x3f80000000000000 ;
				fVar6 = 0.0;
			}
			else {
				rt.anchorMin = (Vector2)0x3f800000;
				rt.anchorMax = (Vector2)0x3f8000003f800000 ;
				fVar6 = -local_48;
				local_48 = 0.0;
			}
			UVar2.y = 0.0;
			UVar2.x = fVar6;
			rt.offsetMin = UVar2;
			rt.offsetMax = (Vector2)(CONCAT44(fVar5, local_48) ^ 0x8000000000000000);
			return;
		}
	label_05d96931: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053B0")]
	[Address(RVA = "0x5C98770", Offset = "0x5C97770", VA = "0x5C98770")]
	public void SyncHierarchyPanel()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$SyncHierarchyPanel): clean
		MapEditorHierarchyPanel __this_00;

		__this_00 = this.HierarchyPanel;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Sync();
		return;
	}

	[Token(Token = "0x60053B1")]
	[Address(RVA = "0x5C95AB0", Offset = "0x5C94AB0", VA = "0x5C95AB0")]
	public void RebuildPanels()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$RebuildPanels): clean
		return;
	}

	[Token(Token = "0x60053B2")]
	[Address(RVA = "0x5C98790", Offset = "0x5C97790", VA = "0x5C98790")]
	public void ApplyHUDScale()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ApplyHUDScale): 5 lines keep C-only constructs
		MapEditorHierarchyPanel pUVar1;
		MapEditorInspectPanel pUVar2;
		bool bVar3;
		RectTransform rt;
		RectTransform* in_RCX;

		pUVar1 = this.HierarchyPanel;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			pUVar1 = this.HierarchyPanel;
			if (pUVar1 == null) goto label_05d988eb;
			rt = (RectTransform)pUVar1.transform;
			if (rt != null) {
				in_RCX = &typeof(RectTransform);
				if (rt.klass != typeof(RectTransform)) goto label_05d988f0;
			}
			this.ApplyStretchAnchor(rt, true);
			pUVar1 = this.HierarchyPanel;
			if (pUVar1 == null) goto label_05d988eb;
			pUVar1.RefreshContentScale();
			pUVar1 = this.HierarchyPanel;
			if (pUVar1 == null) goto label_05d988eb;
			pUVar1.Sync();
		}
		pUVar2 = this.InspectPanel;
		bVar3 = ((Object)pUVar2 != null);
		if (!bVar3) {
			return;
		}
		pUVar2 = this.InspectPanel;
		if (pUVar2 != null) {
			rt = (RectTransform)pUVar2.transform;
			if (rt != null) {
				in_RCX = &typeof(RectTransform);
				if (rt.klass != typeof(RectTransform)) {
	label_05d988f0: ;
					throw new InvalidCastException();
				}
			}
			this.ApplyStretchAnchor(rt, false);
			pUVar2 = this.InspectPanel;
			if (pUVar2 != null) {
				pUVar2.RefreshContentScale();
				return;
			}
		}
	label_05d988eb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053B3")]
	[Address(RVA = "0x5C98900", Offset = "0x5C97900", VA = "0x5C98900")]
	public float GetMinMouseX()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$GetMinMouseX): clean
		MapEditorHierarchyPanel pUVar1;
		bool bVar2;
		float fVar3;

		pUVar1 = this.HierarchyPanel;
		bVar2 = ((Object)pUVar1 != null);
		fVar3 = 0.0;
		if (bVar2) {
			pUVar1 = this.HierarchyPanel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			fVar3 = pUVar1.GetPhysicalWidth();
			fVar3 = fVar3 + 10.0;
		}
		return fVar3;
	}

	[Token(Token = "0x60053B4")]
	[Address(RVA = "0x5C98980", Offset = "0x5C97980", VA = "0x5C98980")]
	public float GetMaxMouseX()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$GetMaxMouseX): clean
		MapEditorInspectPanel pUVar1;
		MapEditorBrushPanel pUVar2;
		MapEditorRulerPanel pUVar3;
		bool bVar4;
		int iVar5;
		GameObject pUVar6;
		float fVar7;
		float local_24;

		iVar5 = Screen.width;
		pUVar1 = this.InspectPanel;
		local_24 = (float)iVar5;
		bVar4 = ((Object)pUVar1 != null);
		if (bVar4) {
			pUVar1 = this.InspectPanel;
			if ((pUVar1 == null) ||(pUVar6 = pUVar1.gameObject, pUVar6 == null)) goto label_05d98b53;
			bVar4 = pUVar6.activeSelf;
			if (bVar4) {
				pUVar1 = this.InspectPanel;
				if (pUVar1 == null) goto label_05d98b53;
				fVar7 = pUVar1.GetPhysicalWidth();
				local_24 = local_24 - (fVar7 + 10.0);
			}
		}
		pUVar2 = this.BrushPanel;
		bVar4 = ((Object)pUVar2 != null);
		if (bVar4) {
			pUVar2 = this.BrushPanel;
			if ((pUVar2 == null) ||(pUVar6 = pUVar2.gameObject, pUVar6 == null)) goto label_05d98b53;
			bVar4 = pUVar6.activeSelf;
			if (bVar4) {
				pUVar2 = this.BrushPanel;
				if (pUVar2 == null) goto label_05d98b53;
				fVar7 = pUVar2.GetPhysicalWidth();
				local_24 = local_24 - (fVar7 + 10.0);
			}
		}
		pUVar3 = this.RulerPanel;
		bVar4 = ((Object)pUVar3 != null);
		if (!bVar4) {
			return local_24;
		}
		pUVar3 = this.RulerPanel;
		if ((pUVar3 != null) &&(pUVar6 = pUVar3.gameObject, pUVar6 != null)) {
			bVar4 = pUVar6.activeSelf;
			if (!bVar4) {
				return local_24;
			}
			pUVar3 = this.RulerPanel;
			if (pUVar3 != null) {
				fVar7 = pUVar3.GetPhysicalWidth();
				return local_24 - (fVar7 + 10.0);
			}
		}
	label_05d98b53: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053B5")]
	[Address(RVA = "0x5C98B60", Offset = "0x5C97B60", VA = "0x5C98B60")]
	public float GetMinMouseY()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$GetMinMouseY): clean
		return 0.0;
	}

	[Token(Token = "0x60053B6")]
	[Address(RVA = "0x5C98B70", Offset = "0x5C97B70", VA = "0x5C98B70")]
	public float GetMaxMouseY()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$GetMaxMouseY): clean
		MapEditorTopPanel pUVar1;
		bool bVar2;
		int iVar3;
		float fVar4;

		pUVar1 = this._topPanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._topPanel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			fVar4 = pUVar1.GetPhysicalHeight();
		}
		else {
			fVar4 = 60.0;
		}
		iVar3 = Screen.height;
		return (float)iVar3 - fVar4;
	}

	[Token(Token = "0x60053B7")]
	[Address(RVA = "0x5C98C10", Offset = "0x5C97C10", VA = "0x5C98C10")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$Update): 1 lines keep C-only constructs
		Object x;
		bool bVar1;
		bool bVar2;
		EventSystem pUVar3;
		InputField x_00;
		TMP_InputField x_01;

		if (Il2CppMethodInitialized_07548071 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07548071 = true;
		}
		this.UpdateMouseUI();
		pUVar3 = EventSystem.current;
		if (pUVar3 == null) goto label_05d98d9d;
		x = (Object)pUVar3.m_CurrentSelected;
		bVar2 = false;
		bVar1 = (x != null);
		if (bVar1) {
			bVar1 = MobileInputBridge.Enabled;
			bVar2 = true;
			if (bVar1) {
				if (x == null) goto label_05d98d9d;
				x_00 = x.GetComponent<InputField>();
				bVar1 = ((Object)x_00 != null);
				if (!bVar1) {
					x_01 = x.GetComponent<TMP_InputField>() ;
					bVar2 = ((Object)x_01 != null);
					if (this == null) goto label_05d98d9d;
					goto label_05d98d84;
				}
			}
		}
		if (this != null) {
	label_05d98d84: ;
			this.IsInputFocused = bVar2;
			return;
		}
	label_05d98d9d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053B8")]
	[Address(RVA = "0x5C98F10", Offset = "0x5C97F10", VA = "0x5C98F10")]
	public void ToggleAddObjectPopup()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$ToggleAddObjectPopup): clean
		MapEditorAddObjectPopup pUVar1;
		MapEditorAddVariantPopup pUVar2;
		bool bVar3;

		pUVar1 = this.AddObjectPopup;
		if (pUVar1 == null) goto label_05d98f9c;
		if (pUVar1.IsActive == false) {
			pUVar2 = this.AddVariantPopup;
			if (pUVar2 == null) goto label_05d98f9c;
			if (pUVar2.IsActive == false) {
				bVar3 = this.IsPopupActive();
				if (bVar3) {
					return;
				}
				pUVar1 = this.AddObjectPopup;
				if (pUVar1 != null) {
					pUVar1.Show();
					return;
				}
				goto label_05d98f9c;
			}
		}
		pUVar1.Hide();
		pUVar2 = this.AddVariantPopup;
		if (pUVar2 != null) {
			pUVar2.Hide();
			return;
		}
	label_05d98f9c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053B9")]
	[Address(RVA = "0x5C98FB0", Offset = "0x5C97FB0", VA = "0x5C98FB0")]
	public bool IsPopupActive()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$IsPopupActive): 3 lines keep C-only constructs
		List<BasePopup> __this_00;
		bool bVar1;
		bool bVar2;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this._popups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_28 = (byte)&local_48;
		while(true) {
			bVar2 = local_48.MoveNext();
			if (!bVar2) {
				local_48.Dispose();
				return bVar1;
			}
			if (local_48._current == null) break;
			if (*(sbyte)&local_48._current[9].klass != false) {
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053BA")]
	[Address(RVA = "0x5C98DB0", Offset = "0x5C97DB0", VA = "0x5C98DB0")]
	private void UpdateMouseUI()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$UpdateMouseUI): 1 lines keep C-only constructs
		MapEditorTopPanel pUVar1;
		MapEditorHierarchyPanel pUVar2;
		bool bVar3;
		bool bVar4;
		float fVar5;
		Vector3 UVar6;
		float local_48;
		float fStack_44;

		UVar6 = Input.mousePosition;
		bVar3 = this.IsPopupActive();
		bVar4 = true;
		if (!bVar3) {
			pUVar1 = this._topPanel;
			if (pUVar1 == null) goto label_05d98f00;
			bVar3 = pUVar1.IsDropdownOpen();
			if (!bVar3) {
				pUVar1 = this._topPanel;
				if (pUVar1 == null) goto label_05d98f00;
				bVar3 = pUVar1.IsPointerOverSideToolbar((Vector2)UVar6._0_8_);
				if (!bVar3) {
					pUVar2 = this.HierarchyPanel;
					bVar3 = ((Object)pUVar2 != null);
					fVar5 = 0.0;
					if (bVar3) {
						pUVar2 = this.HierarchyPanel;
						if (pUVar2 == null) goto label_05d98f00;
						fVar5 = pUVar2.GetPhysicalWidth();
						fVar5 = fVar5 + 10.0;
					}
					local_48 = UVar6.x;
					if (fVar5 <= local_48) {
						fVar5 = this.GetMaxMouseX();
						fStack_44 = UVar6.y;
						if ((local_48 <= fVar5) && (0.0 <= fStack_44)) {
							fVar5 = this.GetMaxMouseY();
							bVar4 = fVar5 < fStack_44;
						}
					}
				}
			}
		}
		if (this != null) {
			this.IsMouseUI = bVar4;
			return;
		}
	label_05d98f00: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053BB")]
	[Address(RVA = "0x5C99410", Offset = "0x5C98410", VA = "0x5C99410")]
	public bool IsTouchUI(Vector3 position)
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$IsTouchUI): clean
		MapEditorTopPanel __this_00;
		MapEditorHierarchyPanel pUVar1;
		bool bVar2;
		bool bVar3;
		float fVar4;
		float local_28;
		float fStack_24;

		bVar2 = this.IsPopupActive();
		if (!bVar2) {
			__this_00 = this._topPanel;
			if (__this_00 == null) {
	label_05d994fa: ;
				throw new NullReferenceException();
			}
			bVar2 = __this_00.IsDropdownOpen();
			if (!bVar2) {
				pUVar1 = this.HierarchyPanel;
				bVar2 = ((Object)pUVar1 != null);
				fVar4 = 0.0;
				if (bVar2) {
					pUVar1 = this.HierarchyPanel;
					if (pUVar1 == null) goto label_05d994fa;
					fVar4 = pUVar1.GetPhysicalWidth();
					fVar4 = fVar4 + 10.0;
				}
				local_28 = position.x;
				if (fVar4 <= local_28) {
					fVar4 = this.GetMaxMouseX();
					fStack_24 = position.y;
					if ((local_28 <= fVar4) && (0.0 <= fStack_24)) {
						fVar4 = this.GetMaxMouseY();
						bVar3 = fVar4 < fStack_24;
					}
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x60053BC")]
	[Address(RVA = "0x5C99500", Offset = "0x5C98500", VA = "0x5C99500")]
	public MapEditorMenu()
	{
		// Lifted from source/cpp/UI/MapEditorMenu.c (UI.MapEditorMenu$$.ctor): clean
		base();
		return;
	}
}
