// Type: Characters.BaseDetection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BaseDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/BaseDetection.cs
// --------------------------------

// Characters.BaseDetection$$.ctor
// il2cpp: void Characters_BaseDetection___ctor (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* owner, bool enemiesOnly, bool titansOnly, const MethodInfo* method);
// 0x182110d10
// eh: try 0x182110fe0..0x182111172 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821110a5: mov r8, qword ptr [rsp + 0x30]
// asm:   0x1821110aa: cmp qword ptr [r8], 0
// asm:   0x1821110ae: je 0x1821110c1
// asm:   0x1821110b0: xor ecx, ecx
// asm:   0x1821110b2: mov r8, qword ptr [r8]
// asm:   0x1821110b5: mov rdx, qword ptr [rip + 0x1f88244]  ; TypeInfo_System_IDisposable
// asm:   0x1821110bc: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1821110c1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821110c6: test rcx, rcx
// asm:   0x1821110c9: jne 0x182111172
// asm:   0x1821110cf: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182111172: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_BaseDetection___ctor
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *owner,bool enemiesOnly,
               bool titansOnly,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  ushort uVar3;
  GameManagers_InGameManager_o *pGVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_BaseCharacter__o *pSVar7;
  Il2CppObject *pIVar8;
  void *pvVar9;
  VirtualInvokeData *pVVar10;
  Characters_BaseCharacter_o *character;
  ushort uVar11;
  float fVar12;
  
  if (Il2CppMethodInitialized_184346b74 == '\0') {
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
    Il2CppMethodInitialized_184346b74 = '\x01';
  }
  (__this->fields).ClosestEnemyDistance = 3.4028235e+38;
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar7,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._recalculateFast = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._recalculateFast,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar7,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._recalculateMedium = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._recalculateMedium,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar7,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._recalculateSlow = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._recalculateSlow,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar7,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._tempRecalculateFast = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tempRecalculateFast,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar7,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._tempRecalculateMedium = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tempRecalculateMedium,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar7,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._tempRecalculateSlow = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tempRecalculateSlow,pSVar7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Owner,owner);
  (__this->fields)._enemiesOnly = enemiesOnly;
  (__this->fields)._titansOnly = titansOnly;
  pGVar4 = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
    }
    (__this->fields)._inGameManager = pGVar4;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager,pGVar4);
  pGVar4 = (__this->fields)._inGameManager;
  if (pGVar4 != (GameManagers_InGameManager_o *)0x0) {
    pIVar8 = (Il2CppObject *)GameManagers_InGameManager__GetAllCharactersEnumerable(pGVar4,(MethodInfo *)0x0);
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,
                          pIVar8);
      while( true ) {
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar9 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar8);
        if ((char)pvVar9 == '\0') break;
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar5 = pIVar8->klass;
        uVar3 = (pIVar5->_2).interface_offsets_count;
        if (uVar3 != 0) {
          uVar11 = 0;
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          do {
            if (pIVar6[uVar11].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
              pVVar10 = pIVar5->vtable + pIVar6[uVar11].offset;
              goto label_182111056;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar3);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar8,(Il2CppClass *)
                                    TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_182111056:
        character = (Characters_BaseCharacter_o *)(*pVVar10->methodPtr)(pIVar8,pVVar10->method);
        Characters_BaseDetection__OnCharacterSpawned(__this,character,(MethodInfo *)0x0);
      }
      if (pIVar8 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
      }
      pGVar4 = (__this->fields)._inGameManager;
      if ((pGVar4 != (GameManagers_InGameManager_o *)0x0) &&
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar4->fields).Detections,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___Add
                  (__this_00,(Il2CppObject *)__this,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseDetection_Add);
        fVar1 = (__this->fields)._currentMediumTime;
        fVar12 = UnityEngine_Random__Range(0.0,0.2,(MethodInfo *)0x0);
        (__this->fields)._currentMediumTime = fVar12 + fVar1;
        fVar1 = (__this->fields)._currentSlowTime;
        fVar12 = UnityEngine_Random__Range(0.0,2.0,(MethodInfo *)0x0);
        (__this->fields)._currentSlowTime = fVar12 + fVar1;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$get_RequireValidTarget
// il2cpp: bool Characters_BaseDetection__get_RequireValidTarget (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Characters_BaseDetection__get_RequireValidTarget(Characters_BaseDetection_o* __this, MethodInfo* method)

{
  return true;
}


// Characters.BaseDetection$$IsNullOrDead
// il2cpp: bool Characters_BaseDetection__IsNullOrDead (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x18210fd50

bool Characters_BaseDetection__IsNullOrDead(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b75 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).Dead;
  }
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$OnTeamChanged
// il2cpp: void Characters_BaseDetection__OnTeamChanged (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x182110500
// eh: try 0x1821105f0..0x1821107d2 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821106c1: mov r8, qword ptr [rsp + 0x38]
// asm:   0x1821106c6: cmp qword ptr [r8], 0
// asm:   0x1821106ca: je 0x1821106dd
// asm:   0x1821106cc: xor ecx, ecx
// asm:   0x1821106ce: mov r8, qword ptr [r8]
// asm:   0x1821106d1: mov rdx, qword ptr [rip + 0x1f88c28]  ; TypeInfo_System_IDisposable
// asm:   0x1821106d8: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1821106dd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821106e2: test rcx, rcx
// asm:   0x1821106e5: jne 0x1821107c6
// asm:   0x1821106eb: xor r14d, r14d
// asm:   0x1821106ee: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x182110749: nop dword ptr [rax]
// asm:   0x18211078e: mov rdx, qword ptr [rip + 0x1f64d83]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose
// asm:   0x182110795: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18211079a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18211079f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821107a4: test rcx, rcx
// asm:   0x1821107a7: jne 0x1821107d2
// asm:   0x1821107c6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821107d2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_BaseDetection__OnTeamChanged(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  ushort uVar1;
  GameManagers_InGameManager_o *pGVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  bool bVar5;
  Il2CppObject *pIVar6;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  Characters_BaseCharacter_o *character;
  ushort uVar9;
  Il2CppObject *local_res18 [2];
  undefined1 local_48 [16];
  Characters_BaseDetection_o *local_38;
  undefined1 local_30 [8];
  uint64_t uStack_28;
  Characters_BaseDetection_o *local_20;
  
  if (Il2CppMethodInitialized_184346b76 == '\0') {
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
    Il2CppMethodInitialized_184346b76 = '\x01';
  }
  local_res18[0] = (Il2CppObject *)0x0;
  local_30 = (undefined1  [8])0x0;
  uStack_28 = 0;
  local_20 = (Characters_BaseDetection_o *)0x0;
  pGVar2 = (__this->fields)._inGameManager;
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    pIVar6 = (Il2CppObject *)GameManagers_InGameManager__GetAllCharactersEnumerable(pGVar2,(MethodInfo *)0x0);
    if (pIVar6 != (Il2CppObject *)0x0) {
      local_res18[0] =
           InterfaceInvoker0_Invoke
                     (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,pIVar6);
      local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_48._8_8_ = local_res18;
      while( true ) {
        if (local_res18[0] == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar7 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18[0]);
        pIVar6 = local_res18[0];
        if ((char)pvVar7 == '\0') break;
        if (local_res18[0] == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_res18[0]->klass;
        uVar1 = (pIVar3->_2).interface_offsets_count;
        uVar9 = 0;
        if (uVar1 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
              pVVar8 = pIVar3->vtable + pIVar4[uVar9].offset;
              goto label_182110672;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar1);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_res18[0],
                            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_182110672:
        character = (Characters_BaseCharacter_o *)(*pVVar8->methodPtr)(pIVar6,pVVar8->method);
        Characters_BaseDetection__OnCharacterSpawned(__this,character,(MethodInfo *)0x0);
      }
      if (local_res18[0] != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18[0]);
      }
      pGVar2 = (__this->fields)._inGameManager;
      if ((pGVar2 != (GameManagers_InGameManager_o *)0x0) &&
         (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).Detections,
         __this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_00,
                   (MethodInfo_175C200 *)
                   MethodInfo_System_Collections_Generic_HashSet_BaseDetection_GetEnumerator);
        local_30 = (undefined1  [8])local_48._0_8_;
        uStack_28 = local_48._8_8_;
        local_20 = local_38;
        local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
        while( true ) {
          bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_30,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_MoveNext);
          if (!bVar5) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose);
            return;
          }
          if (local_20 == (Characters_BaseDetection_o *)0x0) break;
          Characters_BaseDetection__OnCharacterSpawned(local_20,(__this->fields).Owner,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$OnCharacterSpawned
// il2cpp: void Characters_BaseDetection__OnCharacterSpawned (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x182110010

void Characters_BaseDetection__OnCharacterSpawned
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *y;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b77 = '\x01';
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
label_18211015c:
        ThrowNullReferenceException();
      }
      if ((character->fields).Dead == false) {
        if ((__this->fields)._titansOnly != false) {
          bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
          if ((character->klass->_2).typeHierarchyDepth < bVar1) {
            return;
          }
          if ((character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BaseTitan) {
            return;
          }
        }
        bVar2 = (*(__this->klass->vtable)._4_get_RequireValidTarget.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_RequireValidTarget.method);
        if ((bVar2) &&
           (bVar2 = (*(character->klass->vtable)._73_ValidTarget.methodPtr)
                              (character,(character->klass->vtable)._73_ValidTarget.method), !bVar2)) {
          return;
        }
        bVar2 = Characters_BaseDetection__IsValidTeam(__this,character,(MethodInfo *)0x0);
        if (bVar2) {
          __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._recalculateFast;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18211015c;
          System_Collections_Generic_HashSet_object___Add
                    (__this_00,(Il2CppObject *)character,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
        }
      }
    }
  }
  return;
}


// Characters.BaseDetection$$IsValidTeam
// il2cpp: bool Characters_BaseDetection__IsValidTeam (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x18210fdd0

bool Characters_BaseDetection__IsValidTeam
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346b78 = '\x01';
  }
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
      bVar2 = GameManagers_TeamInfo__SameTeam_1e770d0(character,pCVar1,(MethodInfo *)0x0);
      return !bVar2;
    }
  }
  return true;
}


// Characters.BaseDetection$$OnFixedUpdate
// il2cpp: void Characters_BaseDetection__OnFixedUpdate (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x182110170

void Characters_BaseDetection__OnFixedUpdate(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  Characters_BaseDetection_c *pCVar3;
  Characters_BaseCharacter_o *pCVar4;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar5;
  bool bVar6;
  UnityEngine_Vector3_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_o local_98 [12];
  
  if (Il2CppMethodInitialized_184346b79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    Il2CppMethodInitialized_184346b79 = '\x01';
  }
  fVar9 = (__this->fields)._currentMediumTime;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar10 = (__this->fields)._currentSlowTime;
  (__this->fields)._currentMediumTime = fVar8 + fVar9;
  fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pCVar3 = __this->klass;
  (__this->fields)._currentSlowTime = fVar9 + fVar10;
  fVar10 = (*(pCVar3->vtable)._7_GetSpeed.methodPtr)(__this,(pCVar3->vtable)._7_GetSpeed.method);
  pUVar7 = (*(__this->klass->vtable)._8_GetPosition.methodPtr)
                     (local_98,__this,(__this->klass->vtable)._8_GetPosition.method);
  uVar2._0_4_ = (pUVar7->fields).x;
  uVar2._4_4_ = (pUVar7->fields).y;
  fVar9 = (pUVar7->fields).z;
  local_a8._0_8_ = uVar2;
  if (Il2CppMethodInitialized_184346b7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b7a = '\x01';
  }
  pCVar4 = (__this->fields).ClosestEnemy;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) goto label_18211039b;
  pCVar4 = (__this->fields).ClosestEnemy;
  if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_1821104eb;
  if ((pCVar4->fields).Dead == false) {
    bVar6 = Characters_BaseDetection__IsValidTeam(__this,pCVar4,(MethodInfo *)0x0);
    if (!bVar6) goto label_18211039b;
    pCVar4 = (__this->fields).ClosestEnemy;
    if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_1821104eb;
    fVar12 = local_a8.y;
    pUVar7 = (*(pCVar4->klass->vtable)._120_GetCenterPosition.methodPtr)
                       (local_98,pCVar4,(pCVar4->klass->vtable)._120_GetCenterPosition.method);
    fVar8 = (pUVar7->fields).x;
    fVar1 = (pUVar7->fields).y;
    fVar13 = (pUVar7->fields).z;
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    fVar12 = fVar12 - fVar1;
    fVar13 = fVar9 - fVar13;
    fVar8 = (float)uVar2 - fVar8;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar11 = (double)(fVar12 * fVar12 + fVar8 * fVar8 + fVar13 * fVar13);
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
      fVar8 = (float)dVar11;
    }
    else {
      fVar8 = (float)SQRT(dVar11);
    }
  }
  else {
label_18211039b:
    (__this->fields).ClosestEnemy = (Characters_BaseCharacter_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ClosestEnemy,(void *)0x0);
    fVar8 = 3.4028235e+38;
  }
  (__this->fields).ClosestEnemyDistance = fVar8;
  local_a8._0_8_ = uVar2;
  local_a8.z = fVar9;
  Characters_BaseDetection__Recalculate
            (__this,(__this->fields)._recalculateFast,(UnityEngine_Vector3_o *)&local_a8,fVar10,
             (MethodInfo *)0x0);
  pSVar5 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._recalculateFast;
  if (pSVar5 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
              (pSVar5,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear)
    ;
    if (0.2 < (__this->fields)._currentMediumTime) {
      (__this->fields)._currentMediumTime = 0.0;
      local_a8._0_8_ = uVar2;
      local_a8.z = fVar9;
      Characters_BaseDetection__Recalculate
                (__this,(__this->fields)._recalculateMedium,(UnityEngine_Vector3_o *)&local_a8,fVar10,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._recalculateMedium;
      if (pSVar5 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_1821104eb;
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar5,(MethodInfo_17592A0 *)
                        MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    }
    if (2.0 < (__this->fields)._currentSlowTime) {
      (__this->fields)._currentSlowTime = 0.0;
      local_a8._0_8_ = uVar2;
      local_a8.z = fVar9;
      Characters_BaseDetection__Recalculate
                (__this,(__this->fields)._recalculateSlow,(UnityEngine_Vector3_o *)&local_a8,fVar10,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._recalculateSlow;
      if (pSVar5 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_1821104eb;
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar5,(MethodInfo_17592A0 *)
                        MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    }
    Characters_BaseDetection__MergeTemp
              (__this,(__this->fields)._recalculateFast,(__this->fields)._tempRecalculateFast,
               (MethodInfo *)0x0);
    Characters_BaseDetection__MergeTemp
              (__this,(__this->fields)._recalculateMedium,(__this->fields)._tempRecalculateMedium,
               (MethodInfo *)0x0);
    Characters_BaseDetection__MergeTemp
              (__this,(__this->fields)._recalculateSlow,(__this->fields)._tempRecalculateSlow,
               (MethodInfo *)0x0);
    return;
  }
label_1821104eb:
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$RefreshClosestEnemy
// il2cpp: void Characters_BaseDetection__RefreshClosestEnemy (Characters_BaseDetection_o* __this, UnityEngine_Vector3_o myPosition, const MethodInfo* method);
// 0x182110b40

void Characters_BaseDetection__RefreshClosestEnemy
               (Characters_BaseDetection_o *__this,UnityEngine_Vector3_o *myPosition,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_184346b7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b7a = '\x01';
  }
  pCVar1 = (__this->fields).ClosestEnemy;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = (__this->fields).ClosestEnemy;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_182110d0a:
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).Dead == false) {
      bVar2 = Characters_BaseDetection__IsValidTeam(__this,pCVar1,(MethodInfo *)0x0);
      if (bVar2) {
        pCVar1 = (__this->fields).ClosestEnemy;
        if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
          pUVar3 = (*(pCVar1->klass->vtable)._120_GetCenterPosition.methodPtr)
                             (local_58,pCVar1,(pCVar1->klass->vtable)._120_GetCenterPosition.method);
          fVar6 = (pUVar3->fields).x;
          fVar5 = (pUVar3->fields).y;
          fVar7 = (pUVar3->fields).z;
          if (Il2CppMethodInitialized_18433dee7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433dee7 = '\x01';
          }
          fVar6 = (myPosition->fields).x - fVar6;
          fVar5 = (myPosition->fields).y - fVar5;
          fVar7 = (myPosition->fields).z - fVar7;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar4 = (double)(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
          if (0.0 <= dVar4) {
            (__this->fields).ClosestEnemyDistance = (float)SQRT(dVar4);
            return;
          }
          dVar4 = sqrt(dVar4);
          (__this->fields).ClosestEnemyDistance = (float)dVar4;
          return;
        }
        goto label_182110d0a;
      }
    }
  }
  (__this->fields).ClosestEnemy = (Characters_BaseCharacter_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ClosestEnemy,(void *)0x0);
  (__this->fields).ClosestEnemyDistance = 3.4028235e+38;
  return;
}


// Characters.BaseDetection$$MergeTemp
// il2cpp: void Characters_BaseDetection__MergeTemp (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* main, System_Collections_Generic_HashSet_BaseCharacter__o* temp, const MethodInfo* method);
// 0x18210fe90
// eh: try 0x18210ff70..0x18210ffff -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210ff6c: nop dword ptr [rax]
// asm:   0x18210ffb1: mov rdx, qword ptr [rip + 0x1f64d80]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x18210ffb8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18210ffbd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18210ffc2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18210ffc7: test rcx, rcx
// asm:   0x18210ffca: jne 0x18210ffff
// asm:   0x18210ffcc: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x18210ffff: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_BaseDetection__MergeTemp
               (Characters_BaseDetection_o *__this,System_Collections_Generic_HashSet_BaseCharacter__o *main,
               System_Collections_Generic_HashSet_BaseCharacter__o *temp,MethodInfo *method)

{
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_HashSet_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184346b7b == '\0') {
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
    Il2CppMethodInitialized_184346b7b = '\x01';
  }
  local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (temp != (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
    if (0 < (temp->fields)._count) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_HashSet_Vector2Int__o *)temp,
                 (MethodInfo_175C200 *)
                 MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
      local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = local_30;
      local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
        if (!bVar1) break;
        if (main == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)main,local_28.fields._current,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)temp,
                 (MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$Recalculate
// il2cpp: void Characters_BaseDetection__Recalculate (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* characters, UnityEngine_Vector3_o myPosition, float mySpeed, const MethodInfo* method);
// 0x1821107e0
// eh: try 0x1821108d0..0x182110b30 -> pad 0x183320150 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182110ace: mov rdx, qword ptr [rip + 0x1f64263]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x182110ad5: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x182110ada: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182110adf: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x182110ae4: test rcx, rcx
// asm:   0x182110ae7: jne 0x182110b30
// asm:   0x182110b30: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320150: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320155: push rbp
// asm:   0x183320156: sub rsp, 0x20
// asm:   0x18332015a: mov rbp, rdx
// asm:   0x18332015d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183320161: mov rcx, qword ptr [rax]
// asm:   0x183320164: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183320168: movabs rax, 0
// asm:   0x183320172: add rsp, 0x20
// asm:   0x183320176: pop rbp
// asm:   0x183320177: ret 

void Characters_BaseDetection__Recalculate
               (Characters_BaseDetection_o *__this,
               System_Collections_Generic_HashSet_BaseCharacter__o *characters,
               UnityEngine_Vector3_o *myPosition,float mySpeed,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *pCVar2;
  Il2CppObject *character;
  bool bVar3;
  UnityEngine_Vector3_o *pUVar4;
  MethodInfo *pMVar5;
  float fVar6;
  float fVar7;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  UnityEngine_Vector3_o local_c8;
  undefined1 local_b8 [16];
  Characters_BaseCharacter_o *local_a8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_a0 [5];
  
  if (Il2CppMethodInitialized_184346b7c == '\0') {
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
    Il2CppMethodInitialized_184346b7c = '\x01';
  }
  local_a0[0].fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_a0[0].fields._index = 0;
  local_a0[0].fields._version = 0;
  local_a0[0].fields._current = (Il2CppObject *)0x0;
  if (characters == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,
             (System_Collections_Generic_HashSet_Vector2Int__o *)characters,
             (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
  local_a0[0].fields._set = (System_Collections_Generic_HashSet_T__o *)local_b8._0_8_;
  local_a0[0].fields._index = local_b8._8_4_;
  local_a0[0].fields._version = local_b8._12_4_;
  local_a0[0].fields._current = (Il2CppObject *)local_a8;
  local_b8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_b8._8_8_ = local_a0;
  do {
    do {
      do {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (local_a0,(MethodInfo_15381F0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext
                            );
          character = local_a0[0].fields._current;
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
            return;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (bVar3);
        if ((Characters_BaseCharacter_o *)character == (Characters_BaseCharacter_o *)0x0) {
          ThrowNullReferenceException();
        }
      } while (((Characters_BaseCharacter_Fields *)((longlong)character + 0x10))->Dead != false);
      bVar3 = Characters_BaseDetection__IsValidTeam
                        (__this,(Characters_BaseCharacter_o *)character,(MethodInfo *)0x0);
    } while (!bVar3);
    pUVar4 = (*(((Characters_BaseCharacter_c *)character->klass)->vtable)._120_GetCenterPosition.methodPtr)
                       (&local_c8,character,
                        (((Characters_BaseCharacter_c *)character->klass)->vtable)._120_GetCenterPosition.
                        method);
    local_e8._0_4_ = (pUVar4->fields).x;
    local_e8._4_4_ = (pUVar4->fields).y;
    local_e0 = (pUVar4->fields).z;
    local_d8._0_4_ = (myPosition->fields).x;
    local_d8._4_4_ = (myPosition->fields).y;
    local_d0 = (myPosition->fields).z;
    fVar6 = (float)il2cpp_runtime_helper_180562c80(&local_d8,&local_e8,0);
    fVar7 = (fVar6 - 200.0) /
            (mySpeed + ((Characters_BaseCharacter_Fields *)((longlong)character + 0x10))->CurrentSpeed + 100.0
            );
    if (2.0 < fVar7) {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._tempRecalculateSlow;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,character,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    }
    else if (0.2 < fVar7) {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._tempRecalculateMedium;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,character,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    }
    else {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._tempRecalculateFast;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,character,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    }
    pCVar2 = (__this->fields).ClosestEnemy;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar5 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
label_182110a8a:
      (__this->fields).ClosestEnemy = (Characters_BaseCharacter_o *)character;
      Il2CppCodeGenWriteBarrier(&(__this->fields).ClosestEnemy,character);
      (__this->fields).ClosestEnemyDistance = fVar6;
    }
    else {
      pCVar2 = (__this->fields).ClosestEnemy;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar5 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)character,(MethodInfo *)0x0);
      if ((bVar3) || (fVar6 < (__this->fields).ClosestEnemyDistance)) goto label_182110a8a;
    }
    (*(__this->klass->vtable)._9_OnRecalculate.methodPtr)(__this,(System_Type_o *)character,pMVar5);
  } while( true );
}


// Characters.BaseDetection$$GetSpeed
// il2cpp: float Characters_BaseDetection__GetSpeed (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x18210fd30

float Characters_BaseDetection__GetSpeed(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).CurrentSpeed;
  }
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseDetection__GetPosition (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x18210fce0

UnityEngine_Vector3_o *
Characters_BaseDetection__GetPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseDetection_o *__this,MethodInfo *method
          )

{
  float fVar1;
  Characters_BaseCharacter_o *pCVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_o local_18;
  
  pCVar2 = (__this->fields).Owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    pUVar4 = (*(pCVar2->klass->vtable)._120_GetCenterPosition.methodPtr)
                       (&local_18,pCVar2,(pCVar2->klass->vtable)._120_GetCenterPosition.method);
    fVar3 = (pUVar4->fields).y;
    fVar1 = (pUVar4->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar4->fields).x;
    (__return_storage_ptr__->fields).y = fVar3;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Characters.BaseDetection$$OnRecalculate
// il2cpp: void Characters_BaseDetection__OnRecalculate (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x180547020

void
Characters_BaseDetection__OnRecalculate(Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, float distance, MethodInfo* method)

{
  return;
}


