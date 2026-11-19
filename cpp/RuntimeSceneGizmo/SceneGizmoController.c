// Type: RuntimeSceneGizmo.SceneGizmoController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/SceneGizmoController.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoController.cs
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoController$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x586c1e0

UnityEngine_Transform_o *
RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform
          (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  return (__this->fields).m_referenceTransform;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x586c1f0

void RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Transform_o *y;
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  UnityEngine_Camera_o *pUVar4;
  UnityEngine_Color_o UVar5;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_0754514a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754514a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
label_0586c273:
    pUVar4 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto label_0586c36f;
    value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
  }
  else {
    if (value == (UnityEngine_Transform_o *)0x0) goto label_0586c36f;
    bVar1 = (*(value->klass->vtable)._0_Equals.methodPtr)
                      (value,(Il2CppObject *)0x0,(value->klass->vtable)._0_Equals.method);
    if (bVar1) goto label_0586c273;
  }
  y = (__this->fields).m_referenceTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  targetAddress = &(__this->fields).m_referenceTransform;
  *targetAddress = value;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (*targetAddress != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)*targetAddress,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Camera);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
      uVar2 = UnityEngine_Camera__get_cullingMask(pUVar4,(MethodInfo *)0x0);
      UnityEngine_Camera__set_cullingMask(pUVar4,uVar2 & 0xfeffffff,(MethodInfo *)0x0);
      iVar3 = UnityEngine_Camera__get_clearFlags(pUVar4,(MethodInfo *)0x0);
      if (iVar3 != 2) {
        return;
      }
      UVar5 = UnityEngine_Camera__get_backgroundColor(pUVar4,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).gizmoCamera;
      if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
        value_00.fields.a = 0.0;
        value_00.fields.r = UVar5.fields.r;
        value_00.fields.g = UVar5.fields.g;
        value_00.fields.b = UVar5.fields.b;
        UnityEngine_Camera__set_backgroundColor(pUVar4,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0586c36f:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$get_TargetTexture
// il2cpp: UnityEngine_RenderTexture_o* RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x586c380

UnityEngine_RenderTexture_o *
RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture
          (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  return (__this->fields)._TargetTexture_k__BackingField;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_TargetTexture
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_RenderTexture_o* value, const MethodInfo* method);
// 0x586c390

void RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_RenderTexture_o *value,
               MethodInfo *method)

{
  (__this->fields)._TargetTexture_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._TargetTexture_k__BackingField);
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__Awake (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x586c3b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586c68d: nop dword ptr [rax]
// asm:   0x586c6d8: jmp 0x586c7b8

void RuntimeSceneGizmo_SceneGizmoController__Awake
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_array **targetAddress;
  UnityEngine_Material_o **targetAddress_00;
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_TextMesh_array *pUVar2;
  UnityEngine_Component_o *pUVar3;
  int32_t iVar4;
  int32_t iVar5;
  uint uVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_array *pUVar8;
  UnityEngine_RenderTexture_o *__this_00;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Renderer_array *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  Il2CppObject *pIVar13;
  int iVar14;
  long lVar15;
  UnityEngine_Color_o value;
  
  if (Il2CppMethodInitialized_0754514b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RenderTexture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform_array);
    il2cpp_codegen_initialize_runtime_metadata(&"HIGHLIGHT_ON");
    il2cpp_codegen_initialize_runtime_metadata(&"_AlphaVal");
    Il2CppMethodInitialized_0754514b = '\x01';
  }
  pUVar1 = (__this->fields).gizmoCamera;
  if ((pUVar1 != (UnityEngine_Camera_o *)0x0) &&
     (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
    (__this->fields).gizmoCamParent = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).gizmoCamParent);
    pUVar2 = (__this->fields).labels;
    if (pUVar2 != (UnityEngine_TextMesh_array *)0x0) {
      pUVar8 = (UnityEngine_Transform_array *)
               SZArrayNew(TypeInfo_UnityEngine_Transform_array,(uint32_t)pUVar2->max_length);
      targetAddress = &(__this->fields).labelsTR;
      (__this->fields).labelsTR = pUVar8;
      Il2CppCodeGenWriteBarrier(targetAddress);
      iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      uVar6 = iVar5 / 6 - 1;
      uVar6 = (int)uVar6 >> 0x10 | uVar6;
      uVar6 = (int)uVar6 >> 8 | uVar6;
      uVar6 = (int)uVar6 >> 4 | uVar6;
      uVar6 = (int)uVar6 >> 2 | uVar6;
      iVar14 = ((int)uVar6 >> 1 | uVar6) + 1;
      iVar5 = 0x200;
      if (iVar14 < 0x200) {
        iVar5 = iVar14;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RenderTexture);
      UnityEngine_RenderTexture___ctor_68f83b0(__this_00,iVar5,iVar5,0x10,(MethodInfo *)0x0);
      (__this->fields)._TargetTexture_k__BackingField = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._TargetTexture_k__BackingField);
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
                pUVar11 = (__this->fields).gizmoComponents;
                if (pUVar11 != (UnityEngine_Renderer_array *)0x0) {
                  if ((int)pUVar11->max_length == 0) {
label_0586c7cc:
                    ThrowIndexOutOfRangeException();
                  }
                  if (pUVar11->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
                    pUVar9 = UnityEngine_Renderer__get_sharedMaterial(pUVar11->m_Items[0],(MethodInfo *)0x0);
                    (__this->fields).gizmoNormalMaterial = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).gizmoNormalMaterial);
                    pUVar9 = (__this->fields).gizmoNormalMaterial;
                    pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                    UnityEngine_Material___ctor_68dcfd0(pUVar10,pUVar9,(MethodInfo *)0x0);
                    (__this->fields).gizmoFadeMaterial = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).gizmoFadeMaterial);
                    iVar5 = UnityEngine_Shader__PropertyToID("_AlphaVal",(MethodInfo *)0x0);
                    (__this->fields).gizmoMaterialFadeProperty = iVar5;
                    pUVar9 = (__this->fields).gizmoNormalMaterial;
                    pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                    UnityEngine_Material___ctor_68dcfd0(pUVar10,pUVar9,(MethodInfo *)0x0);
                    targetAddress_00 = &(__this->fields).gizmoHighlightMaterial;
                    (__this->fields).gizmoHighlightMaterial = pUVar10;
                    Il2CppCodeGenWriteBarrier(targetAddress_00);
                    pUVar9 = (__this->fields).gizmoHighlightMaterial;
                    if (pUVar9 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__EnableKeyword(pUVar9,"HIGHLIGHT_ON",(MethodInfo *)0x0);
                      pUVar9 = *targetAddress_00;
                      if (pUVar9 != (UnityEngine_Material_o *)0x0) {
                        value.fields.b = 0.015686275;
                        value.fields.a = 1.0;
                        value.fields.r = 1.0;
                        value.fields.g = 0.92156863;
                        UnityEngine_Material__set_color(pUVar9,value,(MethodInfo *)0x0);
                        pUVar11 = (__this->fields).gizmoComponents;
                        if (pUVar11 != (UnityEngine_Renderer_array *)0x0) {
                          lVar15 = 0;
                          while( true ) {
                            uVar6 = (uint)pUVar11->max_length;
                            if ((int)uVar6 <= (int)(uint)lVar15) break;
                            if (uVar6 <= (uint)lVar15) goto label_0586c7cc;
                            if (((UnityEngine_Component_o *)pUVar11->m_Items[lVar15] ==
                                 (UnityEngine_Component_o *)0x0) ||
                               (pUVar12 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar11->m_Items[lVar15],
                                                     (MethodInfo *)0x0),
                               pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_0586c7b8;
                            UnityEngine_GameObject__set_layer(pUVar12,0x18,(MethodInfo *)0x0);
                            pUVar11 = (__this->fields).gizmoComponents;
                            lVar15 = lVar15 + 1;
                            if (pUVar11 == (UnityEngine_Renderer_array *)0x0) goto label_0586c7b8;
                          }
                          pUVar8 = *targetAddress;
                          if (pUVar8 != (UnityEngine_Transform_array *)0x0) {
                            uVar6 = 0;
                            lVar15 = 0x20;
                            goto label_0586c700;
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
  }
label_0586c7b8:
  ThrowNullReferenceException();
label_0586c700:
  if ((int)pUVar8->max_length <= (int)uVar6) {
    return;
  }
  pUVar2 = (__this->fields).labels;
  if (pUVar2 == (UnityEngine_TextMesh_array *)0x0) goto label_0586c7b8;
  if ((uint)pUVar2->max_length <= uVar6) goto label_0586c7cc;
  pUVar3 = *(UnityEngine_Component_o **)((long)pUVar2->m_Items + lVar15 + -0x20);
  if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
     (pUVar12 = UnityEngine_Component__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_0586c7b8;
  UnityEngine_GameObject__set_layer(pUVar12,0x18,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).labels;
  if (pUVar2 == (UnityEngine_TextMesh_array *)0x0) goto label_0586c7b8;
  if ((uint)pUVar2->max_length <= uVar6) goto label_0586c7cc;
  pUVar3 = *(UnityEngine_Component_o **)((long)pUVar2->m_Items + lVar15 + -0x20);
  if (pUVar3 == (UnityEngine_Component_o *)0x0) goto label_0586c7b8;
  pUVar8 = (__this->fields).labelsTR;
  pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_array *)0x0) goto label_0586c7b8;
  if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
     (pIVar13 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar7,(((pUVar8->obj).klass)->_1).element_class),
     pIVar13 == (Il2CppObject *)0x0)) {
    pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
  }
  if ((uint)pUVar8->max_length <= uVar6) goto label_0586c7cc;
  *(UnityEngine_Transform_o **)((long)pUVar8->m_Items + lVar15 + -0x20) = pUVar7;
  Il2CppCodeGenWriteBarrier((void **)((long)pUVar8->m_Items + lVar15 + -0x20));
  uVar6 = uVar6 + 1;
  pUVar8 = *targetAddress;
  lVar15 = lVar15 + 8;
  if (pUVar8 == (UnityEngine_Transform_array *)0x0) goto label_0586c7b8;
  goto label_0586c700;
}


// RuntimeSceneGizmo.SceneGizmoController$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnEnable (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x586c7e0

void RuntimeSceneGizmo_SceneGizmoController__OnEnable
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_array *pUVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  uVar1 = (__this->fields).highlightedComponent;
  if ((long)(int)uVar1 == -1) {
label_0586c818:
    RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,-1,in_RDX);
    (__this->fields).updateTargetTexture = true;
    return;
  }
  pUVar2 = (__this->fields).gizmoComponents;
  if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
    if ((uint)pUVar2->max_length <= uVar1) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[(int)uVar1] != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
      (__this->fields).highlightedComponent = -1;
      in_RDX = extraout_RDX;
      goto label_0586c818;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$OnDestroy
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnDestroy (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x586ca30

void RuntimeSceneGizmo_SceneGizmoController__OnDestroy
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  UnityEngine_RenderTexture_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754514c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754514c = '\x01';
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
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$LateUpdate
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__LateUpdate (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x586cad0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586cd68: jmp 0x586d08b
// asm:   0x586d02e: jmp 0x586d08b

void RuntimeSceneGizmo_SceneGizmoController__LateUpdate
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Transform_array *pUVar3;
  UnityEngine_Renderer_array *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  bool bVar9;
  uint uVar10;
  undefined4 extraout_EAX;
  UnityEngine_Camera_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  MethodInfo *in_RCX;
  uint uVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar23;
  
  if (Il2CppMethodInitialized_0754514d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"ReferenceTransform mustn't be null!");
    Il2CppMethodInitialized_0754514d = '\x01';
  }
  pUVar12 = (__this->fields).m_referenceTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar12,(MethodInfo *)0x0);
  if (!bVar9) {
    pUVar11 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto label_0586d08b;
    pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this,pUVar12,method_00);
    pUVar12 = (__this->fields).m_referenceTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar12,(MethodInfo *)0x0);
    if (!bVar9) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)"ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
      return;
    }
  }
  pUVar12 = (__this->fields).m_referenceTransform;
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
  UVar23 = UnityEngine_Transform__get_forward(pUVar12,(MethodInfo *)0x0);
  fVar15 = UVar23.fields.z;
  fVar18 = UVar23.fields.x;
  fVar16 = UVar23.fields.y;
  uVar1 = (__this->fields).prevForward.fields.x;
  uVar2 = (__this->fields).prevForward.fields.y;
  fVar17 = (__this->fields).prevForward.fields.z - fVar15;
  if (9.9999994e-11 <=
      ((float)uVar2 - fVar16) * ((float)uVar2 - fVar16) + ((float)uVar1 - fVar18) * ((float)uVar1 - fVar18) +
      fVar17 * fVar17) {
    auVar20._0_8_ = UVar23.fields._0_8_ ^ 0x8000000080000000;
    auVar20._8_4_ = extraout_XMM0_Dc ^ 0x80000000;
    auVar20._12_4_ = extraout_XMM0_Dd ^ 0x80000000;
    auVar21._8_4_ = extraout_XMM0_Dc;
    auVar21._0_8_ = UVar23.fields._0_8_;
    auVar21._12_4_ = extraout_XMM0_Dd;
    auVar21 = maxps(auVar20,auVar21);
    fVar19 = auVar21._0_4_;
    fVar22 = auVar21._4_4_;
    fVar17 = -fVar15;
    if (-fVar15 <= fVar15) {
      fVar17 = fVar15;
    }
    if (fVar19 <= fVar22) {
      if (fVar22 <= fVar17) goto label_0586cca3;
      uVar10 = (0.0 < fVar16) + 3;
      fVar18 = fVar15 * 0.0 + fVar18 * 0.0 + fVar16;
    }
    else if (fVar19 <= fVar17) {
label_0586cca3:
      uVar10 = (0.0 < fVar15) + 5;
      fVar18 = fVar16 * 0.0 + fVar18 * 0.0 + fVar15;
    }
    else {
      uVar10 = (0.0 < fVar18) + 1;
      fVar18 = fVar15 * 0.0 + fVar16 * 0.0 + fVar18;
    }
    fVar16 = -fVar18;
    if (-fVar18 <= fVar18) {
      fVar16 = fVar18;
    }
    in_RCX = (MethodInfo *)(ulong)(uVar10 & 1);
    uVar10 = (-(uint)((uVar10 & 1) == 0) | 1) + uVar10;
    uVar14 = 0xffffffff;
    if (0.92 <= fVar16) {
      uVar14 = uVar10;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,uVar14,(MethodInfo *)(ulong)uVar10);
    pUVar12 = (__this->fields).m_referenceTransform;
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    value = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (__this->fields).gizmoCamParent;
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    UnityEngine_Transform__set_localRotation(pUVar12,value,(MethodInfo *)0x0);
    fVar16 = (fVar19 + -0.15) * (float)0x3f266666;
    fVar18 = (fVar22 + -0.15) * (float)0x3f266666;
    auVar5._4_4_ = -(uint)(fVar16 < 0.0);
    auVar5._0_4_ = -(uint)(fVar16 < 0.0);
    auVar5._8_4_ = -(uint)(fVar18 < 0.0);
    auVar5._12_4_ = -(uint)(fVar18 < 0.0);
    uVar10 = movmskpd(extraout_EAX,auVar5);
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) != 0) goto label_0586cd5f;
label_0586cd77:
      pUVar3 = (__this->fields).labelsTR;
    }
    else {
      fVar16 = 0.0;
      if ((uVar10 & 2) == 0) goto label_0586cd77;
label_0586cd5f:
      fVar18 = 0.0;
      pUVar3 = (__this->fields).labelsTR;
    }
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto label_0586d08b;
    if ((int)pUVar3->max_length == 0) goto label_0586d0a0;
    if (pUVar3->m_Items[0] == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    auVar6._4_8_ = 0;
    auVar6._0_4_ = fVar16;
    UnityEngine_Transform__set_localPosition
              (pUVar3->m_Items[0],(UnityEngine_Vector3_o)(auVar6 << 0x40),(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto label_0586d08b;
    if ((pUVar3->max_length & 0xfffffffe) == 0) goto label_0586d0a0;
    if (pUVar3->m_Items[1] == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    auVar7._4_8_ = 0;
    auVar7._0_4_ = fVar18;
    UnityEngine_Transform__set_localPosition
              (pUVar3->m_Items[1],(UnityEngine_Vector3_o)(auVar7 << 0x40),(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto label_0586d08b;
    if ((uint)pUVar3->max_length < 3) goto label_0586d0a0;
    if (pUVar3->m_Items[2] == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    fVar16 = (fVar17 + -0.15) * 0.65;
    fVar18 = 0.0;
    if (0.0 <= fVar16) {
      fVar18 = fVar16;
    }
    auVar8._4_8_ = 0;
    auVar8._0_4_ = fVar18;
    UnityEngine_Transform__set_localPosition
              (pUVar3->m_Items[2],(UnityEngine_Vector3_o)(auVar8 << 0x40),(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto label_0586d08b;
    if ((int)pUVar3->max_length == 0) goto label_0586d0a0;
    if (pUVar3->m_Items[0] == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    UnityEngine_Transform__set_rotation(pUVar3->m_Items[0],value,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto label_0586d08b;
    if ((pUVar3->max_length & 0xfffffffe) == 0) goto label_0586d0a0;
    if (pUVar3->m_Items[1] == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    UnityEngine_Transform__set_rotation(pUVar3->m_Items[1],value,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto label_0586d08b;
    if ((uint)pUVar3->max_length < 3) goto label_0586d0a0;
    if (pUVar3->m_Items[2] == (UnityEngine_Transform_o *)0x0) goto label_0586d08b;
    UnityEngine_Transform__set_rotation(pUVar3->m_Items[2],value,(MethodInfo *)0x0);
    (__this->fields).updateTargetTexture = true;
    (__this->fields).prevForward.fields.x = UVar23.fields.x;
    (__this->fields).prevForward.fields.y = UVar23.fields.y;
    (__this->fields).prevForward.fields.z = fVar15;
  }
  fVar18 = (__this->fields).fadeT;
  if (1.0 <= fVar18) {
    if ((__this->fields).updateTargetTexture == false) {
      return;
    }
    pUVar11 = (__this->fields).gizmoCamera;
  }
  else {
    fVar16 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar18 = fVar18 + fVar16 * 4.0;
    fVar16 = 1.0;
    if (fVar18 <= 1.0) {
      fVar16 = fVar18;
    }
    (__this->fields).fadeT = fVar16;
    if ((__this->fields).isFadingToZero != false) {
      fVar16 = 1.0 - fVar16;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
              (__this,(__this->fields).fadingComponent,fVar16,method_01);
    if (1.0 <= (__this->fields).fadeT) {
      if ((__this->fields).isFadingToZero == false) {
        RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                  (__this,(__this->fields).fadingComponent,(__this->fields).gizmoNormalMaterial,in_RCX);
        (__this->fields).fadingComponent = -1;
        (__this->fields).updateTargetTexture = true;
        pUVar11 = (__this->fields).gizmoCamera;
        goto joined_r0x0586d041;
      }
      pUVar4 = (__this->fields).gizmoComponents;
      if (pUVar4 == (UnityEngine_Renderer_array *)0x0) goto label_0586d08b;
      uVar10 = (__this->fields).fadingComponent;
      if ((uint)pUVar4->max_length <= uVar10) goto label_0586d0a0;
      if (((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar10] == (UnityEngine_Component_o *)0x0) ||
         (pUVar13 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar10],(MethodInfo *)0x0),
         pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_0586d08b;
      UnityEngine_GameObject__SetActive(pUVar13,false,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).gizmoComponents;
      uVar14 = (__this->fields).fadingComponent;
      uVar10 = uVar14 + 1;
      if (uVar10 < 2) {
label_0586cfe0:
        uVar10 = uVar14;
      }
      else if ((uVar14 & 1) == 0) {
        uVar14 = uVar14 - 1;
        goto label_0586cfe0;
      }
      if (pUVar4 == (UnityEngine_Renderer_array *)0x0) goto label_0586d08b;
      if ((uint)pUVar4->max_length <= uVar10) {
label_0586d0a0:
        ThrowIndexOutOfRangeException();
      }
      if (((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar10] == (UnityEngine_Component_o *)0x0) ||
         (pUVar13 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar10],(MethodInfo *)0x0),
         pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_0586d08b;
      UnityEngine_GameObject__SetActive(pUVar13,false,(MethodInfo *)0x0);
    }
    (__this->fields).updateTargetTexture = true;
    pUVar11 = (__this->fields).gizmoCamera;
  }
joined_r0x0586d041:
  if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__Render(pUVar11,(MethodInfo *)0x0);
    (__this->fields).updateTargetTexture = false;
    return;
  }
label_0586d08b:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$Raycast
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x586d230
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586d35f: nop 

int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Vector3_o normalizedPosition,
                  MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Ray_o ray;
  bool bVar3;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *y;
  UnityEngine_Renderer_array *pUVar4;
  UnityEngine_Object_o *x;
  uint uVar5;
  long lVar6;
  float maxDistance;
  UnityEngine_Ray_o local_80;
  UnityEngine_RaycastHit_o local_68;
  
  if (Il2CppMethodInitialized_0754514e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_0754514e = '\x01';
  }
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  pUVar2 = (__this->fields).gizmoCamera;
  if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__ViewportPointToRay_68c0fd0(&local_80,pUVar2,normalizedPosition,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).gizmoCamera;
    if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
      maxDistance = UnityEngine_Camera__get_farClipPlane(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      ray.fields.m_Origin.fields.z = local_80.fields.m_Origin.fields.z;
      ray.fields.m_Direction.fields.x = local_80.fields.m_Direction.fields.x;
      ray.fields.m_Origin.fields.x = local_80.fields.m_Origin.fields.x;
      ray.fields.m_Origin.fields.y = local_80.fields.m_Origin.fields.y;
      ray.fields.m_Direction.fields.y = local_80.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = local_80.fields.m_Direction.fields.z;
      bVar3 = UnityEngine_Physics__Raycast_69da140(ray,&local_68,maxDistance,0x1000000,2,(MethodInfo *)0x0);
      if (!bVar3) {
        return -1;
      }
      __this_00 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
      if ((__this_00 != (UnityEngine_Collider_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        y = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).gizmoComponents;
        if (pUVar4 != (UnityEngine_Renderer_array *)0x0) {
          lVar6 = 0;
          do {
            uVar1 = (uint)pUVar4->max_length;
            uVar5 = (uint)lVar6;
            if ((int)uVar1 <= (int)uVar5) {
              return -1;
            }
            if (uVar1 <= uVar5) {
              ThrowIndexOutOfRangeException();
            }
            if ((UnityEngine_Component_o *)pUVar4->m_Items[lVar6] == (UnityEngine_Component_o *)0x0) break;
            x = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar4->m_Items[lVar6],(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
            if (bVar3) {
              return uVar5;
            }
            pUVar4 = (__this->fields).gizmoComponents;
            lVar6 = lVar6 + 1;
          } while (pUVar4 != (UnityEngine_Renderer_array *)0x0);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$OnPointerHover
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x586d3d0

void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Vector3_o normalizedPosition,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_array *pUVar2;
  uint uVar3;
  
  uVar3 = RuntimeSceneGizmo_SceneGizmoController__Raycast(__this,normalizedPosition,method);
  uVar1 = (__this->fields).highlightedComponent;
  if (uVar3 == 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    pUVar2 = (__this->fields).gizmoComponents;
    if (pUVar2 == (UnityEngine_Renderer_array *)0x0) {
label_0586d48e:
      ThrowNullReferenceException();
    }
    if ((uint)pUVar2->max_length <= uVar1) {
label_0586d493:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[(int)uVar1] == (UnityEngine_Renderer_o *)0x0) goto label_0586d48e;
    UnityEngine_Renderer__set_sharedMaterial
              (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if (uVar1 != 0xffffffff) {
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto label_0586d48e;
      if ((uint)pUVar2->max_length <= uVar1) goto label_0586d493;
      if (pUVar2->m_Items[(int)uVar1] == (UnityEngine_Renderer_o *)0x0) goto label_0586d48e;
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
    }
    if (uVar3 != (__this->fields).fadingComponent) {
      (__this->fields).highlightedComponent = uVar3;
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto label_0586d48e;
      if ((uint)pUVar2->max_length <= uVar3) goto label_0586d493;
      if (pUVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0) goto label_0586d48e;
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar3],(__this->fields).gizmoHighlightMaterial,(MethodInfo *)0x0);
      goto label_0586d480;
    }
  }
  (__this->fields).highlightedComponent = -1;
label_0586d480:
  (__this->fields).updateTargetTexture = true;
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$SetHiddenComponent
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x586c840

void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,MethodInfo *method)

{
  UnityEngine_Renderer_array *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  uint uVar3;
  MethodInfo *in_RCX;
  uint uVar4;
  MethodInfo *method_00;
  
  uVar4 = (__this->fields).fadingComponent;
  if (component != -1) {
    if (uVar4 == component) {
      return;
    }
    if (uVar4 != 0xffffffff) {
      RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                (__this,uVar4,(__this->fields).gizmoNormalMaterial,in_RCX);
      RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
                (__this,(__this->fields).fadingComponent,1.0,method_00);
      pUVar1 = (__this->fields).gizmoComponents;
      if (pUVar1 == (UnityEngine_Renderer_array *)0x0) goto label_0586ca21;
      uVar4 = (__this->fields).fadingComponent;
      if ((uint)pUVar1->max_length <= uVar4) goto label_0586ca26;
      if (((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar4] == (UnityEngine_Component_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar4],(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_0586ca21;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).gizmoComponents;
      uVar4 = (__this->fields).fadingComponent;
      if (uVar4 + 1 < 2) {
label_0586c8ee:
        uVar3 = uVar4;
      }
      else {
        uVar3 = uVar4 + 1;
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar4 - 1;
          goto label_0586c8ee;
        }
      }
      if (pUVar1 == (UnityEngine_Renderer_array *)0x0) goto label_0586ca21;
      if ((uint)pUVar1->max_length <= uVar3) goto label_0586ca26;
      in_RCX = (MethodInfo *)(long)(int)uVar3;
      if (((UnityEngine_Component_o *)pUVar1->m_Items[(long)in_RCX] == (UnityEngine_Component_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1->m_Items[(long)in_RCX],(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_0586ca21;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
    (__this->fields).fadingComponent = component;
    RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
              (__this,component,(__this->fields).gizmoFadeMaterial,in_RCX);
    (__this->fields).isFadingToZero = true;
    goto label_0586ca14;
  }
  if (uVar4 == 0xffffffff) {
    return;
  }
  if ((__this->fields).fadeT < 1.0) {
    return;
  }
  pUVar1 = (__this->fields).gizmoComponents;
  if (pUVar1 == (UnityEngine_Renderer_array *)0x0) goto label_0586ca21;
  if ((uint)pUVar1->max_length <= uVar4) goto label_0586ca26;
  if (((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar4] == (UnityEngine_Component_o *)0x0) ||
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar4],(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_0586ca21;
  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).gizmoComponents;
  uVar4 = (__this->fields).fadingComponent;
  if (uVar4 + 1 < 2) {
label_0586c9cf:
    uVar3 = uVar4;
  }
  else {
    uVar3 = uVar4 + 1;
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 - 1;
      goto label_0586c9cf;
    }
  }
  if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
    if ((uint)pUVar1->max_length <= uVar3) {
label_0586ca26:
      ThrowIndexOutOfRangeException();
    }
    if (((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3] != (UnityEngine_Component_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      (__this->fields).isFadingToZero = false;
label_0586ca14:
      (__this->fields).fadeT = 0.0;
      return;
    }
  }
label_0586ca21:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$SetAlphaOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, float alpha, const MethodInfo* method);
// 0x586d0d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586d124: jmp 0x586d183
// asm:   0x586d146: jmp 0x586d183

void RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,float alpha,
               MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  UnityEngine_TextMesh_array *pUVar1;
  UnityEngine_TextMesh_o *__this_01;
  UnityEngine_Color_o value;
  
  if (component == -1) {
    return;
  }
  __this_00 = (__this->fields).gizmoFadeMaterial;
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_68e0ad0
              (__this_00,(__this->fields).gizmoMaterialFadeProperty,alpha,(MethodInfo *)0x0);
    if (component - 5U < 2) {
      pUVar1 = (__this->fields).labels;
      if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto label_0586d183;
      if ((uint)pUVar1->max_length < 3) goto label_0586d188;
      __this_01 = pUVar1->m_Items[2];
    }
    else {
      if (1 < component - 1U) {
        pUVar1 = (__this->fields).labels;
        if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto label_0586d183;
        if ((pUVar1->max_length & 0xfffffffe) == 0) goto label_0586d188;
        __this_01 = pUVar1->m_Items[1];
        if (__this_01 == (UnityEngine_TextMesh_o *)0x0) goto label_0586d183;
        goto label_0586d163;
      }
      pUVar1 = (__this->fields).labels;
      if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto label_0586d183;
      if ((int)pUVar1->max_length == 0) {
label_0586d188:
        ThrowIndexOutOfRangeException();
      }
      __this_01 = pUVar1->m_Items[0];
    }
    if (__this_01 != (UnityEngine_TextMesh_o *)0x0) {
label_0586d163:
      value.fields.a = alpha;
      value.fields.b = 1.0;
      value.fields.r = 1.0;
      value.fields.g = 1.0;
      UnityEngine_TextMesh__set_color(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
label_0586d183:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$SetMaterialOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x586d190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586d1b9: jmp 0x586d1ca

void RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  UnityEngine_Renderer_array *pUVar1;
  uint uVar2;
  uint uVar3;
  
  if (component == -1) {
    return;
  }
  uVar3 = component;
  if (component == 0) {
label_0586d1ae:
    uVar2 = (__this->fields).highlightedComponent;
    if (uVar2 == component) goto label_0586d1ca;
label_0586d1b5:
    if (uVar3 == uVar2) goto label_0586d1ca;
  }
  else {
    if ((component & 1U) == 0) {
      uVar3 = component - 1;
      goto label_0586d1ae;
    }
    uVar3 = component + 1;
    uVar2 = (__this->fields).highlightedComponent;
    if (uVar2 != component) goto label_0586d1b5;
label_0586d1ca:
    (__this->fields).highlightedComponent = -1;
  }
  pUVar1 = (__this->fields).gizmoComponents;
  if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
    if ((uint)pUVar1->max_length <= (uint)component) {
label_0586d224:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar1->m_Items[component] != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial(pUVar1->m_Items[component],material,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).gizmoComponents;
      if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
        if ((uint)pUVar1->max_length <= uVar3) goto label_0586d224;
        if (pUVar1->m_Items[(int)uVar3] != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial(pUVar1->m_Items[(int)uVar3],material,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.SceneGizmoController$$GetOppositeComponent
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x586d0b0

int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,MethodInfo *method)

{
  if (1 < component + 1U) {
    if ((component & 1U) != 0) {
      return component + 1U;
    }
    component = component + -1;
  }
  return component;
}


// RuntimeSceneGizmo.SceneGizmoController$$.ctor
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController___ctor (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x586d4a0

void RuntimeSceneGizmo_SceneGizmoController___ctor
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  (__this->fields).highlightedComponent = -1;
  (__this->fields).fadingComponent = -1;
  (__this->fields).fadeT = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


