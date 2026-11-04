// Type: GameProgress.QuestContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestContainer.cs
// --------------------------------

// GameProgress.QuestContainer$$CollectRewards
// il2cpp: void GameProgress_QuestContainer__CollectRewards (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x181e36ed0
// eh: try 0x181e36f91..0x181e370c1 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e36fce: mov rdx, qword ptr [rip + 0x225ab3b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e36fd5: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e36fda: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e36fdf: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e36fe4: test rcx, rcx
// asm:   0x181e36fe7: jne 0x181e370b5
// asm:   0x181e36fed: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181e37089: mov rdx, qword ptr [rip + 0x225aa80]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e37090: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e37095: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e3709a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e3709f: test rcx, rcx
// asm:   0x181e370a2: jne 0x181e370c1
// asm:   0x181e370b5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e370c1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameProgress_QuestContainer__CollectRewards(GameProgress_QuestContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  bool bVar3;
  undefined1 local_38 [16];
  GameProgress_QuestItem_o *local_28;
  undefined1 local_20 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_18;
  GameProgress_QuestItem_o *local_10;
  
  if (Il2CppMethodInitialized_184344dd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_QuestItem_get_Value);
    Il2CppMethodInitialized_184344dd0 = '\x01';
  }
  local_20 = (undefined1  [8])0x0;
  pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_10 = (GameProgress_QuestItem_o *)0x0;
  pSVar1 = (__this->fields).DailyQuestItems;
  if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
     (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    local_20 = (undefined1  [8])local_38._0_8_;
    pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
    local_10 = local_28;
    local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
      if (!bVar3) break;
      if (local_10 == (GameProgress_QuestItem_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameProgress_QuestItem__CollectReward(local_10,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
               MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    pSVar1 = (__this->fields).WeeklyQuestItems;
    if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
       (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar2,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
      local_20 = (undefined1  [8])local_38._0_8_;
      pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
      local_10 = local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                     MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
          return;
        }
        if (local_10 == (GameProgress_QuestItem_o *)0x0) break;
        GameProgress_QuestItem__CollectReward(local_10,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestContainer$$.ctor
// il2cpp: void GameProgress_QuestContainer___ctor (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x181e370d0

void GameProgress_QuestContainer___ctor(GameProgress_QuestContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344dd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_QuestItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_QuestItem);
    Il2CppMethodInitialized_184344dd1 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
  (__this->fields).DailyQuestItems = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DailyQuestItems,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
  (__this->fields).WeeklyQuestItems = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeeklyQuestItems,pSVar1);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


