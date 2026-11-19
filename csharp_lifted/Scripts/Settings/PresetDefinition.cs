// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetDefinition
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/PresetDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Serializable]
[Token(Token = "0x20000B3")]
public class PresetDefinition
{
	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x10")]
	public string Category;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x18")]
	public string SubCategory;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x28")]
	public string Extends;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x30")]
	public List<string> UIRules;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x38")]
	public Dictionary<string, List<string>> Variants;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x40")]
	public List<ExperienceUISection> UISections;

	[NonSerialized]
	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x48")]
	private List<UIRule> _uiRules;

	[NonSerialized]
	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x50")]
	private UIRule _mapRule;

	[NonSerialized]
	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x58")]
	private UIRule _modeRule;

	[Token(Token = "0x170000A9")]
	public string DefaultVariant
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x5A39200", Offset = "0x5A38200", VA = "0x5A39200")]
		get
		{
			// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$get_DefaultVariant): 4 lines keep C-only constructs
			Dictionary<@object, @object> pSVar1;
			object @object;
			System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar2;
			Settings_PresetDefinition___c_StaticFields pSVar3;
			Func<string, bool> __this_00;
			String pSVar4;

			pSVar1 = (Dictionary<@object, @object>)this.Variants;
			if (pSVar1 != null) {
				pSVar2 = pSVar1.Keys;
				if ((typeof(PresetDefinition.c)._2).cctor_finished_or_no_cctor == 0) {
					pSVar3 = typeof(PresetDefinition.c).static_fields;
					__this_00 = pSVar3.__9__8_0;
				}
				else {
					pSVar3 = typeof(PresetDefinition.c).static_fields;
					__this_00 = pSVar3.__9__8_0;
				}
				if (__this_00 == null) {
					if (((typeof(PresetDefinition.c))._2).cctor_finished_or_no_cctor == 0) {
						pSVar3 = typeof(PresetDefinition.c).static_fields;
					}
					@object = (object)pSVar3.__9;
					__this_00 = new Func<string, bool>(@object, (intptr_t)MethodInfo_Settings_PresetDefinition_c_get_DefaultVariant_b__8_0);
					pSVar3 = typeof(PresetDefinition.c).static_fields;
					pSVar3.__9__8_0 = __this_00;
				}
				pSVar4 = Enumerable.FirstOrDefault<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__bool__o)__this_00) ;
				if (pSVar4 != null) {
					return pSVar4;
				}
				pSVar1 = (Dictionary<@object, @object>)this.Variants;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar2 = pSVar1.Keys;
				pSVar4 = Enumerable.FirstOrDefault<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2);
				if (pSVar4 != null) {
					return pSVar4;
				}
			}
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x170000AA")]
	public List<UIRule> UIRulesObject
	{
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x5A3B780", Offset = "0x5A3A780", VA = "0x5A3B780")]
		get
		{
			// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$get_UIRulesObject): 1 lines keep C-only constructs
			List<UIRule> pSVar1;

			pSVar1 = this._uiRules;
			if (pSVar1 == null) {
				pSVar1 = RuleParser.Parse((IEnumerable<string>)this.UIRules, (System_Func_string__UIRuleValueType__o)method);
				this._uiRules = pSVar1;
				return this._uiRules;
			}
			return pSVar1;
		}
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x5A3B7C0", Offset = "0x5A3A7C0", VA = "0x5A3B7C0")]
		set
		{
			// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$set_UIRulesObject): clean
			this._uiRules = value;
			return;
		}
	}

	[Token(Token = "0x170000AB")]
	public UIRule MapRule
	{
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x5A3B7D0", Offset = "0x5A3A7D0", VA = "0x5A3B7D0")]
		get
		{
			// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$get_MapRule): 5 lines keep C-only constructs
			object pIVar1;
			bool bVar2;
			List<UIRule> pSVar3;
			UIRule pSVar4;
			UIRule* targetAddress;
			System_Collections_Generic_List_Enumerator_T__o local_58;
			byte local_30;

			local_58._list = null;
			local_58._index = 0;
			local_58._version = 0;
			local_58._current = null;
			pSVar4 = this._mapRule;
			if (pSVar4 == null) {
				pSVar3 = this._uiRules;
				if (pSVar3 == null) {
					pSVar3 = RuleParser.Parse((IEnumerable<string>)this.UIRules, null);
					this._uiRules = pSVar3;
					pSVar3 = this._uiRules;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
				}
				targetAddress = &this._mapRule;
				local_58 = pSVar3.GetEnumerator();
				local_30 = (byte)&local_58;
				while(true) {
					bVar2 = local_58.MoveNext();
					pIVar1 = local_58._current;
					if (!bVar2) break;
					if ((UIRule)local_58._current == null) {
						throw new NullReferenceException();
					}
					bVar2 = (((UIRule)((long)local_58._current + 0x10)).SettingId == "general.MapName");
					if (bVar2) {
						*targetAddress = (UIRule)pIVar1;
					}
				}
				local_58.Dispose();
				pSVar4 = *targetAddress;
			}
			return pSVar4;
		}
	}

	[Token(Token = "0x170000AC")]
	public UIRule ModeRule
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x5A3B980", Offset = "0x5A3A980", VA = "0x5A3B980")]
		get
		{
			// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$get_ModeRule): 5 lines keep C-only constructs
			object pIVar1;
			bool bVar2;
			List<UIRule> pSVar3;
			UIRule pSVar4;
			UIRule* targetAddress;
			System_Collections_Generic_List_Enumerator_T__o local_58;
			byte local_30;

			local_58._list = null;
			local_58._index = 0;
			local_58._version = 0;
			local_58._current = null;
			pSVar4 = this._modeRule;
			if (pSVar4 == null) {
				pSVar3 = this._uiRules;
				if (pSVar3 == null) {
					pSVar3 = RuleParser.Parse((IEnumerable<string>)this.UIRules, null);
					this._uiRules = pSVar3;
					pSVar3 = this._uiRules;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
				}
				targetAddress = &this._modeRule;
				local_58 = pSVar3.GetEnumerator();
				local_30 = (byte)&local_58;
				while(true) {
					bVar2 = local_58.MoveNext();
					pIVar1 = local_58._current;
					if (!bVar2) break;
					if ((UIRule)local_58._current == null) {
						throw new NullReferenceException();
					}
					bVar2 = (((UIRule)((long)local_58._current + 0x10)).SettingId == "general.GameMode");
					if (bVar2) {
						*targetAddress = (UIRule)pIVar1;
					}
				}
				local_58.Dispose();
				pSVar4 = *targetAddress;
			}
			return pSVar4;
		}
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x5A393A0", Offset = "0x5A383A0", VA = "0x5A393A0")]
	public static PresetDefinition FromJson(string json)
	{
		// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$FromJson): 5 lines keep C-only constructs
		PresetDefinition pSVar1;
		JSONNode experience;
		Dictionary<string, List<string>> pSVar2;
		Il2CppClass klass;
		InvalidDataException __this;
		String message;
		MethodInfo pMVar3;

		pSVar1 = JsonUtility.FromJson<PresetDefinition>(json) ;
		if (pSVar1 == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidDataException));
			__this = (InvalidDataException)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Experience resource is invalid.");
			__this = new InvalidDataException(message);
			pMVar3 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_FromJson);
			throw (object)__this;
		}
		experience = JSON.Parse(json);
		pSVar2 = PresetDefinition.ReadVariants(experience);
		pSVar1.Variants = pSVar2;
		return pSVar1;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x5A39460", Offset = "0x5A38460", VA = "0x5A39460")]
	internal static Dictionary<string, List<string>> ReadVariants(JSONNode experience)
	{
		// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$ReadVariants): 72 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		OrdinalIgnoreCaseComparer comparer;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		bool bVar5;
		sbyte cVar6;
		JSONNode pSVar7;
		Dictionary<string, List<string>> __this;
		object pIVar8;
		VirtualInvokeData pVVar9;
		List<string> __this_00;
		String pSVar10;
		HashSet<string> __this_01;
		List<UIRule> __this_02;
		FormatException __this_03;
		Il2CppClass pIVar11;
		String[] pSVar12;
		String pSVar13;
		InvalidDataException pSVar14;
		MethodInfo pMVar15;
		String str2;
		ulong uVar16;
		long plVar17;
		System_Func_string__UIRuleValueType__o typeResolver;
		long lVar18;
		byte[] auVar19 = new byte[16];
		object local_98;
		object local_90;
		JSONNode local_88;
		byte[] local_80 = new byte[16];
		object local_70;
		byte[] local_68 = new byte[8];
		object local_58;
		String local_48;
		object* local_38;

		local_90 = null;
		local_98 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		if (experience == null) goto label_05b3a212;
		bVar5 = experience.HasKey("Variants");
		if (!bVar5) {
			return null;
		}
		pSVar7 = experience.get_Item("Variants");
		if (pSVar7 == null) goto label_05b3a212;
		bVar5 = pSVar7.get_IsObject();
		if (!bVar5) {
			pSVar13 = il2cpp_codegen_get_runtime_metadata(&"Name");
			pSVar7 = experience.get_Item(pSVar13);
			pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(JSONNode));
			pSVar13 = ((JSONNode)pSVar7);
			pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Variants must be an object in experience ");
			str2 = il2cpp_codegen_get_runtime_metadata(&".");
			pSVar13 = String.Concat(pSVar10, pSVar13, str2);
			pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidDataException));
			pSVar14 = (InvalidDataException)il2cpp_codegen_object_new(pIVar11);
			pSVar14 = new InvalidDataException(pSVar13);
			pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
			throw (object)pSVar14;
		}
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 != false) goto label_05b3965e;
	label_05b39728: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 == false) goto label_05b39728;
	label_05b3965e: ;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new Dictionary<string, List<string>>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		if ((pSVar7 != null) &&(pIVar8 = (object)pSVar7.Linq, pIVar8 != null)) {
			pIVar11 = pIVar8.klass;
			uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
			local_88 = experience;
			local_90 = pIVar8.Dispose();
			local_38 = &local_90;
			do {
				pIVar8 = local_90;
				if (local_90 == null) {
					throw new NullReferenceException();
				}
				pIVar11 = local_90.klass;
				uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
				bVar5 = pIVar8.Dispose();
				pIVar8 = local_90;
				if (!bVar5) {
					if (local_90 == null) {
						return __this;
					}
					pIVar11 = local_90.klass;
					uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
					if (uVar16 == 0) goto label_05b3a04f;
					pIVar4 = (pIVar11._1).interfaceOffsets;
					lVar18 = 0;
					goto label_05b3a040;
				}
				if (local_90 == null) {
					throw new NullReferenceException();
				}
				pIVar11 = local_90.klass;
				uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
				auVar19 = pIVar8.Dispose();
				plVar17 = auVar19._8_8_;
				pSVar13 = auVar19._0_8_;
				bVar5 = String.IsNullOrWhiteSpace(pSVar13);
				if (bVar5) {
	label_05b3a0ab: ;
					pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
					pSVar12 = (String[])new pIVar11[5];
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pIVar8 = il2cpp_codegen_get_runtime_metadata(&"Invalid variant ");
					il2cpp_codegen_array_set_ref((Array)pSVar12, 0, pIVar8);
					il2cpp_codegen_get_runtime_metadata(&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
					il2cpp_codegen_array_set_ref((Array)pSVar12, 1, (object)pSVar13);
					pIVar8 = il2cpp_codegen_get_runtime_metadata(&" in experience ");
					il2cpp_codegen_array_set_ref((Array)pSVar12, 2, pIVar8);
					pSVar13 = il2cpp_codegen_get_runtime_metadata(&"Name");
					pSVar7 = local_88.get_Item(pSVar13);
					pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(JSONNode));
					pSVar13 = ((JSONNode)pSVar7);
					il2cpp_codegen_array_set_ref((Array)pSVar12, 3, (object)pSVar13);
					pIVar8 = il2cpp_codegen_get_runtime_metadata(&".");
					il2cpp_codegen_array_set_ref((Array)pSVar12, 4, pIVar8);
					pSVar13 = String.Concat(pSVar12);
					pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidDataException));
					pSVar14 = (InvalidDataException)il2cpp_codegen_object_new(pIVar11);
					pSVar14 = new InvalidDataException(pSVar13);
					pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
					throw (object)pSVar14;
				}
				if (__this == null) {
					throw new NullReferenceException();
				}
				bVar5 = __this.ContainsKey((object)pSVar13);
				if (bVar5) goto label_05b3a0ab;
				if (plVar17 == null) {
					throw new NullReferenceException();
				}
				cVar6 = (**(code*)(*plVar17 + 0x238))(plVar17,*(ulong)(*plVar17 + 0x240));
				if (cVar6 == false) goto label_05b3a0ab;
				__this_00 = new List<string>();
				pIVar8 = (object)(**(code*)(*plVar17 + 0x2e8))(plVar17,*(ulong)(*plVar17 + 0x2f0));
				if (pIVar8 == null) {
					throw new NullReferenceException();
				}
				pIVar11 = pIVar8.klass;
				uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
				pIVar8 = pIVar8.Dispose();
				local_80._0_8_ = null;
				local_80._8_8_ = &local_98;
				local_48 = pSVar13;
	joined_r0x05b399df: ;
				local_98 = pIVar8;
				if (pIVar8 == null) {
					throw new NullReferenceException();
				}
				pIVar11 = pIVar8.klass;
				uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
				cVar6 = pIVar8.Dispose();
				pIVar8 = local_98;
				if (cVar6 != false) {
					if (local_98 == null) {
						throw new NullReferenceException();
					}
					pIVar11 = local_98.klass;
					uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
					pIVar8 = pIVar8.Dispose();
					if (pIVar8 == null) {
						throw new NullReferenceException();
					}
					cVar6 = (*pIVar8.klass.vtable[0xd].methodPtr)(pIVar8,pIVar8.klass.vtable[0xd].method);
					if (cVar6 == false) {
						pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
						pSVar12 = (String[])new pIVar11[5];
						if (pSVar12 == null) {
							throw new NullReferenceException();
						}
						pIVar8 = il2cpp_codegen_get_runtime_metadata(&"Variant ");
						il2cpp_codegen_array_set_ref((Array)pSVar12, 0, pIVar8);
						il2cpp_codegen_get_runtime_metadata(&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
						il2cpp_codegen_array_set_ref((Array)pSVar12, 1, (object)pSVar13);
						pIVar8 = il2cpp_codegen_get_runtime_metadata(&" must contain rule strings in experience ");
						il2cpp_codegen_array_set_ref((Array)pSVar12, 2, pIVar8);
						pSVar13 = il2cpp_codegen_get_runtime_metadata(&"Name");
						pSVar7 = local_88.get_Item(pSVar13);
						pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(JSONNode));
						pSVar13 = ((JSONNode)pSVar7);
						il2cpp_codegen_array_set_ref((Array)pSVar12, 3, (object)pSVar13);
						pIVar8 = il2cpp_codegen_get_runtime_metadata(&".");
						il2cpp_codegen_array_set_ref((Array)pSVar12, 4, pIVar8);
						pSVar13 = String.Concat(pSVar12);
						pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidDataException));
						pSVar14 = (InvalidDataException)il2cpp_codegen_object_new(pIVar11);
						pSVar14 = new InvalidDataException(pSVar13);
						pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
						throw (object)pSVar14;
					}
					pSVar10 = (String)(*pIVar8.klass.vtable[9].methodPtr)(pIVar8,pIVar8.klass.vtable[9].method);
					if (__this_00 == null) {
	label_05b39e06: ;
						throw new NullReferenceException();
					}
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar12 = __this_00._items;
					if (pSVar12 == null) goto label_05b39e06;
					uVar3 = __this_00._size;
					if (uVar3 < (uint)pSVar12.Length) {
						__this_00._size = uVar3 + 1;
						pSVar12[(int)uVar3] = pSVar10;
						pIVar8 = local_98;
					}
					else {
						__this_00.AddWithResize((object)pSVar10);
						pIVar8 = local_98;
					}
					goto joined_r0x05b399df;
				}
				if (local_98 != null) {
					pIVar11 = local_98.klass;
					uVar16 = (ulong)(pIVar11._2).interface_offsets_count;
					pIVar8.Dispose();
				}
				if (Il2CppMethodInitialized_07542886 == false) {
					Il2CppMethodInitialized_07542886 = true;
					uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				typeResolver = (System_Func_string__UIRuleValueType__o)StringComparer.s_ordinalIgnoreCase;
				__this_01 = il2cpp_codegen_object_new(typeof(HashSet<string>)) ;
				__this_01 = new HashSet<object>((IEqualityComparer<T>)typeResolver);
				__this_02 = RuleParser.Parse((IEnumerable<string>)__this_00, typeResolver);
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				local_80.GetEnumerator((List<object>)__this_02);
				local_58 = local_70;
				local_68 = (byte[])local_80._0_8_;
				local_80._0_8_ = null;
				local_80._8_8_ = local_68;
				if (__this_01 == null) {
					bVar5 = local_68.MoveNext();
					if (bVar5) {
						if (local_58 != null) {
							throw new NullReferenceException();
						}
	label_05b39f72: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (true) {
						bVar5 = local_68.MoveNext();
						pIVar8 = local_58;
						if (!(bVar5)) break;
						if (local_58 == null) goto label_05b39f72;
						bVar5 = __this_01.Add(local_58[1].monitor);
						if (!bVar5) {
							pSVar13 = pIVar8[1].monitor;
							pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Duplicate variant rule: ");
							pSVar13 = String.Concat(pSVar10, pSVar13);
							pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
							__this_03 = (FormatException)il2cpp_codegen_object_new(pIVar11);
							__this_03 = new FormatException(pSVar13);
							pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
							throw (object)__this_03;
						}
					}
				}
				local_68.Dispose();
				__this.Add((object)local_48, (object)__this_00);
			} while(true);
		}
	label_05b3a212: ;
		throw new NullReferenceException();
		while (true) {
			lVar18 = lVar18 + 0x10;
			if (!(uVar16 * 0x10 != lVar18)) break;
	label_05b3a040: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar18) == typeof(IDisposable)) {
				pVVar9 = pIVar11.vtable + *(int)((long)&pIVar4.offset + lVar18);
				goto label_05b3a06d;
			}
		}
	label_05b3a04f: ;
	label_05b3a06d: ;
		pIVar8.Dispose();
		return __this;
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x5A3BB30", Offset = "0x5A3AB30", VA = "0x5A3BB30")]
	private UIRule GetRule(string id)
	{
		// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$GetRule): 2 lines keep C-only constructs
		List<UIRule> __this_00;
		bool bVar1;
		UIRule pSVar2;
		int iVar4;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		byte puStack_30;

		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		__this_00 = this._uiRules;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		puStack_30 = (byte)&SStack_58;
		do {
			bVar1 = SStack_58.MoveNext();
			if (!bVar1) {
				iVar4 = 5;
				goto label_05b3bc0a;
			}
			if ((UIRule)SStack_58._current == null) {
				throw new NullReferenceException();
			}
			bVar1 = (((UIRule)((long)SStack_58._current + 0x10)).SettingId == id);
		} while (!bVar1);
		iVar4 = 4;
	label_05b3bc0a: ;
		SStack_58.Dispose();
		if (iVar4 == 4) {
		}
		return pSVar2;
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x5A3BCA0", Offset = "0x5A3ACA0", VA = "0x5A3BCA0")]
	public PresetDefinition()
	{
		// Lifted from source/cpp/Settings/PresetDefinition.c (Settings.PresetDefinition$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/PresetDefinition.c.

	// Settings.PresetDefinition.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new PresetDefinition.c();
		PresetDefinition.c.__9 = (PresetDefinition.c)__this;
		return;
	}

	// Settings.PresetDefinition.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Settings.PresetDefinition.<>c$$<get_DefaultVariant>b__8_0: clean
	private bool c__get_DefaultVariant_b__8_0(String name)
	{
		bool bVar1;

		bVar1 = String.Equals(name, "Default", 5);
		return bVar1;
	}
}
