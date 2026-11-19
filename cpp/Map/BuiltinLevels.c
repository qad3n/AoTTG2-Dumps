// Type: Map.BuiltinLevels
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/BuiltinLevels.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinLevels.cs
// --------------------------------

// Map.BuiltinLevels.BuiltinExperienceDefinition$$.ctor
// il2cpp: void Map_BuiltinLevels_BuiltinExperienceDefinition___ctor (Map_BuiltinLevels_BuiltinExperienceDefinition_o* __this, const MethodInfo* method);
// 0x596e0b0

void Map_BuiltinLevels_BuiltinExperienceDefinition___ctor
               (Map_BuiltinLevels_BuiltinExperienceDefinition_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c$$.cctor
// il2cpp: void Map_BuiltinLevels___c___cctor (const MethodInfo* method);
// 0x59748c0

void Map_BuiltinLevels___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075459c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    Il2CppMethodInitialized_075459c3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Map_BuiltinLevels_c->static_fields->__9 = (Map_BuiltinLevels___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels_c->static_fields->__9);
  return;
}


// Map.BuiltinLevels.<>c$$.ctor
// il2cpp: void Map_BuiltinLevels___c___ctor (Map_BuiltinLevels___c_o* __this, const MethodInfo* method);
// 0x5974930

void Map_BuiltinLevels___c___ctor(Map_BuiltinLevels___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c$$<ResolveExperiencePreview>b__14_0
// il2cpp: bool Map_BuiltinLevels___c___ResolveExperiencePreview_b__14_0 (Map_BuiltinLevels___c_o* __this, System_String_o* path, const MethodInfo* method);
// 0x5974940

bool Map_BuiltinLevels___c___ResolveExperiencePreview_b__14_0
               (Map_BuiltinLevels___c_o *__this,System_String_o *path,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  return !bVar1;
}


// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__17_0
// il2cpp: bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__17_0 (Map_BuiltinLevels___c_o* __this, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x5974950

bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__17_0
               (Map_BuiltinLevels___c_o *__this,Settings_UIRule_o *rule,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075459c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    Il2CppMethodInitialized_075459c4 = '\x01';
  }
  if (rule == (Settings_UIRule_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((rule->fields).SettingId,"general.MapName",(MethodInfo *)0x0);
  return bVar1;
}


// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__17_1
// il2cpp: bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__17_1 (Map_BuiltinLevels___c_o* __this, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x5974990

bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__17_1
               (Map_BuiltinLevels___c_o *__this,Settings_UIRule_o *rule,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075459c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    Il2CppMethodInitialized_075459c5 = '\x01';
  }
  if (rule == (Settings_UIRule_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((rule->fields).SettingId,"general.MapCategory",(MethodInfo *)0x0);
  return bVar1;
}


// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__17_2
// il2cpp: bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__17_2 (Map_BuiltinLevels___c_o* __this, System_String_o* rule, const MethodInfo* method);
// 0x59749d0

bool Map_BuiltinLevels___c___GetExperienceDefinitions_b__17_2
               (Map_BuiltinLevels___c_o *__this,System_String_o *rule,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *rawRules;
  System_Collections_Generic_List_UIRule__o *__this_00;
  Settings_UIRule_o *pSVar2;
  
  if (Il2CppMethodInitialized_075459c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    Il2CppMethodInitialized_075459c6 = '\x01';
  }
  rawRules = SZArrayNew(TypeInfo_string_array,1);
  if (rawRules != (Il2CppObject *)0x0) {
    if (*(int *)&rawRules[1].monitor == 0) {
      ThrowIndexOutOfRangeException();
    }
    rawRules[2].klass = (Il2CppClass *)rule;
    Il2CppCodeGenWriteBarrier(&rawRules[2].klass);
    __this_00 = Settings_RuleParser__Parse
                          ((System_Collections_Generic_IEnumerable_string__o *)rawRules,
                           (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_UIRule__o *)0x0) {
      pSVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_UIRule_get_Item);
      if (pSVar2 != (Settings_UIRule_o *)0x0) {
        bVar1 = System_String__Equals_52ffe30
                          ((pSVar2->fields).SettingId,"general.MapName",5,(MethodInfo *)0x0);
        return !bVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels.<>c$$<ComposeUIRules>b__19_0
// il2cpp: bool Map_BuiltinLevels___c___ComposeUIRules_b__19_0 (Map_BuiltinLevels___c_o* __this, System_String_o* rule, const MethodInfo* method);
// 0x5974aa0

bool Map_BuiltinLevels___c___ComposeUIRules_b__19_0
               (Map_BuiltinLevels___c_o *__this,System_String_o *rule,MethodInfo *method)

{
  return rule != (System_String_o *)0x0;
}


// Map.BuiltinLevels.<>c$$<GetTxtFiles>b__52_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetTxtFiles_b__52_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x5974ab0

System_String_o *
Map_BuiltinLevels___c___GetTxtFiles_b__52_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075459c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_075459c7 = '\x01';
    uVar1 = (TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels.<>c$$<GetClFiles>b__53_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetClFiles_b__53_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x5974b20

System_String_o *
Map_BuiltinLevels___c___GetClFiles_b__53_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075459c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_075459c8 = '\x01';
    uVar1 = (TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels.<>c__DisplayClass12_0$$.ctor
// il2cpp: void Map_BuiltinLevels___c__DisplayClass12_0___ctor (Map_BuiltinLevels___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x596d610

void Map_BuiltinLevels___c__DisplayClass12_0___ctor
               (Map_BuiltinLevels___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c__DisplayClass12_0$$<HasExperienceScoring>b__0
// il2cpp: bool Map_BuiltinLevels___c__DisplayClass12_0___HasExperienceScoring_b__0 (Map_BuiltinLevels___c__DisplayClass12_0_o* __this, Map_Experience_o* experience, const MethodInfo* method);
// 0x5974b90

bool Map_BuiltinLevels___c__DisplayClass12_0___HasExperienceScoring_b__0
               (Map_BuiltinLevels___c__DisplayClass12_0_o *__this,Map_Experience_o *experience,
               MethodInfo *method)

{
  bool bVar1;
  
  if (experience == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((experience->fields).HasScoring != false) {
    bVar1 = System_String__Equals_52ffe30
                      ((experience->fields).Category,(__this->fields).category,5,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__Equals_52ffe30
                        ((experience->fields).SubCategory,(__this->fields).subCategory,5,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__Equals_52ffe30
                          ((experience->fields).Name,(__this->fields).name,5,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// Map.BuiltinLevels.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Map_BuiltinLevels___c__DisplayClass16_0___ctor (Map_BuiltinLevels___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5974c00

void Map_BuiltinLevels___c__DisplayClass16_0___ctor
               (Map_BuiltinLevels___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c__DisplayClass16_0$$<FindExperience>b__0
// il2cpp: bool Map_BuiltinLevels___c__DisplayClass16_0___FindExperience_b__0 (Map_BuiltinLevels___c__DisplayClass16_0_o* __this, Map_BuiltinLevels_BuiltinExperienceDefinition_o* definition, const MethodInfo* method);
// 0x5974c10

bool Map_BuiltinLevels___c__DisplayClass16_0___FindExperience_b__0
               (Map_BuiltinLevels___c__DisplayClass16_0_o *__this,
               Map_BuiltinLevels_BuiltinExperienceDefinition_o *definition,MethodInfo *method)

{
  bool bVar1;
  
  if (definition == (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_52ffe30((definition->fields).Name,(__this->fields).name,5,(MethodInfo *)0x0);
  return bVar1;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$.ctor
// il2cpp: void Map_BuiltinLevels__GetExperienceDefinitions_d__17___ctor (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5974c40

void Map_BuiltinLevels__GetExperienceDefinitions_d__17___ctor
               (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.IDisposable.Dispose
// il2cpp: void Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_IDisposable_Dispose (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, const MethodInfo* method);
// 0x5974c70

void Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_IDisposable_Dispose
               (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$MoveNext
// il2cpp: bool Map_BuiltinLevels__GetExperienceDefinitions_d__17__MoveNext (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, const MethodInfo* method);
// 0x5974c80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5974f10: jmp 0x5975a96
// asm:   0x59755ec: jmp 0x5975606
// asm:   0x5975858: jmp 0x59758ff

bool Map_BuiltinLevels__GetExperienceDefinitions_d__17__MoveNext
               (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_string__o **targetAddress;
  SimpleJSONFixed_JSONNode_o **targetAddress_00;
  uint uVar2;
  int iVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar6;
  bool bVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_array *ruleSets;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_List_string__o *pSVar12;
  System_Collections_Generic_Dictionary_string__List_string___o *pSVar13;
  System_Collections_Generic_List_UIRule__o *pSVar14;
  System_Func_UIRule__bool__o *pSVar15;
  Settings_UIRule_o *query;
  Map_BuiltinLevels___c_StaticFields *pMVar16;
  Settings_UIRule_o *categoryQuery;
  System_String_array *pSVar17;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_o *pSVar18;
  Map_BuiltinLevels_BuiltinExperienceDefinition_o *pMVar19;
  Il2CppClass *klass;
  System_IO_InvalidDataException_o *__this_01;
  MethodInfo *pMVar20;
  uint uVar21;
  System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *pSVar22;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar23;
  undefined8 uStack_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  undefined8 uStack_68;
  Il2CppObject *pIStack_60;
  Il2CppObject *pIStack_58;
  undefined8 uStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  undefined8 uStack_40;
  SimpleJSONFixed_JSONNode_o *pSStack_38;
  
  if (Il2CppMethodInitialized_075459c9 == '\0') {
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
              (&MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"!general.MapName=");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperiencePerMap");
    il2cpp_codegen_initialize_runtime_metadata(&"HasScoring");
    il2cpp_codegen_initialize_runtime_metadata(&"UIRules");
    il2cpp_codegen_initialize_runtime_metadata(&"SubCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Experiences");
    Il2CppMethodInitialized_075459c9 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 2) {
    (__this->fields).__1__state = -1;
    uVar21 = (__this->fields).__7__wrap14 + 1;
    (__this->fields).__7__wrap14 = uVar21;
    pSVar17 = (__this->fields).__7__wrap13;
    if (pSVar17 != (System_String_array *)0x0) {
label_05975795:
      uVar2 = (uint)pSVar17->max_length;
      if ((int)uVar21 < (int)uVar2) {
        if (uVar2 <= uVar21) {
label_05975a9b:
          ThrowIndexOutOfRangeException();
        }
        pSVar9 = pSVar17->m_Items[(int)uVar21];
        pSVar12 = (__this->fields)._rules_5__11;
        if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
          pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
          __this_00 = pMVar16->__9__17_2;
        }
        else {
          pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
          __this_00 = pMVar16->__9__17_2;
        }
        if (__this_00 == (System_Func_string__bool__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c)->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
            pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
          }
          pIVar10 = (Il2CppObject *)pMVar16->__9;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)__this_00,pIVar10,
                     (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_2,
                     (MethodInfo_4F19300 *)0x0);
          pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
          pMVar16->__9__17_2 = __this_00;
          Il2CppCodeGenWriteBarrier(&pMVar16->__9__17_2);
        }
        source = System_Linq_Enumerable__Where_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,
                            (System_Func_TSource__bool__o *)__this_00,
                            (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
        pSVar12 = (System_Collections_Generic_List_string__o *)
                  System_Linq_Enumerable__ToList_object_
                            (source,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        pSVar18 = System_String__Concat_52f0320("!general.MapName=",pSVar9,(MethodInfo *)0x0);
        pMVar20 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pSVar12 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar12->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar17 = (pSVar12->fields)._items;
          if (pSVar17 != (System_String_array *)0x0) {
            uVar21 = (pSVar12->fields)._size;
            if (uVar21 < (uint)pSVar17->max_length) {
              (pSVar12->fields)._size = uVar21 + 1;
              pSVar17->m_Items[(int)uVar21] = pSVar18;
              Il2CppCodeGenWriteBarrier(pSVar17->m_Items + (int)uVar21);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)pSVar18,
                         (MethodInfo_395D230 *)pMVar20->klass->rgctx_data[0xe].method);
            }
            pSVar18 = (__this->fields)._categoryName_5__4;
            pSVar4 = (__this->fields)._subCategoryName_5__7;
            pSVar8 = (__this->fields)._experience_5__10;
            pSVar13 = (__this->fields)._variants_5__12;
            bVar7 = (__this->fields)._hasScoring_5__13;
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            pMVar19 = Map_BuiltinLevels__CreateExperienceDefinition
                                (pSVar18,pSVar4,pSVar9,pSVar8,pSVar12,pSVar13,bVar7,(MethodInfo *)0x0);
            (__this->fields).__2__current = pMVar19;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 2;
            return true;
          }
        }
      }
      else {
        (__this->fields).__7__wrap13 = (System_String_array *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap13);
        (__this->fields)._rules_5__11 = (System_Collections_Generic_List_string__o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._rules_5__11);
        (__this->fields)._variants_5__12 =
             (System_Collections_Generic_Dictionary_string__List_string___o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._variants_5__12);
        pSVar22 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
                  &(__this->fields)._experience_5__10;
        (__this->fields)._experience_5__10 = (SimpleJSONFixed_JSONNode_o *)0x0;
        while( true ) {
          Il2CppCodeGenWriteBarrier((void **)pSVar22);
label_059757fe:
          pSVar5 = &(__this->fields).__7__wrap8;
          targetAddress_00 = &(__this->fields)._experience_5__10;
          while (bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(pSVar5,(MethodInfo *)0x0), bVar7) {
            SVar23 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(pSVar5,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar23,(MethodInfo *)0x0);
            *targetAddress_00 = pSVar8;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            pSVar8 = *targetAddress_00;
            if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05975a96;
            pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
            pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar8,(MethodInfo *)0x0);
            bVar7 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
            if (!bVar7) {
              ruleSets = (SimpleJSONFixed_JSONNode_array *)
                         SZArrayNew(TypeInfo_SimpleJSONFixed_JSONNode_array,3);
              pSVar8 = (__this->fields)._category_5__3;
              if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (pIVar10 = (Il2CppObject *)
                            (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar8,"UIRules",(pSVar8->klass->vtable)._7_get_Item.method
                                      ), ruleSets == (SimpleJSONFixed_JSONNode_array *)0x0))
              goto label_05975a96;
              if ((pIVar10 == (Il2CppObject *)0x0) ||
                 (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((ruleSets->obj).klass)->_1).element_class),
                 pIVar11 != (Il2CppObject *)0x0)) {
                if ((int)ruleSets->max_length == 0) goto label_05975a9b;
                ruleSets->m_Items[0] = (SimpleJSONFixed_JSONNode_o *)pIVar10;
                Il2CppCodeGenWriteBarrier(ruleSets->m_Items);
                pSVar8 = (__this->fields)._subCategory_5__6;
                if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05975a96;
                pIVar10 = (Il2CppObject *)
                          (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar8,"UIRules",(pSVar8->klass->vtable)._7_get_Item.method);
                if ((pIVar10 == (Il2CppObject *)0x0) ||
                   (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((ruleSets->obj).klass)->_1).element_class),
                   pIVar11 != (Il2CppObject *)0x0)) {
                  if ((ruleSets->max_length & 0xfffffffe) == 0) goto label_05975a9b;
                  ruleSets->m_Items[1] = (SimpleJSONFixed_JSONNode_o *)pIVar10;
                  Il2CppCodeGenWriteBarrier(ruleSets->m_Items + 1);
                  pSVar8 = *targetAddress_00;
                  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05975a96;
                  pIVar10 = (Il2CppObject *)
                            (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar8,"UIRules",(pSVar8->klass->vtable)._7_get_Item.method
                                      );
                  if ((pIVar10 == (Il2CppObject *)0x0) ||
                     (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((ruleSets->obj).klass)->_1).element_class),
                     pIVar11 != (Il2CppObject *)0x0)) {
                    if ((uint)ruleSets->max_length < 3) goto label_05975a9b;
                    ruleSets->m_Items[2] = (SimpleJSONFixed_JSONNode_o *)pIVar10;
                    Il2CppCodeGenWriteBarrier(ruleSets->m_Items + 2);
                    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                    }
                    pSVar12 = Map_BuiltinLevels__ComposeUIRules(ruleSets,(MethodInfo *)0x0);
                    targetAddress = &(__this->fields)._rules_5__11;
                    (__this->fields)._rules_5__11 = pSVar12;
                    Il2CppCodeGenWriteBarrier(targetAddress);
                    pSVar13 = Settings_PresetDefinition__ReadVariants
                                        ((__this->fields)._experience_5__10,(MethodInfo *)0x0);
                    if ((pSVar13 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) &&
                       (pSVar13 = Settings_PresetDefinition__ReadVariants
                                            ((__this->fields)._subCategory_5__6,(MethodInfo *)0x0),
                       pSVar13 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) {
                      pSVar13 = Settings_PresetDefinition__ReadVariants
                                          ((__this->fields)._category_5__3,(MethodInfo *)0x0);
                    }
                    (__this->fields)._variants_5__12 = pSVar13;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._variants_5__12);
                    pSVar8 = (__this->fields)._experience_5__10;
                    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05975a96;
                    bVar7 = (*(pSVar8->klass->vtable)._28_HasKey.methodPtr)
                                      (pSVar8,"HasScoring",(pSVar8->klass->vtable)._28_HasKey.method)
                    ;
                    if (bVar7) {
                      pSVar8 = *targetAddress_00;
                    }
                    else {
                      pSVar8 = (__this->fields)._subCategory_5__6;
                      if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05975a96;
                      bVar7 = (*(pSVar8->klass->vtable)._28_HasKey.methodPtr)
                                        (pSVar8,"HasScoring",
                                         (pSVar8->klass->vtable)._28_HasKey.method);
                      if (bVar7) {
                        pSVar8 = (__this->fields)._subCategory_5__6;
                      }
                      else {
                        pSVar8 = (__this->fields)._category_5__3;
                      }
                    }
                    if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                       (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar8,"HasScoring",
                                            (pSVar8->klass->vtable)._7_get_Item.method),
                       pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05975a96;
                    bVar7 = (*(pSVar8->klass->vtable)._39_get_AsBool.methodPtr)
                                      (pSVar8,(pSVar8->klass->vtable)._39_get_AsBool.method);
                    (__this->fields)._hasScoring_5__13 = bVar7;
                    if ((__this->fields)._experiencePerMap_5__8 == false) {
                      pSVar18 = (__this->fields)._categoryName_5__4;
                      pSVar4 = (__this->fields)._subCategoryName_5__7;
                      pSVar8 = (__this->fields)._experience_5__10;
                      pSVar12 = (__this->fields)._rules_5__11;
                      pSVar13 = (__this->fields)._variants_5__12;
                      bVar7 = (__this->fields)._hasScoring_5__13;
                      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                      }
                      pMVar19 = Map_BuiltinLevels__CreateExperienceDefinition
                                          (pSVar18,pSVar4,pSVar9,pSVar8,pSVar12,pSVar13,bVar7,
                                           (MethodInfo *)0x0);
                      (__this->fields).__2__current = pMVar19;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                      (__this->fields).__1__state = 1;
                      return true;
                    }
                    pSVar14 = Settings_RuleParser__Parse
                                        ((System_Collections_Generic_IEnumerable_string__o *)*targetAddress,
                                         (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
                    if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                      pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
                      pSVar15 = pMVar16->__9__17_0;
                    }
                    else {
                      pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
                      pSVar15 = pMVar16->__9__17_0;
                    }
                    if (pSVar15 == (System_Func_UIRule__bool__o *)0x0) {
                      if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c)->_2).cctor_finished_or_no_cctor == 0)
                      {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                        pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
                      }
                      pIVar10 = (Il2CppObject *)pMVar16->__9;
                      pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_bool);
                      System_Func_object__bool____ctor
                                ((System_Func_object__bool__o *)pSVar15,pIVar10,
                                 (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_0,
                                 (MethodInfo_4F19300 *)0x0);
                      pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
                      pMVar16->__9__17_0 = pSVar15;
                      Il2CppCodeGenWriteBarrier(&pMVar16->__9__17_0);
                    }
                    query = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,
                                       (System_Func_TSource__bool__o *)pSVar15,
                                       (MethodInfo_34ED9E0 *)
                                       MethodInfo_System_Linq_Enumerable_FirstOrDefault_UIRule);
                    if (query == (Settings_UIRule_o *)0x0) {
                      pSVar9 = (__this->fields)._subCategoryName_5__7;
                      pSVar18 = il2cpp_codegen_get_runtime_metadata(&"Experience-per-map subcategory requires a general.MapName rule: ");
                      pSVar9 = System_String__Concat_52f0320(pSVar18,pSVar9,(MethodInfo *)0x0);
                      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
                      __this_01 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(klass);
                      System_IO_InvalidDataException___ctor_628b0d0(__this_01,pSVar9,(MethodInfo *)0x0);
                      pMVar20 = il2cpp_codegen_get_runtime_metadata
                                          (&
                                           MethodInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17_MoveNext
                                          );
                      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar20);
                    }
                    pSVar14 = Settings_RuleParser__Parse
                                        ((System_Collections_Generic_IEnumerable_string__o *)*targetAddress,
                                         (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
                    if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                    }
                    pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
                    pSVar15 = pMVar16->__9__17_1;
                    if (pSVar15 == (System_Func_UIRule__bool__o *)0x0) {
                      if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
                        pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
                      }
                      pIVar10 = (Il2CppObject *)pMVar16->__9;
                      pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_UIRule_bool);
                      System_Func_object__bool____ctor
                                ((System_Func_object__bool__o *)pSVar15,pIVar10,
                                 (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_1,
                                 (MethodInfo_4F19300 *)0x0);
                      pMVar16 = TypeInfo_Map_BuiltinLevels_c->static_fields;
                      pMVar16->__9__17_1 = pSVar15;
                      Il2CppCodeGenWriteBarrier(&pMVar16->__9__17_1);
                    }
                    categoryQuery =
                         System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                                   ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,
                                    (System_Func_TSource__bool__o *)pSVar15,
                                    (MethodInfo_34ED9E0 *)
                                    MethodInfo_System_Linq_Enumerable_FirstOrDefault_UIRule);
                    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                    }
                    uVar21 = 0;
                    pSVar17 = Map_BuiltinLevels__QueryMapsNames_586e900(query,categoryQuery,(MethodInfo *)0x0)
                    ;
                    (__this->fields).__7__wrap13 = pSVar17;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap13);
                    (__this->fields).__7__wrap14 = 0;
                    pSVar17 = (__this->fields).__7__wrap13;
                    if (pSVar17 == (System_String_array *)0x0) goto label_05975a96;
                    goto label_05975795;
                  }
                }
              }
              pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
            }
          }
          (__this->fields).__7__wrap8.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)0x0;
          pSVar6 = &(__this->fields).__7__wrap8;
          (pSVar6->fields).m_Array.fields._index = 0;
          (pSVar6->fields).m_Array.fields._version = 0;
          (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
          *(undefined8 *)&(__this->fields).__7__wrap8.fields.m_Object.fields._getEnumeratorRetType = 0;
          pSVar6 = &(__this->fields).__7__wrap8;
          (pSVar6->fields).m_Object.fields._version = 0;
          (pSVar6->fields).m_Object.fields._index = 0;
          (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
          *(undefined8 *)&pSVar5->fields = 0;
          (__this->fields).__7__wrap8.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          (__this->fields).__7__wrap8.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
          (__this->fields)._subCategoryName_5__7 = (System_String_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._subCategoryName_5__7);
          pSVar22 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
                    &(__this->fields)._subCategory_5__6;
          (__this->fields)._subCategory_5__6 = (SimpleJSONFixed_JSONNode_o *)0x0;
          while( true ) {
            Il2CppCodeGenWriteBarrier((void **)pSVar22);
            pSVar5 = &(__this->fields).__7__wrap4;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(pSVar5,(MethodInfo *)0x0);
            if (bVar7) break;
            pSVar5 = &(__this->fields).__7__wrap4;
            (pSVar5->fields).m_Array.fields._index = 0;
            (pSVar5->fields).m_Array.fields._version = 0;
            (__this->fields).__7__wrap4.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
            *(undefined8 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = 0;
            (__this->fields).__7__wrap4.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)0x0;
            (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
            (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
            (__this->fields).__7__wrap4.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            pSVar5 = &(__this->fields).__7__wrap4;
            (pSVar5->fields).m_Object.fields._version = 0;
            (pSVar5->fields).m_Object.fields._index = 0;
            (__this->fields)._categoryName_5__4 = (System_String_o *)0x0;
            *(undefined8 *)&(__this->fields).__7__wrap4.fields = 0;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryName_5__4);
            pSVar22 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
                      &(__this->fields)._category_5__3;
            (__this->fields)._category_5__3 = (SimpleJSONFixed_JSONNode_o *)0x0;
label_059754fc:
            Il2CppCodeGenWriteBarrier((void **)pSVar22);
            pSVar5 = &(__this->fields).__7__wrap1;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(pSVar5,(MethodInfo *)0x0);
            if (!bVar7) {
              (__this->fields).__7__wrap1.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)0x0;
              pSVar6 = &(__this->fields).__7__wrap1;
              (pSVar6->fields).m_Array.fields._index = 0;
              (pSVar6->fields).m_Array.fields._version = 0;
              (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
              *(undefined8 *)&(__this->fields).__7__wrap1.fields.m_Object.fields._getEnumeratorRetType = 0;
              pSVar6 = &(__this->fields).__7__wrap1;
              (pSVar6->fields).m_Object.fields._version = 0;
              (pSVar6->fields).m_Object.fields._index = 0;
              (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
              *(undefined8 *)&pSVar5->fields = 0;
              (__this->fields).__7__wrap1.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              (__this->fields).__7__wrap1.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
              return false;
            }
            SVar23 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(pSVar5,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar23,(MethodInfo *)0x0);
            (__this->fields)._category_5__3 = pSVar8;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._category_5__3);
            pSVar8 = (__this->fields)._category_5__3;
            if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05975a96;
            pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
            pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar8,(MethodInfo *)0x0);
            (__this->fields)._categoryName_5__4 = pSVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryName_5__4);
            pSVar8 = (__this->fields)._category_5__3;
            if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar8,"SubCategories",(pSVar8->klass->vtable)._7_get_Item.method),
               pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05975a96;
            (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                      (&uStack_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
            (__this->fields).__7__wrap4.fields.m_Array.fields._current = pSStack_38;
            (__this->fields).__7__wrap4.fields.m_Array.fields._list = pSStack_48;
            pSVar5 = &(__this->fields).__7__wrap4;
            (pSVar5->fields).m_Array.fields._index = (undefined4)uStack_40;
            (pSVar5->fields).m_Array.fields._version = uStack_40._4_4_;
            (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = pIStack_58;
            *(undefined8 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType =
                 uStack_50;
            pSVar5 = &(__this->fields).__7__wrap4;
            (pSVar5->fields).m_Object.fields._version = (undefined4)uStack_68;
            (pSVar5->fields).m_Object.fields._index = uStack_68._4_4_;
            (__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = pIStack_60;
            *(undefined8 *)&(__this->fields).__7__wrap4.fields = uStack_78;
            (__this->fields).__7__wrap4.fields.m_Object.fields._dictionary = pSStack_70;
            pSVar22 = &(__this->fields).__7__wrap4.fields.m_Object;
          }
          SVar23 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar23,(MethodInfo *)0x0);
          (__this->fields)._subCategory_5__6 = pSVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._subCategory_5__6);
          pSVar8 = (__this->fields)._subCategory_5__6;
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
          pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar8,(MethodInfo *)0x0);
          (__this->fields)._subCategoryName_5__7 = pSVar9;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._subCategoryName_5__7);
          pSVar8 = (__this->fields)._subCategory_5__6;
          if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"ExperiencePerMap",(pSVar8->klass->vtable)._7_get_Item.method),
             pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0)) break;
          bVar7 = (*(pSVar8->klass->vtable)._39_get_AsBool.methodPtr)
                            (pSVar8,(pSVar8->klass->vtable)._39_get_AsBool.method);
          (__this->fields)._experiencePerMap_5__8 = bVar7;
          pSVar8 = (__this->fields)._subCategory_5__6;
          if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Experiences",(pSVar8->klass->vtable)._7_get_Item.method),
             pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0)) break;
          (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                    (&uStack_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
          (__this->fields).__7__wrap8.fields.m_Array.fields._current = pSStack_38;
          (__this->fields).__7__wrap8.fields.m_Array.fields._list = pSStack_48;
          pSVar5 = &(__this->fields).__7__wrap8;
          (pSVar5->fields).m_Array.fields._index = (undefined4)uStack_40;
          (pSVar5->fields).m_Array.fields._version = uStack_40._4_4_;
          (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.value = pIStack_58;
          *(undefined8 *)&(__this->fields).__7__wrap8.fields.m_Object.fields._getEnumeratorRetType = uStack_50
          ;
          pSVar5 = &(__this->fields).__7__wrap8;
          (pSVar5->fields).m_Object.fields._version = (undefined4)uStack_68;
          (pSVar5->fields).m_Object.fields._index = uStack_68._4_4_;
          (__this->fields).__7__wrap8.fields.m_Object.fields._current.fields.key = pIStack_60;
          *(undefined8 *)&(__this->fields).__7__wrap8.fields = uStack_78;
          (__this->fields).__7__wrap8.fields.m_Object.fields._dictionary = pSStack_70;
          pSVar22 = &(__this->fields).__7__wrap8.fields.m_Object;
        }
      }
    }
  }
  else {
    if (iVar3 == 1) {
      (__this->fields).__1__state = -1;
      goto label_059757fe;
    }
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar8 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      return false;
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar8 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar7 = (*(pSVar8->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar8,"Experiences",(pSVar8->klass->vtable)._28_HasKey.method);
      if (!bVar7) {
        return false;
      }
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar8 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
      if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar8,"Experiences",(pSVar8->klass->vtable)._7_get_Item.method),
         pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                  (&uStack_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
        (__this->fields).__7__wrap1.fields.m_Array.fields._current = pSStack_38;
        (__this->fields).__7__wrap1.fields.m_Array.fields._list = pSStack_48;
        pSVar5 = &(__this->fields).__7__wrap1;
        (pSVar5->fields).m_Array.fields._index = (undefined4)uStack_40;
        (pSVar5->fields).m_Array.fields._version = uStack_40._4_4_;
        (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.value = pIStack_58;
        *(undefined8 *)&(__this->fields).__7__wrap1.fields.m_Object.fields._getEnumeratorRetType = uStack_50;
        pSVar5 = &(__this->fields).__7__wrap1;
        (pSVar5->fields).m_Object.fields._version = (undefined4)uStack_68;
        (pSVar5->fields).m_Object.fields._index = uStack_68._4_4_;
        (__this->fields).__7__wrap1.fields.m_Object.fields._current.fields.key = pIStack_60;
        *(undefined8 *)&(__this->fields).__7__wrap1.fields = uStack_78;
        (__this->fields).__7__wrap1.fields.m_Object.fields._dictionary = pSStack_70;
        pSVar22 = &(__this->fields).__7__wrap1.fields.m_Object;
        goto label_059754fc;
      }
    }
  }
label_05975a96:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.Generic.IEnumerator<Map.BuiltinLevels.BuiltinExperienceDefinition>.get_Current
// il2cpp: Map_BuiltinLevels_BuiltinExperienceDefinition_o* Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_Generic_IEnumerator_Map_BuiltinLevels_BuiltinExperienceDefinition__get_Current (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, const MethodInfo* method);
// 0x5975b10

Map_BuiltinLevels_BuiltinExperienceDefinition_o *
Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_Generic_IEnumerator_Map_BuiltinLevels_BuiltinExperienceDefinition__get_Current
          (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_IEnumerator_Reset (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, const MethodInfo* method);
// 0x5975b20

void Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_IEnumerator_Reset
               (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,MethodInfo *method)

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
                  MethodInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_IEnumerator_get_Current (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, const MethodInfo* method);
// 0x5975b60

Il2CppObject *
Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_IEnumerator_get_Current
          (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.Generic.IEnumerable<Map.BuiltinLevels.BuiltinExperienceDefinition>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition__o* Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_Generic_IEnumerable_Map_BuiltinLevels_BuiltinExperienceDefinition__GetEnumerator (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, const MethodInfo* method);
// 0x5975b70

System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition__o *
Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_Generic_IEnumerable_Map_BuiltinLevels_BuiltinExperienceDefinition__GetEnumerator
          (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_075459ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
    Il2CppMethodInitialized_075459ca = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition__o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition__o *)__this_00;
}


// Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_IEnumerable_GetEnumerator (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o* __this, const MethodInfo* method);
// 0x5975bf0

System_Collections_IEnumerator_o *
Map_BuiltinLevels__GetExperienceDefinitions_d__17__System_Collections_IEnumerable_GetEnumerator
          (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_075459ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
    Il2CppMethodInitialized_075459ca = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.BuiltinLevels$$Init
// il2cpp: void Map_BuiltinLevels__Init (const MethodInfo* method);
// 0x596ca30

void Map_BuiltinLevels__Init(MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"BuiltinMapInfo");
    Il2CppMethodInitialized_07545990 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar4 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar3 = TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  Utility_FolderPaths__TryCreateDirectory(pSVar3,(MethodInfo *)0x0);
  Utility_FolderPaths__TryCreateDirectory
            (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,(MethodInfo *)0x0);
  Utility_FolderPaths__TryCreateDirectory
            (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,(MethodInfo *)0x0);
  Utility_FolderPaths__TryCreateDirectory
            (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath,(MethodInfo *)0x0);
  Utility_FolderPaths__TryCreateDirectory
            (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset
                     (pSVar3,"BuiltinMapInfo",false,false,(MethodInfo *)0x0);
  if (__this == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this);
  }
  pSVar3 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
  pSVar4 = SimpleJSONFixed_JSON__Parse(pSVar3,(MethodInfo *)0x0);
  TypeInfo_Map_BuiltinLevels->static_fields->_info = pSVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinLevels->static_fields->_info);
  return;
}


// Map.BuiltinLevels$$LoadExperience
// il2cpp: Settings_PresetDefinition_o* Map_BuiltinLevels__LoadExperience (System_String_o* name, const MethodInfo* method);
// 0x596cc50

Settings_PresetDefinition_o * Map_BuiltinLevels__LoadExperience(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  Map_BuiltinLevels_BuiltinExperienceDefinition_o *pMVar2;
  Settings_PresetDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition);
    Il2CppMethodInitialized_07545991 = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    pMVar2 = Map_BuiltinLevels__FindExperience(name,method);
  }
  else {
    pMVar2 = Map_BuiltinLevels__FindExperience(name,method);
  }
  if (pMVar2 == (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)0x0) {
    __this = (Settings_PresetDefinition_o *)0x0;
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition);
    Settings_PresetDefinition___ctor(__this,(MethodInfo *)0x0);
    if (__this == (Settings_PresetDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).Category = (pMVar2->fields).Category;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Category);
    (__this->fields).SubCategory = (pMVar2->fields).SubCategory;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory);
    (__this->fields).Name = (pMVar2->fields).Name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
    (__this->fields).UIRules = (pMVar2->fields).UIRules;
    Il2CppCodeGenWriteBarrier(&(__this->fields).UIRules);
    (__this->fields).Variants = (pMVar2->fields).Variants;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Variants);
  }
  return __this;
}


// Map.BuiltinLevels$$GetExperiences
// il2cpp: System_Collections_Generic_List_Experience__o* Map_BuiltinLevels__GetExperiences (const MethodInfo* method);
// 0x596ced0
// eh: try 0x596d10f..0x596d3cc -> pad 0x596d3d6 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x596d403..0x596d408 -> pad 0x596d40d cleanup
// eh: try 0x596d410..0x596d41a -> pad 0x596d422 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596d007: cmp byte ptr [rip + 0x1bd898a], 0
// asm:   0x596d00e: jne 0x596d023
// asm:   0x596d0b0: jmp 0x596d023
// asm:   0x596d2e9: nop dword ptr [rax]
// asm:   0x596d3d6: jmp 0x596d3e4
// asm:   0x596d3d8: jmp 0x596d3e4
// asm:   0x596d3da: jmp 0x596d3e4
// asm:   0x596d3dc: jmp 0x596d3e4
// asm:   0x596d3de: jmp 0x596d3e4
// asm:   0x596d3e0: jmp 0x596d3e4
// asm:   0x596d3e2: jmp 0x596d3e4
// asm:   0x596d3e4: mov rbx, rax
// asm:   0x596d3e7: cmp edx, 1
// asm:   0x596d3ea: jne 0x596d410
// asm:   0x596d3ec: mov rdi, rbx
// asm:   0x596d3ef: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x596d3f4: mov rcx, qword ptr [rax]
// asm:   0x596d3f7: mov qword ptr [rsp + 8], rcx
// asm:   0x596d3fc: mov qword ptr [rsp + 0x18], rcx
// asm:   0x596d401: xor ebp, ebp
// asm:   0x596d403: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596d408: jmp 0x596d2ba
// asm:   0x596d40d: mov rbx, rax
// asm:   0x596d410: lea rdi, [rsp + 0x18]
// asm:   0x596d415: call 0x2fd3c10  ; il2cpp_runtime_helper_02fd3c10()
// asm:   0x596d41a: mov rdi, rbx
// asm:   0x596d41d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x596d422: mov rdi, rax
// asm:   0x596d425: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_Experience__o * Map_BuiltinLevels__GetExperiences(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_BuiltinLevels__GetExperienceDefinitions_d__17_c *pMVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppClass *pIVar5;
  System_String_o *subCategory;
  Il2CppClass *name;
  Il2CppClass *preview;
  System_String_o *templateName;
  Map_Experience_array *pMVar6;
  Map_BuiltinLevels_StaticFields *pMVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  Map_Experience_o *__this_00;
  System_Collections_Generic_List_Experience__o *__this_01;
  ulong uVar12;
  System_Collections_Generic_List_Experience__o *collection;
  long lVar13;
  Il2CppObject *local_58;
  long local_50;
  System_Collections_Generic_List_Experience__o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545992 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_Experience_ctor_71944e0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Experience_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Experience);
    Il2CppMethodInitialized_07545992 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    collection = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
  }
  else {
    collection = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
  }
  if (collection == (System_Collections_Generic_List_Experience__o *)0x0) {
    local_48 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Experience);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)local_48,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Experience_ctor);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    if (Il2CppMethodInitialized_07545998 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
      Il2CppMethodInitialized_07545998 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
    Map_BuiltinLevels__GetExperienceDefinitions_d__17___ctor(__this,-2,(MethodInfo *)0x0);
    if (__this == (Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar3 = __this->klass;
    uVar12 = (ulong)(pMVar3->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pMVar3->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition__c **)
             ((long)&pIVar4->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition) {
          pVVar10 = &(pMVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar13);
          goto label_0596d0c8;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)__this,
                         (Il2CppClass *)
                         TypeInfo_System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition
                         ,0);
label_0596d0c8:
    local_58 = (*pVVar10->methodPtr)((Il2CppObject *)__this,pVVar10->method);
    local_40 = 0;
    local_38 = (undefined1 *)&local_58;
    if (local_58 != (Il2CppObject *)0x0) {
      local_50 = 0;
      local_38 = (undefined1 *)&local_58;
      do {
        pIVar11 = local_58;
        pIVar5 = local_58->klass;
        uVar12 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar4 = (pIVar5->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar13) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar10 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar13);
              goto label_0596d183;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0596d183:
        bVar9 = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
        pIVar11 = local_58;
        if (!bVar9) {
          if (local_58 == (Il2CppObject *)0x0) goto label_0596d326;
          pIVar5 = local_58->klass;
          uVar12 = (ulong)(pIVar5->_2).interface_offsets_count;
          if (uVar12 == 0) goto label_0596d2ff;
          pIVar4 = (pIVar5->_1).interfaceOffsets;
          lVar13 = 0;
          goto label_0596d2f0;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar5 = local_58->klass;
        uVar12 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar4 = (pIVar5->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition__c **)
                 ((long)&pIVar4->interfaceType + lVar13) ==
                TypeInfo_System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition) {
              pVVar10 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar13);
              goto label_0596d203;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_58,(Il2CppClass *)
                                      TypeInfo_System_Collections_Generic_IEnumerator_BuiltinLevels_BuiltinExperienceDefinition
                             ,0);
label_0596d203:
        pIVar11 = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
        if (pIVar11 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar5 = pIVar11[1].klass;
        subCategory = pIVar11[1].monitor;
        name = pIVar11[2].klass;
        preview = pIVar11[3].klass;
        bVar9 = *(bool *)&pIVar11[3].monitor;
        templateName = pIVar11[2].monitor;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_Experience);
        Map_Experience___ctor
                  (__this_00,(System_String_o *)pIVar5,subCategory,(System_String_o *)name,
                   (System_String_o *)preview,bVar9,templateName,(MethodInfo *)0x0);
        pMVar8 = MethodInfo_System_Collections_Generic_List_Experience_Add;
        if (local_48 == (System_Collections_Generic_List_Experience__o *)0x0) {
label_0596d3b8:
          ThrowNullReferenceException();
        }
        piVar1 = &(local_48->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar6 = (local_48->fields)._items;
        if (pMVar6 == (Map_Experience_array *)0x0) goto label_0596d3b8;
        uVar2 = (local_48->fields)._size;
        if (uVar2 < (uint)pMVar6->max_length) {
          (local_48->fields)._size = uVar2 + 1;
          pMVar6->m_Items[(int)uVar2] = __this_00;
          Il2CppCodeGenWriteBarrier(pMVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)local_48,(Il2CppObject *)__this_00,
                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        }
      } while (local_58 != (Il2CppObject *)0x0);
    }
    ThrowNullReferenceException();
  }
  if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor != 0) goto label_0596d37f;
  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  goto label_0596d374;
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
label_0596d2f0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar13);
      goto label_0596d31d;
    }
  }
label_0596d2ff:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0596d31d:
  (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
label_0596d326:
  if (local_50 != 0) {
    il2cpp_codegen_rethrow();
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pMVar7 = TypeInfo_Map_BuiltinLevels->static_fields;
  pMVar7->_experiences = local_48;
  Il2CppCodeGenWriteBarrier(&pMVar7->_experiences);
label_0596d374:
  collection = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
label_0596d37f:
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Experience);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_Experience_ctor_71944e0);
  return __this_01;
}


// Map.BuiltinLevels$$HasExperienceScoring
// il2cpp: bool Map_BuiltinLevels__HasExperienceScoring (System_String_o* category, System_String_o* subCategory, System_String_o* name, const MethodInfo* method);
// 0x596d480

bool Map_BuiltinLevels__HasExperienceScoring
               (System_String_o *category,System_String_o *subCategory,System_String_o *name,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_Experience__o *pSVar2;
  bool bVar3;
  Map_BuiltinLevels___c__DisplayClass12_0_o *__this;
  System_Func_Experience__bool__o *__this_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545993 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c__DisplayClass12_0_HasExperienceScoring_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c__DisplayClass12_0);
    Il2CppMethodInitialized_07545993 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c__DisplayClass12_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Map_BuiltinLevels___c__DisplayClass12_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).category = category;
  Il2CppCodeGenWriteBarrier(&(__this->fields).category);
  (__this->fields).subCategory = subCategory;
  Il2CppCodeGenWriteBarrier(&(__this->fields).subCategory);
  (__this->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).name);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    pSVar2 = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
    klass = (Il2CppClass *)TypeInfo_Map_BuiltinLevels;
  }
  else {
    pSVar2 = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
    klass = (Il2CppClass *)TypeInfo_Map_BuiltinLevels;
  }
  TypeInfo_Map_BuiltinLevels = (Map_BuiltinLevels_c *)klass;
  if (pSVar2 == (System_Collections_Generic_List_Experience__o *)0x0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    Map_BuiltinLevels__GetExperiences((MethodInfo *)klass);
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = TypeInfo_Map_BuiltinLevels->static_fields->_experiences;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Map_BuiltinLevels_c__DisplayClass12_0_HasExperienceScoring_b__0,
             (MethodInfo_4F19300 *)0x0);
  bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_Experience);
  return bVar3;
}


// Map.BuiltinLevels$$ResolveExperiencePreviews
// il2cpp: void Map_BuiltinLevels__ResolveExperiencePreviews (System_Collections_Generic_IEnumerable_Experience__o* experiences, const MethodInfo* method);
// 0x596d620
// eh: try 0x596d76f..0x596d876 -> pad 0x596d882 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x596d89e..0x596d8a3 -> pad 0x596d931 cleanup
// eh: try 0x596d934..0x596d93e -> pad 0x596d946 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596d70e: lea r15, [rip + 0x190bce3]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x596d715: xor r14d, r14d
// asm:   0x596d718: lea r12, [rip + 0x1903841]  ; TypeInfo_System_Collections_Generic_IEnumerator_Experience
// asm:   0x596d71f: lea r13, [rip + 0x1908a8a]  ; TypeInfo_Map_BuiltinLevels
// asm:   0x596d726: jmp 0x596d73e
// asm:   0x596d730: mov rbx, qword ptr [rsp + 8]
// asm:   0x596d735: test rbx, rbx
// asm:   0x596d738: je 0x596d86c
// asm:   0x596d75d: nop dword ptr [rax]
// asm:   0x596d876: jmp 0x596d882
// asm:   0x596d878: jmp 0x596d882
// asm:   0x596d87a: jmp 0x596d882
// asm:   0x596d87c: jmp 0x596d882
// asm:   0x596d87e: jmp 0x596d882
// asm:   0x596d880: jmp 0x596d882
// asm:   0x596d882: mov rbx, rax
// asm:   0x596d885: cmp edx, 1
// asm:   0x596d888: jne 0x596d934
// asm:   0x596d88e: mov rdi, rbx
// asm:   0x596d891: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x596d896: mov r14, qword ptr [rax]
// asm:   0x596d899: mov qword ptr [rsp + 0x10], r14
// asm:   0x596d89e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596d929: mov rdi, r14
// asm:   0x596d92c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x596d931: mov rbx, rax
// asm:   0x596d934: lea rdi, [rsp + 0x10]
// asm:   0x596d939: call 0x2fd3ca0  ; il2cpp_runtime_helper_02fd3ca0()
// asm:   0x596d93e: mov rdi, rbx
// asm:   0x596d941: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x596d946: mov rdi, rax
// asm:   0x596d949: call 0x2ab61e0  ; __clang_call_terminate()

void Map_BuiltinLevels__ResolveExperiencePreviews
               (System_Collections_Generic_IEnumerable_Experience__o *experiences,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_Experience__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppClass *pIVar3;
  char cVar4;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  Map_Experience_o *experience;
  System_String_o *pSVar8;
  ulong uVar9;
  System_String_o **targetAddress;
  MethodInfo *method_00;
  long lVar10;
  Il2CppObject *local_40;
  undefined8 local_38;
  Il2CppObject **local_30;
  
  if (Il2CppMethodInitialized_07545994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_07545994 = '\x01';
  }
  if (experiences == (System_Collections_Generic_IEnumerable_Experience__o *)0x0) {
    return;
  }
  pSVar1 = experiences->klass;
  uVar9 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_Experience__c **)((long)&pIVar2->interfaceType + lVar10) ==
          TypeInfo_System_Collections_Generic_IEnumerable_Experience) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
        goto label_0596d6e1;
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar9 * 0x10 != lVar10);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)experiences,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Experience,0);
label_0596d6e1:
  pIVar7 = (*pVVar6->methodPtr)((Il2CppObject *)experiences,pVVar6->method);
  local_38 = 0;
  local_30 = &local_40;
  do {
    local_40 = pIVar7;
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar7->klass;
    uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar10) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar10);
          goto label_0596d793;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0596d793:
    cVar4 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    pIVar7 = local_40;
    if (cVar4 == '\0') {
      if (local_40 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar3 = local_40->klass;
      uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar9 == 0) goto label_0596d8ef;
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    if (local_40 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_40->klass;
    uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_Experience__c **)((long)&pIVar2->interfaceType + lVar10)
            == TypeInfo_System_Collections_Generic_IEnumerator_Experience) {
          pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar10);
          goto label_0596d813;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_40,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Experience,0);
label_0596d813:
    experience = (Map_Experience_o *)(*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    pIVar7 = local_40;
    if (experience != (Map_Experience_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      bVar5 = System_String__IsNullOrEmpty((experience->fields).Preview,(MethodInfo *)0x0);
      pIVar7 = local_40;
      if (bVar5) {
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar8 = Map_BuiltinLevels__ResolveExperiencePreview(experience,method_00);
        targetAddress = &(experience->fields).Preview;
        *targetAddress = pSVar8;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pIVar7 = local_40;
      }
    }
  } while( true );
  while (lVar10 = lVar10 + 0x10, uVar9 * 0x10 != lVar10) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar10);
      goto label_0596d90d;
    }
  }
label_0596d8ef:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(local_40,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0596d90d:
  (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
  return;
}


// Map.BuiltinLevels$$ResolveExperiencePreview
// il2cpp: System_String_o* Map_BuiltinLevels__ResolveExperiencePreview (Map_Experience_o* experience, const MethodInfo* method);
// 0x596d950
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596dc19: jmp 0x596dc34

System_String_o * Map_BuiltinLevels__ResolveExperiencePreview(Map_Experience_o *experience,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  UnityEngine_Object_o *pUVar4;
  Settings_PresetDefinition_o *__this;
  Settings_UIRule_o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_Func_string__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  Map_BuiltinLevels___c_StaticFields *pMVar8;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar9;
  System_Collections_Generic_List_TSource__o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  Settings_UIRule_o *query;
  
  if (Il2CppMethodInitialized_07545995 == '\0') {
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
              (&MethodInfo_Map_BuiltinLevels_c_ResolveExperiencePreview_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/");
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07545995 = '\x01';
  }
  if (experience == (Map_Experience_o *)0x0) goto label_0596dd61;
  pMVar3 = (MethodInfo *)
           System_String__Concat_5301f10
                     ("Data/ExperiencePreview/",(experience->fields).Name,"Preview",(MethodInfo *)0x0)
  ;
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  method_00 = pMVar3;
  pUVar4 = ApplicationManagers_ResourceManager__LoadAsset
                     (pSVar7,(System_String_o *)pMVar3,false,false,(MethodInfo *)0x0);
  if ((pUVar4 != (UnityEngine_Object_o *)0x0) &&
     ((UnityEngine_Texture2D_c *)pUVar4->klass == TypeInfo_UnityEngine_Texture2D)) {
    return (System_String_o *)pMVar3;
  }
  pSVar7 = (experience->fields).Name;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  __this = Map_BuiltinLevels__LoadExperience(pSVar7,method_00);
  pMVar3 = extraout_RDX;
  query = (Settings_UIRule_o *)0x0;
  if ((__this == (Settings_PresetDefinition_o *)0x0) ||
     (pSVar5 = Settings_PresetDefinition__get_MapRule(__this,(MethodInfo *)0x0), pMVar3 = extraout_RDX_00,
     pSVar5 == (Settings_UIRule_o *)0x0)) {
label_0596db79:
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      pMVar3 = extraout_RDX_01;
      if (Il2CppMethodInitialized_0754599c == '\0') goto label_0596dd33;
label_0596db97:
      uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_0754599c != '\0') goto label_0596db97;
label_0596dd33:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
      Il2CppMethodInitialized_0754599c = '\x01';
      uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
      pMVar3 = extraout_RDX_02;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      pMVar3 = extraout_RDX_03;
    }
    pSVar6 = Map_BuiltinLevels__QueryMapsNames_586e900(query,(Settings_UIRule_o *)0x0,pMVar3);
  }
  else {
    if (((pSVar5->fields).DisableEditing == false) || ((pSVar5->fields).DefaultValue == (Il2CppObject *)0x0))
    {
      query = pSVar5;
      goto label_0596db79;
    }
    pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    pIVar2 = (pSVar5->fields).DefaultValue;
    if ((pIVar2 == (Il2CppObject *)0x0) ||
       (pSVar7 = (System_String_o *)
                 (*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method),
       pSVar6 == (System_String_array *)0x0)) goto label_0596dd61;
    if ((int)pSVar6->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar6->m_Items[0] = pSVar7;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_ResolveMapPreviewPath,(MethodInfo_4F19B50 *)0x0);
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                      (System_Func_TSource__TResult__o *)__this_00,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
    pMVar8 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    __this_01 = pMVar8->__9__14_0;
  }
  else {
    pMVar8 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    __this_01 = pMVar8->__9__14_0;
  }
  if (__this_01 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
      pMVar8 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pMVar8->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,pIVar2,
               (intptr_t)MethodInfo_Map_BuiltinLevels_c_ResolveExperiencePreview_b__14_0,
               (MethodInfo_4F19300 *)0x0);
    pMVar8 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    pMVar8->__9__14_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&pMVar8->__9__14_0);
  }
  pSVar9 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar9 = System_Linq_Enumerable__Take_object_
                     (pSVar9,4,(MethodInfo_34FDB90 *)MethodInfo_System_Linq_Enumerable_Take_string);
  __this_02 = System_Linq_Enumerable__ToList_object_
                        (pSVar9,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
    if ((__this_02->fields)._size == 0) {
      return (experience->fields).Preview;
    }
    pSVar6 = (System_String_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this_02,
                        (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar7 = System_String__Join("|",pSVar6,(MethodInfo *)0x0);
    return pSVar7;
  }
label_0596dd61:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$ResolveMapPreviewPath
// il2cpp: System_String_o* Map_BuiltinLevels__ResolveMapPreviewPath (System_String_o* mapName, const MethodInfo* method);
// 0x596dde0

System_String_o * Map_BuiltinLevels__ResolveMapPreviewPath(System_String_o *mapName,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  
  if (Il2CppMethodInitialized_07545996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Previews/");
    Il2CppMethodInitialized_07545996 = '\x01';
  }
  pSVar1 = System_String__Concat_5301f10
                     ("Previews/",mapName,"Preview",(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar1,false,false,(MethodInfo *)0x0);
  if ((pUVar2 == (UnityEngine_Object_o *)0x0) ||
     ((UnityEngine_Texture2D_c *)pUVar2->klass != TypeInfo_UnityEngine_Texture2D)) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = System_String__Concat_5301f10
                     (TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps,"/",pSVar1,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Map.BuiltinLevels$$FindExperience
// il2cpp: Map_BuiltinLevels_BuiltinExperienceDefinition_o* Map_BuiltinLevels__FindExperience (System_String_o* name, const MethodInfo* method);
// 0x596cd70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596ce2a: cmp byte ptr [rip + 0x1bd8b67], 0
// asm:   0x596ce31: jne 0x596ce46
// asm:   0x596cebc: jmp 0x596ce46

Map_BuiltinLevels_BuiltinExperienceDefinition_o *
Map_BuiltinLevels__FindExperience(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  Map_BuiltinLevels___c__DisplayClass16_0_o *__this;
  Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this_00;
  System_Func_BuiltinLevels_BuiltinExperienceDefinition__bool__o *__this_01;
  Map_BuiltinLevels_BuiltinExperienceDefinition_o *pMVar2;
  
  if (Il2CppMethodInitialized_07545997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_BuiltinLevels_BuiltinExperienceDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_BuiltinLevels_BuiltinExperienceDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_BuiltinLevels_c__DisplayClass16_0_FindExperience_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c__DisplayClass16_0);
    Il2CppMethodInitialized_07545997 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c__DisplayClass16_0);
  Map_BuiltinLevels___c__DisplayClass16_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Map_BuiltinLevels___c__DisplayClass16_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).name);
  bVar1 = System_String__IsNullOrEmpty((__this->fields).name,(MethodInfo *)0x0);
  if (bVar1) {
    return (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)0x0;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  if (Il2CppMethodInitialized_07545998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
    Il2CppMethodInitialized_07545998 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
  Map_BuiltinLevels__GetExperienceDefinitions_d__17___ctor(__this_00,-2,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Func_BuiltinLevels_BuiltinExperienceDefinition_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Map_BuiltinLevels_c__DisplayClass16_0_FindExperience_b__0,
             (MethodInfo_4F19300 *)0x0);
  pMVar2 = (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)
           System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_34ED9E0 *)
                      MethodInfo_System_Linq_Enumerable_FirstOrDefault_BuiltinLevels_BuiltinExperienceDefinition
                     );
  return pMVar2;
}


// Map.BuiltinLevels$$GetExperienceDefinitions
// il2cpp: System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition__o* Map_BuiltinLevels__GetExperienceDefinitions (const MethodInfo* method);
// 0x596d430

System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition__o *
Map_BuiltinLevels__GetExperienceDefinitions(MethodInfo *method)

{
  Map_BuiltinLevels__GetExperienceDefinitions_d__17_o *__this;
  
  if (Il2CppMethodInitialized_07545998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17);
    Il2CppMethodInitialized_07545998 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17)
  ;
  Map_BuiltinLevels__GetExperienceDefinitions_d__17___ctor(__this,-2,(MethodInfo *)0x0);
  return (System_Collections_Generic_IEnumerable_BuiltinLevels_BuiltinExperienceDefinition__o *)__this;
}


// Map.BuiltinLevels$$CreateExperienceDefinition
// il2cpp: Map_BuiltinLevels_BuiltinExperienceDefinition_o* Map_BuiltinLevels__CreateExperienceDefinition (System_String_o* category, System_String_o* subCategory, System_String_o* name, SimpleJSONFixed_JSONNode_o* experience, System_Collections_Generic_List_string__o* rules, System_Collections_Generic_Dictionary_string__List_string___o* variants, bool hasScoring, const MethodInfo* method);
// 0x596df20

Map_BuiltinLevels_BuiltinExperienceDefinition_o *
Map_BuiltinLevels__CreateExperienceDefinition
          (System_String_o *category,System_String_o *subCategory,System_String_o *name,
          SimpleJSONFixed_JSONNode_o *experience,System_Collections_Generic_List_string__o *rules,
          System_Collections_Generic_Dictionary_string__List_string___o *variants,bool hasScoring,
          MethodInfo *method)

{
  Map_BuiltinLevels_BuiltinExperienceDefinition_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_BuiltinExperienceDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_07545999 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_BuiltinLevels_BuiltinExperienceDefinition);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Map_BuiltinLevels_BuiltinExperienceDefinition_o *)0x0) {
    (__this->fields).Category = category;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Category);
    (__this->fields).SubCategory = subCategory;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory);
    (__this->fields).Name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
    if (experience != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar1 = (*(experience->klass->vtable)._7_get_Item.methodPtr)
                         (experience,"Name",(experience->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar1,(MethodInfo *)0x0);
      (__this->fields).TemplateName = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TemplateName);
      pSVar1 = (*(experience->klass->vtable)._7_get_Item.methodPtr)
                         (experience,"Preview",(experience->klass->vtable)._7_get_Item.method);
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar1,(MethodInfo *)0x0);
      (__this->fields).Preview = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Preview);
      (__this->fields).HasScoring = hasScoring;
      (__this->fields).UIRules = rules;
      Il2CppCodeGenWriteBarrier(&(__this->fields).UIRules);
      (__this->fields).Variants = variants;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Variants);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$ComposeUIRules
// il2cpp: System_Collections_Generic_List_string__o* Map_BuiltinLevels__ComposeUIRules (SimpleJSONFixed_JSONNode_array* ruleSets, const MethodInfo* method);
// 0x596e0c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596e22f: cmp byte ptr [rip + 0x1bd4650], 0
// asm:   0x596e236: je 0x596e517
// asm:   0x596e503: jmp 0x596e55f

System_Collections_Generic_List_string__o *
Map_BuiltinLevels__ComposeUIRules(SimpleJSONFixed_JSONNode_array *ruleSets,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_String_o *key;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  uint uVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_Dictionary_string__int__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  Il2CppClass *item;
  Il2CppObject *pIVar9;
  System_Collections_Generic_List_UIRule__o *__this_00;
  Settings_UIRule_o *pSVar10;
  Map_BuiltinLevels___c_StaticFields *pMVar11;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  uint uVar12;
  ulong uVar13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  int32_t local_dc;
  SimpleJSONFixed_JSONNode_array *local_d8;
  ulong local_d0;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754599a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor_718b848);
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_c_ComposeUIRules_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    Il2CppMethodInitialized_0754599a = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_dc = 0;
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int)
  ;
  System_Collections_Generic_Dictionary_object__int____ctor_4a9cc70
            ((System_Collections_Generic_Dictionary_object__int__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4A9CC70 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor_718b848);
  if (ruleSets == (SimpleJSONFixed_JSONNode_array *)0x0) {
label_0596e5f6:
    ThrowNullReferenceException();
  }
  uVar6 = (uint)ruleSets->max_length;
  if (0 < (int)uVar6) {
    uVar13 = 0;
    local_d8 = ruleSets;
    do {
      if (uVar6 <= (uint)uVar13) {
label_0596e5fb:
        ThrowIndexOutOfRangeException();
      }
      pSVar8 = local_d8->m_Items[(int)(uint)uVar13];
      local_d0 = uVar13;
      if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596e5f6;
      (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
      local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
      local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
      local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
      local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
      local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
      local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
      local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
      local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
      local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
      local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
      local_c8.type = local_78.type;
      local_c8._4_4_ = local_78._4_4_;
      local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
      while (bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0), bVar5)
      {
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
        item = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar8,(MethodInfo *)0x0);
        pIVar9 = SZArrayNew(TypeInfo_string_array,1);
        if (pIVar9 == (Il2CppObject *)0x0) goto label_0596e5f6;
        if (*(int *)&pIVar9[1].monitor == 0) goto label_0596e5fb;
        pIVar9[2].klass = item;
        Il2CppCodeGenWriteBarrier(&pIVar9[2].klass);
        __this_00 = Settings_RuleParser__Parse
                              ((System_Collections_Generic_IEnumerable_string__o *)pIVar9,
                               (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_UIRule__o *)0x0) goto label_0596e5f6;
        if ((__this_00->fields)._size != 0) {
          pSVar10 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,0,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_UIRule_get_Item);
          if ((pSVar10 == (Settings_UIRule_o *)0x0) ||
             (__this == (System_Collections_Generic_Dictionary_string__int__o *)0x0)) goto label_0596e5f6;
          key = (pSVar10->fields).SettingId;
          bVar5 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                            ((System_Collections_Generic_Dictionary_object__int__o *)__this,
                             (Il2CppObject *)key,&local_dc,
                             (MethodInfo_4A9F630 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
          if (bVar5) {
            if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_0596e5f6;
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar7,local_dc,(Il2CppObject *)0x0,
                       (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
          }
          else if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_0596e5f6;
          System_Collections_Generic_Dictionary_object__int___set_Item
                    ((System_Collections_Generic_Dictionary_object__int__o *)__this,(Il2CppObject *)key,
                     (pSVar7->fields)._size,
                     (MethodInfo_4A9D760 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar7->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_0596e5f6;
          uVar6 = (pSVar7->fields)._size;
          if (uVar6 < (uint)pSVar3->max_length) {
            (pSVar7->fields)._size = uVar6 + 1;
            pSVar3->m_Items[(int)uVar6] = (System_String_o *)item;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
      }
      uVar12 = (int)local_d0 + 1;
      uVar13 = (ulong)uVar12;
      uVar6 = (uint)local_d8->max_length;
    } while ((int)uVar12 < (int)uVar6);
  }
  if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
    pMVar11 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    __this_01 = pMVar11->__9__19_0;
  }
  else {
    pMVar11 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    __this_01 = pMVar11->__9__19_0;
  }
  if (__this_01 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
      pMVar11 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    }
    pIVar9 = (Il2CppObject *)pMVar11->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,pIVar9,
               (intptr_t)MethodInfo_Map_BuiltinLevels_c_ComposeUIRules_b__19_0,(MethodInfo_4F19300 *)0x0);
    pMVar11 = TypeInfo_Map_BuiltinLevels_c->static_fields;
    pMVar11->__9__19_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&pMVar11->__9__19_0);
  }
  source = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar7 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList_object_
                     (source,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  return pSVar7;
}


// Map.BuiltinLevels$$FindMapCategory
// il2cpp: System_String_o* Map_BuiltinLevels__FindMapCategory (System_String_o* mapName, const MethodInfo* method);
// 0x596e600
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596e72c: lea rbp, [rsp + 0x50]
// asm:   0x596e731: lea rbx, [rip + 0x190b948]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x596e738: mov r14, rsp

System_String_o * Map_BuiltinLevels__FindMapCategory(System_String_o *mapName,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar5;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754599b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_0754599b = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"MapCategories",(pSVar2->klass->vtable)._7_get_Item.method),
     pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
label_0596e8f1:
    ThrowNullReferenceException();
  }
  (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
            (&local_c8,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
  bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
  if (bVar1) {
    do {
      SVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar5,(MethodInfo *)0x0);
      if ((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar2,"Maps",(pSVar2->klass->vtable)._7_get_Item.method),
         pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_0596e8f1;
      (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
      local_118.m_Array.fields._current = local_78.m_Array.fields._current;
      local_118.m_Array.fields._list = local_78.m_Array.fields._list;
      local_118.m_Array.fields._index = local_78.m_Array.fields._index;
      local_118.m_Array.fields._version = local_78.m_Array.fields._version;
      local_118.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
      local_118.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
      local_118.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
      local_118.m_Object.fields._version = local_78.m_Object.fields._version;
      local_118.m_Object.fields._index = local_78.m_Object.fields._index;
      local_118.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
      local_118.type = local_78.type;
      local_118._4_4_ = local_78._4_4_;
      local_118.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
      while (bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0), bVar1)
      {
        SVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar5,(MethodInfo *)0x0);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596e8f1;
        pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)mapName,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar2,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    } while (bVar1);
  }
  return "General";
}


// Map.BuiltinLevels$$QueryMapsNames
// il2cpp: System_String_array* Map_BuiltinLevels__QueryMapsNames (Settings_UIRule_o* query, const MethodInfo* method);
// 0x596dd70

System_String_array * Map_BuiltinLevels__QueryMapsNames(Settings_UIRule_o *query,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754599c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_0754599c = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    pSVar2 = Map_BuiltinLevels__QueryMapsNames_586e900(query,(Settings_UIRule_o *)0x0,method_00);
    return pSVar2;
  }
  pSVar2 = Map_BuiltinLevels__QueryMapsNames_586e900(query,(Settings_UIRule_o *)0x0,in_RDX);
  return pSVar2;
}


// Map.BuiltinLevels$$QueryMapsNames
// il2cpp: System_String_array* Map_BuiltinLevels__QueryMapsNames (Settings_UIRule_o* query, Settings_UIRule_o* categoryQuery, const MethodInfo* method);
// 0x596e900
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596ea59: cmp byte ptr [rip + 0x1bd3e26], 0
// asm:   0x596ea60: je 0x596efe4
// asm:   0x596eb8c: nop dword ptr [rax]
// asm:   0x596ec44: jmp 0x596ed28
// asm:   0x596edbd: mov r13, qword ptr [rsp + 0x18]
// asm:   0x596edc2: jmp 0x596ee01
// asm:   0x596eea0: jmp 0x596eeb9

System_String_array *
Map_BuiltinLevels__QueryMapsNames_586e900
          (Settings_UIRule_o *query,Settings_UIRule_o *categoryQuery,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_List_string__o *pSVar4;
  Il2CppObject *pIVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *b;
  System_String_array *pSVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754599d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
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
    Il2CppMethodInitialized_0754599d = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar8 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar8,"MapCategories",(pSVar8->klass->vtable)._7_get_Item.method),
     pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
label_0596f014:
    ThrowNullReferenceException();
  }
  (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
            (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
  local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
  local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
  local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
  local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
  local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
  local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
  local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
  local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
  local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
  local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
  local_c8.type = local_78.type;
  local_c8._4_4_ = local_78._4_4_;
  local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
label_0596eb80:
  if (categoryQuery != (Settings_UIRule_o *)0x0) goto label_0596eb90;
  bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
  if (bVar7) {
    SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                       ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar12,(MethodInfo *)0x0);
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
      SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
      goto label_0596ed28;
    }
  }
  else {
label_0596efa9:
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar11 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)__this,
                           (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar11;
    }
  }
  goto label_0596f014;
label_0596eb90:
  do {
    bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    if (!bVar7) goto label_0596efa9;
    SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                       ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar12,(MethodInfo *)0x0);
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596f014;
    pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
    pSVar4 = (categoryQuery->fields).AllowedValues;
    if ((pSVar4 == (System_Collections_Generic_List_string__o *)0x0) || ((pSVar4->fields)._size < 1)) {
      pIVar5 = (categoryQuery->fields).DefaultValue;
      if (pIVar5 == (Il2CppObject *)0x0) {
        b = (System_String_o *)0x0;
      }
      else {
        if (pIVar5 == (Il2CppObject *)0x0) goto label_0596f014;
        b = (System_String_o *)(*pIVar5->klass->vtable[3].methodPtr)(pIVar5,pIVar5->klass->vtable[3].method);
      }
      bVar7 = System_String__Equals_52ffe30(pSVar10,b,5,(MethodInfo *)0x0);
      if (!bVar7) goto label_0596eb80;
      break;
    }
    bVar7 = Settings_UIRule__MatchesAllowedValues(categoryQuery,pSVar10,(MethodInfo *)0x0);
  } while (!bVar7);
label_0596ed28:
  pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar8,"Maps",(pSVar8->klass->vtable)._7_get_Item.method);
  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596f014;
  (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
            (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
  local_118.m_Array.fields._current = local_78.m_Array.fields._current;
  local_118.m_Array.fields._list = local_78.m_Array.fields._list;
  local_118.m_Array.fields._index = local_78.m_Array.fields._index;
  local_118.m_Array.fields._version = local_78.m_Array.fields._version;
  local_118.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
  local_118.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
  local_118.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
  local_118.m_Object.fields._version = local_78.m_Object.fields._version;
  local_118.m_Object.fields._index = local_78.m_Object.fields._index;
  local_118.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
  local_118.type = local_78.type;
  local_118._4_4_ = local_78._4_4_;
  local_118.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
  bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
  if (bVar7) {
    do {
      SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar12,(MethodInfo *)0x0);
      if (((query == (Settings_UIRule_o *)0x0) ||
          (pSVar4 = (query->fields).AllowedValues, pSVar4 == (System_Collections_Generic_List_string__o *)0x0)
          ) || ((pSVar4->fields)._size == 0)) {
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596f014;
label_0596eeb9:
        pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_0596f014;
        bVar7 = System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar10,
                           (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        if (bVar7) {
          pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar8,(MethodInfo *)0x0);
          pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0596f014;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar11 = (__this->fields)._items;
          if (pSVar11 == (System_String_array *)0x0) goto label_0596f014;
          uVar3 = (__this->fields)._size;
          if (uVar3 < (uint)pSVar11->max_length) {
            (__this->fields)._size = uVar3 + 1;
            pSVar11->m_Items[(int)uVar3] = pSVar10;
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
        }
      }
      else {
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596f014;
        pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
        bVar7 = Settings_UIRule__MatchesAllowedValues(query,pSVar10,(MethodInfo *)0x0);
        if (bVar7) goto label_0596eeb9;
      }
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
    } while (bVar7);
  }
  goto label_0596eb80;
}


// Map.BuiltinLevels$$QueryModeNames
// il2cpp: System_String_array* Map_BuiltinLevels__QueryModeNames (Settings_UIRule_o* query, const MethodInfo* method);
// 0x596f020
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596f19b: mov r15, rsp
// asm:   0x596f19e: lea rbp, [rip + 0x190aedb]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x596f1a5: jmp 0x596f1ea
// asm:   0x596f285: jmp 0x596f299
// asm:   0x596f2dd: mov r14, rsp
// asm:   0x596f2e0: lea rbp, [rip + 0x190ad99]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x596f2e7: lea r13, [rip + 0x192242a]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x596f2ee: jmp 0x596f317

System_String_array * Map_BuiltinLevels__QueryModeNames(Settings_UIRule_o *query,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *d;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar6;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754599e == '\0') {
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
    Il2CppMethodInitialized_0754599e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar3 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"GameModes",(pSVar3->klass->vtable)._7_get_Item.method),
     pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
              (&local_78,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
    local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
    local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
    local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
    local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
    local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
    local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
    local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
    local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
    local_c8.type = local_78.type;
    local_c8._4_4_ = local_78._4_4_;
    local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
    bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    if (bVar2) {
      if (query == (Settings_UIRule_o *)0x0) {
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          SVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar6,(MethodInfo *)0x0);
          if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar3,(MethodInfo *)0x0);
          }
          goto label_0596f47d;
        }
        do {
          SVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar6,(MethodInfo *)0x0);
          if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596f47d;
          pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar3,(MethodInfo *)0x0);
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar4,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        } while (bVar2);
      }
      else {
        do {
          SVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar6,(MethodInfo *)0x0);
          pSVar1 = (query->fields).AllowedValues;
          if ((pSVar1 == (System_Collections_Generic_List_string__o *)0x0) || ((pSVar1->fields)._size == 0)) {
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596f47d;
label_0596f299:
            pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar3,(MethodInfo *)0x0);
            if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_0596f47d;
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar4,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
          else {
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596f47d;
            d = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(d,(MethodInfo *)0x0);
            bVar2 = Settings_UIRule__MatchesAllowedValues(query,pSVar4,(MethodInfo *)0x0);
            if (bVar2) goto label_0596f299;
          }
          bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        } while (bVar2);
      }
    }
    if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"None",
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this,
                 (Il2CppObject *)TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      pSVar5 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this,
                          (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      return pSVar5;
    }
  }
label_0596f47d:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$LoadMap
// il2cpp: System_String_o* Map_BuiltinLevels__LoadMap (System_String_o* category, System_String_o* name, const MethodInfo* method);
// 0x596f490

System_String_o *
Map_BuiltinLevels__LoadMap(System_String_o *category,System_String_o *name,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_0754599f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_0754599f = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  bVar2 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  method_00 = (MethodInfo *)(ulong)uVar1;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar3 = System_String__Concat_5302810
                       (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",
                        name,".txt",(MethodInfo *)0x0);
    bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    bVar2 = Map_BuiltinLevels__TryLoadBuiltinMap(category,name,&local_20,method_00);
    if (bVar2) {
      return local_20;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Map.BuiltinLevels$$TryLoadBuiltinMap
// il2cpp: bool Map_BuiltinLevels__TryLoadBuiltinMap (System_String_o* category, System_String_o* name, System_String_o** source, const MethodInfo* method);
// 0x596f5b0

bool Map_BuiltinLevels__TryLoadBuiltinMap
               (System_String_o *category,System_String_o *name,System_String_o **source,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *name_00;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075459a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown builtin map: ");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load builtin map: ");
    Il2CppMethodInitialized_075459a0 = '\x01';
  }
  *source = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(source);
  method_00 = extraout_RDX;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    method_00 = extraout_RDX_00;
  }
  pSVar2 = Map_BuiltinLevels__GetMap(category,name,method_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = "Unknown builtin map: ";
  }
  else {
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar2,"Category",(pSVar2->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"Category",(pSVar2->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      category = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar2,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
    name_00 = System_String__Concat_5302810
                        (category,"/",name,"Map",(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar3 = ApplicationManagers_ResourceManager__TryLoadText(pSVar3,name_00,(MethodInfo *)0x0);
    *source = pSVar3;
    Il2CppCodeGenWriteBarrier(source);
    bVar1 = System_String__IsNullOrWhiteSpace(*source,(MethodInfo *)0x0);
    if (!bVar1) {
      return true;
    }
    pSVar3 = "Failed to load builtin map: ";
  }
  pSVar3 = System_String__Concat_5302810(pSVar3,category,"/",name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return false;
}


// Map.BuiltinLevels$$LoadAutosave
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAutosave (System_String_o* name, const MethodInfo* method);
// 0x596fb10

System_String_o * Map_BuiltinLevels__LoadAutosave(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075459a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075459a1 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = System_String__Concat_5302810
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,
                      "/",name,".txt",(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Map.BuiltinLevels$$LoadLogic
// il2cpp: System_String_o* Map_BuiltinLevels__LoadLogic (System_String_o* name, const MethodInfo* method);
// 0x596fbe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596fd9f: nop 

System_String_o * Map_BuiltinLevels__LoadLogic(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *name_00;
  System_String_o *pSVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459a2 == '\0') {
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
    Il2CppMethodInitialized_075459a2 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if (bVar2) {
label_0596fcc0:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar2 = System_String__op_Equality
                    (name,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    return TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar3 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,"GameModes",(pSVar3->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
      while (bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0), bVar2)
      {
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596ff38;
        pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
        bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)name,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->Modes;
          name_00 = System_String__Concat_52f0320(name,"Logic",(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pSVar4 = ApplicationManagers_ResourceManager__TryLoadText(pSVar4,name_00,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar4 = System_String__Concat_5302810
                         (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,
                          "/",name,".cl",(MethodInfo *)0x0);
      bVar2 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar4 = System_String__Concat_5302810
                           (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,
                            "/",name,".txt",(MethodInfo *)0x0);
        bVar2 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
        if (!bVar2) goto label_0596fcc0;
      }
      pSVar4 = System_IO_File__ReadAllText(pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
label_0596ff38:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$IsLogicBuiltin
// il2cpp: bool Map_BuiltinLevels__IsLogicBuiltin (System_String_o* name, const MethodInfo* method);
// 0x596ff40

bool Map_BuiltinLevels__IsLogicBuiltin(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_075459a3 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar1 = System_String__op_Equality
                    (name,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar3 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,"GameModes",(pSVar3->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
      while( true ) {
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if (!bVar1) {
          return bVar1;
        }
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
        bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)name,(MethodInfo *)0x0);
        if (bVar2) {
          return bVar1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetMapCategories
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapCategories (const MethodInfo* method);
// 0x59700f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5970242: mov r14, rsp
// asm:   0x5970245: lea rbp, [rip + 0x1972c14]  ; "Name"
// asm:   0x597024c: lea r13, [rip + 0x1926705]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5970253: jmp 0x597028c

System_String_array * Map_BuiltinLevels__GetMapCategories(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_075459a4 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,"MapCategories",(pSVar5->klass->vtable)._7_get_Item.method);
    if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar5->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar5,(pSVar5->klass->vtable)._32_unknown.method);
      bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
      if (bVar4) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) {
          SVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar8,(MethodInfo *)0x0);
          if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"Name",(pSVar5->klass->vtable)._7_get_Item.method);
            SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar5,(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
          goto label_059703f2;
        }
        do {
          SVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar8,(MethodInfo *)0x0);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059703f2;
          pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,"Name",(pSVar5->klass->vtable)._7_get_Item.method);
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar5,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_059703f2;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        } while (bVar4);
      }
      else if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_059703f2;
      pSVar6 = "Custom";
      pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (__this->fields)._items;
      if (pSVar7 != (System_String_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return pSVar7;
      }
    }
  }
label_059703f2:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetMapNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapNames (System_String_o* category, const MethodInfo* method);
// 0x5970430
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59705fc: jmp 0x59708c7
// asm:   0x59708e1: lea rdi, [rsp + 0x10]
// asm:   0x59708e6: xor esi, esi
// asm:   0x59708e8: call 0x58654b0  ; SimpleJSONFixed_JSONNode_Enumerator__get_Current()
// asm:   0x59708ed: mov r14, rax
// asm:   0x59708f0: mov rbp, rdx
// asm:   0x59708f3: mov rdi, qword ptr [r15]
// asm:   0x59708f6: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x59708fd: jne 0x5970904

System_String_array * Map_BuiltinLevels__GetMapNames(System_String_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  uint uVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *a;
  uint uVar7;
  MethodInfo *pMVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar9;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459a5 == '\0') {
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
    Il2CppMethodInitialized_075459a5 = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  pMVar8 = (MethodInfo *)"Custom";
  bVar2 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar4 = Map_BuiltinLevels__GetTxtFiles
                       (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,pMVar8);
    if (pSVar4 != (System_String_array *)0x0) {
      uVar3 = (uint)pSVar4->max_length;
      if (0 < (int)uVar3) {
        uVar7 = 0;
        do {
          if (uVar3 <= uVar7) {
label_059708dc:
            ThrowIndexOutOfRangeException();
          }
          if (pSVar4->m_Items[(int)uVar7] == (System_String_o *)0x0) goto label_05970916;
          pSVar5 = System_String__Replace_5304550
                             (pSVar4->m_Items[(int)uVar7],".txt","",
                              (MethodInfo *)0x0);
          if ((uint)pSVar4->max_length <= uVar7) goto label_059708dc;
          pSVar4->m_Items[(int)uVar7] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar7);
          uVar7 = uVar7 + 1;
          uVar3 = (uint)pSVar4->max_length;
        } while ((int)uVar7 < (int)uVar3);
      }
      return pSVar4;
    }
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar6 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar6,"MapCategories",(pSVar6->klass->vtable)._7_get_Item.method),
       pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      (*(pSVar6->klass->vtable)._32_unknown.methodPtr)
                (&local_c8,pSVar6,(pSVar6->klass->vtable)._32_unknown.method);
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
      if (bVar2) {
        do {
          SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar9,(MethodInfo *)0x0);
          if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05970916;
          a = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar6,"Name",(pSVar6->klass->vtable)._7_get_Item.method);
          bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)category,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar6,"Maps",(pSVar6->klass->vtable)._7_get_Item.method);
            if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05970916;
            (*(pSVar6->klass->vtable)._32_unknown.methodPtr)
                      (&local_78,pSVar6,(pSVar6->klass->vtable)._32_unknown.method);
            local_118.m_Array.fields._current = local_78.m_Array.fields._current;
            local_118.m_Array.fields._list = local_78.m_Array.fields._list;
            local_118.m_Array.fields._index = local_78.m_Array.fields._index;
            local_118.m_Array.fields._version = local_78.m_Array.fields._version;
            local_118.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
            local_118.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
            local_118.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
            local_118.m_Object.fields._version = local_78.m_Object.fields._version;
            local_118.m_Object.fields._index = local_78.m_Object.fields._index;
            local_118.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
            local_118.type = local_78.type;
            local_118._4_4_ = local_78._4_4_;
            local_118.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
            bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
            if (bVar2) {
              if (__this == (System_Collections_Generic_List_string__o *)0x0) {
                SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar9,(MethodInfo *)0x0);
                if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                  pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar6,"Name",(pSVar6->klass->vtable)._7_get_Item.method)
                  ;
                  SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar6,(MethodInfo *)0x0);
                  ThrowNullReferenceException();
                }
                goto label_05970916;
              }
              do {
                SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar9,(MethodInfo *)0x0);
                if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05970916;
                pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar6,"Name",(pSVar6->klass->vtable)._7_get_Item.method);
                pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar6,(MethodInfo *)0x0);
                pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (__this->fields)._items;
                if (pSVar4 == (System_String_array *)0x0) goto label_05970916;
                uVar3 = (__this->fields)._size;
                if (uVar3 < (uint)pSVar4->max_length) {
                  (__this->fields)._size = uVar3 + 1;
                  pSVar4->m_Items[(int)uVar3] = pSVar5;
                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                             (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                }
                bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
              } while (bVar2);
            }
          }
          bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        } while (bVar2);
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar4 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return pSVar4;
      }
    }
  }
label_05970916:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetAutosaveNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAutosaveNames (const MethodInfo* method);
// 0x5970ad0

System_String_array * Map_BuiltinLevels__GetAutosaveNames(MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  uint uVar4;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_075459a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075459a6 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = Map_BuiltinLevels__GetTxtFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,in_RSI);
  if (pSVar2 == (System_String_array *)0x0) {
label_05970bb8:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      if (uVar1 <= uVar4) {
label_05970bb3:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar2->m_Items[(int)uVar4] == (System_String_o *)0x0) goto label_05970bb8;
      pSVar3 = System_String__Replace_5304550
                         (pSVar2->m_Items[(int)uVar4],".txt","",
                          (MethodInfo *)0x0);
      if ((uint)pSVar2->max_length <= uVar4) goto label_05970bb3;
      pSVar2->m_Items[(int)uVar4] = pSVar3;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar4);
      uVar4 = uVar4 + 1;
      uVar1 = (uint)pSVar2->max_length;
    } while ((int)uVar4 < (int)uVar1);
  }
  return pSVar2;
}


// Map.BuiltinLevels$$LoadAddon
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAddon (System_String_o* name, const MethodInfo* method);
// 0x596a800

System_String_o * Map_BuiltinLevels__LoadAddon(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *name_00;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075459a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075459a7 = '\x01';
  }
  method_00 = (MethodInfo *)"";
  bVar1 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      bVar1 = Map_BuiltinLevels__IsAddonBuiltin(name,method_00);
      if (bVar1) goto label_0596a8c2;
    }
    else {
      bVar1 = Map_BuiltinLevels__IsAddonBuiltin(name,method_00);
      if (bVar1) {
label_0596a8c2:
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Addons;
        name_00 = System_String__Concat_52f0320(name,"Logic",(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pSVar2 = ApplicationManagers_ResourceManager__TryLoadText(pSVar2,name_00,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar2 = System_String__Concat_5302810
                       (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,"/"
                        ,name,".cl",(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Map.BuiltinLevels$$GetAddonNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAddonNames (const MethodInfo* method);
// 0x5970bc0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5970d7b: jmp 0x5970f26
// asm:   0x5970d8d: nop dword ptr [rax]
// asm:   0x5970ebb: jmp 0x5970f26

System_String_array * Map_BuiltinLevels__GetAddonNames(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_String_array *pSVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  Map_BuiltinLevels_c *pMVar11;
  
  if (Il2CppMethodInitialized_075459a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075459a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pMVar11 = TypeInfo_Map_BuiltinLevels;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar7 = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)pMVar11);
  if (pSVar7 != (System_String_array *)0x0) {
    if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
      if (0 < (int)pSVar7->max_length) goto label_05970f26;
    }
    else {
      iVar9 = (int)pSVar7->max_length;
      uVar8 = pSVar7->max_length & 0xffffffff;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < iVar9) {
          uVar10 = 0;
          do {
            if (uVar8 <= uVar10) goto label_05970f21;
            bVar6 = System_Collections_Generic_HashSet_object___Add
                              ((System_Collections_Generic_HashSet_object__o *)__this_00,
                               (Il2CppObject *)pSVar7->m_Items[uVar10],
                               (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add)
            ;
            if (bVar6) goto label_05970f26;
            uVar10 = uVar10 + 1;
            uVar2 = (uint)pSVar7->max_length;
            uVar8 = (ulong)uVar2;
          } while ((long)uVar10 < (long)(int)uVar2);
        }
      }
      else if (0 < iVar9) {
        uVar10 = 0;
        do {
          if (uVar8 <= uVar10) goto label_05970f21;
          pSVar3 = pSVar7->m_Items[uVar10];
          bVar6 = System_Collections_Generic_HashSet_object___Add
                            ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar3,
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (bVar6) {
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_String_array *)0x0) goto label_05970f26;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = pSVar3;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
          }
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar7->max_length;
          uVar8 = (ulong)uVar2;
        } while ((long)uVar10 < (long)(int)uVar2);
      }
    }
    pMVar11 = TypeInfo_Map_BuiltinLevels;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar7 = Map_BuiltinLevels__GetCustomAddons((MethodInfo *)pMVar11);
    if (pSVar7 == (System_String_array *)0x0) goto label_05970f26;
    if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
      if (0 < (int)pSVar7->max_length) goto label_05970f26;
    }
    else {
      iVar9 = (int)pSVar7->max_length;
      uVar8 = pSVar7->max_length & 0xffffffff;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
        if (iVar9 < 1) goto label_05970f26;
        uVar10 = 0;
        do {
          if (uVar8 <= uVar10) goto label_05970f21;
          bVar6 = System_Collections_Generic_HashSet_object___Add
                            ((System_Collections_Generic_HashSet_object__o *)__this_00,
                             (Il2CppObject *)pSVar7->m_Items[uVar10],
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          if (bVar6) goto label_05970f26;
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar7->max_length;
          uVar8 = (ulong)uVar2;
        } while ((long)uVar10 < (long)(int)uVar2);
      }
      else {
        if (iVar9 < 1) goto label_05970f01;
        uVar10 = 0;
        do {
          if (uVar8 <= uVar10) {
label_05970f21:
            ThrowIndexOutOfRangeException();
          }
          pSVar3 = pSVar7->m_Items[uVar10];
          bVar6 = System_Collections_Generic_HashSet_object___Add
                            ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar3,
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (bVar6) {
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_String_array *)0x0) goto label_05970f26;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = pSVar3;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
          }
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar7->max_length;
          uVar8 = (ulong)uVar2;
        } while ((long)uVar10 < (long)(int)uVar2);
      }
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
label_05970f01:
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar7;
    }
  }
label_05970f26:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetBuiltinAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetBuiltinAddons (const MethodInfo* method);
// 0x5970f30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5971113: nop word ptr cs:[rax + rax]

System_String_array * Map_BuiltinLevels__GetBuiltinAddons(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Addons");
    Il2CppMethodInitialized_075459a9 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059712fd;
    bVar4 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar5,"Addons",(pSVar5->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar5 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
      if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar5,"Addons",(pSVar5->klass->vtable)._7_get_Item.method);
        if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (*(pSVar5->klass->vtable)._32_unknown.methodPtr)
                    (&local_78,pSVar5,(pSVar5->klass->vtable)._32_unknown.method);
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if (bVar4) {
            if (__this == (System_Collections_Generic_List_string__o *)0x0) {
              do {
                SVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar8,(MethodInfo *)0x0);
                if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                   (pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar5,"Name",
                                        (pSVar5->klass->vtable)._7_get_Item.method),
                   pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_059712fd;
                pSVar6 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
                bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
                if (!bVar4) goto label_059712fd;
                bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
              } while (bVar4);
            }
            else {
              do {
                SVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar8,(MethodInfo *)0x0);
                if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                   (pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar5,"Name",
                                        (pSVar5->klass->vtable)._7_get_Item.method),
                   pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_059712fd;
                pSVar6 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
                bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
                pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (!bVar4) {
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar7 = (__this->fields)._items;
                  if (pSVar7 == (System_String_array *)0x0) goto label_059712fd;
                  uVar2 = (__this->fields)._size;
                  if (uVar2 < (uint)pSVar7->max_length) {
                    (__this->fields)._size = uVar2 + 1;
                    pSVar7->m_Items[(int)uVar2] = pSVar6;
                    Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                               (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
                  }
                }
                bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
              } while (bVar4);
            }
          }
          if (__this != (System_Collections_Generic_List_string__o *)0x0) {
            pSVar7 = (System_String_array *)
                     System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_object__o *)__this,
                                (MethodInfo_395F5A0 *)
                                MethodInfo_System_Collections_Generic_List_string_ToArray);
            return pSVar7;
          }
        }
      }
      goto label_059712fd;
    }
  }
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar7 = (System_String_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this,
                        (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return pSVar7;
  }
label_059712fd:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$IsAddonBuiltin
// il2cpp: bool Map_BuiltinLevels__IsAddonBuiltin (System_String_o* name, const MethodInfo* method);
// 0x596a740
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596a7a9: nop dword ptr [rax]
// asm:   0x596a7dc: jmp 0x596a7e1
// asm:   0x596a7de: xor r12d, r12d

bool Map_BuiltinLevels__IsAddonBuiltin(System_String_o *name,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  Map_BuiltinLevels_c *method_00;
  
  if (Il2CppMethodInitialized_075459aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_075459aa = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (!bVar2) {
    method_00 = TypeInfo_Map_BuiltinLevels;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar3 = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)method_00);
    if (pSVar3 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar3->max_length) {
      uVar4 = pSVar3->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        bVar2 = System_String__op_Equality(pSVar3->m_Items[uVar5],name,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar3->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return false;
}


// Map.BuiltinLevels$$GetCustomAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomAddons (const MethodInfo* method);
// 0x5971310

System_String_array * Map_BuiltinLevels__GetCustomAddons(MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  uint uVar4;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_075459ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075459ab = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = Map_BuiltinLevels__GetClFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,in_RSI);
  if (pSVar2 == (System_String_array *)0x0) {
label_059713f8:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      if (uVar1 <= uVar4) {
label_059713f3:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar2->m_Items[(int)uVar4] == (System_String_o *)0x0) goto label_059713f8;
      pSVar3 = System_String__Replace_5304550
                         (pSVar2->m_Items[(int)uVar4],".cl","",
                          (MethodInfo *)0x0);
      if ((uint)pSVar2->max_length <= uVar4) goto label_059713f3;
      pSVar2->m_Items[(int)uVar4] = pSVar3;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar4);
      uVar4 = uVar4 + 1;
      uVar1 = (uint)pSVar2->max_length;
    } while ((int)uVar4 < (int)uVar1);
  }
  return pSVar2;
}


// Map.BuiltinLevels$$DeleteCustomMap
// il2cpp: void Map_BuiltinLevels__DeleteCustomMap (System_String_o* name, const MethodInfo* method);
// 0x5971590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59715b3: cmp byte ptr [rip + 0x1bd43f5], 0

void Map_BuiltinLevels__DeleteCustomMap(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_075459ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_075459ac = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  if (Il2CppMethodInitialized_075459af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075459af = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",name,
                    ".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$RenameCustomMap
// il2cpp: void Map_BuiltinLevels__RenameCustomMap (System_String_o* oldName, System_String_o* newName, const MethodInfo* method);
// 0x5971720
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5971756: cmp byte ptr [rip + 0x1bd4252], 0
// asm:   0x597175d: je 0x59718a4
// asm:   0x59717de: cmp byte ptr [rip + 0x1bd41ca], 0
// asm:   0x59717e5: je 0x597190f

void Map_BuiltinLevels__RenameCustomMap(System_String_o *oldName,System_String_o *newName,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *path;
  System_String_o *destFileName;
  System_String_o *path_00;
  
  if (Il2CppMethodInitialized_075459ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".rename");
    Il2CppMethodInitialized_075459ad = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  if (Il2CppMethodInitialized_075459af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075459af = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",
                    oldName,".txt",(MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if (bVar2) {
    destFileName = System_String__Concat_52f0320(path,".rename",(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    if (Il2CppMethodInitialized_075459af == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
      il2cpp_codegen_initialize_runtime_metadata(&".txt");
      il2cpp_codegen_initialize_runtime_metadata(&"/");
      Il2CppMethodInitialized_075459af = '\x01';
      uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    path_00 = System_String__Concat_5302810
                        (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",
                         newName,".txt",(MethodInfo *)0x0);
    System_IO_File__Move(path,destFileName,(MethodInfo *)0x0);
    bVar2 = System_IO_File__Exists(path_00,(MethodInfo *)0x0);
    if (bVar2) {
      System_IO_File__Delete(path_00,(MethodInfo *)0x0);
    }
    System_IO_File__Move(destFileName,path_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Map.BuiltinLevels$$IsValidCustomFileName
// il2cpp: bool Map_BuiltinLevels__IsValidCustomFileName (System_String_o* name, const MethodInfo* method);
// 0x5971960
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5971a6e: jmp 0x5971a73

bool Map_BuiltinLevels__IsValidCustomFileName(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint16_t c;
  System_String_o *a;
  int iVar3;
  
  if (Il2CppMethodInitialized_075459ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075459ae = '\x01';
  }
  if (name == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = (name->fields)._stringLength;
  bVar2 = false;
  if ((iVar3 != 0) && (iVar3 < 0x33)) {
    bVar2 = false;
    a = System_String__Trim(name,(MethodInfo *)0x0);
    bVar1 = System_String__op_Inequality(a,name,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      bVar2 = false;
      bVar1 = Utility_Util__IsReservedFileName(name,(MethodInfo *)0x0);
      if (!bVar1) {
        if (0 < (name->fields)._stringLength) {
          iVar3 = 0;
          do {
            c = System_String__get_Chars(name,iVar3,(MethodInfo *)0x0);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
            if (!bVar2) {
              if (0x3f < c - 0x20) {
                return false;
              }
              if ((0x8000000000002001U >> ((ulong)(c - 0x20) & 0x3f) & 1) == 0) {
                return false;
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (name->fields)._stringLength);
        }
        bVar2 = true;
      }
    }
  }
  return bVar2;
}


// Map.BuiltinLevels$$GetCustomMapPath
// il2cpp: System_String_o* Map_BuiltinLevels__GetCustomMapPath (System_String_o* name, const MethodInfo* method);
// 0x5971690

System_String_o * Map_BuiltinLevels__GetCustomMapPath(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075459af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075459af = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = System_String__Concat_5302810
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",
                      name,".txt",(MethodInfo *)0x0);
  return pSVar1;
}


// Map.BuiltinLevels$$DeleteCustomLogic
// il2cpp: void Map_BuiltinLevels__DeleteCustomLogic (System_String_o* name, const MethodInfo* method);
// 0x5971a90

void Map_BuiltinLevels__DeleteCustomLogic(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075459b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_075459b0 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar1 = System_String__Concat_5302810
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,"/",
                      name,".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5302810
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,"/",
                      name,".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$DeleteCustomAddon
// il2cpp: void Map_BuiltinLevels__DeleteCustomAddon (System_String_o* name, const MethodInfo* method);
// 0x5971b60

void Map_BuiltinLevels__DeleteCustomAddon(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  
  if (Il2CppMethodInitialized_075459b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_075459b1 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,"/",
                    name,".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomMap
// il2cpp: void Map_BuiltinLevels__SaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x5971c00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5971c2f: cmp byte ptr [rip + 0x1bd3d79], 0

void Map_BuiltinLevels__SaveCustomMap(System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *path;
  System_String_o *contents;
  
  if (Il2CppMethodInitialized_075459b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_075459b2 = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  if (Il2CppMethodInitialized_075459af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075459af = '\x01';
    uVar1 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,"/",name,
                    ".txt",(MethodInfo *)0x0);
  if (script == (Map_MapScript_o *)0x0) {
    ThrowNullReferenceException();
  }
  contents = (*(script->klass->vtable)._4_Serialize.methodPtr)
                       (script,(script->klass->vtable)._4_Serialize.method);
  System_IO_File__WriteAllText(path,contents,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$AutosaveCustomMap
// il2cpp: void Map_BuiltinLevels__AutosaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x5971d30

void Map_BuiltinLevels__AutosaveCustomMap(System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *contents;
  
  if (Il2CppMethodInitialized_075459b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075459b3 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapAutosaveFolderPath,
                    "/",name,".txt",(MethodInfo *)0x0);
  if (script == (Map_MapScript_o *)0x0) {
    ThrowNullReferenceException();
  }
  contents = (*(script->klass->vtable)._4_Serialize.methodPtr)
                       (script,(script->klass->vtable)._4_Serialize.method);
  System_IO_File__WriteAllText(path,contents,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$BackupCustomMap
// il2cpp: void Map_BuiltinLevels__BackupCustomMap (System_String_o* name, System_String_o* map, System_String_o* version, const MethodInfo* method);
// 0x5971df0

void Map_BuiltinLevels__BackupCustomMap
               (System_String_o *name,System_String_o *map,System_String_o *version,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *values;
  System_DateTime_o local_38;
  
  if (Il2CppMethodInitialized_075459b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"-v");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"yyyy-MM-dd-HH-mm-ss-fff");
    Il2CppMethodInitialized_075459b4 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath,(MethodInfo *)0x0);
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  local_38 = System_DateTime__get_Now((MethodInfo *)0x0);
  pSVar1 = System_DateTime__ToString_5497760(&local_38,"yyyy-MM-dd-HH-mm-ss-fff",(MethodInfo *)0x0);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = name;
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = "-v";
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = version;
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = "-";
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = pSVar1;
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = ".txt";
              Il2CppCodeGenWriteBarrier(values->m_Items + 5);
              pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
              pSVar1 = System_String__Concat_5301f10
                                 (TypeInfo_Map_BuiltinLevels->static_fields->CustomMapBackupsFolderPath,
                                  "/",pSVar1,(MethodInfo *)0x0);
              System_IO_File__WriteAllText(pSVar1,map,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Map.BuiltinLevels$$SaveCustomLogic
// il2cpp: void Map_BuiltinLevels__SaveCustomLogic (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x5972010

void Map_BuiltinLevels__SaveCustomLogic(System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (Il2CppMethodInitialized_075459b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_075459b5 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,"/",
                    name,".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomAddon
// il2cpp: void Map_BuiltinLevels__SaveCustomAddon (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x59720b0

void Map_BuiltinLevels__SaveCustomAddon(System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (Il2CppMethodInitialized_075459b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    Il2CppMethodInitialized_075459b6 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,"/",
                    name,".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$GetGameModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetGameModes (System_String_o* category, System_String_o* mapName, bool hasMapLogic, const MethodInfo* method);
// 0x5972150
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597239c: mov r12, rsp
// asm:   0x597239f: lea r15, [rip + 0x1970aba]  ; "Name"
// asm:   0x59723a6: lea r14, [rip + 0x19245ab]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x59723ad: jmp 0x59723dc
// asm:   0x59725f5: mov r14, rsp
// asm:   0x59725f8: lea r12, [rip + 0x1924359]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x59725ff: jmp 0x597263c
// asm:   0x59726f7: jmp 0x59722e4
// asm:   0x59727ac: mov r14, rsp
// asm:   0x59727af: lea r12, [rip + 0x19241c2]  ; MethodInfo_System_Collections_Generic_List_string_Contains
// asm:   0x59727b6: jmp 0x59727d2
// asm:   0x5972932: mov r14, rsp
// asm:   0x5972935: lea r12, [rip + 0x192401c]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x597293c: jmp 0x597296c
// asm:   0x5972aa4: mov r14, rsp
// asm:   0x5972aa7: lea r12, [rip + 0x1923eca]  ; MethodInfo_System_Collections_Generic_List_string_Contains
// asm:   0x5972aae: jmp 0x5972ac2

System_String_array *
Map_BuiltinLevels__GetGameModes
          (System_String_o *category,System_String_o *mapName,bool hasMapLogic,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  int32_t iVar4;
  System_String_array *pSVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_array *pSVar9;
  ulong uVar10;
  MethodInfo *method_00;
  ulong uVar11;
  MethodInfo *pMVar12;
  Map_BuiltinLevels_c *method_01;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar13;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_88;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075459b7 == '\0') {
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
    Il2CppMethodInitialized_075459b7 = '\x01';
  }
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (hasMapLogic) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05972ccc;
    pSVar8 = TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this->fields)._items;
    if (pSVar9 == (System_String_array *)0x0) goto label_05972ccc;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar9->m_Items[(int)uVar2] = pSVar8;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
      goto label_059722d1;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
               (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
    uVar3 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
label_059722d1:
    uVar3 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar7 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  local_38 = category;
  if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (local_40 = mapName,
     pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar7,"GameModes",(pSVar7->klass->vtable)._7_get_Item.method),
     pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05972ccc;
  (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
            (&local_88,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
  local_d8.m_Array.fields._current = local_88.m_Array.fields._current;
  local_d8.m_Array.fields._list = local_88.m_Array.fields._list;
  local_d8.m_Array.fields._index = local_88.m_Array.fields._index;
  local_d8.m_Array.fields._version = local_88.m_Array.fields._version;
  local_d8.m_Object.fields._current.fields.value = local_88.m_Object.fields._current.fields.value;
  local_d8.m_Object.fields._getEnumeratorRetType = local_88.m_Object.fields._getEnumeratorRetType;
  local_d8.m_Object.fields._36_4_ = local_88.m_Object.fields._36_4_;
  local_d8.m_Object.fields._version = local_88.m_Object.fields._version;
  local_d8.m_Object.fields._index = local_88.m_Object.fields._index;
  local_d8.m_Object.fields._current.fields.key = local_88.m_Object.fields._current.fields.key;
  local_d8.type = local_88.type;
  local_d8._4_4_ = local_88._4_4_;
  local_d8.m_Object.fields._dictionary = local_88.m_Object.fields._dictionary;
  pMVar12 = (MethodInfo *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
  if (bVar6) {
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
      if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"Name",(pSVar7->klass->vtable)._7_get_Item.method),
         pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05972ccc;
      goto label_05972d04;
    }
    do {
      SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
      if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"Name",(pSVar7->klass->vtable)._7_get_Item.method),
         pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05972ccc;
      pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
      pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (__this->fields)._items;
      if (pSVar9 == (System_String_array *)0x0) goto label_05972ccc;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar9->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar9->m_Items[(int)uVar2] = pSVar8;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                   (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
      }
      pMVar12 = (MethodInfo *)0x0;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
    } while (bVar6);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar8 = local_38;
  pSVar7 = Map_BuiltinLevels__GetCategory(local_38,pMVar12);
  a = Map_BuiltinLevels__GetMap(pSVar8,local_40,method_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
      bVar6 = (*(a->klass->vtable)._28_HasKey.methodPtr)
                        (a,"IncludedModes",(a->klass->vtable)._28_HasKey.method);
      if (bVar6) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05972ccc;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar4 = (__this->fields)._size;
        (__this->fields)._size = 0;
        if (0 < iVar4) {
          System_Array__Clear((System_Array_o *)(__this->fields)._items,0,iVar4,(MethodInfo *)0x0);
        }
        pSVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                           (a,"IncludedModes",(a->klass->vtable)._7_get_Item.method);
        if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
        (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
                  (&local_88,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
        local_d8.m_Array.fields._current = local_88.m_Array.fields._current;
        local_d8.m_Array.fields._list = local_88.m_Array.fields._list;
        local_d8.m_Array.fields._index = local_88.m_Array.fields._index;
        local_d8.m_Array.fields._version = local_88.m_Array.fields._version;
        local_d8.m_Object.fields._current.fields.value = local_88.m_Object.fields._current.fields.value;
        local_d8.m_Object.fields._getEnumeratorRetType = local_88.m_Object.fields._getEnumeratorRetType;
        local_d8.m_Object.fields._36_4_ = local_88.m_Object.fields._36_4_;
        local_d8.m_Object.fields._version = local_88.m_Object.fields._version;
        local_d8.m_Object.fields._index = local_88.m_Object.fields._index;
        local_d8.m_Object.fields._current.fields.key = local_88.m_Object.fields._current.fields.key;
        local_d8.type = local_88.type;
        local_d8._4_4_ = local_88._4_4_;
        local_d8.m_Object.fields._dictionary = local_88.m_Object.fields._dictionary;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        if (bVar6) {
          do {
            SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
            if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
            pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
            pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar9 = (__this->fields)._items;
            if (pSVar9 == (System_String_array *)0x0) goto label_05972ccc;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar9->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar9->m_Items[(int)uVar2] = pSVar8;
              Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                         (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
            }
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          } while (bVar6);
        }
      }
      else {
        bVar6 = (*(a->klass->vtable)._28_HasKey.methodPtr)
                          (a,"ExcludedModes",(a->klass->vtable)._28_HasKey.method);
        if (bVar6) {
          pSVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                             (a,"ExcludedModes",(a->klass->vtable)._7_get_Item.method);
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
          (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
                    (&local_88,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
          local_d8.m_Array.fields._current = local_88.m_Array.fields._current;
          local_d8.m_Array.fields._list = local_88.m_Array.fields._list;
          local_d8.m_Array.fields._index = local_88.m_Array.fields._index;
          local_d8.m_Array.fields._version = local_88.m_Array.fields._version;
          local_d8.m_Object.fields._current.fields.value = local_88.m_Object.fields._current.fields.value;
          local_d8.m_Object.fields._getEnumeratorRetType = local_88.m_Object.fields._getEnumeratorRetType;
          local_d8.m_Object.fields._36_4_ = local_88.m_Object.fields._36_4_;
          local_d8.m_Object.fields._version = local_88.m_Object.fields._version;
          local_d8.m_Object.fields._index = local_88.m_Object.fields._index;
          local_d8.m_Object.fields._current.fields.key = local_88.m_Object.fields._current.fields.key;
          local_d8.type = local_88.type;
          local_d8._4_4_ = local_88._4_4_;
          local_d8.m_Object.fields._dictionary = local_88.m_Object.fields._dictionary;
          bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          if (bVar6) {
            if (__this == (System_Collections_Generic_List_string__o *)0x0) {
label_05972cd1:
              SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
              if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05972d04:
                (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
                ThrowNullReferenceException();
              }
              goto label_05972ccc;
            }
            do {
              SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
              if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
              pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                 (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
              bVar6 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                                 (MethodInfo_395D6D0 *)
                                 MethodInfo_System_Collections_Generic_List_string_Contains);
              if (bVar6) {
                pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
                System_Collections_Generic_List_object___Remove
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                           (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_string_Remove);
              }
              bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
            } while (bVar6);
          }
        }
        else {
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
          bVar6 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar7,"IncludedModes",(pSVar7->klass->vtable)._28_HasKey.method);
          if (bVar6) {
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05972ccc;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            iVar4 = (__this->fields)._size;
            (__this->fields)._size = 0;
            if (0 < iVar4) {
              System_Array__Clear((System_Array_o *)(__this->fields)._items,0,iVar4,(MethodInfo *)0x0);
            }
            pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar7,"IncludedModes",(pSVar7->klass->vtable)._7_get_Item.method);
            if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
            (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
                      (&local_88,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
            local_d8.m_Array.fields._current = local_88.m_Array.fields._current;
            local_d8.m_Array.fields._list = local_88.m_Array.fields._list;
            local_d8.m_Array.fields._index = local_88.m_Array.fields._index;
            local_d8.m_Array.fields._version = local_88.m_Array.fields._version;
            local_d8.m_Object.fields._current.fields.value = local_88.m_Object.fields._current.fields.value;
            local_d8.m_Object.fields._getEnumeratorRetType = local_88.m_Object.fields._getEnumeratorRetType;
            local_d8.m_Object.fields._36_4_ = local_88.m_Object.fields._36_4_;
            local_d8.m_Object.fields._version = local_88.m_Object.fields._version;
            local_d8.m_Object.fields._index = local_88.m_Object.fields._index;
            local_d8.m_Object.fields._current.fields.key = local_88.m_Object.fields._current.fields.key;
            local_d8.type = local_88.type;
            local_d8._4_4_ = local_88._4_4_;
            local_d8.m_Object.fields._dictionary = local_88.m_Object.fields._dictionary;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
            if (bVar6) {
              do {
                SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
                if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
                pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
                pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar9 = (__this->fields)._items;
                if (pSVar9 == (System_String_array *)0x0) goto label_05972ccc;
                uVar2 = (__this->fields)._size;
                if (uVar2 < (uint)pSVar9->max_length) {
                  (__this->fields)._size = uVar2 + 1;
                  pSVar9->m_Items[(int)uVar2] = pSVar8;
                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                             (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
                }
                bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
              } while (bVar6);
            }
          }
          else {
            bVar6 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar7,"ExcludedModes",(pSVar7->klass->vtable)._28_HasKey.method);
            if (bVar6) {
              pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar7,"ExcludedModes",(pSVar7->klass->vtable)._7_get_Item.method);
              if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
              (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
                        (&local_88,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
              local_d8.m_Array.fields._current = local_88.m_Array.fields._current;
              local_d8.m_Array.fields._list = local_88.m_Array.fields._list;
              local_d8.m_Array.fields._index = local_88.m_Array.fields._index;
              local_d8.m_Array.fields._version = local_88.m_Array.fields._version;
              local_d8.m_Object.fields._current.fields.value = local_88.m_Object.fields._current.fields.value;
              local_d8.m_Object.fields._getEnumeratorRetType = local_88.m_Object.fields._getEnumeratorRetType;
              local_d8.m_Object.fields._36_4_ = local_88.m_Object.fields._36_4_;
              local_d8.m_Object.fields._version = local_88.m_Object.fields._version;
              local_d8.m_Object.fields._index = local_88.m_Object.fields._index;
              local_d8.m_Object.fields._current.fields.key = local_88.m_Object.fields._current.fields.key;
              local_d8.type = local_88.type;
              local_d8._4_4_ = local_88._4_4_;
              local_d8.m_Object.fields._dictionary = local_88.m_Object.fields._dictionary;
              bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
              if (bVar6) {
                if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05972cd1;
                do {
                  SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                     ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
                  if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05972ccc;
                  pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                     (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
                  bVar6 = System_Collections_Generic_List_object___Contains
                                    ((System_Collections_Generic_List_object__o *)__this,
                                     (Il2CppObject *)pSVar8,
                                     (MethodInfo_395D6D0 *)
                                     MethodInfo_System_Collections_Generic_List_string_Contains);
                  if (bVar6) {
                    pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                       (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
                    System_Collections_Generic_List_object___Remove
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_string_Remove)
                    ;
                  }
                  bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
                } while (bVar6);
              }
            }
          }
        }
      }
    }
  }
  method_01 = TypeInfo_Map_BuiltinLevels;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar9 = Map_BuiltinLevels__GetCustomModes((MethodInfo *)method_01);
  if (pSVar9 == (System_String_array *)0x0) {
label_05972ccc:
    ThrowNullReferenceException();
  }
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar9->max_length) {
    uVar10 = pSVar9->max_length & 0xffffffff;
    uVar11 = 0;
    do {
      if (uVar10 <= uVar11) {
        ThrowIndexOutOfRangeException();
      }
      pSVar8 = pSVar9->m_Items[uVar11];
      bVar6 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                         (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (!bVar6) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 == (System_String_array *)0x0) goto label_05972ccc;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pSVar8;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                     (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
        }
      }
      uVar11 = uVar11 + 1;
      uVar2 = (uint)pSVar9->max_length;
      uVar10 = (ulong)uVar2;
    } while ((long)uVar11 < (long)(int)uVar2);
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05972ccc;
  }
  pSVar9 = (System_String_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this,
                      (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  return pSVar9;
}


// Map.BuiltinLevels$$GetSandboxGameModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetSandboxGameModes (System_String_o* category, System_String_o* mapName, bool hasMapLogic, int32_t* recommendedModeCount, const MethodInfo* method);
// 0x5973380
// eh: try 0x59738f1..0x5973c43 -> pad 0x5973c48 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5973c79..0x5973c7e -> pad 0x5973ca1 cleanup
// eh: try 0x5973ca4..0x5973cae -> pad 0x5973cb6 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5973570: cmp byte ptr [rip + 0x1bcf30f], 0
// asm:   0x5973577: je 0x5973c09
// asm:   0x59738d1: jmp 0x5973954
// asm:   0x597390b: jmp 0x597392b
// asm:   0x5973b39: jmp 0x5973b5b
// asm:   0x5973c48: jmp 0x5973c5a
// asm:   0x5973c4a: jmp 0x5973c5a
// asm:   0x5973c4c: jmp 0x5973c5a
// asm:   0x5973c4e: jmp 0x5973c5a
// asm:   0x5973c50: jmp 0x5973c5a
// asm:   0x5973c52: jmp 0x5973c5a
// asm:   0x5973c54: jmp 0x5973c5a
// asm:   0x5973c56: jmp 0x5973c5a
// asm:   0x5973c58: jmp 0x5973c5a
// asm:   0x5973c5a: mov rbx, rax
// asm:   0x5973c5d: cmp edx, 1
// asm:   0x5973c60: lea rbp, [rip + 0x1902549]  ; TypeInfo_Map_BuiltinLevels
// asm:   0x5973c67: jne 0x5973ca4
// asm:   0x5973c69: mov rdi, rbx
// asm:   0x5973c6c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5973c71: mov rbx, qword ptr [rax]
// asm:   0x5973c74: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5973c79: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5973c7e: lea rax, [rip + 0x191ae73]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5973c85: mov rsi, qword ptr [rax]
// asm:   0x5973c88: mov rdi, rsp
// asm:   0x5973c8b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5973c90: test rbx, rbx
// asm:   0x5973c93: je 0x5973981
// asm:   0x5973c99: mov rdi, rbx
// asm:   0x5973c9c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5973ca1: mov rbx, rax
// asm:   0x5973ca4: lea rdi, [rsp + 0x18]
// asm:   0x5973ca9: call 0x2fd3d30  ; il2cpp_runtime_helper_02fd3d30()
// asm:   0x5973cae: mov rdi, rbx
// asm:   0x5973cb1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5973cb6: mov rdi, rax
// asm:   0x5973cb9: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Map_BuiltinLevels__GetSandboxGameModes
          (System_String_o *category,System_String_o *mapName,bool hasMapLogic,int32_t *recommendedModeCount,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_String_array *pSVar4;
  undefined8 uVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  bool bVar7;
  System_String_array *pSVar8;
  System_Func_string__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar9;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  ulong uVar12;
  MethodInfo *pMVar13;
  ulong uVar14;
  Map_BuiltinLevels_c *method_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 local_d8 [32];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  System_String_o *local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppObject *local_a0;
  int32_t iStack_98;
  undefined4 uStack_94;
  System_Collections_Generic_List_T__o *local_90;
  int32_t iStack_88;
  int32_t iStack_84;
  SimpleJSONFixed_JSONNode_o *local_80;
  System_Collections_Generic_List_T__o *local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  System_String_o *local_68;
  Il2CppObject *pIStack_60;
  Il2CppObject *local_58;
  undefined8 uStack_50;
  System_Collections_Generic_List_T__o *local_48;
  undefined8 uStack_40;
  SimpleJSONFixed_JSONNode_o *local_38;
  
  pMVar13 = (MethodInfo *)recommendedModeCount;
  if (Il2CppMethodInitialized_075459b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
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
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_075459b8 = '\x01';
  }
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  local_58 = (Il2CppObject *)0x0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  local_68 = (System_String_o *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_d8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8._16_8_ = (System_String_o *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar8 = Map_BuiltinLevels__GetGameModes(category,mapName,hasMapLogic,pMVar13);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin,(MethodInfo_4F19300 *)0x0);
  pSVar9 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar9 = System_Linq_Enumerable__Distinct_object__34e8be0
                     (pSVar9,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  collection = System_Linq_Enumerable__ToList_object_
                         (pSVar9,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if (collection != (System_Collections_Generic_List_TSource__o *)0x0) {
    *recommendedModeCount = (collection->fields)._size;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar11 = TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_01->fields)._items;
      if (pSVar8 != (System_String_array *)0x0) {
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          pSVar8->m_Items[(int)uVar3] = pSVar11;
          Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar11,
                     (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
        }
        pSVar10 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
        if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar10,"GameModes",(pSVar10->klass->vtable)._7_get_Item.method),
           pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          (*(pSVar10->klass->vtable)._32_unknown.methodPtr)
                    (local_d8 + 0x18,pSVar10,(pSVar10->klass->vtable)._32_unknown.method);
          local_38 = local_80;
          local_48 = local_90;
          uStack_40._0_4_ = iStack_88;
          uStack_40._4_4_ = iStack_84;
          local_58 = local_a0;
          uStack_50._0_4_ = iStack_98;
          uStack_50._4_4_ = uStack_94;
          local_68 = local_b0;
          pIStack_60 = pIStack_a8;
          local_78 = (System_Collections_Generic_List_T__o *)local_d8._24_8_;
          pSStack_70 = pSStack_b8;
          bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if (bVar7) {
            do {
              aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
              if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar10,"Name",
                                       (pSVar10->klass->vtable)._7_get_Item.method),
                 pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05973c39;
              pSVar11 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
              pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_01->fields)._items;
              if (pSVar8 == (System_String_array *)0x0) goto label_05973c39;
              uVar3 = (__this_01->fields)._size;
              if (uVar3 < (uint)pSVar8->max_length) {
                (__this_01->fields)._size = uVar3 + 1;
                pSVar8->m_Items[(int)uVar3] = pSVar11;
                Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar11,
                           (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
              }
              bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
            } while (bVar7);
          }
          pSVar11 = "None";
          pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_01->fields)._items;
          if (pSVar8 != (System_String_array *)0x0) {
            uVar3 = (__this_01->fields)._size;
            if (uVar3 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar3 + 1;
              pSVar8->m_Items[(int)uVar3] = pSVar11;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar11,
                         (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
            }
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)(local_d8 + 0x18),
                       (System_Collections_Generic_List_object__o *)__this_01,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            local_d8._16_8_ = local_b0;
            local_d8._0_8_ = local_d8._24_8_;
            local_d8._8_8_ = pSStack_b8;
            local_d8._24_8_ = (System_Collections_Generic_List_T__o *)0x0;
            pSStack_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_d8;
            pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_d8;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
              while (pSStack_b8 = pSVar6,
                    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                                       (MethodInfo_4C45C50 *)
                                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
                    uVar5 = local_d8._16_8_, bVar7) {
                if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
                }
                if (Il2CppMethodInitialized_07542886 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
                  Il2CppMethodInitialized_07542886 = '\x01';
                  uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
                }
                else {
                  uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
                }
                if (uVar2 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
                }
                bVar7 = System_Linq_Enumerable__Contains_object__34e6650
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)0x0,
                                   (Il2CppObject *)uVar5,
                                   (System_Collections_Generic_IEqualityComparer_TSource__o *)
                                   TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                                   (MethodInfo_34E6650 *)
                                   MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
                pSVar6 = pSStack_b8;
                if (!bVar7) {
label_05973c3e:
                  ThrowNullReferenceException();
                }
              }
            }
            else {
              while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                                        (MethodInfo_4C45C50 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext)
                    , uVar5 = local_d8._16_8_, bVar7) {
                if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
                }
                if (Il2CppMethodInitialized_07542886 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
                  Il2CppMethodInitialized_07542886 = '\x01';
                  uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
                }
                else {
                  uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
                }
                if (uVar2 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
                }
                bVar7 = System_Linq_Enumerable__Contains_object__34e6650
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                                   (Il2CppObject *)uVar5,
                                   (System_Collections_Generic_IEqualityComparer_TSource__o *)
                                   TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                                   (MethodInfo_34E6650 *)
                                   MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
                pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (!bVar7) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar8 = (__this_00->fields)._items;
                  if (pSVar8 == (System_String_array *)0x0) goto label_05973c3e;
                  uVar3 = (__this_00->fields)._size;
                  if (uVar3 < (uint)pSVar8->max_length) {
                    (__this_00->fields)._size = uVar3 + 1;
                    pSVar8->m_Items[(int)uVar3] = (System_String_o *)uVar5;
                    Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)uVar5,
                               (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            method_00 = TypeInfo_Map_BuiltinLevels;
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            pSVar8 = Map_BuiltinLevels__GetCustomModes((MethodInfo *)method_00);
            if (pSVar8 != (System_String_array *)0x0) {
              if (0 < (int)pSVar8->max_length) {
                uVar12 = pSVar8->max_length & 0xffffffff;
                uVar14 = 0;
                do {
                  if (uVar12 <= uVar14) {
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar11 = pSVar8->m_Items[uVar14];
                  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
                    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05973ab2;
label_05973a1b:
                    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
                  }
                  else {
                    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05973a1b;
label_05973ab2:
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
                    Il2CppMethodInitialized_07542886 = '\x01';
                    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
                  }
                  if (uVar2 == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
                  }
                  bVar7 = System_Linq_Enumerable__Contains_object__34e6650
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                                     (Il2CppObject *)pSVar11,
                                     (System_Collections_Generic_IEqualityComparer_TSource__o *)
                                     TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                                     (MethodInfo_34E6650 *)
                                     MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
                  pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
                  if (!bVar7) {
                    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05973c39;
                    piVar1 = &(__this_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar4 = (__this_00->fields)._items;
                    if (pSVar4 == (System_String_array *)0x0) goto label_05973c39;
                    uVar3 = (__this_00->fields)._size;
                    if (uVar3 < (uint)pSVar4->max_length) {
                      (__this_00->fields)._size = uVar3 + 1;
                      pSVar4->m_Items[(int)uVar3] = pSVar11;
                      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 (Il2CppObject *)pSVar11,
                                 (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
                    }
                  }
                  uVar14 = uVar14 + 1;
                  uVar3 = (uint)pSVar8->max_length;
                  uVar12 = (ulong)uVar3;
                } while ((long)uVar14 < (long)(int)uVar3);
              }
              if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                pSVar8 = (System_String_array *)
                         System_Collections_Generic_List_object___ToArray
                                   ((System_Collections_Generic_List_object__o *)__this_00,
                                    (MethodInfo_395F5A0 *)
                                    MethodInfo_System_Collections_Generic_List_string_ToArray);
                return pSVar8;
              }
            }
          }
        }
      }
    }
  }
label_05973c39:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$LoadSandboxMiscSettings
// il2cpp: void Map_BuiltinLevels__LoadSandboxMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, Settings_InGameMiscSettings_o* settings, const MethodInfo* method);
// 0x5973cc0
// eh: try 0x5973e6a..0x59741cb -> pad 0x59741f5 (+21 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x597420d..0x5974212 -> pad 0x5974235 cleanup
// eh: try 0x5974238..0x5974242 -> pad 0x597424a catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5973e4f: mov r15, rsp
// asm:   0x5973e52: nop word ptr cs:[rax + rax]
// asm:   0x59741cb: jmp 0x59741f5
// asm:   0x59741cd: jmp 0x59741f5
// asm:   0x59741cf: jmp 0x59741f5
// asm:   0x59741d1: jmp 0x59741f5
// asm:   0x59741d3: jmp 0x59741f5
// asm:   0x59741d5: jmp 0x59741f5
// asm:   0x59741d7: jmp 0x59741f5
// asm:   0x59741d9: jmp 0x59741f5
// asm:   0x59741db: jmp 0x59741f5
// asm:   0x59741dd: jmp 0x59741f5
// asm:   0x59741df: jmp 0x59741f5
// asm:   0x59741e1: jmp 0x59741f5
// asm:   0x59741e3: jmp 0x59741f5
// asm:   0x59741e5: jmp 0x59741f5
// asm:   0x59741e7: jmp 0x59741f5
// asm:   0x59741e9: jmp 0x59741f5
// asm:   0x59741eb: jmp 0x59741f5
// asm:   0x59741ed: jmp 0x59741f5
// asm:   0x59741ef: jmp 0x59741f5
// asm:   0x59741f1: jmp 0x59741f5
// asm:   0x59741f3: jmp 0x59741f5
// asm:   0x59741f5: mov rbx, rax
// asm:   0x59741f8: cmp edx, 1
// asm:   0x59741fb: jne 0x5974238
// asm:   0x59741fd: mov rdi, rbx
// asm:   0x5974200: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5974205: mov rbx, qword ptr [rax]
// asm:   0x5974208: mov qword ptr [rsp + 0x20], rbx
// asm:   0x597420d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5974212: lea rax, [rip + 0x191be0f]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_Dispose
// asm:   0x5974219: mov rsi, qword ptr [rax]
// asm:   0x597421c: mov rdi, rsp
// asm:   0x597421f: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5974224: test rbx, rbx
// asm:   0x5974227: je 0x5974155
// asm:   0x597422d: mov rdi, rbx
// asm:   0x5974230: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5974235: mov rbx, rax
// asm:   0x5974238: lea rdi, [rsp + 0x20]
// asm:   0x597423d: call 0x2fd3d60  ; il2cpp_runtime_helper_02fd3d60()
// asm:   0x5974242: mov rdi, rbx
// asm:   0x5974245: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x597424a: mov rdi, rax
// asm:   0x597424d: call 0x2ab61e0  ; __clang_call_terminate()

void Map_BuiltinLevels__LoadSandboxMiscSettings
               (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,
               Settings_InGameMiscSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass **ppIVar4;
  Il2CppObject *key;
  bool bVar5;
  int32_t value;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  Settings_TypedSetting_T__o *__this_01;
  System_String_o *value_00;
  Settings_InGameMiscSettings_o *method_00;
  float value_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  method_00 = settings;
  if (Il2CppMethodInitialized_075459b9 == '\0') {
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
    Il2CppMethodInitialized_075459b9 = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  __this = Map_BuiltinLevels__GetSandboxMiscSettings(category,mapName,gameMode,(MethodInfo *)method_00);
  if ((__this == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) ||
     (__this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                             (MethodInfo_4AAD0F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Keys),
     __this_00 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_00,
             (MethodInfo_511A520 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONNode_GetEnumerator);
  local_68.fields._currentKey = local_38;
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48._8_8_ = &local_68;
  if (settings == (Settings_InGameMiscSettings_o *)0x0) {
    local_48._8_8_ = &local_68;
    bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (&local_68,
                       (MethodInfo_4CE7080 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_MoveNext
                      );
    if (bVar5) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,local_68.fields._currentKey
                 ,(MethodInfo_4AAD450 *)
                  MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (&local_68,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_MoveNext
                             ), key = local_68.fields._currentKey, bVar5) {
      pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                          local_68.fields._currentKey,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
      pSVar3 = (settings->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = System_Collections_Specialized_OrderedDictionary__Contains(pSVar3,key,(MethodInfo *)0x0);
      if (bVar5) {
        pSVar3 = (settings->fields).Settings;
        if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (Settings_TypedSetting_T__o *)
                    System_Collections_Specialized_OrderedDictionary__get_Item(pSVar3,key,(MethodInfo *)0x0);
        if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
          bVar1 = (__this_01->klass->_2).typeHierarchyDepth;
          bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             (ppIVar4 = (__this_01->klass->_2).typeHierarchy,
             ppIVar4[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
          bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) || (ppIVar4[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting))
          {
            bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
            if ((bVar1 < bVar2) || (ppIVar4[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
            {
              bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
              if ((bVar1 < bVar2) ||
                 (ppIVar4[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
                bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                if ((bVar2 <= bVar1) &&
                   (ppIVar4[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                  if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  value_00 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                                       (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
                  bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                  if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                    il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                  }
                  Settings_TypedSetting_object___set_Value
                            (__this_01,(Il2CppObject *)value_00,
                             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
              }
              else {
                if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                  ThrowNullReferenceException();
                }
                value_01 = (*(pSVar6->klass->vtable)._37_get_AsFloat.methodPtr)
                                     (pSVar6,(pSVar6->klass->vtable)._37_get_AsFloat.method);
                bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
                if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                }
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)__this_01,value_01,
                           (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              }
            }
            else {
              if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                ThrowNullReferenceException();
              }
              value = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                                (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
              bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
              if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_01);
              }
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)__this_01,value,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            }
          }
          else {
            if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar5 = (*(pSVar6->klass->vtable)._39_get_AsBool.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._39_get_AsBool.method);
            bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01);
            }
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)__this_01,bVar5,
                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          }
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (&local_68,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONNode_Dispose
            );
  return;
}


// Map.BuiltinLevels$$GetTxtFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetTxtFiles (System_String_o* path, const MethodInfo* method);
// 0x5970940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59709fe: jmp 0x5970a35

System_String_array * Map_BuiltinLevels__GetTxtFiles(System_String_o *path,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_String_array *pSVar2;
  Map_BuiltinLevels___c_StaticFields *pMVar3;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (Il2CppMethodInitialized_075459ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_c_GetTxtFiles_b__52_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"*.txt");
    Il2CppMethodInitialized_075459ba = '\x01';
  }
  bVar1 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_IO_Directory__GetFiles_5477030(path,"*.txt",0,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
      pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      __this = pMVar3->__9__52_0;
    }
    else {
      pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      __this = pMVar3->__9__52_0;
    }
    if (__this == (System_Func_string__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
        pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      }
      object = (Il2CppObject *)pMVar3->__9;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this,object,
                 (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetTxtFiles_b__52_0,(MethodInfo_4F19B50 *)0x0);
      pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      pMVar3->__9__52_0 = __this;
      Il2CppCodeGenWriteBarrier(&pMVar3->__9__52_0);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (System_Func_TSource__TResult__o *)__this,
                        (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
    pSVar2 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    return pSVar2;
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  return pSVar2;
}


// Map.BuiltinLevels$$GetClFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetClFiles (System_String_o* path, const MethodInfo* method);
// 0x5971400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59714be: jmp 0x59714f5

System_String_array * Map_BuiltinLevels__GetClFiles(System_String_o *path,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_String_array *pSVar2;
  Map_BuiltinLevels___c_StaticFields *pMVar3;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (Il2CppMethodInitialized_075459bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_c_GetClFiles_b__53_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels_c);
    il2cpp_codegen_initialize_runtime_metadata(&"*.cl");
    Il2CppMethodInitialized_075459bb = '\x01';
  }
  bVar1 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_IO_Directory__GetFiles_5477030(path,"*.cl",0,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinLevels_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
      pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      __this = pMVar3->__9__53_0;
    }
    else {
      pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      __this = pMVar3->__9__53_0;
    }
    if (__this == (System_Func_string__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels_c);
        pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      }
      object = (Il2CppObject *)pMVar3->__9;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this,object,
                 (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetClFiles_b__53_0,(MethodInfo_4F19B50 *)0x0);
      pMVar3 = TypeInfo_Map_BuiltinLevels_c->static_fields;
      pMVar3->__9__53_0 = __this;
      Il2CppCodeGenWriteBarrier(&pMVar3->__9__53_0);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (System_Func_TSource__TResult__o *)__this,
                        (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
    pSVar2 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    return pSVar2;
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  return pSVar2;
}


// Map.BuiltinLevels$$GetCustomModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomModes (const MethodInfo* method);
// 0x5972ea0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59731fb: mov r13, r15
// asm:   0x59731fe: add r13, 0x18

System_String_array * Map_BuiltinLevels__GetCustomModes(MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array *pSVar2;
  bool bVar3;
  uint uVar4;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_String_array *pSVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  long lVar9;
  uint uVar10;
  MethodInfo *pMVar11;
  il2cpp_array_size_t *piVar12;
  
  if (Il2CppMethodInitialized_075459bc == '\0') {
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
    Il2CppMethodInitialized_075459bc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  pMVar11 = MethodInfo_System_Collections_Generic_HashSet_string_ctor;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar5 = Map_BuiltinLevels__GetClFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,pMVar11);
  pSVar6 = Map_BuiltinLevels__GetTxtFiles
                     (TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,pMVar11);
  if (pSVar5 == (System_String_array *)0x0) goto label_0597336d;
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (int)pSVar5->max_length) {
      pSVar7 = pSVar5->m_Items[0];
      if (pSVar7 == (System_String_o *)0x0) goto label_0597336d;
      ppSVar8 = &".cl";
      goto label_059732d1;
    }
label_059730dc:
    if (pSVar6 == (System_String_array *)0x0) goto label_0597336d;
    piVar12 = &pSVar6->max_length;
    if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_05973202;
    uVar4 = (uint)*piVar12;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      if ((int)uVar4 < 1) goto label_0597336d;
      lVar9 = 0;
      do {
        if (uVar4 <= (uint)lVar9) goto label_059732b8;
        if (pSVar6->m_Items[lVar9] == (System_String_o *)0x0) goto label_0597336d;
        pSVar7 = System_String__Replace_5304550
                           (pSVar6->m_Items[lVar9],".txt","",
                            (MethodInfo *)0x0);
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar7,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar3) goto label_0597336d;
        uVar4 = (uint)*piVar12;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar4);
    }
    else if (0 < (int)uVar4) {
      uVar10 = 0;
      do {
        if (uVar4 <= uVar10) {
label_059732b8:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar6->m_Items[(int)uVar10] == (System_String_o *)0x0) goto label_0597336d;
        pSVar7 = System_String__Replace_5304550
                           (pSVar6->m_Items[(int)uVar10],".txt","",
                            (MethodInfo *)0x0);
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar7,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (!bVar3) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto label_0597336d;
          uVar4 = (__this->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar7,
                       (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar7,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        }
        uVar10 = uVar10 + 1;
        uVar4 = (uint)*piVar12;
      } while ((int)uVar10 < (int)uVar4);
    }
  }
  else {
    uVar4 = (uint)pSVar5->max_length;
    if (__this_00 != (System_Collections_Generic_HashSet_string__o *)0x0) {
      if (0 < (int)uVar4) {
        uVar10 = 0;
        do {
          if (uVar4 <= uVar10) goto label_059732b8;
          if (pSVar5->m_Items[(int)uVar10] == (System_String_o *)0x0) goto label_0597336d;
          pSVar7 = System_String__Replace_5304550
                             (pSVar5->m_Items[(int)uVar10],".cl","",
                              (MethodInfo *)0x0);
          pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this->fields)._items;
          if (pSVar2 == (System_String_array *)0x0) goto label_0597336d;
          uVar4 = (__this->fields)._size;
          if (uVar4 < (uint)pSVar2->max_length) {
            (__this->fields)._size = uVar4 + 1;
            pSVar2->m_Items[(int)uVar4] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar7,
                       (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar7,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          uVar10 = uVar10 + 1;
          uVar4 = (uint)pSVar5->max_length;
        } while ((int)uVar10 < (int)uVar4);
      }
      goto label_059730dc;
    }
    if (0 < (int)uVar4) {
      if (pSVar5->m_Items[0] != (System_String_o *)0x0) {
        pSVar7 = System_String__Replace_5304550
                           (pSVar5->m_Items[0],".cl","",(MethodInfo *)0x0);
        pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar4 = (__this->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar7,
                     (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
        }
      }
      goto label_0597336d;
    }
    if (pSVar6 == (System_String_array *)0x0) goto label_0597336d;
label_05973202:
    if (0 < (int)pSVar6->max_length) {
      pSVar7 = pSVar6->m_Items[0];
      if (pSVar7 != (System_String_o *)0x0) {
        ppSVar8 = &".txt";
label_059732d1:
        System_String__Replace_5304550(pSVar7,*ppSVar8,"",(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      goto label_0597336d;
    }
  }
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar5 = (System_String_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this,
                        (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return pSVar5;
  }
label_0597336d:
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetSandboxMiscSettings
// il2cpp: System_Collections_Generic_Dictionary_string__JSONNode__o* Map_BuiltinLevels__GetSandboxMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, const MethodInfo* method);
// 0x5974260

System_Collections_Generic_Dictionary_string__JSONNode__o *
Map_BuiltinLevels__GetSandboxMiscSettings
          (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar2;
  undefined1 auVar3 [16];
  
  pMVar2 = (MethodInfo *)gameMode;
  if (Il2CppMethodInitialized_075459bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MiscSettings");
    Il2CppMethodInitialized_075459bd = '\x01';
    pMVar2 = extraout_RDX;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    pMVar2 = extraout_RDX_00;
  }
  a = Map_BuiltinLevels__GetMap(category,mapName,pMVar2);
  a_00 = Map_BuiltinLevels__GetGameMode(gameMode,(MethodInfo *)mapName);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (a_00 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05974431;
    bVar1 = (*(a_00->klass->vtable)._28_HasKey.methodPtr)
                      (a_00,"MiscSettings",(a_00->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      auVar3 = (undefined1  [16])
               (*(a_00->klass->vtable)._7_get_Item.methodPtr)
                         (a_00,"MiscSettings",(a_00->klass->vtable)._7_get_Item.method);
      pMVar2 = auVar3._8_8_;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        pMVar2 = extraout_RDX_01;
      }
      Map_BuiltinLevels__MergeSandboxMiscSettings(__this,auVar3._0_8_,pMVar2);
    }
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05974431:
      ThrowNullReferenceException();
    }
    bVar1 = (*(a->klass->vtable)._28_HasKey.methodPtr)
                      (a,"MiscSettings",(a->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      auVar3 = (undefined1  [16])
               (*(a->klass->vtable)._7_get_Item.methodPtr)
                         (a,"MiscSettings",(a->klass->vtable)._7_get_Item.method);
      pMVar2 = auVar3._8_8_;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        pMVar2 = extraout_RDX_02;
      }
      Map_BuiltinLevels__MergeSandboxMiscSettings(__this,auVar3._0_8_,pMVar2);
    }
  }
  return __this;
}


// Map.BuiltinLevels$$GetMap
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetMap (System_String_o* category, System_String_o* mapName, const MethodInfo* method);
// 0x596f830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596fa7e: nop 

SimpleJSONFixed_JSONNode_o *
Map_BuiltinLevels__GetMap(System_String_o *category,System_String_o *mapName,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar4;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_075459be = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if ((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"MapCategories",(pSVar2->klass->vtable)._7_get_Item.method),
     pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
label_0596fb0b:
    ThrowNullReferenceException();
  }
  (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
            (&local_c8,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
  bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
  if (bVar1) {
    do {
      SVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar4,(MethodInfo *)0x0);
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596fb0b;
      pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
      bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)category,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar2,"Maps",(pSVar2->klass->vtable)._7_get_Item.method);
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596fb0b;
        (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                  (&local_78,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        local_118.m_Array.fields._current = local_78.m_Array.fields._current;
        local_118.m_Array.fields._list = local_78.m_Array.fields._list;
        local_118.m_Array.fields._index = local_78.m_Array.fields._index;
        local_118.m_Array.fields._version = local_78.m_Array.fields._version;
        local_118.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
        local_118.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
        local_118.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
        local_118.m_Object.fields._version = local_78.m_Object.fields._version;
        local_118.m_Object.fields._index = local_78.m_Object.fields._index;
        local_118.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
        local_118.type = local_78.type;
        local_118._4_4_ = local_78._4_4_;
        local_118.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
        while (bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                 ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0),
              bVar1) {
          SVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar4,(MethodInfo *)0x0);
          if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0596fb0b;
          pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
          bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)mapName,(MethodInfo *)0x0);
          if (bVar1) {
            return pSVar2;
          }
        }
      }
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    } while (bVar1);
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// Map.BuiltinLevels$$GetCategory
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetCategory (System_String_o* category, const MethodInfo* method);
// 0x5972d20

SimpleJSONFixed_JSONNode_o * Map_BuiltinLevels__GetCategory(System_String_o *category,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"MapCategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_075459bf = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,"MapCategories",(pSVar2->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
      while( true ) {
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if (!bVar1) {
          return (SimpleJSONFixed_JSONNode_o *)0x0;
        }
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        a = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)category,(MethodInfo *)0x0);
        if (bVar1) {
          return pSVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$GetGameMode
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetGameMode (System_String_o* gameMode, const MethodInfo* method);
// 0x5974440

SimpleJSONFixed_JSONNode_o * Map_BuiltinLevels__GetGameMode(System_String_o *gameMode,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_075459c0 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar2 = TypeInfo_Map_BuiltinLevels->static_fields->_info;
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,"GameModes",(pSVar2->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
      while( true ) {
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if (!bVar1) {
          return (SimpleJSONFixed_JSONNode_o *)0x0;
        }
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        a = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)gameMode,(MethodInfo *)0x0);
        if (bVar1) {
          return pSVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.BuiltinLevels$$MergeSandboxMiscSettings
// il2cpp: void Map_BuiltinLevels__MergeSandboxMiscSettings (System_Collections_Generic_Dictionary_string__JSONNode__o* current, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x59745c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59746b9: mov r15, rsp
// asm:   0x59746bc: lea r13, [rip + 0x1917245]  ; MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey
// asm:   0x59746c3: jmp 0x59746f6

void Map_BuiltinLevels__MergeSandboxMiscSettings
               (System_Collections_Generic_Dictionary_string__JSONNode__o *current,
               SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *key;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
    Il2CppMethodInitialized_075459c1 = '\x01';
  }
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  SimpleJSONFixed_JSONNode__get_Keys
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,node,(MethodInfo *)0x0);
  local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
  local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
  local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
  local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
  local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
  local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
  local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
  local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
  local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
  local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
  local_c8.type = local_78.type;
  local_c8._4_4_ = local_78._4_4_;
  local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
  SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,
             (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
  bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
  if (bVar1) {
    if (current == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
      SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
    do {
      key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)current,
                         (Il2CppObject *)key,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ContainsKey);
      value = (Il2CppObject *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,key,(node->klass->vtable)._7_get_Item.method);
      if (bVar1) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)current,(Il2CppObject *)key,
                   value,(MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_set_Item);
      }
      else {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)current,(Il2CppObject *)key,
                   value,(MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
      }
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
    } while (bVar1);
  }
  return;
}


// Map.BuiltinLevels$$.ctor
// il2cpp: void Map_BuiltinLevels___ctor (Map_BuiltinLevels_o* __this, const MethodInfo* method);
// 0x5974770

void Map_BuiltinLevels___ctor(Map_BuiltinLevels_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$.cctor
// il2cpp: void Map_BuiltinLevels___cctor (const MethodInfo* method);
// 0x5974780

void Map_BuiltinLevels___cctor(MethodInfo *method)

{
  Map_BuiltinLevels_StaticFields *pMVar1;
  
  if (Il2CppMethodInitialized_075459c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Map Logic");
    Il2CppMethodInitialized_075459c2 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pMVar1 = TypeInfo_Map_BuiltinLevels->static_fields;
  pMVar1->CustomMapFolderPath = TypeInfo_Utility_FolderPaths->static_fields->CustomMap;
  Il2CppCodeGenWriteBarrier(&pMVar1->CustomMapFolderPath);
  pMVar1 = TypeInfo_Map_BuiltinLevels->static_fields;
  pMVar1->CustomMapAutosaveFolderPath = TypeInfo_Utility_FolderPaths->static_fields->CustomMapAutosave;
  Il2CppCodeGenWriteBarrier(&pMVar1->CustomMapAutosaveFolderPath);
  pMVar1 = TypeInfo_Map_BuiltinLevels->static_fields;
  pMVar1->CustomMapBackupsFolderPath = TypeInfo_Utility_FolderPaths->static_fields->CustomMapBackups;
  Il2CppCodeGenWriteBarrier(&pMVar1->CustomMapBackupsFolderPath);
  pMVar1 = TypeInfo_Map_BuiltinLevels->static_fields;
  pMVar1->CustomLogicFolderPath = TypeInfo_Utility_FolderPaths->static_fields->CustomLogic;
  Il2CppCodeGenWriteBarrier(&pMVar1->CustomLogicFolderPath);
  pMVar1 = TypeInfo_Map_BuiltinLevels->static_fields;
  pMVar1->CustomAddonFolderPath = TypeInfo_Utility_FolderPaths->static_fields->CustomAddon;
  Il2CppCodeGenWriteBarrier(&pMVar1->CustomAddonFolderPath);
  pMVar1 = TypeInfo_Map_BuiltinLevels->static_fields;
  pMVar1->UseMapLogic = "Map Logic";
  Il2CppCodeGenWriteBarrier(&pMVar1->UseMapLogic);
  return;
}


