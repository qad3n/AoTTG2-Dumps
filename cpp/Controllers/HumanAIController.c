// Type: Controllers.HumanAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Controllers/HumanAIController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIController$$get_Target
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__get_Target (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba72d0

Characters_ITargetable_o *
Controllers_HumanAIController__get_Target(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_ITargetable_o *pCVar1;
  
  pCVar1 = Controllers_BaseAIController__GetTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0)
  ;
  return pCVar1;
}


// Controllers.HumanAIController$$set_Target
// il2cpp: void Controllers_HumanAIController__set_Target (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* value, const MethodInfo* method);
// 0x5ba72e0

void Controllers_HumanAIController__set_Target
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *value,MethodInfo *method)

{
  float fVar1;
  
  Controllers_HumanAIController__AssignHumanTarget(__this,value,method);
  if ((__this->fields)._moveToActive != false) {
    (__this->fields)._moveToTarget = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
    if (value == (Characters_ITargetable_o *)0x0) {
      (__this->fields)._moveToPosition.fields.z = (__this->fields)._targetPosition.fields.z;
      fVar1 = (__this->fields)._targetPosition.fields.y;
      (__this->fields)._moveToPosition.fields.x = (__this->fields)._targetPosition.fields.x;
      (__this->fields)._moveToPosition.fields.y = fVar1;
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$get_TargetPosition
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__get_TargetPosition (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba74b0

UnityEngine_Vector3_o
Controllers_HumanAIController__get_TargetPosition(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._targetPosition.fields;
}


// Controllers.HumanAIController$$set_TargetPosition
// il2cpp: void Controllers_HumanAIController__set_TargetPosition (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5ba74d0

void Controllers_HumanAIController__set_TargetPosition
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields)._targetPosition.fields.x = value.fields.x;
  (__this->fields)._targetPosition.fields.y = value.fields.y;
  (__this->fields)._targetPosition.fields.z = value.fields.z;
  if (((__this->fields)._moveToActive == false) ||
     ((__this->fields)._moveToTarget != (Characters_ITargetable_o *)0x0)) {
    return;
  }
  (__this->fields)._moveToPosition.fields.x = value.fields.x;
  (__this->fields)._moveToPosition.fields.y = value.fields.y;
  (__this->fields)._moveToPosition.fields.z = value.fields.z;
  return;
}


// Controllers.HumanAIController$$get_CanRunCallbacks
// il2cpp: bool Controllers_HumanAIController__get_CanRunCallbacks (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba7500

bool Controllers_HumanAIController__get_CanRunCallbacks
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  if (((__this->fields)._aiEnabled != false) && ((__this->fields)._idleTimeLeft <= 0.0)) {
    if ((__this->fields)._moveToActive == false) {
      return true;
    }
    return (__this->fields)._moveToIgnoreEnemies == false;
  }
  return false;
}


// Controllers.HumanAIController$$Awake
// il2cpp: void Controllers_HumanAIController__Awake (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba7530

void Controllers_HumanAIController__Awake(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547488 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_07547488 = '\x01';
  }
  Controllers_BaseAIController__Awake((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
  (__this->fields)._human = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
  (__this->fields)._usePathfinding = false;
  return;
}


// Controllers.HumanAIController$$Start
// il2cpp: void Controllers_HumanAIController__Start (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba7590
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba75a4: lea r12, [rip + 0x173b5dd]  ; "MoveTo"
// asm:   0x5ba75ab: mov rbx, qword ptr [r12]
// asm:   0x5ba75af: cmp byte ptr [rip + 0x199fee4], 0
// asm:   0x5ba75b6: je 0x5ba75fc
// asm:   0x5ba75c4: jmp 0x5ba76cb

void Controllers_HumanAIController__Start(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Controllers_HumanAIStates_MoveTo_o *__this_00;
  Controllers_HumanAIState_o *value;
  
  pSVar2 = "MoveTo";
  if (Il2CppMethodInitialized_07547489 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_MoveTo);
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    Il2CppMethodInitialized_07547489 = '\x01';
    pSVar2 = "MoveTo";
  }
  "MoveTo" = pSVar2;
  if (Il2CppMethodInitialized_0754749a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    Il2CppMethodInitialized_0754749a = '\x01';
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  }
  else {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)pSVar2,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    if (bVar3) {
      return;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Controllers_HumanAIStates_MoveTo_o *)0x0) {
      value = (*(__this_00->klass->vtable)._5_Init.methodPtr)
                        (__this_00,(__this->fields)._human,(__this_00->klass->vtable)._5_Init.method);
      pSVar2 = "MoveTo";
      if (Il2CppMethodInitialized_07547499 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
        Il2CppMethodInitialized_07547499 = '\x01';
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)value,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$BeforeFixedUpdate
// il2cpp: void Controllers_HumanAIController__BeforeFixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba7790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba77e3: jmp 0x5ba7819

void Controllers_HumanAIController__BeforeFixedUpdate
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_Component_o *__this_00;
  Characters_Human_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar8;
  UnityEngine_Transform_o *pUVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_0754748a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_0754748a = '\x01';
  }
  if ((__this->fields)._moveToActive == false) {
    obj = (Il2CppObject *)
          Controllers_BaseAIController__GetTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
    if ((__this->fields)._moveToActive != false) goto label_05ba77fa;
  }
  else {
    obj = (Il2CppObject *)(__this->fields)._moveToTarget;
label_05ba77fa:
    if (obj == (Il2CppObject *)0x0) {
      fVar1 = (__this->fields)._moveToPosition.fields.y;
      fVar12 = (__this->fields)._moveToPosition.fields.z;
      (__this->fields)._targetPosition.fields.x = (__this->fields)._moveToPosition.fields.x;
      (__this->fields)._targetPosition.fields.y = fVar1;
      (__this->fields)._targetPosition.fields.z = fVar12;
    }
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar4 = obj->klass;
    bVar3 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pIVar4->_2).typeHierarchyDepth < bVar3) ||
       ((pIVar4->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar5->interfaceType + lVar11) ==
              TypeInfo_Characters_ITargetable) {
            pVVar8 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar11) + 1);
            goto label_05ba78b4;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba78b4:
      UVar14 = (*pVVar8->methodPtr)(obj,pVVar8->method);
      fVar12 = UVar14.fields.z;
      fVar1 = UVar14.fields.x;
      fVar2 = UVar14.fields.y;
      (__this->fields)._targetPosition.fields.x = UVar14.fields.x;
      (__this->fields)._targetPosition.fields.y = UVar14.fields.y;
      (__this->fields)._targetPosition.fields.z = fVar12;
      if (((__this->fields)._moveToActive != false) &&
         ((__this->fields)._moveToTarget == (Characters_ITargetable_o *)0x0)) {
        (__this->fields)._moveToPosition.fields.x = UVar14.fields.x;
        (__this->fields)._moveToPosition.fields.y = UVar14.fields.y;
        (__this->fields)._moveToPosition.fields.z = fVar12;
      }
    }
    else {
      if ((obj[0x10].monitor == (void *)0x0) ||
         (__this_00 = *(UnityEngine_Component_o **)((long)obj[0x10].monitor + 0x68),
         __this_00 == (UnityEngine_Component_o *)0x0)) goto label_05ba7b0e;
      bVar3 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      pUVar9 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05ba7b0e;
      UVar14 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
      fVar12 = UnityEngine_CapsuleCollider__get_radius
                         ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
      pUVar9 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05ba7b0e;
      UVar15 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      pUVar9 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05ba7b0e;
      UVar16 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
      pUVar9 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05ba7b0e;
      local_48 = UVar14.fields.x;
      fStack_44 = UVar14.fields.y;
      if (local_48 <= fStack_44) {
        local_48 = fStack_44;
      }
      fVar1 = fVar12 * local_48 * 1.5;
      UVar14 = UnityEngine_Transform__get_up(pUVar9,(MethodInfo *)0x0);
      fVar13 = fVar12 * local_48 * 0.5;
      fVar2 = UVar14.fields.z * fVar13 + (UVar15.fields.z - UVar16.fields.z * fVar1);
      local_38 = UVar16.fields.x;
      fStack_34 = UVar16.fields.y;
      local_28 = UVar15.fields.x;
      fStack_24 = UVar15.fields.y;
      fVar12 = fVar13 * UVar14.fields.x + (local_28 - fVar1 * local_38);
      fVar1 = fVar13 * UVar14.fields.y + (fStack_24 - fVar1 * fStack_34);
      (__this->fields)._targetPosition.fields.x = fVar12;
      (__this->fields)._targetPosition.fields.y = fVar1;
      (__this->fields)._targetPosition.fields.z = fVar2;
      if (((__this->fields)._moveToActive != false) &&
         ((__this->fields)._moveToTarget == (Characters_ITargetable_o *)0x0)) {
        (__this->fields)._moveToPosition.fields.x = fVar12;
        (__this->fields)._moveToPosition.fields.y = fVar1;
        (__this->fields)._moveToPosition.fields.z = fVar2;
      }
      if (obj[0x11].klass == (Il2CppClass *)0x0) goto label_05ba7b0e;
      Characters_TitanColliderToggler__RegisterLook
                ((Characters_TitanColliderToggler_o *)obj[0x11].klass,(MethodInfo *)0x0);
      fVar1 = (__this->fields)._targetPosition.fields.x;
      fVar2 = (__this->fields)._targetPosition.fields.y;
      fVar12 = (__this->fields)._targetPosition.fields.z;
    }
    pCVar6 = (__this->fields)._human;
    if (((pCVar6 == (Characters_Human_o *)0x0) ||
        (pUVar7 = (pCVar6->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar9 = (pUVar7->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0)) {
label_05ba7b0e:
      ThrowNullReferenceException();
    }
    UVar14 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
    (__this->fields).TargetDirection.fields.x = fVar1 - UVar14.fields.x;
    (__this->fields).TargetDirection.fields.y = fVar2 - UVar14.fields.y;
    (__this->fields).TargetDirection.fields.z = fVar12 - UVar14.fields.z;
  }
  return;
}


// Controllers.HumanAIController$$FindNearestEnemy
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__FindNearestEnemy (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba7b20

Characters_ITargetable_o *
Controllers_HumanAIController__FindNearestEnemy(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_ITargetable_o *pCVar1;
  
  pCVar1 = Controllers_BaseAIController__GetNearestEnemy
                     ((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  return pCVar1;
}


// Controllers.HumanAIController$$FixedUpdateTargetStatus
// il2cpp: void Controllers_HumanAIController__FixedUpdateTargetStatus (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba7b30

void Controllers_HumanAIController__FixedUpdateTargetStatus
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  System_Nullable_Vector3__o *pSVar4;
  Characters_ITargetable_o *pCVar5;
  Characters_ITargetable_o *pCVar6;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  undefined8 uVar11;
  long lVar9;
  float fVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__Fields local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_0754748b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_0754748b = '\x01';
  }
  pCVar6 = (__this->fields)._trackedTarget;
  pCVar5 = Controllers_BaseAIController__GetTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0)
  ;
  if (pCVar6 != pCVar5) {
    pCVar6 = Controllers_BaseAIController__GetTarget
                       ((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._trackedTarget = pCVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._trackedTarget);
    (__this->fields)._targetLastPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._targetLastPosition.fields.field_0x1 = 0;
    (__this->fields)._targetLastPosition.fields.value.fields.x = 0.0;
    pSVar4 = &(__this->fields)._targetLastPosition;
    (pSVar4->fields).value.fields.y = 0.0;
    (pSVar4->fields).value.fields.z = 0.0;
  }
  pCVar6 = Controllers_BaseAIController__GetTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0)
  ;
  if (pCVar6 == (Characters_ITargetable_o *)0x0) {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar10 = (pUVar3->zeroVector).fields.y;
    fVar14 = (pUVar3->zeroVector).fields.z;
    (__this->fields).TargetVelocity.fields.x = (pUVar3->zeroVector).fields.x;
    (__this->fields).TargetVelocity.fields.y = fVar10;
    (__this->fields).TargetVelocity.fields.z = fVar14;
    (__this->fields)._targetLastPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._targetLastPosition.fields.field_0x1 = 0;
    (__this->fields)._targetLastPosition.fields.value.fields.x = 0.0;
    pSVar4 = &(__this->fields)._targetLastPosition;
    (pSVar4->fields).value.fields.y = 0.0;
    (pSVar4->fields).value.fields.z = 0.0;
  }
  else {
    obj = (Il2CppObject *)
          Controllers_BaseAIController__GetTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = obj->klass;
    uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Characters_ITargetable_c **)((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_Characters_ITargetable) {
          pVVar7 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar9) + 1);
          goto label_05ba7c9c;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba7c9c:
    value = (*pVVar7->methodPtr)(obj,pVVar7->method);
    if ((__this->fields)._targetLastPosition.fields.hasValue == false) {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar11._0_4_ = (pUVar3->zeroVector).fields.x;
      uVar11._4_4_ = (pUVar3->zeroVector).fields.y;
      fVar14 = (pUVar3->zeroVector).fields.z;
    }
    else {
      pSVar4 = &(__this->fields)._targetLastPosition;
      local_28._0_4_ = (pSVar4->fields).value.fields.x;
      local_28._4_4_ = (pSVar4->fields).value.fields.y;
      uStack_20 = 0;
      fVar14 = (__this->fields)._targetLastPosition.fields.value.fields.z;
      fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      auVar12._0_4_ = value.fields.x - (float)local_28;
      auVar12._4_4_ = value.fields.y - local_28._4_4_;
      auVar12._8_4_ = extraout_XMM0_Dc - (float)uStack_20;
      auVar12._12_4_ = extraout_XMM0_Dd - uStack_20._4_4_;
      fVar14 = (value.fields.z - fVar14) / fVar10;
      auVar13._4_4_ = fVar10;
      auVar13._0_4_ = fVar10;
      auVar13._8_4_ = fVar10;
      auVar13._12_4_ = fVar10;
      auVar13 = divps(auVar12,auVar13);
      uVar11 = auVar13._0_8_;
    }
    (__this->fields).TargetVelocity.fields.x = (float)(int)uVar11;
    (__this->fields).TargetVelocity.fields.y = (float)(int)((ulong)uVar11 >> 0x20);
    (__this->fields).TargetVelocity.fields.z = fVar14;
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value.fields.x = 0.0;
    local_38.value.fields.y = 0.0;
    local_38.value.fields.z = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_38,value,
               (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
    (__this->fields)._targetLastPosition.fields.hasValue = local_38.hasValue;
    *(undefined3 *)&(__this->fields)._targetLastPosition.fields.field_0x1 = local_38._1_3_;
    (__this->fields)._targetLastPosition.fields.value.fields.x = local_38.value.fields.x;
    pSVar4 = &(__this->fields)._targetLastPosition;
    (pSVar4->fields).value.fields.y = local_38.value.fields.y;
    (pSVar4->fields).value.fields.z = local_38.value.fields.z;
  }
  return;
}


// Controllers.HumanAIController$$FixedUpdate
// il2cpp: void Controllers_HumanAIController__FixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba7db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba7f44: jmp 0x5ba800b

void Controllers_HumanAIController__FixedUpdate(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Controllers_HumanAICallback_o *pCVar2;
  System_Action_o *pSVar3;
  Controllers_HumanAIState_o *pCVar4;
  System_Nullable_Vector3__o *pSVar5;
  Characters_Human_o *pCVar6;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  
  pCVar6 = (__this->fields)._human;
  if (pCVar6 == (Characters_Human_o *)0x0) goto label_05ba800b;
  if (((pCVar6->fields).FinishSetup == false) || ((pCVar6->fields).Dead != false)) {
    if ((__this->fields)._recoveryTimeLeft <= 0.0) goto label_05ba7df7;
  }
  else {
    (__this->fields)._setTargetThisFrame = false;
    (*(__this->klass->vtable)._8_RefreshAgent.methodPtr)
              (__this,(__this->klass->vtable)._8_RefreshAgent.method);
    fVar8 = (__this->fields)._idleTimeLeft;
    if (0.0 < fVar8) {
      if (0.0 < (__this->fields)._recoveryTimeLeft) {
        pCVar6 = (__this->fields)._human;
        if (pCVar6 == (Characters_Human_o *)0x0) goto label_05ba800b;
        (pCVar6->fields).TargetAngle = (__this->fields)._movementHeading;
      }
      (__this->fields)._lastMovementPosition.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
      (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
      pSVar5 = &(__this->fields)._lastMovementPosition;
      (pSVar5->fields).value.fields.y = 0.0;
      (pSVar5->fields).value.fields.z = 0.0;
      (__this->fields)._lowMovementSpeedTime = 0.0;
      (__this->fields)._recoveryTimeLeft = 0.0;
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar8 = fVar8 - fVar7;
      (__this->fields)._idleTimeLeft = fVar8;
      if (0.0 < fVar8) {
        return;
      }
    }
    Controllers_BaseAIController__UpdateMoveTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0)
    ;
    method_00 = (MethodInfo *)0x0;
    Controllers_BaseAIController__UpdateTargeting((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
    Controllers_HumanAIController__BeforeFixedUpdate(__this,method_00);
    Controllers_HumanAIController__FixedUpdateTargetStatus(__this,method_00);
    if ((__this->fields)._aiEnabled == false) {
label_05ba7f13:
      fVar8 = (__this->fields)._idleTimeLeft;
    }
    else {
      fVar8 = (__this->fields)._idleTimeLeft;
      if (fVar8 <= 0.0) {
        if (((__this->fields)._moveToActive == false) || ((__this->fields)._moveToIgnoreEnemies == false)) {
          pCVar2 = (__this->fields).Callbacks;
          if (pCVar2 == (Controllers_HumanAICallback_o *)0x0) goto label_05ba800b;
          pSVar3 = (pCVar2->fields).PreAction;
          if (pSVar3 != (System_Action_o *)0x0) {
            method_00 = (MethodInfo *)(pSVar3->fields).method;
            (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
          }
        }
        goto label_05ba7f13;
      }
    }
    if (fVar8 <= 0.0) {
      pCVar4 = (__this->fields).AIState;
      bVar1 = (__this->fields)._aiEnabled;
      if (pCVar4 == (Controllers_HumanAIState_o *)0x0) {
        if (bVar1 == false) goto label_05ba7fc9;
        if (fVar8 <= 0.0) {
          if (((__this->fields)._moveToActive == false) || ((__this->fields)._moveToIgnoreEnemies == false)) {
            pCVar2 = (__this->fields).Callbacks;
            if (pCVar2 == (Controllers_HumanAICallback_o *)0x0) goto label_05ba800b;
            pSVar3 = (pCVar2->fields).OnIdle;
            if (pSVar3 != (System_Action_o *)0x0) {
              method_00 = (MethodInfo *)(pSVar3->fields).method;
              (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
            }
          }
          goto label_05ba7f76;
        }
      }
      else {
        if ((bVar1 == false) && ((__this->fields)._moveToActive == false)) goto label_05ba7fc9;
        method_00 = (pCVar4->klass->vtable)._7_Action.method;
        (*(pCVar4->klass->vtable)._7_Action.methodPtr)(pCVar4,method_00);
label_05ba7f76:
        if ((__this->fields)._aiEnabled == false) goto label_05ba7fc9;
        fVar8 = (__this->fields)._idleTimeLeft;
      }
      if ((fVar8 <= 0.0) &&
         (((__this->fields)._moveToActive == false || ((__this->fields)._moveToIgnoreEnemies == false)))) {
        pCVar2 = (__this->fields).Callbacks;
        if (pCVar2 == (Controllers_HumanAICallback_o *)0x0) {
label_05ba800b:
          ThrowNullReferenceException();
        }
        pSVar3 = (pCVar2->fields).PostAction;
        if (pSVar3 != (System_Action_o *)0x0) {
          method_00 = (MethodInfo *)(pSVar3->fields).method;
          (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
        }
      }
label_05ba7fc9:
      Controllers_HumanAIController__UpdateMovementRecovery(__this,method_00);
      return;
    }
    if ((__this->fields)._recoveryTimeLeft <= 0.0) goto label_05ba7df7;
    pCVar6 = (__this->fields)._human;
    if (pCVar6 == (Characters_Human_o *)0x0) goto label_05ba800b;
  }
  (pCVar6->fields).TargetAngle = (__this->fields)._movementHeading;
label_05ba7df7:
  (__this->fields)._lastMovementPosition.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
  (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
  pSVar5 = &(__this->fields)._lastMovementPosition;
  (pSVar5->fields).value.fields.y = 0.0;
  (pSVar5->fields).value.fields.z = 0.0;
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  return;
}


// Controllers.HumanAIController$$StopInput
// il2cpp: void Controllers_HumanAIController__StopInput (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8580

void Controllers_HumanAIController__StopInput(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseUseable_o *pCVar1;
  Characters_HumanSetup_o *pCVar2;
  System_Nullable_Vector3__o *pSVar3;
  bool bVar4;
  Characters_Human_o *pCVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754748c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754748c = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if ((__this->fields)._recoveryTimeLeft <= 0.0) {
    (__this->fields)._lastMovementPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
    (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
    pSVar3 = &(__this->fields)._lastMovementPosition;
    (pSVar3->fields).value.fields.y = 0.0;
    (pSVar3->fields).value.fields.z = 0.0;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_05ba86c6;
  }
  else {
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_05ba86c6;
    (pCVar5->fields).TargetAngle = (__this->fields)._movementHeading;
    (__this->fields)._lastMovementPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
    (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
    pSVar3 = &(__this->fields)._lastMovementPosition;
    (pSVar3->fields).value.fields.y = 0.0;
    (pSVar3->fields).value.fields.z = 0.0;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
  }
  (pCVar5->fields).HasDirection = false;
  (pCVar5->fields).TargetMagnitude = 0.0;
  (__this->fields)._movingLeft = 0.0;
  (__this->fields)._usingGas = false;
  pCVar1 = (pCVar5->fields).Weapon;
  if (pCVar1 != (Characters_BaseUseable_o *)0x0) {
    (*(pCVar1->klass->vtable)._12_SetInput.methodPtr)
              (pCVar1,false,(pCVar1->klass->vtable)._12_SetInput.method);
    pCVar5 = (__this->fields)._human;
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_05ba86c6;
  }
  pCVar2 = (pCVar5->fields).Setup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar5 = (__this->fields)._human;
    if ((pCVar5 == (Characters_Human_o *)0x0) ||
       (pCVar2 = (pCVar5->fields).Setup, pCVar2 == (Characters_HumanSetup_o *)0x0)) {
label_05ba86c6:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = Characters_HumanSetup__get_HasODM(pCVar2,(MethodInfo *)0x0);
    if (bVar4) {
      (__this->fields)._hookingLeft = false;
      (__this->fields)._hookingRight = false;
      Controllers_HumanAIController__UpdateHookInput(__this,method_00);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$CanMove
// il2cpp: bool Controllers_HumanAIController__CanMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba86e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba873a: xor ebx, ebx
// asm:   0x5ba876d: jmp 0x5ba875a
// asm:   0x5ba884b: jmp 0x5ba875a

bool Controllers_HumanAIController__CanMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Characters_Human_o *pCVar4;
  Characters_BaseUseable_o *pCVar5;
  Characters_BaseUseable_c *pCVar6;
  Characters_AnimationHandler_o *pCVar7;
  bool bVar8;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754748d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&"jump");
    il2cpp_codegen_initialize_runtime_metadata(&"dash");
    Il2CppMethodInitialized_0754748d = '\x01';
    in_RDX = extraout_RDX;
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) {
label_05ba8850:
    ThrowNullReferenceException();
  }
  if ((pCVar4->fields).Dead != false) {
    return false;
  }
  iVar3 = (pCVar4->fields)._state;
  if (iVar3 == 0xf) {
    return false;
  }
  if ((pCVar4->fields).MountState == 1) {
    return true;
  }
  if ((pCVar4->fields).Grounded == false) {
    if (iVar3 != 8) {
      if (iVar3 == 9) {
        pCVar5 = (pCVar4->fields).Special;
        if (pCVar5 == (Characters_BaseUseable_o *)0x0) {
          return false;
        }
        pCVar6 = pCVar5->klass;
        bVar1 = (pCVar6->_2).typeHierarchyDepth;
        in_RDX = (MethodInfo *)(ulong)bVar1;
        bVar2 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)) {
          bVar2 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
          if (bVar1 < bVar2) {
            return false;
          }
          if ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_StockSpecial)
          {
            return false;
          }
        }
      }
      pCVar7 = (pCVar4->fields).Animation;
      if (pCVar7 != (Characters_AnimationHandler_o *)0x0) {
        bVar8 = Characters_AnimationHandler__IsPlaying(pCVar7,"dash",in_RDX);
        if (bVar8) {
          return false;
        }
        pCVar4 = (__this->fields)._human;
        if ((pCVar4 != (Characters_Human_o *)0x0) &&
           (pCVar7 = (pCVar4->fields).Animation, pCVar7 != (Characters_AnimationHandler_o *)0x0)) {
          bVar8 = Characters_AnimationHandler__IsPlaying(pCVar7,"jump",method_00);
          if (bVar8) {
            return false;
          }
          pCVar4 = (__this->fields)._human;
          if (pCVar4 != (Characters_Human_o *)0x0) {
            bVar8 = Characters_Human__IsFiringThunderspear(pCVar4,(MethodInfo *)0x0);
            if (bVar8) {
              return false;
            }
            return true;
          }
        }
      }
      goto label_05ba8850;
    }
  }
  else if (iVar3 == 0) {
    return true;
  }
  return false;
}


// Controllers.HumanAIController$$IsSpin3Special
// il2cpp: bool Controllers_HumanAIController__IsSpin3Special (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8890

bool Controllers_HumanAIController__IsSpin3Special(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  
  if (Il2CppMethodInitialized_0754748e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
    Il2CppMethodInitialized_0754748e = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pCVar2->fields)._state == 9) &&
     (pCVar3 = (pCVar2->fields).Special, pCVar3 != (Characters_BaseUseable_o *)0x0)) {
    pCVar4 = pCVar3->klass;
    bVar1 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
    if (bVar1 <= (pCVar4->_2).typeHierarchyDepth) {
      return (pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Spin3Special;
    }
  }
  return false;
}


// Controllers.HumanAIController$$MovingLeft
// il2cpp: bool Controllers_HumanAIController__MovingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8910

bool Controllers_HumanAIController__MovingLeft(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  
  pfVar1 = &(__this->fields)._movingLeft;
  return *pfVar1 <= 0.0 && *pfVar1 != 0.0;
}


// Controllers.HumanAIController$$MovingRight
// il2cpp: bool Controllers_HumanAIController__MovingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8920

bool Controllers_HumanAIController__MovingRight(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return 0.0 < (__this->fields)._movingLeft;
}


// Controllers.HumanAIController$$UsingGas
// il2cpp: bool Controllers_HumanAIController__UsingGas (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8940

bool Controllers_HumanAIController__UsingGas(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._usingGas;
}


// Controllers.HumanAIController$$HookingLeft
// il2cpp: bool Controllers_HumanAIController__HookingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8950

bool Controllers_HumanAIController__HookingLeft(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._hookingLeft;
}


// Controllers.HumanAIController$$HookingRight
// il2cpp: bool Controllers_HumanAIController__HookingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8960

bool Controllers_HumanAIController__HookingRight(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._hookingRight;
}


// Controllers.HumanAIController$$HookingBoth
// il2cpp: bool Controllers_HumanAIController__HookingBoth (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8970

bool Controllers_HumanAIController__HookingBoth(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return false;
}


// Controllers.HumanAIController$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__GetAimPoint (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8980

UnityEngine_Vector3_o
Controllers_HumanAIController__GetAimPoint(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).AimPoint.fields;
}


// Controllers.HumanAIController$$Move
// il2cpp: void Controllers_HumanAIController__Move (Controllers_HumanAIController_o* __this, System_Nullable_Vector3__o direction, const MethodInfo* method);
// 0x5ba89a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba8b15: jmp 0x5ba8cad
// asm:   0x5ba8b89: jmp 0x5ba8d03
// asm:   0x5ba8c5d: xorps xmm0, xmm0
// asm:   0x5ba8c60: ucomiss xmm2, xmm0

void Controllers_HumanAIController__Move
               (Controllers_HumanAIController_o *__this,System_Nullable_Vector3__o direction,
               MethodInfo *method)

{
  uint32_t uVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_Nullable_Vector3__o *pSVar3;
  bool bVar4;
  Characters_Human_o *pCVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_44;
  float fStack_34;
  
  method_00 = direction.fields._0_8_;
  fStack_34 = direction.fields.value.fields.x;
  if (Il2CppMethodInitialized_0754748f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_0754748f = '\x01';
  }
  (__this->fields)._idleTimeLeft = 0.0;
  bVar4 = Controllers_HumanAIController__CanMove(__this,method_00);
  if (!bVar4) {
    return;
  }
  if (direction.fields.hasValue == false) {
    if (0.0 < (__this->fields)._recoveryTimeLeft) {
      pCVar5 = (__this->fields)._human;
      if (pCVar5 == (Characters_Human_o *)0x0) goto label_05ba8d03;
      (pCVar5->fields).TargetAngle = (__this->fields)._movementHeading;
    }
    (__this->fields)._lastMovementPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
    (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
    pSVar3 = &(__this->fields)._lastMovementPosition;
    (pSVar3->fields).value.fields.y = 0.0;
    (pSVar3->fields).value.fields.z = 0.0;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    pCVar2 = (__this->fields)._character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05ba8d03;
    (pCVar2->fields).HasDirection = false;
    pCVar5 = (__this->fields)._human;
    fVar6 = 0.0;
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_05ba8d03;
    goto label_05ba8ce0;
  }
  fStack_44 = direction.fields.value.fields.z;
  (__this->fields)._movingLeft =
       (__this->fields).AimDirection.fields.x * fStack_44 - (__this->fields).AimDirection.fields.z * fStack_34
  ;
  fVar6 = Controllers_BaseAIController__GetTargetAngle
                    ((Controllers_BaseAIController_o *)__this,direction.fields.value.fields,(MethodInfo *)0x0)
  ;
  (__this->fields)._movementHeading = fVar6;
  pCVar2 = (__this->fields)._character;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05ba8d03;
  (pCVar2->fields).TargetAngle = fVar6;
  (pCVar2->fields).HasDirection = true;
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
  fVar8 = fStack_44 * fStack_44 + fStack_34 * fStack_34 + 0.0;
  if (fVar8 < 0.0) {
    fVar6 = sqrtf(fVar8);
    if (0.95 < fVar6) goto label_05ba8bab;
label_05ba8ad8:
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05ba8c1b;
label_05ba8af5:
      if (0.0 <= fVar8) goto label_05ba8b01;
label_05ba8c30:
      fVar7 = sqrtf(fVar8);
    }
    else {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05ba8af5;
label_05ba8c1b:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (fVar8 < 0.0) goto label_05ba8c30;
label_05ba8b01:
      fVar7 = SQRT(fVar8);
    }
    fVar6 = 0.0;
    if (0.25 <= fVar7) {
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      if (fVar8 < 0.0) {
        fVar6 = sqrtf(fVar8);
      }
      else {
        fVar6 = SQRT(fVar8);
      }
    }
  }
  else {
    if (SQRT(fVar8) <= 0.95) goto label_05ba8ad8;
label_05ba8bab:
    fVar6 = 1.0;
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) {
label_05ba8d03:
    ThrowNullReferenceException();
  }
  if (((((pCVar5->fields).IsWalk == false) || ((pCVar5->fields).MountState != 0)) ||
      ((pCVar5->fields)._state != 0)) || ((pCVar5->fields).Grounded == false)) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = 0.25;
  }
  fVar6 = fVar6 * fVar8;
label_05ba8ce0:
  (pCVar5->fields).TargetMagnitude = fVar6;
  return;
}


// Controllers.HumanAIController$$GetMovementScale
// il2cpp: float Controllers_HumanAIController__GetMovementScale (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8d10

float Controllers_HumanAIController__GetMovementScale
                (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((((pCVar1->fields).IsWalk == false) || ((pCVar1->fields).MountState != 0)) ||
      ((pCVar1->fields)._state != 0)) || ((pCVar1->fields).Grounded == false)) {
    return 1.0;
  }
  return 0.25;
}


// Controllers.HumanAIController$$ResetMovementRecovery
// il2cpp: void Controllers_HumanAIController__ResetMovementRecovery (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8010

void Controllers_HumanAIController__ResetMovementRecovery
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Nullable_Vector3__o *pSVar2;
  
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
  }
  (__this->fields)._lastMovementPosition.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
  (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
  pSVar2 = &(__this->fields)._lastMovementPosition;
  (pSVar2->fields).value.fields.y = 0.0;
  (pSVar2->fields).value.fields.z = 0.0;
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  return;
}


// Controllers.HumanAIController$$UpdateMovementRecovery
// il2cpp: void Controllers_HumanAIController__UpdateMovementRecovery (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8060
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba837b: cmpnltss xmm2, dword ptr [rip - 0x4be67a4]
// asm:   0x5ba8384: andps xmm2, xmm1
// asm:   0x5ba8387: movss dword ptr [r14 + 0xd8], xmm2
// asm:   0x5ba8390: jmp 0x5ba8149
// asm:   0x5ba84b4: mov dword ptr [rbx + 0x128], 0
// asm:   0x5ba84be: jmp 0x5ba8149
// asm:   0x5ba84d3: movss xmm0, dword ptr [rbx + 0x114]
// asm:   0x5ba84db: add rbx, 0x118
// asm:   0x5ba84e2: movss dword ptr [rax + 0xd8], xmm0
// asm:   0x5ba84ea: xorps xmm0, xmm0
// asm:   0x5ba84ed: movups xmmword ptr [rbx], xmm0
// asm:   0x5ba84f0: mov qword ptr [rbx + 0x10], 0
// asm:   0x5ba84f8: jmp 0x5ba8149

void Controllers_HumanAIController__UpdateMovementRecovery
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Characters_AnimationHandler_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Nullable_Vector3__o *pSVar6;
  bool bVar7;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  uint uVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar10 [12];
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  System_Nullable_Vector3__Fields SStack_78;
  System_Nullable_Vector3__Fields SStack_68;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_07547490 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    Il2CppMethodInitialized_07547490 = '\x01';
    in_RDX = extraout_RDX;
  }
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) goto label_05ba8577;
  if (((__this->fields)._usePathfinding == false) &&
     ((fVar14 = (pCVar2->fields).RunSpeed * (pCVar1->fields).TargetMagnitude,
      (__this->fields)._aiEnabled != false || ((__this->fields)._moveToActive != false)))) {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    if ((((__this->fields)._idleTimeLeft <= 0.0) &&
        ((((pCVar1->fields).Dead == false && ((pCVar1->fields).HasDirection != false)) &&
         ((pCVar1->fields).Grounded != false)))) &&
       ((((pCVar1->fields)._state == 0 && (0.0 < fVar14)) && ((pCVar1->fields).MountState == 0)))) {
      pCVar3 = (pCVar1->fields).Animation;
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        in_RDX = extraout_RDX_00;
      }
      if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_05ba8577;
      bVar7 = Characters_AnimationHandler__IsPlaying
                        (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->Jump,in_RDX);
      if (!bVar7) {
        pCVar1 = (__this->fields)._human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_05ba8577;
        pCVar3 = (pCVar1->fields).Animation;
        method_00 = extraout_RDX_01;
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          method_00 = extraout_RDX_02;
        }
        if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_05ba8577;
        bVar7 = Characters_AnimationHandler__IsPlaying
                          (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->HorseMount,method_00);
        if (!bVar7) {
          pCVar1 = (__this->fields)._human;
          if (((pCVar1 != (Characters_Human_o *)0x0) &&
              (pUVar4 = (pCVar1->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
             (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
            UVar16 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
            fStack_28 = UVar16.fields.z;
            SStack_68.hasValue = (__this->fields)._lastMovementPosition.fields.hasValue;
            SStack_68._1_3_ = *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1;
            SStack_68.value.fields.x = (__this->fields)._lastMovementPosition.fields.value.fields.x;
            pSVar6 = &(__this->fields)._lastMovementPosition;
            SStack_68.value.fields.y = (pSVar6->fields).value.fields.y;
            SStack_68.value.fields.z = (pSVar6->fields).value.fields.z;
            SStack_78.hasValue = false;
            SStack_78._1_3_ = 0;
            SStack_78.value.fields.x = 0.0;
            SStack_78.value.fields.y = 0.0;
            SStack_78.value.fields.z = 0.0;
            auStack_38._8_4_ = extraout_XMM0_Dc;
            auStack_38._0_8_ = UVar16.fields._0_8_;
            auStack_38._12_4_ = extraout_XMM0_Dd;
            uStack_24 = uVar11;
            uStack_20 = uVar12;
            uStack_1c = uVar13;
            System_Nullable_Vector3____ctor
                      ((System_Nullable_Vector3__o *)&SStack_78,UVar16,
                       (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
            (__this->fields)._lastMovementPosition.fields.hasValue = SStack_78.hasValue;
            *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = SStack_78._1_3_;
            (__this->fields)._lastMovementPosition.fields.value.fields.x = SStack_78.value.fields.x;
            pSVar6 = &(__this->fields)._lastMovementPosition;
            (pSVar6->fields).value.fields.y = SStack_78.value.fields.y;
            (pSVar6->fields).value.fields.z = SStack_78.value.fields.z;
            if (SStack_68.hasValue == false) {
              return;
            }
            fVar9 = (__this->fields)._recoveryTimeLeft;
            uVar11 = 0;
            uVar12 = 0;
            uVar13 = 0;
            if (fVar9 <= 0.0) {
              UVar16 = System_Nullable_Vector3___get_Value
                                 ((System_Nullable_Vector3__o *)&SStack_68,
                                  (MethodInfo_3CDCAC0 *)MethodInfo_System_Nullable_Vector3_get_Value);
              fStack_58 = UVar16.fields.z;
              auStack_48._8_4_ = extraout_XMM0_Dc_00;
              auStack_48._0_8_ = UVar16.fields._0_8_;
              auStack_48._12_4_ = extraout_XMM0_Dd_00;
              uStack_54 = uVar11;
              uStack_50 = uVar12;
              uStack_4c = uVar13;
              fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
              fVar9 = fVar14 * 0.5 * fVar9;
              if (fVar9 * fVar9 <=
                  ((float)auStack_38._0_4_ - (float)auStack_48._0_4_) *
                  ((float)auStack_38._0_4_ - (float)auStack_48._0_4_) + 0.0 +
                  (fStack_28 - fStack_58) * (fStack_28 - fStack_58)) {
label_05ba84b4:
                (__this->fields)._lowMovementSpeedTime = 0.0;
                return;
              }
              pCVar1 = (__this->fields)._human;
              if (((pCVar1 == (Characters_Human_o *)0x0) ||
                  (pUVar4 = (pCVar1->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
              goto label_05ba8577;
              UVar16 = UnityEngine_Transform__get_eulerAngles(pUVar5,(MethodInfo *)0x0);
              fVar9 = (__this->fields)._movementHeading - UVar16.fields.y;
              fVar14 = floorf(fVar9 / 360.0);
              fVar9 = fVar14 * -360.0 + fVar9;
              fVar14 = 360.0;
              if (fVar9 <= 360.0) {
                fVar14 = fVar9;
              }
              fVar14 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar14);
              if (45.0 < ABS((float)(~-(uint)(180.0 < fVar14) & (uint)fVar14 |
                                    (uint)(fVar14 + -360.0) & -(uint)(180.0 < fVar14)))) goto label_05ba84b4;
              fVar14 = (__this->fields)._lowMovementSpeedTime;
              fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
              fVar9 = fVar9 + fVar14;
              (__this->fields)._lowMovementSpeedTime = fVar9;
              if (fVar9 < 0.5) {
                return;
              }
              (__this->fields)._lowMovementSpeedTime = 0.0;
              (__this->fields)._recoveryTimeLeft = 2.0;
              fVar14 = UnityEngine_Random__get_value((MethodInfo *)0x0);
              (__this->fields)._recoveryTurnAngle = *(float *)(&g_data_0100abe8 + (ulong)(fVar14 < 0.5) * 4);
              fVar9 = (__this->fields)._recoveryTimeLeft;
            }
            fVar14 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            (__this->fields)._recoveryTimeLeft = fVar9 - fVar14;
            if (fVar9 - fVar14 <= 0.0) {
              pCVar1 = (__this->fields)._human;
              if (pCVar1 != (Characters_Human_o *)0x0) {
                (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
                (__this->fields)._lastMovementPosition.fields.hasValue = false;
                *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
                (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
                pSVar6 = &(__this->fields)._lastMovementPosition;
                (pSVar6->fields).value.fields.y = 0.0;
                (pSVar6->fields).value.fields.z = 0.0;
                (__this->fields)._lowMovementSpeedTime = 0.0;
                (__this->fields)._recoveryTimeLeft = 0.0;
                return;
              }
            }
            else {
              fVar14 = (__this->fields)._recoveryTurnAngle;
              fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
              fVar9 = fVar9 * 10.0;
              fVar15 = 0.0 - fVar14;
              uVar8 = -(uint)(0.0 <= fVar15);
              fVar14 = (float)(-(uint)(fVar9 < ABS(fVar15)) &
                              (uint)((float)(~uVar8 & (uint)-fVar9 | uVar8 & (uint)fVar9) + fVar14));
              (__this->fields)._recoveryTurnAngle = fVar14;
              pCVar1 = (__this->fields)._human;
              if (pCVar1 != (Characters_Human_o *)0x0) {
                fVar14 = fVar14 + (__this->fields)._movementHeading;
                fVar9 = floorf(fVar14 / 360.0);
                auVar10 = ZEXT812(0x43b40000);
                fVar14 = fVar14 - fVar9 * auVar10._0_4_;
                if (fVar14 <= auVar10._0_4_) {
                  auVar10._4_8_ = auVar10._4_8_;
                  auVar10._0_4_ = fVar14;
                }
                (pCVar1->fields).TargetAngle = (float)(-(uint)(0.0 <= fVar14) & auVar10._0_4_);
                return;
              }
            }
          }
          goto label_05ba8577;
        }
      }
    }
  }
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
label_05ba8577:
      ThrowNullReferenceException();
    }
    (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
  }
  (__this->fields)._lastMovementPosition.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
  (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
  pSVar6 = &(__this->fields)._lastMovementPosition;
  (pSVar6->fields).value.fields.y = 0.0;
  (pSVar6->fields).value.fields.z = 0.0;
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  return;
}


// Controllers.HumanAIController$$AimAt
// il2cpp: void Controllers_HumanAIController__AimAt (Controllers_HumanAIController_o* __this, System_Nullable_Vector3__o position, const MethodInfo* method);
// 0x5ba8d60

void Controllers_HumanAIController__AimAt
               (Controllers_HumanAIController_o *__this,System_Nullable_Vector3__o position,MethodInfo *method
               )

{
  Characters_Human_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_Transform_o *__this_01;
  float fVar2;
  undefined8 uVar3;
  UnityEngine_Vector3_o UVar4;
  float fStack_34;
  float local_30;
  
  fStack_34 = position.fields.value.fields.x;
  local_30 = position.fields.value.fields.y;
  if (Il2CppMethodInitialized_07547491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07547491 = '\x01';
  }
  if (position.fields.hasValue == false) {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3._0_4_ = (pUVar1->zeroVector).fields.x;
    uVar3._4_4_ = (pUVar1->zeroVector).fields.y;
    fVar2 = (pUVar1->zeroVector).fields.z;
label_05ba8e3a:
    (__this->fields).AimDirection.fields.x = (float)(int)uVar3;
    (__this->fields).AimDirection.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    (__this->fields).AimDirection.fields.z = fVar2;
    return;
  }
  (__this->fields).AimPoint.fields.x = (float)position.fields.value.fields.x;
  (__this->fields).AimPoint.fields.y = (float)position.fields.value.fields.y;
  (__this->fields).AimPoint.fields.z = position.fields.value.fields.z;
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar4 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      uVar3 = CONCAT44(local_30 - UVar4.fields.y,fStack_34 - UVar4.fields.x);
      fVar2 = position.fields.value.fields.z - UVar4.fields.z;
      goto label_05ba8e3a;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Jump
// il2cpp: void Controllers_HumanAIController__Jump (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba8e60

void Controllers_HumanAIController__Jump(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Human_o *pCVar2;
  Characters_Horse_o *__this_00;
  bool bVar3;
  
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
label_05ba8ec3:
    ThrowNullReferenceException();
  }
  if (((pCVar2->fields).Dead == false) && ((pCVar2->fields)._state != 0xf)) {
    iVar1 = (pCVar2->fields).MountState;
    if (iVar1 == 1) {
      __this_00 = (pCVar2->fields).Horse;
      if (__this_00 != (Characters_Horse_o *)0x0) {
        Characters_Horse__Jump(__this_00,(MethodInfo *)0x0);
        return;
      }
      goto label_05ba8ec3;
    }
    if (iVar1 == 0) {
      bVar3 = Characters_Human__CanJump(pCVar2,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__this->fields)._human;
        if (pCVar2 != (Characters_Human_o *)0x0) {
          Characters_Human__Jump(pCVar2,(MethodInfo *)0x0);
          return;
        }
        goto label_05ba8ec3;
      }
    }
  }
  return;
}


// Controllers.HumanAIController$$HorseMount
// il2cpp: void Controllers_HumanAIController__HorseMount (Controllers_HumanAIController_o* __this, bool mount, const MethodInfo* method);
// 0x5ba8ed0

void Controllers_HumanAIController__HorseMount
               (Controllers_HumanAIController_o *__this,bool mount,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Characters_Horse_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar7;
  System_Object_array *parameters;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float fStack_28;
  
  if (Il2CppMethodInitialized_07547492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"UncarryRPC");
    Il2CppMethodInitialized_07547492 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_05ba90fd;
  if (((pCVar3->fields).Dead != false) || (iVar1 = (pCVar3->fields)._state, iVar1 == 0xf)) {
    return;
  }
  iVar2 = (pCVar3->fields).MountState;
  if ((iVar2 != 0) || (!mount)) {
    if (iVar2 != 1) {
      return;
    }
    if (mount) {
      return;
    }
    if (iVar1 == 0) {
      Characters_Human__Unmount(pCVar3,false,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  bVar7 = Characters_Human__CanJump(pCVar3,(MethodInfo *)0x0);
  if (bVar7) {
    pCVar3 = (__this->fields)._human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto label_05ba90fd;
    pCVar4 = (pCVar3->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pCVar3 = (__this->fields)._human;
      if (pCVar3 == (Characters_Human_o *)0x0) goto label_05ba90fd;
      if ((pCVar3->fields).MountState == 0) {
        pCVar4 = (pCVar3->fields).Horse;
        if (((pCVar4 == (Characters_Horse_o *)0x0) ||
            (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05ba90fd;
        UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._human;
        if (((pCVar3 == (Characters_Human_o *)0x0) ||
            (pUVar5 = (pCVar3->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05ba90fd;
        UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        fStack_28 = UVar9.fields.x;
        fVar8 = (float)il2cpp_runtime_helper_05956b50(fStack_28,UVar9.fields.z,UVar10.fields.x,UVar10.fields.z,0);
        if (fVar8 < 15.0) {
          pCVar3 = (__this->fields)._human;
          if (pCVar3 == (Characters_Human_o *)0x0) goto label_05ba90fd;
          if ((pCVar3->fields).HasDirection == false) {
            Characters_Human__MountHorse(pCVar3,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if ((pCVar3->fields).CarryState != 1) {
      return;
    }
    pUVar5 = (pCVar3->fields).Cache;
    if (pUVar5 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (pUVar5->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05ba90fd:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Dodge
// il2cpp: void Controllers_HumanAIController__Dodge (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba9110

void Controllers_HumanAIController__Dodge(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  float targetAngle;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05ba9169:
    ThrowNullReferenceException();
  }
  if (((pCVar1->fields).Dead == false) && ((pCVar1->fields)._state != 0xf)) {
    bVar2 = Characters_Human__CanJump(pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields)._human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        targetAngle = (pCVar1->fields).TargetAngle;
        if ((pCVar1->fields).HasDirection != false) {
          targetAngle = targetAngle + 180.0;
        }
        Characters_Human__Dodge(pCVar1,targetAngle,(MethodInfo *)0x0);
        return;
      }
      goto label_05ba9169;
    }
  }
  return;
}


// Controllers.HumanAIController$$Reload
// il2cpp: void Controllers_HumanAIController__Reload (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba9170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba91a1: jmp 0x5ba91b2

void Controllers_HumanAIController__Reload(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((__this_00->fields).Dead == false) && (iVar1 = (__this_00->fields)._state, iVar1 != 0xf)) {
    iVar2 = (__this_00->fields).MountState;
    if (iVar2 == 1) {
      if ((iVar1 == 0) && ((__this_00->fields).IsAttackableState != false)) goto label_05ba91b2;
    }
    else if ((iVar2 == 0) && (iVar1 == 0)) {
label_05ba91b2:
      Characters_Human__Reload(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$UseGas
// il2cpp: void Controllers_HumanAIController__UseGas (Controllers_HumanAIController_o* __this, bool useGas, const MethodInfo* method);
// 0x5ba91c0

void Controllers_HumanAIController__UseGas
               (Controllers_HumanAIController_o *__this,bool useGas,MethodInfo *method)

{
  (__this->fields)._usingGas = useGas;
  return;
}


// Controllers.HumanAIController$$HorseWalk
// il2cpp: void Controllers_HumanAIController__HorseWalk (Controllers_HumanAIController_o* __this, bool isWalk, const MethodInfo* method);
// 0x5ba91d0

void Controllers_HumanAIController__HorseWalk
               (Controllers_HumanAIController_o *__this,bool isWalk,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).IsWalk = isWalk;
  return;
}


// Controllers.HumanAIController$$Dash
// il2cpp: void Controllers_HumanAIController__Dash (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5ba91f0

void Controllers_HumanAIController__Dash
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  int iVar1;
  Characters_Human_o *__this_00;
  float targetAngle;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((((((__this_00->fields).Grounded == false) && (iVar1 = (__this_00->fields)._state, iVar1 != 3)) &&
        ((__this_00->fields).MountState == 0)) && ((iVar1 != 7 && ((__this_00->fields).CarryState != 1)))) &&
      ((iVar1 != 0xf && ((iVar1 != 8 && (iVar1 != 10)))))) && ((__this_00->fields).Dead == false)) {
    targetAngle = Controllers_BaseAIController__GetTargetAngle
                            ((Controllers_BaseAIController_o *)__this,direction,(MethodInfo *)0x0);
    Characters_Human__DashVertical
              (__this_00,targetAngle,direction,(System_Nullable_Vector3__o)ZEXT416(0),(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.HumanAIController$$Reel
// il2cpp: void Controllers_HumanAIController__Reel (Controllers_HumanAIController_o* __this, int32_t reelAxis, const MethodInfo* method);
// 0x5ba9280

void Controllers_HumanAIController__Reel
               (Controllers_HumanAIController_o *__this,int32_t reelAxis,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  
  if (reelAxis < 0) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      (pCVar1->fields).ReelInAxis = -1.0;
      (pCVar1->fields).ReelOutAxis = 0.0;
      return;
    }
label_05ba92d0:
    ThrowNullReferenceException();
  }
  pCVar1 = (__this->fields)._human;
  if (reelAxis == 0) {
    fVar2 = 0.0;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05ba92d0;
  }
  else {
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05ba92d0;
    fVar2 = 1.0;
  }
  (pCVar1->fields).ReelOutAxis = fVar2;
  return;
}


// Controllers.HumanAIController$$LaunchHookLeft
// il2cpp: void Controllers_HumanAIController__LaunchHookLeft (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x5ba92e0

void Controllers_HumanAIController__LaunchHookLeft
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o aimPoint,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Characters_Human_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar3;
  bool bVar4;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  float fVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o UVar6;
  System_Nullable_Vector3__Fields SStack_48;
  undefined1 auStack_38 [24];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  UVar6.fields.z = aimPoint.fields.z;
  fVar5 = aimPoint.fields.x;
  fVar1 = aimPoint.fields.y;
  if (g_data_07547493 == '\0') {
    auStack_38._8_4_ = in_XMM0_Dc;
    auStack_38._0_8_ = aimPoint.fields._0_8_;
    auStack_38._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    g_data_07547493 = '\x01';
    fVar5 = (float)auStack_38._0_4_;
    fVar1 = (float)auStack_38._4_4_;
  }
  (__this->fields)._hookingLeft = true;
  SStack_48.hasValue = false;
  SStack_48._1_3_ = 0;
  SStack_48.value.fields.x = 0.0;
  SStack_48.value.fields.y = 0.0;
  SStack_48.value.fields.z = 0.0;
  UVar6.fields.y = fVar1;
  UVar6.fields.x = fVar5;
  method_00 = MethodInfo_System_Nullable_Vector3_ctor;
  System_Nullable_Vector3____ctor
            ((System_Nullable_Vector3__o *)&SStack_48,UVar6,
             (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
  bVar4 = SStack_48.hasValue;
  fVar5 = SStack_48.value.fields.z;
  fStack_20 = SStack_48.value.fields.x;
  fStack_1c = SStack_48.value.fields.y;
  fStack_18 = fVar5;
  if (Il2CppMethodInitialized_07547491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07547491 = '\x01';
  }
  if (bVar4 == false) {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar3->zeroVector).fields.x;
    fVar2 = (pUVar3->zeroVector).fields.y;
    fVar5 = (pUVar3->zeroVector).fields.z;
label_05ba9419:
    (__this->fields).AimDirection.fields.x = fVar1;
    (__this->fields).AimDirection.fields.y = fVar2;
    (__this->fields).AimDirection.fields.z = fVar5;
    Controllers_HumanAIController__UpdateHookInput(__this,method_00);
    return;
  }
  auStack_38._8_8_ = 0;
  auStack_38._0_8_ = CONCAT44(fStack_1c,fStack_20);
  (__this->fields).AimPoint.fields.x = fStack_20;
  (__this->fields).AimPoint.fields.y = fStack_1c;
  (__this->fields).AimPoint.fields.z = fVar5;
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UVar6 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      fVar1 = (float)auStack_38._0_4_ - UVar6.fields.x;
      fVar2 = (float)auStack_38._4_4_ - UVar6.fields.y;
      fVar5 = fVar5 - UVar6.fields.z;
      goto label_05ba9419;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$ReleaseHookLeft
// il2cpp: void Controllers_HumanAIController__ReleaseHookLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba97c0

void Controllers_HumanAIController__ReleaseHookLeft
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._hookingLeft = false;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$LaunchHookRight
// il2cpp: void Controllers_HumanAIController__LaunchHookRight (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x5ba97d0

void Controllers_HumanAIController__LaunchHookRight
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o aimPoint,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Characters_Human_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar3;
  bool bVar4;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  float fVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o UVar6;
  System_Nullable_Vector3__Fields local_48;
  undefined1 local_38 [24];
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  UVar6.fields.z = aimPoint.fields.z;
  fVar5 = aimPoint.fields.x;
  fVar1 = aimPoint.fields.y;
  if (g_data_07547494 == '\0') {
    local_38._8_4_ = in_XMM0_Dc;
    local_38._0_8_ = aimPoint.fields._0_8_;
    local_38._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    g_data_07547494 = '\x01';
    fVar5 = (float)local_38._0_4_;
    fVar1 = (float)local_38._4_4_;
  }
  (__this->fields)._hookingRight = true;
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value.fields.x = 0.0;
  local_48.value.fields.y = 0.0;
  local_48.value.fields.z = 0.0;
  UVar6.fields.y = fVar1;
  UVar6.fields.x = fVar5;
  method_00 = MethodInfo_System_Nullable_Vector3_ctor;
  System_Nullable_Vector3____ctor
            ((System_Nullable_Vector3__o *)&local_48,UVar6,
             (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
  bVar4 = local_48.hasValue;
  fVar5 = local_48.value.fields.z;
  local_20 = local_48.value.fields.x;
  fStack_1c = local_48.value.fields.y;
  fStack_18 = fVar5;
  if (Il2CppMethodInitialized_07547491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07547491 = '\x01';
  }
  if (bVar4 == false) {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar3->zeroVector).fields.x;
    fVar2 = (pUVar3->zeroVector).fields.y;
    fVar5 = (pUVar3->zeroVector).fields.z;
label_05ba9909:
    (__this->fields).AimDirection.fields.x = fVar1;
    (__this->fields).AimDirection.fields.y = fVar2;
    (__this->fields).AimDirection.fields.z = fVar5;
    Controllers_HumanAIController__UpdateHookInput(__this,method_00);
    return;
  }
  local_38._8_8_ = 0;
  local_38._0_8_ = CONCAT44(fStack_1c,local_20);
  (__this->fields).AimPoint.fields.x = local_20;
  (__this->fields).AimPoint.fields.y = fStack_1c;
  (__this->fields).AimPoint.fields.z = fVar5;
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UVar6 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      fVar1 = (float)local_38._0_4_ - UVar6.fields.x;
      fVar2 = (float)local_38._4_4_ - UVar6.fields.y;
      fVar5 = fVar5 - UVar6.fields.z;
      goto label_05ba9909;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$ReleaseHookRight
// il2cpp: void Controllers_HumanAIController__ReleaseHookRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba9930

void Controllers_HumanAIController__ReleaseHookRight
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._hookingRight = false;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$ReleaseHookAll
// il2cpp: void Controllers_HumanAIController__ReleaseHookAll (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba86d0

void Controllers_HumanAIController__ReleaseHookAll(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._hookingLeft = false;
  (__this->fields)._hookingRight = false;
  Controllers_HumanAIController__UpdateHookInput(__this,method);
  return;
}


// Controllers.HumanAIController$$UpdateHookInput
// il2cpp: void Controllers_HumanAIController__UpdateHookInput (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5ba9440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba96dc: jmp 0x5ba97b5

void Controllers_HumanAIController__UpdateHookInput
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_HumanSetup_o *__this_00;
  Characters_HookUseable_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  Characters_HookUseable_o *pCVar4;
  Characters_BaseUseable_o *pCVar5;
  Characters_BaseUseable_c *pCVar6;
  System_String_o *pSVar7;
  Photon_Pun_PhotonMessageInfo_o PVar8;
  bool bVar9;
  Characters_Human_o *pCVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  Photon_Pun_PhotonMessageInfo_Fields local_40;
  
  if (Il2CppMethodInitialized_07547495 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547495 = '\x01';
  }
  pCVar10 = (__this->fields)._human;
  if ((pCVar10 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar10->fields).Setup, __this_00 == (Characters_HumanSetup_o *)0x0)) goto label_05ba97b5;
  bVar9 = Characters_HumanSetup__get_HasODM(__this_00,(MethodInfo *)0x0);
  if (!bVar9) {
    return;
  }
  pCVar10 = (__this->fields)._human;
  if (pCVar10 == (Characters_Human_o *)0x0) goto label_05ba97b5;
  pCVar2 = (pCVar10->fields).HookLeft;
  if (pCVar2 == (Characters_HookUseable_o *)0x0) {
    return;
  }
  cVar13 = (__this->fields)._hookingLeft;
  cVar12 = (__this->fields)._hookingRight;
  bVar11 = 0;
  if (((pCVar10->fields)._state | 8U) != 0xf) {
    pCVar3 = (pCVar10->fields).Stats;
    if (pCVar3 == (Characters_HumanStats_o *)0x0) goto label_05ba97b5;
    if ((0.0 < (pCVar3->fields).CurrentGas) &&
       (((pCVar10->fields).MountState != 2 || ((pCVar10->fields).CanMountedAttack != false)))) {
      bVar11 = (pCVar10->fields).Dead ^ 1;
    }
  }
  bVar9 = Characters_HookUseable__HasHook(pCVar2,(MethodInfo *)0x0);
  if (!bVar9) {
    pCVar10 = (__this->fields)._human;
    if ((pCVar10 == (Characters_Human_o *)0x0) ||
       (pCVar2 = (pCVar10->fields).HookRight, pCVar2 == (Characters_HookUseable_o *)0x0)) goto label_05ba97b5;
    Characters_HookUseable__HasHook(pCVar2,(MethodInfo *)0x0);
  }
  pCVar10 = (__this->fields)._human;
  if (pCVar10 == (Characters_Human_o *)0x0) goto label_05ba97b5;
  if ((pCVar10->fields).CancelHookBothKey != false) {
    (pCVar10->fields).CancelHookBothKey = false;
  }
  if ((pCVar10->fields).CancelHookLeftKey != false) {
    (pCVar10->fields).CancelHookLeftKey = false;
    cVar13 = '\0';
  }
  if ((pCVar10->fields).CancelHookRightKey != false) {
    (pCVar10->fields).CancelHookRightKey = false;
    cVar12 = '\0';
  }
  pCVar2 = (pCVar10->fields).HookLeft;
  if (pCVar2 == (Characters_HookUseable_o *)0x0) goto label_05ba97b5;
  (pCVar2->fields).HookBoth = false;
  pCVar4 = (pCVar10->fields).HookRight;
  if (pCVar4 == (Characters_HookUseable_o *)0x0) goto label_05ba97b5;
  (pCVar4->fields).HookBoth = false;
  if (bVar11 == 0) {
label_05ba9633:
    bVar9 = false;
  }
  else {
    if (Il2CppMethodInitialized_0754748e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
      Il2CppMethodInitialized_0754748e = '\x01';
      pCVar10 = (__this->fields)._human;
      if (pCVar10 == (Characters_Human_o *)0x0) goto label_05ba97b5;
    }
    if (((pCVar10->fields)._state == 9) &&
       (pCVar5 = (pCVar10->fields).Special, pCVar5 != (Characters_BaseUseable_o *)0x0)) {
      pCVar6 = pCVar5->klass;
      bVar1 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar6->_2).typeHierarchyDepth) &&
         ((pCVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Spin3Special))
      goto label_05ba9633;
    }
    bVar9 = cVar13 != '\0';
  }
  (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)(pCVar2,bVar9,(pCVar2->klass->vtable)._12_SetInput.method);
  pCVar10 = (__this->fields)._human;
  if (pCVar10 == (Characters_Human_o *)0x0) goto label_05ba97b5;
  pCVar2 = (pCVar10->fields).HookRight;
  if (bVar11 == 0) {
label_05ba96e1:
    bVar9 = false;
  }
  else {
    if (Il2CppMethodInitialized_0754748e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
      Il2CppMethodInitialized_0754748e = '\x01';
      pCVar10 = (__this->fields)._human;
      if (pCVar10 == (Characters_Human_o *)0x0) goto label_05ba97b5;
    }
    if (((pCVar10->fields)._state == 9) &&
       (pCVar5 = (pCVar10->fields).Special, pCVar5 != (Characters_BaseUseable_o *)0x0)) {
      pCVar6 = pCVar5->klass;
      bVar11 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
      if ((bVar11 <= (pCVar6->_2).typeHierarchyDepth) &&
         ((pCVar6->_2).typeHierarchy[(ulong)bVar11 - 1] == (Il2CppClass *)TypeInfo_Characters_Spin3Special))
      goto label_05ba96e1;
    }
    bVar9 = cVar12 != '\0';
  }
  if (pCVar2 != (Characters_HookUseable_o *)0x0) {
    (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
              (pCVar2,bVar9,(pCVar2->klass->vtable)._12_SetInput.method);
    pCVar10 = (__this->fields)._human;
    if ((pCVar10 != (Characters_Human_o *)0x0) &&
       (pCVar3 = (pCVar10->fields).Stats, pCVar3 != (Characters_HumanStats_o *)0x0)) {
      if (((pCVar3->fields).CurrentGas <= 0.0) && (cVar12 != '\0' || cVar13 != '\0')) {
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->NoGas;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)&local_40,(MethodInfo *)0x0);
        PVar8.fields.Sender = local_40.Sender;
        PVar8.fields.timeInt = local_40.timeInt;
        PVar8.fields._4_4_ = local_40._4_4_;
        PVar8.fields.photonView = local_40.photonView;
        (*(pCVar10->klass->vtable)._86_PlaySoundRPC.methodPtr)
                  (pCVar10,pSVar7,PVar8,(pCVar10->klass->vtable)._86_PlaySoundRPC.method);
      }
      return;
    }
  }
label_05ba97b5:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Attack
// il2cpp: void Controllers_HumanAIController__Attack (Controllers_HumanAIController_o* __this, bool attackOn, const MethodInfo* method);
// 0x5ba9940

void Controllers_HumanAIController__Attack
               (Controllers_HumanAIController_o *__this,bool attackOn,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_HumanState__o *__this_00;
  Characters_BaseUseable_o *pCVar2;
  bool bVar3;
  Characters_Human_o *pCVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07547496 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_HumanState_Contains);
    Il2CppMethodInitialized_07547496 = '\x01';
  }
  if (((__this->fields)._moveToActive == false) ||
     (bVar5 = false, (__this->fields)._moveToIgnoreEnemies == false)) {
    bVar5 = (__this->fields)._idleTimeLeft <= 0.0;
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto label_05ba9aab;
  if ((pCVar4->fields).IsAttackableState == false) {
label_05ba99e2:
    (pCVar4->fields)._gunArmAim = false;
  }
  else {
    __this_00 = (__this->fields)._illegalWeaponStates;
    if (__this_00 == (System_Collections_Generic_HashSet_HumanState__o *)0x0) goto label_05ba9aab;
    bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_00,(pCVar4->fields)._state,
                       (MethodInfo_4FADAC0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Contains
                      );
    pCVar4 = (__this->fields)._human;
    if (bVar3) {
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_05ba9aab;
      goto label_05ba99e2;
    }
    if (pCVar4 == (Characters_Human_o *)0x0) goto label_05ba9aab;
    (pCVar4->fields)._gunArmAim = false;
    if ((pCVar4->fields).Dead == false) {
      pCVar2 = (pCVar4->fields).Weapon;
      if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
        (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                  (pCVar2,(bool)(bVar5 & attackOn),(pCVar2->klass->vtable)._12_SetInput.method);
        pCVar4 = (__this->fields)._human;
        if (pCVar4 == (Characters_Human_o *)0x0) goto label_05ba9aab;
        pCVar2 = (pCVar4->fields).Weapon;
        if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
          bVar1 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
          if (bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) {
            bVar3 = (pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                    (Il2CppClass *)TypeInfo_Characters_AHSSWeapon;
            if ((bVar3) && ((bool)(bVar5 & attackOn) == false)) {
              bVar3 = (pCVar2->fields).IsActive;
            }
            goto label_05ba9a85;
          }
        }
        bVar3 = false;
label_05ba9a85:
        (pCVar4->fields)._gunArmAim = bVar3;
        return;
      }
      goto label_05ba9aab;
    }
  }
  pCVar2 = (pCVar4->fields).Weapon;
  if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
    (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
              (pCVar2,false,(pCVar2->klass->vtable)._12_SetInput.method);
    return;
  }
label_05ba9aab:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$ActivateSpecial
// il2cpp: void Controllers_HumanAIController__ActivateSpecial (Controllers_HumanAIController_o* __this, bool activate, const MethodInfo* method);
// 0x5ba9ab0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba9c06: je 0x5ba9c2f
// asm:   0x5ba9c56: mov esi, ebp

void Controllers_HumanAIController__ActivateSpecial
               (Controllers_HumanAIController_o *__this,bool activate,MethodInfo *method)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  Characters_Human_o *pCVar6;
  Characters_BaseUseable_o *pCVar7;
  Characters_BaseUseable_c *pCVar8;
  Il2CppClass **ppIVar9;
  byte bVar10;
  byte bVar11;
  
  if (Il2CppMethodInitialized_07547497 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHoldAttackSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_EscapeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    Il2CppMethodInitialized_07547497 = '\x01';
  }
  pCVar6 = (__this->fields)._human;
  if (pCVar6 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar7 = (pCVar6->fields).Special;
  if (pCVar7 == (Characters_BaseUseable_o *)0x0) {
    return;
  }
  bVar1 = (pCVar6->fields).IsAttackableState;
  bVar10 = 0;
  if (bVar1 != false) {
    pCVar8 = pCVar7->klass;
    bVar10 = (pCVar8->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Characters_EscapeSpecial->_2).typeHierarchyDepth;
    if (((((bVar2 <= bVar10) &&
          ((pCVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_EscapeSpecial))
         || ((bVar2 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth, bVar2 <= bVar10 &&
             ((pCVar8->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)))) ||
        (bVar10 = 0, (pCVar6->fields)._state != 7)) &&
       ((bVar10 = 0, (pCVar6->fields).CarryState != 1 &&
        ((uVar4 = (pCVar6->fields)._state, 9 < uVar4 || (bVar10 = 0, (0x302U >> (uVar4 & 0x1f) & 1) == 0))))))
    {
      bVar10 = (pCVar6->fields).Dead ^ 1;
    }
  }
  pCVar8 = pCVar7->klass;
  bVar2 = (pCVar8->_2).typeHierarchyDepth;
  bVar11 = (TypeInfo_Characters_BaseHoldAttackSpecial->_2).typeHierarchyDepth;
  if (((bVar11 <= bVar2) &&
      (ppIVar9 = (pCVar8->_2).typeHierarchy,
      ppIVar9[(ulong)bVar11 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseHoldAttackSpecial)) &&
     (bVar1 != false)) {
    iVar5 = (pCVar6->fields)._state;
    bVar11 = 0;
    if (((iVar5 != 7) && (iVar5 != 8)) &&
       ((iVar5 != 1 ||
        ((bVar3 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth, bVar3 <= bVar2 &&
         (ppIVar9[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_StockSpecial)))))) {
      if ((pCVar6->fields).CarryState != 1) {
        bVar11 = (pCVar6->fields).Dead ^ 1;
      }
      goto label_05ba9c31;
    }
  }
  bVar11 = 0;
label_05ba9c31:
  (*(pCVar8->vtable)._12_SetInput.methodPtr)
            (pCVar7,(bVar10 != 0 || bVar11 != 0) && activate,(pCVar8->vtable)._12_SetInput.method);
  return;
}


// Controllers.HumanAIController$$GetChaseAngleGivenDirection
// il2cpp: float Controllers_HumanAIController__GetChaseAngleGivenDirection (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, bool useMoveAngle, const MethodInfo* method);
// 0x5ba9c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba9d1c: jmp 0x5ba9d35

float Controllers_HumanAIController__GetChaseAngleGivenDirection
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o direction,bool useMoveAngle,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Characters_Human_o *pCVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->zeroVector).fields.x;
  uVar2 = (pUVar3->zeroVector).fields.y;
  fVar7 = direction.fields.y - (float)uVar2;
  fVar5 = direction.fields.z - (pUVar3->zeroVector).fields.z;
  fVar6 = direction.fields.x - (float)uVar1;
  if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) {
    fVar5 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,direction,(MethodInfo *)0x0);
  }
  else {
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar5 = (pCVar4->fields).TargetAngle;
  }
  if (useMoveAngle) {
    fVar5 = fVar5 + (__this->fields)._moveAngle;
  }
  fVar5 = (float)(~-(uint)(360.0 < fVar5) & (uint)fVar5 | (uint)(fVar5 + -360.0) & -(uint)(360.0 < fVar5));
  return (float)(~-(uint)(fVar5 < 0.0) & (uint)fVar5 | (uint)(fVar5 + 360.0) & -(uint)(fVar5 < 0.0));
}


// Controllers.HumanAIController$$GetChaseAngle
// il2cpp: float Controllers_HumanAIController__GetChaseAngle (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, bool useMoveAngle, const MethodInfo* method);
// 0x5ba9d80
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba9dd6: mov qword ptr [rsp + 0x38], 0
// asm:   0x5ba9ddf: cmp byte ptr [rip + 0x1994943], 0
// asm:   0x5ba9de6: je 0x5ba9fec
// asm:   0x5ba9e7d: jmp 0x5ba9ec2
// asm:   0x5ba9f50: jmp 0x5ba9f69

float Controllers_HumanAIController__GetChaseAngle
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o position,bool useMoveAngle,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Characters_Human_o *pCVar6;
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
     (__this_00 = (pUVar4->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_05baa01a;
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
    if (auVar10._0_4_ <= 1e-05) goto label_05ba9e5a;
label_05ba9ea1:
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
    if (1e-05 < auVar9._0_4_) goto label_05ba9ea1;
label_05ba9e5a:
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
                       ((Controllers_BaseAIController_o *)__this,UVar19,(MethodInfo *)0x0);
  }
  else {
    pCVar6 = (__this->fields)._human;
    if (pCVar6 == (Characters_Human_o *)0x0) {
label_05baa01a:
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


// Controllers.HumanAIController$$MoveToPosition
// il2cpp: void Controllers_HumanAIController__MoveToPosition (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5baa020

void Controllers_HumanAIController__MoveToPosition(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Characters_Human_o *pCVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o direction;
  
  pCVar4 = (__this->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    (pCVar4->fields).HasDirection = true;
    if (((((pCVar4->fields).IsWalk == false) || ((pCVar4->fields).MountState != 0)) ||
        ((pCVar4->fields)._state != 0)) || ((pCVar4->fields).Grounded == false)) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = 0.25;
    }
    (pCVar4->fields).TargetMagnitude = fVar6;
    fVar6 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
    (__this->fields)._moveAngle = fVar6;
    pUVar1 = &(__this->fields)._targetPosition;
    if ((__this->fields)._usePathfinding == false) {
      fVar6 = Controllers_HumanAIController__GetChaseAngle
                        (__this,(UnityEngine_Vector3_o)pUVar1->fields,true,method_00);
    }
    else {
      direction = Controllers_BaseAIController__GetAgentNavDirection
                            ((Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o)pUVar1->fields,
                             (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar5->zeroVector).fields.x;
      uVar3 = (pUVar5->zeroVector).fields.y;
      fVar8 = direction.fields.y - (float)uVar3;
      fVar6 = direction.fields.z - (pUVar5->zeroVector).fields.z;
      fVar7 = direction.fields.x - (float)uVar2;
      if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
        fVar6 = Controllers_BaseAIController__GetTargetAngle
                          ((Controllers_BaseAIController_o *)__this,direction,(MethodInfo *)0x0);
      }
      else {
        pCVar4 = (__this->fields)._human;
        if (pCVar4 == (Characters_Human_o *)0x0) goto label_05baa1da;
        fVar6 = (pCVar4->fields).TargetAngle;
      }
      fVar6 = fVar6 + (__this->fields)._moveAngle;
      fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 | (uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6))
      ;
      fVar6 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
    }
    (__this->fields)._movementHeading = fVar6;
    pCVar4 = (__this->fields)._human;
    if (pCVar4 != (Characters_Human_o *)0x0) {
      (pCVar4->fields).TargetAngle = fVar6;
      return;
    }
  }
label_05baa1da:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$SwitchAIState
// il2cpp: void Controllers_HumanAIController__SwitchAIState (Controllers_HumanAIController_o* __this, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x5baa1e0

void Controllers_HumanAIController__SwitchAIState
               (Controllers_HumanAIController_o *__this,Controllers_HumanAIState_o *aiState,MethodInfo *method
               )

{
  Controllers_HumanAIState_o **targetAddress;
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Nullable_Vector3__o *pSVar3;
  Controllers_HumanAIState_o *pCVar4;
  
  if (Il2CppMethodInitialized_07547498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_MoveTo);
    Il2CppMethodInitialized_07547498 = '\x01';
  }
  if (aiState != (Controllers_HumanAIState_o *)0x0) {
    (__this->fields)._idleTimeLeft = 0.0;
    bVar1 = (TypeInfo_Controllers_HumanAIStates_MoveTo->_2).typeHierarchyDepth;
    if ((bVar1 <= (aiState->klass->_2).typeHierarchyDepth) &&
       ((aiState->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo)) goto label_05baa260;
  }
  (__this->fields)._moveToActive = false;
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
label_05baa260:
  pCVar4 = (__this->fields).AIState;
  if (pCVar4 != aiState) {
    if (0.0 < (__this->fields)._recoveryTimeLeft) {
      pCVar2 = (__this->fields)._human;
      if (pCVar2 == (Characters_Human_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pCVar2->fields).TargetAngle = (__this->fields)._movementHeading;
    }
    targetAddress = &(__this->fields).AIState;
    (__this->fields)._lastMovementPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
    (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
    pSVar3 = &(__this->fields)._lastMovementPosition;
    (pSVar3->fields).value.fields.y = 0.0;
    (pSVar3->fields).value.fields.z = 0.0;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    if (aiState != (Controllers_HumanAIState_o *)0x0) {
      (*(aiState->klass->vtable)._6_OnStateEntry.methodPtr)
                (aiState,(aiState->klass->vtable)._6_OnStateEntry.method);
      pCVar4 = *targetAddress;
    }
    *targetAddress = aiState;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if (pCVar4 != (Controllers_HumanAIState_o *)0x0) {
      (*(pCVar4->klass->vtable)._8_OnStateExit.methodPtr)
                (pCVar4,(pCVar4->klass->vtable)._8_OnStateExit.method);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$SetAIState
// il2cpp: void Controllers_HumanAIController__SetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x5ba7730

void Controllers_HumanAIController__SetAIState
               (Controllers_HumanAIController_o *__this,System_String_o *name,
               Controllers_HumanAIState_o *aiState,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_07547499 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
    Il2CppMethodInitialized_07547499 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)name,(Il2CppObject *)aiState,
             (MethodInfo_4AAD4C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
  return;
}


// Controllers.HumanAIController$$HasAIState
// il2cpp: bool Controllers_HumanAIController__HasAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ba76d0

bool Controllers_HumanAIController__HasAIState
               (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754749a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    Il2CppMethodInitialized_0754749a = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (__this_00,(Il2CppObject *)name,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
  return bVar1;
}


// Controllers.HumanAIController$$GetAIState
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIController__GetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5baa320

Controllers_HumanAIState_o *
Controllers_HumanAIController__GetAIState
          (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Controllers_HumanAIState_o *pCVar1;
  
  if (Il2CppMethodInitialized_0754749b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    Il2CppMethodInitialized_0754749b = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (__this_00,(Il2CppObject *)name,
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
  return pCVar1;
}


// Controllers.HumanAIController$$AssignHumanTarget
// il2cpp: void Controllers_HumanAIController__AssignHumanTarget (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* target, const MethodInfo* method);
// 0x5ba7340

void Controllers_HumanAIController__AssignHumanTarget
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *target,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Characters_ITargetable_c *pCVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Nullable_Vector3__o *pSVar5;
  float fVar6;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  long lVar9;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__Fields local_38;
  System_Nullable_Vector3__Fields local_28;
  
  if (Il2CppMethodInitialized_0754749c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_0754749c = '\x01';
  }
  Controllers_BaseAIController__AssignTarget
            ((Controllers_BaseAIController_o *)__this,target,0.0,(MethodInfo *)0x0);
  (__this->fields)._idleTimeLeft = 0.0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar6 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields).TargetVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields).TargetVelocity.fields.y = fVar6;
  (__this->fields).TargetVelocity.fields.z = fVar1;
  if (target == (Characters_ITargetable_o *)0x0) {
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value.fields.x = 0.0;
    local_28.value.fields.y = 0.0;
    local_28.value.fields.z = 0.0;
  }
  else {
    pCVar3 = target->klass;
    uVar8 = (ulong)(pCVar3->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar4 = (pCVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Characters_ITargetable_c **)((long)&pIVar4->interfaceType + lVar9) ==
            TypeInfo_Characters_ITargetable) {
          pVVar7 = pCVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar9) + 1);
          goto label_05ba743e;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)target,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_05ba743e:
    value = (*pVVar7->methodPtr)((Il2CppObject *)target,pVVar7->method);
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value.fields.x = 0.0;
    local_38.value.fields.y = 0.0;
    local_38.value.fields.z = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_38,value,
               (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
    local_28.hasValue = local_38.hasValue;
    local_28._1_3_ = local_38._1_3_;
    local_28.value.fields.x = local_38.value.fields.x;
    local_28.value.fields.y = local_38.value.fields.y;
    local_28.value.fields.z = local_38.value.fields.z;
    if ((target == (Characters_ITargetable_o *)0x0) || (__this == (Controllers_HumanAIController_o *)0x0)) {
      ThrowNullReferenceException();
    }
  }
  (__this->fields)._targetLastPosition.fields.hasValue = local_28.hasValue;
  *(undefined3 *)&(__this->fields)._targetLastPosition.fields.field_0x1 = local_28._1_3_;
  (__this->fields)._targetLastPosition.fields.value.fields.x = local_28.value.fields.x;
  pSVar5 = &(__this->fields)._targetLastPosition;
  (pSVar5->fields).value.fields.y = local_28.value.fields.y;
  (pSVar5->fields).value.fields.z = local_28.value.fields.z;
  (__this->fields)._trackedTarget = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._trackedTarget);
  return;
}


// Controllers.HumanAIController$$BeginMove
// il2cpp: void Controllers_HumanAIController__BeginMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5baa370

void Controllers_HumanAIController__BeginMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Nullable_Vector3__o *pSVar5;
  float fVar6;
  System_String_o *pSVar7;
  bool bVar8;
  Controllers_HumanAIStates_MoveTo_o *__this_00;
  Controllers_HumanAIState_o *value;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  Characters_ITargetable_o *target;
  
  if (Il2CppMethodInitialized_0754749d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_MoveTo);
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    Il2CppMethodInitialized_0754749d = '\x01';
    in_RDX = extraout_RDX;
  }
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar3 = (__this->fields)._human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto label_05baa587;
    (pCVar3->fields).TargetAngle = (__this->fields)._movementHeading;
  }
  (__this->fields)._lastMovementPosition.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
  (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
  pSVar5 = &(__this->fields)._lastMovementPosition;
  (pSVar5->fields).value.fields.y = 0.0;
  (pSVar5->fields).value.fields.z = 0.0;
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  if ((__this->fields)._moveToIgnoreEnemies == false) {
    target = (__this->fields)._moveToTarget;
  }
  else {
    target = (Characters_ITargetable_o *)0x0;
  }
  Controllers_HumanAIController__AssignHumanTarget(__this,target,in_RDX);
  fVar6 = (__this->fields)._moveToPosition.fields.y;
  fVar1 = (__this->fields)._moveToPosition.fields.z;
  (__this->fields)._targetPosition.fields.x = (__this->fields)._moveToPosition.fields.x;
  (__this->fields)._targetPosition.fields.y = fVar6;
  (__this->fields)._targetPosition.fields.z = fVar1;
  pSVar7 = "MoveTo";
  if (Il2CppMethodInitialized_0754749a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    Il2CppMethodInitialized_0754749a = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05baa587;
  bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar4,(Il2CppObject *)pSVar7,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
  if (!bVar8) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Controllers_HumanAIStates_MoveTo_o *)0x0) goto label_05baa587;
    value = (*(__this_00->klass->vtable)._5_Init.methodPtr)
                      (__this_00,(__this->fields)._human,(__this_00->klass->vtable)._5_Init.method);
    pSVar7 = "MoveTo";
    if (Il2CppMethodInitialized_07547499 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
      Il2CppMethodInitialized_07547499 = '\x01';
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05baa587;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)value,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = (MethodInfo *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar4,(Il2CppObject *)"MoveTo",
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    if (method_00 != (MethodInfo *)0x0) {
      bVar2 = (TypeInfo_Controllers_HumanAIStates_MoveTo->_2).typeHierarchyDepth;
      if (((((Controllers_HumanAIState_c *)method_00->methodPointer)->_2).typeHierarchyDepth < bVar2) ||
         ((((Controllers_HumanAIState_c *)method_00->methodPointer)->_2).typeHierarchy
          [(long)&((MethodInfo *)(ulong)bVar2)[-1].field_0x57] !=
          (Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo)) {
        il2cpp_codegen_raise_invalid_cast_exception(method_00);
      }
      *(float *)&method_00->klass = (__this->fields)._moveToRange;
      Controllers_HumanAIController__SwitchAIState
                (__this,(Controllers_HumanAIState_o *)method_00,(MethodInfo *)(ulong)bVar2);
      if ((__this->fields)._moveToIgnoreEnemies == false) {
        return;
      }
      Controllers_HumanAIController__StopInput(__this,method_00);
      return;
    }
  }
label_05baa587:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Idle
// il2cpp: void Controllers_HumanAIController__Idle (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5baa5a0

void Controllers_HumanAIController__Idle(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIState_o *pCVar2;
  System_Nullable_Vector3__o *pSVar3;
  Controllers_HumanAIState_o **targetAddress;
  
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baa6da;
    (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
  }
  (__this->fields)._lastMovementPosition.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
  (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
  pSVar3 = &(__this->fields)._lastMovementPosition;
  (pSVar3->fields).value.fields.y = 0.0;
  (pSVar3->fields).value.fields.z = 0.0;
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  Controllers_BaseAIController__ClearTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05baa6da:
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasDirection = false;
  (pCVar1->fields).TargetMagnitude = 0.0;
  if (Il2CppMethodInitialized_07547498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_MoveTo);
    Il2CppMethodInitialized_07547498 = '\x01';
  }
  (__this->fields)._moveToActive = false;
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget);
  pCVar2 = (__this->fields).AIState;
  if (pCVar2 == (Controllers_HumanAIState_o *)0x0) {
    return;
  }
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baa6da;
    (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
  }
  targetAddress = &(__this->fields).AIState;
  (__this->fields)._lastMovementPosition.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
  (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
  pSVar3 = &(__this->fields)._lastMovementPosition;
  (pSVar3->fields).value.fields.y = 0.0;
  (pSVar3->fields).value.fields.z = 0.0;
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  *targetAddress = (Controllers_HumanAIState_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (*(pCVar2->klass->vtable)._8_OnStateExit.methodPtr)(pCVar2,(pCVar2->klass->vtable)._8_OnStateExit.method);
  return;
}


// Controllers.HumanAIController$$CompleteMove
// il2cpp: void Controllers_HumanAIController__CompleteMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5baa6e0

void Controllers_HumanAIController__CompleteMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Controllers_HumanAICallback_o *pCVar1;
  System_Action_o *pSVar2;
  
  pCVar1 = (__this->fields).Callbacks;
  if (pCVar1 == (Controllers_HumanAICallback_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (pCVar1->fields).MoveToCallback;
  if (pSVar2 != (System_Action_o *)0x0) {
    method = (MethodInfo *)(pSVar2->fields).method;
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code);
  }
  Controllers_HumanAIController__Idle(__this,method);
  return;
}


// Controllers.HumanAIController$$.ctor
// il2cpp: void Controllers_HumanAIController___ctor (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x5baa720

void Controllers_HumanAIController___ctor(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Controllers_HumanAICallback_o *__this_00;
  System_Collections_Generic_Dictionary_string__HumanAIState__o *__this_01;
  System_Collections_Generic_HashSet_HumanState__o *__this_02;
  
  if (Il2CppMethodInitialized_0754749e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_HumanAIState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_HumanState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAICallback);
    Il2CppMethodInitialized_0754749e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAICallback);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this->fields).Callbacks = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Callbacks);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ctor);
  (__this->fields).AIStates = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AIStates);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_HumanState)
  ;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_02,
             (MethodInfo_4FAD1E0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor);
  if (__this_02 == (System_Collections_Generic_HashSet_HumanState__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_02,7,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_02,10,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_02,8,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_02,4,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_02,9,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_02,0xf,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  (__this->fields)._illegalWeaponStates = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._illegalWeaponStates);
  Controllers_BaseAIController___ctor((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$.cctor
// il2cpp: void Controllers_HumanAIController___cctor (const MethodInfo* method);
// 0x5baa8c0

void Controllers_HumanAIController___cctor(MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_0754749f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_0754749f = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->TitanMovebox;
    if ((((uVar1 != 1) && (layers->m_Items[1] = pUVar2->TitanPushbox, 2 < uVar1)) &&
        (layers->m_Items[2] = pUVar2->MapObjectEntities, uVar1 != 3)) &&
       (layers->m_Items[3] = pUVar2->MapObjectProjectiles, 4 < uVar1)) {
      layers->m_Items[4] = pUVar2->MapObjectAll;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Controllers_HumanAIController->static_fields->HookMask).fields.m_Mask =
           (int32_t)UVar3.fields.m_Mask;
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


