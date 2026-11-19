// Type: Cameras.BaseCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Cameras/BaseCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/BaseCamera.cs
// --------------------------------

// Cameras.BaseCamera$$Awake
// il2cpp: void Cameras_BaseCamera__Awake (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x5dcb4e0

void Cameras_BaseCamera__Awake(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o **targetAddress;
  uint uVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_Skybox_o *pUVar4;
  Utility_BaseComponentCache_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Skybox);
    Il2CppMethodInitialized_075481f5 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Camera);
    targetAddress = &(__this->fields).Camera;
    (__this->fields).Camera = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar3 = (__this->fields).Camera;
    if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
      uVar1 = UnityEngine_Camera__get_depthTextureMode(pUVar3,(MethodInfo *)0x0);
      UnityEngine_Camera__set_depthTextureMode(pUVar3,uVar1 | 1,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Skybox
                           );
        (__this->fields).Skybox = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Skybox);
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseComponentCache);
        Utility_BaseComponentCache___ctor(__this_00,pUVar2,method_00);
        (__this->fields).Cache = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Cache);
        if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
        }
        ApplicationManagers_FullscreenHandler__UpdateSound((MethodInfo *)0x0);
        pUVar3 = *targetAddress;
        if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__set_fieldOfView(pUVar3,50.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.BaseCamera$$OnFinishLoading
// il2cpp: void Cameras_BaseCamera__OnFinishLoading (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x5dcb860

void Cameras_BaseCamera__OnFinishLoading(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._6_SetDefaultCameraPosition.methodPtr)
            (__this,(__this->klass->vtable)._6_SetDefaultCameraPosition.method);
  return;
}


// Cameras.BaseCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_BaseCamera__SetDefaultCameraPosition (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x5dcb880

void Cameras_BaseCamera__SetDefaultCameraPosition(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.BaseCamera$$LateUpdate
// il2cpp: void Cameras_BaseCamera__LateUpdate (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x5dcb890

void Cameras_BaseCamera__LateUpdate(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.BaseCamera$$.ctor
// il2cpp: void Cameras_BaseCamera___ctor (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x5dcb8a0

void Cameras_BaseCamera___ctor(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


