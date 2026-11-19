// Type: GameProgress.AchievementContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameProgress/AchievementContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementContainer.cs
// --------------------------------

// GameProgress.AchievementContainer$$GetAchievementCount
// il2cpp: GameProgress_AchievementCount_o* GameProgress_AchievementContainer__GetAchievementCount (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x591a680
// eh: try 0x591a7c4..0x591a9ee -> pad 0x591aa13 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591aa2b..0x591aa30 -> pad 0x591aa53 cleanup
// eh: try 0x591aa56..0x591aa60 -> pad 0x591aa68 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591a855: jmp 0x591a970
// asm:   0x591a8dc: jmp 0x591a970
// asm:   0x591a9f3: jmp 0x591aa13
// asm:   0x591a9f5: jmp 0x591aa13
// asm:   0x591a9f7: jmp 0x591aa13
// asm:   0x591a9f9: jmp 0x591aa13
// asm:   0x591a9fb: jmp 0x591aa13
// asm:   0x591a9fd: jmp 0x591aa13
// asm:   0x591a9ff: jmp 0x591aa13
// asm:   0x591aa01: jmp 0x591aa13
// asm:   0x591aa03: jmp 0x591aa13
// asm:   0x591aa05: jmp 0x591aa13
// asm:   0x591aa07: jmp 0x591aa13
// asm:   0x591aa09: jmp 0x591aa13
// asm:   0x591aa0b: jmp 0x591aa13
// asm:   0x591aa0d: jmp 0x591aa13
// asm:   0x591aa0f: jmp 0x591aa13
// asm:   0x591aa11: jmp 0x591aa13
// asm:   0x591aa13: mov r14, rax
// asm:   0x591aa16: cmp edx, 1
// asm:   0x591aa19: jne 0x591aa56
// asm:   0x591aa1b: mov rdi, r14
// asm:   0x591aa1e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591aa23: mov r14, qword ptr [rax]
// asm:   0x591aa26: mov qword ptr [rsp + 0x20], r14
// asm:   0x591aa2b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591aa30: lea rax, [rip + 0x1972ba9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x591aa37: mov rsi, qword ptr [rax]
// asm:   0x591aa3a: mov rdi, rsp
// asm:   0x591aa3d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x591aa42: test r14, r14
// asm:   0x591aa45: je 0x591a989
// asm:   0x591aa4b: mov rdi, r14
// asm:   0x591aa4e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591aa53: mov r14, rax
// asm:   0x591aa56: lea rdi, [rsp + 0x20]
// asm:   0x591aa5b: call 0x2fd23a0  ; il2cpp_runtime_helper_02fd23a0()
// asm:   0x591aa60: mov rdi, r14
// asm:   0x591aa63: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x591aa68: mov rdi, rax
// asm:   0x591aa6b: call 0x2ab61e0  ; __clang_call_terminate()

GameProgress_AchievementCount_o *
GameProgress_AchievementContainer__GetAchievementCount
          (GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Settings_ListSetting_AchievementItem__o *pSVar8;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar9;
  bool bVar10;
  GameProgress_AchievementCount_o *__this_01;
  GameProgress_AchievementCount_Fields *pGVar11;
  undefined1 local_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *local_68;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  GameProgress_AchievementCount_Fields *local_40;
  GameProgress_AchievementCount_Fields *local_38;
  
  if (Il2CppMethodInitialized_07545725 == '\0') {
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
    Il2CppMethodInitialized_07545725 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  local_68 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementCount);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).AchievementItems;
  if ((pSVar8 != (Settings_ListSetting_AchievementItem__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator)
    ;
    local_68 = local_48;
    local_78 = (undefined1  [8])local_58._0_8_;
    puStack_70 = (undefined1 *)local_58._8_8_;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40 = (GameProgress_AchievementCount_Fields *)&(__this_01->fields).FinishedGold;
    local_38 = (GameProgress_AchievementCount_Fields *)&(__this_01->fields).FinishedSilver;
    local_58._8_8_ = local_78;
label_0591a7c0:
    while( true ) {
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                          (MethodInfo_4C45C50 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
      pIVar9 = local_68;
      if (!bVar10) break;
      if (local_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_68[8].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = System_String__op_Equality
                         (((local_68[8].klass)->_1).byval_arg.data,"Bronze",(MethodInfo *)0x0);
      if (bVar10) {
        if (__this_01 == (GameProgress_AchievementCount_o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_01->fields).TotalBronze;
        *piVar1 = *piVar1 + 1;
        if (Il2CppMethodInitialized_07545777 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
          Il2CppMethodInitialized_07545777 = '\x01';
        }
        if ((pIVar9[6].klass == (Il2CppClass *)0x0) || (pIVar9[4].klass == (Il2CppClass *)0x0)) {
          ThrowNullReferenceException();
        }
        pGVar11 = &__this_01->fields;
        if (*(int *)((long)&((pIVar9[4].klass)->_1).namespaze + 4) <=
            *(int *)((long)&((pIVar9[6].klass)->_1).namespaze + 4)) goto label_0591a970;
      }
      else {
        if (pIVar9[8].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        bVar10 = System_String__op_Equality
                           (((pIVar9[8].klass)->_1).byval_arg.data,"Silver",(MethodInfo *)0x0);
        if (!bVar10) goto label_0591a8f0;
        if (__this_01 == (GameProgress_AchievementCount_o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_01->fields).TotalSilver;
        *piVar1 = *piVar1 + 1;
        if (Il2CppMethodInitialized_07545777 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
          Il2CppMethodInitialized_07545777 = '\x01';
        }
        if ((pIVar9[6].klass == (Il2CppClass *)0x0) || (pIVar9[4].klass == (Il2CppClass *)0x0)) {
          ThrowNullReferenceException();
        }
        pGVar11 = local_38;
        if (*(int *)((long)&((pIVar9[4].klass)->_1).namespaze + 4) <=
            *(int *)((long)&((pIVar9[6].klass)->_1).namespaze + 4)) goto label_0591a970;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    if (__this_01 != (GameProgress_AchievementCount_o *)0x0) {
      uVar2 = (__this_01->fields).FinishedBronze;
      uVar5 = (__this_01->fields).TotalBronze;
      uVar3 = (__this_01->fields).FinishedSilver;
      uVar6 = (__this_01->fields).TotalSilver;
      uVar4 = (__this_01->fields).FinishedGold;
      uVar7 = (__this_01->fields).TotalGold;
      (__this_01->fields).FinishedAll = uVar4 + uVar3 + uVar2;
      (__this_01->fields).TotalAll = uVar7 + uVar6 + uVar5;
      return __this_01;
    }
  }
  ThrowNullReferenceException();
label_0591a8f0:
  if (pIVar9[8].klass == (Il2CppClass *)0x0) {
    ThrowNullReferenceException();
  }
  bVar10 = System_String__op_Equality
                     (((pIVar9[8].klass)->_1).byval_arg.data,"Gold",(MethodInfo *)0x0);
  if (bVar10) {
    if (__this_01 == (GameProgress_AchievementCount_o *)0x0) {
      ThrowNullReferenceException();
    }
    piVar1 = &(__this_01->fields).TotalGold;
    *piVar1 = *piVar1 + 1;
    if (Il2CppMethodInitialized_07545777 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_07545777 = '\x01';
    }
    if ((pIVar9[6].klass == (Il2CppClass *)0x0) || (pIVar9[4].klass == (Il2CppClass *)0x0)) {
      ThrowNullReferenceException();
    }
    pGVar11 = local_40;
    if (*(int *)((long)&((pIVar9[4].klass)->_1).namespaze + 4) <=
        *(int *)((long)&((pIVar9[6].klass)->_1).namespaze + 4)) {
label_0591a970:
      pGVar11->FinishedBronze = pGVar11->FinishedBronze + 1;
    }
  }
  goto label_0591a7c0;
}


// GameProgress.AchievementContainer$$.ctor
// il2cpp: void GameProgress_AchievementContainer___ctor (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x591aad0

void GameProgress_AchievementContainer___ctor(GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_AchievementItem__o *__this_00;
  
  if (Il2CppMethodInitialized_07545726 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_AchievementItem);
    Il2CppMethodInitialized_07545726 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)__this_00,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_AchievementItem_ctor);
  (__this->fields).AchievementItems = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AchievementItems);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


