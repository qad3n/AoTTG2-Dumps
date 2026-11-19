// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorStatsPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorStatsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorStatsPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007C5")]
internal class CharacterEditorStatsPanel : HeadedPanel
{
	[Token(Token = "0x17000D12")]
	protected override string Title
	{
		[Token(Token = "0x6004AED")]
		[Address(RVA = "0x5BD8990", Offset = "0x5BD7990", VA = "0x5BD8990", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Stats");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000D13")]
	protected override float Width
	{
		[Token(Token = "0x6004AEE")]
		[Address(RVA = "0x5BD89F0", Offset = "0x5BD79F0", VA = "0x5BD89F0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$get_Width): clean
			return 330.0;
		}
	}

	[Token(Token = "0x17000D14")]
	protected override float Height
	{
		[Token(Token = "0x6004AEF")]
		[Address(RVA = "0x5BD8A00", Offset = "0x5BD7A00", VA = "0x5BD8A00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$get_Height): clean
			return 360.0;
		}
	}

	[Token(Token = "0x17000D15")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004AF0")]
		[Address(RVA = "0x5BD8A10", Offset = "0x5BD7A10", VA = "0x5BD8A10", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000D16")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004AF1")]
		[Address(RVA = "0x5BD8A20", Offset = "0x5BD7A20", VA = "0x5BD8A20", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$get_HorizontalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000D17")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004AF2")]
		[Address(RVA = "0x5BD8A30", Offset = "0x5BD7A30", VA = "0x5BD8A30", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$get_VerticalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x6004AF3")]
	[Address(RVA = "0x5BD8A40", Offset = "0x5BD7A40", VA = "0x5BD8A40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$Setup): 8 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		StringSetting pSVar3;
		String subCategory;
		String pSVar4;
		ElementStyle __this_01;
		BaseSetSetting pSVar5;
		HumanStats pCVar6;
		Transform[] statbars;
		String pSVar7;
		Transform pUVar8;
		object pIVar9;
		UnityAction pUVar10;
		MethodInfo pMVar11;

		this.Setup(parent);
		pSVar4 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 130.0, 20.0, pSVar4);
		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 == null) ||(__this_00 = pSVar2.CustomSets, __this_00 == null)) {
	label_05cd8fa8: ;
			throw new NullReferenceException();
		}
		pSVar5 = __this_00.GetSelectedSet();
		if (pSVar5 != null) {
			bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
			if (((pSVar5.klass._2).typeHierarchyDepth < bVar1) ||((pSVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(HumanCustomSet) )) {
				throw new InvalidCastException();
			}
		}
		pCVar6 = new HumanStats(null);
		if ((pSVar5 == null) ||(pSVar3 = (*(ulong)((sbyte)pSVar5 + 0x108)), pSVar3 == null)) goto label_05cd8fa8;
		pSVar4 = pSVar3._value;
		pCVar6 = HumanStats.Deserialize(pCVar6, pSVar4);
		subCategory = "Stats";
		pSVar4 = "CharacterEditor";
		statbars = (Transform[])new Transform[4];
		pMVar11 = (MethodInfo *)"";
		pSVar7 = UIManager.GetLocale(pSVar4, subCategory, "Acceleration", "", "");
		if (pCVar6 == null) goto label_05cd8fa8;
		pUVar8 = this.CreateStatBar(pSVar7, pCVar6.Acceleration);
		if (statbars == null) goto label_05cd8fa8;
		if (pUVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst((object)pUVar8, (((statbars.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05cd8fb2;
		}
		if ((int)statbars.Length != 0) {
			statbars[0] = pUVar8;
			pMVar11 = (MethodInfo *)"";
			pSVar7 = UIManager.GetLocale(pSVar4, subCategory, "Speed", "", "");
			pUVar8 = this.CreateStatBar(pSVar7, pCVar6.Speed);
			if (pUVar8 != null) {
				pIVar9 = il2cpp_vm_Object_IsInst((object)pUVar8, (((statbars.obj).klass)._1).element_class);
				if (pIVar9 == null) goto label_05cd8fb2;
			}
			if ((statbars.Length & 0xfffffffe) == 0) goto label_05cd8fad;
			statbars[1] = pUVar8;
			pMVar11 = (MethodInfo *)"";
			pSVar7 = UIManager.GetLocale(pSVar4, subCategory, "Gas", "", "");
			pUVar8 = this.CreateStatBar(pSVar7, pCVar6.Gas);
			if (pUVar8 != null) {
				pIVar9 = il2cpp_vm_Object_IsInst((object)pUVar8, (((statbars.obj).klass)._1).element_class);
				if (pIVar9 == null) goto label_05cd8fb2;
			}
			if (2 < (uint)statbars.Length) {
				statbars[2] = pUVar8;
				pMVar11 = (MethodInfo *)"";
				pSVar7 = UIManager.GetLocale(pSVar4, subCategory, "Ammunition", "", "");
				pUVar8 = this.CreateStatBar(pSVar7, pCVar6.Ammunition);
				if (pUVar8 != null) {
					pIVar9 = il2cpp_vm_Object_IsInst((object)pUVar8, (((statbars.obj).klass)._1).element_class);
					if (pIVar9 == null) {
	label_05cd8fb2: ;
						pIVar9 = new ArrayTypeMismatchException();
						throw pIVar9;
					}
				}
				if ((statbars.Length & 0xfffffffc) != 0) {
					statbars[3] = pUVar8;
					this.FitStatBarColumns(statbars);
					pUVar8 = this.BottomBar;
					pMVar11 = (MethodInfo *)"";
					pSVar7 = UIManager.GetLocale(pSVar4, subCategory, "EditStats", "", "");
					pUVar10 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_0);
					ElementFactory.CreateTextButton(pUVar8, __this_01, pSVar7, 0.0, pUVar10);
					pUVar8 = this.BottomBar;
					pMVar11 = (MethodInfo *)"";
					pSVar4 = UIManager.GetLocale(pSVar4, subCategory, "EditPerks", "", "");
					pUVar10 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_1);
					ElementFactory.CreateTextButton(pUVar8, __this_01, pSVar4, 0.0, pUVar10);
					return;
				}
			}
		}
	label_05cd8fad: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004AF4")]
	[Address(RVA = "0x5BD9440", Offset = "0x5BD8440", VA = "0x5BD9440")]
	protected void FitStatBarColumns(Transform[] statbars)
	{
		// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$FitStatBarColumns): clean
		uint uVar1;
		int iVar2;
		Transform pUVar3;
		LayoutElement pUVar4;
		Text pUVar5;
		HorizontalLayoutGroup __this_00;
		Transform __this_01;
		ulong uVar6;
		long lVar7;
		float fVar8;
		float fVar9;
		float local_38;

		if (statbars != null) {
			if ((int)statbars.Length == 0) {
	label_05cd9724: ;
				throw new IndexOutOfRangeException();
			}
			if (statbars[0] != null) {
				pUVar3 = (statbars[0]).Find("Value");
				if (pUVar3 != null) {
					pUVar4 = pUVar3.GetComponent<LayoutElement>() ;
					if (pUVar4 != null) {
						fVar8 = pUVar4.get_preferredWidth();
						fVar9 = this.get_Width();
						iVar2 = this.get_HorizontalPadding();
						uVar1 = (uint)statbars.Length;
						uVar6 = (ulong)uVar1;
						if (0 < (int)uVar1) {
							fVar8 = ((fVar9 - ((float)iVar2 + (float)iVar2)) + -24.0) - fVar8;
							local_38 = 0.0;
							lVar7 = 0;
							do {
								if ((uint)uVar6 <= (uint)lVar7) goto label_05cd9724;
								if (statbars[lVar7] == null) goto label_05cd971f;
								pUVar3 = (statbars[lVar7]).Find("Label");
								if (pUVar3 == null) goto label_05cd971f;
								pUVar5 = pUVar3.GetComponent<Text>();
								if (pUVar5 == null) goto label_05cd971f;
								fVar9 = pUVar5.get_preferredWidth();
								if (local_38 <= fVar9) {
									local_38 = fVar9;
								}
								uVar6 = statbars.Length;
								lVar7 = lVar7 + 1;
							} while ((int)lVar7 < (int)uVar6);
							if (0 < (int)uVar6) {
								fVar9 = fVar8 * 0.7;
								if (fVar9 <= local_38) {
									local_38 = fVar9;
								}
								lVar7 = 0;
								do {
									if ((uint)uVar6 <= (uint)lVar7) goto label_05cd9724;
									pUVar3 = statbars[lVar7];
									if (pUVar3 == null) goto label_05cd971f;
									__this_00 = pUVar3.GetComponent<HorizontalLayoutGroup>();
									if (__this_00 == null) goto label_05cd971f;
									__this_00.spacing = 12.0;
									__this_01 = pUVar3.Find("Label");
									if (__this_01 == null) goto label_05cd971f;
									pUVar4 = __this_01.GetComponent<LayoutElement>();
									if (pUVar4 == null) goto label_05cd971f;
									pUVar4.set_preferredWidth(local_38);
									pUVar3 = pUVar3.Find("ProgressBar");
									if (pUVar3 == null) goto label_05cd971f;
									pUVar4 = pUVar3.GetComponent<LayoutElement>();
									if (pUVar4 == null) goto label_05cd971f;
									pUVar4.set_preferredWidth(fVar8 - local_38);
									uVar1 = (uint)statbars.Length;
									uVar6 = (ulong)uVar1;
									lVar7 = lVar7 + 1;
								} while ((int)lVar7 < (int)uVar1);
							}
						}
						return;
					}
				}
			}
		}
	label_05cd971f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AF5")]
	[Address(RVA = "0x5BD8FD0", Offset = "0x5BD7FD0", VA = "0x5BD8FD0")]
	protected Transform CreateStatBar(string title, int value)
	{
		// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$CreateStatBar): 2 lines keep C-only constructs
		GameObject __this_00;
		Transform __this_01;
		Transform pUVar1;
		Text pUVar2;
		String pSVar3;
		Slider pUVar4;
		Image pUVar5;
		uint in_register_00000014;
		MethodInfo method_00;
		float fVar6;
		float fVar7;
		Color UVar8;
		int local_34;

		method_00 = (MethodInfo)CONCAT44(in_register_00000014, value);
		__this_00 = ElementFactory.InstantiateAndBind(this.SinglePanel, "Prefabs/Misc/StatBar");
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				pUVar1 = __this_01.Find("Label");
				if (pUVar1 != null) {
					pUVar2 = pUVar1.GetComponent<Text>();
					if (pUVar2 != null) {
						pUVar2.set_text(title);
						pUVar1 = __this_01.Find("Label");
						if (pUVar1 != null) {
							pUVar2 = pUVar1.GetComponent<Text>();
							pSVar3 = this.get_ThemePanel();
							UVar8 = UIManager.GetThemeColor(pSVar3, "DefaultLabel", "TextColor", "DefaultPanel");
							if (pUVar2 != null) {
								pUVar2.set_color(UVar8);
								pUVar1 = __this_01.Find("ProgressBar");
								if (pUVar1 != null) {
									pUVar4 = pUVar1.GetComponent<Slider>();
									if (pUVar4 != null) {
										fVar6 = ((float)value + -50.0) / 50.0;
										fVar7 = 1.0;
										if (fVar6 <= 1.0) {
											fVar7 = fVar6;
										}
										pUVar4.set_value((float)(-(uint)(0.0 <= fVar6) & (uint)fVar7));
										pUVar1 = __this_01.Find("ProgressBar/Background");
										if (pUVar1 != null) {
											pUVar5 = pUVar1.GetComponent<Image>();
											UVar8 = UIManager.GetThemeColor("QuestPopup", "QuestItem", "ProgressBarBackgroundColor", "DefaultPanel");
											if (pUVar5 != null) {
												pUVar5.set_color(UVar8);
												pUVar1 = __this_01.Find("ProgressBar/Fill Area/Fill");
												if (pUVar1 != null) {
													pUVar5 = pUVar1.GetComponent<Image>();
													UVar8 = UIManager.GetThemeColor("QuestPopup", "QuestItem", "ProgressBarFillColor", "DefaultPanel");
													if (pUVar5 != null) {
														pUVar5.set_color(UVar8);
														pUVar1 = __this_01.Find("Value");
														if (pUVar1 != null) {
															pUVar2 = pUVar1.GetComponent<Text>();
															pSVar3 = local_34.ToString();
															if (pUVar2 != null) {
																pUVar2.set_text(pSVar3);
																pUVar1 = __this_01.Find("Value");
																if (pUVar1 != null) {
																	pUVar2 = pUVar1.GetComponent<Text>();
																	pSVar3 = this.get_ThemePanel();
																	UVar8 = UIManager.GetThemeColor(pSVar3, "DefaultLabel", "TextColor", "DefaultPanel");
																	if (pUVar2 != null) {
																		pUVar2.set_color(UVar8);
																		return __this_01;
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

	[Token(Token = "0x6004AF6")]
	[Address(RVA = "0x5BD9880", Offset = "0x5BD8880", VA = "0x5BD9880")]
	protected void OnButtonClick(string button)
	{
		// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$OnButtonClick): 8 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		MessagePopup pUVar3;
		bool bVar4;
		TooltipPopup pUVar5;
		BaseMenu pUVar6;

		bVar4 = (button == "EditStats");
		if (bVar4) {
			pUVar6 = UIManager.CurrentMenu;
			if (pUVar6 == null) goto label_05cd9c7c;
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd9c77;
			pUVar5 = (*(ulong)((sbyte)pUVar6 + 0xc0));
			if (pUVar5 == null) goto label_05cd9c7c;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			if (pUVar5.IsActive != false) {
				if (uVar2 == 0) {
					pUVar6 = UIManager.CurrentMenu;
					if (pUVar6 == null) goto label_05cd9c7c;
				}
				bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
				if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd9c77;
				pUVar5 = (*(ulong)((sbyte)pUVar6 + 0xc0));
				if (pUVar5 != null) goto label_05cd9ace;
				goto label_05cd9c7c;
			}
			if (uVar2 == 0) {
				pUVar6 = UIManager.CurrentMenu;
				if (pUVar6 == null) goto label_05cd9c7c;
			}
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd9c77;
			pUVar3 = (*(ulong)((sbyte)pUVar6 + 0xc8));
			if (pUVar3 == null) goto label_05cd9c7c;
			pUVar3.Hide();
			pUVar6 = UIManager.CurrentMenu;
			if (pUVar6 == null) goto label_05cd9c7c;
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd9c77;
			pUVar5 = (*(ulong)((sbyte)pUVar6 + 0xc0));
		}
		else {
			bVar4 = (button == "EditPerks");
			if (!bVar4) {
				return;
			}
			pUVar6 = UIManager.CurrentMenu;
			if (pUVar6 == null) goto label_05cd9c7c;
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd9c77;
			pUVar3 = (*(ulong)((sbyte)pUVar6 + 0xc8));
			if (pUVar3 == null) goto label_05cd9c7c;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			if (pUVar3.IsActive != false) {
				if (uVar2 == 0) {
					pUVar6 = UIManager.CurrentMenu;
					if (pUVar6 == null) goto label_05cd9c7c;
				}
				bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
				if ((bVar1 <= (pUVar6.klass._2).typeHierarchyDepth) &&((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu))) {
					pUVar5 = (TooltipPopup)(*(ulong)((sbyte)pUVar6 + 0xc8));
					if (pUVar5 == null) goto label_05cd9c7c;
	label_05cd9ace: ;
					pUVar5.Hide();
					return;
				}
	label_05cd9c77: ;
				throw new InvalidCastException();
			}
			if (uVar2 == 0) {
				pUVar6 = UIManager.CurrentMenu;
				if (pUVar6 == null) goto label_05cd9c7c;
			}
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd9c77;
			pUVar5 = (*(ulong)((sbyte)pUVar6 + 0xc0));
			if (pUVar5 == null) goto label_05cd9c7c;
			pUVar5.Hide();
			pUVar6 = UIManager.CurrentMenu;
			if (pUVar6 == null) goto label_05cd9c7c;
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd9c77;
			pUVar5 = (TooltipPopup)(*(ulong)((sbyte)pUVar6 + 0xc8));
		}
		if (pUVar5 != null) {
			pUVar5.Show();
			return;
		}
	label_05cd9c7c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AF7")]
	[Address(RVA = "0x5BD9C90", Offset = "0x5BD8C90", VA = "0x5BD9C90")]
	public CharacterEditorStatsPanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorStatsPanel.c (UI.CharacterEditorStatsPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorStatsPanel.c.

	// UI.CharacterEditorStatsPanel$$<Setup>b__12_0: 1 lines keep C-only constructs
	private void Setup_b__12_0()
	{
		String* ppSVar1;

		if (g_data_07547bc8 == false) {
			ppSVar1 = &"EditStats";
			g_data_07547bc8 = true;
			this = (CharacterEditorStatsPanel)ppSVar1;
		}
		this.OnButtonClick("EditStats");
		return;
	}

	// UI.CharacterEditorStatsPanel$$<Setup>b__12_1: 1 lines keep C-only constructs
	private void Setup_b__12_1()
	{
		String* ppSVar1;

		if (g_data_07547bc9 == false) {
			ppSVar1 = &"EditPerks";
			g_data_07547bc9 = true;
			this = (CharacterEditorStatsPanel)ppSVar1;
		}
		this.OnButtonClick("EditPerks");
		return;
	}
}
