// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterHumanPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterHumanPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterHumanPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200080F")]
internal class CharacterHumanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4002810")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected List<GameObject> _statBars;

	[Token(Token = "0x6004D0E")]
	[Address(RVA = "0x5BFE2F0", Offset = "0x5BFD2F0", VA = "0x5BFE2F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$Setup): 10 lines keep C-only constructs
		byte bVar1;
		InGameCharacterSettings __this_00;
		InGameMiscSettings pSVar3;
		InGameCharacterSettings source;
		StringSetting pSVar4;
		CharacterPopup __this_01;
		BoolSetting pSVar5;
		Transform pUVar6;
		bool bVar7;
		CharacterHumanPanel.c__DisplayClass1_0 __this_02;
		List<string> __this_03;
		String pSVar8;
		CharacterHumanPanel pUVar9;
		String[] pSVar10;
		String[] pSVar11;
		Action pSVar12;
		Func<T1, T2, TResult> __this_04;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		MethodInfo method_00;
		String[] tooltips;
		String[] labels;
		MethodInfo pMVar13;
		CharacterHumanPanel pUVar14;
		IntSetting pSVar15;

		__this_02 = new CharacterHumanPanel.c__DisplayClass1_0();
		this.Setup(parent);
		if (__this_02 != null) {
			__this_02.sub = "General";
			if ((SettingsManager.InGameCurrent != null) &&(SettingsManager.InGameSettings != null)) {
				__this_00 = SettingsManager.InGameCharacterSettings;
				if (__this_00 != null) {
					pSVar3 = SettingsManager.InGameCurrent.Misc;
					source = SettingsManager.InGameSettings.LastCharacter;
					pSVar4 = __this_00.CharacterType;
					if (pSVar4 != null) {
						pSVar4.Value = (object)PlayerCharacter.Human;
						__this_03 = HumanLoadout.GetAllowed();
						__this_01 = (CharacterPopup)this.Parent;
						if (__this_01 != null) {
							bVar1 = (typeof(CharacterPopup)._2).typeHierarchyDepth;
							if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterPopup))) {
								throw new InvalidCastException();
							}
							bVar7 = __this_01.RestoreChoices(PlayerCharacter.Human);
							if (!bVar7) {
								if ((source == null) ||(pSVar4 = source.CharacterType, pSVar4 == null)) goto label_05cfebc6;
								pSVar8 = pSVar4._value;
								bVar7 = (pSVar8 == PlayerCharacter.Human);
								if (bVar7) {
									__this_00.CopyHumanChoices(source);
								}
							}
							pSVar4 = __this_00.Loadout;
							if ((pSVar4 != null) &&(__this_03 != null)) {
								bVar7 = __this_03.Contains((object)pSVar4._value);
								if (!bVar7) {
									pSVar4 = __this_00.Loadout;
									pSVar8 = __this_03.get_Item(0);
									if (pSVar4 == null) goto label_05cfebc6;
									pSVar4.Value = (object)pSVar8;
								}
								pSVar4 = __this_00.Loadout;
								if ((pSVar4 != null) &&(pSVar3 != null)) {
									pSVar5 = pSVar3.AllowShifterSpecials;
									if (pSVar5 != null) {
										pSVar8 = pSVar4._value;
										bVar7 = pSVar5._value;
										pUVar9 = (CharacterHumanPanel)HumanSpecials.GetSpecialNames(pSVar8, bVar7);
										pSVar4 = __this_00.Special;
										if ((pSVar4 != null) &&(pUVar9 != null)) {
											pMVar13 = (MethodInfo)pSVar4._value;
											pUVar14 = pUVar9;
											bVar7 = pUVar9.Contains((object)pMVar13);
											if (!bVar7) {
												pUVar14 = (CharacterHumanPanel)__this_00.Special;
												if (pUVar14 == null) goto label_05cfebc6;
												pMVar13 = (MethodInfo)HumanSpecials.DefaultSpecial ;
												pUVar14.Value = (object)pMVar13;
											}
											pSVar10 = pUVar14.GetCharOptions();
											pSVar15 = __this_00.CustomSet;
											if ((pSVar15 != null) && (pSVar10 != null)) {
												if ((int)pSVar10.Length <= pSVar15._value) {
													pSVar15.Value = 0;
													pSVar15 = __this_00.CustomSet;
												}
												pUVar6 = this.DoublePanelLeft;
												pSVar8 = __this_02.sub;
												pUVar14 = (UI_CharacterHumanPanel_o *)"CharacterPopup";
												pSVar8 = UIManager.GetLocale("CharacterPopup", pSVar8, "Character", "", "");
												pSVar11 = pUVar14.GetCharIcons(pSVar10);
												pSVar12 = new Action((object)this, (intptr_t)MethodInfo_UI_CharacterHumanPanel_SyncStatBars);
												pMVar13 = null;
												this.IconPicker(pUVar6, (BaseSetting)pSVar15, pSVar8, pSVar10, pSVar11, pSVar12, null, 144.0, null);
												pSVar10 = (String[])new string[3];
												if (pSVar10 != null) {
													if ((int)pSVar10.Length != 0) {
														pSVar10[0] = "Costume1";
														if ((pSVar10.Length & 0xfffffffe) != 0) {
															pSVar10[1] = "Costume2";
															if (2 < (uint)pSVar10.Length) {
																pSVar10[2] = "Costume3";
																pUVar6 = this.DoublePanelLeft;
																pSVar15 = __this_00.Costume;
																pSVar8 = UIManager.GetLocale("CharacterPopup", __this_02.sub, "Costume", "", "");
																pSVar12 = new Action((object)this, (intptr_t)MethodInfo_UI_CharacterHumanPanel_SyncStatBars);
																__this_04 = new Func<string, int, string>((object)__this_02, (intptr_t) MethodInfo_UI_CharacterHumanPanel_c__DisplayClass1_0_Setup_b__0);
																source_00 = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar10, (System_Func_TSource__int__TResult__o)__this_04);
																pSVar11 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
																this.Choice(pUVar6, (BaseSetting)pSVar15, pSVar8, pSVar10, pSVar12, pSVar11);
																pUVar6 = this.DoublePanelLeft;
																pSVar4 = __this_00.Loadout;
																pSVar8 = UIManager.GetLocale("CharacterPopup", __this_02.sub, "Loadout", "", "");
																pSVar10 = (String[])__this_03.ToArray();
																pSVar12 = new Action((object)this, (intptr_t)MethodInfo_UI_CharacterHumanPanel_OnLoadoutClick);
																pSVar11 = CharacterCategoryPanel.Labels("Loadout", (IEnumerable<string>)__this_03);
																this.Choice(pUVar6, (BaseSetting)pSVar4, pSVar8, pSVar10, pSVar12, pSVar11);
																pSVar10 = (String[])pUVar9.ToArray();
																pMVar13 = (MethodInfo)this.DoublePanelLeft;
																pSVar4 = __this_00.Special;
																pUVar9 = (UI_CharacterHumanPanel_o *)"CharacterPopup";
																method_00 = (MethodInfo)UIManager.GetLocale("CharacterPopup", __this_02.sub, "Special", "", "");
																pSVar11 = pUVar9.GetSpecialIcons(pSVar10);
																tooltips = pUVar9.GetSpecialTooltips(pSVar10);
																labels = CharacterCategoryPanel.Labels("Special", (IEnumerable<string>)pSVar10);
																this.IconPicker((Transform)pMVar13, (BaseSetting)pSVar4, (String)method_00, pSVar10, pSVar11, null, tooltips, 96.0, labels);
																pSVar15 = pSVar3.PVP;
																if (pSVar15 != null) {
																	if (pSVar15._value == 2) {
																		pMVar13 = (MethodInfo)this.DoublePanelRight;
																		this.TeamChoice((Transform)pMVar13, (BaseSetting)__this_00.Team);
																	}
																	this.SyncStatBars();
																	return;
																}
																goto label_05cfebc6;
															}
														}
													}
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
	label_05cfebc6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D0F")]
	[Address(RVA = "0x5BFFDB0", Offset = "0x5BFEDB0", VA = "0x5BFFDB0")]
	protected void OnLoadoutClick()
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$OnLoadoutClick): clean
		BasePanel __this_00;

		__this_00 = this.Parent;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RebuildCategoryPanel();
		return;
	}

	[Token(Token = "0x6004D10")]
	[Address(RVA = "0x5BFF840", Offset = "0x5BFE840", VA = "0x5BFF840")]
	protected void SyncStatBars()
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$SyncStatBars): 9 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int index;
		int iVar3;
		List<GameObject> pSVar4;
		HumanCustomSettings pSVar5;
		InGameCharacterSettings pSVar6;
		IntSetting pSVar7;
		IntSetting pSVar8;
		ListSetting<T> pSVar9;
		String subCategory;
		Object obj;
		bool bVar10;
		int iVar11;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar12;
		BaseSetting pSVar13;
		HumanStats pCVar14;
		String pSVar15;
		String pSVar16;
		MethodInfo pMVar17;
		byte[] local_68 = new byte[8];
		Object local_58;
		byte[] local_48 = new byte[16];
		Object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar4 = this._statBars;
		if (pSVar4 == null) goto label_05cffd3b;
		local_48.GetEnumerator((List<object>)pSVar4);
		local_58 = local_38;
		local_68 = (byte[])local_48._0_8_;
		local_48._0_8_ = null;
		local_48._8_8_ = local_68;
		while(true) {
			bVar10 = local_68.MoveNext();
			obj = local_58;
			if (!bVar10) break;
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			local_58.SetActive(false);
			Object.Destroy(obj);
		}
		local_68.Dispose();
		pSVar4 = this._statBars;
		if (pSVar4 == null) goto label_05cffd3b;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		iVar11 = pSVar4._size;
		pSVar4._size = 0;
		if (0 < iVar11) {
			Array.Clear((Array)pSVar4._items, 0, iVar11);
		}
		pSVar5 = SettingsManager.HumanCustomSettings;
		if (((((pSVar5 == null) ||(pSVar6 = SettingsManager.InGameCharacterSettings, pSVar6 == null)) ||(pSVar7 = pSVar6.CustomSet, pSVar7 == null)) ||((pSVar8 = pSVar6.Costume, pSVar8 == null ||(pSVar12 = pSVar5.Costume1Sets, pSVar12 == null)))) ||(pSVar9 = pSVar12.Sets, pSVar9 == null)) goto label_05cffd3b;
		pSVar12 = pSVar5.CustomSets;
		index = pSVar7._value;
		iVar3 = pSVar8._value;
		iVar11 = pSVar9.GetCount();
		if (index < iVar11) {
			if (iVar3 == 2) {
				pSVar5 = SettingsManager.HumanCustomSettings;
				if (pSVar5 == null) goto label_05cffd3b;
				pSVar12 = pSVar5.Costume3Sets;
			}
			else if (iVar3 == 1) {
				pSVar5 = SettingsManager.HumanCustomSettings;
				if (pSVar5 == null) goto label_05cffd3b;
				pSVar12 = pSVar5.Costume2Sets;
			}
			else {
				pSVar5 = SettingsManager.HumanCustomSettings;
				if (pSVar5 == null) goto label_05cffd3b;
				pSVar12 = pSVar5.Costume1Sets;
			}
			if ((pSVar12 == null) ||(pSVar9 = pSVar12.Sets, pSVar9 == null)) goto label_05cffd3b;
			pSVar13 = pSVar9.GetItemAt(index);
			if (pSVar13 == null) goto label_05cffbd6;
	label_05cffb38: ;
			bVar2 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
			if (((pSVar13.klass._2).typeHierarchyDepth < bVar2) ||((pSVar13.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(HumanCustomSet))) {
				throw new InvalidCastException();
			}
		}
		else {
			if ((pSVar12 == null) ||(pSVar9 = pSVar12.Sets, pSVar9 == null)) goto label_05cffd3b;
			pSVar13 = pSVar9.GetItemAt(index - iVar11);
			if (pSVar13 != null) goto label_05cffb38;
	label_05cffbd6: ;
			pSVar13 = null;
		}
		pCVar14 = new HumanStats(null);
		if ((pSVar13 != null) && (pSVar13[0xb].klass != null)) {
			pSVar16 = ((pSVar13[0xb].klass)._1).byval_arg.data;
			pCVar14 = HumanStats.Deserialize(pCVar14, pSVar16);
			subCategory = "Stats";
			pSVar16 = "CharacterEditor";
			pMVar17 = (MethodInfo *)"";
			pSVar15 = UIManager.GetLocale(pSVar16, subCategory, "Acceleration", "", "");
			if (pCVar14 != null) {
				this.CreateStatBar(pSVar15, pCVar14.Acceleration);
				pMVar17 = (MethodInfo *)"";
				pSVar15 = UIManager.GetLocale(pSVar16, subCategory, "Speed", "", "");
				this.CreateStatBar(pSVar15, pCVar14.Speed);
				pMVar17 = (MethodInfo *)"";
				pSVar15 = UIManager.GetLocale(pSVar16, subCategory, "Gas", "", "");
				this.CreateStatBar(pSVar15, pCVar14.Gas);
				pMVar17 = (MethodInfo *)"";
				pSVar16 = UIManager.GetLocale(pSVar16, subCategory, "Ammunition", "", "");
				this.CreateStatBar(pSVar16, pCVar14.Ammunition);
				return;
			}
		}
	label_05cffd3b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D11")]
	[Address(RVA = "0x5BFFDD0", Offset = "0x5BFEDD0", VA = "0x5BFFDD0")]
	protected void CreateStatBar(string title, int value)
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$CreateStatBar): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		AottgInGameView pGVar3;
		List<GameObject> __this_00;
		GameObject[] pUVar4;
		int iVar6;
		Transform pUVar7;
		Transform parent;
		String text;
		RectTransform fill;
		GameObject item;
		int local_3c;
		Nullable<float> local_38;

		local_3c = value;
		pUVar7 = this.DoublePanelRight;
		pGVar3 = this.View;
		local_38.hasValue = false;
		local_38._1_3_ = 0;
		local_38.value = 0.0;
		local_38 = new Nullable<float>(4.0);
		if (pGVar3 != null) {
			pUVar7 = pGVar3.Panel(pUVar7, "clear", 440.0, 48.0, false, (Nullable<float>)local_38);
			pGVar3 = this.View;
			if (pGVar3 != null) {
				parent = pGVar3.Panel(pUVar7, "clear", 440.0, 30.0, true, (Nullable<float>)0x0);
				pGVar3 = this.View;
				if (pGVar3 != null) {
					pGVar3.Text(parent, title, 370.0, 30.0, "inGameInfo");
					pGVar3 = this.View;
					text = local_3c.ToString();
					if (pGVar3 != null) {
						pGVar3.Text(parent, text, 70.0, 30.0, "inGameText");
						pGVar3 = this.View;
						if (pGVar3 != null) {
							fill = pGVar3.ProgressBar(pUVar7, 440.0, 10.0);
							iVar6 = local_3c;
							AottgInGameView.SetProgress(fill, ((float)iVar6 + -50.0) / 50.0);
							if (pUVar7 != null) {
								__this_00 = this._statBars;
								item = pUVar7.gameObject;
								if (__this_00 != null) {
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pUVar4 = __this_00._items;
									if (pUVar4 != null) {
										uVar2 = __this_00._size;
										if (uVar2 < (uint)pUVar4.Length) {
											__this_00._size = uVar2 + 1;
											pUVar4[(int)uVar2] = item;
										}
										else {
											__this_00.AddWithResize((object)item);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D12")]
	[Address(RVA = "0x5BFEBF0", Offset = "0x5BFDBF0", VA = "0x5BFEBF0")]
	protected string[] GetCharOptions()
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$GetCharOptions): 1 lines keep C-only constructs
		HumanCustomSettings pSVar1;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar2;
		String[] pSVar3;
		List<string> __this_00;

		pSVar1 = SettingsManager.HumanCustomSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.Costume1Sets, pSVar2 != null )) {
			pSVar3 = pSVar2.GetSetNames();
			__this_00 = new List<string>((IEnumerable<T>)pSVar3);
			pSVar1 = SettingsManager.HumanCustomSettings;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.CustomSets, pSVar2 != null )) {
				pSVar3 = pSVar2.GetSetNames();
				if (__this_00 != null) {
					__this_00.AddRange((IEnumerable<T>)pSVar3);
					pSVar3 = (String[])__this_00.ToArray();
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D13")]
	[Address(RVA = "0x5BFED20", Offset = "0x5BFDD20", VA = "0x5BFED20")]
	protected string[] GetCharIcons(string[] options)
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$GetCharIcons): 19 lines keep C-only constructs
		String* ppSVar1;
		int piVar2;
		byte bVar3;
		uint uVar4;
		HumanCustomSettings pSVar5;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar6;
		ListSetting<T> obj;
		Il2CppClass pIVar7;
		String path1;
		object pIVar9;
		bool bVar10;
		List<string> __this_00;
		String[] pSVar11;
		List<string> __this_01;
		List<object> pSVar13;
		ulong uVar14;
		String key;
		Texture2D x;
		String pSVar15;
		int iVar16;
		MethodInfo pMVar17;
		ulong uVar19;
		byte[] local_70 = new byte[16];
		object local_60;
		byte[] local_58 = new byte[8];
		object local_48;
		List<object> local_38;

		local_58 = (byte[])0x0;
		local_48 = null;
		__this_00 = new List<string>();
		pSVar5 = SettingsManager.HumanCustomSettings;
		if ((pSVar5 != null) &&(pSVar6 = pSVar5.Costume1Sets, pSVar6 != null )) {
			pSVar11 = pSVar6.GetSetNames();
			__this_01 = new List<string>((IEnumerable<T>)pSVar11);
			pSVar5 = SettingsManager.HumanCustomSettings;
			if ((pSVar5 != null) &&((pSVar6 = pSVar5.CustomSets, pSVar6 != null &&(obj = pSVar6.Sets, obj != null)))) {
				pIVar7 = (Il2CppClass)obj.klass;
				uVar14 = (ulong)(pIVar7._2).interface_offsets_count;
				pSVar13 = (List<object>)obj.GetItems();
				if (options != null) {
					iVar16 = (int)options.Length;
					if (__this_01 == null) {
						if (0 < iVar16) goto label_05cff495;
					}
					else {
						local_38 = pSVar13;
						if (0 < iVar16) {
							uVar14 = options.Length & 0xffffffff;
							uVar19 = 0;
							do {
								if (uVar14 <= uVar19) {
									throw new IndexOutOfRangeException();
								}
								pSVar15 = options[uVar19];
								bVar10 = __this_01.Contains((object)pSVar15);
								if (bVar10) {
									key = String.Concat(ResourcePaths.Characters, "/Human/Previews/Preset", pSVar15);
									if (__this_00 == null) goto label_05cff495;
	label_05cff395: ;
									pMVar17 = MethodInfo_System_Collections_Generic_List_string_Add;
									piVar2 = &__this_00._version;
									*piVar2 = *piVar2 + 1;
									pSVar11 = __this_00._items;
									if (pSVar11 == null) goto label_05cff495;
									uVar4 = __this_00._size;
									if ((uint)pSVar11.Length <= uVar4) {
										pMVar17 = pMVar17.klass.rgctx_data[0xe].method;
										goto label_05cff015;
									}
									__this_00._size = uVar4 + 1;
									ppSVar1 = pSVar11.m_Items + (long)(int)uVar4 + -4;
									pSVar11[(int)uVar4] = key;
	label_05cff3d8: ;
								}
								else {
									if (local_38 == null) goto label_05cff495;
									local_70.GetEnumerator(local_38);
									local_48 = local_60;
									local_58 = (byte[])local_70._0_8_;
									local_70._0_8_ = null;
									local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
									do {
										bVar10 = local_58.MoveNext();
										pIVar9 = local_48;
										if (!bVar10) {
											local_58.Dispose();
											goto label_05cff352;
										}
										if (local_48 == null) {
											throw new NullReferenceException();
										}
										bVar3 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
										if (((local_48.klass._2).typeHierarchyDepth < bVar3) ||((local_48.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(HumanCustomSet))) {
											throw new InvalidCastException();
										}
										if (local_48[3].klass == null) {
											throw new NullReferenceException();
										}
										bVar10 = (((local_48[3].klass)._1).byval_arg.data == pSVar15);
									} while (!bVar10);
									if (pIVar9[4].klass == null) {
										throw new NullReferenceException();
									}
									pSVar15 = ((pIVar9[4].klass)._1).byval_arg.data;
									local_58.Dispose();
									if (pSVar15 == null) {
	label_05cff352: ;
										key = String.Concat(ResourcePaths.Characters, "/Human/Previews/PresetNone");
										if (__this_00 != null) goto label_05cff395;
										goto label_05cff495;
									}
									key = String.Concat("CharacterPreview_Human_", pSVar15);
									x = ResourceManager.GetExternalTexture(key);
									bVar10 = ((Object)x == null);
									if (bVar10) {
										path1 = FolderPaths.CharacterPreviews;
										pSVar15 = String.Concat("Preset", pSVar15, ".png");
										pSVar15 = Path.Combine(path1, "Human", pSVar15);
										x = ResourceManager.LoadExternalTexture(pSVar15, key, true);
									}
									bVar10 = ((Object)x != null);
									pMVar17 = MethodInfo_System_Collections_Generic_List_string_Add;
									if (!bVar10) goto label_05cff352;
									if (__this_00 == null) goto label_05cff495;
									piVar2 = &__this_00._version;
									*piVar2 = *piVar2 + 1;
									pSVar11 = __this_00._items;
									if (pSVar11 == null) goto label_05cff495;
									uVar4 = __this_00._size;
									if (uVar4 < (uint)pSVar11.Length) {
										__this_00._size = uVar4 + 1;
										ppSVar1 = pSVar11.m_Items + (long)(int)uVar4 + -4;
										pSVar11[(int)uVar4] = key;
										goto label_05cff3d8;
									}
									pMVar17 = pMVar17.klass.rgctx_data[0xe].method;
	label_05cff015: ;
									__this_00.AddWithResize((object)key);
								}
								uVar19 = uVar19 + 1;
								uVar4 = (uint)options.Length;
								uVar14 = (ulong)uVar4;
							} while ((long)uVar19 < (long)(int)uVar4);
						}
					}
					if (__this_00 != null) {
						pSVar11 = (String[])__this_00.ToArray();
						return pSVar11;
					}
				}
			}
		}
	label_05cff495: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D14")]
	[Address(RVA = "0x5BFF4C0", Offset = "0x5BFE4C0", VA = "0x5BFF4C0")]
	protected string[] GetSpecialIcons(string[] options)
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$GetSpecialIcons): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar3;
		int iVar5;
		List<string> __this_00;
		ulong uVar6;
		String pSVar7;
		String[] pSVar8;
		ulong uVar9;

		__this_00 = new List<string>();
		if (options != null) {
			iVar5 = (int)options.Length;
			if (__this_00 != null) {
				if (0 < iVar5) {
					uVar6 = options.Length & 0xffffffff;
					uVar9 = 0;
					do {
						if (uVar6 <= uVar9) {
							throw new IndexOutOfRangeException();
						}
						pSVar7 = options[uVar9];
						pSVar3 = ResourcePaths.UI;
						pSVar7 = HumanSpecials.GetSpecialIcon(pSVar7);
						pSVar7 = String.Concat(pSVar3, "/Icons/Specials/", pSVar7);
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar8 = __this_00._items;
						if (pSVar8 == null) goto label_05cff6fa;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar8.Length) {
							__this_00._size = uVar2 + 1;
							pSVar8[(int)uVar2] = pSVar7;
						}
						else {
							__this_00.AddWithResize((object)pSVar7);
						}
						uVar9 = uVar9 + 1;
						uVar2 = (uint)options.Length;
						uVar6 = (ulong)uVar2;
					} while ((long)uVar9 < (long)(int)uVar2);
				}
				pSVar8 = (String[])__this_00.ToArray();
				return pSVar8;
			}
			if (0 < iVar5) {
				pSVar7 = options[0];
				pSVar3 = ResourcePaths.UI;
				pSVar7 = HumanSpecials.GetSpecialIcon(pSVar7);
				String.Concat(pSVar3, "/Icons/Specials/", pSVar7);
			}
		}
	label_05cff6fa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D15")]
	[Address(RVA = "0x5BFF700", Offset = "0x5BFE700", VA = "0x5BFF700")]
	protected string[] GetSpecialTooltips(string[] options)
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$GetSpecialTooltips): 5 lines keep C-only constructs
		uint uVar1;
		object @object;
		UI_CharacterHumanPanel___c_StaticFields pUVar2;
		Func<string, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		String[] pSVar3;

		if (Il2CppMethodInitialized_07547cfd == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterHumanPanel_c_GetSpecialTooltips_b__8_0) ;
			Il2CppMethodInitialized_07547cfd = true;
			uVar1 = (typeof(CharacterHumanPanel.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CharacterHumanPanel.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pUVar2 = typeof(CharacterHumanPanel.c).static_fields;
			__this_00 = pUVar2.__9__8_0;
		}
		else {
			pUVar2 = (typeof(CharacterHumanPanel.c)).static_fields;
			__this_00 = pUVar2.__9__8_0;
		}
		if (__this_00 == null) {
			if (((typeof(CharacterHumanPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(CharacterHumanPanel.c).static_fields;
			}
			@object = (object)pUVar2.__9;
			__this_00 = new Func<string, string>(@object, (intptr_t)MethodInfo_UI_CharacterHumanPanel_c_GetSpecialTooltips_b__8_0);
			pUVar2 = typeof(CharacterHumanPanel.c).static_fields;
			pUVar2.__9__8_0 = __this_00;
		}
		source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)options, (System_Func_TSource__TResult__o)__this_00);
		pSVar3 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar3;
	}

	[Token(Token = "0x6004D16")]
	[Address(RVA = "0x5C00050", Offset = "0x5BFF050", VA = "0x5C00050")]
	public CharacterHumanPanel()
	{
		// Lifted from source/cpp/UI/CharacterHumanPanel.c (UI.CharacterHumanPanel$$.ctor): clean
		MethodInfo method_00;

		method_00 = new List<GameObject>();
		this._statBars = (List<GameObject>)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterHumanPanel.c.

	// UI.CharacterHumanPanel.<>c__DisplayClass1_0$$.ctor: clean
	private void c__DisplayClass1_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterHumanPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CharacterHumanPanel.c();
		CharacterHumanPanel.c.__9 = (CharacterHumanPanel.c)__this;
		return;
	}

	// UI.CharacterHumanPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.CharacterHumanPanel.<>c$$<GetSpecialTooltips>b__8_0: clean
	private String c__GetSpecialTooltips_b__8_0(String option)
	{
		String pSVar1;

		pSVar1 = UIManager.GetLocale("CharacterPopup", "SpecialTooltip", option, "", "");
		return pSVar1;
	}

	// UI.CharacterHumanPanel.<>c__DisplayClass1_0$$<Setup>b__0: 1 lines keep C-only constructs
	private String c__DisplayClass1_0__Setup_b__0(String costume, int index)
	{
		Object[] args;
		object pIVar1;
		object pIVar2;
		String pSVar3;
		int iStack_1c;

		pSVar3 = this.sub;
		args = (Object[])new object[1];
		iStack_1c = index + 1;
		pIVar1 = (object)iStack_1c;
		if (args == null) {
			throw new NullReferenceException();
		}
		if (pIVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((args.obj).klass)._1).element_class);
			if (pIVar2 == null) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
		}
		if ((int)args.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		args[0] = pIVar1;
		pSVar3 = UIManager.GetLocaleFormatted("CharacterPopup", pSVar3, "CostumeOption", args);
		return pSVar3;
	}
}
