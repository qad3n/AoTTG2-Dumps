// ==================== AoTTG2 cross-reference ====================
// Type: UI.Telemetry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/Telemetry.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/Telemetry.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000874")]
internal class Telemetry : MonoBehaviour
{
	[Token(Token = "0x4002ADF")]
	[FieldOffset(Offset = "0x20")]
	private MultiTextLabel timePanel;

	[Token(Token = "0x4002AE0")]
	[FieldOffset(Offset = "0x28")]
	private MultiTextLabel performancePanel;

	[Token(Token = "0x4002AE1")]
	[FieldOffset(Offset = "0x30")]
	private ElementStyle _style;

	[Token(Token = "0x4002AE2")]
	[FieldOffset(Offset = "0x38")]
	private StringBuilder _sb;

	[Token(Token = "0x4002AE3")]
	private const string _gameTimeFormat = "{0:0}";

	[Token(Token = "0x4002AE4")]
	private const float MaxSyncDelay = 0.01f;

	[Token(Token = "0x4002AE5")]
	[FieldOffset(Offset = "0x40")]
	private float _currentSyncDelay;

	[Token(Token = "0x60050A8")]
	[Address(RVA = "0x5C52420", Offset = "0x5C51420", VA = "0x5C52420")]
	public void Setup(ElementStyle _style)
	{
		// Lifted from source/cpp/UI/Telemetry.c (UI.Telemetry$$Setup): 23 lines keep C-only constructs
		MultiTextLabel* ppUVar1;
		Dictionary<ChatTextColor, string> __this_00;
		bool bVar2;
		Transform pUVar3;
		GameObject pUVar4;
		MultiTextLabel pUVar5;
		String pSVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Color color;
		Color color_00;
		Color local_78;
		ElementStyle local_60;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;

		if (Il2CppMethodInitialized_07547f07 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_MultiTextLabel) ;
			Il2CppMethodInitialized_07547f07 = true;
		}
		local_78.r = 0.0;
		local_78.g = 0.0;
		local_78.b = 0.0;
		local_78.a = 0.0;
		pUVar3 = this.transform;
		local_60 = _style;
		pUVar4 = ElementFactory.CreateMultiTextLabel(pUVar3, _style, 0, 3, 12.0, 4, false);
		if (pUVar4 != null) {
			pUVar5 = pUVar4.GetComponent<MultiTextLabel>();
			ppUVar1 = &this.timePanel;
			this.timePanel = pUVar5;
			pUVar5 = this.timePanel;
			pSVar6 = UIManager.GetLocale("InGame", "Telemetry", "GameTime", "", "");
			if (pUVar5 != null) {
				pUVar5.SetValue(0, pSVar6);
				if (*ppUVar1 != null) {
					(*ppUVar1).SetValue(1, (String)**(ulong*)(g_data_07556758 + 0xb8));
					pUVar5 = *ppUVar1;
					pSVar6 = UIManager.GetLocale("InGame", "Telemetry", "System", "", "");
					if (pUVar5 != null) {
						pUVar5.SetValue(2, pSVar6);
						if (*ppUVar1 != null) {
							(*ppUVar1).SetValue(3, (String)**(ulong*)(g_data_07556758 + 0xb8)) ;
							__this_00 = ChatManager.ColorTags;
							if (__this_00 != null) {
								pSVar6 = __this_00.get_Item(3);
								bVar2 = ColorUtility.TryParseHtmlString(pSVar6, ref local_78);
								if (bVar2) {
									fVar7 = local_78.r;
									fVar8 = local_78.g;
									fVar9 = local_78.b;
									fVar10 = local_78.a;
								}
								else {
									fVar8 = 0.92156863;
									fVar7 = 1.0;
									fVar9 = 0.015686275;
									fVar10 = 1.0;
								}
								if (*ppUVar1 != null) {
									color.g = fVar8;
									color.r = fVar7;
									color.a = fVar10;
									color.b = fVar9;
									local_58 = fVar9;
									fStack_54 = fVar10;
									local_48 = fVar7;
									fStack_44 = fVar8;
									(*ppUVar1).ChangeTextColor(1, color);
									if (*ppUVar1 != null) {
										color_00.g = fStack_44;
										color_00.r = local_48;
										color_00.a = fStack_54;
										color_00.b = local_58;
										(*ppUVar1).ChangeTextColor(3, color_00);
										if (*ppUVar1 != null) {
											(*ppUVar1).SetEnabled(false);
											pUVar3 = this.transform;
											pUVar4 = ElementFactory.CreateMultiTextLabel(pUVar3, local_60, 0, 3, 12.0, 4, false);
											if (pUVar4 != null) {
												pUVar5 = pUVar4.GetComponent<MultiTextLabel>();
												ppUVar1 = &this.performancePanel;
												this.performancePanel = pUVar5;
												pUVar5 = this.performancePanel;
												if (pUVar5 != null) {
													pUVar5.SetValue(0, "FPS: ");
													if (*ppUVar1 != null) {
														(*ppUVar1).SetValue(1, (String)**(ulong*)(g_data_07556758 + 0xb8));
														if (*ppUVar1 != null) {
															(*ppUVar1).SetValue(2, "Ping: ");
															if (*ppUVar1 != null) {
																(*ppUVar1).SetValue(3, (String)**(ulong*)(g_data_07556758 + 0xb8));
																if (*ppUVar1 != null) {
																	(*ppUVar1).SetEnabled(false);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050A9")]
	[Address(RVA = "0x5C52830", Offset = "0x5C51830", VA = "0x5C52830")]
	private void Update()
	{
		// Lifted from source/cpp/UI/Telemetry.c (UI.Telemetry$$Update): clean
		float fVar1;
		float fVar2;

		fVar2 = this._currentSyncDelay;
		fVar1 = Time.deltaTime;
		fVar2 = fVar2 - fVar1;
		this._currentSyncDelay = fVar2;
		if (0.0 < fVar2) {
			return;
		}
		this.Sync();
		return;
	}

	[Token(Token = "0x60050AA")]
	[Address(RVA = "0x5C52880", Offset = "0x5C51880", VA = "0x5C52880")]
	private void Sync()
	{
		// Lifted from source/cpp/UI/Telemetry.c (UI.Telemetry$$Sync): clean
		UISettings pSVar1;
		BoolSetting pSVar2;
		MultiTextLabel pUVar3;
		GraphicsSettings pSVar4;
		CustomLogicEvaluator pCVar5;
		DateTime dt;
		float currentTime;

		this._currentSyncDelay = 0.01;
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.ShowGameTime, pSVar2 == null)) goto label_05d52a1d;
		pUVar3 = this.timePanel;
		if (pSVar2._value == false) {
			if (pUVar3 == null) goto label_05d52a1d;
			pUVar3.SetEnabled(false);
		}
		else {
			if (pUVar3 == null) goto label_05d52a1d;
			pUVar3.SetEnabled(true);
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar5 = CustomLogicManager.Evaluator;
				if (pCVar5 == null) goto label_05d52972;
	label_05d5293f: ;
				currentTime = pCVar5.CurrentTime;
			}
			else {
				pCVar5 = CustomLogicManager.Evaluator;
				if (pCVar5 != null) goto label_05d5293f;
	label_05d52972: ;
				currentTime = 0.0;
			}
			this.UpdateGameTime(currentTime);
			dt = DateTime.Now;
			this.UpdateSystemTime(dt);
		}
		pSVar4 = SettingsManager.GraphicsSettings;
		if ((pSVar4 == null) ||(pSVar2 = pSVar4.ShowFPS, pSVar2 == null)) goto label_05d52a1d;
		if (pSVar2._value == false) {
			pSVar1 = SettingsManager.UISettings;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.ShowPing, pSVar2 == null)) goto label_05d52a1d;
			if (pSVar2._value == false) {
				pUVar3 = this.performancePanel;
				if (pUVar3 != null) {
					pUVar3.SetEnabled(false);
					return;
				}
				goto label_05d52a1d;
			}
		}
		pUVar3 = this.performancePanel;
		if (pUVar3 != null) {
			pUVar3.SetEnabled(true);
			this.UpdatePerformance();
			return;
		}
	label_05d52a1d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050AB")]
	[Address(RVA = "0x5C52D70", Offset = "0x5C51D70", VA = "0x5C52D70")]
	private void UpdatePerformance()
	{
		// Lifted from source/cpp/UI/Telemetry.c (UI.Telemetry$$UpdatePerformance): 4 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		GraphicsSettings pSVar3;
		BoolSetting pSVar4;
		MultiTextLabel pUVar5;
		StringBuilder pSVar6;
		UISettings pSVar7;
		int iVar8;
		ulong in_RAX;
		String pSVar9;
		ulong uStack_28;

		uStack_28 = in_RAX;
		pSVar3 = SettingsManager.GraphicsSettings;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.ShowFPS, pSVar4 == null)) goto label_05d531a8;
		pUVar5 = this.performancePanel;
		if (pSVar4._value == false) {
			if (pUVar5 == null) goto label_05d531a8;
			pUVar5.SetElementEnabled(0, false);
			pUVar5 = this.performancePanel;
			if (pUVar5 == null) goto label_05d531a8;
			pUVar5.SetElementEnabled(1, false);
		}
		else {
			if (pUVar5 == null) goto label_05d531a8;
			pUVar5.SetElementEnabled(0, true);
			pUVar5 = this.performancePanel;
			if (pUVar5 == null) goto label_05d531a8;
			pUVar5.SetElementEnabled(1, true);
			pSVar6 = this._sb;
			if (pSVar6 == null) goto label_05d531a8;
			pSVar6.Clear();
			pSVar6 = this._sb;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_075454e5 != false) goto label_05d52e6a;
	label_05d52ec3: ;
				g_data_075454e5 = true;
				uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_075454e5 == false) goto label_05d52ec3;
	label_05d52e6a: ;
				uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			if (pSVar6 == null) goto label_05d531a8;
			pSVar6.Append(*(int)((long)(typeof(UIManager)).static_fields + 0x74));
			pSVar7 = SettingsManager.UISettings;
			if ((pSVar7 == null) ||(pSVar4 = pSVar7.ShowPing, pSVar4 == null)) goto label_05d531a8;
			if (pSVar4._value == false) {
	label_05d52f7b: ;
				pSVar6 = this._sb;
			}
			else {
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_07544cc2 != false) goto label_05d52f5a;
	label_05d53145: ;
					g_data_07544cc2 = true;
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05d52f6a;
	label_05d53168: ;
					cVar1 = PhotonNetwork.offlineMode;
				}
				else {
					if (g_data_07544cc2 == false) goto label_05d53145;
	label_05d52f5a: ;
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05d53168;
	label_05d52f6a: ;
					cVar1 = PhotonNetwork.offlineMode;
				}
				if (cVar1 != false) goto label_05d52f7b;
				pSVar6 = this._sb;
				if (pSVar6 == null) goto label_05d531a8;
				pSVar6.Append(", ");
				pSVar6 = this._sb;
			}
			if (pSVar6 == null) goto label_05d531a8;
			pUVar5 = this.performancePanel;
			pSVar9 = pSVar6.ToString();
			if (pUVar5 == null) goto label_05d531a8;
			pUVar5.SetValue(1, pSVar9);
		}
		pSVar7 = SettingsManager.UISettings;
		if ((pSVar7 == null) ||(pSVar4 = pSVar7.ShowPing, pSVar4 == null)) goto label_05d531a8;
		if (pSVar4._value != false) {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07544cc2 != false) goto label_05d53000;
	label_05d5306c: ;
				g_data_07544cc2 = true;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05d5300c;
	label_05d5308b: ;
				cVar1 = PhotonNetwork.offlineMode;
			}
			else {
				if (g_data_07544cc2 == false) goto label_05d5306c;
	label_05d53000: ;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05d5308b;
	label_05d5300c: ;
				cVar1 = PhotonNetwork.offlineMode;
			}
			if (cVar1 == false) {
				pUVar5 = this.performancePanel;
				if (pUVar5 != null) {
					pUVar5.SetElementEnabled(2, true);
					pUVar5 = this.performancePanel;
					if (pUVar5 != null) {
						pUVar5.SetElementEnabled(3, true);
						pUVar5 = this.performancePanel;
						iVar8 = PhotonNetwork.GetPing();
						uStack_28 = CONCAT44(iVar8, (undefined4)uStack_28);
						pSVar9 = (((long)&uStack_28 + 4)).ToString();
						if (pUVar5 != null) {
							pUVar5.SetValue(3, pSVar9);
							return;
						}
					}
				}
				goto label_05d531a8;
			}
		}
		pUVar5 = this.performancePanel;
		if (pUVar5 != null) {
			pUVar5.SetElementEnabled(2, false);
			pUVar5 = this.performancePanel;
			if (pUVar5 != null) {
				pUVar5.SetElementEnabled(3, false);
				return;
			}
		}
	label_05d531a8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050AC")]
	[Address(RVA = "0x5C52A30", Offset = "0x5C51A30", VA = "0x5C52A30")]
	private void UpdateGameTime(float currentTime)
	{
		// Lifted from source/cpp/UI/Telemetry.c (UI.Telemetry$$UpdateGameTime): clean
		StringBuilder pSVar1;
		MultiTextLabel __this_00;
		object arg0;
		String value;
		byte[] local_14 = new byte[4];

		pSVar1 = this._sb;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar1 = this._sb;
			arg0 = (object)local_14;
			if (pSVar1 != null) {
				pSVar1.AppendFormat("{0:0}", arg0);
				pSVar1 = this._sb;
				if (pSVar1 != null) {
					pSVar1.Append(", ");
					pSVar1 = this._sb;
					if (pSVar1 != null) {
						__this_00 = this.timePanel;
						value = pSVar1.ToString();
						if (__this_00 != null) {
							__this_00.SetValue(1, value);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050AD")]
	[Address(RVA = "0x5C52B20", Offset = "0x5C51B20", VA = "0x5C52B20")]
	private void UpdateSystemTime(DateTime dt)
	{
		// Lifted from source/cpp/UI/Telemetry.c (UI.Telemetry$$UpdateSystemTime): clean
		StringBuilder pSVar1;
		MultiTextLabel __this_00;
		int iVar2;
		String value;
		uint uVar3;
		DateTime local_18;

		local_18 = (DateTime)(DateTime)dt._dateData;
		pSVar1 = this._sb;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar1 = this._sb;
			iVar2 = local_18.Hour;
			if (pSVar1 != null) {
				pSVar1.Append(((short)((ulong)((long)iVar2 * 0x66666667) >> 0x22) - (short)(iVar2 >> 0x1f)) + 0x30);
				pSVar1 = this._sb;
				iVar2 = local_18.Hour;
				if (pSVar1 != null) {
					uVar3 = -(iVar2 >> 0x1f);
					pSVar1.Append((short)iVar2 + ((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f) + (short)uVar3) * -10 + 0x30);
					pSVar1 = this._sb;
					if (pSVar1 != null) {
						pSVar1.Append(0x3a);
						pSVar1 = this._sb;
						iVar2 = local_18.Minute;
						if (pSVar1 != null) {
							pSVar1.Append(((short)((ulong)((long)iVar2 * 0x66666667) >> 0x22) - (short)(iVar2 >> 0x1f)) + 0x30);
							pSVar1 = this._sb;
							iVar2 = local_18.Minute;
							if (pSVar1 != null) {
								uVar3 = -(iVar2 >> 0x1f);
								pSVar1.Append((short)iVar2 +((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f) + (short)uVar3) * -10 + 0x30);
								pSVar1 = this._sb;
								if (pSVar1 != null) {
									pSVar1.Append(0x3a);
									pSVar1 = this._sb;
									iVar2 = local_18.Second;
									if (pSVar1 != null) {
										pSVar1.Append(((short)((ulong)((long)iVar2 * 0x66666667) >> 0x22) -(short)(iVar2 >> 0x1f)) + 0x30);
										pSVar1 = this._sb;
										iVar2 = local_18.Second;
										if (pSVar1 != null) {
											uVar3 = -(iVar2 >> 0x1f);
											pSVar1.Append((short)iVar2 +((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f) + (short)uVar3) * -10 + 0x30);
											pSVar1 = this._sb;
											if (pSVar1 != null) {
												__this_00 = this.timePanel;
												value = pSVar1.ToString();
												if (__this_00 != null) {
													__this_00.SetValue(3, value);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050AE")]
	[Address(RVA = "0x5C531B0", Offset = "0x5C521B0", VA = "0x5C531B0")]
	public Telemetry()
	{
		// Lifted from source/cpp/UI/Telemetry.c (UI.Telemetry$$.ctor): clean
		StringBuilder __this_00;

		__this_00 = new StringBuilder();
		this._sb = __this_00;
		base();
		return;
	}
}
