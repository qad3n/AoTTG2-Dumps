// Type: Settings.PresetMerger
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/PresetMerger.cs
// Prior real C# source: none
// --------------------------------

// Settings.PresetMerger.<>c$$.cctor
// il2cpp: void Settings_PresetMerger___c___cctor (const MethodInfo* method);
// 0x181dd0610

void Settings_PresetMerger___c___cctor(MethodInfo *method)

{
  Settings_PresetMerger___c_o *__this;
  
  if (Il2CppMethodInitialized_184344a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetMerger_c);
    Il2CppMethodInitialized_184344a38 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Settings_PresetMerger_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_PresetMerger_c->static_fields->__9,__this);
  return;
}


// Settings.PresetMerger.<>c$$.ctor
// il2cpp: void Settings_PresetMerger___c___ctor (Settings_PresetMerger___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_PresetMerger___c___ctor(Settings_PresetMerger___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.PresetMerger.<>c$$<MergeUIRuleLists>b__1_0
// il2cpp: System_String_o* Settings_PresetMerger___c___MergeUIRuleLists_b__1_0 (Settings_PresetMerger___c_o* __this, Settings_UIRule_o* r, const MethodInfo* method);
// 0x181dd0410

System_String_o*
Settings_PresetMerger___c___MergeUIRuleLists_b__1_0(Settings_PresetMerger___c_o* __this, Settings_UIRule_o* r, MethodInfo* method)

{
  if (item != (Map_Experience_o *)0x0) {
    return (item->fields).SubCategory;
  }
  ThrowNullReferenceException();
}


// Settings.PresetMerger.<>c$$<MergeUIRuleLists>b__1_1
// il2cpp: Settings_UIRule_o* Settings_PresetMerger___c___MergeUIRuleLists_b__1_1 (Settings_PresetMerger___c_o* __this, Settings_UIRule_o* r, const MethodInfo* method);
// 0x1808e13a0

Settings_UIRule_o*
Settings_PresetMerger___c___MergeUIRuleLists_b__1_1(Settings_PresetMerger___c_o* __this, Settings_UIRule_o* r, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Settings.PresetMerger$$Merge
// il2cpp: Settings_PresetDefinition_o* Settings_PresetMerger__Merge (Settings_PresetDefinition_o* basePreset, Settings_PresetDefinition_o* child, const MethodInfo* method);
// 0x181dc9250

Settings_PresetDefinition_o *
Settings_PresetMerger__Merge
          (Settings_PresetDefinition_o *basePreset,Settings_PresetDefinition_o *child,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceUISection__o *pSVar1;
  Settings_PresetDefinition_o *__this;
  System_Collections_Generic_List_UIRule__o *pSVar2;
  System_Collections_Generic_List_UIRule__o *value;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_string__List_string___o *value_00;
  
  if (Il2CppMethodInitialized_184344a36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition);
    Il2CppMethodInitialized_184344a36 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (child != (Settings_PresetDefinition_o *)0x0) {
    pSVar3 = (child->fields).Category;
    if (pSVar3 == (System_String_o *)0x0) {
      if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_181dc9416;
      pSVar3 = (basePreset->fields).Category;
    }
    if (__this != (Settings_PresetDefinition_o *)0x0) {
      (__this->fields).Category = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Category,pSVar3);
      pSVar3 = (child->fields).SubCategory;
      if (pSVar3 == (System_String_o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_181dc9416;
        pSVar3 = (basePreset->fields).SubCategory;
      }
      (__this->fields).SubCategory = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory,pSVar3);
      pSVar3 = (child->fields).Name;
      if (pSVar3 == (System_String_o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_181dc9416;
        pSVar3 = (basePreset->fields).Name;
      }
      (__this->fields).Name = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Name,pSVar3);
      pSVar3 = (child->fields).Description;
      if (pSVar3 == (System_String_o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_181dc9416;
        pSVar3 = (basePreset->fields).Description;
      }
      (__this->fields).Description = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Description,pSVar3);
      value_00 = (child->fields).Variants;
      if (value_00 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_181dc9416;
        value_00 = (basePreset->fields).Variants;
      }
      (__this->fields).Variants = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Variants,value_00);
      pSVar1 = (child->fields).UISections;
      if (pSVar1 == (System_Collections_Generic_List_ExperienceUISection__o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_181dc9416;
        pSVar1 = (basePreset->fields).UISections;
        (__this->fields).UISections = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).UISections,pSVar1);
      }
      else {
        (__this->fields).UISections = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).UISections,pSVar1);
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_181dc9416;
      }
      if ((basePreset->fields)._uiRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
        pSVar2 = Settings_RuleParser__Parse
                           ((System_Collections_Generic_IEnumerable_string__o *)(basePreset->fields).UIRules,
                            (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
        (basePreset->fields)._uiRules = pSVar2;
        Il2CppCodeGenWriteBarrier(&(basePreset->fields)._uiRules,pSVar2);
      }
      pSVar2 = (basePreset->fields)._uiRules;
      if ((child->fields)._uiRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
        value = Settings_RuleParser__Parse
                          ((System_Collections_Generic_IEnumerable_string__o *)(child->fields).UIRules,
                           (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
        (child->fields)._uiRules = value;
        Il2CppCodeGenWriteBarrier(&(child->fields)._uiRules,value);
      }
      pSVar2 = Settings_PresetMerger__MergeUIRuleLists(pSVar2,(child->fields)._uiRules,(MethodInfo *)0x0);
      (__this->fields)._uiRules = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules,pSVar2);
      return __this;
    }
  }
label_181dc9416:
  ThrowNullReferenceException();
}


// Settings.PresetMerger$$MergeUIRuleLists
// il2cpp: System_Collections_Generic_List_UIRule__o* Settings_PresetMerger__MergeUIRuleLists (System_Collections_Generic_List_UIRule__o* baseRules, System_Collections_Generic_List_UIRule__o* childRules, const MethodInfo* method);
// 0x181dc8e70
// eh: try 0x181dc9130..0x181dc9239 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc91a1: mov rdx, qword ptr [rip + 0x22d2ba8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x181dc91a8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dc91ad: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc91b2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dc91b7: test rcx, rcx
// asm:   0x181dc91ba: jne 0x181dc9239
// asm:   0x181dc91bc: mov r14, qword ptr [rsp + 0x98]
// asm:   0x181dc91c4: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x181dc91e8: mov rax, r12
// asm:   0x181dc91eb: jmp 0x181dc9213
// asm:   0x181dc9210: mov rax, r14
// asm:   0x181dc9239: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_List_UIRule__o *
Settings_PresetMerger__MergeUIRuleLists
          (System_Collections_Generic_List_UIRule__o *baseRules,
          System_Collections_Generic_List_UIRule__o *childRules,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_UIRule__o *__this;
  System_Func_UIRule__string__o *__this_00;
  System_Func_UIRule__UIRule__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TElement__o *__this_02;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184344a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_UIRule_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToDictionary_UIRule_string_UIRule);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_UIRule_UIRule);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_UIRule_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_UIRule);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetMerger_c);
    Il2CppMethodInitialized_184344a37 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (baseRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
    baseRules = childRules;
    if (childRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
      baseRules = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIRule);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)baseRules,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_UIRule_ctor);
    }
  }
  else if (childRules != (System_Collections_Generic_List_UIRule__o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIRule);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_UIRule_ctor);
    if ((TypeInfo_Settings_PresetMerger_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
    }
    __this_00 = TypeInfo_Settings_PresetMerger_c->static_fields->__9__1_0;
    if (__this_00 == (System_Func_UIRule__string__o *)0x0) {
      if ((TypeInfo_Settings_PresetMerger_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Settings_PresetMerger_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,pIVar1,
                 (intptr_t)MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_0,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_Settings_PresetMerger_c->static_fields->__9__1_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_PresetMerger_c->static_fields->__9__1_0,__this_00);
    }
    if ((TypeInfo_Settings_PresetMerger_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
    }
    __this_01 = TypeInfo_Settings_PresetMerger_c->static_fields->__9__1_1;
    if (__this_01 == (System_Func_UIRule__UIRule__o *)0x0) {
      if ((TypeInfo_Settings_PresetMerger_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Settings_PresetMerger_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_UIRule);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar1,
                 (intptr_t)MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_1,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_Settings_PresetMerger_c->static_fields->__9__1_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_PresetMerger_c->static_fields->__9__1_1,__this_01);
    }
    __this_02 = System_Linq_Enumerable__ToDictionary_object__object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)childRules,
                           (System_Func_TSource__TKey__o *)__this_00,
                           (System_Func_TSource__TElement__o *)__this_01,
                           (MethodInfo_6C91F0 *)
                           MethodInfo_System_Linq_Enumerable_ToDictionary_UIRule_string_UIRule);
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)baseRules,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_48,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext),
          pIVar1 = local_48.fields._current, bVar2) {
      if (local_48.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_02 == (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                         local_48.fields._current[1].monitor,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_UIRule_ContainsKey);
      if (!bVar2) {
        if (__this == (System_Collections_Generic_List_UIRule__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this,pIVar1,MethodInfo_System_Collections_Generic_List_UIRule_Add);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    if (__this == (System_Collections_Generic_List_UIRule__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)__this,
               (System_Collections_Generic_IEnumerable_T__o *)childRules,
               (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_UIRule_AddRange);
    baseRules = __this;
  }
  return baseRules;
}


