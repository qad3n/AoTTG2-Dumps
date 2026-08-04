// Type: RuntimeSceneGizmo.SceneGizmoController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/SceneGizmoController.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoController.cs
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoController$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x4082890

UnityEngine_Transform_o *
RuntimeSceneGizmo_SceneGizmoController__get_ReferenceTransform
          (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  return (__this->fields).m_referenceTransform;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x40828a0

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
  
  if (g_data_057ac3b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3b8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (value == (UnityEngine_Transform_o *)0x0) goto label_04082a1f;
    cVar3 = (*(value->klass->vtable)._0_Equals.methodPtr)(value,0,(value->klass->vtable)._0_Equals.method);
    if (cVar3 != '\0') goto label_04082923;
  }
  else {
label_04082923:
    pUVar7 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Camera_o *)0x0) goto label_04082a1f;
    value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  }
  y = (__this->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  ppUVar1 = &(__this->fields).m_referenceTransform;
  *ppUVar1 = value;
  il2cpp_runtime_helper_022b4080(ppUVar1,value);
  if (*ppUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = (UnityEngine_Camera_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)*ppUVar1,MethodInfo_Camera_GetComponent_Camera);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
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
label_04082a1f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$get_TargetTexture
// il2cpp: UnityEngine_RenderTexture_o* RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x4082a30

UnityEngine_RenderTexture_o *
RuntimeSceneGizmo_SceneGizmoController__get_TargetTexture
          (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  return (__this->fields)._TargetTexture_k__BackingField;
}


// RuntimeSceneGizmo.SceneGizmoController$$set_TargetTexture
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_RenderTexture_o* value, const MethodInfo* method);
// 0x4082a40

void RuntimeSceneGizmo_SceneGizmoController__set_TargetTexture
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_RenderTexture_o *value,
               MethodInfo *method)

{
  (__this->fields)._TargetTexture_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._TargetTexture_k__BackingField);
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__Awake (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x4082a60

void RuntimeSceneGizmo_SceneGizmoController__Awake
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_array **ppUVar1;
  UnityEngine_Material_o **ppUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_TextMesh_array *pUVar5;
  UnityEngine_Component_o *pUVar6;
  UnityEngine_Renderer_array *pUVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  int32_t iVar11;
  int32_t iVar12;
  bool_conflict bVar13;
  uint uVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_array *pUVar16;
  UnityEngine_RenderTexture_o *pUVar17;
  UnityEngine_Material_o *pUVar18;
  UnityEngine_Material_o *pUVar19;
  UnityEngine_GameObject_o *pUVar20;
  long lVar21;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar22;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_Camera_o *pUVar23;
  UnityEngine_Renderer_array *pUVar24;
  uint uVar25;
  uint uVar26;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lVar27;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_01;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Color_o value;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_o UVar34;
  
  if (g_data_057ac3b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    il2cpp_runtime_helper_023445d0(&"HIGHLIGHT_ON");
    il2cpp_runtime_helper_023445d0(&"_AlphaVal");
    g_data_057ac3b9 = '\x01';
  }
  pUVar23 = (__this->fields).gizmoCamera;
  if ((pUVar23 == (UnityEngine_Camera_o *)0x0) ||
     (pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
     pUVar15 == (UnityEngine_Transform_o *)0x0)) {
label_04082e49:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pUVar15 = UnityEngine_Transform__get_parent(pUVar15,(MethodInfo *)0x0);
  (__this->fields).gizmoCamParent = pUVar15;
  il2cpp_runtime_helper_022b4080(&(__this->fields).gizmoCamParent,pUVar15);
  pUVar5 = (__this->fields).labels;
  if (pUVar5 == (UnityEngine_TextMesh_array *)0x0) goto label_04082e49;
  pUVar16 = (UnityEngine_Transform_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Transform,(int)pUVar5->max_length);
  ppUVar1 = &(__this->fields).labelsTR;
  (__this->fields).labelsTR = pUVar16;
  il2cpp_runtime_helper_022b4080();
  iVar11 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar12 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  if (iVar12 <= iVar11) {
    iVar12 = iVar11;
  }
  iVar11 = UnityEngine_Mathf__NextPowerOfTwo(iVar12 / 6,(MethodInfo *)0x0);
  iVar12 = 0x200;
  if (iVar11 < 0x201) {
    iVar12 = iVar11;
  }
  pUVar17 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
  UnityEngine_RenderTexture___ctor_4de1430(pUVar17,iVar12,iVar12,0x10,(MethodInfo *)0x0);
  (__this->fields)._TargetTexture_k__BackingField = pUVar17;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._TargetTexture_k__BackingField);
  pUVar23 = (__this->fields).gizmoCamera;
  if (pUVar23 == (UnityEngine_Camera_o *)0x0) goto label_04082e49;
  UnityEngine_Camera__set_aspect(pUVar23,1.0,(MethodInfo *)0x0);
  pUVar23 = (__this->fields).gizmoCamera;
  if (pUVar23 == (UnityEngine_Camera_o *)0x0) goto label_04082e49;
  UnityEngine_Camera__set_targetTexture
            (pUVar23,(__this->fields)._TargetTexture_k__BackingField,(MethodInfo *)0x0);
  pUVar23 = (__this->fields).gizmoCamera;
  if (pUVar23 == (UnityEngine_Camera_o *)0x0) goto label_04082e49;
  UnityEngine_Camera__set_cullingMask(pUVar23,0x1000000,(MethodInfo *)0x0);
  pUVar23 = (__this->fields).gizmoCamera;
  if (pUVar23 == (UnityEngine_Camera_o *)0x0) goto label_04082e49;
  UnityEngine_Camera__set_eventMask(pUVar23,0,(MethodInfo *)0x0);
  pUVar23 = (__this->fields).gizmoCamera;
  if (pUVar23 == (UnityEngine_Camera_o *)0x0) goto label_04082e49;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar23,0,(MethodInfo *)0x0);
  pUVar24 = (__this->fields).gizmoComponents;
  if (pUVar24 == (UnityEngine_Renderer_array *)0x0) goto label_04082e49;
  if ((int)pUVar24->max_length != 0) {
    if (pUVar24->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar18 = UnityEngine_Renderer__get_sharedMaterial(pUVar24->m_Items[0],(MethodInfo *)0x0);
      (__this->fields).gizmoNormalMaterial = pUVar18;
      il2cpp_runtime_helper_022b4080(&(__this->fields).gizmoNormalMaterial,pUVar18);
      pUVar18 = (__this->fields).gizmoNormalMaterial;
      pUVar19 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      UnityEngine_Material___ctor_4dc9e70(pUVar19,pUVar18,(MethodInfo *)0x0);
      (__this->fields).gizmoFadeMaterial = pUVar19;
      il2cpp_runtime_helper_022b4080(&(__this->fields).gizmoFadeMaterial);
      iVar12 = UnityEngine_Shader__PropertyToID("_AlphaVal",(MethodInfo *)0x0);
      (__this->fields).gizmoMaterialFadeProperty = iVar12;
      pUVar18 = (__this->fields).gizmoNormalMaterial;
      pUVar19 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      UnityEngine_Material___ctor_4dc9e70(pUVar19,pUVar18,(MethodInfo *)0x0);
      ppUVar2 = &(__this->fields).gizmoHighlightMaterial;
      (__this->fields).gizmoHighlightMaterial = pUVar19;
      il2cpp_runtime_helper_022b4080(ppUVar2,pUVar19);
      pUVar18 = (__this->fields).gizmoHighlightMaterial;
      if (pUVar18 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__EnableKeyword(pUVar18,"HIGHLIGHT_ON",(MethodInfo *)0x0);
        pUVar18 = *ppUVar2;
        if (pUVar18 != (UnityEngine_Material_o *)0x0) {
          value.fields.b = (float)(int)(long)g_data_00d1c330;
          value.fields.a = (float)(int)((ulong)(long)g_data_00d1c330 >> 0x20);
          value.fields.r = 1.0;
          value.fields.g = 0.92156863;
          UnityEngine_Material__set_color(pUVar18,value,(MethodInfo *)0x0);
          pUVar24 = (__this->fields).gizmoComponents;
          if (pUVar24 != (UnityEngine_Renderer_array *)0x0) {
            lVar27 = 0;
            while( true ) {
              uVar14 = (uint)pUVar24->max_length;
              if ((int)uVar14 <= (int)(uint)lVar27) break;
              if (uVar14 <= (uint)lVar27) goto label_04082e5d;
              if (((UnityEngine_Component_o *)pUVar24->m_Items[lVar27] == (UnityEngine_Component_o *)0x0) ||
                 (pUVar20 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar24->m_Items[lVar27],(MethodInfo *)0x0),
                 pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto label_04082e49;
              UnityEngine_GameObject__set_layer(pUVar20,0x18,(MethodInfo *)0x0);
              pUVar24 = (__this->fields).gizmoComponents;
              lVar27 = lVar27 + 1;
              if (pUVar24 == (UnityEngine_Renderer_array *)0x0) goto label_04082e49;
            }
            pUVar16 = *ppUVar1;
            if (pUVar16 != (UnityEngine_Transform_array *)0x0) {
              uVar14 = 0;
              lVar27 = 0x20;
              goto label_04082d90;
            }
          }
        }
      }
    }
    goto label_04082e49;
  }
label_04082e5d:
  il2cpp_runtime_helper_022b2ca0();
label_04082e62:
  pRVar22 = (RuntimeSceneGizmo_SceneGizmoController_o *)il2cpp_runtime_helper_0231b270();
  uVar26 = 0;
  il2cpp_runtime_helper_022b2b10();
  uVar14 = (pRVar22->fields).highlightedComponent;
  method_00 = extraout_RDX;
  if ((long)(int)uVar14 == -1) {
label_04082eb8:
    RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(pRVar22,-1,method_00);
    *(undefined1 *)&(pRVar22->fields).updateTargetTexture = 1;
    return;
  }
  pUVar24 = (pRVar22->fields).gizmoComponents;
  __this_01 = pRVar22;
  if (pUVar24 == (UnityEngine_Renderer_array *)0x0) {
label_04082ece:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar14 < *(uint *)&pUVar24->max_length) {
    __this_01 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
    if ((Il2CppClass *)pUVar24->m_Items[(int)uVar14] != (Il2CppClass *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar24->m_Items[(int)uVar14],(pRVar22->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
      (pRVar22->fields).highlightedComponent = -1;
      method_00 = extraout_RDX_00;
      goto label_04082eb8;
    }
    goto label_04082ece;
  }
  il2cpp_runtime_helper_022b2ca0();
  uVar14 = (__this_01->fields).fadingComponent;
  pRVar22 = __this_01;
  if (uVar26 == 0xffffffff) {
    if (uVar14 == 0xffffffff) {
      return;
    }
    if ((__this_01->fields).fadeT < 1.0) {
      return;
    }
    pUVar7 = (__this_01->fields).gizmoComponents;
    if (pUVar7 == (UnityEngine_Renderer_array *)0x0) goto label_040830c9;
    __this_00 = __this_01;
    if (uVar14 < (uint)pUVar7->max_length) {
      pRVar22 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar7->m_Items[(int)uVar14];
      if ((pRVar22 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
         (__this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pRVar22,(MethodInfo *)0x0),
         __this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,1,(MethodInfo *)0x0);
        pUVar7 = (__this_01->fields).gizmoComponents;
        uVar14 = (__this_01->fields).fadingComponent;
        uVar26 = uVar14;
        if ((1 < uVar14 + 1) && (uVar26 = uVar14 + 1, (uVar14 & 1) == 0)) {
          uVar26 = uVar14 - 1;
        }
        pUVar24 = (UnityEngine_Renderer_array *)(ulong)uVar26;
        pRVar22 = __this_00;
        if (pUVar7 != (UnityEngine_Renderer_array *)0x0) {
          if ((uint)pUVar7->max_length <= uVar26) goto label_040830ce;
          pUVar24 = (UnityEngine_Renderer_array *)(long)(int)uVar26;
          pRVar22 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar7->m_Items[(long)pUVar24];
          if ((pRVar22 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
             (pUVar20 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pRVar22,(MethodInfo *)0x0),
             pUVar20 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
            *(undefined1 *)&(__this_01->fields).isFadingToZero = 0;
            goto label_0408309d;
          }
        }
      }
      goto label_040830c9;
    }
  }
  else {
    if (uVar14 == uVar26) {
      return;
    }
    if (uVar14 == 0xffffffff) {
label_04082fcf:
      (__this_01->fields).fadingComponent = uVar26;
      RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                (__this_01,uVar26,(__this_01->fields).gizmoFadeMaterial,(MethodInfo *)pUVar24);
      *(undefined1 *)&(__this_01->fields).isFadingToZero = 1;
label_0408309d:
      (__this_01->fields).fadeT = 0.0;
      return;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
              (__this_01,uVar14,(__this_01->fields).gizmoNormalMaterial,(MethodInfo *)pUVar24);
    RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
              (__this_01,(__this_01->fields).fadingComponent,1.0,method_01);
    pUVar7 = (__this_01->fields).gizmoComponents;
    if (pUVar7 != (UnityEngine_Renderer_array *)0x0) {
      uVar14 = (__this_01->fields).fadingComponent;
      pUVar24 = (UnityEngine_Renderer_array *)(long)(int)uVar14;
      __this_00 = pRVar22;
      if ((uint)pUVar7->max_length <= uVar14) goto label_040830ce;
      pRVar22 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar7->m_Items[(long)pUVar24];
      if ((pRVar22 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
         (__this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pRVar22,(MethodInfo *)0x0),
         __this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,1,(MethodInfo *)0x0);
        pUVar7 = (__this_01->fields).gizmoComponents;
        uVar14 = (__this_01->fields).fadingComponent;
        uVar25 = uVar14;
        if ((1 < uVar14 + 1) && (uVar25 = uVar14 + 1, (uVar14 & 1) == 0)) {
          uVar25 = uVar14 - 1;
        }
        pUVar24 = (UnityEngine_Renderer_array *)(ulong)uVar25;
        pRVar22 = __this_00;
        if (pUVar7 != (UnityEngine_Renderer_array *)0x0) {
          if ((uint)pUVar7->max_length <= uVar25) goto label_040830ce;
          pUVar24 = (UnityEngine_Renderer_array *)(long)(int)uVar25;
          pRVar22 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar7->m_Items[(long)pUVar24];
          if ((pRVar22 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
             (pUVar20 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pRVar22,(MethodInfo *)0x0),
             pUVar20 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
            goto label_04082fcf;
          }
        }
      }
    }
label_040830c9:
    il2cpp_runtime_helper_022b2c90();
    __this_00 = pRVar22;
  }
label_040830ce:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3ba = '\x01';
  }
  pUVar17 = (__this_00->fields)._TargetTexture_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  pRVar22 = (RuntimeSceneGizmo_SceneGizmoController_o *)(__this_00->fields)._TargetTexture_k__BackingField;
  if (pRVar22 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)pRVar22,(MethodInfo *)0x0);
    pUVar17 = (__this_00->fields)._TargetTexture_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar17,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ReferenceTransform mustn't be null!");
    g_data_057ac3bb = '\x01';
  }
  pUVar15 = (pRVar22->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar23 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar23 != (UnityEngine_Camera_o *)0x0) {
      pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(pRVar22,pUVar15,method_02);
      pUVar15 = (pRVar22->fields).m_referenceTransform;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar13 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
        return;
      }
      goto label_04083236;
    }
  }
  else {
label_04083236:
    pUVar15 = (pRVar22->fields).m_referenceTransform;
    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
      UVar34 = UnityEngine_Transform__get_forward(pUVar15,(MethodInfo *)0x0);
      fVar29 = UVar34.fields.z;
      fVar30 = UVar34.fields.x;
      fVar28 = UVar34.fields.y;
      uVar3 = (pRVar22->fields).prevForward.fields.x;
      uVar4 = (pRVar22->fields).prevForward.fields.y;
      fVar31 = (pRVar22->fields).prevForward.fields.z - fVar29;
      if (((float)uVar3 - fVar30) * ((float)uVar3 - fVar30) +
          ((float)uVar4 - fVar28) * ((float)uVar4 - fVar28) + fVar31 * fVar31 < 9.9999994e-11) {
label_040835bc:
        fVar30 = (pRVar22->fields).fadeT;
        if (1.0 <= fVar30) {
          if ((char)(pRVar22->fields).updateTargetTexture == '\0') {
            return;
          }
          pUVar23 = (pRVar22->fields).gizmoCamera;
        }
        else {
          fVar28 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
          fVar30 = fVar30 + fVar28 * 4.0;
          fVar28 = 1.0;
          if (fVar30 <= 1.0) {
            fVar28 = fVar30;
          }
          (pRVar22->fields).fadeT = fVar28;
          if ((char)(pRVar22->fields).isFadingToZero != '\0') {
            fVar28 = 1.0 - fVar28;
          }
          RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
                    (pRVar22,(pRVar22->fields).fadingComponent,fVar28,method_04);
          if ((pRVar22->fields).fadeT < 1.0) {
label_040836ee:
            *(undefined1 *)&(pRVar22->fields).updateTargetTexture = 1;
            pUVar23 = (pRVar22->fields).gizmoCamera;
          }
          else {
            if ((char)(pRVar22->fields).isFadingToZero != '\0') {
              pUVar24 = (pRVar22->fields).gizmoComponents;
              if (pUVar24 != (UnityEngine_Renderer_array *)0x0) {
                uVar14 = (pRVar22->fields).fadingComponent;
                if ((uint)pUVar24->max_length <= uVar14) goto label_04083761;
                if (((UnityEngine_Component_o *)pUVar24->m_Items[(int)uVar14] !=
                     (UnityEngine_Component_o *)0x0) &&
                   (pUVar20 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar24->m_Items[(int)uVar14],
                                         (MethodInfo *)0x0), pUVar20 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
                  pUVar24 = (pRVar22->fields).gizmoComponents;
                  uVar14 = (pRVar22->fields).fadingComponent;
                  uVar26 = uVar14;
                  if ((1 < uVar14 + 1) && (uVar26 = uVar14 + 1, (uVar14 & 1) == 0)) {
                    uVar26 = uVar14 - 1;
                  }
                  if (pUVar24 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar24->max_length <= uVar26) goto label_04083761;
                    if (((UnityEngine_Component_o *)pUVar24->m_Items[(int)uVar26] !=
                         (UnityEngine_Component_o *)0x0) &&
                       (pUVar20 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar24->m_Items[(int)uVar26],
                                             (MethodInfo *)0x0), pUVar20 != (UnityEngine_GameObject_o *)0x0))
                    {
                      UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
                      goto label_040836ee;
                    }
                  }
                }
              }
              goto label_0408375c;
            }
            RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                      (pRVar22,(pRVar22->fields).fadingComponent,(pRVar22->fields).gizmoNormalMaterial,
                       (MethodInfo *)pUVar24);
            (pRVar22->fields).fadingComponent = -1;
            *(undefined1 *)&(pRVar22->fields).updateTargetTexture = 1;
            pUVar23 = (pRVar22->fields).gizmoCamera;
          }
        }
        if (pUVar23 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__Render(pUVar23,(MethodInfo *)0x0);
          *(undefined1 *)&(pRVar22->fields).updateTargetTexture = 0;
          return;
        }
      }
      else {
        fVar33 = (float)(~-(uint)(fVar30 < 0.0) & (uint)fVar30 | (uint)-fVar30 & -(uint)(fVar30 < 0.0));
        fVar32 = (float)(~-(uint)(fVar28 < 0.0) & (uint)fVar28 | (uint)-fVar28 & -(uint)(fVar28 < 0.0));
        fVar31 = (float)(~-(uint)(fVar29 < 0.0) & (uint)fVar29 | (uint)-fVar29 & -(uint)(fVar29 < 0.0));
        if (fVar33 <= fVar32) {
          if (fVar32 <= fVar31) goto label_0408337d;
          uVar14 = (0.0 < fVar28) + 3;
          fVar30 = fVar29 * 0.0 + fVar30 * 0.0 + fVar28;
        }
        else if (fVar33 <= fVar31) {
label_0408337d:
          uVar14 = (0.0 < fVar29) + 5;
          fVar30 = fVar28 * 0.0 + fVar30 * 0.0 + fVar29;
        }
        else {
          uVar14 = (0.0 < fVar30) + 1;
          fVar30 = fVar29 * 0.0 + fVar28 * 0.0 + fVar30;
        }
        iVar12 = -1;
        if (0.92 <= (float)(~-(uint)(fVar30 < 0.0) & (uint)fVar30 | (uint)-fVar30 & -(uint)(fVar30 < 0.0))) {
          pUVar24 = (UnityEngine_Renderer_array *)(ulong)(uVar14 & 1);
          iVar12 = uVar14 + (uVar14 & 1) * 2 + -1;
        }
        RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(pRVar22,iVar12,method_03);
        pUVar15 = (pRVar22->fields).m_referenceTransform;
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          value_00 = UnityEngine_Transform__get_rotation(pUVar15,(MethodInfo *)0x0);
          pUVar15 = (pRVar22->fields).gizmoCamParent;
          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation(pUVar15,value_00,(MethodInfo *)0x0);
            pUVar16 = (pRVar22->fields).labelsTR;
            if (pUVar16 != (UnityEngine_Transform_array *)0x0) {
              if ((int)pUVar16->max_length == 0) goto label_04083761;
              if (pUVar16->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                fVar28 = (fVar33 + -0.15) * 0.65;
                fVar30 = 0.0;
                if (0.0 <= fVar28) {
                  fVar30 = fVar28;
                }
                auVar8._4_8_ = 0;
                auVar8._0_4_ = fVar30;
                UnityEngine_Transform__set_localPosition
                          (pUVar16->m_Items[0],(UnityEngine_Vector3_o)(auVar8 << 0x40),(MethodInfo *)0x0);
                pUVar16 = (pRVar22->fields).labelsTR;
                if (pUVar16 != (UnityEngine_Transform_array *)0x0) {
                  if ((uint)pUVar16->max_length < 2) goto label_04083761;
                  if (pUVar16->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                    fVar28 = (fVar32 + -0.15) * 0.65;
                    fVar30 = 0.0;
                    if (0.0 <= fVar28) {
                      fVar30 = fVar28;
                    }
                    auVar9._4_8_ = 0;
                    auVar9._0_4_ = fVar30;
                    UnityEngine_Transform__set_localPosition
                              (pUVar16->m_Items[1],(UnityEngine_Vector3_o)(auVar9 << 0x40),(MethodInfo *)0x0);
                    pUVar16 = (pRVar22->fields).labelsTR;
                    if (pUVar16 != (UnityEngine_Transform_array *)0x0) {
                      if ((uint)pUVar16->max_length < 3) goto label_04083761;
                      if (pUVar16->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                        fVar28 = (fVar31 + -0.15) * 0.65;
                        fVar30 = 0.0;
                        if (0.0 <= fVar28) {
                          fVar30 = fVar28;
                        }
                        auVar10._4_8_ = 0;
                        auVar10._0_4_ = fVar30;
                        UnityEngine_Transform__set_localPosition
                                  (pUVar16->m_Items[2],(UnityEngine_Vector3_o)(auVar10 << 0x40),
                                   (MethodInfo *)0x0);
                        pUVar16 = (pRVar22->fields).labelsTR;
                        if (pUVar16 != (UnityEngine_Transform_array *)0x0) {
                          if ((int)pUVar16->max_length == 0) goto label_04083761;
                          if (pUVar16->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_rotation
                                      (pUVar16->m_Items[0],value_00,(MethodInfo *)0x0);
                            pUVar16 = (pRVar22->fields).labelsTR;
                            if (pUVar16 != (UnityEngine_Transform_array *)0x0) {
                              if ((uint)pUVar16->max_length < 2) goto label_04083761;
                              if (pUVar16->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__set_rotation
                                          (pUVar16->m_Items[1],value_00,(MethodInfo *)0x0);
                                pUVar16 = (pRVar22->fields).labelsTR;
                                if (pUVar16 != (UnityEngine_Transform_array *)0x0) {
                                  if ((uint)pUVar16->max_length < 3) goto label_04083761;
                                  if (pUVar16->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__set_rotation
                                              (pUVar16->m_Items[2],value_00,(MethodInfo *)0x0);
                                    *(undefined1 *)&(pRVar22->fields).updateTargetTexture = 1;
                                    (pRVar22->fields).prevForward.fields.x = (float)(int)UVar34.fields._0_8_;
                                    (pRVar22->fields).prevForward.fields.y =
                                         (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
                                    (pRVar22->fields).prevForward.fields.z = fVar29;
                                    goto label_040835bc;
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
        }
      }
    }
  }
label_0408375c:
  il2cpp_runtime_helper_022b2c90();
label_04083761:
  il2cpp_runtime_helper_022b2ca0();
  return;
label_04082d90:
  if ((int)pUVar16->max_length <= (int)uVar14) {
    return;
  }
  pUVar5 = (__this->fields).labels;
  if (pUVar5 == (UnityEngine_TextMesh_array *)0x0) goto label_04082e49;
  if ((uint)pUVar5->max_length <= uVar14) goto label_04082e5d;
  pUVar6 = *(UnityEngine_Component_o **)((long)pUVar5->m_Items + lVar27 + -0x20);
  if ((pUVar6 == (UnityEngine_Component_o *)0x0) ||
     (pUVar20 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0),
     pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto label_04082e49;
  UnityEngine_GameObject__set_layer(pUVar20,0x18,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).labels;
  if (pUVar5 == (UnityEngine_TextMesh_array *)0x0) goto label_04082e49;
  if ((uint)pUVar5->max_length <= uVar14) goto label_04082e5d;
  pUVar6 = *(UnityEngine_Component_o **)((long)pUVar5->m_Items + lVar27 + -0x20);
  if (pUVar6 == (UnityEngine_Component_o *)0x0) goto label_04082e49;
  pUVar16 = (__this->fields).labelsTR;
  pUVar15 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_Transform_array *)0x0) goto label_04082e49;
  if ((pUVar15 != (UnityEngine_Transform_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pUVar15), lVar21 == 0))
  goto label_04082e62;
  if ((uint)pUVar16->max_length <= uVar14) goto label_04082e5d;
  *(UnityEngine_Transform_o **)((long)pUVar16->m_Items + lVar27 + -0x20) = pUVar15;
  il2cpp_runtime_helper_022b4080((long)pUVar16->m_Items + lVar27 + -0x20);
  uVar14 = uVar14 + 1;
  pUVar16 = *ppUVar1;
  lVar27 = lVar27 + 8;
  if (pUVar16 == (UnityEngine_Transform_array *)0x0) goto label_04082e49;
  goto label_04082d90;
}


// RuntimeSceneGizmo.SceneGizmoController$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnEnable (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x4082e80

void RuntimeSceneGizmo_SceneGizmoController__OnEnable
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_RenderTexture_o *pUVar4;
  UnityEngine_Transform_array *pUVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  bool_conflict bVar9;
  uint uVar10;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Camera_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Renderer_array *pUVar14;
  uint uVar15;
  uint uVar16;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int32_t component;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar17;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar25;
  
  uVar16 = (uint)method;
  uVar10 = (__this->fields).highlightedComponent;
  if ((long)(int)uVar10 == -1) {
label_04082eb8:
    RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,-1,in_RDX);
    *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
    return;
  }
  pUVar14 = (__this->fields).gizmoComponents;
  pRVar17 = __this;
  if (pUVar14 == (UnityEngine_Renderer_array *)0x0) {
label_04082ece:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar10 < *(uint *)&pUVar14->max_length) {
    pRVar17 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
    if ((Il2CppClass *)pUVar14->m_Items[(int)uVar10] != (Il2CppClass *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial
                (pUVar14->m_Items[(int)uVar10],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
      (__this->fields).highlightedComponent = -1;
      in_RDX = extraout_RDX;
      goto label_04082eb8;
    }
    goto label_04082ece;
  }
  il2cpp_runtime_helper_022b2ca0();
  uVar10 = (pRVar17->fields).fadingComponent;
  pRVar18 = pRVar17;
  if (uVar16 == 0xffffffff) {
    if (uVar10 == 0xffffffff) {
      return;
    }
    if ((pRVar17->fields).fadeT < 1.0) {
      return;
    }
    pUVar3 = (pRVar17->fields).gizmoComponents;
    if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_040830c9;
    __this_00 = pRVar17;
    if (uVar10 < (uint)pUVar3->max_length) {
      pRVar18 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(int)uVar10];
      if ((pRVar18 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
         (__this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pRVar18,(MethodInfo *)0x0),
         __this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,1,(MethodInfo *)0x0);
        pUVar3 = (pRVar17->fields).gizmoComponents;
        uVar10 = (pRVar17->fields).fadingComponent;
        uVar16 = uVar10;
        if ((1 < uVar10 + 1) && (uVar16 = uVar10 + 1, (uVar10 & 1) == 0)) {
          uVar16 = uVar10 - 1;
        }
        pUVar14 = (UnityEngine_Renderer_array *)(ulong)uVar16;
        pRVar18 = __this_00;
        if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
          if ((uint)pUVar3->max_length <= uVar16) goto label_040830ce;
          pUVar14 = (UnityEngine_Renderer_array *)(long)(int)uVar16;
          pRVar18 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(long)pUVar14];
          if ((pRVar18 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pRVar18,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
            *(undefined1 *)&(pRVar17->fields).isFadingToZero = 0;
            goto label_0408309d;
          }
        }
      }
      goto label_040830c9;
    }
  }
  else {
    if (uVar10 == uVar16) {
      return;
    }
    if (uVar10 == 0xffffffff) {
label_04082fcf:
      (pRVar17->fields).fadingComponent = uVar16;
      RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                (pRVar17,uVar16,(pRVar17->fields).gizmoFadeMaterial,(MethodInfo *)pUVar14);
      *(undefined1 *)&(pRVar17->fields).isFadingToZero = 1;
label_0408309d:
      (pRVar17->fields).fadeT = 0.0;
      return;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
              (pRVar17,uVar10,(pRVar17->fields).gizmoNormalMaterial,(MethodInfo *)pUVar14);
    RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
              (pRVar17,(pRVar17->fields).fadingComponent,1.0,method_00);
    pUVar3 = (pRVar17->fields).gizmoComponents;
    if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
      uVar10 = (pRVar17->fields).fadingComponent;
      pUVar14 = (UnityEngine_Renderer_array *)(long)(int)uVar10;
      __this_00 = pRVar18;
      if ((uint)pUVar3->max_length <= uVar10) goto label_040830ce;
      pRVar18 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(long)pUVar14];
      if ((pRVar18 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
         (__this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pRVar18,(MethodInfo *)0x0),
         __this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,1,(MethodInfo *)0x0);
        pUVar3 = (pRVar17->fields).gizmoComponents;
        uVar10 = (pRVar17->fields).fadingComponent;
        uVar15 = uVar10;
        if ((1 < uVar10 + 1) && (uVar15 = uVar10 + 1, (uVar10 & 1) == 0)) {
          uVar15 = uVar10 - 1;
        }
        pUVar14 = (UnityEngine_Renderer_array *)(ulong)uVar15;
        pRVar18 = __this_00;
        if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
          if ((uint)pUVar3->max_length <= uVar15) goto label_040830ce;
          pUVar14 = (UnityEngine_Renderer_array *)(long)(int)uVar15;
          pRVar18 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(long)pUVar14];
          if ((pRVar18 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pRVar18,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
            goto label_04082fcf;
          }
        }
      }
    }
label_040830c9:
    il2cpp_runtime_helper_022b2c90();
    __this_00 = pRVar18;
  }
label_040830ce:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3ba = '\x01';
  }
  pUVar4 = (__this_00->fields)._TargetTexture_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pRVar17 = (RuntimeSceneGizmo_SceneGizmoController_o *)(__this_00->fields)._TargetTexture_k__BackingField;
  if (pRVar17 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)pRVar17,(MethodInfo *)0x0);
    pUVar4 = (__this_00->fields)._TargetTexture_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ReferenceTransform mustn't be null!");
    g_data_057ac3bb = '\x01';
  }
  pUVar13 = (pRVar17->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pUVar12 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_Camera_o *)0x0) {
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(pRVar17,pUVar13,method_01);
      pUVar13 = (pRVar17->fields).m_referenceTransform;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
        return;
      }
      goto label_04083236;
    }
  }
  else {
label_04083236:
    pUVar13 = (pRVar17->fields).m_referenceTransform;
    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
      UVar25 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
      fVar20 = UVar25.fields.z;
      fVar21 = UVar25.fields.x;
      fVar19 = UVar25.fields.y;
      uVar1 = (pRVar17->fields).prevForward.fields.x;
      uVar2 = (pRVar17->fields).prevForward.fields.y;
      fVar22 = (pRVar17->fields).prevForward.fields.z - fVar20;
      if (((float)uVar1 - fVar21) * ((float)uVar1 - fVar21) +
          ((float)uVar2 - fVar19) * ((float)uVar2 - fVar19) + fVar22 * fVar22 < 9.9999994e-11) {
label_040835bc:
        fVar21 = (pRVar17->fields).fadeT;
        if (1.0 <= fVar21) {
          if ((char)(pRVar17->fields).updateTargetTexture == '\0') {
            return;
          }
          pUVar12 = (pRVar17->fields).gizmoCamera;
        }
        else {
          fVar19 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
          fVar21 = fVar21 + fVar19 * 4.0;
          fVar19 = 1.0;
          if (fVar21 <= 1.0) {
            fVar19 = fVar21;
          }
          (pRVar17->fields).fadeT = fVar19;
          if ((char)(pRVar17->fields).isFadingToZero != '\0') {
            fVar19 = 1.0 - fVar19;
          }
          RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
                    (pRVar17,(pRVar17->fields).fadingComponent,fVar19,method_03);
          if ((pRVar17->fields).fadeT < 1.0) {
label_040836ee:
            *(undefined1 *)&(pRVar17->fields).updateTargetTexture = 1;
            pUVar12 = (pRVar17->fields).gizmoCamera;
          }
          else {
            if ((char)(pRVar17->fields).isFadingToZero != '\0') {
              pUVar14 = (pRVar17->fields).gizmoComponents;
              if (pUVar14 != (UnityEngine_Renderer_array *)0x0) {
                uVar10 = (pRVar17->fields).fadingComponent;
                if ((uint)pUVar14->max_length <= uVar10) goto label_04083761;
                if (((UnityEngine_Component_o *)pUVar14->m_Items[(int)uVar10] !=
                     (UnityEngine_Component_o *)0x0) &&
                   (pUVar11 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar14->m_Items[(int)uVar10],
                                         (MethodInfo *)0x0), pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
                  pUVar14 = (pRVar17->fields).gizmoComponents;
                  uVar10 = (pRVar17->fields).fadingComponent;
                  uVar16 = uVar10;
                  if ((1 < uVar10 + 1) && (uVar16 = uVar10 + 1, (uVar10 & 1) == 0)) {
                    uVar16 = uVar10 - 1;
                  }
                  if (pUVar14 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar14->max_length <= uVar16) goto label_04083761;
                    if (((UnityEngine_Component_o *)pUVar14->m_Items[(int)uVar16] !=
                         (UnityEngine_Component_o *)0x0) &&
                       (pUVar11 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar14->m_Items[(int)uVar16],
                                             (MethodInfo *)0x0), pUVar11 != (UnityEngine_GameObject_o *)0x0))
                    {
                      UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
                      goto label_040836ee;
                    }
                  }
                }
              }
              goto label_0408375c;
            }
            RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                      (pRVar17,(pRVar17->fields).fadingComponent,(pRVar17->fields).gizmoNormalMaterial,
                       (MethodInfo *)pUVar14);
            (pRVar17->fields).fadingComponent = -1;
            *(undefined1 *)&(pRVar17->fields).updateTargetTexture = 1;
            pUVar12 = (pRVar17->fields).gizmoCamera;
          }
        }
        if (pUVar12 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__Render(pUVar12,(MethodInfo *)0x0);
          *(undefined1 *)&(pRVar17->fields).updateTargetTexture = 0;
          return;
        }
      }
      else {
        fVar24 = (float)(~-(uint)(fVar21 < 0.0) & (uint)fVar21 | (uint)-fVar21 & -(uint)(fVar21 < 0.0));
        fVar23 = (float)(~-(uint)(fVar19 < 0.0) & (uint)fVar19 | (uint)-fVar19 & -(uint)(fVar19 < 0.0));
        fVar22 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar20 | (uint)-fVar20 & -(uint)(fVar20 < 0.0));
        if (fVar24 <= fVar23) {
          if (fVar23 <= fVar22) goto label_0408337d;
          uVar10 = (0.0 < fVar19) + 3;
          fVar21 = fVar20 * 0.0 + fVar21 * 0.0 + fVar19;
        }
        else if (fVar24 <= fVar22) {
label_0408337d:
          uVar10 = (0.0 < fVar20) + 5;
          fVar21 = fVar19 * 0.0 + fVar21 * 0.0 + fVar20;
        }
        else {
          uVar10 = (0.0 < fVar21) + 1;
          fVar21 = fVar20 * 0.0 + fVar19 * 0.0 + fVar21;
        }
        component = -1;
        if (0.92 <= (float)(~-(uint)(fVar21 < 0.0) & (uint)fVar21 | (uint)-fVar21 & -(uint)(fVar21 < 0.0))) {
          pUVar14 = (UnityEngine_Renderer_array *)(ulong)(uVar10 & 1);
          component = uVar10 + (uVar10 & 1) * 2 + -1;
        }
        RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(pRVar17,component,method_02);
        pUVar13 = (pRVar17->fields).m_referenceTransform;
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          value = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
          pUVar13 = (pRVar17->fields).gizmoCamParent;
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation(pUVar13,value,(MethodInfo *)0x0);
            pUVar5 = (pRVar17->fields).labelsTR;
            if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
              if ((int)pUVar5->max_length == 0) goto label_04083761;
              if (pUVar5->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                fVar19 = (fVar24 + -0.15) * 0.65;
                fVar21 = 0.0;
                if (0.0 <= fVar19) {
                  fVar21 = fVar19;
                }
                auVar6._4_8_ = 0;
                auVar6._0_4_ = fVar21;
                UnityEngine_Transform__set_localPosition
                          (pUVar5->m_Items[0],(UnityEngine_Vector3_o)(auVar6 << 0x40),(MethodInfo *)0x0);
                pUVar5 = (pRVar17->fields).labelsTR;
                if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                  if ((uint)pUVar5->max_length < 2) goto label_04083761;
                  if (pUVar5->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                    fVar19 = (fVar23 + -0.15) * 0.65;
                    fVar21 = 0.0;
                    if (0.0 <= fVar19) {
                      fVar21 = fVar19;
                    }
                    auVar7._4_8_ = 0;
                    auVar7._0_4_ = fVar21;
                    UnityEngine_Transform__set_localPosition
                              (pUVar5->m_Items[1],(UnityEngine_Vector3_o)(auVar7 << 0x40),(MethodInfo *)0x0);
                    pUVar5 = (pRVar17->fields).labelsTR;
                    if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                      if ((uint)pUVar5->max_length < 3) goto label_04083761;
                      if (pUVar5->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                        fVar19 = (fVar22 + -0.15) * 0.65;
                        fVar21 = 0.0;
                        if (0.0 <= fVar19) {
                          fVar21 = fVar19;
                        }
                        auVar8._4_8_ = 0;
                        auVar8._0_4_ = fVar21;
                        UnityEngine_Transform__set_localPosition
                                  (pUVar5->m_Items[2],(UnityEngine_Vector3_o)(auVar8 << 0x40),
                                   (MethodInfo *)0x0);
                        pUVar5 = (pRVar17->fields).labelsTR;
                        if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                          if ((int)pUVar5->max_length == 0) goto label_04083761;
                          if (pUVar5->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_rotation(pUVar5->m_Items[0],value,(MethodInfo *)0x0);
                            pUVar5 = (pRVar17->fields).labelsTR;
                            if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                              if ((uint)pUVar5->max_length < 2) goto label_04083761;
                              if (pUVar5->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__set_rotation
                                          (pUVar5->m_Items[1],value,(MethodInfo *)0x0);
                                pUVar5 = (pRVar17->fields).labelsTR;
                                if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                                  if ((uint)pUVar5->max_length < 3) goto label_04083761;
                                  if (pUVar5->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__set_rotation
                                              (pUVar5->m_Items[2],value,(MethodInfo *)0x0);
                                    *(undefined1 *)&(pRVar17->fields).updateTargetTexture = 1;
                                    (pRVar17->fields).prevForward.fields.x = (float)(int)UVar25.fields._0_8_;
                                    (pRVar17->fields).prevForward.fields.y =
                                         (float)(int)((ulong)UVar25.fields._0_8_ >> 0x20);
                                    (pRVar17->fields).prevForward.fields.z = fVar20;
                                    goto label_040835bc;
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
        }
      }
    }
  }
label_0408375c:
  il2cpp_runtime_helper_022b2c90();
label_04083761:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$OnDestroy
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnDestroy (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x40830e0

void RuntimeSceneGizmo_SceneGizmoController__OnDestroy
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_RenderTexture_o *pUVar3;
  UnityEngine_Transform_array *pUVar4;
  UnityEngine_Renderer_array *pUVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  bool_conflict bVar9;
  uint uVar10;
  UnityEngine_Camera_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  MethodInfo *in_RCX;
  uint uVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int32_t component;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar21;
  
  if (g_data_057ac3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3ba = '\x01';
  }
  pUVar3 = (__this->fields)._TargetTexture_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  __this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)(__this->fields)._TargetTexture_k__BackingField;
  if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._TargetTexture_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ReferenceTransform mustn't be null!");
    g_data_057ac3bb = '\x01';
  }
  pUVar12 = (__this_00->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar12,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pUVar11 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this_00,pUVar12,method_00);
      pUVar12 = (__this_00->fields).m_referenceTransform;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
        return;
      }
      goto label_04083236;
    }
  }
  else {
label_04083236:
    pUVar12 = (__this_00->fields).m_referenceTransform;
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      UVar21 = UnityEngine_Transform__get_forward(pUVar12,(MethodInfo *)0x0);
      fVar16 = UVar21.fields.z;
      fVar17 = UVar21.fields.x;
      fVar15 = UVar21.fields.y;
      uVar1 = (__this_00->fields).prevForward.fields.x;
      uVar2 = (__this_00->fields).prevForward.fields.y;
      fVar18 = (__this_00->fields).prevForward.fields.z - fVar16;
      if (((float)uVar1 - fVar17) * ((float)uVar1 - fVar17) +
          ((float)uVar2 - fVar15) * ((float)uVar2 - fVar15) + fVar18 * fVar18 < 9.9999994e-11) {
label_040835bc:
        fVar17 = (__this_00->fields).fadeT;
        if (1.0 <= fVar17) {
          if ((char)(__this_00->fields).updateTargetTexture == '\0') {
            return;
          }
          pUVar11 = (__this_00->fields).gizmoCamera;
        }
        else {
          fVar15 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
          fVar17 = fVar17 + fVar15 * 4.0;
          fVar15 = 1.0;
          if (fVar17 <= 1.0) {
            fVar15 = fVar17;
          }
          (__this_00->fields).fadeT = fVar15;
          if ((char)(__this_00->fields).isFadingToZero != '\0') {
            fVar15 = 1.0 - fVar15;
          }
          RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
                    (__this_00,(__this_00->fields).fadingComponent,fVar15,method_02);
          if ((__this_00->fields).fadeT < 1.0) {
label_040836ee:
            *(undefined1 *)&(__this_00->fields).updateTargetTexture = 1;
            pUVar11 = (__this_00->fields).gizmoCamera;
          }
          else {
            if ((char)(__this_00->fields).isFadingToZero != '\0') {
              pUVar5 = (__this_00->fields).gizmoComponents;
              if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
                uVar10 = (__this_00->fields).fadingComponent;
                if ((uint)pUVar5->max_length <= uVar10) goto label_04083761;
                if (((UnityEngine_Component_o *)pUVar5->m_Items[(int)uVar10] != (UnityEngine_Component_o *)0x0
                    ) && (pUVar13 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar5->m_Items[(int)uVar10],
                                               (MethodInfo *)0x0), pUVar13 != (UnityEngine_GameObject_o *)0x0)
                   ) {
                  UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
                  pUVar5 = (__this_00->fields).gizmoComponents;
                  uVar10 = (__this_00->fields).fadingComponent;
                  uVar14 = uVar10;
                  if ((1 < uVar10 + 1) && (uVar14 = uVar10 + 1, (uVar10 & 1) == 0)) {
                    uVar14 = uVar10 - 1;
                  }
                  if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar5->max_length <= uVar14) goto label_04083761;
                    if (((UnityEngine_Component_o *)pUVar5->m_Items[(int)uVar14] !=
                         (UnityEngine_Component_o *)0x0) &&
                       (pUVar13 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar5->m_Items[(int)uVar14],
                                             (MethodInfo *)0x0), pUVar13 != (UnityEngine_GameObject_o *)0x0))
                    {
                      UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
                      goto label_040836ee;
                    }
                  }
                }
              }
              goto label_0408375c;
            }
            RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                      (__this_00,(__this_00->fields).fadingComponent,(__this_00->fields).gizmoNormalMaterial,
                       in_RCX);
            (__this_00->fields).fadingComponent = -1;
            *(undefined1 *)&(__this_00->fields).updateTargetTexture = 1;
            pUVar11 = (__this_00->fields).gizmoCamera;
          }
        }
        if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__Render(pUVar11,(MethodInfo *)0x0);
          *(undefined1 *)&(__this_00->fields).updateTargetTexture = 0;
          return;
        }
      }
      else {
        fVar20 = (float)(~-(uint)(fVar17 < 0.0) & (uint)fVar17 | (uint)-fVar17 & -(uint)(fVar17 < 0.0));
        fVar19 = (float)(~-(uint)(fVar15 < 0.0) & (uint)fVar15 | (uint)-fVar15 & -(uint)(fVar15 < 0.0));
        fVar18 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 | (uint)-fVar16 & -(uint)(fVar16 < 0.0));
        if (fVar20 <= fVar19) {
          if (fVar19 <= fVar18) goto label_0408337d;
          uVar10 = (0.0 < fVar15) + 3;
          fVar17 = fVar16 * 0.0 + fVar17 * 0.0 + fVar15;
        }
        else if (fVar20 <= fVar18) {
label_0408337d:
          uVar10 = (0.0 < fVar16) + 5;
          fVar17 = fVar15 * 0.0 + fVar17 * 0.0 + fVar16;
        }
        else {
          uVar10 = (0.0 < fVar17) + 1;
          fVar17 = fVar16 * 0.0 + fVar15 * 0.0 + fVar17;
        }
        component = -1;
        if (0.92 <= (float)(~-(uint)(fVar17 < 0.0) & (uint)fVar17 | (uint)-fVar17 & -(uint)(fVar17 < 0.0))) {
          in_RCX = (MethodInfo *)(ulong)(uVar10 & 1);
          component = uVar10 + (uVar10 & 1) * 2 + -1;
        }
        RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this_00,component,method_01);
        pUVar12 = (__this_00->fields).m_referenceTransform;
        if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
          value = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
          pUVar12 = (__this_00->fields).gizmoCamParent;
          if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation(pUVar12,value,(MethodInfo *)0x0);
            pUVar4 = (__this_00->fields).labelsTR;
            if (pUVar4 != (UnityEngine_Transform_array *)0x0) {
              if ((int)pUVar4->max_length == 0) goto label_04083761;
              if (pUVar4->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                fVar15 = (fVar20 + -0.15) * 0.65;
                fVar17 = 0.0;
                if (0.0 <= fVar15) {
                  fVar17 = fVar15;
                }
                auVar6._4_8_ = 0;
                auVar6._0_4_ = fVar17;
                UnityEngine_Transform__set_localPosition
                          (pUVar4->m_Items[0],(UnityEngine_Vector3_o)(auVar6 << 0x40),(MethodInfo *)0x0);
                pUVar4 = (__this_00->fields).labelsTR;
                if (pUVar4 != (UnityEngine_Transform_array *)0x0) {
                  if ((uint)pUVar4->max_length < 2) goto label_04083761;
                  if (pUVar4->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                    fVar15 = (fVar19 + -0.15) * 0.65;
                    fVar17 = 0.0;
                    if (0.0 <= fVar15) {
                      fVar17 = fVar15;
                    }
                    auVar7._4_8_ = 0;
                    auVar7._0_4_ = fVar17;
                    UnityEngine_Transform__set_localPosition
                              (pUVar4->m_Items[1],(UnityEngine_Vector3_o)(auVar7 << 0x40),(MethodInfo *)0x0);
                    pUVar4 = (__this_00->fields).labelsTR;
                    if (pUVar4 != (UnityEngine_Transform_array *)0x0) {
                      if ((uint)pUVar4->max_length < 3) goto label_04083761;
                      if (pUVar4->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                        fVar15 = (fVar18 + -0.15) * 0.65;
                        fVar17 = 0.0;
                        if (0.0 <= fVar15) {
                          fVar17 = fVar15;
                        }
                        auVar8._4_8_ = 0;
                        auVar8._0_4_ = fVar17;
                        UnityEngine_Transform__set_localPosition
                                  (pUVar4->m_Items[2],(UnityEngine_Vector3_o)(auVar8 << 0x40),
                                   (MethodInfo *)0x0);
                        pUVar4 = (__this_00->fields).labelsTR;
                        if (pUVar4 != (UnityEngine_Transform_array *)0x0) {
                          if ((int)pUVar4->max_length == 0) goto label_04083761;
                          if (pUVar4->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_rotation(pUVar4->m_Items[0],value,(MethodInfo *)0x0);
                            pUVar4 = (__this_00->fields).labelsTR;
                            if (pUVar4 != (UnityEngine_Transform_array *)0x0) {
                              if ((uint)pUVar4->max_length < 2) goto label_04083761;
                              if (pUVar4->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__set_rotation
                                          (pUVar4->m_Items[1],value,(MethodInfo *)0x0);
                                pUVar4 = (__this_00->fields).labelsTR;
                                if (pUVar4 != (UnityEngine_Transform_array *)0x0) {
                                  if ((uint)pUVar4->max_length < 3) goto label_04083761;
                                  if (pUVar4->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__set_rotation
                                              (pUVar4->m_Items[2],value,(MethodInfo *)0x0);
                                    *(undefined1 *)&(__this_00->fields).updateTargetTexture = 1;
                                    (__this_00->fields).prevForward.fields.x = (float)(int)UVar21.fields._0_8_
                                    ;
                                    (__this_00->fields).prevForward.fields.y =
                                         (float)(int)((ulong)UVar21.fields._0_8_ >> 0x20);
                                    (__this_00->fields).prevForward.fields.z = fVar16;
                                    goto label_040835bc;
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
        }
      }
    }
  }
label_0408375c:
  il2cpp_runtime_helper_022b2c90();
label_04083761:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$LateUpdate
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__LateUpdate (RuntimeSceneGizmo_SceneGizmoController_o* __this, const MethodInfo* method);
// 0x4083180

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
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar20;
  
  if (g_data_057ac3bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ReferenceTransform mustn't be null!");
    g_data_057ac3bb = '\x01';
  }
  pUVar11 = (__this->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar10 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
      pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this,pUVar11,method_00);
      pUVar11 = (__this->fields).m_referenceTransform;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
        return;
      }
      goto label_04083236;
    }
  }
  else {
label_04083236:
    pUVar11 = (__this->fields).m_referenceTransform;
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      UVar20 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
      fVar15 = UVar20.fields.z;
      fVar16 = UVar20.fields.x;
      fVar14 = UVar20.fields.y;
      uVar1 = (__this->fields).prevForward.fields.x;
      uVar2 = (__this->fields).prevForward.fields.y;
      fVar17 = (__this->fields).prevForward.fields.z - fVar15;
      if (((float)uVar1 - fVar16) * ((float)uVar1 - fVar16) +
          ((float)uVar2 - fVar14) * ((float)uVar2 - fVar14) + fVar17 * fVar17 < 9.9999994e-11) {
label_040835bc:
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
          if ((__this->fields).fadeT < 1.0) {
label_040836ee:
            *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
            pUVar10 = (__this->fields).gizmoCamera;
          }
          else {
            if ((char)(__this->fields).isFadingToZero != '\0') {
              pUVar4 = (__this->fields).gizmoComponents;
              if (pUVar4 != (UnityEngine_Renderer_array *)0x0) {
                uVar9 = (__this->fields).fadingComponent;
                if ((uint)pUVar4->max_length <= uVar9) goto label_04083761;
                if (((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar9] != (UnityEngine_Component_o *)0x0)
                   && (pUVar12 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar9],
                                            (MethodInfo *)0x0), pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).gizmoComponents;
                  uVar9 = (__this->fields).fadingComponent;
                  uVar13 = uVar9;
                  if ((1 < uVar9 + 1) && (uVar13 = uVar9 + 1, (uVar9 & 1) == 0)) {
                    uVar13 = uVar9 - 1;
                  }
                  if (pUVar4 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar4->max_length <= uVar13) goto label_04083761;
                    if (((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar13] !=
                         (UnityEngine_Component_o *)0x0) &&
                       (pUVar12 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar13],
                                             (MethodInfo *)0x0), pUVar12 != (UnityEngine_GameObject_o *)0x0))
                    {
                      UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
                      goto label_040836ee;
                    }
                  }
                }
              }
              goto label_0408375c;
            }
            RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                      (__this,(__this->fields).fadingComponent,(__this->fields).gizmoNormalMaterial,in_RCX);
            (__this->fields).fadingComponent = -1;
            *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
            pUVar10 = (__this->fields).gizmoCamera;
          }
        }
        if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__Render(pUVar10,(MethodInfo *)0x0);
          *(undefined1 *)&(__this->fields).updateTargetTexture = 0;
          return;
        }
      }
      else {
        fVar19 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 | (uint)-fVar16 & -(uint)(fVar16 < 0.0));
        fVar18 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 | (uint)-fVar14 & -(uint)(fVar14 < 0.0));
        fVar17 = (float)(~-(uint)(fVar15 < 0.0) & (uint)fVar15 | (uint)-fVar15 & -(uint)(fVar15 < 0.0));
        if (fVar19 <= fVar18) {
          if (fVar18 <= fVar17) goto label_0408337d;
          uVar9 = (0.0 < fVar14) + 3;
          fVar16 = fVar15 * 0.0 + fVar16 * 0.0 + fVar14;
        }
        else if (fVar19 <= fVar17) {
label_0408337d:
          uVar9 = (0.0 < fVar15) + 5;
          fVar16 = fVar14 * 0.0 + fVar16 * 0.0 + fVar15;
        }
        else {
          uVar9 = (0.0 < fVar16) + 1;
          fVar16 = fVar15 * 0.0 + fVar14 * 0.0 + fVar16;
        }
        component = -1;
        if (0.92 <= (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 | (uint)-fVar16 & -(uint)(fVar16 < 0.0))) {
          in_RCX = (MethodInfo *)(ulong)(uVar9 & 1);
          component = uVar9 + (uVar9 & 1) * 2 + -1;
        }
        RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(__this,component,method_01);
        pUVar11 = (__this->fields).m_referenceTransform;
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          value = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
          pUVar11 = (__this->fields).gizmoCamParent;
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation(pUVar11,value,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).labelsTR;
            if (pUVar3 != (UnityEngine_Transform_array *)0x0) {
              if ((int)pUVar3->max_length == 0) goto label_04083761;
              if (pUVar3->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
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
                if (pUVar3 != (UnityEngine_Transform_array *)0x0) {
                  if ((uint)pUVar3->max_length < 2) goto label_04083761;
                  if (pUVar3->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
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
                    if (pUVar3 != (UnityEngine_Transform_array *)0x0) {
                      if ((uint)pUVar3->max_length < 3) goto label_04083761;
                      if (pUVar3->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                        fVar14 = (fVar17 + -0.15) * 0.65;
                        fVar16 = 0.0;
                        if (0.0 <= fVar14) {
                          fVar16 = fVar14;
                        }
                        auVar7._4_8_ = 0;
                        auVar7._0_4_ = fVar16;
                        UnityEngine_Transform__set_localPosition
                                  (pUVar3->m_Items[2],(UnityEngine_Vector3_o)(auVar7 << 0x40),
                                   (MethodInfo *)0x0);
                        pUVar3 = (__this->fields).labelsTR;
                        if (pUVar3 != (UnityEngine_Transform_array *)0x0) {
                          if ((int)pUVar3->max_length == 0) goto label_04083761;
                          if (pUVar3->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_rotation(pUVar3->m_Items[0],value,(MethodInfo *)0x0);
                            pUVar3 = (__this->fields).labelsTR;
                            if (pUVar3 != (UnityEngine_Transform_array *)0x0) {
                              if ((uint)pUVar3->max_length < 2) goto label_04083761;
                              if (pUVar3->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__set_rotation
                                          (pUVar3->m_Items[1],value,(MethodInfo *)0x0);
                                pUVar3 = (__this->fields).labelsTR;
                                if (pUVar3 != (UnityEngine_Transform_array *)0x0) {
                                  if ((uint)pUVar3->max_length < 3) goto label_04083761;
                                  if (pUVar3->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__set_rotation
                                              (pUVar3->m_Items[2],value,(MethodInfo *)0x0);
                                    *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
                                    (__this->fields).prevForward.fields.x = (float)(int)UVar20.fields._0_8_;
                                    (__this->fields).prevForward.fields.y =
                                         (float)(int)((ulong)UVar20.fields._0_8_ >> 0x20);
                                    (__this->fields).prevForward.fields.z = fVar15;
                                    goto label_040835bc;
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
        }
      }
    }
  }
label_0408375c:
  il2cpp_runtime_helper_022b2c90();
label_04083761:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$Raycast
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x40838f0

int32_t RuntimeSceneGizmo_SceneGizmoController__Raycast
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Vector3_o normalizedPosition,
                  MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  undefined8 uVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
  bool_conflict bVar3;
  uint uVar4;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  uint uVar5;
  int32_t extraout_EAX_02;
  UnityEngine_Collider_o *__this_01;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_02;
  MethodInfo *y;
  UnityEngine_Renderer_array *pUVar6;
  long unaff_RBP;
  MethodInfo *method_00;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_03;
  float maxDistance;
  float fVar7;
  UnityEngine_Vector3_o pos;
  UnityEngine_Vector3_o normalizedPosition_00;
  float fVar8;
  undefined4 in_stack_ffffffffffffff40;
  float in_stack_ffffffffffffff44;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  if (g_data_057ac3bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ac3bc = '\x01';
    in_stack_ffffffffffffff44 = fVar7;
  }
  fStack_48 = 0.0;
  uStack_44 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0.0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  pUVar1 = (__this->fields).gizmoCamera;
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    pos.fields.z = fVar7;
    pos.fields.x = (float)(int)normalizedPosition.fields._0_8_;
    pos.fields.y = (float)(int)((ulong)normalizedPosition.fields._0_8_ >> 0x20);
    UnityEngine_Camera__ViewportPointToRay_4db3610(&local_80,pUVar1,pos,(MethodInfo *)0x0);
    fVar7 = local_80.fields.m_Origin.fields.x;
    fVar10 = local_80.fields.m_Origin.fields.y;
    fVar12 = local_80.fields.m_Origin.fields.z;
    fStack_ac = local_80.fields.m_Direction.fields.x;
    pUVar1 = (__this->fields).gizmoCamera;
    if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
      maxDistance = UnityEngine_Camera__get_farClipPlane(pUVar1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        in_stack_ffffffffffffff44 = maxDistance;
      }
      ray.fields.m_Origin.fields.y = fVar10;
      ray.fields.m_Origin.fields.x = fVar7;
      ray.fields.m_Origin.fields.z = fVar12;
      ray.fields.m_Direction.fields.x = fStack_ac;
      ray.fields.m_Direction.fields.y = local_80.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = local_80.fields.m_Direction.fields.z;
      fVar8 = fVar7;
      fVar9 = fVar7;
      fVar11 = fVar10;
      fVar13 = fVar12;
      bVar3 = UnityEngine_Physics__Raycast_4e77f30
                        (ray,(UnityEngine_RaycastHit_o *)&local_68,maxDistance,0x1000000,2,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return -1;
      }
      __this_00.fields.m_Point.fields.y = fVar10;
      __this_00.fields.m_Point.fields.x = fVar8;
      __this_00.fields.m_Point.fields.z = fVar12;
      __this_00.fields.m_Normal.fields.x = fStack_ac;
      __this_00.fields.m_Normal.fields.y = local_80.fields.m_Direction.fields.y;
      __this_00.fields.m_Normal.fields.z = local_80.fields.m_Direction.fields.z;
      __this_00.fields.m_FaceID = in_stack_ffffffffffffff40;
      __this_00.fields.m_Distance = in_stack_ffffffffffffff44;
      __this_00.fields.m_UV.fields.x = fVar9;
      __this_00.fields.m_UV.fields.y = fVar11;
      __this_00.fields.m_Collider = (int32_t)fVar13;
      __this_01 = UnityEngine_RaycastHit__get_collider(__this_00,(MethodInfo *)&local_68);
      if ((__this_01 != (UnityEngine_Collider_o *)0x0) &&
         (__this_02 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        y = (MethodInfo *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        pUVar6 = (__this->fields).gizmoComponents;
        if (pUVar6 != (UnityEngine_Renderer_array *)0x0) {
          unaff_RBP = 0;
          do {
            uVar5 = (uint)pUVar6->max_length;
            if ((int)uVar5 <= (int)(uint)unaff_RBP) {
              return -1;
            }
            if (uVar5 <= (uint)unaff_RBP) {
              uVar2 = il2cpp_runtime_helper_022b2ca0();
              normalizedPosition_00.fields.z = fVar7;
              normalizedPosition_00.fields.x = (float)(int)uVar2;
              normalizedPosition_00.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
              __this_03 = __this_02;
              uVar4 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                                (__this_02,normalizedPosition_00,method_00);
              uVar5 = (__this_02->fields).highlightedComponent;
              if (uVar4 == 0xffffffff) {
                if (uVar5 == 0xffffffff) {
                  return -1;
                }
                pUVar6 = (__this_02->fields).gizmoComponents;
                if (pUVar6 != (UnityEngine_Renderer_array *)0x0) {
                  if ((uint)pUVar6->max_length <= uVar5) goto label_04083b83;
                  __this_03 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
                  if (pUVar6->m_Items[(int)uVar5] != (UnityEngine_Renderer_o *)0x0) {
                    UnityEngine_Renderer__set_sharedMaterial
                              (pUVar6->m_Items[(int)uVar5],(__this_02->fields).gizmoNormalMaterial,
                               (MethodInfo *)0x0);
                    uVar5 = extraout_EAX_01;
                    goto label_04083b69;
                  }
                }
              }
              else {
                if (uVar4 == uVar5) {
                  return uVar5;
                }
                if (uVar5 == 0xffffffff) {
label_04083b0e:
                  if (uVar4 == (__this_02->fields).fadingComponent) {
label_04083b69:
                    (__this_02->fields).highlightedComponent = -1;
label_04083b70:
                    *(undefined1 *)&(__this_02->fields).updateTargetTexture = 1;
                    return uVar5;
                  }
                  (__this_02->fields).highlightedComponent = uVar4;
                  pUVar6 = (__this_02->fields).gizmoComponents;
                  if (pUVar6 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar6->max_length <= uVar4) goto label_04083b83;
                    __this_03 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
                    if (pUVar6->m_Items[(int)uVar4] != (UnityEngine_Renderer_o *)0x0) {
                      UnityEngine_Renderer__set_sharedMaterial
                                (pUVar6->m_Items[(int)uVar4],(__this_02->fields).gizmoHighlightMaterial,
                                 (MethodInfo *)0x0);
                      uVar5 = extraout_EAX_00;
                      goto label_04083b70;
                    }
                  }
                }
                else {
                  pUVar6 = (__this_02->fields).gizmoComponents;
                  if (pUVar6 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar6->max_length <= uVar5) goto label_04083b83;
                    __this_03 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar6->m_Items[(int)uVar5];
                    if (__this_03 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
                      UnityEngine_Renderer__set_sharedMaterial
                                ((UnityEngine_Renderer_o *)__this_03,(__this_02->fields).gizmoNormalMaterial,
                                 (MethodInfo *)0x0);
                      uVar5 = extraout_EAX;
                      goto label_04083b0e;
                    }
                  }
                }
              }
              il2cpp_runtime_helper_022b2c90();
label_04083b83:
              il2cpp_runtime_helper_022b2ca0();
              (__this_03->fields).highlightedComponent = -1;
              (__this_03->fields).fadingComponent = -1;
              (__this_03->fields).fadeT = 1.0;
              UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
              return extraout_EAX_02;
            }
            if ((UnityEngine_Component_o *)pUVar6->m_Items[unaff_RBP] == (UnityEngine_Component_o *)0x0)
            break;
            __this_02 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar6->m_Items[unaff_RBP],(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = y;
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') goto label_04083a94;
            pUVar6 = (__this->fields).gizmoComponents;
            unaff_RBP = unaff_RBP + 1;
          } while (pUVar6 != (UnityEngine_Renderer_array *)0x0);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04083a94:
  return (int32_t)unaff_RBP;
}


// RuntimeSceneGizmo.SceneGizmoController$$OnPointerHover
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover (RuntimeSceneGizmo_SceneGizmoController_o* __this, UnityEngine_Vector3_o normalizedPosition, const MethodInfo* method);
// 0x4083ac0

void RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,UnityEngine_Vector3_o normalizedPosition,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_array *pUVar2;
  uint uVar3;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  
  __this_00 = __this;
  uVar3 = RuntimeSceneGizmo_SceneGizmoController__Raycast(__this,normalizedPosition,method);
  uVar1 = (__this->fields).highlightedComponent;
  if (uVar3 == 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    pUVar2 = (__this->fields).gizmoComponents;
    if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
      if ((uint)pUVar2->max_length <= uVar1) goto label_04083b83;
      __this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
      if (pUVar2->m_Items[(int)uVar1] != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_sharedMaterial
                  (pUVar2->m_Items[(int)uVar1],(__this->fields).gizmoNormalMaterial,(MethodInfo *)0x0);
        goto label_04083b69;
      }
    }
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if (uVar1 == 0xffffffff) {
label_04083b0e:
      if (uVar3 == (__this->fields).fadingComponent) {
label_04083b69:
        (__this->fields).highlightedComponent = -1;
label_04083b70:
        *(undefined1 *)&(__this->fields).updateTargetTexture = 1;
        return;
      }
      (__this->fields).highlightedComponent = uVar3;
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
        if ((uint)pUVar2->max_length <= uVar3) goto label_04083b83;
        __this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
        if (pUVar2->m_Items[(int)uVar3] != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial
                    (pUVar2->m_Items[(int)uVar3],(__this->fields).gizmoHighlightMaterial,(MethodInfo *)0x0);
          goto label_04083b70;
        }
      }
    }
    else {
      pUVar2 = (__this->fields).gizmoComponents;
      if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
        if ((uint)pUVar2->max_length <= uVar1) goto label_04083b83;
        __this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar2->m_Items[(int)uVar1];
        if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial
                    ((UnityEngine_Renderer_o *)__this_00,(__this->fields).gizmoNormalMaterial,
                     (MethodInfo *)0x0);
          goto label_04083b0e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04083b83:
  il2cpp_runtime_helper_022b2ca0();
  (__this_00->fields).highlightedComponent = -1;
  (__this_00->fields).fadingComponent = -1;
  (__this_00->fields).fadeT = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$SetHiddenComponent
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x4082ee0

void RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_RenderTexture_o *pUVar4;
  UnityEngine_Transform_array *pUVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  bool_conflict bVar9;
  uint uVar10;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Camera_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  MethodInfo *in_RCX;
  uint uVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int32_t component_00;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar22;
  
  uVar10 = (__this->fields).fadingComponent;
  pRVar15 = __this;
  if (component == -1) {
    if (uVar10 == 0xffffffff) {
      return;
    }
    if ((__this->fields).fadeT < 1.0) {
      return;
    }
    pUVar3 = (__this->fields).gizmoComponents;
    if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_040830c9;
    __this_00 = __this;
    if (uVar10 < (uint)pUVar3->max_length) {
      pRVar15 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(int)uVar10];
      if ((pRVar15 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
         (__this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pRVar15,(MethodInfo *)0x0),
         __this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,1,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).gizmoComponents;
        uVar10 = (__this->fields).fadingComponent;
        uVar14 = uVar10;
        if ((1 < uVar10 + 1) && (uVar14 = uVar10 + 1, (uVar10 & 1) == 0)) {
          uVar14 = uVar10 - 1;
        }
        in_RCX = (MethodInfo *)(ulong)uVar14;
        pRVar15 = __this_00;
        if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
          if ((uint)pUVar3->max_length <= uVar14) goto label_040830ce;
          in_RCX = (MethodInfo *)(long)(int)uVar14;
          pRVar15 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(long)in_RCX];
          if ((pRVar15 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pRVar15,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
            *(undefined1 *)&(__this->fields).isFadingToZero = 0;
            goto label_0408309d;
          }
        }
      }
      goto label_040830c9;
    }
  }
  else {
    if (uVar10 == component) {
      return;
    }
    if (uVar10 == 0xffffffff) {
label_04082fcf:
      (__this->fields).fadingComponent = component;
      RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                (__this,component,(__this->fields).gizmoFadeMaterial,in_RCX);
      *(undefined1 *)&(__this->fields).isFadingToZero = 1;
label_0408309d:
      (__this->fields).fadeT = 0.0;
      return;
    }
    RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
              (__this,uVar10,(__this->fields).gizmoNormalMaterial,in_RCX);
    RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf(__this,(__this->fields).fadingComponent,1.0,method_00);
    pUVar3 = (__this->fields).gizmoComponents;
    if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
      uVar10 = (__this->fields).fadingComponent;
      in_RCX = (MethodInfo *)(long)(int)uVar10;
      __this_00 = pRVar15;
      if ((uint)pUVar3->max_length <= uVar10) goto label_040830ce;
      pRVar15 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(long)in_RCX];
      if ((pRVar15 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
         (__this_00 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pRVar15,(MethodInfo *)0x0),
         __this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,1,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).gizmoComponents;
        uVar10 = (__this->fields).fadingComponent;
        uVar14 = uVar10;
        if ((1 < uVar10 + 1) && (uVar14 = uVar10 + 1, (uVar10 & 1) == 0)) {
          uVar14 = uVar10 - 1;
        }
        in_RCX = (MethodInfo *)(ulong)uVar14;
        pRVar15 = __this_00;
        if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
          if ((uint)pUVar3->max_length <= uVar14) goto label_040830ce;
          in_RCX = (MethodInfo *)(long)(int)uVar14;
          pRVar15 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar3->m_Items[(long)in_RCX];
          if ((pRVar15 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pRVar15,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
            goto label_04082fcf;
          }
        }
      }
    }
label_040830c9:
    il2cpp_runtime_helper_022b2c90();
    __this_00 = pRVar15;
  }
label_040830ce:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3ba = '\x01';
  }
  pUVar4 = (__this_00->fields)._TargetTexture_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pRVar15 = (RuntimeSceneGizmo_SceneGizmoController_o *)(__this_00->fields)._TargetTexture_k__BackingField;
  if (pRVar15 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)pRVar15,(MethodInfo *)0x0);
    pUVar4 = (__this_00->fields)._TargetTexture_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ReferenceTransform mustn't be null!");
    g_data_057ac3bb = '\x01';
  }
  pUVar13 = (pRVar15->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pUVar12 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_Camera_o *)0x0) {
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(pRVar15,pUVar13,method_01);
      pUVar13 = (pRVar15->fields).m_referenceTransform;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("ReferenceTransform mustn't be null!",(MethodInfo *)0x0);
        return;
      }
      goto label_04083236;
    }
  }
  else {
label_04083236:
    pUVar13 = (pRVar15->fields).m_referenceTransform;
    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
      UVar22 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
      fVar17 = UVar22.fields.z;
      fVar18 = UVar22.fields.x;
      fVar16 = UVar22.fields.y;
      uVar1 = (pRVar15->fields).prevForward.fields.x;
      uVar2 = (pRVar15->fields).prevForward.fields.y;
      fVar19 = (pRVar15->fields).prevForward.fields.z - fVar17;
      if (((float)uVar1 - fVar18) * ((float)uVar1 - fVar18) +
          ((float)uVar2 - fVar16) * ((float)uVar2 - fVar16) + fVar19 * fVar19 < 9.9999994e-11) {
label_040835bc:
        fVar18 = (pRVar15->fields).fadeT;
        if (1.0 <= fVar18) {
          if ((char)(pRVar15->fields).updateTargetTexture == '\0') {
            return;
          }
          pUVar12 = (pRVar15->fields).gizmoCamera;
        }
        else {
          fVar16 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
          fVar18 = fVar18 + fVar16 * 4.0;
          fVar16 = 1.0;
          if (fVar18 <= 1.0) {
            fVar16 = fVar18;
          }
          (pRVar15->fields).fadeT = fVar16;
          if ((char)(pRVar15->fields).isFadingToZero != '\0') {
            fVar16 = 1.0 - fVar16;
          }
          RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
                    (pRVar15,(pRVar15->fields).fadingComponent,fVar16,method_03);
          if ((pRVar15->fields).fadeT < 1.0) {
label_040836ee:
            *(undefined1 *)&(pRVar15->fields).updateTargetTexture = 1;
            pUVar12 = (pRVar15->fields).gizmoCamera;
          }
          else {
            if ((char)(pRVar15->fields).isFadingToZero != '\0') {
              pUVar3 = (pRVar15->fields).gizmoComponents;
              if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
                uVar10 = (pRVar15->fields).fadingComponent;
                if ((uint)pUVar3->max_length <= uVar10) goto label_04083761;
                if (((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar10] != (UnityEngine_Component_o *)0x0
                    ) && (pUVar11 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar10],
                                               (MethodInfo *)0x0), pUVar11 != (UnityEngine_GameObject_o *)0x0)
                   ) {
                  UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
                  pUVar3 = (pRVar15->fields).gizmoComponents;
                  uVar10 = (pRVar15->fields).fadingComponent;
                  uVar14 = uVar10;
                  if ((1 < uVar10 + 1) && (uVar14 = uVar10 + 1, (uVar10 & 1) == 0)) {
                    uVar14 = uVar10 - 1;
                  }
                  if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar3->max_length <= uVar14) goto label_04083761;
                    if (((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar14] !=
                         (UnityEngine_Component_o *)0x0) &&
                       (pUVar11 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar3->m_Items[(int)uVar14],
                                             (MethodInfo *)0x0), pUVar11 != (UnityEngine_GameObject_o *)0x0))
                    {
                      UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
                      goto label_040836ee;
                    }
                  }
                }
              }
              goto label_0408375c;
            }
            RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
                      (pRVar15,(pRVar15->fields).fadingComponent,(pRVar15->fields).gizmoNormalMaterial,in_RCX)
            ;
            (pRVar15->fields).fadingComponent = -1;
            *(undefined1 *)&(pRVar15->fields).updateTargetTexture = 1;
            pUVar12 = (pRVar15->fields).gizmoCamera;
          }
        }
        if (pUVar12 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__Render(pUVar12,(MethodInfo *)0x0);
          *(undefined1 *)&(pRVar15->fields).updateTargetTexture = 0;
          return;
        }
      }
      else {
        fVar21 = (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 | (uint)-fVar18 & -(uint)(fVar18 < 0.0));
        fVar20 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 | (uint)-fVar16 & -(uint)(fVar16 < 0.0));
        fVar19 = (float)(~-(uint)(fVar17 < 0.0) & (uint)fVar17 | (uint)-fVar17 & -(uint)(fVar17 < 0.0));
        if (fVar21 <= fVar20) {
          if (fVar20 <= fVar19) goto label_0408337d;
          uVar10 = (0.0 < fVar16) + 3;
          fVar18 = fVar17 * 0.0 + fVar18 * 0.0 + fVar16;
        }
        else if (fVar21 <= fVar19) {
label_0408337d:
          uVar10 = (0.0 < fVar17) + 5;
          fVar18 = fVar16 * 0.0 + fVar18 * 0.0 + fVar17;
        }
        else {
          uVar10 = (0.0 < fVar18) + 1;
          fVar18 = fVar17 * 0.0 + fVar16 * 0.0 + fVar18;
        }
        component_00 = -1;
        if (0.92 <= (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 | (uint)-fVar18 & -(uint)(fVar18 < 0.0))) {
          in_RCX = (MethodInfo *)(ulong)(uVar10 & 1);
          component_00 = uVar10 + (uVar10 & 1) * 2 + -1;
        }
        RuntimeSceneGizmo_SceneGizmoController__SetHiddenComponent(pRVar15,component_00,method_02);
        pUVar13 = (pRVar15->fields).m_referenceTransform;
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          value = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
          pUVar13 = (pRVar15->fields).gizmoCamParent;
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation(pUVar13,value,(MethodInfo *)0x0);
            pUVar5 = (pRVar15->fields).labelsTR;
            if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
              if ((int)pUVar5->max_length == 0) goto label_04083761;
              if (pUVar5->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                fVar16 = (fVar21 + -0.15) * 0.65;
                fVar18 = 0.0;
                if (0.0 <= fVar16) {
                  fVar18 = fVar16;
                }
                auVar6._4_8_ = 0;
                auVar6._0_4_ = fVar18;
                UnityEngine_Transform__set_localPosition
                          (pUVar5->m_Items[0],(UnityEngine_Vector3_o)(auVar6 << 0x40),(MethodInfo *)0x0);
                pUVar5 = (pRVar15->fields).labelsTR;
                if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                  if ((uint)pUVar5->max_length < 2) goto label_04083761;
                  if (pUVar5->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                    fVar16 = (fVar20 + -0.15) * 0.65;
                    fVar18 = 0.0;
                    if (0.0 <= fVar16) {
                      fVar18 = fVar16;
                    }
                    auVar7._4_8_ = 0;
                    auVar7._0_4_ = fVar18;
                    UnityEngine_Transform__set_localPosition
                              (pUVar5->m_Items[1],(UnityEngine_Vector3_o)(auVar7 << 0x40),(MethodInfo *)0x0);
                    pUVar5 = (pRVar15->fields).labelsTR;
                    if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                      if ((uint)pUVar5->max_length < 3) goto label_04083761;
                      if (pUVar5->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                        fVar16 = (fVar19 + -0.15) * 0.65;
                        fVar18 = 0.0;
                        if (0.0 <= fVar16) {
                          fVar18 = fVar16;
                        }
                        auVar8._4_8_ = 0;
                        auVar8._0_4_ = fVar18;
                        UnityEngine_Transform__set_localPosition
                                  (pUVar5->m_Items[2],(UnityEngine_Vector3_o)(auVar8 << 0x40),
                                   (MethodInfo *)0x0);
                        pUVar5 = (pRVar15->fields).labelsTR;
                        if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                          if ((int)pUVar5->max_length == 0) goto label_04083761;
                          if (pUVar5->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_rotation(pUVar5->m_Items[0],value,(MethodInfo *)0x0);
                            pUVar5 = (pRVar15->fields).labelsTR;
                            if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                              if ((uint)pUVar5->max_length < 2) goto label_04083761;
                              if (pUVar5->m_Items[1] != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__set_rotation
                                          (pUVar5->m_Items[1],value,(MethodInfo *)0x0);
                                pUVar5 = (pRVar15->fields).labelsTR;
                                if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                                  if ((uint)pUVar5->max_length < 3) goto label_04083761;
                                  if (pUVar5->m_Items[2] != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__set_rotation
                                              (pUVar5->m_Items[2],value,(MethodInfo *)0x0);
                                    *(undefined1 *)&(pRVar15->fields).updateTargetTexture = 1;
                                    (pRVar15->fields).prevForward.fields.x = (float)(int)UVar22.fields._0_8_;
                                    (pRVar15->fields).prevForward.fields.y =
                                         (float)(int)((ulong)UVar22.fields._0_8_ >> 0x20);
                                    (pRVar15->fields).prevForward.fields.z = fVar17;
                                    goto label_040835bc;
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
        }
      }
    }
  }
label_0408375c:
  il2cpp_runtime_helper_022b2c90();
label_04083761:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$SetAlphaOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, float alpha, const MethodInfo* method);
// 0x4083790

void RuntimeSceneGizmo_SceneGizmoController__SetAlphaOf
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,float alpha,
               MethodInfo *method)

{
  UnityEngine_TextMesh_array *pUVar1;
  UnityEngine_Renderer_array *pUVar2;
  undefined8 uVar3;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
  uint uVar4;
  bool_conflict bVar5;
  UnityEngine_Collider_o *__this_01;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_02;
  MethodInfo *y;
  MethodInfo *pMVar6;
  UnityEngine_Material_o *value;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  MethodInfo *method_00;
  _union_13 __this_03;
  UnityEngine_TextMesh_o *__this_04;
  _union_13 __this_05;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_06;
  float maxDistance;
  float fVar11;
  float in_XMM1_Da;
  UnityEngine_Color_o value_00;
  UnityEngine_Vector3_o pos;
  UnityEngine_Vector3_o normalizedPosition;
  float fVar12;
  undefined4 in_stack_ffffffffffffff00;
  float in_stack_ffffffffffffff04;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_ec;
  UnityEngine_Ray_o UStack_c0;
  Il2CppMethodPointer pIStack_a8;
  Il2CppMethodPointer pIStack_a0;
  InvokerMethod pIStack_98;
  uint32_t uStack_90;
  float fStack_8c;
  float fStack_88;
  undefined8 uStack_84;
  _union_13 _Stack_70;
  
  uVar10 = (ulong)(uint)component;
  if (component == -1) {
    return;
  }
  __this_03 = (_union_13)(__this->fields).gizmoFadeMaterial;
  if (__this_03.rgctx_data == (Il2CppRGCTXData *)0x0) {
label_04083841:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar9 = (__this->fields).gizmoMaterialFadeProperty;
    uVar10 = (ulong)uVar9;
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)__this_03.rgctx_data,uVar9,alpha,(MethodInfo *)0x0);
    if (component - 5U < 2) {
      pUVar1 = (__this->fields).labels;
      if (pUVar1 != (UnityEngine_TextMesh_array *)0x0) {
        if ((uint)pUVar1->max_length < 3) goto label_04083846;
        __this_04 = pUVar1->m_Items[2];
        if (__this_04 != (UnityEngine_TextMesh_o *)0x0) goto label_04083821;
        __this_03.rgctx_data = (Il2CppRGCTXData *)0x0;
      }
      goto label_04083841;
    }
    if (1 < component - 1U) {
      pUVar1 = (__this->fields).labels;
      if (pUVar1 != (UnityEngine_TextMesh_array *)0x0) {
        if ((uint)pUVar1->max_length < 2) goto label_04083846;
        __this_04 = pUVar1->m_Items[1];
        __this_03.rgctx_data = (Il2CppRGCTXData *)0x0;
        if (__this_04 != (UnityEngine_TextMesh_o *)0x0) goto label_04083821;
      }
      goto label_04083841;
    }
    pUVar1 = (__this->fields).labels;
    if (pUVar1 == (UnityEngine_TextMesh_array *)0x0) goto label_04083841;
    if ((int)pUVar1->max_length != 0) {
      __this_04 = pUVar1->m_Items[0];
      if (__this_04 != (UnityEngine_TextMesh_o *)0x0) {
label_04083821:
        value_00.fields.a = alpha;
        value_00.fields.b = 1.0;
        value_00.fields.r = 1.0;
        value_00.fields.g = 1.0;
        UnityEngine_TextMesh__set_color(__this_04,value_00,(MethodInfo *)0x0);
        return;
      }
      __this_03.rgctx_data = (Il2CppRGCTXData *)0x0;
      goto label_04083841;
    }
  }
label_04083846:
  il2cpp_runtime_helper_022b2ca0();
  uVar9 = (uint)uVar10;
  if (uVar9 == 0xffffffff) {
    return;
  }
  uVar7 = uVar9;
  if (uVar9 == 0) {
label_0408386e:
    uVar4 = *(uint *)((long)__this_03.rgctx_data + 0x7c);
    if (uVar4 == uVar9) goto label_04083879;
label_04083875:
    if (uVar7 == uVar4) goto label_04083879;
  }
  else {
    if ((uVar10 & 1) == 0) {
      uVar7 = uVar9 - 1;
      goto label_0408386e;
    }
    uVar7 = uVar9 + 1;
    uVar4 = *(uint *)((long)__this_03.rgctx_data + 0x7c);
    if (uVar4 != uVar9) goto label_04083875;
label_04083879:
    *(undefined4 *)((long)__this_03.rgctx_data + 0x7c) = 0xffffffff;
  }
  pMVar6 = __this_03.rgctx_data[6].method;
  __this_05 = __this_03;
  if (pMVar6 != (MethodInfo *)0x0) {
    if (*(uint *)&pMVar6->name <= uVar9) goto label_040838e4;
    __this_05 = (_union_13)((_union_13 *)(&pMVar6->klass + (int)uVar9))->rgctx_data;
    if (__this_05.rgctx_data != (Il2CppRGCTXData *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial
                ((UnityEngine_Renderer_o *)__this_05.rgctx_data,value,(MethodInfo *)0x0);
      pMVar6 = __this_03.rgctx_data[6].method;
      if (pMVar6 != (MethodInfo *)0x0) {
        if (*(uint *)&pMVar6->name <= uVar7) goto label_040838e4;
        __this_05.rgctx_data = (Il2CppRGCTXData *)0x0;
        if ((&pMVar6->klass)[(int)uVar7] != (Il2CppClass *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial
                    ((UnityEngine_Renderer_o *)(&pMVar6->klass)[(int)uVar7],value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040838e4:
  uVar3 = il2cpp_runtime_helper_022b2ca0();
  _Stack_70 = __this_03;
  if (g_data_057ac3bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ac3bc = '\x01';
    in_stack_ffffffffffffff04 = in_XMM1_Da;
  }
  fStack_88 = 0.0;
  uStack_84 = 0;
  pIStack_98 = (InvokerMethod)0x0;
  uStack_90 = 0;
  fStack_8c = 0.0;
  pIStack_a8 = (Il2CppMethodPointer)0x0;
  pIStack_a0 = (Il2CppMethodPointer)0x0;
  if (__this_05.rgctx_data[4].method != (MethodInfo *)0x0) {
    pos.fields.z = in_XMM1_Da;
    pos.fields.x = (float)(int)uVar3;
    pos.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    UnityEngine_Camera__ViewportPointToRay_4db3610
              (&UStack_c0,(UnityEngine_Camera_o *)__this_05.rgctx_data[4].method,pos,(MethodInfo *)0x0);
    fVar11 = UStack_c0.fields.m_Origin.fields.x;
    fVar14 = UStack_c0.fields.m_Origin.fields.y;
    fVar16 = UStack_c0.fields.m_Origin.fields.z;
    fStack_ec = UStack_c0.fields.m_Direction.fields.x;
    if (__this_05.rgctx_data[4].method != (MethodInfo *)0x0) {
      maxDistance = UnityEngine_Camera__get_farClipPlane
                              ((UnityEngine_Camera_o *)__this_05.rgctx_data[4].method,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        in_stack_ffffffffffffff04 = maxDistance;
      }
      ray.fields.m_Origin.fields.y = fVar14;
      ray.fields.m_Origin.fields.x = fVar11;
      ray.fields.m_Origin.fields.z = fVar16;
      ray.fields.m_Direction.fields.x = fStack_ec;
      ray.fields.m_Direction.fields.y = UStack_c0.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = UStack_c0.fields.m_Direction.fields.z;
      fVar12 = fVar11;
      fVar13 = fVar11;
      fVar15 = fVar14;
      fVar17 = fVar16;
      bVar5 = UnityEngine_Physics__Raycast_4e77f30
                        (ray,(UnityEngine_RaycastHit_o *)&pIStack_a8,maxDistance,0x1000000,2,(MethodInfo *)0x0
                        );
      if ((char)bVar5 == '\0') {
        return;
      }
      __this_00.fields.m_Point.fields.y = fVar14;
      __this_00.fields.m_Point.fields.x = fVar12;
      __this_00.fields.m_Point.fields.z = fVar16;
      __this_00.fields.m_Normal.fields.x = fStack_ec;
      __this_00.fields.m_Normal.fields.y = UStack_c0.fields.m_Direction.fields.y;
      __this_00.fields.m_Normal.fields.z = UStack_c0.fields.m_Direction.fields.z;
      __this_00.fields.m_FaceID = in_stack_ffffffffffffff00;
      __this_00.fields.m_Distance = in_stack_ffffffffffffff04;
      __this_00.fields.m_UV.fields.x = fVar13;
      __this_00.fields.m_UV.fields.y = fVar15;
      __this_00.fields.m_Collider = (int32_t)fVar17;
      __this_01 = UnityEngine_RaycastHit__get_collider(__this_00,(MethodInfo *)&pIStack_a8);
      if ((__this_01 != (UnityEngine_Collider_o *)0x0) &&
         (__this_02 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        y = (MethodInfo *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        pMVar6 = __this_05.rgctx_data[6].method;
        if (pMVar6 != (MethodInfo *)0x0) {
          lVar8 = 0;
          do {
            if ((int)*(uint *)&pMVar6->name <= (int)(uint)lVar8) {
              return;
            }
            if (*(uint *)&pMVar6->name <= (uint)lVar8) {
              uVar3 = il2cpp_runtime_helper_022b2ca0();
              normalizedPosition.fields.z = fVar11;
              normalizedPosition.fields.x = (float)(int)uVar3;
              normalizedPosition.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
              __this_06 = __this_02;
              uVar7 = RuntimeSceneGizmo_SceneGizmoController__Raycast(__this_02,normalizedPosition,method_00);
              uVar9 = (__this_02->fields).highlightedComponent;
              if (uVar7 == 0xffffffff) {
                if (uVar9 == 0xffffffff) {
                  return;
                }
                pUVar2 = (__this_02->fields).gizmoComponents;
                if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
                  if ((uint)pUVar2->max_length <= uVar9) goto label_04083b83;
                  __this_06 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
                  if (pUVar2->m_Items[(int)uVar9] != (UnityEngine_Renderer_o *)0x0) {
                    UnityEngine_Renderer__set_sharedMaterial
                              (pUVar2->m_Items[(int)uVar9],(__this_02->fields).gizmoNormalMaterial,
                               (MethodInfo *)0x0);
                    goto label_04083b69;
                  }
                }
              }
              else {
                if (uVar7 == uVar9) {
                  return;
                }
                if (uVar9 == 0xffffffff) {
label_04083b0e:
                  if (uVar7 == (__this_02->fields).fadingComponent) {
label_04083b69:
                    (__this_02->fields).highlightedComponent = -1;
label_04083b70:
                    *(undefined1 *)&(__this_02->fields).updateTargetTexture = 1;
                    return;
                  }
                  (__this_02->fields).highlightedComponent = uVar7;
                  pUVar2 = (__this_02->fields).gizmoComponents;
                  if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar2->max_length <= uVar7) goto label_04083b83;
                    __this_06 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
                    if (pUVar2->m_Items[(int)uVar7] != (UnityEngine_Renderer_o *)0x0) {
                      UnityEngine_Renderer__set_sharedMaterial
                                (pUVar2->m_Items[(int)uVar7],(__this_02->fields).gizmoHighlightMaterial,
                                 (MethodInfo *)0x0);
                      goto label_04083b70;
                    }
                  }
                }
                else {
                  pUVar2 = (__this_02->fields).gizmoComponents;
                  if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar2->max_length <= uVar9) goto label_04083b83;
                    __this_06 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar2->m_Items[(int)uVar9];
                    if (__this_06 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
                      UnityEngine_Renderer__set_sharedMaterial
                                ((UnityEngine_Renderer_o *)__this_06,(__this_02->fields).gizmoNormalMaterial,
                                 (MethodInfo *)0x0);
                      goto label_04083b0e;
                    }
                  }
                }
              }
              il2cpp_runtime_helper_022b2c90();
label_04083b83:
              il2cpp_runtime_helper_022b2ca0();
              (__this_06->fields).highlightedComponent = -1;
              (__this_06->fields).fadingComponent = -1;
              (__this_06->fields).fadeT = 1.0;
              UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
              return;
            }
            if ((&pMVar6->klass)[lVar8] == (Il2CppClass *)0x0) break;
            __this_02 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)(&pMVar6->klass)[lVar8],(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = y;
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              return;
            }
            pMVar6 = __this_05.rgctx_data[6].method;
            lVar8 = lVar8 + 1;
          } while (pMVar6 != (MethodInfo *)0x0);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$SetMaterialOf
// il2cpp: void RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4083850

void RuntimeSceneGizmo_SceneGizmoController__SetMaterialOf
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  undefined8 uVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
  bool_conflict bVar3;
  uint uVar4;
  UnityEngine_Collider_o *__this_01;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_02;
  MethodInfo *y;
  UnityEngine_Renderer_array *pUVar5;
  uint uVar6;
  long lVar7;
  MethodInfo *method_00;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar8;
  float maxDistance;
  float in_XMM1_Da;
  float fVar9;
  UnityEngine_Vector3_o pos;
  UnityEngine_Vector3_o normalizedPosition;
  float fVar10;
  undefined4 in_stack_ffffffffffffff28;
  float in_stack_ffffffffffffff2c;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_c4;
  UnityEngine_Ray_o UStack_98;
  Il2CppMethodPointer pIStack_80;
  Il2CppMethodPointer pIStack_78;
  InvokerMethod pIStack_70;
  uint32_t uStack_68;
  float fStack_64;
  float fStack_60;
  undefined8 uStack_5c;
  _union_13 _Stack_48;
  
  if (component == -1) {
    return;
  }
  uVar6 = component;
  if (component == 0) {
label_0408386e:
    uVar4 = (__this->fields).highlightedComponent;
    if (uVar4 == component) goto label_04083879;
label_04083875:
    if (uVar6 == uVar4) goto label_04083879;
  }
  else {
    if ((component & 1U) == 0) {
      uVar6 = component - 1;
      goto label_0408386e;
    }
    uVar6 = component + 1;
    uVar4 = (__this->fields).highlightedComponent;
    if (uVar4 != component) goto label_04083875;
label_04083879:
    (__this->fields).highlightedComponent = -1;
  }
  pUVar5 = (__this->fields).gizmoComponents;
  pRVar8 = __this;
  if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
    if ((uint)pUVar5->max_length <= (uint)component) goto label_040838e4;
    pRVar8 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar5->m_Items[component];
    if (pRVar8 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)pRVar8,material,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).gizmoComponents;
      if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
        if ((uint)pUVar5->max_length <= uVar6) goto label_040838e4;
        pRVar8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
        if (pUVar5->m_Items[(int)uVar6] != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial(pUVar5->m_Items[(int)uVar6],material,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040838e4:
  uVar2 = il2cpp_runtime_helper_022b2ca0();
  _Stack_48 = (_union_13)__this;
  if (g_data_057ac3bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ac3bc = '\x01';
    in_stack_ffffffffffffff2c = in_XMM1_Da;
  }
  fStack_60 = 0.0;
  uStack_5c = 0;
  pIStack_70 = (InvokerMethod)0x0;
  uStack_68 = 0;
  fStack_64 = 0.0;
  pIStack_80 = (Il2CppMethodPointer)0x0;
  pIStack_78 = (Il2CppMethodPointer)0x0;
  pUVar1 = (pRVar8->fields).gizmoCamera;
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    pos.fields.z = in_XMM1_Da;
    pos.fields.x = (float)(int)uVar2;
    pos.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UnityEngine_Camera__ViewportPointToRay_4db3610(&UStack_98,pUVar1,pos,(MethodInfo *)0x0);
    fVar9 = UStack_98.fields.m_Origin.fields.x;
    fVar12 = UStack_98.fields.m_Origin.fields.y;
    fVar14 = UStack_98.fields.m_Origin.fields.z;
    fStack_c4 = UStack_98.fields.m_Direction.fields.x;
    pUVar1 = (pRVar8->fields).gizmoCamera;
    if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
      maxDistance = UnityEngine_Camera__get_farClipPlane(pUVar1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        in_stack_ffffffffffffff2c = maxDistance;
      }
      ray.fields.m_Origin.fields.y = fVar12;
      ray.fields.m_Origin.fields.x = fVar9;
      ray.fields.m_Origin.fields.z = fVar14;
      ray.fields.m_Direction.fields.x = fStack_c4;
      ray.fields.m_Direction.fields.y = UStack_98.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = UStack_98.fields.m_Direction.fields.z;
      fVar10 = fVar9;
      fVar11 = fVar9;
      fVar13 = fVar12;
      fVar15 = fVar14;
      bVar3 = UnityEngine_Physics__Raycast_4e77f30
                        (ray,(UnityEngine_RaycastHit_o *)&pIStack_80,maxDistance,0x1000000,2,(MethodInfo *)0x0
                        );
      if ((char)bVar3 == '\0') {
        return;
      }
      __this_00.fields.m_Point.fields.y = fVar12;
      __this_00.fields.m_Point.fields.x = fVar10;
      __this_00.fields.m_Point.fields.z = fVar14;
      __this_00.fields.m_Normal.fields.x = fStack_c4;
      __this_00.fields.m_Normal.fields.y = UStack_98.fields.m_Direction.fields.y;
      __this_00.fields.m_Normal.fields.z = UStack_98.fields.m_Direction.fields.z;
      __this_00.fields.m_FaceID = in_stack_ffffffffffffff28;
      __this_00.fields.m_Distance = in_stack_ffffffffffffff2c;
      __this_00.fields.m_UV.fields.x = fVar11;
      __this_00.fields.m_UV.fields.y = fVar13;
      __this_00.fields.m_Collider = (int32_t)fVar15;
      __this_01 = UnityEngine_RaycastHit__get_collider(__this_00,(MethodInfo *)&pIStack_80);
      if ((__this_01 != (UnityEngine_Collider_o *)0x0) &&
         (__this_02 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        y = (MethodInfo *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        pUVar5 = (pRVar8->fields).gizmoComponents;
        if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
          lVar7 = 0;
          do {
            uVar6 = (uint)pUVar5->max_length;
            if ((int)uVar6 <= (int)(uint)lVar7) {
              return;
            }
            if (uVar6 <= (uint)lVar7) {
              uVar2 = il2cpp_runtime_helper_022b2ca0();
              normalizedPosition.fields.z = fVar9;
              normalizedPosition.fields.x = (float)(int)uVar2;
              normalizedPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
              pRVar8 = __this_02;
              uVar4 = RuntimeSceneGizmo_SceneGizmoController__Raycast(__this_02,normalizedPosition,method_00);
              uVar6 = (__this_02->fields).highlightedComponent;
              if (uVar4 == 0xffffffff) {
                if (uVar6 == 0xffffffff) {
                  return;
                }
                pUVar5 = (__this_02->fields).gizmoComponents;
                if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
                  if ((uint)pUVar5->max_length <= uVar6) goto label_04083b83;
                  pRVar8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
                  if (pUVar5->m_Items[(int)uVar6] != (UnityEngine_Renderer_o *)0x0) {
                    UnityEngine_Renderer__set_sharedMaterial
                              (pUVar5->m_Items[(int)uVar6],(__this_02->fields).gizmoNormalMaterial,
                               (MethodInfo *)0x0);
                    goto label_04083b69;
                  }
                }
              }
              else {
                if (uVar4 == uVar6) {
                  return;
                }
                if (uVar6 == 0xffffffff) {
label_04083b0e:
                  if (uVar4 == (__this_02->fields).fadingComponent) {
label_04083b69:
                    (__this_02->fields).highlightedComponent = -1;
label_04083b70:
                    *(undefined1 *)&(__this_02->fields).updateTargetTexture = 1;
                    return;
                  }
                  (__this_02->fields).highlightedComponent = uVar4;
                  pUVar5 = (__this_02->fields).gizmoComponents;
                  if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar5->max_length <= uVar4) goto label_04083b83;
                    pRVar8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
                    if (pUVar5->m_Items[(int)uVar4] != (UnityEngine_Renderer_o *)0x0) {
                      UnityEngine_Renderer__set_sharedMaterial
                                (pUVar5->m_Items[(int)uVar4],(__this_02->fields).gizmoHighlightMaterial,
                                 (MethodInfo *)0x0);
                      goto label_04083b70;
                    }
                  }
                }
                else {
                  pUVar5 = (__this_02->fields).gizmoComponents;
                  if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
                    if ((uint)pUVar5->max_length <= uVar6) goto label_04083b83;
                    pRVar8 = (RuntimeSceneGizmo_SceneGizmoController_o *)pUVar5->m_Items[(int)uVar6];
                    if (pRVar8 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
                      UnityEngine_Renderer__set_sharedMaterial
                                ((UnityEngine_Renderer_o *)pRVar8,(__this_02->fields).gizmoNormalMaterial,
                                 (MethodInfo *)0x0);
                      goto label_04083b0e;
                    }
                  }
                }
              }
              il2cpp_runtime_helper_022b2c90();
label_04083b83:
              il2cpp_runtime_helper_022b2ca0();
              (pRVar8->fields).highlightedComponent = -1;
              (pRVar8->fields).fadingComponent = -1;
              (pRVar8->fields).fadeT = 1.0;
              UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pRVar8,(MethodInfo *)0x0);
              return;
            }
            if ((UnityEngine_Component_o *)pUVar5->m_Items[lVar7] == (UnityEngine_Component_o *)0x0) break;
            __this_02 = (RuntimeSceneGizmo_SceneGizmoController_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar5->m_Items[lVar7],(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = y;
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return;
            }
            pUVar5 = (pRVar8->fields).gizmoComponents;
            lVar7 = lVar7 + 1;
          } while (pUVar5 != (UnityEngine_Renderer_array *)0x0);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoController$$GetOppositeComponent
// il2cpp: int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent (RuntimeSceneGizmo_SceneGizmoController_o* __this, int32_t component, const MethodInfo* method);
// 0x4083770

int32_t RuntimeSceneGizmo_SceneGizmoController__GetOppositeComponent
                  (RuntimeSceneGizmo_SceneGizmoController_o *__this,int32_t component,MethodInfo *method)

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
// 0x4083b90

void RuntimeSceneGizmo_SceneGizmoController___ctor
               (RuntimeSceneGizmo_SceneGizmoController_o *__this,MethodInfo *method)

{
  (__this->fields).highlightedComponent = -1;
  (__this->fields).fadingComponent = -1;
  (__this->fields).fadeT = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


