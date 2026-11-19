// Type: Settings.PresetMerger
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/PresetMerger.cs
// Prior real C# source: none
// --------------------------------

// Settings.PresetMerger.<>c$$.cctor
// il2cpp: void Settings_PresetMerger___c___cctor (const MethodInfo* method);
// 0x5b3c580

void Settings_PresetMerger___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547254 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetMerger_c);
    Il2CppMethodInitialized_07547254 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_PresetMerger_c->static_fields->__9 = (Settings_PresetMerger___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_PresetMerger_c->static_fields->__9);
  return;
}


// Settings.PresetMerger.<>c$$.ctor
// il2cpp: void Settings_PresetMerger___c___ctor (Settings_PresetMerger___c_o* __this, const MethodInfo* method);
// 0x5b3c5f0

void Settings_PresetMerger___c___ctor(Settings_PresetMerger___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.PresetMerger.<>c$$<MergeUIRuleLists>b__1_0
// il2cpp: System_String_o* Settings_PresetMerger___c___MergeUIRuleLists_b__1_0 (Settings_PresetMerger___c_o* __this, Settings_UIRule_o* r, const MethodInfo* method);
// 0x5b3c600

System_String_o *
Settings_PresetMerger___c___MergeUIRuleLists_b__1_0
          (Settings_PresetMerger___c_o *__this,Settings_UIRule_o *r,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_07547255 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_07547255 = '\x01';
  }
  if (r == (Settings_UIRule_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (r->fields).SettingId;
  if (Il2CppMethodInitialized_075472a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_075472a1 = '\x01';
  }
  ppSVar2 = &"general.Weather";
  bVar1 = System_String__Equals_52ffe30(a,"general.Weather",5,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__Equals_52ffe30(a,"general.WeatherIndex",5,(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar2 = &"general.Weather";
    }
    else {
      ppSVar2 = &(r->fields).SettingId;
    }
  }
  return *ppSVar2;
}


// Settings.PresetMerger.<>c$$<MergeUIRuleLists>b__1_1
// il2cpp: Settings_UIRule_o* Settings_PresetMerger___c___MergeUIRuleLists_b__1_1 (Settings_PresetMerger___c_o* __this, Settings_UIRule_o* r, const MethodInfo* method);
// 0x5b3c6b0

Settings_UIRule_o *
Settings_PresetMerger___c___MergeUIRuleLists_b__1_1
          (Settings_PresetMerger___c_o *__this,Settings_UIRule_o *r,MethodInfo *method)

{
  return r;
}


// Settings.PresetMerger$$Merge
// il2cpp: Settings_PresetDefinition_o* Settings_PresetMerger__Merge (Settings_PresetDefinition_o* basePreset, Settings_PresetDefinition_o* child, const MethodInfo* method);
// 0x5b3bd80

Settings_PresetDefinition_o *
Settings_PresetMerger__Merge
          (Settings_PresetDefinition_o *basePreset,Settings_PresetDefinition_o *child,MethodInfo *method)

{
  Settings_PresetDefinition_o *__this;
  System_Collections_Generic_List_UIRule__o *pSVar1;
  System_Collections_Generic_List_UIRule__o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_string__List_string___o *pSVar4;
  System_Func_string__UIRuleValueType__o *typeResolver;
  
  if (Il2CppMethodInitialized_07547252 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition);
    Il2CppMethodInitialized_07547252 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (child != (Settings_PresetDefinition_o *)0x0) {
    pSVar3 = (child->fields).Category;
    if (pSVar3 == (System_String_o *)0x0) {
      if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_05b3bf2c;
      pSVar3 = (basePreset->fields).Category;
    }
    if (__this != (Settings_PresetDefinition_o *)0x0) {
      (__this->fields).Category = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Category);
      pSVar3 = (child->fields).SubCategory;
      if (pSVar3 == (System_String_o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_05b3bf2c;
        pSVar3 = (basePreset->fields).SubCategory;
      }
      (__this->fields).SubCategory = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory);
      pSVar3 = (child->fields).Name;
      if (pSVar3 == (System_String_o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_05b3bf2c;
        pSVar3 = (basePreset->fields).Name;
      }
      (__this->fields).Name = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
      pSVar4 = (child->fields).Variants;
      if (pSVar4 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_05b3bf2c;
        pSVar4 = (basePreset->fields).Variants;
      }
      (__this->fields).Variants = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Variants);
      typeResolver = (System_Func_string__UIRuleValueType__o *)(child->fields).UISections;
      if (typeResolver == (System_Func_string__UIRuleValueType__o *)0x0) {
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_05b3bf2c;
        typeResolver = (System_Func_string__UIRuleValueType__o *)(basePreset->fields).UISections;
        (__this->fields).UISections = (System_Collections_Generic_List_ExperienceUISection__o *)typeResolver;
        Il2CppCodeGenWriteBarrier(&(__this->fields).UISections);
        pSVar1 = (basePreset->fields)._uiRules;
        method_00 = extraout_RDX_00;
      }
      else {
        (__this->fields).UISections = (System_Collections_Generic_List_ExperienceUISection__o *)typeResolver;
        Il2CppCodeGenWriteBarrier(&(__this->fields).UISections);
        if (basePreset == (Settings_PresetDefinition_o *)0x0) goto label_05b3bf2c;
        pSVar1 = (basePreset->fields)._uiRules;
        method_00 = extraout_RDX;
      }
      if (pSVar1 == (System_Collections_Generic_List_UIRule__o *)0x0) {
        pSVar1 = Settings_RuleParser__Parse
                           ((System_Collections_Generic_IEnumerable_string__o *)(basePreset->fields).UIRules,
                            typeResolver,method_00);
        (basePreset->fields)._uiRules = pSVar1;
        Il2CppCodeGenWriteBarrier(&(basePreset->fields)._uiRules);
        pSVar1 = (basePreset->fields)._uiRules;
        pSVar2 = (child->fields)._uiRules;
        method_00 = extraout_RDX_01;
      }
      else {
        pSVar2 = (child->fields)._uiRules;
      }
      if (pSVar2 == (System_Collections_Generic_List_UIRule__o *)0x0) {
        pSVar2 = Settings_RuleParser__Parse
                           ((System_Collections_Generic_IEnumerable_string__o *)(child->fields).UIRules,
                            (System_Func_string__UIRuleValueType__o *)0x0,method_00);
        (child->fields)._uiRules = pSVar2;
        Il2CppCodeGenWriteBarrier(&(child->fields)._uiRules);
        pSVar2 = (child->fields)._uiRules;
        method_00 = extraout_RDX_02;
      }
      pSVar1 = Settings_PresetMerger__MergeUIRuleLists(pSVar1,pSVar2,method_00);
      (__this->fields)._uiRules = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules);
      return __this;
    }
  }
label_05b3bf2c:
  ThrowNullReferenceException();
}


// Settings.PresetMerger$$MergeUIRuleLists
// il2cpp: System_Collections_Generic_List_UIRule__o* Settings_PresetMerger__MergeUIRuleLists (System_Collections_Generic_List_UIRule__o* baseRules, System_Collections_Generic_List_UIRule__o* childRules, const MethodInfo* method);
// 0x5b3bf40
// eh: try 0x5b3c27f..0x5b3c49b -> pad 0x5b3c4a0 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3c4ca..0x5b3c4cf -> pad 0x5b3c4f2 cleanup
// eh: try 0x5b3c4f5..0x5b3c4ff -> pad 0x5b3c507 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3c0ae: jmp 0x5b3c18b
// asm:   0x5b3c25b: lea rbp, [rip + 0x17ba0b6]  ; "general.WeatherIndex"
// asm:   0x5b3c262: jmp 0x5b3c28a
// asm:   0x5b3c383: lea r12, [rip + 0x17b9f8e]  ; "general.WeatherIndex"
// asm:   0x5b3c38a: nop word ptr [rax + rax]
// asm:   0x5b3c4a0: jmp 0x5b3c4b2
// asm:   0x5b3c4a2: jmp 0x5b3c4b2
// asm:   0x5b3c4a4: jmp 0x5b3c4b2
// asm:   0x5b3c4a6: jmp 0x5b3c4b2
// asm:   0x5b3c4a8: jmp 0x5b3c4b2
// asm:   0x5b3c4aa: jmp 0x5b3c4b2
// asm:   0x5b3c4ac: jmp 0x5b3c4b2
// asm:   0x5b3c4ae: jmp 0x5b3c4b2
// asm:   0x5b3c4b0: jmp 0x5b3c4b2
// asm:   0x5b3c4b2: mov rbx, rax
// asm:   0x5b3c4b5: cmp edx, 1
// asm:   0x5b3c4b8: jne 0x5b3c4f5
// asm:   0x5b3c4ba: mov rdi, rbx
// asm:   0x5b3c4bd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3c4c2: mov rbx, qword ptr [rax]
// asm:   0x5b3c4c5: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b3c4ca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3c4cf: lea rax, [rip + 0x1752892]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x5b3c4d6: mov rsi, qword ptr [rax]
// asm:   0x5b3c4d9: mov rdi, rsp
// asm:   0x5b3c4dc: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b3c4e1: test rbx, rbx
// asm:   0x5b3c4e4: je 0x5b3c460
// asm:   0x5b3c4ea: mov rdi, rbx
// asm:   0x5b3c4ed: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3c4f2: mov rbx, rax
// asm:   0x5b3c4f5: lea rdi, [rsp + 0x18]
// asm:   0x5b3c4fa: call 0x2fd6c30  ; il2cpp_runtime_helper_02fd6c30()
// asm:   0x5b3c4ff: mov rdi, rbx
// asm:   0x5b3c502: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3c507: mov rdi, rax
// asm:   0x5b3c50a: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_UIRule__o *
Settings_PresetMerger__MergeUIRuleLists
          (System_Collections_Generic_List_UIRule__o *baseRules,
          System_Collections_Generic_List_UIRule__o *childRules,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Settings_UIRule_array *pSVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_Enumerator_object__o *pSVar8;
  bool bVar9;
  System_Collections_Generic_List_UIRule__o *pSVar10;
  System_Func_TSource__TKey__o *__this;
  Settings_PresetMerger___c_StaticFields *pSVar11;
  System_Func_UIRule__UIRule__o *__this_00;
  System_Collections_Generic_Dictionary_TKey__TElement__o *__this_01;
  System_String_o **ppSVar12;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_50 [16];
  Settings_UIRule_o *local_40;
  System_Collections_Generic_List_UIRule__o *local_38;
  
  if (Il2CppMethodInitialized_07547253 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_07547253 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if (baseRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
    if (childRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
      pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIRule);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar10,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_UIRule_ctor);
      return pSVar10;
    }
    return childRules;
  }
  if (childRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
    return baseRules;
  }
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIRule);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_UIRule_ctor);
  if ((TypeInfo_Settings_PresetMerger_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
    pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    __this = (System_Func_TSource__TKey__o *)pSVar11->__9__1_0;
  }
  else {
    pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    __this = (System_Func_TSource__TKey__o *)pSVar11->__9__1_0;
  }
  if (__this == (System_Func_TSource__TKey__o *)0x0) {
    if (*(uint32_t *)((long)TypeInfo_Settings_PresetMerger_c + 0xe4) == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
      pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    }
    pIVar4 = (Il2CppObject *)pSVar11->__9;
    __this = (System_Func_TSource__TKey__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,pIVar4,
               (intptr_t)MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_0,(MethodInfo_4F19B50 *)0x0)
    ;
    pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    pSVar11->__9__1_0 = (System_Func_UIRule__string__o *)__this;
    Il2CppCodeGenWriteBarrier(&pSVar11->__9__1_0);
    uVar2 = (TypeInfo_Settings_PresetMerger_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)TypeInfo_Settings_PresetMerger_c + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
    pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    __this_00 = pSVar11->__9__1_1;
  }
  else {
    pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    __this_00 = pSVar11->__9__1_1;
  }
  if (__this_00 == (System_Func_UIRule__UIRule__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Settings_PresetMerger_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetMerger_c);
      pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    }
    pIVar4 = (Il2CppObject *)pSVar11->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_UIRule);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,pIVar4,
               (intptr_t)MethodInfo_Settings_PresetMerger_c_MergeUIRuleLists_b__1_1,(MethodInfo_4F19B50 *)0x0)
    ;
    pSVar11 = TypeInfo_Settings_PresetMerger_c->static_fields;
    pSVar11->__9__1_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pSVar11->__9__1_1);
  }
  local_38 = childRules;
  __this_01 = System_Linq_Enumerable__ToDictionary_object__object__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)childRules,__this,
                         (System_Func_TSource__TElement__o *)__this_00,
                         (MethodInfo_34FEE10 *)
                         MethodInfo_System_Linq_Enumerable_ToDictionary_UIRule_string_UIRule);
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
             (System_Collections_Generic_List_object__o *)baseRules,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_40;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
  local_68.fields._index = local_50._8_4_;
  local_68.fields._version = local_50._12_4_;
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_8_ = &local_68;
  pSVar8 = &local_68;
  if (pSVar10 == (System_Collections_Generic_List_UIRule__o *)0x0) {
    while (local_50._8_8_ = pSVar8,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext),
          pIVar4 = local_68.fields._current, bVar9) {
      if ((Settings_UIRule_o *)local_68.fields._current == (Settings_UIRule_o *)0x0) {
label_05b3c491:
        ThrowNullReferenceException();
      }
      pSVar5 = ((Settings_UIRule_Fields *)((long)local_68.fields._current + 0x10))->SettingId;
      if (Il2CppMethodInitialized_075472a1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
        il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
        Il2CppMethodInitialized_075472a1 = '\x01';
      }
      bVar9 = System_String__Equals_52ffe30(pSVar5,"general.Weather",5,(MethodInfo *)0x0);
      ppSVar12 = &"general.Weather";
      if (!bVar9) {
        bVar9 = System_String__Equals_52ffe30(pSVar5,"general.WeatherIndex",5,(MethodInfo *)0x0);
        if (bVar9) {
          ppSVar12 = &"general.Weather";
        }
        else {
          ppSVar12 = &((Settings_UIRule_Fields *)((long)pIVar4 + 0x10))->SettingId;
        }
      }
      if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) {
label_05b3c496:
        ThrowNullReferenceException();
      }
      bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)*ppSVar12,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_UIRule_ContainsKey);
      pSVar8 = (System_Collections_Generic_List_Enumerator_object__o *)local_50._8_8_;
      if (!bVar9) {
label_05b3c449:
        ThrowNullReferenceException();
      }
    }
  }
  else {
    while (bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext),
          pIVar4 = local_68.fields._current, bVar9) {
      if ((Settings_UIRule_o *)local_68.fields._current == (Settings_UIRule_o *)0x0) goto label_05b3c491;
      pSVar5 = ((Settings_UIRule_Fields *)((long)local_68.fields._current + 0x10))->SettingId;
      if (Il2CppMethodInitialized_075472a1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
        il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
        Il2CppMethodInitialized_075472a1 = '\x01';
      }
      bVar9 = System_String__Equals_52ffe30(pSVar5,"general.Weather",5,(MethodInfo *)0x0);
      ppSVar12 = &"general.Weather";
      if (!bVar9) {
        bVar9 = System_String__Equals_52ffe30(pSVar5,"general.WeatherIndex",5,(MethodInfo *)0x0);
        if (bVar9) {
          ppSVar12 = &"general.Weather";
        }
        else {
          ppSVar12 = &((Settings_UIRule_Fields *)((long)pIVar4 + 0x10))->SettingId;
        }
      }
      if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) goto label_05b3c496;
      bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)*ppSVar12,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_UIRule_ContainsKey);
      pMVar7 = MethodInfo_System_Collections_Generic_List_UIRule_Add;
      if (!bVar9) {
        piVar1 = &(pSVar10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (pSVar10->fields)._items;
        if (pSVar6 == (Settings_UIRule_array *)0x0) goto label_05b3c449;
        uVar3 = (pSVar10->fields)._size;
        if (uVar3 < (uint)pSVar6->max_length) {
          (pSVar10->fields)._size = uVar3 + 1;
          pSVar6->m_Items[(int)uVar3] = (Settings_UIRule_o *)pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,pIVar4,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
  if (pSVar10 == (System_Collections_Generic_List_UIRule__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___AddRange
            ((System_Collections_Generic_List_object__o *)pSVar10,
             (System_Collections_Generic_IEnumerable_T__o *)local_38,
             (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_UIRule_AddRange);
  return pSVar10;
}


