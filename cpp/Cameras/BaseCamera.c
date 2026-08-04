// Type: Cameras.BaseCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/BaseCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/BaseCamera.cs
// --------------------------------

// Cameras.BaseCamera$$Awake
// il2cpp: void Cameras_BaseCamera__Awake (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x44757d0

void Cameras_BaseCamera__Awake(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o **ppUVar1;
  System_Collections_Generic_List_Collider__o **ppSVar2;
  int32_t *piVar3;
  UnityEngine_Camera_o *pUVar4;
  Il2CppObject *item;
  System_Object_array *pSVar5;
  long lVar6;
  uint uVar7;
  UnityEngine_GameObject_o *pUVar8;
  Cameras_BaseCamera_o *__this_00;
  UnityEngine_Skybox_o *pUVar9;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Object_array *pSVar10;
  UnityEngine_Rigidbody_o *pUVar11;
  Photon_Pun_PhotonView_o *pPVar12;
  ulong uVar13;
  Cameras_BaseCamera_o *__this_03;
  Cameras_BaseCamera_o *pCVar14;
  undefined1 auVar15 [16];
  
  if (g_data_057ae859 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseComponentCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Skybox_GetComponent_Skybox);
    g_data_057ae859 = '\x01';
  }
  __this_00 = (Cameras_BaseCamera_o *)0x0;
  __this_03 = __this;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Cameras_BaseCamera_o *)UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_Camera_GetComponent_Camera);
    ppUVar1 = &(__this->fields).Camera;
    (__this->fields).Camera = (UnityEngine_Camera_o *)__this_00;
    __this_03 = (Cameras_BaseCamera_o *)ppUVar1;
    il2cpp_runtime_helper_022b4080();
    pUVar4 = (__this->fields).Camera;
    if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
      uVar7 = UnityEngine_Camera__get_depthTextureMode(pUVar4,(MethodInfo *)0x0);
      UnityEngine_Camera__set_depthTextureMode(pUVar4,uVar7 | 1,(MethodInfo *)0x0);
      __this_00 = (Cameras_BaseCamera_o *)0x0;
      __this_03 = __this;
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = (UnityEngine_Skybox_o *)UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_Skybox_GetComponent_Skybox);
        (__this->fields).Skybox = pUVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Skybox);
        pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_BaseComponentCache);
        __this_00 = auVar15._0_8_;
        Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this_00,pUVar8,auVar15._8_8_);
        (__this->fields).Cache = (Utility_BaseComponentCache_o *)__this_00;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Cache);
        if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ApplicationManagers_FullscreenHandler__UpdateSound((MethodInfo *)0x0);
        pUVar4 = *ppUVar1;
        __this_03 = (Cameras_BaseCamera_o *)0x0;
        if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__set_fieldOfView(pUVar4,50.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    g_data_057ae8b2 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  ppSVar2 = &((Utility_BaseComponentCache_Fields *)&__this_03->fields)->Colliders;
  ((Utility_BaseComponentCache_Fields *)&__this_03->fields)->Colliders = __this_01;
  il2cpp_runtime_helper_022b4080(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  ((Utility_BaseComponentCache_Fields *)&__this_03->fields)->AudioSources =
       (System_Collections_Generic_Dictionary_string__AudioSource__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&((Utility_BaseComponentCache_Fields *)&__this_03->fields)->AudioSources);
  pCVar14 = __this_03;
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  if (__this_00 != (Cameras_BaseCamera_o *)0x0) {
    pSVar10 = (System_Object_array *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    ((Utility_BaseComponentCache_Fields *)&__this_03->fields)->Transform = (UnityEngine_Transform_o *)pSVar10;
    il2cpp_runtime_helper_022b4080((Utility_BaseComponentCache_Fields *)&__this_03->fields,pSVar10);
    pUVar11 = (UnityEngine_Rigidbody_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody)
    ;
    ((Utility_BaseComponentCache_Fields *)&__this_03->fields)->Rigidbody = pUVar11;
    il2cpp_runtime_helper_022b4080(&((Utility_BaseComponentCache_Fields *)&__this_03->fields)->Rigidbody,pUVar11);
    pPVar12 = (Photon_Pun_PhotonView_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_00,MethodInfo_PhotonView_GetComponent_PhotonView)
    ;
    ((Utility_BaseComponentCache_Fields *)&__this_03->fields)->PhotonView = pPVar12;
    il2cpp_runtime_helper_022b4080(&((Utility_BaseComponentCache_Fields *)&__this_03->fields)->PhotonView,pPVar12);
    pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Collider_GetComponentsInChildren_Collider);
    pCVar14 = __this_00;
    if (pSVar10 != (System_Object_array *)0x0) {
      if ((int)pSVar10->max_length < 1) {
        return;
      }
      uVar13 = 0;
      if ((pSVar10->max_length & 0xffffffff) != 0) {
        do {
          lVar6 = MethodInfo_Void_Add;
          __this_00 = (Cameras_BaseCamera_o *)*ppSVar2;
          pCVar14 = __this_00;
          if (__this_00 == (Cameras_BaseCamera_o *)0x0) goto label_04475b58;
          item = pSVar10->m_Items[uVar13];
          piVar3 = (int32_t *)
                   ((long)&((Utility_BaseComponentCache_Fields *)&__this_00->fields)->Rigidbody + 4);
          *piVar3 = *piVar3 + 1;
          pSVar5 = (System_Object_array *)((Utility_BaseComponentCache_Fields *)&__this_00->fields)->Transform
          ;
          if (pSVar5 == (System_Object_array *)0x0) goto label_04475b58;
          uVar7 = *(uint *)&((Utility_BaseComponentCache_Fields *)&__this_00->fields)->Rigidbody;
          if (uVar7 < (uint)pSVar5->max_length) {
            *(uint *)&((Utility_BaseComponentCache_Fields *)&__this_00->fields)->Rigidbody = uVar7 + 1;
            __this_00 = (Cameras_BaseCamera_o *)(pSVar5->m_Items + (int)uVar7);
            pSVar5->m_Items[(int)uVar7] = item;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          uVar13 = uVar13 + 1;
          uVar7 = (uint)pSVar10->max_length;
          if ((long)(int)uVar7 <= (long)uVar13) {
            return;
          }
        } while (uVar13 < uVar7);
      }
      goto label_04475b5d;
    }
  }
label_04475b58:
  __this_00 = pCVar14;
  il2cpp_runtime_helper_022b2c90();
label_04475b5d:
  il2cpp_runtime_helper_022b2ca0();
  (*(((System_Collections_Generic_List_object__c *)__this_00->klass)->vtable)._6_IndexOf.methodPtr)();
  return;
}


// Cameras.BaseCamera$$OnFinishLoading
// il2cpp: void Cameras_BaseCamera__OnFinishLoading (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4475b70

void Cameras_BaseCamera__OnFinishLoading(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._6_SetDefaultCameraPosition.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._6_SetDefaultCameraPosition.method,in_RDX,vtableDispatch);
  return;
}


// Cameras.BaseCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_BaseCamera__SetDefaultCameraPosition (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4475b90

void Cameras_BaseCamera__SetDefaultCameraPosition(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.BaseCamera$$LateUpdate
// il2cpp: void Cameras_BaseCamera__LateUpdate (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4475ba0

void Cameras_BaseCamera__LateUpdate(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.BaseCamera$$.ctor
// il2cpp: void Cameras_BaseCamera___ctor (Cameras_BaseCamera_o* __this, const MethodInfo* method);
// 0x4475bb0

void Cameras_BaseCamera___ctor(Cameras_BaseCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


