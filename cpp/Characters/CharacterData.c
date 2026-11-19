// Type: Characters.CharacterData
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CharacterData.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterData.cs
// --------------------------------

// Characters.CharacterData$$Init
// il2cpp: void Characters_CharacterData__Init (const MethodInfo* method);
// 0x5be1a60

void Characters_CharacterData__Init(MethodInfo *method)

{
  Il2CppClass *str0;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar2;
  ulong uVar3;
  System_String_o *name;
  System_String_o *pSVar4;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *value_00;
  MethodInfo *method_00;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_075475c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Keyframes");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanWeaponInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"AIInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    Il2CppMethodInitialized_075475c4 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,4);
  if (pIVar2 == (Il2CppObject *)0x0) {
label_05be1df5:
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)"Titan";
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = "Annie";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)"Eren";
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
          pIVar2[3].monitor = "WallColossal";
          Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor);
          if (0 < (int)pIVar2[1].monitor) {
            uVar3 = (ulong)pIVar2[1].monitor & 0xffffffff;
            uVar6 = 0;
            do {
              if (uVar3 <= uVar6) goto label_05be1dfa;
              str0 = (&pIVar2[2].klass)[uVar6];
              if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
              }
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
              pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
              name = System_String__Concat_52f0320
                               ((System_String_o *)str0,"AIInfo",(MethodInfo *)0x0);
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              pSVar4 = ApplicationManagers_ResourceManager__TryLoadText(pSVar4,name,(MethodInfo *)0x0);
              value = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05be1df5;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar1,(Il2CppObject *)str0,value,
                         (MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05be1df5;
              __this = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos;
              pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar1,(Il2CppObject *)str0,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
              pSVar4 = System_String__Concat_52f0320
                                 ((System_String_o *)str0,"Keyframes",(MethodInfo *)0x0);
              value_00 = Characters_CharacterData__LoadTitanAttackInfos(pSVar5,pSVar4,method_00);
              if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05be1df5;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,(Il2CppObject *)str0,(Il2CppObject *)value_00,
                         (MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_Add
                        );
              uVar6 = uVar6 + 1;
              uVar3 = (ulong)*(uint *)&pIVar2[1].monitor;
            } while ((long)uVar6 < (long)(int)*(uint *)&pIVar2[1].monitor);
          }
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pSVar4 = ApplicationManagers_ResourceManager__TryLoadText
                             (pSVar4,"HumanWeaponInfo",(MethodInfo *)0x0);
          pSVar5 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
          if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
          }
          TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo = pSVar5;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo);
          return;
        }
      }
    }
  }
label_05be1dfa:
  ThrowIndexOutOfRangeException();
}


// Characters.CharacterData$$LoadTitanAttackInfos
// il2cpp: System_Collections_Generic_Dictionary_string__TitanAttackInfo__o* Characters_CharacterData__LoadTitanAttackInfos (SimpleJSONFixed_JSONNode_o* info, System_String_o* keyframeFile, const MethodInfo* method);
// 0x5be1e00

System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *
Characters_CharacterData__LoadTitanAttackInfos
          (SimpleJSONFixed_JSONNode_o *info,System_String_o *keyframeFile,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *__this;
  System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *__this_00;
  SimpleJSONFixed_JSONNode_o *attackInfo;
  SimpleJSONFixed_JSONNode_o *keyframes;
  Characters_TitanAttackInfo_o *__this_01;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075475c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanAttackInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackInfo");
    Il2CppMethodInitialized_075475c5 = '\x01';
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
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText(pSVar2,keyframeFile,(MethodInfo *)0x0);
  pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
    __this = (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"AttackInfo",(info->klass->vtable)._7_get_Item.method);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (MethodInfo_4AAC8D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_ctor);
    if (__this != (SimpleJSONFixed_JSONNode_o *)0x0) {
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,__this,(MethodInfo *)0x0);
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
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
          ThrowNullReferenceException();
        }
        do {
          pSVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
          bVar1 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar3,pSVar2,(pSVar3->klass->vtable)._28_HasKey.method);
          attackInfo = (*(__this->klass->vtable)._7_get_Item.methodPtr)
                                 (__this,pSVar2,(__this->klass->vtable)._7_get_Item.method);
          if (bVar1) {
            keyframes = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar3,pSVar2,(pSVar3->klass->vtable)._7_get_Item.method);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanAttackInfo);
          }
          else {
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanAttackInfo);
            keyframes = (SimpleJSONFixed_JSONNode_o *)0x0;
          }
          Characters_TitanAttackInfo___ctor(__this_01,attackInfo,keyframes,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *)0x0)
          goto label_05be20f2;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                     (Il2CppObject *)pSVar2,(Il2CppObject *)__this_01,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_set_Item);
          bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
        } while (bVar1);
      }
      return __this_00;
    }
  }
label_05be20f2:
  ThrowNullReferenceException();
}


// Characters.CharacterData$$GetTitanAI
// il2cpp: SimpleJSONFixed_JSONNode_o* Characters_CharacterData__GetTitanAI (int32_t difficulty, System_String_o* titanType, const MethodInfo* method);
// 0x5be2110
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be2159: jmp 0x5be26d4
// asm:   0x5be2438: jmp 0x5be26d4

SimpleJSONFixed_JSONNode_o *
Characters_CharacterData__GetTitanAI(int32_t difficulty,System_String_o *titanType,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  undefined1 auVar6 [16];
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_075475c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"DifficultyDefaults");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnRates");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_075475c6 = '\x01';
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) goto label_05be21f5;
label_05be2145:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  }
  else {
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor != 0) goto label_05be2145;
label_05be21f5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05be26d4;
  pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar1,(Il2CppObject *)"Titan",
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be26d4;
  pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar3,"SpawnRates",(pSVar3->klass->vtable)._7_get_Item.method);
  local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = difficulty;
  pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be26d4;
  pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar3,pSVar4,(pSVar3->klass->vtable)._7_get_Item.method);
  bVar2 = System_String__op_Equality(titanType,"Default",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pSVar4 = (System_String_o *)Utility_Util__GetRandomFromWeightedNode(pSVar3,(MethodInfo *)0x0);
    titanType = (System_String_o *)0x0;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar4->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar4);
      }
      titanType = pSVar4;
    }
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  if (((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
      (pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar1,(Il2CppObject *)"Titan",
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
      pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
     (pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"Default",(pSVar3->klass->vtable)._7_get_Item.method),
     pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05be26d4;
  pSVar3 = (*(pSVar3->klass->vtable)._26_Clone.methodPtr)(pSVar3,(pSVar3->klass->vtable)._26_Clone.method);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)"Titan",
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
     pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05be26d4;
  pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar5,"DifficultyDefaults",(pSVar5->klass->vtable)._7_get_Item.method);
  local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = difficulty;
  pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be26d4;
  bVar2 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                    (pSVar5,pSVar4,(pSVar5->klass->vtable)._28_HasKey.method);
  if (bVar2) {
    local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = difficulty;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    auVar6 = (undefined1  [16])
             (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,pSVar4,(pSVar5->klass->vtable)._7_get_Item.method);
    method_00 = auVar6._8_8_;
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
      method_00 = extraout_RDX;
    }
    Characters_CharacterData__CopyNode(pSVar3,auVar6._0_8_,method_00);
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) goto label_05be24aa;
label_05be2424:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  }
  else {
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor != 0) goto label_05be2424;
label_05be24aa:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  }
  if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
      (pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar1,(Il2CppObject *)"Titan",
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
      pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
     (pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,titanType,(pSVar5->klass->vtable)._7_get_Item.method),
     pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    auVar6 = (undefined1  [16])
             (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,"Default",(pSVar5->klass->vtable)._7_get_Item.method);
    Characters_CharacterData__CopyNode(pSVar3,auVar6._0_8_,auVar6._8_8_);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)"Titan",
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
       pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,titanType,(pSVar5->klass->vtable)._7_get_Item.method);
      local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = difficulty;
      pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        bVar2 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                          (pSVar5,pSVar4,(pSVar5->klass->vtable)._28_HasKey.method);
        if (bVar2) {
          if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
          if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar1,(Il2CppObject *)"Titan",
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
             pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05be26d4;
          pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,titanType,(pSVar5->klass->vtable)._7_get_Item.method);
          local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
          local_48.monitor = (void *)0xffffffffffffffff;
          local_38 = difficulty;
          pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be26d4;
          auVar6 = (undefined1  [16])
                   (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,pSVar4,(pSVar5->klass->vtable)._7_get_Item.method);
          Characters_CharacterData__CopyNode(pSVar3,auVar6._0_8_,auVar6._8_8_);
        }
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit("Titan",(MethodInfo *)0x0);
        if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                    (pSVar3,"Type",pSVar5,(pSVar3->klass->vtable)._8_set_Item.method);
          return pSVar3;
        }
      }
    }
  }
label_05be26d4:
  ThrowNullReferenceException();
}


// Characters.CharacterData$$GetShifterAI
// il2cpp: SimpleJSONFixed_JSONNode_o* Characters_CharacterData__GetShifterAI (int32_t difficulty, System_String_o* name, const MethodInfo* method);
// 0x5be2910
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be2955: jmp 0x5be2c01

SimpleJSONFixed_JSONNode_o *
Characters_CharacterData__GetShifterAI(int32_t difficulty,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_075475c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_075475c7 = '\x01';
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) goto label_05be29bd;
label_05be2941:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  }
  else {
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor != 0) goto label_05be2941;
label_05be29bd:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)name,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    if ((pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Default",(pSVar3->klass->vtable)._7_get_Item.method),
       pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar3 = (*(pSVar3->klass->vtable)._26_Clone.methodPtr)(pSVar3,(pSVar3->klass->vtable)._26_Clone.method)
      ;
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)name,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
        local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
        local_48.monitor = (void *)0xffffffffffffffff;
        local_38 = difficulty;
        pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
        if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          bVar2 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar4,pSVar5,(pSVar4->klass->vtable)._28_HasKey.method);
          if (bVar2) {
            if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05be2c01;
            pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,(Il2CppObject *)name,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
            local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
            local_48.monitor = (void *)0xffffffffffffffff;
            local_38 = difficulty;
            pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
            if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be2c01;
            pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,pSVar5,(pSVar4->klass->vtable)._7_get_Item.method);
            Characters_CharacterData__CopyNode(pSVar3,pSVar4,method_00);
          }
          if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
          if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
              (pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar1,(Il2CppObject *)name,
                                   (MethodInfo_4AAD450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
              pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
             (pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"Type",(pSVar4->klass->vtable)._7_get_Item.method),
             pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
            pSVar5 = (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
            if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                        (pSVar3,"Type",pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
              return pSVar3;
            }
          }
        }
      }
    }
  }
label_05be2c01:
  ThrowNullReferenceException();
}


// Characters.CharacterData$$CopyNode
// il2cpp: void Characters_CharacterData__CopyNode (SimpleJSONFixed_JSONNode_o* current, SimpleJSONFixed_JSONNode_o* copy, const MethodInfo* method);
// 0x5be26f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be27d1: mov r15, rsp
// asm:   0x5be27d4: lea rbp, [rip + 0x16978a5]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5be27db: nop dword ptr [rax + rax]

void Characters_CharacterData__CopyNode
               (SimpleJSONFixed_JSONNode_o *current,SimpleJSONFixed_JSONNode_o *copy,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075475c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075475c8 = '\x01';
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
  if (copy == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05be2905:
    ThrowNullReferenceException();
  }
  SimpleJSONFixed_JSONNode__get_Keys
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,copy,(MethodInfo *)0x0);
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
    if (current == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)(pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        pSVar2 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        (*(copy->klass->vtable)._7_get_Item.methodPtr)(copy,pSVar2,(copy->klass->vtable)._7_get_Item.method);
      }
      goto label_05be2905;
    }
    do {
      pSVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be2905;
      pSVar2 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      pSVar3 = (*(copy->klass->vtable)._7_get_Item.methodPtr)
                         (copy,pSVar4,(copy->klass->vtable)._7_get_Item.method);
      (*(current->klass->vtable)._8_set_Item.methodPtr)
                (current,pSVar2,pSVar3,(current->klass->vtable)._8_set_Item.method);
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
    } while (bVar1);
  }
  return;
}


// Characters.CharacterData$$.ctor
// il2cpp: void Characters_CharacterData___ctor (Characters_CharacterData_o* __this, const MethodInfo* method);
// 0x5be2c10

void Characters_CharacterData___ctor(Characters_CharacterData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.CharacterData$$.cctor
// il2cpp: void Characters_CharacterData___cctor (const MethodInfo* method);
// 0x5be2c20

void Characters_CharacterData___cctor(MethodInfo *method)

{
  Characters_CharacterData_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this;
  System_Collections_Generic_Dictionary_string__Dictionary_string__TitanAttackInfo___o *__this_00;
  
  if (Il2CppMethodInitialized_075475c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo);
    Il2CppMethodInitialized_075475c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
  pCVar1 = TypeInfo_Characters_CharacterData->static_fields;
  pCVar1->TitanAIInfos = __this;
  Il2CppCodeGenWriteBarrier(&pCVar1->TitanAIInfos);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_ctor);
  pCVar1 = TypeInfo_Characters_CharacterData->static_fields;
  pCVar1->TitanAttackInfos = __this_00;
  Il2CppCodeGenWriteBarrier(&pCVar1->TitanAttackInfos);
  return;
}


