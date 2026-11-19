// Type: Controllers.BaseTitanAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Controllers/BaseTitanAIController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseTitanAIController.cs
// --------------------------------

// Controllers.BaseTitanAIController$$get__scriptedAI
// il2cpp: bool Controllers_BaseTitanAIController__get__scriptedAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9eaa0

bool Controllers_BaseTitanAIController__get__scriptedAI
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  return false;
}


// Controllers.BaseTitanAIController$$get__stationaryAI
// il2cpp: bool Controllers_BaseTitanAIController__get__stationaryAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9eab0

bool Controllers_BaseTitanAIController__get__stationaryAI
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  return false;
}


// Controllers.BaseTitanAIController$$Awake
// il2cpp: void Controllers_BaseTitanAIController__Awake (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9eac0

void Controllers_BaseTitanAIController__Awake(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  bool bVar4;
  Characters_BaseCharacter_o *pCVar5;
  Characters_BaseTitan_o *pCVar6;
  UnityEngine_CapsuleCollider_o *pUVar7;
  
  if (Il2CppMethodInitialized_07547463 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547463 = '\x01';
  }
  if (Il2CppMethodInitialized_07547456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    Il2CppMethodInitialized_07547456 = '\x01';
  }
  pCVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._character);
  pCVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
  (__this->fields)._titan = pCVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan);
  (__this->fields)._automaticTargeting = true;
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 != (Characters_BaseTitan_o *)0x0) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pCVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
    (__this->fields)._mainCollider = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._mainCollider);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).TitanSmartMovement, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar3->fields)._value != false) {
        bVar4 = (*(__this->klass->vtable)._10_get__stationaryAI.methodPtr)
                          (__this,(__this->klass->vtable)._10_get__stationaryAI.method);
        if (!bVar4) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          bVar4 = Map_MapLoader__get_HasNavMesh((MethodInfo *)0x0);
          (__this->fields)._usePathfinding = bVar4;
          return;
        }
      }
      (__this->fields)._usePathfinding = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetAgentSpeed
// il2cpp: float Controllers_BaseTitanAIController__GetAgentSpeed (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9ec30

float Controllers_BaseTitanAIController__GetAgentSpeed
                (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._titan;
  if (__this_00 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Characters_BaseTitan__GetCurrentSpeed(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Controllers.BaseTitanAIController$$Start
// il2cpp: void Controllers_BaseTitanAIController__Start (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9ec50

void Controllers_BaseTitanAIController__Start(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  MethodInfo *in_RCX;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547464 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547464 = '\x01';
  }
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasDirection = false;
  (pCVar1->fields).IsSit = false;
  fVar3 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar3;
  if ((__this->fields)._usePathfinding != false) {
    x = (UnityEngine_Object_o *)(__this->fields)._agent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      Controllers_BaseAIController__CreateAgent
                ((Controllers_BaseAIController_o *)__this,(__this->fields)._mainCollider,10.0,2,in_RCX);
      return;
    }
  }
  return;
}


// Controllers.BaseTitanAIController$$BeginMove
// il2cpp: void Controllers_BaseTitanAIController__BeginMove (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9cb20

void Controllers_BaseTitanAIController__BeginMove
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback);
  if ((__this->fields).AIState == 7) {
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    (__this->fields).AIState = 0;
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_05b9cc1b;
    (pCVar1->fields).HasDirection = false;
    (pCVar1->fields).IsSit = false;
    fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar2;
  }
  if ((__this->fields)._moveToIgnoreEnemies != false) {
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    (__this->fields).AIState = 0;
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
label_05b9cc1b:
      ThrowNullReferenceException();
    }
    (pCVar1->fields).HasDirection = false;
    (pCVar1->fields).IsSit = false;
    fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar2;
  }
  return;
}


// Controllers.BaseTitanAIController$$EndForcedIdle
// il2cpp: void Controllers_BaseTitanAIController__EndForcedIdle (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9bfb0

void Controllers_BaseTitanAIController__EndForcedIdle
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  if ((__this->fields).AIState == 7) {
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    (__this->fields).AIState = 0;
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pCVar1->fields).HasDirection = false;
    (pCVar1->fields).IsSit = false;
    fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar2;
  }
  return;
}


// Controllers.BaseTitanAIController$$ResetCommandState
// il2cpp: void Controllers_BaseTitanAIController__ResetCommandState (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9b5e0

void Controllers_BaseTitanAIController__ResetCommandState
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasDirection = false;
  (pCVar1->fields).IsSit = false;
  fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar2;
  return;
}


// Controllers.BaseTitanAIController$$MoveToCallback
// il2cpp: void Controllers_BaseTitanAIController__MoveToCallback (Controllers_BaseTitanAIController_o* __this, System_Action_o* action, UnityEngine_Vector3_o position, float range, bool ignore, const MethodInfo* method);
// 0x5b9edc0

void Controllers_BaseTitanAIController__MoveToCallback
               (Controllers_BaseTitanAIController_o *__this,System_Action_o *action,
               UnityEngine_Vector3_o position,float range,bool ignore,MethodInfo *method)

{
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  Controllers_BaseAIController__BeginMove
            ((Controllers_BaseAIController_o *)__this,position,range,ignore,
             (MethodInfo *)CONCAT44(extraout_var,extraout_EDX));
  (__this->fields)._moveToCallback = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback);
  return;
}


// Controllers.BaseTitanAIController$$MoveToExact
// il2cpp: void Controllers_BaseTitanAIController__MoveToExact (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, float range, float timeoutPadding, const MethodInfo* method);
// 0x5b9ee40

void Controllers_BaseTitanAIController__MoveToExact
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o position,float range,
               float timeoutPadding,MethodInfo *method)

{
  uint32_t uVar1;
  Characters_BaseTitan_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  float *pfVar4;
  MethodInfo *method_00;
  float *pfVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  float local_28;
  float fStack_24;
  
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  Controllers_BaseAIController__BeginMove
            ((Controllers_BaseAIController_o *)__this,position,range,true,method_00);
  (__this->fields)._moveToExact = true;
  pCVar2 = (__this->fields)._titan;
  if ((__this->fields).IsRun == false) {
    if (pCVar2 == (Characters_BaseTitan_o *)0x0) goto label_05b9f00f;
    pfVar4 = &(pCVar2->fields).WalkSpeedBase;
    pfVar5 = &(pCVar2->fields).WalkSpeedPerLevel;
  }
  else {
    if (pCVar2 == (Characters_BaseTitan_o *)0x0) goto label_05b9f00f;
    pfVar4 = &(pCVar2->fields).RunSpeedBase;
    pfVar5 = &(pCVar2->fields).RunSpeedPerLevel;
  }
  fVar6 = *pfVar5 * (pCVar2->fields).Size + *pfVar4;
  if (fVar6 <= 0.0) {
    (__this->fields)._moveToTimeout = INFINITY;
    return;
  }
  pUVar3 = (pCVar2->fields).Cache;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
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
    local_28 = position.fields.x;
    fStack_24 = position.fields.y;
    fStack_24 = UVar8.fields.y - fStack_24;
    fVar7 = UVar8.fields.z - position.fields.z;
    local_28 = UVar8.fields.x - local_28;
    fVar7 = fStack_24 * fStack_24 + local_28 * local_28 + fVar7 * fVar7;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    (__this->fields)._moveToTimeout = fVar7 / fVar6 + timeoutPadding;
    return;
  }
label_05b9f00f:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$MoveToExactCallback
// il2cpp: void Controllers_BaseTitanAIController__MoveToExactCallback (Controllers_BaseTitanAIController_o* __this, System_Action_o* action, UnityEngine_Vector3_o position, float range, float timeoutPadding, const MethodInfo* method);
// 0x5b9f020

void Controllers_BaseTitanAIController__MoveToExactCallback
               (Controllers_BaseTitanAIController_o *__this,System_Action_o *action,
               UnityEngine_Vector3_o position,float range,float timeoutPadding,MethodInfo *method)

{
  Controllers_BaseTitanAIController__MoveToExact(__this,position,range,timeoutPadding,(MethodInfo *)action);
  (__this->fields)._moveToCallback = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback);
  return;
}


// Controllers.BaseTitanAIController$$CancelOrder
// il2cpp: void Controllers_BaseTitanAIController__CancelOrder (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9f050

void Controllers_BaseTitanAIController__CancelOrder
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  Characters_BaseCharacter_o *pCVar3;
  float fVar4;
  
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields)._moveToActive = false;
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback);
  if ((__this->fields).AIState == 7) {
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    (__this->fields).AIState = 0;
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 == (Characters_BaseTitan_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pCVar2->fields).HasDirection = false;
    (pCVar2->fields).IsSit = false;
    fVar4 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar4;
  }
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
      return;
    }
  }
  return;
}


// Controllers.BaseTitanAIController$$ForceIdle
// il2cpp: void Controllers_BaseTitanAIController__ForceIdle (Controllers_BaseTitanAIController_o* __this, float time, const MethodInfo* method);
// 0x5b9cfb0

void Controllers_BaseTitanAIController__ForceIdle
               (Controllers_BaseTitanAIController_o *__this,float time,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback);
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasDirection = false;
  (pCVar1->fields).IsSit = false;
  UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
  (__this->fields).AIState = 7;
  (__this->fields)._stateTimeLeft = time;
  return;
}


// Controllers.BaseTitanAIController$$Init
// il2cpp: void Controllers_BaseTitanAIController__Init (Controllers_BaseTitanAIController_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x5b9f1a0
// eh: try 0x5b9fa14..0x5b9fa9f -> pad 0x5b9fab0 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b9fad4..0x5b9fad9 -> pad 0x5b9fb58 cleanup
// eh: try 0x5b9fb5b..0x5b9fb68 -> pad 0x5b9fb70 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9faa4: jmp 0x5b9fab0
// asm:   0x5b9faa6: jmp 0x5b9fab0
// asm:   0x5b9faa8: jmp 0x5b9fab0
// asm:   0x5b9faaa: jmp 0x5b9fab0
// asm:   0x5b9faac: jmp 0x5b9fab0
// asm:   0x5b9faae: jmp 0x5b9fab0
// asm:   0x5b9fab0: mov r15, rax
// asm:   0x5b9fab3: mov r12, qword ptr [rsp + 8]
// asm:   0x5b9fab8: cmp edx, 1
// asm:   0x5b9fabb: jne 0x5b9fb5b
// asm:   0x5b9fac1: mov rdi, r15
// asm:   0x5b9fac4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b9fac9: mov r15, qword ptr [rax]
// asm:   0x5b9facc: mov qword ptr [rsp + 0x88], r15
// asm:   0x5b9fad4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b9fad9: lea rax, [rip + 0x16f0728]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_Dispose
// asm:   0x5b9fae0: mov rsi, qword ptr [rax]
// asm:   0x5b9fae3: mov rdi, r14
// asm:   0x5b9fae6: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b9faeb: test r15, r15
// asm:   0x5b9faee: jne 0x5b9fb50
// asm:   0x5b9faf0: lea r15, [rip + 0x1735519]  ; "Attacks"
// asm:   0x5b9faf7: nop word ptr [rax + rax]
// asm:   0x5b9fb50: mov rdi, r15
// asm:   0x5b9fb53: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b9fb58: mov r15, rax
// asm:   0x5b9fb5b: lea rdi, [rsp + 0x88]
// asm:   0x5b9fb63: call 0x2fd8490  ; il2cpp_runtime_helper_02fd8490()
// asm:   0x5b9fb68: mov rdi, r15
// asm:   0x5b9fb6b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b9fb70: mov rdi, rax
// asm:   0x5b9fb73: call 0x2ab61e0  ; __clang_call_terminate()

void Controllers_BaseTitanAIController__Init
               (Controllers_BaseTitanAIController_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppClass *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  undefined8 key;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *pSVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  float fVar7;
  undefined1 local_178 [40];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_150;
  System_Collections_Generic_IEqualityComparer_TKey__o *local_148;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSStack_140;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *local_138;
  Il2CppObject *pIStack_130;
  System_Collections_Generic_List_T__o *local_128;
  undefined8 uStack_120;
  SimpleJSONFixed_JSONNode_o *local_118;
  undefined1 local_110 [24];
  Il2CppObject *pIStack_f8;
  Il2CppObject *local_f0;
  int32_t iStack_e8;
  undefined4 uStack_e4;
  System_Collections_Generic_List_T__o *local_e0;
  int32_t iStack_d8;
  int32_t iStack_d4;
  SimpleJSONFixed_JSONNode_o *local_d0;
  System_Collections_Generic_Dictionary_TKey__TValue__c *local_c8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_c0;
  System_Int32_array *local_b8;
  Il2CppObject *pIStack_b0;
  Il2CppObject *local_a8;
  undefined8 uStack_a0;
  System_Collections_Generic_List_T__o *local_98;
  undefined8 uStack_90;
  SimpleJSONFixed_JSONNode_o *local_88;
  undefined1 local_78 [24];
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSStack_60;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *local_58;
  Il2CppObject *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  int32_t iStack_40;
  int32_t iStack_3c;
  SimpleJSONFixed_JSONNode_o *local_38;
  
  if (Il2CppMethodInitialized_07547465 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_TitanAttackInfo_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackMaxRange");
    il2cpp_codegen_initialize_runtime_metadata(&"IsRun");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackMinRange");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWait");
    il2cpp_codegen_initialize_runtime_metadata(&"DetectRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Attacks");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"ChaseAngleTimeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"ChaseAngleMinRange");
    il2cpp_codegen_initialize_runtime_metadata(&"CloseAttackRange");
    il2cpp_codegen_initialize_runtime_metadata(&"*");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTurn");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"ChaseAngleTimeMin");
    Il2CppMethodInitialized_07547465 = '\x01';
  }
  local_128 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_120._0_4_ = 0;
  uStack_120._4_4_ = 0;
  local_138 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0;
  pIStack_130 = (Il2CppObject *)0x0;
  local_148 = (System_Collections_Generic_IEqualityComparer_TKey__o *)0x0;
  pSStack_140 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0;
  local_178._32_8_ = 0;
  pSStack_150 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_98 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  local_a8 = (Il2CppObject *)0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_b8 = (System_Int32_array *)0x0;
  pIStack_b0 = (Il2CppObject *)0x0;
  local_c8 = (System_Collections_Generic_Dictionary_TKey__TValue__c *)0x0;
  pSStack_c0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_178._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__c *)0x0;
  local_178._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_178._16_8_ = (System_Int32_array *)0x0;
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                       (data,"DetectRange",(data->klass->vtable)._7_get_Item.method);
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).DetectRange = fVar7;
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"CloseAttackRange",(data->klass->vtable)._7_get_Item.method);
      if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
        (__this->fields).CloseAttackRange = fVar7;
        pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                           (data,"FarAttackMinRange",(data->klass->vtable)._7_get_Item.method);
        if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                            (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
          (__this->fields).FarAttackMinRange = fVar7;
          pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                             (data,"FarAttackMaxRange",(data->klass->vtable)._7_get_Item.method);
          if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                              (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
            (__this->fields).FarAttackMaxRange = fVar7;
            pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"FarAttackCooldown",(data->klass->vtable)._7_get_Item.method);
            if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
              (__this->fields).FarAttackCooldown = fVar7;
              pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"FocusRange",(data->klass->vtable)._7_get_Item.method);
              if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                  (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
                (__this->fields).FocusRange = fVar7;
                pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"FocusTime",(data->klass->vtable)._7_get_Item.method);
                if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                  fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                    (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
                  (__this->fields).FocusTime = fVar7;
                  pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                     (data,"AttackWait",(data->klass->vtable)._7_get_Item.method);
                  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                    fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                      (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
                    (__this->fields).AttackWait = fVar7;
                    pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                       (data,"ChaseAngleTimeMin",(data->klass->vtable)._7_get_Item.method);
                    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                      fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                        (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
                      (__this->fields).ChaseAngleTimeMin = fVar7;
                      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                         (data,"ChaseAngleTimeMax",(data->klass->vtable)._7_get_Item.method)
                      ;
                      if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                        fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                          (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
                        (__this->fields).ChaseAngleTimeMax = fVar7;
                        pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                           (data,"ChaseAngleMinRange",
                                            (data->klass->vtable)._7_get_Item.method);
                        if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                          fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                            (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
                          (__this->fields).ChaseAngleMinRange = fVar7;
                          pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                             (data,"IsRun",
                                              (data->klass->vtable)._7_get_Item.method);
                          if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                            bVar3 = (*(pSVar4->klass->vtable)._39_get_AsBool.methodPtr)
                                              (pSVar4,(pSVar4->klass->vtable)._39_get_AsBool.method);
                            (__this->fields).IsRun = bVar3;
                            pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                               (data,"IsTurn",
                                                (data->klass->vtable)._7_get_Item.method);
                            if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                              bVar3 = (*(pSVar4->klass->vtable)._39_get_AsBool.methodPtr)
                                                (pSVar4,(pSVar4->klass->vtable)._39_get_AsBool.method);
                              (__this->fields).IsTurn = bVar3;
                              pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                 (data,"TurnAngle",
                                                  (data->klass->vtable)._7_get_Item.method);
                              if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                fVar7 = (*(pSVar4->klass->vtable)._37_get_AsFloat.methodPtr)
                                                  (pSVar4,(pSVar4->klass->vtable)._37_get_AsFloat.method);
                                (__this->fields).TurnAngle = fVar7;
                                if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_Characters_CharacterData);
                                }
                                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos;
                                pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                   (data,"Type",
                                                    (data->klass->vtable)._7_get_Item.method);
                                if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                  pSVar5 = (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                                                     (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
                                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                     ) {
                                    pSVar6 = (System_Collections_Generic_Dictionary_string__TitanAttackInfo__o
                                              *)System_Collections_Generic_Dictionary_object__object___get_Item
                                                          (pSVar1,(Il2CppObject *)pSVar5,
                                                           (MethodInfo_4AAD450 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
                                                       );
                                    local_178._24_8_ = &(__this->fields).AttackInfos;
                                    (__this->fields).AttackInfos = pSVar6;
                                    Il2CppCodeGenWriteBarrier((void **)local_178._24_8_);
                                    pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                       (data,"Attacks",
                                                        (data->klass->vtable)._7_get_Item.method);
                                    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                      SimpleJSONFixed_JSONNode__get_Keys
                                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)local_110,pSVar4,
                                                 (MethodInfo *)0x0);
                                      local_88 = local_d0;
                                      local_98 = local_e0;
                                      uStack_90._0_4_ = iStack_d8;
                                      uStack_90._4_4_ = iStack_d4;
                                      local_a8 = local_f0;
                                      uStack_a0._0_4_ = iStack_e8;
                                      uStack_a0._4_4_ = uStack_e4;
                                      local_b8 = (System_Int32_array *)local_110._16_8_;
                                      pIStack_b0 = pIStack_f8;
                                      local_c8 = (System_Collections_Generic_Dictionary_TKey__TValue__c *)
                                                 local_110._0_8_;
                                      pSStack_c0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                   local_110._8_8_;
                                      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)local_78,
                                                 (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,
                                                 (MethodInfo *)0x0);
                                      local_118 = local_38;
                                      local_128 = local_48;
                                      uStack_120._0_4_ = iStack_40;
                                      uStack_120._4_4_ = iStack_3c;
                                      local_138 = local_58;
                                      pIStack_130 = pIStack_50;
                                      local_148 = (System_Collections_Generic_IEqualityComparer_TKey__o *)
                                                  local_78._16_8_;
                                      pSStack_140 = pSStack_60;
                                      local_178._32_8_ = local_78._0_8_;
                                      pSStack_150 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                    local_78._8_8_;
                                      bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                         (local_178 + 0x20),(MethodInfo *)0x0);
                                      if (bVar3) {
                                        do {
                                          pSVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                                             ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                              (local_178 + 0x20),(MethodInfo *)0x0);
                                          pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                             (data,"Attacks",
                                                              (data->klass->vtable)._7_get_Item.method);
                                          if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05b9fb4b;
                                          pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                                             (pSVar4,pSVar5,
                                                              (pSVar4->klass->vtable)._7_get_Item.method);
                                          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).
                                              cctor_finished_or_no_cctor == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                                          }
                                          fVar7 = SimpleJSONFixed_JSONNode__op_Implicit_5763af0
                                                            (pSVar4,(MethodInfo *)0x0);
                                          if (pSVar5 == (System_String_o *)0x0) goto label_05b9fb4b;
                                          bVar3 = System_String__EndsWith
                                                            (pSVar5,"*",(MethodInfo *)0x0);
                                          if (bVar3) {
                                            pSVar5 = System_String__Substring_53042f0
                                                               (pSVar5,0,(pSVar5->fields)._stringLength + -1,
                                                                (MethodInfo *)0x0);
                                            __this_00 = ((Il2CppObject *)local_178._24_8_)->klass;
                                            if (__this_00 == (Il2CppClass *)0x0) goto label_05b9fb4b;
                                            __this_01 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Keys
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)__this_00,
                                                       (MethodInfo_4AAD0F0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Keys
                                                       );
                                            if (__this_01 ==
                                                (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o
                                                 *)0x0) goto label_05b9fb4b;
                                            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                                                      ((
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                       *)local_110,__this_01,
                                                       (MethodInfo_511A520 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_TitanAttackInfo_GetEnumerator
                                                      );
                                            local_178._16_8_ = local_110._16_8_;
                                            local_178._0_8_ = local_110._0_8_;
                                            local_178._8_8_ = local_110._8_8_;
                                            local_110._0_8_ =
                                                 (System_Collections_Generic_Dictionary_TKey__TValue__c *)0x0;
                                            local_110._8_8_ =
                                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                 local_178;
                                            while( true ) {
                                              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                                                ((
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                       *)local_178,
                                                       (MethodInfo_4CE7080 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_MoveNext
                                                       );
                                              key = local_178._16_8_;
                                              if (!bVar3) break;
                                              if ((System_Int32_array *)local_178._16_8_ ==
                                                  (System_Int32_array *)0x0) {
                                                ThrowNullReferenceException();
                                              }
                                              bVar3 = System_String__StartsWith
                                                                ((System_String_o *)local_178._16_8_,pSVar5,
                                                                 (MethodInfo *)0x0);
                                              if (bVar3) {
                                                pSVar2 = (__this->fields).AttackChances;
                                                if (pSVar2 == (
                                                       System_Collections_Generic_Dictionary_string__float__o
                                                       *)0x0) {
                                                  ThrowNullReferenceException();
                                                }
                                                System_Collections_Generic_Dictionary_object__float___Add
                                                          ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar2,(Il2CppObject *)key,fVar7,
                                                       (MethodInfo_4AB5470 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_float_Add
                                                       );
                                                pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields).AttackGroups;
                                                if (pSVar1 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                  ThrowNullReferenceException();
                                                }
                                                System_Collections_Generic_Dictionary_object__object___Add
                                                          (pSVar1,(Il2CppObject *)key,(Il2CppObject *)pSVar5,
                                                           (MethodInfo_4AAD4E0 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add
                                                       );
                                              }
                                            }
                                            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                                                      ((
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                       *)local_178,
                                                       (MethodInfo_4CE7070 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_Dispose
                                                      );
                                          }
                                          else {
                                            pSVar2 = (__this->fields).AttackChances;
                                            if (pSVar2 == (
                                                       System_Collections_Generic_Dictionary_string__float__o
                                                       *)0x0) goto label_05b9fb4b;
                                            System_Collections_Generic_Dictionary_object__float___Add
                                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar2,(Il2CppObject *)pSVar5,fVar7,
                                                       (MethodInfo_4AB5470 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_float_Add
                                                      );
                                          }
                                          bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                             (local_178 + 0x20),(MethodInfo *)0x0);
                                        } while (bVar3);
                                      }
                                      (__this->fields)._waitAttackTimeLeft = (__this->fields).AttackWait;
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
        }
      }
    }
  }
label_05b9fb4b:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetEnemy
// il2cpp: Characters_ITargetable_o* Controllers_BaseTitanAIController__GetEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9fb80

Characters_ITargetable_o *
Controllers_BaseTitanAIController__GetEnemy(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,method);
  if (bVar1) {
    return (__this->fields)._enemy;
  }
  return (Characters_ITargetable_o *)0x0;
}


// Controllers.BaseTitanAIController$$SetEnemy
// il2cpp: void Controllers_BaseTitanAIController__SetEnemy (Controllers_BaseTitanAIController_o* __this, Characters_ITargetable_o* enemy, float focusTime, const MethodInfo* method);
// 0x5b9fba0

void Controllers_BaseTitanAIController__SetEnemy
               (Controllers_BaseTitanAIController_o *__this,Characters_ITargetable_o *enemy,float focusTime,
               MethodInfo *method)

{
  Controllers_BaseAIController__SetTarget(__this,enemy,focusTime,method);
  return;
}


// Controllers.BaseTitanAIController$$UpdateScriptedAI
// il2cpp: void Controllers_BaseTitanAIController__UpdateScriptedAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9fbb0

void Controllers_BaseTitanAIController__UpdateScriptedAI
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseTitanAIController$$FixedUpdate
// il2cpp: void Controllers_BaseTitanAIController__FixedUpdate (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9fbc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba010e: nop 

void Controllers_BaseTitanAIController__FixedUpdate
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_ITargetable_o **targetAddress;
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  Characters_BaseTitan_o *pCVar6;
  UnityEngine_Object_o *x;
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  Il2CppClass *pIVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  Characters_BaseCharacter_o *pCVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  undefined8 uVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  VirtualInvokeData *pVVar16;
  ulong uVar17;
  _func_8 *vtableDispatch;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar18;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  Characters_ITargetable_c *method_01;
  long lVar19;
  Il2CppObject *pIVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o target;
  
  if (Il2CppMethodInitialized_07547466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547466 = '\x01';
  }
  if ((__this->fields)._usePathfinding != false) {
    (__this->fields)._setTargetThisFrame = false;
  }
  fVar22 = (__this->fields)._stateTimeLeft;
  fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar22 - fVar21;
  fVar22 = (__this->fields)._moveToTimeout;
  fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar22 = fVar22 - fVar21;
  (__this->fields)._moveToTimeout = fVar22;
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
  if ((pCVar6->fields).Dead != false) {
    return;
  }
  Controllers_BaseAIController__UpdateMoveTarget((Controllers_BaseAIController_o *)__this,method);
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
  iVar5 = (pCVar6->fields).State;
  if ((iVar5 != 10) && (iVar5 != 0x17)) {
    fVar22 = (__this->fields)._rangedCooldownLeft;
    fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._rangedCooldownLeft = fVar22 - fVar21;
    fVar22 = (__this->fields)._attackCooldownLeft;
    fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar22 = fVar22 - fVar21;
    (__this->fields)._attackCooldownLeft = fVar22;
  }
  if ((__this->fields).AIState == 7) {
    if (0.0 < (__this->fields)._stateTimeLeft) {
      return;
    }
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    (__this->fields).AIState = 0;
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
    (pCVar6->fields).HasDirection = false;
    (pCVar6->fields).IsSit = false;
    fVar22 = 8.0;
    fVar21 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar21;
  }
  Controllers_BaseAIController__UpdateTargeting((Controllers_BaseAIController_o *)__this,method);
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
  targetAddress = &(__this->fields)._enemy;
  (pCVar6->fields).TargetEnemy = (__this->fields)._enemy;
  Il2CppCodeGenWriteBarrier(&(pCVar6->fields).TargetEnemy);
  if ((__this->fields)._aiEnabled == false) {
    (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
    method_01 = (Characters_ITargetable_c *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    uVar15 = (__this->fields).AIState;
    if (uVar15 < 3) {
      if ((__this->fields)._moveToActive != false) {
        method_01 = (Characters_ITargetable_c *)(__this->klass->vtable)._10_get__stationaryAI.method;
        bVar13 = (*(__this->klass->vtable)._10_get__stationaryAI.methodPtr)(__this,(MethodInfo *)method_01);
        if (!bVar13) {
          Controllers_BaseTitanAIController__MoveToPosition(__this,(MethodInfo *)method_01);
        }
      }
      uVar15 = (__this->fields).AIState;
    }
    if (uVar15 == 4) {
      pCVar9 = (__this->fields)._character;
      if (((pCVar9 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar10 = (pCVar9->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0))
      goto label_05ba060b;
      method_01 = (Characters_ITargetable_c *)0x0;
      UVar24 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
      uVar2 = (__this->fields)._moveToPosition.fields.x;
      uVar4 = (__this->fields)._moveToPosition.fields.y;
      fVar22 = (__this->fields)._moveToPosition.fields.z;
      pMVar18 = extraout_RDX;
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        pMVar18 = extraout_RDX_00;
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        pMVar18 = extraout_RDX_01;
      }
      fVar21 = UVar24.fields.y - (float)uVar4;
      fVar22 = UVar24.fields.z - fVar22;
      fVar23 = UVar24.fields.x - (float)uVar2;
      fVar22 = fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22;
      if (fVar22 < 0.0) {
        fVar22 = sqrtf(fVar22);
        pMVar18 = extraout_RDX_02;
      }
      else {
        fVar22 = SQRT(fVar22);
      }
label_05b9fffd:
      if (((fVar22 <= (__this->fields)._moveToRange) || ((__this->fields)._moveToActive == false)) ||
         (((__this->fields)._moveToExact != false && ((__this->fields)._moveToTimeout <= 0.0)))) {
        Controllers_BaseTitanAIController__CompleteMove(__this,(MethodInfo *)method_01);
      }
      else {
        if (((__this->fields)._stateTimeLeft <= 0.0) || ((__this->fields)._usePathfinding != false))
        goto label_05ba049d;
        pCVar6 = (__this->fields)._titan;
        method_01 = (Characters_ITargetable_c *)0x1;
        fVar22 = Controllers_BaseTitanAIController__GetChaseAngle
                           (__this,(UnityEngine_Vector3_o)(__this->fields)._moveToPosition.fields,true,pMVar18
                           );
        if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
        (pCVar6->fields).TargetAngle = fVar22;
      }
    }
    goto switchD_05ba01b8_default;
  }
  method_01 = (Characters_ITargetable_c *)(__this->klass->vtable)._9_get__scriptedAI.method;
  bVar13 = (*(__this->klass->vtable)._9_get__scriptedAI.methodPtr)(__this,(MethodInfo *)method_01);
  if (bVar13) {
    vtableDispatch = (__this->klass->vtable)._12_UpdateScriptedAI.methodPtr;
    pMVar18 = (__this->klass->vtable)._12_UpdateScriptedAI.method;
    goto label_05ba04dd;
  }
  pIVar20 = (Il2CppObject *)*targetAddress;
  if (pIVar20 != (Il2CppObject *)0x0) {
    if ((__this->fields)._usePathfinding != false) {
      x = (UnityEngine_Object_o *)(__this->fields)._agent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_01 = (Characters_ITargetable_c *)0x0;
      bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar13) {
        __this_00 = (__this->fields)._agent;
        if (__this_00 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_05ba060b;
        method_01 = (Characters_ITargetable_c *)0x0;
        bVar13 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(__this_00,(MethodInfo *)0x0);
        if (bVar13) {
          if (*targetAddress == (Characters_ITargetable_o *)0x0) goto label_05ba060b;
          method_01 = TypeInfo_Characters_ITargetable;
          uVar12 = il2cpp_runtime_helper_02fd8410(1);
          UVar24.fields.z = fVar22;
          UVar24.fields.x = (float)(int)uVar12;
          UVar24.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
          Controllers_BaseAIController__SetAgentDestination
                    ((Controllers_BaseAIController_o *)__this,UVar24,(MethodInfo *)method_01);
        }
      }
      pIVar20 = (Il2CppObject *)*targetAddress;
      if (pIVar20 == (Il2CppObject *)0x0) goto label_05ba019a;
    }
    pIVar7 = pIVar20->klass;
    uVar17 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar17 != 0) {
      pIVar8 = (pIVar7->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(Characters_ITargetable_c **)((long)&pIVar8->interfaceType + lVar19) ==
            TypeInfo_Characters_ITargetable) {
          pVVar16 = pIVar7->vtable + (*(int *)((long)&pIVar8->offset + lVar19) + 2);
          goto label_05ba0096;
        }
        lVar19 = lVar19 + 0x10;
      } while (uVar17 * 0x10 != lVar19);
    }
    pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar20,(Il2CppClass *)TypeInfo_Characters_ITargetable,2);
label_05ba0096:
    method_01 = (Characters_ITargetable_c *)pVVar16->method;
    bVar13 = (*pVVar16->methodPtr)(pIVar20,(MethodInfo *)method_01);
    if (bVar13) {
      pCVar9 = (__this->fields)._character;
      if (((pCVar9 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar10 = (pCVar9->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0))
      goto label_05ba060b;
      UVar24 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
      pIVar20 = (Il2CppObject *)*targetAddress;
      if (pIVar20 == (Il2CppObject *)0x0) goto label_05ba060b;
      pIVar7 = pIVar20->klass;
      uVar17 = (ulong)(pIVar7->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar8 = (pIVar7->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar8->interfaceType + lVar19) ==
              TypeInfo_Characters_ITargetable) {
            pVVar16 = pIVar7->vtable + (*(int *)((long)&pIVar8->offset + lVar19) + 1);
            goto label_05ba0144;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar17 * 0x10 != lVar19);
      }
      pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar20,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba0144:
      method_01 = (Characters_ITargetable_c *)pVVar16->method;
      UVar25 = (*pVVar16->methodPtr)(pIVar20,(MethodInfo *)method_01);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      fVar22 = Utility_Util__DistanceIgnoreY(UVar24,UVar25,(MethodInfo *)0x0);
      (__this->fields)._enemyDistance = fVar22;
    }
  }
label_05ba019a:
  switch((__this->fields).AIState) {
  case 0:
  case 1:
  case 2:
    pIVar20 = (Il2CppObject *)*targetAddress;
    if (pIVar20 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar20->klass;
      uVar17 = (ulong)(pIVar7->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar8 = (pIVar7->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar8->interfaceType + lVar19) ==
              TypeInfo_Characters_ITargetable) {
            pVVar16 = pIVar7->vtable + (*(int *)((long)&pIVar8->offset + lVar19) + 2);
            goto label_05ba0453;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar17 * 0x10 != lVar19);
      }
      pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar20,(Il2CppClass *)TypeInfo_Characters_ITargetable,2);
label_05ba0453:
      method_01 = (Characters_ITargetable_c *)pVVar16->method;
      bVar13 = (*pVVar16->methodPtr)(pIVar20,(MethodInfo *)method_01);
      pMVar18 = extraout_RDX_07;
      if (bVar13) goto label_05ba0460;
    }
    if ((__this->fields)._moveToActive == false) {
      if ((__this->fields)._stateTimeLeft <= 0.0) {
        if ((__this->fields).AIState != 0) goto label_05ba04bc;
        bVar13 = Controllers_BaseTitanAIController__IsCrawler(__this,(MethodInfo *)method_01);
        if (((bVar13) ||
            (bVar13 = Controllers_BaseTitanAIController__IsShifter(__this,(MethodInfo *)method_01), bVar13))
           || (bVar13 = Utility_RandomGen__Roll(0.33,(MethodInfo *)0x0), !bVar13)) {
          Controllers_BaseTitanAIController__Wander(__this,(MethodInfo *)method_01);
        }
        else {
          Controllers_BaseTitanAIController__Sit(__this,(MethodInfo *)method_01);
        }
      }
    }
    else {
label_05ba049d:
      Controllers_BaseTitanAIController__MoveToPosition(__this,(MethodInfo *)method_01);
    }
    break;
  case 3:
    if ((*targetAddress != (Characters_ITargetable_o *)0x0) &&
       (method_01 = TypeInfo_Characters_ITargetable, cVar14 = il2cpp_runtime_helper_02ad5af0(2), cVar14 != '\0')) {
      fVar22 = (__this->fields)._enemyDistance;
      if ((0.0 < (__this->fields)._stateTimeLeft) ||
         (pfVar1 = &(__this->fields).ChaseAngleMinRange, pMVar18 = extraout_RDX_03,
         fVar22 < *pfVar1 || fVar22 == *pfVar1)) {
        fVar21 = (__this->fields)._attackRange;
        if (fVar22 <= fVar21) {
          bVar13 = Controllers_BaseTitanAIController__TryCloseAction(__this,(MethodInfo *)method_01);
          if (bVar13) break;
        }
        else {
          fVar21 = (__this->fields).FarAttackMaxRange;
          if ((fVar22 <= fVar21) && ((__this->fields).FarAttackMinRange <= fVar22)) {
            method_01 = (Characters_ITargetable_c *)
                        (*(__this->klass->vtable)._13_GetValidAttacks.methodPtr)
                                  (__this,true,(__this->klass->vtable)._13_GetValidAttacks.method);
            if (method_01 == (Characters_ITargetable_c *)0x0) goto label_05ba060b;
            pMVar18 = extraout_RDX_04;
            if (0 < *(int *)&(method_01->_1).namespaze) {
label_05ba0418:
              Controllers_BaseTitanAIController__Attack
                        (__this,(System_Collections_Generic_List_string__o *)method_01,pMVar18);
              break;
            }
          }
        }
        if (*targetAddress == (Characters_ITargetable_o *)0x0) goto label_05ba060b;
        method_01 = TypeInfo_Characters_ITargetable;
        uVar12 = il2cpp_runtime_helper_02fd8410(1);
        target.fields.z = fVar21;
        target.fields.x = (float)(int)uVar12;
        target.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
        bVar13 = Controllers_BaseTitanAIController__HasClearLineOfSight(__this,target,(MethodInfo *)method_01)
        ;
        if (bVar13) goto label_05ba055d;
        pMVar18 = extraout_RDX_08;
        if (0.0 < (__this->fields)._stateTimeLeft) break;
      }
      goto label_05ba0488;
    }
    goto label_05ba04bc;
  case 4:
    pCVar9 = (__this->fields)._character;
    if (((pCVar9 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar10 = (pCVar9->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05ba060b;
    method_01 = (Characters_ITargetable_c *)0x0;
    UVar24 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
    uVar3 = (__this->fields)._moveToPosition.fields.x;
    fVar22 = (float)il2cpp_runtime_helper_05956b50(UVar24.fields.x,UVar24.fields.z,uVar3,
                                 (__this->fields)._moveToPosition.fields.z,0);
    pMVar18 = extraout_RDX_05;
    if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_05b9fffd;
label_05ba0460:
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 == (Characters_BaseTitan_o *)0x0) {
label_05ba060b:
      ThrowNullReferenceException();
    }
    (__this->fields)._attackRange = (__this->fields).CloseAttackRange * (pCVar6->fields).Size;
label_05ba0488:
    method_01 = (Characters_ITargetable_c *)0x1;
    Controllers_BaseTitanAIController__MoveToEnemy(__this,true,pMVar18);
    break;
  case 5:
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
    if ((pCVar6->fields).State != 0) {
      method_01 = (Characters_ITargetable_c *)0x0;
      bVar13 = Characters_BaseTitan__get_IsMoving(pCVar6,(MethodInfo *)0x0);
      if (!bVar13) break;
    }
label_05ba04bc:
    Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)method_01);
    break;
  case 6:
    if ((*targetAddress == (Characters_ITargetable_o *)0x0) ||
       (method_01 = TypeInfo_Characters_ITargetable, cVar14 = il2cpp_runtime_helper_02ad5af0(), cVar14 == '\0')) {
      Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)method_01);
      return;
    }
    fVar22 = (__this->fields)._waitAttackTimeLeft;
    fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar22 = fVar22 - fVar21;
    (__this->fields)._waitAttackTimeLeft = fVar22;
    if (fVar22 <= 0.0) {
      pCVar6 = (__this->fields)._titan;
      if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
      method_01 = (Characters_ITargetable_c *)(pCVar6->klass->vtable)._145_CanAction.method;
      bVar13 = (*(pCVar6->klass->vtable)._145_CanAction.methodPtr)(pCVar6,(MethodInfo *)method_01);
      if (bVar13) {
        pCVar6 = (__this->fields)._titan;
        if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
        (pCVar6->fields).HasDirection = false;
        fVar21 = (__this->fields)._enemyDistance;
        pfVar1 = &(__this->fields)._attackRange;
        pMVar18 = extraout_RDX_06;
        if (*pfVar1 <= fVar21 && fVar21 != *pfVar1) goto label_05ba0488;
        method_01 = (Characters_ITargetable_c *)
                    (*(__this->klass->vtable)._13_GetValidAttacks.methodPtr)
                              (__this,false,(__this->klass->vtable)._13_GetValidAttacks.method);
        if (method_01 == (Characters_ITargetable_c *)0x0) goto label_05ba060b;
        pMVar18 = method_00;
        if (0 < *(int *)&(method_01->_1).namespaze) goto label_05ba0418;
        if ((__this->fields).IsTurn != false) {
          method_01 = (Characters_ITargetable_c *)(__this->fields)._enemy;
          fVar21 = Controllers_BaseTitanAIController__GetEnemyAngle
                             (__this,(Characters_ITargetable_o *)method_01,method_00);
          pfVar1 = &(__this->fields).TurnAngle;
          if (*pfVar1 <= fVar21 && fVar21 != *pfVar1) {
            Controllers_BaseTitanAIController__TurnToEnemy(__this,(MethodInfo *)method_01);
            break;
          }
        }
        if (*targetAddress == (Characters_ITargetable_o *)0x0) goto label_05ba060b;
        method_01 = TypeInfo_Characters_ITargetable;
        uVar12 = il2cpp_runtime_helper_02fd8410(1);
        UVar25.fields.z = fVar22;
        UVar25.fields.x = (float)(int)uVar12;
        UVar25.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
        bVar13 = Controllers_BaseTitanAIController__HasClearLineOfSight(__this,UVar25,(MethodInfo *)method_01)
        ;
        pMVar18 = extraout_RDX_09;
        if (!bVar13) goto label_05ba0488;
        (__this->fields).AIState = 3;
        pCVar6 = (__this->fields)._titan;
        if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba060b;
        (pCVar6->fields).HasDirection = true;
        (pCVar6->fields).IsWalk = (bool)((__this->fields).IsRun ^ 1);
        (__this->fields)._moveAngle = 0.0;
label_05ba055d:
        Controllers_BaseTitanAIController__TargetEnemy(__this,(MethodInfo *)method_01);
      }
    }
  }
switchD_05ba01b8_default:
  Controllers_BaseTitanAIController__UpdateMovementRecovery(__this,(MethodInfo *)method_01);
  vtableDispatch = (__this->klass->vtable)._8_RefreshAgent.methodPtr;
  pMVar18 = (__this->klass->vtable)._8_RefreshAgent.method;
label_05ba04dd:
  (*vtableDispatch)(__this,pMVar18);
  return;
}


// Controllers.BaseTitanAIController$$ResetMovementRecovery
// il2cpp: void Controllers_BaseTitanAIController__ResetMovementRecovery (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9eda0

void Controllers_BaseTitanAIController__ResetMovementRecovery
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  return;
}


// Controllers.BaseTitanAIController$$UpdateMovementRecovery
// il2cpp: void Controllers_BaseTitanAIController__UpdateMovementRecovery (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba0bc0

void Controllers_BaseTitanAIController__UpdateMovementRecovery
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Characters_BaseTitan_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  bool bVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar9;
  MethodInfo *method_01;
  Controllers_BaseTitanAIController_c *method_02;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o point;
  undefined1 local_38 [16];
  InvokerMethod pIStack_28;
  uint32_t uStack_20;
  float local_1c;
  float fStack_18;
  undefined8 uStack_14;
  
  if (Il2CppMethodInitialized_07547467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547467 = '\x01';
  }
  fStack_18 = 0.0;
  uStack_14 = 0;
  pIStack_28 = (InvokerMethod)0x0;
  uStack_20 = 0;
  local_1c = 0.0;
  local_38._0_8_ = (Il2CppMethodPointer)0x0;
  local_38._8_8_ = (Il2CppMethodPointer)0x0;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).Titan, pSVar4 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).TitanSmartMovement, pSVar5 == (Settings_BoolSetting_o *)0x0))
  goto label_05ba11b3;
  if ((pSVar5->fields)._value == false) goto label_05ba0dd2;
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba11b3;
  iVar2 = (pCVar6->fields).State;
  if (iVar2 == 3) {
    fVar11 = (pCVar6->fields).WalkSpeedPerLevel * (pCVar6->fields).Size + (pCVar6->fields).WalkSpeedBase;
  }
  else {
    fVar11 = (pCVar6->fields).RunSpeedPerLevel * (pCVar6->fields).Size + (pCVar6->fields).RunSpeedBase;
    if (iVar2 == 2) {
      fVar11 = fVar11 * 1.5;
    }
  }
  if ((((__this->fields)._usePathfinding != false) ||
      (bVar8 = (*(__this->klass->vtable)._10_get__stationaryAI.methodPtr)
                         (__this,(__this->klass->vtable)._10_get__stationaryAI.method), bVar8)) ||
     (bVar8 = (*(__this->klass->vtable)._9_get__scriptedAI.methodPtr)
                        (__this,(__this->klass->vtable)._9_get__scriptedAI.method), bVar8)) goto label_05ba0dd2;
  if (Il2CppMethodInitialized_0754746e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_0754746e = '\x01';
  }
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba11b3;
  bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
  if ((((bVar1 <= (pCVar6->klass->_2).typeHierarchyDepth) &&
       ((pCVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan))
      && ((char)(*(uint64_t *)((char *)pCVar6 + 0x2b0)) != '\0')) ||
     (((pCVar6->fields).HasDirection == false || ((pCVar6->fields).Grounded == false)))) {
label_05ba0dd2:
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    return;
  }
  method_01 = (MethodInfo *)0x0;
  bVar8 = Characters_BaseTitan__get_IsMoving(pCVar6,(MethodInfo *)0x0);
  if ((fVar11 <= 0.0) || (!bVar8)) goto label_05ba0dd2;
  fVar14 = 0.0;
  pMVar9 = extraout_RDX;
  if ((__this->fields)._recoveryTimeLeft <= 0.0) {
    Controllers_BaseTitanAIController__ApplyObstacleAvoidance(__this,fVar11,method_01);
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba11b3;
    if ((fVar11 * 0.5 <= (pCVar6->fields).CurrentSpeed) ||
       (((__this->fields).AIState == 3 && ((__this->fields)._enemyDistance <= (__this->fields)._attackRange)))
       ) {
label_05ba0ef6:
      (__this->fields)._lowMovementSpeedTime = 0.0;
      return;
    }
    pUVar7 = (pCVar6->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar7->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
    goto label_05ba11b3;
    UVar17 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba11b3;
    fVar14 = (pCVar6->fields).TargetAngle - UVar17.fields.y;
    fVar11 = floorf(fVar14 / 360.0);
    fVar14 = fVar11 * -360.0 + fVar14;
    fVar11 = 360.0;
    if (fVar14 <= 360.0) {
      fVar11 = fVar14;
    }
    fVar11 = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar11);
    if (45.0 < ABS((float)(~-(uint)(180.0 < fVar11) & (uint)fVar11 |
                          (uint)(fVar11 + -360.0) & -(uint)(180.0 < fVar11)))) goto label_05ba0ef6;
    fVar11 = (__this->fields)._lowMovementSpeedTime;
    fVar14 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    fVar14 = fVar14 + fVar11;
    (__this->fields)._lowMovementSpeedTime = fVar14;
    if (fVar14 < 0.5) {
      return;
    }
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 2.0;
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto label_05ba11b3;
    fVar11 = (pCVar6->fields).TargetAngle;
    (__this->fields)._recoveryHeading = fVar11;
    method_02 = TypeInfo_Controllers_BaseTitanAIController;
    if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
    }
    UVar17 = Controllers_BaseTitanAIController__GetHeadingDirection(fVar11,(MethodInfo *)method_02);
    fVar14 = UVar17.fields.z;
    method_01 = (MethodInfo *)local_38;
    bVar8 = Controllers_BaseTitanAIController__CastObstacle
                      (__this,UVar17,0.0,0.5,(UnityEngine_RaycastHit_o *)method_01,method_00);
    if (bVar8) {
      method_01 = (MethodInfo *)0x0;
      point = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)local_38,(MethodInfo *)0x0);
      fVar11 = Controllers_BaseTitanAIController__GetObstacleSide(__this,UVar17,point,method_01);
      fVar11 = fVar11 * -70.0;
      pMVar9 = extraout_RDX_01;
    }
    else {
      fVar11 = UnityEngine_Random__get_value((MethodInfo *)0x0);
      fVar14 = 0.5;
      pMVar9 = extraout_RDX_02;
      if (0.5 <= fVar11) {
        fVar11 = -70.0;
      }
      else {
        fVar11 = 70.0;
      }
    }
    (__this->fields)._recoveryTurnAngle = fVar11;
    (__this->fields)._avoidAngle = 0.0;
    fVar11 = (__this->fields)._stateTimeLeft;
    fVar12 = (__this->fields)._recoveryTimeLeft;
    if (fVar11 <= fVar12) {
      fVar11 = fVar12;
    }
    (__this->fields)._stateTimeLeft = fVar11;
  }
  fVar11 = (__this->fields)._recoveryHeading;
  iVar2 = (__this->fields).AIState;
  if ((iVar2 == 3) || (iVar2 == 6)) {
    bVar8 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,method_01);
    if (bVar8) {
      if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_05ba11b3;
      uVar13 = il2cpp_runtime_helper_02fd8410(1);
      pMVar9 = extraout_RDX_00;
      goto label_05ba0f34;
    }
  }
  else if (iVar2 == 4) {
    uVar13._0_4_ = (__this->fields)._moveToPosition.fields.x;
    uVar13._4_4_ = (__this->fields)._moveToPosition.fields.y;
    fVar14 = (__this->fields)._moveToPosition.fields.z;
label_05ba0f34:
    UVar17.fields.z = fVar14;
    UVar17.fields.x = (float)(int)uVar13;
    UVar17.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
    fVar11 = Controllers_BaseTitanAIController__GetChaseAngle(__this,UVar17,false,pMVar9);
  }
  fVar14 = (__this->fields)._recoveryTimeLeft;
  fVar12 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar14 = fVar14 - fVar12;
  (__this->fields)._recoveryTimeLeft = fVar14;
  if (fVar14 <= 0.0) {
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 != (Characters_BaseTitan_o *)0x0) {
      (pCVar6->fields).TargetAngle = fVar11;
      (__this->fields)._lowMovementSpeedTime = 0.0;
      (__this->fields)._recoveryTimeLeft = 0.0;
      (__this->fields)._avoidAngle = 0.0;
      (__this->fields)._stateTimeLeft = 0.0;
      return;
    }
  }
  else {
    fVar14 = (__this->fields)._recoveryTurnAngle;
    fVar12 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    fVar12 = fVar12 * 10.0;
    fVar15 = 0.0 - fVar14;
    uVar10 = -(uint)(0.0 <= fVar15);
    fVar14 = (float)(-(uint)(fVar12 < ABS(fVar15)) &
                    (uint)((float)(~uVar10 & (uint)-fVar12 | uVar10 & (uint)fVar12) + fVar14));
    (__this->fields)._recoveryTurnAngle = fVar14;
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 != (Characters_BaseTitan_o *)0x0) {
      fVar11 = fVar11 + fVar14;
      fVar14 = floorf(fVar11 / 360.0);
      auVar16 = ZEXT812(0x43b40000);
      fVar11 = fVar11 - fVar14 * auVar16._0_4_;
      if (fVar11 <= auVar16._0_4_) {
        auVar16._4_8_ = auVar16._4_8_;
        auVar16._0_4_ = fVar11;
      }
      (pCVar6->fields).TargetAngle = (float)(-(uint)(0.0 <= fVar11) & auVar16._0_4_);
      return;
    }
  }
label_05ba11b3:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$ApplyObstacleAvoidance
// il2cpp: void Controllers_BaseTitanAIController__ApplyObstacleAvoidance (Controllers_BaseTitanAIController_o* __this, float speed, const MethodInfo* method);
// 0x5ba26d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba278d: jp 0x5ba27eb

void Controllers_BaseTitanAIController__ApplyObstacleAvoidance
               (Controllers_BaseTitanAIController_o *__this,float speed,MethodInfo *method)

{
  float *pfVar1;
  int iVar2;
  Characters_BaseTitan_o *pCVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = (__this->fields).AIState;
  if ((iVar2 != 4) && ((iVar2 != 3 || ((__this->fields)._enemyDistance <= (__this->fields)._attackRange)))) {
    (__this->fields)._avoidAngle = 0.0;
    return;
  }
  fVar5 = (__this->fields)._avoidAngle;
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    pCVar3 = (__this->fields)._titan;
    if (pCVar3 == (Characters_BaseTitan_o *)0x0) goto label_05ba285f;
    fVar5 = (pCVar3->fields).TargetAngle;
    pfVar1 = &(__this->fields)._avoidedTargetAngle;
    if ((fVar5 == *pfVar1) && (!NAN(fVar5) && !NAN(*pfVar1))) {
      (pCVar3->fields).TargetAngle = (__this->fields)._avoidHeading;
    }
  }
  fVar5 = (__this->fields)._obstacleCheckTimeLeft;
  fVar4 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 - fVar4;
  (__this->fields)._obstacleCheckTimeLeft = fVar5;
  if (fVar5 <= 0.0) {
    (__this->fields)._obstacleCheckTimeLeft = 0.2;
    pCVar3 = (__this->fields)._titan;
    if (pCVar3 == (Characters_BaseTitan_o *)0x0) goto label_05ba285f;
    fVar5 = Controllers_BaseTitanAIController__GetAvoidAngle(__this,(pCVar3->fields).TargetAngle,speed,method)
    ;
    (__this->fields)._avoidAngle = fVar5;
  }
  else {
    fVar5 = (__this->fields)._avoidAngle;
  }
  if ((fVar5 == 0.0) && (!NAN(fVar5))) {
    return;
  }
  pCVar3 = (__this->fields)._titan;
  if (pCVar3 != (Characters_BaseTitan_o *)0x0) {
    fVar4 = (pCVar3->fields).TargetAngle;
    (__this->fields)._avoidHeading = fVar4;
    fVar5 = fVar5 + fVar4;
    fVar4 = floorf(fVar5 / 360.0);
    fVar5 = fVar5 - fVar4 * 360.0;
    fVar4 = 360.0;
    if (fVar5 <= 360.0) {
      fVar4 = fVar5;
    }
    fVar4 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
    (__this->fields)._avoidedTargetAngle = fVar4;
    (pCVar3->fields).TargetAngle = fVar4;
    return;
  }
label_05ba285f:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$IsNearEnemy
// il2cpp: bool Controllers_BaseTitanAIController__IsNearEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba2870

bool Controllers_BaseTitanAIController__IsNearEnemy
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  if ((__this->fields).AIState == 3) {
    return (__this->fields)._enemyDistance <= (__this->fields)._attackRange;
  }
  return false;
}


// Controllers.BaseTitanAIController$$GetAvoidAngle
// il2cpp: float Controllers_BaseTitanAIController__GetAvoidAngle (Controllers_BaseTitanAIController_o* __this, float heading, float speed, const MethodInfo* method);
// 0x5ba2c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba3293: jmp 0x5ba2f7b

float Controllers_BaseTitanAIController__GetAvoidAngle
                (Controllers_BaseTitanAIController_o *__this,float heading,float speed,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  Characters_BaseTitan_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  System_Single_array *pSVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  bool bVar8;
  ulong uVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  ulong uVar10;
  undefined1 auVar11 [4];
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float lookAhead;
  float fVar14;
  float fVar15;
  undefined4 in_XMM1_Dc;
  undefined4 uVar16;
  undefined4 in_XMM1_Dd;
  undefined4 uVar17;
  UnityEngine_Quaternion_o UVar18;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o local_128;
  float local_11c;
  undefined1 local_118 [4];
  undefined1 auStack_114 [12];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  uint uStack_e0;
  uint uStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  UnityEngine_RaycastHit_o local_b8;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  UnityEngine_RaycastHit_o local_68;
  
  local_11c = heading;
  if (Il2CppMethodInitialized_07547468 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    Il2CppMethodInitialized_07547468 = '\x01';
  }
  local_b8.fields.m_UV.fields.x = 0.0;
  local_b8.fields.m_UV.fields.y = 0.0;
  local_b8.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_b8.fields.m_Normal.fields.y = 0.0;
  local_b8.fields.m_Normal.fields.z = 0.0;
  local_b8.fields.m_FaceID = 0;
  local_b8.fields.m_Distance = 0.0;
  local_b8.fields.m_Point.fields.x = 0.0;
  local_b8.fields.m_Point.fields.y = 0.0;
  local_b8.fields.m_Point.fields.z = 0.0;
  local_b8.fields.m_Normal.fields.x = 0.0;
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  lookAhead = speed * 0.6;
  local_128.fields.x = 0.0;
  local_128.fields.y = local_11c * 0.017453292;
  local_128.fields.z = 0.0;
  UVar18 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_128,(MethodInfo *)0x0);
  fVar12 = UVar18.fields.x;
  fVar13 = UVar18.fields.y;
  fVar14 = UVar18.fields.z;
  fVar15 = UVar18.fields.w;
  if (g_data_0753e72e == '\0') {
    local_108._8_4_ = extraout_XMM0_Dc;
    local_108._0_8_ = UVar18.fields._0_8_;
    local_108._12_4_ = extraout_XMM0_Dd;
    local_f8._8_4_ = in_XMM1_Dc;
    local_f8._0_8_ = UVar18.fields._8_8_;
    local_f8._12_4_ = in_XMM1_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72e = '\x01';
    fVar12 = (float)local_108._0_4_;
    fVar13 = (float)local_108._4_4_;
    fVar14 = (float)local_f8._0_4_;
    fVar15 = (float)local_f8._4_4_;
  }
  UVar18.fields.y = fVar13;
  UVar18.fields.x = fVar12;
  UVar18.fields.w = fVar15;
  UVar18.fields.z = fVar14;
  UVar19 = UnityEngine_Quaternion__op_Multiply_6905700
                     (UVar18,(UnityEngine_Vector3_o)
                             (TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields,
                      (MethodInfo *)0x0);
  local_f8._8_4_ = extraout_XMM0_Dc_00;
  local_f8._0_8_ = UVar19.fields._0_8_;
  local_f8._12_4_ = extraout_XMM0_Dd_00;
  local_108._0_4_ = UVar19.fields.z;
  bVar8 = Controllers_BaseTitanAIController__CastObstacle(__this,UVar19,lookAhead,1.0,&local_b8,method_00);
  auVar7 = auStack_114;
  auVar6._12_4_ = 0;
  auVar6._0_12_ = auStack_114;
  _local_118 = auVar6 << 0x20;
  if (!bVar8) {
label_05ba32ac:
    return (float)local_118;
  }
  auVar11 = (undefined1  [4])(__this->fields)._avoidAngle;
  uVar16 = 0;
  uVar17 = 0;
  if (((float)auVar11 != 0.0) || (NAN((float)auVar11))) {
    if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
      local_118 = auVar11;
      _local_118 = CONCAT124(auVar7,local_118);
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
      auVar11 = local_118;
    }
    local_128.fields.x = 0.0;
    local_128.fields.y = ((float)auVar11 + local_11c) * 0.017453292;
    local_128.fields.z = 0.0;
    UVar18 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_128,(MethodInfo *)0x0);
    auVar11 = (undefined1  [4])UVar18.fields.x;
    fVar12 = UVar18.fields.y;
    fVar13 = UVar18.fields.z;
    fVar14 = UVar18.fields.w;
    if (g_data_0753e72e == '\0') {
      unique0x10000333 = extraout_XMM0_Dc_01;
      _local_118 = UVar18.fields._0_8_;
      unique0x10000337 = extraout_XMM0_Dd_01;
      uStack_e0 = uVar16;
      local_e8 = (undefined1  [8])UVar18.fields._8_8_;
      uStack_dc = uVar17;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      g_data_0753e72e = '\x01';
      auVar11 = local_118;
      fVar12 = (float)auStack_114._0_4_;
      fVar13 = (float)local_e8._0_4_;
      fVar14 = (float)local_e8._4_4_;
    }
    rotation.fields.y = fVar12;
    rotation.fields.x = (float)auVar11;
    rotation.fields.w = fVar14;
    rotation.fields.z = fVar13;
    UVar19 = UnityEngine_Quaternion__op_Multiply_6905700
                       (rotation,(UnityEngine_Vector3_o)
                                 (TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields,
                        (MethodInfo *)0x0);
    bVar8 = Controllers_BaseTitanAIController__CastObstacle(__this,UVar19,lookAhead,1.0,&local_68,method_01);
    local_118 = (undefined1  [4])(__this->fields)._avoidAngle;
    if (!bVar8) goto label_05ba32ac;
  }
  else {
    local_118 = auVar11;
    _local_118 = CONCAT124(auVar7,local_118);
  }
  if (((float)local_118 != 0.0) || (NAN((float)local_118))) {
    _local_e8 = ZEXT416(*(uint *)(&g_data_0100ad30 + (ulong)(0.0 <= (float)local_118) * 4));
    uVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor;
  }
  else {
    UVar19 = UnityEngine_RaycastHit__get_point(&local_b8,(MethodInfo *)0x0);
    pCVar3 = (__this->fields)._titan;
    if ((pCVar3 == (Characters_BaseTitan_o *)0x0) ||
       (pUVar4 = (pCVar3->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) goto label_05ba32c9;
    uStack_e0 = extraout_XMM0_Dc_02;
    local_e8 = (undefined1  [8])UVar19.fields._0_8_;
    uStack_dc = extraout_XMM0_Dd_02;
    local_118 = (undefined1  [4])UVar19.fields.z;
    __this_00 = (pUVar4->fields).Transform;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05ba32c9;
    UVar19 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    local_e8._4_4_ = 0x80000000;
    local_e8._0_4_ =
         *(uint *)(&g_data_0100ac40 +
                  (ulong)((float)local_108._0_4_ * ((float)local_e8._0_4_ - UVar19.fields.x) -
                          ((float)local_118 - UVar19.fields.z) * (float)local_f8._0_4_ < 0.0) * 4) ^
         0x80000000;
    uStack_e0 = 0x80000000;
    uStack_dc = 0x80000000;
    uVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
  }
  pSVar5 = TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles;
  if (pSVar5 != (System_Single_array *)0x0) {
    uVar2 = (uint)pSVar5->max_length;
    if (uVar2 == 0) {
label_05ba32c4:
      ThrowIndexOutOfRangeException();
    }
    local_118 = (undefined1  [4])
                *(undefined4 *)
                 ((long)pSVar5->m_Items + ((long)(((ulong)uVar2 << 0x20) + -0x100000000) >> 0x1e));
    fVar12 = UnityEngine_RaycastHit__get_distance(&local_b8,(MethodInfo *)0x0);
    local_f8._0_4_ = fVar12;
    pSVar5 = TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles;
    if (pSVar5 != (System_Single_array *)0x0) {
      local_118 = (undefined1  [4])((float)local_118 * (float)local_e8._0_4_);
      if (0 < (int)pSVar5->max_length) {
        local_78 = -(float)local_e8._0_4_;
        uStack_74 = local_e8._4_4_ ^ 0x80000000;
        uStack_70 = uStack_e0 ^ 0x80000000;
        uStack_6c = uStack_dc ^ 0x80000000;
        uVar9 = pSVar5->max_length & 0xffffffff;
        uVar10 = 0;
        do {
          if (uVar9 <= uVar10) goto label_05ba32c4;
          local_108._0_4_ = pSVar5->m_Items[uVar10];
          fVar12 = (float)local_e8._0_4_;
          fVar13 = pSVar5->m_Items[uVar10];
          if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
            fVar12 = (float)local_e8._0_4_;
            fVar13 = (float)local_108._0_4_;
          }
          uVar17 = 0;
          uVar16 = 0;
          local_d8._0_4_ = fVar13 * fVar12;
          local_128.fields.x = 0.0;
          local_128.fields.y = (fVar13 * fVar12 + local_11c) * 0.017453292;
          local_128.fields.z = 0.0;
          UVar18 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_128,(MethodInfo *)0x0);
          fVar12 = UVar18.fields.x;
          fVar13 = UVar18.fields.y;
          fVar14 = UVar18.fields.z;
          fVar15 = UVar18.fields.w;
          if (g_data_0753e72e == '\0') {
            local_c8._8_4_ = extraout_XMM0_Dc_03;
            local_c8._0_8_ = UVar18.fields._0_8_;
            local_c8._12_4_ = extraout_XMM0_Dd_03;
            uStack_80 = uVar16;
            local_88 = UVar18.fields._8_8_;
            uStack_7c = uVar17;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            g_data_0753e72e = '\x01';
            fVar12 = (float)local_c8._0_4_;
            fVar13 = (float)local_c8._4_4_;
            fVar14 = (float)local_88._0_4_;
            fVar15 = (float)local_88._4_4_;
            uVar16 = uStack_80;
            uVar17 = uStack_7c;
          }
          rotation_00.fields.y = fVar13;
          rotation_00.fields.x = fVar12;
          rotation_00.fields.w = fVar15;
          rotation_00.fields.z = fVar14;
          UVar19 = UnityEngine_Quaternion__op_Multiply_6905700
                             (rotation_00,
                              (UnityEngine_Vector3_o)
                              (TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields,
                              (MethodInfo *)0x0);
          bVar8 = Controllers_BaseTitanAIController__CastObstacle
                            (__this,UVar19,lookAhead,1.0,&local_b8,method_02);
          if (!bVar8) {
            local_108._0_4_ = local_d8._0_4_;
label_05ba32a6:
            local_118 = (undefined1  [4])local_108._0_4_;
            break;
          }
          fVar12 = UnityEngine_RaycastHit__get_distance(&local_b8,(MethodInfo *)0x0);
          if ((float)local_f8._0_4_ < fVar12) {
            fVar12 = UnityEngine_RaycastHit__get_distance(&local_b8,(MethodInfo *)0x0);
            local_f8._0_4_ = fVar12;
            local_118 = (undefined1  [4])local_d8._0_4_;
          }
          if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
          }
          fVar12 = (float)local_108._0_4_ * local_78;
          local_108._0_4_ = fVar12;
          local_128.fields.x = 0.0;
          local_128.fields.y = (fVar12 + local_11c) * 0.017453292;
          local_128.fields.z = 0.0;
          UVar18 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_128,(MethodInfo *)0x0);
          fVar12 = UVar18.fields.x;
          fVar13 = UVar18.fields.y;
          fVar14 = UVar18.fields.z;
          fVar15 = UVar18.fields.w;
          if (g_data_0753e72e == '\0') {
            local_d8._8_4_ = extraout_XMM0_Dc_04;
            local_d8._0_8_ = UVar18.fields._0_8_;
            local_d8._12_4_ = extraout_XMM0_Dd_04;
            local_c8._8_4_ = uVar16;
            local_c8._0_8_ = UVar18.fields._8_8_;
            local_c8._12_4_ = uVar17;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            g_data_0753e72e = '\x01';
            fVar12 = (float)local_d8._0_4_;
            fVar13 = (float)local_d8._4_4_;
            fVar14 = (float)local_c8._0_4_;
            fVar15 = (float)local_c8._4_4_;
          }
          rotation_01.fields.y = fVar13;
          rotation_01.fields.x = fVar12;
          rotation_01.fields.w = fVar15;
          rotation_01.fields.z = fVar14;
          UVar19 = UnityEngine_Quaternion__op_Multiply_6905700
                             (rotation_01,
                              (UnityEngine_Vector3_o)
                              (TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields,
                              (MethodInfo *)0x0);
          bVar8 = Controllers_BaseTitanAIController__CastObstacle
                            (__this,UVar19,lookAhead,1.0,&local_b8,method_03);
          if (!bVar8) {
            goto label_05ba32a6;
          }
          fVar12 = UnityEngine_RaycastHit__get_distance(&local_b8,(MethodInfo *)0x0);
          if ((float)local_f8._0_4_ < fVar12) {
            fVar12 = UnityEngine_RaycastHit__get_distance(&local_b8,(MethodInfo *)0x0);
            local_f8._0_4_ = fVar12;
            local_118 = (undefined1  [4])local_108._0_4_;
          }
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar5->max_length;
          uVar9 = (ulong)uVar2;
        } while ((long)uVar10 < (long)(int)uVar2);
      }
      goto label_05ba32ac;
    }
  }
label_05ba32c9:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$CastObstacle
// il2cpp: bool Controllers_BaseTitanAIController__CastObstacle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o direction, float lookAhead, float radiusScale, UnityEngine_RaycastHit_o* hit, const MethodInfo* method);
// 0x5ba2920

bool Controllers_BaseTitanAIController__CastObstacle
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o direction,float lookAhead,
               float radiusScale,UnityEngine_RaycastHit_o *hit,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Characters_BaseTitan_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_CapsuleCollider_o *pUVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  bool bVar12;
  int32_t layerMask;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float radius;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  undefined8 local_88;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07547469 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07547469 = '\x01';
  }
  pCVar7 = (__this->fields)._titan;
  if (((pCVar7 != (Characters_BaseTitan_o *)0x0) &&
      (pUVar8 = (pCVar7->fields).Cache, pUVar8 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar9 = (pUVar8->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    UVar20 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
    pUVar10 = (__this->fields)._mainCollider;
    if (pUVar10 != (UnityEngine_CapsuleCollider_o *)0x0) {
      fVar14 = UnityEngine_CapsuleCollider__get_radius(pUVar10,(MethodInfo *)0x0);
      pCVar7 = (__this->fields)._titan;
      if ((pCVar7 != (Characters_BaseTitan_o *)0x0) &&
         (pUVar8 = (pCVar7->fields).Cache, pUVar8 != (Utility_BaseComponentCache_o *)0x0)) {
        pUVar9 = (pUVar8->fields).Transform;
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar21 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar10 = (__this->fields)._mainCollider;
          if (pUVar10 != (UnityEngine_CapsuleCollider_o *)0x0) {
            local_88._0_4_ = UVar20.fields.x;
            fVar14 = fVar14 * (float)local_88;
            local_58 = direction.fields.x;
            fStack_54 = direction.fields.y;
            radius = radiusScale * fVar14;
            fVar15 = UVar21.fields.x - fVar14 * local_58;
            fVar17 = UVar21.fields.y - fVar14 * fStack_54;
            fVar18 = UVar21.fields.z - fVar14 * direction.fields.z;
            pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar3 = (pUVar11->upVector).fields.x;
            uVar5 = (pUVar11->upVector).fields.y;
            fVar19 = fVar14 + radius;
            fVar1 = (pUVar11->upVector).fields.z;
            pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar2 = (pUVar11->upVector).fields.z;
            uVar4 = (pUVar11->upVector).fields.x;
            uVar6 = (pUVar11->upVector).fields.y;
            fVar16 = UnityEngine_CapsuleCollider__get_height(pUVar10,(MethodInfo *)0x0);
            fVar16 = fVar16 * (float)local_88 - radius;
            if (fVar16 <= fVar19) {
              fVar16 = fVar19;
            }
            layerMask = UnityEngine_LayerMask__get_value(&(__this->fields)._losLayer,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
            }
            bVar13 = false;
            UVar20.fields.y = fVar19 * (float)uVar5 + fVar17;
            UVar20.fields.x = fVar19 * (float)uVar3 + fVar15;
            UVar20.fields.z = fVar1 * fVar19 + fVar18;
            UVar21.fields.z = fVar2 * fVar16 + fVar18;
            UVar21.fields.x = fVar16 * (float)uVar4 + fVar15;
            UVar21.fields.y = fVar16 * (float)uVar6 + fVar17;
            bVar12 = UnityEngine_Physics__CapsuleCast
                               (UVar20,UVar21,radius,direction,hit,fVar14 + fVar14 + lookAhead,layerMask,1,
                                (MethodInfo *)0x0);
            if (bVar12) {
              UVar20 = UnityEngine_RaycastHit__get_normal(hit,(MethodInfo *)0x0);
              bVar13 = UVar20.fields.y < 0.6;
            }
            return bVar13;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetObstacleSide
// il2cpp: float Controllers_BaseTitanAIController__GetObstacleSide (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o direction, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x5ba2bd0

float Controllers_BaseTitanAIController__GetObstacleSide
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o direction,
                UnityEngine_Vector3_o point,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o UVar3;
  float local_28;
  float local_18;
  
  pCVar1 = (__this->fields)._titan;
  if ((pCVar1 != (Characters_BaseTitan_o *)0x0) &&
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
    __this_00 = (pUVar2->fields).Transform;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      local_18 = point.fields.x;
      local_28 = direction.fields.x;
      return *(float *)(&g_data_0100ac40 +
                       (ulong)((local_18 - UVar3.fields.x) * direction.fields.z -
                               (point.fields.z - UVar3.fields.z) * local_28 < 0.0) * 4);
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetHeadingDirection
// il2cpp: UnityEngine_Vector3_o Controllers_BaseTitanAIController__GetHeadingDirection (float heading, const MethodInfo* method);
// 0x5ba2890

UnityEngine_Vector3_o Controllers_BaseTitanAIController__GetHeadingDirection(float heading,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar3;
  float fVar4;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar5;
  UnityEngine_Vector3_Fields UVar6;
  UnityEngine_Vector3_o local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [24];
  
  local_38.fields.x = 0.0;
  local_38.fields.y = heading * 0.017453292;
  local_38.fields.z = 0.0;
  UVar5 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_38,(MethodInfo *)0x0);
  fVar1 = UVar5.fields.x;
  fVar2 = UVar5.fields.y;
  fVar3 = UVar5.fields.z;
  fVar4 = UVar5.fields.w;
  if (g_data_0753e72e == '\0') {
    local_18._8_4_ = extraout_XMM0_Dc;
    local_18._0_8_ = UVar5.fields._0_8_;
    local_18._12_4_ = extraout_XMM0_Dd;
    local_28._8_4_ = in_XMM1_Dc;
    local_28._0_8_ = UVar5.fields._8_8_;
    local_28._12_4_ = in_XMM1_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72e = '\x01';
    fVar1 = (float)local_18._0_4_;
    fVar2 = (float)local_18._4_4_;
    fVar3 = (float)local_28._0_4_;
    fVar4 = (float)local_28._4_4_;
  }
  UVar5.fields.y = fVar2;
  UVar5.fields.x = fVar1;
  UVar5.fields.w = fVar4;
  UVar5.fields.z = fVar3;
  UVar6 = (UnityEngine_Vector3_Fields)
          UnityEngine_Quaternion__op_Multiply_6905700
                    (UVar5,(UnityEngine_Vector3_o)
                           (TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields,
                     (MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar6;
}


// Controllers.BaseTitanAIController$$RefreshAgent
// il2cpp: void Controllers_BaseTitanAIController__RefreshAgent (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba32d0

void Controllers_BaseTitanAIController__RefreshAgent
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  (__this->fields).SmartAttack = false;
  Controllers_BaseAIController__RefreshAgent((Controllers_BaseAIController_o *)__this,method);
  return;
}


// Controllers.BaseTitanAIController$$GetEnemyAngle
// il2cpp: float Controllers_BaseTitanAIController__GetEnemyAngle (Controllers_BaseTitanAIController_o* __this, Characters_ITargetable_o* enemy, const MethodInfo* method);
// 0x5ba2100
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba2237: jmp 0x5ba25a8
// asm:   0x5ba22fc: mov qword ptr [rsp + 0x28], 0
// asm:   0x5ba2305: cmp byte ptr [rip + 0x199c41d], 0
// asm:   0x5ba230c: je 0x5ba248f
// asm:   0x5ba2387: jmp 0x5ba23d5
// asm:   0x5ba243c: mulss xmm0, xmm2
// asm:   0x5ba2440: xorps xmm2, xmm2
// asm:   0x5ba2443: ucomiss xmm0, xmm2
// asm:   0x5ba2446: jb 0x5ba24f5
// asm:   0x5ba2461: jmp 0x5ba2594

float Controllers_BaseTitanAIController__GetEnemyAngle
                (Controllers_BaseTitanAIController_o *__this,Characters_ITargetable_o *enemy,
                MethodInfo *method)

{
  uint32_t uVar1;
  Characters_ITargetable_c *pCVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Characters_BaseCharacter_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  double dVar8;
  bool bVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  undefined8 uVar18;
  long lVar12;
  Il2CppClass *klass;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db;
  float fVar17;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  float local_58;
  float fStack_54;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_0754746a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_0754746a = '\x01';
  }
  if (enemy == (Characters_ITargetable_o *)0x0) {
label_05ba21ee:
    pCVar4 = (__this->fields)._character;
    if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05ba25a8;
    UVar22 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
    fVar13 = UVar22.fields.z;
    local_58 = UVar22.fields.x;
    pCVar4 = (__this->fields)._character;
  }
  else {
    pCVar2 = enemy->klass;
    uVar11 = (ulong)(pCVar2->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pCVar2->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Characters_ITargetable_c **)((long)&pIVar3->interfaceType + lVar12) ==
            TypeInfo_Characters_ITargetable) {
          pVVar10 = pCVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 2);
          goto label_05ba2199;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)enemy,(Il2CppClass *)TypeInfo_Characters_ITargetable,2);
label_05ba2199:
    bVar9 = (*pVVar10->methodPtr)((Il2CppObject *)enemy,pVVar10->method);
    if (!bVar9) goto label_05ba21ee;
    pCVar2 = enemy->klass;
    uVar11 = (ulong)(pCVar2->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pCVar2->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Characters_ITargetable_c **)((long)&pIVar3->interfaceType + lVar12) ==
            TypeInfo_Characters_ITargetable) {
          pVVar10 = pCVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 1);
          goto label_05ba2252;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)enemy,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba2252:
    UVar22 = (*pVVar10->methodPtr)((Il2CppObject *)enemy,pVVar10->method);
    pCVar4 = (__this->fields)._character;
    if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05ba25a8;
    UVar23 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    local_58 = UVar22.fields.x;
    local_58 = local_58 - UVar23.fields.x;
    fVar13 = UVar22.fields.z - UVar23.fields.z;
    pCVar4 = (__this->fields)._character;
  }
  if (((pCVar4 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    UVar22 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
    fVar17 = UVar22.fields.z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
    }
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar16 = 0;
    fVar14 = fVar13 * fVar13 + local_58 * local_58 + 0.0;
    if (fVar14 < 0.0) {
      fVar14 = sqrtf(fVar14);
      uVar16 = extraout_XMM0_Db;
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    if (1e-05 < fVar14) {
      fVar13 = fVar13 / fVar14;
      auVar19._4_4_ = fVar14;
      auVar19._0_4_ = fVar14;
      auVar19._8_4_ = uVar16;
      auVar19._12_4_ = uVar16;
      auVar19 = divps(ZEXT416((uint)local_58),auVar19);
      uVar18 = auVar19._0_8_;
      fVar14 = auVar19._0_4_;
      fVar21 = auVar19._4_4_;
    }
    else {
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar13 = (pUVar7->zeroVector).fields.z;
      uVar18._0_4_ = (pUVar7->zeroVector).fields.x;
      uVar18._4_4_ = (pUVar7->zeroVector).fields.y;
      fVar14 = (float)(undefined4)uVar18;
      fVar21 = (float)uVar18._4_4_;
    }
    local_58 = (float)uVar18;
    fStack_54 = (float)((ulong)uVar18 >> 0x20);
    if (Il2CppMethodInitialized_075450a4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_075450a4 = '\x01';
      fVar14 = local_58;
      fVar21 = fStack_54;
    }
    local_28 = UVar22.fields.x;
    fStack_24 = UVar22.fields.y;
    fVar15 = fVar17 * fVar17 + fStack_24 * fStack_24 + local_28 * local_28;
    fVar20 = fVar13 * fVar13 + fVar21 * fVar21 + fVar14 * fVar14;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar14 = local_58;
      fVar21 = fStack_54;
    }
    if (0.0 <= fVar15 * fVar20) {
      fVar15 = SQRT(fVar15 * fVar20);
      local_58 = fVar14;
      fStack_54 = fVar21;
      klass = (Il2CppClass *)TypeInfo_System_Math;
    }
    else {
      fVar15 = sqrtf(fVar15 * fVar20);
      klass = (Il2CppClass *)TypeInfo_System_Math;
    }
    fVar14 = 0.0;
    TypeInfo_System_Math = (System_Math_c *)klass;
    if (1e-15 <= fVar15) {
      fVar15 = (fVar17 * fVar13 + fStack_24 * fStack_54 + local_28 * local_58) / fVar15;
      fVar13 = 1.0;
      if (fVar15 <= 1.0) {
        fVar13 = fVar15;
      }
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      dVar8 = acos((double)(float)(~-(uint)(-1.0 <= fVar15) & 0xbf800000 |
                                  (uint)fVar13 & -(uint)(-1.0 <= fVar15)),(MethodInfo *)klass);
      fVar14 = (float)dVar8 * 57.29578;
    }
    return ABS(fVar14);
  }
label_05ba25a8:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetChaseAngle
// il2cpp: float Controllers_BaseTitanAIController__GetChaseAngle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, bool useMoveAngle, const MethodInfo* method);
// 0x5ba0920
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba0976: mov qword ptr [rsp + 0x38], 0
// asm:   0x5ba097f: cmp byte ptr [rip + 0x199dda3], 0
// asm:   0x5ba0986: je 0x5ba0b8a
// asm:   0x5ba0a1d: jmp 0x5ba0a62
// asm:   0x5ba0af0: jmp 0x5ba0b07

float Controllers_BaseTitanAIController__GetChaseAngle
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o position,bool useMoveAngle,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Characters_BaseTitan_o *pCVar6;
  MethodInfo *method_00;
  float fVar7;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 extraout_var [12];
  undefined1 auVar10 [16];
  undefined4 uVar13;
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  float fVar14;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pCVar3 = (__this->fields)._character;
  if (((pCVar3 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar4->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_05ba0bb8;
  method_00 = (MethodInfo *)0x0;
  UVar19 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  local_58 = position.fields.x;
  fStack_54 = position.fields.y;
  fStack_50 = (float)in_XMM0_Qb;
  fStack_4c = (float)((ulong)in_XMM0_Qb >> 0x20);
  auVar17._0_4_ = local_58 - UVar19.fields.x;
  auVar17._4_4_ = fStack_54 - UVar19.fields.y;
  auVar17._8_4_ = fStack_50 - (float)extraout_XMM0_Qb;
  auVar17._12_4_ = fStack_4c - (float)((ulong)extraout_XMM0_Qb >> 0x20);
  fVar14 = position.fields.z - UVar19.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  auVar8._4_4_ = in_XMM1_Db;
  auVar8._0_4_ = fVar14;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar9._4_12_ = auVar8._4_12_;
  fVar7 = fVar14 * fVar14 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
  if (fVar7 < 0.0) {
    auVar10._0_4_ = sqrtf(fVar7);
    auVar10._4_12_ = extraout_var;
    uVar16 = auVar10._0_8_;
    if (auVar10._0_4_ <= 1e-05) goto label_05ba09fa;
label_05ba0a41:
    auVar11._0_4_ = (float)uVar16;
    fVar14 = fVar14 / auVar11._0_4_;
    uVar13 = (undefined4)((ulong)uVar16 >> 0x20);
    auVar12._8_4_ = uVar13;
    auVar12._0_8_ = uVar16;
    auVar12._12_4_ = uVar13;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = auVar11._0_4_;
    auVar17 = divps(auVar17,auVar11);
    uVar16 = auVar17._0_8_;
  }
  else {
    auVar9._0_4_ = SQRT(fVar7);
    uVar16 = auVar9._0_8_;
    if (1e-05 < auVar9._0_4_) goto label_05ba0a41;
label_05ba09fa:
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar14 = (pUVar5->zeroVector).fields.z;
    uVar16._0_4_ = (pUVar5->zeroVector).fields.x;
    uVar16._4_4_ = (pUVar5->zeroVector).fields.y;
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar2 = (pUVar5->zeroVector).fields.y;
  fVar18 = (float)((ulong)uVar16 >> 0x20) - (float)uVar2;
  fVar7 = fVar14 - (pUVar5->zeroVector).fields.z;
  fVar15 = (float)uVar16 - (float)uVar1;
  if (9.9999994e-11 <= fVar18 * fVar18 + fVar15 * fVar15 + fVar7 * fVar7) {
    UVar19.fields.z = fVar14;
    UVar19.fields.x = (float)(int)uVar16;
    UVar19.fields.y = (float)(int)((ulong)uVar16 >> 0x20);
    fVar14 = Controllers_BaseAIController__GetTargetAngle
                       ((Controllers_BaseAIController_o *)__this,UVar19,method_00);
  }
  else {
    pCVar6 = (__this->fields)._titan;
    if (pCVar6 == (Characters_BaseTitan_o *)0x0) {
label_05ba0bb8:
      ThrowNullReferenceException();
    }
    fVar14 = (pCVar6->fields).TargetAngle;
  }
  if (useMoveAngle) {
    fVar14 = fVar14 + (__this->fields)._moveAngle;
  }
  fVar14 = (float)(~-(uint)(360.0 < fVar14) & (uint)fVar14 | (uint)(fVar14 + -360.0) & -(uint)(360.0 < fVar14)
                  );
  return (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 | (uint)(fVar14 + 360.0) & -(uint)(fVar14 < 0.0));
}


// Controllers.BaseTitanAIController$$GetChaseAngleGivenDirection
// il2cpp: float Controllers_BaseTitanAIController__GetChaseAngleGivenDirection (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o direction, bool useMoveAngle, const MethodInfo* method);
// 0x5ba32e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba337c: jmp 0x5ba3393

float Controllers_BaseTitanAIController__GetChaseAngleGivenDirection
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o direction,bool useMoveAngle
                ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Characters_BaseTitan_o *pCVar4;
  undefined3 in_register_00000031;
  undefined4 uVar5;
  undefined4 in_register_00000034;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = CONCAT31(in_register_00000031,useMoveAngle);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->zeroVector).fields.x;
  uVar2 = (pUVar3->zeroVector).fields.y;
  fVar8 = direction.fields.y - (float)uVar2;
  fVar6 = direction.fields.z - (pUVar3->zeroVector).fields.z;
  fVar7 = direction.fields.x - (float)uVar1;
  if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
    fVar6 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,direction,
                       (MethodInfo *)CONCAT44(in_register_00000034,uVar5));
  }
  else {
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 == (Characters_BaseTitan_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar6 = (pCVar4->fields).TargetAngle;
  }
  if (useMoveAngle) {
    fVar6 = fVar6 + (__this->fields)._moveAngle;
  }
  fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 | (uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6));
  return (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
}


// Controllers.BaseTitanAIController$$GetAgentNavAngle
// il2cpp: float Controllers_BaseTitanAIController__GetAgentNavAngle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o target, bool useMoveAngle, const MethodInfo* method);
// 0x5ba33e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba3481: jmp 0x5ba3498

float Controllers_BaseTitanAIController__GetAgentNavAngle
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o target,bool useMoveAngle,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Characters_BaseTitan_o *pCVar4;
  undefined3 in_register_00000031;
  undefined4 uVar5;
  undefined4 in_register_00000034;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o direction;
  
  uVar5 = CONCAT31(in_register_00000031,useMoveAngle);
  direction = Controllers_BaseAIController__GetAgentNavDirection
                        ((Controllers_BaseAIController_o *)__this,target,
                         (MethodInfo *)CONCAT44(in_register_00000034,uVar5));
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->zeroVector).fields.x;
  uVar2 = (pUVar3->zeroVector).fields.y;
  fVar8 = direction.fields.y - (float)uVar2;
  fVar6 = direction.fields.z - (pUVar3->zeroVector).fields.z;
  fVar7 = direction.fields.x - (float)uVar1;
  if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
    fVar6 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,direction,
                       (MethodInfo *)CONCAT44(in_register_00000034,uVar5));
  }
  else {
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 == (Characters_BaseTitan_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar6 = (pCVar4->fields).TargetAngle;
  }
  if (useMoveAngle) {
    fVar6 = fVar6 + (__this->fields)._moveAngle;
  }
  fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 | (uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6));
  return (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
}


// Controllers.BaseTitanAIController$$HasClearLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasClearLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x5ba1b20

bool Controllers_BaseTitanAIController__HasClearLineOfSight
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o target,MethodInfo *method)

{
  UnityEngine_CapsuleCollider_o *pUVar1;
  Characters_BaseTitan_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  bool bVar5;
  MethodInfo *method_00;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  undefined8 local_68;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if ((__this->fields)._usePathfinding == false) {
    return true;
  }
  pUVar1 = (__this->fields)._mainCollider;
  if (pUVar1 != (UnityEngine_CapsuleCollider_o *)0x0) {
    fVar6 = UnityEngine_CapsuleCollider__get_radius(pUVar1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._titan;
    if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
        (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._titan;
      if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
          (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar1 = (__this->fields)._mainCollider, pUVar1 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        pUVar4 = (pUVar3->fields).Transform;
        UVar8 = UnityEngine_CapsuleCollider__get_center(pUVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__TransformPoint(pUVar4,UVar8,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._titan;
          if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
              (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
             (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
            pCVar2 = (__this->fields)._titan;
            if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
               (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UVar10 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
              pCVar2 = (__this->fields)._titan;
              if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                  (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
                 (pUVar1 = (__this->fields)._mainCollider, pUVar1 != (UnityEngine_CapsuleCollider_o *)0x0)) {
                pUVar4 = (pUVar3->fields).Transform;
                UVar11 = UnityEngine_CapsuleCollider__get_center(pUVar1,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UVar11 = UnityEngine_Transform__TransformPoint(pUVar4,UVar11,(MethodInfo *)0x0);
                  pCVar2 = (__this->fields)._titan;
                  if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                      (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
                     (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                    UVar12 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
                    pCVar2 = (__this->fields)._titan;
                    if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
                        (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
                       (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      local_88 = UVar7.fields.x;
                      fVar6 = fVar6 * local_88 * 0.5;
                      local_28 = UVar9.fields.x;
                      fStack_24 = UVar9.fields.y;
                      local_98 = UVar8.fields.x;
                      fStack_94 = UVar8.fields.y;
                      local_68._0_4_ = UVar10.fields.x;
                      local_68._4_4_ = UVar10.fields.y;
                      method_00 = (MethodInfo *)0x0;
                      UVar7 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
                      UVar8.fields.z =
                           UVar10.fields.z * -1.1 * fVar6 + (UVar8.fields.z - UVar9.fields.z * fVar6);
                      UVar8.fields.x = (float)local_68 * -1.1 * fVar6 + (local_98 - local_28 * fVar6);
                      UVar8.fields.y = local_68._4_4_ * -1.1 * fVar6 + (fStack_94 - fStack_24 * fVar6);
                      bVar5 = Controllers_BaseTitanAIController__HasLineOfSight(__this,UVar8,target,method_00)
                      ;
                      if (bVar5) {
                        local_48 = UVar12.fields.x;
                        fStack_44 = UVar12.fields.y;
                        local_38 = UVar11.fields.x;
                        fStack_34 = UVar11.fields.y;
                        local_a8 = UVar7.fields.x;
                        fStack_a4 = UVar7.fields.y;
                        UVar7.fields.z =
                             UVar7.fields.z * 1.1 * fVar6 + (UVar11.fields.z - UVar12.fields.z * fVar6);
                        UVar7.fields.x = local_a8 * 1.1 * fVar6 + (local_38 - local_48 * fVar6);
                        UVar7.fields.y = fStack_a4 * 1.1 * fVar6 + (fStack_34 - fStack_44 * fVar6);
                        bVar5 = Controllers_BaseTitanAIController__HasLineOfSight
                                          (__this,UVar7,target,method_00);
                        return bVar5;
                      }
                      return false;
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


// Controllers.BaseTitanAIController$$HasLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x5ba34f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba3651: xorps xmm0, xmm0
// asm:   0x5ba3654: ucomiss xmm3, xmm0
// asm:   0x5ba3657: jb 0x5ba370c

bool Controllers_BaseTitanAIController__HasLineOfSight
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o start,
               UnityEngine_Vector3_o target,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  bool bVar4;
  int32_t layerMask;
  UnityEngine_Vector3_StaticFields *pUVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 in_XMM2_Qb;
  undefined1 auVar8 [16];
  float fVar9;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  float local_84;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_60 [12];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [56];
  
  origin.fields.z = start.fields.z;
  fStack_50 = (float)in_XMM0_Dc;
  unique0x1000006b = start.fields._0_8_;
  fStack_4c = (float)in_XMM0_Dd;
  if (Il2CppMethodInitialized_0754746b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_0754746b = '\x01';
  }
  local_48._32_4_ = 0.0;
  local_48._36_4_ = 0.0;
  local_48._40_4_ = 0.0;
  local_48._16_4_ = 0.0;
  local_48._20_4_ = 0.0;
  local_48._24_4_ = 0.0;
  local_48._28_4_ = 0.0;
  local_48._0_4_ = 0.0;
  local_48._4_4_ = 0.0;
  local_48._8_4_ = 0.0;
  local_48._12_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  local_78._0_4_ = target.fields.x - (float)local_60._8_4_;
  local_78._4_4_ = target.fields.y - fStack_54;
  local_84 = target.fields.z - origin.fields.z;
  fStack_70 = (float)in_XMM2_Qb - fStack_50;
  fStack_6c = (float)((ulong)in_XMM2_Qb >> 0x20) - fStack_4c;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar9 = local_84 * local_84 +
          (float)local_78._4_4_ * (float)local_78._4_4_ + (float)local_78._0_4_ * (float)local_78._0_4_;
  if (fVar9 < 0.0) {
    fVar6 = sqrtf(fVar9);
  }
  else {
    fVar6 = SQRT(fVar9);
  }
  if (1000.0 < fVar6 + -0.2) {
    return false;
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_60._0_4_ = 0.0;
    local_60._4_4_ = 0.0;
  }
  else {
    local_60._0_4_ = 0.0;
    local_60._4_4_ = 0.0;
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_60._0_4_ = 0.0;
    local_60._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_60._0_4_ = 0.0;
    local_60._4_4_ = 0.0;
    uVar3 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (0.0 <= fVar9) {
    uVar7 = 0;
    fVar9 = SQRT(fVar9);
  }
  else {
    fVar9 = sqrtf(fVar9);
    uVar7 = extraout_XMM0_Db;
  }
  if (1e-05 < fVar9) {
    local_84 = local_84 / fVar9;
    auVar8._4_4_ = fVar9;
    auVar8._0_4_ = fVar9;
    auVar8._8_4_ = uVar7;
    auVar8._12_4_ = uVar7;
    auVar8 = divps(_local_78,auVar8);
    local_60._0_4_ = auVar8._0_4_;
    local_60._4_4_ = auVar8._4_4_;
    pUVar5 = (UnityEngine_Vector3_StaticFields *)local_60;
  }
  else {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_84 = (pUVar5->zeroVector).fields.z;
  }
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar2 = (pUVar5->zeroVector).fields.y;
  direction.fields.y = (float)uVar2;
  direction.fields.x = (float)uVar1;
  layerMask = UnityEngine_LayerMask__get_value(&(__this->fields)._losLayer,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  origin.fields.x = (float)local_60._8_4_;
  origin.fields.y = fStack_54;
  direction.fields.z = local_84;
  bVar4 = UnityEngine_Physics__Raycast_69d9ca0
                    (origin,direction,(UnityEngine_RaycastHit_o *)local_48,fVar6 + -0.2,layerMask,
                     (MethodInfo *)0x0);
  return !bVar4;
}


// Controllers.BaseTitanAIController$$HasRockThrowLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasRockThrowLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o start, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x5ba37b0

bool Controllers_BaseTitanAIController__HasRockThrowLineOfSight
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o start,
               Characters_BaseCharacter_o *target,MethodInfo *method)

{
  Characters_BaseTitan_o *a;
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_Vector3_o target_00;
  
  if (Il2CppMethodInitialized_0754746c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_0754746c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (target == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(target->klass->vtable)._73_ValidTarget.methodPtr)
                      (target,(target->klass->vtable)._73_ValidTarget.method);
    if (bVar1) {
      a = (__this->fields)._titan;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar1 = GameManagers_TeamInfo__SameTeam_5858900
                        ((Characters_BaseCharacter_o *)a,target,(MethodInfo *)0x0);
      if (!bVar1) {
        method_00 = (target->klass->vtable)._72_GetPosition.method;
        target_00 = (*(target->klass->vtable)._72_GetPosition.methodPtr)(target,method_00);
        bVar1 = Controllers_BaseTitanAIController__HasLineOfSight(__this,start,target_00,method_00);
        return bVar1;
      }
    }
  }
  return false;
}


// Controllers.BaseTitanAIController$$FindRockThrowTarget
// il2cpp: Characters_BaseCharacter_o* Controllers_BaseTitanAIController__FindRockThrowTarget (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o start, bool requireLineOfSight, const MethodInfo* method);
// 0x5ba38b0
// eh: try 0x5ba3a24..0x5ba3baa -> pad 0x5ba3bc4 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ba3bdc..0x5ba3be1 -> pad 0x5ba3c02 cleanup
// eh: try 0x5ba3c05..0x5ba3c0f -> pad 0x5ba3c17 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba3a16: nop word ptr cs:[rax + rax]
// asm:   0x5ba3af8: jmp 0x5ba3b20
// asm:   0x5ba3b75: jmp 0x5ba39fb
// asm:   0x5ba3bb4: jmp 0x5ba3bc4
// asm:   0x5ba3bb6: jmp 0x5ba3bc4
// asm:   0x5ba3bb8: jmp 0x5ba3bc4
// asm:   0x5ba3bba: jmp 0x5ba3bc4
// asm:   0x5ba3bbc: jmp 0x5ba3bc4
// asm:   0x5ba3bbe: jmp 0x5ba3bc4
// asm:   0x5ba3bc0: jmp 0x5ba3bc4
// asm:   0x5ba3bc2: jmp 0x5ba3bc4
// asm:   0x5ba3bc4: mov rbx, rax
// asm:   0x5ba3bc7: cmp edx, 1
// asm:   0x5ba3bca: jne 0x5ba3c05
// asm:   0x5ba3bcc: mov rdi, rbx
// asm:   0x5ba3bcf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ba3bd4: mov rbx, qword ptr [rax]
// asm:   0x5ba3bd7: mov qword ptr [rsp + 8], rbx
// asm:   0x5ba3bdc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ba3be1: lea rax, [rip + 0x16e9ae8]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x5ba3be8: mov rsi, qword ptr [rax]
// asm:   0x5ba3beb: lea rdi, [rsp + 0x30]
// asm:   0x5ba3bf0: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5ba3bf5: test rbx, rbx
// asm:   0x5ba3bf8: je 0x5ba3b8e
// asm:   0x5ba3bfa: mov rdi, rbx
// asm:   0x5ba3bfd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ba3c02: mov rbx, rax
// asm:   0x5ba3c05: lea rdi, [rsp + 8]
// asm:   0x5ba3c0a: call 0x2fd84c0  ; il2cpp_runtime_helper_02fd84c0()
// asm:   0x5ba3c0f: mov rdi, rbx
// asm:   0x5ba3c12: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ba3c17: mov rdi, rax
// asm:   0x5ba3c1a: call 0x2ab61e0  ; __clang_call_terminate()
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


Il2CppObject *
Controllers_BaseTitanAIController__FindRockThrowTarget
          (undefined8 param_1,undefined8 param_2,Controllers_BaseTitanAIController_o *param_3,char param_4)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_InGameManager_o *__this;
  Characters_BaseTitan_o *pCVar3;
  bool bVar4;
  char cVar5;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_00;
  Il2CppObject *pIVar6;
  MethodInfo *method;
  float fVar7;
  float fVar8;
  float __x;
  float fVar10;
  undefined8 uVar9;
  undefined4 uVar11;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o target;
  undefined1 auStack_c0 [16];
  Il2CppObject *pIStack_b0;
  float fStack_a8;
  float fStack_a4;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_98;
  Il2CppObject *pIStack_80;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar11 = (undefined4)((ulong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  fStack_a4 = (float)((ulong)param_1 >> 0x20);
  fStack_a8 = (float)param_1;
  fStack_78 = fVar10;
  uStack_74 = uVar11;
  uStack_70 = in_XMM1_Dc;
  uStack_6c = in_XMM1_Dd;
  if (Il2CppMethodInitialized_0754746d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_0754746d = '\x01';
  }
  __this = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = GameManagers_InGameManager__GetAllNonAICharacters(__this,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_c0,
                 (System_Collections_Generic_HashSet_object__o *)__this_00,
                 (MethodInfo_4FB3DA0 *)
                 MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
      SStack_98.fields._current = pIStack_b0;
      SStack_98.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_c0._0_8_;
      SStack_98.fields._index = auStack_c0._8_4_;
      SStack_98.fields._version = auStack_c0._12_4_;
      auStack_c0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      fStack_68 = fStack_78;
      fStack_64 = fStack_a8;
      uStack_60 = uStack_74;
      fStack_5c = fStack_a4;
      pIVar6 = (Il2CppObject *)0x0;
      fVar8 = INFINITY;
      auStack_c0._8_8_ = &SStack_98;
      uVar9 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
      do {
        fVar7 = fVar8;
        pIStack_80 = pIVar6;
        uStack_58 = uVar9;
label_05ba3a20:
        do {
          do {
            do {
              bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (&SStack_98,
                                 (MethodInfo_4C456D0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext
                                );
              pIVar6 = SStack_98.fields._current;
              if (!bVar4) {
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          (&SStack_98,
                           (MethodInfo_4C456C0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
                return pIStack_80;
              }
              if (SStack_98.fields._current == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              cVar5 = (*(SStack_98.fields._current)->klass->vtable[0x49].methodPtr)
                                (SStack_98.fields._current,
                                 (SStack_98.fields._current)->klass->vtable[0x49].method);
            } while (cVar5 == '\0');
            pCVar3 = (param_3->fields)._titan;
            if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
            }
            cVar5 = GameManagers_TeamInfo__SameTeam_5858900(pCVar3,pIVar6,0);
          } while (cVar5 != '\0');
          if (param_4 != '\0') {
            method = pIVar6->klass->vtable[0x48].method;
            target.fields._0_8_ = (*pIVar6->klass->vtable[0x48].methodPtr)(pIVar6);
            start.fields.y = fStack_a4;
            start.fields.x = fStack_a8;
            start.fields.z = fStack_78;
            target.fields.z = fVar10;
            fVar10 = fStack_78;
            uVar11 = uStack_74;
            in_XMM1_Dc = uStack_70;
            in_XMM1_Dd = uStack_6c;
            bVar4 = Controllers_BaseTitanAIController__HasLineOfSight(param_3,start,target,method);
            if (!bVar4) goto label_05ba3a20;
          }
          uVar9 = (*pIVar6->klass->vtable[0x48].methodPtr)(pIVar6,pIVar6->klass->vtable[0x48].method);
          fStack_48 = fVar10;
          uStack_44 = uVar11;
          uStack_40 = in_XMM1_Dc;
          uStack_3c = in_XMM1_Dd;
          uStack_58 = uVar9;
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          uVar9 = uStack_58;
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            uVar9 = uStack_58;
          }
          uStack_58._4_4_ = (float)((ulong)uVar9 >> 0x20);
          uStack_58._0_4_ = (float)uVar9;
          __x = (fStack_a4 - uStack_58._4_4_) * (fStack_a4 - uStack_58._4_4_) +
                (fStack_64 - (float)uStack_58) * (fStack_64 - (float)uStack_58) +
                (fStack_68 - fStack_48) * (fStack_68 - fStack_48);
          fVar10 = fVar7;
          uStack_58 = uVar9;
          if (__x < 0.0) {
            fVar8 = sqrtf(__x);
            uVar11 = 0;
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            uVar9 = uStack_58;
            if (fVar8 < fVar7) break;
            goto label_05ba3a20;
          }
          uVar11 = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          fVar8 = SQRT(__x);
        } while (fVar7 <= SQRT(__x));
      } while( true );
    }
  }
  ThrowNullReferenceException();
}

// Controllers.BaseTitanAIController$$IsCrawler
// il2cpp: bool Controllers_BaseTitanAIController__IsCrawler (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba11c0

bool Controllers_BaseTitanAIController__IsCrawler
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  
  if (Il2CppMethodInitialized_0754746e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_0754746e = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan))
    {
      return (char)(*(uint64_t *)((char *)pCVar2 + 0x2b0)) != '\0';
    }
  }
  return false;
}


// Controllers.BaseTitanAIController$$IsShifter
// il2cpp: bool Controllers_BaseTitanAIController__IsShifter (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba1230

bool Controllers_BaseTitanAIController__IsShifter
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  Characters_BaseTitan_c *pCVar3;
  
  if (Il2CppMethodInitialized_0754746f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    Il2CppMethodInitialized_0754746f = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if (bVar1 <= (pCVar3->_2).typeHierarchyDepth) {
      return (pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseShifter;
    }
  }
  return false;
}


// Controllers.BaseTitanAIController$$CompleteMove
// il2cpp: void Controllers_BaseTitanAIController__CompleteMove (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba0800

void Controllers_BaseTitanAIController__CompleteMove
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  System_Action_o *pSVar3;
  float fVar4;
  
  if ((__this->fields)._moveToActive == false) {
    pSVar3 = (System_Action_o *)0x0;
  }
  else {
    pSVar3 = (__this->fields)._moveToCallback;
    if ((__this->fields)._moveToExact != false) {
      pCVar1 = (__this->fields)._titan;
      if (((pCVar1 == (Characters_BaseTitan_o *)0x0) ||
          (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_05ba0916;
      UnityEngine_Transform__set_position
                (__this_00,(UnityEngine_Vector3_o)(__this->fields)._moveToPosition.fields,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._moveToActive = false;
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback);
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    (pCVar1->fields).HasDirection = false;
    (pCVar1->fields).IsSit = false;
    fVar4 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar4;
    if (pSVar3 == (System_Action_o *)0x0) {
      return;
    }
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
    return;
  }
label_05ba0916:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$Idle
// il2cpp: void Controllers_BaseTitanAIController__Idle (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5b9ed30

void Controllers_BaseTitanAIController__Idle(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasDirection = false;
  (pCVar1->fields).IsSit = false;
  fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar2;
  return;
}


// Controllers.BaseTitanAIController$$Wander
// il2cpp: void Controllers_BaseTitanAIController__Wander (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba12e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba149c: andps xmm5, xmmword ptr [rip - 0x4b9b683]
// asm:   0x5ba14a3: ucomiss xmm5, dword ptr [rip - 0x4bdf672]
// asm:   0x5ba14aa: ja 0x5ba159a
// asm:   0x5ba14b0: jmp 0x5ba15cc

void Controllers_BaseTitanAIController__Wander(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  double dVar3;
  Characters_BaseTitan_o *pCVar4;
  Il2CppClass *klass;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float local_28;
  float fStack_24;
  
  (__this->fields).AIState = 1;
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto label_05ba15f4;
  (pCVar4->fields).HasDirection = true;
  fVar5 = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
  (pCVar4->fields).TargetAngle = fVar5;
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto label_05ba15f4;
  (pCVar4->fields).IsWalk = true;
  (pCVar4->fields).IsSit = false;
  if (Il2CppMethodInitialized_0754746e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_0754746e = '\x01';
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto label_05ba15f4;
  }
  bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
  if (((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
      ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan))
     && ((char)(*(uint64_t *)((char *)pCVar4 + 0x2b0)) != '\0')) {
    (pCVar4->fields).IsWalk = false;
  }
  pUVar2 = (pCVar4->fields).Cache;
  if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_05ba15f4;
  UVar11 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
  fVar5 = UVar11.fields.z;
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto label_05ba15f4;
  UVar12 = (*(pCVar4->klass->vtable)._106_GetTargetDirection.methodPtr)
                     (pCVar4,(pCVar4->klass->vtable)._106_GetTargetDirection.method);
  fVar9 = UVar12.fields.z;
  fVar6 = UVar12.fields.x;
  fVar8 = UVar12.fields.y;
  if (Il2CppMethodInitialized_075450a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075450a4 = '\x01';
  }
  local_28 = UVar11.fields.x;
  fStack_24 = UVar11.fields.y;
  fVar7 = fVar5 * fVar5 + fStack_24 * fStack_24 + local_28 * local_28;
  fVar10 = fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= fVar7 * fVar10) goto label_05ba148b;
label_05ba14ee:
    fVar7 = sqrtf(fVar7 * fVar10);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  else {
    if (fVar7 * fVar10 < 0.0) goto label_05ba14ee;
label_05ba148b:
    fVar7 = SQRT(fVar7 * fVar10);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  TypeInfo_System_Math = (System_Math_c *)klass;
  if (1e-15 <= fVar7) {
    fVar7 = (fVar5 * fVar9 + fStack_24 * fVar8 + local_28 * fVar6) / fVar7;
    fVar5 = 1.0;
    if (fVar7 <= 1.0) {
      fVar5 = fVar7;
    }
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 | (uint)fVar5 & -(uint)(-1.0 <= fVar7)),
                 (MethodInfo *)klass);
    if (60.0 < ABS((float)dVar3 * 57.29578)) {
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 == (Characters_BaseTitan_o *)0x0) {
label_05ba15f4:
        ThrowNullReferenceException();
      }
      UVar11 = (*(pCVar4->klass->vtable)._106_GetTargetDirection.methodPtr)
                         (pCVar4,(pCVar4->klass->vtable)._106_GetTargetDirection.method);
      (*(pCVar4->klass->vtable)._167_Turn.methodPtr)(pCVar4,UVar11,(pCVar4->klass->vtable)._167_Turn.method);
    }
  }
  fVar5 = UnityEngine_Random__Range(2.0,6.0,(MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar5;
  return;
}


// Controllers.BaseTitanAIController$$Sit
// il2cpp: void Controllers_BaseTitanAIController__Sit (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba1290

void Controllers_BaseTitanAIController__Sit(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  (__this->fields).AIState = 2;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).IsSit = true;
  fVar2 = UnityEngine_Random__Range(8.0,14.0,(MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar2;
  return;
}


// Controllers.BaseTitanAIController$$MoveToEnemy
// il2cpp: void Controllers_BaseTitanAIController__MoveToEnemy (Controllers_BaseTitanAIController_o* __this, bool avoidCollisions, const MethodInfo* method);
// 0x5ba1600
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba175a: jmp 0x5ba1961
// asm:   0x5ba18f2: jmp 0x5ba1911

void Controllers_BaseTitanAIController__MoveToEnemy
               (Controllers_BaseTitanAIController_o *__this,bool avoidCollisions,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  Characters_BaseTitan_o *pCVar8;
  bool bVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  undefined7 in_register_00000031;
  MethodInfo *pMVar12;
  Characters_BaseTitan_o *pCVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  
  pMVar12 = (MethodInfo *)CONCAT71(in_register_00000031,avoidCollisions);
  if (Il2CppMethodInitialized_07547470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_07547470 = '\x01';
  }
  pCVar13 = (__this->fields)._titan;
  if (pCVar13 == (Characters_BaseTitan_o *)0x0) goto label_05ba1961;
  if (((pCVar13->fields).State != 0) || ((__this->fields)._attackRange < (__this->fields)._enemyDistance)) {
    (__this->fields).AIState = 3;
  }
  else {
    (pCVar13->fields).HasDirection = false;
    pMVar12 = (pCVar13->klass->vtable)._145_CanAction.method;
    bVar9 = (*(pCVar13->klass->vtable)._145_CanAction.methodPtr)(pCVar13,pMVar12);
    if (!bVar9) {
      return;
    }
    bVar9 = Controllers_BaseTitanAIController__TryCloseAction(__this,pMVar12);
    if (bVar9) {
      return;
    }
    pCVar13 = (__this->fields)._titan;
    (__this->fields).AIState = 3;
    if (pCVar13 == (Characters_BaseTitan_o *)0x0) goto label_05ba1961;
  }
  (pCVar13->fields).HasDirection = true;
  (pCVar13->fields).IsSit = false;
  (pCVar13->fields).IsWalk = (bool)((__this->fields).IsRun ^ 1);
  fVar15 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
  (__this->fields)._moveAngle = fVar15;
  if ((((__this->fields)._usePathfinding & avoidCollisions) != 0) &&
     (pIVar4 = (Il2CppObject *)(__this->fields)._enemy, pIVar4 != (Il2CppObject *)0x0)) {
    pIVar5 = pIVar4->klass;
    uVar11 = (ulong)(pIVar5->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Characters_ITargetable_c **)((long)&pIVar6->interfaceType + lVar14) ==
            TypeInfo_Characters_ITargetable) {
          pVVar10 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar14) + 2);
          goto label_05ba1777;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar11 * 0x10 != lVar14);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)TypeInfo_Characters_ITargetable,2);
label_05ba1777:
    pMVar12 = pVVar10->method;
    bVar9 = (*pVVar10->methodPtr)(pIVar4,pMVar12);
    if (bVar9) {
      pIVar4 = (Il2CppObject *)(__this->fields)._enemy;
      if (pIVar4 == (Il2CppObject *)0x0) {
label_05ba1961:
        ThrowNullReferenceException();
      }
      pCVar13 = (__this->fields)._titan;
      pIVar5 = pIVar4->klass;
      uVar11 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar6->interfaceType + lVar14) ==
              TypeInfo_Characters_ITargetable) {
            pVVar10 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar14) + 1);
            goto label_05ba1826;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar11 * 0x10 != lVar14);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar4,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba1826:
      pMVar12 = pVVar10->method;
      UVar19 = (*pVVar10->methodPtr)(pIVar4,pMVar12);
      fVar15 = (__this->fields).ChaseAngleMinRange;
      fVar1 = (__this->fields)._enemyDistance;
      UVar19 = Controllers_BaseAIController__GetAgentNavDirection
                         ((Controllers_BaseAIController_o *)__this,UVar19,pMVar12);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar7->zeroVector).fields.x;
      uVar3 = (pUVar7->zeroVector).fields.y;
      fVar18 = UVar19.fields.y - (float)uVar3;
      fVar16 = UVar19.fields.z - (pUVar7->zeroVector).fields.z;
      fVar17 = UVar19.fields.x - (float)uVar2;
      if (9.9999994e-11 <= fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16) {
        fVar16 = Controllers_BaseAIController__GetTargetAngle
                           ((Controllers_BaseAIController_o *)__this,UVar19,pMVar12);
      }
      else {
        pCVar8 = (__this->fields)._titan;
        if (pCVar8 == (Characters_BaseTitan_o *)0x0) goto label_05ba1961;
        fVar16 = (pCVar8->fields).TargetAngle;
      }
      if (fVar15 < fVar1) {
        fVar16 = fVar16 + (__this->fields)._moveAngle;
      }
      if (pCVar13 == (Characters_BaseTitan_o *)0x0) goto label_05ba1961;
      fVar15 = (float)(~-(uint)(360.0 < fVar16) & (uint)fVar16 |
                      (uint)(fVar16 + -360.0) & -(uint)(360.0 < fVar16));
      (pCVar13->fields).TargetAngle =
           (float)(~-(uint)(fVar15 < 0.0) & (uint)fVar15 | (uint)(fVar15 + 360.0) & -(uint)(fVar15 < 0.0));
      goto label_05ba17e6;
    }
  }
  Controllers_BaseTitanAIController__TargetEnemy(__this,pMVar12);
label_05ba17e6:
  fVar15 = UnityEngine_Random__Range
                     ((__this->fields).ChaseAngleTimeMin,(__this->fields).ChaseAngleTimeMax,(MethodInfo *)0x0)
  ;
  (__this->fields)._stateTimeLeft = fVar15;
  return;
}


// Controllers.BaseTitanAIController$$TargetEnemy
// il2cpp: void Controllers_BaseTitanAIController__TargetEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba1e80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba1ede: nop 

void Controllers_BaseTitanAIController__TargetEnemy
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  Il2CppObject *obj;
  Characters_BaseTitan_o *pCVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  MethodInfo *method_00;
  long lVar7;
  float fVar8;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_07547471 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_07547471 = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields)._enemy;
  if (obj != (Il2CppObject *)0x0) {
    pCVar2 = (__this->fields)._titan;
    pIVar3 = obj->klass;
    uVar6 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(Characters_ITargetable_c **)((long)&pIVar4->interfaceType + lVar7) ==
            TypeInfo_Characters_ITargetable) {
          pVVar5 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar7) + 1);
          goto label_05ba1f14;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba1f14:
    position = (*pVVar5->methodPtr)(obj,pVVar5->method);
    fVar8 = (__this->fields)._enemyDistance;
    pfVar1 = &(__this->fields).ChaseAngleMinRange;
    fVar8 = Controllers_BaseTitanAIController__GetChaseAngle
                      (__this,position,*pfVar1 <= fVar8 && fVar8 != *pfVar1,method_00);
    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
      (pCVar2->fields).TargetAngle = fVar8;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$MoveToPosition
// il2cpp: void Controllers_BaseTitanAIController__MoveToPosition (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba0610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba0768: jmp 0x5ba07ef

void Controllers_BaseTitanAIController__MoveToPosition
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Characters_BaseTitan_o *pCVar4;
  MethodInfo *method_00;
  Characters_BaseTitan_o *pCVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o direction;
  
  (__this->fields).AIState = 4;
  pCVar5 = (__this->fields)._titan;
  if (pCVar5 != (Characters_BaseTitan_o *)0x0) {
    (pCVar5->fields).HasDirection = true;
    (pCVar5->fields).IsSit = false;
    (pCVar5->fields).IsWalk = (bool)((__this->fields).IsRun ^ 1);
    if ((__this->fields)._usePathfinding == false) {
      fVar6 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
      (__this->fields)._moveAngle = fVar6;
      pCVar5 = (__this->fields)._titan;
      fVar6 = Controllers_BaseTitanAIController__GetChaseAngle
                        (__this,(UnityEngine_Vector3_o)(__this->fields)._moveToPosition.fields,true,method_00)
      ;
      if (pCVar5 != (Characters_BaseTitan_o *)0x0) goto label_05ba07bf;
    }
    else {
      fVar6 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
      (__this->fields)._moveAngle = fVar6;
      pCVar5 = (__this->fields)._titan;
      direction = Controllers_BaseAIController__GetAgentNavDirection
                            ((Controllers_BaseAIController_o *)__this,
                             (UnityEngine_Vector3_o)(__this->fields)._moveToPosition.fields,method);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar3->zeroVector).fields.x;
      uVar2 = (pUVar3->zeroVector).fields.y;
      fVar8 = direction.fields.y - (float)uVar2;
      fVar6 = direction.fields.z - (pUVar3->zeroVector).fields.z;
      fVar7 = direction.fields.x - (float)uVar1;
      if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
        fVar6 = Controllers_BaseAIController__GetTargetAngle
                          ((Controllers_BaseAIController_o *)__this,direction,method);
      }
      else {
        pCVar4 = (__this->fields)._titan;
        if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto label_05ba07ef;
        fVar6 = (pCVar4->fields).TargetAngle;
      }
      if (pCVar5 != (Characters_BaseTitan_o *)0x0) {
        fVar6 = fVar6 + (__this->fields)._moveAngle;
        fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 |
                       (uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6));
        fVar6 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
label_05ba07bf:
        (pCVar5->fields).TargetAngle = fVar6;
        fVar6 = UnityEngine_Random__Range
                          ((__this->fields).ChaseAngleTimeMin,(__this->fields).ChaseAngleTimeMax,
                           (MethodInfo *)0x0);
        (__this->fields)._stateTimeLeft = fVar6;
        return;
      }
    }
  }
label_05ba07ef:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$Attack
// il2cpp: void Controllers_BaseTitanAIController__Attack (Controllers_BaseTitanAIController_o* __this, System_Collections_Generic_List_string__o* validAttacks, const MethodInfo* method);
// 0x5ba1f60

void Controllers_BaseTitanAIController__Attack
               (Controllers_BaseTitanAIController_o *__this,
               System_Collections_Generic_List_string__o *validAttacks,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  System_String_o *a;
  Characters_TitanAttackInfo_o *pCVar3;
  MethodInfo *extraout_RDX;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547472 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547472 = '\x01';
    method = extraout_RDX;
  }
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_05ba20f4;
  (pCVar1->fields).HasDirection = false;
  a = Controllers_BaseTitanAIController__GetRandomAttack(__this,validAttacks,method);
  bVar2 = System_String__op_Equality(a,"",(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_05ba20f4;
    bVar2 = (*(pCVar1->klass->vtable)._151_CanAttack.methodPtr)
                      (pCVar1,(pCVar1->klass->vtable)._151_CanAttack.method);
    if (bVar2) {
      (__this->fields)._attack = a;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._attack);
      (__this->fields).AIState = 5;
      pCVar1 = (__this->fields)._titan;
      if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_05ba20f4;
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,(__this->fields)._attack,(pCVar1->klass->vtable)._150_Attack.method);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackInfos;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ba20f4;
      pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)a,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
      if (pCVar3 == (Characters_TitanAttackInfo_o *)0x0) goto label_05ba20f4;
      if ((pCVar3->fields).FarOnly != false) {
        (__this->fields)._rangedCooldownLeft = (__this->fields).FarAttackCooldown;
      }
      goto label_05ba20dc;
    }
  }
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
label_05ba20f4:
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasDirection = false;
  (pCVar1->fields).IsSit = false;
  fVar4 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar4;
label_05ba20dc:
  (__this->fields)._waitAttackTimeLeft = (__this->fields).AttackWait;
  return;
}


// Controllers.BaseTitanAIController$$WaitAttack
// il2cpp: void Controllers_BaseTitanAIController__WaitAttack (Controllers_BaseTitanAIController_o* __this, float waitTime, const MethodInfo* method);
// 0x5ba41d0

void Controllers_BaseTitanAIController__WaitAttack
               (Controllers_BaseTitanAIController_o *__this,float waitTime,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  
  (__this->fields).AIState = 6;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasDirection = false;
  (__this->fields)._waitAttackTimeLeft = waitTime;
  return;
}


// Controllers.BaseTitanAIController$$TryCloseAction
// il2cpp: bool Controllers_BaseTitanAIController__TryCloseAction (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba1970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba1b10: jmp 0x5ba1a8d

bool Controllers_BaseTitanAIController__TryCloseAction
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *validAttacks;
  Characters_BaseTitan_o *pCVar4;
  MethodInfo *method_00;
  float fVar5;
  undefined1 auVar6 [16];
  
  if (Il2CppMethodInitialized_07547473 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    Il2CppMethodInitialized_07547473 = '\x01';
  }
  auVar6 = (undefined1  [16])
           (*(__this->klass->vtable)._13_GetValidAttacks.methodPtr)
                     (__this,false,(__this->klass->vtable)._13_GetValidAttacks.method);
  validAttacks = auVar6._0_8_;
  if (validAttacks != (System_Collections_Generic_List_string__o *)0x0) {
    if ((validAttacks->fields)._size < 1) {
      if (((__this->fields).IsTurn == false) ||
         (fVar5 = Controllers_BaseTitanAIController__GetEnemyAngle
                            (__this,(__this->fields)._enemy,auVar6._8_8_), fVar5 <= (__this->fields).TurnAngle
         )) {
        return false;
      }
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar3 = Characters_BaseTitan__get_IsMoving(pCVar4,(MethodInfo *)0x0);
        if (bVar3) {
          if (Il2CppMethodInitialized_0754746e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
            Il2CppMethodInitialized_0754746e = '\x01';
          }
          pCVar4 = (__this->fields)._titan;
          if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
            bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
            method_00 = (MethodInfo *)(ulong)bVar2;
            if (((bVar2 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
                ((pCVar4->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] ==
                 (Il2CppClass *)TypeInfo_Characters_BasicTitan)) &&
               ((char)(*(uint64_t *)((char *)pCVar4 + 0x2b0)) != '\0')) goto label_05ba1a99;
          }
          bVar3 = Controllers_BaseTitanAIController__IsShifter(__this,method_00);
          if (!bVar3) {
            pCVar4 = (__this->fields)._titan;
            if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
              (*(pCVar4->klass->vtable)._163_Idle.methodPtr)
                        (pCVar4,0.2,(pCVar4->klass->vtable)._163_Idle.method);
              pCVar4 = (__this->fields)._titan;
              if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
                fVar5 = (pCVar4->fields).TurnPause;
                fVar1 = (__this->fields).AttackWait;
                if (fVar5 <= fVar1) {
                  fVar5 = fVar1;
                }
                (__this->fields).AIState = 6;
                goto label_05ba19e2;
              }
            }
            goto label_05ba1b15;
          }
        }
label_05ba1a99:
        Controllers_BaseTitanAIController__TurnToEnemy(__this,method_00);
        return true;
      }
    }
    else {
      fVar5 = (__this->fields).AttackWait;
      if (fVar5 <= 0.0) {
        Controllers_BaseTitanAIController__Attack(__this,validAttacks,auVar6._8_8_);
        return true;
      }
      (__this->fields).AIState = 6;
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
label_05ba19e2:
        (pCVar4->fields).HasDirection = false;
        (__this->fields)._waitAttackTimeLeft = fVar5;
        return true;
      }
    }
  }
label_05ba1b15:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$TurnToEnemy
// il2cpp: void Controllers_BaseTitanAIController__TurnToEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba25b0

void Controllers_BaseTitanAIController__TurnToEnemy
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  MethodInfo *method_00;
  long lVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
  if (Il2CppMethodInitialized_07547474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_07547474 = '\x01';
  }
  (__this->fields).AIState = 5;
  (__this->fields)._moveAngle = 0.0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    (pCVar1->fields).HasDirection = false;
    obj = (Il2CppObject *)(__this->fields)._enemy;
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar3->interfaceType + lVar6) ==
              TypeInfo_Characters_ITargetable) {
            pVVar4 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 1);
            goto label_05ba2674;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba2674:
      UVar8 = (*pVVar4->methodPtr)(obj,pVVar4->method);
      fVar7 = Controllers_BaseTitanAIController__GetChaseAngle(__this,UVar8,false,method_00);
      (pCVar1->fields).TargetAngle = fVar7;
      pCVar1 = (__this->fields)._titan;
      if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
        UVar8 = (*(pCVar1->klass->vtable)._106_GetTargetDirection.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._106_GetTargetDirection.method);
        (*(pCVar1->klass->vtable)._167_Turn.methodPtr)(pCVar1,UVar8,(pCVar1->klass->vtable)._167_Turn.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetRandomAttack
// il2cpp: System_String_o* Controllers_BaseTitanAIController__GetRandomAttack (Controllers_BaseTitanAIController_o* __this, System_Collections_Generic_List_string__o* validAttacks, const MethodInfo* method);
// 0x5ba3c20
// eh: try 0x5ba3d9a..0x5ba40ee -> pad 0x5ba416c (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ba4119..0x5ba411e -> pad 0x5ba4141 cleanup
// eh: try 0x5ba4144..0x5ba414e -> pad 0x5ba41c8 catch (...) [compiler noexcept guard]
// eh: try 0x5ba4189..0x5ba418e -> pad 0x5ba41b3 cleanup
// eh: try 0x5ba41b6..0x5ba41c0 -> pad 0x5ba41c8 catch (...) [compiler noexcept guard]
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba3f7e: nop 
// asm:   0x5ba40f3: jmp 0x5ba4101
// asm:   0x5ba40f5: jmp 0x5ba4101
// asm:   0x5ba40f7: jmp 0x5ba4101
// asm:   0x5ba40f9: jmp 0x5ba4101
// asm:   0x5ba40fb: jmp 0x5ba4101
// asm:   0x5ba40fd: jmp 0x5ba4101
// asm:   0x5ba40ff: jmp 0x5ba4101
// asm:   0x5ba4101: mov rbx, rax
// asm:   0x5ba4104: cmp edx, 1
// asm:   0x5ba4107: jne 0x5ba4144
// asm:   0x5ba4109: mov rdi, rbx
// asm:   0x5ba410c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ba4111: mov rbx, qword ptr [rax]
// asm:   0x5ba4114: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5ba4119: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ba411e: lea rax, [rip + 0x16ea9d3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5ba4125: mov rsi, qword ptr [rax]
// asm:   0x5ba4128: lea rdi, [rsp + 0x20]
// asm:   0x5ba412d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ba4132: test rbx, rbx
// asm:   0x5ba4135: jne 0x5ba41ab
// asm:   0x5ba4137: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5ba413c: jmp 0x5ba409d
// asm:   0x5ba4141: mov rbx, rax
// asm:   0x5ba4144: lea rdi, [rsp + 0x40]
// asm:   0x5ba4149: call 0x2fd8520  ; il2cpp_runtime_helper_02fd8520()
// asm:   0x5ba414e: jmp 0x5ba41c0
// asm:   0x5ba4150: jmp 0x5ba416c
// asm:   0x5ba4152: jmp 0x5ba416c
// asm:   0x5ba4154: jmp 0x5ba416c
// asm:   0x5ba4156: jmp 0x5ba416c
// asm:   0x5ba4158: jmp 0x5ba416c
// asm:   0x5ba415a: jmp 0x5ba416c
// asm:   0x5ba415c: jmp 0x5ba416c
// asm:   0x5ba415e: jmp 0x5ba416c
// asm:   0x5ba4160: jmp 0x5ba416c
// asm:   0x5ba4162: jmp 0x5ba416c
// asm:   0x5ba4164: jmp 0x5ba416c
// asm:   0x5ba4166: jmp 0x5ba416c
// asm:   0x5ba4168: jmp 0x5ba416c
// asm:   0x5ba416a: jmp 0x5ba416c
// asm:   0x5ba416c: mov rbx, rax
// asm:   0x5ba416f: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5ba4174: cmp edx, 1
// asm:   0x5ba4177: jne 0x5ba41b6
// asm:   0x5ba4179: mov rdi, rbx
// asm:   0x5ba417c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ba4181: mov rbx, qword ptr [rax]
// asm:   0x5ba4184: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5ba4189: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ba418e: lea rax, [rip + 0x16ea963]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5ba4195: mov rsi, qword ptr [rax]
// asm:   0x5ba4198: lea rdi, [rsp + 0x20]
// asm:   0x5ba419d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ba41a2: test rbx, rbx
// asm:   0x5ba41a5: je 0x5ba3f00
// asm:   0x5ba41ab: mov rdi, rbx
// asm:   0x5ba41ae: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ba41b3: mov rbx, rax
// asm:   0x5ba41b6: lea rdi, [rsp + 0x40]
// asm:   0x5ba41bb: call 0x2fd84f0  ; il2cpp_runtime_helper_02fd84f0()
// asm:   0x5ba41c0: mov rdi, rbx
// asm:   0x5ba41c3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ba41c8: mov rdi, rax
// asm:   0x5ba41cb: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Controllers_BaseTitanAIController__GetRandomAttack
          (Controllers_BaseTitanAIController_o *__this,System_Collections_Generic_List_string__o *validAttacks
          ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  float local_7c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547475 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_07547475 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_58 = (System_String_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._attackGroupCounts;
  if ((__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) ||
     (System_Collections_Generic_Dictionary_object__int___Clear
                (__this_00,
                 (MethodInfo_4A9D930 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear),
     validAttacks == (System_Collections_Generic_List_string__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)validAttacks,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_58 = local_38;
  local_68 = (undefined1  [8])local_48._0_8_;
  uStack_60._0_4_ = local_48._8_4_;
  uStack_60._4_4_ = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = local_68;
  local_7c = 0.0;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    pSVar6 = local_58;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      if ((local_7c != 0.0) || (NAN(local_7c))) {
        fVar7 = UnityEngine_Random__Range(0.0,local_7c,(MethodInfo *)0x0);
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)validAttacks,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_58 = local_38;
        local_68 = (undefined1  [8])local_48._0_8_;
        uStack_60 = (undefined1 *)local_48._8_8_;
        fVar8 = 0.0;
        local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_48._8_8_ = local_68;
        do {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          pSVar6 = local_58;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            pSVar6 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)validAttacks,0,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            return pSVar6;
          }
          pSVar2 = (__this->fields).AttackChances;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          local_7c = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                                (Il2CppObject *)local_58,
                                (MethodInfo_4AB53E0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackGroups;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar1,(Il2CppObject *)pSVar6,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
          if (bVar3) {
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackGroups;
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,(Il2CppObject *)pSVar6,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
            iVar4 = System_Collections_Generic_Dictionary_object__int___get_Item
                              (__this_00,(Il2CppObject *)pSVar5,
                               (MethodInfo_4A9D700 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
            local_7c = local_7c / (float)iVar4;
          }
          bVar3 = fVar7 < fVar8;
          fVar8 = fVar8 + local_7c;
        } while ((bVar3) || (fVar8 <= fVar7));
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose)
        ;
      }
      else {
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      return pSVar6;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackInfos;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___get_Item
              (pSVar1,(Il2CppObject *)local_58,
               (MethodInfo_4AAD450 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackGroups;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)pSVar6,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    if (bVar3) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackGroups;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)pSVar6,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      bVar3 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                        (__this_00,(Il2CppObject *)pSVar5,
                         (MethodInfo_4A9D990 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
      if (!bVar3) {
        System_Collections_Generic_Dictionary_object__int___Add
                  (__this_00,(Il2CppObject *)pSVar5,0,
                   (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
        pSVar2 = (__this->fields).AttackChances;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                           (Il2CppObject *)pSVar6,
                           (MethodInfo_4AB53E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
        local_7c = local_7c + fVar7;
      }
      iVar4 = System_Collections_Generic_Dictionary_object__int___get_Item
                        (__this_00,(Il2CppObject *)pSVar5,
                         (MethodInfo_4A9D700 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
      System_Collections_Generic_Dictionary_object__int___set_Item
                (__this_00,(Il2CppObject *)pSVar5,iVar4 + 1,
                 (MethodInfo_4A9D760 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    }
    else {
      pSVar2 = (__this->fields).AttackChances;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)pSVar6,
                         (MethodInfo_4AB53E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      local_7c = local_7c + fVar7;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetValidAttacks
// il2cpp: System_Collections_Generic_List_string__o* Controllers_BaseTitanAIController__GetValidAttacks (Controllers_BaseTitanAIController_o* __this, bool farOnly, const MethodInfo* method);
// 0x5ba4200
// eh: try 0x5ba46ca..0x5ba49ec -> pad 0x5ba4a0c (+17 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ba4a24..0x5ba4a29 -> pad 0x5ba4a4e cleanup
// eh: try 0x5ba4a51..0x5ba4a5b -> pad 0x5ba4a63 catch (...) [compiler noexcept guard]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba43ce: nop 
// asm:   0x5ba454e: nop 
// asm:   0x5ba4721: jmp 0x5ba473f
// asm:   0x5ba4750: mov rbx, rbp
// asm:   0x5ba4753: add rbx, 0x12
// asm:   0x5ba4757: jmp 0x5ba476b
// asm:   0x5ba49ec: jmp 0x5ba4a0c
// asm:   0x5ba49ee: jmp 0x5ba4a0c
// asm:   0x5ba49f0: jmp 0x5ba4a0c
// asm:   0x5ba49f2: jmp 0x5ba4a0c
// asm:   0x5ba49f4: jmp 0x5ba4a0c
// asm:   0x5ba49f6: jmp 0x5ba4a0c
// asm:   0x5ba49f8: jmp 0x5ba4a0c
// asm:   0x5ba49fa: jmp 0x5ba4a0c
// asm:   0x5ba49fc: jmp 0x5ba4a0c
// asm:   0x5ba49fe: jmp 0x5ba4a0c
// asm:   0x5ba4a00: jmp 0x5ba4a0c
// asm:   0x5ba4a02: jmp 0x5ba4a0c
// asm:   0x5ba4a04: jmp 0x5ba4a0c
// asm:   0x5ba4a06: jmp 0x5ba4a0c
// asm:   0x5ba4a08: jmp 0x5ba4a0c
// asm:   0x5ba4a0a: jmp 0x5ba4a0c
// asm:   0x5ba4a0c: mov rbx, rax
// asm:   0x5ba4a0f: cmp edx, 1
// asm:   0x5ba4a12: jne 0x5ba4a51
// asm:   0x5ba4a14: mov rdi, rbx
// asm:   0x5ba4a17: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ba4a1c: mov rbx, qword ptr [rax]
// asm:   0x5ba4a1f: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5ba4a24: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ba4a29: lea rax, [rip + 0x16eb730]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_Dispose
// asm:   0x5ba4a30: mov rsi, qword ptr [rax]
// asm:   0x5ba4a33: lea rdi, [rsp + 0x20]
// asm:   0x5ba4a38: call 0x4de81a0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose()
// asm:   0x5ba4a3d: test rbx, rbx
// asm:   0x5ba4a40: je 0x5ba4941
// asm:   0x5ba4a46: mov rdi, rbx
// asm:   0x5ba4a49: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ba4a4e: mov rbx, rax
// asm:   0x5ba4a51: lea rdi, [rsp + 0x38]
// asm:   0x5ba4a56: call 0x2fd8550  ; il2cpp_runtime_helper_02fd8550()
// asm:   0x5ba4a5b: mov rdi, rbx
// asm:   0x5ba4a5e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ba4a63: mov rdi, rax
// asm:   0x5ba4a66: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
Controllers_BaseTitanAIController__GetValidAttacks
          (Controllers_BaseTitanAIController_o *__this,bool farOnly,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int32_t length;
  uint uVar7;
  System_Collections_Generic_List_string__o *__this_00;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Characters_BaseTitan_o *pCVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  Characters_BaseCharacter_o *pCVar12;
  Characters_BaseCharacter_c *pCVar13;
  Utility_BaseComponentCache_o *pUVar14;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_String_array *pSVar15;
  UnityEngine_Transform_o *__this_03;
  bool bVar16;
  MethodInfo *pMVar17;
  bool bVar18;
  bool bVar19;
  VirtualInvokeData *pVVar20;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Characters_TitanAttackInfo_o *attack;
  Il2CppObject *pIVar21;
  ulong uVar22;
  Characters_BaseCharacter_o *pCVar23;
  long lVar24;
  UnityEngine_Transform_o *pUVar25;
  float fVar26;
  undefined8 uVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o relativePosition;
  UnityEngine_Vector3_o velocity;
  float fStack_ac;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_98;
  undefined1 auStack_80 [16];
  System_String_o *pSStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  if (Il2CppMethodInitialized_07547476 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_float_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTargetable);
    Il2CppMethodInitialized_07547476 = '\x01';
  }
  SStack_98.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_98.fields._index = 0;
  SStack_98.fields._version = 0;
  SStack_98.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._validAttacks;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05ba49c1;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (__this_00->fields)._size;
  (__this_00->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pIVar21 = (Il2CppObject *)(__this->fields)._enemy;
  if (pIVar21 == (Il2CppObject *)0x0) {
    return __this_00;
  }
  pIVar8 = pIVar21->klass;
  uVar22 = (ulong)(pIVar8->_2).interface_offsets_count;
  if (uVar22 != 0) {
    pIVar9 = (pIVar8->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(Characters_ITargetable_c **)((long)&pIVar9->interfaceType + lVar24) ==
          TypeInfo_Characters_ITargetable) {
        pVVar20 = pIVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar24) + 2);
        goto label_05ba4369;
      }
      lVar24 = lVar24 + 0x10;
    } while (uVar22 * 0x10 != lVar24);
  }
  pVVar20 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar21,(Il2CppClass *)TypeInfo_Characters_ITargetable,2)
  ;
label_05ba4369:
  bVar18 = (*pVVar20->methodPtr)(pIVar21,pVVar20->method);
  if (!bVar18) {
    return __this_00;
  }
  pCVar10 = (__this->fields)._titan;
  if (pCVar10 == (Characters_BaseTitan_o *)0x0) goto label_05ba49c1;
  bVar18 = (*(pCVar10->klass->vtable)._151_CanAttack.methodPtr)
                     (pCVar10,(pCVar10->klass->vtable)._151_CanAttack.method);
  if (!bVar18) {
    return __this_00;
  }
  pIVar21 = (Il2CppObject *)(__this->fields)._enemy;
  if (pIVar21 == (Il2CppObject *)0x0) goto label_05ba49c1;
  pIVar8 = pIVar21->klass;
  uVar22 = (ulong)(pIVar8->_2).interface_offsets_count;
  if (uVar22 != 0) {
    pIVar9 = (pIVar8->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(Characters_ITargetable_c **)((long)&pIVar9->interfaceType + lVar24) ==
          TypeInfo_Characters_ITargetable) {
        pVVar20 = pIVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar24) + 1);
        goto label_05ba4404;
      }
      lVar24 = lVar24 + 0x10;
    } while (uVar22 * 0x10 != lVar24);
  }
  pVVar20 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar21,(Il2CppClass *)TypeInfo_Characters_ITargetable,1)
  ;
label_05ba4404:
  UVar28 = (*pVVar20->methodPtr)(pIVar21,pVVar20->method);
  auStack_58._8_4_ = extraout_XMM0_Dc;
  auStack_58._0_8_ = UVar28.fields._0_8_;
  auStack_58._12_4_ = extraout_XMM0_Dd;
  fVar26 = UVar28.fields.z;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar11->zeroVector).fields.x;
  uVar3 = (pUVar11->zeroVector).fields.y;
  auStack_68._4_4_ = uVar3;
  auStack_68._0_4_ = uVar2;
  auStack_68._8_8_ = 0;
  fStack_ac = (pUVar11->zeroVector).fields.z;
  pCVar12 = (Characters_BaseCharacter_o *)(__this->fields)._enemy;
  if (pCVar12 == (Characters_BaseCharacter_o *)0x0) {
    bVar18 = true;
label_05ba45b7:
    pCVar23 = (__this->fields)._character;
    if ((pCVar23 == (Characters_BaseCharacter_o *)0x0) ||
       ((pUVar14 = (pCVar23->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0 ||
        (pCVar12 == (Characters_BaseCharacter_o *)0x0)))) goto label_05ba49c1;
    pUVar25 = (pUVar14->fields).Transform;
    uVar27 = il2cpp_runtime_helper_02fd8410(1);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto label_05ba49c1;
    bVar16 = true;
  }
  else {
    pCVar13 = pCVar12->klass;
    bVar4 = (pCVar13->_2).typeHierarchyDepth;
    bVar5 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (bVar4 < bVar5) {
      pCVar23 = (Characters_BaseCharacter_o *)0x0;
    }
    else {
      pCVar23 = (Characters_BaseCharacter_o *)0x0;
      if ((pCVar13->_2).typeHierarchy[(ulong)bVar5 - 1] == (Il2CppClass *)TypeInfo_Characters_Human) {
        pCVar23 = pCVar12;
      }
    }
    bVar6 = (TypeInfo_Map_MapTargetable->_2).typeHierarchyDepth;
    if (bVar4 < bVar6) {
      bVar18 = true;
    }
    else {
      bVar18 = (pCVar13->_2).typeHierarchy[(ulong)bVar6 - 1] != (Il2CppClass *)TypeInfo_Map_MapTargetable;
    }
    if (pCVar23 == (Characters_BaseCharacter_o *)0x0) {
      bVar5 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar4 < bVar5) ||
         ((pCVar13->_2).typeHierarchy[(ulong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan))
      goto label_05ba45b7;
      pIVar21 = il2cpp_codegen_is_inst_class
                          ((Il2CppObject *)pCVar12,(Il2CppClass *)TypeInfo_Characters_BaseTitan);
      pCVar12 = (__this->fields)._character;
      if ((((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar14 = (pCVar12->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
          (pIVar21 == (Il2CppObject *)0x0)) ||
         ((pIVar21[0x10].monitor == (void *)0x0 ||
          (__this_03 = *(UnityEngine_Transform_o **)((long)pIVar21[0x10].monitor + 0x50),
          __this_03 == (UnityEngine_Transform_o *)0x0)))) goto label_05ba49c1;
      pUVar25 = (pUVar14->fields).Transform;
      UVar29 = UnityEngine_Transform__get_position(__this_03,(MethodInfo *)0x0);
      fVar26 = UVar29.fields.z;
      uVar27 = UVar29.fields._0_8_;
      if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto label_05ba49c1;
      bVar16 = true;
    }
    else {
      if ((bVar4 < bVar5) ||
         ((pCVar13->_2).typeHierarchy[(ulong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar12);
      }
      UVar29 = Characters_BaseCharacter__GetVelocity(pCVar12,(MethodInfo *)0x0);
      fStack_ac = UVar29.fields.z;
      auStack_68._8_4_ = extraout_XMM0_Dc_00;
      auStack_68._0_8_ = UVar29.fields._0_8_;
      auStack_68._12_4_ = extraout_XMM0_Dd_00;
      pCVar12 = (__this->fields)._character;
      if (((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar14 = (pCVar12->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pIVar21 = (Il2CppObject *)(__this->fields)._enemy, pIVar21 == (Il2CppObject *)0x0))
      goto label_05ba49c1;
      pUVar25 = (pUVar14->fields).Transform;
      pIVar8 = pIVar21->klass;
      uVar22 = (ulong)(pIVar8->_2).interface_offsets_count;
      if (uVar22 != 0) {
        pIVar9 = (pIVar8->_1).interfaceOffsets;
        lVar24 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar9->interfaceType + lVar24) ==
              TypeInfo_Characters_ITargetable) {
            pVVar20 = pIVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar24) + 1);
            goto label_05ba461a;
          }
          lVar24 = lVar24 + 0x10;
        } while (uVar22 * 0x10 != lVar24);
      }
      pVVar20 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar21,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba461a:
      UVar29 = (*pVVar20->methodPtr)(pIVar21,pVVar20->method);
      fVar26 = UVar29.fields.z;
      uVar27 = UVar29.fields._0_8_;
      if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto label_05ba49c1;
      bVar16 = false;
    }
  }
  UVar29.fields.z = fVar26;
  UVar29.fields.x = (float)(int)uVar27;
  UVar29.fields.y = (float)(int)((ulong)uVar27 >> 0x20);
  UVar29 = UnityEngine_Transform__InverseTransformPoint(pUVar25,UVar29,(MethodInfo *)0x0);
  relativePosition.fields.z = UVar29.fields.z;
  auStack_48._8_4_ = extraout_XMM0_Dc_01;
  auStack_48._0_8_ = UVar29.fields._0_8_;
  auStack_48._12_4_ = extraout_XMM0_Dd_01;
  __this_01 = (__this->fields).AttackChances;
  if ((__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_object__float___get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (MethodInfo_4AB5080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Keys),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_80,
               __this_04,
               (MethodInfo_511B280 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_float_GetEnumerator);
    SStack_98.fields._currentKey = (Il2CppObject *)pSStack_70;
    SStack_98.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_80._0_8_;
    SStack_98.fields._index = auStack_80._8_4_;
    SStack_98.fields._version = auStack_80._12_4_;
    auStack_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_80._8_8_ = &SStack_98;
label_05ba46c0:
    do {
      bVar19 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                         (&SStack_98,
                          (MethodInfo_4CE81B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_MoveNext
                         );
      pIVar21 = SStack_98.fields._currentKey;
      if (!bVar19) {
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                  (&SStack_98,
                   (MethodInfo_4CE81A0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_Dispose
                  );
        return __this_00;
      }
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackInfos;
      if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      attack = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_02,SStack_98.fields._currentKey,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
      if (!bVar18) goto label_05ba4730;
      if (attack == (Characters_TitanAttackInfo_o *)0x0) {
        ThrowNullReferenceException();
      }
    } while ((bool)(bVar16 & (attack->fields).HumanOnly != false));
    goto label_05ba473f;
  }
label_05ba49c1:
  ThrowNullReferenceException();
label_05ba4730:
  if (attack == (Characters_TitanAttackInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((attack->fields).MapObject == false) goto label_05ba46c0;
label_05ba473f:
  bVar19 = (attack->fields).FarOnly;
  if (farOnly) {
    if (bVar19 == false) goto label_05ba46c0;
  }
  else if (bVar19 == false) goto label_05ba4781;
  if (0.0 < (__this->fields)._rangedCooldownLeft) goto label_05ba46c0;
label_05ba4781:
  pCVar10 = (__this->fields)._titan;
  if (pCVar10 == (Characters_BaseTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar19 = Characters_BaseTitan__CanUseAttack(pCVar10,attack,(MethodInfo *)0x0);
  if (bVar19) {
    if ((((__this->fields).SmartAttack == false) || ((attack->fields).FarOnly != false || bVar16)) ||
       ((attack->fields).HasKeyframes == false)) {
      relativePosition.fields.x = (float)auStack_48._0_4_;
      relativePosition.fields.y = (float)auStack_48._4_4_;
      bVar19 = Characters_TitanAttackInfo__CheckSimpleAttack(attack,relativePosition,(MethodInfo *)0x0);
      pMVar17 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (bVar19) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar15 = (__this_00->fields)._items;
        if (pSVar15 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar7 = (__this_00->fields)._size;
        if (uVar7 < (uint)pSVar15->max_length) {
          (__this_00->fields)._size = uVar7 + 1;
          pSVar15->m_Items[(int)uVar7] = (System_String_o *)pIVar21;
          Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,pIVar21,
                     (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
        }
      }
    }
    else {
      pCVar10 = (__this->fields)._titan;
      if (pCVar10 == (Characters_BaseTitan_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar14 = (pCVar10->fields).Cache;
      if (pUVar14 == (Utility_BaseComponentCache_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar25 = (pUVar14->fields).Transform;
      fVar26 = Characters_BaseTitan__GetAttackSpeed(pCVar10,(System_String_o *)pIVar21,(MethodInfo *)0x0);
      pCVar10 = (__this->fields)._titan;
      if (pCVar10 == (Characters_BaseTitan_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar28.fields.x = (float)auStack_58._0_4_;
      UVar28.fields.y = (float)auStack_58._4_4_;
      velocity.fields.z = fStack_ac;
      velocity.fields.x = (float)auStack_68._0_4_;
      velocity.fields.y = (float)auStack_68._4_4_;
      bVar19 = Characters_TitanAttackInfo__CheckSmartAttack
                         (attack,pUVar25,UVar28,velocity,fVar26,(pCVar10->fields).Size,(MethodInfo *)0x0);
      pMVar17 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (bVar19) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar15 = (__this_00->fields)._items;
        if (pSVar15 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar7 = (__this_00->fields)._size;
        if (uVar7 < (uint)pSVar15->max_length) {
          (__this_00->fields)._size = uVar7 + 1;
          pSVar15->m_Items[(int)uVar7] = (System_String_o *)pIVar21;
          Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,pIVar21,
                     (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
        }
      }
    }
  }
  goto label_05ba46c0;
}


// Controllers.BaseTitanAIController$$.ctor
// il2cpp: void Controllers_BaseTitanAIController___ctor (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x5ba4a70

void Controllers_BaseTitanAIController___ctor(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_string__int__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *__this_02;
  System_Collections_Generic_Dictionary_string__string__o *__this_03;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_07547477 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_07547477 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._validAttacks = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._validAttacks);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_01,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  (__this->fields)._attackGroupCounts = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._attackGroupCounts);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields).AttackChances = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackChances);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields).AttackGroups = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackGroups);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->MapObjectEntities;
    if (((uVar1 != 1) && (layers->m_Items[1] = pUVar2->MapObjectCharacters, 2 < uVar1)) &&
       (layers->m_Items[2] = pUVar2->MapObjectTitans, uVar1 != 3)) {
      layers->m_Items[3] = pUVar2->MapObjectAll;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields)._losLayer.fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
      (__this->fields)._usePathfinding = true;
      (__this->fields).DetectRange = 10000.0;
      (__this->fields).FocusTime = 5.0;
      (__this->fields).FocusRange = INFINITY;
      (__this->fields)._aiEnabled = true;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Controllers.BaseTitanAIController$$.cctor
// il2cpp: void Controllers_BaseTitanAIController___cctor (const MethodInfo* method);
// 0x5ba4cb0

void Controllers_BaseTitanAIController___cctor(MethodInfo *method)

{
  int iVar1;
  System_Single_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547478 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_07547478 = '\x01';
  }
  pSVar2 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,2);
  if (pSVar2 == (System_Single_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (int)pSVar2->max_length;
  if ((iVar1 == 0) || (pSVar2->m_Items[0] = 40.0, iVar1 == 1)) {
    ThrowIndexOutOfRangeException();
  }
  pSVar2->m_Items[1] = 80.0;
  TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles);
  return;
}


