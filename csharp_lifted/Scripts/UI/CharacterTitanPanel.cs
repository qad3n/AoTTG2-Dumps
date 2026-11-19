// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterTitanPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterTitanPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterTitanPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000818")]
internal class CharacterTitanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4002846")]
	private const string RandomOption = "Random";

	[Token(Token = "0x6004D60")]
	[Address(RVA = "0x5C075F0", Offset = "0x5C065F0", VA = "0x5C075F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterTitanPanel.c (UI.CharacterTitanPanel$$Setup): 22 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		InGameCharacterSettings pSVar4;
		InGameMiscSettings pSVar5;
		InGameCharacterSettings pSVar6;
		StringSetting pSVar7;
		IntSetting __this_00;
		StringSetting __this_01;
		Transform pUVar8;
		bool bVar9;
		CharacterTitanPanel.c__DisplayClass1_0 __this_02;
		CharacterTitanPanel __this_03;
		CharacterPopup __this_04;
		MethodInfo pMVar10;
		String[] pSVar11;
		String pSVar12;
		String[] pSVar13;
		Func<string, string> __this_05;
		System_Collections_Generic_IEnumerable_TResult__o source;
		String[] labels;
		CharacterTitanPanel pUVar14;
		IntSetting pSVar15;

		__this_02 = new CharacterTitanPanel.c__DisplayClass1_0();
		this.Setup(parent);
		if (__this_02 != null) {
			__this_02.sub = "General";
			if (((SettingsManager.InGameCurrent != null) &&(SettingsManager.InGameSettings != null)) &&(pSVar4 = SettingsManager.InGameCharacterSettings, pSVar4 != null)) {
				pSVar5 = SettingsManager.InGameCurrent.Misc;
				pSVar6 = SettingsManager.InGameSettings.LastCharacter;
				pSVar7 = pSVar4.CharacterType;
				if (pSVar7 != null) {
					pSVar7.Value = (object)PlayerCharacter.Titan;
					__this_03 = new List<string>();
					pSVar12 = "Small";
					pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
					if (__this_03 != null) {
						piVar1 = (int)((long)&__this_03.m_CancellationTokenSource + 4);
						*piVar1 = *piVar1 + 1;
						pSVar11 = (String[])__this_03.m_CachedPtr;
						if (pSVar11 != null) {
							uVar2 = *(uint)&__this_03.m_CancellationTokenSource;
							if (uVar2 < (uint)pSVar11.Length) {
								*(uint)&__this_03.m_CancellationTokenSource = uVar2 + 1;
								pSVar11[(int)uVar2] = pSVar12;
							}
							else {
								__this_03.AddWithResize((object)pSVar12);
							}
							pSVar12 = "Medium";
							pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
							piVar1 = (int)((long)&__this_03.m_CancellationTokenSource + 4);
							*piVar1 = *piVar1 + 1;
							pSVar11 = (String[])__this_03.m_CachedPtr;
							if (pSVar11 != null) {
								uVar2 = *(uint)&__this_03.m_CancellationTokenSource;
								if (uVar2 < (uint)pSVar11.Length) {
									*(uint)&__this_03.m_CancellationTokenSource = uVar2 + 1;
									pSVar11[(int)uVar2] = pSVar12;
								}
								else {
									__this_03.AddWithResize((object)pSVar12);
								}
								pSVar12 = "Large";
								pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
								piVar1 = (int)((long)&__this_03.m_CancellationTokenSource + 4);
								*piVar1 = *piVar1 + 1;
								pSVar11 = (String[])__this_03.m_CachedPtr;
								if (pSVar11 != null) {
									uVar2 = *(uint)&__this_03.m_CancellationTokenSource;
									if (uVar2 < (uint)pSVar11.Length) {
										*(uint)&__this_03.m_CancellationTokenSource = uVar2 + 1;
										pSVar11[(int)uVar2] = pSVar12;
									}
									else {
										__this_03.AddWithResize((object)pSVar12);
									}
									__this_04 = this.Popup;
									if (__this_04 != null) {
										bVar9 = __this_04.RestoreChoices(PlayerCharacter.Titan);
										if (!bVar9) {
											if ((pSVar6 == null) ||(pSVar7 = pSVar6.CharacterType, pSVar7 == null)) goto label_05d07ccd;
											pSVar12 = pSVar7._value;
											bVar9 = (pSVar12 == PlayerCharacter.Titan);
											if (bVar9) {
												pSVar15 = pSVar6.CustomSet;
												if (pSVar15 == null) goto label_05d07ccd;
												__this_00 = pSVar4.CustomSet;
												if (__this_00 == null) goto label_05d07ccd;
												__this_00.Value = pSVar15._value;
												pSVar7 = pSVar6.Loadout;
												if ((pSVar7 == null) ||(__this_01 = pSVar4.Loadout, __this_01 == null)) goto label_05d07ccd;
												__this_01.Value = (object)pSVar7._value;
											}
										}
										pSVar7 = pSVar4.Loadout;
										if (pSVar7 != null) {
											pMVar10 = (MethodInfo)pSVar7._value;
											pUVar14 = __this_03;
											bVar9 = __this_03.Contains((object)pMVar10);
											if (!bVar9) {
												pUVar14 = (CharacterTitanPanel)pSVar4.Loadout;
												pMVar10 = (MethodInfo)__this_03.get_Item(*(int)&__this_03.m_CancellationTokenSource + -1);
												if (pUVar14 == null) goto label_05d07ccd;
												pUVar14.Value = (object)pMVar10;
											}
											pSVar11 = pUVar14.GetCharOptions();
											pSVar15 = pSVar4.CustomSet;
											if ((pSVar15 != null) && (pSVar11 != null)) {
												if ((int)pSVar11.Length <= pSVar15._value) {
													pSVar15.Value = 0;
													pSVar15 = pSVar4.CustomSet;
												}
												pUVar8 = this.DoublePanelLeft;
												pSVar12 = __this_02.sub;
												pUVar14 = (UI_CharacterTitanPanel_o *)"CharacterPopup";
												pSVar12 = UIManager.GetLocale("CharacterPopup", pSVar12, "Character", "", "");
												pSVar13 = pUVar14.GetCharIcons(pSVar11);
												__this_05 = il2cpp_codegen_object_new(typeof(Func<string, string>)) ;
												__this_05 = new Func<object, object>((object)__this_02, (intptr_t)MethodInfo_UI_CharacterTitanPanel_c__DisplayClass1_0_Setup_b__0);
												source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar11, (System_Func_TSource__TResult__o)__this_05);
												labels = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
												this.IconPicker(pUVar8, (BaseSetting)pSVar15, pSVar12, pSVar11, pSVar13, null, null, 144.0, labels);
												pUVar8 = this.DoublePanelLeft;
												pSVar7 = pSVar4.Loadout;
												pSVar12 = UIManager.GetLocale("CharacterPopup", __this_02.sub, "Size", "", "");
												pSVar11 = (String[])__this_03.ToArray();
												pSVar13 = CharacterCategoryPanel.Labels("Size", (IEnumerable<string>)__this_03);
												this.Choice(pUVar8, (BaseSetting)pSVar7, pSVar12, pSVar11, null, pSVar13);
												if ((pSVar5 != null) &&(pSVar15 = pSVar5.PVP, pSVar15 != null)) {
													if (pSVar15._value == 2) {
														this.TeamChoice(this.DoublePanelRight, (BaseSetting)pSVar4.Team);
														return;
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
	label_05d07ccd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D61")]
	[Address(RVA = "0x5C07CF0", Offset = "0x5C06CF0", VA = "0x5C07CF0")]
	protected string[] GetCharOptions()
	{
		// Lifted from source/cpp/UI/CharacterTitanPanel.c (UI.CharacterTitanPanel$$GetCharOptions): 1 lines keep C-only constructs
		TitanCustomSettings pSVar1;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_00;
		String[] pSVar2;
		List<string> __this_01;

		pSVar1 = SettingsManager.TitanCustomSettings;
		if ((pSVar1 != null) &&(__this_00 = pSVar1.TitanCustomSets, __this_00 != null)) {
			pSVar2 = __this_00.GetSetNames();
			__this_01 = new List<string>((IEnumerable<T>)pSVar2);
			if (__this_01 != null) {
				__this_01.Insert(0, (Il2CppObject *)"Random");
				pSVar2 = (String[])__this_01.ToArray();
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D62")]
	[Address(RVA = "0x5C07E00", Offset = "0x5C06E00", VA = "0x5C07E00")]
	protected string[] GetCharIcons(string[] options)
	{
		// Lifted from source/cpp/UI/CharacterTitanPanel.c (UI.CharacterTitanPanel$$GetCharIcons): 21 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		TitanCustomSettings pSVar4;
		Settings_SetSettingsContainer_TitanCustomSet__o pSVar5;
		ListSetting<T> obj;
		Il2CppClass pIVar6;
		object pIVar8;
		bool bVar9;
		List<string> __this_00;
		ulong uVar11;
		String* ppSVar12;
		Texture2D x;
		String path3;
		String pSVar13;
		String pSVar14;
		String[] pSVar15;
		MethodInfo pMVar16;
		ulong uVar18;
		byte[] local_78 = new byte[8];
		object local_68;
		byte[] local_58 = new byte[16];
		object local_48;
		String local_40;
		List<object> local_38;

		local_78 = (byte[])0x0;
		local_68 = null;
		__this_00 = new List<string>();
		pSVar4 = SettingsManager.TitanCustomSettings;
		if (((pSVar4 != null) &&(pSVar5 = pSVar4.TitanCustomSets, pSVar5 != null)) &&(obj = pSVar5.Sets, obj != null)) {
			pIVar6 = (Il2CppClass)obj.klass;
			uVar11 = (ulong)(pIVar6._2).interface_offsets_count;
			local_38 = (List<object>)obj.GetItems();
			if (options != null) {
				if (0 < (int)options.Length) {
					uVar11 = options.Length & 0xffffffff;
					uVar18 = 0;
					do {
						if (uVar11 <= uVar18) {
							throw new IndexOutOfRangeException();
						}
						pSVar14 = options[uVar18];
						bVar9 = (pSVar14 == "Random");
						if (bVar9) {
							pSVar14 = ResourcePaths.UI;
							ppSVar12 = &"/Icons/Navigation/TooltipIcon";
	label_05d083e2: ;
							pSVar14 = String.Concat(pSVar14, *ppSVar12);
							pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (__this_00 == null) goto label_05d0851a;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar15 = __this_00._items;
							if (pSVar15 == null) goto label_05d0851a;
							uVar3 = __this_00._size;
							if ((uint)pSVar15.Length <= uVar3) {
								pMVar16 = pMVar16.klass.rgctx_data[0xe].method;
								goto label_05d08085;
							}
							__this_00._size = uVar3 + 1;
							ppSVar12 = pSVar15.m_Items + (long)(int)uVar3 + -4;
							pSVar15[(int)uVar3] = pSVar14;
	label_05d08438: ;
						}
						else {
							if (local_38 == null) goto label_05d0851a;
							local_58.GetEnumerator(local_38);
							local_68 = local_48;
							local_78 = (byte[])local_58._0_8_;
							local_58._0_8_ = null;
							local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
							do {
								bVar9 = local_78.MoveNext();
								pIVar8 = local_68;
								if (!bVar9) {
									local_78.Dispose();
									goto label_05d083b5;
								}
								if (local_68 == null) {
									throw new NullReferenceException();
								}
								bVar2 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
								if (((local_68.klass._2).typeHierarchyDepth < bVar2) ||((local_68.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(TitanCustomSet))) {
									throw new InvalidCastException();
								}
								if (local_68[3].klass == null) {
									throw new NullReferenceException();
								}
								bVar9 = (((local_68[3].klass)._1).byval_arg.data == pSVar14);
							} while (!bVar9);
							if (pIVar8[4].klass == null) {
								throw new NullReferenceException();
							}
							pSVar14 = ((pIVar8[4].klass)._1).byval_arg.data;
							local_78.Dispose();
							if (pSVar14 == null) {
	label_05d083b5: ;
	label_05d083d0: ;
								pSVar14 = ResourcePaths.Characters;
								ppSVar12 = &"/Human/Previews/PresetNone";
								goto label_05d083e2;
							}
							local_40 = pSVar14;
							pSVar14 = String.Concat("CharacterPreview_Titans_", pSVar14);
							x = ResourceManager.GetExternalTexture(pSVar14);
							bVar9 = ((Object)x == null);
							if (bVar9) {
								pSVar13 = FolderPaths.CharacterPreviews;
								path3 = String.Concat("Preset", local_40, ".png");
								pSVar13 = Path.Combine(pSVar13, "Titans", path3) ;
								if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(ResourceManager)) ;
								}
								x = ResourceManager.LoadExternalTexture(pSVar13, pSVar14, true);
							}
							bVar9 = ((Object)x != null);
							pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (!bVar9) {
								goto label_05d083d0;
							}
							if (__this_00 == null) goto label_05d0851a;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar15 = __this_00._items;
							if (pSVar15 == null) goto label_05d0851a;
							uVar3 = __this_00._size;
							if (uVar3 < (uint)pSVar15.Length) {
								__this_00._size = uVar3 + 1;
								ppSVar12 = pSVar15.m_Items + (long)(int)uVar3 + -4;
								pSVar15[(int)uVar3] = pSVar14;
								goto label_05d08438;
							}
							pMVar16 = pMVar16.klass.rgctx_data[0xe].method;
	label_05d08085: ;
							__this_00.AddWithResize((object)pSVar14);
						}
						uVar18 = uVar18 + 1;
						uVar3 = (uint)options.Length;
						uVar11 = (ulong)uVar3;
					} while ((long)uVar18 < (long)(int)uVar3);
				}
				if (__this_00 != null) {
					pSVar15 = (String[])__this_00.ToArray();
					return pSVar15;
				}
			}
		}
	label_05d0851a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D63")]
	[Address(RVA = "0x5C08550", Offset = "0x5C07550", VA = "0x5C08550")]
	public CharacterTitanPanel()
	{
		// Lifted from source/cpp/UI/CharacterTitanPanel.c (UI.CharacterTitanPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterTitanPanel.c.

	// UI.CharacterTitanPanel.<>c__DisplayClass1_0$$.ctor: clean
	private void c__DisplayClass1_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterTitanPanel.<>c__DisplayClass1_0$$<Setup>b__0: clean
	private String c__DisplayClass1_0__Setup_b__0(String option)
	{
		bool bVar1;
		String pSVar2;

		bVar1 = (option == "Random");
		if (bVar1) {
			pSVar2 = this.sub;
			pSVar2 = UIManager.GetLocale("CharacterPopup", pSVar2, "Random", "", "");
			return pSVar2;
		}
		return option;
	}
}
