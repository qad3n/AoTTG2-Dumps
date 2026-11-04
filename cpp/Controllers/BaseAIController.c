// Type: Controllers.BaseAIController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Controllers/BaseAIController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseAIController.cs
// --------------------------------

// Controllers.BaseAIController$$get_AIEnabled
// il2cpp: bool Controllers_BaseAIController__get_AIEnabled (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x181cd39f0

bool
Controllers_BaseAIController__get_AIEnabled(Controllers_BaseAIController_o* __this, MethodInfo* method)

{
  return (__this->fields)._aiEnabled;
}


// Controllers.BaseAIController$$set_AIEnabled
// il2cpp: void Controllers_BaseAIController__set_AIEnabled (Controllers_BaseAIController_o* __this, bool value, const MethodInfo* method);
// 0x1820f2720

void Controllers_BaseAIController__set_AIEnabled
               (Controllers_BaseAIController_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Controllers_BaseAIController_c *pCVar3;
  
  if (Il2CppMethodInitialized_184346a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_184346a7d = '\x01';
  }
  if ((__this->fields)._aiEnabled != value) {
    pCVar2 = (__this->fields)._character;
    (__this->fields)._aiEnabled = value;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        *(bool *)&(*(uint64_t *)((char *)pCVar2 + 0x280)) = value;
      }
    }
    if (!value) {
      Controllers_BaseAIController__ClearTarget(__this,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._character;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pCVar2->fields).HasDirection = false;
      pCVar3 = __this->klass;
      bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
      if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
        bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
           ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
          Controllers_BaseTitanAIController__Idle
                    ((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        Controllers_HumanAIController__StopInput((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Controllers.BaseAIController$$get_IsWalking
// il2cpp: bool Controllers_BaseAIController__get_IsWalking (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f2660

bool Controllers_BaseAIController__get_IsWalking(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346a7e = '\x01';
  }
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      return (bool)*(undefined1 *)((longlong)&(*(uint64_t *)((char *)pCVar2 + 0x230)) + 4);
    }
  }
  bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
     ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
    return *(char *)&(*(uint64_t *)((char *)__this + 0xc0)) == '\0';
  }
  return false;
}


// Controllers.BaseAIController$$set_IsWalking
// il2cpp: void Controllers_BaseAIController__set_IsWalking (Controllers_BaseAIController_o* __this, bool value, const MethodInfo* method);
// 0x1820f2860

void Controllers_BaseAIController__set_IsWalking
               (Controllers_BaseAIController_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346a7f = '\x01';
  }
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      *(bool *)((longlong)&(*(uint64_t *)((char *)pCVar2 + 0x230)) + 4) = value;
      return;
    }
  }
  bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
     ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
    *(bool *)&(*(uint64_t *)((char *)__this + 0xc0)) = !value;
    pCVar2 = (__this->fields)._character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      *(bool *)&(*(uint64_t *)((char *)pCVar2 + 0x110)) = value;
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
  }
  return;
}


// Controllers.BaseAIController$$get_UsePathfinding
// il2cpp: bool Controllers_BaseAIController__get_UsePathfinding (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x180f1d480

bool
Controllers_BaseAIController__get_UsePathfinding(Controllers_BaseAIController_o* __this, MethodInfo* method)

{
  return (__this->fields)._usePathfinding;
}


// Controllers.BaseAIController$$set_UsePathfinding
// il2cpp: void Controllers_BaseAIController__set_UsePathfinding (Controllers_BaseAIController_o* __this, bool value, const MethodInfo* method);
// 0x1820f2980

void Controllers_BaseAIController__set_UsePathfinding
               (Controllers_BaseAIController_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Behaviour_o *__this_00;
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  
  if (Il2CppMethodInitialized_184346a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346a80 = '\x01';
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
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider
                           );
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          Controllers_BaseAIController__CreateAgent
                    (__this,(UnityEngine_CapsuleCollider_o *)pUVar2,10.0,2,(MethodInfo *)0x0);
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
  }
  return;
}


// Controllers.BaseAIController$$GetTarget
// il2cpp: Characters_ITargetable_o* Controllers_BaseAIController__GetTarget (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f18a0

Characters_ITargetable_o*
Controllers_BaseAIController__GetTarget(Controllers_BaseAIController_o* __this, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._enemy;
  }
  return (Characters_ITargetable_o *)0x0;
}


// Controllers.BaseAIController$$IsValidTarget
// il2cpp: bool Controllers_BaseAIController__IsValidTarget (Characters_ITargetable_o* target, const MethodInfo* method);
// 0x1820f1a00

bool Controllers_BaseAIController__IsValidTarget(Characters_ITargetable_o *target,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  
  if (Il2CppMethodInitialized_184346a81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346a81 = '\x01';
  }
  if (target == (Characters_ITargetable_o *)0x0) {
    return false;
  }
  bVar1 = (TypeInfo_UnityEngine_Object->_2).typeHierarchyDepth;
  if ((bVar1 <= (target->klass->_2).typeHierarchyDepth) &&
     ((target->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Object))
  {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
  }
  pvVar3 = InterfaceInvoker0_Invoke(2,(Il2CppClass *)TypeInfo_Characters_ITargetable,(Il2CppObject *)target);
  return SUB81(pvVar3,0);
}


// Controllers.BaseAIController$$SetTarget
// il2cpp: void Controllers_BaseAIController__SetTarget (Controllers_BaseAIController_o* __this, Characters_ITargetable_o* target, float focusDuration, const MethodInfo* method);
// 0x1820f2050

void
Controllers_BaseAIController__SetTarget(Controllers_BaseAIController_o* __this, Characters_ITargetable_o* target, float focusDuration, MethodInfo* method)

{
  byte bVar1;
  Controllers_BaseTitanAIController_c *pCVar2;
  
  if (Il2CppMethodInitialized_184346a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    Il2CppMethodInitialized_184346a82 = '\x01';
  }
  if (enemy == (Characters_ITargetable_o *)0x0) {
    Controllers_BaseAIController__ClearTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  }
  else {
    (__this->fields)._automaticTargeting = true;
    Controllers_BaseAIController__AssignTarget
              ((Controllers_BaseAIController_o *)__this,enemy,focusTime,(MethodInfo *)0x0);
    pCVar2 = __this->klass;
    (__this->fields)._idleTimeLeft = 0.0;
    bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
    if ((((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) &&
        (__this != (Controllers_BaseTitanAIController_o *)0x0)) && ((__this->fields).AIState == 7)) {
      Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.BaseAIController$$AssignTarget
// il2cpp: void Controllers_BaseAIController__AssignTarget (Controllers_BaseAIController_o* __this, Characters_ITargetable_o* target, float focusDuration, const MethodInfo* method);
// 0x1820f04f0

void Controllers_BaseAIController__AssignTarget
               (Controllers_BaseAIController_o *__this,Characters_ITargetable_o *target,float focusDuration,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184346a83 = '\x01';
  }
  (__this->fields)._enemy = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy,target);
  if (target == (Characters_ITargetable_o *)0x0) {
    focusDuration = 0.0;
  }
  else if (focusDuration == 0.0) {
    focusDuration = (__this->fields).FocusTime;
  }
  (__this->fields)._focusTimeLeft = focusDuration;
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      (*(uint64_t *)((char *)pCVar2 + 0x150)) = (System_String_o *)target;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar2 + 0x150)),target);
    }
  }
  return;
}


// Controllers.BaseAIController$$ClearTarget
// il2cpp: void Controllers_BaseAIController__ClearTarget (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f0740

void Controllers_BaseAIController__ClearTarget(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184346a83 = '\x01';
  }
  (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy,(void *)0x0);
  (__this->fields)._focusTimeLeft = 0.0;
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      (*(uint64_t *)((char *)pCVar2 + 0x150)) = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pCVar2 + 0x150)),(void *)0x0);
      return;
    }
  }
  return;
}


// Controllers.BaseAIController$$SetDetectRange
// il2cpp: void Controllers_BaseAIController__SetDetectRange (Controllers_BaseAIController_o* __this, float range, const MethodInfo* method);
// 0x1820f2030

void Controllers_BaseAIController__SetDetectRange
               (Controllers_BaseAIController_o *__this,float range,MethodInfo *method)

{
  if ((__this->fields).DetectRange != range) {
    (__this->fields).DetectRange = range;
    (__this->fields)._updateEnemyTimeLeft = 0.0;
  }
  return;
}


// Controllers.BaseAIController$$GetNearestEnemy
// il2cpp: Characters_ITargetable_o* Controllers_BaseAIController__GetNearestEnemy (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f1150
// eh: try 0x1820f13b0..0x1820f14ce -> pad 0x183320150 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f14df: mov rdx, qword ptr [rip + 0x1f9a7c2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_Dispose
// asm:   0x1820f14e6: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1820f14eb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820f14f0: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1820f14f5: test rcx, rcx
// asm:   0x1820f14f8: jne 0x1820f1543
// asm:   0x1820f14fa: mov rsi, qword ptr [rsp + 0x110]
// asm:   0x1820f1543: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

Characters_ITargetable_o *
Controllers_BaseAIController__GetNearestEnemy(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_BaseDetection_o *pCVar7;
  System_Collections_Generic_List_MapTargetable__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar8;
  UnityEngine_Vector3_o *pUVar9;
  void *pvVar10;
  Characters_BaseCharacter_o *pCVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Characters_BaseCharacter_o *local_res8;
  float local_d8;
  float local_d4;
  float local_d0;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_o local_b8;
  undefined1 local_a8 [16];
  Characters_BaseCharacter_o *local_98;
  System_Collections_Generic_List_Enumerator_object__o local_90 [5];
  
  if (Il2CppMethodInitialized_184346a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapTargetable_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346a84 = '\x01';
  }
  local_90[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90[0].fields._index = 0;
  local_90[0].fields._version = 0;
  local_90[0].fields._current = (Il2CppObject *)0x0;
  pCVar11 = (__this->fields)._character;
  if (((pCVar11 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar5 = (pCVar11->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    pUVar9 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_c8,pUVar6,(MethodInfo *)0x0);
    pCVar11 = (__this->fields)._character;
    if (pCVar11 != (Characters_BaseCharacter_o *)0x0) {
      fVar1 = (pUVar9->fields).x;
      fVar2 = (pUVar9->fields).y;
      fVar3 = (pUVar9->fields).z;
      fVar16 = (__this->fields).DetectRange;
      local_res8 = (Characters_BaseCharacter_o *)0x0;
      pCVar7 = (pCVar11->fields).Detection;
      pCVar11 = (Characters_BaseCharacter_o *)0x0;
      if (pCVar7 != (Characters_BaseDetection_o *)0x0) {
        pCVar11 = (pCVar7->fields).ClosestEnemy;
      }
      bVar8 = Controllers_BaseAIController__IsValidTarget
                        ((Characters_ITargetable_o *)pCVar11,(MethodInfo *)0x0);
      if (bVar8) {
        if (((pCVar11 == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar5 = (pCVar11->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0))
        goto label_1820f153d;
        pUVar9 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)&local_c8,pUVar6,(MethodInfo *)0x0);
        fVar15 = (pUVar9->fields).x;
        fVar13 = (pUVar9->fields).y;
        fVar14 = (pUVar9->fields).z;
        if (Il2CppMethodInitialized_18433dee7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_18433dee7 = '\x01';
        }
        fVar15 = fVar15 - fVar1;
        fVar13 = fVar13 - fVar2;
        fVar14 = fVar14 - fVar3;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar12 = (double)(fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15);
        if (dVar12 < 0.0) {
          dVar12 = sqrt(dVar12);
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        if ((float)dVar12 < fVar16) {
          fVar16 = (float)dVar12;
          local_res8 = pCVar11;
        }
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
      if (__this_00 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapTargetable_GetEnumerator
                  );
        local_90[0].fields._list = (System_Collections_Generic_List_T__o *)local_a8._0_8_;
        local_90[0].fields._index = local_a8._8_4_;
        local_90[0].fields._version = local_a8._12_4_;
        local_90[0].fields._current = (Il2CppObject *)local_98;
        local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_a8._8_8_ = local_90;
label_1820f13b0:
        do {
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (local_90,(MethodInfo_153A2A0 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_MoveNext
                            );
          __this_01 = local_90[0].fields._current;
          if (!bVar8) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapTargetable_Dispose);
            return (Characters_ITargetable_o *)local_res8;
          }
          if (Il2CppMethodInitialized_184346a81 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_184346a81 = '\x01';
          }
        } while ((Characters_BaseCharacter_o *)__this_01 == (Characters_BaseCharacter_o *)0x0);
        bVar4 = (TypeInfo_UnityEngine_Object->_2).typeHierarchyDepth;
        if ((bVar4 <= (((Characters_BaseCharacter_c *)__this_01->klass)->_2).typeHierarchyDepth) &&
           ((((Characters_BaseCharacter_c *)__this_01->klass)->_2).typeHierarchy[(ulonglong)bVar4 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_Object)) goto code_r0x0001820f1429;
        goto label_1820f144c;
      }
    }
  }
label_1820f153d:
  ThrowNullReferenceException();
code_r0x0001820f1429:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
label_1820f144c:
    pvVar10 = InterfaceInvoker0_Invoke(2,(Il2CppClass *)TypeInfo_Characters_ITargetable,__this_01);
    if ((char)pvVar10 != '\0') {
      pUVar9 = Map_MapTargetable__GetPosition(&local_b8,(Map_MapTargetable_o *)__this_01,(MethodInfo *)0x0);
      local_c8.x = (pUVar9->fields).x;
      local_c8.y = (pUVar9->fields).y;
      local_c8.z = (pUVar9->fields).z;
      local_d8 = fVar1;
      local_d4 = fVar2;
      local_d0 = fVar3;
      fVar15 = (float)il2cpp_runtime_helper_180562c80(&local_c8,&local_d8,0);
      if (fVar15 < fVar16) {
        local_res8 = (Characters_BaseCharacter_o *)__this_01;
        fVar16 = fVar15;
      }
    }
  }
  goto label_1820f13b0;
}


// Controllers.BaseAIController$$TargetNearestEnemy
// il2cpp: void Controllers_BaseAIController__TargetNearestEnemy (Controllers_BaseAIController_o* __this, float focusDuration, const MethodInfo* method);
// 0x1820f2160

void Controllers_BaseAIController__TargetNearestEnemy
               (Controllers_BaseAIController_o *__this,float focusDuration,MethodInfo *method)

{
  byte bVar1;
  Controllers_BaseAIController_c *pCVar2;
  Characters_ITargetable_o *target;
  
  (__this->fields)._automaticTargeting = true;
  target = Controllers_BaseAIController__GetNearestEnemy(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    Il2CppMethodInitialized_184346a82 = '\x01';
  }
  if (target == (Characters_ITargetable_o *)0x0) {
    Controllers_BaseAIController__ClearTarget(__this,(MethodInfo *)0x0);
  }
  else {
    (__this->fields)._automaticTargeting = true;
    Controllers_BaseAIController__AssignTarget(__this,target,focusDuration,(MethodInfo *)0x0);
    pCVar2 = __this->klass;
    (__this->fields)._idleTimeLeft = 0.0;
    bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
    if ((((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) &&
        (__this != (Controllers_BaseAIController_o *)0x0)) && (*(int *)&(*(uint64_t *)((char *)__this + 0x98)) == 7)) {
      Controllers_BaseTitanAIController__Idle((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  return;
}


// Controllers.BaseAIController$$UpdateTargeting
// il2cpp: void Controllers_BaseAIController__UpdateTargeting (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f2380

void Controllers_BaseAIController__UpdateTargeting(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  ushort uVar3;
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar4;
  Il2CppClass *pIVar5;
  System_String_o *a;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  bool bVar8;
  Il2CppObject *target;
  longlong lVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *b;
  UnityEngine_Vector3_o *pUVar11;
  undefined8 *puVar12;
  ushort uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_38;
  undefined4 local_30;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346a85 = '\x01';
  }
  fVar15 = (__this->fields)._focusTimeLeft;
  fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._focusTimeLeft = fVar15 - fVar14;
  fVar15 = (__this->fields)._updateEnemyTimeLeft;
  fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._updateEnemyTimeLeft = fVar15 - fVar14;
  bVar8 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
  if (!bVar8) {
    Controllers_BaseAIController__ClearTarget(__this,(MethodInfo *)0x0);
  }
  if (((__this->fields)._aiEnabled != false) &&
     (((__this->fields)._moveToActive == false || ((__this->fields)._moveToIgnoreEnemies == false)))) {
    if ((__this->fields)._automaticTargeting == false) {
      return;
    }
    if (0.0 < (__this->fields)._updateEnemyTimeLeft) {
      return;
    }
    (__this->fields)._updateEnemyTimeLeft = 0.2;
    target = (Il2CppObject *)Controllers_BaseAIController__GetNearestEnemy(__this,(MethodInfo *)0x0);
    obj = (Il2CppObject *)(__this->fields)._enemy;
    if (target != (Il2CppObject *)0x0) {
      if ((obj != (Il2CppObject *)0x0) && (0.0 < (__this->fields)._focusTimeLeft)) {
        if (obj != target) {
          return;
        }
        fVar15 = (__this->fields).FocusTime;
        pfVar1 = &(__this->fields)._focusTimeLeft;
        lVar9 = 0x58;
        if (*pfVar1 <= fVar15 && fVar15 != *pfVar1) {
          lVar9 = 0x48;
        }
        (__this->fields)._focusTimeLeft = *(float *)((longlong)&__this->klass + lVar9);
        return;
      }
      Controllers_BaseAIController__AssignTarget
                (__this,(Characters_ITargetable_o *)target,0.0,(MethodInfo *)0x0);
      return;
    }
    if (obj == (Il2CppObject *)0x0) {
      return;
    }
    pCVar4 = (__this->fields)._character;
    if ((pCVar4 == (Characters_BaseCharacter_o *)0x0) || (obj == (Il2CppObject *)0x0)) {
label_1820f262a:
      ThrowNullReferenceException();
    }
    pIVar5 = obj->klass;
    a = (pCVar4->fields).Team;
    uVar3 = (pIVar5->_2).interface_offsets_count;
    if (uVar3 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      uVar13 = 0;
      do {
        if (pIVar6[uVar13].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable) {
          pVVar10 = pIVar5->vtable + pIVar6[uVar13].offset;
          goto label_1820f2526;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar3);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,0);
label_1820f2526:
    b = (*pVVar10->methodPtr)(obj,pVVar10->method);
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar8 = GameManagers_TeamInfo__SameTeam(a,b,(MethodInfo *)0x0);
    if (!bVar8) {
      pCVar4 = (__this->fields)._character;
      if ((((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar7 = (pCVar4->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
          (__this_00 = (pUVar7->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar11 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0),
         (__this->fields)._enemy == (Characters_ITargetable_o *)0x0)) goto label_1820f262a;
      uVar2._0_4_ = (pUVar11->fields).x;
      uVar2._4_4_ = (pUVar11->fields).y;
      fVar15 = (pUVar11->fields).z;
      puVar12 = (undefined8 *)il2cpp_runtime_helper_180027220(local_28,1,TypeInfo_Characters_ITargetable);
      local_38 = *puVar12;
      local_30 = *(undefined4 *)(puVar12 + 1);
      local_28[0]._0_8_ = uVar2;
      local_28[0].z = fVar15;
      fVar15 = (float)il2cpp_runtime_helper_180562c80(local_28,&local_38,0);
      pfVar1 = &(__this->fields).FocusRange;
      if (fVar15 < *pfVar1 || fVar15 == *pfVar1) {
        return;
      }
    }
  }
  Controllers_BaseAIController__ClearTarget(__this,(MethodInfo *)0x0);
  return;
}


// Controllers.BaseAIController$$MoveTo
// il2cpp: void Controllers_BaseAIController__MoveTo (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x1820f1be0

void Controllers_BaseAIController__MoveTo
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o *position,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_28 [2];
  
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
  local_28[0].x = (position->fields).x;
  local_28[0].y = (position->fields).y;
  local_28[0].z = (position->fields).z;
  Controllers_BaseAIController__BeginMove
            (__this,(UnityEngine_Vector3_o *)local_28,range,ignoreEnemies,(MethodInfo *)0x0);
  return;
}


// Controllers.BaseAIController$$MoveToTarget
// il2cpp: void Controllers_BaseAIController__MoveToTarget (Controllers_BaseAIController_o* __this, Characters_ITargetable_o* target, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x1820f1ab0

void Controllers_BaseAIController__MoveToTarget
               (Controllers_BaseAIController_o *__this,Characters_ITargetable_o *target,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  ushort uVar1;
  Characters_ITargetable_c *pCVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Vector3_o *pUVar6;
  ushort uVar7;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184346a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_184346a86 = '\x01';
  }
  bVar4 = Controllers_BaseAIController__IsValidTarget(target,(MethodInfo *)0x0);
  if (bVar4) {
    (__this->fields)._moveToTarget = target;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,target);
    if (target == (Characters_ITargetable_o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar2 = target->klass;
    uVar1 = (pCVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pCVar2->_1).interfaceOffsets;
      uVar7 = 0;
      do {
        if (pIVar3[uVar7].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable) {
          pVVar5 = pCVar2->vtable + (pIVar3[uVar7].offset + 1);
          goto label_1820f1b65;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)target,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_1820f1b65:
    pUVar6 = (*pVVar5->methodPtr)(local_28,(Il2CppObject *)target,pVVar5->method);
    local_38.x = (pUVar6->fields).x;
    local_38.y = (pUVar6->fields).y;
    local_38.z = (pUVar6->fields).z;
    Controllers_BaseAIController__BeginMove
              (__this,(UnityEngine_Vector3_o *)&local_38,range,ignoreEnemies,(MethodInfo *)0x0);
  }
  return;
}


// Controllers.BaseAIController$$BeginMove
// il2cpp: void Controllers_BaseAIController__BeginMove (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x1820f0600

void Controllers_BaseAIController__BeginMove
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o *position,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Controllers_BaseAIController_c *pCVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_184346a87 = '\x01';
  }
  fVar4 = (position->fields).y;
  fVar2 = (position->fields).z;
  (__this->fields)._moveToPosition.fields.x = (position->fields).x;
  (__this->fields)._moveToPosition.fields.y = fVar4;
  (__this->fields)._moveToPosition.fields.z = fVar2;
  (__this->fields)._moveToRange = range;
  (__this->fields)._idleTimeLeft = 0.0;
  (__this->fields)._moveToIgnoreEnemies = ignoreEnemies;
  (__this->fields)._moveToActive = true;
  if (ignoreEnemies) {
    Controllers_BaseAIController__ClearTarget(__this,(MethodInfo *)0x0);
  }
  pCVar3 = __this->klass;
  bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
  if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
     ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
    Controllers_HumanAIController__BeginMove((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
     ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
    *(undefined8 *)&(*(uint8_t *)((char *)__this + 0x11c)) = 0;
    *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x130)) = 0;
    *(undefined1 *)&(*(uint32_t *)((char *)__this + 0xd0)) = 0;
    (*(uint32_t *)((char *)__this + 0xd8)) = 0.0;
    (*(uint32_t *)((char *)__this + 0xdc)) = 0.0;
    Il2CppCodeGenWriteBarrier((void **)&(*(uint32_t *)((char *)__this + 0xd8)),(void *)0x0);
    if (*(int *)&(*(uint64_t *)((char *)__this + 0x98)) == 7) {
      Controllers_BaseTitanAIController__Idle((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0)
      ;
    }
    if ((__this->fields)._moveToIgnoreEnemies != false) {
      Controllers_BaseTitanAIController__Idle((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0)
      ;
    }
  }
  return;
}


// Controllers.BaseAIController$$UpdateMoveTarget
// il2cpp: void Controllers_BaseAIController__UpdateMoveTarget (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f2230

void Controllers_BaseAIController__UpdateMoveTarget(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  Characters_BaseCharacter_o *pCVar4;
  Controllers_BaseAIController_c *pCVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_184346a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_184346a88 = '\x01';
  }
  if (((__this->fields)._moveToActive == false) ||
     ((__this->fields)._moveToTarget == (Characters_ITargetable_o *)0x0)) {
    return;
  }
  bVar6 = Controllers_BaseAIController__IsValidTarget((__this->fields)._moveToTarget,(MethodInfo *)0x0);
  if (bVar6) {
    if ((__this->fields)._moveToTarget != (Characters_ITargetable_o *)0x0) {
      puVar7 = (undefined8 *)il2cpp_runtime_helper_180027220(local_18,1,TypeInfo_Characters_ITargetable);
      uVar1 = *puVar7;
      fVar3 = *(float *)(puVar7 + 1);
      (__this->fields)._moveToPosition.fields.x = (float)(int)uVar1;
      (__this->fields)._moveToPosition.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
      (__this->fields)._moveToPosition.fields.z = fVar3;
      return;
    }
  }
  else {
    (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
    pCVar4 = (__this->fields)._character;
    (__this->fields)._moveToActive = false;
    if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
      (pCVar4->fields).HasDirection = false;
      pCVar5 = __this->klass;
      bVar2 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
      if ((bVar2 <= (pCVar5->_2).typeHierarchyDepth) &&
         ((pCVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
        Controllers_HumanAIController__Idle((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
        return;
      }
      bVar2 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
      if ((pCVar5->_2).typeHierarchyDepth < bVar2) {
        return;
      }
      if ((pCVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController) {
        return;
      }
      Controllers_BaseTitanAIController__Idle((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$IdleFor
// il2cpp: void Controllers_BaseAIController__IdleFor (Controllers_BaseAIController_o* __this, float time, const MethodInfo* method);
// 0x1820f18d0

void Controllers_BaseAIController__IdleFor
               (Controllers_BaseAIController_o *__this,float time,MethodInfo *method)

{
  byte bVar1;
  Controllers_BaseAIController_c *pCVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_184346a89 = '\x01';
  }
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
  (__this->fields)._moveToActive = false;
  fVar3 = 0.0;
  if (0.0 <= time) {
    fVar3 = time;
  }
  (__this->fields)._idleTimeLeft = fVar3;
  Controllers_BaseAIController__ClearTarget(__this,(MethodInfo *)0x0);
  pCVar2 = __this->klass;
  bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
  if (((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
      ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
       (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) &&
     (__this != (Controllers_BaseAIController_o *)0x0)) {
    Controllers_HumanAIController__StopInput((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
    Controllers_HumanAIController__Idle((Controllers_HumanAIController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
  if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
     ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) {
    *(undefined1 *)&(*(uint32_t *)((char *)__this + 0xd0)) = 0;
    (*(uint32_t *)((char *)__this + 0xd8)) = 0.0;
    (*(uint32_t *)((char *)__this + 0xdc)) = 0.0;
    Il2CppCodeGenWriteBarrier((void **)&(*(uint32_t *)((char *)__this + 0xd8)),(void *)0x0);
    Controllers_BaseTitanAIController__Idle((Controllers_BaseTitanAIController_o *)__this,(MethodInfo *)0x0);
    __this[1].fields._moveToPosition.fields.y = time;
    *(undefined4 *)&(*(uint64_t *)((char *)__this + 0x98)) = 7;
  }
  return;
}


// Controllers.BaseAIController$$Awake
// il2cpp: void Controllers_BaseAIController__Awake (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f05b0

void Controllers_BaseAIController__Awake(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *value;
  
  if (Il2CppMethodInitialized_184346a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    Il2CppMethodInitialized_184346a8a = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  (__this->fields)._character = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._character,value);
  return;
}


// Controllers.BaseAIController$$Start
// il2cpp: void Controllers_BaseAIController__Start (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_BaseAIController__Start(Controllers_BaseAIController_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.BaseAIController$$FixedUpdate
// il2cpp: void Controllers_BaseAIController__FixedUpdate (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_BaseAIController__FixedUpdate(Controllers_BaseAIController_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.BaseAIController$$GetAgentSpeed
// il2cpp: float Controllers_BaseAIController__GetAgentSpeed (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f0e00

float Controllers_BaseAIController__GetAgentSpeed(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346a8b = '\x01';
  }
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      pSVar3 = (*(uint64_t *)((char *)pCVar2 + 0x150));
      if (pSVar3 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(char *)((longlong)&(*(uint64_t *)((char *)pCVar2 + 0x230)) + 4) != '\0') {
        return *(float *)&(*(uint64_t *)((char *)pSVar3 + 0x38)) * 0.25;
      }
      return *(float *)&(*(uint64_t *)((char *)pSVar3 + 0x38)) * 1.0;
    }
  }
  return 0.0;
}


// Controllers.BaseAIController$$CreateAgent
// il2cpp: void Controllers_BaseAIController__CreateAgent (Controllers_BaseAIController_o* __this, UnityEngine_CapsuleCollider_o* collider, float acceleration, int32_t obstacleAvoidance, const MethodInfo* method);
// 0x1820f07e0

void Controllers_BaseAIController__CreateAgent
               (Controllers_BaseAIController_o *__this,UnityEngine_CapsuleCollider_o *collider,
               float acceleration,int32_t obstacleAvoidance,MethodInfo *method)

{
  int32_t value;
  UnityEngine_AI_NavMeshBuildSettings_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar2;
  float fVar3;
  float local_res10 [2];
  undefined1 local_98 [144];
  
  if (Il2CppMethodInitialized_184346a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_NavMeshAgent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346a8c = '\x01';
  }
  local_98._0_4_ = 0;
  local_98._4_4_ = 0.0;
  local_98._8_4_ = 0.0;
  local_98._12_4_ = 0.0;
  local_res10[0] = 0.0;
  local_98._16_4_ = 0.0;
  local_98._20_4_ = 0.0;
  local_98._24_4_ = 0.0;
  local_98._28_4_ = 0.0;
  local_98._32_4_ = 0;
  local_98._36_4_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0.0;
  local_98._48_4_ = 0.0;
  local_98._52_4_ = 0.0;
  local_98._56_4_ = 0.0;
  local_98._60_4_ = 0.0;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  fVar3 = Utility_Util__GetAgentSize(collider,(MethodInfo *)0x0);
  pUVar1 = Utility_Util__GetAgentSettings
                     ((UnityEngine_AI_NavMeshBuildSettings_o *)(local_98 + 0x40),fVar3,local_res10,
                      (MethodInfo *)0x0);
  local_98._0_4_ = (pUVar1->fields).m_AgentTypeID;
  local_98._4_4_ = (pUVar1->fields).m_AgentRadius;
  local_98._8_4_ = (pUVar1->fields).m_AgentHeight;
  local_98._12_4_ = (pUVar1->fields).m_AgentSlope;
  local_98._16_4_ = (pUVar1->fields).m_AgentClimb;
  local_98._20_4_ = (pUVar1->fields).m_LedgeDropHeight;
  local_98._24_4_ = (pUVar1->fields).m_MaxJumpAcrossDistance;
  local_98._28_4_ = (pUVar1->fields).m_MinRegionArea;
  local_98._32_4_ = (pUVar1->fields).m_OverrideVoxelSize;
  local_98._36_4_ = (pUVar1->fields).m_VoxelSize;
  local_98._40_4_ = (pUVar1->fields).m_OverrideTileSize;
  local_98._44_4_ = (pUVar1->fields).m_TileSize;
  local_98._48_4_ = (pUVar1->fields).m_BuildHeightMesh;
  local_98._52_4_ = (pUVar1->fields).m_MaxJobWorkers;
  local_98._56_8_ = *(undefined8 *)&(pUVar1->fields).m_PreserveTilesOutsideBounds;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_NavMeshAgent);
    (__this->fields)._agent = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._agent,pUVar2);
    pUVar2 = (__this->fields)._agent;
    value = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)local_98,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
      UnityEngine_AI_NavMeshAgent__set_agentTypeID(pUVar2,value,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._agent;
      fVar3 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                        ((UnityEngine_AI_NavMeshBuildSettings_o *)local_98,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
        UnityEngine_AI_NavMeshAgent__set_radius(pUVar2,fVar3 / local_res10[0],(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._agent;
        fVar3 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                          ((UnityEngine_AI_NavMeshBuildSettings_o *)local_98,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
          UnityEngine_AI_NavMeshAgent__set_height(pUVar2,fVar3 / local_res10[0],(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._agent;
          if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            UnityEngine_AI_NavMeshAgent__set_acceleration(pUVar2,acceleration,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._agent;
            if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
              UnityEngine_AI_NavMeshAgent__set_obstacleAvoidanceType
                        (pUVar2,obstacleAvoidance,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._agent;
              if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                UnityEngine_AI_NavMeshAgent__set_angularSpeed(pUVar2,10.0,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._agent;
                if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  UnityEngine_AI_NavMeshAgent__set_autoRepath(pUVar2,true,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._agent;
                  if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                    UnityEngine_AI_NavMeshAgent__set_stoppingDistance(pUVar2,1.1,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields)._agent;
                    if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                      UnityEngine_AI_NavMeshAgent__set_autoBraking(pUVar2,false,(MethodInfo *)0x0);
                      pUVar2 = (__this->fields)._agent;
                      if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                        UnityEngine_AI_NavMeshAgent__set_updatePosition(pUVar2,false,(MethodInfo *)0x0);
                        pUVar2 = (__this->fields)._agent;
                        if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                          UnityEngine_AI_NavMeshAgent__set_updateRotation(pUVar2,false,(MethodInfo *)0x0);
                          pUVar2 = (__this->fields)._agent;
                          if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                            UnityEngine_AI_NavMeshAgent__set_avoidancePriority(pUVar2,0,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields)._agent;
                            fVar3 = (*(__this->klass->vtable)._7_GetAgentSpeed.methodPtr)
                                              (__this,(__this->klass->vtable)._7_GetAgentSpeed.method);
                            if (pUVar2 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                              UnityEngine_AI_NavMeshAgent__set_speed(pUVar2,fVar3,(MethodInfo *)0x0);
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
// 0x1820f1fb0

void Controllers_BaseAIController__SetAgentDestination
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if ((__this->fields)._setTargetThisFrame == false) {
    pUVar1 = (__this->fields)._agent;
    if (pUVar1 == (UnityEngine_AI_NavMeshAgent_o *)0x0) {
label_1820f2024:
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar1,(MethodInfo *)0x0);
    if ((!bVar2) && ((__this->fields)._repathTimeLeft <= 0.0)) {
      pUVar1 = (__this->fields)._agent;
      if (pUVar1 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_1820f2024;
      local_18.x = (position->fields).x;
      local_18.y = (position->fields).y;
      local_18.z = (position->fields).z;
      UnityEngine_AI_NavMeshAgent__SetDestination(pUVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0)
      ;
      (__this->fields)._repathTimeLeft = 0.2;
      (__this->fields)._setTargetThisFrame = true;
    }
  }
  return;
}


// Controllers.BaseAIController$$GetAgentNavDirection
// il2cpp: UnityEngine_Vector3_o Controllers_BaseAIController__GetAgentNavDirection (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x1820f0a80
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f0cc5: mov rax, qword ptr [rdx]
// asm:   0x1820f0cc8: lea rcx, [rsp + 0x30]
// asm:   0x1820f0ccd: mov r8, qword ptr [rax + 0x7e0]
// asm:   0x1820f0cd4: call qword ptr [rax + 0x7d8]  ; vtable slot 106
// asm:   0x1820f0cda: movsd xmm0, qword ptr [rax]
// asm:   0x1820f0cde: mov eax, dword ptr [rax + 8]
// asm:   0x1820f0ce1: movsd qword ptr [rdi], xmm0
// asm:   0x1820f0ce5: mov dword ptr [rdi + 8], eax
// asm:   0x1820f0ce8: jmp 0x1820f0c9e
// asm:   0x1820f0cea: xor r8d, r8d
// asm:   0x1820f0ced: lea rcx, [rsp + 0x30]
// asm:   0x1820f0cf2: mov rdx, rbx
// asm:   0x1820f0cf5: call 0x1820f0eb0  ; Controllers_BaseAIController__GetDirectionTowardsNavMesh()
// asm:   0x1820f0cfa: movsd xmm0, qword ptr [rax]
// asm:   0x1820f0cfe: mov eax, dword ptr [rax + 8]
// asm:   0x1820f0d01: movsd qword ptr [rdi], xmm0
// asm:   0x1820f0d05: mov dword ptr [rdi + 8], eax
// asm:   0x1820f0d08: jmp 0x1820f0c9e
// asm:   0x1820f0dd0: unpcklps xmm6, xmm8
// asm:   0x1820f0dd4: movaps xmm8, xmmword ptr [rsp + 0x40]
// asm:   0x1820f0dda: movsd qword ptr [rdi], xmm6
// asm:   0x1820f0dde: movss dword ptr [rdi + 8], xmm7
// asm:   0x1820f0de3: movaps xmm7, xmmword ptr [rsp + 0x50]
// asm:   0x1820f0de8: jmp 0x1820f0c9e

UnityEngine_Vector3_o *
Controllers_BaseAIController__GetAgentNavDirection
          (UnityEngine_Vector3_o *__return_storage_ptr__,Controllers_BaseAIController_o *__this,
          UnityEngine_Vector3_o *target,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Object_o *x;
  UnityEngine_AI_NavMeshAgent_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  Characters_BaseCharacter_o *pCVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *__this_00;
  bool bVar10;
  int32_t iVar11;
  UnityEngine_Vector3_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184346a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346a8d = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._agent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    pCVar8 = (__this->fields)._character;
    if (((pCVar8 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar9 = (pCVar8->fields).Cache, pUVar9 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this_00 = (pUVar9->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pUVar12 = UnityEngine_Transform__get_position(local_48,__this_00,(MethodInfo *)0x0);
      uVar1 = (target->fields).x;
      uVar4 = (target->fields).y;
      uVar2 = (pUVar12->fields).x;
      uVar5 = (pUVar12->fields).y;
      fVar17 = (target->fields).z - (pUVar12->fields).z;
      local_58.y = (float)uVar4 - (float)uVar5;
      local_58.x = (float)uVar1 - (float)uVar2;
      local_58.z = fVar17;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar13 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
      if (fVar13 <= 1e-05) {
        pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar15 = (pUVar7->zeroVector).fields.x;
        fVar14 = (pUVar7->zeroVector).fields.y;
        fVar17 = (pUVar7->zeroVector).fields.z;
      }
      else {
        fVar15 = ((float)uVar1 - (float)uVar2) / fVar13;
        fVar14 = ((float)uVar4 - (float)uVar5) / fVar13;
        fVar17 = fVar17 / fVar13;
      }
      (__return_storage_ptr__->fields).x = fVar15;
      (__return_storage_ptr__->fields).y = fVar14;
      (__return_storage_ptr__->fields).z = fVar17;
      return __return_storage_ptr__;
    }
  }
  else {
    pUVar6 = (__this->fields)._agent;
    if (pUVar6 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
      bVar10 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar6,(MethodInfo *)0x0);
      if (!bVar10) {
        pUVar12 = Controllers_BaseAIController__GetDirectionTowardsNavMesh(local_48,__this,(MethodInfo *)0x0);
        fVar13 = (pUVar12->fields).y;
        fVar17 = (pUVar12->fields).z;
        (__return_storage_ptr__->fields).x = (pUVar12->fields).x;
        (__return_storage_ptr__->fields).y = fVar13;
        (__return_storage_ptr__->fields).z = fVar17;
        return __return_storage_ptr__;
      }
      if ((__this->fields)._setTargetThisFrame == false) {
        pUVar6 = (__this->fields)._agent;
        if (pUVar6 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_1820f0ded;
        bVar10 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar6,(MethodInfo *)0x0);
        if ((!bVar10) && ((__this->fields)._repathTimeLeft <= 0.0)) {
          pUVar6 = (__this->fields)._agent;
          if (pUVar6 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_1820f0ded;
          local_58.x = (target->fields).x;
          local_58.y = (target->fields).y;
          local_58.z = (target->fields).z;
          UnityEngine_AI_NavMeshAgent__SetDestination
                    (pUVar6,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
          (__this->fields)._repathTimeLeft = 0.2;
          (__this->fields)._setTargetThisFrame = true;
        }
      }
      pUVar6 = (__this->fields)._agent;
      if (pUVar6 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
        pUVar12 = UnityEngine_AI_NavMeshAgent__get_velocity(local_48,pUVar6,(MethodInfo *)0x0);
        uVar3._0_4_ = (pUVar12->fields).x;
        uVar3._4_4_ = (pUVar12->fields).y;
        fVar17 = (pUVar12->fields).z;
        local_58._0_8_ = uVar3;
        local_58.z = fVar17;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar13 = (float)il2cpp_runtime_helper_180546a40(&local_58);
        if (fVar13 <= 1e-05) {
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar13 = (pUVar7->zeroVector).fields.x;
          fVar15 = (pUVar7->zeroVector).fields.y;
          fVar17 = (pUVar7->zeroVector).fields.z;
        }
        else {
          fVar15 = local_58.y / fVar13;
          fVar17 = fVar17 / fVar13;
          fVar13 = (float)uVar3 / fVar13;
        }
        local_58.y = fVar15;
        local_58.x = fVar13;
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar14 = fVar13 - (pUVar7->zeroVector).fields.x;
        fVar18 = local_58.y - (pUVar7->zeroVector).fields.y;
        fVar16 = fVar17 - (pUVar7->zeroVector).fields.z;
        if (9.9999994e-11 <= fVar18 * fVar18 + fVar14 * fVar14 + fVar16 * fVar16) {
          pUVar6 = (__this->fields)._agent;
          if (pUVar6 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_1820f0ded;
          iVar11 = UnityEngine_AI_NavMeshAgent__get_pathStatus(pUVar6,(MethodInfo *)0x0);
          if (iVar11 != 2) {
            (__return_storage_ptr__->fields).x = fVar13;
            (__return_storage_ptr__->fields).y = fVar15;
            (__return_storage_ptr__->fields).z = fVar17;
            return __return_storage_ptr__;
          }
        }
        pCVar8 = (__this->fields)._character;
        if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
          pUVar12 = (*(pCVar8->klass->vtable)._106_GetTargetDirection.methodPtr)
                              (local_48,pCVar8,(pCVar8->klass->vtable)._106_GetTargetDirection.method);
          fVar13 = (pUVar12->fields).y;
          fVar17 = (pUVar12->fields).z;
          (__return_storage_ptr__->fields).x = (pUVar12->fields).x;
          (__return_storage_ptr__->fields).y = fVar13;
          (__return_storage_ptr__->fields).z = fVar17;
          return __return_storage_ptr__;
        }
      }
    }
  }
label_1820f0ded:
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$GetDirectionTowardsNavMesh
// il2cpp: UnityEngine_Vector3_o Controllers_BaseAIController__GetDirectionTowardsNavMesh (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f0eb0

UnityEngine_Vector3_o *
Controllers_BaseAIController__GetDirectionTowardsNavMesh
          (UnityEngine_Vector3_o *__return_storage_ptr__,Controllers_BaseAIController_o *__this,
          MethodInfo *method)

{
  ulonglong uVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar4;
  undefined8 uVar5;
  bool bVar6;
  UnityEngine_Vector3_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_AI_NavMeshQueryFilter_o local_a8;
  UnityEngine_AI_NavMeshHit_o local_98 [4];
  
  local_98[0].fields.m_Hit = 0;
  pCVar2 = (__this->fields)._character;
  local_98[0].fields.m_Position.fields.x = 0.0;
  local_98[0].fields.m_Position.fields.y = 0.0;
  local_98[0].fields.m_Position.fields.z = 0.0;
  local_98[0].fields.m_Normal.fields.x = 0.0;
  local_98[0].fields.m_Normal.fields.y = 0.0;
  local_98[0].fields.m_Normal.fields.z = 0.0;
  local_98[0].fields.m_Distance = 0.0;
  local_98[0].fields.m_Mask = 0;
  if (((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)&local_b8,__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._agent;
    local_a8.fields._costs_k__BackingField = (System_Single_array *)0x0;
    if (__this_01 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
      fVar10 = (pUVar7->fields).x;
      fVar8 = (pUVar7->fields).y;
      uVar5._0_4_ = (pUVar7->fields).x;
      uVar5._4_4_ = (pUVar7->fields).y;
      fVar11 = (pUVar7->fields).z;
      local_a8.fields._agentTypeID_k__BackingField =
           UnityEngine_AI_NavMeshAgent__get_agentTypeID(__this_01,(MethodInfo *)0x0);
      local_a8.fields._areaMask_k__BackingField = -1;
      local_b8._0_8_ = uVar5;
      local_b8.z = fVar11;
      bVar6 = UnityEngine_AI_NavMesh__SamplePosition
                        ((UnityEngine_Vector3_o *)&local_b8,local_98,100.0,&local_a8,(MethodInfo *)0x0);
      if (bVar6) {
        fVar10 = local_98[0].fields.m_Position.fields.x - fVar10;
        fVar8 = local_98[0].fields.m_Position.fields.y - fVar8;
        fVar11 = local_98[0].fields.m_Position.fields.z - fVar11;
        local_b8.y = fVar8;
        local_b8.x = fVar10;
        local_b8.z = fVar11;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_b8,0);
        if (fVar9 <= 1e-05) {
          pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar10 = (pUVar4->zeroVector).fields.x;
          fVar8 = (pUVar4->zeroVector).fields.y;
          fVar11 = (pUVar4->zeroVector).fields.z;
        }
        else {
          fVar10 = fVar10 / fVar9;
          fVar8 = fVar8 / fVar9;
          fVar11 = fVar11 / fVar9;
        }
        (__return_storage_ptr__->fields).x = fVar10;
        (__return_storage_ptr__->fields).y = fVar8;
        (__return_storage_ptr__->fields).z = fVar11;
      }
      else {
        pUVar7 = UnityEngine_Random__get_onUnitSphere((UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar7->fields).x;
        uVar1._4_4_ = (pUVar7->fields).y;
        fVar10 = (pUVar7->fields).z;
        local_b8._0_8_ = uVar1 & 0xffffffff;
        local_b8.z = fVar10;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_b8,0);
        if (fVar8 <= 1e-05) {
          pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_b8.x = (pUVar4->zeroVector).fields.x;
          fVar8 = (pUVar4->zeroVector).fields.y;
          fVar10 = (pUVar4->zeroVector).fields.z;
        }
        else {
          local_b8.x = local_b8.x / fVar8;
          fVar10 = fVar10 / fVar8;
          fVar8 = 0.0 / fVar8;
        }
        (__return_storage_ptr__->fields).x = local_b8.x;
        (__return_storage_ptr__->fields).y = fVar8;
        (__return_storage_ptr__->fields).z = fVar10;
      }
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$SampleAgentMesh
// il2cpp: bool Controllers_BaseAIController__SampleAgentMesh (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o position, UnityEngine_AI_NavMeshHit_o* hit, const MethodInfo* method);
// 0x1820f1f20

bool Controllers_BaseAIController__SampleAgentMesh
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o *position,
               UnityEngine_AI_NavMeshHit_o *hit,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  bool bVar2;
  System_Single_array *local_28;
  float fStack_20;
  int32_t iStack_1c;
  UnityEngine_AI_NavMeshQueryFilter_o local_18;
  
  __this_00 = (__this->fields)._agent;
  local_28 = (System_Single_array *)0x0;
  if (__this_00 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    iStack_1c = UnityEngine_AI_NavMeshAgent__get_agentTypeID(__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (position->fields).x;
    uVar1._4_4_ = (position->fields).y;
    fStack_20 = (position->fields).z;
    local_18.fields._agentTypeID_k__BackingField = iStack_1c;
    local_18.fields._areaMask_k__BackingField = -1;
    local_18.fields._costs_k__BackingField = local_28;
    local_28 = (System_Single_array *)uVar1;
    bVar2 = UnityEngine_AI_NavMesh__SamplePosition
                      ((UnityEngine_Vector3_o *)&local_28,hit,100.0,&local_18,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$RefreshAgent
// il2cpp: void Controllers_BaseAIController__RefreshAgent (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f1c60
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f1ef7: xor r8d, r8d
// asm:   0x1820f1efa: movsd qword ptr [rbp - 9], xmm7
// asm:   0x1820f1eff: lea rdx, [rbp - 9]
// asm:   0x1820f1f03: mov dword ptr [rbp - 1], edi
// asm:   0x1820f1f06: call 0x182e970a0  ; UnityEngine_AI_NavMeshAgent__set_nextPosition()
// asm:   0x1820f1f0b: jmp 0x1820f1e7b

void Controllers_BaseAIController__RefreshAgent(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  System_Single_array *pSVar1;
  float fVar2;
  UnityEngine_Object_o *x;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_AI_NavMeshAgent_o *pUVar5;
  UnityEngine_Behaviour_o *pUVar6;
  Controllers_BaseAIController_c *pCVar7;
  bool bVar8;
  UnityEngine_Vector3_o *pUVar9;
  float fVar10;
  float fVar11;
  System_Single_array *local_78;
  float local_70;
  UnityEngine_AI_NavMeshQueryFilter_o local_68;
  System_Single_array *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_184346a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346a8e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._agent;
  local_58 = (System_Single_array *)0x0;
  uStack_50._0_4_ = 0.0;
  uStack_50._4_4_ = 0.0;
  local_38 = 0;
  local_48._0_4_ = 0.0;
  local_48._4_4_ = 0.0;
  uStack_40._0_4_ = 0.0;
  uStack_40._4_4_ = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  if ((__this->fields)._usePathfinding == false) {
    return;
  }
  pCVar3 = (__this->fields)._character;
  if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar9 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)&local_68,__this_00,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._agent;
    if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
      pSVar1 = *(System_Single_array **)&pUVar9->fields;
      fVar2 = (pUVar9->fields).z;
      bVar8 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar5,(MethodInfo *)0x0);
      if (bVar8) {
        fVar11 = (__this->fields)._repathTimeLeft;
        fVar10 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        pCVar7 = __this->klass;
        pUVar5 = (__this->fields)._agent;
        (__this->fields)._repathTimeLeft = fVar11 - fVar10;
        fVar11 = (*(pCVar7->vtable)._7_GetAgentSpeed.methodPtr)
                           (__this,(pCVar7->vtable)._7_GetAgentSpeed.method);
        if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
          UnityEngine_AI_NavMeshAgent__set_speed(pUVar5,fVar11,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._agent;
          if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            local_68.fields._areaMask_k__BackingField = (int32_t)fVar2;
            local_68.fields._costs_k__BackingField = pSVar1;
            UnityEngine_AI_NavMeshAgent__set_nextPosition
                      (pUVar5,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        fVar11 = (__this->fields)._reacquireTimeLeft;
        fVar10 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        fVar11 = fVar11 - fVar10;
        (__this->fields)._reacquireTimeLeft = fVar11;
        if (0.0 < fVar11) {
          return;
        }
        pUVar5 = (__this->fields)._agent;
        (__this->fields)._reacquireTimeLeft = 1.0;
        local_68.fields._costs_k__BackingField = (System_Single_array *)0x0;
        if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
          local_68.fields._agentTypeID_k__BackingField =
               UnityEngine_AI_NavMeshAgent__get_agentTypeID(pUVar5,(MethodInfo *)0x0);
          local_68.fields._areaMask_k__BackingField = -1;
          local_78 = pSVar1;
          local_70 = fVar2;
          bVar8 = UnityEngine_AI_NavMesh__SamplePosition
                            ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_AI_NavMeshHit_o *)&local_58,100.0
                             ,&local_68,(MethodInfo *)0x0);
          if (!bVar8) {
            return;
          }
          local_68.fields._costs_k__BackingField = local_58;
          local_68.fields._areaMask_k__BackingField = (int32_t)(float)uStack_50;
          local_78 = pSVar1;
          local_70 = fVar2;
          fVar11 = (float)il2cpp_runtime_helper_180562c80(&local_68);
          pUVar5 = (__this->fields)._agent;
          if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
            fVar10 = UnityEngine_AI_NavMeshAgent__get_height(pUVar5,(MethodInfo *)0x0);
            if (fVar10 < fVar11) {
              return;
            }
            pUVar6 = (UnityEngine_Behaviour_o *)(__this->fields)._agent;
            if (pUVar6 != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled(pUVar6,false,(MethodInfo *)0x0);
              pUVar6 = (UnityEngine_Behaviour_o *)(__this->fields)._agent;
              if (pUVar6 != (UnityEngine_Behaviour_o *)0x0) {
                UnityEngine_Behaviour__set_enabled(pUVar6,true,(MethodInfo *)0x0);
                pUVar5 = (__this->fields)._agent;
                if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                  bVar8 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar5,(MethodInfo *)0x0);
                  if (!bVar8) {
                    (__this->fields)._reacquireTimeLeft = 5.0;
                    return;
                  }
                  pUVar5 = (__this->fields)._agent;
                  if (pUVar5 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
                    local_68.fields._areaMask_k__BackingField = (int32_t)fVar2;
                    local_68.fields._costs_k__BackingField = pSVar1;
                    UnityEngine_AI_NavMeshAgent__set_nextPosition
                              (pUVar5,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
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
// 0x1820f2120

void Controllers_BaseAIController__SyncAgentPosition
               (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  UnityEngine_AI_NavMeshAgent_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  __this_00 = (__this->fields)._agent;
  if (__this_00 != (UnityEngine_AI_NavMeshAgent_o *)0x0) {
    local_18[0].x = (position->fields).x;
    local_18[0].y = (position->fields).y;
    local_18[0].z = (position->fields).z;
    UnityEngine_AI_NavMeshAgent__set_nextPosition
              (__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$GetTargetAngle
// il2cpp: float Controllers_BaseAIController__GetTargetAngle (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x1820f1550

float Controllers_BaseAIController__GetTargetAngle
                (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o *direction,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_c *pUVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_o local_48 [4];
  
  fVar10 = (direction->fields).x;
  fVar11 = (direction->fields).z;
  local_58.x = 0.0;
  local_58.y = 0.0;
  local_58.z = 0.0;
  local_58.w = 0.0;
  local_78.y = 0.0;
  local_78.x = fVar10;
  local_78.z = fVar11;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_78);
  pUVar6 = TypeInfo_UnityEngine_Vector3;
  if (fVar8 <= 1e-05) {
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar10 = (pUVar3->zeroVector).fields.x;
    fVar12 = (pUVar3->zeroVector).fields.y;
    fVar11 = (pUVar3->zeroVector).fields.z;
  }
  else {
    fVar10 = fVar10 / fVar8;
    fVar12 = 0.0 / fVar8;
    fVar11 = fVar11 / fVar8;
  }
  bVar7 = Il2CppMethodInitialized_18433dbea == '\0';
  (direction->fields).x = fVar10;
  (direction->fields).y = fVar12;
  (direction->fields).z = fVar11;
  if (bVar7) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
    pUVar6 = TypeInfo_UnityEngine_Vector3;
  }
  pUVar3 = pUVar6->static_fields;
  fVar8 = (direction->fields).x - (pUVar3->zeroVector).fields.x;
  fVar9 = (direction->fields).y - (pUVar3->zeroVector).fields.y;
  fVar11 = fVar11 - (pUVar3->zeroVector).fields.z;
  if (9.9999994e-11 <= fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11) {
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
      pUVar6 = TypeInfo_UnityEngine_Vector3;
    }
    pUVar3 = pUVar6->static_fields;
    local_68.y = fVar12;
    local_68.x = fVar10;
    local_78.x = (pUVar3->upVector).fields.x;
    local_78.y = (pUVar3->upVector).fields.y;
    local_78.z = (pUVar3->upVector).fields.z;
    local_68.z = (direction->fields).z;
    pUVar4 = UnityEngine_Quaternion__Internal_LookRotation
                       (local_48,(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Vector3_o *)&local_78,
                        (MethodInfo *)0x0);
    local_58.x = (pUVar4->fields).x;
    local_58.y = (pUVar4->fields).y;
    local_58.z = (pUVar4->fields).z;
    local_58.w = (pUVar4->fields).w;
    pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)&local_58,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar5->fields).x;
    uVar2 = (pUVar5->fields).y;
    local_68.y = (float)uVar2 * 57.29578;
    local_68.x = (float)uVar1 * 57.29578;
    local_68.z = (pUVar5->fields).z * 57.29578;
    pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_68,
                        (MethodInfo *)0x0);
label_1820f171a:
    return (pUVar5->fields).y;
  }
  __this_00 = (__this->fields)._character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__get_eulerAngles
                         ((UnityEngine_Vector3_o *)&local_68,__this_01,(MethodInfo *)0x0);
      goto label_1820f171a;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseAIController$$GetTargetRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_BaseAIController__GetTargetRotation (Controllers_BaseAIController_o* __this, float angle, const MethodInfo* method);
// 0x1820f1850

UnityEngine_Quaternion_o *
Controllers_BaseAIController__GetTargetRotation
          (UnityEngine_Quaternion_o *__return_storage_ptr__,Controllers_BaseAIController_o *__this,float angle
          ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Quaternion_o local_18;
  
  local_28.fields.y = angle * 0.017453292;
  local_28.fields.x = 0.0;
  local_28.fields.z = 0.0;
  pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_18,&local_28,(MethodInfo *)0x0);
  fVar1 = (pUVar4->fields).y;
  fVar2 = (pUVar4->fields).z;
  fVar3 = (pUVar4->fields).w;
  (__return_storage_ptr__->fields).x = (pUVar4->fields).x;
  (__return_storage_ptr__->fields).y = fVar1;
  (__return_storage_ptr__->fields).z = fVar2;
  (__return_storage_ptr__->fields).w = fVar3;
  return __return_storage_ptr__;
}


// Controllers.BaseAIController$$GetTargetDirection
// il2cpp: UnityEngine_Vector3_o Controllers_BaseAIController__GetTargetDirection (Controllers_BaseAIController_o* __this, float angle, const MethodInfo* method);
// 0x1820f1770

UnityEngine_Vector3_o *
Controllers_BaseAIController__GetTargetDirection
          (UnityEngine_Vector3_o *__return_storage_ptr__,Controllers_BaseAIController_o *__this,float angle,
          MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_48 [16];
  
  fVar4 = (90.0 - angle) * 0.017453292;
  fVar2 = (float)il2cpp_runtime_helper_1804f54c0(fVar4);
  fVar4 = (float)il2cpp_runtime_helper_1804f5fc0(fVar4);
  local_48[1] = 0.0;
  local_48[0] = fVar2;
  local_48[2] = fVar4;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar3 = (float)il2cpp_runtime_helper_180546a40(local_48,0);
  if (fVar3 <= 1e-05) {
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar2 = (pUVar1->zeroVector).fields.x;
    fVar5 = (pUVar1->zeroVector).fields.y;
    fVar4 = (pUVar1->zeroVector).fields.z;
  }
  else {
    fVar2 = fVar2 / fVar3;
    fVar5 = 0.0 / fVar3;
    fVar4 = fVar4 / fVar3;
  }
  (__return_storage_ptr__->fields).x = fVar2;
  (__return_storage_ptr__->fields).y = fVar5;
  (__return_storage_ptr__->fields).z = fVar4;
  return __return_storage_ptr__;
}


// Controllers.BaseAIController$$.ctor
// il2cpp: void Controllers_BaseAIController___ctor (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x1820f2630

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


