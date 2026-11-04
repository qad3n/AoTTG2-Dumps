// Type: Controllers.HumanAIController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Controllers/HumanAIController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIController$$get_Target
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__get_Target (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820f18a0

Characters_ITargetable_o *
Controllers_HumanAIController__get_Target(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._enemy;
  }
  return (Characters_ITargetable_o *)0x0;
}


// Controllers.HumanAIController$$set_Target
// il2cpp: void Controllers_HumanAIController__set_Target (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* value, const MethodInfo* method);
// 0x182101ad0

void Controllers_HumanAIController__set_Target
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  Controllers_HumanAIController__AssignHumanTarget(__this,value,(MethodInfo *)0x0);
  if ((__this->fields)._moveToActive != false) {
    (__this->fields)._moveToTarget = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,value);
    if (value == (Characters_ITargetable_o *)0x0) {
      fVar2 = (__this->fields)._targetPosition.fields.y;
      fVar1 = (__this->fields)._targetPosition.fields.z;
      (__this->fields)._moveToPosition.fields.x = (__this->fields)._targetPosition.fields.x;
      (__this->fields)._moveToPosition.fields.y = fVar2;
      (__this->fields)._moveToPosition.fields.z = fVar1;
    }
  }
  return;
}


// Controllers.HumanAIController$$get_TargetPosition
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__get_TargetPosition (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182101a80

UnityEngine_Vector3_o
Controllers_HumanAIController__get_TargetPosition(Controllers_HumanAIController_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields)._targetPosition.fields.z;
  fVar2 = (__this->fields)._targetPosition.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields)._targetPosition.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Controllers.HumanAIController$$set_TargetPosition
// il2cpp: void Controllers_HumanAIController__set_TargetPosition (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x182101aa0

void Controllers_HumanAIController__set_TargetPosition
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  float fVar4;
  
  bVar3 = (__this->fields)._moveToActive;
  uVar1 = (value->fields).x;
  uVar2 = (value->fields).y;
  fVar4 = (value->fields).z;
  (__this->fields)._targetPosition.fields.x = (float)uVar1;
  (__this->fields)._targetPosition.fields.y = (float)uVar2;
  (__this->fields)._targetPosition.fields.z = fVar4;
  if ((bVar3 != false) && ((__this->fields)._moveToTarget == (Characters_ITargetable_o *)0x0)) {
    (__this->fields)._moveToPosition.fields.x = (float)uVar1;
    (__this->fields)._moveToPosition.fields.y = (float)uVar2;
    (__this->fields)._moveToPosition.fields.z = fVar4;
  }
  return;
}


// Controllers.HumanAIController$$get_CanRunCallbacks
// il2cpp: bool Controllers_HumanAIController__get_CanRunCallbacks (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182101a50

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
// 0x1820fead0

void Controllers_HumanAIController__Awake(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *value;
  Characters_Human_o *value_00;
  
  if (Il2CppMethodInitialized_184346abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_184346abc = '\x01';
  }
  if (Il2CppMethodInitialized_184346a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    Il2CppMethodInitialized_184346a8a = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  (__this->fields)._character = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._character,value);
  value_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
  (__this->fields)._human = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,value_00);
  (__this->fields)._usePathfinding = false;
  return;
}


// Controllers.HumanAIController$$Start
// il2cpp: void Controllers_HumanAIController__Start (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100b10

void Controllers_HumanAIController__Start(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__HumanAIState__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar1;
  bool bVar2;
  Controllers_HumanAIStates_MoveTo_o *__this_02;
  Controllers_HumanAIState_o *value;
  
  if (Il2CppMethodInitialized_184346abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_MoveTo);
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    Il2CppMethodInitialized_184346abd = '\x01';
  }
  pSVar1 = "MoveTo";
  if (Il2CppMethodInitialized_184346ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    Il2CppMethodInitialized_184346ace = '\x01';
  }
  __this_00 = (__this->fields).AIStates;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__HumanAIState__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)pSVar1,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    if (bVar2) {
      return;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo);
    Controllers_HumanAIStates_MoveTo___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Controllers_HumanAIStates_MoveTo_o *)0x0) {
      value = (*(__this_02->klass->vtable)._5_Init.methodPtr)
                        (__this_02,(__this->fields)._human,(__this_02->klass->vtable)._5_Init.method);
      pSVar1 = "MoveTo";
      if (Il2CppMethodInitialized_184346acd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
        Il2CppMethodInitialized_184346acd = '\x01';
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_01,(Il2CppObject *)pSVar1,(Il2CppObject *)value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$BeforeFixedUpdate
// il2cpp: void Controllers_HumanAIController__BeforeFixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820feb60

void Controllers_HumanAIController__BeforeFixedUpdate
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar6;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  UnityEngine_Component_o *__this_00;
  Characters_Human_o *pCVar13;
  Utility_BaseComponentCache_o *pUVar14;
  bool bVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Vector3_o *pUVar17;
  undefined8 *puVar18;
  Characters_ITargetable_o *pCVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_o local_88 [10];
  
  if (Il2CppMethodInitialized_184346abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_184346abe = '\x01';
  }
  if ((__this->fields)._moveToActive == false) {
    bVar15 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
    if (bVar15) {
      pCVar19 = (__this->fields)._enemy;
    }
    else {
      pCVar19 = (Characters_ITargetable_o *)0x0;
    }
  }
  else {
    pCVar19 = (__this->fields)._moveToTarget;
  }
  if ((__this->fields)._moveToActive == false) {
    if (pCVar19 == (Characters_ITargetable_o *)0x0) {
      return;
    }
  }
  else if (pCVar19 == (Characters_ITargetable_o *)0x0) {
    fVar22 = (__this->fields)._moveToPosition.fields.y;
    fVar21 = (__this->fields)._moveToPosition.fields.z;
    (__this->fields)._targetPosition.fields.x = (__this->fields)._moveToPosition.fields.x;
    (__this->fields)._targetPosition.fields.y = fVar22;
    (__this->fields)._targetPosition.fields.z = fVar21;
    return;
  }
  bVar12 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
  if (((pCVar19->klass->_2).typeHierarchyDepth < bVar12) ||
     ((pCVar19->klass->_2).typeHierarchy[(ulonglong)bVar12 - 1] !=
      (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
    puVar18 = (undefined8 *)il2cpp_runtime_helper_180027220(local_88,1,TypeInfo_Characters_ITargetable,pCVar19);
    bVar15 = (__this->fields)._moveToActive;
    uVar6 = *puVar18;
    fVar21 = *(float *)(puVar18 + 1);
    (__this->fields)._targetPosition.fields.x = (float)(int)uVar6;
    (__this->fields)._targetPosition.fields.y = (float)(int)((ulonglong)uVar6 >> 0x20);
    (__this->fields)._targetPosition.fields.z = fVar21;
    if ((bVar15 != false) && ((__this->fields)._moveToTarget == (Characters_ITargetable_o *)0x0)) {
      (__this->fields)._moveToPosition.fields.x = (float)(int)uVar6;
      (__this->fields)._moveToPosition.fields.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      (__this->fields)._moveToPosition.fields.z = fVar21;
    }
  }
  else {
    if ((pCVar19[0x10].klass == (Characters_ITargetable_c *)0x0) ||
       (__this_00 = ((pCVar19[0x10].klass)->_1).typeMetadataHandle,
       __this_00 == (UnityEngine_Component_o *)0x0)) goto label_1820fef12;
    bVar12 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar12) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar12 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pUVar16 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_1820fef12;
    pUVar17 = UnityEngine_Transform__get_lossyScale(local_88,pUVar16,(MethodInfo *)0x0);
    fVar21 = (pUVar17->fields).x;
    fVar22 = (pUVar17->fields).y;
    fVar20 = UnityEngine_CapsuleCollider__get_radius
                       ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
    if (fVar21 <= fVar22) {
      fVar21 = fVar22;
    }
    pUVar16 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_1820fef12;
    pUVar17 = UnityEngine_Transform__get_position(local_88,pUVar16,(MethodInfo *)0x0);
    uVar1 = (pUVar17->fields).x;
    uVar7 = (pUVar17->fields).y;
    fVar22 = (pUVar17->fields).z;
    pUVar16 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_1820fef12;
    pUVar17 = UnityEngine_Transform__get_forward(local_88,pUVar16,(MethodInfo *)0x0);
    fVar24 = fVar21 * fVar20 * 1.5;
    uVar2 = (pUVar17->fields).x;
    uVar8 = (pUVar17->fields).y;
    fVar23 = (pUVar17->fields).z;
    pUVar16 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_1820fef12;
    pUVar17 = UnityEngine_Transform__get_up(local_88,pUVar16,(MethodInfo *)0x0);
    bVar15 = (__this->fields)._moveToActive;
    fVar20 = fVar21 * fVar20 * 0.5;
    uVar3 = (pUVar17->fields).x;
    uVar9 = (pUVar17->fields).y;
    fVar23 = fVar20 * (pUVar17->fields).z + (fVar22 - fVar23 * fVar24);
    fVar21 = (float)uVar3 * fVar20 + ((float)uVar1 - (float)uVar2 * fVar24);
    fVar22 = (float)uVar9 * fVar20 + ((float)uVar7 - (float)uVar8 * fVar24);
    (__this->fields)._targetPosition.fields.x = fVar21;
    (__this->fields)._targetPosition.fields.y = fVar22;
    (__this->fields)._targetPosition.fields.z = fVar23;
    if ((bVar15 != false) && ((__this->fields)._moveToTarget == (Characters_ITargetable_o *)0x0)) {
      (__this->fields)._moveToPosition.fields.x = fVar21;
      (__this->fields)._moveToPosition.fields.y = fVar22;
      (__this->fields)._moveToPosition.fields.z = fVar23;
    }
    if (pCVar19[0x10].monitor == (Cysharp_Threading_Tasks_Triggers_AsyncTriggerBase_T__o *)0x0)
    goto label_1820fef12;
    Cysharp_Threading_Tasks_Triggers_AsyncTriggerBase___Il2CppFullySharedGenericType___Awake
              (pCVar19[0x10].monitor,(MethodInfo_CD9BE0 *)0x0);
  }
  pCVar13 = (__this->fields)._human;
  if (((pCVar13 != (Characters_Human_o *)0x0) &&
      (pUVar14 = (pCVar13->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar16 = (pUVar14->fields).Transform, pUVar16 != (UnityEngine_Transform_o *)0x0)) {
    uVar4 = (__this->fields)._targetPosition.fields.x;
    uVar10 = (__this->fields)._targetPosition.fields.y;
    fVar21 = (__this->fields)._targetPosition.fields.z;
    pUVar17 = UnityEngine_Transform__get_position(local_88,pUVar16,(MethodInfo *)0x0);
    uVar5 = (pUVar17->fields).x;
    uVar11 = (pUVar17->fields).y;
    (__this->fields).TargetDirection.fields.z = fVar21 - (pUVar17->fields).z;
    (__this->fields).TargetDirection.fields.x = (float)uVar4 - (float)uVar5;
    (__this->fields).TargetDirection.fields.y = (float)uVar10 - (float)uVar11;
    return;
  }
label_1820fef12:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$FindNearestEnemy
// il2cpp: Characters_ITargetable_o* Controllers_HumanAIController__FindNearestEnemy (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ff4b0

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
// 0x1820ff4c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ff5d9: nop dword ptr [rax]

void Controllers_HumanAIController__FixedUpdateTargetStatus
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float fVar7;
  Il2CppObject *obj;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  System_Nullable_Vector3__o *pSVar11;
  bool bVar12;
  Characters_ITargetable_o *pCVar13;
  VirtualInvokeData *pVVar14;
  UnityEngine_Vector3_o *pUVar15;
  ushort uVar16;
  Characters_ITargetable_o *pCVar17;
  float fVar18;
  UnityEngine_Vector3_o local_88;
  System_Nullable_Vector3__Fields local_78 [7];
  
  if (Il2CppMethodInitialized_184346abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_184346abf = '\x01';
  }
  pCVar17 = (__this->fields)._trackedTarget;
  bVar12 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
  if (bVar12) {
    pCVar13 = (__this->fields)._enemy;
  }
  else {
    pCVar13 = (Characters_ITargetable_o *)0x0;
  }
  if (pCVar17 != pCVar13) {
    bVar12 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
    if (bVar12) {
      pCVar17 = (__this->fields)._enemy;
    }
    else {
      pCVar17 = (Characters_ITargetable_o *)0x0;
    }
    (__this->fields)._trackedTarget = pCVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._trackedTarget,pCVar17);
    (__this->fields)._targetLastPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._targetLastPosition.fields.field_0x1 = 0;
    (__this->fields)._targetLastPosition.fields.value.fields.x = 0.0;
    pSVar11 = &(__this->fields)._targetLastPosition;
    (pSVar11->fields).value.fields.y = 0.0;
    (pSVar11->fields).value.fields.z = 0.0;
  }
  bVar12 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
  if ((bVar12) && ((__this->fields)._enemy != (Characters_ITargetable_o *)0x0)) {
    bVar12 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
    if ((!bVar12) || (obj = (Il2CppObject *)(__this->fields)._enemy, obj == (Il2CppObject *)0x0)) {
      ThrowNullReferenceException();
    }
    pIVar8 = obj->klass;
    uVar6 = (pIVar8->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      uVar16 = 0;
      do {
        if (pIVar9[uVar16].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable) {
          pVVar14 = pIVar8->vtable + (pIVar9[uVar16].offset + 1);
          goto label_1820ff609;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar6);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_1820ff609:
    pUVar15 = (*pVVar14->methodPtr)(&local_88,obj,pVVar14->method);
    fVar1 = (pUVar15->fields).x;
    fVar2 = (pUVar15->fields).y;
    fVar3 = (pUVar15->fields).z;
    if ((__this->fields)._targetLastPosition.fields.hasValue == false) {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar4 = (pUVar10->zeroVector).fields.y;
      fVar7 = (pUVar10->zeroVector).fields.z;
      (__this->fields).TargetVelocity.fields.x = (pUVar10->zeroVector).fields.x;
      (__this->fields).TargetVelocity.fields.y = fVar4;
      (__this->fields).TargetVelocity.fields.z = fVar7;
    }
    else {
      fVar7 = (__this->fields)._targetLastPosition.fields.value.fields.x;
      fVar4 = (__this->fields)._targetLastPosition.fields.value.fields.y;
      fVar5 = (__this->fields)._targetLastPosition.fields.value.fields.z;
      fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields).TargetVelocity.fields.x = (fVar1 - fVar7) / fVar18;
      (__this->fields).TargetVelocity.fields.y = (fVar2 - fVar4) / fVar18;
      (__this->fields).TargetVelocity.fields.z = (fVar3 - fVar5) / fVar18;
    }
    local_78[0].hasValue = false;
    local_78[0]._1_3_ = 0;
    local_78[0].value.fields.x = 0.0;
    local_78[0].value.fields.y = 0.0;
    local_78[0].value.fields.z = 0.0;
    local_88.fields.x = fVar1;
    local_88.fields.y = fVar2;
    local_88.fields.z = fVar3;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)local_78,&local_88,
               (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
  }
  else {
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar2 = (pUVar10->zeroVector).fields.y;
    fVar1 = (pUVar10->zeroVector).fields.z;
    (__this->fields).TargetVelocity.fields.x = (pUVar10->zeroVector).fields.x;
    (__this->fields).TargetVelocity.fields.y = fVar2;
    local_78[0].hasValue = false;
    local_78[0]._1_3_ = 0;
    local_78[0].value.fields.x = 0.0;
    local_78[0].value.fields.y = 0.0;
    local_78[0].value.fields.z = 0.0;
    (__this->fields).TargetVelocity.fields.z = fVar1;
  }
  (__this->fields)._targetLastPosition.fields.hasValue = SUB41(local_78[0]._0_4_,0);
  *(int3 *)&(__this->fields)._targetLastPosition.fields.field_0x1 = SUB43(local_78[0]._0_4_,1);
  (__this->fields)._targetLastPosition.fields.value.fields.x = local_78[0].value.fields.x;
  (__this->fields)._targetLastPosition.fields.value.fields.y = local_78[0].value.fields.y;
  (__this->fields)._targetLastPosition.fields.value.fields.z = local_78[0].value.fields.z;
  return;
}


// Controllers.HumanAIController$$FixedUpdate
// il2cpp: void Controllers_HumanAIController__FixedUpdate (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ff7c0

void Controllers_HumanAIController__FixedUpdate(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_c *pCVar2;
  Controllers_HumanAICallback_o *pCVar3;
  System_Action_o *pSVar4;
  Controllers_HumanAIState_o *pCVar5;
  System_Nullable_Vector3__o *pSVar6;
  MethodInfo *in_R8;
  float fVar7;
  float fVar8;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if (((pCVar1->fields).FinishSetup == false) || ((pCVar1->fields).Dead != false)) {
      if (0.0 < (__this->fields)._recoveryTimeLeft) {
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_1820ffa1d;
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
    pCVar2 = __this->klass;
    (__this->fields)._setTargetThisFrame = false;
    (*(pCVar2->vtable)._8_RefreshAgent.methodPtr)(__this,(pCVar2->vtable)._8_RefreshAgent.method);
    if (0.0 < (__this->fields)._idleTimeLeft) {
      if (0.0 < (__this->fields)._recoveryTimeLeft) {
        pCVar1 = (__this->fields)._human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_1820ffa1d;
        (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
      }
      (__this->fields)._lastMovementPosition.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
      (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
      pSVar6 = &(__this->fields)._lastMovementPosition;
      (pSVar6->fields).value.fields.y = 0.0;
      (pSVar6->fields).value.fields.z = 0.0;
      fVar8 = (__this->fields)._idleTimeLeft;
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
    Controllers_BaseAIController__UpdateTargeting((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
    Controllers_HumanAIController__BeforeFixedUpdate(__this,(MethodInfo *)0x0);
    Controllers_HumanAIController__FixedUpdateTargetStatus(__this,(MethodInfo *)0x0);
    if ((((__this->fields)._aiEnabled != false) && ((__this->fields)._idleTimeLeft <= 0.0)) &&
       (((__this->fields)._moveToActive == false || ((__this->fields)._moveToIgnoreEnemies == false)))) {
      pCVar3 = (__this->fields).Callbacks;
      if (pCVar3 == (Controllers_HumanAICallback_o *)0x0) goto label_1820ffa1d;
      pSVar4 = (pCVar3->fields).PreAction;
      if (pSVar4 != (System_Action_o *)0x0) {
        (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code);
      }
    }
    fVar8 = (__this->fields)._idleTimeLeft;
    if (0.0 < fVar8) {
      Controllers_HumanAIController__ResetMovementRecovery(__this,(MethodInfo *)0x0);
      return;
    }
    if (((__this->fields).AIState == (Controllers_HumanAIState_o *)0x0) ||
       (((__this->fields)._aiEnabled == false && ((__this->fields)._moveToActive == false)))) {
      if ((__this->fields)._aiEnabled == false) goto label_1820ff9b5;
      if ((fVar8 <= 0.0) &&
         (((__this->fields)._moveToActive == false || ((__this->fields)._moveToIgnoreEnemies == false)))) {
        pCVar3 = (__this->fields).Callbacks;
        if (pCVar3 == (Controllers_HumanAICallback_o *)0x0) goto label_1820ffa1d;
        pSVar4 = (pCVar3->fields).OnIdle;
        if (pSVar4 != (System_Action_o *)0x0) {
          (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code);
        }
      }
    }
    else {
      pCVar5 = (__this->fields).AIState;
      if (pCVar5 == (Controllers_HumanAIState_o *)0x0) goto label_1820ffa1d;
      (*(pCVar5->klass->vtable)._7_Action.methodPtr)
                (pCVar5,(System_Type_o *)(pCVar5->klass->vtable)._7_Action.method,in_R8);
    }
    if ((((__this->fields)._aiEnabled != false) && ((__this->fields)._idleTimeLeft <= 0.0)) &&
       (((__this->fields)._moveToActive == false || ((__this->fields)._moveToIgnoreEnemies == false)))) {
      pCVar3 = (__this->fields).Callbacks;
      if (pCVar3 == (Controllers_HumanAICallback_o *)0x0) goto label_1820ffa1d;
      pSVar4 = (pCVar3->fields).PostAction;
      if (pSVar4 != (System_Action_o *)0x0) {
        (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code);
      }
    }
label_1820ff9b5:
    Controllers_HumanAIController__UpdateMovementRecovery(__this,(MethodInfo *)0x0);
    return;
  }
label_1820ffa1d:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$StopInput
// il2cpp: void Controllers_HumanAIController__StopInput (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100c30

void Controllers_HumanAIController__StopInput(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  Characters_HumanSetup_o *pCVar3;
  System_Nullable_Vector3__o *pSVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184346ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346ac0 = '\x01';
  }
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_182100d7b;
    (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
  }
  (__this->fields)._lastMovementPosition.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
  (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
  pSVar4 = &(__this->fields)._lastMovementPosition;
  (pSVar4->fields).value.fields.y = 0.0;
  (pSVar4->fields).value.fields.z = 0.0;
  pCVar1 = (__this->fields)._human;
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).HasDirection = false;
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      (pCVar1->fields).TargetMagnitude = 0.0;
      (__this->fields)._movingLeft = 0.0;
      (__this->fields)._usingGas = false;
      pCVar1 = (__this->fields)._human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        pCVar2 = (pCVar1->fields).Weapon;
        if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
          (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                    (pCVar2,(System_Type_o *)0x0,(pCVar2->klass->vtable)._12_SetInput.method);
        }
        pCVar1 = (__this->fields)._human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          pCVar3 = (pCVar1->fields).Setup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pCVar1 = (__this->fields)._human;
            if ((pCVar1 == (Characters_Human_o *)0x0) ||
               (pCVar3 = (pCVar1->fields).Setup, pCVar3 == (Characters_HumanSetup_o *)0x0))
            goto label_182100d7b;
            bVar5 = Characters_HumanSetup__get_HasODM(pCVar3,(MethodInfo *)0x0);
            if (bVar5) {
              (__this->fields)._hookingLeft = false;
              (__this->fields)._hookingRight = false;
              Controllers_HumanAIController__UpdateHookInput(__this,(MethodInfo *)0x0);
              return;
            }
          }
          return;
        }
      }
    }
  }
label_182100d7b:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$CanMove
// il2cpp: bool Controllers_HumanAIController__CanMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ff150

bool Controllers_HumanAIController__CanMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseUseable_o *pCVar2;
  Characters_BaseUseable_c *pCVar3;
  Characters_AnimationHandler_o *pCVar4;
  bool bVar5;
  Characters_Human_o *pCVar6;
  
  if (Il2CppMethodInitialized_184346ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&"jump");
    il2cpp_codegen_initialize_runtime_metadata(&"dash");
    Il2CppMethodInitialized_184346ac1 = '\x01';
  }
  pCVar6 = (__this->fields)._human;
  if (pCVar6 == (Characters_Human_o *)0x0) goto label_1820ff2f9;
  if (((pCVar6->fields).Dead == false) && ((pCVar6->fields)._state != 0xf)) {
    if ((pCVar6->fields).MountState == 1) {
      return true;
    }
    if ((pCVar6->fields).Grounded != false) {
      if ((pCVar6->fields)._state != 0) {
        return false;
      }
      if ((pCVar6->fields).Grounded != false) {
        return true;
      }
    }
    if ((pCVar6->fields)._state != 8) {
      if ((pCVar6->fields)._state == 9) {
        pCVar2 = (pCVar6->fields).Special;
        if (pCVar2 == (Characters_BaseUseable_o *)0x0) {
          return false;
        }
        pCVar3 = pCVar2->klass;
        bVar1 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth;
        if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)) {
          bVar1 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
          pCVar3 = ((((__this->fields)._human)->fields).Special)->klass;
          if ((pCVar3->_2).typeHierarchyDepth < bVar1) {
            return false;
          }
          if ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_StockSpecial) {
            return false;
          }
        }
        pCVar6 = (__this->fields)._human;
      }
      pCVar4 = (pCVar6->fields).Animation;
      if (pCVar4 == (Characters_AnimationHandler_o *)0x0) {
label_1820ff2f9:
        ThrowNullReferenceException();
      }
      bVar5 = Characters_AnimationHandler__IsPlaying(pCVar4,"dash",(MethodInfo *)0x0);
      if (!bVar5) {
        pCVar6 = (__this->fields)._human;
        if ((pCVar6 == (Characters_Human_o *)0x0) ||
           (pCVar4 = (pCVar6->fields).Animation, pCVar4 == (Characters_AnimationHandler_o *)0x0))
        goto label_1820ff2f9;
        bVar5 = Characters_AnimationHandler__IsPlaying(pCVar4,"jump",(MethodInfo *)0x0);
        if (!bVar5) {
          pCVar6 = (__this->fields)._human;
          if (pCVar6 == (Characters_Human_o *)0x0) goto label_1820ff2f9;
          bVar5 = Characters_Human__IsFiringThunderspear(pCVar6,(MethodInfo *)0x0);
          if (!bVar5) {
            return true;
          }
        }
      }
    }
  }
  return false;
}


// Controllers.HumanAIController$$IsSpin3Special
// il2cpp: bool Controllers_HumanAIController__IsSpin3Special (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1821000d0

bool Controllers_HumanAIController__IsSpin3Special(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  bool bVar4;
  Characters_BaseUseable_o *pCVar5;
  
  if (Il2CppMethodInitialized_184346ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
    Il2CppMethodInitialized_184346ac2 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields)._state != 9) {
      return false;
    }
    pCVar3 = (pCVar2->fields).Special;
    pCVar5 = (Characters_BaseUseable_o *)0x0;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
      if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar4 = true,
         (pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_Characters_Spin3Special)) {
        bVar4 = false;
      }
      if (bVar4) {
        pCVar5 = pCVar3;
      }
    }
    return pCVar5 != (Characters_BaseUseable_o *)0x0;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$MovingLeft
// il2cpp: bool Controllers_HumanAIController__MovingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100920

bool Controllers_HumanAIController__MovingLeft(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  
  pfVar1 = &(__this->fields)._movingLeft;
  return *pfVar1 <= 0.0 && *pfVar1 != 0.0;
}


// Controllers.HumanAIController$$MovingRight
// il2cpp: bool Controllers_HumanAIController__MovingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100930

bool Controllers_HumanAIController__MovingRight(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return 0.0 < (__this->fields)._movingLeft;
}


// Controllers.HumanAIController$$UsingGas
// il2cpp: bool Controllers_HumanAIController__UsingGas (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182101750

bool Controllers_HumanAIController__UsingGas(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._usingGas;
}


// Controllers.HumanAIController$$HookingLeft
// il2cpp: bool Controllers_HumanAIController__HookingLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ffd90

bool Controllers_HumanAIController__HookingLeft(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._hookingLeft;
}


// Controllers.HumanAIController$$HookingRight
// il2cpp: bool Controllers_HumanAIController__HookingRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ffda0

bool Controllers_HumanAIController__HookingRight(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  return (__this->fields)._hookingRight;
}


// Controllers.HumanAIController$$HookingBoth
// il2cpp: bool Controllers_HumanAIController__HookingBoth (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x180668280

bool
Controllers_HumanAIController__HookingBoth(Controllers_HumanAIController_o* __this, MethodInfo* method)

{
  return false;
}


// Controllers.HumanAIController$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Controllers_HumanAIController__GetAimPoint (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x180b5b970

UnityEngine_Vector3_o
Controllers_HumanAIController__GetAimPoint(Controllers_HumanAIController_o* __this, MethodInfo* method)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._deltaPosition_k__BackingField.fields.y;
  uVar1 = *(undefined8 *)&(__this->fields)._localPosition_k__BackingField.fields.z;
  (__return_storage_ptr__->fields).x = (float)(int)uVar1;
  (__return_storage_ptr__->fields).y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).z = fVar2;
  return __return_storage_ptr__;
}


// Controllers.HumanAIController$$Move
// il2cpp: void Controllers_HumanAIController__Move (Controllers_HumanAIController_o* __this, System_Nullable_Vector3__o direction, const MethodInfo* method);
// 0x182100550
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821008fe: mulss xmm6, xmm7
// asm:   0x182100902: movss dword ptr [rax + 0x230], xmm6
// asm:   0x18210090a: jmp 0x1821007c1

void Controllers_HumanAIController__Move
               (Controllers_HumanAIController_o *__this,System_Nullable_Vector3__o *direction,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseUseable_o *pCVar2;
  Characters_BaseUseable_c *pCVar3;
  Characters_AnimationHandler_o *pCVar4;
  Characters_BaseCharacter_o *pCVar5;
  System_Nullable_Vector3__o *pSVar6;
  Characters_Human_o *pCVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184346ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_184346ac3 = '\x01';
  }
  bVar8 = Il2CppMethodInitialized_184346ac1 == '\0';
  (__this->fields)._idleTimeLeft = 0.0;
  if (bVar8) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&"jump");
    il2cpp_codegen_initialize_runtime_metadata(&"dash");
    Il2CppMethodInitialized_184346ac1 = '\x01';
  }
  pCVar7 = (__this->fields)._human;
  if (pCVar7 == (Characters_Human_o *)0x0) goto label_18210090f;
  if ((pCVar7->fields).Dead != false) {
    return;
  }
  if ((pCVar7->fields)._state == 0xf) {
    return;
  }
  if ((pCVar7->fields).MountState != 1) {
    if ((pCVar7->fields).Grounded != false) {
      if ((pCVar7->fields)._state != 0) {
        return;
      }
      if ((pCVar7->fields).Grounded != false) goto label_182100754;
    }
    if ((pCVar7->fields)._state == 8) {
      return;
    }
    if ((pCVar7->fields)._state == 9) {
      pCVar2 = (pCVar7->fields).Special;
      if (pCVar2 == (Characters_BaseUseable_o *)0x0) {
        return;
      }
      pCVar3 = pCVar2->klass;
      bVar1 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth;
      if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)) {
        bVar1 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
        pCVar3 = ((((__this->fields)._human)->fields).Special)->klass;
        if ((pCVar3->_2).typeHierarchyDepth < bVar1) {
          return;
        }
        if ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_StockSpecial) {
          return;
        }
      }
      pCVar7 = (__this->fields)._human;
    }
    pCVar4 = (pCVar7->fields).Animation;
    if (pCVar4 == (Characters_AnimationHandler_o *)0x0) goto label_18210090f;
    bVar8 = Characters_AnimationHandler__IsPlaying(pCVar4,"dash",(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    pCVar7 = (__this->fields)._human;
    if ((pCVar7 == (Characters_Human_o *)0x0) ||
       (pCVar4 = (pCVar7->fields).Animation, pCVar4 == (Characters_AnimationHandler_o *)0x0))
    goto label_18210090f;
    bVar8 = Characters_AnimationHandler__IsPlaying(pCVar4,"jump",(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto label_18210090f;
    bVar8 = Characters_Human__IsFiringThunderspear(pCVar7,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
  }
label_182100754:
  if ((direction->fields).hasValue == false) {
    if (0.0 < (__this->fields)._recoveryTimeLeft) {
      pCVar7 = (__this->fields)._human;
      if (pCVar7 == (Characters_Human_o *)0x0) goto label_18210090f;
      (pCVar7->fields).TargetAngle = (__this->fields)._movementHeading;
    }
    (__this->fields)._lastMovementPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
    (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
    pSVar6 = &(__this->fields)._lastMovementPosition;
    (pSVar6->fields).value.fields.y = 0.0;
    (pSVar6->fields).value.fields.z = 0.0;
    pCVar5 = (__this->fields)._character;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    if (pCVar5 != (Characters_BaseCharacter_o *)0x0) {
      (pCVar5->fields).HasDirection = false;
      pCVar7 = (__this->fields)._human;
      if (pCVar7 != (Characters_Human_o *)0x0) {
        (pCVar7->fields).TargetMagnitude = 0.0;
        return;
      }
    }
  }
  else {
    fVar10 = (direction->fields).value.fields.x;
    fVar11 = (direction->fields).value.fields.z;
    (__this->fields)._movingLeft =
         fVar11 * (__this->fields).AimDirection.fields.x - fVar10 * (__this->fields).AimDirection.fields.z;
    local_48[0].fields.y = (direction->fields).value.fields.y;
    local_48[0].fields.x = fVar10;
    local_48[0].fields.z = fVar11;
    fVar9 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,local_48,(MethodInfo *)0x0);
    pCVar5 = (__this->fields)._character;
    (__this->fields)._movementHeading = fVar9;
    if (pCVar5 != (Characters_BaseCharacter_o *)0x0) {
      (pCVar5->fields).TargetAngle = fVar9;
      pCVar5 = (__this->fields)._character;
      if (pCVar5 != (Characters_BaseCharacter_o *)0x0) {
        (pCVar5->fields).HasDirection = true;
        fVar9 = 0.0;
        local_48[0].fields.y = 0.0;
        local_48[0].fields.x = fVar10;
        local_48[0].fields.z = fVar11;
        fVar10 = (float)il2cpp_runtime_helper_180546a40(local_48,0);
        fVar11 = 0.25;
        if (0.95 < fVar10) {
          fVar9 = 1.0;
        }
        else {
          fVar10 = (float)il2cpp_runtime_helper_180546a40(local_48,0);
          if (0.25 <= fVar10) {
            fVar9 = (float)il2cpp_runtime_helper_180546a40(local_48,0);
          }
        }
        pCVar7 = (__this->fields)._human;
        if (pCVar7 != (Characters_Human_o *)0x0) {
          if (((((pCVar7->fields).IsWalk == false) || ((pCVar7->fields).MountState != 0)) ||
              ((pCVar7->fields)._state != 0)) || ((pCVar7->fields).Grounded == false)) {
            fVar11 = 1.0;
          }
          (pCVar7->fields).TargetMagnitude = fVar11 * fVar9;
          return;
        }
      }
    }
  }
label_18210090f:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$GetMovementScale
// il2cpp: float Controllers_HumanAIController__GetMovementScale (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ffcd0

float Controllers_HumanAIController__GetMovementScale
                (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((((pCVar1->fields).IsWalk != false) && ((pCVar1->fields).MountState == 0)) &&
      ((pCVar1->fields)._state == 0)) && ((pCVar1->fields).Grounded != false)) {
    return 0.25;
  }
  return 1.0;
}


// Controllers.HumanAIController$$ResetMovementRecovery
// il2cpp: void Controllers_HumanAIController__ResetMovementRecovery (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100a50

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
// 0x182101240
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821016a0: addss xmm7, dword ptr [rbx + 0x114]
// asm:   0x1821016a8: movss xmm1, dword ptr [rip + 0x1257574]
// asm:   0x1821016b0: xor r8d, r8d
// asm:   0x1821016b3: movaps xmm0, xmm7
// asm:   0x1821016b6: call 0x180582600  ; UnityEngine_Mathf__Repeat()
// asm:   0x1821016bb: movss dword ptr [rdi + 0xd0], xmm0
// asm:   0x1821016c3: jmp 0x182101645
// asm:   0x1821016d1: mov eax, dword ptr [rbx + 0x114]
// asm:   0x1821016d7: xor edx, edx
// asm:   0x1821016d9: mov dword ptr [rcx + 0xd0], eax
// asm:   0x1821016df: mov rcx, rbx
// asm:   0x1821016e2: call 0x182100a50  ; Controllers_HumanAIController__ResetMovementRecovery()
// asm:   0x1821016e7: jmp 0x182101645
// asm:   0x182101711: xorps xmm0, xmm0
// asm:   0x182101714: xor edi, edi
// asm:   0x182101716: movups xmmword ptr [rbx + 0x118], xmm0
// asm:   0x18210171d: mov qword ptr [rbx + 0x128], rdi
// asm:   0x182101724: jmp 0x182101645

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
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o local_88;
  System_Nullable_Vector3__Fields local_78;
  System_Nullable_Vector3__Fields local_68 [6];
  
  if (Il2CppMethodInitialized_184346ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    Il2CppMethodInitialized_184346ac4 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  local_78.hasValue = false;
  local_78._1_3_ = 0;
  local_78.value.fields.x = 0.0;
  local_78.value.fields.y = 0.0;
  local_78.value.fields.z = 0.0;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) goto label_182101729;
  fVar11 = 0.0;
  if (((((__this->fields)._usePathfinding == false) &&
       ((((__this->fields)._aiEnabled != false || ((__this->fields)._moveToActive != false)) &&
        ((__this->fields)._idleTimeLeft <= 0.0)))) &&
      ((((pCVar1->fields).Dead == false && ((pCVar1->fields).HasDirection != false)) &&
       ((pCVar1->fields).Grounded != false)))) &&
     ((((pCVar1->fields)._state == 0 && ((pCVar1->fields).MountState == 0)) &&
      (fVar10 = (pCVar1->fields).TargetMagnitude * (pCVar2->fields).RunSpeed, 0.0 < fVar10)))) {
    pCVar3 = (pCVar1->fields).Animation;
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_182101729;
    bVar7 = Characters_AnimationHandler__IsPlaying
                      (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->Jump,(MethodInfo *)0x0);
    if (!bVar7) {
      pCVar1 = (__this->fields)._human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_182101729;
      pCVar3 = (pCVar1->fields).Animation;
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_182101729;
      bVar7 = Characters_AnimationHandler__IsPlaying
                        (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->HorseMount,
                         (MethodInfo *)0x0);
      if (!bVar7) {
        pCVar1 = (__this->fields)._human;
        if (((pCVar1 == (Characters_Human_o *)0x0) ||
            (pUVar4 = (pCVar1->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) {
          ThrowNullReferenceException();
        }
        pUVar8 = UnityEngine_Transform__get_position(&local_88,pUVar5,(MethodInfo *)0x0);
        local_78.hasValue = (__this->fields)._lastMovementPosition.fields.hasValue;
        local_78._1_3_ = *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1;
        local_78.value.fields.x = (__this->fields)._lastMovementPosition.fields.value.fields.x;
        pSVar6 = &(__this->fields)._lastMovementPosition;
        local_78.value.fields.y = (pSVar6->fields).value.fields.y;
        local_78.value.fields.z = (pSVar6->fields).value.fields.z;
        fVar12 = (pUVar8->fields).x;
        local_88.fields.y = (pUVar8->fields).y;
        fVar13 = (pUVar8->fields).z;
        local_68[0].hasValue = false;
        local_68[0]._1_3_ = 0;
        local_68[0].value.fields.x = 0.0;
        local_68[0].value.fields.y = 0.0;
        local_68[0].value.fields.z = 0.0;
        local_88.fields.x = fVar12;
        local_88.fields.z = fVar13;
        System_Nullable_Vector3____ctor
                  ((System_Nullable_Vector3__o *)local_68,&local_88,
                   (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
        (__this->fields)._lastMovementPosition.fields.hasValue = local_68[0].hasValue;
        *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = local_68[0]._1_3_;
        (__this->fields)._lastMovementPosition.fields.value.fields.x = local_68[0].value.fields.x;
        pSVar6 = &(__this->fields)._lastMovementPosition;
        (pSVar6->fields).value.fields.y = local_68[0].value.fields.y;
        (pSVar6->fields).value.fields.z = local_68[0].value.fields.z;
        if (local_78.hasValue == false) {
          return;
        }
        if ((__this->fields)._recoveryTimeLeft <= 0.0) {
          System_Nullable_Vector3___get_Value
                    (&local_88,(System_Nullable_Vector3__o *)&local_78,
                     (MethodInfo_AE2C50 *)MethodInfo_System_Nullable_Vector3_get_Value);
          fVar12 = fVar12 - local_88.fields.x;
          fVar13 = fVar13 - local_88.fields.z;
          fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          fVar9 = fVar9 * fVar10 * 0.5;
          if (fVar9 * fVar9 <= fVar12 * fVar12 + 0.0 + fVar13 * fVar13) {
label_18210163f:
            (__this->fields)._lowMovementSpeedTime = 0.0;
            return;
          }
          pCVar1 = (__this->fields)._human;
          if (((pCVar1 == (Characters_Human_o *)0x0) ||
              (pUVar4 = (pCVar1->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
             (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
          goto label_182101729;
          pUVar8 = UnityEngine_Transform__get_eulerAngles(&local_88,pUVar5,(MethodInfo *)0x0);
          fVar10 = UnityEngine_Mathf__DeltaAngle
                             ((pUVar8->fields).y,(__this->fields)._movementHeading,(MethodInfo *)0x0);
          if (45.0 < ABS(fVar10)) goto label_18210163f;
          fVar10 = (__this->fields)._lowMovementSpeedTime;
          fVar12 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          fVar12 = fVar12 + fVar10;
          (__this->fields)._lowMovementSpeedTime = fVar12;
          if (fVar12 < 0.5) {
            return;
          }
          (__this->fields)._lowMovementSpeedTime = 0.0;
          (__this->fields)._recoveryTimeLeft = 2.0;
          fVar10 = UnityEngine_Random__get_value((MethodInfo *)0x0);
          if (0.5 <= fVar10) {
            fVar10 = 70.0;
          }
          else {
            fVar10 = -70.0;
          }
          (__this->fields)._recoveryTurnAngle = fVar10;
        }
        fVar10 = (__this->fields)._recoveryTimeLeft;
        fVar12 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        fVar10 = fVar10 - fVar12;
        (__this->fields)._recoveryTimeLeft = fVar10;
        if (fVar10 <= 0.0) {
          pCVar1 = (__this->fields)._human;
          if (pCVar1 != (Characters_Human_o *)0x0) {
            (pCVar1->fields).TargetAngle = (__this->fields)._movementHeading;
            Controllers_HumanAIController__ResetMovementRecovery(__this,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          fVar10 = (__this->fields)._recoveryTurnAngle;
          fVar12 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          if (fVar12 * 10.0 < ABS(0.0 - fVar10)) {
            if (0.0 - fVar10 < 0.0) {
              fVar11 = -1.0;
            }
            else {
              fVar11 = 1.0;
            }
            fVar11 = fVar11 * fVar12 * 10.0 + fVar10;
          }
          pCVar1 = (__this->fields)._human;
          (__this->fields)._recoveryTurnAngle = fVar11;
          if (pCVar1 != (Characters_Human_o *)0x0) {
            fVar11 = UnityEngine_Mathf__Repeat
                               (fVar11 + (__this->fields)._movementHeading,360.0,(MethodInfo *)0x0);
            (pCVar1->fields).TargetAngle = fVar11;
            return;
          }
        }
        goto label_182101729;
      }
    }
  }
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
label_182101729:
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
// 0x1820fe650

void Controllers_HumanAIController__AimAt
               (Controllers_HumanAIController_o *__this,System_Nullable_Vector3__o *position,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Characters_Human_o *__this_00;
  float fVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Vector3_Fields local_48 [5];
  
  if (Il2CppMethodInitialized_184346ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_184346ac5 = '\x01';
  }
  if ((position->fields).hasValue == false) {
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar5->zeroVector).fields.y;
    fVar4 = (pUVar5->zeroVector).fields.z;
    (__this->fields).AimDirection.fields.x = (pUVar5->zeroVector).fields.x;
    (__this->fields).AimDirection.fields.y = fVar1;
    (__this->fields).AimDirection.fields.z = fVar4;
    return;
  }
  __this_00 = (__this->fields)._human;
  fVar4 = (position->fields).value.fields.z;
  uVar3._0_4_ = (position->fields).value.fields.x;
  uVar3._4_4_ = (position->fields).value.fields.y;
  (__this->fields).AimPoint.fields.x = (float)uVar3;
  (__this->fields).AimPoint.fields.y = uVar3._4_4_;
  (__this->fields).AimPoint.fields.z = fVar4;
  local_48[0]._0_8_ = uVar3;
  if (__this_00 != (Characters_Human_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      fVar6 = local_48[0].y;
      fVar4 = (position->fields).value.fields.z;
      pUVar7 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)local_48,__this_01,(MethodInfo *)0x0);
      fVar1 = (pUVar7->fields).z;
      fVar2 = (pUVar7->fields).x;
      (__this->fields).AimDirection.fields.y = fVar6 - (pUVar7->fields).y;
      (__this->fields).AimDirection.fields.x = (float)uVar3 - fVar2;
      (__this->fields).AimDirection.fields.z = fVar4 - fVar1;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Jump
// il2cpp: void Controllers_HumanAIController__Jump (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100170

void Controllers_HumanAIController__Jump(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if (((pCVar1->fields).Dead != false) || ((pCVar1->fields)._state == 0xf)) {
      return;
    }
    if ((pCVar1->fields).MountState == 0) {
      bVar2 = Characters_Human__CanJump(pCVar1,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__this->fields)._human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        Characters_Human__Jump(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((pCVar1->fields).MountState != 1) {
        return;
      }
      __this_00 = (pCVar1->fields).Horse;
      if (__this_00 != (Characters_Horse_o *)0x0) {
        Characters_Horse__Jump(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$HorseMount
// il2cpp: void Controllers_HumanAIController__HorseMount (Controllers_HumanAIController_o* __this, bool mount, const MethodInfo* method);
// 0x1820ffdb0

void Controllers_HumanAIController__HorseMount
               (Controllers_HumanAIController_o *__this,bool mount,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_Human_o *pCVar2;
  Characters_Horse_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar6;
  UnityEngine_Vector3_o *pUVar7;
  System_Object_array *parameters;
  float fVar8;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346ac6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"UncarryRPC");
    Il2CppMethodInitialized_184346ac6 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_182100003;
  if (((pCVar2->fields).Dead != false) || ((pCVar2->fields)._state == 0xf)) {
    return;
  }
  bVar6 = false;
  if ((pCVar2->fields).MountState == 0) {
    bVar6 = mount;
  }
  if (bVar6 == false) {
    if ((pCVar2->fields).MountState != 1) {
      return;
    }
    if (mount) {
      return;
    }
    if ((pCVar2->fields)._state != 0) {
      return;
    }
    Characters_Human__Unmount(pCVar2,false,(MethodInfo *)0x0);
    return;
  }
  bVar6 = Characters_Human__CanJump(pCVar2,(MethodInfo *)0x0);
  if (bVar6) {
    pCVar2 = (__this->fields)._human;
    if (pCVar2 == (Characters_Human_o *)0x0) goto label_182100003;
    pCVar3 = (pCVar2->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pCVar2 = (__this->fields)._human;
      if (pCVar2 == (Characters_Human_o *)0x0) goto label_182100003;
      if ((pCVar2->fields).MountState == 0) {
        pCVar3 = (pCVar2->fields).Horse;
        if (((pCVar3 == (Characters_Horse_o *)0x0) ||
            (pUVar4 = (pCVar3->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
        goto label_182100003;
        pUVar7 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)local_28,pUVar5,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._human;
        if (((pCVar2 == (Characters_Human_o *)0x0) ||
            (pUVar4 = (pCVar2->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
        goto label_182100003;
        fVar8 = (pUVar7->fields).z;
        uVar1._0_4_ = (pUVar7->fields).x;
        uVar1._4_4_ = (pUVar7->fields).y;
        UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_28,pUVar5,(MethodInfo *)0x0);
        local_28[0]._0_8_ = uVar1;
        local_28[0].z = fVar8;
        fVar8 = (float)il2cpp_runtime_helper_180562c80(local_28);
        if (fVar8 < 15.0) {
          pCVar2 = (__this->fields)._human;
          if (pCVar2 == (Characters_Human_o *)0x0) goto label_182100003;
          if ((pCVar2->fields).HasDirection == false) {
            Characters_Human__MountHorse(pCVar2,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields).CarryState != 1) {
      return;
    }
    pUVar4 = (pCVar2->fields).Cache;
    if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (pUVar4->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182100003:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Dodge
// il2cpp: void Controllers_HumanAIController__Dodge (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ff430

void Controllers_HumanAIController__Dodge(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  float targetAngle;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_1820ff49d:
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
      goto label_1820ff49d;
    }
  }
  return;
}


// Controllers.HumanAIController$$Reload
// il2cpp: void Controllers_HumanAIController__Reload (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1821009d0

void Controllers_HumanAIController__Reload(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
label_182100a42:
    ThrowNullReferenceException();
  }
  if (((__this_00->fields).Dead == false) && ((__this_00->fields)._state != 0xf)) {
    if ((__this_00->fields).MountState == 0) {
      if ((__this_00->fields)._state == 0) {
        if (__this_00 != (Characters_Human_o *)0x0) {
          Characters_Human__Reload(__this_00,(MethodInfo *)0x0);
          return;
        }
        goto label_182100a42;
      }
    }
    else if ((((__this_00->fields).MountState == 1) && ((__this_00->fields)._state == 0)) &&
            ((__this_00->fields).IsAttackableState != false)) {
      Characters_Human__Reload(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.HumanAIController$$UseGas
// il2cpp: void Controllers_HumanAIController__UseGas (Controllers_HumanAIController_o* __this, bool useGas, const MethodInfo* method);
// 0x182101740

void Controllers_HumanAIController__UseGas
               (Controllers_HumanAIController_o *__this,bool useGas,MethodInfo *method)

{
  (__this->fields)._usingGas = useGas;
  return;
}


// Controllers.HumanAIController$$HorseWalk
// il2cpp: void Controllers_HumanAIController__HorseWalk (Controllers_HumanAIController_o* __this, bool isWalk, const MethodInfo* method);
// 0x182100010

void Controllers_HumanAIController__HorseWalk
               (Controllers_HumanAIController_o *__this,bool isWalk,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).IsWalk = isWalk;
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Dash
// il2cpp: void Controllers_HumanAIController__Dash (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x1820ff340

void Controllers_HumanAIController__Dash
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o *direction,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  float targetAngle;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  __this_00 = (__this->fields)._human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    if (((((((__this_00->fields).Grounded == false) && ((__this_00->fields)._state != 3)) &&
          ((__this_00->fields).MountState == 0)) &&
         (((__this_00->fields)._state != 7 && ((__this_00->fields).CarryState != 1)))) &&
        (((__this_00->fields)._state != 0xf &&
         (((__this_00->fields)._state != 8 && ((__this_00->fields)._state != 10)))))) &&
       ((__this_00->fields).Dead == false)) {
      local_38.x = (direction->fields).x;
      local_38.y = (direction->fields).y;
      local_18.hasValue = false;
      local_18._1_3_ = 0;
      local_18.value.fields.x = 0.0;
      local_18.value.fields.y = 0.0;
      local_18.value.fields.z = 0.0;
      local_28.x = (direction->fields).x;
      local_28.y = (direction->fields).y;
      local_38.z = (direction->fields).z;
      local_28.z = local_38.z;
      targetAngle = Controllers_BaseAIController__GetTargetAngle
                              ((Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o *)&local_38,
                               (MethodInfo *)0x0);
      Characters_Human__DashVertical
                (__this_00,targetAngle,(UnityEngine_Vector3_o *)&local_28,
                 (System_Nullable_Vector3__o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Reel
// il2cpp: void Controllers_HumanAIController__Reel (Controllers_HumanAIController_o* __this, int32_t reelAxis, const MethodInfo* method);
// 0x182100950

void Controllers_HumanAIController__Reel
               (Controllers_HumanAIController_o *__this,int32_t reelAxis,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (reelAxis < 0) {
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_18210099a;
    (pCVar1->fields).ReelInAxis = -1.0;
  }
  else if (0 < reelAxis) {
    if (pCVar1 != (Characters_Human_o *)0x0) {
      (pCVar1->fields).ReelOutAxis = 1.0;
      return;
    }
    goto label_18210099a;
  }
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).ReelOutAxis = 0.0;
    return;
  }
label_18210099a:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$LaunchHookLeft
// il2cpp: void Controllers_HumanAIController__LaunchHookLeft (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x1821001f0

void Controllers_HumanAIController__LaunchHookLeft
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o *aimPoint,MethodInfo *method)

{
  System_Nullable_Vector3__Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_184346ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_184346ac7 = '\x01';
  }
  local_28._0_8_ = *(undefined8 *)&aimPoint->fields;
  local_28.value.fields.y = (aimPoint->fields).z;
  (__this->fields)._hookingLeft = true;
  local_18.hasValue = false;
  local_18._1_3_ = 0;
  local_18.value.fields.x = 0.0;
  local_18.value.fields.y = 0.0;
  local_18.value.fields.z = 0.0;
  System_Nullable_Vector3____ctor
            ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
             (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
  local_28.hasValue = local_18.hasValue;
  local_28._1_3_ = local_18._1_3_;
  local_28.value.fields.x = local_18.value.fields.x;
  local_28.value.fields.y = local_18.value.fields.y;
  local_28.value.fields.z = local_18.value.fields.z;
  Controllers_HumanAIController__AimAt(__this,(System_Nullable_Vector3__o *)&local_28,(MethodInfo *)0x0);
  Controllers_HumanAIController__UpdateHookInput(__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$ReleaseHookLeft
// il2cpp: void Controllers_HumanAIController__ReleaseHookLeft (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1821009b0

void Controllers_HumanAIController__ReleaseHookLeft
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._hookingLeft = false;
  Controllers_HumanAIController__UpdateHookInput(__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$LaunchHookRight
// il2cpp: void Controllers_HumanAIController__LaunchHookRight (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o aimPoint, const MethodInfo* method);
// 0x182100290

void Controllers_HumanAIController__LaunchHookRight
               (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o *aimPoint,MethodInfo *method)

{
  System_Nullable_Vector3__Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_184346ac8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_184346ac8 = '\x01';
  }
  local_28._0_8_ = *(undefined8 *)&aimPoint->fields;
  local_28.value.fields.y = (aimPoint->fields).z;
  (__this->fields)._hookingRight = true;
  local_18.hasValue = false;
  local_18._1_3_ = 0;
  local_18.value.fields.x = 0.0;
  local_18.value.fields.y = 0.0;
  local_18.value.fields.z = 0.0;
  System_Nullable_Vector3____ctor
            ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
             (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
  local_28.hasValue = local_18.hasValue;
  local_28._1_3_ = local_18._1_3_;
  local_28.value.fields.x = local_18.value.fields.x;
  local_28.value.fields.y = local_18.value.fields.y;
  local_28.value.fields.z = local_18.value.fields.z;
  Controllers_HumanAIController__AimAt(__this,(System_Nullable_Vector3__o *)&local_28,(MethodInfo *)0x0);
  Controllers_HumanAIController__UpdateHookInput(__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$ReleaseHookRight
// il2cpp: void Controllers_HumanAIController__ReleaseHookRight (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1821009c0

void Controllers_HumanAIController__ReleaseHookRight
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._hookingRight = false;
  Controllers_HumanAIController__UpdateHookInput(__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$ReleaseHookAll
// il2cpp: void Controllers_HumanAIController__ReleaseHookAll (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1821009a0

void Controllers_HumanAIController__ReleaseHookAll(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._hookingLeft = false;
  (__this->fields)._hookingRight = false;
  Controllers_HumanAIController__UpdateHookInput(__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanAIController$$UpdateHookInput
// il2cpp: void Controllers_HumanAIController__UpdateHookInput (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100ec0

void Controllers_HumanAIController__UpdateHookInput
               (Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanSetup_o *__this_00;
  Characters_HumanStats_o *pCVar2;
  Characters_HookUseable_o *pCVar3;
  System_String_o *pSVar4;
  Characters_Human_c *pCVar5;
  bool bVar6;
  bool bVar7;
  Photon_Pun_PhotonMessageInfo_o *pPVar8;
  char cVar9;
  char cVar10;
  Photon_Pun_PhotonMessageInfo_o local_58;
  Photon_Pun_PhotonMessageInfo_o local_38 [2];
  
  if (Il2CppMethodInitialized_184346ac9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346ac9 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Setup, __this_00 == (Characters_HumanSetup_o *)0x0)) goto label_182101236;
  bVar6 = Characters_HumanSetup__get_HasODM(__this_00,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_182101236;
  if ((pCVar1->fields).HookLeft == (Characters_HookUseable_o *)0x0) {
    return;
  }
  if (((pCVar1->fields)._state == 7) || ((pCVar1->fields)._state == 0xf)) {
label_182100fb0:
    bVar6 = false;
  }
  else {
    pCVar2 = (pCVar1->fields).Stats;
    if (pCVar2 == (Characters_HumanStats_o *)0x0) goto label_182101236;
    if (((pCVar2->fields).CurrentGas <= 0.0) ||
       (((pCVar1->fields).MountState == 2 && ((pCVar1->fields).CanMountedAttack == false))))
    goto label_182100fb0;
    bVar6 = (pCVar1->fields).Dead == false;
  }
  cVar9 = (__this->fields)._hookingLeft;
  cVar10 = (__this->fields)._hookingRight;
  bVar7 = Characters_HookUseable__HasHook((pCVar1->fields).HookLeft,(MethodInfo *)0x0);
  if (!bVar7) {
    pCVar1 = (__this->fields)._human;
    if ((pCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar3 = (pCVar1->fields).HookRight, pCVar3 == (Characters_HookUseable_o *)0x0)) goto label_182101236;
    Characters_HookUseable__HasHook(pCVar3,(MethodInfo *)0x0);
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).CancelHookBothKey != false) {
      (pCVar1->fields).CancelHookBothKey = false;
    }
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).CancelHookLeftKey != false) {
        cVar9 = '\0';
        (pCVar1->fields).CancelHookLeftKey = false;
      }
      pCVar1 = (__this->fields)._human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        if ((pCVar1->fields).CancelHookRightKey != false) {
          cVar10 = '\0';
          (pCVar1->fields).CancelHookRightKey = false;
        }
        if (((((__this->fields)._human != (Characters_Human_o *)0x0) &&
             (pCVar3 = (((__this->fields)._human)->fields).HookLeft, pCVar3 != (Characters_HookUseable_o *)0x0
             )) && ((pCVar3->fields).HookBoth = false, (__this->fields)._human != (Characters_Human_o *)0x0))
           && (pCVar3 = (((__this->fields)._human)->fields).HookRight,
              pCVar3 != (Characters_HookUseable_o *)0x0)) {
          (pCVar3->fields).HookBoth = false;
          pCVar1 = (__this->fields)._human;
          if (pCVar1 != (Characters_Human_o *)0x0) {
            pCVar3 = (pCVar1->fields).HookLeft;
            if ((!bVar6) ||
               (bVar7 = Controllers_HumanAIController__IsSpin3Special(__this,(MethodInfo *)0x0), bVar7)) {
              bVar7 = false;
            }
            else {
              bVar7 = cVar9 != '\0';
            }
            if (pCVar3 != (Characters_HookUseable_o *)0x0) {
              (*(pCVar3->klass->vtable)._12_SetInput.methodPtr)
                        (pCVar3,bVar7,(pCVar3->klass->vtable)._12_SetInput.method);
              pCVar1 = (__this->fields)._human;
              if (pCVar1 != (Characters_Human_o *)0x0) {
                pCVar3 = (pCVar1->fields).HookRight;
                if ((!bVar6) ||
                   (bVar6 = Controllers_HumanAIController__IsSpin3Special(__this,(MethodInfo *)0x0), bVar6)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = cVar10 != '\0';
                }
                if (pCVar3 != (Characters_HookUseable_o *)0x0) {
                  (*(pCVar3->klass->vtable)._12_SetInput.methodPtr)
                            (pCVar3,bVar6,(pCVar3->klass->vtable)._12_SetInput.method);
                  pCVar1 = (__this->fields)._human;
                  if ((pCVar1 != (Characters_Human_o *)0x0) &&
                     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
                    if (((pCVar2->fields).CurrentGas <= 0.0) && (cVar10 != '\0' || cVar9 != '\0')) {
                      pCVar1 = (__this->fields)._human;
                      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                      }
                      pSVar4 = TypeInfo_Characters_HumanSounds->static_fields->NoGas;
                      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                      }
                      pPVar8 = Utility_Util__CreateLocalPhotonInfo(local_38,(MethodInfo *)0x0);
                      pCVar5 = pCVar1->klass;
                      local_58.fields.timeInt = (pPVar8->fields).timeInt;
                      local_58.fields._4_4_ = *(undefined4 *)&(pPVar8->fields).field_0x4;
                      local_58.fields.Sender._0_4_ = *(undefined4 *)&(pPVar8->fields).Sender;
                      local_58.fields.Sender._4_4_ = *(undefined4 *)((longlong)&(pPVar8->fields).Sender + 4);
                      local_58.fields.photonView = (pPVar8->fields).photonView;
                      (*(pCVar5->vtable)._86_PlaySoundRPC.methodPtr)
                                (pCVar1,pSVar4,&local_58,(pCVar5->vtable)._86_PlaySoundRPC.method);
                    }
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
label_182101236:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Attack
// il2cpp: void Controllers_HumanAIController__Attack (Controllers_HumanAIController_o* __this, bool attackOn, const MethodInfo* method);
// 0x1820fe910
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820feab3: mov rax, qword ptr [rbx + 0x90]
// asm:   0x1820feaba: test edi, edi
// asm:   0x1820feabc: setne cl
// asm:   0x1820feabf: mov byte ptr [rax + 0x2f0], cl
// asm:   0x1820feac5: jmp 0x1820fea1d

void Controllers_HumanAIController__Attack
               (Controllers_HumanAIController_o *__this,bool attackOn,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_HumanState__o *__this_00;
  Characters_BaseUseable_o *pCVar2;
  Characters_BaseUseable_c *pCVar3;
  bool bVar4;
  Characters_Human_o *pCVar5;
  bool bVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184346aca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_HumanState_Contains);
    Il2CppMethodInitialized_184346aca = '\x01';
  }
  if (((__this->fields)._moveToActive == false) || ((__this->fields)._moveToIgnoreEnemies == false)) {
    bVar6 = (__this->fields)._idleTimeLeft <= 0.0;
  }
  else {
    bVar6 = false;
  }
  cVar7 = false;
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_1820feaca;
  if ((pCVar5->fields).IsAttackableState == false) {
label_1820fe9ce:
    pCVar5 = (__this->fields)._human;
    bVar4 = (bool)cVar7;
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_1820feaca;
  }
  else {
    __this_00 = (__this->fields)._illegalWeaponStates;
    if (__this_00 == (System_Collections_Generic_HashSet_HumanState__o *)0x0) goto label_1820feaca;
    bVar4 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_00,(pCVar5->fields)._state,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Contains
                      );
    if (bVar4) goto label_1820fe9ce;
    pCVar5 = (__this->fields)._human;
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_1820feaca;
    bVar4 = (pCVar5->fields).Dead == false;
  }
  (pCVar5->fields)._gunArmAim = false;
  pCVar5 = (__this->fields)._human;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    pCVar2 = (pCVar5->fields).Weapon;
    if (bVar4 == false) {
      if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
        (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                  (pCVar2,(System_Type_o *)0x0,(pCVar2->klass->vtable)._12_SetInput.method);
        return;
      }
    }
    else if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
      (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                (pCVar2,(System_Type_o *)(bVar6 & attackOn),(pCVar2->klass->vtable)._12_SetInput.method);
      pCVar5 = (__this->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        pCVar2 = (pCVar5->fields).Weapon;
        if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
          pCVar3 = pCVar2->klass;
          bVar1 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
          if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
             ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)) {
            if ((bVar6 & attackOn) == 0) {
              cVar7 = (((((__this->fields)._human)->fields).Weapon)->fields).IsActive;
            }
            else {
              cVar7 = '\x01';
            }
          }
        }
        (((__this->fields)._human)->fields)._gunArmAim = cVar7 != '\0';
        return;
      }
    }
  }
label_1820feaca:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$ActivateSpecial
// il2cpp: void Controllers_HumanAIController__ActivateSpecial (Controllers_HumanAIController_o* __this, bool activate, const MethodInfo* method);
// 0x1820fe400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820fe5da: jmp 0x1820fe5fd

void Controllers_HumanAIController__ActivateSpecial
               (Controllers_HumanAIController_o *__this,bool activate,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseUseable_c *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  MethodInfo *pMVar4;
  Characters_Human_o *pCVar5;
  bool bVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_184346acb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHoldAttackSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_EscapeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    Il2CppMethodInitialized_184346acb = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar5->fields).Special == (Characters_BaseUseable_o *)0x0) {
    return;
  }
  if ((pCVar5->fields).IsAttackableState == false) {
label_1820fe541:
    pCVar5 = (__this->fields)._human;
    bVar6 = false;
  }
  else {
    pCVar2 = ((pCVar5->fields).Special)->klass;
    bVar1 = (TypeInfo_Characters_EscapeSpecial->_2).typeHierarchyDepth;
    if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_EscapeSpecial))
    {
      bVar1 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
      pCVar2 = ((((__this->fields)._human)->fields).Special)->klass;
      if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) {
        pCVar5 = (__this->fields)._human;
        if ((pCVar5->fields)._state == 7) goto label_1820fe541;
      }
      else {
        pCVar5 = (__this->fields)._human;
      }
    }
    else {
      pCVar5 = (__this->fields)._human;
    }
    if (((((pCVar5->fields).CarryState == 1) ||
         (pCVar5 = (__this->fields)._human, (pCVar5->fields)._state == 8)) || ((pCVar5->fields)._state == 1))
       || ((pCVar5->fields)._state == 9)) goto label_1820fe541;
    bVar6 = (pCVar5->fields).Dead == false;
  }
  bVar7 = false;
  pCVar2 = ((pCVar5->fields).Special)->klass;
  bVar1 = (TypeInfo_Characters_BaseHoldAttackSpecial->_2).typeHierarchyDepth;
  if (((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
      ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
       (Il2CppClass *)TypeInfo_Characters_BaseHoldAttackSpecial)) &&
     ((pCVar5 = (__this->fields)._human, (pCVar5->fields).IsAttackableState != false &&
      ((pCVar5->fields)._state != 7)))) {
    if ((pCVar5->fields)._state == 1) {
      pCVar2 = ((pCVar5->fields).Special)->klass;
      bVar1 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
      if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_StockSpecial)
         ) goto label_1820fe5fd;
    }
    else if ((pCVar5->fields)._state == 8) goto label_1820fe5fd;
    pCVar5 = (__this->fields)._human;
    if ((pCVar5->fields).CarryState != 1) {
      bVar7 = (pCVar5->fields).Dead == false;
    }
  }
label_1820fe5fd:
  pCVar3 = (((__this->fields)._human)->fields).Special;
  pCVar2 = pCVar3->klass;
  pMVar4 = (pCVar2->vtable)._12_SetInput.method;
  if (!bVar7 && !bVar6) {
    (*(pCVar2->vtable)._12_SetInput.methodPtr)(pCVar3,(System_Type_o *)0x0,pMVar4);
    return;
  }
  (*(pCVar2->vtable)._12_SetInput.methodPtr)(pCVar3,(System_Type_o *)(ulonglong)activate,pMVar4);
  return;
}


// Controllers.HumanAIController$$GetChaseAngleGivenDirection
// il2cpp: float Controllers_HumanAIController__GetChaseAngleGivenDirection (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o direction, bool useMoveAngle, const MethodInfo* method);
// 0x1820ffa90

float Controllers_HumanAIController__GetChaseAngleGivenDirection
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o *direction,bool useMoveAngle,
                MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  Characters_Human_o *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (direction->fields).x - (pUVar1->zeroVector).fields.x;
  fVar5 = (direction->fields).y - (pUVar1->zeroVector).fields.y;
  fVar3 = (direction->fields).z - (pUVar1->zeroVector).fields.z;
  if (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 < 9.9999994e-11) {
    pCVar2 = (__this->fields)._human;
    if (pCVar2 == (Characters_Human_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar3 = (pCVar2->fields).TargetAngle;
  }
  else {
    local_18.x = (direction->fields).x;
    local_18.y = (direction->fields).y;
    local_18.z = (direction->fields).z;
    fVar3 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o *)&local_18,
                       (MethodInfo *)0x0);
  }
  if (useMoveAngle) {
    fVar3 = fVar3 + (__this->fields)._moveAngle;
  }
  if (360.0 < fVar3) {
    fVar3 = fVar3 + -360.0;
  }
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + 360.0;
  }
  return fVar3;
}


// Controllers.HumanAIController$$GetChaseAngle
// il2cpp: float Controllers_HumanAIController__GetChaseAngle (Controllers_HumanAIController_o* __this, UnityEngine_Vector3_o position, bool useMoveAngle, const MethodInfo* method);
// 0x1820ffba0

float Controllers_HumanAIController__GetChaseAngle
                (Controllers_HumanAIController_o *__this,UnityEngine_Vector3_o *position,bool useMoveAngle,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_BaseCharacter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_48 [5];
  
  pCVar5 = (__this->fields)._character;
  if (((pCVar5 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar6->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar8 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)local_48,__this_00,(MethodInfo *)0x0);
    uVar1 = (position->fields).x;
    uVar3 = (position->fields).y;
    uVar2 = (pUVar8->fields).x;
    uVar4 = (pUVar8->fields).y;
    fVar10 = (position->fields).z - (pUVar8->fields).z;
    local_48[0].y = (float)uVar3 - (float)uVar4;
    local_48[0].x = (float)uVar1 - (float)uVar2;
    local_48[0].z = fVar10;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    local_48[0].z = (float)il2cpp_runtime_helper_180546a40(local_48,0);
    if (local_48[0].z <= 1e-05) {
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar9 = (pUVar7->zeroVector).fields.x;
      fVar11 = (pUVar7->zeroVector).fields.y;
      local_48[0].z = (pUVar7->zeroVector).fields.z;
    }
    else {
      fVar9 = ((float)uVar1 - (float)uVar2) / local_48[0].z;
      fVar11 = ((float)uVar3 - (float)uVar4) / local_48[0].z;
      local_48[0].z = fVar10 / local_48[0].z;
    }
    local_48[0].y = fVar11;
    local_48[0].x = fVar9;
    fVar10 = Controllers_HumanAIController__GetChaseAngleGivenDirection
                       (__this,(UnityEngine_Vector3_o *)local_48,useMoveAngle,(MethodInfo *)0x0);
    return fVar10;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$MoveToPosition
// il2cpp: void Controllers_HumanAIController__MoveToPosition (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100330

void Controllers_HumanAIController__MoveToPosition(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_Human_o *pCVar5;
  Characters_BaseCharacter_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_o local_48 [5];
  
  pCVar5 = (__this->fields)._human;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    (pCVar5->fields).HasDirection = true;
    pCVar5 = (__this->fields)._human;
    if (pCVar5 != (Characters_Human_o *)0x0) {
      if (((((pCVar5->fields).IsWalk == false) || ((pCVar5->fields).MountState != 0)) ||
          ((pCVar5->fields)._state != 0)) || ((pCVar5->fields).Grounded == false)) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = 0.25;
      }
      (pCVar5->fields).TargetMagnitude = fVar10;
      fVar10 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
      (__this->fields)._moveAngle = fVar10;
      if ((__this->fields)._usePathfinding == false) {
        pCVar6 = (__this->fields)._character;
        if (((pCVar6 == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar7 = (pCVar6->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
           (__this_00 = (pUVar7->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
        goto label_182100541;
        uVar1 = (__this->fields)._targetPosition.fields.x;
        uVar3 = (__this->fields)._targetPosition.fields.y;
        fVar10 = (__this->fields)._targetPosition.fields.z;
        pUVar9 = UnityEngine_Transform__get_position(local_48,__this_00,(MethodInfo *)0x0);
        uVar2 = (pUVar9->fields).x;
        uVar4 = (pUVar9->fields).y;
        fVar10 = fVar10 - (pUVar9->fields).z;
        local_58.y = (float)uVar3 - (float)uVar4;
        local_58.x = (float)uVar1 - (float)uVar2;
        local_58.z = fVar10;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        local_58.z = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
        if (local_58.z <= 1e-05) {
          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar11 = (pUVar8->zeroVector).fields.x;
          fVar12 = (pUVar8->zeroVector).fields.y;
          local_58.z = (pUVar8->zeroVector).fields.z;
        }
        else {
          fVar11 = ((float)uVar1 - (float)uVar2) / local_58.z;
          fVar12 = ((float)uVar3 - (float)uVar4) / local_58.z;
          local_58.z = fVar10 / local_58.z;
        }
        local_58.y = fVar12;
        local_58.x = fVar11;
        fVar10 = Controllers_HumanAIController__GetChaseAngleGivenDirection
                           (__this,(UnityEngine_Vector3_o *)&local_58,true,(MethodInfo *)0x0);
      }
      else {
        local_58.x = (__this->fields)._targetPosition.fields.x;
        local_58.y = (__this->fields)._targetPosition.fields.y;
        local_58.z = (__this->fields)._targetPosition.fields.z;
        pUVar9 = Controllers_BaseAIController__GetAgentNavDirection
                           (local_48,(Controllers_BaseAIController_o *)__this,
                            (UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        local_58.x = (pUVar9->fields).x;
        local_58.y = (pUVar9->fields).y;
        local_58.z = (pUVar9->fields).z;
        fVar10 = Controllers_HumanAIController__GetChaseAngleGivenDirection
                           (__this,(UnityEngine_Vector3_o *)&local_58,true,(MethodInfo *)0x0);
      }
      (__this->fields)._movementHeading = fVar10;
      pCVar5 = (__this->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        (pCVar5->fields).TargetAngle = fVar10;
        return;
      }
    }
  }
label_182100541:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$SwitchAIState
// il2cpp: void Controllers_HumanAIController__SwitchAIState (Controllers_HumanAIController_o* __this, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x182100d90

void Controllers_HumanAIController__SwitchAIState
               (Controllers_HumanAIController_o *__this,Controllers_HumanAIState_o *aiState,MethodInfo *method
               )

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Controllers_HumanAIState_o *pCVar3;
  System_Nullable_Vector3__o *pSVar4;
  
  if (Il2CppMethodInitialized_184346acc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_MoveTo);
    Il2CppMethodInitialized_184346acc = '\x01';
  }
  if (aiState != (Controllers_HumanAIState_o *)0x0) {
    (__this->fields)._idleTimeLeft = 0.0;
    method = (MethodInfo *)aiState->klass;
    bVar1 = (TypeInfo_Controllers_HumanAIStates_MoveTo->_2).typeHierarchyDepth;
    if ((bVar1 <= (((Controllers_HumanAIState_c *)method)->_2).typeHierarchyDepth) &&
       ((((Controllers_HumanAIState_c *)method)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo)) goto label_182100e12;
  }
  (__this->fields)._moveToActive = false;
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
label_182100e12:
  if (aiState != (__this->fields).AIState) {
    if (0.0 < (__this->fields)._recoveryTimeLeft) {
      pCVar2 = (__this->fields)._human;
      if (pCVar2 == (Characters_Human_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pCVar2->fields).TargetAngle = (__this->fields)._movementHeading;
    }
    (__this->fields)._lastMovementPosition.fields.hasValue = false;
    *(undefined3 *)&(__this->fields)._lastMovementPosition.fields.field_0x1 = 0;
    (__this->fields)._lastMovementPosition.fields.value.fields.x = 0.0;
    pSVar4 = &(__this->fields)._lastMovementPosition;
    (pSVar4->fields).value.fields.y = 0.0;
    (pSVar4->fields).value.fields.z = 0.0;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    if (aiState != (Controllers_HumanAIState_o *)0x0) {
      (*(aiState->klass->vtable)._6_OnStateEntry.methodPtr)
                (aiState,(System_Type_o *)(aiState->klass->vtable)._6_OnStateEntry.method,method);
    }
    pCVar3 = (__this->fields).AIState;
    (__this->fields).AIState = aiState;
    Il2CppCodeGenWriteBarrier(&(__this->fields).AIState,aiState);
    if (pCVar3 != (Controllers_HumanAIState_o *)0x0) {
      (*(pCVar3->klass->vtable)._8_OnStateExit.methodPtr)
                (pCVar3,(System_Type_o *)(pCVar3->klass->vtable)._8_OnStateExit.method,method);
    }
  }
  return;
}


// Controllers.HumanAIController$$SetAIState
// il2cpp: void Controllers_HumanAIController__SetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, Controllers_HumanAIState_o* aiState, const MethodInfo* method);
// 0x182100aa0

void Controllers_HumanAIController__SetAIState
               (Controllers_HumanAIController_o *__this,System_String_o *name,
               Controllers_HumanAIState_o *aiState,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_184346acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
    Il2CppMethodInitialized_184346acd = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)name,(Il2CppObject *)aiState,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$HasAIState
// il2cpp: bool Controllers_HumanAIController__HasAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1820ffd30

bool Controllers_HumanAIController__HasAIState
               (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__HumanAIState__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    Il2CppMethodInitialized_184346ace = '\x01';
  }
  __this_00 = (__this->fields).AIStates;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__HumanAIState__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$GetAIState
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIController__GetAIState (Controllers_HumanAIController_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1820ffa30

Controllers_HumanAIState_o *
Controllers_HumanAIController__GetAIState
          (Controllers_HumanAIController_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Controllers_HumanAIState_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346acf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    Il2CppMethodInitialized_184346acf = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)name,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$AssignHumanTarget
// il2cpp: void Controllers_HumanAIController__AssignHumanTarget (Controllers_HumanAIController_o* __this, Characters_ITargetable_o* target, const MethodInfo* method);
// 0x1820fe790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820fe84d: nop dword ptr [rax]

void Controllers_HumanAIController__AssignHumanTarget
               (Controllers_HumanAIController_o *__this,Characters_ITargetable_o *target,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Characters_ITargetable_c *pCVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Vector3_o *pUVar6;
  ushort uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_184346ad0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_184346ad0 = '\x01';
  }
  Controllers_BaseAIController__AssignTarget
            ((Controllers_BaseAIController_o *)__this,target,0.0,(MethodInfo *)0x0);
  (__this->fields)._idleTimeLeft = 0.0;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar10 = (pUVar2->zeroVector).fields.y;
  fVar9 = (pUVar2->zeroVector).fields.z;
  (__this->fields).TargetVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields).TargetVelocity.fields.y = fVar10;
  (__this->fields).TargetVelocity.fields.z = fVar9;
  if (target == (Characters_ITargetable_o *)0x0) {
    uVar8._0_1_ = false;
    uVar8._1_3_ = 0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  else {
    pCVar3 = target->klass;
    uVar1 = (pCVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pCVar3->_1).interfaceOffsets;
      uVar7 = 0;
      do {
        if (pIVar4[uVar7].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable) {
          pVVar5 = pCVar3->vtable + (pIVar4[uVar7].offset + 1);
          goto label_1820fe875;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)target,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_1820fe875:
    pUVar6 = (*pVVar5->methodPtr)((UnityEngine_Vector3_o *)&local_28,(Il2CppObject *)target,pVVar5->method);
    local_28.z = (pUVar6->fields).z;
    local_28.x = (pUVar6->fields).x;
    local_28.y = (pUVar6->fields).y;
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value.fields.x = 0.0;
    local_18.value.fields.y = 0.0;
    local_18.value.fields.z = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
               (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
    uVar8 = local_18._0_4_;
    fVar9 = local_18.value.fields.x;
    fVar10 = local_18.value.fields.y;
    fVar11 = local_18.value.fields.z;
  }
  (__this->fields)._targetLastPosition.fields.hasValue = SUB41(uVar8,0);
  *(int3 *)&(__this->fields)._targetLastPosition.fields.field_0x1 = SUB43(uVar8,1);
  (__this->fields)._targetLastPosition.fields.value.fields.x = fVar9;
  (__this->fields)._targetLastPosition.fields.value.fields.y = fVar10;
  (__this->fields)._targetLastPosition.fields.value.fields.z = fVar11;
  (__this->fields)._trackedTarget = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._trackedTarget,target);
  return;
}


// Controllers.HumanAIController$$BeginMove
// il2cpp: void Controllers_HumanAIController__BeginMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820fef30

void Controllers_HumanAIController__BeginMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Characters_Human_o *pCVar3;
  System_Collections_Generic_Dictionary_string__HumanAIState__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Nullable_Vector3__o *pSVar5;
  float fVar6;
  System_String_o *pSVar7;
  bool bVar8;
  Controllers_HumanAIStates_MoveTo_o *__this_01;
  Controllers_HumanAIState_o *pCVar9;
  Characters_ITargetable_o *target;
  
  if (Il2CppMethodInitialized_184346ad1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_MoveTo);
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    Il2CppMethodInitialized_184346ad1 = '\x01';
  }
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar3 = (__this->fields)._human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto label_1820ff136;
    (pCVar3->fields).TargetAngle = (__this->fields)._movementHeading;
  }
  target = (Characters_ITargetable_o *)0x0;
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
  Controllers_HumanAIController__AssignHumanTarget(__this,target,(MethodInfo *)0x0);
  fVar6 = (__this->fields)._moveToPosition.fields.y;
  fVar2 = (__this->fields)._moveToPosition.fields.z;
  (__this->fields)._targetPosition.fields.x = (__this->fields)._moveToPosition.fields.x;
  (__this->fields)._targetPosition.fields.y = fVar6;
  (__this->fields)._targetPosition.fields.z = fVar2;
  pSVar7 = "MoveTo";
  if (Il2CppMethodInitialized_184346ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
    Il2CppMethodInitialized_184346ace = '\x01';
  }
  __this_00 = (__this->fields).AIStates;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__HumanAIState__o *)0x0) goto label_1820ff136;
  bVar8 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)pSVar7
                     ,(MethodInfo_1455450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ContainsKey);
  if (!bVar8) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo);
    Controllers_HumanAIStates_MoveTo___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (Controllers_HumanAIStates_MoveTo_o *)0x0) goto label_1820ff136;
    pCVar9 = (*(__this_01->klass->vtable)._5_Init.methodPtr)
                       (__this_01,(__this->fields)._human,(__this_01->klass->vtable)._5_Init.method);
    pSVar7 = "MoveTo";
    if (Il2CppMethodInitialized_184346acd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
      Il2CppMethodInitialized_184346acd = '\x01';
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820ff136;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)pCVar9,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_set_Item);
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIStates;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar4,(Il2CppObject *)"MoveTo",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    if (pCVar9 != (Controllers_HumanAIState_o *)0x0) {
      bVar1 = (TypeInfo_Controllers_HumanAIStates_MoveTo->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar9->klass->_2).typeHierarchyDepth) &&
         ((pCVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Controllers_HumanAIStates_MoveTo)) {
        *(float *)&(*(uint64_t *)((char *)pCVar9 + 0x20)) = (__this->fields)._moveToRange;
        Controllers_HumanAIController__SwitchAIState(__this,pCVar9,(MethodInfo *)0x0);
        if ((__this->fields)._moveToIgnoreEnemies != false) {
          Controllers_HumanAIController__StopInput(__this,(MethodInfo *)0x0);
        }
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pCVar9,TypeInfo_Controllers_HumanAIStates_MoveTo);
    }
  }
label_1820ff136:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$Idle
// il2cpp: void Controllers_HumanAIController__Idle (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182100040

void Controllers_HumanAIController__Idle(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Nullable_Vector3__o *pSVar2;
  
  if (0.0 < (__this->fields)._recoveryTimeLeft) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_1821000c8;
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
  Controllers_BaseAIController__ClearTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).HasDirection = false;
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      (pCVar1->fields).TargetMagnitude = 0.0;
      Controllers_HumanAIController__SwitchAIState(__this,(Controllers_HumanAIState_o *)0x0,(MethodInfo *)0x0)
      ;
      return;
    }
  }
label_1821000c8:
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$CompleteMove
// il2cpp: void Controllers_HumanAIController__CompleteMove (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x1820ff300

void Controllers_HumanAIController__CompleteMove(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Controllers_HumanAICallback_o *pCVar1;
  System_Action_o *pSVar2;
  
  pCVar1 = (__this->fields).Callbacks;
  if (pCVar1 != (Controllers_HumanAICallback_o *)0x0) {
    pSVar2 = (pCVar1->fields).MoveToCallback;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code);
    }
    Controllers_HumanAIController__Idle(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$.ctor
// il2cpp: void Controllers_HumanAIController___ctor (Controllers_HumanAIController_o* __this, const MethodInfo* method);
// 0x182101890

void Controllers_HumanAIController___ctor(Controllers_HumanAIController_o *__this,MethodInfo *method)

{
  Controllers_HumanAICallback_o *__this_00;
  System_Collections_Generic_Dictionary_string__HumanAIState__o *__this_01;
  System_Collections_Generic_HashSet_HumanState__o *__this_02;
  
  if (Il2CppMethodInitialized_184346ad2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_HumanAIState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_HumanState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAICallback);
    Il2CppMethodInitialized_184346ad2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAICallback);
  Controllers_HumanAICallback___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).Callbacks = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Callbacks,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_HumanAIState);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_ctor);
  (__this->fields).AIStates = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AIStates,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_HumanState)
  ;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_02,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor);
  if (__this_02 != (System_Collections_Generic_HashSet_HumanState__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_02,7,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_02,10,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_02,8,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_02,4,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_02,9,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_02,0xf,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    (__this->fields)._illegalWeaponStates = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._illegalWeaponStates,__this_02);
    (__this->fields)._usePathfinding = true;
    (__this->fields).DetectRange = 10000.0;
    (__this->fields).FocusTime = 5.0;
    (__this->fields).FocusRange = INFINITY;
    (__this->fields)._aiEnabled = true;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIController$$.cctor
// il2cpp: void Controllers_HumanAIController___cctor (const MethodInfo* method);
// 0x182101760

void Controllers_HumanAIController___cctor(MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_184346ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346ad3 = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
        2 < (uint)layers->max_length)) &&
       ((layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        3 < (uint)layers->max_length &&
        (layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
        4 < (uint)layers->max_length)))) {
      layers->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Controllers_HumanAIController->static_fields->HookMask).fields.m_Mask =
           (int32_t)UVar1.fields.m_Mask;
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


