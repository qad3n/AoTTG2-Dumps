// ==================== AoTTG2 cross-reference ====================
// Type: UI.StylebarHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/StylebarHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000871")]
internal class StylebarHandler : MonoBehaviour
{
	[Token(Token = "0x4002AC0")]
	[FieldOffset(Offset = "0x20")]
	private StylebarPopup _styleBarPopup;

	[Token(Token = "0x4002AC1")]
	[FieldOffset(Offset = "0x28")]
	private string[] Letters;

	[Token(Token = "0x4002AC2")]
	[FieldOffset(Offset = "0x30")]
	private string[] ColorTags;

	[Token(Token = "0x4002AC3")]
	[FieldOffset(Offset = "0x38")]
	private string[] Sentences;

	[Token(Token = "0x4002AC4")]
	[FieldOffset(Offset = "0x40")]
	private float[] Multipliers;

	[Token(Token = "0x4002AC5")]
	[FieldOffset(Offset = "0x48")]
	private int[] PointThresholds;

	[Token(Token = "0x4002AC6")]
	[FieldOffset(Offset = "0x50")]
	private int[] PointDecays;

	[Token(Token = "0x4002AC7")]
	[FieldOffset(Offset = "0x58")]
	private int _hits;

	[Token(Token = "0x4002AC8")]
	[FieldOffset(Offset = "0x5C")]
	private float _points;

	[Token(Token = "0x4002AC9")]
	[FieldOffset(Offset = "0x60")]
	private int _rank;

	[Token(Token = "0x4002ACA")]
	[FieldOffset(Offset = "0x64")]
	private bool _lostRank;

	[Token(Token = "0x4002ACB")]
	[FieldOffset(Offset = "0x68")]
	private float _chainTime;

	[Token(Token = "0x4002ACC")]
	[FieldOffset(Offset = "0x6C")]
	private int _chainKillRank;

	[Token(Token = "0x600508B")]
	[Address(RVA = "0x5C50890", Offset = "0x5C4F890", VA = "0x5C50890")]
	public void Awake()
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$Awake): 11 lines keep C-only constructs
		StylebarPopup* targetAddress;
		Image __this_00;
		Text pUVar1;
		String[] pSVar2;
		Transform parent;
		StylebarPopup pUVar3;
		GameObject pUVar4;
		String[] values;
		String pSVar5;
		long lVar6;
		ulong uVar7;
		String[] pSVar8;

		if (Il2CppMethodInitialized_07547efd == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_StylebarPopup) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_StylebarScaler) ;
			Il2CppMethodInitialized_07547efd = true;
		}
		parent = this.transform;
		pUVar3 = ElementFactory.CreateDefaultPopup<StylebarPopup>(parent, false);
		targetAddress = &this._styleBarPopup;
		this._styleBarPopup = pUVar3;
		pUVar3 = this._styleBarPopup;
		if (pUVar3 != null) {
			pUVar4 = pUVar3.gameObject;
			ElementFactory.SetAnchor(pUVar4, 5, 5, (Vector2)0xc1a00000);
			if (*targetAddress != null) {
				pUVar4 = (*targetAddress).gameObject;
				if (pUVar4 != null) {
					pUVar4.AddComponent<StylebarScaler>() ;
					if ((*targetAddress != null) &&(__this_00 = ((*targetAddress).fields)._bladeFill, __this_00 != null)) {
						__this_00.fillAmount = 1.0;
						pSVar5 = "";
						pUVar3 = *targetAddress;
						if ((pUVar3 != null) &&(pUVar1 = pUVar3._scoreLabel, pUVar1 != null)) {
							pUVar1.set_text("");
							pUVar1 = pUVar3._bottomLabel;
							if (pUVar1 != null) {
								pUVar1.set_text(pSVar5);
								pSVar5 = "";
								pUVar3 = *targetAddress;
								if ((pUVar3 != null) &&(pUVar1 = pUVar3._letterLabel, pUVar1 != null)) {
									pUVar1.set_text("");
									pUVar1 = pUVar3._sentenceLabel;
									if (pUVar1 != null) {
										pUVar1.set_text(pSVar5);
										if (*targetAddress != null) {
											(*targetAddress).SetRank(0);
											pSVar8 = this.Letters;
											if (pSVar8 != null) {
												lVar6 = 0x20;
												uVar7 = 0;
												do {
													if ((long)(int)pSVar8.Length <= (long)uVar7) {
														return;
													}
													values = (String[])new string[5];
													if (values == null) break;
													if ((int)values.Length == 0) {
	label_05d50bdf: ;
														throw new IndexOutOfRangeException();
													}
													values[0] = "<color=#";
													pSVar2 = this.ColorTags;
													if (pSVar2 == null) break;
													if (((uint)pSVar2.Length <= uVar7) || ((values.Length & 0xfffffffe) == 0)) goto label_05d50bdf;
													values[1] = pSVar2[uVar7];
													if ((uint)values.Length < 3) goto label_05d50bdf;
													values[2] = ">";
													pSVar2 = this.Letters;
													if (pSVar2 == null) break;
													if (((uint)pSVar2.Length <= uVar7) || ((values.Length & 0xfffffffc) == 0)) goto label_05d50bdf;
													values[3] = pSVar2[uVar7];
													if ((uint)values.Length < 5) goto label_05d50bdf;
													values[4] = "</color>";
													pSVar5 = String.Concat(values);
													if ((uint)pSVar8.Length <= uVar7) goto label_05d50bdf;
													pSVar8[uVar7] = pSVar5;
													uVar7 = uVar7 + 1;
													pSVar8 = this.Letters;
													lVar6 = lVar6 + 8;
												} while (pSVar8 != null);
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

	[Token(Token = "0x600508C")]
	[Address(RVA = "0x5C50D60", Offset = "0x5C4FD60", VA = "0x5C50D60")]
	public int GetRank()
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$GetRank): clean
		return this._rank;
	}

	[Token(Token = "0x600508D")]
	[Address(RVA = "0x5C50D70", Offset = "0x5C4FD70", VA = "0x5C50D70")]
	public void OnHit(int damage)
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$OnHit): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		int iVar4;
		UISettings pSVar5;
		BoolSetting pSVar6;
		Single[] pSVar7;
		Int32[] pSVar8;
		StylebarPopup pUVar9;
		Text pUVar10;
		int iVar11;
		ulong in_RAX;
		String pSVar12;
		String pSVar13;
		MethodInfo method_00;
		int iVar14;
		String* ppSVar15;
		ulong uVar16;
		bool bVar17;
		bool bVar18;
		float fVar19;
		ulong uStack_28;

		uStack_28 = in_RAX;
		pSVar5 = SettingsManager.UISettings;
		if ((pSVar5 == null) ||(pSVar6 = pSVar5.ShowStylebar, pSVar6 == null)) goto label_05d51073;
		if (pSVar6._value == false) {
			return;
		}
		fVar19 = this._points;
		if (damage < 0) {
			if ((fVar19 == 0.0) && (!NAN(fVar19))) {
				fVar19 = fVar19 + 1.0;
				this._points = fVar19;
				pSVar8 = this.PointThresholds;
				if (pSVar8 == null) goto label_05d51073;
				iVar4 = this._rank;
				iVar14 = (int)pSVar8.Length;
				if (0 < iVar14) {
					uVar16 = 0;
					do {
						if (fVar19 <= (float)pSVar8[uVar16]) {
							iVar14 = (int)uVar16;
							this._rank = iVar14;
							iVar11 = iVar14 - iVar4;
							goto joined_r0x05d50f49;
						}
						uVar16 = uVar16 + 1;
					} while ((pSVar8.Length & 0xffffffff) != uVar16);
				}
				this._rank = iVar14;
				iVar11 = iVar14 - iVar4;
	joined_r0x05d50f49: ;
				bVar17 = iVar14 == iVar4;
				bVar18 = SBORROW4(iVar14, iVar4);
				if (iVar14 < iVar4) {
					if (this._lostRank != false) goto label_05d50f2e;
	label_05d50f51: ;
					this._lostRank = true;
				}
				else {
	label_05d50f57: ;
					if (!bVar17 && bVar18 == iVar11 < 0) {
						this._lostRank = false;
					}
				}
			}
		}
		else {
			pSVar7 = this.Multipliers;
			if (pSVar7 == null) goto label_05d51073;
			uVar2 = this._chainKillRank;
			uVar3 = (uint)pSVar7.Length;
			if (uVar3 <= uVar2) goto label_05d51078;
			fVar19 = fVar19 + (float)(int)((float)(damage + 200) * pSVar7[(int)uVar2]);
			this._points = fVar19;
			this._chainKillRank = ((int)uVar2 < (int)(uVar3 - 1)) + uVar2;
			this._chainTime = 5.0;
			piVar1 = &this._hits;
			*piVar1 = *piVar1 + 1;
			pSVar8 = this.PointThresholds;
			if (pSVar8 == null) goto label_05d51073;
			iVar4 = this._rank;
			iVar14 = (int)pSVar8.Length;
			if (0 < iVar14) {
				uVar16 = 0;
				do {
					if (fVar19 <= (float)pSVar8[uVar16]) {
						iVar14 = (int)uVar16;
						this._rank = iVar14;
						iVar11 = iVar14 - iVar4;
						goto joined_r0x05d50f26;
					}
					uVar16 = uVar16 + 1;
				} while ((pSVar8.Length & 0xffffffff) != uVar16);
			}
			this._rank = iVar14;
			iVar11 = iVar14 - iVar4;
	joined_r0x05d50f26: ;
			bVar17 = iVar14 == iVar4;
			bVar18 = SBORROW4(iVar14, iVar4);
			if (iVar4 <= iVar14) goto label_05d50f57;
			if (this._lostRank == false) goto label_05d50f51;
	label_05d50f2e: ;
			this._hits = 0;
			this._points = 0.0;
			this._rank = 0;
			fVar19 = 0.0;
		}
		uStack_28 = CONCAT44((int)fVar19, (undefined4)uStack_28);
		pSVar12 = (((long)&uStack_28 + 4)).ToString();
		pSVar13 = (this._hits).ToString();
		if (this._hits < 2) {
			ppSVar15 = &"Hit";
		}
		else {
			ppSVar15 = &"Hits";
		}
		method_00 = (MethodInfo)String.Concat(pSVar13, *ppSVar15, "\n");
		uVar2 = this._chainKillRank;
		if (0 < (int)uVar2) {
			pSVar7 = this.Multipliers;
			if (pSVar7 == null) goto label_05d51073;
			if ((uint)pSVar7.Length <= uVar2) {
	label_05d51078: ;
				throw new IndexOutOfRangeException();
			}
			pSVar13 = (pSVar7.m_Items + uVar2).ToString();
			method_00 = (MethodInfo)String.Concat((String)method_00, "x", pSVar13, "!");
		}
		pUVar9 = this._styleBarPopup;
		if ((pUVar9 != null) &&(pUVar10 = pUVar9._scoreLabel, pUVar10 != null)) {
			pUVar10.set_text(pSVar12);
			pUVar10 = pUVar9._bottomLabel;
			if (pUVar10 != null) {
				pUVar10.set_text((String)method_00);
				this.UpdateLabels();
				pUVar9 = this._styleBarPopup;
				if (pUVar9 != null) {
					pUVar9.Show();
					return;
				}
			}
		}
	label_05d51073: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600508E")]
	[Address(RVA = "0x5C51080", Offset = "0x5C50080", VA = "0x5C51080")]
	private void UpdateRank()
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$UpdateRank): clean
		int iVar1;
		Int32[] pSVar2;
		int iVar3;
		int iVar4;
		ulong uVar5;

		pSVar2 = this.PointThresholds;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = this._rank;
		iVar4 = (int)pSVar2.Length;
		if (0 < iVar4) {
			uVar5 = 0;
			do {
				if (this._points <= (float)pSVar2[uVar5]) {
					iVar4 = (int)uVar5;
					this._rank = iVar4;
					iVar3 = iVar4 - iVar1;
					goto joined_r0x05d510dd;
				}
				uVar5 = uVar5 + 1;
			} while ((pSVar2.Length & 0xffffffff) != uVar5);
		}
		this._rank = iVar4;
		iVar3 = iVar4 - iVar1;
	joined_r0x05d510dd: ;
		if (iVar1 <= iVar4) {
			if (iVar4 != iVar1 && SBORROW4(iVar4, iVar1) == iVar3 < 0) {
				this._lostRank = false;
			}
			return;
		}
		if (this._lostRank == false) {
			this._lostRank = true;
			return;
		}
		this._hits = 0;
		this._points = 0.0;
		this._rank = 0;
		return;
	}

	[Token(Token = "0x600508F")]
	[Address(RVA = "0x5C51100", Offset = "0x5C50100", VA = "0x5C51100")]
	private void UpdateLabels()
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$UpdateLabels): clean
		uint uVar1;
		String[] pSVar2;
		String[] pSVar3;
		StylebarPopup pUVar4;
		Text pUVar5;
		Image __this_00;
		int iVar6;
		MethodInfo method_01;

		pSVar2 = this.Letters;
		if (pSVar2 != null) {
			uVar1 = this._rank;
			if ((uint)pSVar2.Length <= uVar1) {
	label_05d511da: ;
				throw new IndexOutOfRangeException();
			}
			pSVar3 = this.Sentences;
			if (pSVar3 != null) {
				if ((uint)pSVar3.Length <= uVar1) goto label_05d511da;
				pUVar4 = this._styleBarPopup;
				if ((pUVar4 != null) &&(pUVar5 = pUVar4._letterLabel, pUVar5 != null)) {
					method_01 = (MethodInfo)pSVar3[(int)uVar1];
					pUVar5.set_text(pSVar2[(int)uVar1]);
					pUVar5 = pUVar4._sentenceLabel;
					if (pUVar5 != null) {
						pUVar5.set_text((String)method_01);
						pUVar4 = this._styleBarPopup;
						iVar6 = this.GetRankPercent();
						if ((pUVar4 != null) &&(__this_00 = pUVar4._bladeFill, __this_00 != null)) {
							__this_00.fillAmount = (float)iVar6 * 0.01;
							pUVar4 = this._styleBarPopup;
							if (pUVar4 != null) {
								pUVar4.SetRank(this._rank);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005090")]
	[Address(RVA = "0x5C511E0", Offset = "0x5C501E0", VA = "0x5C511E0")]
	private int GetRankPercent()
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$GetRankPercent): clean
		uint uVar1;
		uint uVar2;
		Int32[] pSVar3;

		uVar1 = this._rank;
		if ((int)uVar1 < 1) {
			if ((ulong)uVar1 == 0) {
				pSVar3 = this.PointThresholds;
				if (pSVar3 != null) {
					if ((int)pSVar3.Length != 0) {
						return (int)(this._points * 100.0) / pSVar3[0];
					}
					goto label_05d51271;
				}
				goto label_05d5126c;
			}
		}
		else {
			pSVar3 = this.PointThresholds;
			if (pSVar3 == null) {
	label_05d5126c: ;
				throw new NullReferenceException();
			}
			uVar2 = (uint)pSVar3.Length;
			if ((int)uVar1 < (int)uVar2) {
				if ((uVar1 - 1 < uVar2) && (uVar1 < uVar2)) {
					return (int)(((this._points - (float)pSVar3[uVar1 - 1]) * 100.0) /(float)(pSVar3[uVar1] - pSVar3[uVar1 - 1]));
				}
	label_05d51271: ;
				throw new IndexOutOfRangeException();
			}
		}
		return 100;
	}

	[Token(Token = "0x6005091")]
	[Address(RVA = "0x5C51280", Offset = "0x5C50280", VA = "0x5C51280")]
	private void Update()
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$Update): 1 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		UISettings pSVar3;
		BoolSetting pSVar4;
		Int32[] pSVar5;
		StylebarPopup pUVar6;
		int iVar7;
		int iVar8;
		float fVar9;
		float fVar10;

		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 != null) &&(pSVar4 = pSVar3.ShowStylebar, pSVar4 != null)) {
			if (pSVar4._value == false) {
				pUVar6 = this._styleBarPopup;
				if (pUVar6 != null) {
					pUVar6.Hide();
					this._points = 0.0;
					return;
				}
			}
			else {
				fVar10 = this._points;
				if (fVar10 <= 0.0) {
					pUVar6 = this._styleBarPopup;
					if (pUVar6 != null) {
						pUVar6.Hide();
						fVar10 = this._chainTime;
	joined_r0x05d51401: ;
						if (fVar10 <= 0.0) {
							this._chainTime = 0.0;
							this._chainKillRank = 0;
							return;
						}
						fVar9 = Time.deltaTime;
						this._chainTime = fVar10 - fVar9;
						return;
					}
				}
				else {
					pSVar5 = this.PointDecays;
					if (pSVar5 != null) {
						uVar1 = this._rank;
						if ((uint)pSVar5.Length <= uVar1) {
							throw new IndexOutOfRangeException();
						}
						iVar2 = pSVar5[(int)uVar1];
						fVar9 = Time.deltaTime;
						fVar10 = fVar10 + fVar9 * (float)iVar2 * -10.0;
						this._points = fVar10;
						pSVar5 = this.PointThresholds;
						if (pSVar5 != null) {
							iVar2 = this._rank;
							iVar8 = (int)pSVar5.Length;
							if (0 < iVar8) {
								method = null;
								do {
									if (fVar10 <= (float)pSVar5[(long)method]) {
										iVar8 = (int)method;
										this._rank = iVar8;
										iVar7 = iVar8 - iVar2;
										goto joined_r0x05d5142c;
									}
									method = (MethodInfo)((long)&method.methodPointer + 1);
								} while ((MethodInfo)(pSVar5.Length & 0xffffffff) != method);
							}
							this._rank = iVar8;
							iVar7 = iVar8 - iVar2;
	joined_r0x05d5142c: ;
							if (iVar8 < iVar2) {
								if (this._lostRank == false) {
									this._lostRank = true;
								}
								else {
									this._hits = 0;
									this._points = 0.0;
									this._rank = 0;
								}
							}
							else if (iVar8 != iVar2 && SBORROW4(iVar8, iVar2) == iVar7 < 0) {
								this._lostRank = false;
							}
							this.UpdateLabels();
							fVar10 = this._chainTime;
							goto joined_r0x05d51401;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005092")]
	[Address(RVA = "0x5C51470", Offset = "0x5C50470", VA = "0x5C51470")]
	public StylebarHandler()
	{
		// Lifted from source/cpp/UI/StylebarHandler.c (UI.StylebarHandler$$.ctor): clean
		String[] pSVar1;
		Single[] array;
		Int32[] pSVar2;

		pSVar1 = (String[])new string[10];
		if (pSVar1 == null) {
	label_05d51b64: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "D";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "C";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "B";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "A";
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = "S";
							if (5 < (uint)pSVar1.Length) {
								pSVar1[5] = "SS";
								if (6 < (uint)pSVar1.Length) {
									pSVar1[6] = "SSS";
									if ((pSVar1.Length & 0xfffffff8) != 0) {
										pSVar1[7] = "X";
										if (8 < (uint)pSVar1.Length) {
											pSVar1[8] = "XX";
											if (9 < (uint)pSVar1.Length) {
												pSVar1[9] = "Z";
												this.Letters = pSVar1;
												pSVar1 = (String[])new string[10];
												if (pSVar1 == null) goto label_05d51b64;
												if ((int)pSVar1.Length != 0) {
													pSVar1[0] = "FFFFFF";
													if ((pSVar1.Length & 0xfffffffe) != 0) {
														pSVar1[1] = "ACFA58";
														if (2 < (uint)pSVar1.Length) {
															pSVar1[2] = "F4FA58";
															if ((pSVar1.Length & 0xfffffffc) != 0) {
																pSVar1[3] = "FAAC58";
																if (4 < (uint)pSVar1.Length) {
																	pSVar1[4] = "FA8258";
																	if (5 < (uint)pSVar1.Length) {
																		pSVar1[5] = "BE81F7";
																		if (6 < (uint)pSVar1.Length) {
																			pSVar1[6] = "FF0000";
																			if ((pSVar1.Length & 0xfffffff8) != 0) {
																				pSVar1[7] = "000000";
																				if (8 < (uint)pSVar1.Length) {
																					pSVar1[8] = "000000";
																					if (9 < (uint)pSVar1.Length) {
																						pSVar1[9] = "000000";
																						this.ColorTags = pSVar1;
																						pSVar1 = (String[])new string[10] ;
																						if (pSVar1 == null) goto label_05d51b64;
																						if ((int)pSVar1.Length != 0) {
																							pSVar1[0] = "eja Vu";
																							if ((pSVar1.Length & 0xfffffffe) != 0) {
																								pSVar1[1] = "asual";
																								if (2 < (uint)pSVar1.Length) {
																									pSVar1[2] = "oppin!";
																									if ((pSVar1.Length & 0xfffffffc) != 0) {
																										pSVar1[3] = "mazing!";
																										if (4 < (uint)pSVar1.Length) {
																											pSVar1[4] = "ensational!";
																											if (5 < (uint)pSVar1.Length) {
																												pSVar1[5] = "pectacular!!";
																												if (6 < (uint)pSVar1.Length) {
																													pSVar1[6] = "tylish!!!";
																													if ((pSVar1.Length & 0xfffffff8) != 0) {
																														pSVar1[7] = "TREME!!!";
																														if (8 < (uint)pSVar1.Length) {
																															pSVar1[8] = "TREEME!!!";
																															if (9 < (uint)pSVar1.Length) {
																																pSVar1[9] = "ENITH";
																																this.Sentences = pSVar1;
																																array = (Single[])new float[9];

																												RuntimeHelpers.InitializeArray((Array)array, FieldRva_PrivateImplementationDetails_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D5884225DBC);
																												this.Multipliers = array;
																												pSVar2 = (Int32[])new int[9];
																												RuntimeHelpers.InitializeArray((Array)pSVar2, FieldRva_PrivateImplementationDetails_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F40B189691);
																												this.PointThresholds = pSVar2;
																												pSVar2 = (Int32[])new int[10];
																												RuntimeHelpers.InitializeArray((Array)pSVar2, FieldRva_PrivateImplementationDetails_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD614C26EE8E);
																												this.PointDecays = pSVar2;
																												base();
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
		throw new IndexOutOfRangeException();
	}
}
