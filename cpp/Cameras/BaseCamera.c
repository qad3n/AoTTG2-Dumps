// Type: Cameras.BaseCamera
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/BaseCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/BaseCamera.cs
// --------------------------------

// Cameras.BaseCamera$$Awake
// il2cpp: void Cameras_BaseCamera__Awake (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x1822eaa90

void Cameras_BaseCamera__Awake(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_Skybox_o *value;
  Utility_BaseComponentCache_o *__this_00;
  
  if (Il2CppMethodInitialized_184347678 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Skybox);
    Il2CppMethodInitialized_184347678 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Camera);
    (__this->fields).Camera = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Camera,pUVar3);
    pUVar3 = (__this->fields).Camera;
    if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
      uVar1 = UnityEngine_Camera__get_depthTextureMode(pUVar3,(MethodInfo *)0x0);
      UnityEngine_Camera__set_depthTextureMode(pUVar3,uVar1 | 1,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        value = UnityEngine_GameObject__GetComponent_object_
                          (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Skybox);
        (__this->fields).Skybox = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Skybox,value);
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseComponentCache);
        Utility_BaseComponentCache___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
        (__this->fields).Cache = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Cache,__this_00);
        if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
        }
        ApplicationManagers_FullscreenHandler__UpdateSound((MethodInfo *)0x0);
        pUVar3 = (__this->fields).Camera;
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
// 0x1821b9e00

void
Cameras_BaseCamera__OnFinishLoading_21b9e00(Cameras_BaseCamera_o* __this, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (*(__this->klass->vtable)._6_Eval.methodPtr)(__this,(__this->klass->vtable)._6_Eval.method);
  return pIVar1;
}


// Cameras.BaseCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_BaseCamera__SetDefaultCameraPosition (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x180547020

void
Cameras_BaseCamera__SetDefaultCameraPosition(Cameras_BaseCamera_o* __this, MethodInfo* method)

{
  return;
}


// Cameras.BaseCamera$$LateUpdate
// il2cpp: void Cameras_BaseCamera__LateUpdate (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x180547020

void
Cameras_BaseCamera__LateUpdate(Cameras_BaseCamera_o* __this, MethodInfo* method)

{
  return;
}


// Cameras.BaseCamera$$.ctor
// il2cpp: void Cameras_BaseCamera___ctor (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x180528540

void
Cameras_BaseCamera___ctor(Cameras_BaseCamera_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


