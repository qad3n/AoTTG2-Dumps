// Type: Characters.CameraDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/CameraDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/CameraDetection.cs
// --------------------------------

// Characters.CameraDetection$$.ctor
// il2cpp: void Characters_CameraDetection___ctor (Characters_CameraDetection_o* __this, Cameras_InGameCamera_o* camera, const MethodInfo* method);
// 0x5be5ec0

void Characters_CameraDetection___ctor
               (Characters_CameraDetection_o *__this,Cameras_InGameCamera_o *camera,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor
            ((Characters_AIHumanDetection_o *)__this,(Characters_BaseCharacter_o *)0x0,false,false,in_R8);
  (__this->fields)._camera = camera;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._camera);
  return;
}


// Characters.CameraDetection$$get_RequireValidTarget
// il2cpp: bool Characters_CameraDetection__get_RequireValidTarget (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x5be5ef0

bool Characters_CameraDetection__get_RequireValidTarget
               (Characters_CameraDetection_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.CameraDetection$$IsNullOrDead
// il2cpp: bool Characters_CameraDetection__IsNullOrDead (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x5be5f00

bool Characters_CameraDetection__IsNullOrDead(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.CameraDetection$$OnFixedUpdate
// il2cpp: void Characters_CameraDetection__OnFixedUpdate (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x5be5f10

void Characters_CameraDetection__OnFixedUpdate(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o **targetAddress;
  Cameras_InGameCamera_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  MethodInfo *method_00;
  UnityEngine_Vector3_Fields UVar4;
  
  if (Il2CppMethodInitialized_075475de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475de = '\x01';
  }
  pCVar1 = (__this->fields)._camera;
  if (pCVar1 == (Cameras_InGameCamera_o *)0x0) {
label_05be5fc4:
    ThrowNullReferenceException();
  }
  targetAddress = &(__this->fields)._follow;
  (__this->fields)._follow = (pCVar1->fields)._follow;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pCVar2 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  (__this->fields)._hasFollow = bVar3;
  if (bVar3) {
    pCVar2 = *targetAddress;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05be5fc4;
    method_00 = (pCVar2->klass->vtable)._120_GetCenterPosition.method;
    UVar4 = (UnityEngine_Vector3_Fields)
            (*(pCVar2->klass->vtable)._120_GetCenterPosition.methodPtr)(pCVar2,method_00);
    (__this->fields)._followPosition.fields = UVar4;
  }
  Characters_BaseDetection__OnFixedUpdate((Characters_BaseDetection_o *)__this,method_00);
  return;
}


// Characters.CameraDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_CameraDetection__GetPosition (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x5be5fd0

UnityEngine_Vector3_o
Characters_CameraDetection__GetPosition(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar3;
  
  pCVar1 = (__this->fields)._camera;
  if (((pCVar1 == (Cameras_InGameCamera_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar3;
}


// Characters.CameraDetection$$GetSpeed
// il2cpp: float Characters_CameraDetection__GetSpeed (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x5be6000

float Characters_CameraDetection__GetSpeed(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__this->fields)._hasFollow == false) {
    return 0.0;
  }
  pCVar1 = (__this->fields)._follow;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CurrentSpeed;
}


// Characters.CameraDetection$$RefreshFollow
// il2cpp: void Characters_CameraDetection__RefreshFollow (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x5be6030

void Characters_CameraDetection__RefreshFollow(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075475df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475df = '\x01';
  }
  pCVar1 = (__this->fields)._camera;
  if (pCVar1 != (Cameras_InGameCamera_o *)0x0) {
    pCVar2 = (pCVar1->fields)._follow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields)._camera;
    if ((pCVar1 != (Cameras_InGameCamera_o *)0x0) &&
       (pCVar2 = (pCVar1->fields)._follow, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
      (*(pCVar2->klass->vtable)._70_OnDistanceUpdate.methodPtr)
                (pCVar2,0.0,0.0,(pCVar2->klass->vtable)._70_OnDistanceUpdate.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.CameraDetection$$OnRecalculate
// il2cpp: void Characters_CameraDetection__OnRecalculate (Characters_CameraDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x5be60d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be6136: jmp 0x5be627f

void Characters_CameraDetection__OnRecalculate
               (Characters_CameraDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *y;
  bool bVar3;
  _func_179 *vtableDispatch;
  MethodInfo *pMVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar9;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075475e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475e0 = '\x01';
  }
  y = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (bVar3) {
    if (character == (Characters_BaseCharacter_o *)0x0) {
label_05be627f:
      ThrowNullReferenceException();
    }
  }
  else {
    if (character == (Characters_BaseCharacter_o *)0x0) goto label_05be627f;
    bVar3 = Characters_BaseCharacter__IsMainCharacter(character,(MethodInfo *)0x0);
    if (!bVar3) {
      fVar6 = distance;
      if ((__this->fields)._hasFollow != false) {
        uVar1 = (__this->fields)._followPosition.fields.x;
        uVar2 = (__this->fields)._followPosition.fields.y;
        fVar7 = (__this->fields)._followPosition.fields.z;
        fVar8 = distance;
        UVar9.fields._0_8_ =
             (*(character->klass->vtable)._120_GetCenterPosition.methodPtr)
                       (character,(character->klass->vtable)._120_GetCenterPosition.method);
        if (Il2CppMethodInitialized_0753e7b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7b7 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar5 = (float)uVar2 - UVar9.fields.y;
        fVar7 = fVar7 - fVar8;
        fVar8 = (float)uVar1 - UVar9.fields.x;
        fVar7 = fVar5 * fVar5 + fVar8 * fVar8 + fVar7 * fVar7;
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        if (fVar7 <= distance) {
          fVar6 = fVar7;
        }
      }
      vtableDispatch = (character->klass->vtable)._70_OnDistanceUpdate.methodPtr;
      pMVar4 = (character->klass->vtable)._70_OnDistanceUpdate.method;
      goto label_05be6274;
    }
  }
  vtableDispatch = (character->klass->vtable)._70_OnDistanceUpdate.methodPtr;
  pMVar4 = (character->klass->vtable)._70_OnDistanceUpdate.method;
  distance = 0.0;
  fVar6 = 0.0;
label_05be6274:
  (*vtableDispatch)(character,distance,fVar6,pMVar4);
  return;
}


// Characters.CameraDetection$$GetSoundDistance
// il2cpp: float Characters_CameraDetection__GetSoundDistance (Characters_CameraDetection_o* __this, Characters_BaseCharacter_o* character, float cameraDistance, const MethodInfo* method);
// 0x5be6290

float Characters_CameraDetection__GetSoundDistance
                (Characters_CameraDetection_o *__this,Characters_BaseCharacter_o *character,
                float cameraDistance,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar7;
  float fVar5;
  float fVar6;
  float fStack_18;
  float fStack_14;
  
  if ((__this->fields)._hasFollow != false) {
    if (character == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar1 = (__this->fields)._followPosition.fields.x;
    uVar2 = (__this->fields)._followPosition.fields.y;
    fVar5 = (__this->fields)._followPosition.fields.z;
    fVar6 = cameraDistance;
    UVar7.fields._0_8_ =
         (*(character->klass->vtable)._120_GetCenterPosition.methodPtr)
                   (character,(character->klass->vtable)._120_GetCenterPosition.method);
    if (Il2CppMethodInitialized_0753e7b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b7 = '\x01';
      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar4 = (float)uVar2 - UVar7.fields.y;
    fVar5 = fVar5 - fVar6;
    fVar6 = (float)uVar1 - UVar7.fields.x;
    fVar5 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar5 < 0.0) {
      fVar5 = sqrtf(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    if (fVar5 <= cameraDistance) {
      cameraDistance = fVar5;
    }
  }
  return cameraDistance;
}


