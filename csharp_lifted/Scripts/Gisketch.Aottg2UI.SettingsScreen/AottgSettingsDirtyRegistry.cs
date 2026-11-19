// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000184")]
internal static class AottgSettingsDirtyRegistry
{
	[Token(Token = "0x2000185")]
	private sealed class Entry
	{
		[Token(Token = "0x40008B3")]
		[FieldOffset(Offset = "0x10")]
		public readonly string RowId;

		[Token(Token = "0x40008B4")]
		[FieldOffset(Offset = "0x18")]
		public readonly int Order;

		[Token(Token = "0x40008B5")]
		[FieldOffset(Offset = "0x20")]
		public string Path;

		[Token(Token = "0x40008B6")]
		[FieldOffset(Offset = "0x28")]
		public string Baseline;

		[Token(Token = "0x40008B7")]
		[FieldOffset(Offset = "0x30")]
		public Func<string> Value;

		[Token(Token = "0x600087D")]
		[Address(RVA = "0x5D3C1A0", Offset = "0x5D3B1A0", VA = "0x5D3C1A0")]
		public Entry(string rowId, int order)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.Entry$$.ctor): clean
			base();
			this.RowId = rowId;
			this.Order = order;
			return;
		}
	}

	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Entry> Entries;

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x8")]
	private static int _nextOrder;

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x5D3BFF0", Offset = "0x5D3AFF0", VA = "0x5D3BFF0")]
	public static void Register(string rowId, string path, Func<string> value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$Register): 2 lines keep C-only constructs
		int iVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		AottgSettingsDirtyRegistry.Entry __this;
		String pSVar4;
		AottgSettingsDirtyRegistry.Entry local_38;

		local_38 = null;
		bVar3 = String.IsNullOrEmpty(rowId);
		if ((value == null) || (bVar3)) {
			return;
		}
		pSVar2 = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
		if (pSVar2 != null) {
			bVar3 = pSVar2.TryGetValue((object)rowId, (object*)&local_38);
			if (!bVar3) {
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				iVar1 = AottgSettingsDirtyRegistry._nextOrder;
				AottgSettingsDirtyRegistry._nextOrder = iVar1 + 1;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsDirtyRegistry.Entry));
				__this = new Object();
				__this.RowId = rowId;
				__this.Order = iVar1;
				local_38 = __this;
				pSVar4 = AottgSettingsDirtyRegistry.SafeValue(value);
				__this.Baseline = pSVar4;
				pSVar2 = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
				if (pSVar2 == null) goto label_05e3c199;
				pSVar2.set_Item((object)rowId, (object)local_38);
			}
			if (local_38 != null) {
				if (path != null) {
					rowId = path;
				}
				local_38.Path = rowId;
				if (local_38 != null) {
					local_38.Value = value;
					return;
				}
			}
		}
	label_05e3c199: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x5D3C280", Offset = "0x5D3B280", VA = "0x5D3C280")]
	public static void CaptureBaseline(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$CaptureBaseline): 13 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this;
		Il2CppClass pIVar2;
		GisketchUIState __this_00;
		object pIVar3;
		bool bVar4;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		String pSVar5;
		MethodInfo pMVar6;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		if (Il2CppMethodInitialized_075485b4 == false) {
			Il2CppMethodInitialized_075485b4 = true;
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
		}
		else {
			__this = *(Dictionary<object, object>*)(typeof(AottgSettingsDirtyRegistry)). static_fields;
		}
		if ((__this == null) ||(__this_01 = __this.Values, __this_01 == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator(__this_01);
		local_68._currentValue = local_38;
		local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		if (root == null) {
			while (true) {
				pMVar6 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288;
				bVar4 = local_68.MoveNext();
				pIVar3 = local_68._currentValue;
				if (!(bVar4)) break;
				if (local_68._currentValue == null) goto label_05e3c528;
				pIVar2 = local_68._currentValue[3].klass;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar5 = AottgSettingsDirtyRegistry.SafeValue((Func<string>)pIVar2);
				pIVar3[2].monitor = pSVar5;
			}
		}
		else {
			while (true) {
				pMVar6 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288;
				bVar4 = local_68.MoveNext();
				pIVar3 = local_68._currentValue;
				if (!(bVar4)) break;
				if (local_68._currentValue == null) {
	label_05e3c528: ;
					throw new NullReferenceException();
				}
				pIVar2 = local_68._currentValue[3].klass;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar5 = AottgSettingsDirtyRegistry.SafeValue((Func<string>)pIVar2);
				pIVar3[2].monitor = pSVar5;
				__this_00 = root._State_k__BackingField;
				if (__this_00 != null) {
					pIVar2 = pIVar3[1].klass;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar5 = AottgSettingsStateKeys.DirtyRow((String)pIVar2);
					__this_00.SetBool(pSVar5, false);
				}
			}
		}
		pMVar6 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist;
		local_68.Dispose();
		AottgSettingsDirtyRegistry.SetSummaryState(root);
		return;
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x5D3C720", Offset = "0x5D3B720", VA = "0x5D3C720")]
	public static void SyncRow(GisketchUIRoot root, string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SyncRow): 2 lines keep C-only constructs
		Dictionary<object, object> __this;
		Il2CppClass pIVar1;
		GisketchUIState __this_00;
		object pIVar2;
		bool bVar3;
		String a;
		object local_38;

		local_38 = null;
		bVar3 = String.IsNullOrEmpty(rowId);
		if (bVar3) {
			return;
		}
		__this = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
		if (__this == null) goto label_05e3c8e2;
		bVar3 = __this.TryGetValue((object)rowId, ref local_38);
		pIVar2 = local_38;
		if (!bVar3) {
			return;
		}
		if ((typeof(AottgSettingsDirtyRegistry)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075485ba != false) goto label_05e3c7e2;
	label_05e3c8b2: ;
			Il2CppMethodInitialized_075485ba = true;
			if (pIVar2 != null) goto label_05e3c7eb;
	label_05e3c8ce: ;
			bVar3 = false;
		}
		else {
			if (Il2CppMethodInitialized_075485ba == false) goto label_05e3c8b2;
	label_05e3c7e2: ;
			if (pIVar2 == null) goto label_05e3c8ce;
	label_05e3c7eb: ;
			pIVar1 = pIVar2[3].klass;
			a = AottgSettingsDirtyRegistry.SafeValue((Func<string>)pIVar1);
			rowId = pIVar2[2].monitor;
			bVar3 = String.Equals(a, rowId, 4);
			bVar3 = !bVar3;
		}
		if ((root != null) &&(__this_00 = root._State_k__BackingField, __this_00 != null)) {
			if (pIVar2 == null) {
	label_05e3c8e2: ;
				throw new NullReferenceException();
			}
			pIVar1 = pIVar2[1].klass;
			rowId = AottgSettingsStateKeys.DirtyRow((String)pIVar1);
			__this_00.SetBool(rowId, bVar3);
		}
		AottgSettingsDirtyRegistry.SetSummaryState(root);
		return;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x5D3C970", Offset = "0x5D3B970", VA = "0x5D3C970")]
	public static void SyncAll(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SyncAll): 13 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this;
		Il2CppClass pIVar2;
		GisketchUIState __this_00;
		object pIVar3;
		bool bVar4;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		String pSVar5;
		MethodInfo pMVar6;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		if (Il2CppMethodInitialized_075485b6 == false) {
			Il2CppMethodInitialized_075485b6 = true;
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
		}
		else {
			__this = *(Dictionary<object, object>*)(typeof(AottgSettingsDirtyRegistry)). static_fields;
		}
		if ((__this == null) ||(__this_01 = __this.Values, __this_01 == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator(__this_01);
		local_68._currentValue = local_38;
		local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		if (root == null) {
			while (true) {
				pMVar6 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288;
				bVar4 = local_68.MoveNext();
				pIVar3 = local_68._currentValue;
				if (!(bVar4)) break;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				if (pIVar3 != null) {
					pIVar2 = pIVar3[3].klass;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar5 = AottgSettingsDirtyRegistry.SafeValue((Func<string>)pIVar2);
					String.Equals(pSVar5, pIVar3[2].monitor, 4);
				}
			}
		}
		else {
			while (true) {
				pMVar6 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288;
				bVar4 = local_68.MoveNext();
				pIVar3 = local_68._currentValue;
				if (!(bVar4)) break;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				if (pIVar3 == null) {
					bVar4 = false;
				}
				else {
					pIVar2 = pIVar3[3].klass;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar5 = AottgSettingsDirtyRegistry.SafeValue((Func<string>)pIVar2);
					bVar4 = String.Equals(pSVar5, pIVar3[2].monitor, 4);
					bVar4 = !bVar4;
				}
				__this_00 = root._State_k__BackingField;
				if (__this_00 != null) {
					if (pIVar3 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar3[1].klass;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar5 = AottgSettingsStateKeys.DirtyRow((String)pIVar2);
					__this_00.SetBool(pSVar5, bVar4);
				}
			}
		}
		pMVar6 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist;
		local_68.Dispose();
		AottgSettingsDirtyRegistry.SetSummaryState(root);
		return;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x5D3CD10", Offset = "0x5D3BD10", VA = "0x5D3CD10")]
	public static bool HasDirty()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$HasDirty): 5 lines keep C-only constructs
		Dictionary<object, object> __this;
		Il2CppClass value;
		object pIVar1;
		bool bVar2;
		bool bVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		String a;
		int iVar4;
		MethodInfo method_00;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		byte local_38;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentValue = null;
		__this = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
		if (__this != null) {
			__this_00 = __this.Values;
			if (__this_00 != null) {
				local_58 = __this_00.GetEnumerator();
				local_38 = (byte)&local_58;
				do {
					do {
						method_00 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288 ;
						bVar2 = local_58.MoveNext();
						pIVar1 = local_58._currentValue;
						if (!bVar2) {
							iVar4 = 5;
							goto label_05e3ce86;
						}
						if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
					} while (pIVar1 == null);
					value = pIVar1[3].klass;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					a = AottgSettingsDirtyRegistry.SafeValue((Func<string>)value);
					bVar3 = String.Equals(a, pIVar1[2].monitor, 4);
				} while (bVar3);
				iVar4 = 4;
	label_05e3ce86: ;
				local_58.Dispose();
				return iVar4 == 4 && bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x5D3CF20", Offset = "0x5D3BF20", VA = "0x5D3CF20")]
	public static List<string> DirtyPaths()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyPaths): 18 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int capacity;
		Dictionary<object, object> __this;
		Func<string> pSVar3;
		AottgSettingsDirtyRegistry.Entry[] pGVar4;
		Il2CppClass item;
		String[] pSVar5;
		AottgSettingsDirtyRegistry.Entry pGVar6;
		byte puVar7;
		bool bVar8;
		List<AottgSettingsDirtyRegistry.Entry> __this_00;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		String pSVar9;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_StaticFields pGVar10;
		Comparison<T> comparison;
		List<string> __this_02;
		object pIVar11;
		int index;
		MethodInfo pMVar12;
		byte[] local_68 = new byte[8];
		AottgSettingsDirtyRegistry.Entry local_58;
		byte[] local_48 = new byte[16];
		AottgSettingsDirtyRegistry.Entry local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<AottgSettingsDirtyRegistry.Entry>));
		__this_00 = new List<object>();
		__this = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
		if ((__this != null) &&(__this_01 = __this.Values, __this_01 != null)) {
			local_48.GetEnumerator(__this_01);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = local_68;
			puVar7 = local_68;
			if (__this_00 == null) {
				do {
					do {
						local_48._8_8_ = puVar7;
						pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288 ;
						bVar8 = local_68.MoveNext();
						pGVar6 = local_58;
						if (!bVar8) goto label_05e3d25b;
						if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
						puVar7 = (byte)local_48._8_8_;
					} while (pGVar6 == null);
					pSVar3 = pGVar6.Value;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar9 = AottgSettingsDirtyRegistry.SafeValue(pSVar3);
					bVar8 = String.Equals(pSVar9, pGVar6.Baseline, 4);
					puVar7 = (byte)local_48._8_8_;
				} while (bVar8);
	label_05e3d256: ;
				throw new NullReferenceException();
			}
			while (true) {
				pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288;
				bVar8 = local_68.MoveNext();
				pGVar6 = local_58;
				if (!(bVar8)) break;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				if (pGVar6 != null) {
					pSVar3 = pGVar6.Value;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar9 = AottgSettingsDirtyRegistry.SafeValue(pSVar3);
					bVar8 = String.Equals(pSVar9, pGVar6.Baseline, 4);
					pMVar12 = MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Add;
					if (!bVar8) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pGVar4 = __this_00._items;
						if (pGVar4 == null) goto label_05e3d256;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pGVar4.Length) {
							__this_00._size = uVar2 + 1;
							pGVar4[(int)uVar2] = pGVar6;
						}
						else {
							__this_00.AddWithResize((object)pGVar6);
						}
					}
				}
			}
	label_05e3d25b: ;
			local_68.Dispose();
			if ((typeof(AottgSettingsDirtyRegistry.c)._2). cctor_finished_or_no_cctor == 0) {
				pGVar10 = typeof(AottgSettingsDirtyRegistry.c).static_fields;
				comparison = (Comparison<T>)pGVar10.__9__7_0;
			}
			else {
				pGVar10 = typeof(AottgSettingsDirtyRegistry.c).static_fields;
				comparison = (Comparison<T>)pGVar10.__9__7_0;
			}
			if (comparison == null) {
				if ((typeof(AottgSettingsDirtyRegistry.c)._2). cctor_finished_or_no_cctor == 0) {
					pGVar10 = typeof(AottgSettingsDirtyRegistry.c).static_fields;
				}
				pIVar11 = (object)pGVar10.__9;
				comparison = new Comparison<AottgSettingsDirtyRegistry.Entry>(pIVar11, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c_DirtyPaths_b__7_0);
				pGVar10 = typeof(AottgSettingsDirtyRegistry.c).static_fields;
				pGVar10.__9__7_0 = (Comparison<AottgSettingsDirtyRegistry.Entry>)comparison;
			}
			if (__this_00 != null) {
				__this_00.Sort(comparison);
				capacity = __this_00._size;
				__this_02 = new List<string>(capacity);
				if (0 < __this_00._size) {
					if (__this_02 == null) {
						__this_00.get_Item(0);
						goto label_05e3d428;
					}
					index = 0;
					do {
						while(true) {
							pIVar11 = __this_00.get_Item(index);
							pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (pIVar11 == null) goto label_05e3d428;
							item = pIVar11[2].klass;
							piVar1 = &__this_02._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_02._items;
							if (pSVar5 == null) goto label_05e3d428;
							uVar2 = __this_02._size;
							if ((uint)pSVar5.Length <= uVar2) break;
							__this_02._size = uVar2 + 1;
							pSVar5[(int)uVar2] = (String)item;
							index = index + 1;
							if (__this_00._size <= index) {
								return __this_02;
							}
						}
						__this_02.AddWithResize((object)item);
						index = index + 1;
					} while (index < __this_00._size);
				}
				return __this_02;
			}
		}
	label_05e3d428: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x5D3D4A0", Offset = "0x5D3C4A0", VA = "0x5D3D4A0")]
	public static int DirtyCount()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyCount): 5 lines keep C-only constructs
		Dictionary<object, object> __this;
		Il2CppClass value;
		object pIVar1;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		String a;
		MethodInfo method_00;
		int iVar3;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		byte local_38;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentValue = null;
		__this = (Dictionary<object, object>)AottgSettingsDirtyRegistry.Entries;
		if (__this != null) {
			__this_00 = __this.Values;
			if (__this_00 != null) {
				local_58 = __this_00.GetEnumerator();
				iVar3 = 0;
				local_38 = (byte)&local_58;
				while(true) {
					method_00 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288 ;
					bVar2 = local_58.MoveNext();
					pIVar1 = local_58._currentValue;
					if (!bVar2) break;
					if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					if (pIVar1 != null) {
						value = pIVar1[3].klass;
						if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
						a = AottgSettingsDirtyRegistry.SafeValue((Func<string>)value);
						bVar2 = String.Equals(a, pIVar1[2].monitor, 4);
						iVar3 = iVar3 + (uint)!bVar2;
					}
				}
				local_58.Dispose();
				return iVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x5D3D6A0", Offset = "0x5D3C6A0", VA = "0x5D3D6A0")]
	public static string DirtyStateKey(string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyStateKey): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x5D3C8F0", Offset = "0x5D3B8F0", VA = "0x5D3C8F0")]
	private static bool IsDirty(Entry entry)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$IsDirty): clean
		Func<string> value;
		bool bVar1;
		String a;

		if (entry == null) {
			return false;
		}
		value = entry.Value;
		a = AottgSettingsDirtyRegistry.SafeValue(value);
		bVar1 = String.Equals(a, entry.Baseline, 4);
		return !bVar1;
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x5D3C5A0", Offset = "0x5D3B5A0", VA = "0x5D3C5A0")]
	private static void SetRowState(GisketchUIRoot root, Entry entry, bool dirty)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SetRowState): clean
		GisketchUIState __this;
		String pSVar1;

		if ((root == null) ||(__this = root._State_k__BackingField, __this == null)) {
			return;
		}
		if (entry == null) {
			throw new NullReferenceException();
		}
		pSVar1 = entry.RowId;
		pSVar1 = AottgSettingsStateKeys.DirtyRow(pSVar1);
		__this.SetBool(pSVar1, dirty);
		return;
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x5D3C630", Offset = "0x5D3B630", VA = "0x5D3C630")]
	private static void SetSummaryState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SetSummaryState): 4 lines keep C-only constructs
		uint uVar1;
		GisketchUIState pGVar2;
		String value;
		Il2CppClass klass;
		int local_14;

		if (Il2CppMethodInitialized_075485bc == false) {
			Il2CppMethodInitialized_075485bc = true;
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsDirtyRegistry);
		}
		else {
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsDirtyRegistry);
		}
		typeof(AottgSettingsDirtyRegistry) =(AottgSettingsDirtyRegistry)klass;
		if (uVar1 == 0) {
			local_14 = AottgSettingsDirtyRegistry.DirtyCount();
		}
		else {
			local_14 = AottgSettingsDirtyRegistry.DirtyCount();
		}
		if ((root != null) &&(pGVar2 = root._State_k__BackingField, pGVar2 != null)) {
			value = local_14.ToString();
			pGVar2.Set("settings.dirty.count", value);
			pGVar2 = root._State_k__BackingField;
			if (pGVar2 != null) {
				pGVar2.SetBool("settings.dirty.hasDirty", 0 < local_14);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x5D3C1D0", Offset = "0x5D3B1D0", VA = "0x5D3C1D0")]
	private static string SafeValue(Func<string> value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SafeValue): clean
		String pSVar1;

		if (value != null) {
			pSVar1 = (String)(*(code)value.invoke_impl)(value.method_code,value.method);
			if (pSVar1 != null) {
				return pSVar1;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyRegistry.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$.cctor: 3 lines keep C-only constructs
	static AottgSettingsDirtyRegistry()
	{
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, AottgSettingsDirtyRegistry.Entry> __this;

		if (Il2CppMethodInitialized_075485bd == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_ctor) ;
			Il2CppMethodInitialized_075485bd = true;
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
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, AottgSettingsDirtyRegistry.Entry>));
		__this = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		AottgSettingsDirtyRegistry.Entries = __this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgSettingsDirtyRegistry.c();
		AottgSettingsDirtyRegistry.c.__9 =(AottgSettingsDirtyRegistry.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$<DirtyPaths>b__7_0: clean
	private int c__DirtyPaths_b__7_0(AottgSettingsDirtyRegistry.Entry a, AottgSettingsDirtyRegistry.Entry b)
	{
		int iVar1;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		return iVar1;
	}
}
