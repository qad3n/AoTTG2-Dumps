// ==================== AoTTG2 cross-reference ====================
// Type: Settings.RuleParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/RuleParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BB")]
public static class RuleParser
{
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x5A3A5E0", Offset = "0x5A395E0", VA = "0x5A3A5E0")]
	public static List<UIRule> Parse(IEnumerable<string> rawRules, [Optional] Func<string, UIRuleValueType> typeResolver)
	{
		// Lifted from source/cpp/Settings/RuleParser.c (Settings.RuleParser$$Parse): 52 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		IEnumerable<string> pSVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		UIRule[] pSVar5;
		sbyte cVar6;
		bool bVar7;
		bool bVar8;
		List<UIRule> __this;
		VirtualInvokeData pVVar9;
		object pIVar10;
		String pSVar11;
		String pSVar12;
		UIRule pSVar13;
		Match __this_00;
		GroupCollection pSVar14;
		Group pSVar15;
		String pSVar16;
		CultureInfo pSVar17;
		String[] pSVar18;
		Func<string, string> __this_01;
		Settings_RuleParser___c_StaticFields pSVar19;
		Func<string, bool> __this_02;
		System_Collections_Generic_IEnumerable_TSource__o source;
		List<string> pSVar20;
		Il2CppClass pIVar21;
		FormatException pSVar22;
		MethodInfo pMVar23;
		ulong uVar24;
		List<string>* targetAddress;
		long lVar25;
		float local_8c;
		String[] local_88;
		object local_80;
		float local_74;
		String local_70;
		String local_68;
		Nullable<float> local_60;
		Nullable<float> local_58;
		String local_50;
		object* local_38;

		local_80 = null;
		local_74 = 0.0;
		local_8c = 0.0;
		__this = new List<UIRule>();
		if (rawRules == null) {
			return __this;
		}
		pSVar3 = rawRules.klass;
		uVar24 = (ulong)(pSVar3._2).interface_offsets_count;
		pIVar10 = rawRules.Dispose();
		local_38 = &local_80;
	joined_r0x05b3a808: ;
		do {
			local_80 = pIVar10;
			if (pIVar10 == null) {
				throw new NullReferenceException();
			}
			pIVar21 = pIVar10.klass;
			uVar24 = (ulong)(pIVar21._2).interface_offsets_count;
			cVar6 = pIVar10.Dispose();
			pIVar10 = local_80;
			if (cVar6 == false) {
				if (local_80 == null) {
					return __this;
				}
				pIVar21 = local_80.klass;
				uVar24 = (ulong)(pIVar21._2).interface_offsets_count;
				if (uVar24 == 0) goto label_05b3b25f;
				pIVar4 = (pIVar21._1).interfaceOffsets;
				lVar25 = 0;
				goto label_05b3b250;
			}
			if (local_80 == null) {
				throw new NullReferenceException();
			}
			pIVar21 = local_80.klass;
			uVar24 = (ulong)(pIVar21._2).interface_offsets_count;
			pSVar11 = pIVar10.Dispose();
			if (pSVar11 == null) {
				pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
				pSVar22 = (FormatException)il2cpp_codegen_object_new(pIVar21);
				pSVar11 = il2cpp_codegen_get_runtime_metadata(&"Experience rule cannot be null.");
				pSVar22 = new FormatException(pSVar11);
				pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
				throw (object)pSVar22;
			}
			pSVar12 = pSVar11.Trim();
			bVar7 = String.IsNullOrWhiteSpace(pSVar12);
			pIVar10 = local_80;
		} while (bVar7);
		if (pSVar12 == null) {
			throw new NullReferenceException();
		}
		bVar7 = pSVar12.StartsWith("!");
		if (bVar7) {
			pSVar12 = pSVar12.Substring(1);
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			bVar7 = true;
		}
		else {
			bVar7 = false;
		}
		bVar8 = pSVar12.StartsWith("-");
		if (bVar8) {
			pSVar12 = pSVar12.Substring(1);
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			pSVar12 = pSVar12.Trim();
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			if (pSVar12._stringLength == 0) {
				pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Hide rule is missing a setting ID: ");
				pSVar11 = String.Concat(pSVar12, pSVar11);
				pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
				pSVar22 = (FormatException)il2cpp_codegen_object_new(pIVar21);
				pSVar22 = new FormatException(pSVar11);
				pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
				throw (object)pSVar22;
			}
			pSVar13 = new UIRule();
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar13.Type = 1;
			pSVar13.SettingId = pSVar12;
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar5 = __this._items;
				if (pSVar5 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar5.Length) {
						__this._size = uVar2 + 1;
						pSVar5[(int)uVar2] = pSVar13;
						pIVar10 = local_80;
					}
					else {
						__this.AddWithResize((object)pSVar13);
						pIVar10 = local_80;
					}
					goto joined_r0x05b3a808;
				}
			}
			throw new NullReferenceException();
		}
		bVar8 = pSVar12.StartsWith("+");
		if (bVar8) {
			pSVar12 = pSVar12.Substring(1);
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			pSVar12 = pSVar12.Trim();
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			if (pSVar12._stringLength == 0) {
				pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Show rule is missing a setting ID: ");
				pSVar11 = String.Concat(pSVar12, pSVar11);
				pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
				pSVar22 = (FormatException)il2cpp_codegen_object_new(pIVar21);
				pSVar22 = new FormatException(pSVar11);
				pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
				throw (object)pSVar22;
			}
			bVar8 = pSVar12.Contains("=");
			if (!bVar8) {
				pSVar13 = new UIRule();
				if (pSVar13 == null) {
					throw new NullReferenceException();
				}
				pSVar13.Type = 0;
				pSVar13.SettingId = pSVar12;
				if (__this != null) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this._items;
					if (pSVar5 != null) {
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this._size = uVar2 + 1;
							pSVar5[(int)uVar2] = pSVar13;
							pIVar10 = local_80;
						}
						else {
							__this.AddWithResize((object)pSVar13);
							pIVar10 = local_80;
						}
						goto joined_r0x05b3a808;
					}
				}
				throw new NullReferenceException();
			}
		}
		__this_00 = pSVar12.Match("^([^=]+)=([^\\[\\{]+)(?:\\[\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*-\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*\\])?(?:\\{([^\\}]+)\\})?$");
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar8 = __this_00.Success;
		if (!bVar8) {
			pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience rule: ");
			pSVar11 = String.Concat(pSVar12, pSVar11);
			pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
			pSVar22 = (FormatException)il2cpp_codegen_object_new(pIVar21);
			pSVar22 = new FormatException(pSVar11);
			pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
			throw (object)pSVar22;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar14 = __this_00.get_Groups();
		if (pSVar14 == null) {
			throw new NullReferenceException();
		}
		pSVar15 = pSVar14.get_Item(1);
		if (pSVar15 == null) {
			throw new NullReferenceException();
		}
		pSVar12 = pSVar15.Value;
		if (pSVar12 == null) {
			throw new NullReferenceException();
		}
		local_88 = (String[])pSVar12.Trim();
		pSVar14 = __this_00.get_Groups();
		if (pSVar14 == null) {
			throw new NullReferenceException();
		}
		pSVar15 = pSVar14.get_Item(2);
		if (pSVar15 == null) {
			throw new NullReferenceException();
		}
		pSVar12 = pSVar15.Value;
		if (pSVar12 == null) {
			throw new NullReferenceException();
		}
		pSVar12 = pSVar12.Trim();
		pSVar14 = __this_00.get_Groups();
		if (pSVar14 == null) {
			throw new NullReferenceException();
		}
		pSVar15 = pSVar14.get_Item(3);
		if (pSVar15 == null) {
			throw new NullReferenceException();
		}
		pSVar16 = pSVar15.Value;
		if (pSVar16 == null) {
			throw new NullReferenceException();
		}
		local_50 = pSVar16.Trim();
		pSVar14 = __this_00.get_Groups();
		if (pSVar14 == null) {
			throw new NullReferenceException();
		}
		pSVar15 = pSVar14.get_Item(4);
		if (pSVar15 == null) {
			throw new NullReferenceException();
		}
		pSVar16 = pSVar15.Value;
		if (pSVar16 == null) {
			throw new NullReferenceException();
		}
		local_70 = pSVar16.Trim();
		pSVar14 = __this_00.get_Groups();
		pSVar18 = local_88;
		if (pSVar14 == null) {
			throw new NullReferenceException();
		}
		pSVar15 = pSVar14.get_Item(5);
		if (pSVar15 == null) {
			throw new NullReferenceException();
		}
		pSVar16 = pSVar15.Value;
		if (pSVar16 == null) {
			throw new NullReferenceException();
		}
		local_68 = pSVar16.Trim();
		if (pSVar18 == null) {
			throw new NullReferenceException();
		}
		if (((String)&pSVar18.bounds)._stringLength != 0) {
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			if (pSVar12._stringLength != 0) {
				pSVar13 = new UIRule();
				if (pSVar13 == null) {
					throw new NullReferenceException();
				}
				pSVar13.SettingId = (String)local_88;
				pSVar13.DefaultValue = (object)pSVar12;
				pSVar12 = local_50;
				pSVar13.DisableEditing = bVar7;
				bVar7 = String.IsNullOrEmpty(local_50);
				if ((!bVar7) || (bVar7 = String.IsNullOrEmpty(local_70), !bVar7)) {
					pSVar17 = CultureInfo.InvariantCulture;
					bVar7 = Single.TryParse(pSVar12, 0xa7, (IFormatProvider)pSVar17, ref local_74);
					if (!bVar7) {
	label_05b3b3cd: ;
						pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience rule range: ");
						pSVar11 = String.Concat(pSVar12, pSVar11);
						pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
						pSVar22 = (FormatException)il2cpp_codegen_object_new(pIVar21);
						pSVar22 = new FormatException(pSVar11);
						pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
						throw (object)pSVar22;
					}
					pSVar17 = CultureInfo.InvariantCulture;
					bVar7 = Single.TryParse(local_70, 0xa7, (IFormatProvider)pSVar17, ref local_8c);
					if ((!bVar7) || (local_8c < local_74)) goto label_05b3b3cd;
					local_58.hasValue = false;
					local_58._1_3_ = 0;
					local_58.value = 0.0;
					local_58 = new Nullable<float>(local_74);
					pSVar13.Min = local_58;
					local_60.hasValue = false;
					local_60._1_3_ = 0;
					local_60.value = 0.0;
					local_60 = new Nullable<float>(local_8c);
					pSVar13.Max = local_60;
					pSVar13.Type = 4;
				}
				bVar7 = String.IsNullOrEmpty(local_68);
				if (!bVar7) {
					if (local_68 == null) {
						throw new NullReferenceException();
					}
					pSVar18 = local_68.Split(0x2c, 0);
					if ((typeof(RuleParser.c)._2).cctor_finished_or_no_cctor == 0) {
						pSVar19 = typeof(RuleParser.c).static_fields;
						__this_01 = pSVar19.__9__0_0;
					}
					else {
						pSVar19 = typeof(RuleParser.c).static_fields;
						__this_01 = pSVar19.__9__0_0;
					}
					if (__this_01 == null) {
						if (((typeof(RuleParser.c))._2).cctor_finished_or_no_cctor == 0) {
							pSVar19 = typeof(RuleParser.c).static_fields;
						}
						pIVar10 = (object)pSVar19.__9;
						local_88 = pSVar18;
						__this_01 = new Func<string, string>(pIVar10, (intptr_t)MethodInfo_Settings_RuleParser_c_Parse_b__0_0);
						pSVar19 = typeof(RuleParser.c).static_fields;
						pSVar19.__9__0_0 = __this_01;
						pSVar18 = local_88;
					}
					pSVar18 = (String[])Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar18, (System_Func_TSource__TResult__o)__this_01);
					if ((typeof(RuleParser.c)._2).cctor_finished_or_no_cctor == 0) {
						pSVar19 = typeof(RuleParser.c).static_fields;
						__this_02 = pSVar19.__9__0_1;
					}
					else {
						pSVar19 = typeof(RuleParser.c).static_fields;
						__this_02 = pSVar19.__9__0_1;
					}
					if (__this_02 == null) {
						if (((typeof(RuleParser.c))._2).cctor_finished_or_no_cctor == 0) {
							pSVar19 = typeof(RuleParser.c).static_fields;
						}
						pIVar10 = (object)pSVar19.__9;
						local_88 = pSVar18;
						__this_02 = new Func<string, bool>(pIVar10, (intptr_t)MethodInfo_Settings_RuleParser_c_Parse_b__0_1);
						pSVar19 = typeof(RuleParser.c).static_fields;
						pSVar19.__9__0_1 = __this_02;
						pSVar18 = local_88;
					}
					source = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar18, (System_Func_TSource__bool__o)__this_02);
					pSVar20 = (List<string>)Enumerable.ToList<string>(source);
					targetAddress = &pSVar13.AllowedValues;
					pSVar13.AllowedValues = pSVar20;
					pSVar20 = *targetAddress;
					if (pSVar20 == null) {
						throw new NullReferenceException();
					}
					if (pSVar20._size == 0) {
						pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Experience rule has no allowed values: ");
						pSVar11 = String.Concat(pSVar12, pSVar11);
						pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
						pSVar22 = (FormatException)il2cpp_codegen_object_new(pIVar21);
						pSVar22 = new FormatException(pSVar11);
						pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
						throw (object)pSVar22;
					}
					pSVar13.Type = 5;
				}
				if (((pSVar13.Min.hasValue == false) &&(pSVar13.Max.hasValue == false)) &&(pSVar13.AllowedValues == null)) {
					pSVar13.Type = 2;
				}
				if (__this != null) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this._items;
					if (pSVar5 != null) {
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this._size = uVar2 + 1;
							pSVar5[(int)uVar2] = pSVar13;
							pIVar10 = local_80;
						}
						else {
							__this.AddWithResize((object)pSVar13);
							pIVar10 = local_80;
						}
						goto joined_r0x05b3a808;
					}
				}
				throw new NullReferenceException();
			}
		}
		pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Experience rule is missing a setting ID or value: ");
		pSVar11 = String.Concat(pSVar12, pSVar11);
		pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
		pSVar22 = (FormatException)il2cpp_codegen_object_new(pIVar21);
		pSVar22 = new FormatException(pSVar11);
		pMVar23 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
		throw (object)pSVar22;
		while (true) {
			lVar25 = lVar25 + 0x10;
			if (!(uVar24 * 0x10 != lVar25)) break;
	label_05b3b250: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar25) == typeof(IDisposable)) {
				pVVar9 = (VirtualInvokeData)&pIVar21.vtable[*(int)((long)&pIVar4.offset + lVar25)].methodPtr;
				goto label_05b3b27d;
			}
		}
	label_05b3b25f: ;
	label_05b3b27d: ;
		pIVar10.Dispose();
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/RuleParser.c.

	// Settings.RuleParser.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new RuleParser.c();
		RuleParser.c.__9 = (RuleParser.c)__this;
		return;
	}

	// Settings.RuleParser.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Settings.RuleParser.<>c$$<Parse>b__0_0: clean
	private String c__Parse_b__0_0(String s)
	{
		String pSVar1;

		if (s == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	// Settings.RuleParser.<>c$$<Parse>b__0_1: clean
	private bool c__Parse_b__0_1(String s)
	{
		if (s == null) {
			throw new NullReferenceException();
		}
		return 0 < s._stringLength;
	}
}
