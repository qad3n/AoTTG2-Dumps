// Type: RuntimeSceneGizmo.SceneGizmoController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/SceneGizmoController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoController.cs  [CHANGED since prior version]
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoController$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x3d8cf40

UnityEngine_Transform_o *
RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform
          (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  return (__this->fields).m_referenceTransform;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x3d8cf50

void RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o *y;
  undefined1 auVar2 [12];
  char cVar3;
  bool_conflict bVar4;
  uint uVar5;
  int32_t iVar6;
  UnityEngine_Camera_o *pUVar7;
  undefined8 uVar9;
  float fVar10;
  UnityEngine_Color_o UVar8;
  
  if (DAT_05702708 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702708 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (value == (UnityEngine_Transform_o *)0x0) goto LAB_03d8d0cf;
    cVar3 = (*(value->klass->vtable)._0_Equals.methodPtr)
                      (value,0,(value->klass->vtable)._0_Equals.method);
    if (cVar3 != '\0') goto LAB_03d8cfd3;
  }
  else {
LAB_03d8cfd3:
    pUVar7 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8d0cf;
    value = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  }
  y = (__this->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  ppUVar1 = &(__this->fields).m_referenceTransform;
  *ppUVar1 = value;
  il2cpp_runtime_glue(ppUVar1,value);
  if (*ppUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = (UnityEngine_Camera_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_Camera_GetComponent_Camera);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      return;
    }
    if (pUVar7 != (UnityEngine_Camera_o *)0x0) {
      uVar5 = UnityEngine_Camera__get_cullingMask(pUVar7,(MethodInfo *)0x0);
      UnityEngine_Camera__set_cullingMask(pUVar7,uVar5 & 0xfeffffff,(MethodInfo *)0x0);
      iVar6 = UnityEngine_Camera__get_clearFlags(pUVar7,(MethodInfo *)0x0);
      if (iVar6 != 2) {
        return;
      }
      UVar8 = UnityEngine_Camera__get_backgroundColor(pUVar7,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).gizmoCamera;
      if (pUVar7 != (UnityEngine_Camera_o *)0x0) {
        auVar2 = UVar8.fields._0_12_;
        UVar8.fields.a = 0.0;
        UVar8.fields.r = (float)auVar2._0_4_;
        uVar9._4_4_ = (float)auVar2._4_4_;
        register0x00001240 = (float)auVar2._8_4_;
        UnityEngine_Camera__set_backgroundColor(pUVar7,UVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03d8d0cf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoController$$get_TargetTexture
// il2cpp: UnityEngine_RenderTexture_o* RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x3d8d0e0

UnityEngine_RenderTexture_o *
RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture
          (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  return (__this->fields)._TargetTexture_k__BackingField;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_TargetTexture
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_RenderTexture_o* value, const MethodInfo* method);
// 0x3d8d0f0

void RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_RenderTexture_o *value,
               MethodInfo *method)

{
  (__this->fields)._TargetTexture_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._TargetTexture_k__BackingField);
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__Awake (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x3d8d110

void RuntimeSceneGizmo_SceneGizmoController__Awake
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_array **ppUVar1;
  UnityEngine_Material_o **ppUVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_TextMesh_array *pUVar4;
  UnityEngine_Component_o *pUVar5;
  int32_t iVar6;
  int32_t iVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_array *pUVar9;
  UnityEngine_RenderTexture_o *__this_00;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Material_o *pUVar11;
  UnityEngine_Renderer_array *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  UnityEngine_Color_o value;
  
  if (DAT_05702709 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_RenderTexture);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    il2cpp_init_method_metadata(&"HIGHLIGHT_ON");
    il2cpp_init_method_metadata(&"_AlphaVal");
    DAT_05702709 = '\x01';
  }
  pUVar3 = (__this->fields).gizmoCamera;
  if ((pUVar3 != (UnityEngine_Camera_o *)0x0) &&
     (pUVar8 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
    (__this->fields).gizmoCamParent = pUVar8;
    il2cpp_runtime_glue(&(__this->fields).gizmoCamParent,pUVar8);
    pUVar4 = (__this->fields).labels;
    if (pUVar4 != (UnityEngine_TextMesh_array *)0x0) {
      pUVar9 = (UnityEngine_Transform_array *)il2cpp_glue_02274930(TypeInfo_Transform,(int)pUVar4->max_length);
      ppUVar1 = &(__this->fields).labelsTR;
      (__this->fields).labelsTR = pUVar9;
      il2cpp_runtime_glue();
      iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      iVar7 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
      }
      iVar6 = UnityEngine_Mathf__NextPowerOfTwo(iVar7 / 6,(MethodInfo *)0x0);
      iVar7 = 0x200;
      if (iVar6 < 0x201) {
        iVar7 = iVar6;
      }
      __this_00 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_glue(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor(__this_00,iVar7,iVar7,0x10,(MethodInfo *)0x0);
      (__this->fields)._TargetTexture_k__BackingField = __this_00;
      il2cpp_runtime_glue(&(__this->fields)._TargetTexture_k__BackingField);
      pUVar3 = (__this->fields).gizmoCamera;
      if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_aspect(pUVar3,1.0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).gizmoCamera;
        if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__set_targetTexture
                    (pUVar3,(__this->fields)._TargetTexture_k__BackingField,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).gizmoCamera;
          if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
            UnityEngine_Camera__set_cullingMask(pUVar3,0x1000000,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).gizmoCamera;
            if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
              UnityEngine_Camera__set_eventMask(pUVar3,0,(MethodInfo *)0x0);
              pUVar3 = (__this->fields).gizmoCamera;
              if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)pUVar3,0,(MethodInfo *)0x0);
                pUVar12 = (__this->fields).gizmoComponents;
                if (pUVar12 != (UnityEngine_Renderer_array *)0x0) {
                  if ((int)pUVar12->max_length == 0) {
LAB_03d8d50d:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if (pUVar12->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
                    pUVar10 = UnityEngine_Renderer__get_sharedMaterial
                                        (pUVar12->m_Items[0],(MethodInfo *)0x0);
                    (__this->fields).gizmoNormalMaterial = pUVar10;
                    il2cpp_runtime_glue(&(__this->fields).gizmoNormalMaterial,pUVar10);
                    pUVar10 = (__this->fields).gizmoNormalMaterial;
                    pUVar11 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
                    UnityEngine_Material___ctor(pUVar11,pUVar10,(MethodInfo *)0x0);
                    (__this->fields).gizmoFadeMaterial = pUVar11;
                    il2cpp_runtime_glue(&(__this->fields).gizmoFadeMaterial);
                    iVar7 = UnityEngine_Shader__PropertyToID("_AlphaVal",(MethodInfo *)0x0);
                    (__this->fields).gizmoMaterialFadeProperty = iVar7;
                    pUVar10 = (__this->fields).gizmoNormalMaterial;
                    pUVar11 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
                    UnityEngine_Material___ctor(pUVar11,pUVar10,(MethodInfo *)0x0);
                    ppUVar2 = &(__this->fields).gizmoHighlightMaterial;
                    (__this->fields).gizmoHighlightMaterial = pUVar11;
                    il2cpp_runtime_glue(ppUVar2,pUVar11);
                    pUVar10 = (__this->fields).gizmoHighlightMaterial;
                    if (pUVar10 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__EnableKeyword(pUVar10,"HIGHLIGHT_ON",(MethodInfo *)0x0);
                      pUVar10 = *ppUVar2;
                      if (pUVar10 != (UnityEngine_Material_o *)0x0) {
                        value.fields.b = 0.015686275;
                        value.fields.a = 1.0;
                        value.fields.r = 1.0;
                        value.fields.g = 0.92156863;
                        UnityEngine_Material__set_color(pUVar10,value,(MethodInfo *)0x0);
                        pUVar12 = (__this->fields).gizmoComponents;
                        if (pUVar12 != (UnityEngine_Renderer_array *)0x0) {
                          lVar16 = 0;
                          while( true ) {
                            uVar17 = (uint)pUVar12->max_length;
                            if ((int)uVar17 <= (int)(uint)lVar16) break;
                            if (uVar17 <= (uint)lVar16) goto LAB_03d8d50d;
                            if (((UnityEngine_Component_o *)pUVar12->m_Items[lVar16] ==
                                 (UnityEngine_Component_o *)0x0) ||
                               (pUVar13 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)
                                                     pUVar12->m_Items[lVar16],(MethodInfo *)0x0),
                               pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03d8d4f9;
                            UnityEngine_GameObject__set_layer(pUVar13,0x18,(MethodInfo *)0x0);
                            pUVar12 = (__this->fields).gizmoComponents;
                            lVar16 = lVar16 + 1;
                            if (pUVar12 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8d4f9;
                          }
                          pUVar9 = *ppUVar1;
                          if (pUVar9 != (UnityEngine_Transform_array *)0x0) {
                            uVar17 = 0;
                            lVar16 = 0x20;
                            goto LAB_03d8d440;
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
LAB_03d8d4f9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03d8d440:
  if ((int)pUVar9->max_length <= (int)uVar17) {
    return;
  }
  pUVar4 = (__this->fields).labels;
  if (pUVar4 == (UnityEngine_TextMesh_array *)0x0) goto LAB_03d8d4f9;
  if ((uint)pUVar4->max_length <= uVar17) goto LAB_03d8d50d;
  pUVar5 = *(UnityEngine_Component_o **)((long)pUVar4->m_Items + lVar16 + -0x20);
  if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
     (pUVar13 = UnityEngine_Component__get_gameObject(pUVar5,(MethodInfo *)0x0),
     pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03d8d4f9;
  UnityEngine_GameObject__set_layer(pUVar13,0x18,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).labels;
  if (pUVar4 == (UnityEngine_TextMesh_array *)0x0) goto LAB_03d8d4f9;
  if ((uint)pUVar4->max_length <= uVar17) goto LAB_03d8d50d;
  pUVar5 = *(UnityEngine_Component_o **)((long)pUVar4->m_Items + lVar16 + -0x20);
  if (pUVar5 == (UnityEngine_Component_o *)0x0) goto LAB_03d8d4f9;
  pUVar9 = (__this->fields).labelsTR;
  pUVar8 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8d4f9;
  if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
     (lVar14 = il2cpp_runtime_glue(pUVar8,(((pUVar9->obj).klass)->_1).element_class), lVar14 == 0)) {
    uVar15 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar15,0);
  }
  if ((uint)pUVar9->max_length <= uVar17) goto LAB_03d8d50d;
  *(UnityEngine_Transform_o **)((long)pUVar9->m_Items + lVar16 + -0x20) = pUVar8;
  il2cpp_runtime_glue((long)pUVar9->m_Items + lVar16 + -0x20);
  uVar17 = uVar17 + 1;
  pUVar9 = *ppUVar1;
  lVar16 = lVar16 + 8;
  if (pUVar9 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8d4f9;
  goto LAB_03d8d440;
}


// RuntimeSceneGizmo.SceneGizmoController$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnEnable (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x3d8d530

void RuntimeSceneGizmo_SceneGizmoController__OnEnable
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_array *pUVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  uVar1 = (__this->fields).highlightedComponent;
  if ((long)(int)uVar1 == -1) {
LAB_03d8d568:
    RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,-1,in_RDX);
    *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
    return;
  }
  pUVar2 = (__this->fields).gizmoComponents;
  if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
    if ((uint)pUVar2->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[(int)uVar1] != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0)
      ;
      (__this->fields).highlightedComponent = -1;
      in_RDX = extraout_RDX;
      goto LAB_03d8d568;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoController$$OnDestroy
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnDestroy (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x3d8d790

void RuntimeSceneGizmo_SceneGizmoController__OnDestroy
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  UnityEngine_RenderTexture_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570270a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570270a = '\x01';
  }
  pUVar1 = (__this->fields)._TargetTexture_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._TargetTexture_k__BackingField;
    if (pUVar1 != (UnityEngine_RenderTexture_o *)0x0) {
      UnityEngine_RenderTexture__Release(pUVar1,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._TargetTexture_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$LateUpdate
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__LateUpdate (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x3d8d830

void RuntimeSceneGizmo_SceneGizmoController__LateUpdate
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Transform_array *pUVar3;
  UnityEngine_Renderer_array *pUVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  bool_conflict bVar8;
  uint uVar9;
  UnityEngine_Camera_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  MethodInfo *in_RCX;
  uint uVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int32_t component;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Quaternion_o value;
  
  if (DAT_0570270b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"ReferenceTransform mustn't be null!");
    DAT_0570270b = '\x01';
  }
  pUVar11 = (__this->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar10 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8de0c;
    pUVar11 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this,pUVar11,method_00);
    pUVar11 = (__this->fields).m_referenceTransform;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogError("ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
      return;
    }
  }
  pUVar11 = (__this->fields).m_referenceTransform;
  if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
  UVar20 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
  fVar15 = UVar20.fields.z;
  fVar16 = UVar20.fields.x;
  fVar14 = UVar20.fields.y;
  uVar1 = (__this->fields).prevForward.fields.x;
  uVar2 = (__this->fields).prevForward.fields.y;
  fVar17 = (__this->fields).prevForward.fields.z - fVar15;
  if (9.9999994e-11 <=
      ((float)uVar1 - fVar16) * ((float)uVar1 - fVar16) +
      ((float)uVar2 - fVar14) * ((float)uVar2 - fVar14) + fVar17 * fVar17) {
    fVar19 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 | (uint)-fVar16 & -(uint)(fVar16 < 0.0));
    fVar18 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 | (uint)-fVar14 & -(uint)(fVar14 < 0.0));
    fVar17 = (float)(~-(uint)(fVar15 < 0.0) & (uint)fVar15 | (uint)-fVar15 & -(uint)(fVar15 < 0.0));
    if (fVar19 <= fVar18) {
      if (fVar18 <= fVar17) goto LAB_03d8da2d;
      uVar9 = (0.0 < fVar14) + 3;
      fVar16 = fVar15 * 0.0 + fVar16 * 0.0 + fVar14;
    }
    else if (fVar19 <= fVar17) {
LAB_03d8da2d:
      uVar9 = (0.0 < fVar15) + 5;
      fVar16 = fVar14 * 0.0 + fVar16 * 0.0 + fVar15;
    }
    else {
      uVar9 = (0.0 < fVar16) + 1;
      fVar16 = fVar15 * 0.0 + fVar14 * 0.0 + fVar16;
    }
    component = -1;
    if (0.92 <= (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 |
                       (uint)-fVar16 & -(uint)(fVar16 < 0.0))) {
      in_RCX = (MethodInfo *)(ulong)(uVar9 & 1);
      component = uVar9 + (uVar9 & 1) * 2 + -1;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,component,method_01);
    pUVar11 = (__this->fields).m_referenceTransform;
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    value = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
    pUVar11 = (__this->fields).gizmoCamParent;
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    UnityEngine_Transform__set_localRotation(pUVar11,value,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8de0c;
    if ((int)pUVar3->max_length == 0) goto LAB_03d8de11;
    if (pUVar3->m_Items[0] == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    fVar14 = (fVar19 + -0.15) * 0.65;
    fVar16 = 0.0;
    if (0.0 <= fVar14) {
      fVar16 = fVar14;
    }
    auVar5._4_8_ = 0;
    auVar5._0_4_ = fVar16;
    UnityEngine_Transform__set_localPosition
              (pUVar3->m_Items[0],(UnityEngine_Vector3_o)(auVar5 << 0x40),(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8de0c;
    if ((uint)pUVar3->max_length < 2) goto LAB_03d8de11;
    if (pUVar3->m_Items[1] == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    fVar14 = (fVar18 + -0.15) * 0.65;
    fVar16 = 0.0;
    if (0.0 <= fVar14) {
      fVar16 = fVar14;
    }
    auVar6._4_8_ = 0;
    auVar6._0_4_ = fVar16;
    UnityEngine_Transform__set_localPosition
              (pUVar3->m_Items[1],(UnityEngine_Vector3_o)(auVar6 << 0x40),(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8de0c;
    if ((uint)pUVar3->max_length < 3) goto LAB_03d8de11;
    if (pUVar3->m_Items[2] == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    fVar14 = (fVar17 + -0.15) * 0.65;
    fVar16 = 0.0;
    if (0.0 <= fVar14) {
      fVar16 = fVar14;
    }
    auVar7._4_8_ = 0;
    auVar7._0_4_ = fVar16;
    UnityEngine_Transform__set_localPosition
              (pUVar3->m_Items[2],(UnityEngine_Vector3_o)(auVar7 << 0x40),(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8de0c;
    if ((int)pUVar3->max_length == 0) goto LAB_03d8de11;
    if (pUVar3->m_Items[0] == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    UnityEngine_Transform__set_rotation(pUVar3->m_Items[0],value,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8de0c;
    if ((uint)pUVar3->max_length < 2) goto LAB_03d8de11;
    if (pUVar3->m_Items[1] == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    UnityEngine_Transform__set_rotation(pUVar3->m_Items[1],value,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).labelsTR;
    if (pUVar3 == (UnityEngine_Transform_array *)0x0) goto LAB_03d8de0c;
    if ((uint)pUVar3->max_length < 3) goto LAB_03d8de11;
    if (pUVar3->m_Items[2] == (UnityEngine_Transform_o *)0x0) goto LAB_03d8de0c;
    UnityEngine_Transform__set_rotation(pUVar3->m_Items[2],value,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
    (__this->fields).prevForward.fields.x = (float)(int)UVar20.fields._0_8_;
    (__this->fields).prevForward.fields.y = (float)(int)((ulong)UVar20.fields._0_8_ >> 0x20);
    (__this->fields).prevForward.fields.z = fVar15;
  }
  fVar16 = (__this->fields).fadeT;
  if (1.0 <= fVar16) {
    if ((char)(__this->fields).updateTargetTexture == '\0') {
      return;
    }
    pUVar10 = (__this->fields).gizmoCamera;
  }
  else {
    fVar14 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar16 = fVar16 + fVar14 * 4.0;
    fVar14 = 1.0;
    if (fVar16 <= 1.0) {
      fVar14 = fVar16;
    }
    (__this->fields).fadeT = fVar14;
    if ((char)(__this->fields).isFadingToZero != '\0') {
      fVar14 = 1.0 - fVar14;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
              (__this,(__this->fields).fadingComponent,fVar14,method_02);
    if (1.0 <= (__this->fields).fadeT) {
      if ((char)(__this->fields).isFadingToZero == '\0') {
        RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                  (__this,(__this->fields).fadingComponent,(__this->fields).gizmoNormalMaterial,
                   in_RCX);
        (__this->fields).fadingComponent = -1;
        *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
        pUVar10 = (__this->fields).gizmoCamera;
        goto joined_r0x03d8ddc2;
      }
      pUVar4 = (__this->fields).gizmoComponents;
      if (pUVar4 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8de0c;
      uVar9 = (__this->fields).fadingComponent;
      if ((uint)pUVar4->max_length <= uVar9) {
LAB_03d8de11:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar9] == (UnityEngine_Component_o *)0x0)
         || (pUVar12 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar9],
                                  (MethodInfo *)0x0), pUVar12 == (UnityEngine_GameObject_o *)0x0))
      goto LAB_03d8de0c;
      UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).gizmoComponents;
      uVar9 = (__this->fields).fadingComponent;
      uVar13 = uVar9;
      if ((1 < uVar9 + 1) && (uVar13 = uVar9 + 1, (uVar9 & 1) == 0)) {
        uVar13 = uVar9 - 1;
      }
      if (pUVar4 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8de0c;
      if ((uint)pUVar4->max_length <= uVar13) goto LAB_03d8de11;
      if (((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar13] == (UnityEngine_Component_o *)0x0
          ) || (pUVar12 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar13],
                                     (MethodInfo *)0x0), pUVar12 == (UnityEngine_GameObject_o *)0x0)
         ) goto LAB_03d8de0c;
      UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
    }
    *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
    pUVar10 = (__this->fields).gizmoCamera;
  }
joined_r0x03d8ddc2:
  if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__Render(pUVar10,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields).updateTargetTexture = 0;
    return;
  }
LAB_03d8de0c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoController$$Raycast
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x3d8dfa0

int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,
                  UnityEngine_Vector3_o normalizedPosition,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
  bool_conflict bVar3;
  UnityEngine_Collider_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Object_o *y;
  UnityEngine_Renderer_array *pUVar4;
  UnityEngine_Object_o *x;
  uint uVar5;
  long lVar6;
  float maxDistance;
  float fVar7;
  UnityEngine_Vector3_o pos;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 in_stack_ffffffffffffff40;
  float in_stack_ffffffffffffff44;
  undefined8 uVar10;
  float fStack_ac;
  UnityEngine_Ray_o local_80;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod pIStack_58;
  uint32_t uStack_50;
  float local_4c;
  float fStack_48;
  undefined8 uStack_44;
  
  fVar7 = normalizedPosition.fields.z;
  if (DAT_0570270c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_0570270c = '\x01';
    in_stack_ffffffffffffff44 = fVar7;
  }
  fStack_48 = 0.0;
  uStack_44 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0.0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  pUVar2 = (__this->fields).gizmoCamera;
  if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
    pos.fields.z = fVar7;
    pos.fields.x = (float)(int)normalizedPosition.fields._0_8_;
    pos.fields.y = (float)(int)((ulong)normalizedPosition.fields._0_8_ >> 0x20);
    UnityEngine_Camera__ViewportPointToRay(&local_80,pUVar2,pos,(MethodInfo *)0x0);
    fVar7 = local_80.fields.m_Origin.fields.z;
    fStack_ac = local_80.fields.m_Direction.fields.x;
    pUVar2 = (__this->fields).gizmoCamera;
    if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
      maxDistance = UnityEngine_Camera__get_farClipPlane(pUVar2,(MethodInfo *)0x0);
      uVar8 = local_80.fields.m_Origin.fields._0_8_;
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_init_class();
        in_stack_ffffffffffffff44 = maxDistance;
        uVar8 = local_80.fields.m_Origin.fields._0_8_;
      }
      uVar9 = CONCAT44(fStack_ac,fVar7);
      ray.fields.m_Origin.fields.z = fVar7;
      ray.fields.m_Direction.fields.x = fStack_ac;
      ray.fields.m_Origin.fields.x = (float)uVar8;
      ray.fields.m_Origin.fields.y = SUB84(uVar8,4);
      ray.fields.m_Direction.fields.y = local_80.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = local_80.fields.m_Direction.fields.z;
      uVar10 = uVar8;
      bVar3 = UnityEngine_Physics__Raycast
                        (ray,(UnityEngine_RaycastHit_o *)&local_68,maxDistance,0x1000000,2,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return -1;
      }
      __this_00.fields.m_Point.fields.z = (float)(int)uVar9;
      __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)uVar9 >> 0x20);
      __this_00.fields.m_Point.fields.x = (float)uVar8;
      __this_00.fields.m_Point.fields.y = SUB84(uVar8,4);
      __this_00.fields.m_Normal.fields.y = local_80.fields.m_Direction.fields.y;
      __this_00.fields.m_Normal.fields.z = local_80.fields.m_Direction.fields.z;
      __this_00.fields.m_FaceID = in_stack_ffffffffffffff40;
      __this_00.fields.m_Distance = in_stack_ffffffffffffff44;
      __this_00.fields.m_UV.fields.x = (float)uVar10;
      __this_00.fields.m_UV.fields.y = SUB84(uVar10,4);
      __this_00.fields.m_Collider = (int32_t)fVar7;
      __this_01 = UnityEngine_RaycastHit__get_collider(__this_00,(MethodInfo *)&local_68);
      if ((__this_01 != (UnityEngine_Collider_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_Transform_o *)0x0)) {
        y = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((UnityEngine_Component_o *)pUVar4->m_Items[lVar6] == (UnityEngine_Component_o *)0x0)
            break;
            x = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar4->m_Items[lVar6],(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return uVar5;
            }
            pUVar4 = (__this->fields).gizmoComponents;
            lVar6 = lVar6 + 1;
          } while (pUVar4 != (UnityEngine_Renderer_array *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoController$$OnPointerHover
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x3d8e170

void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,
               UnityEngine_Vector3_o normalizedPosition,MethodInfo *method)

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
LAB_03d8e22e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((uint)pUVar2->max_length <= uVar1) {
LAB_03d8e233:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[(int)uVar1] == (UnityEngine_Renderer_o *)0x0) goto LAB_03d8e22e;
    UnityEngine_Renderer__set_sharedMaterial
              (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if (uVar1 != 0xffffffff) {
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8e22e;
      if ((uint)pUVar2->max_length <= uVar1) goto LAB_03d8e233;
      if (pUVar2->m_Items[(int)uVar1] == (UnityEngine_Renderer_o *)0x0) goto LAB_03d8e22e;
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0)
      ;
    }
    if (uVar3 != (__this->fields).fadingComponent) {
      (__this->fields).highlightedComponent = uVar3;
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8e22e;
      if ((uint)pUVar2->max_length <= uVar3) goto LAB_03d8e233;
      if (pUVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0) goto LAB_03d8e22e;
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar2->m_Items[(int)uVar3],(__this->fields).gizmoHighlightMaterial,
                 (MethodInfo *)0x0);
      goto LAB_03d8e220;
    }
  }
  (__this->fields).highlightedComponent = -1;
LAB_03d8e220:
  *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$SetHiddenComponent
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x3d8d590

void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *in_RCX;
  uint uVar4;
  MethodInfo *method_00;
  
  uVar1 = (__this->fields).fadingComponent;
  if (component != -1) {
    if (uVar1 == component) {
      return;
    }
    if (uVar1 != 0xffffffff) {
      RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                (__this,uVar1,(__this->fields).gizmoNormalMaterial,in_RCX);
      RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
                (__this,(__this->fields).fadingComponent,1.0,method_00);
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8d779;
      uVar1 = (__this->fields).fadingComponent;
      if ((uint)pUVar2->max_length <= uVar1) goto LAB_03d8d77e;
      if (((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar1] == (UnityEngine_Component_o *)0x0)
         || (pUVar3 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar1],
                                 (MethodInfo *)0x0), pUVar3 == (UnityEngine_GameObject_o *)0x0))
      goto LAB_03d8d779;
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).gizmoComponents;
      uVar1 = (__this->fields).fadingComponent;
      uVar4 = uVar1;
      if ((1 < uVar1 + 1) && (uVar4 = uVar1 + 1, (uVar1 & 1) == 0)) {
        uVar4 = uVar1 - 1;
      }
      if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8d779;
      if ((uint)pUVar2->max_length <= uVar4) goto LAB_03d8d77e;
      in_RCX = (MethodInfo *)(long)(int)uVar4;
      if (((UnityEngine_Component_o *)pUVar2->m_Items[(long)in_RCX] ==
           (UnityEngine_Component_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2->m_Items[(long)in_RCX],
                              (MethodInfo *)0x0), pUVar3 == (UnityEngine_GameObject_o *)0x0))
      goto LAB_03d8d779;
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
    }
    (__this->fields).fadingComponent = component;
    RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
              (__this,component,(__this->fields).gizmoFadeMaterial,in_RCX);
    *(undefined1 *)&(__this->fields).isFadingToZero = 1;
LAB_03d8d74d:
    (__this->fields).fadeT = 0.0;
    return;
  }
  if (uVar1 == 0xffffffff) {
    return;
  }
  if ((__this->fields).fadeT < 1.0) {
    return;
  }
  pUVar2 = (__this->fields).gizmoComponents;
  if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto LAB_03d8d779;
  if ((uint)pUVar2->max_length <= uVar1) {
LAB_03d8d77e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar1] != (UnityEngine_Component_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar1],(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).gizmoComponents;
    uVar1 = (__this->fields).fadingComponent;
    uVar4 = uVar1;
    if ((1 < uVar1 + 1) && (uVar4 = uVar1 + 1, (uVar1 & 1) == 0)) {
      uVar4 = uVar1 - 1;
    }
    if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
      if ((uint)pUVar2->max_length <= uVar4) goto LAB_03d8d77e;
      if (((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar4] == (UnityEngine_Component_o *)0x0)
         || (pUVar3 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar4],
                                 (MethodInfo *)0x0), pUVar3 == (UnityEngine_GameObject_o *)0x0))
      goto LAB_03d8d779;
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields).isFadingToZero = 0;
      goto LAB_03d8d74d;
    }
  }
LAB_03d8d779:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoController$$SetAlphaOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, float alpha, const MethodInfo* method);
// 0x3d8de40

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
    UnityEngine_Material__SetFloat
              (__this_00,(__this->fields).gizmoMaterialFadeProperty,alpha,(MethodInfo *)0x0);
    if (component - 5U < 2) {
      pUVar1 = (__this->fields).labels;
      if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto LAB_03d8def1;
      if ((uint)pUVar1->max_length < 3) goto LAB_03d8def6;
      __this_01 = pUVar1->m_Items[2];
    }
    else {
      if (1 < component - 1U) {
        pUVar1 = (__this->fields).labels;
        if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto LAB_03d8def1;
        if ((uint)pUVar1->max_length < 2) goto LAB_03d8def6;
        __this_01 = pUVar1->m_Items[1];
        if (__this_01 == (UnityEngine_TextMesh_o *)0x0) goto LAB_03d8def1;
        goto LAB_03d8ded1;
      }
      pUVar1 = (__this->fields).labels;
      if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto LAB_03d8def1;
      if ((int)pUVar1->max_length == 0) {
LAB_03d8def6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_01 = pUVar1->m_Items[0];
    }
    if (__this_01 != (UnityEngine_TextMesh_o *)0x0) {
LAB_03d8ded1:
      value.fields.a = alpha;
      value.fields.b = 1.0;
      value.fields.r = 1.0;
      value.fields.g = 1.0;
      UnityEngine_TextMesh__set_color(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03d8def1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoController$$SetMaterialOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3d8df00

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
LAB_03d8df1e:
    uVar2 = (__this->fields).highlightedComponent;
    if (uVar2 == component) goto LAB_03d8df29;
LAB_03d8df25:
    if (uVar3 == uVar2) goto LAB_03d8df29;
  }
  else {
    if ((component & 1U) == 0) {
      uVar3 = component - 1;
      goto LAB_03d8df1e;
    }
    uVar3 = component + 1;
    uVar2 = (__this->fields).highlightedComponent;
    if (uVar2 != component) goto LAB_03d8df25;
LAB_03d8df29:
    (__this->fields).highlightedComponent = -1;
  }
  pUVar1 = (__this->fields).gizmoComponents;
  if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
    if ((uint)pUVar1->max_length <= (uint)component) {
LAB_03d8df94:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar1->m_Items[component] != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar1->m_Items[component],material,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).gizmoComponents;
      if (pUVar1 != (UnityEngine_Renderer_array *)0x0) {
        if ((uint)pUVar1->max_length <= uVar3) goto LAB_03d8df94;
        if (pUVar1->m_Items[(int)uVar3] != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial
                    (pUVar1->m_Items[(int)uVar3],material,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.SceneGizmoController$$GetOppositeComponent
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x3d8de20

int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,
                  MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = component;
  if ((1 < component + 1U) && (uVar1 = component + 1U, (component & 1U) == 0)) {
    uVar1 = component - 1;
  }
  return uVar1;
}


// RuntimeSceneGizmo.SceneGizmoController$$.ctor
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController___ctor (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x3d8e240

void RuntimeSceneGizmo_SceneGizmoController___ctor
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  (__this->fields).highlightedComponent = -1;
  (__this->fields).fadingComponent = -1;
  (__this->fields).fadeT = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


