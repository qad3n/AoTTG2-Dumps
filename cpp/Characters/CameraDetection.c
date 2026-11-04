// Type: Characters.CameraDetection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/CameraDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/CameraDetection.cs
// --------------------------------

// Characters.CameraDetection$$.ctor
// il2cpp: void Characters_CameraDetection___ctor (Characters_CameraDetection_o* __this, Cameras_InGameCamera_o* camera, const MethodInfo* method);
// 0x182113490

void Characters_CameraDetection___ctor
               (Characters_CameraDetection_o *__this,Cameras_InGameCamera_o *camera,MethodInfo *method)

{
  Characters_BaseDetection___ctor
            ((Characters_BaseDetection_o *)__this,(Characters_BaseCharacter_o *)0x0,false,false,
             (MethodInfo *)0x0);
  (__this->fields)._camera = camera;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._camera,camera);
  return;
}


// Characters.CameraDetection$$get_RequireValidTarget
// il2cpp: bool Characters_CameraDetection__get_RequireValidTarget (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_CameraDetection__get_RequireValidTarget(Characters_CameraDetection_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.CameraDetection$$IsNullOrDead
// il2cpp: bool Characters_CameraDetection__IsNullOrDead (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_CameraDetection__IsNullOrDead(Characters_CameraDetection_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.CameraDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_CameraDetection__GetPosition (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x182113250

UnityEngine_Vector3_o *
Characters_CameraDetection__GetPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_CameraDetection_o *__this,
          MethodInfo *method)

{
  float fVar1;
  Cameras_InGameCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector3_o local_18;
  
  pCVar2 = (__this->fields)._camera;
  if (((pCVar2 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar4 = (pUVar5->fields).y;
    fVar1 = (pUVar5->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar5->fields).x;
    (__return_storage_ptr__->fields).y = fVar4;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Characters.CameraDetection$$GetSpeed
// il2cpp: float Characters_CameraDetection__GetSpeed (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x1821132a0

float Characters_CameraDetection__GetSpeed(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346b7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b7d = '\x01';
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
      return 0.0;
    }
    pCVar1 = (__this->fields)._camera;
    if ((pCVar1 != (Cameras_InGameCamera_o *)0x0) &&
       (pCVar2 = (pCVar1->fields)._follow, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
      return (pCVar2->fields).CurrentSpeed;
    }
  }
  ThrowNullReferenceException();
}


// Characters.CameraDetection$$RefreshFollow
// il2cpp: void Characters_CameraDetection__RefreshFollow (Characters_CameraDetection_o* __this, const MethodInfo* method);
// 0x1821133f0

void Characters_CameraDetection__RefreshFollow(Characters_CameraDetection_o *__this,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346b7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b7e = '\x01';
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
                (pCVar2,0.0,(pCVar2->klass->vtable)._70_OnDistanceUpdate.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.CameraDetection$$OnRecalculate
// il2cpp: void Characters_CameraDetection__OnRecalculate (Characters_CameraDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x182113340

void Characters_CameraDetection__OnRecalculate
               (Characters_CameraDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  Characters_BaseCharacter_o *y;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b7f = '\x01';
  }
  pCVar1 = (__this->fields)._camera;
  if (pCVar1 != (Cameras_InGameCamera_o *)0x0) {
    y = (pCVar1->fields)._follow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (!bVar2) {
      if (character == (Characters_BaseCharacter_o *)0x0) goto label_1821133e9;
      bVar2 = Characters_BaseCharacter__IsMainCharacter(character,(MethodInfo *)0x0);
      if (!bVar2) goto label_1821133c3;
    }
    if (character != (Characters_BaseCharacter_o *)0x0) {
      distance = 0.0;
label_1821133c3:
      (*(character->klass->vtable)._70_OnDistanceUpdate.methodPtr)
                (character,distance,(character->klass->vtable)._70_OnDistanceUpdate.method);
      return;
    }
  }
label_1821133e9:
  ThrowNullReferenceException();
}


