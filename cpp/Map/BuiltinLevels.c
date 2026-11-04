// Type: Map.BuiltinLevels
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/BuiltinLevels.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinLevels.cs
// --------------------------------

// Map.BuiltinLevels.BuiltinExperienceDefinition$$.ctor
// il2cpp: void Map_BuiltinLevels_BuiltinExperienceDefinition___ctor (Map_BuiltinLevels_BuiltinExperienceDefinition_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_BuiltinLevels_BuiltinExperienceDefinition___ctor(Map_BuiltinLevels_BuiltinExperienceDefinition_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c$$.cctor
// il2cpp: void Map_BuiltinLevels___c___cctor (const MethodInfo* method);
// 0x181e9ad30

void Map_BuiltinLevels___c___cctor(MethodInfo *method)

{
  Map_BuiltinLevels___c_o *__this;
  
  if (Il2CppMethodInitialized_18434502f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    Il2CppMethodInitialized_18434502f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Map_BuiltinLevels_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9,__this);
  return;
}


// Map.BuiltinLevels.<>c$$.ctor
// il2cpp: void Map_BuiltinLevels___c___ctor (Map_BuiltinLevels___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_BuiltinLevels___c___ctor(Map_BuiltinLevels___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c$$<ResolveExperiencePreview>b__13_0
// il2cpp: bool Map_BuiltinLevels___c___ResolveExperiencePreview_b__13_0 (Map_BuiltinLevels___c_o* __this, System_String_o* path, const MethodInfo* method);
// 0x181e9a800

bool
Map_BuiltinLevels___c___ResolveExperiencePreview_b__13_0(Map_BuiltinLevels___c_o* __this, System_String_o* path, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(line,(MethodInfo *)0x0);
  return !bVar1;
}


// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__16_0
// il2cpp: bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__16_0 (Map_BuiltinLevels___c_o* __this, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x181e9a5a0

bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__16_0
               (Map_BuiltinLevels___c_o *__this,Settings_UIRule_o *rule,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345030 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    Il2CppMethodInitialized_184345030 = '\x01';
  }
  if (rule != (Settings_UIRule_o *)0x0) {
    bVar1 = System_String__op_Equality((rule->fields).SettingId,"general.MapName",(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__16_1
// il2cpp: bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__16_1 (Map_BuiltinLevels___c_o* __this, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x181e9a5f0

bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__16_1
               (Map_BuiltinLevels___c_o *__this,Settings_UIRule_o *rule,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    Il2CppMethodInitialized_184345031 = '\x01';
  }
  if (rule != (Settings_UIRule_o *)0x0) {
    bVar1 = System_String__op_Equality((rule->fields).SettingId,"general.MapCategory",(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__16_2
// il2cpp: bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__16_2 (Map_BuiltinLevels___c_o* __this, System_String_o* rule, const MethodInfo* method);
// 0x181e9a640

bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__16_2
               (Map_BuiltinLevels___c_o *__this,System_String_o *rule,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *rawRules;
  System_Collections_Generic_List_UIRule__o *__this_00;
  Settings_UIRule_o *pSVar2;
  
  if (Il2CppMethodInitialized_184345032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    Il2CppMethodInitialized_184345032 = '\x01';
  }
  rawRules = SZArrayNew(TypeInfo_string_array,1);
  if (rawRules != (Il2CppObject *)0x0) {
    if (*(int *)&rawRules[1].monitor == 0) {
      ThrowIndexOutOfRangeException();
    }
    rawRules[2].klass = (Il2CppClass *)rule;
    Il2CppCodeGenWriteBarrier(&rawRules[2].klass,rule);
    __this_00 = Settings_RuleParser__Parse
                          ((System_Collections_Generic_IEnumerable_string__o *)rawRules,
                           (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_UIRule__o *)0x0) {
      pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_UIRule_get_Item);
      if (pSVar2 != (Settings_UIRule_o *)0x0) {
        bVar1 = System_String__Equals_196c550
                          ((pSVar2->fields).SettingId,"general.MapName",5,(MethodInfo *)0x0);
        return !bVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels.<>c$$<ComposeUIRules>b__18_0
// il2cpp: bool Map_BuiltinLevels___c___ComposeUIRules_b__18_0 (Map_BuiltinLevels___c_o* __this, System_String_o* rule, const MethodInfo* method);
// 0x1808eb7f0

bool
Map_BuiltinLevels___c___ComposeUIRules_b__18_0(Map_BuiltinLevels___c_o* __this, System_String_o* rule, MethodInfo* method)

{
  return i != (Il2CppObject *)0x0;
}


// Map.BuiltinLevels.<>c$$<GetTxtFiles>b__47_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetTxtFiles_b__47_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x181e9a7b0

System_String_o *
Map_BuiltinLevels___c___GetTxtFiles_b__47_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_184345033 = '\x01';
  }
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar1 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.BuiltinLevels.<>c$$<GetClFiles>b__48_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetClFiles_b__48_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x181e9a550

System_String_o *
Map_BuiltinLevels___c___GetClFiles_b__48_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345034 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_184345034 = '\x01';
  }
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar1 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.BuiltinLevels.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Map_BuiltinLevels___c__DisplayClass11_0___ctor (Map_BuiltinLevels___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_BuiltinLevels___c__DisplayClass11_0___ctor(Map_BuiltinLevels___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c__DisplayClass11_0$$<HasExperienceScoring>b__0
// il2cpp: bool Map_BuiltinLevels___c__DisplayClass11_0___HasExperienceScoring_b__0 (Map_BuiltinLevels___c__DisplayClass11_0_o* __this, Map_Experience_o* experience, const MethodInfo* method);
// 0x181e9aa30

bool Map_BuiltinLevels___c__DisplayClass11_0___HasExperienceScoring_b__0
               (Map_BuiltinLevels___c__DisplayClass11_0_o *__this,Map_Experience_o *experience,
               MethodInfo *method)

{
  bool bVar1;
  
  if (experience == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((experience->fields).HasScoring != false) {
    bVar1 = System_String__Equals_196c550
                      ((experience->fields).Category,(__this->fields).category,5,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__Equals_196c550
                        ((experience->fields).SubCategory,(__this->fields).subCategory,5,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__Equals_196c550
                          ((experience->fields).Name,(__this->fields).name,5,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// Map.BuiltinLevels.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Map_BuiltinLevels___c__DisplayClass15_0___ctor (Map_BuiltinLevels___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_BuiltinLevels___c__DisplayClass15_0___ctor(Map_BuiltinLevels___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c__DisplayClass15_0$$<FindExperience>b__0
// il2cpp: bool Map_BuiltinLevels___c__DisplayClass15_0___FindExperience_b__0 (Map_BuiltinLevels___c__DisplayClass15_0_o* __this, Map_BuiltinLevels_BuiltinExperienceDefinition_o* definition, const MethodInfo* method);
// 0x181e9aac0

bool Map_BuiltinLevels___c__DisplayClass15_0___FindExperience_b__0
               (Map_BuiltinLevels___c__DisplayClass15_0_o *__this,
               Map_BuiltinLevels_BuiltinExperienceDefinition_o *definition,MethodInfo *method)

{
  bool bVar1;
  
  if (definition != (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)0x0) {
    bVar1 = System_String__Equals_196c550((definition->fields).Name,(__this->fields).name,5,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$.ctor
// il2cpp: void Map_BuiltinLevels__GetExperienceDefinitions_d__16___ctor (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Map_BuiltinLevels__GetExperienceDefinitions_d__16___ctor(Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$System.IDisposable.Dispose
// il2cpp: void Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_IDisposable_Dispose (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, const MethodInfo* method);
// 0x180547020

void
Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_IDisposable_Dispose(Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, MethodInfo* method)

{
  return;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$MoveNext
// il2cpp: bool Map_BuiltinLevels__GetExperienceDefinitions_d__16__MoveNext (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, const MethodInfo* method);
// 0x181e98410

bool Map_BuiltinLevels__GetExperienceDefinitions_d__16__MoveNext
               (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  undefined8 uVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  System_Collections_Generic_List_T__o *pSVar9;
  undefined8 uVar10;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar11;
  bool bVar12;
  undefined8 *puVar13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  System_Xml_Schema_XmlSchema_o *pSVar16;
  System_String_o *pSVar17;
  SimpleJSONFixed_JSONNode_array *ruleSets;
  Il2CppObject *pIVar18;
  System_Collections_Generic_List_string__o *pSVar19;
  System_Collections_Generic_Dictionary_string__List_string___o *pSVar20;
  System_Collections_Generic_List_UIRule__o *pSVar21;
  System_Func_UIRule__bool__o *pSVar22;
  Settings_UIRule_o *query;
  Settings_UIRule_o *categoryQuery;
  System_String_array *pSVar23;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Map_BuiltinLevels_BuiltinExperienceDefinition_o *pMVar24;
  System_String_o *pSVar25;
  Il2CppClass *klass;
  System_IO_InvalidDataException_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *pSVar26;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_c8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_b8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  undefined1 local_88 [96];
  
  if (Il2CppMethodInitialized_184345035 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_UIRule);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_UIRule_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__16_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__16_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"!general.MapName=");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperiencePerMap");
    il2cpp_codegen_initialize_runtime_metadata(&"HasScoring");
    il2cpp_codegen_initialize_runtime_metadata(&"UIRules");
    il2cpp_codegen_initialize_runtime_metadata(&"SubCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Experiences");
    Il2CppMethodInitialized_184345035 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar15 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar12) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar15 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
      if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        bVar12 = (*(pSVar15->klass->vtable)._28_HasKey.methodPtr)(pSVar15,(MethodInfo *)"Experiences")
        ;
        if (!bVar12) {
          return false;
        }
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar15 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
        if ((pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar15,(MethodInfo *)"Experiences"),
           pSVar16 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
          puVar13 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar16->klass)->vtable[32].methodPtr)(local_88);
          pSVar26 = &(__this->fields).__7__wrap1.fields.m_Object;
          pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar13[1];
          uVar6 = puVar13[2];
          pIVar18 = (Il2CppObject *)puVar13[3];
          pIVar7 = (Il2CppObject *)puVar13[4];
          uVar8 = puVar13[5];
          pSVar9 = (System_Collections_Generic_List_T__o *)puVar13[6];
          uVar10 = puVar13[7];
          pSVar15 = (SimpleJSONFixed_JSONNode_o *)puVar13[8];
          *(undefined8 *)&(__this->fields).__7__wrap1.fields = *puVar13;
          (__this->fields).__7__wrap1.fields.m_Object.fields._dictionary = pSVar5;
          pSVar11 = &(__this->fields).__7__wrap1;
          (pSVar11->fields).m_Object.fields._version = (int)uVar6;
          (pSVar11->fields).m_Object.fields._index = (int)((ulonglong)uVar6 >> 0x20);
          (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.key = pIVar18;
          (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.value = pIVar7;
          *(undefined8 *)&(__this->fields).__7__wrap1.fields.m_Object.fields._getEnumeratorRetType = uVar8;
          (__this->fields).__7__wrap1.fields.m_Array.fields._list = pSVar9;
          pSVar11 = &(__this->fields).__7__wrap1;
          (pSVar11->fields).m_Array.fields._index = (int)uVar10;
          (pSVar11->fields).m_Array.fields._version = (int)((ulonglong)uVar10 >> 0x20);
          (__this->fields).__7__wrap1.fields.m_Array.fields._current = pSVar15;
          goto label_181e986d6;
        }
      }
      goto label_181e99299;
    }
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      goto label_181e989a0;
    }
    if (iVar2 == 2) {
      piVar1 = &(__this->fields).__7__wrap14;
      *piVar1 = *piVar1 + 1;
      (__this->fields).__1__state = -1;
label_181e98eb2:
      pSVar23 = (__this->fields).__7__wrap13;
      if (pSVar23 != (System_String_array *)0x0) {
        if ((__this->fields).__7__wrap14 < (int)pSVar23->max_length) {
          pSVar23 = (__this->fields).__7__wrap13;
          if (pSVar23 != (System_String_array *)0x0) {
            uVar3 = (__this->fields).__7__wrap14;
            if ((uint)pSVar23->max_length <= uVar3) {
label_181e99293:
              ThrowIndexOutOfRangeException();
            }
            pSVar17 = pSVar23->m_Items[(int)uVar3];
            pSVar19 = (__this->fields)._rules_5__11;
            if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
            }
            __this_00 = TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_2;
            if (__this_00 == (System_Func_string__bool__o *)0x0) {
              if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
              }
              pIVar18 = (Il2CppObject *)TypeInfo_Map_BuiltinLevels_c->static_fields->__9;
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
              System_Func_object__bool____ctor
                        ((System_Predicate_object__o *)__this_00,pIVar18,
                         (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__16_2,
                         (MethodInfo_B61EB0 *)0x0);
              TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_2 = __this_00;
              Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_2,__this_00);
            }
            source = System_Linq_Enumerable__Where_float_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,
                                (System_Func_TSource__bool__o *)__this_00,
                                (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
            pSVar19 = (System_Collections_Generic_List_string__o *)
                      System_Linq_Enumerable__ToList_object_
                                (source,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
            pSVar25 = System_String__Concat_1969e50("!general.MapName=",pSVar17,(MethodInfo *)0x0);
            if (pSVar19 != (System_Collections_Generic_List_string__o *)0x0) {
              il2cpp_runtime_helper_180012890(pSVar19,pSVar25,MethodInfo_System_Collections_Generic_List_string_Add);
              pSVar25 = (__this->fields)._categoryName_5__4;
              pSVar4 = (__this->fields)._subCategoryName_5__7;
              pSVar15 = (__this->fields)._experience_5__10;
              pSVar20 = (__this->fields)._variants_5__12;
              bVar12 = (__this->fields)._hasScoring_5__13;
              if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
              }
              pMVar24 = Map_BuiltinLevels__CreateExperienceDefinition
                                  (pSVar25,pSVar4,pSVar17,pSVar15,pSVar19,pSVar20,bVar12,(MethodInfo *)0x0);
              (__this->fields).__2__current = pMVar24;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pMVar24);
              (__this->fields).__1__state = 2;
              return true;
            }
          }
        }
        else {
          (__this->fields).__7__wrap13 = (System_String_array *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap13,(void *)0x0);
          (__this->fields)._rules_5__11 = (System_Collections_Generic_List_string__o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._rules_5__11,(void *)0x0);
          (__this->fields)._variants_5__12 =
               (System_Collections_Generic_Dictionary_string__List_string___o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._variants_5__12,(void *)0x0);
          pSVar26 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
                    &(__this->fields)._experience_5__10;
          (__this->fields)._experience_5__10 = (SimpleJSONFixed_JSONNode_o *)0x0;
          while( true ) {
            Il2CppCodeGenWriteBarrier((void **)pSVar26,(void *)0x0);
label_181e989a0:
            while( true ) {
              pSVar11 = &(__this->fields).__7__wrap8;
              bVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                 ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&(__this->fields).__7__wrap8,
                                  (MethodInfo *)0x0);
              if (!bVar12) break;
              pSVar14 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(&local_98,pSVar11,(MethodInfo *)0x0);
              pSVar17 = (pSVar14->fields).key;
              pSVar15 = (pSVar14->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_c8.fields.key = pSVar17;
              local_c8.fields.value = pSVar15;
              pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_c8,(MethodInfo *)0x0);
              (__this->fields)._experience_5__10 = pSVar15;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._experience_5__10,pSVar15);
              pSVar15 = (__this->fields)._experience_5__10;
              if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e99299;
              pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar15,(MethodInfo *)"Name");
              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                                  ((SimpleJSONFixed_JSONNode_o *)pSVar16,(MethodInfo *)0x0);
              bVar12 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
              if (!bVar12) {
                ruleSets = (SimpleJSONFixed_JSONNode_array *)
                           SZArrayNew(TypeInfo_SimpleJSONFixed_JSONNode_array,3);
                pSVar15 = (__this->fields)._category_5__3;
                if ((pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                   (pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar15,(MethodInfo *)"UIRules"),
                   ruleSets == (SimpleJSONFixed_JSONNode_array *)0x0)) goto label_181e99299;
                if ((pSVar16 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
                   (pIVar18 = il2cpp_vm_Object_IsInst
                                        ((Il2CppObject *)pSVar16,(((ruleSets->obj).klass)->_1).element_class),
                   pIVar18 == (Il2CppObject *)0x0)) {
                  pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
                }
                if ((int)ruleSets->max_length == 0) goto label_181e99293;
                ruleSets->m_Items[0] = (SimpleJSONFixed_JSONNode_o *)pSVar16;
                Il2CppCodeGenWriteBarrier(ruleSets->m_Items,pSVar16);
                pSVar15 = (__this->fields)._subCategory_5__6;
                if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e99299;
                pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar15,(MethodInfo *)"UIRules");
                if ((pSVar16 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
                   (pIVar18 = il2cpp_vm_Object_IsInst
                                        ((Il2CppObject *)pSVar16,(((ruleSets->obj).klass)->_1).element_class),
                   pIVar18 == (Il2CppObject *)0x0)) {
                  pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
                }
                if ((uint)ruleSets->max_length < 2) goto label_181e99293;
                ruleSets->m_Items[1] = (SimpleJSONFixed_JSONNode_o *)pSVar16;
                Il2CppCodeGenWriteBarrier(ruleSets->m_Items + 1,pSVar16);
                pSVar15 = (__this->fields)._experience_5__10;
                if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e99299;
                pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar15,(MethodInfo *)"UIRules");
                if ((pSVar16 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
                   (pIVar18 = il2cpp_vm_Object_IsInst
                                        ((Il2CppObject *)pSVar16,(((ruleSets->obj).klass)->_1).element_class),
                   pIVar18 == (Il2CppObject *)0x0)) {
                  pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
                }
                if ((uint)ruleSets->max_length < 3) goto label_181e99293;
                ruleSets->m_Items[2] = (SimpleJSONFixed_JSONNode_o *)pSVar16;
                Il2CppCodeGenWriteBarrier(ruleSets->m_Items + 2,pSVar16);
                if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                }
                pSVar19 = Map_BuiltinLevels__ComposeUIRules(ruleSets,(MethodInfo *)0x0);
                (__this->fields)._rules_5__11 = pSVar19;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._rules_5__11,pSVar19);
                pSVar20 = Settings_PresetDefinition__ReadVariants
                                    ((__this->fields)._experience_5__10,(MethodInfo *)0x0);
                if ((pSVar20 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) &&
                   (pSVar20 = Settings_PresetDefinition__ReadVariants
                                        ((__this->fields)._subCategory_5__6,(MethodInfo *)0x0),
                   pSVar20 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) {
                  pSVar20 = Settings_PresetDefinition__ReadVariants
                                      ((__this->fields)._category_5__3,(MethodInfo *)0x0);
                }
                if (__this == (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *)0x0) goto label_181e99299;
                (__this->fields)._variants_5__12 = pSVar20;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._variants_5__12,pSVar20);
                pSVar15 = (__this->fields)._experience_5__10;
                if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e99299;
                bVar12 = (*(pSVar15->klass->vtable)._28_HasKey.methodPtr)
                                   (pSVar15,(MethodInfo *)"HasScoring");
                if (bVar12) {
                  pSVar15 = (__this->fields)._experience_5__10;
                }
                else {
                  pSVar15 = (__this->fields)._subCategory_5__6;
                  if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e99299;
                  bVar12 = (*(pSVar15->klass->vtable)._28_HasKey.methodPtr)
                                     (pSVar15,(MethodInfo *)"HasScoring");
                  if (bVar12) {
                    pSVar15 = (__this->fields)._subCategory_5__6;
                  }
                  else {
                    pSVar15 = (__this->fields)._category_5__3;
                  }
                }
                if ((pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                   (pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar15,(MethodInfo *)"HasScoring"),
                   pSVar16 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e99299;
                bVar12 = (bool)(*(code *)((Il2CppClass *)pSVar16->klass)->vtable[39].methodPtr)(pSVar16);
                (__this->fields)._hasScoring_5__13 = bVar12;
                pSVar19 = (__this->fields)._rules_5__11;
                if ((__this->fields)._experiencePerMap_5__8 == false) {
                  pSVar25 = (__this->fields)._categoryName_5__4;
                  pSVar4 = (__this->fields)._subCategoryName_5__7;
                  pSVar15 = (__this->fields)._experience_5__10;
                  pSVar20 = (__this->fields)._variants_5__12;
                  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                  }
                  pMVar24 = Map_BuiltinLevels__CreateExperienceDefinition
                                      (pSVar25,pSVar4,pSVar17,pSVar15,pSVar19,pSVar20,bVar12,(MethodInfo *)0x0
                                      );
                  (__this->fields).__2__current = pMVar24;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pMVar24);
                  (__this->fields).__1__state = 1;
                  return true;
                }
                pSVar21 = Settings_RuleParser__Parse
                                    ((System_Collections_Generic_IEnumerable_string__o *)pSVar19,
                                     (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
                if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                }
                pSVar22 = TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_0;
                if (pSVar22 == (System_Func_UIRule__bool__o *)0x0) {
                  if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                  }
                  pIVar18 = (Il2CppObject *)TypeInfo_Map_BuiltinLevels_c->static_fields->__9;
                  pSVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_bool);
                  System_Func_object__bool____ctor
                            ((System_Predicate_object__o *)pSVar22,pIVar18,
                             (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__16_0,
                             (MethodInfo_B61EB0 *)0x0);
                  TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_0 = pSVar22;
                  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_0,pSVar22);
                }
                query = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar21,
                                   (System_Func_TSource__bool__o *)pSVar22,
                                   (MethodInfo_6BD2C0 *)
                                   MethodInfo_System_Linq_Enumerable_FirstOrDefault_UIRule);
                if (query == (Settings_UIRule_o *)0x0) {
                  pSVar17 = (__this->fields)._subCategoryName_5__7;
                  pSVar25 = il2cpp_codegen_get_runtime_metadata(&"Experience-per-map subcategory requires a general.MapName rule: ");
                  pSVar17 = System_String__Concat_1969e50(pSVar25,pSVar17,(MethodInfo *)0x0);
                  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
                  __this_01 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(klass);
                  System_IO_InvalidDataException___ctor_2902f10(__this_01,pSVar17,(MethodInfo *)0x0);
                  lastManagedFrame =
                       il2cpp_codegen_get_runtime_metadata
                                 (&MethodInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16_MoveNext);
                  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
                }
                pSVar21 = Settings_RuleParser__Parse
                                    ((System_Collections_Generic_IEnumerable_string__o *)
                                     (__this->fields)._rules_5__11,
                                     (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
                if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                }
                pSVar22 = TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_1;
                if (pSVar22 == (System_Func_UIRule__bool__o *)0x0) {
                  if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                  }
                  pIVar18 = (Il2CppObject *)TypeInfo_Map_BuiltinLevels_c->static_fields->__9;
                  pSVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_bool);
                  System_Func_object__bool____ctor
                            ((System_Predicate_object__o *)pSVar22,pIVar18,
                             (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__16_1,
                             (MethodInfo_B61EB0 *)0x0);
                  TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_1 = pSVar22;
                  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9__16_1,pSVar22);
                }
                categoryQuery =
                     System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar21,
                                (System_Func_TSource__bool__o *)pSVar22,
                                (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_UIRule);
                if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                }
                pSVar23 = Map_BuiltinLevels__QueryMapsNames_1e835e0(query,categoryQuery,(MethodInfo *)0x0);
                (__this->fields).__7__wrap13 = pSVar23;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap13,pSVar23);
                (__this->fields).__7__wrap14 = 0;
                goto label_181e98eb2;
              }
            }
            *(undefined8 *)&pSVar11->fields = 0;
            (__this->fields).__7__wrap8.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            pSVar11 = &(__this->fields).__7__wrap8;
            (pSVar11->fields).m_Object.fields._version = 0;
            (pSVar11->fields).m_Object.fields._index = 0;
            (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
            (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
            *(undefined8 *)&(__this->fields).__7__wrap8.fields.m_Object.fields._getEnumeratorRetType = 0;
            (__this->fields).__7__wrap8.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)0x0;
            pSVar11 = &(__this->fields).__7__wrap8;
            (pSVar11->fields).m_Array.fields._index = 0;
            (pSVar11->fields).m_Array.fields._version = 0;
            (__this->fields).__7__wrap8.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
            (__this->fields)._subCategoryName_5__7 = (System_String_o *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._subCategoryName_5__7,(void *)0x0);
            pSVar26 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
                      &(__this->fields)._subCategory_5__6;
            (__this->fields)._subCategory_5__6 = (SimpleJSONFixed_JSONNode_o *)0x0;
            while( true ) {
              Il2CppCodeGenWriteBarrier((void **)pSVar26,(void *)0x0);
              pSVar11 = &(__this->fields).__7__wrap4;
              bVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                 ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&(__this->fields).__7__wrap4,
                                  (MethodInfo *)0x0);
              if (bVar12) break;
              *(undefined8 *)&pSVar11->fields = 0;
              (__this->fields).__7__wrap4.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              pSVar11 = &(__this->fields).__7__wrap4;
              (pSVar11->fields).m_Object.fields._version = 0;
              (pSVar11->fields).m_Object.fields._index = 0;
              (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
              (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
              *(undefined8 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = 0;
              (__this->fields).__7__wrap4.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)0x0;
              pSVar11 = &(__this->fields).__7__wrap4;
              (pSVar11->fields).m_Array.fields._index = 0;
              (pSVar11->fields).m_Array.fields._version = 0;
              (__this->fields).__7__wrap4.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
              (__this->fields)._categoryName_5__4 = (System_String_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryName_5__4,(void *)0x0);
              pSVar26 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
                        &(__this->fields)._category_5__3;
              (__this->fields)._category_5__3 = (SimpleJSONFixed_JSONNode_o *)0x0;
label_181e986d6:
              Il2CppCodeGenWriteBarrier((void **)pSVar26,(void *)0x0);
              bVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                 ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&(__this->fields).__7__wrap1,
                                  (MethodInfo *)0x0);
              if (!bVar12) {
                *(undefined8 *)&(__this->fields).__7__wrap1.fields = 0;
                (__this->fields).__7__wrap1.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                pSVar11 = &(__this->fields).__7__wrap1;
                (pSVar11->fields).m_Object.fields._version = 0;
                (pSVar11->fields).m_Object.fields._index = 0;
                (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
                (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0
                ;
                *(undefined8 *)&(__this->fields).__7__wrap1.fields.m_Object.fields._getEnumeratorRetType = 0;
                (__this->fields).__7__wrap1.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)0x0;
                pSVar11 = &(__this->fields).__7__wrap1;
                (pSVar11->fields).m_Array.fields._index = 0;
                (pSVar11->fields).m_Array.fields._version = 0;
                (__this->fields).__7__wrap1.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0
                ;
                return false;
              }
              pSVar14 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (&local_b8,&(__this->fields).__7__wrap1,(MethodInfo *)0x0);
              pSVar17 = (pSVar14->fields).key;
              pSVar15 = (pSVar14->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_c8.fields.key = pSVar17;
              local_c8.fields.value = pSVar15;
              pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_c8,(MethodInfo *)0x0);
              (__this->fields)._category_5__3 = pSVar15;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._category_5__3,pSVar15);
              pSVar15 = (__this->fields)._category_5__3;
              if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e99299;
              pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar15,(MethodInfo *)"Name");
              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                                  ((SimpleJSONFixed_JSONNode_o *)pSVar16,(MethodInfo *)0x0);
              (__this->fields)._categoryName_5__4 = pSVar17;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryName_5__4,pSVar17);
              pSVar15 = (__this->fields)._category_5__3;
              if ((pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar15,(MethodInfo *)"SubCategories"),
                 pSVar16 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e99299;
              puVar13 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar16->klass)->vtable[32].methodPtr)(local_88);
              pSVar26 = &(__this->fields).__7__wrap4.fields.m_Object;
              pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar13[1];
              uVar6 = puVar13[2];
              pIVar18 = (Il2CppObject *)puVar13[3];
              pIVar7 = (Il2CppObject *)puVar13[4];
              uVar8 = puVar13[5];
              pSVar9 = (System_Collections_Generic_List_T__o *)puVar13[6];
              uVar10 = puVar13[7];
              pSVar15 = (SimpleJSONFixed_JSONNode_o *)puVar13[8];
              *(undefined8 *)&(__this->fields).__7__wrap4.fields = *puVar13;
              (__this->fields).__7__wrap4.fields.m_Object.fields._dictionary = pSVar5;
              pSVar11 = &(__this->fields).__7__wrap4;
              (pSVar11->fields).m_Object.fields._version = (int)uVar6;
              (pSVar11->fields).m_Object.fields._index = (int)((ulonglong)uVar6 >> 0x20);
              (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = pIVar18;
              (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = pIVar7;
              *(undefined8 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = uVar8
              ;
              (__this->fields).__7__wrap4.fields.m_Array.fields._list = pSVar9;
              pSVar11 = &(__this->fields).__7__wrap4;
              (pSVar11->fields).m_Array.fields._index = (int)uVar10;
              (pSVar11->fields).m_Array.fields._version = (int)((ulonglong)uVar10 >> 0x20);
              (__this->fields).__7__wrap4.fields.m_Array.fields._current = pSVar15;
            }
            pSVar14 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(&local_a8,pSVar11,(MethodInfo *)0x0);
            pSVar17 = (pSVar14->fields).key;
            pSVar15 = (pSVar14->fields).value;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            local_c8.fields.key = pSVar17;
            local_c8.fields.value = pSVar15;
            pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_c8,(MethodInfo *)0x0);
            (__this->fields)._subCategory_5__6 = pSVar15;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._subCategory_5__6,pSVar15);
            pSVar15 = (__this->fields)._subCategory_5__6;
            if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
            pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar15,(MethodInfo *)"Name");
            pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                                ((SimpleJSONFixed_JSONNode_o *)pSVar16,(MethodInfo *)0x0);
            (__this->fields)._subCategoryName_5__7 = pSVar17;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._subCategoryName_5__7,pSVar17);
            pSVar15 = (__this->fields)._subCategory_5__6;
            if ((pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar15,(MethodInfo *)"ExperiencePerMap"),
               pSVar16 == (System_Xml_Schema_XmlSchema_o *)0x0)) break;
            bVar12 = (bool)(*(code *)((Il2CppClass *)pSVar16->klass)->vtable[39].methodPtr)
                                     (pSVar16,((Il2CppClass *)pSVar16->klass)->vtable[39].method);
            pSVar15 = (__this->fields)._subCategory_5__6;
            (__this->fields)._experiencePerMap_5__8 = bVar12;
            if ((pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pSVar16 = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar15,(MethodInfo *)"Experiences"),
               pSVar16 == (System_Xml_Schema_XmlSchema_o *)0x0)) break;
            puVar13 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar16->klass)->vtable[32].methodPtr)(local_88);
            pSVar26 = &(__this->fields).__7__wrap8.fields.m_Object;
            pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar13[1];
            uVar6 = puVar13[2];
            pIVar18 = (Il2CppObject *)puVar13[3];
            pIVar7 = (Il2CppObject *)puVar13[4];
            uVar8 = puVar13[5];
            pSVar9 = (System_Collections_Generic_List_T__o *)puVar13[6];
            uVar10 = puVar13[7];
            pSVar15 = (SimpleJSONFixed_JSONNode_o *)puVar13[8];
            *(undefined8 *)&(__this->fields).__7__wrap8.fields = *puVar13;
            (__this->fields).__7__wrap8.fields.m_Object.fields._dictionary = pSVar5;
            pSVar11 = &(__this->fields).__7__wrap8;
            (pSVar11->fields).m_Object.fields._version = (int)uVar6;
            (pSVar11->fields).m_Object.fields._index = (int)((ulonglong)uVar6 >> 0x20);
            (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.key = pIVar18;
            (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.value = pIVar7;
            *(undefined8 *)&(__this->fields).__7__wrap8.fields.m_Object.fields._getEnumeratorRetType = uVar8;
            (__this->fields).__7__wrap8.fields.m_Array.fields._list = pSVar9;
            pSVar11 = &(__this->fields).__7__wrap8;
            (pSVar11->fields).m_Array.fields._index = (int)uVar10;
            (pSVar11->fields).m_Array.fields._version = (int)((ulonglong)uVar10 >> 0x20);
            (__this->fields).__7__wrap8.fields.m_Array.fields._current = pSVar15;
          }
        }
      }
label_181e99299:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$System.Collections.Generic.IEnumerator<Map.BuiltinLevels.BuiltinExperienceDefinition>.get_Current
// il2cpp: Map_BuiltinLevels_BuiltinExperienceDefinition_o* Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_Generic_IEnumerator_Map_BuiltinLevels_BuiltinExperienceDefinition__get_Current (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, const MethodInfo* method);
// 0x180573e90

Map_BuiltinLevels_BuiltinExperienceDefinition_o*
Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_Generic_IEnumerator_Map_BuiltinLevels_BuiltinExperienceDefinition__get_Current(Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_IEnumerator_Reset (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, const MethodInfo* method);
// 0x181e99330

void Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_IEnumerator_Reset
               (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_IEnumerator_get_Current (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_IEnumerator_get_Current(Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$System.Collections.Generic.IEnumerable<Map.BuiltinLevels.BuiltinExperienceDefinition>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition__o* Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_Generic_IEnumerable_Map_BuiltinLevels_BuiltinExperienceDefinition__GetEnumerator (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, const MethodInfo* method);
// 0x181e992a0

System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition__o*
Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_Generic_IEnumerable_Map_BuiltinLevels_BuiltinExperienceDefinition__GetEnumerator(Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *__this_00;
  
  if (Il2CppMethodInitialized_184345036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
    Il2CppMethodInitialized_184345036 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__16$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_IEnumerable_GetEnumerator (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o* __this, const MethodInfo* method);
// 0x181e992a0

System_Collections_IEnumerator_o *
Map_BuiltinLevels__GetExperienceDefinitions_d__16__System_Collections_IEnumerable_GetEnumerator
          (Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *__this_00;
  
  if (Il2CppMethodInitialized_184345036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
    Il2CppMethodInitialized_184345036 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.BuiltinLevels$$Init
// il2cpp: void Map_BuiltinLevels__Init (const MethodInfo* method);
// 0x181e81f10

void Map_BuiltinLevels__Init(MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_184345000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"BuiltinMapInfo");
    Il2CppMethodInitialized_184345000 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar4 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory
              (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory
              (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory
              (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory
              (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this = ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar3,"BuiltinMapInfo",false,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Object_o *)0x0) {
      bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
         ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
        pSVar3 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
        pSVar4 = SimpleJSONFixed_JSON__Parse(pSVar3,(MethodInfo *)0x0);
        TypeInfo_Map_BuiltinLevels->static_fields->_info = pSVar4;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->_info,pSVar4);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_UnityEngine_TextAsset);
    }
    ThrowNullReferenceException();
  }
  return;
}


// Map.BuiltinLevels$$LoadExperience
// il2cpp: Settings_PresetDefinition_o* Map_BuiltinLevels__LoadExperience (System_String_o* name, const MethodInfo* method);
// 0x181e82660

Settings_PresetDefinition_o * Map_BuiltinLevels__LoadExperience(System_String_o *name,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_string__List_string___o *value;
  bool bVar3;
  int32_t iVar4;
  Map_BuiltinLevels___c__DisplayClass15_0_o *object;
  Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *source;
  System_Func_BuiltinLevels_BuiltinExperienceDefinition__bool__o *__this;
  Il2CppObject *pIVar5;
  Settings_PresetDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184345001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition);
    Il2CppMethodInitialized_184345001 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  if (Il2CppMethodInitialized_184345007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_BuiltinLevels_BuiltinExperienceDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_BuiltinLevels_BuiltinExperienceDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c__DisplayClass15_0_FindExperience_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c__DisplayClass15_0);
    Il2CppMethodInitialized_184345007 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c__DisplayClass15_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_BuiltinLevels___c__DisplayClass15_0_o *)0x0) {
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    bVar3 = System_String__IsNullOrEmpty((object->fields).name,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      if (Il2CppMethodInitialized_184345008 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16)
        ;
        Il2CppMethodInitialized_184345008 = '\x01';
      }
      source = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)source,(MethodInfo *)0x0);
      (source->fields).__1__state = -2;
      iVar4 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
      (source->fields).__l__initialThreadId = iVar4;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_BuiltinLevels_BuiltinExperienceDefinition_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Map_BuiltinLevels_c__DisplayClass15_0_FindExperience_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      pIVar5 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this,
                          (MethodInfo_6BD2C0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_BuiltinLevels_BuiltinExperienceDefinition
                         );
      if (pIVar5 != (Il2CppObject *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition);
        Settings_PresetDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Settings_PresetDefinition_o *)0x0) {
          pIVar1 = pIVar5[1].klass;
          (__this_00->fields).Category = (System_String_o *)pIVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Category,pIVar1);
          pSVar2 = pIVar5[1].monitor;
          (__this_00->fields).SubCategory = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).SubCategory,pSVar2);
          pIVar1 = pIVar5[2].klass;
          (__this_00->fields).Name = (System_String_o *)pIVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Name,pIVar1);
          pSVar2 = pIVar5[2].monitor;
          (__this_00->fields).Description = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Description,pSVar2);
          pIVar1 = pIVar5[4].klass;
          (__this_00->fields).UIRules = (System_Collections_Generic_List_string__o *)pIVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).UIRules,pIVar1);
          value = pIVar5[4].monitor;
          (__this_00->fields).Variants = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Variants,value);
          return __this_00;
        }
        goto label_181e8288a;
      }
    }
    return (Settings_PresetDefinition_o *)0x0;
  }
label_181e8288a:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetExperiences
// il2cpp: System_Collections_Generic_List_Experience__o* Map_BuiltinLevels__GetExperiences (const MethodInfo* method);
// 0x181e7f4c0
// eh: try 0x181e7f640..0x181e7f91d -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7f63f: nop 
// asm:   0x181e7f822: mov r8, qword ptr [rsp + 0x38]
// asm:   0x181e7f827: cmp qword ptr [r8], 0
// asm:   0x181e7f82b: je 0x181e7f83e
// asm:   0x181e7f82d: xor ecx, ecx
// asm:   0x181e7f82f: mov r8, qword ptr [r8]
// asm:   0x181e7f832: mov rdx, qword ptr [rip + 0x2219ac7]  ; TypeInfo_System_IDisposable
// asm:   0x181e7f839: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e7f83e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e7f843: test rcx, rcx
// asm:   0x181e7f846: jne 0x181e7f91d
// asm:   0x181e7f84c: mov rsi, qword ptr [rsp + 0x20]
// asm:   0x181e7f91d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

System_Collections_Generic_List_Experience__o * Map_BuiltinLevels__GetExperiences(MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_String_o *value;
  Il2CppClass *value_00;
  System_String_o *value_01;
  Il2CppClass *value_02;
  Map_Experience_array *pMVar7;
  MethodInfo *pMVar8;
  int32_t iVar9;
  System_Collections_Generic_List_Experience__o *pSVar10;
  Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *obj;
  Il2CppObject *obj_00;
  void *pvVar11;
  VirtualInvokeData *pVVar12;
  Il2CppObject *pIVar13;
  Map_Experience_o *item;
  System_Collections_Generic_List_Experience__o *__this;
  ushort uVar14;
  
  if (Il2CppMethodInitialized_184345002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Experience_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Experience_ctor_409e340);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Experience_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Experience);
    Il2CppMethodInitialized_184345002 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  if (TypeInfo_Map_BuiltinLevels->static_fields->_experiences ==
      (System_Collections_Generic_List_Experience__o *)0x0) {
    pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Experience);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar10,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Experience_ctor);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    if (Il2CppMethodInitialized_184345008 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
      Il2CppMethodInitialized_184345008 = '\x01';
    }
    obj = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)obj,(MethodInfo *)0x0);
    (obj->fields).__1__state = -2;
    iVar9 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    (obj->fields).__l__initialThreadId = iVar9;
    obj_00 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition
                        ,(Il2CppObject *)obj);
    while( true ) {
      if (obj_00 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar11 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj_00);
      if ((char)pvVar11 == '\0') break;
      if (obj_00 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar5 = obj_00->klass;
      uVar3 = (pIVar5->_2).interface_offsets_count;
      if (uVar3 != 0) {
        uVar14 = 0;
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        do {
          if (pIVar6[uVar14].interfaceType ==
              (Il2CppClass *)
              TypeInfo_System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition) {
            pVVar12 = pIVar5->vtable + pIVar6[uVar14].offset;
            goto label_181e7f6c6;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar3);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (obj_00,(Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition
                           ,0);
label_181e7f6c6:
      pIVar13 = (*pVVar12->methodPtr)(obj_00,pVVar12->method);
      if (pIVar13 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar5 = pIVar13[1].klass;
      value = pIVar13[1].monitor;
      value_00 = pIVar13[2].klass;
      value_01 = pIVar13[2].monitor;
      value_02 = pIVar13[3].klass;
      bVar2 = *(bool *)&pIVar13[3].monitor;
      item = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_Experience);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
      (item->fields).Category = (System_String_o *)pIVar5;
      Il2CppCodeGenWriteBarrier(&(item->fields).Category,pIVar5);
      (item->fields).SubCategory = value;
      Il2CppCodeGenWriteBarrier(&(item->fields).SubCategory,value);
      (item->fields).Name = (System_String_o *)value_00;
      Il2CppCodeGenWriteBarrier(&(item->fields).Name,value_00);
      (item->fields).Description = value_01;
      Il2CppCodeGenWriteBarrier(&(item->fields).Description,value_01);
      (item->fields).Preview = (System_String_o *)value_02;
      Il2CppCodeGenWriteBarrier(&(item->fields).Preview,value_02);
      (item->fields).HasScoring = bVar2;
      pMVar8 = MethodInfo_System_Collections_Generic_List_Experience_Add;
      if (pSVar10 == (System_Collections_Generic_List_Experience__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar7 = (pSVar10->fields)._items;
      if (pMVar7 == (Map_Experience_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar4 = (pSVar10->fields)._size;
      if (uVar4 < (uint)pMVar7->max_length) {
        (pSVar10->fields)._size = uVar4 + 1;
        if ((uint)pMVar7->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        pMVar7->m_Items[(int)uVar4] = item;
        Il2CppCodeGenWriteBarrier(pMVar7->m_Items + (int)uVar4,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
      }
    }
    if (obj_00 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj_00);
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    TypeInfo_Map_BuiltinLevels->static_fields->_experiences = pSVar10;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->_experiences,pSVar10);
    pSVar10 = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
  }
  else {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar10 = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Experience);
  System_Collections_Generic_List_object____ctor_94fb10
            ((System_Collections_Generic_List_object__o *)__this,
             (System_Collections_Generic_IEnumerable_T__o *)pSVar10,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_Experience_ctor_409e340);
  return __this;
}


// Map.BuiltinLevels$$HasExperienceScoring
// il2cpp: bool Map_BuiltinLevels__HasExperienceScoring (System_String_o* category, System_String_o* subCategory, System_String_o* name, const MethodInfo* method);
// 0x181e81db0

bool Map_BuiltinLevels__HasExperienceScoring
               (System_String_o *category,System_String_o *subCategory,System_String_o *name,
               MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  bool bVar1;
  Map_BuiltinLevels___c__DisplayClass11_0_o *object;
  System_Func_Experience__bool__o *__this;
  
  if (Il2CppMethodInitialized_184345003 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c__DisplayClass11_0_HasExperienceScoring_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c__DisplayClass11_0);
    Il2CppMethodInitialized_184345003 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_BuiltinLevels___c__DisplayClass11_0_o *)0x0) {
    (object->fields).category = category;
    Il2CppCodeGenWriteBarrier(&(object->fields).category,category);
    (object->fields).subCategory = subCategory;
    Il2CppCodeGenWriteBarrier(&(object->fields).subCategory,subCategory);
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    if (TypeInfo_Map_BuiltinLevels->static_fields->_experiences ==
        (System_Collections_Generic_List_Experience__o *)0x0) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__GetExperiences((MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    source = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Map_BuiltinLevels_c__DisplayClass11_0_HasExperienceScoring_b__0,
               (MethodInfo_B61EB0 *)0x0);
    bVar1 = System_Linq_Enumerable__Any_object__6b6920
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__bool__o *)__this,
                       (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_Experience);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$ResolveExperiencePreviews
// il2cpp: void Map_BuiltinLevels__ResolveExperiencePreviews (System_Collections_Generic_IEnumerable_Experience__o* experiences, const MethodInfo* method);
// 0x181e84300
// eh: try 0x181e843a0..0x181e844e2 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e844a3: jmp 0x181e844cb
// asm:   0x181e844a5: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e844aa: cmp qword ptr [r8], 0
// asm:   0x181e844ae: je 0x181e844c1
// asm:   0x181e844b0: xor ecx, ecx
// asm:   0x181e844b2: mov r8, qword ptr [r8]
// asm:   0x181e844b5: mov rdx, qword ptr [rip + 0x2214e44]  ; TypeInfo_System_IDisposable
// asm:   0x181e844bc: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e844c1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e844c6: test rcx, rcx
// asm:   0x181e844c9: jne 0x181e844e2
// asm:   0x181e844e2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Map_BuiltinLevels__ResolveExperiencePreviews
               (System_Collections_Generic_IEnumerable_Experience__o *experiences,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  Il2CppObject *obj;
  void *pvVar5;
  VirtualInvokeData *pVVar6;
  Map_Experience_o *experience;
  System_String_o *value;
  ushort uVar7;
  
  if (Il2CppMethodInitialized_184345004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184345004 = '\x01';
  }
  if (experiences != (System_Collections_Generic_IEnumerable_Experience__o *)0x0) {
    obj = InterfaceInvoker0_Invoke
                    (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Experience,
                     (Il2CppObject *)experiences);
    while( true ) {
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
      if ((char)pvVar5 == '\0') break;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        uVar7 = 0;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Experience) {
            pVVar6 = pIVar2->vtable + pIVar3[uVar7].offset;
            goto label_181e84416;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Experience,0);
label_181e84416:
      experience = (Map_Experience_o *)(*pVVar6->methodPtr)(obj,pVVar6->method);
      if ((experience != (Map_Experience_o *)0x0) &&
         (bVar4 = System_String__IsNullOrEmpty((experience->fields).Preview,(MethodInfo *)0x0), bVar4)) {
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        value = Map_BuiltinLevels__ResolveExperiencePreview(experience,(MethodInfo *)0x0);
        (experience->fields).Preview = value;
        Il2CppCodeGenWriteBarrier(&(experience->fields).Preview,value);
      }
    }
    if (obj != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
    }
  }
  return;
}


// Map.BuiltinLevels$$ResolveExperiencePreview
// il2cpp: System_String_o* Map_BuiltinLevels__ResolveExperiencePreview (Map_Experience_o* experience, const MethodInfo* method);
// 0x181e83f10

System_String_o * Map_BuiltinLevels__ResolveExperiencePreview(Map_Experience_o *experience,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *name;
  UnityEngine_Object_o *pUVar2;
  Settings_PresetDefinition_o *__this;
  Settings_UIRule_o *query;
  System_String_array *source;
  System_String_o *pSVar3;
  System_Func_string__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_List_TSource__o *__this_02;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  UnityEngine_Object_o *pUVar5;
  
  if (Il2CppMethodInitialized_184345005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_ResolveMapPreviewPath);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Take_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c_ResolveExperiencePreview_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/");
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184345005 = '\x01';
  }
  if (experience == (Map_Experience_o *)0x0) goto label_181e842f4;
  name = System_String__Concat_1969b70
                   ("Data/ExperiencePreview/",(experience->fields).Name,"Preview",(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(pSVar3,name,false,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    pUVar5 = (UnityEngine_Object_o *)0x0;
    if ((UnityEngine_Texture2D_c *)pUVar2->klass == TypeInfo_UnityEngine_Texture2D) {
      pUVar5 = pUVar2;
    }
    if (pUVar5 != (UnityEngine_Object_o *)0x0) {
      return name;
    }
  }
  pSVar3 = (experience->fields).Name;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  __this = Map_BuiltinLevels__LoadExperience(pSVar3,(MethodInfo *)0x0);
  if (__this == (Settings_PresetDefinition_o *)0x0) {
    query = (Settings_UIRule_o *)0x0;
label_181e84138:
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    if (Il2CppMethodInitialized_18434500c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
      Il2CppMethodInitialized_18434500c = '\x01';
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    source = Map_BuiltinLevels__QueryMapsNames_1e835e0(query,(Settings_UIRule_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    query = Settings_PresetDefinition__get_MapRule(__this,(MethodInfo *)0x0);
    if (((query == (Settings_UIRule_o *)0x0) || ((query->fields).DisableEditing == false)) ||
       ((query->fields).DefaultValue == (Il2CppObject *)0x0)) goto label_181e84138;
    source = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    pIVar1 = (query->fields).DefaultValue;
    if (pIVar1 == (Il2CppObject *)0x0) goto label_181e842f4;
    pSVar3 = (System_String_o *)(*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    if (source == (System_String_array *)0x0) goto label_181e842f4;
    if ((int)source->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    source->m_Items[0] = pSVar3;
    Il2CppCodeGenWriteBarrier(source->m_Items,pSVar3);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_ResolveMapPreviewPath,(MethodInfo_16E67D0 *)0x0);
  source_00 = System_Linq_Enumerable__Select_Vector3__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this_00,
                         (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
  }
  __this_01 = TypeInfo_Map_BuiltinLevels_c->static_fields->__9__13_0;
  if (__this_01 == (System_Func_string__bool__o *)0x0) {
    if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Map_BuiltinLevels_c->static_fields->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_01,pIVar1,
               (intptr_t)MethodInfo_Map_BuiltinLevels_c_ResolveExperiencePreview_b__13_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_Map_BuiltinLevels_c->static_fields->__9__13_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9__13_0,__this_01);
  }
  pSVar4 = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar4 = System_Linq_Enumerable__Take_object_
                     (pSVar4,4,(MethodInfo_6C7960 *)MethodInfo_System_Linq_Enumerable_Take_string);
  __this_02 = System_Linq_Enumerable__ToList_object_
                        (pSVar4,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
    if ((__this_02->fields)._size != 0) {
      value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                        ((System_Collections_Generic_List_T__o *)__this_02,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar3 = System_String__Join("|",(System_String_array *)value,(MethodInfo *)0x0);
      return pSVar3;
    }
    return (experience->fields).Preview;
  }
label_181e842f4:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$ResolveMapPreviewPath
// il2cpp: System_String_o* Map_BuiltinLevels__ResolveMapPreviewPath (System_String_o* mapName, const MethodInfo* method);
// 0x181e844f0

System_String_o * Map_BuiltinLevels__ResolveMapPreviewPath(System_String_o *mapName,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  
  if (Il2CppMethodInitialized_184345006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Previews/");
    Il2CppMethodInitialized_184345006 = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70
                     ("Previews/",mapName,"Preview",(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar1,false,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)0x0;
    if ((UnityEngine_Texture2D_c *)pUVar2->klass == TypeInfo_UnityEngine_Texture2D) {
      pUVar3 = pUVar2;
    }
    if (pUVar3 != (UnityEngine_Object_o *)0x0) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar1 = System_String__Concat_1969b70
                         (TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps,"/",
                          pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Map.BuiltinLevels$$FindExperience
// il2cpp: Map_BuiltinLevels_BuiltinExperienceDefinition_o* Map_BuiltinLevels__FindExperience (System_String_o* name, const MethodInfo* method);
// 0x181e7e1c0

Map_BuiltinLevels_BuiltinExperienceDefinition_o *
Map_BuiltinLevels__FindExperience(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Map_BuiltinLevels___c__DisplayClass15_0_o *object;
  Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *source;
  System_Func_BuiltinLevels_BuiltinExperienceDefinition__bool__o *__this;
  Map_BuiltinLevels_BuiltinExperienceDefinition_o *pMVar3;
  
  if (Il2CppMethodInitialized_184345007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_BuiltinLevels_BuiltinExperienceDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_BuiltinLevels_BuiltinExperienceDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c__DisplayClass15_0_FindExperience_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c__DisplayClass15_0);
    Il2CppMethodInitialized_184345007 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c__DisplayClass15_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_BuiltinLevels___c__DisplayClass15_0_o *)0x0) {
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    bVar1 = System_String__IsNullOrEmpty((object->fields).name,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      if (Il2CppMethodInitialized_184345008 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16)
        ;
        Il2CppMethodInitialized_184345008 = '\x01';
      }
      source = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)source,(MethodInfo *)0x0);
      (source->fields).__1__state = -2;
      iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
      (source->fields).__l__initialThreadId = iVar2;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_BuiltinLevels_BuiltinExperienceDefinition_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Map_BuiltinLevels_c__DisplayClass15_0_FindExperience_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      pMVar3 = (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)
               System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this,
                          (MethodInfo_6BD2C0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_BuiltinLevels_BuiltinExperienceDefinition
                         );
      return pMVar3;
    }
    return (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)0x0;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetExperienceDefinitions
// il2cpp: System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition__o* Map_BuiltinLevels__GetExperienceDefinitions (const MethodInfo* method);
// 0x181e7f460

System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition__o *
Map_BuiltinLevels__GetExperienceDefinitions(MethodInfo *method)

{
  int32_t iVar1;
  Map_BuiltinLevels__GetExperienceDefinitions_d__16_o *__this;
  
  if (Il2CppMethodInitialized_184345008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16);
    Il2CppMethodInitialized_184345008 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__16)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition__o *)__this;
}


// Map.BuiltinLevels$$CreateExperienceDefinition
// il2cpp: Map_BuiltinLevels_BuiltinExperienceDefinition_o* Map_BuiltinLevels__CreateExperienceDefinition (System_String_o* category, System_String_o* subCategory, System_String_o* name, SimpleJSONFixed_JSONNode_o* experience, System_Collections_Generic_List_string__o* rules, System_Collections_Generic_Dictionary_string__List_string___o* variants, bool hasScoring, const MethodInfo* method);
// 0x181e7de20

Map_BuiltinLevels_BuiltinExperienceDefinition_o *
Map_BuiltinLevels__CreateExperienceDefinition
          (System_String_o *category,System_String_o *subCategory,System_String_o *name,
          SimpleJSONFixed_JSONNode_o *experience,System_Collections_Generic_List_string__o *rules,
          System_Collections_Generic_Dictionary_string__List_string___o *variants,bool hasScoring,
          MethodInfo *method)

{
  Map_BuiltinLevels_BuiltinExperienceDefinition_o *__this;
  System_Xml_Schema_XmlSchema_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184345009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_BuiltinExperienceDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_184345009 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_BuiltinExperienceDefinition);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)0x0) {
    (__this->fields).Category = category;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Category,category);
    (__this->fields).SubCategory = subCategory;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory,subCategory);
    (__this->fields).Name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Name,name);
    if (experience != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar1 = (*(experience->klass->vtable)._7_get_Item.methodPtr)
                         (experience,(MethodInfo *)"Description");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                         ((SimpleJSONFixed_JSONNode_o *)pSVar1,(MethodInfo *)0x0);
      (__this->fields).Description = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Description,pSVar2);
      pSVar1 = (*(experience->klass->vtable)._7_get_Item.methodPtr)
                         (experience,(MethodInfo *)"Preview");
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                         ((SimpleJSONFixed_JSONNode_o *)pSVar1,(MethodInfo *)0x0);
      (__this->fields).Preview = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Preview,pSVar2);
      (__this->fields).HasScoring = hasScoring;
      (__this->fields).UIRules = rules;
      Il2CppCodeGenWriteBarrier(&(__this->fields).UIRules,rules);
      (__this->fields).Variants = variants;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Variants,variants);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$ComposeUIRules
// il2cpp: System_Collections_Generic_List_string__o* Map_BuiltinLevels__ComposeUIRules (SimpleJSONFixed_JSONNode_array* ruleSets, const MethodInfo* method);
// 0x181e7d960
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7db4d: nop dword ptr [rax]
// asm:   0x181e7dbcf: nop 

System_Collections_Generic_List_string__o *
Map_BuiltinLevels__ComposeUIRules(SimpleJSONFixed_JSONNode_array *ruleSets,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_String_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_Dictionary_string__int__o *__this;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  Il2CppClass *value;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_UIRule__o *__this_00;
  Settings_UIRule_o *pSVar8;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  uint uVar9;
  UnityEngine_UIElements_TextureId_o local_res8 [2];
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_e8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  undefined1 local_78 [96];
  
  if (Il2CppMethodInitialized_18434500a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor_40d6170);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_c_ComposeUIRules_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    Il2CppMethodInitialized_18434500a = '\x01';
  }
  local_e8.type = 0;
  local_e8._4_4_ = 0;
  local_e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_e8.m_Object.fields._version = 0;
  local_e8.m_Object.fields._index = 0;
  local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_res8[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._getEnumeratorRetType = 0;
  local_e8.m_Object.fields._36_4_ = 0;
  local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8.m_Array.fields._index = 0;
  local_e8.m_Array.fields._version = 0;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar3,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
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
  if (ruleSets != (SimpleJSONFixed_JSONNode_array *)0x0) {
    uVar9 = 0;
    do {
      if ((int)ruleSets->max_length <= (int)uVar9) {
        if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
        }
        __this_01 = TypeInfo_Map_BuiltinLevels_c->static_fields->__9__18_0;
        if (__this_01 == (System_Func_string__bool__o *)0x0) {
          if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
          }
          pIVar7 = (Il2CppObject *)TypeInfo_Map_BuiltinLevels_c->static_fields->__9;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)__this_01,pIVar7,
                     (intptr_t)MethodInfo_Map_BuiltinLevels_c_ComposeUIRules_b__18_0,(MethodInfo_B61EB0 *)0x0)
          ;
          TypeInfo_Map_BuiltinLevels_c->static_fields->__9__18_0 = __this_01;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9__18_0,__this_01);
        }
        source = System_Linq_Enumerable__Where_float_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                            (System_Func_TSource__bool__o *)__this_01,
                            (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
        pSVar3 = (System_Collections_Generic_List_string__o *)
                 System_Linq_Enumerable__ToList_object_
                           (source,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        return pSVar3;
      }
      if ((uint)ruleSets->max_length <= uVar9) {
label_181e7de0e:
        ThrowIndexOutOfRangeException();
      }
      if (ruleSets->m_Items[(int)uVar9] == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      puVar4 = (undefined8 *)(*(ruleSets->m_Items[(int)uVar9]->klass->vtable)._32_unknown.methodPtr)(local_78)
      ;
      local_e8._0_8_ = *puVar4;
      local_e8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
      local_e8.m_Object.fields._8_8_ = puVar4[2];
      local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
      local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
      local_e8.m_Object.fields._32_8_ = puVar4[5];
      local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
      local_e8.m_Array.fields._8_8_ = puVar4[7];
      local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
      if (bVar2) {
        do {
          pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_e8,(MethodInfo *)0x0);
          pSVar1 = (pSVar5->fields).key;
          pSVar6 = (pSVar5->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_98.fields.key = pSVar1;
          local_98.fields.value = pSVar6;
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_98,(MethodInfo *)0x0);
          value = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar6,(MethodInfo *)0x0);
          pIVar7 = SZArrayNew(TypeInfo_string_array,1);
          if (pIVar7 == (Il2CppObject *)0x0) goto label_181e7de08;
          if (*(int *)&pIVar7[1].monitor == 0) goto label_181e7de0e;
          pIVar7[2].klass = value;
          Il2CppCodeGenWriteBarrier(&pIVar7[2].klass,value);
          __this_00 = Settings_RuleParser__Parse
                                ((System_Collections_Generic_IEnumerable_string__o *)pIVar7,
                                 (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_List_UIRule__o *)0x0) goto label_181e7de08;
          if ((__this_00->fields)._size != 0) {
            pSVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,0,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_UIRule_get_Item);
            if ((pSVar8 == (Settings_UIRule_o *)0x0) ||
               (__this == (System_Collections_Generic_Dictionary_string__int__o *)0x0)) goto label_181e7de08;
            pSVar1 = (pSVar8->fields).SettingId;
            bVar2 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                               (Il2CppObject *)pSVar1,local_res8,
                               (MethodInfo_1461BD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
            if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e7de08;
            if (bVar2) {
              System_Collections_Generic_List_object___set_Item
                        ((System_Collections_Generic_List_object__o *)pSVar3,
                         (int32_t)local_res8[0].fields.m_Index,(Il2CppObject *)0x0,
                         (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
            }
            System_Collections_Generic_Dictionary_object__int___set_Item
                      ((System_Collections_Generic_Dictionary_object__int__o *)__this,(Il2CppObject *)pSVar1,
                       (pSVar3->fields)._size,
                       (MethodInfo_147A820 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
            il2cpp_runtime_helper_180012890(pSVar3);
          }
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
        } while (bVar2);
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
label_181e7de08:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$FindMapCategory
// il2cpp: System_String_o* Map_BuiltinLevels__FindMapCategory (System_String_o* mapName, const MethodInfo* method);
// 0x181e7e320
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7e478: nop dword ptr [rax + rax]
// asm:   0x181e7e5db: mov rax, qword ptr [rip + 0x21ef85e]  ; "General"
// asm:   0x181e7e635: xor edx, edx
// asm:   0x181e7e637: mov rcx, rbx
// asm:   0x181e7e63a: call 0x181dc4450  ; SimpleJSONFixed_JSONNode__op_Implicit()
// asm:   0x181e7e63f: jmp 0x181e7e5e2

System_String_o * Map_BuiltinLevels__FindMapCategory(System_String_o *mapName,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  undefined8 *puVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_138;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_128;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_18434500b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_18434500b = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  local_128.type = 0;
  local_128._4_4_ = 0;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Object.fields._version = 0;
  local_128.m_Object.fields._index = 0;
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.m_Object.fields._getEnumeratorRetType = 0;
  local_128.m_Object.fields._36_4_ = 0;
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.m_Array.fields._index = 0;
  local_128.m_Array.fields._version = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"MapCategories"),
     pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar3 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar2->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar3;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar3[1];
    local_d8.m_Object.fields._8_8_ = puVar3[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar3[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar3[4];
    local_d8.m_Object.fields._32_8_ = puVar3[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar3[6];
    local_d8.m_Array.fields._8_8_ = puVar3[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar3[8];
    bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar1) {
      do {
        pSVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar7 = (pSVar4->fields).key;
        pSVar5 = (pSVar4->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_138.fields.key = pSVar7;
        local_138.fields.value = pSVar5;
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_138,(MethodInfo *)0x0);
        if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,(MethodInfo *)"Maps"),
           pSVar2 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e7e641;
        puVar3 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar2->klass)->vtable[32].methodPtr)(local_68);
        local_128._0_8_ = *puVar3;
        local_128.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar3[1];
        local_128.m_Object.fields._8_8_ = puVar3[2];
        local_128.m_Object.fields._current.fields.key = (Il2CppObject *)puVar3[3];
        local_128.m_Object.fields._current.fields.value = (Il2CppObject *)puVar3[4];
        local_128.m_Object.fields._32_8_ = puVar3[5];
        local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar3[6];
        local_128.m_Array.fields._8_8_ = puVar3[7];
        local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar3[8];
        bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
        if (bVar1) {
          do {
            pSVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_128,
                                (MethodInfo *)0x0);
            pSVar7 = (pSVar4->fields).key;
            pSVar6 = (pSVar4->fields).value;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            local_138.fields.key = pSVar7;
            local_138.fields.value = pSVar6;
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_138,(MethodInfo *)0x0);
            if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e7e641;
            pSVar2 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar6,(MethodInfo *)"Name");
            bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                              ((SimpleJSONFixed_JSONNode_o *)pSVar2,(Il2CppObject *)mapName,(MethodInfo *)0x0)
            ;
            if (bVar1) {
              pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,(MethodInfo *)"Name");
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                                 ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
              return pSVar7;
            }
            bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
          } while (bVar1);
        }
        bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar1);
    }
    return "General";
  }
label_181e7e641:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$QueryMapsNames
// il2cpp: System_String_array* Map_BuiltinLevels__QueryMapsNames (Settings_UIRule_o* query, const MethodInfo* method);
// 0x181e83b60

System_String_array * Map_BuiltinLevels__QueryMapsNames(Settings_UIRule_o *query,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_18434500c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_18434500c = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = Map_BuiltinLevels__QueryMapsNames_1e835e0(query,(Settings_UIRule_o *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.BuiltinLevels$$QueryMapsNames
// il2cpp: System_String_array* Map_BuiltinLevels__QueryMapsNames (Settings_UIRule_o* query, Settings_UIRule_o* categoryQuery, const MethodInfo* method);
// 0x181e835e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8383a: nop word ptr [rax + rax]
// asm:   0x181e8398a: nop word ptr [rax + rax]

System_String_array *
Map_BuiltinLevels__QueryMapsNames_1e835e0
          (Settings_UIRule_o *query,Settings_UIRule_o *categoryQuery,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *b;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_168;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_158;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_108;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_b8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  undefined1 local_98 [104];
  
  if (Il2CppMethodInitialized_18434500d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_18434500d = '\x01';
  }
  local_108.type = 0;
  local_108._4_4_ = 0;
  local_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_108.m_Object.fields._version = 0;
  local_108.m_Object.fields._index = 0;
  local_108.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_158.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_108.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_108.m_Object.fields._getEnumeratorRetType = 0;
  local_108.m_Object.fields._36_4_ = 0;
  local_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.m_Array.fields._index = 0;
  local_108.m_Array.fields._version = 0;
  local_158.type = 0;
  local_158._4_4_ = 0;
  local_158.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_158.m_Object.fields._version = 0;
  local_158.m_Object.fields._index = 0;
  local_158.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_158.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_158.m_Object.fields._getEnumeratorRetType = 0;
  local_158.m_Object.fields._36_4_ = 0;
  local_158.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_158.m_Array.fields._index = 0;
  local_158.m_Array.fields._version = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
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
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"MapCategories"),
     pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_98);
    local_108._0_8_ = *puVar4;
    local_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1]
    ;
    local_108.m_Object.fields._8_8_ = puVar4[2];
    local_108.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
    local_108.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
    local_108.m_Object.fields._32_8_ = puVar4[5];
    local_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
    local_108.m_Array.fields._8_8_ = puVar4[7];
    local_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
    if (bVar2) {
      do {
        pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_b8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_108,(MethodInfo *)0x0);
        pSVar7 = (pSVar5->fields).key;
        pSVar6 = (pSVar5->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_168.fields.key = pSVar7;
        local_168.fields.value = pSVar6;
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_168,(MethodInfo *)0x0);
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e83b52;
        pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Name");
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                           ((SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
        if (categoryQuery == (Settings_UIRule_o *)0x0) {
label_181e8390d:
          pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar6,(MethodInfo *)"Maps");
          if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e83b52;
          puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_98);
          local_158._0_8_ = *puVar4;
          local_158.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
          local_158.m_Object.fields._8_8_ = puVar4[2];
          local_158.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
          local_158.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
          local_158.m_Object.fields._32_8_ = puVar4[5];
          local_158.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
          local_158.m_Array.fields._8_8_ = puVar4[7];
          local_158.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_158,(MethodInfo *)0x0);
          if (bVar2) {
            do {
              pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (&local_a8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_158,
                                  (MethodInfo *)0x0);
              pSVar7 = (pSVar5->fields).key;
              pSVar6 = (pSVar5->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_168.fields.key = pSVar7;
              local_168.fields.value = pSVar6;
              pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_168,(MethodInfo *)0x0);
              if (((query == (Settings_UIRule_o *)0x0) ||
                  ((query->fields).AllowedValues == (System_Collections_Generic_List_string__o *)0x0)) ||
                 ((((query->fields).AllowedValues)->fields)._size == 0)) {
label_181e83a3f:
                if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e83b52;
                pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar6,(MethodInfo *)"Name");
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                                   ((SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
                if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_181e83b52;
                bVar2 = System_Collections_Generic_HashSet_object___Add
                                  ((System_Collections_Generic_HashSet_object__o *)__this_00,
                                   (Il2CppObject *)pSVar7,
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                if (bVar2) {
                  pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar6,(MethodInfo *)"Name");
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                            ((SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
                  if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e83b52;
                  il2cpp_runtime_helper_180012890(__this);
                }
              }
              else {
                if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e83b52;
                pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar6,(MethodInfo *)"Name");
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                                   ((SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
                bVar2 = Settings_UIRule__MatchesAllowedValues(query,pSVar7,(MethodInfo *)0x0);
                if (bVar2) goto label_181e83a3f;
              }
              bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_158,(MethodInfo *)0x0);
            } while (bVar2);
          }
        }
        else {
          if (((categoryQuery->fields).AllowedValues == (System_Collections_Generic_List_string__o *)0x0) ||
             ((((categoryQuery->fields).AllowedValues)->fields)._size < 1)) {
            pIVar1 = (categoryQuery->fields).DefaultValue;
            if (pIVar1 == (Il2CppObject *)0x0) {
              b = (System_String_o *)0x0;
            }
            else {
              b = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
            }
            bVar2 = System_String__Equals_196c550(pSVar7,b,5,(MethodInfo *)0x0);
          }
          else {
            bVar2 = Settings_UIRule__MatchesAllowedValues(categoryQuery,pSVar7,(MethodInfo *)0x0);
          }
          if (bVar2 != false) goto label_181e8390d;
        }
        bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
      } while (bVar2);
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar8 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar8;
    }
  }
label_181e83b52:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$QueryModeNames
// il2cpp: System_String_array* Map_BuiltinLevels__QueryModeNames (Settings_UIRule_o* query, const MethodInfo* method);
// 0x181e83bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e83d49: nop dword ptr [rax]

System_String_array * Map_BuiltinLevels__QueryModeNames(Settings_UIRule_o *query,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_string__o *__this;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  undefined8 *puVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_18434500e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_18434500e = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"GameModes");
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      puVar3 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar2->klass)->vtable[32].methodPtr)(local_68);
      local_d8._0_8_ = *puVar3;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar3[1];
      local_d8.m_Object.fields._8_8_ = puVar3[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar3[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar3[4];
      local_d8.m_Object.fields._32_8_ = puVar3[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar3[6];
      local_d8.m_Array.fields._8_8_ = puVar3[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar3[8];
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (bVar1) {
        do {
          pSVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          pSVar6 = (pSVar4->fields).key;
          pSVar5 = (pSVar4->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar6;
          local_88.fields.value = pSVar5;
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          if (((query == (Settings_UIRule_o *)0x0) ||
              ((query->fields).AllowedValues == (System_Collections_Generic_List_string__o *)0x0)) ||
             ((((query->fields).AllowedValues)->fields)._size == 0)) {
label_181e83e00:
            if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e83f04;
            pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,(MethodInfo *)"Name");
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                               ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
            if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_181e83f04;
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar6,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
          else {
            if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e83f04;
            pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,(MethodInfo *)"Name");
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                               ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
            bVar1 = Settings_UIRule__MatchesAllowedValues(query,pSVar6,(MethodInfo *)0x0);
            if (bVar1) goto label_181e83e00;
          }
          bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
        } while (bVar1);
      }
      if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this,
                   (Il2CppObject *)"None",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this,
                   (Il2CppObject *)TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        pSVar7 = (System_String_array *)
                 System_Linq_Enumerable__ToArray_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)__this,
                            (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
        return pSVar7;
      }
    }
  }
label_181e83f04:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$LoadMap
// il2cpp: System_String_o* Map_BuiltinLevels__LoadMap (System_String_o* category, System_String_o* name, const MethodInfo* method);
// 0x181e82ca0

System_String_o *
Map_BuiltinLevels__LoadMap(System_String_o *category,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_o *d;
  System_String_o *name_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434500f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    Il2CppMethodInitialized_18434500f = '\x01';
  }
  bVar1 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar3 = System_String__Concat_1969590
                       (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",
                        name,".txt",(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = Map_BuiltinLevels__GetMap(category,name,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)(pSVar2,(MethodInfo *)"Category");
    if (bVar1) {
      d = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Category");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      category = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                           ((SimpleJSONFixed_JSONNode_o *)d,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
    name_00 = System_String__Concat_1969590
                        (category,"/",name,"Map",(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar3 = ApplicationManagers_ResourceManager__TryLoadText(pSVar3,name_00,(MethodInfo *)0x0);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$LoadAutosave
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAutosave (System_String_o* name, const MethodInfo* method);
// 0x181e825a0

System_String_o * Map_BuiltinLevels__LoadAutosave(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184345010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184345010 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = System_String__Concat_1969590
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,
                      "/",name,".txt",(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels$$LoadLogic
// il2cpp: System_String_o* Map_BuiltinLevels__LoadLogic (System_String_o* name, const MethodInfo* method);
// 0x181e82890
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e82c42: xor edx, edx
// asm:   0x181e82c44: mov rcx, rdi
// asm:   0x181e82c47: jmp 0x181e82c24

System_String_o * Map_BuiltinLevels__LoadLogic(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  undefined8 *puVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *name_00;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184345011 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_184345011 = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  bVar1 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar1 = System_String__op_Equality
                    (name,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"GameModes"),
       pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar2->klass)->vtable[32].methodPtr)(local_68);
      local_d8._0_8_ = *puVar3;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar3[1];
      local_d8.m_Object.fields._8_8_ = puVar3[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar3[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar3[4];
      local_d8.m_Object.fields._32_8_ = puVar3[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar3[6];
      local_d8.m_Array.fields._8_8_ = puVar3[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar3[8];
      while( true ) {
        bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          pSVar6 = System_String__Concat_1969590
                             (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,
                              "/",name,".cl",(MethodInfo *)0x0);
          bVar1 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
          if (!bVar1) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            pSVar6 = System_String__Concat_1969590
                               (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,
                                "/",name,".txt",(MethodInfo *)0x0);
            bVar1 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
            if (!bVar1) {
              return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
          }
          pSVar6 = System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
          return pSVar6;
        }
        pSVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar6 = (pSVar4->fields).key;
        pSVar5 = (pSVar4->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_88.fields.key = pSVar6;
        local_88.fields.value = pSVar5;
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Name");
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar2,(Il2CppObject *)name,(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Modes;
          name_00 = System_String__Concat_1969e50(name,"Logic",(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pSVar6 = ApplicationManagers_ResourceManager__TryLoadText(pSVar6,name_00,(MethodInfo *)0x0);
          return pSVar6;
        }
      }
    }
    ThrowNullReferenceException();
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  return TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
}


// Map.BuiltinLevels$$IsLogicBuiltin
// il2cpp: bool Map_BuiltinLevels__IsLogicBuiltin (System_String_o* name, const MethodInfo* method);
// 0x181e821f0

bool Map_BuiltinLevels__IsLogicBuiltin(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184345012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_184345012 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar2 = System_String__op_Equality
                    (name,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"GameModes"),
     pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar4;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
    local_d8.m_Object.fields._8_8_ = puVar4[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
    local_d8.m_Object.fields._32_8_ = puVar4[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
    local_d8.m_Array.fields._8_8_ = puVar4[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
    while( true ) {
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
      pSVar1 = (pSVar5->fields).key;
      pSVar6 = (pSVar5->fields).value;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_88.fields.key = pSVar1;
      local_88.fields.value = pSVar6;
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
      if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Name");
      bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)name,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetMapCategories
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapCategories (const MethodInfo* method);
// 0x181e806b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e80829: nop dword ptr [rax]
// asm:   0x181e8091d: jmp 0x181e80924

System_String_array * Map_BuiltinLevels__GetMapCategories(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  undefined8 *puVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar11;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184345013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_184345013 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar9 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"MapCategories"),
     pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar7;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
    local_d8.m_Object.fields._8_8_ = puVar7[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
    local_d8.m_Object.fields._32_8_ = puVar7[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
    local_d8.m_Array.fields._8_8_ = puVar7[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
    bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar5) {
      do {
        pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar10 = (pSVar8->fields).key;
        pSVar9 = (pSVar8->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_88.fields.key = pSVar10;
        local_88.fields.value = pSVar9;
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
        if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e809a0;
        pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"Name");
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                            ((SimpleJSONFixed_JSONNode_o *)pSVar6,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e809a0;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_181e809a0;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) goto label_181e809a6;
          pSVar3->m_Items[(int)uVar2] = pSVar10;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar10);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar5);
    }
    else if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e809a0;
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar10 = "Custom";
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_181e809a6:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pUVar11 = System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_T__o *)__this,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar11;
    }
  }
label_181e809a0:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetMapNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapNames (System_String_o* category, const MethodInfo* method);
// 0x181e809b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e80b91: nop dword ptr [rax]
// asm:   0x181e80b95: nop word ptr [rax + rax]
// asm:   0x181e80e13: mov rax, rdi
// asm:   0x181e80e16: jmp 0x181e80d57

System_String_array * Map_BuiltinLevels__GetMapNames(System_String_o *category,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  undefined8 *puVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  System_String_o *pSVar7;
  uint uVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_138;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_128;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184345014 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184345014 = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  local_128.type = 0;
  local_128._4_4_ = 0;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Object.fields._version = 0;
  local_128.m_Object.fields._index = 0;
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.m_Object.fields._getEnumeratorRetType = 0;
  local_128.m_Object.fields._36_4_ = 0;
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.m_Array.fields._index = 0;
  local_128.m_Array.fields._version = 0;
  bVar1 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pUVar6 = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
              *)Map_BuiltinLevels__GetTxtFiles
                          (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                   *)0x0) {
      uVar8 = 0;
      do {
        if ((int)pUVar6->max_length <= (int)uVar8) {
          return (System_String_array *)pUVar6;
        }
        if ((uint)pUVar6->max_length <= uVar8) {
label_181e80e21:
          ThrowIndexOutOfRangeException();
        }
        pSVar7 = (&pUVar6->m_Items[0].fields.message)[(int)uVar8];
        if (pSVar7 == (System_String_o *)0x0) break;
        pSVar7 = System_String__Replace_1970e80
                           (pSVar7,".txt","",(MethodInfo *)0x0);
        if ((uint)pUVar6->max_length <= uVar8) goto label_181e80e21;
        (&pUVar6->m_Items[0].fields.message)[(int)uVar8] = pSVar7;
        Il2CppCodeGenWriteBarrier(&pUVar6->m_Items[0].fields.message + (int)uVar8,pSVar7);
        uVar8 = uVar8 + 1;
      } while( true );
    }
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"MapCategories"),
       pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar2->klass)->vtable[32].methodPtr)(local_68);
      local_d8._0_8_ = *puVar3;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar3[1];
      local_d8.m_Object.fields._8_8_ = puVar3[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar3[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar3[4];
      local_d8.m_Object.fields._32_8_ = puVar3[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar3[6];
      local_d8.m_Array.fields._8_8_ = puVar3[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar3[8];
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (bVar1) {
        do {
          pSVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          pSVar7 = (pSVar4->fields).key;
          pSVar5 = (pSVar4->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_138.fields.key = pSVar7;
          local_138.fields.value = pSVar5;
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_138,(MethodInfo *)0x0);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e80e1b;
          pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,(MethodInfo *)"Name");
          bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                            ((SimpleJSONFixed_JSONNode_o *)pSVar2,(Il2CppObject *)category,(MethodInfo *)0x0);
          if (bVar1) {
            pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,(MethodInfo *)"Maps");
            if (pSVar2 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e80e1b;
            puVar3 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar2->klass)->vtable[32].methodPtr)(local_68);
            local_128._0_8_ = *puVar3;
            local_128.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar3[1];
            local_128.m_Object.fields._8_8_ = puVar3[2];
            local_128.m_Object.fields._current.fields.key = (Il2CppObject *)puVar3[3];
            local_128.m_Object.fields._current.fields.value = (Il2CppObject *)puVar3[4];
            local_128.m_Object.fields._32_8_ = puVar3[5];
            local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar3[6];
            local_128.m_Array.fields._8_8_ = puVar3[7];
            local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar3[8];
            bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
            if (bVar1) {
              do {
                pSVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_128,
                                    (MethodInfo *)0x0);
                pSVar7 = (pSVar4->fields).key;
                pSVar5 = (pSVar4->fields).value;
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                local_138.fields.key = pSVar7;
                local_138.fields.value = pSVar5;
                pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_138,(MethodInfo *)0x0);
                if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e80e1b;
                pSVar2 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar5,(MethodInfo *)"Name");
                SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                          ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
                if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e80e1b;
                il2cpp_runtime_helper_180012890(__this);
                bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
              } while (bVar1);
            }
          }
          bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
        } while (bVar1);
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar6 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar6;
      }
    }
  }
label_181e80e1b:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetAutosaveNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAutosaveNames (const MethodInfo* method);
// 0x181e7e910
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7e989: nop dword ptr [rax]

System_String_array * Map_BuiltinLevels__GetAutosaveNames(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184345015 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = Map_BuiltinLevels__GetTxtFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,(MethodInfo *)0x0
                     );
  if (pSVar1 != (System_String_array *)0x0) {
    uVar2 = 0;
    do {
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return pSVar1;
      }
      if ((uint)pSVar1->max_length <= uVar2) {
label_181e7e9f7:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar2] == (System_String_o *)0x0) break;
      value = System_String__Replace_1970e80
                        (pSVar1->m_Items[(int)uVar2],".txt","",
                         (MethodInfo *)0x0);
      if ((uint)pSVar1->max_length <= uVar2) goto label_181e7e9f7;
      pSVar1->m_Items[(int)uVar2] = value;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + (int)uVar2,value);
      uVar2 = uVar2 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$LoadAddon
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAddon (System_String_o* name, const MethodInfo* method);
// 0x181e82400

System_String_o * Map_BuiltinLevels__LoadAddon(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *name_00;
  
  if (Il2CppMethodInitialized_184345016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184345016 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    bVar1 = Map_BuiltinLevels__IsAddonBuiltin(name,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Addons;
      name_00 = System_String__Concat_1969e50(name,"Logic",(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pSVar2 = ApplicationManagers_ResourceManager__TryLoadText(pSVar2,name_00,(MethodInfo *)0x0);
      return pSVar2;
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar2 = System_String__Concat_1969590
                       (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,"/"
                        ,name,".cl",(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Map.BuiltinLevels$$GetAddonNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAddonNames (const MethodInfo* method);
// 0x181e7e650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7e81f: nop 

System_String_array * Map_BuiltinLevels__GetAddonNames(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184345017 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184345017 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)0x0);
  if (pSVar2 != (System_String_array *)0x0) {
    for (uVar5 = 0; (int)uVar5 < (int)pSVar2->max_length; uVar5 = uVar5 + 1) {
      if ((uint)pSVar2->max_length <= uVar5) goto label_181e7e901;
      if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_181e7e8fb;
      pSVar3 = pSVar2->m_Items[(int)uVar5];
      bVar1 = System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar3,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      if (bVar1) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e7e8fb;
        il2cpp_runtime_helper_180012890(__this,pSVar3,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    if (Il2CppMethodInitialized_18434501a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
      il2cpp_codegen_initialize_runtime_metadata(&".cl");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434501a = '\x01';
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar2 = Map_BuiltinLevels__GetClFiles
                       (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      for (uVar5 = 0; (int)uVar5 < (int)pSVar2->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pSVar2->max_length <= uVar5) goto label_181e7e901;
        if (pSVar2->m_Items[(int)uVar5] == (System_String_o *)0x0) goto label_181e7e8fb;
        pSVar3 = System_String__Replace_1970e80
                           (pSVar2->m_Items[(int)uVar5],".cl","",
                            (MethodInfo *)0x0);
        if ((uint)pSVar2->max_length <= uVar5) goto label_181e7e901;
        pSVar2->m_Items[(int)uVar5] = pSVar3;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar5,pSVar3);
      }
      for (uVar5 = 0; (int)uVar5 < (int)pSVar2->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pSVar2->max_length <= uVar5) {
label_181e7e901:
          ThrowIndexOutOfRangeException();
        }
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_181e7e8fb;
        pSVar3 = pSVar2->m_Items[(int)uVar5];
        bVar1 = System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar3,
                           (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        if (bVar1) {
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e7e8fb;
          il2cpp_runtime_helper_180012890(__this,pSVar3,MethodInfo_System_Collections_Generic_List_string_Add);
        }
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar4 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar4;
      }
    }
  }
label_181e7e8fb:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetBuiltinAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetBuiltinAddons (const MethodInfo* method);
// 0x181e7ea00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7ec12: nop dword ptr [rax]
// asm:   0x181e7ec16: nop word ptr [rax + rax]

System_String_array * Map_BuiltinLevels__GetBuiltinAddons(MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184345018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Addons");
    Il2CppMethodInitialized_184345018 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e7ed05;
    bVar2 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)(pSVar6,(MethodInfo *)"Addons");
    if (bVar2) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
      if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar6,(MethodInfo *)"Addons"),
         pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e7ed05;
      puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_68);
      local_d8._0_8_ = *puVar4;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
      local_d8.m_Object.fields._8_8_ = puVar4[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
      local_d8.m_Object.fields._32_8_ = puVar4[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
      local_d8.m_Array.fields._8_8_ = puVar4[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (bVar2) {
        do {
          pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          pSVar7 = (pSVar5->fields).key;
          pSVar6 = (pSVar5->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar7;
          local_88.fields.value = pSVar6;
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar6,(MethodInfo *)"Name"),
             pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e7ed05;
          pSVar1 = pSVar3->klass;
          pSVar7 = (System_String_o *)
                   (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (pSVar3,(UnityEngine_GameObject_o *)
                                     (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
          bVar2 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
          if (!bVar2) {
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e7ed05;
            il2cpp_runtime_helper_180012890(__this);
          }
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
        } while (bVar2);
      }
    }
  }
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pUVar8 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_T__o *)__this,
                        (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return (System_String_array *)pUVar8;
  }
label_181e7ed05:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$IsAddonBuiltin
// il2cpp: bool Map_BuiltinLevels__IsAddonBuiltin (System_String_o* name, const MethodInfo* method);
// 0x181e82130

bool Map_BuiltinLevels__IsAddonBuiltin(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184345019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_184345019 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar2 = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)0x0);
    if (pSVar2 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      bVar1 = System_String__op_Equality(pSVar2->m_Items[(int)uVar3],name,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}


// Map.BuiltinLevels$$GetCustomAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomAddons (const MethodInfo* method);
// 0x181e7f070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7f0e9: nop dword ptr [rax]

System_String_array * Map_BuiltinLevels__GetCustomAddons(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  uint uVar2;
  
  if (Il2CppMethodInitialized_18434501a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434501a = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = Map_BuiltinLevels__GetClFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_array *)0x0) {
    uVar2 = 0;
    do {
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return pSVar1;
      }
      if ((uint)pSVar1->max_length <= uVar2) {
label_181e7f157:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar2] == (System_String_o *)0x0) break;
      value = System_String__Replace_1970e80
                        (pSVar1->m_Items[(int)uVar2],".cl","",
                         (MethodInfo *)0x0);
      if ((uint)pSVar1->max_length <= uVar2) goto label_181e7f157;
      pSVar1->m_Items[(int)uVar2] = value;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + (int)uVar2,value);
      uVar2 = uVar2 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$DeleteCustomMap
// il2cpp: void Map_BuiltinLevels__DeleteCustomMap (System_String_o* name, const MethodInfo* method);
// 0x181e7e120

void Map_BuiltinLevels__DeleteCustomMap(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  
  if (Il2CppMethodInitialized_18434501b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_18434501b = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_1969590
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",name,
                    ".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$DeleteCustomLogic
// il2cpp: void Map_BuiltinLevels__DeleteCustomLogic (System_String_o* name, const MethodInfo* method);
// 0x181e7e040

void Map_BuiltinLevels__DeleteCustomLogic(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434501c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_18434501c = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = System_String__Concat_1969590
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,"/",
                      name,".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969590
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,"/",
                      name,".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$DeleteCustomAddon
// il2cpp: void Map_BuiltinLevels__DeleteCustomAddon (System_String_o* name, const MethodInfo* method);
// 0x181e7dfa0

void Map_BuiltinLevels__DeleteCustomAddon(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  
  if (Il2CppMethodInitialized_18434501d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_18434501d = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_1969590
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,"/",
                    name,".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomMap
// il2cpp: void Map_BuiltinLevels__SaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x181e847a0

void Map_BuiltinLevels__SaveCustomMap(System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *contents;
  
  if (Il2CppMethodInitialized_18434501e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_18434501e = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_1969590
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",name,
                    ".txt",(MethodInfo *)0x0);
  if (script != (Map_MapScript_o *)0x0) {
    contents = (*(script->klass->vtable)._4_Serialize.methodPtr)
                         (script,(script->klass->vtable)._4_Serialize.method);
    System_IO_File__WriteAllText(path,contents,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$AutosaveCustomMap
// il2cpp: void Map_BuiltinLevels__AutosaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x181e7d670

void Map_BuiltinLevels__AutosaveCustomMap(System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *contents;
  
  if (Il2CppMethodInitialized_18434501f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_18434501f = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_1969590
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,
                    "/",name,".txt",(MethodInfo *)0x0);
  if (script != (Map_MapScript_o *)0x0) {
    contents = (*(script->klass->vtable)._4_Serialize.methodPtr)
                         (script,(script->klass->vtable)._4_Serialize.method);
    System_IO_File__WriteAllText(path,contents,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$BackupCustomMap
// il2cpp: void Map_BuiltinLevels__BackupCustomMap (System_String_o* name, System_String_o* map, System_String_o* version, const MethodInfo* method);
// 0x181e7d740

void Map_BuiltinLevels__BackupCustomMap
               (System_String_o *name,System_String_o *map,System_String_o *version,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_array *values;
  System_DateTime_Fields local_res8;
  
  if (Il2CppMethodInitialized_184345020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"-v");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"yyyy-MM-dd-HH-mm-ss-fff");
    Il2CppMethodInitialized_184345020 = '\x01';
  }
  local_res8._dateData = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath,(MethodInfo *)0x0);
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  local_res8._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
  pSVar2 = System_DateTime__ToString_1b1f6f0
                     ((System_DateTime_o *)&local_res8,"yyyy-MM-dd-HH-mm-ss-fff",(MethodInfo *)0x0);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = name;
      Il2CppCodeGenWriteBarrier(values->m_Items,name);
      pSVar1 = "-v";
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = "-v";
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = version;
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,version);
          pSVar1 = "-";
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = "-";
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar2;
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
              pSVar2 = ".txt";
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = ".txt";
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar2);
                pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                pSVar2 = System_String__Concat_1969b70
                                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath,
                                    "/",pSVar2,(MethodInfo *)0x0);
                System_IO_File__WriteAllText(pSVar2,map,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$SaveCustomLogic
// il2cpp: void Map_BuiltinLevels__SaveCustomLogic (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x181e846f0

void Map_BuiltinLevels__SaveCustomLogic(System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (Il2CppMethodInitialized_184345021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_184345021 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_1969590
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,"/",
                    name,".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomAddon
// il2cpp: void Map_BuiltinLevels__SaveCustomAddon (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x181e84640

void Map_BuiltinLevels__SaveCustomAddon(System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (Il2CppMethodInitialized_184345022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_184345022 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_1969590
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,"/",
                    name,".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$GetGameModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetGameModes (System_String_o* category, System_String_o* mapName, bool hasMapLogic, const MethodInfo* method);
// 0x181e7fb10
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7ff0d: nop dword ptr [rax]
// asm:   0x181e7ff95: jmp 0x181e7ff99
// asm:   0x181e80115: nop word ptr [rax + rax]
// asm:   0x181e801d3: jmp 0x181e805ff
// asm:   0x181e8027f: nop 
// asm:   0x181e8034f: jmp 0x181e805ff
// asm:   0x181e80484: jmp 0x181e805ff

System_String_array *
Map_BuiltinLevels__GetGameModes
          (System_String_o *category,System_String_o *mapName,bool hasMapLogic,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  undefined8 *puVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_array *pSVar11;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar12;
  uint uVar13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_148;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_138;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_e8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  undefined1 local_88 [96];
  
  if (Il2CppMethodInitialized_184345023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"ExcludedModes");
    il2cpp_codegen_initialize_runtime_metadata(&"IncludedModes");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_184345023 = '\x01';
  }
  local_138.type = 0;
  local_138._4_4_ = 0;
  local_138.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_138.m_Object.fields._version = 0;
  local_138.m_Object.fields._index = 0;
  local_138.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_138.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_138.m_Object.fields._getEnumeratorRetType = 0;
  local_138.m_Object.fields._36_4_ = 0;
  local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_138.m_Array.fields._index = 0;
  local_138.m_Array.fields._version = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (hasMapLogic) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e80696;
    il2cpp_runtime_helper_180012890(__this,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                  MethodInfo_System_Collections_Generic_List_string_Add);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar9 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"GameModes"),
     pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e80696;
  puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(&local_d8);
  local_138._0_8_ = *puVar7;
  local_138.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
  local_138.m_Object.fields._8_8_ = puVar7[2];
  local_138.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
  local_138.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
  local_138.m_Object.fields._32_8_ = puVar7[5];
  local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
  local_138.m_Array.fields._8_8_ = puVar7[7];
  local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
  bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
  if (bVar5) {
    do {
      pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (&local_e8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_138,(MethodInfo *)0x0);
      pSVar10 = (pSVar8->fields).key;
      pSVar9 = (pSVar8->fields).value;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_148.fields.key = pSVar10;
      local_148.fields.value = pSVar9;
      pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
      if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar9,(MethodInfo *)"Name"),
         pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e80696;
      pSVar3 = pSVar6->klass;
      pSVar10 = (System_String_o *)
                (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                          (pSVar6,(UnityEngine_GameObject_o *)
                                  (pSVar3->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar3);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e80696;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar11 = (__this->fields)._items;
      if (pSVar11 == (System_String_array *)0x0) goto label_181e80696;
      uVar13 = (__this->fields)._size;
      if (uVar13 < (uint)pSVar11->max_length) {
        (__this->fields)._size = uVar13 + 1;
        if ((uint)pSVar11->max_length <= uVar13) goto label_181e8069c;
        pSVar11->m_Items[(int)uVar13] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar13,pSVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
    } while (bVar5);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  if (Il2CppMethodInitialized_18434502b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_18434502b = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar9 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"MapCategories"),
     pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0)) {
label_181e806a2:
    ThrowNullReferenceException();
  }
  puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_88);
  local_d8._0_8_ = *puVar7;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
  local_d8.m_Object.fields._8_8_ = puVar7[2];
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
  local_d8.m_Object.fields._32_8_ = puVar7[5];
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
  local_d8.m_Array.fields._8_8_ = puVar7[7];
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
  do {
    bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (!bVar5) {
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
      break;
    }
    pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                       (&local_e8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
    pSVar10 = (pSVar8->fields).key;
    pSVar9 = (pSVar8->fields).value;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    local_148.fields.key = pSVar10;
    local_148.fields.value = pSVar9;
    pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e806a2;
    pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"Name");
    bVar5 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar6,(Il2CppObject *)category,(MethodInfo *)0x0);
  } while (!bVar5);
  a = Map_BuiltinLevels__GetMap(category,mapName,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e80696;
      bVar5 = (*(a->klass->vtable)._28_HasKey.methodPtr)(a,(MethodInfo *)"IncludedModes");
      if (bVar5) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e80696;
        iVar2 = (__this->fields)._size;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        (__this->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(__this->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"IncludedModes");
        if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e80696;
        puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_88);
        local_138._0_8_ = *puVar7;
        local_138.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
        local_138.m_Object.fields._8_8_ = puVar7[2];
        local_138.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
        local_138.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
        local_138.m_Object.fields._32_8_ = puVar7[5];
        local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
        local_138.m_Array.fields._8_8_ = puVar7[7];
        local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
        if (bVar5) {
          do {
            pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (&local_e8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_138,
                                (MethodInfo *)0x0);
            pSVar10 = (pSVar8->fields).key;
            pSVar9 = (pSVar8->fields).value;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            local_148.fields.key = pSVar10;
            local_148.fields.value = pSVar9;
            pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
            if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e80696;
            pSVar10 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
            pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
            pSVar11 = (__this->fields)._items;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            if (pSVar11 == (System_String_array *)0x0) goto label_181e80696;
            uVar13 = (__this->fields)._size;
            if (uVar13 < (uint)pSVar11->max_length) {
              (__this->fields)._size = uVar13 + 1;
              if ((uint)pSVar11->max_length <= uVar13) goto label_181e8069c;
              pSVar11->m_Items[(int)uVar13] = pSVar10;
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar13,pSVar10);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                         (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
          } while (bVar5);
        }
      }
      else {
        bVar5 = (*(a->klass->vtable)._28_HasKey.methodPtr)(a,(MethodInfo *)"ExcludedModes");
        if (bVar5) {
          pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"ExcludedModes");
          if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e80696;
          puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_88);
          local_138._0_8_ = *puVar7;
          local_138.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
          local_138.m_Object.fields._8_8_ = puVar7[2];
          local_138.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
          local_138.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
          local_138.m_Object.fields._32_8_ = puVar7[5];
          local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
          local_138.m_Array.fields._8_8_ = puVar7[7];
          local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
          bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
          if (bVar5) {
            do {
              pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (&local_e8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_138,
                                  (MethodInfo *)0x0);
              pSVar10 = (pSVar8->fields).key;
              pSVar9 = (pSVar8->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_148.fields.key = pSVar10;
              local_148.fields.value = pSVar9;
              pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
              if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (pSVar10 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                      (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method),
                 __this == (System_Collections_Generic_List_string__o *)0x0)) goto label_181e80696;
              bVar5 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                                 (MethodInfo_93FC70 *)
                                 MethodInfo_System_Collections_Generic_List_string_Contains);
              if (bVar5) {
                pSVar10 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
                System_Collections_Generic_List_object___Remove
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                           (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
              }
              bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
            } while (bVar5);
          }
        }
        else {
          if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e80696;
          bVar5 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)(pSVar9,(MethodInfo *)"IncludedModes");
          if (bVar5) {
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e80696;
            iVar2 = (__this->fields)._size;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            (__this->fields)._size = 0;
            if (0 < iVar2) {
              System_Array__Clear((System_Array_o *)(__this->fields)._items,0,iVar2,(MethodInfo *)0x0);
            }
            pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar9,(MethodInfo *)"IncludedModes");
            if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e80696;
            puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_88);
            local_138._0_8_ = *puVar7;
            local_138.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
            local_138.m_Object.fields._8_8_ = puVar7[2];
            local_138.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
            local_138.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
            local_138.m_Object.fields._32_8_ = puVar7[5];
            local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
            local_138.m_Array.fields._8_8_ = puVar7[7];
            local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
            bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
            if (bVar5) {
              do {
                pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (&local_e8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_138,
                                    (MethodInfo *)0x0);
                pSVar10 = (pSVar8->fields).key;
                pSVar9 = (pSVar8->fields).value;
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                local_148.fields.key = pSVar10;
                local_148.fields.value = pSVar9;
                pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
                if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e80696;
                pSVar10 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
                pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
                pSVar11 = (__this->fields)._items;
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                if (pSVar11 == (System_String_array *)0x0) goto label_181e80696;
                uVar13 = (__this->fields)._size;
                if (uVar13 < (uint)pSVar11->max_length) {
                  (__this->fields)._size = uVar13 + 1;
                  if ((uint)pSVar11->max_length <= uVar13) goto label_181e8069c;
                  pSVar11->m_Items[(int)uVar13] = pSVar10;
                  Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar13,pSVar10);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                             (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
                }
                bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
              } while (bVar5);
            }
          }
          else {
            bVar5 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar9,(MethodInfo *)"ExcludedModes");
            if (bVar5) {
              pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar9,(MethodInfo *)"ExcludedModes");
              if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e80696;
              puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_88);
              local_138._0_8_ = *puVar7;
              local_138.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
              local_138.m_Object.fields._8_8_ = puVar7[2];
              local_138.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
              local_138.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
              local_138.m_Object.fields._32_8_ = puVar7[5];
              local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
              local_138.m_Array.fields._8_8_ = puVar7[7];
              local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
              bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
              if (bVar5) {
                do {
                  pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                     (&local_e8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_138,
                                      (MethodInfo *)0x0);
                  pSVar10 = (pSVar8->fields).key;
                  pSVar9 = (pSVar8->fields).value;
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  local_148.fields.key = pSVar10;
                  local_148.fields.value = pSVar9;
                  pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
                  if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                     (pSVar10 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                          (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method),
                     __this == (System_Collections_Generic_List_string__o *)0x0)) goto label_181e80696;
                  bVar5 = System_Collections_Generic_List_object___Contains
                                    ((System_Collections_Generic_List_object__o *)__this,
                                     (Il2CppObject *)pSVar10,
                                     (MethodInfo_93FC70 *)
                                     MethodInfo_System_Collections_Generic_List_string_Contains);
                  if (bVar5) {
                    pSVar10 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                        (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
                    System_Collections_Generic_List_object___Remove
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
                  }
                  bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0)
                  ;
                } while (bVar5);
              }
            }
          }
        }
      }
    }
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar11 = Map_BuiltinLevels__GetCustomModes((MethodInfo *)0x0);
  if (pSVar11 != (System_String_array *)0x0) {
    for (uVar13 = 0; (int)uVar13 < (int)pSVar11->max_length; uVar13 = uVar13 + 1) {
      if ((uint)pSVar11->max_length <= uVar13) {
label_181e8069c:
        ThrowIndexOutOfRangeException();
      }
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e80696;
      pSVar10 = pSVar11->m_Items[(int)uVar13];
      bVar5 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar5) {
        il2cpp_runtime_helper_180012890(__this,pSVar10,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar12 = System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_T__o *)__this,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar12;
    }
  }
label_181e80696:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetSandboxGameModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetSandboxGameModes (System_String_o* category, System_String_o* mapName, bool hasMapLogic, int32_t* recommendedModeCount, const MethodInfo* method);
// 0x181e81150
// eh: try 0x181e816b0..0x181e8189f -> pad 0x18333c670 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e814f8: nop dword ptr [rax + rax]
// asm:   0x181e81771: mov rdx, qword ptr [rip + 0x22161a0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e81778: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e8177d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e81782: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e81787: test rcx, rcx
// asm:   0x181e8178a: jne 0x181e8189f
// asm:   0x181e81790: xor esi, esi
// asm:   0x181e81792: mov rdi, qword ptr [rsp + 0x150]
// asm:   0x181e8189f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c670: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c675: push rbp
// asm:   0x18333c676: sub rsp, 0x20
// asm:   0x18333c67a: mov rbp, rdx
// asm:   0x18333c67d: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x18333c684: mov rcx, qword ptr [rax]
// asm:   0x18333c687: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333c68b: movabs rax, 0
// asm:   0x18333c695: add rsp, 0x20
// asm:   0x18333c699: pop rbp
// asm:   0x18333c69a: ret 

System_String_array *
Map_BuiltinLevels__GetSandboxGameModes
          (System_String_o *category,System_String_o *mapName,bool hasMapLogic,int32_t *recommendedModeCount,
          MethodInfo *method)

{
  int32_t *piVar1;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  MethodInfo *pMVar3;
  Il2CppObject *value;
  bool bVar4;
  System_String_array *pSVar5;
  System_Func_string__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  undefined8 *puVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar12;
  uint uVar13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_128;
  undefined1 local_118 [8];
  SimpleJSONFixed_JSONNode_o *pSStack_110;
  Il2CppObject *local_108;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  undefined1 local_a8 [16];
  Il2CppObject *local_98;
  undefined1 local_88 [104];
  
  if (Il2CppMethodInitialized_184345024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_184345024 = '\x01';
  }
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118 = (undefined1  [8])0x0;
  pSStack_110 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_108 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar5 = Map_BuiltinLevels__GetGameModes(category,mapName,hasMapLogic,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin,(MethodInfo_B61EB0 *)0x0);
  pSVar6 = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
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
  pSVar6 = System_Linq_Enumerable__Distinct_object__6bb210
                     (pSVar6,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_6BB210 *)MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
  collection = System_Linq_Enumerable__ToList_object_
                         (pSVar6,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if (collection != (System_Collections_Generic_List_TSource__o *)0x0) {
    *recommendedModeCount = (collection->fields)._size;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e81893;
    pSVar11 = TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_01->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto label_181e81893;
    uVar13 = (__this_01->fields)._size;
    if (uVar13 < (uint)pSVar5->max_length) {
      (__this_01->fields)._size = uVar13 + 1;
      if ((uint)pSVar5->max_length <= uVar13) goto label_181e818a5;
      pSVar5->m_Items[(int)uVar13] = pSVar11;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar13,pSVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar11,
                 (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
    }
    pSVar10 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar7 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar10,(MethodInfo *)"GameModes"),
       pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      puVar8 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar7->klass)->vtable[32].methodPtr)(local_88);
      local_f8._0_8_ = *puVar8;
      local_f8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar8[1];
      local_f8.m_Object.fields._8_8_ = puVar8[2];
      local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar8[3];
      local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar8[4];
      local_f8.m_Object.fields._32_8_ = puVar8[5];
      local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar8[6];
      local_f8.m_Array.fields._8_8_ = puVar8[7];
      local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar8[8];
      bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      if (bVar4) {
        do {
          pSVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             ((System_Collections_Generic_KeyValuePair_string__JSONNode__o *)local_a8,
                              (SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0);
          pSVar11 = (pSVar9->fields).key;
          pSVar10 = (pSVar9->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_128.fields.key = pSVar11;
          local_128.fields.value = pSVar10;
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_128,(MethodInfo *)0x0);
          if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar7 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar10,(MethodInfo *)"Name"),
             pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e81893;
          pSVar2 = pSVar7->klass;
          pSVar11 = (System_String_o *)
                    (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                              (pSVar7,(UnityEngine_GameObject_o *)
                                      (pSVar2->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar2);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_01->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto label_181e81893;
          uVar13 = (__this_01->fields)._size;
          if (uVar13 < (uint)pSVar5->max_length) {
            (__this_01->fields)._size = uVar13 + 1;
            if ((uint)pSVar5->max_length <= uVar13) goto label_181e818a5;
            pSVar5->m_Items[(int)uVar13] = pSVar11;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar13,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar11,
                       (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
        } while (bVar4);
      }
      pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
      pSVar11 = "None";
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_01->fields)._items;
      if (pSVar5 != (System_String_array *)0x0) {
        uVar13 = (__this_01->fields)._size;
        if (uVar13 < (uint)pSVar5->max_length) {
          (__this_01->fields)._size = uVar13 + 1;
          if ((uint)pSVar5->max_length <= uVar13) {
label_181e818a5:
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[(int)uVar13] = pSVar11;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar13,pSVar11);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar11,
                     (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                   (System_Collections_Generic_List_T__o *)__this_01,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_118 = (undefined1  [8])local_a8._0_8_;
        pSStack_110 = (SimpleJSONFixed_JSONNode_o *)local_a8._8_8_;
        local_108 = local_98;
        uVar13 = 0;
        local_128.fields.key = (System_String_o *)0x0;
        local_128.fields.value = (SimpleJSONFixed_JSONNode_o *)local_118;
        while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_118,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
              value = local_108, bVar4) {
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
          bVar4 = System_Linq_Enumerable__Contains_object__6ba340
                            ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,value,
                             (System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                             (MethodInfo_6BA340 *)MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
          if (!bVar4) {
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_00,value,MethodInfo_System_Collections_Generic_List_string_Add);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_118,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar5 = Map_BuiltinLevels__GetCustomModes((MethodInfo *)0x0);
        if (pSVar5 != (System_String_array *)0x0) {
          for (; (int)uVar13 < (int)pSVar5->max_length; uVar13 = uVar13 + 1) {
            if ((uint)pSVar5->max_length <= uVar13) goto label_181e818a5;
            pSVar11 = pSVar5->m_Items[(int)uVar13];
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
            bVar4 = System_Linq_Enumerable__Contains_object__6ba340
                              ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                               (Il2CppObject *)pSVar11,
                               (System_Collections_Generic_IEqualityComparer_TSource__o *)
                               TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                               (MethodInfo_6BA340 *)MethodInfo_System_Linq_Enumerable_Contains_string_4070458)
            ;
            if (!bVar4) {
              if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e81893;
              il2cpp_runtime_helper_180012890(__this_00,pSVar11,MethodInfo_System_Collections_Generic_List_string_Add);
            }
          }
          if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
            pUVar12 = System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_T__o *)__this_00,
                                 (MethodInfo_929FE0 *)
                                 MethodInfo_System_Collections_Generic_List_string_ToArray);
            return (System_String_array *)pUVar12;
          }
        }
      }
    }
  }
label_181e81893:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$LoadSandboxMiscSettings
// il2cpp: void Map_BuiltinLevels__LoadSandboxMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, Settings_InGameMiscSettings_o* settings, const MethodInfo* method);
// 0x181e82ef0
// eh: try 0x181e83071..0x181e833ee -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8336f: mov rdx, qword ptr [rip + 0x2238faa]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_Dispose
// asm:   0x181e83376: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e8337b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e83380: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e83385: test rcx, rcx
// asm:   0x181e83388: jne 0x181e833ee
// asm:   0x181e833ee: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Map_BuiltinLevels__LoadSandboxMiscSettings
               (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,
               Settings_InGameMiscSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Settings_TypedSetting_T__c *pSVar3;
  Il2CppObject *key;
  bool bVar4;
  int32_t value;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  Settings_TypedSetting_T__o *__this_01;
  System_String_o *value_00;
  float value_01;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184345025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184345025 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  __this = Map_BuiltinLevels__GetSandboxMiscSettings(category,mapName,gameMode,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Keys);
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_00,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONNode_GetEnumerator)
      ;
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentKey = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        while( true ) {
          do {
            do {
              bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                (&local_48,
                                 (MethodInfo_156BDD0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_MoveNext
                                );
              key = local_48.fields._currentKey;
              if (!bVar4) {
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_Dispose
                          );
                return;
              }
              pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                                  local_48.fields._currentKey,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
              if (settings == (Settings_InGameMiscSettings_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar2 = (settings->fields).Settings;
              if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar4 = System_Collections_Specialized_OrderedDictionary__Contains(pSVar2,key,(MethodInfo *)0x0)
              ;
            } while (!bVar4);
            pSVar2 = (settings->fields).Settings;
            if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_01 = (Settings_TypedSetting_T__o *)
                        System_Collections_Specialized_OrderedDictionary__get_Item
                                  (pSVar2,key,(MethodInfo *)0x0);
          } while (__this_01 == (Settings_TypedSetting_T__o *)0x0);
          pSVar3 = __this_01->klass;
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_BaseSetting);
          }
          bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
          if ((bVar1 <= (pSVar3->_2).typeHierarchyDepth) &&
             ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting
             )) break;
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
             ) {
            bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
            if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
               ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
              bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
              if ((bVar1 <= (pSVar3->_2).typeHierarchyDepth) &&
                 ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                  ThrowNullReferenceException();
                }
                value_00 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                                     (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
                bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_StringSetting);
                }
                Settings_TypedSetting_object___set_Value
                          (__this_01,(Il2CppObject *)value_00,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
            }
            else {
              if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                ThrowNullReferenceException();
              }
              value_01 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
              bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
              if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_01);
              }
              Settings_TypedSetting_float___set_Value
                        ((Settings_TypedSetting_float__o *)__this_01,value_01,
                         (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
            }
          }
          else {
            if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            value = (*(pSVar5->klass->vtable)._35_get_AsInt.methodPtr)
                              (pSVar5,(pSVar5->klass->vtable)._35_get_AsInt.method);
            bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_IntSetting);
            }
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)__this_01,value,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          }
        }
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = (*(pSVar5->klass->vtable)._39_get_AsBool.methodPtr)
                          (pSVar5,(pSVar5->klass->vtable)._39_get_AsBool.method);
        bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BoolSetting)) break;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_01,bVar4,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_BoolSetting);
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetTxtFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetTxtFiles (System_String_o* path, const MethodInfo* method);
// 0x181e81c30

System_String_array * Map_BuiltinLevels__GetTxtFiles(System_String_o *path,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_String_array *pSVar2;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (Il2CppMethodInitialized_184345026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_c_GetTxtFiles_b__47_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"*.txt");
    Il2CppMethodInitialized_184345026 = '\x01';
  }
  bVar1 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar2;
  }
  pSVar2 = System_IO_Directory__GetFiles_1ae76c0(path,"*.txt",0,(MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
  }
  __this = TypeInfo_Map_BuiltinLevels_c->static_fields->__9__47_0;
  if (__this == (System_Func_string__string__o *)0x0) {
    if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
    }
    object = (Il2CppObject *)TypeInfo_Map_BuiltinLevels_c->static_fields->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,object,
               (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetTxtFiles_b__47_0,(MethodInfo_16E67D0 *)0x0);
    TypeInfo_Map_BuiltinLevels_c->static_fields->__9__47_0 = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9__47_0,__this);
  }
  source = System_Linq_Enumerable__Select_Vector3__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                      (System_Func_TSource__TResult__o *)__this,
                      (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  pSVar2 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar2;
}


// Map.BuiltinLevels$$GetClFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetClFiles (System_String_o* path, const MethodInfo* method);
// 0x181e7eef0

System_String_array * Map_BuiltinLevels__GetClFiles(System_String_o *path,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_String_array *pSVar2;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (Il2CppMethodInitialized_184345027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_c_GetClFiles_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"*.cl");
    Il2CppMethodInitialized_184345027 = '\x01';
  }
  bVar1 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar2;
  }
  pSVar2 = System_IO_Directory__GetFiles_1ae76c0(path,"*.cl",0,(MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
  }
  __this = TypeInfo_Map_BuiltinLevels_c->static_fields->__9__48_0;
  if (__this == (System_Func_string__string__o *)0x0) {
    if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
    }
    object = (Il2CppObject *)TypeInfo_Map_BuiltinLevels_c->static_fields->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,object,
               (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetClFiles_b__48_0,(MethodInfo_16E67D0 *)0x0);
    TypeInfo_Map_BuiltinLevels_c->static_fields->__9__48_0 = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9__48_0,__this);
  }
  source = System_Linq_Enumerable__Select_Vector3__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                      (System_Func_TSource__TResult__o *)__this,
                      (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  pSVar2 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar2;
}


// Map.BuiltinLevels$$GetCustomModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomModes (const MethodInfo* method);
// 0x181e7f160

System_String_array * Map_BuiltinLevels__GetCustomModes(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_String_array *pSVar6;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184345028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184345028 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = Map_BuiltinLevels__GetClFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,(MethodInfo *)0x0);
  pSVar7 = Map_BuiltinLevels__GetTxtFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,(MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    for (uVar10 = 0; (int)uVar10 < (int)pSVar6->max_length; uVar10 = uVar10 + 1) {
      if ((uint)pSVar6->max_length <= uVar10) goto label_181e7f44c;
      if (pSVar6->m_Items[(int)uVar10] == (System_String_o *)0x0) goto label_181e7f446;
      pSVar8 = System_String__Replace_1970e80
                         (pSVar6->m_Items[(int)uVar10],".cl","",
                          (MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e7f446;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_181e7f446;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_181e7f44c;
        pSVar3->m_Items[(int)uVar2] = pSVar8;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_181e7f446;
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar8,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
    if (pSVar7 != (System_String_array *)0x0) {
      for (uVar10 = 0; (int)uVar10 < (int)pSVar7->max_length; uVar10 = uVar10 + 1) {
        if ((uint)pSVar7->max_length <= uVar10) {
label_181e7f44c:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar7->m_Items[(int)uVar10] == (System_String_o *)0x0) goto label_181e7f446;
        pSVar8 = System_String__Replace_1970e80
                           (pSVar7->m_Items[(int)uVar10],".txt","",
                            (MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_181e7f446;
        bVar5 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar8,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar5) {
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e7f446;
          il2cpp_runtime_helper_180012890(__this,pSVar8,MethodInfo_System_Collections_Generic_List_string_Add);
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar8,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        }
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar9 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar9;
      }
    }
  }
label_181e7f446:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetSandboxMiscSettings
// il2cpp: System_Collections_Generic_Dictionary_string__JSONNode__o* Map_BuiltinLevels__GetSandboxMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, const MethodInfo* method);
// 0x181e818b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e81a39: nop dword ptr [rax]
// asm:   0x181e81acb: jmp 0x181e81acf

System_Collections_Generic_Dictionary_string__JSONNode__o *
Map_BuiltinLevels__GetSandboxMiscSettings
          (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Collections_Generic_Dictionary_string__JSONNode__o *current;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  undefined1 local_88 [104];
  
  if (Il2CppMethodInitialized_184345029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MiscSettings");
    Il2CppMethodInitialized_184345029 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  a = Map_BuiltinLevels__GetMap(category,mapName,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434502c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_18434502c = '\x01';
  }
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"GameModes"),
     pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0)) {
label_181e81c1a:
    ThrowNullReferenceException();
  }
  puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_88);
  local_f8._0_8_ = *puVar4;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
  local_f8.m_Object.fields._8_8_ = puVar4[2];
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
  local_f8.m_Object.fields._32_8_ = puVar4[5];
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
  local_f8.m_Array.fields._8_8_ = puVar4[7];
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
  do {
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
      break;
    }
    pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                       (&local_98,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0);
    pSVar1 = (pSVar5->fields).key;
    pSVar6 = (pSVar5->fields).value;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    local_a8.fields.key = pSVar1;
    local_a8.fields.value = pSVar6;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_a8,(MethodInfo *)0x0);
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e81c1a;
    pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Name");
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)gameMode,(MethodInfo *)0x0);
  } while (!bVar2);
  current = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)current,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e81c20;
    bVar2 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)(pSVar6,(MethodInfo *)"MiscSettings");
    if (bVar2) {
      pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"MiscSettings");
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__MergeSandboxMiscSettings
                (current,(SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181e81c20:
      ThrowNullReferenceException();
    }
    bVar2 = (*(a->klass->vtable)._28_HasKey.methodPtr)(a,(MethodInfo *)"MiscSettings");
    if (bVar2) {
      pSVar3 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"MiscSettings");
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__MergeSandboxMiscSettings
                (current,(SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
    }
  }
  return current;
}


// Map.BuiltinLevels$$GetMap
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetMap (System_String_o* category, System_String_o* mapName, const MethodInfo* method);
// 0x181e80e30
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e80f84: nop dword ptr [rax]
// asm:   0x181e80f88: nop dword ptr [rax + rax]
// asm:   0x181e81139: mov rax, rbx
// asm:   0x181e8113c: jmp 0x181e81114

SimpleJSONFixed_JSONNode_o *
Map_BuiltinLevels__GetMap(System_String_o *category,System_String_o *mapName,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_138;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_128;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_18434502a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_18434502a = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  local_128.type = 0;
  local_128._4_4_ = 0;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Object.fields._version = 0;
  local_128.m_Object.fields._index = 0;
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.m_Object.fields._getEnumeratorRetType = 0;
  local_128.m_Object.fields._36_4_ = 0;
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.m_Array.fields._index = 0;
  local_128.m_Array.fields._version = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"MapCategories"),
     pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar4;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
    local_d8.m_Object.fields._8_8_ = puVar4[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
    local_d8.m_Object.fields._32_8_ = puVar4[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
    local_d8.m_Array.fields._8_8_ = puVar4[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar2) {
      do {
        pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar1 = (pSVar5->fields).key;
        pSVar6 = (pSVar5->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_138.fields.key = pSVar1;
        local_138.fields.value = pSVar6;
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_138,(MethodInfo *)0x0);
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e8113e;
        pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Name");
        bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)category,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar6,(MethodInfo *)"Maps");
          if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e8113e;
          puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_68);
          local_128._0_8_ = *puVar4;
          local_128.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
          local_128.m_Object.fields._8_8_ = puVar4[2];
          local_128.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
          local_128.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
          local_128.m_Object.fields._32_8_ = puVar4[5];
          local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
          local_128.m_Array.fields._8_8_ = puVar4[7];
          local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
          if (bVar2) {
            do {
              pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_128,
                                  (MethodInfo *)0x0);
              pSVar1 = (pSVar5->fields).key;
              pSVar6 = (pSVar5->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_138.fields.key = pSVar1;
              local_138.fields.value = pSVar6;
              pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_138,(MethodInfo *)0x0);
              if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e8113e;
              pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar6,(MethodInfo *)"Name");
              bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                                ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)mapName,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                return pSVar6;
              }
              bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
            } while (bVar2);
          }
        }
        bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar2);
    }
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
label_181e8113e:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetCategory
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetCategory (System_String_o* category, const MethodInfo* method);
// 0x181e7ed10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7eebc: mov rax, rbx

SimpleJSONFixed_JSONNode_o * Map_BuiltinLevels__GetCategory(System_String_o *category,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_18434502b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_18434502b = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"MapCategories"),
     pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar4;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
    local_d8.m_Object.fields._8_8_ = puVar4[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
    local_d8.m_Object.fields._32_8_ = puVar4[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
    local_d8.m_Array.fields._8_8_ = puVar4[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
    while( true ) {
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (!bVar2) {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
      pSVar1 = (pSVar5->fields).key;
      pSVar6 = (pSVar5->fields).value;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_88.fields.key = pSVar1;
      local_88.fields.value = pSVar6;
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
      if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Name");
      bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)category,(MethodInfo *)0x0);
      if (bVar2) {
        return pSVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetGameMode
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetGameMode (System_String_o* gameMode, const MethodInfo* method);
// 0x181e7f930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7fadc: mov rax, rbx

SimpleJSONFixed_JSONNode_o * Map_BuiltinLevels__GetGameMode(System_String_o *gameMode,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_18434502c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_18434502c = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"GameModes"),
     pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar3->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar4;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
    local_d8.m_Object.fields._8_8_ = puVar4[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
    local_d8.m_Object.fields._32_8_ = puVar4[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
    local_d8.m_Array.fields._8_8_ = puVar4[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
    while( true ) {
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (!bVar2) {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
      pSVar1 = (pSVar5->fields).key;
      pSVar6 = (pSVar5->fields).value;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_88.fields.key = pSVar1;
      local_88.fields.value = pSVar6;
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
      if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      pSVar3 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Name");
      bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)gameMode,(MethodInfo *)0x0);
      if (bVar2) {
        return pSVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$MergeSandboxMiscSettings
// il2cpp: void Map_BuiltinLevels__MergeSandboxMiscSettings (System_Collections_Generic_Dictionary_string__JSONNode__o* current, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x181e83400

void Map_BuiltinLevels__MergeSandboxMiscSettings
               (System_Collections_Generic_Dictionary_string__JSONNode__o *current,
               SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  _func_24 *p_Var1;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar4;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar5;
  MethodInfo *key;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_a8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_58;
  
  if (Il2CppMethodInitialized_18434502d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    Il2CppMethodInitialized_18434502d = '\x01';
  }
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_a8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_a8.type = 0;
  local_a8._4_4_ = 0;
  local_a8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.m_Object.fields._version = 0;
  local_a8.m_Object.fields._index = 0;
  local_a8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a8.m_Object.fields._getEnumeratorRetType = 0;
  local_a8.m_Object.fields._36_4_ = 0;
  local_a8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.m_Array.fields._index = 0;
  local_a8.m_Array.fields._version = 0;
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = SimpleJSONFixed_JSONNode__get_Values(&local_58,node,(MethodInfo *)0x0);
    local_a8.type = (pSVar4->fields).m_Enumerator.fields.type;
    local_a8._4_4_ = *(undefined4 *)&(pSVar4->fields).m_Enumerator.fields.field_0x4;
    local_a8.m_Object.fields._dictionary = (pSVar4->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar2 = &(pSVar4->fields).m_Enumerator;
    local_a8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
    local_a8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
    local_a8.m_Object.fields._current.fields.key =
         (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_a8.m_Object.fields._current.fields.value =
         (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar2 = &(pSVar4->fields).m_Enumerator;
    local_a8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
    local_a8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
    local_a8.m_Array.fields._list = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar2 = &(pSVar4->fields).m_Enumerator;
    local_a8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
    local_a8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
    local_a8.m_Array.fields._current = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_58,
                        (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_a8,(MethodInfo *)0x0);
    local_f8.type = (pSVar5->fields).m_Enumerator.fields.type;
    local_f8._4_4_ = *(undefined4 *)&(pSVar5->fields).m_Enumerator.fields.field_0x4;
    local_f8.m_Object.fields._dictionary = (pSVar5->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar2 = &(pSVar5->fields).m_Enumerator;
    local_f8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
    local_f8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
    local_f8.m_Object.fields._current.fields.key =
         (pSVar5->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_f8.m_Object.fields._current.fields.value =
         (pSVar5->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar2 = &(pSVar5->fields).m_Enumerator;
    local_f8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
    local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
    local_f8.m_Array.fields._list = (pSVar5->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar2 = &(pSVar5->fields).m_Enumerator;
    local_f8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
    local_f8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
    local_f8.m_Array.fields._current = (pSVar5->fields).m_Enumerator.fields.m_Array.fields._current;
    bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
    if (bVar3) {
      do {
        key = (MethodInfo *)
              SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
        if (current == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) goto label_181e835cc;
        bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)current,
                           (Il2CppObject *)key,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
        p_Var1 = (node->klass->vtable)._7_get_Item.methodPtr;
        if (bVar3) {
          pSVar6 = (*p_Var1)(node,key);
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)current,(Il2CppObject *)key,
                     (Il2CppObject *)pSVar6,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
        }
        else {
          pSVar6 = (*p_Var1)(node,key);
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)current,(Il2CppObject *)key,
                     (Il2CppObject *)pSVar6,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
        }
        bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      } while (bVar3);
    }
    return;
  }
label_181e835cc:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$.ctor
// il2cpp: void Map_BuiltinLevels___ctor (Map_BuiltinLevels_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_BuiltinLevels___ctor(Map_BuiltinLevels_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$.cctor
// il2cpp: void Map_BuiltinLevels___cctor (const MethodInfo* method);
// 0x181e84870

void Map_BuiltinLevels___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434502e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Map Logic");
    Il2CppMethodInitialized_18434502e = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->CustomMap;
  TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,pSVar1);
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->CustomMapAutosave;
  TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,pSVar1);
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->CustomMapBackups;
  TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath,pSVar1);
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->CustomLogic;
  TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,pSVar1);
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->CustomAddon;
  TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,pSVar1);
  TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic = "Map Logic";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,"Map Logic");
  return;
}


