// Type: Cameras.BaseCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/BaseCamera.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/BaseCamera.cs  [CHANGED since prior version]
// --------------------------------

// Cameras.BaseCamera$$Awake
// il2cpp: void Cameras_BaseCamera__Awake (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x41427c0

void Cameras_BaseCamera__Awake(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o **ppUVar1;
  uint uVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Camera_o *pUVar4;
  UnityEngine_Skybox_o *pUVar5;
  undefined1 auVar6 [16];
  
  if (DAT_05704993 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseComponentCache);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&MethodInfo_Skybox_GetComponent_Skybox);
    DAT_05704993 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UnityEngine_Camera_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Camera_GetComponent_Camera);
    ppUVar1 = &(__this->fields).Camera;
    (__this->fields).Camera = pUVar4;
    il2cpp_runtime_glue(ppUVar1);
    pUVar4 = (__this->fields).Camera;
    if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
      uVar2 = UnityEngine_Camera__get_depthTextureMode(pUVar4,(MethodInfo *)0x0);
      UnityEngine_Camera__set_depthTextureMode(pUVar4,uVar2 | 1,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = (UnityEngine_Skybox_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Skybox_GetComponent_Skybox);
        (__this->fields).Skybox = pUVar5;
        il2cpp_runtime_glue(&(__this->fields).Skybox);
        pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        auVar6 = il2cpp_runtime_glue(TypeInfo_BaseComponentCache);
        Utility_BaseComponentCache___ctor(auVar6._0_8_,pUVar3,auVar6._8_8_);
        (__this->fields).Cache = auVar6._0_8_;
        il2cpp_runtime_glue(&(__this->fields).Cache);
        if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_FullscreenHandler__UpdateSound((MethodInfo *)0x0);
        pUVar4 = *ppUVar1;
        if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__set_fieldOfView(pUVar4,50.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.BaseCamera$$OnFinishLoading
// il2cpp: void Cameras_BaseCamera__OnFinishLoading (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4142b60

void Cameras_BaseCamera__OnFinishLoading(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._6_SetDefaultCameraPosition.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._6_SetDefaultCameraPosition.method,in_RDX,
             vtable_dispatch);
  return;
}


// Cameras.BaseCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_BaseCamera__SetDefaultCameraPosition (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4142b80

void Cameras_BaseCamera__SetDefaultCameraPosition(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.BaseCamera$$LateUpdate
// il2cpp: void Cameras_BaseCamera__LateUpdate (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4142b90

void Cameras_BaseCamera__LateUpdate(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.BaseCamera$$.ctor
// il2cpp: void Cameras_BaseCamera___ctor (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4142ba0

void Cameras_BaseCamera___ctor(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


