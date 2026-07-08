// Type: Characters.CameraDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/CameraDetection.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Detection/CameraDetection.cs  [CHANGED since prior version]
// --------------------------------

// Characters.CameraDetection$$.ctor
// il2cpp: void Characters_CameraDetection___ctor (Characters_CameraDetection_o* __this, Cameras_InGameCamera_o* camera, const MethodInfo* method);
// 0x3fa0d90

void Characters_CameraDetection___ctor
               (Characters_CameraDetection_o *__this,Cameras_InGameCamera_o *camera,
               MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor
            ((Characters_AIHumanDetection_o *)__this,(Characters_BaseCharacter_o *)0x0,0,1,in_R8);
  (__this->fields)._camera = camera;
  il2cpp_runtime_glue(&(__this->fields)._camera,camera);
  return;
}


// Characters.CameraDetection$$IsNullOrDead
// il2cpp: bool Characters_CameraDetection__IsNullOrDead (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x3fa0dd0

bool_conflict
Characters_CameraDetection__IsNullOrDead(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.CameraDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_CameraDetection__GetPosition (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x3fa0de0

UnityEngine_Vector3_o
Characters_CameraDetection__GetPosition(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar3;
  
  pCVar1 = (__this->fields)._camera;
  if (((pCVar1 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CameraDetection$$GetSpeed
// il2cpp: float Characters_CameraDetection__GetSpeed (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x3fa0e10

float Characters_CameraDetection__GetSpeed(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_0570402a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570402a = '\x01';
  }
  pCVar1 = (__this->fields)._camera;
  if (pCVar1 != (Cameras_InGameCamera_o *)0x0) {
    pCVar2 = (pCVar1->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields)._camera;
      if ((pCVar1 == (Cameras_InGameCamera_o *)0x0) ||
         (pCVar2 = (pCVar1->fields)._follow, pCVar2 == (Characters_BaseCharacter_o *)0x0))
      goto LAB_03fa0e8d;
      fVar4 = *(float *)&(pCVar2->fields).Animation;
    }
    return fVar4;
  }
LAB_03fa0e8d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CameraDetection$$OnRecalculate
// il2cpp: void Characters_CameraDetection__OnRecalculate (Characters_CameraDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x3fa0ea0

void Characters_CameraDetection__OnRecalculate
               (Characters_CameraDetection_o *__this,Characters_BaseCharacter_o *character,
               float distance,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  MethodInfo *method_00;
  int32_t quality;
  
  if ((character != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)&(character->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    quality = 1;
    if (distance <= 1000.0) {
      quality = (distance <= 500.0) + 2 + (uint)(distance <= 500.0);
    }
    Characters_AnimationHandler__SetQuality(__this_00,quality,method);
    Characters_AnimationHandler__SetShadows(__this_00,(uint)(distance < 1000.0),method_00);
    *(bool *)&(character->fields).FootstepsEnabled =
         distance < (float)(character->fields).SoundsEnabled;
    *(bool *)((long)&(character->fields).FootstepsEnabled + 1) =
         distance < (character->fields).MaxFootstepDistance;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


