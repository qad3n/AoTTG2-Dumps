// Type: Controllers.BaseAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/BaseAIController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseAIController.cs
// --------------------------------

// Controllers.BaseAIController$$get_AIEnabled
// il2cpp: bool Controllers_BaseAIController__get_AIEnabled (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9b340

bool Controllers_BaseAIController__get_AIEnabled(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._aiEnabled;
}


// Controllers.BaseAIController$$set_AIEnabled
// il2cpp: void Controllers_BaseAIController__set_AIEnabled (Controllers_BaseAIController_o* __this, bool value, const MethodInfo* method);
// 0x5b9b350
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9b3d9: test bpl, bpl
// asm:   0x5b9b4dc: jmp 0x5b9b4c7

void Controllers_BaseAIController__set_AIEnabled
               (Controllers_BaseAIController_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Controllers_BaseAIController_c *pCVar3;
  Characters_BaseCharacter_o *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_07547449 = '\x01';
  }
  if ((__this->fields)._aiEnabled != value) {
    (__this->fields)._aiEnabled = value;
    pCVar4 = (__this->fields)._character;
    if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
         ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)
         ) {
        *(bool *)&(*(uint64_t *)((char *)pCVar4 + 0x298)) = value;
      }
    }
    if (!value) {
      if (Il2CppMethodInitialized_0754744f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
        Il2CppMethodInitialized_0754744f = '\x01';
      }
      (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy);
      (__this->fields)._focusTimeLeft = 0.0;
      pCVar4 = (__this->fields)._character;
      if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
           ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
          (*(uint64_t *)((char *)pCVar4 + 0x168)) = (System_String_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar4 + 0x168)));
          pCVar4 = (__this->fields)._character;
          if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_05b9b548;
        }
        (pCVar4->fields).HasDirection = false;
        pCVar3 = __this->klass;
        bVar1 = (pCVar3->_2).typeHierarchyDepth;
        bVar2 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
        if ((bVar2 <= bVar1) &&
           ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
          Controllers_HumanAIController__StopInput
                    ((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
          return;
        }
        bVar2 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
        if (bVar1 < bVar2) {
          return;
        }
        if ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController) {
          return;
        }
        *(undefined8 *)((long)&(*(uint64_t *)((char *)__this + 0x128)) + 4) = 0;
        *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x140)) = 0;
        *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x98)) = 0;
        pCVar3 = (*(uint64_t *)((char *)__this + 0x90));
        if (pCVar3 != (Controllers_BaseAIController_c *)0x0) {
          *(undefined1 *)((long)&(pCVar3->_2).initializationExceptionGCHandle + 4) = 0;
          *(undefined1 *)&(pCVar3->_2).vtable_count = 0;
          fVar5 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
          *(float *)&(*(uint8_t *)((char *)__this + 0x108)) = fVar5;
          return;
        }
      }
label_05b9b548:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Controllers.BaseAIController$$get_IsWalking
// il2cpp: bool Controllers_BaseAIController__get_IsWalking (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9b650

bool Controllers_BaseAIController__get_IsWalking(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_0754744a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_0754744a = '\x01';
  }
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      return *(char *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x238)) + 4) != '\0';
    }
  }
  bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if ((__this->klass->_2).typeHierarchyDepth < bVar1) {
    return false;
  }
  if ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController) {
    return *(char *)&(*(uint32_t *)((char *)__this + 0xd0)) == '\0';
  }
  return false;
}


// Controllers.BaseAIController$$set_IsWalking
// il2cpp: void Controllers_BaseAIController__set_IsWalking (Controllers_BaseAIController_o* __this, bool value, const MethodInfo* method);
// 0x5b9b700

void Controllers_BaseAIController__set_IsWalking
               (Controllers_BaseAIController_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_0754744b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_0754744b = '\x01';
  }
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      *(bool *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x238)) + 4) = value;
      return;
    }
  }
  bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
    return;
  }
  *(bool *)&(*(uint32_t *)((char *)__this + 0xd0)) = !value;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  (*(uint8_t *)((char *)pCVar2 + 0x128)) = value;
  return;
}


// Controllers.BaseAIController$$get_UsePathfinding
// il2cpp: bool Controllers_BaseAIController__get_UsePathfinding (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9b800

bool Controllers_BaseAIController__get_UsePathfinding
               (Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._usePathfinding;
}


// Controllers.BaseAIController$$set_UsePathfinding
// il2cpp: void Controllers_BaseAIController__set_UsePathfinding (Controllers_BaseAIController_o* __this, bool value, const MethodInfo* method);
// 0x5b9b810

void Controllers_BaseAIController__set_UsePathfinding
               (Controllers_BaseAIController_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Behaviour_o *__this_00;
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754744c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754744c = '\x01';
  }
  (__this->fields)._usePathfinding = value;
  if (value) {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._agent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      bVar1 = Map_MapLoader__get_HasNavMesh((MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          Controllers_BaseAIController__CreateAgent
                    (__this,(UnityEngine_CapsuleCollider_o *)pUVar2,10.0,2,in_RCX);
        }
      }
    }
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._agent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (UnityEngine_Behaviour_o *)(__this->fields)._agent;
    if (__this_00 == (UnityEngine_Behaviour_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.BaseAIController$$GetTarget
// il2cpp: Characters_ITargetable_o* Controllers_BaseAIController__GetTarget (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9bbc0

Characters_ITargetable_o *
Controllers_BaseAIController__GetTarget(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,method);
  if (bVar1) {
    return (__this->fields)._enemy;
  }
  return (Characters_ITargetable_o *)0x0;
}


// Controllers.BaseAIController$$IsValidTarget
// il2cpp: bool Controllers_BaseAIController__IsValidTarget (Characters_ITargetable_o* target, const MethodInfo* method);
// 0x5b9bbe0

bool Controllers_BaseAIController__IsValidTarget(Characters_ITargetable_o *target,MethodInfo *method)

{
  byte bVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  Characters_ITargetable_c *pCVar4;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_0754744d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754744d = '\x01';
  }
  if (target == (Characters_ITargetable_o *)0x0) {
    return false;
  }
  pCVar4 = target->klass;
  bVar1 = (TypeInfo_UnityEngine_Object->_2).typeHierarchyDepth;
  if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
     ((pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Object)) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    pCVar4 = target->klass;
  }
  uVar6 = (ulong)(pCVar4->_2).interface_offsets_count;
  if (uVar6 != 0) {
    pIVar2 = (pCVar4->_1).interfaceOffsets;
    lVar7 = 0;
    do {
      if (*(Characters_ITargetable_c **)((long)&pIVar2->interfaceType + lVar7) ==
          TypeInfo_Characters_ITargetable) {
        pVVar5 = pCVar4->vtable + (*(int *)((long)&pIVar2->offset + lVar7) + 2);
        goto label_05b9bcc9;
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar6 * 0x10 != lVar7);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)target,(Il2CppClass *)TypeInfo_Characters_ITargetable,2);
label_05b9bcc9:
  bVar3 = (*pVVar5->methodPtr)((Il2CppObject *)target,pVVar5->method);
  return bVar3;
}


// Controllers.BaseAIController$$SetTarget
// il2cpp: void Controllers_BaseAIController__SetTarget (Controllers_BaseAIController_o* __this, Characters_ITargetable_o* target, float focusDuration, const MethodInfo* method);
// 0x5b9bce0

void Controllers_BaseAIController__SetTarget
               (Controllers_BaseTitanAIController_o *__this,Characters_ITargetable_o *enemy,float focusTime,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseTitan_o *pCVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_0754744e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    Il2CppMethodInitialized_0754744e = '\x01';
  }
  if (enemy == (Characters_ITargetable_o *)0x0) {
    if (Il2CppMethodInitialized_0754744f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
      Il2CppMethodInitialized_0754744f = '\x01';
    }
    (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy);
    (__this->fields)._focusTimeLeft = 0.0;
    pCVar2 = (__this->fields)._character;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)
         ) {
        (*(uint64_t *)((char *)pCVar2 + 0x168)) = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar2 + 0x168)));
        return;
      }
    }
  }
  else {
    (__this->fields)._automaticTargeting = true;
    if (Il2CppMethodInitialized_0754744f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
      Il2CppMethodInitialized_0754744f = '\x01';
    }
    (__this->fields)._enemy = enemy;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy);
    if ((focusTime == 0.0) && (!NAN(focusTime))) {
      focusTime = (__this->fields).FocusTime;
    }
    (__this->fields)._focusTimeLeft = focusTime;
    pCVar2 = (__this->fields)._character;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)
         ) {
        (*(uint64_t *)((char *)pCVar2 + 0x168)) = (System_String_o *)enemy;
        Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar2 + 0x168)));
      }
    }
    (__this->fields)._idleTimeLeft = 0.0;
    bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
    if (((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
        ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) && ((__this->fields).AIState == 7)) {
      (__this->fields)._lowMovementSpeedTime = 0.0;
      (__this->fields)._recoveryTimeLeft = 0.0;
      (__this->fields)._avoidAngle = 0.0;
      (__this->fields).AIState = 0;
      pCVar3 = (__this->fields)._titan;
      if (pCVar3 == (Characters_BaseTitan_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pCVar3->fields).HasDirection = false;
      (pCVar3->fields).IsSit = false;
      fVar4 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
      (__this->fields)._stateTimeLeft = fVar4;
      return;
    }
  }
  return;
}


// Controllers.BaseAIController$$AssignTarget
// il2cpp: void Controllers_BaseAIController__AssignTarget (Controllers_BaseAIController_o* __this, Characters_ITargetable_o* target, float focusDuration, const MethodInfo* method);
// 0x5b9bef0

void Controllers_BaseAIController__AssignTarget
               (Controllers_BaseAIController_o *__this,Characters_ITargetable_o *target,float focusDuration,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_0754744f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_0754744f = '\x01';
  }
  (__this->fields)._enemy = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy);
  fVar3 = 0.0;
  if (target != (Characters_ITargetable_o *)0x0) {
    fVar3 = focusDuration;
    if ((focusDuration == 0.0) && (!NAN(focusDuration))) {
      fVar3 = (__this->fields).FocusTime;
    }
  }
  (__this->fields)._focusTimeLeft = fVar3;
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    {
      (*(uint64_t *)((char *)pCVar2 + 0x168)) = (System_String_o *)target;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar2 + 0x168)));
      return;
    }
  }
  return;
}


// Controllers.BaseAIController$$ClearTarget
// il2cpp: void Controllers_BaseAIController__ClearTarget (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9b550

void Controllers_BaseAIController__ClearTarget(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_0754744f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_0754744f = '\x01';
  }
  (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy);
  (__this->fields)._focusTimeLeft = 0.0;
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    {
      (*(uint64_t *)((char *)pCVar2 + 0x168)) = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar2 + 0x168)));
      return;
    }
  }
  return;
}


// Controllers.BaseAIController$$SetDetectRange
// il2cpp: void Controllers_BaseAIController__SetDetectRange (Controllers_BaseAIController_o* __this, float range, const MethodInfo* method);
// 0x5b9c020

void Controllers_BaseAIController__SetDetectRange
               (Controllers_BaseAIController_o *__this,float range,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).DetectRange;
  if ((fVar1 == range) && (!NAN(fVar1) && !NAN(range))) {
    return;
  }
  (__this->fields).DetectRange = range;
  (__this->fields)._updateEnemyTimeLeft = 0.0;
  return;
}


// Controllers.BaseAIController$$GetNearestEnemy
// il2cpp: Characters_ITargetable_o* Controllers_BaseAIController__GetNearestEnemy (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9c040
// eh: try 0x5b9c294..0x5b9c3e2 -> pad 0x5b9c3ef (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b9c407..0x5b9c40c -> pad 0x5b9c431 cleanup
// eh: try 0x5b9c434..0x5b9c43e -> pad 0x5b9c446 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9c1b9: jmp 0x5b9c3e2
// asm:   0x5b9c26d: movss dword ptr [rsp + 0x10], xmm0
// asm:   0x5b9c273: mov r14, rbx
// asm:   0x5b9c276: jmp 0x5b9c290
// asm:   0x5b9c2ea: jmp 0x5b9c308
// asm:   0x5b9c3e7: jmp 0x5b9c3ef
// asm:   0x5b9c3e9: jmp 0x5b9c3ef
// asm:   0x5b9c3eb: jmp 0x5b9c3ef
// asm:   0x5b9c3ed: jmp 0x5b9c3ef
// asm:   0x5b9c3ef: mov rbx, rax
// asm:   0x5b9c3f2: cmp edx, 1
// asm:   0x5b9c3f5: jne 0x5b9c434
// asm:   0x5b9c3f7: mov rdi, rbx
// asm:   0x5b9c3fa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b9c3ff: mov rbx, qword ptr [rax]
// asm:   0x5b9c402: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5b9c407: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b9c40c: lea rax, [rip + 0x16f1ff5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_Dispose
// asm:   0x5b9c413: mov rsi, qword ptr [rax]
// asm:   0x5b9c416: lea rdi, [rsp + 0x70]
// asm:   0x5b9c41b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b9c420: test rbx, rbx
// asm:   0x5b9c423: je 0x5b9c36d
// asm:   0x5b9c429: mov rdi, rbx
// asm:   0x5b9c42c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b9c431: mov rbx, rax
// asm:   0x5b9c434: lea rdi, [rsp + 0x48]
// asm:   0x5b9c439: call 0x2fd83e0  ; il2cpp_runtime_helper_02fd83e0()
// asm:   0x5b9c43e: mov rdi, rbx
// asm:   0x5b9c441: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b9c446: mov rdi, rax
// asm:   0x5b9c449: call 0x2ab61e0  ; __clang_call_terminate()

Characters_ITargetable_o *
Controllers_BaseAIController__GetNearestEnemy(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Characters_BaseDetection_o *pCVar4;
  System_Collections_Generic_List_MapTargetable__o *__this_00;
  undefined4 uVar5;
  Il2CppObject *__this_01;
  bool bVar6;
  Characters_BaseCharacter_o *pCVar7;
  MethodInfo *pMVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  float local_b8;
  float fStack_b4;
  undefined1 local_70 [16];
  Characters_BaseCharacter_o *local_60;
  undefined1 local_58 [16];
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_07547450 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapTargetable_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07547450 = '\x01';
  }
  pCVar7 = (__this->fields)._character;
  if (((pCVar7 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar2 = (pCVar7->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pMVar8 = (MethodInfo *)0x0;
    UVar13 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    local_58._8_4_ = extraout_XMM0_Dc;
    local_58._0_8_ = UVar13.fields._0_8_;
    local_58._12_4_ = extraout_XMM0_Dd;
    pCVar7 = (__this->fields)._character;
    if (pCVar7 != (Characters_BaseCharacter_o *)0x0) {
      fVar9 = (__this->fields).DetectRange;
      pCVar4 = (pCVar7->fields).Detection;
      if (pCVar4 == (Characters_BaseDetection_o *)0x0) {
        pCVar7 = (Characters_BaseCharacter_o *)0x0;
        bVar6 = Controllers_BaseAIController__IsValidTarget((Characters_ITargetable_o *)0x0,pMVar8);
        if (bVar6) goto label_05b9c3e2;
      }
      else {
        pCVar7 = (pCVar4->fields).ClosestEnemy;
        bVar6 = Controllers_BaseAIController__IsValidTarget((Characters_ITargetable_o *)pCVar7,pMVar8);
        if (bVar6) {
          if (((pCVar7 == (Characters_BaseCharacter_o *)0x0) ||
              (pUVar2 = (pCVar7->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
             (pUVar3 = (pUVar2->fields).Transform, pUVar3 == (UnityEngine_Transform_o *)0x0))
          goto label_05b9c3e2;
          UVar14 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
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
          fVar10 = UVar14.fields.y - (float)local_58._4_4_;
          fVar11 = UVar14.fields.z - UVar13.fields.z;
          fVar12 = UVar14.fields.x - (float)local_58._0_4_;
          fVar10 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          if (fVar10 < fVar9) {
            fVar9 = fVar10;
          }
          else {
            pCVar7 = (Characters_BaseCharacter_o *)0x0;
          }
        }
        else {
          pCVar7 = (Characters_BaseCharacter_o *)0x0;
        }
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
      if (__this_00 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                   (System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_MapTargetable_GetEnumerator);
        local_48.fields._current = (Il2CppObject *)local_60;
        local_48.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
        local_48.fields._index = local_70._8_4_;
        local_48.fields._version = local_70._12_4_;
        local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        uVar5 = local_58._0_4_;
        local_70._8_8_ = &local_48;
        while( true ) {
          do {
            pMVar8 = MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_MoveNext;
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_MoveNext);
            __this_01 = local_48.fields._current;
            if (!bVar6) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (&local_48,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_Dispose);
              return (Characters_ITargetable_o *)pCVar7;
            }
            bVar6 = Controllers_BaseAIController__IsValidTarget
                              ((Characters_ITargetable_o *)local_48.fields._current,pMVar8);
          } while (!bVar6);
          if ((Characters_BaseCharacter_o *)__this_01 == (Characters_BaseCharacter_o *)0x0) break;
          UVar14 = Map_MapTargetable__GetPosition((Map_MapTargetable_o *)__this_01,(MethodInfo *)0x0);
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
          local_b8 = UVar14.fields.x;
          fStack_b4 = UVar14.fields.y;
          fVar10 = UVar14.fields.z - UVar13.fields.z;
          fVar10 = (fStack_b4 - (float)local_58._4_4_) * (fStack_b4 - (float)local_58._4_4_) +
                   (local_b8 - (float)uVar5) * (local_b8 - (float)uVar5) + fVar10 * fVar10;
          if (fVar10 < 0.0) {
            fVar9 = sqrtf(fVar10);
            pCVar7 = (Characters_BaseCharacter_o *)__this_01;
          }
          else if (SQRT(fVar10) < fVar9) {
            fVar9 = SQRT(fVar10);
            pCVar7 = (Characters_BaseCharacter_o *)__this_01;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_05b9c3e2:
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$TargetNearestEnemy
// il2cpp: void Controllers_BaseAIController__TargetNearestEnemy (Controllers_BaseAIController_o* __this, float focusDuration, const MethodInfo* method);
// 0x5b9c450

void Controllers_BaseAIController__TargetNearestEnemy
               (Controllers_BaseAIController_o *__this,float focusDuration,MethodInfo *method)

{
  Characters_ITargetable_o *enemy;
  MethodInfo *method_00;
  
  (__this->fields)._automaticTargeting = true;
  enemy = Controllers_BaseAIController__GetNearestEnemy(__this,method);
  Controllers_BaseAIController__SetTarget
            ((Controllers_BaseTitanAIController_o *)__this,enemy,focusDuration,method_00);
  return;
}


// Controllers.BaseAIController$$UpdateTargeting
// il2cpp: void Controllers_BaseAIController__UpdateTargeting (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9c480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9c6bc: jmp 0x5b9c594

void Controllers_BaseAIController__UpdateTargeting(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  Characters_ITargetable_o **targetAddress;
  float *pfVar1;
  byte bVar2;
  char cVar3;
  Characters_BaseCharacter_o *pCVar4;
  System_String_o *pSVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  bool bVar7;
  System_String_o *pSVar8;
  Characters_ITargetable_c *method_00;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  float local_38;
  
  if (Il2CppMethodInitialized_07547451 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07547451 = '\x01';
  }
  fVar11 = (__this->fields)._focusTimeLeft;
  fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._focusTimeLeft = fVar11 - fVar9;
  fVar11 = (__this->fields)._updateEnemyTimeLeft;
  fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._updateEnemyTimeLeft = fVar11 - fVar9;
  targetAddress = &(__this->fields)._enemy;
  bVar7 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,method);
  if (bVar7) {
label_05b9c577:
    cVar3 = (__this->fields)._aiEnabled;
  }
  else {
    if (Il2CppMethodInitialized_0754744f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
      Il2CppMethodInitialized_0754744f = '\x01';
    }
    (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
    method = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this->fields)._focusTimeLeft = 0.0;
    pCVar4 = (__this->fields)._character;
    if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_05b9c577;
    bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pCVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    goto label_05b9c577;
    (*(uint64_t *)((char *)pCVar4 + 0x168)) = (System_String_o *)0x0;
    method = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar4 + 0x168)));
    cVar3 = (__this->fields)._aiEnabled;
  }
  if ((cVar3 == '\0') ||
     (((__this->fields)._moveToActive != false && ((__this->fields)._moveToIgnoreEnemies != false)))) {
    if (Il2CppMethodInitialized_0754744f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
      Il2CppMethodInitialized_0754744f = '\x01';
    }
    (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this->fields)._focusTimeLeft = 0.0;
    pCVar4 = (__this->fields)._character;
    if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
      bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar2 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
         ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)
         ) {
        (*(uint64_t *)((char *)pCVar4 + 0x168)) = (System_String_o *)0x0;
label_05b9c61c:
        Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar4 + 0x168)));
        return;
      }
    }
  }
  else if (((__this->fields)._automaticTargeting != false) && ((__this->fields)._updateEnemyTimeLeft <= 0.0))
  {
    (__this->fields)._updateEnemyTimeLeft = 0.2;
    pSVar8 = (System_String_o *)Controllers_BaseAIController__GetNearestEnemy(__this,method);
    pSVar5 = (System_String_o *)(__this->fields)._enemy;
    if (pSVar8 == (System_String_o *)0x0) {
      if (pSVar5 != (System_String_o *)0x0) {
        pCVar4 = (__this->fields)._character;
        if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
          pSVar5 = (pCVar4->fields).Team;
          method_00 = (Characters_ITargetable_c *)il2cpp_runtime_helper_02c13830(0,TypeInfo_Characters_ITargetable);
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar7 = GameManagers_TeamInfo__SameTeam(pSVar5,(System_String_o *)method_00,(MethodInfo *)0x0);
          if (bVar7) {
label_05b9c80a:
            Controllers_BaseAIController__ClearTarget(__this,(MethodInfo *)method_00);
            return;
          }
          pCVar4 = (__this->fields)._character;
          if (((pCVar4 != (Characters_BaseCharacter_o *)0x0) &&
              (pUVar6 = (pCVar4->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
             (__this_00 = (pUVar6->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
            UVar12 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
            if (*targetAddress != (Characters_ITargetable_o *)0x0) {
              method_00 = TypeInfo_Characters_ITargetable;
              fVar11 = UVar12.fields.z;
              uVar10 = il2cpp_runtime_helper_02fd8410(1);
              local_38 = UVar12.fields.x;
              fVar11 = (float)il2cpp_runtime_helper_05956b50(local_38,UVar12.fields.z,uVar10,fVar11,0);
              pfVar1 = &(__this->fields).FocusRange;
              if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
                return;
              }
              goto label_05b9c80a;
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
    else if ((pSVar5 == (System_String_o *)0x0) || (fVar11 = (__this->fields)._focusTimeLeft, fVar11 <= 0.0))
    {
      if (Il2CppMethodInitialized_0754744f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
        Il2CppMethodInitialized_0754744f = '\x01';
      }
      (__this->fields)._enemy = (Characters_ITargetable_o *)pSVar8;
      Il2CppCodeGenWriteBarrier(targetAddress);
      (__this->fields)._focusTimeLeft = (__this->fields).FocusTime;
      pCVar4 = (__this->fields)._character;
      if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
        bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
        if ((bVar2 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
           ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
          (*(uint64_t *)((char *)pCVar4 + 0x168)) = pSVar8;
          goto label_05b9c61c;
        }
      }
    }
    else if (pSVar5 == pSVar8) {
      fVar9 = (__this->fields).FocusTime;
      if (fVar9 <= fVar11) {
        fVar9 = fVar11;
      }
      (__this->fields)._focusTimeLeft = fVar9;
    }
  }
  return;
}


// Controllers.BaseAIController$$MoveTo
// il2cpp: void Controllers_BaseAIController__MoveTo (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x5b9c840

void Controllers_BaseAIController__MoveTo
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o position,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  Controllers_BaseAIController__BeginMove(__this,position,range,ignoreEnemies,method_00);
  return;
}


// Controllers.BaseAIController$$MoveToTarget
// il2cpp: void Controllers_BaseAIController__MoveToTarget (Controllers_BaseAIController_o* __this, Characters_ITargetable_o* target, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x5b9ca20

void Controllers_BaseAIController__MoveToTarget
               (Controllers_BaseAIController_o *__this,Characters_ITargetable_o *target,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  Characters_ITargetable_c *pCVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar6;
  UnityEngine_Vector3_o position;
  
  method_01 = (MethodInfo *)target;
  if (Il2CppMethodInitialized_07547452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_07547452 = '\x01';
  }
  bVar3 = Controllers_BaseAIController__IsValidTarget(target,method_01);
  if (!bVar3) {
    return;
  }
  (__this->fields)._moveToTarget = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  if (target == (Characters_ITargetable_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = target->klass;
  uVar5 = (ulong)(pCVar1->_2).interface_offsets_count;
  if (uVar5 != 0) {
    pIVar2 = (pCVar1->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(Characters_ITargetable_c **)((long)&pIVar2->interfaceType + lVar6) ==
          TypeInfo_Characters_ITargetable) {
        pVVar4 = pCVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar6) + 1);
        goto label_05b9caed;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar5 * 0x10 != lVar6);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)target,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05b9caed:
  position = (*pVVar4->methodPtr)((Il2CppObject *)target,pVVar4->method);
  Controllers_BaseAIController__BeginMove(__this,position,range,ignoreEnemies,method_00);
  return;
}


// Controllers.BaseAIController$$BeginMove
// il2cpp: void Controllers_BaseAIController__BeginMove (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x5b9c8a0

void Controllers_BaseAIController__BeginMove
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o position,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Controllers_BaseAIController_c *pCVar4;
  
  if (Il2CppMethodInitialized_07547453 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_07547453 = '\x01';
  }
  (__this->fields)._idleTimeLeft = 0.0;
  (__this->fields)._moveToPosition.fields.x = position.fields.x;
  (__this->fields)._moveToPosition.fields.y = position.fields.y;
  (__this->fields)._moveToPosition.fields.z = position.fields.z;
  (__this->fields)._moveToRange = range;
  (__this->fields)._moveToIgnoreEnemies = ignoreEnemies;
  (__this->fields)._moveToActive = true;
  if (ignoreEnemies) {
    if (Il2CppMethodInitialized_0754744f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
      Il2CppMethodInitialized_0754744f = '\x01';
    }
    (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy);
    (__this->fields)._focusTimeLeft = 0.0;
    pCVar3 = (__this->fields)._character;
    if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)
         ) {
        (*(uint64_t *)((char *)pCVar3 + 0x168)) = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar3 + 0x168)));
      }
    }
  }
  pCVar4 = __this->klass;
  bVar1 = (pCVar4->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
  if ((bVar2 <= bVar1) &&
     ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Controllers_HumanAIController))
  {
    Controllers_HumanAIController__BeginMove((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  bVar2 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pCVar4->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar2)[-1].field_0x57] !=
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
    return;
  }
  Controllers_BaseTitanAIController__BeginMove
            ((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)(ulong)bVar2);
  return;
}


// Controllers.BaseAIController$$UpdateMoveTarget
// il2cpp: void Controllers_BaseAIController__UpdateMoveTarget (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9cc20

void Controllers_BaseAIController__UpdateMoveTarget(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  Characters_ITargetable_o **targetAddress;
  byte bVar1;
  byte bVar2;
  Characters_ITargetable_o *target;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Characters_BaseCharacter_o *pCVar5;
  Controllers_BaseAIController_c *pCVar6;
  bool bVar7;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  long lVar10;
  UnityEngine_Vector3_Fields UVar11;
  
  if (Il2CppMethodInitialized_07547454 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_07547454 = '\x01';
  }
  if (((__this->fields)._moveToActive != false) &&
     (target = (__this->fields)._moveToTarget, target != (Characters_ITargetable_o *)0x0)) {
    targetAddress = &(__this->fields)._moveToTarget;
    bVar7 = Controllers_BaseAIController__IsValidTarget(target,method);
    if (bVar7) {
      obj = (Il2CppObject *)*targetAddress;
      if (obj == (Il2CppObject *)0x0) {
label_05b9cdb4:
        ThrowNullReferenceException();
      }
      pIVar3 = obj->klass;
      uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar4->interfaceType + lVar10) ==
              TypeInfo_Characters_ITargetable) {
            pVVar8 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar10) + 1);
            goto label_05b9cd89;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05b9cd89:
      UVar11 = (UnityEngine_Vector3_Fields)(*pVVar8->methodPtr)(obj,pVVar8->method);
      (__this->fields)._moveToPosition.fields = UVar11;
    }
    else {
      (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      (__this->fields)._moveToActive = false;
      pCVar5 = (__this->fields)._character;
      if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto label_05b9cdb4;
      (pCVar5->fields).HasDirection = false;
      pCVar6 = __this->klass;
      bVar1 = (pCVar6->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
        Controllers_HumanAIController__Idle((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
        return;
      }
      bVar2 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pCVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar2)[-1].field_0x57] ==
          (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
        Controllers_BaseTitanAIController__ResetCommandState
                  ((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)(ulong)bVar2);
        return;
      }
    }
  }
  return;
}


// Controllers.BaseAIController$$IdleFor
// il2cpp: void Controllers_BaseAIController__IdleFor (Controllers_BaseAIController_o* __this, float time, const MethodInfo* method);
// 0x5b9cdc0

void Controllers_BaseAIController__IdleFor
               (Controllers_BaseAIController_o *__this,float time,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Controllers_BaseAIController_c *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_07547455 = '\x01';
  }
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  (__this->fields)._moveToActive = false;
  fVar5 = 0.0;
  if (0.0 <= time) {
    fVar5 = time;
  }
  (__this->fields)._idleTimeLeft = fVar5;
  if (Il2CppMethodInitialized_0754744f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_0754744f = '\x01';
  }
  (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy);
  (__this->fields)._focusTimeLeft = 0.0;
  pCVar3 = (__this->fields)._character;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    {
      (*(uint64_t *)((char *)pCVar3 + 0x168)) = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar3 + 0x168)));
    }
  }
  pCVar4 = __this->klass;
  bVar1 = (pCVar4->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
  if ((bVar2 <= bVar1) &&
     ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Controllers_HumanAIController))
  {
    Controllers_HumanAIController__StopInput((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
    Controllers_HumanAIController__Idle((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  bVar2 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
    return;
  }
  *(undefined1 *)&(*(uint64_t *)((char *)__this + 0xe0)) = 0;
  (*(uint32_t *)((char *)__this + 0xe8)) = 0.0;
  (*(uint32_t *)((char *)__this + 0xec)) = 0.0;
  Il2CppCodeGenWriteBarrier((void **)&(*(uint32_t *)((char *)__this + 0xe8)));
  *(undefined8 *)((long)&(*(uint64_t *)((char *)__this + 0x128)) + 4) = 0;
  *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x140)) = 0;
  *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x98)) = 0;
  pCVar4 = (*(uint64_t *)((char *)__this + 0x90));
  if (pCVar4 == (Controllers_BaseAIController_c *)0x0) {
    ThrowNullReferenceException();
  }
  *(undefined1 *)((long)&(pCVar4->_2).initializationExceptionGCHandle + 4) = 0;
  *(undefined1 *)&(pCVar4->_2).vtable_count = 0;
  UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
  *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x98)) = 7;
  *(float *)&(*(uint8_t *)((char *)__this + 0x108)) = time;
  return;
}


// Controllers.BaseAIController$$Awake
// il2cpp: void Controllers_BaseAIController__Awake (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9d050

void Controllers_BaseAIController__Awake(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    Il2CppMethodInitialized_07547456 = '\x01';
  }
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._character);
  return;
}


// Controllers.BaseAIController$$Start
// il2cpp: void Controllers_BaseAIController__Start (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9d0a0

void Controllers_BaseAIController__Start(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseAIController$$FixedUpdate
// il2cpp: void Controllers_BaseAIController__FixedUpdate (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9d0b0

void Controllers_BaseAIController__FixedUpdate(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseAIController$$GetAgentSpeed
// il2cpp: float Controllers_BaseAIController__GetAgentSpeed (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9d0c0

float Controllers_BaseAIController__GetAgentSpeed(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547457 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_07547457 = '\x01';
  }
  pCVar2 = (__this->fields)._character;
  fVar4 = 0.0;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      lVar3 = *(long *)&(*(uint8_t *)((char *)pCVar2 + 0x158));
      if (lVar3 == 0) {
        ThrowNullReferenceException();
      }
      fVar4 = *(float *)(lVar3 + 0x38);
      if (*(char *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x238)) + 4) != '\0') {
        return fVar4 * 0.25;
      }
    }
  }
  return fVar4;
}


// Controllers.BaseAIController$$CreateAgent
// il2cpp: void Controllers_BaseAIController__CreateAgent (Controllers_BaseAIController_o* __this, UnityEngine_CapsuleCollider_o* collider, float acceleration, int32_t obstacleAvoidance, const MethodInfo* method);
// 0x5b9b960

void Controllers_BaseAIController__CreateAgent
               (Controllers_BaseAIController_o *__this,UnityEngine_CapsuleCollider_o *collider,
               float acceleration,int32_t obstacleAvoidance,MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o **targetAddress;
  int32_t value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar1;
  float fVar2;
  float local_b0;
  float local_ac;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_a8;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_60;
  
  local_ac = acceleration;
  if (Il2CppMethodInitialized_07547458 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_NavMeshAgent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547458 = '\x01';
  }
  local_b0 = 0.0;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  fVar2 = Utility_Util__GetAgentSize(collider,(MethodInfo *)0x0);
  Utility_Util__GetAgentSettings
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_60,fVar2,&local_b0,(MethodInfo *)0x0);
  local_a8.m_BuildHeightMesh = local_60.m_BuildHeightMesh;
  local_a8.m_MaxJobWorkers = local_60.m_MaxJobWorkers;
  local_a8.m_PreserveTilesOutsideBounds = local_60.m_PreserveTilesOutsideBounds;
  local_a8.m_Debug.fields.m_Flags = local_60.m_Debug.fields.m_Flags;
  local_a8._61_3_ = local_60._61_3_;
  local_a8.m_OverrideVoxelSize = local_60.m_OverrideVoxelSize;
  local_a8.m_VoxelSize = local_60.m_VoxelSize;
  local_a8.m_OverrideTileSize = local_60.m_OverrideTileSize;
  local_a8.m_TileSize = local_60.m_TileSize;
  local_a8.m_AgentClimb = local_60.m_AgentClimb;
  local_a8.m_LedgeDropHeight = local_60.m_LedgeDropHeight;
  local_a8.m_MaxJumpAcrossDistance = local_60.m_MaxJumpAcrossDistance;
  local_a8.m_MinRegionArea = local_60.m_MinRegionArea;
  local_a8.m_AgentTypeID = local_60.m_AgentTypeID;
  local_a8.m_AgentRadius = local_60.m_AgentRadius;
  local_a8.m_AgentHeight = local_60.m_AgentHeight;
  local_a8.m_AgentSlope = local_60.m_AgentSlope;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_NavMeshAgent);
    targetAddress = &(__this->fields)._agent;
    (__this->fields)._agent = pUVar1;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = (__this->fields)._agent;
    value = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                      ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_a8,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
      UnityEngine_AI_NavMeshAgent__set_agentTypeID(pUVar1,value,(MethodInfo *)0x0);
      pUVar1 = *targetAddress;
      fVar2 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                        ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_a8,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
        UnityEngine_AI_NavMeshAgent__set_radius(pUVar1,fVar2 / local_b0,(MethodInfo *)0x0);
        pUVar1 = *targetAddress;
        fVar2 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                          ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_a8,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
          UnityEngine_AI_NavMeshAgent__set_height(pUVar1,fVar2 / local_b0,(MethodInfo *)0x0);
          if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            UnityEngine_AI_NavMeshAgent__set_acceleration(*targetAddress,local_ac,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
              UnityEngine_AI_NavMeshAgent__set_obstacleAvoidanceType
                        (*targetAddress,obstacleAvoidance,(MethodInfo *)0x0);
              if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                UnityEngine_AI_NavMeshAgent__set_angularSpeed(*targetAddress,10.0,(MethodInfo *)0x0);
                if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_autoRepath(*targetAddress,true,(MethodInfo *)0x0);
                  if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                    UnityEngine_AI_NavMeshAgent__set_stoppingDistance(*targetAddress,1.1,(MethodInfo *)0x0);
                    if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      UnityEngine_AI_NavMeshAgent__set_autoBraking(*targetAddress,false,(MethodInfo *)0x0);
                      if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        UnityEngine_AI_NavMeshAgent__set_updatePosition
                                  (*targetAddress,false,(MethodInfo *)0x0);
                        if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                          UnityEngine_AI_NavMeshAgent__set_updateRotation
                                    (*targetAddress,false,(MethodInfo *)0x0);
                          if (*targetAddress != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                            UnityEngine_AI_NavMeshAgent__set_avoidancePriority
                                      (*targetAddress,0,(MethodInfo *)0x0);
                            pUVar1 = (__this->fields)._agent;
                            fVar2 = (*(__this->klass->vtable)._7_GetAgentSpeed.methodPtr)
                                              (__this,(__this->klass->vtable)._7_GetAgentSpeed.method);
                            if (pUVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                              UnityEngine_AI_NavMeshAgent__set_speed(pUVar1,fVar2,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$SetAgentDestination
// il2cpp: void Controllers_BaseAIController__SetAgentDestination (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5b9d150

void Controllers_BaseAIController__SetAgentDestination
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o *pUVar1;
  bool bVar2;
  
  if ((__this->fields)._setTargetThisFrame != false) {
    return;
  }
  pUVar1 = (__this->fields)._agent;
  if (pUVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    bVar2 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar1,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    if (0.0 < (__this->fields)._repathTimeLeft) {
      return;
    }
    pUVar1 = (__this->fields)._agent;
    if (pUVar1 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
      UnityEngine_AI_NavMeshAgent__SetDestination(pUVar1,position,(MethodInfo *)0x0);
      (__this->fields)._repathTimeLeft = 0.2;
      (__this->fields)._setTargetThisFrame = true;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$GetAgentNavDirection
// il2cpp: UnityEngine_Vector3_o Controllers_BaseAIController__GetAgentNavDirection (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x5b9d1d0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9d270: mov qword ptr [rsp + 0x38], 0
// asm:   0x5b9d279: cmp byte ptr [rip + 0x19a14a9], 0
// asm:   0x5b9d280: je 0x5b9d4df
// asm:   0x5b9d447: jmp 0x5b9d549

UnityEngine_Vector3_o
Controllers_BaseAIController__GetAgentNavDirection
          (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o target,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint32_t uVar7;
  UnityEngine_Object_o *x;
  Characters_BaseCharacter_o *pCVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_AI_NavMeshAgent_o *pUVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  int32_t iVar16;
  MethodInfo *method_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar17;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar18;
  undefined4 in_XMM1_Db;
  float fVar19;
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_Fields UVar23;
  UnityEngine_Vector3_o UVar24;
  float local_48;
  float fStack_44;
  
  uVar17 = in_XMM1_Db;
  if (Il2CppMethodInitialized_07547459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547459 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._agent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    pCVar8 = (__this->fields)._character;
    if (((pCVar8 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar9 = (pCVar8->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
       (__this_00 = (pUVar9->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
    goto label_05b9d675;
    UVar21 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
    }
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    local_48 = target.fields.x;
    fStack_44 = target.fields.y;
    auVar20._0_4_ = local_48 - UVar21.fields.x;
    auVar20._4_4_ = fStack_44 - UVar21.fields.y;
    auVar20._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
    auVar20._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
    fVar18 = target.fields.z - UVar21.fields.z;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar1 = fVar18 * fVar18 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
      in_XMM1_Db = extraout_XMM0_Db;
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (1e-05 < fVar1) {
      UVar21.fields.z = fVar18 / fVar1;
      auVar12._4_4_ = fVar1;
      auVar12._0_4_ = fVar1;
      auVar12._8_4_ = in_XMM1_Db;
      auVar12._12_4_ = in_XMM1_Db;
      auVar20 = divps(auVar20,auVar12);
      UVar21.fields.x = (float)auVar20._0_4_;
      UVar21.fields.y = (float)auVar20._4_4_;
      return (UnityEngine_Vector3_o)UVar21.fields;
    }
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar18 = (pUVar10->zeroVector).fields.z;
    fVar1 = (pUVar10->zeroVector).fields.x;
    fVar4 = (pUVar10->zeroVector).fields.y;
    goto label_05b9d313;
  }
  pUVar11 = (__this->fields)._agent;
  if (pUVar11 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_05b9d675;
  method_00 = (MethodInfo *)0x0;
  bVar15 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar11,(MethodInfo *)0x0);
  if (!bVar15) {
    UVar23 = (UnityEngine_Vector3_Fields)
             Controllers_BaseAIController__GetDirectionTowardsNavMesh(__this,method_00);
    return (UnityEngine_Vector3_o)UVar23;
  }
  if ((__this->fields)._setTargetThisFrame == false) {
    pUVar11 = (__this->fields)._agent;
    if (pUVar11 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_05b9d675;
    bVar15 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar11,(MethodInfo *)0x0);
    if ((!bVar15) && (uVar17 = 0, (__this->fields)._repathTimeLeft <= 0.0)) {
      pUVar11 = (__this->fields)._agent;
      if (pUVar11 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_05b9d675;
      UnityEngine_AI_NavMeshAgent__SetDestination(pUVar11,target,(MethodInfo *)0x0);
      (__this->fields)._repathTimeLeft = 0.2;
      (__this->fields)._setTargetThisFrame = true;
      uVar17 = in_XMM1_Db;
    }
  }
  pUVar11 = (__this->fields)._agent;
  if (pUVar11 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_05b9d675;
  UVar21 = UnityEngine_AI_NavMeshAgent__get_velocity(pUVar11,(MethodInfo *)0x0);
  fVar18 = UVar21.fields.z;
  auVar13._8_4_ = extraout_XMM0_Dc_00;
  auVar13._0_8_ = UVar21.fields._0_8_;
  auVar13._12_4_ = extraout_XMM0_Dd_00;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05b9d639;
label_05b9d3ce:
    uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05b9d3ce;
label_05b9d639:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar7 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_48 = UVar21.fields.x;
  fStack_44 = UVar21.fields.y;
  fVar1 = fVar18 * fVar18 + fStack_44 * fStack_44 + local_48 * local_48;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
    uVar17 = extraout_XMM0_Db_00;
    if (1e-05 < fVar1) goto label_05b9d523;
label_05b9d420:
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar18 = (pUVar10->zeroVector).fields.z;
    uVar2 = (pUVar10->zeroVector).fields.x;
    uVar5 = (pUVar10->zeroVector).fields.y;
    fVar1 = (float)uVar2;
    fVar4 = (float)uVar5;
  }
  else {
    fVar1 = SQRT(fVar1);
    if (fVar1 <= 1e-05) goto label_05b9d420;
label_05b9d523:
    fVar18 = fVar18 / fVar1;
    auVar14._4_4_ = fVar1;
    auVar14._0_4_ = fVar1;
    auVar14._8_4_ = uVar17;
    auVar14._12_4_ = uVar17;
    auVar20 = divps(auVar13,auVar14);
    fVar1 = auVar20._0_4_;
    fVar4 = auVar20._4_4_;
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar3 = (pUVar10->zeroVector).fields.x;
  uVar6 = (pUVar10->zeroVector).fields.y;
  fVar19 = fVar18 - (pUVar10->zeroVector).fields.z;
  if (9.9999994e-11 <=
      (fVar4 - (float)uVar6) * (fVar4 - (float)uVar6) + (fVar1 - (float)uVar3) * (fVar1 - (float)uVar3) +
      fVar19 * fVar19) {
    pUVar11 = (__this->fields)._agent;
    if (pUVar11 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_05b9d675;
    iVar16 = UnityEngine_AI_NavMeshAgent__get_pathStatus(pUVar11,(MethodInfo *)0x0);
    if (iVar16 != 2) {
label_05b9d313:
      UVar22.fields.y = fVar4;
      UVar22.fields.x = fVar1;
      UVar22.fields.z = fVar18;
      return (UnityEngine_Vector3_o)UVar22.fields;
    }
  }
  pCVar8 = (__this->fields)._character;
  if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
    UVar21.fields._0_8_ =
         (*(pCVar8->klass->vtable)._106_GetTargetDirection.methodPtr)
                   (pCVar8,(pCVar8->klass->vtable)._106_GetTargetDirection.method);
    UVar24.fields.z = fVar18;
    UVar24.fields._0_8_ = (undefined8)UVar21.fields._0_8_;
    return (UnityEngine_Vector3_o)UVar24.fields;
  }
label_05b9d675:
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$GetDirectionTowardsNavMesh
// il2cpp: UnityEngine_Vector3_o Controllers_BaseAIController__GetDirectionTowardsNavMesh (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9d680
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9d73b: mov qword ptr [rsp + 8], 0
// asm:   0x5b9d744: cmp byte ptr [rip + 0x19a0fde], 0
// asm:   0x5b9d74b: je 0x5b9d915
// asm:   0x5b9d7c3: jmp 0x5b9d8b6
// asm:   0x5b9d841: jmp 0x5b9d8b6

UnityEngine_Vector3_o
Controllers_BaseAIController__GetDirectionTowardsNavMesh
          (Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *__this_01;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o UVar14;
  undefined8 local_70;
  float local_58;
  float local_48;
  float fStack_44;
  UnityEngine_AI_NavMeshHit_o local_38;
  
  local_38.fields.m_Normal.fields.y = 0.0;
  local_38.fields.m_Normal.fields.z = 0.0;
  local_38.fields.m_Distance = 0.0;
  local_38.fields.m_Mask = 0;
  local_38.fields.m_Position.fields.x = 0.0;
  local_38.fields.m_Position.fields.y = 0.0;
  local_38.fields.m_Position.fields.z = 0.0;
  local_38.fields.m_Normal.fields.x = 0.0;
  local_38.fields.m_Hit = 0;
  pCVar2 = (__this->fields)._character;
  if (((pCVar2 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar3 = (pCVar2->fields).Cache, pUVar3 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar3->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
label_05b9d9b2:
    ThrowNullReferenceException();
  }
  UVar14 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields)._agent;
  if (__this_01 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_05b9d9b2;
  uVar8 = UnityEngine_AI_NavMeshAgent__get_agentTypeID(__this_01,(MethodInfo *)0x0);
  uVar11 = 0;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)uVar8 << 0x20 | 0xffffffff;
  bVar7 = UnityEngine_AI_NavMesh__SamplePosition
                    (UVar14,&local_38,100.0,(UnityEngine_AI_NavMeshQueryFilter_o)(auVar13 << 0x40),
                     (MethodInfo *)0x0);
  if (bVar7) {
    fVar9 = local_38.fields.m_Position.fields.x;
    fVar6 = local_38.fields.m_Position.fields.y;
    fVar10 = local_38.fields.m_Position.fields.z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
    }
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    local_48 = UVar14.fields.x;
    fStack_44 = UVar14.fields.y;
    auVar12._0_4_ = fVar9 - local_48;
    auVar12._4_4_ = fVar6 - fStack_44;
    auVar12._8_4_ = 0.0 - extraout_XMM0_Dc;
    auVar12._12_4_ = 0.0 - extraout_XMM0_Dd;
    fVar10 = fVar10 - UVar14.fields.z;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar11 = 0;
    fVar9 = fVar10 * fVar10 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
      uVar11 = extraout_XMM0_Db;
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    if (fVar9 <= 1e-05) goto label_05b9d8b6;
    fVar10 = fVar10 / fVar9;
    auVar4._4_4_ = fVar9;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = uVar11;
    auVar4._12_4_ = uVar11;
    auVar13 = divps(auVar12,auVar4);
    local_70 = auVar13._0_8_;
    goto label_05b9d8a7;
  }
  UVar14 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
  fVar10 = UVar14.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar11 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05b9d972;
label_05b9d7fd:
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05b9d7fd;
label_05b9d972:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar11 = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar11 = 0;
  }
  local_58 = UVar14.fields.x;
  fVar9 = fVar10 * fVar10 + local_58 * local_58 + 0.0;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    uVar11 = extraout_XMM0_Db_00;
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  if (fVar9 <= 1e-05) {
label_05b9d8b6:
    return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  }
  fVar10 = fVar10 / fVar9;
  auVar5._4_4_ = fVar9;
  auVar5._0_4_ = fVar9;
  auVar5._8_4_ = uVar11;
  auVar5._12_4_ = uVar11;
  auVar13 = divps(ZEXT416((uint)local_58),auVar5);
  local_70 = auVar13._0_8_;
label_05b9d8a7:
  UVar14.fields.z = fVar10;
  UVar14.fields.x = (float)(undefined4)local_70;
  UVar14.fields.y = (float)local_70._4_4_;
  return (UnityEngine_Vector3_o)UVar14.fields;
}


// Controllers.BaseAIController$$SampleAgentMesh
// il2cpp: bool Controllers_BaseAIController__SampleAgentMesh (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, UnityEngine_AI_NavMeshHit_o* hit, const MethodInfo* method);
// 0x5b9d9c0

bool Controllers_BaseAIController__SampleAgentMesh
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o position,
               UnityEngine_AI_NavMeshHit_o *hit,MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  
  __this_00 = (__this->fields)._agent;
  if (__this_00 == (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar3 = UnityEngine_AI_NavMeshAgent__get_agentTypeID(__this_00,(MethodInfo *)0x0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)uVar3 << 0x20 | 0xffffffff;
  bVar2 = UnityEngine_AI_NavMesh__SamplePosition
                    (position,hit,100.0,(UnityEngine_AI_NavMeshQueryFilter_o)(auVar1 << 0x40),
                     (MethodInfo *)0x0);
  return bVar2;
}


// Controllers.BaseAIController$$RefreshAgent
// il2cpp: void Controllers_BaseAIController__RefreshAgent (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9da20

void Controllers_BaseAIController__RefreshAgent(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar3;
  UnityEngine_Behaviour_o *pUVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o sourcePosition;
  float fStack_68;
  float fStack_64;
  UnityEngine_AI_NavMeshHit_o UStack_48;
  
  if (Il2CppMethodInitialized_0754745a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754745a = '\x01';
  }
  UStack_48.fields.m_Normal.fields.y = 0.0;
  UStack_48.fields.m_Normal.fields.z = 0.0;
  UStack_48.fields.m_Distance = 0.0;
  UStack_48.fields.m_Mask = 0;
  UStack_48.fields.m_Position.fields.x = 0.0;
  UStack_48.fields.m_Position.fields.y = 0.0;
  UStack_48.fields.m_Position.fields.z = 0.0;
  UStack_48.fields.m_Normal.fields.x = 0.0;
  UStack_48.fields.m_Hit = 0;
  x = (UnityEngine_Object_o *)(__this->fields)._agent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if ((__this->fields)._usePathfinding == false) {
    return;
  }
  pCVar1 = (__this->fields)._character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    sourcePosition = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._agent;
    if (pUVar3 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
      bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar3,(MethodInfo *)0x0);
      if (bVar6) {
        fVar9 = (__this->fields)._repathTimeLeft;
        fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        (__this->fields)._repathTimeLeft = fVar9 - fVar8;
        pUVar3 = (__this->fields)._agent;
        fVar9 = (*(__this->klass->vtable)._7_GetAgentSpeed.methodPtr)
                          (__this,(__this->klass->vtable)._7_GetAgentSpeed.method);
        if (pUVar3 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
          UnityEngine_AI_NavMeshAgent__set_speed(pUVar3,fVar9,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._agent;
          if (pUVar3 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar3,sourcePosition,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        fVar9 = (__this->fields)._reacquireTimeLeft;
        fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        fVar9 = fVar9 - fVar8;
        (__this->fields)._reacquireTimeLeft = fVar9;
        if (0.0 < fVar9) {
          return;
        }
        (__this->fields)._reacquireTimeLeft = 1.0;
        pUVar3 = (__this->fields)._agent;
        if (pUVar3 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
          uVar7 = UnityEngine_AI_NavMeshAgent__get_agentTypeID(pUVar3,(MethodInfo *)0x0);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar7 << 0x20 | 0xffffffff;
          bVar6 = UnityEngine_AI_NavMesh__SamplePosition
                            (sourcePosition,&UStack_48,100.0,
                             (UnityEngine_AI_NavMeshQueryFilter_o)(auVar5 << 0x40),(MethodInfo *)0x0);
          if (!bVar6) {
            return;
          }
          fVar8 = UStack_48.fields.m_Position.fields.x;
          fVar10 = UStack_48.fields.m_Position.fields.y;
          fVar9 = UStack_48.fields.m_Position.fields.z;
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar9 = fVar9 - sourcePosition.fields.z;
          fStack_68 = sourcePosition.fields.x;
          fStack_64 = sourcePosition.fields.y;
          fVar8 = fVar8 - fStack_68;
          fVar10 = fVar10 - fStack_64;
          fVar9 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
          if (fVar9 < 0.0) {
            fVar9 = sqrtf(fVar9);
          }
          else {
            fVar9 = SQRT(fVar9);
          }
          pUVar3 = (__this->fields)._agent;
          if (pUVar3 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            fVar8 = UnityEngine_AI_NavMeshAgent__get_height(pUVar3,(MethodInfo *)0x0);
            if (fVar8 < fVar9) {
              return;
            }
            pUVar4 = (UnityEngine_Behaviour_o *)(__this->fields)._agent;
            if (pUVar4 != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled(pUVar4,false,(MethodInfo *)0x0);
              pUVar4 = (UnityEngine_Behaviour_o *)(__this->fields)._agent;
              if (pUVar4 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(pUVar4,true,(MethodInfo *)0x0);
                pUVar3 = (__this->fields)._agent;
                if (pUVar3 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  bVar6 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar3,(MethodInfo *)0x0);
                  if (!bVar6) {
                    (__this->fields)._reacquireTimeLeft = 5.0;
                    return;
                  }
                  pUVar3 = (__this->fields)._agent;
                  if (pUVar3 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                    UnityEngine_AI_NavMeshAgent__set_nextPosition(pUVar3,sourcePosition,(MethodInfo *)0x0);
                    (__this->fields)._repathTimeLeft = 0.0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$SyncAgentPosition
// il2cpp: void Controllers_BaseAIController__SyncAgentPosition (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5b9dd20

void Controllers_BaseAIController__SyncAgentPosition
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  
  __this_00 = (__this->fields)._agent;
  if (__this_00 == (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshAgent__set_nextPosition(__this_00,position,(MethodInfo *)0x0);
  return;
}


// Controllers.BaseAIController$$GetTargetAngle
// il2cpp: float Controllers_BaseAIController__GetTargetAngle (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5b9dd40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9dd68: mov qword ptr [rsp + 0x10], 0
// asm:   0x5b9dd71: cmp byte ptr [rip + 0x19a09b1], 0
// asm:   0x5b9dd78: je 0x5b9df8a
// asm:   0x5b9dde5: jmp 0x5b9de26

float Controllers_BaseAIController__GetTargetAngle
                (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar7;
  undefined4 in_XMM1_Db;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_Fields local_58;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  
  fVar7 = direction.fields.z;
  uStack_40 = in_XMM0_Dc;
  local_48 = (undefined1  [8])direction.fields._0_8_;
  uStack_3c = in_XMM0_Dd;
  local_28 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_58.x = 0.0;
    local_58.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_58.x = 0.0;
    local_58.y = 0.0;
    uVar5 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar1 = fVar7 * fVar7 + (float)local_48._0_4_ * (float)local_48._0_4_ + 0.0;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
    in_XMM1_Db = extraout_XMM0_Db;
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (fVar1 <= 1e-05) {
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar7 = (pUVar6->zeroVector).fields.z;
    fVar1 = (pUVar6->zeroVector).fields.x;
    fVar3 = (pUVar6->zeroVector).fields.y;
  }
  else {
    fVar7 = fVar7 / fVar1;
    auVar9._4_4_ = fVar1;
    auVar9._0_4_ = fVar1;
    auVar9._8_4_ = in_XMM1_Db;
    auVar9._12_4_ = in_XMM1_Db;
    auVar9 = divps(ZEXT416((uint)local_48._0_4_),auVar9);
    local_58._0_8_ = auVar9._0_8_;
    fVar1 = auVar9._0_4_;
    fVar3 = auVar9._4_4_;
  }
  uVar10 = 0;
  uVar11 = 0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    local_48._4_4_ = fVar3;
    local_48._0_4_ = fVar1;
    _uStack_40 = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
    fVar1 = (float)local_48._0_4_;
    fVar3 = (float)local_48._4_4_;
    uVar10 = uStack_40;
    uVar11 = uStack_3c;
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar6->zeroVector).fields.x;
  uVar4 = (pUVar6->zeroVector).fields.y;
  fVar8 = fVar7 - (pUVar6->zeroVector).fields.z;
  if ((fVar3 - (float)uVar4) * (fVar3 - (float)uVar4) + (fVar1 - (float)uVar2) * (fVar1 - (float)uVar2) +
      fVar8 * fVar8 < 9.9999994e-11) {
    __this_00 = (__this->fields)._character;
    if ((__this_00 == (Characters_BaseCharacter_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar12 = UnityEngine_Transform__get_eulerAngles(__this_01,(MethodInfo *)0x0);
    fVar7 = UVar12.fields.y;
  }
  else {
    if (g_data_0753e72c == '\0') {
      local_48._4_4_ = fVar3;
      local_48._0_4_ = fVar1;
      uStack_40 = uVar10;
      uStack_3c = uVar11;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      g_data_0753e72c = '\x01';
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar1 = (float)local_48._0_4_;
      fVar3 = (float)local_48._4_4_;
    }
    local_38.x = (pUVar6->upVector).fields.x;
    local_38.y = (pUVar6->upVector).fields.y;
    local_38.z = (pUVar6->upVector).fields.z;
    local_58.y = fVar3;
    local_58.x = fVar1;
    local_58.z = fVar7;
    local_28 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Quaternion__Internal_LookRotation
                         ((UnityEngine_Vector3_o *)&local_58,(UnityEngine_Vector3_o *)&local_38,
                          (MethodInfo *)0x0);
    UVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    euler.fields.x = UVar12.fields.x * 57.29578;
    euler.fields.y = UVar12.fields.y * 57.29578;
    euler.fields.z = UVar12.fields.z * 57.29578;
    UVar12 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    fVar7 = UVar12.fields.y;
  }
  return fVar7;
}


// Controllers.BaseAIController$$GetTargetRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_BaseAIController__GetTargetRotation (Controllers_BaseAIController_o* __this, float angle, const MethodInfo* method);
// 0x5b9dfd0

UnityEngine_Quaternion_o
Controllers_BaseAIController__GetTargetRotation
          (Controllers_BaseAIController_o *__this,float angle,MethodInfo *method)

{
  UnityEngine_Quaternion_Fields UVar1;
  UnityEngine_Vector3_o UStack_10;
  
  UStack_10.fields.x = 0.0;
  UStack_10.fields.y = angle * 0.017453292;
  UStack_10.fields.z = 0.0;
  UVar1 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad(&UStack_10,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar1;
}


// Controllers.BaseAIController$$GetTargetDirection
// il2cpp: UnityEngine_Vector3_o Controllers_BaseAIController__GetTargetDirection (Controllers_BaseAIController_o* __this, float angle, const MethodInfo* method);
// 0x5b9e010
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9e05c: mov qword ptr [rsp + 8], 0
// asm:   0x5b9e065: cmp byte ptr [rip + 0x19a06bd], 0
// asm:   0x5b9e06c: je 0x5b9e147

UnityEngine_Vector3_o
Controllers_BaseAIController__GetTargetDirection
          (Controllers_BaseAIController_o *__this,float angle,MethodInfo *method)

{
  uint32_t uVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  UnityEngine_Vector3_o UVar7;
  
  fVar4 = (90.0 - angle) * 0.017453292;
  fVar2 = cosf(fVar4);
  fVar4 = sinf(fVar4);
  uVar6 = extraout_XMM0_Db;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar6 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar6 = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar6 = 0;
  }
  fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + 0.0;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
    uVar6 = extraout_XMM0_Db_00;
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (fVar3 <= 1e-05) {
    return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  }
  auVar5._4_4_ = fVar3;
  auVar5._0_4_ = fVar3;
  auVar5._8_4_ = uVar6;
  auVar5._12_4_ = uVar6;
  auVar5 = divps(ZEXT416((uint)fVar2),auVar5);
  UVar7.fields.z = fVar4 / fVar3;
  UVar7.fields.x = (float)auVar5._0_4_;
  UVar7.fields.y = (float)auVar5._4_4_;
  return (UnityEngine_Vector3_o)UVar7.fields;
}


// Controllers.BaseAIController$$.ctor
// il2cpp: void Controllers_BaseAIController___ctor (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x5b9e190

void Controllers_BaseAIController___ctor(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._usePathfinding = true;
  (__this->fields).DetectRange = 10000.0;
  (__this->fields).FocusTime = 5.0;
  (__this->fields).FocusRange = INFINITY;
  (__this->fields)._aiEnabled = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


