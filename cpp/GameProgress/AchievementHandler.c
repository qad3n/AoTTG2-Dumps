// Type: GameProgress.AchievementHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/AchievementHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementHandler.cs
// --------------------------------

// GameProgress.AchievementHandler.<>c$$.cctor
// il2cpp: void GameProgress_AchievementHandler___c___cctor (const MethodInfo* method);
// 0x181e41cb0

void GameProgress_AchievementHandler___c___cctor(MethodInfo *method)

{
  GameProgress_AchievementHandler___c_o *__this;
  
  if (Il2CppMethodInitialized_184344d9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementHandler_c);
    Il2CppMethodInitialized_184344d9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9,__this);
  return;
}


// GameProgress.AchievementHandler.<>c$$.ctor
// il2cpp: void GameProgress_AchievementHandler___c___ctor (GameProgress_AchievementHandler___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameProgress_AchievementHandler___c___ctor(GameProgress_AchievementHandler___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.AchievementHandler.<>c$$<CacheActiveAchievements>b__4_0
// il2cpp: System_String_o* GameProgress_AchievementHandler___c___CacheActiveAchievements_b__4_0 (GameProgress_AchievementHandler___c_o* __this, GameProgress_AchievementItem_o* x, const MethodInfo* method);
// 0x181e3f820

System_String_o *
GameProgress_AchievementHandler___c___CacheActiveAchievements_b__4_0
          (GameProgress_AchievementHandler___c_o *__this,GameProgress_AchievementItem_o *x,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (x != (GameProgress_AchievementItem_o *)0x0) {
    pSVar1 = (*(x->klass->vtable)._14_GetQuestName.methodPtr)(x,(x->klass->vtable)._14_GetQuestName.method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// GameProgress.AchievementHandler$$.ctor
// il2cpp: void GameProgress_AchievementHandler___ctor (GameProgress_AchievementHandler_o* __this, GameProgress_AchievementContainer_o* achievement, const MethodInfo* method);
// 0x181e28ae0

void GameProgress_AchievementHandler___ctor
               (GameProgress_AchievementHandler_o *__this,GameProgress_AchievementContainer_o *achievement,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344d97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    Il2CppMethodInitialized_184344d97 = '\x01';
  }
  if ((TypeInfo_GameProgress_QuestHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
  }
  GameProgress_QuestHandler___ctor
            ((GameProgress_QuestHandler_o *)__this,(GameProgress_QuestContainer_o *)0x0,(MethodInfo *)0x0);
  (__this->fields)._achievement = achievement;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._achievement,achievement);
  GameProgress_AchievementHandler__LoadAchievements(__this,(MethodInfo *)0x0);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.AchievementHandler$$ReloadAchievements
// il2cpp: void GameProgress_AchievementHandler__ReloadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x181e28ac0

void GameProgress_AchievementHandler__ReloadAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  GameProgress_AchievementHandler__LoadAchievements(__this,(MethodInfo *)0x0);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.AchievementHandler$$LoadAchievements
// il2cpp: void GameProgress_AchievementHandler__LoadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x181e28500
// eh: try 0x181e286e0..0x181e28aae -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e286df: nop 
// asm:   0x181e28747: mov rdx, qword ptr [rip + 0x224ae4a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x181e2874e: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e28753: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e28758: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e2875d: test rcx, rcx
// asm:   0x181e28760: jne 0x181e28a7f
// asm:   0x181e28766: mov r15, qword ptr [rsp + 0x90]
// asm:   0x181e2876e: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x181e28776: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x181e28a0d: mov rdx, qword ptr [rip + 0x224ab84]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x181e28a14: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e28a19: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e28a1e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e28a23: test rcx, rcx
// asm:   0x181e28a26: jne 0x181e28aae
// asm:   0x181e28a2c: mov r15, qword ptr [rsp + 0x90]
// asm:   0x181e28a34: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x181e28a7f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e28aae: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
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

void GameProgress_AchievementHandler__LoadAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  Settings_ListSetting_AchievementItem__o *__this_00;
  System_Collections_Generic_Dictionary_string__AchievementItem__o *__this_01;
  Il2CppObject *pIVar6;
  GameProgress_AchievementContainer_o *pGVar7;
  Settings_ListSetting_AchievementItem__o *pSVar8;
  UnityEngine_Object_o *__this_02;
  System_String_o *pSVar9;
  GameProgress_AchievementItem_o *pGVar10;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_184344d98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementContainer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_AchievementItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"AchievementList");
    Il2CppMethodInitialized_184344d98 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)__this_00,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_AchievementItem_ctor);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AchievementItem)
  ;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ctor);
  pGVar7 = (__this->fields)._achievement;
  if (((pGVar7 != (GameProgress_AchievementContainer_o *)0x0) &&
      (pSVar8 = (pGVar7->fields).AchievementItems, pSVar8 != (Settings_ListSetting_AchievementItem__o *)0x0))
     && (pSVar2 = (pSVar8->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    local_40 = (undefined1  [8])local_58._0_8_;
    pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
    local_30 = local_48;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
      pIVar4 = local_30;
      if (!bVar5) break;
      if (local_30 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar6 = (Il2CppObject *)
               (*local_30->klass->vtable[0xe].methodPtr)(local_30,local_30->klass->vtable[0xe].method);
      if (__this_01 == (System_Collections_Generic_Dictionary_string__AchievementItem__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,pIVar6,pIVar4,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_Add);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
               MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementContainer);
    if (Il2CppMethodInitialized_184344d96 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_AchievementItem_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_AchievementItem);
      Il2CppMethodInitialized_184344d96 = '\x01';
    }
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_AchievementItem);
    Settings_ListSetting_object____ctor_182b940
              ((Settings_ListSetting_T__o *)pSVar8,
               (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_AchievementItem_ctor);
    (pGVar7->fields).AchievementItems = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).AchievementItems,pSVar8);
    Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)pGVar7,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar9 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_02 = ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar9,"AchievementList",false,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Object_o *)0x0) {
      bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
      if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_UnityEngine_TextAsset);
      }
      pSVar9 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)__this_02,(MethodInfo *)0x0);
      if (pGVar7 != (GameProgress_AchievementContainer_o *)0x0) {
        (*(pGVar7->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (pGVar7,pSVar9,(pGVar7->klass->vtable)._9_DeserializeFromJsonString.method);
        pSVar8 = (pGVar7->fields).AchievementItems;
        if ((pSVar8 != (Settings_ListSetting_AchievementItem__o *)0x0) &&
           (pSVar2 = (pSVar8->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_58,pSVar2,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
          local_40 = (undefined1  [8])local_58._0_8_;
          pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
          local_30 = local_48;
          local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
          while( true ) {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext)
            ;
            pIVar4 = local_30;
            if (!bVar5) break;
            if (local_30 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar6 = (Il2CppObject *)
                     (*local_30->klass->vtable[0xe].methodPtr)(local_30,local_30->klass->vtable[0xe].method);
            if (__this_01 == (System_Collections_Generic_Dictionary_string__AchievementItem__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,pIVar6,
                               (MethodInfo_1455450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ContainsKey
                              );
            if (bVar5) {
              pIVar6 = (Il2CppObject *)
                       (*pIVar4->klass->vtable[0xe].methodPtr)(pIVar4,pIVar4->klass->vtable[0xe].method);
              pGVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,pIVar6
                                   ,(MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_get_Item
                                  );
              if (pGVar10 == (GameProgress_AchievementItem_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar3 = (pGVar10->fields).Progress;
              if (pSVar3 == (Settings_IntSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              if (pIVar4[6].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pIVar4[6].klass,(pSVar3->fields)._value,
                         (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            }
            if (pIVar4[8].monitor == (Settings_TypedSetting_bool__o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_bool___set_Value
                      (pIVar4[8].monitor,false,
                       (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            if (__this_00 == (Settings_ListSetting_AchievementItem__o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar2 = (__this_00->fields)._value;
            if (pSVar2 == (System_Collections_Generic_List_T__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar2,pIVar4,MethodInfo_System_Collections_Generic_List_AchievementItem_Add);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                     MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
          pGVar7 = (__this->fields)._achievement;
          if ((pGVar7 != (GameProgress_AchievementContainer_o *)0x0) &&
             (pSVar8 = (pGVar7->fields).AchievementItems,
             pSVar8 != (Settings_ListSetting_AchievementItem__o *)0x0)) {
            (*(pSVar8->klass->vtable)._10_Copy.methodPtr)
                      (pSVar8,__this_00,(pSVar8->klass->vtable)._10_Copy.method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.AchievementHandler$$CacheActiveAchievements
// il2cpp: void GameProgress_AchievementHandler__CacheActiveAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x181e27ea0
// eh: try 0x181e280d4..0x181e284e5 -> pad 0x183318100 (+6 call sites) catch Il2CppExceptionWrapper
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e281bc: mov rdx, qword ptr [rip + 0x224b3d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x181e281c3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e281c8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e281cd: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e281d2: test rcx, rcx
// asm:   0x181e281d5: jne 0x181e284bf
// asm:   0x181e281db: xor r15d, r15d
// asm:   0x181e281de: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x181e2837e: nop 
// asm:   0x181e283f2: mov rdx, qword ptr [rip + 0x224b19f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x181e283f9: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e283fe: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e28403: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181e28408: test rcx, rcx
// asm:   0x181e2840b: jne 0x181e284d5
// asm:   0x181e28411: mov rdi, qword ptr [rsp + 0xf8]
// asm:   0x181e28419: xor r15d, r15d
// asm:   0x181e2841c: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x181e28424: test rdi, rdi
// asm:   0x181e28427: je 0x181e28240
// asm:   0x181e2842d: mov rcx, qword ptr [rdi + 0x88]
// asm:   0x181e28434: test rcx, rcx
// asm:   0x181e28437: je 0x181e284da
// asm:   0x181e28476: mov rdx, qword ptr [rip + 0x228eaa3]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_Dispo
// asm:   0x181e2847d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e28482: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e28487: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e2848c: test rcx, rcx
// asm:   0x181e2848f: jne 0x181e284e5
// asm:   0x181e284bf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e284d5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e284e5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318100: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318105: push rbp
// asm:   0x183318106: sub rsp, 0x20
// asm:   0x18331810a: mov rbp, rdx
// asm:   0x18331810d: mov rax, qword ptr [rbp + 0x78]
// asm:   0x183318111: mov rcx, qword ptr [rax]
// asm:   0x183318114: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183318118: movabs rax, 0
// asm:   0x183318122: add rsp, 0x20
// asm:   0x183318126: pop rbp
// asm:   0x183318127: ret 
// asm:   0x183318fb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318fb5: push rbp
// asm:   0x183318fb6: sub rsp, 0x20
// asm:   0x183318fba: mov rbp, rdx
// asm:   0x183318fbd: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318fc4: mov rcx, qword ptr [rax]
// asm:   0x183318fc7: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183318fcb: movabs rax, 0
// asm:   0x183318fd5: add rsp, 0x20
// asm:   0x183318fd9: pop rbp
// asm:   0x183318fda: ret 
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 

void GameProgress_AchievementHandler__CacheActiveAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  GameProgress_AchievementContainer_o *pGVar1;
  Settings_ListSetting_AchievementItem__o *pSVar2;
  System_Collections_Generic_List_T__o *__this_01;
  Settings_StringSetting_o *pSVar3;
  Il2CppObject *object;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_TypedSetting_bool__o *__this_02;
  GameProgress_QuestItem_o *pGVar6;
  bool bVar7;
  System_Collections_Generic_Dictionary_string__List_AchievementItem___o *__this_03;
  System_String_o *str1;
  System_String_o *pSVar8;
  System_Collections_Generic_List_AchievementItem__o *__this_04;
  Il2CppObject *pIVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  System_Func_AchievementItem__string__o *__this_06;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_07;
  undefined1 local_a8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_a0;
  GameProgress_QuestItem_o *local_98;
  undefined1 local_90 [16];
  GameProgress_QuestItem_o *local_80;
  undefined1 local_78 [8];
  uint64_t uStack_70;
  GameProgress_QuestItem_o *local_68;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
  if (Il2CppMethodInitialized_184344d99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_AchievementItem_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_Dispo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_MoveN
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_get_C
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AchievementItem_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_AchievementItem_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_AchievementItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameProgress_AchievementHandler_c_CacheActiveAchievements_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementHandler_c);
    Il2CppMethodInitialized_184344d99 = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_98 = (GameProgress_QuestItem_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  uStack_70 = 0;
  local_68 = (GameProgress_QuestItem_o *)0x0;
  __this_00 = (__this->fields)._activeQuests;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Clear);
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
               (MethodInfo_1454140 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ctor);
    pGVar1 = (__this->fields)._achievement;
    if (((pGVar1 != (GameProgress_AchievementContainer_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).AchievementItems, pSVar2 != (Settings_ListSetting_AchievementItem__o *)0x0)
        ) && (__this_01 = (pSVar2->fields)._value, __this_01 != (System_Collections_Generic_List_T__o *)0x0))
    {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_90,__this_01,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator
                );
      local_a8 = (undefined1  [8])local_90._0_8_;
      pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90._8_8_;
      local_98 = local_80;
      while( true ) {
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
        pGVar6 = local_98;
        if (!bVar7) break;
        if (local_98 == (GameProgress_QuestItem_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = (local_98->fields).Category;
        if (pSVar3 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar8 = (pSVar3->fields)._value;
        str1 = GameProgress_QuestItem__GetConditionsHash(local_98,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_1969e50(pSVar8,str1,(MethodInfo *)0x0);
        if (__this_03 == (System_Collections_Generic_Dictionary_string__List_AchievementItem___o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                           (Il2CppObject *)pSVar8,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ContainsKey
                          );
        if (!bVar7) {
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AchievementItem);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AchievementItem_ctor);
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                     (Il2CppObject *)pSVar8,(Il2CppObject *)__this_04,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_Add);
        }
        pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                            (Il2CppObject *)pSVar8,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Item
                           );
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pIVar9,pGVar6);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
      if (__this_03 != (System_Collections_Generic_Dictionary_string__List_AchievementItem___o *)0x0) {
        __this_05 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                               (MethodInfo_13C6500 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Keys
                              );
        if (__this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_90,__this_05,
                     (MethodInfo_F1E4D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_AchievementItem_GetEnumerator
                    );
          local_78 = (undefined1  [8])local_90._0_8_;
          uStack_70 = local_90._8_8_;
          local_68 = local_80;
label_181e28240:
          do {
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                *)local_78,
                               (MethodInfo_156BDD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_MoveN
                              );
            if (!bVar7) {
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_Dispo
                        );
              return;
            }
            pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                (Il2CppObject *)local_68,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Item
                               );
            if ((TypeInfo_GameProgress_AchievementHandler_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler_c);
            }
            __this_06 = TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9__4_0;
            if (__this_06 == (System_Func_AchievementItem__string__o *)0x0) {
              if ((TypeInfo_GameProgress_AchievementHandler_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler_c);
              }
              object = (Il2CppObject *)TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9;
              __this_06 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_AchievementItem_string);
              System_Func_object__object____ctor
                        ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_06,object,
                         (intptr_t)MethodInfo_GameProgress_AchievementHandler_c_CacheActiveAchievements_b__4_0
                         ,(MethodInfo_16E67D0 *)0x0);
              TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9__4_0 = __this_06;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9__4_0,__this_06);
            }
            source = System_Linq_Enumerable__OrderBy_object__object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar9,
                                (System_Func_TSource__TKey__o *)__this_06,
                                (MethodInfo_6C1360 *)
                                MethodInfo_System_Linq_Enumerable_OrderBy_AchievementItem_string);
            __this_07 = System_Linq_Enumerable__ToList_object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   (MethodInfo_6C9C10 *)
                                   MethodInfo_System_Linq_Enumerable_ToList_AchievementItem);
            if (__this_07 == (System_Collections_Generic_List_TSource__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                       (System_Collections_Generic_List_T__o *)__this_07,
                       (MethodInfo_91F180 *)
                       MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
            local_a8 = (undefined1  [8])local_48._0_8_;
            pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
            local_98 = local_38;
            local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_90._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8;
            do {
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext
                                );
              pGVar6 = local_98;
              if (!bVar7) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                           MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
                goto label_181e28240;
              }
              if (local_98 == (GameProgress_QuestItem_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar4 = (local_98->fields).Progress;
              if (pSVar4 == (Settings_IntSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar5 = (local_98->fields).Amount;
              if (pSVar5 == (Settings_IntSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
            } while ((pSVar5->fields)._value <= (pSVar4->fields)._value);
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                       MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
            __this_02 = (*(uint64_t *)((char *)pGVar6 + 0x88));
            if (__this_02 == (Settings_TypedSetting_bool__o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_bool___set_Value
                      (__this_02,true,(MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            GameProgress_QuestHandler__AddActiveQuest
                      ((GameProgress_QuestHandler_o *)__this,pGVar6,(MethodInfo *)0x0);
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


