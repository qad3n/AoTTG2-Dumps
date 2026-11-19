// ==================== AoTTG2 cross-reference ====================
// Type: UI.QuestAchievementsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/QuestAchievementsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestAchievementsPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000885")]
internal class QuestAchievementsPanel : QuestCategoryPanel
{
	[Token(Token = "0x17000E32")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005129")]
		[Address(RVA = "0x5C58590", Offset = "0x5C57590", VA = "0x5C58590", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/QuestAchievementsPanel.c (UI.QuestAchievementsPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x600512A")]
	[Address(RVA = "0x5C585A0", Offset = "0x5C575A0", VA = "0x5C585A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/QuestAchievementsPanel.c (UI.QuestAchievementsPanel$$Setup): 15 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		GameProgressContainer pGVar4;
		AchievementContainer pGVar5;
		ListSetting<AchievementItem> pSVar6;
		List<object> __this_00;
		StringSetting pSVar7;
		QuestItem[] pGVar8;
		object __this_01;
		bool bVar10;
		int top;
		int bottom;
		VerticalLayoutGroup __this_02;
		RectOffset pUVar11;
		GameObject pUVar12;
		Transform pUVar13;
		LayoutElement pUVar14;
		HorizontalLayoutGroup __this_03;
		Transform pUVar15;
		AchievementCount pGVar16;
		Text pUVar17;
		String pSVar18;
		String pSVar19;
		Image pUVar20;
		List<QuestItem> items;
		Color UVar21;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		QuestItem pGStack_38;

		SStack_68._list = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._current = null;
		this.Setup(parent);
		pUVar13 = this.SinglePanel;
		if (pUVar13 != null) {
			__this_02 = pUVar13.GetComponent<VerticalLayoutGroup>();
			top = this.get_VerticalPadding();
			bottom = this.get_VerticalPadding();
			pUVar11 = new RectOffset(10, 0x19, top, bottom);
			if (__this_02 != null) {
				__this_02.padding = pUVar11;
				pUVar12 = ElementFactory.InstantiateAndBind(this.SinglePanel, "Prefabs/MainMenu/AchievementHeader");
				if (pUVar12 != null) {
					pUVar13 = pUVar12.transform;
					if (pUVar13 != null) {
						pUVar14 = pUVar13.GetComponent<LayoutElement>();
						if (pUVar14 != null) {
							pUVar14.set_preferredWidth(this.QuestItemWidth);
							__this_03 = pUVar13.GetComponent<HorizontalLayoutGroup>();
							pUVar11 = new RectOffset(10, 10, 0, 0);
							if (__this_03 != null) {
								__this_03.padding = pUVar11;
								if (parent == null) {
									pUVar13.Find("LeftPanel");
									throw new NullReferenceException();
								}
								bVar2 = (typeof(QuestPopup)._2).typeHierarchyDepth;
								if (((parent.klass._2).typeHierarchyDepth < bVar2) ||((parent.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(QuestPopup) )) {
									throw new InvalidCastException();
								}
								pUVar15 = pUVar13.Find("LeftPanel");
								parent.CreateAchievementDropdowns(pUVar15);
								pGVar4 = GameProgressManager.GameProgress;
								if ((pGVar4 != null) &&(pGVar5 = pGVar4.Achievement, pGVar5 != null) ) {
									pGVar16 = pGVar5.GetAchievementCount();
									pUVar15 = pUVar13.Find("RightPanel/TrophyCountBronze/Label");
									if (pUVar15 != null) {
										pUVar17 = pUVar15.GetComponent<Text>();
										if (pGVar16 != null) {
											pSVar18 = (pGVar16.FinishedBronze).ToString();
											pSVar19 = (pGVar16.TotalBronze).ToString();
											pSVar18 = String.Concat(pSVar18, "/", pSVar19);
											if (pUVar17 != null) {
												pUVar17.set_text(pSVar18);
												pUVar15 = pUVar13.Find("RightPanel/TrophyCountSilver/Label");
												if (pUVar15 != null) {
													pUVar17 = pUVar15.GetComponent<Text>();
													pSVar18 = (pGVar16.FinishedSilver).ToString();
													pSVar19 = (pGVar16.TotalSilver).ToString();
													pSVar18 = String.Concat(pSVar18, "/", pSVar19);
													if (pUVar17 != null) {
														pUVar17.set_text(pSVar18);
														pUVar15 = pUVar13.Find("RightPanel/TrophyCountGold/Label");
														if (pUVar15 != null) {
															pUVar17 = pUVar15.GetComponent<Text>();
															pSVar18 = (pGVar16.FinishedGold).ToString();
															pSVar19 = (pGVar16.TotalGold).ToString();
															pSVar18 = String.Concat(pSVar18, "/", pSVar19);
															if (pUVar17 != null) {
																pUVar17.set_text(pSVar18);
																pUVar15 = pUVar13.Find("RightPanel/TrophyCountBronze/Image");
																if (pUVar15 != null) {
																	pUVar20 = pUVar15.GetComponent<Image>();
																	pSVar18 = this.get_ThemePanel();
																	UVar21 = UIManager.GetThemeColor(pSVar18, "Trophy", "BronzeColor", "DefaultPanel");
																	if (pUVar20 != null) {
																		pUVar20.set_color(UVar21);
																		pUVar15 = pUVar13.Find("RightPanel/TrophyCountSilver/Image");
																		if (pUVar15 != null) {
																			pUVar20 = pUVar15.GetComponent<Image>();
																			pSVar18 = this.get_ThemePanel();
																			UVar21 = UIManager.GetThemeColor(pSVar18, "Trophy", "SilverColor", "DefaultPanel");
																			if (pUVar20 != null) {
																				pUVar20.set_color(UVar21) ;
																				pUVar15 = pUVar13.Find("RightPanel/TrophyCountGold/Image");
																				if (pUVar15 != null) {
																					pUVar20 = pUVar15.GetComponent<Image>();
																					pSVar18 = this.get_ThemePanel();
																					UVar21 = UIManager.GetThemeColor(pSVar18, "Trophy", "GoldColor", "DefaultPanel");
																					if (pUVar20 != null) {
																						pUVar20.set_color(UVar21);
																						pUVar15 = pUVar13.Find("RightPanel/TrophyCountBronze/Label");
																						if (pUVar15 != null) {
																							pUVar17 = pUVar15.GetComponent<Text>();
																							pSVar18 = this.get_ThemePanel();
																							UVar21 = UIManager.GetThemeColor(pSVar18, "Trophy", "TextColor", "DefaultPanel");
																							if (pUVar17 != null) {
																								pUVar17.set_color(UVar21);
																								pUVar15 = pUVar13.Find("RightPanel/TrophyCountSilver/Label");
																								if (pUVar15 != null) {
																									pUVar17 = pUVar15.GetComponent<Text>();
																									pSVar18 = (*(this.klass.vtable)._4_get_ThemePanel. methodPtr)(this,(this.klass.vtable). _4_get_ThemePanel.method);
																									UVar21 = UIManager.GetThemeColor(pSVar18, "Trophy", "TextColor", "DefaultPanel");
																									if (pUVar17 != null) {
																										pUVar17.set_color(UVar21);
																										pUVar13 = pUVar13.Find("RightPanel/TrophyCountGold/Label");
																										if (pUVar13 != null) {
																											pUVar17 = pUVar13.GetComponent<Text>();
																											pSVar18 = (*(this.klass.vtable)._4_get_ThemePanel. methodPtr)(this,(this.klass.vtable). _4_get_ThemePanel.method);
																											UVar21 = UIManager.GetThemeColor(pSVar18, "Trophy", "TextColor", "DefaultPanel");
																											if (pUVar17 != null) {
																												pUVar17.set_color(UVar21);
																												items = il2cpp_codegen_object_new((Il2CppClass)typeof(List<QuestItem>));
																												items = new List<object>();
																												pGVar4 = typeof(GameProgressManager). static_fields.GameProgress;
																												if ((((pGVar4 != (GameProgress_GameProgressContainer_o * )0x0) &&(pGVar5 = pGVar4.Achievement, pGVar5 != (AchievementContainer)0x0)) &&(pSVar6 = pGVar5.AchievementItems, pSVar6 != (Settings_ListSetting_AchievementItem__o * )0x0)) &&(__this_00 = (List<object>)pSVar6._value, __this_00 !=null)) {
																													auStack_48.GetEnumerator(__this_00);
																												SStack_68._current = (object)pGStack_38;
																												SStack_68._list =(List<T>)auStack_48._0_8_;
																												SStack_68._index = auStack_48._8_4_;
																												SStack_68._version = auStack_48._12_4_;
																												auStack_48._0_8_ =null;
																												auStack_48._8_8_ = &SStack_68;
	label_05d58f00: ;
																												do {
																													bVar10 = SStack_68.MoveNext();
																												__this_01 = SStack_68._current;
																												if (!bVar10) {

																												SStack_68.Dispose();
																												this.CreateQuestItems(items);
																												return;
																												}
																												pUVar12 = (*(ulong)((sbyte)parent + 0xa8));
																												if (pUVar12 == null) {
																													throw new NullReferenceException();
																												}
																												if ((QuestItem)SStack_68._current ==null) {
																													throw new NullReferenceException();
																												}
																												if (((QuestItem)((long)SStack_68._current + 0x80)).klass ==null) {
																													throw new NullReferenceException();
																												}
																												bVar10 = ((*(ulong)((sbyte)pUVar12 + 0x20)) != (((QuestItem)((long)SStack_68._current + 0x80)).klass._1).byval_arg.data);
																												} while (bVar10);
																												pSVar7 = (*(ulong)((sbyte)parent + 0xb0));
																												if (pSVar7 == null) {
																													throw new NullReferenceException();
																												}
																												bVar10 = (pSVar7._value == "Completed");
																												if (bVar10) goto code_r0x05d58f79;
																												goto label_05d58f8b;
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
	code_r0x05d58f79: ;
		bVar10 = __this_01.Finished();
		if (bVar10) {
	label_05d58f8b: ;
			pSVar7 = (*(ulong)((sbyte)parent + 0xb0));
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			bVar10 = (pSVar7._value == "In Progress");
			if (bVar10) {
				bVar10 = __this_01.Finished();
				if (bVar10) goto label_05d58f00;
			}
			if (items != null) {
				piVar1 = &items._version;
				*piVar1 = *piVar1 + 1;
				pGVar8 = items._items;
				if (pGVar8 != null) {
					uVar3 = items._size;
					if (uVar3 < (uint)pGVar8.Length) {
						items._size = uVar3 + 1;
						pGVar8[(int)uVar3] = (QuestItem)__this_01;
					}
					else {
						items.AddWithResize(__this_01);
					}
					goto label_05d58f00;
				}
			}
			throw new NullReferenceException();
		}
		goto label_05d58f00;
	}

	[Token(Token = "0x600512B")]
	[Address(RVA = "0x5C5A030", Offset = "0x5C59030", VA = "0x5C5A030")]
	public QuestAchievementsPanel()
	{
		// Lifted from source/cpp/UI/QuestAchievementsPanel.c (UI.QuestAchievementsPanel$$.ctor): clean
		this.QuestItemWidth = 940.0;
		this.QuestItemHeight = 100.0;
		base();
		return;
	}
}
