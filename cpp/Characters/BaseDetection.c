// Type: Characters.BaseDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/BaseDetection.cs
// --------------------------------

// Characters.BaseDetection$$.ctor
// il2cpp: void Characters_BaseDetection___ctor (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* owner, bool enemiesOnly, bool titansOnly, const MethodInfo* method);
// 0x5be49a0
// eh: try 0x5be4cef..0x5be4da6 -> pad 0x5be4db9 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5be4dd5..0x5be4dda -> pad 0x5be4ee9 cleanup
// eh: try 0x5be4eec..0x5be4ef6 -> pad 0x5be4efe catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be4bd1: lea r14, [r13 + 0x70]
// asm:   0x5be4bd5: jmp 0x5be4be3
// asm:   0x5be4cde: nop 
// asm:   0x5be4d4f: nop 
// asm:   0x5be4db1: jmp 0x5be4db9
// asm:   0x5be4db3: jmp 0x5be4db9
// asm:   0x5be4db5: jmp 0x5be4db9
// asm:   0x5be4db7: jmp 0x5be4db9
// asm:   0x5be4db9: mov rbp, rax
// asm:   0x5be4dbc: cmp edx, 1
// asm:   0x5be4dbf: jne 0x5be4eec
// asm:   0x5be4dc5: mov rdi, rbp
// asm:   0x5be4dc8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be4dcd: mov r15, qword ptr [rax]
// asm:   0x5be4dd0: mov qword ptr [rsp + 0x18], r15
// asm:   0x5be4dd5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be4ee1: mov rdi, r15
// asm:   0x5be4ee4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5be4ee9: mov rbp, rax
// asm:   0x5be4eec: lea rdi, [rsp + 0x18]
// asm:   0x5be4ef1: call 0x2fd8bc0  ; il2cpp_runtime_helper_02fd8bc0()
// asm:   0x5be4ef6: mov rdi, rbp
// asm:   0x5be4ef9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5be4efe: mov rdi, rax
// asm:   0x5be4f01: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BaseDetection___ctor
               (Characters_AIHumanDetection_o *__this,Characters_BaseCharacter_o *owner,bool enemiesOnly,
               bool titansOnly,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  GameManagers_InGameManager_o *pGVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_HashSet_object__o *__this_00;
  GameManagers_InGameManager_c *pGVar6;
  bool bVar7;
  System_Collections_Generic_HashSet_BaseCharacter__o *pSVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  Characters_BaseCharacter_o *character;
  ulong uVar11;
  MethodInfo *method_00;
  long lVar12;
  GameManagers_InGameManager_o **targetAddress;
  float fVar13;
  Il2CppObject *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075475d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseDetection_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075475d5 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  (__this->fields).ClosestEnemyDistance = 3.4028235e+38;
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar8,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._recalculateFast = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._recalculateFast);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar8,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._recalculateMedium = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._recalculateMedium);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar8,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._recalculateSlow = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._recalculateSlow);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar8,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._tempRecalculateFast = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tempRecalculateFast);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar8,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._tempRecalculateMedium = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tempRecalculateMedium);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar8,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._tempRecalculateSlow = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tempRecalculateSlow);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Owner);
  (__this->fields)._enemiesOnly = enemiesOnly;
  (__this->fields)._titansOnly = titansOnly;
  pGVar6 = TypeInfo_GameManagers_InGameManager;
  pGVar3 = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05be4da6:
      il2cpp_codegen_raise_invalid_cast_exception(pGVar3,pGVar6);
    }
    (__this->fields)._inGameManager = pGVar3;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pGVar6)) goto label_05be4da6;
  }
  targetAddress = &(__this->fields)._inGameManager;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((*targetAddress != (GameManagers_InGameManager_o *)0x0) &&
     (pIVar9 = (Il2CppObject *)
               GameManagers_InGameManager__GetAllCharactersEnumerable(*targetAddress,(MethodInfo *)0x0),
     pIVar9 != (Il2CppObject *)0x0)) {
    pIVar4 = pIVar9->klass;
    uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_BaseCharacter__c **)
             ((long)&pIVar5->interfaceType + lVar12) ==
            TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter) {
          pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
          goto label_05be4c71;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,0
                        );
label_05be4c71:
    local_48 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    local_40 = 0;
    local_38 = &local_48;
    do {
      pIVar9 = local_48;
      if (local_48 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_48->klass;
      uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar12) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
            goto label_05be4d13;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05be4d13:
      bVar7 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      pIVar9 = local_48;
      if (!bVar7) {
        if (local_48 == (Il2CppObject *)0x0) goto label_05be4e46;
        pIVar4 = local_48->klass;
        uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar11 == 0) goto label_05be4e1f;
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar12 = 0;
        goto label_05be4e10;
      }
      if (local_48 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_48->klass;
      uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_BaseCharacter__c **)
               ((long)&pIVar5->interfaceType + lVar12) ==
              TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
            pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
            goto label_05be4d83;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_48,(Il2CppClass *)
                                    TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_05be4d83:
      character = (Characters_BaseCharacter_o *)(*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      Characters_BaseDetection__OnCharacterSpawned((Characters_BaseDetection_o *)__this,character,method_00);
    } while( true );
  }
  goto label_05be4edc;
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
label_05be4e10:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
      goto label_05be4e3d;
    }
  }
label_05be4e1f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05be4e3d:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
label_05be4e46:
  if ((*targetAddress != (GameManagers_InGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)((*targetAddress)->fields).Detections,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___Add
              (__this_00,(Il2CppObject *)__this,
               (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseDetection_Add);
    fVar1 = (__this->fields)._currentMediumTime;
    fVar13 = UnityEngine_Random__Range(0.0,0.2,(MethodInfo *)0x0);
    (__this->fields)._currentMediumTime = fVar13 + fVar1;
    fVar1 = (__this->fields)._currentSlowTime;
    fVar13 = UnityEngine_Random__Range(0.0,2.0,(MethodInfo *)0x0);
    (__this->fields)._currentSlowTime = fVar13 + fVar1;
    return;
  }
label_05be4edc:
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$get_RequireValidTarget
// il2cpp: bool Characters_BaseDetection__get_RequireValidTarget (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x5be5060

bool Characters_BaseDetection__get_RequireValidTarget(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  return true;
}


// Characters.BaseDetection$$IsNullOrDead
// il2cpp: bool Characters_BaseDetection__IsNullOrDead (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x5be5070

bool Characters_BaseDetection__IsNullOrDead(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075475d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475d6 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar3 = true;
  if (!bVar2) {
    pCVar1 = (__this->fields).Owner;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields).Dead != false;
  }
  return bVar3;
}


// Characters.BaseDetection$$OnTeamChanged
// il2cpp: void Characters_BaseDetection__OnTeamChanged (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x5be50e0
// eh: try 0x5be526f..0x5be5326 -> pad 0x5be532e (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5be534a..0x5be534f -> pad 0x5be5468 cleanup
// eh: try 0x5be5413..0x5be545b -> pad 0x5be547b (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5be546b..0x5be5475 -> pad 0x5be54ce catch (...) [compiler noexcept guard]
// eh: try 0x5be5493..0x5be5498 -> pad 0x5be54b9 cleanup
// eh: try 0x5be54bc..0x5be54c6 -> pad 0x5be54ce catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be525e: nop 
// asm:   0x5be52ce: nop 
// asm:   0x5be5326: jmp 0x5be532e
// asm:   0x5be5328: jmp 0x5be532e
// asm:   0x5be532a: jmp 0x5be532e
// asm:   0x5be532c: jmp 0x5be532e
// asm:   0x5be532e: mov r14, rax
// asm:   0x5be5331: cmp edx, 1
// asm:   0x5be5334: jne 0x5be546b
// asm:   0x5be533a: mov rdi, r14
// asm:   0x5be533d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be5342: mov r14, qword ptr [rax]
// asm:   0x5be5345: mov qword ptr [rsp + 0x10], r14
// asm:   0x5be534a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be537f: nop 
// asm:   0x5be5460: mov rdi, r14
// asm:   0x5be5463: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5be5468: mov r14, rax
// asm:   0x5be546b: lea rdi, [rsp + 0x10]
// asm:   0x5be5470: call 0x2fd8c50  ; il2cpp_runtime_helper_02fd8c50()
// asm:   0x5be5475: jmp 0x5be54c6
// asm:   0x5be5477: jmp 0x5be547b
// asm:   0x5be5479: jmp 0x5be547b
// asm:   0x5be547b: mov r14, rax
// asm:   0x5be547e: cmp edx, 1
// asm:   0x5be5481: jne 0x5be54bc
// asm:   0x5be5483: mov rdi, r14
// asm:   0x5be5486: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be548b: mov rbx, qword ptr [rax]
// asm:   0x5be548e: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5be5493: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be5498: lea rax, [rip + 0x16a8279]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose
// asm:   0x5be549f: mov rsi, qword ptr [rax]
// asm:   0x5be54a2: lea rdi, [rsp + 0x20]
// asm:   0x5be54a7: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5be54ac: test rbx, rbx
// asm:   0x5be54af: je 0x5be5448
// asm:   0x5be54b1: mov rdi, rbx
// asm:   0x5be54b4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5be54b9: mov r14, rax
// asm:   0x5be54bc: lea rdi, [rsp + 0x10]
// asm:   0x5be54c1: call 0x2fd8ce0  ; il2cpp_runtime_helper_02fd8ce0()
// asm:   0x5be54c6: mov rdi, r14
// asm:   0x5be54c9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5be54ce: mov rdi, rax
// asm:   0x5be54d1: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BaseDetection__OnTeamChanged(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  Characters_BaseCharacter_o *character;
  ulong uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar8;
  Il2CppObject *pIStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_50;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (Il2CppMethodInitialized_075475d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseDetection_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_075475d7 = '\x01';
  }
  pIStack_60 = (Il2CppObject *)0x0;
  SStack_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._inGameManager;
  if ((pGVar1 != (GameManagers_InGameManager_o *)0x0) &&
     (pIVar5 = (Il2CppObject *)
               GameManagers_InGameManager__GetAllCharactersEnumerable(pGVar1,(MethodInfo *)0x0),
     pIVar5 != (Il2CppObject *)0x0)) {
    pIVar2 = pIVar5->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_BaseCharacter__c **)
             ((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_05be51f1;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,0)
    ;
label_05be51f1:
    pIStack_60 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    uStack_58 = 0;
    pSStack_50 = (System_Collections_Generic_HashSet_Enumerator_T__o *)&pIStack_60;
    do {
      pIVar5 = pIStack_60;
      if (pIStack_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIStack_60->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
            goto label_05be5293;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05be5293:
      bVar4 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
      pIVar5 = pIStack_60;
      if (!bVar4) {
        if (pIStack_60 == (Il2CppObject *)0x0) goto label_05be53b6;
        pIVar2 = pIStack_60->klass;
        uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar7 == 0) goto label_05be538f;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar8 = 0;
        goto label_05be5380;
      }
      if (pIStack_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIStack_60->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_BaseCharacter__c **)
               ((long)&pIVar3->interfaceType + lVar8) ==
              TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
            pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
            goto label_05be5303;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_05be5303:
      character = (Characters_BaseCharacter_o *)(*pVVar6->methodPtr)(pIVar5,pVVar6->method);
      Characters_BaseDetection__OnCharacterSpawned(__this,character,method_00);
    } while( true );
  }
  goto label_05be545b;
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
label_05be5380:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
      goto label_05be53ad;
    }
  }
label_05be538f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIStack_60,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05be53ad:
  (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
label_05be53b6:
  pGVar1 = (__this->fields)._inGameManager;
  if ((pGVar1 != (GameManagers_InGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).Detections,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              (&SStack_48,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseDetection_GetEnumerator
              );
    uStack_58 = 0;
    pSStack_50 = &SStack_48;
    while( true ) {
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&SStack_48,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_MoveNext);
      if (!bVar4) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (&SStack_48,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose);
        return;
      }
      if ((Characters_BaseDetection_o *)SStack_48.fields._current == (Characters_BaseDetection_o *)0x0) break;
      Characters_BaseDetection__OnCharacterSpawned
                ((Characters_BaseDetection_o *)SStack_48.fields._current,(__this->fields).Owner,method_01);
    }
    ThrowNullReferenceException();
  }
label_05be545b:
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$OnCharacterSpawned
// il2cpp: void Characters_BaseDetection__OnCharacterSpawned (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5be4f10

void Characters_BaseDetection__OnCharacterSpawned
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *y;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075475d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475d8 = '\x01';
  }
  y = (__this->fields).Owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (character == (Characters_BaseCharacter_o *)0x0) {
label_05be5052:
        ThrowNullReferenceException();
      }
      if ((character->fields).Dead == false) {
        if ((__this->fields)._titansOnly != false) {
          bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
          if ((character->klass->_2).typeHierarchyDepth < bVar1) {
            return;
          }
          if ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BaseTitan) {
            return;
          }
        }
        bVar2 = (*(__this->klass->vtable)._4_get_RequireValidTarget.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_RequireValidTarget.method);
        method_00 = extraout_RDX;
        if ((bVar2) &&
           (bVar2 = (*(character->klass->vtable)._73_ValidTarget.methodPtr)
                              (character,(character->klass->vtable)._73_ValidTarget.method),
           method_00 = extraout_RDX_00, !bVar2)) {
          return;
        }
        bVar2 = Characters_BaseDetection__IsValidTeam(__this,character,method_00);
        if (bVar2) {
          __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._recalculateFast;
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Add
                      (__this_00,(Il2CppObject *)character,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
            return;
          }
          goto label_05be5052;
        }
      }
    }
  }
  return;
}


// Characters.BaseDetection$$IsValidTeam
// il2cpp: bool Characters_BaseDetection__IsValidTeam (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5be54e0

bool Characters_BaseDetection__IsValidTeam
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075475d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_075475d9 = '\x01';
  }
  bVar3 = true;
  if ((__this->fields)._enemiesOnly != false) {
    pCVar1 = (__this->fields).Owner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pCVar1 = (__this->fields).Owner;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar3 = GameManagers_TeamInfo__SameTeam_5858900(character,pCVar1,(MethodInfo *)0x0);
      bVar3 = !bVar3;
    }
  }
  return bVar3;
}


// Characters.BaseDetection$$OnFixedUpdate
// il2cpp: void Characters_BaseDetection__OnFixedUpdate (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x5be5590

void Characters_BaseDetection__OnFixedUpdate(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar1;
  Characters_BaseDetection_o *__this_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o myPosition;
  
  if (Il2CppMethodInitialized_075475da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    Il2CppMethodInitialized_075475da = '\x01';
  }
  fVar3 = (__this->fields)._currentMediumTime;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentMediumTime = fVar2 + fVar3;
  fVar3 = (__this->fields)._currentSlowTime;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentSlowTime = fVar2 + fVar3;
  fVar3 = (*(__this->klass->vtable)._7_GetSpeed.methodPtr)(__this,(__this->klass->vtable)._7_GetSpeed.method);
  pMVar1 = (__this->klass->vtable)._8_GetPosition.method;
  myPosition = (*(__this->klass->vtable)._8_GetPosition.methodPtr)(__this,pMVar1);
  Characters_BaseDetection__RefreshClosestEnemy(__this,myPosition,pMVar1);
  Characters_BaseDetection__Recalculate(__this,(__this->fields)._recalculateFast,myPosition,fVar3,method_00);
  __this_00 = (Characters_BaseDetection_o *)(__this->fields)._recalculateFast;
  if (__this_00 == (Characters_BaseDetection_o *)0x0) {
label_05be571c:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Clear
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
  pMVar1 = method_01;
  if (0.2 < (__this->fields)._currentMediumTime) {
    (__this->fields)._currentMediumTime = 0.0;
    Characters_BaseDetection__Recalculate
              (__this,(__this->fields)._recalculateMedium,myPosition,fVar3,method_01);
    __this_00 = (Characters_BaseDetection_o *)(__this->fields)._recalculateMedium;
    if (__this_00 == (Characters_BaseDetection_o *)0x0) goto label_05be571c;
    System_Collections_Generic_HashSet_object___Clear
              ((System_Collections_Generic_HashSet_object__o *)__this_00,
               (MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    pMVar1 = extraout_RDX;
  }
  if (2.0 < (__this->fields)._currentSlowTime) {
    (__this->fields)._currentSlowTime = 0.0;
    Characters_BaseDetection__Recalculate(__this,(__this->fields)._recalculateSlow,myPosition,fVar3,pMVar1);
    __this_00 = (Characters_BaseDetection_o *)(__this->fields)._recalculateSlow;
    if (__this_00 == (Characters_BaseDetection_o *)0x0) goto label_05be571c;
    System_Collections_Generic_HashSet_object___Clear
              ((System_Collections_Generic_HashSet_object__o *)__this_00,
               (MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
  }
  Characters_BaseDetection__MergeTemp
            (__this_00,(__this->fields)._recalculateFast,(__this->fields)._tempRecalculateFast,in_RCX);
  Characters_BaseDetection__MergeTemp
            (__this_00,(__this->fields)._recalculateMedium,(__this->fields)._tempRecalculateMedium,in_RCX);
  Characters_BaseDetection__MergeTemp
            (__this_00,(__this->fields)._recalculateSlow,(__this->fields)._tempRecalculateSlow,in_RCX);
  return;
}


// Characters.BaseDetection$$RefreshClosestEnemy
// il2cpp: void Characters_BaseDetection__RefreshClosestEnemy (Characters_BaseDetection_o* __this, UnityEngine_Vector3_o myPosition, const MethodInfo* method);
// 0x5be5730

void Characters_BaseDetection__RefreshClosestEnemy
               (Characters_BaseDetection_o *__this,UnityEngine_Vector3_o myPosition,MethodInfo *method)

{
  Characters_BaseCharacter_o **targetAddress;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  float fVar3;
  UnityEngine_Vector3_o UVar5;
  float fVar4;
  float local_28;
  float fStack_24;
  
  fVar4 = myPosition.fields.z;
  fVar3 = fVar4;
  if (Il2CppMethodInitialized_075475db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475db = '\x01';
  }
  pCVar1 = (__this->fields).ClosestEnemy;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).ClosestEnemy;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = *targetAddress;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05be5898:
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).Dead == false) {
      bVar2 = Characters_BaseDetection__IsValidTeam(__this,pCVar1,method_00);
      if (bVar2) {
        pCVar1 = *targetAddress;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05be5898;
        UVar5.fields._0_8_ =
             (*(pCVar1->klass->vtable)._120_GetCenterPosition.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._120_GetCenterPosition.method);
        if (Il2CppMethodInitialized_0753e7b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7b7 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        local_28 = myPosition.fields.x;
        fStack_24 = myPosition.fields.y;
        fStack_24 = fStack_24 - UVar5.fields.y;
        local_28 = local_28 - UVar5.fields.x;
        fVar3 = fStack_24 * fStack_24 + local_28 * local_28 + (fVar4 - fVar3) * (fVar4 - fVar3);
        if (fVar3 < 0.0) {
          fVar3 = sqrtf(fVar3);
        }
        else {
          fVar3 = SQRT(fVar3);
        }
        goto label_05be5881;
      }
    }
  }
  *targetAddress = (Characters_BaseCharacter_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  fVar3 = 3.4028235e+38;
label_05be5881:
  (__this->fields).ClosestEnemyDistance = fVar3;
  return;
}


// Characters.BaseDetection$$MergeTemp
// il2cpp: void Characters_BaseDetection__MergeTemp (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* main, System_Collections_Generic_HashSet_BaseCharacter__o* temp, const MethodInfo* method);
// 0x5be5ca0
// eh: try 0x5be5d84..0x5be5df5 -> pad 0x5be5dfb (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5be5e13..0x5be5e18 -> pad 0x5be5e37 cleanup
// eh: try 0x5be5e3a..0x5be5e44 -> pad 0x5be5e4c catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be5d66: lea r12, [rip + 0x16a796b]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext
// asm:   0x5be5d6d: mov rbx, rsp
// asm:   0x5be5d70: lea r13, [rip + 0x16ab1c1]  ; MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
// asm:   0x5be5d77: nop word ptr [rax + rax]
// asm:   0x5be5df5: jmp 0x5be5dfb
// asm:   0x5be5df7: jmp 0x5be5dfb
// asm:   0x5be5df9: jmp 0x5be5dfb
// asm:   0x5be5dfb: mov rbx, rax
// asm:   0x5be5dfe: cmp edx, 1
// asm:   0x5be5e01: jne 0x5be5e3a
// asm:   0x5be5e03: mov rdi, rbx
// asm:   0x5be5e06: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be5e0b: mov rbx, qword ptr [rax]
// asm:   0x5be5e0e: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5be5e13: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be5e18: lea rax, [rip + 0x16a78b1]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x5be5e1f: mov rsi, qword ptr [rax]
// asm:   0x5be5e22: mov rdi, rsp
// asm:   0x5be5e25: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5be5e2a: test rbx, rbx
// asm:   0x5be5e2d: je 0x5be5dcb
// asm:   0x5be5e2f: mov rdi, rbx
// asm:   0x5be5e32: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5be5e37: mov rbx, rax
// asm:   0x5be5e3a: lea rdi, [rsp + 0x20]
// asm:   0x5be5e3f: call 0x2fd8d10  ; il2cpp_runtime_helper_02fd8d10()
// asm:   0x5be5e44: mov rdi, rbx
// asm:   0x5be5e47: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5be5e4c: mov rdi, rax
// asm:   0x5be5e4f: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BaseDetection__MergeTemp
               (Characters_BaseDetection_o *__this,System_Collections_Generic_HashSet_BaseCharacter__o *main,
               System_Collections_Generic_HashSet_BaseCharacter__o *temp,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_075475dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_get_Count);
    Il2CppMethodInitialized_075475dc = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (temp == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (temp->fields)._count) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              (&local_58,(System_Collections_Generic_HashSet_object__o *)temp,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator
              );
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    if (main == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
      local_30 = (undefined1 *)&local_58;
      bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
      if (bVar1) {
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               (&local_58,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext
                               ), bVar1) {
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)main,local_58.fields._current,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (&local_58,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
    System_Collections_Generic_HashSet_object___Clear
              ((System_Collections_Generic_HashSet_object__o *)temp,
               (MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
  }
  return;
}


// Characters.BaseDetection$$Recalculate
// il2cpp: void Characters_BaseDetection__Recalculate (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* characters, UnityEngine_Vector3_o myPosition, float mySpeed, const MethodInfo* method);
// 0x5be58a0
// eh: try 0x5be59a4..0x5be5c14 -> pad 0x5be5c38 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5be5c50..0x5be5c55 -> pad 0x5be5c7a cleanup
// eh: try 0x5be5c7d..0x5be5c87 -> pad 0x5be5c8f catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be599c: nop dword ptr [rax]
// asm:   0x5be5a31: jmp 0x5be5a59
// asm:   0x5be5c14: jmp 0x5be5c38
// asm:   0x5be5c16: jmp 0x5be5c38
// asm:   0x5be5c18: jmp 0x5be5c38
// asm:   0x5be5c1a: jmp 0x5be5c38
// asm:   0x5be5c1c: jmp 0x5be5c38
// asm:   0x5be5c1e: jmp 0x5be5c38
// asm:   0x5be5c20: jmp 0x5be5c38
// asm:   0x5be5c22: jmp 0x5be5c38
// asm:   0x5be5c24: jmp 0x5be5c38
// asm:   0x5be5c26: jmp 0x5be5c38
// asm:   0x5be5c28: jmp 0x5be5c38
// asm:   0x5be5c2a: jmp 0x5be5c38
// asm:   0x5be5c2c: jmp 0x5be5c38
// asm:   0x5be5c2e: jmp 0x5be5c38
// asm:   0x5be5c30: jmp 0x5be5c38
// asm:   0x5be5c32: jmp 0x5be5c38
// asm:   0x5be5c34: jmp 0x5be5c38
// asm:   0x5be5c36: jmp 0x5be5c38
// asm:   0x5be5c38: mov rbx, rax
// asm:   0x5be5c3b: cmp edx, 1
// asm:   0x5be5c3e: jne 0x5be5c7d
// asm:   0x5be5c40: mov rdi, rbx
// asm:   0x5be5c43: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be5c48: mov rbx, qword ptr [rax]
// asm:   0x5be5c4b: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5be5c50: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be5c55: lea rax, [rip + 0x16a7a74]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x5be5c5c: mov rsi, qword ptr [rax]
// asm:   0x5be5c5f: lea rdi, [rsp + 0x20]
// asm:   0x5be5c64: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5be5c69: test rbx, rbx
// asm:   0x5be5c6c: je 0x5be5be9
// asm:   0x5be5c72: mov rdi, rbx
// asm:   0x5be5c75: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5be5c7a: mov rbx, rax
// asm:   0x5be5c7d: lea rdi, [rsp + 0x38]
// asm:   0x5be5c82: call 0x2fd8d40  ; il2cpp_runtime_helper_02fd8d40()
// asm:   0x5be5c87: mov rdi, rbx
// asm:   0x5be5c8a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5be5c8f: mov rdi, rax
// asm:   0x5be5c92: call 0x2ab61e0  ; __clang_call_terminate()
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


void Characters_BaseDetection__Recalculate
               (undefined8 param_1,undefined8 param_2,float param_3,long *param_4,
               System_Collections_Generic_HashSet_object__o *param_5)

{
  void **targetAddress;
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppObject *x;
  bool bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_98;
  undefined1 auStack_80 [16];
  UnityEngine_Object_o *pUStack_70;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_48;
  
  fStack_64 = (float)((ulong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  fStack_54 = (float)((ulong)param_1 >> 0x20);
  fStack_58 = (float)param_1;
  fStack_68 = fVar8;
  if (Il2CppMethodInitialized_075475dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475dd = '\x01';
  }
  SStack_98.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_98.fields._index = 0;
  SStack_98.fields._version = 0;
  SStack_98.fields._current = (Il2CppObject *)0x0;
  if (param_5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_80,param_5,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
  uStack_60 = fStack_64;
  SStack_98.fields._current = (Il2CppObject *)pUStack_70;
  SStack_98.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_80._0_8_;
  SStack_98.fields._index = auStack_80._8_4_;
  SStack_98.fields._version = auStack_80._12_4_;
  auStack_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  targetAddress = (void **)(param_4 + 3);
  fStack_64 = fStack_58;
  fStack_5c = fStack_54;
  auStack_80._8_8_ = &SStack_98;
  do {
    do {
      do {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&SStack_98,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
          x = SStack_98.fields._current;
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&SStack_98,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
            return;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (bVar3);
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
      } while (*(char *)&((UnityEngine_Object_o *)((long)x + 0x78))->klass != '\0');
      cVar4 = Characters_BaseDetection__IsValidTeam(param_4,x);
    } while (cVar4 == '\0');
    uVar7 = (*(code *)((UnityEngine_Object_c *)x->klass)[5].vtable._2_GetHashCode.method)
                      (x,((UnityEngine_Object_c *)x->klass)[5].vtable._3_ToString.methodPtr);
    uStack_48 = uVar7;
    if (Il2CppMethodInitialized_0753e7b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b7 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    uVar7 = uStack_48;
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      uVar7 = uStack_48;
    }
    uStack_48._4_4_ = (float)((ulong)uVar7 >> 0x20);
    uStack_48._0_4_ = (float)uVar7;
    fVar5 = (fStack_54 - uStack_48._4_4_) * (fStack_54 - uStack_48._4_4_) +
            (fStack_64 - (float)uStack_48) * (fStack_64 - (float)uStack_48) +
            (fStack_68 - fVar8) * (fStack_68 - fVar8);
    uStack_48 = uVar7;
    if (fVar5 < 0.0) {
      fVar5 = sqrtf(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar8 = *(float *)&(((UnityEngine_Object_o *)((long)x + 0xc0))->fields).m_CachedPtr + param_3 + 100.0;
    fVar6 = (fVar5 + -200.0) / fVar8;
    if (fVar6 <= 2.0) {
      if (fVar6 <= 0.2) {
        if ((System_Collections_Generic_HashSet_object__o *)param_4[0xb] ==
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)param_4[0xb],x,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
      }
      else {
        if ((System_Collections_Generic_HashSet_object__o *)param_4[0xc] ==
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)param_4[0xc],x,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
      }
    }
    else {
      if ((System_Collections_Generic_HashSet_object__o *)param_4[0xd] ==
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)param_4[0xd],x,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    }
    pUVar2 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
label_05be5b99:
      *targetAddress = x;
      Il2CppCodeGenWriteBarrier(targetAddress);
      *(float *)(param_4 + 4) = fVar5;
    }
    else {
      pUVar2 = *targetAddress;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      if ((bVar3) || (fVar5 < *(float *)(param_4 + 4))) goto label_05be5b99;
    }
    (**(code **)(*param_4 + 0x1c8))(fVar5,param_4,x,*(undefined8 *)(*param_4 + 0x1d0));
  } while( true );
}

// Characters.BaseDetection$$GetSpeed
// il2cpp: float Characters_BaseDetection__GetSpeed (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x5be5e60

float Characters_BaseDetection__GetSpeed(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CurrentSpeed;
}


// Characters.BaseDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseDetection__GetPosition (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x5be5e80

UnityEngine_Vector3_o
Characters_BaseDetection__GetPosition(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar2;
  
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2.fields._0_8_ =
       (*(pCVar1->klass->vtable)._120_GetCenterPosition.methodPtr)
                 (pCVar1,(pCVar1->klass->vtable)._120_GetCenterPosition.method);
  UVar2.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Characters.BaseDetection$$OnRecalculate
// il2cpp: void Characters_BaseDetection__OnRecalculate (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x5be5eb0

void Characters_BaseDetection__OnRecalculate
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  return;
}


