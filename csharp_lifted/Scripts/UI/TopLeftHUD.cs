// ==================== AoTTG2 cross-reference ====================
// Type: UI.TopLeftHUD
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/TopLeftHUD.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TopLeftHUD.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000875")]
internal class TopLeftHUD : BasePanel
{
	[Token(Token = "0x4002AE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public GameObject panel;

	[Token(Token = "0x4002AE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public GameObject telemetryCanvas;

	[Token(Token = "0x4002AE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public GameObject kdrCanvas;

	[Token(Token = "0x4002AE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public GameObject kdrAndLabel;

	[Token(Token = "0x4002AEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private ElementStyle _style;

	[Token(Token = "0x4002AEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Telemetry _telemetry;

	[Token(Token = "0x4002AEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private KDRPanel _kdr;

	[Token(Token = "0x17000E0C")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60050AF")]
		[Address(RVA = "0x5C53210", Offset = "0x5C52210", VA = "0x5C53210", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/TopLeftHUD.c (UI.TopLeftHUD$$get_ThemePanel): clean
			return "TopLeftHUD";
		}
	}

	[Token(Token = "0x17000E0D")]
	public KDRPanel KDR
	{
		[Token(Token = "0x60050B0")]
		[Address(RVA = "0x5C53240", Offset = "0x5C52240", VA = "0x5C53240")]
		get
		{
			// Lifted from source/cpp/UI/TopLeftHUD.c (UI.TopLeftHUD$$get_KDR): clean
			return this._kdr;
		}
	}

	[Token(Token = "0x60050B1")]
	[Address(RVA = "0x5C53250", Offset = "0x5C52250", VA = "0x5C53250", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/TopLeftHUD.c (UI.TopLeftHUD$$Setup): 31 lines keep C-only constructs
		GameObject* ppUVar1;
		GameObject* targetAddress;
		GameObject* targetAddress_00;
		ElementStyle* targetAddress_01;
		Object pUVar2;
		Transform pUVar3;
		GameObject pUVar4;
		RectTransform pUVar5;
		Transform pUVar6;
		String themePanel;
		ElementStyle __this_00;
		Telemetry pUVar7;
		KDRPanel pUVar8;
		MethodInfo method_01;
		Vector2 UVar9;

		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.Find("Content/Panel");
			if (pUVar3 != null) {
				pUVar4 = pUVar3.gameObject;
				ppUVar1 = &this.panel;
				this.panel = pUVar4;
				pUVar4 = new GameObject();
				targetAddress = &this.telemetryCanvas;
				this.telemetryCanvas = pUVar4;
				pUVar2 = (Object)this.telemetryCanvas;
				if (pUVar2 != null) {
					pUVar2.name = "Telemetry";
					if (*targetAddress != null) {
						(*targetAddress).AddComponent<Canvas>();
						if (*targetAddress != null) {
							pUVar5 = (*targetAddress).GetComponent<RectTransform>();
							UVar9 = ElementFactory.GetAnchorVector(0);
							if (pUVar5 != null) {
								pUVar5.pivot = UVar9;
								pUVar4 = new GameObject();
								targetAddress_00 = &this.kdrCanvas;
								this.kdrCanvas = pUVar4;
								pUVar2 = (Object)this.kdrCanvas;
								if (pUVar2 != null) {
									pUVar2.name = "KDR";
									if (*targetAddress_00 != null) {
										(*targetAddress_00).AddComponent<Canvas>();
										if (*targetAddress_00 != null) {
											pUVar5 = (*targetAddress_00).GetComponent<RectTransform>();
											UVar9 = ElementFactory.GetAnchorVector(0);
											if (pUVar5 != null) {
												pUVar5.pivot = UVar9;
												if (*targetAddress != null) {
													pUVar3 = (*targetAddress).transform;
													if (*ppUVar1 != null) {
														pUVar6 = (*ppUVar1).transform;
														if (pUVar3 != null) {
															pUVar3.SetParent(pUVar6);
															if (*targetAddress_00 != null) {
																pUVar3 = (*targetAddress_00).transform;
																if (*ppUVar1 != null) {
																	pUVar6 = (*ppUVar1).transform;
																	if (pUVar3 != null) {
																		pUVar3.SetParent(pUVar6);
																		themePanel = this.get_ThemePanel();
																		__this_00 = new ElementStyle(0x18, 120.0, 20.0, themePanel);
																		targetAddress_01 = &this._style;
																		this._style = __this_00;
																		pUVar4 = this.telemetryCanvas;
																		if (pUVar4 != null) {
																			pUVar3 = pUVar4.transform;
																			pUVar4 = ElementFactory.CreateVerticalGroup(pUVar3, 0.0, 0);
																			ElementFactory.SetAnchor(pUVar4, 0, 0, (Vector2)0x0);
																			if (pUVar4 != null) {
																				pUVar5 = pUVar4.GetComponent<RectTransform>();
																				if (pUVar5 != null) {
																					pUVar5.sizeDelta = (Vector2)0x4270000043c80000;
																					pUVar7 = pUVar4.AddComponent<Telemetry>();
																					this._telemetry = pUVar7;
																					pUVar7 = this._telemetry;
																					if (pUVar7 != null) {
																						pUVar7.Setup(*targetAddress_01);
																						if (*targetAddress_00 != null) {
																							pUVar3 = (*targetAddress_00).transform;
																							pUVar4 = ElementFactory.CreateVerticalGroup(pUVar3, 0.0, 0);
																							ppUVar1 = &this.kdrAndLabel;
																							this.kdrAndLabel = pUVar4;
																							ElementFactory.SetAnchor(this.kdrAndLabel, 0, 0, (Vector2)0x0);
																							pUVar4 = this.kdrAndLabel;
																							if (pUVar4 != null) {
																								pUVar5 = pUVar4.GetComponent<RectTransform>();
																								if (pUVar5 != null) {
																									pUVar5.sizeDelta = (Vector2)0x442f000043fa0000;
																									pUVar4 = *ppUVar1;
																									if (pUVar4 != null) {
																										pUVar3 = pUVar4.transform;
																										pUVar4 = ElementFactory.CreateVerticalGroup(pUVar3, 0.0, 0);
																										ElementFactory.SetAnchor(pUVar4, 0, 0, (Vector2)0x0);
																										if (pUVar4 != null) {
																											pUVar8 = pUVar4.AddComponent<KDRPanel>();
																											this._kdr = pUVar8;
																											pUVar8 = this._kdr;
																											if (pUVar8 != null) {
																												method_01 = (MethodInfo)this._style;
																												pUVar8.Setup((ElementStyle)method_01);
																												this.ApplySettings();
																												pUVar4 = this.kdrCanvas;
																												if (pUVar4 != null) {
																													pUVar3 = pUVar4.transform;
																													if (pUVar3 != null) {
																														pUVar3.localScale = (Vector3)(typeof(Vector3). static_fields.oneVector);
																														if (*targetAddress !=null) {
																															pUVar3 = (*targetAddress).transform;
																															if (pUVar3 != null) {
																																pUVar3.localScale = (Vector3)(typeof(Vector3) .static_fields.oneVector). fields;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050B2")]
	[Address(RVA = "0x5C537D0", Offset = "0x5C527D0", VA = "0x5C537D0")]
	public void ApplySettings()
	{
		// Lifted from source/cpp/UI/TopLeftHUD.c (UI.TopLeftHUD$$ApplySettings): clean
		GameObject __this_00;
		GraphicsSettings pSVar1;
		BoolSetting pSVar2;
		UISettings pSVar3;
		RectTransform __this_01;
		float fVar4;

		__this_00 = this.kdrAndLabel;
		if (__this_00 == null) goto label_05d538b9;
		__this_01 = __this_00.GetComponent<RectTransform>();
		pSVar1 = SettingsManager.GraphicsSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.ShowFPS, pSVar2 == null)) goto label_05d538b9;
		pSVar3 = SettingsManager.UISettings;
		if (pSVar2._value == false) {
			if ((pSVar3 == null) ||(pSVar2 = pSVar3.ShowPing, pSVar2 == null)) goto label_05d538b9;
			fVar4 = 0.0;
			if (pSVar2._value != false) goto label_05d53875;
		}
		else {
			if (pSVar3 == null) goto label_05d538b9;
	label_05d53875: ;
			fVar4 = 30.0;
		}
		pSVar2 = pSVar3.ShowGameTime;
		if ((pSVar2 != null) && (__this_01 != null)) {
			if (pSVar2._value != false) {
				fVar4 = fVar4 + 30.0;
			}
			__this_01.anchoredPosition = (Vector2)((ulong)(uint)-fVar4 << 0x20);
			return;
		}
	label_05d538b9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050B3")]
	[Address(RVA = "0x5C538C0", Offset = "0x5C528C0", VA = "0x5C538C0")]
	public TopLeftHUD()
	{
		// Lifted from source/cpp/UI/TopLeftHUD.c (UI.TopLeftHUD$$.ctor): clean
		base();
		return;
	}
}
