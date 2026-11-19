// Type: GameProgress.QuestContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestContainer.cs
// --------------------------------

// GameProgress.QuestContainer$$CollectRewards
// il2cpp: void GameProgress_QuestContainer__CollectRewards (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x591f2b0
// eh: try 0x591f384..0x591f45d -> pad 0x591f4b7 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591f482..0x591f487 -> pad 0x591f4a8 cleanup
// eh: try 0x591f4ab..0x591f4b5 -> pad 0x591f50e catch (...) [compiler noexcept guard]
// eh: try 0x591f4cf..0x591f4d4 -> pad 0x591f4f9 cleanup
// eh: try 0x591f4fc..0x591f506 -> pad 0x591f50e catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591f462: jmp 0x591f46a
// asm:   0x591f464: jmp 0x591f46a
// asm:   0x591f466: jmp 0x591f4b7
// asm:   0x591f468: jmp 0x591f4b7
// asm:   0x591f46a: mov r15, rax
// asm:   0x591f46d: cmp edx, 1
// asm:   0x591f470: jne 0x591f4ab
// asm:   0x591f472: mov rdi, r15
// asm:   0x591f475: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591f47a: mov rbx, qword ptr [rax]
// asm:   0x591f47d: mov qword ptr [rsp + 8], rbx
// asm:   0x591f482: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591f487: lea rax, [rip + 0x196f322]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x591f48e: mov rsi, qword ptr [rax]
// asm:   0x591f491: lea rdi, [rsp + 0x20]
// asm:   0x591f496: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x591f49b: test rbx, rbx
// asm:   0x591f49e: je 0x591f445
// asm:   0x591f4a0: mov rdi, rbx
// asm:   0x591f4a3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591f4a8: mov r15, rax
// asm:   0x591f4ab: lea rdi, [rsp + 8]
// asm:   0x591f4b0: call 0x2fd2860  ; il2cpp_runtime_helper_02fd2860()
// asm:   0x591f4b5: jmp 0x591f506
// asm:   0x591f4b7: mov r15, rax
// asm:   0x591f4ba: cmp edx, 1
// asm:   0x591f4bd: jne 0x591f4fc
// asm:   0x591f4bf: mov rdi, r15
// asm:   0x591f4c2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591f4c7: mov r15, qword ptr [rax]
// asm:   0x591f4ca: mov qword ptr [rsp + 8], r15
// asm:   0x591f4cf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591f4d4: lea rax, [rip + 0x196f2d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x591f4db: mov rsi, qword ptr [rax]
// asm:   0x591f4de: lea rdi, [rsp + 0x20]
// asm:   0x591f4e3: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x591f4e8: test r15, r15
// asm:   0x591f4eb: je 0x591f3b9
// asm:   0x591f4f1: mov rdi, r15
// asm:   0x591f4f4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591f4f9: mov r15, rax
// asm:   0x591f4fc: lea rdi, [rsp + 8]
// asm:   0x591f501: call 0x2fd2830  ; il2cpp_runtime_helper_02fd2830()
// asm:   0x591f506: mov rdi, r15
// asm:   0x591f509: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x591f50e: mov rdi, rax
// asm:   0x591f511: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestContainer__CollectRewards(GameProgress_QuestContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  bool bVar3;
  MethodInfo *pMVar4;
  undefined1 local_60 [16];
  GameProgress_QuestItem_o *local_50;
  undefined1 local_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  GameProgress_QuestItem_o *local_38;
  
  if (Il2CppMethodInitialized_07545764 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_QuestItem_get_Value);
    Il2CppMethodInitialized_07545764 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_38 = (GameProgress_QuestItem_o *)0x0;
  pSVar1 = (__this->fields).DailyQuestItems;
  if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    local_38 = local_50;
    local_48 = (undefined1  [8])local_60._0_8_;
    pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
    while( true ) {
      pMVar4 = MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
      if (!bVar3) break;
      if (local_38 == (GameProgress_QuestItem_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameProgress_QuestItem__CollectReward(local_38,pMVar4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    pSVar1 = (__this->fields).WeeklyQuestItems;
    if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,pSVar2,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
      local_38 = local_50;
      local_48 = (undefined1  [8])local_60._0_8_;
      pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
      while( true ) {
        pMVar4 = MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext;
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
          return;
        }
        if (local_38 == (GameProgress_QuestItem_o *)0x0) break;
        GameProgress_QuestItem__CollectReward(local_38,pMVar4);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestContainer$$.ctor
// il2cpp: void GameProgress_QuestContainer___ctor (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x591f650

void GameProgress_QuestContainer___ctor(GameProgress_QuestContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545765 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_QuestItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_QuestItem);
    Il2CppMethodInitialized_07545765 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
  (__this->fields).DailyQuestItems = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DailyQuestItems);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
  (__this->fields).WeeklyQuestItems = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeeklyQuestItems);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


