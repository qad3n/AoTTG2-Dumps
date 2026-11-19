// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using GameProgress;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200032C")]
public sealed class AottgProfileStatsPanel : AottgComponent
{
	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x580A1A0", Offset = "0x58091A0", VA = "0x580A1A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c (Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Build): 2 lines keep C-only constructs
		GameProgressContainer pGVar1;
		AchievementContainer __this_00;
		AottgProfileStatsPanel.c__DisplayClass0_0 __this_01;
		AchievementCount pGVar2;
		Action<AottgUi> __this_02;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgProfileStatsPanel.c__DisplayClass0_0));
		__this_01 = new Object();
		if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor == 0) {
			pGVar1 = GameProgressManager.GameProgress;
		}
		else {
			pGVar1 = GameProgressManager.GameProgress;
		}
		if (pGVar1 == null) {
			if (ui != null) {
				ui.CalloutKey(2, "MainMenu.Profile.StatsUnavailable", "profile-stats-unavailable");
				return;
			}
		}
		else if (__this_01 != null) {
			__this_01.stat = pGVar1.GameStat;
			__this_00 = pGVar1.Achievement;
			if (__this_00 != null) {
				pGVar2 = __this_00.GetAchievementCount();
				__this_01.achievements = pGVar2;
				__this_02 = new Action<AottgUi>((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0_Build_b__0);
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Column", null, null, null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (ui != null) {
					ui.Panel("default", __this_02, "profile-stats-list", layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x580A420", Offset = "0x5809420", VA = "0x580A420")]
	private static void BuildRows(AottgUi ui, GameStatContainer stat, AchievementCount achievements)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c (Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$BuildRows): 44 lines keep C-only constructs
		IntSetting pSVar1;
		FloatSetting pSVar2;
		DamageSetting __this;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		GameStatContainer pGVar5;
		bool bVar6;
		String pSVar7;
		String pSVar8;
		String pSVar9;
		String pSVar10;
		TimeSpan ts;
		object pIVar11;
		VirtualInvokeData pVVar12;
		ulong uVar13;
		long lVar14;
		System_Nullable_GameStatRecord__Fields SVar15;
		float fVar17;
		byte[] auVar18 = new byte[16];
		int iStack_7c;
		GameStatContainer pGStack_78;
		System_Nullable_GameStatRecord__Fields SStack_70;
		object pIStack_68;
		System_Nullable_GameStatRecord__Fields SStack_60;
		object* ppIStack_58;
		float fStack_4c;
		System_Nullable_GameStatRecord__Fields SStack_48;
		System_Nullable_GameStatRecord__Fields SStack_40;
		System_Nullable_GameStatRecord__Fields SStack_38;

		pIStack_68 = null;
		AottgProfileStatsPanel.Header(ui, "MainMenu.Profile.Stats.General", (System_Nullable_GameStatRecord__o)0x0, null);
		if ((stat != null) &&(pSVar1 = stat.Level, pGStack_78 = stat, pSVar1 != null)) {
			iStack_7c = pSVar1._value;
			pSVar7 = iStack_7c.ToString();
			SStack_60.hasValue = false;
			SStack_60._1_3_ = 0;
			SStack_60.value = 0;
			SStack_60 = new Nullable<Int32Enum>(0);
			SVar15 = SStack_60;
			pSVar10 = "level";
			pSVar9 = "MainMenu.Profile.Stats.Level";
			pSVar8 = Aottg2GisketchLocale.Text(pSVar9);
			AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar8, pSVar7, (System_Nullable_GameStatRecord__o)SVar15, pSVar10);
			pSVar1 = pGStack_78.Exp;
			if (pSVar1 != null) {
				iStack_7c = pSVar1._value;
				pSVar9 = iStack_7c.ToString();
				iStack_7c = GameProgressManager.GetExpToNext();
				pSVar10 = iStack_7c.ToString();
				pSVar7 = String.Concat(pSVar9, "/", pSVar10);
				SStack_70.hasValue = false;
				SStack_70._1_3_ = 0;
				SStack_70.value = 0;
				SStack_70 = new Nullable<Int32Enum>(1);
				SVar15 = SStack_70;
				pSVar10 = "exp";
				pSVar9 = "MainMenu.Profile.Stats.Exp";
				pSVar8 = Aottg2GisketchLocale.Text(pSVar9);
				AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar8, pSVar7, (System_Nullable_GameStatRecord__o)SVar15, pSVar10);
				pSVar2 = pGStack_78.PlayTime;
				if (pSVar2 != null) {
					fVar17 = pSVar2._value;
					if ((typeof(TimeSpan)._2).cctor_finished_or_no_cctor == 0) {
						fStack_4c = fVar17;
						fVar17 = fStack_4c;
					}
					ts = TimeSpan.FromSeconds((double)fVar17);
					pSVar7 = Format.GetReadableTimespan(ts);
					SStack_38.hasValue = false;
					SStack_38._1_3_ = 0;
					SStack_38.value = 0;
					SStack_38 = new Nullable<Int32Enum>(2);
					SVar15 = SStack_38;
					pSVar10 = "playtime";
					pSVar9 = "MainMenu.Profile.Stats.Playtime";
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar8 = Aottg2GisketchLocale.Text(pSVar9);
					AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar8, pSVar7, (System_Nullable_GameStatRecord__o)SVar15, pSVar10);
					pSVar2 = pGStack_78.HighestSpeed;
					if (pSVar2 != null) {
						iStack_7c = (int32_t)pSVar2._value;
						pSVar7 = iStack_7c.ToString();
						SStack_40.hasValue = false;
						SStack_40._1_3_ = 0;
						SStack_40.value = 0;
						SStack_40 = new Nullable<Int32Enum>(3);
						SVar15 = SStack_40;
						pSVar10 = "highest-speed";
						pSVar9 = "MainMenu.Profile.Stats.HighestSpeed";
						pSVar8 = Aottg2GisketchLocale.Text(pSVar9);
						AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar8, pSVar7, (System_Nullable_GameStatRecord__o)SVar15, pSVar10);
						AottgProfileStatsPanel.Header(ui, "Common.Achievements", (System_Nullable_GameStatRecord__o)0x0, null);
						if (achievements != null) {
							pSVar9 = (achievements.FinishedBronze).ToString();
							pSVar10 = (achievements.TotalBronze).ToString();
							pSVar10 = String.Concat(pSVar9, "/", pSVar10);
							pGVar5 = pGStack_78;
							pSVar9 = "MainMenu.Profile.Stats.Bronze";
							pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
							AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
							pSVar9 = (achievements.FinishedSilver).ToString();
							pSVar10 = (achievements.TotalSilver).ToString();
							pSVar10 = String.Concat(pSVar9, "/", pSVar10);
							pSVar9 = "MainMenu.Profile.Stats.Silver";
							pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
							AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
							pSVar9 = (achievements.FinishedGold).ToString();
							pSVar10 = (achievements.TotalGold).ToString();
							pSVar10 = String.Concat(pSVar9, "/", pSVar10);
							pSVar9 = "MainMenu.Profile.Stats.Gold";
							pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
							AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
							SStack_48.hasValue = false;
							SStack_48._1_3_ = 0;
							SStack_48.value = 0;
							SStack_48 = new Nullable<Int32Enum>(4);
							AottgProfileStatsPanel.Header(ui, "MainMenu.Profile.Stats.Damage", (System_Nullable_GameStatRecord__o)SStack_48, "damage");
							__this = pGVar5.Damage;
							if ((__this != null) &&(pIVar11 = (object)__this.GetStatLabels(), pIVar11 != null)) {
								pIVar3 = pIVar11.klass;
								uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
								pIStack_68 = pIVar11.Dispose();
								SStack_60.hasValue = false;
								SStack_60._1_3_ = 0;
								SStack_60.value = 0;
								ppIStack_58 = &pIStack_68;
								do {
									pIVar11 = pIStack_68;
									if (pIStack_68 == null) {
										throw new NullReferenceException();
									}
									pIVar3 = pIStack_68.klass;
									uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
									bVar6 = pIVar11.Dispose();
									pIVar11 = pIStack_68;
									if (!bVar6) {
										if (pIStack_68 == null) goto label_0590adf6;
										pIVar3 = pIStack_68.klass;
										uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
										if (uVar13 == 0) goto label_0590adcf;
										pIVar4 = (pIVar3._1).interfaceOffsets;
										lVar14 = 0;
										goto label_0590adc0;
									}
									if (pIStack_68 == null) {
										throw new NullReferenceException();
									}
									pIVar3 = pIStack_68.klass;
									uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
									auVar18 = pIVar11.Dispose();
									AottgProfileStatsPanel.Stat(ui, null, auVar18._0_8_, auVar18._8_8_, (System_Nullable_GameStatRecord__o)0x0, null);
								} while(true);
							}
						}
					}
				}
			}
		}
		goto label_0590b553;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar13 * 0x10 != lVar14)) break;
	label_0590adc0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar12 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar14);
				goto label_0590aded;
			}
		}
	label_0590adcf: ;
	label_0590aded: ;
		pIVar11.Dispose();
	label_0590adf6: ;
		SStack_60.hasValue = false;
		SStack_60._1_3_ = 0;
		SStack_60.value = 0;
		SStack_60 = new Nullable<Int32Enum>(5);
		AottgProfileStatsPanel.Header(ui, "MainMenu.Profile.Stats.TitansKilled", (System_Nullable_GameStatRecord__o)SStack_60, "titans-killed");
		pSVar1 = pGVar5.TitansKilledTotal;
		if (pSVar1 != null) {
			iStack_7c = pSVar1._value;
			pSVar10 = iStack_7c.ToString();
			pSVar9 = "MainMenu.Profile.Stats.Total";
			pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
			AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
			pSVar1 = pGVar5.TitansKilledBlade;
			if (pSVar1 != null) {
				iStack_7c = pSVar1._value;
				pSVar10 = iStack_7c.ToString();
				pSVar9 = "MainMenu.Profile.Stats.Blade";
				pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
				AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
				pSVar1 = pGVar5.TitansKilledAHSS;
				if (pSVar1 != null) {
					iStack_7c = pSVar1._value;
					pSVar10 = iStack_7c.ToString();
					pSVar9 = "MainMenu.Profile.Stats.AHSS";
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
					AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
					pSVar1 = pGVar5.TitansKilledAPG;
					if (pSVar1 != null) {
						iStack_7c = pSVar1._value;
						pSVar10 = iStack_7c.ToString();
						pSVar9 = "MainMenu.Profile.Stats.APG";
						pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
						AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
						pSVar1 = pGVar5.TitansKilledThunderspear;
						if (pSVar1 != null) {
							iStack_7c = pSVar1._value;
							pSVar10 = iStack_7c.ToString();
							pSVar9 = "MainMenu.Profile.Stats.ThunderSpear";
							pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
							AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
							pSVar1 = pGStack_78.TitansKilledOther;
							if (pSVar1 != null) {
								iStack_7c = pSVar1._value;
								pSVar10 = iStack_7c.ToString();
								pSVar9 = "MainMenu.Profile.Stats.Other";
								if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
								}
								pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
								AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
								SStack_70.hasValue = false;
								SStack_70._1_3_ = 0;
								SStack_70.value = 0;
								SStack_70 = new Nullable<Int32Enum>(6);
								AottgProfileStatsPanel.Header(ui, "MainMenu.Profile.Stats.HumansKilled", (System_Nullable_GameStatRecord__o)SStack_70, "humans-killed");
								pSVar1 = pGStack_78.HumansKilledTotal;
								if (pSVar1 != null) {
									iStack_7c = pSVar1._value;
									pSVar10 = iStack_7c.ToString();
									pSVar9 = "MainMenu.Profile.Stats.Total";
									if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
									}
									pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
									AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
									pSVar1 = pGStack_78.HumansKilledBlade;
									if (pSVar1 != null) {
										iStack_7c = pSVar1._value;
										pSVar10 = iStack_7c.ToString();
										pSVar9 = "MainMenu.Profile.Stats.Blade";
										if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
										}
										pSVar7 = Aottg2GisketchLocale.Text(pSVar9) ;
										AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
										pSVar1 = pGStack_78.HumansKilledAHSS;
										if (pSVar1 != null) {
											iStack_7c = pSVar1._value;
											pSVar10 = iStack_7c.ToString();
											pSVar9 = "MainMenu.Profile.Stats.AHSS";
											if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
											}
											pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
											AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
											pSVar1 = pGStack_78.HumansKilledAPG;
											if (pSVar1 != null) {
												iStack_7c = pSVar1._value;
												pSVar10 = iStack_7c.ToString();
												pSVar9 = "MainMenu.Profile.Stats.APG";
												if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
												}
												pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
												AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
												pSVar1 = pGStack_78.HumansKilledThunderspear;
												if (pSVar1 != null) {
													iStack_7c = pSVar1._value;
													pSVar10 = iStack_7c.ToString();
													pSVar9 = "MainMenu.Profile.Stats.ThunderSpear";
													pGVar5 = pGStack_78;
													if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
													}
													pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
													AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
													pSVar1 = pGVar5.HumansKilledTitan;
													if (pSVar1 != null) {
														iStack_7c = pSVar1._value;
														pSVar10 = iStack_7c.ToString();
														pSVar9 = "Common.Titan";
														if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
														}
														pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
														AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
														pSVar1 = pGVar5.HumansKilledOther;
														if (pSVar1 != null) {
															iStack_7c = pSVar1._value;
															pSVar10 = iStack_7c.ToString();
															pSVar9 = "MainMenu.Profile.Stats.Other";
															if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
															}
															pSVar7 = Aottg2GisketchLocale.Text(pSVar9);
															AottgProfileStatsPanel.Stat(ui, pSVar9, pSVar7, pSVar10, (System_Nullable_GameStatRecord__o)0x0, null);
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
	label_0590b553: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x580B580", Offset = "0x580A580", VA = "0x580B580")]
	private static void Header(AottgUi ui, string key, [Optional] GameStatRecord? record, [Optional] string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c (Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Header): 2 lines keep C-only constructs
		AottgProfileStatsPanel.c__DisplayClass2_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgProfileStatsPanel.c__DisplayClass2_0));
		__this = new Object();
		if (__this != null) {
			__this.key = key;
			__this.record = record;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0_Header_b__0);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", null, "Center", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				ui.Panel("row", __this_00, null, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x580B740", Offset = "0x580A740", VA = "0x580B740")]
	private static void Stat(AottgUi ui, string key, string value, [Optional] GameStatRecord? record, [Optional] string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c (Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat): clean
		String label;

		label = Aottg2GisketchLocale.Text(key);
		AottgProfileStatsPanel.Stat(ui, key, label, value, record, id);
		return;
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x580B7C0", Offset = "0x580A7C0", VA = "0x580B7C0")]
	private static void Stat(AottgUi ui, string key, string label, string value, GameStatRecord? record, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c (Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat): 2 lines keep C-only constructs
		AottgProfileStatsPanel.c__DisplayClass4_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgProfileStatsPanel.c__DisplayClass4_0));
		__this = new Object();
		if (__this != null) {
			__this.label = label;
			__this.key = key;
			__this.value = value;
			__this.record = record;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0_Stat_b__0);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 16.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				ui.Panel("row", __this_00, null, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x580B9E0", Offset = "0x580A9E0", VA = "0x580B9E0")]
	private static void ClearButton(AottgUi ui, GameStatRecord record, string label, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c (Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$ClearButton): 5 lines keep C-only constructs
		AottgProfileStatsPanel.c__DisplayClass5_0 __this;
		Action<GisketchActionContext> __this_00;
		String id_00;
		String format;
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		String* targetAddress;

		__this = il2cpp_codegen_object_new(typeof(AottgProfileStatsPanel.c__DisplayClass5_0));
		__this = new Object();
		if (__this != null) {
			__this.record = record;
			targetAddress = &__this.label;
			__this.label = label;
			__this_00 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0_ClearButton_b__0);
			id_00 = String.Concat("profile-stats-clear-", id);
			format = Aottg2GisketchLocale.Text("MainMenu.Profile.Stats.ClearRecordTooltip");
			pSVar1 = *targetAddress;
			if (pSVar1 != null) {
				pSVar1 = pSVar1.ToLowerInvariant();
				pSVar1 = String.Format(format, (object)pSVar1);
				if (ui != null) {
					pGVar2 = ui.IconButton(3, "return", __this_00, id_00, pSVar1, null);
					width = AottgUi.Points(42.0);
					height = AottgUi.Points(42.0);
					pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					if (pGVar2 != null) {
						pGVar2.layout = pGVar3;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x5807240", Offset = "0x5806240", VA = "0x5807240")]
	public AottgProfileStatsPanel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c (Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c.

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$.ctor: clean
	private void c__DisplayClass0_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass2_0$$.ctor: clean
	private void c__DisplayClass2_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$<Build>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass0_0__Build_b__0(AottgUi rows)
	{
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;
		MethodInfo method_00;

		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_OpenAll);
		if (rows != null) {
			pGVar1 = rows.ButtonKey(6, "MainMenu.Profile.Stats.ClearAll", __this_00, "profile-stats-clear-all", null, null, "return");
			method_00 = (MethodInfo *)"FlexEnd";
			pGVar2 = AottgUi.Layout("Column", null, null, "FlexEnd", null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				AottgProfileStatsPanel.BuildRows(rows, this.stat, this.achievements);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass2_0$$<Header>b__0: clean
	private void c__DisplayClass2_0__Header_b__0(AottgUi row)
	{
		int record;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;

		if (row != null) {
			pGVar1 = row.TextKey(this.key, "header", null, null, null);
			width = AottgUi.Percent(100.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				if (this.record.hasValue == false) {
					return;
				}
				record = (this.record).Value;
				AottgProfileStatsPanel.ClearButton(row, record, pGVar1.text, this.id);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass4_0$$<Stat>b__0: clean
	private void c__DisplayClass4_0__Stat_b__0(AottgUi row)
	{
		int record;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;

		if (row != null) {
			pGVar1 = row.Text(this.label, "subtext", null, null, null);
			if (pGVar1 != null) {
				pGVar1.textKey = this.key;
				width = AottgUi.Percent(100.0);
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				pGVar1.layout = pGVar2;
				pGVar1 = row.Text(this.value, "header", null, null, null);
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (pGVar1 != null) {
					pGVar1.layout = pGVar2;
					if (this.record.hasValue == false) {
						return;
					}
					record = (this.record).Value;
					AottgProfileStatsPanel.ClearButton(row, record, this.label, this.id);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass5_0$$<ClearButton>b__0: clean
	private void c__DisplayClass5_0__ClearButton_b__0(GisketchActionContext context)
	{


		AottgProfileStatsClearDialog.Open(context, this.record, this.label);
		return;
	}
}
