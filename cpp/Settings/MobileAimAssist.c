// Type: Settings.MobileAimAssist
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/MobileAimAssist.cs
// Prior real C# source: none
// --------------------------------

// Settings.MobileAimAssist$$SnapToNearestTarget
// il2cpp: void Settings_MobileAimAssist__SnapToNearestTarget (const MethodInfo* method);
// 0x59cb7d0

void Settings_MobileAimAssist__SnapToNearestTarget(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileAimAssist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07545c3b = '\x01';
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    return;
  }
  return;
}


// Settings.MobileAimAssist$$TryGetAimPoint
// il2cpp: bool Settings_MobileAimAssist__TryGetAimPoint (UnityEngine_Vector3_o* aimPoint, const MethodInfo* method);
// 0x59cc170

bool Settings_MobileAimAssist__TryGetAimPoint(UnityEngine_Vector3_o *aimPoint,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07545c3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileAimAssist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c3c = '\x01';
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (aimPoint->fields).x = (pUVar2->zeroVector).fields.x;
  (aimPoint->fields).y = fVar3;
  (aimPoint->fields).z = fVar1;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    return false;
  }
  return false;
}


// Settings.MobileAimAssist$$TryUpdateBladeFacing
// il2cpp: bool Settings_MobileAimAssist__TryUpdateBladeFacing (Characters_Human_o* human, const MethodInfo* method);
// 0x59cc420

bool Settings_MobileAimAssist__TryUpdateBladeFacing(Characters_Human_o *human,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545c3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileAimAssist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c3d = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    return false;
  }
  return false;
}


// Settings.MobileAimAssist$$UpdateBladeFacingLock
// il2cpp: void Settings_MobileAimAssist__UpdateBladeFacingLock (const MethodInfo* method);
// 0x59cc590

void Settings_MobileAimAssist__UpdateBladeFacingLock(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  GameManagers_BaseGameManager_c *pGVar3;
  
  if (Il2CppMethodInitialized_07545c3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07545c3e = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    pGVar3 = pGVar2->klass;
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar3->_2).typeHierarchyDepth) &&
       ((pGVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      if (Il2CppMethodInitialized_07545c3d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileAimAssist);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07545c3d = '\x01';
      }
      if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
        return;
      }
    }
  }
  return;
}


// Settings.MobileAimAssist$$GetPreferredTarget
// il2cpp: Characters_BaseCharacter_o* Settings_MobileAimAssist__GetPreferredTarget (GameManagers_InGameManager_o* manager, Characters_Human_o* human, const MethodInfo* method);
// 0x59cb9a0

Characters_BaseCharacter_o *
Settings_MobileAimAssist__GetPreferredTarget
          (GameManagers_InGameManager_o *manager,Characters_Human_o *human,MethodInfo *method)

{
  uint32_t uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this;
  bool bVar3;
  Characters_BaseCharacter_o *pCVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545c3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileAimAssist);
    Il2CppMethodInitialized_07545c3f = '\x01';
    method = extraout_RDX;
  }
  bVar3 = Settings_MobileAimAssist__IsValidTarget
                    (TypeInfo_Settings_MobileAimAssist->static_fields->_lastHookedTarget,human,method);
  pMVar5 = extraout_RDX_00;
  if (bVar3) {
    if (((human == (Characters_Human_o *)0x0) ||
        (pUVar2 = (human->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
       (__this = (pUVar2->fields).Transform, __this == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    pMVar5 = (MethodInfo *)0x0;
    UVar7 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
    UVar8 = Settings_MobileAimAssist__GetTargetAimPoint
                      (TypeInfo_Settings_MobileAimAssist->static_fields->_lastHookedTarget,pMVar5);
    if (Il2CppMethodInitialized_0753e7b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b7 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      pMVar5 = extraout_RDX_03;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      pMVar5 = extraout_RDX_01;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      pMVar5 = extraout_RDX_04;
    }
    fStack_28 = UVar7.fields.x;
    fStack_24 = UVar7.fields.y;
    fStack_24 = fStack_24 - UVar8.fields.y;
    fVar6 = UVar7.fields.z - UVar8.fields.z;
    fStack_28 = fStack_28 - UVar8.fields.x;
    fVar6 = fStack_24 * fStack_24 + fStack_28 * fStack_28 + fVar6 * fVar6;
    if (fVar6 < 0.0) {
      fVar6 = sqrtf(fVar6);
      pMVar5 = extraout_RDX_02;
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    if (fVar6 <= 120.0) {
      return TypeInfo_Settings_MobileAimAssist->static_fields->_lastHookedTarget;
    }
  }
  pCVar4 = Settings_MobileAimAssist__GetNearestTarget(manager,human,pMVar5);
  return pCVar4;
}


// Settings.MobileAimAssist$$UpdateLastHookedTarget
// il2cpp: void Settings_MobileAimAssist__UpdateLastHookedTarget (Characters_Human_o* human, const MethodInfo* method);
// 0x59cb860

void Settings_MobileAimAssist__UpdateLastHookedTarget(Characters_Human_o *human,MethodInfo *method)

{
  Characters_HookUseable_o *pCVar1;
  Settings_MobileAimAssist_StaticFields *pSVar2;
  bool bVar3;
  Characters_BaseCharacter_o *target;
  Characters_BaseCharacter_o *target_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07545c40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileAimAssist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c40 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (human == (Characters_Human_o *)0x0) {
label_059cb999:
      ThrowNullReferenceException();
    }
    pCVar1 = (human->fields).HookLeft;
    target = (Characters_BaseCharacter_o *)0x0;
    method_00 = extraout_RDX;
    if (pCVar1 != (Characters_HookUseable_o *)0x0) {
      bVar3 = Characters_HookUseable__IsHooked(pCVar1,(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
      if (bVar3) {
        pCVar1 = (human->fields).HookLeft;
        if (pCVar1 == (Characters_HookUseable_o *)0x0) goto label_059cb999;
        target = Characters_HookUseable__GetHookCharacter(pCVar1,(MethodInfo *)0x0);
        method_00 = extraout_RDX_01;
      }
    }
    pCVar1 = (human->fields).HookRight;
    target_00 = (Characters_BaseCharacter_o *)0x0;
    if (pCVar1 != (Characters_HookUseable_o *)0x0) {
      bVar3 = Characters_HookUseable__IsHooked(pCVar1,(MethodInfo *)0x0);
      method_00 = extraout_RDX_02;
      if (bVar3) {
        pCVar1 = (human->fields).HookRight;
        if (pCVar1 == (Characters_HookUseable_o *)0x0) goto label_059cb999;
        target_00 = Characters_HookUseable__GetHookCharacter(pCVar1,(MethodInfo *)0x0);
        method_00 = extraout_RDX_03;
      }
    }
    bVar3 = Settings_MobileAimAssist__IsValidTarget(target,human,method_00);
    if (bVar3) {
      pSVar2 = TypeInfo_Settings_MobileAimAssist->static_fields;
      pSVar2->_lastHookedTarget = target;
      Il2CppCodeGenWriteBarrier(&pSVar2->_lastHookedTarget);
      return;
    }
    bVar3 = Settings_MobileAimAssist__IsValidTarget(target_00,human,method_01);
    if (bVar3) {
      pSVar2 = TypeInfo_Settings_MobileAimAssist->static_fields;
      pSVar2->_lastHookedTarget = target_00;
      Il2CppCodeGenWriteBarrier(&pSVar2->_lastHookedTarget);
      return;
    }
  }
  return;
}


// Settings.MobileAimAssist$$IsValidTarget
// il2cpp: bool Settings_MobileAimAssist__IsValidTarget (Characters_BaseCharacter_o* target, Characters_Human_o* human, const MethodInfo* method);
// 0x59cc670

bool Settings_MobileAimAssist__IsValidTarget
               (Characters_BaseCharacter_o *target,Characters_Human_o *human,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545c41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07545c41 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = false;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)human,(MethodInfo *)0x0);
    if (bVar1) {
      if (target == (Characters_BaseCharacter_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (*(target->klass->vtable)._73_ValidTarget.methodPtr)
                        (target,(target->klass->vtable)._73_ValidTarget.method);
      if (bVar1) {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar2 = GameManagers_TeamInfo__SameTeam_5858900
                          (target,(Characters_BaseCharacter_o *)human,(MethodInfo *)0x0);
        bVar2 = !bVar2;
      }
      else {
        bVar2 = false;
      }
    }
  }
  return bVar2;
}


// Settings.MobileAimAssist$$GetNearestTarget
// il2cpp: Characters_BaseCharacter_o* Settings_MobileAimAssist__GetNearestTarget (GameManagers_InGameManager_o* manager, Characters_Human_o* human, const MethodInfo* method);
// 0x59cc760
// eh: try 0x59cc8ef..0x59ccb5b -> pad 0x59ccb8c (+10 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59ccba9..0x59ccbae -> pad 0x59ccbb3 cleanup
// eh: try 0x59ccbb6..0x59ccbc0 -> pad 0x59ccbc8 catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59cc8b4: jmp 0x59ccaa0
// asm:   0x59cca11: jmp 0x59cca2f
// asm:   0x59cca8f: jmp 0x59ccb42
// asm:   0x59ccaae: jmp 0x59ccb47
// asm:   0x59ccb42: mov rbx, qword ptr [rsp + 8]
// asm:   0x59ccb60: xor ebx, ebx
// asm:   0x59ccb62: jmp 0x59ccb47
// asm:   0x59ccb64: mov rdi, rbp
// asm:   0x59ccb67: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59ccb6c: jmp 0x59ccb8c
// asm:   0x59ccb6e: jmp 0x59ccb8c
// asm:   0x59ccb70: jmp 0x59ccb8c
// asm:   0x59ccb72: jmp 0x59ccb8c
// asm:   0x59ccb74: mov r15, rax
// asm:   0x59ccb77: xor r14d, r14d
// asm:   0x59ccb7a: jmp 0x59ccb94
// asm:   0x59ccb7c: jmp 0x59ccb8c
// asm:   0x59ccb7e: jmp 0x59ccb8c
// asm:   0x59ccb80: jmp 0x59ccb8c
// asm:   0x59ccb82: mov r15, rax
// asm:   0x59ccb85: mov r14, rbx
// asm:   0x59ccb88: jmp 0x59ccb94
// asm:   0x59ccb8a: jmp 0x59ccb8c
// asm:   0x59ccb8c: mov r15, rax
// asm:   0x59ccb8f: mov r14, qword ptr [rsp + 8]
// asm:   0x59ccb94: cmp edx, 1
// asm:   0x59ccb97: jne 0x59ccbb6
// asm:   0x59ccb99: mov rdi, r15
// asm:   0x59ccb9c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59ccba1: mov rbp, qword ptr [rax]
// asm:   0x59ccba4: mov qword ptr [rsp + 0x20], rbp
// asm:   0x59ccba9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59ccbae: jmp 0x59ccaba
// asm:   0x59ccbb3: mov r15, rax
// asm:   0x59ccbb6: lea rdi, [rsp + 0x20]
// asm:   0x59ccbbb: call 0x2fd5600  ; il2cpp_runtime_helper_02fd5600()
// asm:   0x59ccbc0: mov rdi, r15
// asm:   0x59ccbc3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59ccbc8: mov rdi, rax
// asm:   0x59ccbcb: call 0x2ab61e0  ; __clang_call_terminate()

Characters_BaseCharacter_o *
Settings_MobileAimAssist__GetNearestTarget
          (GameManagers_InGameManager_o *manager,Characters_Human_o *human,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this;
  bool bVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  Characters_BaseCharacter_o *target;
  ulong uVar8;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *pCVar9;
  MethodInfo *method_01;
  long lVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar12;
  Il2CppObject *pIStack_98;
  float fStack_8c;
  undefined8 uStack_88;
  Il2CppObject **ppIStack_80;
  undefined1 auStack_78 [16];
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_07545c42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_07545c42 = '\x01';
  }
  pIStack_98 = (Il2CppObject *)0x0;
  if ((manager == (GameManagers_InGameManager_o *)0x0) ||
     (pIVar6 = (Il2CppObject *)
               GameManagers_InGameManager__GetAllCharactersEnumerable(manager,(MethodInfo *)0x0),
     pIVar6 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar2 = pIVar6->klass;
  uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_BaseCharacter__c **)((long)&pIVar3->interfaceType + lVar10)
          == TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter) {
        pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
        goto label_059cc841;
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar8 * 0x10 != lVar10);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,0);
label_059cc841:
  pIStack_98 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  uStack_88 = 0;
  ppIStack_80 = &pIStack_98;
  if (pIStack_98 == (Il2CppObject *)0x0) {
label_059ccb47:
    ThrowNullReferenceException();
  }
  fVar11 = 120.0;
  pCVar9 = (Characters_BaseCharacter_o *)0x0;
label_059cc88d:
  fStack_8c = fVar11;
  do {
    pIVar6 = pIStack_98;
    pIVar2 = pIStack_98->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar10) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_059cc913;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar8 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIStack_98,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059cc913:
    bVar5 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    pIVar6 = pIStack_98;
    if (!bVar5) {
      if (pIStack_98 == (Il2CppObject *)0x0) {
        return pCVar9;
      }
      pIVar2 = pIStack_98->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 == 0) goto label_059ccaff;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      goto label_059ccaf0;
    }
    if (pIStack_98 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIStack_98->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_BaseCharacter__c **)
             ((long)&pIVar3->interfaceType + lVar10) ==
            TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
          pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_059cc993;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar8 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIStack_98,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_059cc993:
    target = (Characters_BaseCharacter_o *)(*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    bVar5 = Settings_MobileAimAssist__IsValidTarget(target,human,method_00);
    if (bVar5) {
      if (human == (Characters_Human_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = (human->fields).Cache;
      if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this = (pUVar4->fields).Transform;
      if (__this == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      method_01 = (MethodInfo *)0x0;
      UVar12 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
      fStack_58 = UVar12.fields.z;
      auStack_48._8_4_ = extraout_XMM0_Dc;
      auStack_48._0_8_ = UVar12.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd;
      uStack_54 = in_XMM1_Db;
      uStack_50 = in_XMM1_Dc;
      uStack_4c = in_XMM1_Dd;
      UVar12 = Settings_MobileAimAssist__GetTargetAimPoint(target,method_01);
      fStack_68 = UVar12.fields.z;
      auStack_78._8_4_ = extraout_XMM0_Dc_00;
      auStack_78._0_8_ = UVar12.fields._0_8_;
      auStack_78._12_4_ = extraout_XMM0_Dd_00;
      uStack_64 = in_XMM1_Db;
      uStack_60 = in_XMM1_Dc;
      uStack_5c = in_XMM1_Dd;
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar11 = ((float)auStack_48._4_4_ - (float)auStack_78._4_4_) *
               ((float)auStack_48._4_4_ - (float)auStack_78._4_4_) +
               ((float)auStack_48._0_4_ - (float)auStack_78._0_4_) *
               ((float)auStack_48._0_4_ - (float)auStack_78._0_4_) +
               (fStack_58 - fStack_68) * (fStack_58 - fStack_68);
      if (0.0 <= fVar11) {
        fVar11 = SQRT(fVar11);
        in_XMM1_Db = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        if (fVar11 < fStack_8c) break;
      }
      else {
        fVar11 = sqrtf(fVar11);
        in_XMM1_Db = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        if (fVar11 < fStack_8c) break;
      }
    }
    if (pIStack_98 == (Il2CppObject *)0x0) goto label_059ccb47;
  } while( true );
  in_XMM1_Dd = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Db = 0;
  pCVar9 = target;
  if (pIStack_98 == (Il2CppObject *)0x0) goto label_059ccb47;
  goto label_059cc88d;
  while (lVar10 = lVar10 + 0x10, uVar8 * 0x10 != lVar10) {
label_059ccaf0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
      goto label_059ccb1d;
    }
  }
label_059ccaff:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIStack_98,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059ccb1d:
  (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  return pCVar9;
}


// Settings.MobileAimAssist$$ApplyBladeAssistMovement
// il2cpp: void Settings_MobileAimAssist__ApplyBladeAssistMovement (Characters_Human_o* human, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x59cbb40

void Settings_MobileAimAssist__ApplyBladeAssistMovement
               (Characters_Human_o *human,Characters_BaseCharacter_o *target,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseUseable_o *pCVar2;
  Characters_BaseUseable_c *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  MethodInfo *pMVar8;
  UnityEngine_Rigidbody_o *pUVar9;
  UnityEngine_Object_o *x;
  float extraout_XMM0_Da;
  undefined1 auVar11 [12];
  undefined4 extraout_XMM0_Db;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar17;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar18;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar14 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_Fields UStack_108;
  UnityEngine_Vector3_o UStack_f8;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  
  if (Il2CppMethodInitialized_07545c43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c43 = '\x01';
  }
  UStack_f8.fields = (UnityEngine_Vector3_Fields)ZEXT812(0);
  UStack_108 = (UnityEngine_Vector3_Fields)ZEXT812(0);
  fStack_c0 = 0.0;
  uStack_c8 = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if (human != (Characters_Human_o *)0x0) {
    pCVar2 = (human->fields).Weapon;
    if (pCVar2 == (Characters_BaseUseable_o *)0x0) {
      return;
    }
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((pCVar3->_2).typeHierarchyDepth < bVar1) {
      return;
    }
    if ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BladeWeapon) {
      return;
    }
    pUVar4 = (human->fields).Cache;
    if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) {
      x = (UnityEngine_Object_o *)0x0;
    }
    else {
      x = (UnityEngine_Object_o *)(pUVar4->fields).Rigidbody;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar8 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      return;
    }
    UVar22 = Settings_MobileAimAssist__GetTargetAimPoint(target,pMVar8);
    uStack_b8 = UVar22.fields._0_8_;
    auStack_98._0_4_ = UVar22.fields.z;
    pUVar4 = (human->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_059cc16a;
    uStack_b0 = extraout_XMM0_Qb;
    UVar22 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    fStack_d8 = UVar22.fields.z;
    auStack_e8 = UVar22.fields._0_8_;
    register0x00001208 = extraout_XMM0_Qb_00;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    fVar19 = (float)uStack_b8 - auStack_e8._0_4_;
    fVar21 = uStack_b8._4_4_ - auStack_e8._4_4_;
    fVar20 = auStack_e8._8_4_;
    fVar17 = auStack_e8._12_4_;
    fStack_d8 = (float)auStack_98._0_4_ - fStack_d8;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    auStack_e8._4_4_ = fVar21;
    auStack_e8._0_4_ = fVar19;
    fStack_e0 = (float)uStack_b0 - fVar20;
    fStack_dc = uStack_b0._4_4_ - fVar17;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar19 = (float)auStack_e8._0_4_;
      fVar21 = (float)auStack_e8._4_4_;
    }
    fVar19 = fStack_d8 * fStack_d8 + fVar21 * fVar21 + fVar19 * fVar19;
    if (fVar19 < 0.0) {
      fVar19 = sqrtf(fVar19);
      uVar15 = extraout_XMM0_Db;
      uVar16 = extraout_XMM0_Dc;
      uVar18 = extraout_XMM0_Dd;
    }
    else {
      fVar19 = SQRT(fVar19);
      uVar15 = uStack_d4;
      uVar16 = uStack_d0;
      uVar18 = uStack_cc;
    }
    if (60.0 < fVar19) {
      return;
    }
    if (fVar19 <= 0.0001) {
      return;
    }
    pUVar4 = (human->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar9 = (pUVar4->fields).Rigidbody, fStack_78 = fVar19, uStack_74 = uVar15, uStack_70 = uVar16,
       uStack_6c = uVar18, pUVar9 == (UnityEngine_Rigidbody_o *)0x0)) goto label_059cc16a;
    UStack_f8 = UnityEngine_Rigidbody__get_linearVelocity(pUVar9,(MethodInfo *)0x0);
    pMVar8 = (MethodInfo *)0x0;
    il2cpp_runtime_helper_0599adc0(&UStack_f8);
    uStack_40 = (undefined4)extraout_XMM0_Qb_01;
    uStack_3c = (undefined4)((ulong)extraout_XMM0_Qb_01 >> 0x20);
    if (extraout_XMM0_Da < 0.1) {
      return;
    }
    auVar12._4_4_ = fStack_78;
    auVar12._0_4_ = fStack_78;
    auVar12._8_4_ = fStack_78;
    auVar12._12_4_ = fStack_78;
    _auStack_a8 = divps(_auStack_e8,auVar12);
    fVar20 = fStack_d8 / fStack_78;
    auVar13._8_8_ = 0;
    auVar13._0_4_ = UStack_f8.fields.x;
    auVar13._4_4_ = UStack_f8.fields.y;
    auVar6._4_4_ = extraout_XMM0_Da;
    auVar6._0_4_ = extraout_XMM0_Da;
    auVar6._8_4_ = extraout_XMM0_Da;
    auVar6._12_4_ = extraout_XMM0_Da;
    auStack_88 = divps(auVar13,auVar6);
    fVar21 = UStack_f8.fields.z / extraout_XMM0_Da;
    fStack_58 = extraout_XMM0_Da;
    fStack_54 = extraout_XMM0_Da;
    fStack_50 = extraout_XMM0_Da;
    fStack_4c = extraout_XMM0_Da;
    fStack_48 = extraout_XMM0_Da;
    uStack_44 = extraout_XMM0_Db_00;
    fVar19 = (float)il2cpp_runtime_helper_059d7e70(0);
    if (89.0 <= fVar19) {
      return;
    }
    UVar22.fields.z = fStack_d8;
    UVar22.fields.x = (float)auStack_e8._0_4_;
    UVar22.fields.y = (float)auStack_e8._4_4_;
    Settings_MobileAimAssist__FaceBladeTarget(human,UVar22,pMVar8);
    if (target != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= (target->klass->_2).typeHierarchyDepth) &&
         ((target->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
        pUVar4 = (human->fields).Cache;
        if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar9 = (pUVar4->fields).Rigidbody, pUVar9 == (UnityEngine_Rigidbody_o *)0x0)) goto label_059cc16a;
        fVar20 = fVar20 * fStack_48;
        auVar14._0_4_ = (float)auStack_a8._0_4_ * fStack_58;
        auVar14._4_4_ = (float)auStack_a8._4_4_ * fStack_54;
        auVar14._8_4_ = fStack_a0 * fStack_50;
        auVar14._12_4_ = fStack_9c * fStack_4c;
        goto label_059cc154;
      }
    }
    fVar19 = Settings_MobileAimAssist__GetBladeAssistRange(target,pMVar8);
    if (fStack_78 <= fVar19) {
      return;
    }
    pUVar4 = (human->fields).Cache;
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar5 = (pUVar4->fields).Transform, fStack_38 = fVar19, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      auStack_68 = ZEXT416((uint)(fVar20 * fVar21 +
                                 (float)auStack_a8._4_4_ * (float)auStack_88._4_4_ +
                                 (float)auStack_a8._0_4_ * (float)auStack_88._0_4_));
      UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      fVar19 = (float)il2cpp_runtime_helper_05956b50(0);
      if ((0.0 < (float)auStack_68._0_4_) && (fVar19 <= fStack_38)) {
        return;
      }
      fVar19 = fStack_38 / fStack_78;
      auVar11 = ZEXT812(0x3f800000);
      if (fVar19 <= auVar11._0_4_) {
        auVar11._4_8_ = auVar11._4_8_;
        auVar11._0_4_ = fVar19;
      }
      fVar19 = asinf((float)(-(uint)(0.0 <= fVar19) & auVar11._0_4_));
      uStack_b8 = CONCAT44(uStack_b8._4_4_,fVar19);
      UStack_108.x = (float)auStack_88._0_4_ - (float)auStack_68._0_4_ * (float)auStack_a8._0_4_;
      UStack_108.y = (float)auStack_88._4_4_ - (float)auStack_68._0_4_ * (float)auStack_a8._4_4_;
      UStack_108.z = fVar21 - fVar20 * (float)auStack_68._0_4_;
      if (UStack_108.z * UStack_108.z + UStack_108.y * UStack_108.y + UStack_108.x * UStack_108.x < 0.0001) {
        pUVar4 = (human->fields).Cache;
        if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_059cc16a;
        UStack_108 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_059d8010(&UStack_108);
      fStack_d8 = cosf((float)uStack_b8);
      fVar20 = fVar20 * fStack_d8;
      auStack_98._0_4_ = UStack_108.x;
      auStack_98._4_4_ = UStack_108.y;
      auStack_98._8_8_ = 0;
      auStack_e8._0_4_ = UStack_108.z;
      uStack_d4 = extraout_XMM0_Db_01;
      uStack_d0 = extraout_XMM0_Dc_00;
      uStack_cc = extraout_XMM0_Dd_00;
      fVar19 = sinf((float)uStack_b8);
      fStack_c0 = (float)auStack_e8._0_4_ * fVar19 + fVar20;
      fVar20 = (float)auStack_a8._0_4_ * fStack_d8;
      uStack_c8 = CONCAT44(fVar19 * (float)auStack_98._4_4_ + (float)auStack_a8._4_4_ * fStack_d8,
                           fVar19 * (float)auStack_98._0_4_ + fVar20);
      pUVar4 = (human->fields).Cache;
      if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
        pUVar9 = (pUVar4->fields).Rigidbody;
        uVar10 = il2cpp_runtime_helper_059d80e0(&uStack_c8);
        if (pUVar9 != (UnityEngine_Rigidbody_o *)0x0) {
          fVar20 = fStack_48 * fVar20;
          auVar14._4_4_ = fStack_54 * (float)((ulong)uVar10 >> 0x20);
          auVar14._0_4_ = fStack_58 * (float)uVar10;
          auVar14._8_4_ = fStack_50 * (float)extraout_XMM0_Qb_02;
          auVar14._12_4_ = fStack_4c * (float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
label_059cc154:
          value.fields._0_8_ = auVar14._0_8_;
          value.fields.z = fVar20;
          UnityEngine_Rigidbody__set_linearVelocity(pUVar9,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_059cc16a:
  ThrowNullReferenceException();
}


// Settings.MobileAimAssist$$GetBladeAssistRange
// il2cpp: float Settings_MobileAimAssist__GetBladeAssistRange (Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x59ccbd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ccd65: jmp 0x59ccc74
// asm:   0x59ccd6a: movaps xmm0, xmm1
// asm:   0x59ccd6d: jmp 0x59ccde4

float Settings_MobileAimAssist__GetBladeAssistRange(Characters_BaseCharacter_o *target,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UnityEngine_Collider_o *__this;
  void *pvVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  UnityEngine_Object_o *x;
  float fVar12;
  float fVar13;
  float local_38;
  float fStack_34;
  UnityEngine_Bounds_o local_28;
  
  if (Il2CppMethodInitialized_07545c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_07545c44 = '\x01';
  }
  if (target != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (target->klass->_2).typeHierarchyDepth) &&
       ((target->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    {
      if ((*(uint64_t *)((char *)target + 0x108)) == (void *)0x0) {
        x = (UnityEngine_Object_o *)0x0;
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        x = *(UnityEngine_Object_o **)((long)(*(uint64_t *)((char *)target + 0x108)) + 0x68);
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (((*(uint64_t *)((char *)target + 0x108)) != (void *)0x0) &&
           (__this = *(UnityEngine_Collider_o **)((long)(*(uint64_t *)((char *)target + 0x108)) + 0x68),
           __this != (UnityEngine_Collider_o *)0x0)) {
          UnityEngine_Collider__get_bounds(&local_28,__this,(MethodInfo *)0x0);
          pIVar5 = SZArrayNew(TypeInfo_float_array,3);
          if (pIVar5 != (Il2CppObject *)0x0) {
            pvVar3 = pIVar5[1].monitor;
            uVar6 = (uint)pvVar3;
            if (uVar6 != 0) {
              local_38 = local_28.fields.m_Extents.fields.x;
              fStack_34 = local_28.fields.m_Extents.fields.y;
              *(float *)&pIVar5[2].klass = local_38;
              if ((uVar6 != 1) && (*(float *)((long)&pIVar5[2].klass + 4) = fStack_34, 2 < uVar6)) {
                *(float *)&pIVar5[2].monitor = local_28.fields.m_Extents.fields.z;
                if (1 < (int)uVar6) {
                  uVar8 = (ulong)pvVar3 & 0xffffffff;
                  uVar11 = uVar8 - 1;
                  uVar7 = (ulong)((uint)uVar11 & 3);
                  if (uVar8 - 2 < 3) {
                    lVar9 = 1;
                  }
                  else {
                    uVar8 = 0;
                    do {
                      uVar10 = uVar8;
                      fVar12 = *(float *)((long)&pIVar5[2].klass + uVar10 * 4 + 4);
                      if (local_38 <= fVar12) {
                        fVar12 = local_38;
                      }
                      fVar13 = *(float *)((long)&pIVar5[2].monitor + uVar10 * 4);
                      if (fVar12 <= fVar13) {
                        fVar13 = fVar12;
                      }
                      fVar12 = *(float *)((long)&pIVar5[2].monitor + uVar10 * 4 + 4);
                      if (fVar13 <= fVar12) {
                        fVar12 = fVar13;
                      }
                      local_38 = *(float *)((long)&pIVar5[3].klass + uVar10 * 4);
                      if (fVar12 <= local_38) {
                        local_38 = fVar12;
                      }
                      uVar8 = uVar10 + 4;
                    } while ((uVar11 & 0xfffffffffffffffc) != uVar10 + 4);
                    lVar9 = uVar10 + 5;
                  }
                  if (uVar7 != 0) {
                    uVar11 = 0;
                    fVar12 = local_38;
                    do {
                      local_38 = *(float *)((long)&pIVar5[2].klass + uVar11 * 4 + lVar9 * 4);
                      if (fVar12 <= local_38) {
                        local_38 = fVar12;
                      }
                      uVar11 = uVar11 + 1;
                      fVar12 = local_38;
                    } while (uVar7 != uVar11);
                  }
                }
                return local_38 + 2.0;
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return 2.0;
}


// Settings.MobileAimAssist$$FaceBladeTarget
// il2cpp: void Settings_MobileAimAssist__FaceBladeTarget (Characters_Human_o* human, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x59cc4a0

void Settings_MobileAimAssist__FaceBladeTarget
               (Characters_Human_o *human,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this;
  UnityEngine_Rigidbody_o *__this_00;
  float fVar2;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float __x;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Quaternion_Fields value;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_o local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  __x = direction.fields.z;
  fVar2 = direction.fields.x;
  if (__x * __x + fVar2 * fVar2 + 0.0 < 0.0001) {
    return;
  }
  fVar2 = atan2f(fVar2,__x);
  local_38.fields.x = 0.0;
  uVar3 = 0;
  uVar4 = 0;
  local_28._0_4_ = fVar2 * 57.29578;
  local_38.fields.y = fVar2 * 57.29578 * 0.017453292;
  local_38.fields.z = 0.0;
  value = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad(&local_38,(MethodInfo *)0x0);
  if (human != (Characters_Human_o *)0x0) {
    (human->fields).TargetAngle = (float)local_28._0_4_;
    (human->fields)._targetRotation.fields = value;
    pUVar1 = (human->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this = (pUVar1->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      local_28._8_4_ = extraout_XMM0_Dc;
      local_28._0_8_ = value._0_8_;
      local_28._12_4_ = extraout_XMM0_Dd;
      local_18._8_4_ = uVar3;
      local_18._0_8_ = value._8_8_;
      local_18._12_4_ = uVar4;
      UnityEngine_Transform__set_rotation(__this,(UnityEngine_Quaternion_o)value,(MethodInfo *)0x0);
      pUVar1 = (human->fields).Cache;
      if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
         (__this_00 = (pUVar1->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        value_00.fields.z = (float)local_18._0_4_;
        value_00.fields.w = (float)local_18._4_4_;
        value_00.fields.x = (float)local_28._0_4_;
        value_00.fields.y = (float)local_28._4_4_;
        UnityEngine_Rigidbody__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.MobileAimAssist$$GetTargetAimPoint
// il2cpp: UnityEngine_Vector3_o Settings_MobileAimAssist__GetTargetAimPoint (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x59cc210

UnityEngine_Vector3_o
Settings_MobileAimAssist__GetTargetAimPoint(Characters_BaseCharacter_o *character,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  UnityEngine_Object_o *x;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  bool bVar7;
  Characters_BaseCharacter_c *pCVar8;
  byte bVar9;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_Fields UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  
  if (Il2CppMethodInitialized_07545c45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c45 = '\x01';
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
label_059cc413:
    ThrowNullReferenceException();
  }
  pCVar8 = character->klass;
  bVar9 = (pCVar8->_2).typeHierarchyDepth;
  bVar3 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
  if (((bVar3 <= bVar9) &&
      ((pCVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) &&
     ((*(uint64_t *)((char *)character + 0x108)) != (void *)0x0)) {
    x = *(UnityEngine_Object_o **)((long)(*(uint64_t *)((char *)character + 0x108)) + 0x40);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      if (((*(uint64_t *)((char *)character + 0x108)) != (void *)0x0) &&
         (pUVar5 = *(UnityEngine_Transform_o **)((long)(*(uint64_t *)((char *)character + 0x108)) + 0x40),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UVar11 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar11;
      }
      goto label_059cc413;
    }
    pCVar8 = character->klass;
    bVar9 = (pCVar8->_2).typeHierarchyDepth;
  }
  bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((bVar3 <= bVar9) &&
      ((pCVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) &&
     (pUVar4 = (character->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) {
    pUVar5 = (pUVar4->fields).Transform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar4 = (character->fields).Cache;
      if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar1 = (pUVar6->upVector).fields.x;
        uVar2 = (pUVar6->upVector).fields.y;
        UVar13.fields.x = UVar12.fields.x + (float)uVar1 * 1.2;
        UVar13.fields.y = UVar12.fields.y + (float)uVar2 * 1.2;
        UVar13.fields.z = UVar12.fields.z + (pUVar6->upVector).fields.z * 1.2;
        return (UnityEngine_Vector3_o)UVar13.fields;
      }
      goto label_059cc413;
    }
    pCVar8 = character->klass;
  }
  UVar12.fields._0_8_ =
       (*(pCVar8->vtable)._72_GetPosition.methodPtr)(character,(pCVar8->vtable)._72_GetPosition.method);
  UVar10.fields.z = in_XMM1_Da;
  UVar10.fields._0_8_ = (undefined8)UVar12.fields._0_8_;
  return (UnityEngine_Vector3_o)UVar10.fields;
}


