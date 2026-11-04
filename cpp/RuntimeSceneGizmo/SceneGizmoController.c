// Type: RuntimeSceneGizmo.SceneGizmoController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/SceneGizmoController.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoController.cs
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoController$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x180c7fb50

UnityEngine_Transform_o*
RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform(RuntimeSceneGizmo_SceneGizmoController_o* __this, MethodInfo* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x181dce680

void RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  UnityEngine_Camera_o *pUVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_Color_o local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_1843449ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843449ee = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_181dce700:
    pUVar5 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto label_181dce838;
    value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
  }
  else {
    if (value == (UnityEngine_Transform_o *)0x0) goto label_181dce838;
    bVar2 = (*(value->klass->vtable)._0_Equals.methodPtr)
                      (value,(Il2CppObject *)0x0,(value->klass->vtable)._0_Equals.method);
    if (bVar2) goto label_181dce700;
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar2) {
    (__this->fields).m_referenceTransform = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).m_referenceTransform,value);
    pUVar1 = (__this->fields).m_referenceTransform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
label_181dce838:
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Camera);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto label_181dce838;
      uVar3 = UnityEngine_Camera__get_cullingMask(pUVar5,(MethodInfo *)0x0);
      UnityEngine_Camera__set_cullingMask(pUVar5,uVar3 & 0xfeffffff,(MethodInfo *)0x0);
      iVar4 = UnityEngine_Camera__get_clearFlags(pUVar5,(MethodInfo *)0x0);
      if (iVar4 == 2) {
        pUVar6 = UnityEngine_Camera__get_backgroundColor(&local_18,pUVar5,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).gizmoCamera;
        if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto label_181dce838;
        local_28.fields.r = (pUVar6->fields).r;
        local_28.fields.g = (pUVar6->fields).g;
        local_28.fields.b = (pUVar6->fields).b;
        local_28.fields.a = 0.0;
        UnityEngine_Camera__set_backgroundColor(pUVar5,&local_28,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$get_TargetTexture
// il2cpp: UnityEngine_RenderTexture_o* RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x180a4d3d0

UnityEngine_RenderTexture_o*
RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture(RuntimeSceneGizmo_SceneGizmoController_o* __this, MethodInfo* method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._TargetTexture_k__BackingField.fields;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_TargetTexture
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_RenderTexture_o* value, const MethodInfo* method);
// 0x180a4d750

void
RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture(RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_RenderTexture_o* value, MethodInfo* method)

{
  (__this->fields)._TargetTexture_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._TargetTexture_k__BackingField,value);
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__Awake (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x181dcd2e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dcd61d: jmp 0x181dcd5c0
// asm:   0x181dcd700: jmp 0x181dcd717

void RuntimeSceneGizmo_SceneGizmoController__Awake
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_TextMesh_array *pUVar2;
  int32_t iVar3;
  int iVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_array *pUVar6;
  UnityEngine_RenderTexture_o *__this_00;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_Renderer_array *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  Il2CppObject *pIVar11;
  uint uVar12;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843449ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RenderTexture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform_array);
    il2cpp_codegen_initialize_runtime_metadata(&"HIGHLIGHT_ON");
    il2cpp_codegen_initialize_runtime_metadata(&"_AlphaVal");
    Il2CppMethodInitialized_1843449ef = '\x01';
  }
  pUVar1 = (__this->fields).gizmoCamera;
  if ((pUVar1 != (UnityEngine_Camera_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
    (__this->fields).gizmoCamParent = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).gizmoCamParent,pUVar5);
    pUVar2 = (__this->fields).labels;
    if (pUVar2 != (UnityEngine_TextMesh_array *)0x0) {
      pUVar6 = (UnityEngine_Transform_array *)
               SZArrayNew(TypeInfo_UnityEngine_Transform_array,(uint32_t)pUVar2->max_length);
      (__this->fields).labelsTR = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).labelsTR,pUVar6);
      iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      uVar12 = (int)(((longlong)iVar4 / 6 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f) +
               iVar4 / 6 + (iVar4 >> 0x1f) + -1;
      uVar12 = (int)uVar12 >> 0x10 | uVar12;
      uVar12 = (int)uVar12 >> 8 | uVar12;
      uVar12 = (int)uVar12 >> 4 | uVar12;
      uVar12 = (int)uVar12 >> 2 | uVar12;
      iVar4 = ((int)uVar12 >> 1 | uVar12) + 1;
      iVar3 = 0x200;
      if (iVar4 < 0x200) {
        iVar3 = iVar4;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RenderTexture);
      UnityEngine_RenderTexture___ctor_2ef25e0(__this_00,iVar3,iVar3,0x10,(MethodInfo *)0x0);
      (__this->fields)._TargetTexture_k__BackingField = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._TargetTexture_k__BackingField,__this_00);
      pUVar1 = (__this->fields).gizmoCamera;
      if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_aspect(pUVar1,1.0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).gizmoCamera;
        if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__set_targetTexture
                    (pUVar1,(__this->fields)._TargetTexture_k__BackingField,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).gizmoCamera;
          if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
            UnityEngine_Camera__set_cullingMask(pUVar1,0x1000000,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).gizmoCamera;
            if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
              UnityEngine_Camera__set_eventMask(pUVar1,0,(MethodInfo *)0x0);
              pUVar1 = (__this->fields).gizmoCamera;
              if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
                pUVar9 = (__this->fields).gizmoComponents;
                if (pUVar9 != (UnityEngine_Renderer_array *)0x0) {
                  if ((int)pUVar9->max_length == 0) {
label_181dcd72d:
                    ThrowIndexOutOfRangeException();
                  }
                  if (pUVar9->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
                    pUVar7 = UnityEngine_Renderer__get_sharedMaterial(pUVar9->m_Items[0],(MethodInfo *)0x0);
                    (__this->fields).gizmoNormalMaterial = pUVar7;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).gizmoNormalMaterial,pUVar7);
                    pUVar7 = (__this->fields).gizmoNormalMaterial;
                    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                    UnityEngine_Material___ctor_2ee55e0(pUVar8,pUVar7,(MethodInfo *)0x0);
                    (__this->fields).gizmoFadeMaterial = pUVar8;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).gizmoFadeMaterial,pUVar8);
                    iVar3 = UnityEngine_Shader__PropertyToID("_AlphaVal",(MethodInfo *)0x0);
                    pUVar7 = (__this->fields).gizmoNormalMaterial;
                    (__this->fields).gizmoMaterialFadeProperty = iVar3;
                    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                    UnityEngine_Material___ctor_2ee55e0(pUVar8,pUVar7,(MethodInfo *)0x0);
                    (__this->fields).gizmoHighlightMaterial = pUVar8;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).gizmoHighlightMaterial,pUVar8);
                    pUVar7 = (__this->fields).gizmoHighlightMaterial;
                    if (pUVar7 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__EnableKeyword(pUVar7,"HIGHLIGHT_ON",(MethodInfo *)0x0);
                      pUVar7 = (__this->fields).gizmoHighlightMaterial;
                      if (pUVar7 != (UnityEngine_Material_o *)0x0) {
                        local_18.r = 1.0;
                        local_18.g = 0.92156863;
                        local_18.b = 0.015686275;
                        local_18.a = 1.0;
                        UnityEngine_Material__set_color
                                  (pUVar7,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
                        pUVar9 = (__this->fields).gizmoComponents;
                        uVar12 = 0;
                        if (pUVar9 != (UnityEngine_Renderer_array *)0x0) {
                          while ((int)uVar12 < (int)pUVar9->max_length) {
                            pUVar9 = (__this->fields).gizmoComponents;
                            if (pUVar9 == (UnityEngine_Renderer_array *)0x0) goto label_181dcd717;
                            if ((uint)pUVar9->max_length <= uVar12) goto label_181dcd72d;
                            if (((UnityEngine_Component_o *)pUVar9->m_Items[(int)uVar12] ==
                                 (UnityEngine_Component_o *)0x0) ||
                               (pUVar10 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar9->m_Items[(int)uVar12],
                                                     (MethodInfo *)0x0),
                               pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto label_181dcd717;
                            UnityEngine_GameObject__set_layer(pUVar10,0x18,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).gizmoComponents;
                            uVar12 = uVar12 + 1;
                            if (pUVar9 == (UnityEngine_Renderer_array *)0x0) goto label_181dcd717;
                          }
                          pUVar6 = (__this->fields).labelsTR;
                          uVar12 = 0;
                          if (pUVar6 != (UnityEngine_Transform_array *)0x0) goto label_181dcd630;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_181dcd717:
  ThrowNullReferenceException();
label_181dcd630:
  if ((int)pUVar6->max_length <= (int)uVar12) {
    return;
  }
  pUVar2 = (__this->fields).labels;
  if (pUVar2 == (UnityEngine_TextMesh_array *)0x0) goto label_181dcd717;
  if ((uint)pUVar2->max_length <= uVar12) goto label_181dcd72d;
  if (((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar12] == (UnityEngine_Component_o *)0x0) ||
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar12],(MethodInfo *)0x0),
     pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto label_181dcd717;
  UnityEngine_GameObject__set_layer(pUVar10,0x18,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).labels;
  if (pUVar2 == (UnityEngine_TextMesh_array *)0x0) goto label_181dcd717;
  if ((uint)pUVar2->max_length <= uVar12) goto label_181dcd72d;
  if ((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar12] == (UnityEngine_Component_o *)0x0)
  goto label_181dcd717;
  pUVar6 = (__this->fields).labelsTR;
  pUVar5 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar12],(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_array *)0x0) goto label_181dcd717;
  if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
     (pIVar11 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar5,(((pUVar6->obj).klass)->_1).element_class),
     pIVar11 == (Il2CppObject *)0x0)) {
    pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
  }
  if ((uint)pUVar6->max_length <= uVar12) goto label_181dcd72d;
  pUVar6->m_Items[(int)uVar12] = pUVar5;
  Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar12,pUVar5);
  pUVar6 = (__this->fields).labelsTR;
  uVar12 = uVar12 + 1;
  if (pUVar6 == (UnityEngine_Transform_array *)0x0) goto label_181dcd717;
  goto label_181dcd630;
}


// RuntimeSceneGizmo.SceneGizmoController$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnEnable (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x181dcdf30

void RuntimeSceneGizmo_SceneGizmoController__OnEnable
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_array *pUVar2;
  
  if ((__this->fields).highlightedComponent == -1) {
label_181dcdf6e:
    RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,-1,(MethodInfo *)0x0);
    (__this->fields).updateTargetTexture = true;
    return;
  }
  pUVar2 = (__this->fields).gizmoComponents;
  if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
    uVar1 = (__this->fields).highlightedComponent;
    if ((uint)pUVar2->max_length <= uVar1) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[(int)uVar1] != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
      (__this->fields).highlightedComponent = -1;
      goto label_181dcdf6e;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$OnDestroy
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnDestroy (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x181dcde90

void RuntimeSceneGizmo_SceneGizmoController__OnDestroy
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  UnityEngine_RenderTexture_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843449f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843449f0 = '\x01';
  }
  pUVar1 = (__this->fields)._TargetTexture_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._TargetTexture_k__BackingField;
    if (pUVar1 == (UnityEngine_RenderTexture_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_RenderTexture__Release(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._TargetTexture_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$LateUpdate
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__LateUpdate (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x181dcd760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dcdd6a: movaps xmm2, xmm0

void RuntimeSceneGizmo_SceneGizmoController__LateUpdate
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_Transform_array *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  UnityEngine_Camera_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Quaternion_o *pUVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Quaternion_Fields local_98 [9];
  
  if (Il2CppMethodInitialized_1843449f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"ReferenceTransform mustn't be null!");
    Il2CppMethodInitialized_1843449f1 = '\x01';
  }
  pUVar9 = (__this->fields).m_referenceTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
  if (!bVar7) {
    pUVar8 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto label_181dcde82;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this,pUVar9,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).m_referenceTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)"ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
      return;
    }
  }
  pUVar9 = (__this->fields).m_referenceTransform;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
  pUVar10 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_98,pUVar9,(MethodInfo *)0x0);
  fVar16 = (pUVar10->fields).x;
  fVar15 = (pUVar10->fields).y;
  fVar17 = (__this->fields).prevForward.fields.x - fVar16;
  fVar2 = (pUVar10->fields).z;
  fVar18 = (__this->fields).prevForward.fields.y - fVar15;
  fVar14 = (__this->fields).prevForward.fields.z - fVar2;
  if (9.9999994e-11 <= fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14) {
    fVar14 = fVar16;
    if (fVar16 < 0.0) {
      fVar14 = -fVar16;
    }
    fVar17 = fVar15;
    if (fVar15 < 0.0) {
      fVar17 = -fVar15;
    }
    fVar18 = fVar2;
    if (fVar2 < 0.0) {
      fVar18 = -fVar2;
    }
    if (fVar17 < fVar14) {
      if (fVar18 < fVar14) {
        uVar13 = (0.0 < fVar16) + 1;
        fVar19 = fVar15 * 0.0 + fVar16 + fVar2 * 0.0;
      }
      else {
        uVar13 = (0.0 < fVar2) + 5;
        fVar19 = fVar15 * 0.0 + fVar16 * 0.0 + fVar2;
      }
    }
    else if (fVar18 < fVar17) {
      uVar13 = (0.0 < fVar15) + 3;
      fVar19 = fVar15 + fVar16 * 0.0 + fVar2 * 0.0;
    }
    else {
      uVar13 = (0.0 < fVar2) + 5;
      fVar19 = fVar15 * 0.0 + fVar16 * 0.0 + fVar2;
    }
    if (fVar19 < 0.0) {
      fVar19 = -fVar19;
    }
    if (0.92 <= fVar19) {
      if (uVar13 != 0) {
        if ((uVar13 & 1) == 0) {
          uVar13 = uVar13 - 1;
        }
        else {
          uVar13 = uVar13 + 1;
        }
      }
      RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,uVar13,(MethodInfo *)0x0);
    }
    else if (((__this->fields).fadingComponent != -1) && (1.0 <= (__this->fields).fadeT)) {
      pUVar3 = (__this->fields).gizmoComponents;
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_181dcde82;
      uVar13 = (__this->fields).fadingComponent;
      if ((uint)pUVar3->max_length <= uVar13) goto label_181dcde88;
      if (((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13] == (UnityEngine_Component_o *)0x0) ||
         (pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13],(MethodInfo *)0x0),
         pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_181dcde82;
      UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
      uVar13 = (__this->fields).fadingComponent;
      pUVar3 = (__this->fields).gizmoComponents;
      if (1 < uVar13 + 1) {
        if ((uVar13 & 1) == 0) {
          uVar13 = uVar13 - 1;
        }
        else {
          uVar13 = uVar13 + 1;
        }
      }
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_181dcde82;
      if ((uint)pUVar3->max_length <= uVar13) goto label_181dcde88;
      if (((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13] == (UnityEngine_Component_o *)0x0) ||
         (pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13],(MethodInfo *)0x0),
         pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_181dcde82;
      UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
      (__this->fields).isFadingToZero = false;
      (__this->fields).fadeT = 0.0;
    }
    pUVar9 = (__this->fields).m_referenceTransform;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    pUVar12 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)local_98,pUVar9,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).gizmoCamParent;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    uVar5._0_4_ = (pUVar12->fields).x;
    uVar5._4_4_ = (pUVar12->fields).y;
    uVar6._0_4_ = (pUVar12->fields).z;
    uVar6._4_4_ = (pUVar12->fields).w;
    local_98[0]._0_8_ = uVar5;
    local_98[0]._8_8_ = uVar6;
    UnityEngine_Transform__set_localRotation(pUVar9,(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).labelsTR;
    if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_181dcde82;
    if ((int)pUVar4->max_length == 0) goto label_181dcde88;
    fVar14 = (fVar14 - 0.15) * 0.65;
    if (pUVar4->m_Items[0] == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    local_98[0].x = 0.0;
    local_98[0].y = 0.0;
    fVar19 = 0.0;
    if (0.0 <= fVar14) {
      fVar19 = fVar14;
    }
    local_98[0].z = fVar19;
    UnityEngine_Transform__set_localPosition
              (pUVar4->m_Items[0],(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).labelsTR;
    if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_181dcde82;
    if ((uint)pUVar4->max_length < 2) goto label_181dcde88;
    fVar14 = (fVar17 - 0.15) * 0.65;
    if (pUVar4->m_Items[1] == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    local_98[0].x = 0.0;
    local_98[0].y = 0.0;
    fVar17 = 0.0;
    if (0.0 <= fVar14) {
      fVar17 = fVar14;
    }
    local_98[0].z = fVar17;
    UnityEngine_Transform__set_localPosition
              (pUVar4->m_Items[1],(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).labelsTR;
    if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_181dcde82;
    if ((uint)pUVar4->max_length < 3) goto label_181dcde88;
    fVar14 = (fVar18 - 0.15) * 0.65;
    if (pUVar4->m_Items[2] == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    fVar17 = 0.0;
    if (0.0 <= fVar14) {
      fVar17 = fVar14;
    }
    local_98[0].x = 0.0;
    local_98[0].y = 0.0;
    local_98[0].z = fVar17;
    UnityEngine_Transform__set_localPosition
              (pUVar4->m_Items[2],(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).labelsTR;
    if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_181dcde82;
    if ((int)pUVar4->max_length == 0) goto label_181dcde88;
    if (pUVar4->m_Items[0] == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    local_98[0]._0_8_ = uVar5;
    local_98[0]._8_8_ = uVar6;
    UnityEngine_Transform__set_rotation
              (pUVar4->m_Items[0],(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).labelsTR;
    if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_181dcde82;
    if ((uint)pUVar4->max_length < 2) goto label_181dcde88;
    if (pUVar4->m_Items[1] == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    local_98[0]._0_8_ = uVar5;
    local_98[0]._8_8_ = uVar6;
    UnityEngine_Transform__set_rotation
              (pUVar4->m_Items[1],(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).labelsTR;
    if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_181dcde82;
    if ((uint)pUVar4->max_length < 3) goto label_181dcde88;
    if (pUVar4->m_Items[2] == (UnityEngine_Transform_o *)0x0) goto label_181dcde82;
    local_98[0]._0_8_ = uVar5;
    local_98[0]._8_8_ = uVar6;
    UnityEngine_Transform__set_rotation
              (pUVar4->m_Items[2],(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
    (__this->fields).prevForward.fields.x = fVar16;
    (__this->fields).prevForward.fields.y = fVar15;
    (__this->fields).prevForward.fields.z = fVar2;
    (__this->fields).updateTargetTexture = true;
  }
  pfVar1 = &(__this->fields).fadeT;
  if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
    fVar16 = (__this->fields).fadeT;
    fVar15 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar16 = fVar15 * 4.0 + fVar16;
    (__this->fields).fadeT = fVar16;
    if (1.0 <= fVar16) {
      (__this->fields).fadeT = 1.0;
    }
    fVar16 = (__this->fields).fadeT;
    if ((__this->fields).isFadingToZero != false) {
      fVar16 = 1.0 - fVar16;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
              (__this,(__this->fields).fadingComponent,fVar16,(MethodInfo *)0x0);
    if (1.0 <= (__this->fields).fadeT) {
      if ((__this->fields).isFadingToZero == false) {
        RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                  (__this,(__this->fields).fadingComponent,(__this->fields).gizmoNormalMaterial,
                   (MethodInfo *)0x0);
        (__this->fields).fadingComponent = -1;
      }
      else {
        pUVar3 = (__this->fields).gizmoComponents;
        if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_181dcde82;
        uVar13 = (__this->fields).fadingComponent;
        if ((uint)pUVar3->max_length <= uVar13) {
label_181dcde88:
          ThrowIndexOutOfRangeException();
        }
        if (((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13] == (UnityEngine_Component_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13],(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_181dcde82;
        UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
        uVar13 = (__this->fields).fadingComponent;
        pUVar3 = (__this->fields).gizmoComponents;
        if (1 < uVar13 + 1) {
          if ((uVar13 & 1) == 0) {
            uVar13 = uVar13 - 1;
          }
          else {
            uVar13 = uVar13 + 1;
          }
        }
        if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_181dcde82;
        if ((uint)pUVar3->max_length <= uVar13) goto label_181dcde88;
        if (((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13] == (UnityEngine_Component_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar13],(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_181dcde82;
        UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
      }
    }
    (__this->fields).updateTargetTexture = true;
  }
  if ((__this->fields).updateTargetTexture != false) {
    pUVar8 = (__this->fields).gizmoCamera;
    if (pUVar8 == (UnityEngine_Camera_o *)0x0) {
label_181dcde82:
      ThrowNullReferenceException();
    }
    UnityEngine_Camera__Render(pUVar8,(MethodInfo *)0x0);
    (__this->fields).updateTargetTexture = false;
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$Raycast
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x181dce0b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dce22a: nop word ptr [rax + rax]
// asm:   0x181dce28e: jmp 0x181dce230
// asm:   0x181dce290: mov eax, ebx

int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Vector3_o *normalizedPosition,
                  MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Renderer_array *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UnityEngine_Ray_o *pUVar7;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *y;
  UnityEngine_Object_o *x;
  uint uVar8;
  float maxDistance;
  UnityEngine_Ray_o local_a8;
  UnityEngine_Ray_o local_88;
  UnityEngine_RaycastHit_o local_70 [2];
  
  if (Il2CppMethodInitialized_1843449f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843449f2 = '\x01';
  }
  pUVar2 = (__this->fields).gizmoCamera;
  local_70[0].fields.m_Normal.fields.y = 0.0;
  local_70[0].fields.m_Normal.fields.z = 0.0;
  local_70[0].fields.m_FaceID = 0;
  local_70[0].fields.m_Distance = 0.0;
  local_70[0].fields.m_UV.fields.x = 0.0;
  local_70[0].fields.m_UV.fields.y = 0.0;
  local_70[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_70[0].fields.m_Point.fields.x = 0.0;
  local_70[0].fields.m_Point.fields.y = 0.0;
  local_70[0].fields.m_Point.fields.z = 0.0;
  local_70[0].fields.m_Normal.fields.x = 0.0;
  if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
    local_a8.fields.m_Origin.fields.x = (normalizedPosition->fields).x;
    local_a8.fields.m_Origin.fields.y = (normalizedPosition->fields).y;
    local_a8.fields.m_Origin.fields.z = (normalizedPosition->fields).z;
    pUVar7 = UnityEngine_Camera__ViewportPointToRay_2ebe450
                       (&local_88,pUVar2,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).gizmoCamera;
    if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
      uVar4._0_4_ = (pUVar7->fields).m_Origin.fields.x;
      uVar4._4_4_ = (pUVar7->fields).m_Origin.fields.y;
      uVar5 = *(undefined8 *)&(pUVar7->fields).m_Origin.fields.z;
      uVar1._0_4_ = (pUVar7->fields).m_Direction.fields.y;
      uVar1._4_4_ = (pUVar7->fields).m_Direction.fields.z;
      maxDistance = UnityEngine_Camera__get_farClipPlane(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_a8.fields.m_Origin.fields._0_8_ = uVar4;
      local_a8.fields._8_8_ = uVar5;
      local_a8.fields.m_Direction.fields._4_8_ = uVar1;
      bVar6 = UnityEngine_Physics__Raycast_2fe5860
                        (&local_a8,local_70,maxDistance,0x1000000,2,(MethodInfo *)0x0);
      if (!bVar6) {
        return -1;
      }
      __this_00 = UnityEngine_RaycastHit__get_collider(local_70,(MethodInfo *)0x0);
      if ((__this_00 != (UnityEngine_Collider_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        y = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        uVar8 = 0;
        pUVar3 = (__this->fields).gizmoComponents;
        while (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
          if ((int)pUVar3->max_length <= (int)uVar8) {
            return -1;
          }
          pUVar3 = (__this->fields).gizmoComponents;
          if (pUVar3 == (UnityEngine_Renderer_array *)0x0) break;
          if ((uint)pUVar3->max_length <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar8] == (UnityEngine_Component_o *)0x0) break;
          x = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar8],(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
          if (bVar6) {
            return uVar8;
          }
          uVar8 = uVar8 + 1;
          pUVar3 = (__this->fields).gizmoComponents;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$OnPointerHover
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x181dcdfa0

void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Vector3_o *normalizedPosition,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_array *pUVar2;
  uint uVar3;
  UnityEngine_Vector3_Fields local_18;
  
  local_18.x = (normalizedPosition->fields).x;
  local_18.y = (normalizedPosition->fields).y;
  local_18.z = (normalizedPosition->fields).z;
  uVar3 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                    (__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
  uVar1 = (__this->fields).highlightedComponent;
  if (uVar3 == 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    pUVar2 = (__this->fields).gizmoComponents;
    if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
      if ((uint)pUVar2->max_length <= uVar1) {
label_181dce09f:
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[(int)uVar1] != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_sharedMaterial
                  (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
        goto label_181dce00b;
      }
    }
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if (uVar1 != 0xffffffff) {
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto label_181dce099;
      uVar1 = (__this->fields).highlightedComponent;
      if ((uint)pUVar2->max_length <= uVar1) goto label_181dce09f;
      if (pUVar2->m_Items[(int)uVar1] == (UnityEngine_Renderer_o *)0x0) goto label_181dce099;
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
    }
    if (uVar3 == (__this->fields).fadingComponent) {
label_181dce00b:
      (__this->fields).highlightedComponent = -1;
      (__this->fields).updateTargetTexture = true;
      return;
    }
    pUVar2 = (__this->fields).gizmoComponents;
    (__this->fields).highlightedComponent = uVar3;
    if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
      if ((uint)pUVar2->max_length <= uVar3) goto label_181dce09f;
      if (pUVar2->m_Items[(int)uVar3] != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_sharedMaterial
                  (pUVar2->m_Items[(int)uVar3],(__this->fields).gizmoHighlightMaterial,(MethodInfo *)0x0);
        (__this->fields).updateTargetTexture = true;
        return;
      }
    }
  }
label_181dce099:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$SetHiddenComponent
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x181dce3b0

void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,MethodInfo *method)

{
  int component_00;
  UnityEngine_Renderer_array *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  uint uVar3;
  
  component_00 = (__this->fields).fadingComponent;
  if (component != -1) {
    if (component == component_00) {
      return;
    }
    if (component_00 != -1) {
      RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                (__this,component_00,(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
      RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
                (__this,(__this->fields).fadingComponent,1.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).gizmoComponents;
      if (pUVar1 == (UnityEngine_Renderer_array *)0x0) goto label_181dce59c;
      uVar3 = (__this->fields).fadingComponent;
      if ((uint)pUVar1->max_length <= uVar3) goto label_181dce5a2;
      if (((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3] == (UnityEngine_Component_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_181dce59c;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      uVar3 = (__this->fields).fadingComponent;
      pUVar1 = (__this->fields).gizmoComponents;
      if (1 < uVar3 + 1) {
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar3 - 1;
        }
        else {
          uVar3 = uVar3 + 1;
        }
      }
      if (pUVar1 == (UnityEngine_Renderer_array *)0x0) goto label_181dce59c;
      if ((uint)pUVar1->max_length <= uVar3) goto label_181dce5a2;
      if (((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3] == (UnityEngine_Component_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_181dce59c;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
    (__this->fields).fadingComponent = component;
    RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
              (__this,component,(__this->fields).gizmoFadeMaterial,(MethodInfo *)0x0);
    (__this->fields).isFadingToZero = true;
label_181dce587:
    (__this->fields).fadeT = 0.0;
    return;
  }
  if (component_00 == -1) {
    return;
  }
  if ((__this->fields).fadeT < 1.0) {
    return;
  }
  pUVar1 = (__this->fields).gizmoComponents;
  if (pUVar1 == (UnityEngine_Renderer_array *)0x0) goto label_181dce59c;
  uVar3 = (__this->fields).fadingComponent;
  if ((uint)pUVar1->max_length <= uVar3) {
label_181dce5a2:
    ThrowIndexOutOfRangeException();
  }
  if (((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3] != (UnityEngine_Component_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    uVar3 = (__this->fields).fadingComponent;
    pUVar1 = (__this->fields).gizmoComponents;
    if (1 < uVar3 + 1) {
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar3 - 1;
      }
      else {
        uVar3 = uVar3 + 1;
      }
    }
    if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
      if ((uint)pUVar1->max_length <= uVar3) goto label_181dce5a2;
      if (((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3] == (UnityEngine_Component_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_181dce59c;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      (__this->fields).isFadingToZero = false;
      goto label_181dce587;
    }
  }
label_181dce59c:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$SetAlphaOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, float alpha, const MethodInfo* method);
// 0x181dce2d0

void RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,float alpha,
               MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  UnityEngine_TextMesh_array *pUVar1;
  UnityEngine_TextMesh_o *__this_01;
  UnityEngine_Color_o local_28 [2];
  
  if (component == -1) {
    return;
  }
  __this_00 = (__this->fields).gizmoFadeMaterial;
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_2ee3980
              (__this_00,(__this->fields).gizmoMaterialFadeProperty,alpha,(MethodInfo *)0x0);
    if ((component == 1) || (component == 2)) {
      pUVar1 = (__this->fields).labels;
      if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto label_181dce399;
      if ((int)pUVar1->max_length == 0) goto label_181dce39f;
      __this_01 = pUVar1->m_Items[0];
    }
    else if ((component == 5) || (component == 6)) {
      pUVar1 = (__this->fields).labels;
      if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto label_181dce399;
      if ((uint)pUVar1->max_length < 3) goto label_181dce39f;
      __this_01 = pUVar1->m_Items[2];
    }
    else {
      pUVar1 = (__this->fields).labels;
      if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto label_181dce399;
      if ((uint)pUVar1->max_length < 2) {
label_181dce39f:
        ThrowIndexOutOfRangeException();
      }
      __this_01 = pUVar1->m_Items[1];
    }
    if (__this_01 != (UnityEngine_TextMesh_o *)0x0) {
      local_28[0].fields.r = 1.0;
      local_28[0].fields.g = 1.0;
      local_28[0].fields.b = 1.0;
      local_28[0].fields.a = alpha;
      UnityEngine_TextMesh__set_color(__this_01,local_28,(MethodInfo *)0x0);
      return;
    }
  }
label_181dce399:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$SetMaterialOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181dce5b0

void RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  UnityEngine_Renderer_array *pUVar1;
  uint uVar2;
  
  if (component == -1) {
    return;
  }
  if (component == 0) {
    uVar2 = 0;
  }
  else if ((component & 1U) == 0) {
    uVar2 = component - 1;
  }
  else {
    uVar2 = component + 1;
  }
  if ((component == (__this->fields).highlightedComponent) || (uVar2 == (__this->fields).highlightedComponent)
     ) {
    (__this->fields).highlightedComponent = -1;
  }
  pUVar1 = (__this->fields).gizmoComponents;
  if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
    if ((uint)pUVar1->max_length <= (uint)component) {
label_181dce656:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar1->m_Items[component] != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial(pUVar1->m_Items[component],material,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).gizmoComponents;
      if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
        if ((uint)pUVar1->max_length <= uVar2) goto label_181dce656;
        if (pUVar1->m_Items[(int)uVar2] != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial(pUVar1->m_Items[(int)uVar2],material,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$GetOppositeComponent
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x181dcd740

int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,MethodInfo *method)

{
  int iVar1;
  
  if (1 < component + 1U) {
    iVar1 = component + -1;
    if ((component & 1U) != 0) {
      iVar1 = component + 1;
    }
    return iVar1;
  }
  return component;
}


// RuntimeSceneGizmo.SceneGizmoController$$.ctor
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController___ctor (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x181dce660

void RuntimeSceneGizmo_SceneGizmoController___ctor
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  (__this->fields).highlightedComponent = -1;
  (__this->fields).fadingComponent = -1;
  (__this->fields).fadeT = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


