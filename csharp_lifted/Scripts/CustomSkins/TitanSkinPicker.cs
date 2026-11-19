// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanSkinPicker
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanSkinPicker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace CustomSkins;

[Token(Token = "0x20003D5")]
internal static class TitanSkinPicker
{
	[Token(Token = "0x6001856")]
	[Address(RVA = "0x58676C0", Offset = "0x58666C0", VA = "0x58676C0")]
	public static TitanSkinSelection Pick(bool ai, [Optional] JSONNode aiData, [Optional] TitanCustomSet forcedSet)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$Pick): 6 lines keep C-only constructs
		String* targetAddress;
		byte bVar1;
		int iVar2;
		IntSetting pSVar3;
		StringSetting pSVar4;
		InGameSet pSVar5;
		InGameTitanSettings pSVar6;
		BoolSetting pSVar7;
		List<T> list;
		CustomSkinSettings pSVar8;
		BaseCustomSkinSettings<TitanCustomSkinSet> __this;
		ListSetting<TitanCustomSkinSlot> __this_00;
		Nullable<int> SVar9;
		bool bVar10;
		int iVar11;
		int iVar12;
		Int32[] pSVar13;
		TitanSkinSelection __this_01;
		String pSVar14;
		TitanCustomSkinSet skinSet;
		TitanCustomSkinSlot pSVar15;
		List<string> pSVar16;
		String pSVar17;
		int iVar18;
		Nullable<int> local_58;
		Nullable<int> local_50;
		Nullable<int> local_48;
		Nullable<int> local_40;
		int local_34;

		pSVar17 = null;
		pSVar13 = BasicTitanSetup.GetRandomBodyHeadCombo(aiData);
		local_50.hasValue = false;
		local_50._1_3_ = 0;
		local_50.value = 0;
		local_58.hasValue = false;
		local_58._1_3_ = 0;
		local_58.value = 0;
		local_48.hasValue = false;
		local_48._1_3_ = 0;
		local_48.value = 0;
		if (forcedSet != null) {
			pSVar3 = forcedSet.Body;
			if (pSVar3 == null) goto label_05967e2a;
			iVar11 = pSVar3._value;
			if (-1 < iVar11) {
				local_50 = new Nullable<int>(iVar11);
			}
			pSVar3 = forcedSet.Head;
			if (pSVar3 == null) goto label_05967e2a;
			iVar11 = pSVar3._value;
			if (-1 < iVar11) {
				local_58 = new Nullable<int>(iVar11);
			}
			pSVar3 = forcedSet.Eye;
			if (pSVar3 == null) goto label_05967e2a;
			iVar2 = pSVar3._value;
			if (-1 < iVar2) {
				local_48 = new Nullable<int>(iVar2);
			}
			pSVar17 = null;
			bVar10 = forcedSet.IsRandomHair();
			if (!bVar10) {
				pSVar4 = forcedSet.Hair;
				if (pSVar4 == null) goto label_05967e2a;
				pSVar17 = pSVar4._value;
			}
		}
		pSVar5 = SettingsManager.InGameCurrent;
		if (((pSVar5 == null) ||(pSVar6 = pSVar5.Titan, pSVar6 == null)) ||(pSVar7 = pSVar6.TitanStandardModels, pSVar7 == null)) goto label_05967e2a;
		if (pSVar7._value != false) {
			local_50 = new Nullable<int>(0);
			local_58 = new Nullable<int>(0);
		}
		targetAddress = &__this_01.Hair;
		__this_01.Hair = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_01.SkinSlot = -1;
		__this_01 = new TitanSkinSelection();
		if (local_50.hasValue == false) {
			if (pSVar13 == null) goto label_05967e2a;
			if ((int)pSVar13.Length == 0) goto label_05967e2f;
			__this_01.Body = pSVar13[0];
			if (local_58.hasValue != false) goto label_05967967;
	label_059679b1: ;
			if (pSVar13 == null) goto label_05967e2a;
			if ((pSVar13.Length & 0xfffffffe) == 0) {
	label_05967e2f: ;
				throw new IndexOutOfRangeException();
			}
			__this_01.Head = pSVar13[1];
			if (local_48.hasValue != false) goto label_05967977;
	label_059679d6: ;
			list = (List<T>)BasicTitanSetup.AIEyes;
			iVar11 = MiscExtensions.GetRandomItem<int>(list);
			__this_01.Eye = iVar11;
		}
		else {
			__this_01.Body = local_50.value;
			if (local_58.hasValue == false) goto label_059679b1;
	label_05967967: ;
			__this_01.Head = local_58.value;
			if (local_48.hasValue == false) goto label_059679d6;
	label_05967977: ;
			__this_01.Eye = local_48.value;
		}
		pSVar14 = pSVar17;
		if (pSVar17 == null) {
			if (((typeof(BasicTitanSetup))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar16 = BasicTitanSetup.AIHairs;
			pSVar14 = MiscExtensions.GetRandomItem<string>((List<T>)pSVar16);
		}
		*targetAddress = pSVar14;
		pSVar8 = SettingsManager.CustomSkinSettings;
		if (((pSVar8 == null) ||(__this = pSVar8.Titan, __this == null )) || (pSVar7 = __this.SkinsEnabled, pSVar7 == null)) goto label_05967e2a;
		if ((pSVar7._value != false) &&(skinSet = (TitanCustomSkinSet)__this.GetSelectedSet(), skinSet != null)) {
			bVar1 = (typeof(TitanCustomSkinSet)._2).typeHierarchyDepth;
			if ((bVar1 <= (skinSet.klass._2).typeHierarchyDepth) &&((skinSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(TitanCustomSkinSet))) {
				__this_00 = skinSet.Slots;
				if (__this_00 == null) {
	label_05967e2a: ;
					throw new NullReferenceException();
				}
				iVar11 = __this_00.GetCount();
				if (iVar11 != 0) {
					pSVar7 = skinSet.OverrideModels;
					if (pSVar7 == null) goto label_05967e2a;
					if (pSVar7._value != false) {
						iVar11 = TitanSkinPicker.PickSlotIndex(skinSet, (Nullable<int>)local_50, (Nullable<int>)local_58, ai);
						__this_01.SkinSlot = iVar11;
						pSVar15 = TitanSkinPicker.GetSlot(skinSet, iVar11);
						SVar9 = local_50;
						if (pSVar15 != null) {
							pSVar3 = pSVar15.BodyModel;
							if (pSVar3 != null) {
								iVar2 = pSVar3._value;
								local_40 = local_50;
								if (((SVar9.hasValue == false) || (iVar2 < 1)) ||(iVar11 = local_40.Value, iVar2 + -1 == iVar11)) {
									if (local_50.hasValue == false) {
										pSVar3 = pSVar15.BodyModel;
										if (pSVar3 == null) goto label_05967e2a;
										iVar2 = pSVar3._value;
										iVar18 = __this_01.Body;
										if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
											local_34 = iVar18;
											iVar18 = local_34;
										}
										iVar12 = iVar2 + -1;
										if (BasicTitanSetup.BodyCount < iVar2) {
											iVar12 = iVar18;
										}
										if (iVar2 < 1) {
											iVar12 = iVar18;
										}
									}
									else {
										iVar12 = local_50.value;
									}
									__this_01.Body = iVar12;
								}
								SVar9 = local_58;
								pSVar3 = pSVar15.HeadModel;
								if (pSVar3 != null) {
									iVar2 = pSVar3._value;
									local_40 = local_58;
									if (((SVar9.hasValue == false) || (iVar2 < 1)) ||(iVar11 = local_40.Value, iVar2 + -1 == iVar11)) {
										if (local_58.hasValue == false) {
											pSVar3 = pSVar15.HeadModel;
											if (pSVar3 == null) goto label_05967e2a;
											iVar2 = pSVar3._value;
											iVar18 = __this_01.Head;
											iVar12 = iVar2 + -1;
											if (BasicTitanSetup.HeadCount < iVar2) {
												iVar12 = iVar18;
											}
											if (iVar2 < 1) {
												iVar12 = iVar18;
											}
										}
										else {
											iVar12 = local_58.value;
										}
										__this_01.Head = iVar12;
									}
									if (local_48.hasValue == false) {
										pSVar3 = pSVar15.EyeModel;
										if (pSVar3 == null) goto label_05967e2a;
										iVar2 = pSVar3._value;
										iVar18 = __this_01.Eye;
										iVar12 = iVar2 + -1;
										if (BasicTitanSetup.EyeCount < iVar2) {
											iVar12 = iVar18;
										}
										if (iVar2 < 1) {
											iVar12 = iVar18;
										}
										__this_01.Eye = iVar12;
									}
									if (pSVar17 != null) {
										return __this_01;
									}
									pSVar3 = pSVar15.HairModel;
									if (pSVar3 != null) {
										iVar2 = pSVar3._value;
										pSVar16 = BasicTitanSetup.AllHairs;
										if (pSVar16 != null) {
											iVar18 = iVar2 + -1;
											if (pSVar16._size < iVar2) {
												iVar18 = -1;
											}
											if (iVar2 < 1) {
												iVar18 = -1;
											}
											if (iVar18 < 0) {
												return __this_01;
											}
											if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
												pSVar16 = BasicTitanSetup.AllHairs;
												if (pSVar16 == null) goto label_05967e2a;
											}
											pSVar17 = pSVar16.get_Item(iVar18);
											*targetAddress = pSVar17;
											return __this_01;
										}
									}
								}
							}
							goto label_05967e2a;
						}
					}
				}
			}
		}
		return __this_01;
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x58682C0", Offset = "0x58672C0", VA = "0x58682C0")]
	public static string GetSkinUrls(TitanCustomSkinSet skinSet, int slotIndex, int body, int head, bool ai)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$GetSkinUrls): 6 lines keep C-only constructs
		int iVar1;
		ListSetting<TitanCustomSkinSlot> pSVar2;
		System_Collections_Generic_List_TitanCustomSkinSlot__o slots;
		IntSetting pSVar3;
		StringSetting pSVar4;
		StringSetting pSVar5;
		StringSetting pSVar6;
		StringSetting pSVar7;
		object pIVar8;
		bool bVar9;
		int iVar10;
		TitanSkinPicker.c__DisplayClass1_0 __this;
		TitanCustomSkinSlot pSVar11;
		Func<TitanCustomSkinSlot, string> pSVar12;
		String pSVar13;
		String a;
		String a_00;
		CustomSkins_TitanSkinPicker___c_StaticFields pCVar14;
		String a_01;
		String[] value;

		__this = new TitanSkinPicker.c__DisplayClass1_0();
		if (__this == null) goto label_059687cd;
		__this.body = body;
		__this.head = head;
		if (skinSet == null) goto label_059684f3;
		pSVar2 = skinSet.Slots;
		if (pSVar2 == null) goto label_059687cd;
		iVar10 = pSVar2.GetCount();
		if (iVar10 == 0) goto label_059684f3;
		pSVar2 = skinSet.Slots;
		if (pSVar2 == null) goto label_059687cd;
		slots = (System_Collections_Generic_List_TitanCustomSkinSlot__o)pSVar2._value;
		pSVar11 = TitanSkinPicker.GetSlot(skinSet, slotIndex);
		if (pSVar11 == null) {
	label_05968444: ;
			pSVar12 = new Func<TitanCustomSkinSlot, string>((object)__this, (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0_GetSkinUrls_b__0);
			pSVar13 = TitanSkinPicker.PickUrl(slots, ai, pSVar12);
			pSVar12 = new Func<TitanCustomSkinSlot, string>((object)__this, (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0_GetSkinUrls_b__1);
			a = TitanSkinPicker.PickUrl(slots, ai, pSVar12);
			if ((typeof(TitanSkinPicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				pSVar12 = pCVar14.__9__1_2;
			}
			else {
				pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				pSVar12 = pCVar14.__9__1_2;
			}
			if (pSVar12 == null) {
				if (((typeof(TitanSkinPicker.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				}
				pIVar8 = (object)pCVar14.__9;
				pSVar12 = new Func<TitanCustomSkinSlot, string>(pIVar8, (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c_GetSkinUrls_b__1_2);
				pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				pCVar14.__9__1_2 = pSVar12;
			}
			a_00 = TitanSkinPicker.PickUrl(slots, ai, pSVar12);
			if ((typeof(TitanSkinPicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				pSVar12 = pCVar14.__9__1_3;
			}
			else {
				pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				pSVar12 = pCVar14.__9__1_3;
			}
			if (pSVar12 == null) {
				if (((typeof(TitanSkinPicker.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				}
				pIVar8 = (object)pCVar14.__9;
				pSVar12 = new Func<TitanCustomSkinSlot, string>(pIVar8, (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c_GetSkinUrls_b__1_3);
				pCVar14 = typeof(TitanSkinPicker.c).static_fields;
				pCVar14.__9__1_3 = pSVar12;
			}
			a_01 = TitanSkinPicker.PickUrl(slots, ai, pSVar12);
		}
		else {
			pSVar3 = pSVar11.Target;
			if (pSVar3 == null) goto label_059687cd;
			iVar1 = pSVar3._value;
			if ((iVar1 != 0) && (iVar1 != 2 - (uint)ai)) goto label_05968444;
			pSVar4 = pSVar11.Body;
			if ((((pSVar4 == null) ||(pSVar5 = pSVar11.Head, pSVar5 == null)) ||(pSVar6 = pSVar11.Eye, pSVar6 == null)) ||(pSVar7 = pSVar11.Hair, pSVar7 == null)) goto label_059687cd;
			pSVar13 = pSVar4._value;
			a = pSVar5._value;
			a_00 = pSVar6._value;
			a_01 = pSVar7._value;
		}
		bVar9 = (pSVar13 == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (((bVar9) &&(bVar9 = (a == (String)**(ulong*)(g_data_07556758 + 0xb8)))) &&((bVar9 = (a_00 == (String)**(ulong*)(g_data_07556758 + 0xb8)), bVar9 && (bVar9 = (a_01 == (String)**(ulong*)(g_data_07556758 + 0xb8)))))) {
	label_059684f3: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		value = (String[])new string[4];
		if (value != null) {
			if ((int)value.Length != 0) {
				value[0] = pSVar13;
				if ((value.Length & 0xfffffffe) != 0) {
					value[1] = a;
					if (2 < (uint)value.Length) {
						value[2] = a_00;
						if ((value.Length & 0xfffffffc) != 0) {
							value[3] = a_01;
							pSVar13 = String.Join(",", value);
							return pSVar13;
						}
					}
				}
			}
			throw new IndexOutOfRangeException();
		}
	label_059687cd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x5868850", Offset = "0x5867850", VA = "0x5868850")]
	private static string PickUrl(List<TitanCustomSkinSlot> slots, bool ai, Func<TitanCustomSkinSlot, string> getUrl)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$PickUrl): 14 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		String[] pSVar4;
		Il2CppClass pIVar5;
		object pIVar7;
		byte puVar8;
		bool bVar9;
		List<string> __this;
		String pSVar10;
		int iVar11;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		__this = new List<string>();
		if (slots != null) {
			local_48.GetEnumerator((List<object>)slots);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			iVar11 = 2 - (uint)ai;
			local_48._8_8_ = local_68;
			if (getUrl == null) {
				while (true) {
					bVar9 = local_68.MoveNext();
					pIVar7 = local_58;
					if (!(bVar9)) break;
					if ((pIVar7 == null) || (pIVar5 = pIVar7[3].klass, pIVar5 == null)) goto label_05968c14;
					iVar2 = *(int)((long)&(pIVar5._1).namespaze + 4);
					if ((iVar2 == 0) || (iVar2 == iVar11)) {
						throw new NullReferenceException();
					}
				}
			}
			else {
				local_48._8_8_ = local_68;
				puVar8 = local_68;
				if (__this == null) {
					do {
						do {
							local_48._8_8_ = puVar8;
							bVar9 = local_68.MoveNext();
							pIVar7 = local_58;
							if (!bVar9) goto label_05968ba3;
							if ((pIVar7 == null) || (pIVar7[3].klass == null)) goto label_05968c14;
							iVar2 = *(int)((long)&((pIVar7[3].klass)._1).namespaze + 4);
						} while ((iVar2 != 0) && (puVar8 = (byte)local_48._8_8_, iVar2 != iVar11));
						pSVar10 = (String)(*(code)getUrl.invoke_impl)(getUrl.method_code,pIVar7,getUrl.method);
						bVar9 = (pSVar10 != (String)**(ulong*)(g_data_07556758 + 0xb8));
						puVar8 = (byte)local_48._8_8_;
					} while (!bVar9);
	label_05968b9e: ;
					throw new NullReferenceException();
				}
				while (true) {
					bVar9 = local_68.MoveNext();
					pIVar7 = local_58;
					if (!(bVar9)) break;
					if ((pIVar7 == null) || (pIVar7[3].klass == null)) {
	label_05968c14: ;
						throw new NullReferenceException();
					}
					iVar2 = *(int)((long)&((pIVar7[3].klass)._1).namespaze + 4);
					if ((iVar2 == 0) || (iVar2 == iVar11)) {
						pSVar10 = (String)(*(code)getUrl.invoke_impl)(getUrl.method_code,pIVar7,getUrl.method);
						bVar9 = (pSVar10 != (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (bVar9) {
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = __this._items;
							if (pSVar4 == null) goto label_05968b9e;
							uVar3 = __this._size;
							if (uVar3 < (uint)pSVar4.Length) {
								__this._size = uVar3 + 1;
								pSVar4[(int)uVar3] = pSVar10;
							}
							else {
								__this.AddWithResize((object)pSVar10);
							}
						}
					}
				}
			}
	label_05968ba3: ;
			local_68.Dispose();
			if (__this != null) {
				if (__this._size == 0) {
					pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					pSVar10 = MiscExtensions.GetRandomItem<string>((List<T>)__this);
				}
				return pSVar10;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x5868CA0", Offset = "0x5867CA0", VA = "0x5868CA0")]
	public static int FindSlotIndex(TitanCustomSkinSet skinSet, int body, int head, bool ai)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$FindSlotIndex): 2 lines keep C-only constructs
		int iVar1;
		ListSetting<TitanCustomSkinSlot> pSVar2;
		List<object> __this;
		IntSetting pSVar3;
		Nullable<int> SVar4;
		int iVar5;
		TitanCustomSkinSlot pSVar6;
		int index;
		Nullable<int> local_48;
		Nullable<int> local_40;
		int local_38;
		int local_34;

		local_38 = head;
		local_34 = body;
		if (skinSet != null) {
			pSVar2 = skinSet.Slots;
			if ((pSVar2 == null) ||(__this = (List<object>)pSVar2._value, __this == null)) {
	label_05968f01: ;
				throw new NullReferenceException();
			}
			if (0 < __this._size) {
				index = 0;
				do {
					pSVar6 = __this.get_Item(index);
					if ((pSVar6 == null) ||(pSVar3 = pSVar6.Target, pSVar3 == null)) goto label_05968f01;
					iVar1 = pSVar3._value;
					if ((iVar1 == 0) || (iVar1 == 2 - (uint)ai)) {
						local_48.hasValue = false;
						local_48._1_3_ = 0;
						local_48.value = 0;
						local_48 = new Nullable<int>(local_34);
						pSVar6 = __this.get_Item(index);
						SVar4 = local_48;
						if ((pSVar6 == null) ||(pSVar3 = pSVar6.BodyModel, pSVar3 == null)) goto label_05968f01;
						iVar1 = pSVar3._value;
						local_40 = local_48;
						if (((iVar1 < 1) || ((ulong)SVar4.hasValue == 0)) ||(iVar5 = local_40.Value, iVar1 + -1 == iVar5)) {
							local_48.hasValue = false;
							local_48._1_3_ = 0;
							local_48.value = 0;
							local_48 = new Nullable<int>(local_38);
							pSVar6 = __this.get_Item(index);
							SVar4 = local_48;
							if ((pSVar6 == null) ||(pSVar3 = pSVar6.HeadModel, pSVar3 == null)) goto label_05968f01;
							iVar1 = pSVar3._value;
							local_40 = local_48;
							if (iVar1 < 1) {
								return index;
							}
							if ((ulong)SVar4.hasValue == 0) {
								return index;
							}
							iVar5 = local_40.Value;
							if (iVar1 + -1 == iVar5) {
								return index;
							}
						}
					}
					index = index + 1;
				} while (index < __this._size);
			}
		}
		return -1;
	}

	[Token(Token = "0x600185A")]
	[Address(RVA = "0x5868160", Offset = "0x5867160", VA = "0x5868160")]
	private static TitanCustomSkinSlot GetSlot(TitanCustomSkinSet skinSet, int slotIndex)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$GetSlot): 3 lines keep C-only constructs
		byte bVar1;
		ListSetting<TitanCustomSkinSlot> pSVar2;
		int iVar3;
		TitanCustomSkinSlot pSVar4;
		TitanCustomSkinSlot pSVar5;

		if (Il2CppMethodInitialized_07545968 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt) ;
			Il2CppMethodInitialized_07545968 = true;
		}
		if ((skinSet == null) || (slotIndex < 0)) {
			return null;
		}
		pSVar2 = skinSet.Slots;
		if (pSVar2 == null) {
	label_0596822d: ;
			throw new NullReferenceException();
		}
		iVar3 = pSVar2.GetCount();
		if (slotIndex < iVar3) {
			pSVar2 = skinSet.Slots;
			if (pSVar2 == null) goto label_0596822d;
			pSVar4 = (TitanCustomSkinSlot)pSVar2.GetItemAt(slotIndex);
			if (pSVar4 != null) {
				bVar1 = (typeof(TitanCustomSkinSlot)._2).typeHierarchyDepth;
				if ((pSVar4.klass._2).typeHierarchyDepth < bVar1) {
					return null;
				}
				if ((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(TitanCustomSkinSlot)) {
				}
				return pSVar5;
			}
		}
		return null;
	}

	[Token(Token = "0x600185B")]
	[Address(RVA = "0x5867E40", Offset = "0x5866E40", VA = "0x5867E40")]
	private static int PickSlotIndex(TitanCustomSkinSet skinSet, int? pinnedBody, int? pinnedHead, bool ai)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$PickSlotIndex): 2 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		ListSetting<TitanCustomSkinSlot> pSVar4;
		List<object> __this;
		IntSetting pSVar5;
		Object[] pSVar6;
		int iVar8;
		List<T> list;
		TitanCustomSkinSlot pSVar9;
		int iVar10;
		Nullable<int> local_50;
		int local_44;
		Nullable<int> local_40;
		Nullable<int> local_38;

		local_40 = pinnedHead;
		local_38 = pinnedBody;
		if ((skinSet != null) &&(pSVar4 = skinSet.Slots, pSVar4 != null)) {
			__this = (List<object>)pSVar4._value;
			list = new List<int>();
			if (__this != null) {
				if (0 < __this._size) {
					local_44 = 2 - (uint)ai;
					iVar10 = 0;
					do {
						pSVar9 = __this.get_Item(iVar10);
						if ((pSVar9 == null) ||(pSVar5 = pSVar9.Target, pSVar5 == null)) goto label_0596815b;
						iVar2 = pSVar5._value;
						if ((iVar2 == 0) || (iVar2 == local_44)) {
							pSVar9 = __this.get_Item(iVar10);
							if ((pSVar9 == null) ||(pSVar5 = pSVar9.BodyModel, pSVar5 == null)) goto label_0596815b;
							iVar2 = pSVar5._value;
							local_50 = local_38;
							if ((local_38.hasValue != false) && (0 < iVar2)) {
								iVar8 = local_50.Value;
								if (iVar2 + -1 != iVar8) goto label_05967f70;
							}
							pSVar9 = __this.get_Item(iVar10);
							if ((pSVar9 == null) ||(pSVar5 = pSVar9.HeadModel, pSVar5 == null)) goto label_0596815b;
							iVar2 = pSVar5._value;
							local_50 = local_40;
							if ((local_40.hasValue != false) && (0 < iVar2)) {
								iVar8 = local_50.Value;
								if (iVar2 + -1 != iVar8) goto label_05967f70;
							}
							if (list == null) goto label_0596815b;
							piVar1 = &list._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = list._items;
							if (pSVar6 == null) goto label_0596815b;
							uVar3 = list._size;
							if (uVar3 < (uint)pSVar6.Length) {
								list._size = uVar3 + 1;
								*(int)((long)pSVar6.m_Items + (long)(int)uVar3 * 4) = iVar10;
							}
							else {
								list.AddWithResize(iVar10);
							}
						}
	label_05967f70: ;
						iVar10 = iVar10 + 1;
					} while (iVar10 < __this._size);
				}
				if (list != null) {
					if (list._size == 0) {
						iVar10 = -1;
					}
					else {
						iVar10 = MiscExtensions.GetRandomItem<int>(list);
					}
					return iVar10;
				}
			}
		}
	label_0596815b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x58687F0", Offset = "0x58677F0", VA = "0x58687F0")]
	private static bool MatchesTarget(TitanCustomSkinSlot slot, bool ai)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$MatchesTarget): clean
		int iVar1;
		IntSetting pSVar2;

		if ((slot == null) ||(pSVar2 = slot.Target, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._value;
		return iVar1 == 2 - (uint)ai || iVar1 == 0;
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x5868240", Offset = "0x5867240", VA = "0x5868240")]
	private static bool IsEligible(int? pinned, int model)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$IsEligible): clean
		int iVar1;
		bool bVar2;
		Nullable<int> SStack_18;

		SStack_18 = pinned;
		if ((0 < model) && ((ulong)pinned.hasValue != 0)) {
			iVar1 = SStack_18.Value;
			bVar2 = model + -1 == iVar1;
		}
		return bVar2;
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x58682B0", Offset = "0x58672B0", VA = "0x58682B0")]
	private static int ResolveModel(int model, int fallback, int count)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinPicker.c (CustomSkins.TitanSkinPicker$$ResolveModel): clean
		int iVar1;

		iVar1 = model + -1;
		if (count < model) {
		}
		if (model < 1) {
		}
		return iVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomSkins/TitanSkinPicker.c.

	// CustomSkins.TitanSkinPicker.<>c__DisplayClass1_0$$.ctor: clean
	private void c__DisplayClass1_0__ctor()
	{
		base();
		return;
	}

	// CustomSkins.TitanSkinPicker.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new TitanSkinPicker.c();
		TitanSkinPicker.c.__9 = (TitanSkinPicker.c)__this;
		return;
	}

	// CustomSkins.TitanSkinPicker.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomSkins.TitanSkinPicker.<>c$$<GetSkinUrls>b__1_2: clean
	private String c__GetSkinUrls_b__1_2(TitanCustomSkinSlot s)
	{
		StringSetting pSVar1;

		if ((s == null) ||(pSVar1 = s.Eye, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	// CustomSkins.TitanSkinPicker.<>c$$<GetSkinUrls>b__1_3: clean
	private String c__GetSkinUrls_b__1_3(TitanCustomSkinSlot s)
	{
		StringSetting pSVar1;

		if ((s == null) ||(pSVar1 = s.Hair, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	// CustomSkins.TitanSkinPicker.<>c__DisplayClass1_0$$<GetSkinUrls>b__0: 3 lines keep C-only constructs
	private String c__DisplayClass1_0__GetSkinUrls_b__0(TitanCustomSkinSlot s)
	{
		int iVar1;
		IntSetting pSVar2;
		StringSetting pSVar3;
		Nullable<int> SVar4;
		int iVar5;
		String* ppSVar6;
		Nullable<int> SStack_28;
		Nullable<int> SStack_20;

		SStack_28.hasValue = false;
		SStack_28._1_3_ = 0;
		SStack_28.value = 0;
		SStack_28 = new Nullable<int>(this.body);
		SVar4 = SStack_28;
		if ((s != null) &&(pSVar2 = s.BodyModel, pSVar2 != null)) {
			iVar1 = pSVar2._value;
			SStack_20 = SStack_28;
			if ((0 < iVar1) && ((ulong)SVar4.hasValue != 0)) {
				iVar5 = SStack_20.Value;
				if (iVar1 + -1 != iVar5) {
					ppSVar6 = *(String**)(g_data_07556758 + 0xb8);
					goto label_05969103;
				}
			}
			pSVar3 = s.Body;
			if (pSVar3 != null) {
				ppSVar6 = &pSVar3._value;
	label_05969103: ;
				return *ppSVar6;
			}
		}
		throw new NullReferenceException();
	}

	// CustomSkins.TitanSkinPicker.<>c__DisplayClass1_0$$<GetSkinUrls>b__1: 3 lines keep C-only constructs
	private String c__DisplayClass1_0__GetSkinUrls_b__1(TitanCustomSkinSlot s)
	{
		int iVar1;
		IntSetting pSVar2;
		StringSetting pSVar3;
		Nullable<int> SVar4;
		int iVar5;
		String* ppSVar6;
		Nullable<int> SStack_28;
		Nullable<int> SStack_20;

		SStack_28.hasValue = false;
		SStack_28._1_3_ = 0;
		SStack_28.value = 0;
		SStack_28 = new Nullable<int>(this.head);
		SVar4 = SStack_28;
		if ((s != null) &&(pSVar2 = s.HeadModel, pSVar2 != null)) {
			iVar1 = pSVar2._value;
			SStack_20 = SStack_28;
			if ((0 < iVar1) && ((ulong)SVar4.hasValue != 0)) {
				iVar5 = SStack_20.Value;
				if (iVar1 + -1 != iVar5) {
					ppSVar6 = *(String**)(g_data_07556758 + 0xb8);
					goto label_05969213;
				}
			}
			pSVar3 = s.Head;
			if (pSVar3 != null) {
				ppSVar6 = &pSVar3._value;
	label_05969213: ;
				return *ppSVar6;
			}
		}
		throw new NullReferenceException();
	}
}
