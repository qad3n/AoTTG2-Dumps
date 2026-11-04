// Type: Characters.CharacterData
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CharacterData.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterData.cs
// --------------------------------

// Characters.CharacterData$$Init
// il2cpp: void Characters_CharacterData__Init (const MethodInfo* method);
// 0x182113f70

void Characters_CharacterData__Init(MethodInfo *method)

{
  Il2CppClass *str0;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar2;
  System_String_o *name;
  System_String_o *pSVar3;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *value_00;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184346b62 == '\0') {
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
    Il2CppMethodInitialized_184346b62 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,4);
  pSVar3 = "Titan";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"Titan";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar3);
      pSVar3 = "Annie";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "Annie";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar3);
        pSVar3 = "Eren";
        if (2 < *(uint *)&pIVar2[1].monitor) {
          pIVar2[3].klass = (Il2CppClass *)"Eren";
          Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,pSVar3);
          pSVar3 = "WallColossal";
          if (3 < *(uint *)&pIVar2[1].monitor) {
            pIVar2[3].monitor = "WallColossal";
            Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor,pSVar3);
            uVar5 = 0;
            while( true ) {
              if (*(int *)&pIVar2[1].monitor <= (int)uVar5) {
                if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                }
                pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
                if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                }
                pSVar3 = ApplicationManagers_ResourceManager__TryLoadText
                                   (pSVar3,"HumanWeaponInfo",(MethodInfo *)0x0);
                pSVar4 = SimpleJSONFixed_JSON__Parse(pSVar3,(MethodInfo *)0x0);
                if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
                }
                TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo = pSVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo,pSVar4);
                return;
              }
              if (*(uint *)&pIVar2[1].monitor <= uVar5) break;
              str0 = (&pIVar2[2].klass)[(int)uVar5];
              if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
              }
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
              pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
              name = System_String__Concat_1969e50
                               ((System_String_o *)str0,"AIInfo",(MethodInfo *)0x0);
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              pSVar3 = ApplicationManagers_ResourceManager__TryLoadText(pSVar3,name,(MethodInfo *)0x0);
              value = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar3,(MethodInfo *)0x0);
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_1821142e2;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar1,(Il2CppObject *)str0,value,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_Add);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_1821142e2;
              __this = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos;
              pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar1,(Il2CppObject *)str0,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
              pSVar3 = System_String__Concat_1969e50
                                 ((System_String_o *)str0,"Keyframes",(MethodInfo *)0x0);
              value_00 = Characters_CharacterData__LoadTitanAttackInfos(pSVar4,pSVar3,(MethodInfo *)0x0);
              if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_1821142e2;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,(Il2CppObject *)str0,(Il2CppObject *)value_00,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_Add
                        );
              uVar5 = uVar5 + 1;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1821142e2:
  ThrowNullReferenceException();
}


// Characters.CharacterData$$LoadTitanAttackInfos
// il2cpp: System_Collections_Generic_Dictionary_string__TitanAttackInfo__o* Characters_CharacterData__LoadTitanAttackInfos (SimpleJSONFixed_JSONNode_o* info, System_String_o* keyframeFile, const MethodInfo* method);
// 0x1821142f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821144ee: nop 
// asm:   0x182114569: mov r8, rsi
// asm:   0x18211456c: jmp 0x1821145b6
// asm:   0x1821145b3: mov r8, r13

System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *
Characters_CharacterData__LoadTitanAttackInfos
          (SimpleJSONFixed_JSONNode_o *info,System_String_o *keyframeFile,MethodInfo *method)

{
  _func_7 *p_Var1;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *__this;
  System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *__this_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar6;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar7;
  MethodInfo *key;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  Characters_TitanAttackInfo_o *__this_01;
  System_Xml_Schema_XmlSchema_o *keyframes;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_78;
  
  if (Il2CppMethodInitialized_184346b63 == '\0') {
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
    Il2CppMethodInitialized_184346b63 = '\x01';
  }
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar4 = ApplicationManagers_ResourceManager__TryLoadText(pSVar4,keyframeFile,(MethodInfo *)0x0);
  pSVar5 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
  if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
    __this = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"AttackInfo");
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_1454140 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_ctor);
    if (__this != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar6 = SimpleJSONFixed_JSONNode__get_Values
                         (&local_78,(SimpleJSONFixed_JSONNode_o *)__this,(MethodInfo *)0x0);
      local_c8.type = (pSVar6->fields).m_Enumerator.fields.type;
      local_c8._4_4_ = *(undefined4 *)&(pSVar6->fields).m_Enumerator.fields.field_0x4;
      local_c8.m_Object.fields._dictionary = (pSVar6->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar2 = &(pSVar6->fields).m_Enumerator;
      local_c8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
      local_c8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
      local_c8.m_Object.fields._current.fields.key =
           (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_c8.m_Object.fields._current.fields.value =
           (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar2 = &(pSVar6->fields).m_Enumerator;
      local_c8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
      local_c8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
      local_c8.m_Array.fields._list = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar2 = &(pSVar6->fields).m_Enumerator;
      local_c8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
      local_c8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
      local_c8.m_Array.fields._current = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,
                          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
      local_118.type = (pSVar7->fields).m_Enumerator.fields.type;
      local_118._4_4_ = *(undefined4 *)&(pSVar7->fields).m_Enumerator.fields.field_0x4;
      local_118.m_Object.fields._dictionary = (pSVar7->fields).m_Enumerator.fields.m_Object.fields._dictionary
      ;
      pSVar2 = &(pSVar7->fields).m_Enumerator;
      local_118.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
      local_118.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
      local_118.m_Object.fields._current.fields.key =
           (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_118.m_Object.fields._current.fields.value =
           (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar2 = &(pSVar7->fields).m_Enumerator;
      local_118.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_118.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
      local_118.m_Array.fields._list = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar2 = &(pSVar7->fields).m_Enumerator;
      local_118.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
      local_118.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
      local_118.m_Array.fields._current = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._current;
      bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if (bVar3) {
        do {
          key = (MethodInfo *)
                SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182114605;
          bVar3 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)(pSVar5,key);
          p_Var1 = (__this->klass->vtable)._7_get_IdAttribute.methodPtr;
          if (bVar3) {
            pSVar8 = (*p_Var1)(__this,key);
            keyframes = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,key);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanAttackInfo);
            Characters_TitanAttackInfo___ctor
                      (__this_01,(SimpleJSONFixed_JSONNode_o *)pSVar8,(SimpleJSONFixed_JSONNode_o *)keyframes,
                       (MethodInfo *)0x0);
          }
          else {
            pSVar8 = (*p_Var1)(__this,key);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanAttackInfo);
            Characters_TitanAttackInfo___ctor
                      (__this_01,(SimpleJSONFixed_JSONNode_o *)pSVar8,(SimpleJSONFixed_JSONNode_o *)0x0,
                       (MethodInfo *)0x0);
          }
          if (__this_00 == (System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *)0x0)
          goto label_182114605;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)key,
                     (Il2CppObject *)__this_01,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_set_Item);
          bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
        } while (bVar3);
      }
      return __this_00;
    }
  }
label_182114605:
  ThrowNullReferenceException();
}


// Characters.CharacterData$$GetTitanAI
// il2cpp: SimpleJSONFixed_JSONNode_o* Characters_CharacterData__GetTitanAI (int32_t difficulty, System_String_o* titanType, const MethodInfo* method);
// 0x1821139c0

SimpleJSONFixed_JSONNode_o *
Characters_CharacterData__GetTitanAI(int32_t difficulty,System_String_o *titanType,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  char cVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Enum_o local_38;
  int32_t local_28;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_184346b64 == '\0') {
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
    Il2CppMethodInitialized_184346b64 = '\x01';
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)"Titan",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"SpawnRates");
      local_38.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
      local_38.monitor = &g_data_ffffffffffffffff;
      local_28 = difficulty;
      pMVar6 = (MethodInfo *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar7 = (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar5,pMVar6);
        bVar2 = System_String__op_Equality(titanType,"Default",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          pMVar6 = (MethodInfo *)
                   Utility_Util__GetRandomFromWeightedNode
                             ((SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
          titanType = (System_String_o *)0x0;
          if (pMVar6 != (MethodInfo *)0x0) {
            if ((Il2CppClass *)pMVar6->methodPointer == g_data_184354e50) {
              titanType = (System_String_o *)pMVar6;
            }
            if ((MethodInfo *)titanType == (MethodInfo *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pMVar6);
            }
          }
        }
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)"Titan",
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
          if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,(MethodInfo *)"Default");
            if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                       (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[26].methodPtr)(pSVar5,((Il2CppClass *)pSVar5->klass)->vtable[26].method);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar1,(Il2CppObject *)"Titan",
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item)
                ;
                if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                  pSVar5 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar8,(MethodInfo *)"DifficultyDefaults");
                  local_38.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
                  local_38.monitor = &g_data_ffffffffffffffff;
                  local_28 = difficulty;
                  pSVar7 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
                  if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                    cVar3 = (**(code **)&((Il2CppClass *)pSVar5->klass)->vtable[28].methodPtr)
                                      (pSVar5,pSVar7,((Il2CppClass *)pSVar5->klass)->vtable[28].method);
                    if (cVar3 != '\0') {
                      local_20.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
                      local_20.monitor = &g_data_ffffffffffffffff;
                      local_10 = difficulty;
                      pMVar6 = (MethodInfo *)System_Enum__ToString(&local_20,(MethodInfo *)0x0);
                      pSVar7 = (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar5,pMVar6);
                      if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
                      }
                      Characters_CharacterData__CopyNode
                                (pSVar4,(SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
                    }
                    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
                    }
                    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                             TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
                    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                         (pSVar1,(Il2CppObject *)"Titan",
                                          (MethodInfo_147A5B0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item
                                         );
                      if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                        pSVar5 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar8,(MethodInfo *)titanType);
                        if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                          pSVar7 = (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)
                                             (pSVar5,(MethodInfo *)"Default");
                          Characters_CharacterData__CopyNode
                                    (pSVar4,(SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
                          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                   TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
                          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                            pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                               (pSVar1,(Il2CppObject *)"Titan",
                                                (MethodInfo_147A5B0 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item
                                               );
                            if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                              pSVar5 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                                 (pSVar8,(MethodInfo *)titanType);
                              local_20.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
                              local_20.monitor = &g_data_ffffffffffffffff;
                              local_10 = difficulty;
                              pSVar7 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
                              if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                                cVar3 = (**(code **)&((Il2CppClass *)pSVar5->klass)->vtable[28].methodPtr)
                                                  (pSVar5,pSVar7,((Il2CppClass *)pSVar5->klass)->vtable[28].method);
                                if (cVar3 == '\0') {
label_182113ee5:
                                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0)
                                  {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                                  }
                                  pMVar6 = (MethodInfo *)
                                           SimpleJSONFixed_JSONNode__op_Implicit
                                                     ("Titan",(MethodInfo *)0x0);
                                  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                    (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                                              (pSVar4,(System_Type_o *)"Type",pMVar6);
                                    return pSVar4;
                                  }
                                  ThrowNullReferenceException();
                                }
                                if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_Characters_CharacterData);
                                }
                                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
                                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                                {
                                  pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                     (pSVar1,(Il2CppObject *)"Titan",
                                                      (MethodInfo_147A5B0 *)
                                                      MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item
                                                     );
                                  if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                    pSVar5 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                                       (pSVar8,(MethodInfo *)titanType);
                                    local_20.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
                                    local_20.monitor = &g_data_ffffffffffffffff;
                                    local_10 = difficulty;
                                    pMVar6 = (MethodInfo *)System_Enum__ToString(&local_20,(MethodInfo *)0x0);
                                    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                                      pSVar7 = (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                         (pSVar5,pMVar6);
                                      Characters_CharacterData__CopyNode
                                                (pSVar4,(SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0
                                                );
                                      goto label_182113ee5;
                                    }
                                  }
                                }
                                ThrowNullReferenceException();
                              }
                            }
                          }
                        }
                      }
                    }
                    ThrowNullReferenceException();
                  }
                }
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.CharacterData$$GetShifterAI
// il2cpp: SimpleJSONFixed_JSONNode_o* Characters_CharacterData__GetShifterAI (int32_t difficulty, System_String_o* name, const MethodInfo* method);
// 0x1821136c0

SimpleJSONFixed_JSONNode_o *
Characters_CharacterData__GetShifterAI(int32_t difficulty,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  MethodInfo *pMVar7;
  System_String_o *s;
  System_Enum_o local_38;
  int32_t local_28;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_184346b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_184346b65 = '\x01';
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)name,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Default");
      if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[26].methodPtr)(pSVar5,((Il2CppClass *)pSVar5->klass)->vtable[26].method);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)name,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
          local_38.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
          local_38.monitor = &g_data_ffffffffffffffff;
          local_28 = difficulty;
          pMVar7 = (MethodInfo *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
          if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            bVar3 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)(pSVar6,pMVar7);
            if (!bVar3) {
label_1821138c9:
              if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
              }
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar1,(Il2CppObject *)name,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item)
                ;
                if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                  pSVar5 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar6,(MethodInfo *)"Type");
                  if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                    pSVar2 = pSVar5->klass;
                    s = (System_String_o *)
                        (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                                  (pSVar5,(UnityEngine_GameObject_o *)
                                          (pSVar2->vtable)._9_SetUnhandledAttributes.method,
                                   (MethodInfo *)pSVar2);
                    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                    }
                    pMVar7 = (MethodInfo *)SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
                    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                      (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                                (pSVar4,(System_Type_o *)"Type",pMVar7);
                      return pSVar4;
                    }
                  }
                }
              }
              ThrowNullReferenceException();
            }
            if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar1,(Il2CppObject *)name,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
              local_20.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
              local_20.monitor = &g_data_ffffffffffffffff;
              local_10 = difficulty;
              pMVar7 = (MethodInfo *)System_Enum__ToString(&local_20,(MethodInfo *)0x0);
              if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                pSVar5 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,pMVar7);
                Characters_CharacterData__CopyNode
                          (pSVar4,(SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
                goto label_1821138c9;
              }
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.CharacterData$$CopyNode
// il2cpp: void Characters_CharacterData__CopyNode (SimpleJSONFixed_JSONNode_o* current, SimpleJSONFixed_JSONNode_o* copy, const MethodInfo* method);
// 0x1821134d0

void Characters_CharacterData__CopyNode
               (SimpleJSONFixed_JSONNode_o *current,SimpleJSONFixed_JSONNode_o *copy,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar3;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar4;
  System_String_o *s;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Type_o *pSVar6;
  MethodInfo *pMVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_a8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_58;
  
  if (Il2CppMethodInitialized_184346b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184346b66 = '\x01';
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
  if (copy != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = SimpleJSONFixed_JSONNode__get_Values(&local_58,copy,(MethodInfo *)0x0);
    local_a8.type = (pSVar3->fields).m_Enumerator.fields.type;
    local_a8._4_4_ = *(undefined4 *)&(pSVar3->fields).m_Enumerator.fields.field_0x4;
    local_a8.m_Object.fields._dictionary = (pSVar3->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar1 = &(pSVar3->fields).m_Enumerator;
    local_a8.m_Object.fields._version = (pSVar1->fields).m_Object.fields._version;
    local_a8.m_Object.fields._index = (pSVar1->fields).m_Object.fields._index;
    local_a8.m_Object.fields._current.fields.key =
         (pSVar3->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_a8.m_Object.fields._current.fields.value =
         *(Il2CppObject **)
          ((longlong)&(pSVar3->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
    pSVar1 = &(pSVar3->fields).m_Enumerator;
    local_a8.m_Object.fields._getEnumeratorRetType = (pSVar1->fields).m_Object.fields._getEnumeratorRetType;
    local_a8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24;
    local_a8.m_Array.fields._list = (pSVar3->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar1 = &(pSVar3->fields).m_Enumerator;
    local_a8.m_Array.fields._index = (pSVar1->fields).m_Array.fields._index;
    local_a8.m_Array.fields._version = (pSVar1->fields).m_Array.fields._version;
    local_a8.m_Array.fields._current = (pSVar3->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_58,
                        (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_a8,(MethodInfo *)0x0);
    local_f8.type = (pSVar4->fields).m_Enumerator.fields.type;
    local_f8._4_4_ = *(undefined4 *)&(pSVar4->fields).m_Enumerator.fields.field_0x4;
    local_f8.m_Object.fields._dictionary = (pSVar4->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar1 = &(pSVar4->fields).m_Enumerator;
    local_f8.m_Object.fields._version = (pSVar1->fields).m_Object.fields._version;
    local_f8.m_Object.fields._index = (pSVar1->fields).m_Object.fields._index;
    local_f8.m_Object.fields._current.fields.key =
         (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_f8.m_Object.fields._current.fields.value =
         *(Il2CppObject **)
          ((longlong)&(pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
    pSVar1 = &(pSVar4->fields).m_Enumerator;
    local_f8.m_Object.fields._getEnumeratorRetType = (pSVar1->fields).m_Object.fields._getEnumeratorRetType;
    local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24;
    local_f8.m_Array.fields._list = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar1 = &(pSVar4->fields).m_Enumerator;
    local_f8.m_Array.fields._index = (pSVar1->fields).m_Array.fields._index;
    local_f8.m_Array.fields._version = (pSVar1->fields).m_Array.fields._version;
    local_f8.m_Array.fields._current = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._current;
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
    if (bVar2) {
      do {
        s = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1821136b7;
        pSVar6 = (System_Type_o *)
                 (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
        pMVar7 = (MethodInfo *)
                 (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
        pSVar8 = (*(copy->klass->vtable)._7_get_Item.methodPtr)(copy,pMVar7);
        if (current == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1821136b7;
        (*(current->klass->vtable)._8_set_Item.methodPtr)(current,pSVar6,(MethodInfo *)pSVar8);
        bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      } while (bVar2);
    }
    return;
  }
label_1821136b7:
  ThrowNullReferenceException();
}


// Characters.CharacterData$$.ctor
// il2cpp: void Characters_CharacterData___ctor (Characters_CharacterData_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_CharacterData___ctor(Characters_CharacterData_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.CharacterData$$.cctor
// il2cpp: void Characters_CharacterData___cctor (const MethodInfo* method);
// 0x182114610

void Characters_CharacterData___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this;
  System_Collections_Generic_Dictionary_string__Dictionary_string__TitanAttackInfo___o *__this_00;
  
  if (Il2CppMethodInitialized_184346b67 == '\0') {
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
    Il2CppMethodInitialized_184346b67 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONNode);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_ctor);
  TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos,__this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_ctor);
  TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos,__this_00);
  return;
}


