// Type: Settings.ExperienceRuleEngine
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/ExperienceRuleEngine.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceRuleEngine$$Apply
// il2cpp: Settings_ExperienceRuleResult_o* Settings_ExperienceRuleEngine__Apply (Settings_PresetDefinition_o* experience, Settings_InGameSet_o* settings, System_Func_string__string__o* mapCategoryResolver, System_String_o* variant, const MethodInfo* method);
// 0x181dbbda0
// eh: try 0x181dbc0c0..0x181dbc331 -> pad 0x18333be00 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181dbc3c1..0x181dbc61b -> pad 0x183319330 catch Il2CppExceptionWrapper
// eh: try 0x181dbc61b..0x181dbc6f6 -> pad 0x18333be00 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181dbc749..0x181dbcef9 -> pad 0x183319330 catch Il2CppExceptionWrapper
// eh: try 0x181dbcef9..0x181dbcf0d -> pad 0x18333be00 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181dbcf0d..0x181dbd176 -> pad 0x183319330 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181dbd176..0x181dbd1a9 -> pad 0x18333be00 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181dbd1a9..0x181dbd204 -> pad 0x183319330 catch Il2CppExceptionWrapper
// asm: 83 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dbc24c: mov qword ptr [rsp + 0x158], rsi
// asm:   0x181dbc300: mov qword ptr [rsp + 0x140], r15
// asm:   0x181dbc61b: jmp 0x181dbc79c
// asm:   0x181dbc7b0: mov qword ptr [rsp + 0x40], r15
// asm:   0x181dbc7b5: mov qword ptr [rsp + 0x140], r15
// asm:   0x181dbccb3: mov qword ptr [rsp + 0x40], r10
// asm:   0x181dbccb8: mov qword ptr [rsp + 0x140], r10
// asm:   0x181dbcef9: jmp 0x181dbcf1b
// asm:   0x181dbcf72: mov rdx, qword ptr [rip + 0x22dedd7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x181dbcf79: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x181dbcf7e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dbcf83: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181dbcf88: test rcx, rcx
// asm:   0x181dbcf8b: jne 0x181dbd204
// asm:   0x181dbcf91: mov rsi, qword ptr [rsp + 0x158]
// asm:   0x181dbcf99: mov r15, qword ptr [rsp + 0x140]
// asm:   0x181dbcfa1: mov r13, qword ptr [rsp + 0x80]
// asm:   0x181dbcfa9: mov r12, qword ptr [rsp + 0x148]
// asm:   0x181dbd0ad: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181dbd0b2: test rcx, rcx
// asm:   0x181dbd0b5: je 0x181dbd16a
// asm:   0x181dbd0bb: mov rax, qword ptr [rsp + 0x80]
// asm:   0x181dbd0c3: mov rbx, qword ptr [rax + 0x20]
// asm:   0x181dbd0c7: mov rax, qword ptr [rcx]
// asm:   0x181dbd0ca: mov rdx, qword ptr [rax + 0x190]
// asm:   0x181dbd0d1: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x181dbd0d7: mov rdi, rax
// asm:   0x181dbd0da: test rbx, rbx
// asm:   0x181dbd0dd: je 0x181dbd16a
// asm:   0x181dbd0e3: lea rcx, [rip + 0x231f04e]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x181dbd0ea: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dbd0ef: mov r8, rax
// asm:   0x181dbd0f2: mov rdx, rdi
// asm:   0x181dbd0f5: mov rcx, rbx
// asm:   0x181dbd0f8: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x181dbd0fd: mov r13, qword ptr [rsp + 0x88]
// asm:   0x181dbd105: jmp 0x181dbd123
// asm:   0x181dbd110: mov r8, qword ptr [rip + 0x231f021]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x181dbd117: mov rdx, qword ptr [rip + 0x233da22]  ; "Game settings are missing."
// asm:   0x181dbd15a: mov r8, qword ptr [rip + 0x231efd7]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x181dbd161: mov rdx, qword ptr [rip + 0x231e0c0]  ; "Experience is missing."
// asm:   0x181dbd168: jmp 0x181dbd11e
// asm:   0x181dbd204: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183319330: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319335: push rbp
// asm:   0x183319336: sub rsp, 0x30
// asm:   0x18331933a: mov rbp, rdx
// asm:   0x18331933d: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x183319344: mov rcx, qword ptr [rax]
// asm:   0x183319347: mov qword ptr [rbp + 0x68], rcx
// asm:   0x18331934b: movabs rax, 0
// asm:   0x183319355: add rsp, 0x30
// asm:   0x183319359: pop rbp
// asm:   0x18331935a: ret 
// asm:   0x18333be00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333be05: push rbx
// asm:   0x18333be06: push rbp
// asm:   0x18333be07: push rdi
// asm:   0x18333be08: sub rsp, 0x30
// asm:   0x18333be0c: mov rbp, rdx
// asm:   0x18333be0f: mov rdi, qword ptr [rbp + 0xb8]
// asm:   0x18333be16: mov rax, qword ptr [rdi]
// asm:   0x18333be19: mov rbx, qword ptr [rax]
// asm:   0x18333be1c: lea rcx, [rip + 0xd3d135]  ; TypeInfo_System_Exception
// asm:   0x18333be23: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333be28: mov rcx, rax
// asm:   0x18333be2b: mov rdx, rbx
// asm:   0x18333be2e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333be33: test al, al
// asm:   0x18333be35: mov rax, qword ptr [rdi]
// asm:   0x18333be38: je 0x18333be4a
// asm:   0x18333be3a: mov qword ptr [rbp + 0x68], rax
// asm:   0x18333be3e: movabs rax, 0
// asm:   0x18333be48: jmp 0x18333be65
// asm:   0x18333be4a: mov qword ptr [rbp + 0xa8], rax
// asm:   0x18333be51: lea rdx, [rip + 0xca0130]
// asm:   0x18333be58: lea rcx, [rbp + 0xa8]
// asm:   0x18333be5f: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333be65: add rsp, 0x30
// asm:   0x18333be69: pop rdi
// asm:   0x18333be6a: pop rbp
// asm:   0x18333be6b: pop rbx
// asm:   0x18333be6c: ret 

Settings_ExperienceRuleResult_o *
Settings_ExperienceRuleEngine__Apply
          (Settings_PresetDefinition_o *experience,Settings_InGameSet_o *settings,
          System_Func_string__string__o *mapCategoryResolver,System_String_o *variant,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_string__List_string___o *__this;
  Settings_BaseSetting_c *pSVar5;
  Settings_InGameGeneralSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_InGameModeSettings_o *pSVar8;
  Settings_BoolSetting_o *__this_00;
  double dVar9;
  Settings_BaseSetting_o *pSVar10;
  float fVar11;
  Settings_UIRule_o *rule;
  bool bVar12;
  int32_t iVar13;
  Settings_ExperienceRuleResult_o *__this_01;
  System_Collections_Generic_List_ExperienceRuleField__o *pSVar14;
  System_Collections_Generic_List_string__o *pSVar15;
  System_Collections_Generic_IEnumerable_TKey__o *pSVar16;
  System_Func_string__bool__o *__this_02;
  Settings_PresetDefinition_o *child;
  System_Collections_Generic_List_UIRule__o *pSVar17;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_HashSet_string__o *__this_03;
  System_String_o *pSVar18;
  System_String_array *values;
  Settings_ExperienceRuleField_o *__this_04;
  System_String_o *s;
  System_Xml_Schema_XmlSchema_o *obj;
  char *pcVar19;
  int *piVar20;
  System_Xml_Schema_XmlSchema_o *pSVar21;
  float *pfVar22;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *pMVar23;
  Settings_PresetDefinition_Fields *pSVar24;
  System_String_o **ppSVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  bool local_108 [8];
  Settings_BaseSetting_o *local_100;
  Settings_PresetDefinition_o *local_f8;
  int32_t local_f0;
  float local_ec;
  System_Collections_Generic_HashSet_string__o *local_e8;
  System_String_o *local_e0;
  System_Collections_Generic_List_string__o *local_d8;
  undefined1 local_d0 [16];
  Settings_UIRule_o *local_c0;
  Settings_ExperienceRuleResult_o *local_b8;
  Settings_ExperienceRuleResult_o *local_b0;
  undefined1 local_a8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_a0;
  Settings_UIRule_o *local_98;
  
  local_f8 = experience;
  local_e0 = variant;
  if (Il2CppMethodInitialized_184344a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleResult);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Experience is missing.");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"Default value is not allowed for ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown variant ");
    il2cpp_codegen_initialize_runtime_metadata(&"Default value is outside the setting constraints for ");
    il2cpp_codegen_initialize_runtime_metadata(&" for experience ");
    il2cpp_codegen_initialize_runtime_metadata(&"Duplicate experience rule: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Experience contains a rule without a setting ID.");
    il2cpp_codegen_initialize_runtime_metadata(&"Game settings are missing.");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown experience setting: ");
    il2cpp_codegen_initialize_runtime_metadata(&"mode.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184344a1c = '\x01';
  }
  local_d8 = (System_Collections_Generic_List_string__o *)0x0;
  local_a8 = (undefined1  [8])0x0;
  pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_98 = (Settings_UIRule_o *)0x0;
  local_100 = (Settings_BaseSetting_o *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceRuleResult);
  local_b0 = __this_01;
  if (Il2CppMethodInitialized_184344a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    Il2CppMethodInitialized_184344a1b = '\x01';
  }
  pSVar14 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar14,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
  (__this_01->fields).Fields = pSVar14;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Fields,pSVar14);
  pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar15,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this_01->fields).Errors = pSVar15;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Errors,pSVar15);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Settings_ExperienceRuleResult_o *)0x0) goto label_181dbd16a;
  (__this_01->fields).Experience = experience;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Experience,experience);
  local_b8 = __this_01;
  if (experience == (Settings_PresetDefinition_o *)0x0) {
    pSVar15 = (__this_01->fields).Errors;
    pSVar18 = "Experience is missing.";
  }
  else {
    if (settings != (Settings_InGameSet_o *)0x0) {
      bVar12 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
      if (bVar12) {
        if (Il2CppMethodInitialized_184344a2e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string)
          ;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_Settings_PresetDefinition_c_get_DefaultVariant_b__9_0);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition_c);
          Il2CppMethodInitialized_184344a2e = '\x01';
        }
        if ((experience->fields).Variants ==
            (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
label_181dbc236:
          variant = *(System_String_o **)g_data_184354e50->static_fields;
          local_e0 = variant;
        }
        else {
          pSVar16 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                               (experience->fields).Variants,
                               (MethodInfo_13C6500 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
          if ((TypeInfo_Settings_PresetDefinition_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
          }
          __this_02 = TypeInfo_Settings_PresetDefinition_c->static_fields->__9__9_0;
          if (__this_02 == (System_Func_string__bool__o *)0x0) {
            if ((TypeInfo_Settings_PresetDefinition_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
            }
            pIVar4 = (Il2CppObject *)TypeInfo_Settings_PresetDefinition_c->static_fields->__9;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
            System_Func_object__bool____ctor
                      ((System_Predicate_object__o *)__this_02,pIVar4,
                       (intptr_t)MethodInfo_Settings_PresetDefinition_c_get_DefaultVariant_b__9_0,
                       (MethodInfo_B61EB0 *)0x0);
            TypeInfo_Settings_PresetDefinition_c->static_fields->__9__9_0 = __this_02;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Settings_PresetDefinition_c->static_fields->__9__9_0,__this_02);
          }
          variant = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                               (System_Func_TSource__bool__o *)__this_02,
                               (MethodInfo_6BD2C0 *)
                               MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8);
          local_e0 = variant;
          if (variant == (System_String_o *)0x0) {
            __this = (experience->fields).Variants;
            if (__this == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar16 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                                 (MethodInfo_13C6500 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys)
            ;
            variant = System_Linq_Enumerable__FirstOrDefault_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                                 (MethodInfo_6BD090 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string)
            ;
            local_e0 = variant;
            if (variant == (System_String_o *)0x0) goto label_181dbc236;
          }
        }
      }
      bVar12 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
      if (!bVar12) {
        if ((((experience->fields).Variants ==
              (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) ||
            (bVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 (experience->fields).Variants,(Il2CppObject *)variant,
                                 (Il2CppObject **)&local_d8,
                                 (MethodInfo_14769C0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_string_TryGetValue
                                ), !bVar12)) || (local_d8 == (System_Collections_Generic_List_string__o *)0x0)
           ) {
          pSVar15 = (__this_01->fields).Errors;
          values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
          pSVar18 = "Unknown variant ";
          if (values == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((int)values->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          values->m_Items[0] = "Unknown variant ";
          Il2CppCodeGenWriteBarrier(values->m_Items,pSVar18);
          if ((uint)values->max_length < 2) {
            ThrowIndexOutOfRangeException();
          }
          values->m_Items[1] = variant;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,variant);
          pSVar18 = " for experience ";
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " for experience ";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar18);
            if ((uint)values->max_length < 4) {
              ThrowIndexOutOfRangeException();
            }
            pSVar18 = (experience->fields).Name;
            values->m_Items[3] = pSVar18;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar18);
            pSVar18 = ".";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ".";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar18);
              pSVar18 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              if (pSVar15 != (System_Collections_Generic_List_string__o *)0x0) {
                il2cpp_runtime_helper_180012890(pSVar15,pSVar18,MethodInfo_System_Collections_Generic_List_string_Add);
                return __this_01;
              }
              ThrowNullReferenceException();
            }
            ThrowIndexOutOfRangeException();
          }
          ThrowIndexOutOfRangeException();
        }
        child = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)child,(MethodInfo *)0x0);
        if (child == (Settings_PresetDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        (child->fields).UIRules = local_d8;
        Il2CppCodeGenWriteBarrier(&(child->fields).UIRules,local_d8);
        experience = Settings_PresetMerger__Merge(experience,child,(MethodInfo *)0x0);
        (__this_01->fields).Experience = experience;
        local_f8 = experience;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Experience,experience);
        if (experience == (Settings_PresetDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      if ((experience->fields)._uiRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
        pSVar17 = Settings_RuleParser__Parse
                            ((System_Collections_Generic_IEnumerable_string__o *)(experience->fields).UIRules,
                             (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
        (experience->fields)._uiRules = pSVar17;
        Il2CppCodeGenWriteBarrier(&(experience->fields)._uiRules,pSVar17);
      }
      pSVar17 = (experience->fields)._uiRules;
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      comparer = (System_Collections_Generic_IEqualityComparer_T__o *)il2cpp_runtime_helper_181882cf0(0);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string)
      ;
      local_e8 = __this_03;
      System_Collections_Generic_HashSet_object____ctor_176d450
                ((System_Collections_Generic_HashSet_object__o *)__this_03,comparer,
                 (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
      if (pSVar17 != (System_Collections_Generic_List_UIRule__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,
                   (System_Collections_Generic_List_T__o *)pSVar17,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
        local_a8 = (undefined1  [8])local_d0._0_8_;
        pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d0._8_8_;
        local_98 = local_c0;
        local_d0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_d0._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8;
label_181dbc3e0:
        bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
        rule = local_98;
        if (bVar12) {
          if ((local_98 == (Settings_UIRule_o *)0x0) ||
             (bVar12 = System_String__IsNullOrWhiteSpace((local_98->fields).SettingId,(MethodInfo *)0x0),
             bVar12)) {
            pSVar15 = (__this_01->fields).Errors;
            if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar15,"Experience contains a rule without a setting ID.",MethodInfo_System_Collections_Generic_List_string_Add)
            ;
            goto label_181dbc3e0;
          }
          if (__this_03 == (System_Collections_Generic_HashSet_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar12 = System_Collections_Generic_HashSet_object___Add
                             ((System_Collections_Generic_HashSet_object__o *)__this_03,
                              (Il2CppObject *)(rule->fields).SettingId,
                              (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          if (!bVar12) {
            pSVar15 = (__this_01->fields).Errors;
            pSVar18 = System_String__Concat_1969e50
                                ("Duplicate experience rule: ",(rule->fields).SettingId,(MethodInfo *)0x0);
            if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
label_181dbcf1b:
            il2cpp_runtime_helper_180012890(pSVar15,pSVar18,MethodInfo_System_Collections_Generic_List_string_Add);
            __this_03 = local_e8;
            goto label_181dbc3e0;
          }
          pSVar18 = (rule->fields).SettingId;
          if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
          }
          bVar12 = Settings_ExperienceRuleEngine__TryResolveSetting
                             (settings,pSVar18,&local_100,(MethodInfo *)0x0);
          pSVar10 = local_100;
          if (!bVar12) {
            pSVar18 = (rule->fields).SettingId;
            if (pSVar18 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar12 = System_String__StartsWith_19722c0(pSVar18,"mode.",5,(MethodInfo *)0x0);
            __this_03 = local_e8;
            if (bVar12) {
              pSVar8 = (settings->fields).Mode;
              if (pSVar8 == (Settings_InGameModeSettings_o *)0x0) {
                ThrowNullReferenceException();
              }
              if (((pSVar8->fields).Current ==
                   (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) ||
                 (iVar13 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                      (pSVar8->fields).Current,
                                      (MethodInfo_13CDEB0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Count
                                     ), iVar13 == 0)) goto label_181dbc3e0;
            }
            pSVar15 = (__this_01->fields).Errors;
            pSVar18 = System_String__Concat_1969e50
                                ("Unknown experience setting: ",(rule->fields).SettingId,(MethodInfo *)0x0);
            if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            goto label_181dbcf1b;
          }
          if (((rule->fields).Min.fields.hasValue != false) || ((rule->fields).Max.fields.hasValue != false))
          {
            pSVar15 = (__this_01->fields).Errors;
            if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
            }
            if (Il2CppMethodInitialized_184344a1f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_string_Add);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
              il2cpp_codegen_initialize_runtime_metadata(&"Range rule requires a numeric setting: ");
              il2cpp_codegen_initialize_runtime_metadata(&"Empty integer range for ");
              il2cpp_codegen_initialize_runtime_metadata(&"Empty numeric range for ");
              il2cpp_codegen_initialize_runtime_metadata(&".");
              Il2CppMethodInitialized_184344a1f = '\x01';
            }
            if (pSVar10 == (Settings_BaseSetting_o *)0x0) {
label_181dbc7bd:
              pSVar18 = System_String__Concat_1969e50
                                  ("Range rule requires a numeric setting: ",(rule->fields).SettingId,(MethodInfo *)0x0);
              if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_180012890(pSVar15,pSVar18,MethodInfo_System_Collections_Generic_List_string_Add);
            }
            else {
              pSVar5 = pSVar10->klass;
              bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
              if (((pSVar5->_2).typeHierarchyDepth < bVar1) ||
                 ((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
                local_f8 = experience;
                if (((pSVar5->_2).typeHierarchyDepth < bVar1) ||
                   ((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_FloatSetting)) goto label_181dbc7bd;
                if ((rule->fields).Min.fields.hasValue != false) {
                  fVar28 = System_Nullable_float___get_Value
                                     (&(rule->fields).Min,
                                      (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
                  *(float *)&(*(uint64_t *)((char *)pSVar10 + 0x20)) = fVar28;
                }
                if ((rule->fields).Max.fields.hasValue != false) {
                  fVar28 = System_Nullable_float___get_Value
                                     (&(rule->fields).Max,
                                      (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
                  *(float *)((longlong)&(*(uint64_t *)((char *)pSVar10 + 0x20)) + 4) = fVar28;
                }
                pfVar22 = (float *)((longlong)&(*(uint64_t *)((char *)pSVar10 + 0x20)) + 4);
                if (*pfVar22 <= *(float *)&(*(uint64_t *)((char *)pSVar10 + 0x20)) && *(float *)&(*(uint64_t *)((char *)pSVar10 + 0x20)) != *pfVar22) {
                  pSVar18 = System_String__Concat_1969b70
                                      ("Empty numeric range for ",(rule->fields).SettingId,".",
                                       (MethodInfo *)0x0);
                  if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  goto label_181dbc79c;
                }
              }
              else {
                if ((rule->fields).Min.fields.hasValue != false) {
                  pMVar23 = MethodInfo_System_Nullable_float_get_Value;
                  fVar28 = System_Nullable_float___get_Value
                                     (&(rule->fields).Min,
                                      (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  dVar9 = il2cpp_runtime_helper_1804f45c0((double)fVar28,pMVar23);
                  *(int *)&(*(uint64_t *)((char *)pSVar10 + 0x20)) = (int)dVar9;
                }
                if ((rule->fields).Max.fields.hasValue != false) {
                  pMVar23 = MethodInfo_System_Nullable_float_get_Value;
                  fVar28 = System_Nullable_float___get_Value
                                     (&(rule->fields).Max,
                                      (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  dVar9 = il2cpp_runtime_helper_1804f4690((double)fVar28,pMVar23);
                  *(int *)((longlong)&(*(uint64_t *)((char *)pSVar10 + 0x20)) + 4) = (int)dVar9;
                }
                if (*(int *)((longlong)&(*(uint64_t *)((char *)pSVar10 + 0x20)) + 4) < *(int *)&(*(uint64_t *)((char *)pSVar10 + 0x20))) {
                  pSVar18 = System_String__Concat_1969b70
                                      ("Empty integer range for ",(rule->fields).SettingId,".",
                                       (MethodInfo *)0x0);
                  if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
                    ThrowNullReferenceException();
                  }
label_181dbc79c:
                  il2cpp_runtime_helper_180012890(pSVar15,pSVar18,MethodInfo_System_Collections_Generic_List_string_Add);
                }
              }
            }
          }
          pSVar10 = local_100;
          if ((rule->fields).Type != 0) {
            if ((rule->fields).Type != 1) {
              pSVar18 = (rule->fields).SettingId;
              pIVar4 = (rule->fields).DefaultValue;
              pSVar15 = (__this_01->fields).Errors;
              if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
              }
              Settings_ExperienceRuleEngine__ApplyValue(pSVar10,pSVar18,pIVar4,pSVar15,(MethodInfo *)0x0);
            }
            pSVar10 = local_100;
            if (((rule->fields).Type != 0) && ((rule->fields).Type != 1)) {
              pSVar18 = (rule->fields).SettingId;
              pIVar4 = (rule->fields).DefaultValue;
              if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
              }
              bVar12 = Settings_ExperienceRuleEngine__MatchesDefaultValue
                                 (pSVar10,pSVar18,pIVar4,(MethodInfo *)0x0);
              if (!bVar12) {
                pSVar15 = (__this_01->fields).Errors;
                pSVar18 = System_String__Concat_1969b70
                                    ("Default value is outside the setting constraints for ",(rule->fields).SettingId,".",
                                     (MethodInfo *)0x0);
                if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_180012890(pSVar15,pSVar18,MethodInfo_System_Collections_Generic_List_string_Add);
              }
            }
          }
          bVar12 = System_String__Equals_196c550
                             ((rule->fields).SettingId,"general.MapName",5,(MethodInfo *)0x0);
          if (((bVar12) && (mapCategoryResolver != (System_Func_string__string__o *)0x0)) &&
             (local_100 != (Settings_BaseSetting_o *)0x0)) {
            bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if ((bVar1 <= (local_100->klass->_2).typeHierarchyDepth) &&
               ((local_100->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
              pSVar18 = (System_String_o *)
                        (*(code *)(mapCategoryResolver->fields).invoke_impl)
                                  ((mapCategoryResolver->fields).method_code,(*(uint64_t *)((char *)local_100 + 0x20)),
                                   (mapCategoryResolver->fields).method);
              bVar12 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
              if (!bVar12) {
                pSVar6 = (settings->fields).General;
                if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar7 = (pSVar6->fields).MapCategory;
                if (pSVar7 == (Settings_StringSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar18,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
            }
          }
          pSVar10 = local_100;
          if (((rule->fields).AllowedValues != (System_Collections_Generic_List_string__o *)0x0) &&
             (0 < (((rule->fields).AllowedValues)->fields)._size)) {
            pSVar18 = (rule->fields).SettingId;
            if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
            }
            bVar12 = Settings_ExperienceRuleEngine__MatchesAllowedValue
                               (pSVar10,pSVar18,rule,(MethodInfo *)0x0);
            if (!bVar12) {
              pSVar15 = (__this_01->fields).Errors;
              pSVar18 = System_String__Concat_1969b70
                                  ("Default value is not allowed for ",(rule->fields).SettingId,".",
                                   (MethodInfo *)0x0);
              if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_180012890(pSVar15,pSVar18,MethodInfo_System_Collections_Generic_List_string_Add);
            }
          }
          bVar12 = System_String__Equals_196c550
                             ((rule->fields).SettingId,"general.MapCategory",5,(MethodInfo *)0x0);
          if (((rule->fields).Type == 1) || ((rule->fields).DisableEditing != false)) {
            bVar26 = false;
          }
          else {
            bVar26 = !bVar12;
          }
          if ((rule->fields).Type == 0) {
            bVar27 = false;
          }
          else {
            bVar27 = (rule->fields).Type != 1;
          }
          pSVar14 = (__this_01->fields).Fields;
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceRuleField);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_04,(MethodInfo *)0x0
                    );
          if (__this_04 == (Settings_ExperienceRuleField_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar18 = (rule->fields).SettingId;
          (__this_04->fields).Id = pSVar18;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).Id,pSVar18);
          (__this_04->fields).Setting = local_100;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).Setting,local_100);
          (__this_04->fields).Rule = rule;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).Rule,rule);
          pSVar10 = local_100;
          (__this_04->fields).Visible = bVar26;
          (__this_04->fields).Editable = bVar26;
          if (((!bVar27) || (bVar26 != false)) || (bVar12)) {
            bVar12 = false;
          }
          else {
            pSVar18 = (rule->fields).SettingId;
            pIVar4 = (rule->fields).DefaultValue;
            if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
            }
            if (Il2CppMethodInitialized_184344a22 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
              Il2CppMethodInitialized_184344a22 = '\x01';
            }
            local_108[0] = false;
            local_f0 = 0;
            local_ec = 0.0;
            if (pIVar4 == (Il2CppObject *)0x0) {
              s = *(System_String_o **)g_data_184354e50->static_fields;
            }
            else {
              s = (System_String_o *)
                  (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
            }
            if (pSVar10 == (Settings_BaseSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            obj = (*(pSVar10->klass->vtable)._7_GetDefaultValue.methodPtr)
                            (pSVar10,(pSVar10->klass->vtable)._7_GetDefaultValue.method);
            pSVar5 = pSVar10->klass;
            bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if (((pSVar5->_2).typeHierarchyDepth < bVar1) ||
               ((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
              bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
              if (((pSVar5->_2).typeHierarchyDepth < bVar1) ||
                 (((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                   (Il2CppClass *)TypeInfo_Settings_BoolSetting ||
                  (obj == (System_Xml_Schema_XmlSchema_o *)0x0)))) {
label_181dbccc0:
                bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                if (((bVar1 <= (pSVar5->_2).typeHierarchyDepth) &&
                    ((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                     (Il2CppClass *)TypeInfo_Settings_IntSetting)) &&
                   (obj != (System_Xml_Schema_XmlSchema_o *)0x0)) {
                  pSVar21 = (System_Xml_Schema_XmlSchema_o *)0x0;
                  if (obj->klass == g_data_184354e08) {
                    pSVar21 = obj;
                  }
                  if (pSVar21 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                    if ((obj->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
                      il2cpp_codegen_raise_invalid_cast_exception();
                    }
                    piVar20 = il2cpp_object_unbox((Il2CppObject *)obj);
                    iVar3 = *piVar20;
                    if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine)
                      ;
                    }
                    bVar12 = Settings_ExperienceRuleEngine__TryParseInt(pSVar18,s,&local_f0,(MethodInfo *)0x0)
                    ;
                    if (bVar12) {
                      bVar12 = iVar3 != local_f0;
                    }
                    else {
                      bVar12 = true;
                    }
                    goto label_181dbce3f;
                  }
                }
                bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
                if (((bVar1 <= (pSVar5->_2).typeHierarchyDepth) &&
                    ((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                     (Il2CppClass *)TypeInfo_Settings_FloatSetting)) &&
                   (obj != (System_Xml_Schema_XmlSchema_o *)0x0)) {
                  pSVar21 = (System_Xml_Schema_XmlSchema_o *)0x0;
                  if (obj->klass == g_data_184354e38) {
                    pSVar21 = obj;
                  }
                  if (pSVar21 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                    if ((obj->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
                      il2cpp_codegen_raise_invalid_cast_exception();
                    }
                    pfVar22 = il2cpp_object_unbox((Il2CppObject *)obj);
                    fVar28 = *pfVar22;
                    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
                    }
                    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
                    bVar12 = System_Single__TryParse_1b4a540
                                       (s,0xa7,(System_IFormatProvider_o *)provider,&local_ec,
                                        (MethodInfo *)0x0);
                    fVar11 = local_ec;
                    if (bVar12) {
                      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                      }
                      bVar12 = 0.0001 <= ABS(fVar28 - fVar11);
                    }
                    else {
                      bVar12 = true;
                    }
                    goto label_181dbce3f;
                  }
                }
              }
              else {
                pSVar21 = (System_Xml_Schema_XmlSchema_o *)0x0;
                if ((Il2CppClass *)obj->klass == g_data_184354de8) {
                  pSVar21 = obj;
                }
                if (pSVar21 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181dbccc0;
                if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
                  il2cpp_codegen_raise_invalid_cast_exception();
                }
                pcVar19 = il2cpp_object_unbox((Il2CppObject *)obj);
                cVar2 = *pcVar19;
                if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_184354de8);
                }
                bVar12 = System_Boolean__TryParse(s,local_108,(MethodInfo *)0x0);
                if (bVar12) {
                  bVar12 = (bool)cVar2 != local_108[0];
                  goto label_181dbce3f;
                }
              }
              bVar12 = true;
            }
            else {
              if (obj == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_181dbcbe0:
                pSVar21 = *(System_Xml_Schema_XmlSchema_o **)g_data_184354e50->static_fields;
              }
              else {
                pSVar21 = (System_Xml_Schema_XmlSchema_o *)0x0;
                if (obj->klass == g_data_184354e50) {
                  pSVar21 = obj;
                }
                if (pSVar21 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181dbcbe0;
              }
              bVar12 = System_String__Equals_196c550((System_String_o *)pSVar21,s,5,(MethodInfo *)0x0);
              bVar12 = !bVar12;
            }
          }
label_181dbce3f:
          (__this_04->fields).Locked = bVar12;
          if (pSVar14 == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar14,__this_04,MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
          __this_03 = local_e8;
          __this_01 = local_b0;
          experience = local_f8;
          goto label_181dbc3e0;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                   MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
        pSVar18 = local_e0;
        ppSVar25 = &(experience->fields).Name;
        if (*ppSVar25 == (System_String_o *)0x0) {
          ppSVar25 = (System_String_o **)g_data_184354e50->static_fields;
        }
        pSVar7 = (settings->fields).ExperienceName;
        if (pSVar7 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)*ppSVar25,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar24 = &experience->fields;
          if (pSVar24->Category == (System_String_o *)0x0) {
            pSVar24 = (Settings_PresetDefinition_Fields *)g_data_184354e50->static_fields;
          }
          pSVar7 = (settings->fields).ExperienceCategory;
          if (pSVar7 != (Settings_StringSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar24->Category,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            ppSVar25 = &(experience->fields).SubCategory;
            if (*ppSVar25 == (System_String_o *)0x0) {
              ppSVar25 = (System_String_o **)g_data_184354e50->static_fields;
            }
            pSVar7 = (settings->fields).ExperienceSubcategory;
            if (pSVar7 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)*ppSVar25,
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              if (pSVar18 == (System_String_o *)0x0) {
                pSVar18 = *(System_String_o **)g_data_184354e50->static_fields;
              }
              pSVar7 = (settings->fields).ExperienceVariant;
              if (pSVar7 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar18,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                __this_00 = (settings->fields).Sandbox;
                if (__this_00 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)__this_00,false,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  return __this_01;
                }
              }
            }
          }
        }
      }
      goto label_181dbd16a;
    }
    pSVar15 = (__this_01->fields).Errors;
    pSVar18 = "Game settings are missing.";
  }
  if (pSVar15 != (System_Collections_Generic_List_string__o *)0x0) {
    il2cpp_runtime_helper_180012890(pSVar15,pSVar18,MethodInfo_System_Collections_Generic_List_string_Add);
    return __this_01;
  }
label_181dbd16a:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$Validate
// il2cpp: bool Settings_ExperienceRuleEngine__Validate (Settings_ExperienceRuleResult_o* result, const MethodInfo* method);
// 0x181dbe110
// eh: try 0x181dbe220..0x181dbe3b4 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dbe377: mov rdx, qword ptr [rip + 0x22c09ca]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose
// asm:   0x181dbe37e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dbe383: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dbe388: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dbe38d: test rcx, rcx
// asm:   0x181dbe390: jne 0x181dbe3b4
// asm:   0x181dbe3b4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Settings_ExperienceRuleEngine__Validate(Settings_ExperienceRuleResult_o *result,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  Il2CppClass *rule;
  Settings_BaseSetting_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *defaultValue;
  Il2CppObject *pIVar4;
  bool bVar5;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  
  if (Il2CppMethodInitialized_184344a1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    Il2CppMethodInitialized_184344a1d = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (result != (Settings_ExperienceRuleResult_o *)0x0) {
    if (Il2CppMethodInitialized_184344a1a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count)
      ;
      Il2CppMethodInitialized_184344a1a = '\x01';
    }
    pSVar1 = (result->fields).Errors;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_181dbe3a2:
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._size == 0) {
      __this = (result->fields).Fields;
      if (__this == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) goto label_181dbe3a2;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_T__o *)__this,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
      local_58.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
      local_58.fields._index = local_70._8_4_;
      local_58.fields._version = local_70._12_4_;
      local_58.fields._current = local_60;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = &local_58;
      do {
        do {
          do {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_58,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext
                              );
            pIVar4 = local_58.fields._current;
            if (!bVar5) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                         MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
              return true;
            }
            if (local_58.fields._current == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            rule = local_58.fields._current[2].klass;
            if (rule == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
          } while ((((Settings_UIRule_Fields *)&(rule->_1).name)->Type == 1) ||
                  (((Settings_UIRule_Fields *)&(rule->_1).name)->Type == 0));
          if (*(bool *)&(rule->_1).element_class != false) {
            pSVar2 = local_58.fields._current[1].monitor;
            pIVar3 = local_58.fields._current[1].klass;
            defaultValue = (rule->_1).byval_arg.data;
            if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
            }
            bVar5 = Settings_ExperienceRuleEngine__MatchesDefaultValue
                              (pSVar2,(System_String_o *)pIVar3,defaultValue,(MethodInfo *)0x0);
            if (!bVar5) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                         MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
              return false;
            }
          }
          if (((((System_Nullable_float__o *)&(rule->_1).byval_arg.bits)->fields).hasValue != false) ||
             (((System_Nullable_float__Fields *)&(rule->_1).this_arg.data)->hasValue != false)) {
            pSVar2 = pIVar4[1].monitor;
            if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
            }
            bVar5 = Settings_ExperienceRuleEngine__MatchesRange
                              (pSVar2,(Settings_UIRule_o *)rule,(MethodInfo *)0x0);
            if (!bVar5) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                         MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
              return false;
            }
          }
        } while ((*(System_Collections_Generic_List_string__o **)&(rule->_1).this_arg.bits ==
                  (System_Collections_Generic_List_string__o *)0x0) ||
                (((*(System_Collections_Generic_List_string__o **)&(rule->_1).this_arg.bits)->fields)._size <
                 1));
        pSVar2 = pIVar4[1].monitor;
        pIVar3 = pIVar4[1].klass;
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar5 = Settings_ExperienceRuleEngine__MatchesAllowedValue
                          (pSVar2,(System_String_o *)pIVar3,(Settings_UIRule_o *)rule,(MethodInfo *)0x0);
      } while (bVar5);
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                 MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
    }
  }
  return false;
}


// Settings.ExperienceRuleEngine$$TryResolveSetting
// il2cpp: bool Settings_ExperienceRuleEngine__TryResolveSetting (Settings_InGameSet_o* settings, System_String_o* id, Settings_BaseSetting_o** setting, const MethodInfo* method);
// 0x181dbde30

bool Settings_ExperienceRuleEngine__TryResolveSetting
               (Settings_InGameSet_o *settings,System_String_o *id,Settings_BaseSetting_o **setting,
               MethodInfo *method)

{
  byte bVar1;
  Settings_IntSetting_o *value;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Settings_InGameModeSettings_o *pSVar3;
  bool bVar4;
  int32_t length;
  System_String_o *pSVar5;
  System_String_o *a;
  Settings_BaseSetting_o *value_00;
  Settings_InGameMiscSettings_o *pSVar6;
  
  if (Il2CppMethodInitialized_184344a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"misc");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"mode");
    Il2CppMethodInitialized_184344a1e = '\x01';
  }
  *setting = (Settings_BaseSetting_o *)0x0;
  Il2CppCodeGenWriteBarrier(setting,(void *)0x0);
  if ((settings == (Settings_InGameSet_o *)0x0) ||
     (bVar4 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), bVar4)) {
    return false;
  }
  if (id != (System_String_o *)0x0) {
    length = System_String__IndexOf(id,0x2e,(MethodInfo *)0x0);
    if (length < 1) {
      return false;
    }
    if (length == (id->fields)._stringLength + -1) {
      return false;
    }
    pSVar5 = System_String__Substring_1972740(id,0,length,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_o *)0x0) {
      pSVar5 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
      a = System_String__Substring(id,length + 1,(MethodInfo *)0x0);
      bVar4 = System_String__op_Equality(pSVar5,"general",(MethodInfo *)0x0);
      if (bVar4) {
        bVar4 = System_String__op_Equality(a,"WeatherIndex",(MethodInfo *)0x0);
        if (bVar4) {
          value = (settings->fields).WeatherIndex;
          *setting = (Settings_BaseSetting_o *)value;
          Il2CppCodeGenWriteBarrier(setting,value);
          return true;
        }
        pSVar6 = (Settings_InGameMiscSettings_o *)(settings->fields).General;
      }
      else {
        bVar4 = System_String__op_Equality(pSVar5,"misc",(MethodInfo *)0x0);
        if (bVar4) {
          pSVar6 = (settings->fields).Misc;
        }
        else {
          bVar4 = System_String__op_Equality(pSVar5,"titan",(MethodInfo *)0x0);
          if (!bVar4) {
            bVar4 = System_String__op_Equality(pSVar5,"mode",(MethodInfo *)0x0);
            if (!bVar4) {
              return false;
            }
            pSVar3 = (settings->fields).Mode;
            if (pSVar3 != (Settings_InGameModeSettings_o *)0x0) {
              if ((pSVar3->fields).Current ==
                  (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
                return false;
              }
              bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 (pSVar3->fields).Current,(Il2CppObject *)a,(Il2CppObject **)setting,
                                 (MethodInfo_14769C0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue
                                );
              if (!bVar4) {
                return false;
              }
              return *setting != (Settings_BaseSetting_o *)0x0;
            }
            goto label_181dbe106;
          }
          pSVar6 = (Settings_InGameMiscSettings_o *)(settings->fields).Titan;
        }
      }
      if ((pSVar6 != (Settings_InGameMiscSettings_o *)0x0) &&
         (pSVar2 = (pSVar6->fields).Settings,
         pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
        bVar4 = System_Collections_Specialized_OrderedDictionary__Contains
                          (pSVar2,(Il2CppObject *)a,(MethodInfo *)0x0);
        if (!bVar4) {
          return false;
        }
        pSVar2 = (pSVar6->fields).Settings;
        if (pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          value_00 = (Settings_BaseSetting_o *)
                     System_Collections_Specialized_OrderedDictionary__get_Item
                               (pSVar2,(Il2CppObject *)a,(MethodInfo *)0x0);
          if (value_00 == (Settings_BaseSetting_o *)0x0) {
            *setting = (Settings_BaseSetting_o *)0x0;
          }
          else {
            bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
            if (((((Il2CppClass *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
               ((((Il2CppClass *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(value_00);
            }
            *setting = value_00;
            bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
            if (((((Il2CppClass *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
               ((((Il2CppClass *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(value_00);
            }
          }
          Il2CppCodeGenWriteBarrier(setting,value_00);
          return *setting != (Settings_BaseSetting_o *)0x0;
        }
      }
    }
  }
label_181dbe106:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$ApplyBounds
// il2cpp: void Settings_ExperienceRuleEngine__ApplyBounds (Settings_BaseSetting_o* setting, Settings_UIRule_o* rule, System_Collections_Generic_List_string__o* errors, const MethodInfo* method);
// 0x181dbb7d0

void Settings_ExperienceRuleEngine__ApplyBounds
               (Settings_BaseSetting_o *setting,Settings_UIRule_o *rule,
               System_Collections_Generic_List_string__o *errors,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  float fVar6;
  double dVar7;
  
  if (Il2CppMethodInitialized_184344a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Range rule requires a numeric setting: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Empty integer range for ");
    il2cpp_codegen_initialize_runtime_metadata(&"Empty numeric range for ");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184344a1f = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
label_181dbb9fa:
    if (rule == (Settings_UIRule_o *)0x0) goto label_181dbba39;
    pSVar4 = System_String__Concat_1969e50("Range rule requires a numeric setting: ",(rule->fields).SettingId,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = setting->klass;
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar3->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar3->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting))
      goto label_181dbb9fa;
      if (rule == (Settings_UIRule_o *)0x0) goto label_181dbba39;
      if ((rule->fields).Min.fields.hasValue != false) {
        fVar6 = System_Nullable_float___get_Value
                          (&(rule->fields).Min,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value
                          );
        *(float *)&(*(uint64_t *)((char *)setting + 0x20)) = fVar6;
      }
      if ((rule->fields).Max.fields.hasValue != false) {
        fVar6 = System_Nullable_float___get_Value
                          (&(rule->fields).Max,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value
                          );
        *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4) = fVar6;
      }
      pfVar1 = (float *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
      if (*(float *)&(*(uint64_t *)((char *)setting + 0x20)) < *pfVar1 || *(float *)&(*(uint64_t *)((char *)setting + 0x20)) == *pfVar1) {
        return;
      }
      pSVar4 = System_String__Concat_1969b70
                         ("Empty numeric range for ",(rule->fields).SettingId,".",
                          (MethodInfo *)0x0);
    }
    else {
      if (rule == (Settings_UIRule_o *)0x0) goto label_181dbba39;
      if ((rule->fields).Min.fields.hasValue != false) {
        pMVar5 = MethodInfo_System_Nullable_float_get_Value;
        fVar6 = System_Nullable_float___get_Value
                          (&(rule->fields).Min,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value
                          );
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar7 = il2cpp_runtime_helper_1804f45c0((double)fVar6,pMVar5);
        *(int *)&(*(uint64_t *)((char *)setting + 0x20)) = (int)dVar7;
      }
      if ((rule->fields).Max.fields.hasValue != false) {
        pMVar5 = MethodInfo_System_Nullable_float_get_Value;
        fVar6 = System_Nullable_float___get_Value
                          (&(rule->fields).Max,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value
                          );
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar7 = il2cpp_runtime_helper_1804f4690((double)fVar6,pMVar5);
        *(int *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4) = (int)dVar7;
      }
      if (*(int *)&(*(uint64_t *)((char *)setting + 0x20)) <= *(int *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4)) {
        return;
      }
      pSVar4 = System_String__Concat_1969b70
                         ("Empty integer range for ",(rule->fields).SettingId,".",
                          (MethodInfo *)0x0);
    }
  }
  if (errors != (System_Collections_Generic_List_string__o *)0x0) {
    il2cpp_runtime_helper_180012890(errors,pSVar4,MethodInfo_System_Collections_Generic_List_string_Add);
    return;
  }
label_181dbba39:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$ApplyValue
// il2cpp: void Settings_ExperienceRuleEngine__ApplyValue (Settings_BaseSetting_o* setting, System_String_o* id, Il2CppObject* rawValue, System_Collections_Generic_List_string__o* errors, const MethodInfo* method);
// 0x181dbba40
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dbbc24: mov rcx, qword ptr [rip + 0x22ff59d]  ; "Invalid boolean value for "
// asm:   0x181dbbc4b: mov r8, qword ptr [rip + 0x23204e6]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x181dbbc52: mov rdx, rax
// asm:   0x181dbbc55: mov rcx, rdi
// asm:   0x181dbbc58: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x181dbbc5d: jmp 0x181dbbbb8
// asm:   0x181dbbc62: mov r8, qword ptr [rip + 0x22d9fdf]  ; MethodInfo_Settings_TypedSetting_bool_set_Value
// asm:   0x181dbbc69: mov rcx, rbx
// asm:   0x181dbbc6c: movzx edx, byte ptr [rsp + 0x70]
// asm:   0x181dbbc71: call 0x180e8f540  ; Settings_TypedSetting_bool___set_Value()
// asm:   0x181dbbc76: jmp 0x181dbbbb8
// asm:   0x181dbbccf: mov rcx, qword ptr [rip + 0x2303232]  ; "Invalid integer value for "
// asm:   0x181dbbcd6: jmp 0x181dbbc2b
// asm:   0x181dbbcdb: mov r8, qword ptr [rip + 0x22da65e]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x181dbbce2: mov rcx, rbx
// asm:   0x181dbbce5: mov edx, dword ptr [rsp + 0x30]
// asm:   0x181dbbce9: call 0x180e8f570  ; Settings_TypedSetting_int___set_Value()
// asm:   0x181dbbcee: jmp 0x181dbbbb8
// asm:   0x181dbbd55: mov rcx, qword ptr [rip + 0x230440c]  ; "Invalid numeric value for "
// asm:   0x181dbbd5c: jmp 0x181dbbc2b
// asm:   0x181dbbd61: mov r8, qword ptr [rip + 0x22da958]  ; MethodInfo_Settings_TypedSetting_float_set_Value
// asm:   0x181dbbd68: mov rcx, rbx
// asm:   0x181dbbd6b: movss xmm1, dword ptr [rsp + 0x34]
// asm:   0x181dbbd71: call 0x180e8f490  ; Settings_TypedSetting_float___set_Value()
// asm:   0x181dbbd76: jmp 0x181dbbbb8

void Settings_ExperienceRuleEngine__ApplyValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Il2CppObject *rawValue,
               System_Collections_Generic_List_string__o *errors,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *str0;
  bool local_res18 [16];
  int32_t local_28;
  float local_24 [3];
  
  if (Il2CppMethodInitialized_184344a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid numeric value for ");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid boolean value for ");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unsupported experience setting type: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid integer value for ");
    Il2CppMethodInitialized_184344a20 = '\x01';
  }
  local_res18[0] = false;
  local_28 = 0;
  local_24[0] = 0.0;
  if (rawValue == (Il2CppObject *)0x0) {
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar4 = (System_String_o *)
             (*rawValue->klass->vtable[3].methodPtr)(rawValue,rawValue->klass->vtable[3].method);
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
label_181dbbd7b:
    pSVar4 = System_String__Concat_1969e50("Unsupported experience setting type: ",id,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = setting->klass;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)setting,(Il2CppObject *)pSVar4,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      return;
    }
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
           ) goto label_181dbbd7b;
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar3 = System_Single__TryParse_1b4a540
                          (pSVar4,0xa7,(System_IFormatProvider_o *)provider,local_24,(MethodInfo *)0x0);
        str0 = "Invalid numeric value for ";
        if (bVar3) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)setting,local_24[0],
                     (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          return;
        }
      }
      else {
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar3 = Settings_ExperienceRuleEngine__TryParseInt(id,pSVar4,&local_28,(MethodInfo *)0x0);
        str0 = "Invalid integer value for ";
        if (bVar3) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)setting,local_28,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          return;
        }
      }
    }
    else {
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      bVar3 = System_Boolean__TryParse(pSVar4,local_res18,(MethodInfo *)0x0);
      str0 = "Invalid boolean value for ";
      if (bVar3) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)setting,local_res18[0],
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return;
      }
    }
    pSVar4 = System_String__Concat_1969590(str0,id,": ",pSVar4,(MethodInfo *)0x0);
  }
  if (errors != (System_Collections_Generic_List_string__o *)0x0) {
    il2cpp_runtime_helper_180012890(errors,pSVar4,MethodInfo_System_Collections_Generic_List_string_Add);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$TryParseInt
// il2cpp: bool Settings_ExperienceRuleEngine__TryParseInt (System_String_o* id, System_String_o* value, int32_t* parsed, const MethodInfo* method);
// 0x181dbdd10

bool Settings_ExperienceRuleEngine__TryParseInt
               (System_String_o *id,System_String_o *value,int32_t *parsed,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this;
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  
  if (Il2CppMethodInitialized_184344a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    Il2CppMethodInitialized_184344a21 = '\x01';
  }
  bVar1 = System_String__Equals_196c550(id,"general.Difficulty",5,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
    }
    __this = TypeInfo_Settings_ExperienceRuleEngine->static_fields->DifficultyValues;
    if (__this == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)value,
                       (UnityEngine_UIElements_TextureId_o *)parsed,
                       (MethodInfo_1461BD0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    if (bVar1) {
      return true;
    }
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse_1b29d60
                    (value,7,(System_IFormatProvider_o *)provider,parsed,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.ExperienceRuleEngine$$ChangesDefaultValue
// il2cpp: bool Settings_ExperienceRuleEngine__ChangesDefaultValue (Settings_BaseSetting_o* setting, System_String_o* id, Il2CppObject* ruleValue, const MethodInfo* method);
// 0x181dbd210

bool Settings_ExperienceRuleEngine__ChangesDefaultValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Il2CppObject *ruleValue,MethodInfo *method
               )

{
  float fVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  Settings_BaseSetting_c *pSVar5;
  float fVar6;
  bool bVar7;
  System_String_o *s;
  System_Xml_Schema_XmlSchema_o *obj;
  char *pcVar8;
  int *piVar9;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  float *pfVar11;
  System_Globalization_CultureInfo_o *provider;
  bool local_res18 [16];
  int32_t local_38;
  float local_34 [11];
  
  if (Il2CppMethodInitialized_184344a22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184344a22 = '\x01';
  }
  local_res18[0] = false;
  local_38 = 0;
  local_34[0] = 0.0;
  if (ruleValue == (Il2CppObject *)0x0) {
    s = *(System_String_o **)g_data_184354e50->static_fields;
  }
  else {
    s = (System_String_o *)
        (*ruleValue->klass->vtable[3].methodPtr)(ruleValue,ruleValue->klass->vtable[3].method);
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (*(setting->klass->vtable)._7_GetDefaultValue.methodPtr)
                  (setting,(setting->klass->vtable)._7_GetDefaultValue.method);
  pSVar5 = setting->klass;
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if (((pSVar5->_2).typeHierarchyDepth < bVar2) ||
     ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= (pSVar5->_2).typeHierarchyDepth) &&
       (((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting &&
        (obj != (System_Xml_Schema_XmlSchema_o *)0x0)))) {
      pSVar10 = (System_Xml_Schema_XmlSchema_o *)0x0;
      if ((Il2CppClass *)obj->klass == g_data_184354de8) {
        pSVar10 = obj;
      }
      if (pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pcVar8 = il2cpp_object_unbox((Il2CppObject *)obj);
        cVar3 = *pcVar8;
        if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354de8);
        }
        bVar7 = System_Boolean__TryParse(s,local_res18,(MethodInfo *)0x0);
        if (!bVar7) {
          return true;
        }
        return (bool)cVar3 != local_res18[0];
      }
    }
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((bVar2 <= (pSVar5->_2).typeHierarchyDepth) &&
        ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) &&
       (obj != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      pSVar10 = (System_Xml_Schema_XmlSchema_o *)0x0;
      if (obj->klass == g_data_184354e08) {
        pSVar10 = obj;
      }
      if (pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar9 = il2cpp_object_unbox((Il2CppObject *)obj);
        iVar4 = *piVar9;
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar7 = Settings_ExperienceRuleEngine__TryParseInt(id,s,&local_38,(MethodInfo *)0x0);
        if (!bVar7) {
          return true;
        }
        return iVar4 != local_38;
      }
    }
    bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((bVar2 <= (pSVar5->_2).typeHierarchyDepth) &&
        ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting))
       && (obj != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      pSVar10 = (System_Xml_Schema_XmlSchema_o *)0x0;
      if (obj->klass == g_data_184354e38) {
        pSVar10 = obj;
      }
      if (pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar11 = il2cpp_object_unbox((Il2CppObject *)obj);
        fVar1 = *pfVar11;
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar7 = System_Single__TryParse_1b4a540
                          (s,0xa7,(System_IFormatProvider_o *)provider,local_34,(MethodInfo *)0x0);
        fVar6 = local_34[0];
        if (bVar7) {
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          bVar7 = 0.0001 <= ABS(fVar1 - fVar6);
        }
        else {
          bVar7 = true;
        }
        return bVar7;
      }
    }
    return true;
  }
  if (obj != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar10 = (System_Xml_Schema_XmlSchema_o *)0x0;
    if (obj->klass == g_data_184354e50) {
      pSVar10 = obj;
    }
    if (pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181dbd340;
  }
  pSVar10 = *(System_Xml_Schema_XmlSchema_o **)g_data_184354e50->static_fields;
label_181dbd340:
  bVar7 = System_String__Equals_196c550((System_String_o *)pSVar10,s,5,(MethodInfo *)0x0);
  return !bVar7;
}


// Settings.ExperienceRuleEngine$$MatchesDefaultValue
// il2cpp: bool Settings_ExperienceRuleEngine__MatchesDefaultValue (Settings_BaseSetting_o* setting, System_String_o* id, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x181dbd8a0

bool Settings_ExperienceRuleEngine__MatchesDefaultValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Il2CppObject *defaultValue,
               MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  float fVar4;
  bool bVar5;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  bool local_res18 [16];
  int32_t local_38;
  float local_34 [11];
  
  if (Il2CppMethodInitialized_184344a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344a23 = '\x01';
  }
  local_res18[0] = false;
  local_38 = 0;
  local_34[0] = 0.0;
  if (defaultValue == (Il2CppObject *)0x0) {
    s = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    s = (System_String_o *)
        (*defaultValue->klass->vtable[3].methodPtr)(defaultValue,defaultValue->klass->vtable[3].method);
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = setting->klass;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= (pSVar3->_2).typeHierarchyDepth) &&
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      bVar5 = System_String__Equals_196c550((*(uint64_t *)((char *)setting + 0x20)),s,5,(MethodInfo *)0x0);
      return bVar5;
    }
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar3->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar3->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar2 <= (pSVar3->_2).typeHierarchyDepth) &&
           ((pSVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)
           ) {
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          bVar5 = System_Single__TryParse_1b4a540
                            (s,0xa7,(System_IFormatProvider_o *)provider,local_34,(MethodInfo *)0x0);
          fVar4 = local_34[0];
          if (bVar5) {
            fVar1 = *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            return ABS(fVar1 - fVar4) < 0.0001;
          }
        }
      }
      else {
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar5 = Settings_ExperienceRuleEngine__TryParseInt(id,s,&local_38,(MethodInfo *)0x0);
        if (bVar5) {
          return *(int *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4) == local_38;
        }
      }
    }
    else {
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      bVar5 = System_Boolean__TryParse(s,local_res18,(MethodInfo *)0x0);
      if (bVar5) {
        return (bool)*(char *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 1) == local_res18[0];
      }
    }
  }
  return false;
}


// Settings.ExperienceRuleEngine$$MatchesRange
// il2cpp: bool Settings_ExperienceRuleEngine__MatchesRange (Settings_BaseSetting_o* setting, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x181dbdbc0

bool Settings_ExperienceRuleEngine__MatchesRange
               (Settings_BaseSetting_o *setting,Settings_UIRule_o *rule,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184344a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344a24 = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    return false;
  }
  pSVar2 = setting->klass;
  bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((pSVar2->_2).typeHierarchyDepth < bVar1) {
      return false;
    }
    if ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting) {
      return false;
    }
    fVar4 = *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
  }
  else {
    fVar4 = (float)*(int *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
  }
  if (rule == (Settings_UIRule_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((rule->fields).Min.fields.hasValue != false) &&
     (fVar3 = System_Nullable_float___get_Value
                        (&(rule->fields).Min,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value),
     fVar4 < fVar3)) {
    return false;
  }
  if ((rule->fields).Max.fields.hasValue != false) {
    fVar3 = System_Nullable_float___get_Value
                      (&(rule->fields).Max,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    return fVar4 <= fVar3;
  }
  return true;
}


// Settings.ExperienceRuleEngine$$MatchesAllowedValue
// il2cpp: bool Settings_ExperienceRuleEngine__MatchesAllowedValue (Settings_BaseSetting_o* setting, System_String_o* id, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x181dbd5f0

bool Settings_ExperienceRuleEngine__MatchesAllowedValue
               (Settings_BaseSetting_o *setting,System_String_o *id,Settings_UIRule_o *rule,MethodInfo *method
               )

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Globalization_CultureInfo_o *pSVar5;
  bool local_res8 [8];
  int32_t local_28;
  float local_24;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_184344a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    Il2CppMethodInitialized_184344a25 = '\x01';
  }
  local_res8[0] = false;
  local_28 = 0;
  local_24 = 0.0;
  if (setting == (Settings_BaseSetting_o *)0x0) {
    return false;
  }
  pSVar2 = setting->klass;
  bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((pSVar2->_2).typeHierarchyDepth < bVar1) {
          return false;
        }
        if ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
        {
          return false;
        }
        local_24 = *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar4 = System_Single__ToString_1b49fe0
                           (&local_24,(System_IFormatProvider_o *)pSVar5,(MethodInfo *)0x0);
      }
      else {
        bVar3 = System_String__Equals_196c550(id,"general.Difficulty",5,(MethodInfo *)0x0);
        if (bVar3) {
          local_20.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
          local_10 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
          local_20.monitor = &g_data_ffffffffffffffff;
          pSVar4 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
        }
        else {
          local_28 = *(int32_t *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar4 = System_Int32__ToString_1b29900
                             (&local_28,(System_IFormatProvider_o *)pSVar5,(MethodInfo *)0x0);
        }
      }
    }
    else {
      local_res8[0] = *(bool *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 1);
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      pSVar4 = System_Boolean__ToString(local_res8,(MethodInfo *)0x0);
      if (pSVar4 == (System_String_o *)0x0) goto label_181dbd899;
      pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
    }
  }
  else {
    pSVar4 = (*(uint64_t *)((char *)setting + 0x20));
  }
  if (rule != (Settings_UIRule_o *)0x0) {
    bVar3 = Settings_UIRule__MatchesAllowedValues(rule,pSVar4,(MethodInfo *)0x0);
    return bVar3;
  }
label_181dbd899:
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleEngine$$.cctor
// il2cpp: void Settings_ExperienceRuleEngine___cctor (const MethodInfo* method);
// 0x181dbe3c0

void Settings_ExperienceRuleEngine___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__int__o *__this;
  
  if (Il2CppMethodInitialized_184344a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor_40d6170);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"hard");
    il2cpp_codegen_initialize_runtime_metadata(&"training");
    il2cpp_codegen_initialize_runtime_metadata(&"abnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"easy");
    il2cpp_codegen_initialize_runtime_metadata(&"normal");
    Il2CppMethodInitialized_184344a26 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int)
  ;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor_1453150
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor_40d6170);
  if (__this != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Add
              ((System_Collections_Generic_Dictionary_object__int__o *)__this,
               (Il2CppObject *)"training",0,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    System_Collections_Generic_Dictionary_object__int___Add
              ((System_Collections_Generic_Dictionary_object__int__o *)__this,
               (Il2CppObject *)"easy",1,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    System_Collections_Generic_Dictionary_object__int___Add
              ((System_Collections_Generic_Dictionary_object__int__o *)__this,
               (Il2CppObject *)"normal",2,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    System_Collections_Generic_Dictionary_object__int___Add
              ((System_Collections_Generic_Dictionary_object__int__o *)__this,
               (Il2CppObject *)"hard",3,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    System_Collections_Generic_Dictionary_object__int___Add
              ((System_Collections_Generic_Dictionary_object__int__o *)__this,
               (Il2CppObject *)"abnormal",4,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    TypeInfo_Settings_ExperienceRuleEngine->static_fields->DifficultyValues = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_ExperienceRuleEngine->static_fields->DifficultyValues,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


