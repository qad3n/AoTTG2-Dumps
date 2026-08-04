// Type: Characters.CameraDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CameraDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/CameraDetection.cs
// --------------------------------

// Characters.CameraDetection$$.ctor
// il2cpp: void Characters_CameraDetection___ctor (Characters_CameraDetection_o* __this, Cameras_InGameCamera_o* camera, const MethodInfo* method);
// 0x42ad630

void Characters_CameraDetection___ctor
               (Characters_CameraDetection_o *__this,Cameras_InGameCamera_o *camera,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor
            ((Characters_AIHumanDetection_o *)__this,(Characters_BaseCharacter_o *)0x0,0,1,in_R8);
  (__this->fields)._camera = camera;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._camera,camera);
  return;
}


// Characters.CameraDetection$$IsNullOrDead
// il2cpp: bool Characters_CameraDetection__IsNullOrDead (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x42ad670

bool_conflict
Characters_CameraDetection__IsNullOrDead(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.CameraDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_CameraDetection__GetPosition (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x42ad680

UnityEngine_Vector3_o
Characters_CameraDetection__GetPosition(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Cameras_InGameCamera_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  long lVar5;
  Characters_AnimationHandler_o *__this_01;
  bool_conflict bVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t quality;
  Characters_BaseCharacter_o *__this_02;
  MethodInfo *in_R8;
  float fVar7;
  ulong uVar8;
  float in_XMM1_Da;
  UnityEngine_Vector3_Fields UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  undefined8 extraout_XMM0_Qa;
  
  pCVar3 = (__this->fields)._camera;
  if (((pCVar3 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar4->fields).Transform, __this = (Characters_CameraDetection_o *)0x0,
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (Characters_BaseCharacter_o *)__this;
  if (g_data_057add98 == '\0') {
    __this_02 = (Characters_BaseCharacter_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057add98 = '\x01';
  }
  pCVar3 = *(Cameras_InGameCamera_o **)&(((Characters_BaseCharacter_o *)__this)->fields).CustomDamage;
  if (pCVar3 != (Cameras_InGameCamera_o *)0x0) {
    __this_02 = (pCVar3->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar8 = 0;
    if ((char)bVar6 != '\0') {
      lVar5 = *(long *)&(((Characters_BaseCharacter_o *)__this)->fields).CustomDamage;
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) goto label_042ad72d;
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc0);
    }
    UVar10.fields.z = in_XMM1_Da;
    UVar10.fields.x = (float)(int)uVar8;
    UVar10.fields.y = (float)(int)(uVar8 >> 0x20);
    return (UnityEngine_Vector3_o)UVar10.fields;
  }
label_042ad72d:
  fVar7 = (float)il2cpp_runtime_helper_022b2c90();
  if (((Characters_BaseCharacter_o *)method != (Characters_BaseCharacter_o *)0x0) &&
     (__this_01 = *(Characters_AnimationHandler_o **)
                   &(((Characters_BaseCharacter_o *)method)->fields)._cameraFPS,
     __this_01 != (Characters_AnimationHandler_o *)0x0)) {
    quality = 1;
    if (fVar7 <= 1000.0) {
      quality = (fVar7 <= 500.0) + 2 + (uint)(fVar7 <= 500.0);
    }
    Characters_AnimationHandler__SetQuality(__this_01,quality,method_00);
    Characters_AnimationHandler__SetShadows(__this_01,(uint)(fVar7 < 1000.0),method_01);
    fVar1 = (float)(((Characters_BaseCharacter_o *)method)->fields).SoundsEnabled;
    UVar11.fields.y = 0.0;
    UVar11.fields.x = fVar1;
    fVar2 = (((Characters_BaseCharacter_o *)method)->fields).MaxFootstepDistance;
    *(bool *)&(((Characters_BaseCharacter_o *)method)->fields).FootstepsEnabled = fVar7 < fVar1;
    *(bool *)((long)&(((Characters_BaseCharacter_o *)method)->fields).FootstepsEnabled + 1) = fVar7 < fVar2;
    UVar11.fields.z = fVar2;
    return (UnityEngine_Vector3_o)UVar11.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseDetection___ctor
            ((Characters_AIHumanDetection_o *)__this_02,(Characters_BaseCharacter_o *)method,0,1,in_R8);
  UVar12.fields.z = in_XMM1_Da;
  UVar12.fields.x = (float)(int)extraout_XMM0_Qa;
  UVar12.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
  return (UnityEngine_Vector3_o)UVar12.fields;
}


// Characters.CameraDetection$$GetSpeed
// il2cpp: float Characters_CameraDetection__GetSpeed (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x42ad6b0

float Characters_CameraDetection__GetSpeed(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  float fVar1;
  Cameras_InGameCamera_o *pCVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t quality;
  Characters_BaseCharacter_o *__this_01;
  MethodInfo *in_R8;
  float fVar5;
  float extraout_XMM0_Da;
  
  __this_01 = (Characters_BaseCharacter_o *)__this;
  if (g_data_057add98 == '\0') {
    __this_01 = (Characters_BaseCharacter_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057add98 = '\x01';
  }
  pCVar2 = (__this->fields)._camera;
  if (pCVar2 != (Cameras_InGameCamera_o *)0x0) {
    __this_01 = (pCVar2->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar5 = 0.0;
    if ((char)bVar4 != '\0') {
      pCVar2 = (__this->fields)._camera;
      if ((pCVar2 == (Cameras_InGameCamera_o *)0x0) ||
         (pCVar3 = (pCVar2->fields)._follow, pCVar3 == (Characters_BaseCharacter_o *)0x0)) goto label_042ad72d;
      fVar5 = *(float *)&(pCVar3->fields).Animation;
    }
    return fVar5;
  }
label_042ad72d:
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  if (((Characters_BaseCharacter_o *)method != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)
                   &(((Characters_BaseCharacter_o *)method)->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    quality = 1;
    if (fVar5 <= 1000.0) {
      quality = (fVar5 <= 500.0) + 2 + (uint)(fVar5 <= 500.0);
    }
    Characters_AnimationHandler__SetQuality(__this_00,quality,method_00);
    Characters_AnimationHandler__SetShadows(__this_00,(uint)(fVar5 < 1000.0),method_01);
    fVar1 = (float)(((Characters_BaseCharacter_o *)method)->fields).SoundsEnabled;
    *(bool *)&(((Characters_BaseCharacter_o *)method)->fields).FootstepsEnabled = fVar5 < fVar1;
    *(bool *)((long)&(((Characters_BaseCharacter_o *)method)->fields).FootstepsEnabled + 1) =
         fVar5 < (((Characters_BaseCharacter_o *)method)->fields).MaxFootstepDistance;
    return fVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseDetection___ctor
            ((Characters_AIHumanDetection_o *)__this_01,(Characters_BaseCharacter_o *)method,0,1,in_R8);
  return extraout_XMM0_Da;
}


// Characters.CameraDetection$$OnRecalculate
// il2cpp: void Characters_CameraDetection__OnRecalculate (Characters_CameraDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x42ad740

void Characters_CameraDetection__OnRecalculate
               (Characters_CameraDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  MethodInfo *method_00;
  int32_t quality;
  MethodInfo *in_R8;
  
  if ((character != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)&(character->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    quality = 1;
    if (distance <= 1000.0) {
      quality = (distance <= 500.0) + 2 + (uint)(distance <= 500.0);
    }
    Characters_AnimationHandler__SetQuality(__this_00,quality,method);
    Characters_AnimationHandler__SetShadows(__this_00,(uint)(distance < 1000.0),method_00);
    *(bool *)&(character->fields).FootstepsEnabled = distance < (float)(character->fields).SoundsEnabled;
    *(bool *)((long)&(character->fields).FootstepsEnabled + 1) =
         distance < (character->fields).MaxFootstepDistance;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseDetection___ctor((Characters_AIHumanDetection_o *)__this,character,0,1,in_R8);
  return;
}


