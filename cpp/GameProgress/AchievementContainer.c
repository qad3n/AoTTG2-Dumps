// Type: GameProgress.AchievementContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/AchievementContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementContainer.cs
// --------------------------------

// GameProgress.AchievementContainer$$GetAchievementCount
// il2cpp: GameProgress_AchievementCount_o* GameProgress_AchievementContainer__GetAchievementCount (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x181e27b50
// eh: try 0x181e27c70..0x181e27e15 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e27d97: mov rdx, qword ptr [rip + 0x224b7fa]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x181e27d9e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e27da3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e27da8: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e27dad: test rcx, rcx
// asm:   0x181e27db0: jne 0x181e27e15
// asm:   0x181e27db2: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181e27e15: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

GameProgress_AchievementCount_o *
GameProgress_AchievementContainer__GetAchievementCount
          (GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ListSetting_AchievementItem__o *pSVar2;
  System_Collections_Generic_List_T__o *__this_00;
  GameProgress_QuestItem_o *__this_01;
  bool bVar3;
  GameProgress_AchievementCount_o *__this_02;
  undefined1 local_40 [16];
  GameProgress_QuestItem_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  GameProgress_QuestItem_o *local_18;
  
  if (Il2CppMethodInitialized_184344d95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_AchievementItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"Gold");
    Il2CppMethodInitialized_184344d95 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (GameProgress_QuestItem_o *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementCount);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).AchievementItems;
  if ((pSVar2 != (Settings_ListSetting_AchievementItem__o *)0x0) &&
     (__this_00 = (pSVar2->fields)._value, __this_00 != (System_Collections_Generic_List_T__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
      __this_01 = local_18;
      if (!bVar3) break;
      if (local_18 == (GameProgress_QuestItem_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((*(uint64_t *)((char *)local_18 + 0x80)) == (GameProgress_QuestItem_c *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_String__op_Equality
                        ((((*(Il2CppClass **)((char *)local_18 + 0x80)))->_1).byval_arg.data,"Bronze",(MethodInfo *)0x0);
      if (bVar3) {
        if (__this_02 == (GameProgress_AchievementCount_o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_02->fields).TotalBronze;
        *piVar1 = *piVar1 + 1;
        bVar3 = GameProgress_QuestItem__Finished(__this_01,(MethodInfo *)0x0);
        if (bVar3) {
          (__this_02->fields).FinishedBronze = (__this_02->fields).FinishedBronze + 1;
        }
      }
      else {
        if ((*(uint64_t *)((char *)__this_01 + 0x80)) == (GameProgress_QuestItem_c *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_String__op_Equality
                          ((((*(Il2CppClass **)((char *)__this_01 + 0x80)))->_1).byval_arg.data,"Silver",(MethodInfo *)0x0);
        if (bVar3) {
          if (__this_02 == (GameProgress_AchievementCount_o *)0x0) {
            ThrowNullReferenceException();
          }
          piVar1 = &(__this_02->fields).TotalSilver;
          *piVar1 = *piVar1 + 1;
          bVar3 = GameProgress_QuestItem__Finished(__this_01,(MethodInfo *)0x0);
          if (bVar3) {
            piVar1 = &(__this_02->fields).FinishedSilver;
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          if ((*(uint64_t *)((char *)__this_01 + 0x80)) == (GameProgress_QuestItem_c *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_String__op_Equality
                            ((((*(Il2CppClass **)((char *)__this_01 + 0x80)))->_1).byval_arg.data,"Gold",(MethodInfo *)0x0
                            );
          if (bVar3) {
            if (__this_02 == (GameProgress_AchievementCount_o *)0x0) {
              ThrowNullReferenceException();
            }
            piVar1 = &(__this_02->fields).TotalGold;
            *piVar1 = *piVar1 + 1;
            bVar3 = GameProgress_QuestItem__Finished(__this_01,(MethodInfo *)0x0);
            if (bVar3) {
              piVar1 = &(__this_02->fields).FinishedGold;
              *piVar1 = *piVar1 + 1;
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    if (__this_02 != (GameProgress_AchievementCount_o *)0x0) {
      (__this_02->fields).TotalAll =
           (__this_02->fields).TotalGold + (__this_02->fields).TotalSilver + (__this_02->fields).TotalBronze;
      (__this_02->fields).FinishedAll =
           (__this_02->fields).FinishedGold + (__this_02->fields).FinishedSilver +
           (__this_02->fields).FinishedBronze;
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.AchievementContainer$$.ctor
// il2cpp: void GameProgress_AchievementContainer___ctor (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x181e27e20

void GameProgress_AchievementContainer___ctor(GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_AchievementItem__o *__this_00;
  
  if (Il2CppMethodInitialized_184344d96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_AchievementItem);
    Il2CppMethodInitialized_184344d96 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)__this_00,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_AchievementItem_ctor);
  (__this->fields).AchievementItems = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AchievementItems,__this_00);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


