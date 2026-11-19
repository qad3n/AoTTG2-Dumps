// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetMerger
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/PresetMerger.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B6")]
public static class PresetMerger
{
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x5A3BD80", Offset = "0x5A3AD80", VA = "0x5A3BD80")]
	public static PresetDefinition Merge(PresetDefinition basePreset, PresetDefinition child)
	{
		// Lifted from source/cpp/Settings/PresetMerger.c (Settings.PresetMerger$$Merge): 5 lines keep C-only constructs
		PresetDefinition __this;
		List<UIRule> pSVar1;
		List<UIRule> pSVar2;
		String pSVar3;
		Dictionary<string, List<string>> pSVar4;
		System_Func_string__UIRuleValueType__o typeResolver;

		__this = new PresetDefinition();
		if (child != null) {
			pSVar3 = child.Category;
			if (pSVar3 == null) {
				if (basePreset == null) goto label_05b3bf2c;
				pSVar3 = basePreset.Category;
			}
			if (__this != null) {
				__this.Category = pSVar3;
				pSVar3 = child.SubCategory;
				if (pSVar3 == null) {
					if (basePreset == null) goto label_05b3bf2c;
					pSVar3 = basePreset.SubCategory;
				}
				__this.SubCategory = pSVar3;
				pSVar3 = child.Name;
				if (pSVar3 == null) {
					if (basePreset == null) goto label_05b3bf2c;
					pSVar3 = basePreset.Name;
				}
				__this.Name = pSVar3;
				pSVar4 = child.Variants;
				if (pSVar4 == null) {
					if (basePreset == null) goto label_05b3bf2c;
					pSVar4 = basePreset.Variants;
				}
				__this.Variants = pSVar4;
				typeResolver = (System_Func_string__UIRuleValueType__o)child.UISections;
				if (typeResolver == null) {
					if (basePreset == null) goto label_05b3bf2c;
					typeResolver = (System_Func_string__UIRuleValueType__o)basePreset.UISections;
					__this.UISections = (System_Collections_Generic_List_ExperienceUISection__o)typeResolver;
					pSVar1 = basePreset._uiRules;
				}
				else {
					__this.UISections = (System_Collections_Generic_List_ExperienceUISection__o)typeResolver;
					if (basePreset == null) goto label_05b3bf2c;
					pSVar1 = basePreset._uiRules;
				}
				if (pSVar1 == null) {
					pSVar1 = RuleParser.Parse((IEnumerable<string>)basePreset.UIRules, typeResolver);
					basePreset._uiRules = pSVar1;
					pSVar1 = basePreset._uiRules;
					pSVar2 = child._uiRules;
				}
				else {
					pSVar2 = child._uiRules;
				}
				if (pSVar2 == null) {
					pSVar2 = RuleParser.Parse((IEnumerable<string>)child.UIRules, null);
					child._uiRules = pSVar2;
					pSVar2 = child._uiRules;
				}
				pSVar1 = PresetMerger.MergeUIRuleLists(pSVar1, pSVar2);
				__this._uiRules = pSVar1;
				return __this;
			}
		}
	label_05b3bf2c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x5A3BF40", Offset = "0x5A3AF40", VA = "0x5A3BF40")]
	private static List<UIRule> MergeUIRuleLists(List<UIRule> baseRules, List<UIRule> childRules)
	{
		// Lifted from source/cpp/Settings/PresetMerger.c (Settings.PresetMerger$$MergeUIRuleLists): 20 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		object pIVar4;
		String pSVar5;
		UIRule[] pSVar6;
		System_Collections_Generic_List_Enumerator_object__o pSVar8;
		bool bVar9;
		List<UIRule> pSVar10;
		System_Func_TSource__TKey__o __this;
		Settings_PresetMerger___c_StaticFields pSVar11;
		Func<UIRule, UIRule> __this_00;
		System_Collections_Generic_Dictionary_TKey__TElement__o __this_01;
		String* ppSVar12;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_50 = new byte[16];
		UIRule local_40;
		List<UIRule> local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		if (baseRules == null) {
			if (childRules == null) {
				pSVar10 = new List<UIRule>();
				return pSVar10;
			}
			return childRules;
		}
		if (childRules == null) {
			return baseRules;
		}
		pSVar10 = new List<UIRule>();
		if ((typeof(PresetMerger.c)._2).cctor_finished_or_no_cctor == 0) {
			pSVar11 = typeof(PresetMerger.c).static_fields;
			__this = (System_Func_TSource__TKey__o)pSVar11.__9__1_0;
		}
		else {
			pSVar11 = typeof(PresetMerger.c).static_fields;
			__this = (System_Func_TSource__TKey__o)pSVar11.__9__1_0;
		}
		if (__this == null) {
			if (*(uint)((long)typeof(PresetMerger.c) + 0xe4) == 0) {
				pSVar11 = typeof(PresetMerger.c).static_fields;
			}
			pIVar4 = (object)pSVar11.__9;
			__this = new Func<UIRule, string>(pIVar4, (intptr_t)MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_0) ;
			pSVar11 = typeof(PresetMerger.c).static_fields;
			pSVar11.__9__1_0 = (Func<UIRule, string>)__this;
			uVar2 = (typeof(PresetMerger.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = *(uint)((long)typeof(PresetMerger.c) + 0xe4);
		}
		if (uVar2 == 0) {
			pSVar11 = typeof(PresetMerger.c).static_fields;
			__this_00 = pSVar11.__9__1_1;
		}
		else {
			pSVar11 = typeof(PresetMerger.c).static_fields;
			__this_00 = pSVar11.__9__1_1;
		}
		if (__this_00 == null) {
			if (((typeof(PresetMerger.c))._2).cctor_finished_or_no_cctor == 0) {
				pSVar11 = typeof(PresetMerger.c).static_fields;
			}
			pIVar4 = (object)pSVar11.__9;
			__this_00 = new Func<UIRule, UIRule>(pIVar4, (intptr_t)MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_1) ;
			pSVar11 = typeof(PresetMerger.c).static_fields;
			pSVar11.__9__1_1 = __this_00;
		}
		local_38 = childRules;
		__this_01 = Enumerable.ToDictionary<UIRule, string, UIRule>((System_Collections_Generic_IEnumerable_TSource__o)childRules, __this, (System_Func_TSource__TElement__o)__this_00);
		local_50.GetEnumerator((List<object>)baseRules);
		local_68._current = (object)local_40;
		local_68._list = (List<T>)local_50._0_8_;
		local_68._index = local_50._8_4_;
		local_68._version = local_50._12_4_;
		local_50._0_8_ = null;
		local_50._8_8_ = &local_68;
		pSVar8 = &local_68;
		if (pSVar10 == null) {
			while (true) {
				local_50._8_8_ = pSVar8;
				bVar9 = local_68.MoveNext();
				pIVar4 = local_68._current;
				if (!(bVar9)) break;
				if ((UIRule)local_68._current == null) {
	label_05b3c491: ;
					throw new NullReferenceException();
				}
				pSVar5 = ((UIRule)((long)local_68._current + 0x10)).SettingId;
				bVar9 = String.Equals(pSVar5, "general.Weather", 5);
				ppSVar12 = &"general.Weather";
				if (!bVar9) {
					bVar9 = String.Equals(pSVar5, "general.WeatherIndex", 5);
					if (bVar9) {
						ppSVar12 = &"general.Weather";
					}
					else {
						ppSVar12 = &((UIRule)((long)pIVar4 + 0x10)).SettingId;
					}
				}
				if (__this_01 == null) {
	label_05b3c496: ;
					throw new NullReferenceException();
				}
				bVar9 = __this_01.ContainsKey((object)*ppSVar12);
				pSVar8 = (System_Collections_Generic_List_Enumerator_object__o)local_50._8_8_;
				if (!bVar9) {
	label_05b3c449: ;
					throw new NullReferenceException();
				}
			}
		}
		else {
			while (true) {
				bVar9 = local_68.MoveNext();
				pIVar4 = local_68._current;
				if (!(bVar9)) break;
				if ((UIRule)local_68._current == null) goto label_05b3c491;
				pSVar5 = ((UIRule)((long)local_68._current + 0x10)).SettingId;
				bVar9 = String.Equals(pSVar5, "general.Weather", 5);
				ppSVar12 = &"general.Weather";
				if (!bVar9) {
					bVar9 = String.Equals(pSVar5, "general.WeatherIndex", 5);
					if (bVar9) {
						ppSVar12 = &"general.Weather";
					}
					else {
						ppSVar12 = &((UIRule)((long)pIVar4 + 0x10)).SettingId;
					}
				}
				if (__this_01 == null) goto label_05b3c496;
				bVar9 = __this_01.ContainsKey((object)*ppSVar12);
				if (!bVar9) {
					piVar1 = &pSVar10._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = pSVar10._items;
					if (pSVar6 == null) goto label_05b3c449;
					uVar3 = pSVar10._size;
					if (uVar3 < (uint)pSVar6.Length) {
						pSVar10._size = uVar3 + 1;
						pSVar6[(int)uVar3] = (UIRule)pIVar4;
					}
					else {
						pSVar10.AddWithResize(pIVar4);
					}
				}
			}
		}
		local_68.Dispose();
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pSVar10.AddRange((IEnumerable<T>)local_38);
		return pSVar10;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/PresetMerger.c.

	// Settings.PresetMerger.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new PresetMerger.c();
		PresetMerger.c.__9 = (PresetMerger.c)__this;
		return;
	}

	// Settings.PresetMerger.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Settings.PresetMerger.<>c$$<MergeUIRuleLists>b__1_0: 2 lines keep C-only constructs
	private String c__MergeUIRuleLists_b__1_0(UIRule r)
	{
		String a;
		bool bVar1;
		String* ppSVar2;

		if (r == null) {
			throw new NullReferenceException();
		}
		a = r.SettingId;
		ppSVar2 = &"general.Weather";
		bVar1 = String.Equals(a, "general.Weather", 5);
		if (!bVar1) {
			bVar1 = String.Equals(a, "general.WeatherIndex", 5);
			if (bVar1) {
				ppSVar2 = &"general.Weather";
			}
			else {
				ppSVar2 = &r.SettingId;
			}
		}
		return *ppSVar2;
	}

	// Settings.PresetMerger.<>c$$<MergeUIRuleLists>b__1_1: clean
	private UIRule c__MergeUIRuleLists_b__1_1(UIRule r)
	{
		return r;
	}
}
