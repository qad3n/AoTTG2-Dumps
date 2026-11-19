// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceRuleEngine
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceRuleEngine.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AD")]
internal static class ExperienceRuleEngine
{
	[Token(Token = "0x400038A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Type> NamedIntSettings;

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x58D39E0", Offset = "0x58D29E0", VA = "0x58D39E0")]
	public static bool TryGetValueName(string id, int value, out string name)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$TryGetValueName): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		Type pSVar1;
		bool bVar2;
		bool bVar3;
		object pIVar4;
		String pSVar5;
		int local_3c;
		Type local_38;

		local_38 = null;
		*name = null;
		bVar2 = false;
		if (id != null) {
			__this = (Dictionary<object, object>)ExperienceRuleEngine.NamedIntSettings;
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this.TryGetValue((object)id, (object*)&local_38);
			pSVar1 = local_38;
			if (bVar2) {
				local_3c = value;
				pIVar4 = (object)local_3c;
				bVar2 = false;
				bVar3 = Enum.IsDefined(pSVar1, pIVar4);
				pSVar1 = local_38;
				if (bVar3) {
					local_3c = value;
					pIVar4 = (object)local_3c;
					pSVar5 = Enum.GetName(pSVar1, pIVar4);
					*name = pSVar5;
					bVar2 = true;
				}
			}
			else {
				bVar2 = false;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x58D3B50", Offset = "0x58D2B50", VA = "0x58D3B50")]
	public static bool TryParseValueName(string id, string name, out int value)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$TryParseValueName): 5 lines keep C-only constructs
		Dictionary<object, object> __this;
		Type pSVar3;
		bool bVar4;
		bool bVar5;
		int iVar6;
		Array __this_00;
		object pIVar8;
		String a;
		CultureInfo provider;
		object local_60;
		Type local_58;
		object local_50;
		object* local_40;
		object* local_38;

		local_58 = null;
		local_60 = null;
		local_50 = null;
		*value = 0;
		bVar5 = false;
		if ((id != null) && (bVar4 = String.IsNullOrEmpty(name), !bVar4) ) {
			__this = (Dictionary<object, object>)ExperienceRuleEngine.NamedIntSettings;
			if (__this == null) {
	label_059d3f07: ;
				throw new NullReferenceException();
			}
			bVar5 = __this.TryGetValue((object)id, (object*)&local_58);
			pSVar3 = local_58;
			if (bVar5) {
				__this_00 = Enum.GetValues(pSVar3);
				if (__this_00 == null) goto label_059d3f07;
				local_60 = (object)__this_00.GetEnumerator();
				local_40 = &local_60;
				local_38 = &local_50;
				do {
					pIVar8 = local_60;
					if (local_60 == null) {
						throw new NullReferenceException();
					}
					bVar5 = pIVar8.Dispose();
					pIVar8 = local_60;
					if (!bVar5) {
						bVar5 = false;
						goto label_059d3e64;
					}
					if (local_60 == null) {
						throw new NullReferenceException();
					}
					pIVar8 = pIVar8.Dispose();
					pSVar3 = local_58;
					a = Enum.GetName(pSVar3, pIVar8);
					bVar5 = String.Equals(a, name, 5);
				} while (!bVar5);
				provider = CultureInfo.InvariantCulture;
				iVar6 = Convert.ToInt32(pIVar8, (IFormatProvider)provider);
				*value = iVar6;
				bVar5 = true;
	label_059d3e64: ;
				pIVar8 = (local_60 as IDisposable);
				if (pIVar8 != null) {
					local_50 = pIVar8;
					pIVar8.Dispose();
				}
			}
			else {
				bVar5 = false;
			}
		}
		return bVar5;
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x58D3F70", Offset = "0x58D2F70", VA = "0x58D3F70")]
	public static ExperienceRuleResult Apply(PresetDefinition experience, InGameSet settings, [Optional] Func<string, string> mapCategoryResolver, [Optional] string variant)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$Apply): 59 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		int iVar4;
		Dictionary<object, object> pSVar5;
		OrdinalIgnoreCaseComparer comparer;
		InGameModeSettings pSVar6;
		InGameGeneralSettings pSVar7;
		StringSetting pSVar8;
		object ruleValue;
		ExperienceRuleField[] pSVar9;
		BoolSetting __this;
		ExperienceRuleField pSVar10;
		BaseSetting pSVar11;
		UIRule pSVar12;
		bool bVar13;
		int iVar14;
		ExperienceRuleResult pSVar15;
		PresetDefinition pSVar16;
		List<UIRule> __this_00;
		String* ppSVar17;
		String[] pSVar18;
		HashSet<string> __this_01;
		String pSVar19;
		undefined7 extraout_var;
		ExperienceRuleField __this_02;
		String* method_00;
		ulong uVar20;
		StringSetting method_01;
		MethodInfo pMVar21;
		ExperienceRuleResult targetAddress;
		uint uVar22;
		InGameSet pSVar23;
		ExperienceRuleField item;
		List<string> pSVar24;
		List<ExperienceRuleField> __this_03;
		String value;
		bool bVar25;
		BaseSetting local_c8;
		object local_c0;
		ulong local_b8;
		List<ExperienceRuleField> local_b0;
		ExperienceRuleField local_a8;
		InGameSet local_a0;
		ExperienceRuleResult local_98;
		List<string> local_90;
		byte[] local_88 = new byte[8];
		UIRule local_78;
		ExperienceRuleField local_70;
		Func<string, string> local_68;
		byte[] local_60 = new byte[16];
		UIRule local_50;
		PresetDefinition local_48;
		String local_40;
		HashSet<string> local_38;

		pSVar23 = settings;
		local_68 = mapCategoryResolver;
		local_90 = null;
		local_88 = (byte[])0x0;
		local_78 = null;
		local_c8 = null;
		pSVar15 = new ExperienceRuleResult();
		if (pSVar15 == null) goto label_059d50d1;
		targetAddress = &pSVar15.fields;
		pSVar15.Experience = experience;
		pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
		if (experience == null) {
			pSVar24 = pSVar15.Errors;
			if (pSVar24 == null) goto label_059d50d1;
			ppSVar17 = &"Experience is missing.";
		}
		else {
			if (settings != null) {
				bVar13 = String.IsNullOrEmpty(variant);
				if (bVar13) {
					variant = experience.DefaultVariant;
				}
				bVar13 = String.IsNullOrEmpty(variant);
				if (!bVar13) {
					pSVar5 = (Dictionary<object, object>)experience.Variants;
					if (((pSVar5 == null) ||(bVar13 = pSVar5.TryGetValue((object)variant, (object*)&local_90), !bVar13)) || (local_90 == null) ) {
						pSVar24 = pSVar15.Errors;
						pSVar18 = (String[])new string[5];
						if (pSVar18 == null) {
							throw new NullReferenceException();
						}
						if ((int)pSVar18.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						pSVar18[0] = "Unknown variant ";
						if ((pSVar18.Length & 0xfffffffe) == 0) {
							throw new IndexOutOfRangeException();
						}
						pSVar18[1] = variant;
						if ((uint)pSVar18.Length < 3) {
							throw new IndexOutOfRangeException();
						}
						pSVar18[2] = " for experience ";
						if ((pSVar18.Length & 0xfffffffc) == 0) {
							throw new IndexOutOfRangeException();
						}
						pSVar18[3] = experience.Name;
						if ((uint)pSVar18.Length < 5) {
							throw new IndexOutOfRangeException();
						}
						pSVar18[4] = ".";
						pSVar19 = String.Concat(pSVar18);
						pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
						if (pSVar24 != null) {
							piVar1 = &pSVar24._version;
							*piVar1 = *piVar1 + 1;
							pSVar18 = pSVar24._items;
							if (pSVar18 != null) {
								uVar22 = pSVar24._size;
								if (uVar22 < (uint)pSVar18.Length) {
									pSVar24._size = uVar22 + 1;
									pSVar18[(int)uVar22] = pSVar19;
									return pSVar15;
								}
								pSVar24.AddWithResize((object)pSVar19);
								return pSVar15;
							}
						}
						throw new NullReferenceException();
					}
					pSVar16 = new PresetDefinition();
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar16.UIRules = local_90;
					experience = PresetMerger.Merge(experience, pSVar16);
					targetAddress.Experience = experience;
					if (experience == null) {
						throw new NullReferenceException();
					}
				}
				__this_00 = experience.UIRulesObject;
				local_98 = pSVar15;
				if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_07542886 != false) goto label_059d42cb;
	label_059d44a6: ;
					Il2CppMethodInitialized_07542886 = true;
					uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_07542886 == false) goto label_059d44a6;
	label_059d42cb: ;
					uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				comparer = StringComparer.s_ordinalIgnoreCase;
				__this_01 = il2cpp_codegen_object_new(typeof(HashSet<string>)) ;
				__this_01 = new HashSet<object>((IEqualityComparer<T>)comparer);
				if (__this_00 != null) {
					local_a0 = settings;
					local_48 = experience;
					local_40 = variant;
					local_60.GetEnumerator((List<object>)__this_00);
					pSVar15 = local_98;
					local_78 = local_50;
					local_88 = (byte[])local_60._0_8_;
					local_60._0_8_ = null;
					local_60._8_8_ = local_88;
					if (__this_01 == null) {
						while (true) {
							bVar13 = local_88.MoveNext();
							pSVar12 = local_78;
							if (!(bVar13)) break;
							if ((local_78 != null) &&(bVar13 = String.IsNullOrWhiteSpace(local_78.SettingId), !bVar13)) {
								WeatherSettings.IsWeatherSetting(pSVar12.SettingId);
								throw new NullReferenceException();
							}
							pSVar19 = "Experience contains a rule without a setting ID.";
							pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
							pSVar24 = pSVar15.Errors;
							if (pSVar24 == null) goto label_059d4f2a;
							piVar1 = &pSVar24._version;
							*piVar1 = *piVar1 + 1;
							pSVar18 = pSVar24._items;
							if (pSVar18 == null) goto label_059d4f2a;
							uVar22 = pSVar24._size;
							if (uVar22 < (uint)pSVar18.Length) {
								pSVar24._size = uVar22 + 1;
								pSVar18[(int)uVar22] = pSVar19;
							}
							else {
								pSVar24.AddWithResize((object)pSVar19);
							}
						}
					}
					else {
						local_70 = null;
						local_a8 = null;
						local_b0 = null;
						local_38 = __this_01;
	label_059d45c4: ;
						bVar13 = local_88.MoveNext();
						pSVar12 = local_78;
						if (bVar13) {
							if ((local_78 != null) &&(bVar13 = String.IsNullOrWhiteSpace(local_78.SettingId), !bVar13)) {
								ppSVar17 = &pSVar12.SettingId;
								bVar13 = WeatherSettings.IsWeatherSetting(*ppSVar17);
								method_00 = ppSVar17;
								if (bVar13) {
									method_00 = &"general.Weather";
								}
								bVar13 = local_38.Add((object)((MethodInfo)method_00).methodPointer);
								if (!bVar13) {
									pSVar24 = pSVar15.Errors;
									pSVar19 = String.Concat("Duplicate experience rule: ", *ppSVar17);
									pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
									if (pSVar24 != null) {
										piVar1 = &pSVar24._version;
										*piVar1 = *piVar1 + 1;
										pSVar18 = pSVar24._items;
										if (pSVar18 != null) {
											uVar22 = pSVar24._size;
											if (uVar22 < (uint)pSVar18.Length) {
												pSVar24._size = uVar22 + 1;
												pSVar18[(int)uVar22] = pSVar19;
											}
											else {
												pSVar24.AddWithResize((object)pSVar19);
											}
											goto label_059d45c4;
										}
									}
									throw new NullReferenceException();
								}
								pSVar19 = *ppSVar17;
								bVar13 = ExperienceRuleEngine.TryResolveSetting(local_a0, pSVar19, ref local_c8);
								pSVar11 = local_c8;
								if (bVar13) {
									if ((pSVar12.Min.hasValue != false) ||(pSVar12.Max.hasValue != false)) {
										pSVar24 = pSVar15.Errors;
										ExperienceRuleEngine.ApplyBounds(pSVar11, pSVar12, pSVar24);
									}
									pSVar11 = local_c8;
									if (1 < (uint)pSVar12.Type) {
										pSVar19 = pSVar12.SettingId;
										local_c0 = pSVar12.DefaultValue;
										local_b8 = (MethodInfo)pSVar15.Errors;
										pMVar21 = local_b8;
										ExperienceRuleEngine.ApplyValue(pSVar11, pSVar19, local_c0, (List<string>)local_b8);
										pSVar11 = local_c8;
										if (1 < (uint)pSVar12.Type) {
											pSVar19 = pSVar12.SettingId;
											local_c0 = pSVar12.DefaultValue;
											if ((typeof(ExperienceRuleEngine)._2).cctor_finished_or_no_cctor == 0) {
												il2cpp_codegen_runtime_class_init(typeof(ExperienceRuleEngine)) ;
											}
											bVar13 = ExperienceRuleEngine.MatchesDefaultValue(pSVar11, pSVar19, local_c0);
											if (!bVar13) {
												pSVar24 = pSVar15.Errors;
												pSVar19 = String.Concat("Default value is outside the setting constraints for ", *ppSVar17, ".");
												pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
												if (pSVar24 == null) {
	label_059d4f8f: ;
													throw new NullReferenceException();
												}
												piVar1 = &pSVar24._version;
												*piVar1 = *piVar1 + 1;
												pSVar18 = pSVar24._items;
												if (pSVar18 == null) goto label_059d4f8f;
												uVar22 = pSVar24._size;
												if (uVar22 < (uint)pSVar18.Length) {
													pSVar24._size = uVar22 + 1;
													pSVar18[(int)uVar22] = pSVar19;
												}
												else {
													pSVar24.AddWithResize((object)pSVar19);
												}
											}
										}
									}
									uVar20 = 0;
									bVar13 = String.Equals(*ppSVar17, "general.MapName", 5);
									method_01 = (StringSetting)CONCAT71((int7)((ulong)uVar20 >> 8), local_68 != null);
									if ((local_68 != null && bVar13) &&(local_c8 != null)) {
										bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
										if ((bVar2 <= (local_c8.klass._2).typeHierarchyDepth) &&((local_c8.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(StringSetting))) {
											pSVar19 = (String)(*(code)local_68.invoke_impl)(local_68.method_code,(*(ulong)((sbyte)local_c8 + 0x20)),local_68.method);
											bVar13 = String.IsNullOrEmpty(pSVar19);
											if (!bVar13) {
												pSVar7 = local_a0.General;
												if (pSVar7 == null) {
													throw new NullReferenceException();
												}
												pSVar8 = pSVar7.MapCategory;
												if (pSVar8 == null) {
													throw new NullReferenceException();
												}
												pSVar8.Value = (object)pSVar19;
											}
										}
									}
									pSVar11 = local_c8;
									pSVar24 = pSVar12.AllowedValues;
									if ((pSVar24 != null) &&(0 < pSVar24._size)) {
										pSVar19 = *ppSVar17;
										bVar13 = ExperienceRuleEngine.MatchesAllowedValue(pSVar11, pSVar19, pSVar12);
										if (!bVar13) {
											pSVar24 = pSVar15.Errors;
											pSVar19 = String.Concat("Default value is not allowed for ", *ppSVar17, ".");
											pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
											if (pSVar24 == null) {
	label_059d4f8a: ;
												throw new NullReferenceException();
											}
											piVar1 = &pSVar24._version;
											*piVar1 = *piVar1 + 1;
											pSVar18 = pSVar24._items;
											if (pSVar18 == null) goto label_059d4f8a;
											uVar22 = pSVar24._size;
											if (uVar22 < (uint)pSVar18.Length) {
												pSVar24._size = uVar22 + 1;
												pSVar18[(int)uVar22] = pSVar19;
											}
											else {
												pSVar24.AddWithResize((object)pSVar19);
											}
										}
									}
									pMVar21 = null;
									bVar13 = String.Equals(*ppSVar17, "general.MapCategory", 5);
									iVar4 = pSVar12.Type;
									uVar22 = 0;
									if (iVar4 == 1) {
										bVar25 = true;
										local_b8 = (MethodInfo)((ulong)local_b8._4_4_ << 0x20);
	label_059d4b89: ;
										uVar22 = (uint)(iVar4 != 1);
									}
									else {
										bVar25 = pSVar12.DisableEditing == false;
										pMVar21 = (MethodInfo)CONCAT71((int7)((ulong)pMVar21 >> 8), bVar25);
										local_b8 = (MethodInfo)CONCAT44(local_b8._4_4_, (int)CONCAT71(extraout_var, !bVar13 && bVar25));
										bVar25 = bVar13 || !bVar25;
										if (iVar4 != 0) goto label_059d4b89;
									}
									local_c0 = (object)CONCAT44(local_c0._4_4_, uVar22);
									__this_03 = pSVar15.Fields;
									__this_02 = new ExperienceRuleField();
									if (__this_02 == null) {
										throw new NullReferenceException();
									}
									__this_02.Id = *ppSVar17;
									__this_02.Setting = local_c8;
									pSVar10 = local_70;
									__this_02.Rule = pSVar12;
									pSVar11 = local_c8;
									__this_02.Visible = SUB81(local_b8, 0);
									__this_02.Editable = SUB81(local_b8, 0);
									if ((int)local_c0 == 0) {
										bVar13 = false;
										item = __this_02;
									}
									else {
										local_b0 = __this_03;
										local_a8 = __this_02;
										if (bVar25) {
											if (bVar13) {
												bVar13 = false;
											}
											else {
												pSVar19 = pSVar12.SettingId;
												ruleValue = pSVar12.DefaultValue;
												bVar13 = ExperienceRuleEngine.ChangesDefaultValue(pSVar11, pSVar19, ruleValue);
											}
										}
										else {
											bVar13 = false;
										}
										item = local_a8;
										__this_03 = local_b0;
										pSVar10 = __this_02;
										if (__this_02 == null) goto label_059d4f76;
									}
									__this_02.Locked = bVar13;
									pMVar21 = MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add;
									if (__this_03 != null) {
										piVar1 = &__this_03._version;
										*piVar1 = *piVar1 + 1;
										pSVar9 = __this_03._items;
										if (pSVar9 != null) {
											uVar22 = __this_03._size;
											local_70 = pSVar10;
											if (uVar22 < (uint)pSVar9.Length) {
												__this_03._size = uVar22 + 1;
												pSVar9[(int)uVar22] = item;
											}
											else {
												__this_03.AddWithResize((object)item);
											}
											goto label_059d45c4;
										}
									}
	label_059d4f76: ;
									throw new NullReferenceException();
								}
								if (*ppSVar17 == null) {
									throw new NullReferenceException();
								}
								bVar13 = (*ppSVar17).StartsWith("mode.", 5);
								if (bVar13) {
									pSVar6 = local_a0.Mode;
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									pSVar5 = (Dictionary<object, object>)pSVar6.Current;
									if ((pSVar5 == null) ||(iVar14 = pSVar5.Count, iVar14 == 0)) goto label_059d45c4;
								}
								pSVar24 = pSVar15.Errors;
								pSVar19 = String.Concat("Unknown experience setting: ", *ppSVar17);
								pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
								if (pSVar24 != null) {
									piVar1 = &pSVar24._version;
									*piVar1 = *piVar1 + 1;
									pSVar18 = pSVar24._items;
									if (pSVar18 != null) {
										uVar22 = pSVar24._size;
										if (uVar22 < (uint)pSVar18.Length) {
											pSVar24._size = uVar22 + 1;
											pSVar18[(int)uVar22] = pSVar19;
										}
										else {
											pSVar24.AddWithResize((object)pSVar19);
										}
										goto label_059d45c4;
									}
								}
								throw new NullReferenceException();
							}
							pSVar19 = "Experience contains a rule without a setting ID.";
							pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
							pSVar24 = pSVar15.Errors;
							if (pSVar24 == null) {
	label_059d4f2a: ;
								throw new NullReferenceException();
							}
							piVar1 = &pSVar24._version;
							*piVar1 = *piVar1 + 1;
							pSVar18 = pSVar24._items;
							if (pSVar18 == null) goto label_059d4f2a;
							uVar22 = pSVar24._size;
							if (uVar22 < (uint)pSVar18.Length) {
								pSVar24._size = uVar22 + 1;
								pSVar18[(int)uVar22] = pSVar19;
							}
							else {
								pSVar24.AddWithResize((object)pSVar19);
							}
							goto label_059d45c4;
						}
					}
					local_88.Dispose() ;
					value = local_40;
					pSVar16 = local_48;
					pSVar23 = local_a0;
					pSVar8 = local_a0.ExperienceName;
					pSVar19 = local_48.Name;
					if (pSVar19 == null) {
						pSVar19 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					if (pSVar8 != null) {
						pSVar8.Value = (object)pSVar19;
						pSVar8 = pSVar23.ExperienceCategory;
						pSVar19 = pSVar16.Category;
						if (pSVar19 == null) {
							pSVar19 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						if (pSVar8 != null) {
							pSVar8.Value = (object)pSVar19;
							pSVar8 = pSVar23.ExperienceSubcategory;
							pSVar19 = pSVar16.SubCategory;
							if (pSVar19 == null) {
								pSVar19 = (String)**(ulong*)(g_data_07556758 + 0xb8);
							}
							if (pSVar8 != null) {
								pSVar8.Value = (object)pSVar19;
								pSVar8 = pSVar23.ExperienceVariant;
								if (value == null) {
									value = (String)**(ulong*)(g_data_07556758 + 0xb8);
								}
								if (pSVar8 != null) {
									pSVar8.Value = (object)value;
									__this = pSVar23.Sandbox;
									if (__this != null) {
										__this.Value = false;
										return pSVar15;
									}
								}
							}
						}
					}
				}
				goto label_059d50d1;
			}
			pSVar24 = pSVar15.Errors;
			if (pSVar24 == null) goto label_059d50d1;
			ppSVar17 = &"Game settings are missing.";
		}
		pSVar19 = *ppSVar17;
		piVar1 = &pSVar24._version;
		*piVar1 = *piVar1 + 1;
		pSVar18 = pSVar24._items;
		if (pSVar18 != null) {
			uVar22 = pSVar24._size;
			if (uVar22 < (uint)pSVar18.Length) {
				pSVar24._size = uVar22 + 1;
				pSVar18[(int)uVar22] = pSVar19;
			}
			else {
				pSVar24.AddWithResize((object)pSVar19);
			}
			return pSVar15;
		}
	label_059d50d1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x58D65A0", Offset = "0x58D55A0", VA = "0x58D65A0")]
	public static bool Validate(ExperienceRuleResult result)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$Validate): 9 lines keep C-only constructs
		List<string> pSVar1;
		List<ExperienceRuleField> __this;
		Il2CppClass rule;
		Il2CppClass pIVar2;
		BaseSetting pSVar3;
		object defaultValue;
		object pIVar4;
		bool bVar5;
		int iVar6;
		byte[] local_60 = new byte[16];
		object local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		if (result == null) {
			return false;
		}
		pSVar1 = result.Errors;
		if (pSVar1 != null) {
			if (pSVar1._size != 0) {
				return false;
			}
			__this = result.Fields;
			if (__this != null) {
				local_60.GetEnumerator((List<object>)__this);
				local_48._current = local_50;
				local_48._list = (List<T>)local_60._0_8_;
				local_48._index = local_60._8_4_;
				local_48._version = local_60._12_4_;
				local_60._0_8_ = null;
				local_60._8_8_ = &local_48;
				do {
					do {
						do {
							bVar5 = local_48.MoveNext();
							pIVar4 = local_48._current;
							if (!bVar5) {
								iVar6 = 10;
								goto label_059d67ab;
							}
							if (local_48._current == null) {
								throw new NullReferenceException();
							}
							rule = local_48._current[2].klass;
							if (rule == null) {
								throw new NullReferenceException();
							}
						} while ((uint)((UIRule)&(rule._1).name).Type < 2);
						if (*(bool)&(rule._1).element_class != false) {
							pIVar2 = local_48._current[1].klass;
							pSVar3 = local_48._current[1].monitor;
							defaultValue = (rule._1).byval_arg.data;
							bVar5 = ExperienceRuleEngine.MatchesDefaultValue(pSVar3, (String)pIVar2, defaultValue);
							if (!bVar5) goto label_059d679f;
						}
						if (((((Nullable<float>)&(rule._1).byval_arg.bits).fields).hasValue != false) ||(((Nullable<float>)&(rule._1).this_arg.data).hasValue != false)) {
							pSVar3 = pIVar4[1].monitor;
							if ((typeof(ExperienceRuleEngine)._2).cctor_finished_or_no_cctor == 0) {
							}
							bVar5 = ExperienceRuleEngine.MatchesRange(pSVar3, (UIRule)rule);
							if (!bVar5) goto label_059d679f;
						}
						pSVar1 = *(List<string>*)&(rule._1).this_arg.bits;
					} while ((pSVar1 == null) || (pSVar1._size < 1)) ;
					pIVar2 = pIVar4[1].klass;
					pSVar3 = pIVar4[1].monitor;
					bVar5 = ExperienceRuleEngine.MatchesAllowedValue(pSVar3, (String)pIVar2, (UIRule)rule);
				} while (bVar5);
	label_059d679f: ;
				iVar6 = 7;
	label_059d67ab: ;
				local_48.Dispose();
				return iVar6 != 7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x58D5190", Offset = "0x58D4190", VA = "0x58D5190")]
	public static bool TryResolveSetting(InGameSet settings, string id, out BaseSetting setting)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$TryResolveSetting): 6 lines keep C-only constructs
		InGameMiscSettings pSVar1;
		OrderedDictionary pSVar2;
		InGameModeSettings pSVar3;
		Dictionary<object, object> __this;
		bool bVar4;
		int length;
		String pSVar5;
		String key;
		object obj;
		BaseSetting pSVar6;
		InGameMiscSettings* ppSVar7;

		*setting = null;
		if (settings == null) {
			return false;
		}
		bVar4 = String.IsNullOrEmpty(id);
		if (bVar4) {
			return false;
		}
		if (id == null) goto label_059d5406;
		length = id.IndexOf(0x2e);
		if (length < 1) {
			return false;
		}
		if (length == id._stringLength + -1) {
			return false;
		}
		pSVar5 = id.Substring(0, length);
		if (pSVar5 == null) goto label_059d5406;
		pSVar5 = pSVar5.ToLowerInvariant();
		key = id.Substring(length + 1);
		bVar4 = (pSVar5 == "general");
		if (bVar4) {
			bVar4 = WeatherSettings.IsWeatherSetting(id);
			if (bVar4) {
				*setting = (BaseSetting)settings.WeatherIndex;
				return true;
			}
			ppSVar7 = (InGameMiscSettings*)&settings.General;
	label_059d52fa: ;
			pSVar1 = *ppSVar7;
		}
		else {
			bVar4 = (pSVar5 == "misc");
			if (bVar4) {
				ppSVar7 = &settings.Misc;
				goto label_059d52fa;
			}
			bVar4 = (pSVar5 == "titan");
			if (!bVar4) {
				bVar4 = (pSVar5 == "mode");
				if (!bVar4) {
					return false;
				}
				pSVar3 = settings.Mode;
				if (pSVar3 == null) goto label_059d5406;
				__this = (Dictionary<object, object>)pSVar3.Current;
				if (__this == null) {
					return false;
				}
				bVar4 = __this.TryGetValue((object)key, (object*)setting);
				if (!bVar4) {
					return false;
				}
				goto label_059d536e;
			}
			pSVar1 = (InGameMiscSettings)settings.Titan;
		}
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.Settings, pSVar2 != null) ) {
			bVar4 = pSVar2.Contains((object)key);
			if (!bVar4) {
				return false;
			}
			pSVar2 = pSVar1.Settings;
			if (pSVar2 != null) {
				obj = pSVar2.get_Item((object)key);
				pSVar6 = (BaseSetting)il2cpp_codegen_is_inst_class(obj, typeof(BaseSetting));
				*setting = pSVar6;
				il2cpp_codegen_is_inst_class(obj, typeof(BaseSetting));
	label_059d536e: ;
				return *setting != null;
			}
		}
	label_059d5406: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x58D5410", Offset = "0x58D4410", VA = "0x58D5410")]
	private static void ApplyBounds(BaseSetting setting, UIRule rule, List<string> errors)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$ApplyBounds): 8 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		uint uVar4;
		BaseSetting pSVar5;
		String[] pSVar6;
		MethodInfo pMVar7;
		String pSVar8;
		String* ppSVar9;
		float fVar10;

		if (setting == null) {
	label_059d5509: ;
			if (rule == null) goto label_059d56ee;
			pSVar8 = String.Concat("Range rule requires a numeric setting: ", rule.SettingId);
			pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
		}
		else {
			pSVar5 = setting.klass;
			bVar2 = (pSVar5._2).typeHierarchyDepth;
			bVar3 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((bVar2 < bVar3) ||((pSVar5._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(IntSetting))) {
				bVar3 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if ((bVar2 < bVar3) ||((pSVar5._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(FloatSetting))) goto label_059d5509;
				if (rule == null) goto label_059d56ee;
				if (rule.Min.hasValue != false) {
					fVar10 = (rule.Min).Value;
					*(float)&(*(ulong)((sbyte)setting + 0x20)) = fVar10;
				}
				if (rule.Max.hasValue == false) {
					if (*(float)&(*(ulong)((sbyte)setting + 0x20)) <= *(float)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4)) {
						return;
					}
				}
				else {
					fVar10 = (rule.Max).Value;
					*(float)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4) = fVar10;
					if (*(float)&(*(ulong)((sbyte)setting + 0x20)) <= fVar10) {
						return;
					}
				}
				pSVar8 = rule.SettingId;
				ppSVar9 = &"Empty numeric range for ";
			}
			else {
				if (rule == null) goto label_059d56ee;
				if (rule.Min.hasValue != false) {
					fVar10 = (rule.Min).Value;
					fVar10 = ceilf(fVar10);
					*(int)&(*(ulong)((sbyte)setting + 0x20)) = (int)fVar10;
				}
				if (rule.Max.hasValue == false) {
					if (*(int)&(*(ulong)((sbyte)setting + 0x20)) <= *(int)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4)) {
						return;
					}
				}
				else {
					fVar10 = (rule.Max).Value;
					fVar10 = floorf(fVar10);
					*(int)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4) = (int)fVar10;
					if (*(int)&(*(ulong)((sbyte)setting + 0x20)) <= (int)fVar10) {
						return;
					}
				}
				pSVar8 = rule.SettingId;
				ppSVar9 = &"Empty integer range for ";
			}
			pSVar8 = String.Concat(*ppSVar9, pSVar8, ".");
			pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
		}
		MethodInfo_System_Collections_Generic_List_string_Add = pMVar7;
		if (errors != null) {
			piVar1 = &errors._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = errors._items;
			if (pSVar6 != null) {
				uVar4 = errors._size;
				if (uVar4 < (uint)pSVar6.Length) {
					errors._size = uVar4 + 1;
					pSVar6[(int)uVar4] = pSVar8;
					return;
				}
				errors.AddWithResize((object)pSVar8);
				return;
			}
		}
	label_059d56ee: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x58D5700", Offset = "0x58D4700", VA = "0x58D5700")]
	private static void ApplyValue(BaseSetting setting, string id, object rawValue, List<string> errors)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$ApplyValue): 9 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		uint uVar4;
		BaseSetting pSVar5;
		String[] pSVar6;
		bool bVar7;
		String pSVar8;
		CultureInfo provider;
		String* ppSVar9;
		bool local_31;
		float local_30;
		int local_2c;

		local_31 = false;
		local_2c = 0;
		local_30 = 0.0;
		if (rawValue == null) {
			pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar8 = (String)(*rawValue.klass.vtable[3].methodPtr)(rawValue,rawValue.klass.vtable[3].method);
		}
		if (setting == null) {
	label_059d590a: ;
			pSVar8 = String.Concat("Unsupported experience setting type: ", id);
			if (errors != null) {
				piVar1 = &errors._version;
				*piVar1 = *piVar1 + 1;
				pSVar6 = errors._items;
				if (pSVar6 != null) {
					uVar4 = errors._size;
					if (uVar4 < (uint)pSVar6.Length) {
						errors._size = uVar4 + 1;
						pSVar6[(int)uVar4] = pSVar8;
						return;
					}
					errors.AddWithResize((object)pSVar8);
					return;
				}
			}
		}
		else {
			pSVar5 = setting.klass;
			bVar2 = (pSVar5._2).typeHierarchyDepth;
			bVar3 = ((typeof(StringSetting))._2).typeHierarchyDepth;
			if ((bVar3 <= bVar2) &&((pSVar5._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(StringSetting))) {
				setting.Value = (object)pSVar8;
				return;
			}
			bVar3 = ((typeof(BoolSetting))._2).typeHierarchyDepth;
			if ((bVar2 < bVar3) ||((pSVar5._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(BoolSetting))) {
				bVar3 = ((typeof(IntSetting))._2).typeHierarchyDepth;
				if ((bVar2 < bVar3) ||((pSVar5._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(IntSetting))) {
					bVar3 = ((typeof(FloatSetting))._2).typeHierarchyDepth;
					if ((bVar3 <= bVar2) &&((pSVar5._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(FloatSetting))) {
						if (((typeof(CultureInfo))._2).cctor_finished_or_no_cctor == 0 ) {
						}
						provider = CultureInfo.InvariantCulture;
						bVar7 = Single.TryParse(pSVar8, 0xa7, (IFormatProvider)provider, ref local_30);
						if (bVar7) {
							setting.Value = local_30;
							return;
						}
						pSVar8 = String.Concat("Invalid numeric value for ", id, ": ", pSVar8);
						if (errors != null) {
							il2cpp_runtime_helper_02fa8fa0(errors, pSVar8, MethodInfo_System_Collections_Generic_List_string_Add);
							return;
						}
						goto label_059d5ba6;
					}
					goto label_059d590a;
				}
				if (((typeof(ExperienceRuleEngine))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar7 = ExperienceRuleEngine.TryParseInt(id, pSVar8, ref local_2c);
				if (bVar7) {
					setting.Value = local_2c;
					return;
				}
				bVar7 = String.Equals(id, "general.Weather", 5);
				if (bVar7) {
					ppSVar9 = &"Unknown weather name for ";
				}
				else {
					ppSVar9 = &"Invalid integer value for ";
				}
			}
			else {
				bVar7 = Boolean.TryParse(pSVar8, ref local_31);
				if (bVar7) {
					setting.Value = local_31;
					return;
				}
				ppSVar9 = &"Invalid boolean value for ";
			}
			pSVar8 = String.Concat(*ppSVar9, id, ": ", pSVar8);
			if (errors != null) {
				piVar1 = &errors._version;
				*piVar1 = *piVar1 + 1;
				pSVar6 = errors._items;
				if (pSVar6 != null) {
					uVar4 = errors._size;
					if (uVar4 < (uint)pSVar6.Length) {
						errors._size = uVar4 + 1;
						pSVar6[(int)uVar4] = pSVar8;
					}
					else {
						errors.AddWithResize((object)pSVar8);
					}
					return;
				}
			}
		}
	label_059d5ba6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x58D69A0", Offset = "0x58D59A0", VA = "0x58D69A0")]
	private static bool TryParseInt(string id, string value, out int parsed)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$TryParseInt): clean
		WeatherSettings __this;
		bool bVar1;
		int iVar2;
		CultureInfo provider;
		bool bVar3;

		bVar1 = ExperienceRuleEngine.TryParseValueName(id, value, parsed);
		if (!bVar1) {
			bVar1 = String.Equals(id, "general.Weather", 5);
			if (!bVar1) {
				provider = CultureInfo.InvariantCulture;
				bVar1 = Int32.TryParse(value, 7, (IFormatProvider)provider, parsed);
				return bVar1;
			}
			__this = SettingsManager.WeatherSettings;
			if (__this == null) {
				iVar2 = -1;
			}
			else {
				iVar2 = __this.FindWeatherIndex(value);
			}
			*parsed = iVar2;
			bVar3 = -1 < iVar2;
		}
		return bVar3;
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x58D6250", Offset = "0x58D5250", VA = "0x58D6250")]
	private static bool ChangesDefaultValue(BaseSetting setting, string id, object ruleValue)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$ChangesDefaultValue): 13 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		sbyte cVar3;
		int iVar4;
		bool bVar5;
		String b;
		String a;
		uint puVar6;
		CultureInfo provider;
		sbyte pcVar7;
		int piVar8;
		BaseSetting method_00;
		bool bVar9;
		bool local_45;
		float local_44;
		int local_40;
		float local_3c;
		byte[] local_38 = new byte[16];

		local_45 = false;
		local_40 = 0;
		local_44 = 0.0;
		if (ruleValue == null) {
			b = *(String*)g_data_07556758.static_fields;
		}
		else {
			b = (String)(*ruleValue.klass.vtable[3].methodPtr)(ruleValue,ruleValue.klass.vtable[3].method);
		}
		if (setting == null) {
			throw new NullReferenceException();
		}
		a = (String)setting.GetDefaultValue();
		method_00 = setting.klass;
		bVar1 = (method_00._2).typeHierarchyDepth;
		bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((method_00._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((((method_00._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting) ||(a == null)) || ((Il2CppClass)a.klass != g_data_075566f0)))) {
				bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if ((((bVar1 < bVar2) ||((method_00._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) || (a == null)) || ((Il2CppClass)a.klass != g_data_07556710)) {
					bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
					bVar9 = true;
					if (((bVar2 <= bVar1) &&((method_00._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting)) ) && ((a != null && ((Il2CppClass)a.klass == g_data_07556740)))) {
						puVar6 = il2cpp_vm_Object_Unbox((object)a);
						local_38 = ZEXT416(*puVar6);
						provider = CultureInfo.InvariantCulture;
						bVar5 = Single.TryParse(b, 0xa7, (IFormatProvider)provider, ref local_44);
						if (bVar5) {
							if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
								local_3c = local_44;
								local_44 = local_3c;
							}
							bVar9 = 0.0001 <= ABS((float)local_38._0_4_ - local_44);
						}
					}
				}
				else {
					piVar8 = il2cpp_vm_Object_Unbox((object)a);
					iVar4 = *piVar8;
					bVar5 = ExperienceRuleEngine.TryParseInt(id, b, ref local_40);
					bVar9 = true;
					if (bVar5) {
						bVar9 = iVar4 != local_40;
					}
				}
			}
			else {
				pcVar7 = il2cpp_vm_Object_Unbox((object)a);
				cVar3 = *pcVar7;
				bVar5 = Boolean.TryParse(b, ref local_45);
				bVar9 = true;
				if (bVar5) {
					bVar9 = (bool)cVar3 != local_45;
				}
			}
		}
		else {
			if ((a == null) || ((Il2CppClass)a.klass != g_data_07556758)) {
				a = *(String*)g_data_07556758.static_fields;
			}
			bVar9 = String.Equals(a, b, 5);
			bVar9 = !bVar9;
		}
		return bVar9;
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x58D5BB0", Offset = "0x58D4BB0", VA = "0x58D5BB0")]
	private static bool MatchesDefaultValue(BaseSetting setting, string id, object defaultValue)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$MatchesDefaultValue): 5 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		bool bVar4;
		String b;
		CultureInfo provider;
		bool local_45;
		float local_44;
		int local_40;
		float local_3c;
		byte[] local_38 = new byte[16];

		local_45 = false;
		local_40 = 0;
		local_44 = 0.0;
		if (defaultValue == null) {
			b = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			b = (String)(*defaultValue.klass.vtable[3].methodPtr)(defaultValue,defaultValue.klass.vtable[3].method);
		}
		if (setting != null) {
			pSVar3 = setting.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = ((typeof(StringSetting))._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting))) {
				bVar4 = String.Equals((*(ulong)((sbyte)setting + 0x20)), b, 5);
				return bVar4;
			}
			bVar2 = ((typeof(BoolSetting))._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BoolSetting))) {
				bVar4 = Boolean.TryParse(b, ref local_45);
				if (bVar4) {
					return local_45 == (bool)*(sbyte)((long)&(*(ulong)((sbyte)setting + 0x18)) + 1);
				}
				return false;
			}
			bVar2 = ((typeof(IntSetting))._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
				bVar2 = ((typeof(FloatSetting))._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))) {
					if (((typeof(CultureInfo))._2).cctor_finished_or_no_cctor == 0) {
					}
					provider = CultureInfo.InvariantCulture;
					bVar4 = Single.TryParse(b, 0xa7, (IFormatProvider)provider, ref local_44);
					if (bVar4) {
						local_38._0_4_ = *(float)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
						if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
							local_38 = ZEXT416((uint)local_38._0_4_);
							local_3c = local_44;
							local_44 = local_3c;
						}
						return ABS((float)local_38._0_4_ - local_44) < 0.0001;
					}
					return false;
				}
			}
			else {
				if (((typeof(ExperienceRuleEngine))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar4 = ExperienceRuleEngine.TryParseInt(id, b, ref local_40);
				if (bVar4) {
					return *(int)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4) == local_40;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x58D6850", Offset = "0x58D5850", VA = "0x58D6850")]
	private static bool MatchesRange(BaseSetting setting, UIRule rule)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$MatchesRange): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		float fVar4;
		float fVar5;

		if (setting != null) {
			pSVar3 = setting.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
				bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if (bVar1 < bVar2) {
					return false;
				}
				if ((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting)) {
					return false;
				}
				fVar4 = *(float)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
			}
			else {
				fVar4 = (float)*(int)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
			}
			if (rule == null) {
				throw new NullReferenceException();
			}
			if ((rule.Min.hasValue == false) ||(fVar5 = (rule.Min).Value, fVar5 <= fVar4)) {
				if (rule.Max.hasValue == false) {
					return true;
				}
				fVar5 = (rule.Max).Value ;
				return fVar4 <= fVar5;
			}
		}
		return false;
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x58D5EB0", Offset = "0x58D4EB0", VA = "0x58D5EB0")]
	private static bool MatchesAllowedValue(BaseSetting setting, string id, UIRule rule)
	{
		// Lifted from source/cpp/Settings/ExperienceRuleEngine.c (Settings.ExperienceRuleEngine$$MatchesAllowedValue): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		uint uVar3;
		int value;
		uint uVar4;
		BaseSetting pSVar5;
		WeatherSettings pSVar6;
		SetSettingsContainer<WeatherSet> __this;
		bool bVar7;
		String[] pSVar8;
		CultureInfo pSVar9;
		String pSVar10;
		bool local_31;
		String local_30;
		float local_28;
		int local_24;

		local_30 = null;
		local_31 = false;
		local_24 = 0;
		local_28 = 0.0;
		if (setting == null) {
			return false;
		}
		pSVar5 = setting.klass;
		bVar1 = (pSVar5._2).typeHierarchyDepth;
		bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
				bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
					bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
					if (bVar1 < bVar2) {
						return false;
					}
					if ((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting)) {
						return false;
					}
					local_28 = *(float)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
					pSVar9 = CultureInfo.InvariantCulture;
					local_30 = local_28.ToString((IFormatProvider)pSVar9);
				}
				else {
					bVar7 = String.Equals(id, "general.Weather", 5);
					if (bVar7) {
						pSVar6 = SettingsManager.WeatherSettings;
						if (pSVar6 == null) {
							pSVar8 = (String[])il2cpp_runtime_helper_02fa32d0(MethodInfo_System_Array_Empty_string);
							uVar3 = *(uint)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
						}
						else {
							__this = pSVar6.WeatherSets;
							if (__this == null) goto label_059d6242;
							pSVar8 = __this.GetSetNames();
							uVar3 = *(uint)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
						}
						if ((int)uVar3 < 0) {
							return false;
						}
						if (pSVar8 != null) {
							uVar4 = (uint)pSVar8.Length;
							if ((int)uVar4 <= (int)uVar3) {
								return false;
							}
							if (uVar4 <= uVar3) {
								throw new IndexOutOfRangeException();
							}
							if (rule != null) {
								pSVar10 = pSVar8[uVar3];
								bVar7 = UIRule.MatchesAllowedValues(rule, pSVar10);
								if (bVar7) {
									return true;
								}
								if (pSVar10 != null) {
									pSVar10 = pSVar10.TrimEnd(0x2a);
									bVar7 = UIRule.MatchesAllowedValues(rule, pSVar10);
									return bVar7;
								}
							}
						}
						goto label_059d6242;
					}
					value = *(int)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
					bVar7 = ExperienceRuleEngine.TryGetValueName(id, value, ref local_30);
					if (!bVar7) {
						local_24 = *(int)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
						pSVar9 = CultureInfo.InvariantCulture;
						local_30 = local_24.ToString((IFormatProvider)pSVar9);
					}
				}
			}
			else {
				local_31 = *(bool)((long)&(*(ulong)((sbyte)setting + 0x18)) + 1);
				pSVar10 = local_31.ToString();
				if (pSVar10 == null) goto label_059d6242;
				local_30 = pSVar10.ToLowerInvariant();
			}
		}
		else {
			local_30 = (*(ulong)((sbyte)setting + 0x20));
		}
		if (rule != null) {
			bVar7 = UIRule.MatchesAllowedValues(rule, local_30);
			return bVar7;
		}
	label_059d6242: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/ExperienceRuleEngine.c.

	// Settings.ExperienceRuleEngine$$.cctor: 1 lines keep C-only constructs
	static ExperienceRuleEngine()
	{
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Il2CppType handle;
		Dictionary<string, Type> __this;
		Type pSVar2;

		if (Il2CppMethodInitialized_07545c99 == false) {
			Il2CppMethodInitialized_07545c99 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new Dictionary<string, Type>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		handle = TypeRef_Settings_GameDifficulty;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"general.Difficulty", (object)pSVar2);
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_Settings_PVPMode);
		__this.Add((Il2CppObject *)"misc.PVP", (object)pSVar2);
		ExperienceRuleEngine.NamedIntSettings = __this;
		return;
	}
}
