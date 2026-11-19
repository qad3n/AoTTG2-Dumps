// ==================== AoTTG2 cross-reference ====================
// Type: UI.QuestCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/QuestCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestCategoryPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameProgress;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000886")]
internal class QuestCategoryPanel : CategoryPanel
{
	[Token(Token = "0x4002B19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected float QuestItemWidth;

	[Token(Token = "0x4002B1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	protected float QuestItemHeight;

	[Token(Token = "0x17000E33")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600512C")]
		[Address(RVA = "0x5C5A070", Offset = "0x5C59070", VA = "0x5C5A070", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$get_ThemePanel): clean
			return "QuestPopup";
		}
	}

	[Token(Token = "0x17000E34")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600512D")]
		[Address(RVA = "0x5C5A0A0", Offset = "0x5C590A0", VA = "0x5C5A0A0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000E35")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600512E")]
		[Address(RVA = "0x5C5A0B0", Offset = "0x5C590B0", VA = "0x5C5A0B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000E36")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600512F")]
		[Address(RVA = "0x5C5A0C0", Offset = "0x5C590C0", VA = "0x5C5A0C0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000E37")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6005130")]
		[Address(RVA = "0x5C5A0D0", Offset = "0x5C590D0", VA = "0x5C5A0D0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$get_PanelAlignment): clean
			return 1;
		}
	}

	[Token(Token = "0x6005131")]
	[Address(RVA = "0x5C59100", Offset = "0x5C58100", VA = "0x5C59100", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$Setup): clean
		this.Setup(parent);
		return;
	}

	[Token(Token = "0x6005132")]
	[Address(RVA = "0x5C59420", Offset = "0x5C58420", VA = "0x5C59420")]
	protected void CreateQuestItems(List<QuestItem> items)
	{
		// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$CreateQuestItems): 9 lines keep C-only constructs
		StringSetting pSVar1;
		object item;
		bool bVar2;
		GameObject pUVar3;
		Transform pUVar4;
		LayoutElement pUVar5;
		Transform pUVar6;
		RawImage pUVar7;
		String name;
		Texture value;
		Image pUVar8;
		String pSVar9;
		Text pUVar10;
		Texture2D* method_00;
		QuestCategoryPanel __this_00;
		Color UVar11;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		QuestItem local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		if (items == null) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)items);
		local_68._current = (object)local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		while(true) {
			bVar2 = local_68.MoveNext();
			item = local_68._current;
			if (!bVar2) {
				local_68.Dispose();
				return;
			}
			pUVar3 = ElementFactory.InstantiateAndBind(this.SinglePanel, "Prefabs/MainMenu/QuestItemPanel");
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			pUVar4 = pUVar3.transform;
			if (pUVar4 == null) {
				throw new NullReferenceException();
			}
			pUVar5 = pUVar4.GetComponent<LayoutElement>();
			if (pUVar5 == null) {
				throw new NullReferenceException();
			}
			pUVar5.set_preferredWidth(this.QuestItemWidth);
			pUVar5 = pUVar4.GetComponent<LayoutElement>();
			if (pUVar5 == null) {
				throw new NullReferenceException();
			}
			pUVar5.set_preferredHeight(this.QuestItemHeight) ;
			pUVar6 = pUVar4.Find("Panel/Icon");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar7 = pUVar6.GetComponent<RawImage>();
			if ((QuestItem)item == null) {
				throw new NullReferenceException();
			}
			pSVar1 = ((QuestItem)((long)item + 0x10)).Icon;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = ResourcePaths.UI;
			name = String.Concat("Icons/Quests/", pSVar1._value, "Icon");
			value = (Texture)ResourceManager.LoadAsset(pSVar9, name, true, false);
			if (pUVar7 == null) {
				throw new NullReferenceException();
			}
			if (value != null) {
				method_00 = &typeof(Texture2D);
				if (value.klass != (Texture)typeof(Texture2D)) {
					throw new InvalidCastException();
				}
			}
			pUVar7.texture = value;
			this.SetTitle((QuestItem)item, pUVar4);
			__this_00 = this;
			this.SetRewardLabel((QuestItem)item, pUVar4);
			__this_00.SetProgress((QuestItem)item, pUVar4);
			pUVar6 = pUVar4.Find("Background");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar8 = pUVar6.GetComponent<Image>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "BackgroundColor", "DefaultPanel");
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			pUVar8.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/CheckIcon");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar3 = pUVar6.gameObject;
			bVar2 = item.Finished();
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			pUVar3.SetActive(bVar2);
			pUVar6 = pUVar4.Find("Border");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar8 = pUVar6.GetComponent<Image>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "BorderColor", "DefaultPanel");
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			pUVar8.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/Icon");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar7 = pUVar6.GetComponent<RawImage>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "IconColor", "DefaultPanel");
			if (pUVar7 == null) break;
			pUVar7.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/CheckIcon");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar8 = pUVar6.GetComponent<Image>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "CheckColor", "DefaultPanel");
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			pUVar8.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/Title");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar10 = pUVar6.GetComponent<Text>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "TextColor", "DefaultPanel");
			if (pUVar10 == null) {
				throw new NullReferenceException();
			}
			pUVar10.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/ProgressLabel");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar10 = pUVar6.GetComponent<Text>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "TextColor", "DefaultPanel");
			if (pUVar10 == null) {
				throw new NullReferenceException();
			}
			pUVar10.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/RewardLabel");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar10 = pUVar6.GetComponent<Text>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "TextColor", "DefaultPanel");
			if (pUVar10 == null) {
				throw new NullReferenceException();
			}
			pUVar10.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/CheckIcon");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar8 = pUVar6.GetComponent<Image>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "IconColor", "DefaultPanel");
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			pUVar8.set_color(UVar11);
			pUVar6 = pUVar4.Find("Panel/ProgressBar/Background");
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			pUVar8 = pUVar6.GetComponent<Image>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "ProgressBarBackgroundColor", "DefaultPanel");
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			pUVar8.set_color(UVar11);
			pUVar4 = pUVar4.Find("Panel/ProgressBar/Fill Area/Fill");
			if (pUVar4 == null) {
				throw new NullReferenceException();
			}
			pUVar8 = pUVar4.GetComponent<Image>();
			pSVar9 = this.get_ThemePanel();
			UVar11 = UIManager.GetThemeColor(pSVar9, "QuestItem", "ProgressBarFillColor", "DefaultPanel");
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			pUVar8.set_color(UVar11);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005133")]
	[Address(RVA = "0x5C5A710", Offset = "0x5C59710", VA = "0x5C5A710")]
	protected void SetRewardLabel(QuestItem item, Transform panel)
	{
		// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$SetRewardLabel): 2 lines keep C-only constructs
		byte bVar1;
		StringSetting pSVar2;
		bool bVar3;
		Transform pUVar4;
		GameObject pUVar5;
		Text pUVar6;
		String pSVar7;
		Image pUVar8;
		String item_00;
		Color UVar9;

		if (item != null) {
			bVar1 = (typeof(AchievementItem)._2).typeHierarchyDepth;
			if ((bVar1 <= (item.klass._2).typeHierarchyDepth) &&((item.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(AchievementItem))) {
				if (panel != null) {
					pUVar4 = panel.Find("Panel/RewardLabel");
					if (pUVar4 != null) {
						pUVar5 = pUVar4.gameObject;
						if (pUVar5 != null) {
							pUVar5.SetActive(false);
							pUVar4 = panel.Find("Panel/AchievementIcon");
							if (pUVar4 != null) {
								pUVar5 = pUVar4.gameObject;
								if (pUVar5 != null) {
									pUVar5.SetActive(true);
									pUVar4 = panel.Find("Panel/AchievementIcon");
									if (pUVar4 != null) {
										pUVar8 = pUVar4.GetComponent<Image>();
										pSVar7 = this.get_ThemePanel();
										bVar1 = (typeof(AchievementItem)._2).typeHierarchyDepth;
										if (((item.klass._2).typeHierarchyDepth < bVar1) ||((item.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(AchievementItem))) {
											throw new InvalidCastException();
										}
										if ((*(ulong)((sbyte)item + 0x80)) != null) {
											item_00 = String.Concat((((*(Il2CppClass*)((sbyte)item + 0x80)))._1).byval_arg.data, "Color");
											UVar9 = UIManager.GetThemeColor(pSVar7, "Trophy", item_00, "DefaultPanel");
											if (pUVar8 != null) {
												pUVar8.set_color(UVar9);
												return;
											}
										}
									}
								}
							}
						}
					}
				}
				goto label_05d5aac0;
			}
		}
		if (panel != null) {
			pUVar4 = panel.Find("Panel/RewardLabel");
			if (pUVar4 != null) {
				pUVar5 = pUVar4.gameObject;
				if (pUVar5 != null) {
					pUVar5.SetActive(true);
					pUVar4 = panel.Find("Panel/AchievementIcon");
					if (pUVar4 != null) {
						pUVar5 = pUVar4.gameObject;
						if (pUVar5 != null) {
							pUVar5.SetActive(false);
							if ((item != null) &&(pSVar2 = item.RewardType, pSVar2 != null)) {
								bVar3 = (pSVar2._value == "Exp");
								if (!bVar3) {
									return;
								}
								pUVar4 = panel.Find("Panel/RewardLabel");
								if (pUVar4 != null) {
									pUVar6 = pUVar4.GetComponent<Text>();
									pSVar2 = item.RewardValue;
									if (pSVar2 != null) {
										pSVar7 = String.Concat("+", pSVar2._value, " exp");
										if (pUVar6 != null) {
											pUVar6.set_text(pSVar7);
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
	label_05d5aac0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005134")]
	[Address(RVA = "0x5C5A0E0", Offset = "0x5C590E0", VA = "0x5C5A0E0")]
	protected void SetTitle(QuestItem item, Transform panel)
	{
		// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$SetTitle): 8 lines keep C-only constructs
		int iVar1;
		StringSetting pSVar2;
		ListSetting<StringSetting> pSVar3;
		List<object> __this_00;
		bool bVar4;
		ushort uVar5;
		uint uVar6;
		int index;
		uint uVar7;
		String[] pSVar8;
		String pSVar9;
		String str1;
		String str3;
		Transform __this_01;
		Text pUVar10;
		QuestCategoryPanel pUVar11;
		QuestCategoryPanel __this_02;
		MethodInfo method_00;
		uint index_00;
		ushort local_82;
		QuestCategoryPanel local_80;
		String local_78;
		Dictionary<string, string> local_70;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_50 = new byte[16];
		object local_40;
		Transform local_38;

		local_38 = panel;
		if (Il2CppMethodInitialized_07547f49 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07547f49 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		local_82 = 0;
		if ((item != null) &&(pSVar2 = item.Category, pSVar2 != null)) {
			pSVar9 = pSVar2._value;
			method_00 = (MethodInfo *)"";
			local_80 = (QuestCategoryPanel)UIManager.GetLocale("QuestItems", pSVar9, "", "", "");
			local_70 = new Dictionary<string, string>();
			pSVar3 = item.Conditions;
			if ((pSVar3 != null) &&(__this_00 = (List<object>)pSVar3._value, __this_00 != null)) {
				local_50.GetEnumerator(__this_00) ;
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (local_70 == null) {
					bVar4 = local_68.MoveNext();
					if (bVar4) {
						if (local_58 != null) {
							if (local_58[2].klass != null) {
								pSVar8 = local_58[2].klass.Split(0x3a, 0);
								if (pSVar8 != null) {
									iVar1 = (int)pSVar8.Length;
									if (iVar1 == 0) {
	label_05d5a58f: ;
										throw new IndexOutOfRangeException();
									}
									if (iVar1 != 1) {
										throw new NullReferenceException();
									}
	label_05d5a58a: ;
									throw new IndexOutOfRangeException();
								}
	label_05d5a579: ;
								throw new NullReferenceException();
							}
	label_05d5a561: ;
							throw new NullReferenceException();
						}
	label_05d5a553: ;
						throw new NullReferenceException();
					}
				}
				else {
					while(true) {
						bVar4 = local_68.MoveNext();
						if (!bVar4) break;
						if (local_58 == null) goto label_05d5a553;
						if (local_58[2].klass == null) goto label_05d5a561;
						pSVar8 = local_58[2].klass.Split(0x3a, 0);
						if (pSVar8 == null) goto label_05d5a579;
						iVar1 = (int)pSVar8.Length;
						if (iVar1 == 1) goto label_05d5a58a;
						if (iVar1 == 0) goto label_05d5a58f;
						local_70.Add((object)pSVar8[0], (object)pSVar8[1]) ;
					}
				}
				local_68.Dispose();
				if (local_80 == null) {
					throw new NullReferenceException();
				}
				local_78 = "";
				if (0 < (int)local_80.m_CachedPtr) {
					index_00 = 0;
					do {
						pUVar11 = local_80;
						uVar5 = local_80.get_Chars(index_00);
						if (uVar5 == 0x7b) {
							pSVar9 = pUVar11.HandleConditionVariable((String)local_80, index_00, local_70);
							local_78 = String.Concat(local_78, pSVar9);
							uVar6 = local_80.IndexOf(0x7d, index_00);
						}
						else {
							uVar5 = local_80.get_Chars(index_00);
							pUVar11 = local_80;
							if (uVar5 == 0x5b) {
								uVar6 = local_80.IndexOf(0x5d, index_00);
								index = pUVar11.IndexOf(0x7b, index_00);
								__this_02 = pUVar11;
								uVar7 = pUVar11.IndexOf(0x7d, index_00);
								pSVar9 = __this_02.HandleConditionVariable((String)pUVar11, index, local_70);
								bVar4 = (pSVar9 != (String)**(ulong*)(g_data_07556758 + 0xb8));
								pUVar11 = local_80;
								if (bVar4) {
									str1 = local_80.Substring(index_00 + 1, index + ~index_00);
									str3 = pUVar11.Substring(uVar7 + 1, uVar6 + ~uVar7);
									local_78 = String.Concat(local_78, str1, pSVar9, str3);
								}
							}
							else {
								local_82 = local_80.get_Chars(index_00);
								pSVar9 = Char.ToString(ref local_82);
								local_78 = String.Concat(local_78, pSVar9);
								uVar6 = index_00;
							}
						}
						index_00 = uVar6 + 1;
					} while ((int)index_00 < (int)local_80.m_CachedPtr);
				}
				if (local_38 != null) {
					__this_01 = local_38.Find("Panel/Title");
					if (__this_01 != null) {
						pUVar10 = __this_01.GetComponent<Text>();
						if (pUVar10 != null) {
							pUVar10.set_text(local_78);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005135")]
	[Address(RVA = "0x5C5AC70", Offset = "0x5C59C70", VA = "0x5C5AC70")]
	private string HandleConditionVariable(string locale, int index, Dictionary<string, string> conditionToValue)
	{
		// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$HandleConditionVariable): clean
		bool bVar1;
		int iVar2;
		String pSVar3;
		String pSVar4;

		if (locale != null) {
			iVar2 = locale.IndexOf(0x7d, index);
			pSVar3 = locale.Substring(index + 1, ~index + iVar2);
			if (conditionToValue != null) {
				bVar1 = conditionToValue.ContainsKey((object)pSVar3);
				if (bVar1) {
					pSVar4 = conditionToValue.get_Item((object)pSVar3);
					pSVar4 = String.Concat(pSVar3, ".", pSVar4);
					pSVar3 = conditionToValue.get_Item((object)pSVar3);
					pSVar3 = UIManager.GetLocale("QuestItems", pSVar4, "", "", pSVar3);
					return pSVar3;
				}
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005136")]
	[Address(RVA = "0x5C5AAD0", Offset = "0x5C59AD0", VA = "0x5C5AAD0")]
	protected void SetProgress(QuestItem item, Transform panel)
	{
		// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$SetProgress): clean
		IntSetting pSVar1;
		IntSetting pSVar2;
		Transform pUVar3;
		Slider pUVar4;
		Text pUVar5;
		String pSVar6;
		String str2;
		int local_1c;

		if (panel != null) {
			pUVar3 = panel.Find("Panel/ProgressBar");
			if (pUVar3 != null) {
				pUVar4 = pUVar3.GetComponent<Slider>();
				if ((((item != null) &&(pSVar1 = item.Progress, pSVar1 != null)) &&(pSVar2 = item.Amount, pSVar2 != null)) &&(pUVar4 != null)) {
					pUVar4.set_value((float)pSVar1._value / (float)pSVar2._value);
					pUVar3 = panel.Find("Panel/ProgressLabel");
					if (pUVar3 != null) {
						pUVar5 = pUVar3.GetComponent<Text>();
						pSVar1 = item.Progress;
						if (pSVar1 != null) {
							local_1c = pSVar1._value;
							pSVar6 = local_1c.ToString();
							pSVar1 = item.Amount;
							if (pSVar1 != null) {
								local_1c = pSVar1._value;
								str2 = local_1c.ToString();
								pSVar6 = String.Concat(pSVar6, " / ", str2);
								if (pUVar5 != null) {
									pUVar5.set_text(pSVar6);
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

	[Token(Token = "0x6005137")]
	[Address(RVA = "0x5C5A050", Offset = "0x5C59050", VA = "0x5C5A050")]
	public QuestCategoryPanel()
	{
		// Lifted from source/cpp/UI/QuestCategoryPanel.c (UI.QuestCategoryPanel$$.ctor): clean
		this.QuestItemWidth = 940.0;
		this.QuestItemHeight = 100.0;
		base();
		return;
	}
}
