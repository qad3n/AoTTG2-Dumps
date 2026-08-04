// Type: PatreonEffects.NameEffectController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectController.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectController$$Awake
// il2cpp: void PatreonEffects_NameEffectController__Awake (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329400

void PatreonEffects_NameEffectController__Awake
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = PatreonEffects_NameEffectController__FindText(__this,method);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)&(__this->fields).outlineActive = 0;
    bVar1 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,method);
    if ((char)bVar1 != '\0') {
      (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).runtimeMat,0);
      *(undefined1 *)&(__this->fields).initialized = 0;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$AutoConfigure
// il2cpp: void PatreonEffects_NameEffectController__AutoConfigure (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4328b70

void PatreonEffects_NameEffectController__AutoConfigure
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = PatreonEffects_NameEffectController__FindText(__this,method);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)&(__this->fields).outlineActive = 0;
    bVar1 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,method);
    if ((char)bVar1 != '\0') {
      (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).runtimeMat,0);
      *(undefined1 *)&(__this->fields).initialized = 0;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$RefreshOriginalMaterial
// il2cpp: bool PatreonEffects_NameEffectController__RefreshOriginalMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329570

bool_conflict
PatreonEffects_NameEffectController__RefreshOriginalMaterial
          (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  char cVar2;
  TMPro_TMP_Text_o *pTVar3;
  TMPro_TMP_FontAsset_o *x;
  TMPro_ITextPreprocessor_o *pTVar4;
  UnityEngine_Material_o *pUVar5;
  undefined8 uVar6;
  UnityEngine_Material_c *pUVar7;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  void *pvVar10;
  bool_conflict bVar11;
  bool_conflict bVar12;
  uint uVar13;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  UnityEngine_Object_o *x_00;
  TMPro_ITextPreprocessor_c *method_00;
  Il2CppObject *pIVar14;
  UnityEngine_Object_o *pUVar15;
  PatreonEffects_NameEffectController_o *pPVar16;
  MethodInfo *method_01;
  TMPro_TMP_Text_o *__this_00;
  MethodInfo *pMVar17;
  PatreonEffects_NameEffectController_o *__this_01;
  TMPro_TMP_FontAsset_o **ppTVar18;
  
  if (g_data_057ae036 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae036 = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (TMPro_ITextPreprocessor_c *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return 0;
  }
  pTVar3 = (__this->fields).text;
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    x = (__this->fields).originalFontAsset;
    pUVar15 = (UnityEngine_Object_o *)(pTVar3->fields).m_TextPreprocessor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar13 = 0;
    bVar11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x,pUVar15,(MethodInfo *)0x0);
    method_00 = (TMPro_ITextPreprocessor_c *)0x0;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)(__this->fields).runtimeMat,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pTVar3 = (__this->fields).text;
      __this_00 = (TMPro_TMP_Text_o *)0x0;
      if (pTVar3 == (TMPro_TMP_Text_o *)0x0) goto label_0432973a;
      x_00 = (UnityEngine_Object_o *)
             (*(pTVar3->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                       (pTVar3,(pTVar3->klass->vtable)._67_get_fontSharedMaterial.method);
      pUVar15 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar13 = UnityEngine_Object__op_Inequality(x_00,pUVar15,(MethodInfo *)0x0);
      uVar13 = uVar13 & 0xff;
    }
    __this_00 = (TMPro_TMP_Text_o *)(__this->fields).originalFontMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (TMPro_ITextPreprocessor_c *)0x0;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (uVar13 == 0 && ((char)bVar11 == '\0' && (char)bVar12 == '\0')) {
      return 0;
    }
    pTVar3 = (__this->fields).text;
    if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
      pUVar15 = (UnityEngine_Object_o *)(pTVar3->fields).m_TextPreprocessor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (TMPro_ITextPreprocessor_c *)0x0;
      bVar11 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_00 = (__this->fields).text;
      if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
        if ((char)bVar11 == '\0') {
          method_00 = (TMPro_ITextPreprocessor_c *)
                      (*(__this_00->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                                (__this_00,(__this_00->klass->vtable)._67_get_fontSharedMaterial.method);
        }
        else {
          pTVar4 = (__this_00->fields).m_TextPreprocessor;
          if (pTVar4 == (TMPro_ITextPreprocessor_o *)0x0) goto label_0432973a;
          method_00 = pTVar4[2].klass;
        }
        __this_00 = (TMPro_TMP_Text_o *)&(__this->fields).originalFontMaterial;
        (__this->fields).originalFontMaterial = (UnityEngine_Material_o *)method_00;
        il2cpp_runtime_helper_022b4080();
        pTVar3 = (__this->fields).text;
        if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
          ppTVar18 = &(__this->fields).originalFontAsset;
          *ppTVar18 = (TMPro_TMP_FontAsset_o *)(pTVar3->fields).m_TextPreprocessor;
          il2cpp_runtime_helper_022b4080(ppTVar18);
          return 1;
        }
      }
    }
  }
label_0432973a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae037 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_Instantiate_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Could not find shader: TextMeshPro/NameFX_Master");
    il2cpp_runtime_helper_023445d0(&"TextMeshPro/NameFX_Master");
    g_data_057ae037 = '\x01';
  }
  bVar11 = PatreonEffects_NameEffectController__FindText
                     ((PatreonEffects_NameEffectController_o *)__this_00,(MethodInfo *)method_00);
  if ((char)bVar11 != '\0') {
    *(undefined1 *)((long)&(__this_00->fields).m_CanvasRenderer + 4) = 0;
    bVar11 = PatreonEffects_NameEffectController__RefreshOriginalMaterial
                       ((PatreonEffects_NameEffectController_o *)__this_00,(MethodInfo *)method_00);
    if ((char)bVar11 != '\0') {
      (__this_00->fields).m_RaycastTarget = 0;
      (__this_00->fields).m_RaycastTargetCache = 0;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_RaycastTarget);
      *(undefined1 *)&(__this_00->fields).m_RaycastPadding.fields.x = 0;
    }
  }
  if (*(char *)&(__this_00->fields).m_RaycastPadding.fields.x != '\0') {
    pUVar15 = *(UnityEngine_Object_o **)&(__this_00->fields).m_RaycastTarget;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return bVar11;
    }
  }
  pUVar15 = (UnityEngine_Object_o *)(__this_00->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pUVar15 = *(UnityEngine_Object_o **)&(__this_00->fields).m_Color.fields.b;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pIVar14 = *(Il2CppObject **)&(__this_00->fields).m_Color.fields.b;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar14 = UnityEngine_Object__Instantiate_object_(pIVar14,MethodInfo_Material_Instantiate_Material);
      pbVar1 = &(__this_00->fields).m_RaycastTarget;
      *(Il2CppObject **)&(__this_00->fields).m_RaycastTarget = pIVar14;
      il2cpp_runtime_helper_022b4080(pbVar1);
      pUVar15 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      bVar11 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pUVar5 = *(UnityEngine_Material_o **)pbVar1;
        if (pUVar5 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_shader(pUVar5,(UnityEngine_Shader_o *)pUVar15,(MethodInfo *)0x0);
          pUVar5 = (__this_00->fields).m_Material;
          if (pUVar5 != (UnityEngine_Material_o *)0x0) {
            uVar6._0_4_ = (__this_00->fields).m_RaycastTarget;
            uVar6._4_4_ = (__this_00->fields).m_RaycastTargetCache;
            pUVar7 = pUVar5->klass;
            uVar8._0_4_ = pUVar7[3]._2.token;
            uVar8._4_2_ = pUVar7[3]._2.method_count;
            uVar8._6_2_ = pUVar7[3]._2.property_count;
            bVar11 = (**(code **)&pUVar7[3]._2.thread_static_fields_offset)(pUVar5,uVar6,uVar8);
            *(undefined1 *)&(__this_00->fields).m_RaycastPadding.fields.x = 1;
            return bVar11;
          }
        }
        pMVar17 = (MethodInfo *)0x0;
        bVar11 = il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae045 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateEffectVertexData);
          bVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae045 = '\x01';
        }
        if (*(char *)((long)&pMVar17[1].virtualMethodPointer + 3) != '\0') {
          pIVar9 = pMVar17->klass;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            pIVar9 = pMVar17->klass;
            pPVar16 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
            method_01 = pMVar17;
            __this_01 = pPVar16;
            System_Action_object____ctor();
            if (pIVar9 == (Il2CppClass *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              cVar2 = *(char *)((long)&(__this_01->fields).popActive + 1);
              *(undefined1 *)((long)&(__this_01->fields).popActive + 1) = 0;
              PatreonEffects_NameEffectController__ClearPopGradient(__this_01,method_01);
              if (cVar2 == '\0') {
                return extraout_EAX_00;
              }
              PatreonEffects_NameEffectController__ClearShaderMaterial(__this_01,method_01);
              return extraout_EAX_01;
            }
            pvVar10 = (pIVar9->_1).image;
            bVar11 = (**(code **)((long)pvVar10 + 0x628))
                               (pIVar9,pPVar16,*(undefined8 *)((long)pvVar10 + 0x630));
          }
        }
        *(undefined1 *)((long)&pMVar17[1].virtualMethodPointer + 3) = 0;
        return bVar11;
      }
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError("Could not find shader: TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  return bVar11;
}


// PatreonEffects.NameEffectController$$EnsureShaderMaterial
// il2cpp: void PatreonEffects_NameEffectController__EnsureShaderMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329740

void PatreonEffects_NameEffectController__EnsureShaderMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  char cVar2;
  TMPro_TMP_Text_o *pTVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  bool_conflict bVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  PatreonEffects_NameEffectController_o *pPVar9;
  MethodInfo *method_00;
  MethodInfo *pMVar10;
  PatreonEffects_NameEffectController_o *__this_00;
  
  if (g_data_057ae037 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_Instantiate_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Could not find shader: TextMeshPro/NameFX_Master");
    il2cpp_runtime_helper_023445d0(&"TextMeshPro/NameFX_Master");
    g_data_057ae037 = '\x01';
  }
  bVar6 = PatreonEffects_NameEffectController__FindText(__this,method);
  if ((char)bVar6 != '\0') {
    *(undefined1 *)&(__this->fields).outlineActive = 0;
    bVar6 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,method);
    if ((char)bVar6 != '\0') {
      (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).runtimeMat);
      *(undefined1 *)&(__this->fields).initialized = 0;
    }
  }
  if ((char)(__this->fields).initialized != '\0') {
    pUVar8 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
  }
  pTVar3 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar8 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      pUVar7 = (__this->fields).originalFontMaterial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar7 = (UnityEngine_Material_o *)
               UnityEngine_Object__Instantiate_object_((Il2CppObject *)pUVar7,MethodInfo_Material_Instantiate_Material);
      ppUVar1 = &(__this->fields).runtimeMat;
      (__this->fields).runtimeMat = pUVar7;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      pUVar8 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pUVar7 = *ppUVar1;
        if (pUVar7 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_shader(pUVar7,(UnityEngine_Shader_o *)pUVar8,(MethodInfo *)0x0);
          pTVar3 = (__this->fields).text;
          if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
            (*(pTVar3->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                      (pTVar3,(__this->fields).runtimeMat,
                       (pTVar3->klass->vtable)._68_set_fontSharedMaterial.method);
            *(undefined1 *)&(__this->fields).initialized = 1;
            return;
          }
        }
        pMVar10 = (MethodInfo *)0x0;
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae045 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateEffectVertexData);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae045 = '\x01';
        }
        if (*(char *)((long)&pMVar10[1].virtualMethodPointer + 3) != '\0') {
          pIVar4 = pMVar10->klass;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            pIVar4 = pMVar10->klass;
            pPVar9 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
            method_00 = pMVar10;
            __this_00 = pPVar9;
            System_Action_object____ctor();
            if (pIVar4 == (Il2CppClass *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              cVar2 = *(char *)((long)&(__this_00->fields).popActive + 1);
              *(undefined1 *)((long)&(__this_00->fields).popActive + 1) = 0;
              PatreonEffects_NameEffectController__ClearPopGradient(__this_00,method_00);
              if (cVar2 == '\0') {
                return;
              }
              PatreonEffects_NameEffectController__ClearShaderMaterial(__this_00,method_00);
              return;
            }
            pvVar5 = (pIVar4->_1).image;
            (**(code **)((long)pvVar5 + 0x628))(pIVar4,pPVar9,*(undefined8 *)((long)pvVar5 + 0x630));
          }
        }
        *(undefined1 *)((long)&pMVar10[1].virtualMethodPointer + 3) = 0;
        return;
      }
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError("Could not find shader: TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$Apply
// il2cpp: void PatreonEffects_NameEffectController__Apply (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x4328d30

void PatreonEffects_NameEffectController__Apply
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  ulong uVar1;
  bool_conflict *pbVar2;
  TMPro_TMP_MeshInfo_Fields *pTVar3;
  UnityEngine_Vector3_array **ppUVar4;
  UnityEngine_Vector4_array **ppUVar5;
  UnityEngine_Vector2_array **ppUVar6;
  System_Int32_array **ppSVar7;
  float fVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  UnityEngine_Object_o *pUVar15;
  UnityEngine_Material_o *pUVar16;
  TMPro_TMP_TextInfo_o *textInfo;
  TMPro_TMP_CharacterInfo_array *pTVar17;
  TMPro_TMP_MeshInfo_array *pTVar18;
  UnityEngine_Material_c *pUVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Color32_array *pUVar23;
  byte bVar24;
  byte bVar25;
  bool_conflict bVar26;
  uint uVar27;
  MethodInfo *pMVar28;
  long lVar29;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  undefined8 uVar30;
  long lVar31;
  PatreonEffects_NameEffectSettings_o *method_01;
  TMPro_TMP_Text_o *pTVar32;
  TMPro_TMP_Text_o *pTVar33;
  PatreonEffects_NameEffectController_o *__this_00;
  MethodInfo *in_R9;
  ulong uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  UnityEngine_Color_o value;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long lStack_90;
  undefined1 auStack_88 [40];
  UnityEngine_Vector2_array *pUStack_60;
  UnityEngine_Vector2_array *pUStack_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *pSStack_48;
  UnityEngine_Material_o *pUStack_40;
  PatreonEffects_NameEffectSettings_o *pPStack_38;
  
  method_01 = settings;
  if (g_data_057ae038 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae038 = '\x01';
  }
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    iVar11 = (settings->fields).effectMode;
    if (iVar11 == 6) {
      PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_01);
      if (g_data_057ae042 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
        g_data_057ae042 = '\x01';
      }
      *(undefined1 *)&(__this->fields).popActive = 0;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_01);
      if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(__this->fields).popShadowText,(MethodInfo *)method_01);
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(__this->fields).popExtrusionText,(MethodInfo *)method_01);
      PatreonEffects_NameEffectController__ApplyOutline(__this,settings,method_00);
      return;
    }
    if (iVar11 == 1) {
      PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_01);
      cVar9 = *(char *)((long)&(__this->fields).popActive + 1);
      *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_01);
      pMVar28 = extraout_RDX;
      if (cVar9 != '\0') {
        PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_01);
        pMVar28 = extraout_RDX_00;
      }
      PatreonEffects_NameEffectController__ApplyPop(__this,settings,pMVar28);
      return;
    }
    if (g_data_057ae042 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
      g_data_057ae042 = '\x01';
    }
    *(undefined1 *)&(__this->fields).popActive = 0;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_01);
    if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PatreonEffects_NameEffectController__DestroyPopLayer
              (&(__this->fields).popShadowText,(MethodInfo *)method_01);
    PatreonEffects_NameEffectController__DestroyPopLayer
              (&(__this->fields).popExtrusionText,(MethodInfo *)method_01);
    cVar9 = *(char *)((long)&(__this->fields).popActive + 1);
    uVar30._1_7_ = (undefined7)((ulong)unaff_RBX >> 8);
    uVar30._0_1_ = cVar9;
    *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_01);
    if (cVar9 != '\0') {
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_01);
    }
    PatreonEffects_NameEffectController__EnsureShaderMaterial(__this,(MethodInfo *)method_01);
    if ((char)(__this->fields).initialized != '\0') {
      pUVar15 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar26 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        pUVar16 = (__this->fields).runtimeMat;
        pTVar32 = TypeInfo_NameEffectController;
        if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pUVar16 != (UnityEngine_Material_o *)0x0) {
          value.fields.b = 1.0;
          value.fields.a = 1.0;
          value.fields.r = 1.0;
          value.fields.g = 1.0;
          UnityEngine_Material__SetColor_4dca510
                    (pUVar16,*(int32_t *)&((TypeInfo_NameEffectController->fields).m_ParentMask)->klass,value,(MethodInfo *)0x0
                    );
          pUVar16 = (__this->fields).runtimeMat;
          pTVar32 = (TMPro_TMP_Text_o *)0x0;
          if (pUVar16 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetColor_4dca510
                      (pUVar16,*(int32_t *)((long)&((TypeInfo_NameEffectController->fields).m_ParentMask)->klass + 4),
                       (UnityEngine_Color_o)(settings->fields).gradientA.fields,(MethodInfo *)0x0);
            pUVar16 = (__this->fields).runtimeMat;
            pTVar32 = (TMPro_TMP_Text_o *)0x0;
            if (pUVar16 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetColor_4dca510
                        (pUVar16,*(int32_t *)&((TypeInfo_NameEffectController->fields).m_ParentMask)->monitor,
                         (UnityEngine_Color_o)(settings->fields).gradientB.fields,(MethodInfo *)0x0);
              pUVar16 = (__this->fields).runtimeMat;
              pTVar32 = (TMPro_TMP_Text_o *)0x0;
              if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetColor_4dca510
                          (pUVar16,*(int32_t *)((long)&((TypeInfo_NameEffectController->fields).m_ParentMask)->monitor + 4),
                           (UnityEngine_Color_o)(settings->fields).gradientC.fields,(MethodInfo *)0x0);
                pUVar16 = (__this->fields).runtimeMat;
                pTVar32 = (TMPro_TMP_Text_o *)0x0;
                if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                  UnityEngine_Material__SetColor_4dca510
                            (pUVar16,(int32_t)(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).m_CachedPtr,
                             (UnityEngine_Color_o)(settings->fields).gradientD.fields,(MethodInfo *)0x0);
                  pUVar16 = (__this->fields).runtimeMat;
                  pTVar32 = (TMPro_TMP_Text_o *)0x0;
                  if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetFloat_4dcd3b0
                              (pUVar16,*(int32_t *)
                                        ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).m_CachedPtr +
                                        4),(settings->fields).gradientScale,(MethodInfo *)0x0);
                    pUVar16 = (__this->fields).runtimeMat;
                    pTVar32 = (TMPro_TMP_Text_o *)0x0;
                    if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                (pUVar16,*(int32_t *)
                                          &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                           m_CancellationTokenSource,(settings->fields).gradientSpeed,
                                 (MethodInfo *)0x0);
                      pUVar16 = (__this->fields).runtimeMat;
                      pTVar32 = (TMPro_TMP_Text_o *)0x0;
                      if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                        UnityEngine_Material__SetFloat_4dcd3b0
                                  (pUVar16,*(int32_t *)
                                            ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                    m_CancellationTokenSource + 4),
                                   (float)(settings->fields).effectMode,(MethodInfo *)0x0);
                        pUVar16 = (__this->fields).runtimeMat;
                        pTVar32 = (TMPro_TMP_Text_o *)0x0;
                        if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                          UnityEngine_Material__SetFloat_4dcd3b0
                                    (pUVar16,*(int32_t *)
                                              &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).m_VertexClipper
                                     ,(settings->fields).glow,(MethodInfo *)0x0);
                          pUVar16 = (__this->fields).runtimeMat;
                          pTVar32 = (TMPro_TMP_Text_o *)0x0;
                          if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                            UnityEngine_Material__SetFloat_4dcd3b0
                                      (pUVar16,*(int32_t *)
                                                ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                        m_VertexClipper + 4),
                                       (settings->fields).scanlineStrength,(MethodInfo *)0x0);
                            pUVar16 = (__this->fields).runtimeMat;
                            pTVar32 = (TMPro_TMP_Text_o *)0x0;
                            if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                              UnityEngine_Material__SetFloat_4dcd3b0
                                        (pUVar16,*(int32_t *)
                                                  &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                   m_RectTransform,(settings->fields).scanlineDensity,
                                         (MethodInfo *)0x0);
                              pUVar16 = (__this->fields).runtimeMat;
                              pTVar32 = (TMPro_TMP_Text_o *)0x0;
                              if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                UnityEngine_Material__SetFloat_4dcd3b0
                                          (pUVar16,*(int32_t *)
                                                    ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                            m_RectTransform + 4),
                                           (settings->fields).scanlineSpeed,(MethodInfo *)0x0);
                                pUVar16 = (__this->fields).runtimeMat;
                                pTVar32 = (TMPro_TMP_Text_o *)0x0;
                                if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                  UnityEngine_Material__SetFloat_4dcd3b0
                                            (pUVar16,*(int32_t *)
                                                      &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                       m_MaskableTargets,(settings->fields).flickerStrength,
                                             (MethodInfo *)0x0);
                                  pUVar16 = (__this->fields).runtimeMat;
                                  pTVar32 = (TMPro_TMP_Text_o *)0x0;
                                  if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                    UnityEngine_Material__SetFloat_4dcd3b0
                                              (pUVar16,*(int32_t *)
                                                        ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields
                                                                ).m_MaskableTargets + 4),
                                               (settings->fields).flickerSpeed,(MethodInfo *)0x0);
                                    pUVar16 = (__this->fields).runtimeMat;
                                    pTVar32 = (TMPro_TMP_Text_o *)0x0;
                                    if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                      uVar12 = *(uint *)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                         m_ClipTargets;
                                      pMVar28 = (MethodInfo *)(ulong)uVar12;
                                      UnityEngine_Material__SetFloat_4dcd3b0
                                                (pUVar16,uVar12,(settings->fields).softness,(MethodInfo *)0x0)
                                      ;
                                      PatreonEffects_NameEffectController__HookEffectVertexData
                                                (__this,pMVar28);
                                      pTVar32 = (__this->fields).text;
                                      if (pTVar32 != (TMPro_TMP_Text_o *)0x0) {
                                        (*(pTVar32->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                                                  (pTVar32,0,0,
                                                   (pTVar32->klass->vtable)._106_ForceMeshUpdate.method);
                                        pTVar33 = (__this->fields).text;
                                        if (pTVar33 != (TMPro_TMP_Text_o *)0x0) {
                                          textInfo = *(TMPro_TMP_TextInfo_o **)
                                                      &(pTVar33->fields).m_ignoreCulling;
                                          if (g_data_057ae048 == '\0') {
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                                            g_data_057ae048 = '\x01';
                                          }
                                          fStack_94 = 0.0;
                                          fStack_98 = 0.0;
                                          fStack_9c = 0.0;
                                          fStack_a0 = 0.0;
                                          pSStack_48 = (System_Int32_array *)0x0;
                                          pUStack_40 = (UnityEngine_Material_o *)0x0;
                                          pUStack_58 = (UnityEngine_Vector2_array *)0x0;
                                          pUStack_50 = (UnityEngine_Color32_array *)0x0;
                                          auStack_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
                                          pUStack_60 = (UnityEngine_Vector2_array *)0x0;
                                          auStack_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
                                          auStack_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
                                          auStack_88._0_8_ = (TMPro_TMP_Text_c *)0x0;
                                          auStack_88._8_8_ = (void *)0x0;
                                          pUVar15 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
                                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          bVar26 = UnityEngine_Object__op_Equality
                                                             (pUVar15,(UnityEngine_Object_o *)0x0,
                                                              (MethodInfo *)0x0);
                                          if (((char)bVar26 == '\0') &&
                                             (textInfo != (TMPro_TMP_TextInfo_o *)0x0)) {
                                            if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
                                              il2cpp_runtime_helper_02337ed0();
                                            }
                                            bVar26 = PatreonEffects_NameEffectController__TryLocalBounds
                                                               (textInfo,&fStack_94,&fStack_98,&fStack_9c,
                                                                &fStack_a0,in_R9);
                                            fVar22 = fStack_94;
                                            fVar36 = fStack_98;
                                            fVar21 = fStack_9c;
                                            fVar37 = fStack_a0;
                                            if ((char)bVar26 != '\0') {
                                              pTVar32 = TypeInfo_NameEffectController;
                                              if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0)
                                              {
                                                il2cpp_runtime_helper_02337ed0();
                                                pTVar17 = (textInfo->fields).characterInfo;
                                              }
                                              else {
                                                pTVar17 = (textInfo->fields).characterInfo;
                                              }
                                              if (pTVar17 != (TMPro_TMP_CharacterInfo_array *)0x0) {
                                                uVar12 = (textInfo->fields).characterCount;
                                                uVar27 = (uint)pTVar17->max_length;
                                                if ((int)uVar12 <= (int)uVar27) {
                                                  uVar27 = uVar12;
                                                }
                                                if (0 < (int)uVar27) {
                                                  fVar36 = fVar36 - fVar22;
                                                  fVar37 = fVar37 - fVar21;
                                                  if (fVar36 <= 0.001) {
                                                    fVar36 = 0.001;
                                                  }
                                                  if (fVar37 <= 0.001) {
                                                    fVar37 = 0.001;
                                                  }
                                                  lVar31 = 0x58;
                                                  uVar34 = 0;
                                                  pTVar17 = (textInfo->fields).characterInfo;
                                                  pTVar33 = TypeInfo_NameEffectController;
                                                  while (TypeInfo_NameEffectController = pTVar33,
                                                        pTVar17 != (TMPro_TMP_CharacterInfo_array *)0x0) {
                                                    if ((uint)pTVar17->max_length <= uVar34)
                                                    goto label_0432a626;
                                                    if ((*(byte *)((long)&pTVar17->m_Items[0].fields.topRight.
                                                                          fields.y + lVar31) & 1) != 0) {
                                                      uVar12 = *(uint *)((long)pTVar17->m_Items +
                                                                        lVar31 + -0x20);
                                                      uVar13 = *(uint *)((long)pTVar17->m_Items +
                                                                        lVar31 + -0xc);
                                                      uVar35 = (ulong)uVar13;
                                                      pTVar32 = pTVar33;
                                                      if (*(int *)((long)&(pTVar33->fields).m_Corners + 4) ==
                                                          0) {
                                                        il2cpp_runtime_helper_02337ed0();
                                                        pTVar32 = pTVar33;
                                                      }
                                                      pSStack_48 = (System_Int32_array *)0x0;
                                                      pUStack_40 = (UnityEngine_Material_o *)0x0;
                                                      pUStack_58 = (UnityEngine_Vector2_array *)0x0;
                                                      pUStack_50 = (UnityEngine_Color32_array *)0x0;
                                                      auStack_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
                                                      pUStack_60 = (UnityEngine_Vector2_array *)0x0;
                                                      auStack_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
                                                      auStack_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
                                                      auStack_88._0_8_ = (TMPro_TMP_Text_c *)0x0;
                                                      auStack_88._8_8_ = (void *)0x0;
                                                      if (((-1 < (int)uVar12) &&
                                                          (pTVar18 = (textInfo->fields).meshInfo,
                                                          pTVar18 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
                                                         (uVar14 = (uint)pTVar18->max_length,
                                                         (int)uVar12 < (int)uVar14)) {
                                                        if (uVar14 <= uVar12) goto label_0432a626;
                                                        pTVar3 = &pTVar18->m_Items[(int)uVar12].fields;
                                                        auStack_88._0_8_ = pTVar3->mesh;
                                                        auStack_88._8_8_ = *(undefined8 *)&pTVar3->vertexCount
                                                        ;
                                                        ppUVar4 = &pTVar18->m_Items[(int)uVar12].fields.
                                                                   vertices;
                                                        auStack_88._16_8_ = *ppUVar4;
                                                        auStack_88._24_8_ = ppUVar4[1];
                                                        ppUVar5 = &pTVar18->m_Items[(int)uVar12].fields.
                                                                   tangents;
                                                        auStack_88._32_8_ = *ppUVar5;
                                                        pUStack_60 = (UnityEngine_Vector2_array *)ppUVar5[1];
                                                        ppUVar6 = &pTVar18->m_Items[(int)uVar12].fields.uvs2;
                                                        pUStack_58 = *ppUVar6;
                                                        pUStack_50 = (UnityEngine_Color32_array *)ppUVar6[1];
                                                        ppSVar7 = &pTVar18->m_Items[(int)uVar12].fields.
                                                                   triangles;
                                                        pSStack_48 = *ppSVar7;
                                                        pUStack_40 = (UnityEngine_Material_o *)ppSVar7[1];
                                                        pTVar32 = (TMPro_TMP_Text_o *)auStack_88;
                                                        il2cpp_runtime_helper_022b4080();
                                                        pUVar23 = pUStack_50;
                                                        uVar30 = auStack_88._16_8_;
                                                        if ((pUStack_50 != (UnityEngine_Color32_array *)0x0)
                                                           && ((UnityEngine_Vector3_array *)auStack_88._16_8_
                                                               != (UnityEngine_Vector3_array *)0x0)) {
                                                          if (((int)(uVar13 + 3) < (int)pUStack_50->max_length
                                                              ) && ((int)(uVar13 + 3) <
                                                                    (int)*(il2cpp_array_size_t *)
                                                                          (auStack_88._16_8_ + 0x18))) {
                                                            if (((pUStack_50->max_length & 0xffffffff) <=
                                                                 uVar35) ||
                                                               ((*(il2cpp_array_size_t *)
                                                                  (auStack_88._16_8_ + 0x18) & 0xffffffff) <=
                                                                uVar35)) {
label_0432a626:
                                                              il2cpp_runtime_helper_022b2ca0();
                                                              return;
                                                            }
                                                            lVar29 = (long)(int)uVar13;
                                                            bVar10 = *(byte *)((long)&pUStack_50->m_Items[0].
                                                                                      fields.rgba +
                                                                              lVar29 * 4 + 3);
                                                            fVar8 = ((UnityEngine_Vector3_o *)
                                                                    (auStack_88._16_8_ + 0x20))[lVar29].fields
                                                                    .x;
                                                            pTVar32 = TypeInfo_NameEffectController;
                                                            if (*(int *)((long)&(TypeInfo_NameEffectController->fields).
                                                                                m_Corners + 4) == 0) {
                                                              il2cpp_runtime_helper_02337ed0();
                                                            }
                                                            bVar24 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 ((fVar8 - fVar22) / fVar36,
                                                                  (MethodInfo *)pTVar32);
                                                       if (((uint)*(il2cpp_array_size_t *)(uVar30 + 0x18) <=
                                                            uVar35) ||
                                                          (bVar25 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 ((((UnityEngine_Vector3_o *)(uVar30 + 0x20))
                                                                   [lVar29].fields.y - fVar21) / fVar37,
                                                                  (MethodInfo *)pTVar32),
                                                       (uint)pUVar23->max_length <= uVar35))
                                                       goto label_0432a626;
                                                       (&pUVar23->m_Items[0].fields.rgba)[lVar29] =
                                                            (uint)bVar24 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar25 << 8 | 0xff0000;
                                                       uVar1 = uVar35 + 1;
                                                       if (((uint)pUVar23->max_length <= uVar1) ||
                                                          ((uint)*(il2cpp_array_size_t *)(uVar30 + 0x18) <=
                                                           uVar1)) goto label_0432a626;
                                                       lVar29 = (long)(int)uVar1;
                                                       bVar10 = *(byte *)((long)&pUVar23->m_Items[0].fields.
                                                                                 rgba + lVar29 * 4 + 3);
                                                       lStack_90 = lVar29 * 3;
                                                       fVar8 = ((UnityEngine_Vector3_o *)(uVar30 + 0x20))
                                                               [lVar29].fields.x;
                                                       pTVar32 = TypeInfo_NameEffectController;
                                                       if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners +
                                                                   4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       bVar24 = PatreonEffects_NameEffectController__ToByte
                                                                          ((fVar8 - fVar22) / fVar36,
                                                                           (MethodInfo *)pTVar32);
                                                       if (((uint)*(il2cpp_array_size_t *)(uVar30 + 0x18) <=
                                                            uVar1) ||
                                                          (bVar25 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 (((&(((UnityEngine_Vector3_o *)
                                                                      (uVar30 + 0x20))->fields).y)[lStack_90]
                                                                  - fVar21) / fVar37,(MethodInfo *)pTVar32),
                                                       (uint)pUVar23->max_length <= uVar1)) goto label_0432a626;
                                                       (&pUVar23->m_Items[0].fields.rgba)[lVar29] =
                                                            (uint)bVar24 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar25 << 8 | 0xff0000;
                                                       uVar1 = uVar35 + 2;
                                                       if (((uint)pUVar23->max_length <= uVar1) ||
                                                          ((uint)*(il2cpp_array_size_t *)(uVar30 + 0x18) <=
                                                           uVar1)) goto label_0432a626;
                                                       lVar29 = (long)(int)uVar1;
                                                       bVar10 = *(byte *)((long)&pUVar23->m_Items[0].fields.
                                                                                 rgba + lVar29 * 4 + 3);
                                                       lStack_90 = lVar29 * 3;
                                                       fVar8 = ((UnityEngine_Vector3_o *)(uVar30 + 0x20))
                                                               [lVar29].fields.x;
                                                       pTVar32 = TypeInfo_NameEffectController;
                                                       if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners +
                                                                   4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       bVar24 = PatreonEffects_NameEffectController__ToByte
                                                                          ((fVar8 - fVar22) / fVar36,
                                                                           (MethodInfo *)pTVar32);
                                                       if (((uint)*(il2cpp_array_size_t *)(uVar30 + 0x18) <=
                                                            uVar1) ||
                                                          (bVar25 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 (((&(((UnityEngine_Vector3_o *)
                                                                      (uVar30 + 0x20))->fields).y)[lStack_90]
                                                                  - fVar21) / fVar37,(MethodInfo *)pTVar32),
                                                       (uint)pUVar23->max_length <= uVar1)) goto label_0432a626;
                                                       (&pUVar23->m_Items[0].fields.rgba)[lVar29] =
                                                            (uint)bVar24 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar25 << 8 | 0xff0000;
                                                       uVar35 = uVar35 + 3;
                                                       if (((uint)pUVar23->max_length <= uVar35) ||
                                                          ((uint)*(il2cpp_array_size_t *)(uVar30 + 0x18) <=
                                                           uVar35)) goto label_0432a626;
                                                       lVar29 = (long)(int)uVar35;
                                                       bVar10 = *(byte *)((long)&pUVar23->m_Items[0].fields.
                                                                                 rgba + lVar29 * 4 + 3);
                                                       fVar8 = ((UnityEngine_Vector3_o *)(uVar30 + 0x20))
                                                               [lVar29].fields.x;
                                                       pTVar32 = TypeInfo_NameEffectController;
                                                       if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners +
                                                                   4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       bVar24 = PatreonEffects_NameEffectController__ToByte
                                                                          ((fVar8 - fVar22) / fVar36,
                                                                           (MethodInfo *)pTVar32);
                                                       if (((uint)*(il2cpp_array_size_t *)(uVar30 + 0x18) <=
                                                            uVar35) ||
                                                          (bVar25 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 ((((UnityEngine_Vector3_o *)(uVar30 + 0x20))
                                                                   [lVar29].fields.y - fVar21) / fVar37,
                                                                  (MethodInfo *)pTVar32),
                                                       (uint)pUVar23->max_length <= uVar35))
                                                       goto label_0432a626;
                                                       (&pUVar23->m_Items[0].fields.rgba)[lVar29] =
                                                            (uint)bVar24 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar25 << 8 | 0xff0000;
                                                       }
                                                       }
                                                      }
                                                    }
                                                    uVar34 = uVar34 + 1;
                                                    lVar31 = lVar31 + 0x178;
                                                    if (uVar27 == uVar34) {
                                                      return;
                                                    }
                                                    pTVar33 = TypeInfo_NameEffectController;
                                                    pTVar17 = (textInfo->fields).characterInfo;
                                                  }
                                                  il2cpp_runtime_helper_022b2c90();
                                                  if (g_data_057ae047 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                                                    g_data_057ae047 = '\x01';
                                                  }
                                                  pUVar15 = (UnityEngine_Object_o *)
                                                            (pTVar32->fields).m_Material;
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  bVar26 = UnityEngine_Object__op_Inequality
                                                                     (pUVar15,(UnityEngine_Object_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  if ((char)bVar26 != '\0') {
                                                    pUVar15 = *(UnityEngine_Object_o **)
                                                               &(pTVar32->fields).m_Color.fields.b;
                                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pMVar28 = (MethodInfo *)0x0;
                                                    bVar26 = UnityEngine_Object__op_Inequality
                                                                       (pUVar15,(UnityEngine_Object_o *)0x0,
                                                                        (MethodInfo *)0x0);
                                                    if ((char)bVar26 != '\0') {
                                                      pUVar16 = (pTVar32->fields).m_Material;
                                                      if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                                        pMVar28 = *(MethodInfo **)
                                                                   &(pTVar32->fields).m_Color.fields.b;
                                                        pUVar19 = pUVar16->klass;
                                                        uVar20._0_4_ = pUVar19[3]._2.token;
                                                        uVar20._4_2_ = pUVar19[3]._2.method_count;
                                                        uVar20._6_2_ = pUVar19[3]._2.property_count;
                                                        (**(code **)&pUVar19[3]._2.thread_static_fields_offset
                                                        )(pUVar16,pMVar28,uVar20);
                                                        pUVar16 = (pTVar32->fields).m_Material;
                                                        if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                                          (*pUVar16->klass[5]._1.fields)
                                                                    (pUVar16,0,0,pUVar16->klass[5]._1.events);
                                                          goto label_0432a71e;
                                                        }
                                                      }
                                                      __this_00 = (PatreonEffects_NameEffectController_o *)0x0
                                                      ;
                                                      il2cpp_runtime_helper_022b2c90();
                                                      PatreonEffects_NameEffectController__Clear
                                                                (__this_00,pMVar28);
                                                      return;
                                                    }
                                                  }
label_0432a71e:
                                                  pUVar15 = *(UnityEngine_Object_o **)
                                                             &(pTVar32->fields).m_RaycastTarget;
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  pbVar2 = &(pTVar32->fields).m_RaycastTarget;
                                                  bVar26 = UnityEngine_Object__op_Inequality
                                                                     (pUVar15,(UnityEngine_Object_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  if ((char)bVar26 != '\0') {
                                                    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    bVar26 = UnityEngine_Application__get_isPlaying
                                                                       ((MethodInfo *)0x0);
                                                    pUVar15 = *(UnityEngine_Object_o **)pbVar2;
                                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    if ((char)bVar26 == '\0') {
                                                      UnityEngine_Object__DestroyImmediate_4e01e00
                                                                (pUVar15,(MethodInfo *)0x0);
                                                    }
                                                    else {
                                                      UnityEngine_Object__Destroy_4e01c60
                                                                (pUVar15,(MethodInfo *)0x0);
                                                    }
                                                  }
                                                  (pTVar32->fields).m_RaycastTarget = 0;
                                                  (pTVar32->fields).m_RaycastTargetCache = 0;
                                                  il2cpp_runtime_helper_022b4080(pbVar2,0);
                                                  *(undefined1 *)&(pTVar32->fields).m_RaycastPadding.fields.x
                                                       = 0;
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                          return;
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
        il2cpp_runtime_helper_022b2c90();
        pUStack_40 = (UnityEngine_Material_o *)uVar30;
        pPStack_38 = settings;
        if (g_data_057ae039 == '\0') {
          pSStack_48 = (System_Int32_array *)0x43291e7;
          il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
          pSStack_48 = (System_Int32_array *)0x43291f3;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae039 = '\x01';
          cVar9 = *(char *)((long)&(pTVar32->fields).m_CanvasRenderer + 4);
        }
        else {
          cVar9 = *(char *)((long)&(pTVar32->fields).m_CanvasRenderer + 4);
        }
        if (cVar9 == '\0') {
          *(undefined1 *)((long)&(pTVar32->fields).m_CanvasRenderer + 4) = 1;
          pUVar15 = (UnityEngine_Object_o *)(pTVar32->fields).m_Material;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pSStack_48 = (System_Int32_array *)0x4329220;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar28 = (MethodInfo *)0x0;
          pSStack_48 = (System_Int32_array *)0x432922c;
          bVar26 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar26 != '\0') {
            pSStack_48 = (System_Int32_array *)0x4329246;
            pMVar28 = (MethodInfo *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pTVar32,MethodInfo_TMP_Text_GetComponent_TMP_Text);
            (pTVar32->fields).m_Material = (UnityEngine_Material_o *)pMVar28;
            pSStack_48 = (System_Int32_array *)0x4329255;
            il2cpp_runtime_helper_022b4080(&(pTVar32->fields).m_Material);
          }
          pSStack_48 = (System_Int32_array *)0x432925d;
          PatreonEffects_NameEffectController__RefreshOriginalMaterial
                    ((PatreonEffects_NameEffectController_o *)pTVar32,pMVar28);
          if (g_data_057ae042 == '\0') {
            pSStack_48 = (System_Int32_array *)0x4329272;
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
            g_data_057ae042 = '\x01';
          }
          *(undefined1 *)&(pTVar32->fields).m_CanvasRenderer = 0;
          pSStack_48 = (System_Int32_array *)0x4329285;
          PatreonEffects_NameEffectController__ClearPopGradient
                    ((PatreonEffects_NameEffectController_o *)pTVar32,pMVar28);
          if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
            pSStack_48 = (System_Int32_array *)0x43292a1;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_48 = (System_Int32_array *)0x43292a9;
          PatreonEffects_NameEffectController__DestroyPopLayer
                    ((TMPro_TMP_Text_o **)&(pTVar32->fields).m_RaycastPadding.fields.z,pMVar28);
          pSStack_48 = (System_Int32_array *)0x43292b2;
          PatreonEffects_NameEffectController__DestroyPopLayer
                    ((TMPro_TMP_Text_o **)&(pTVar32->fields).m_RectTransform,pMVar28);
          cVar9 = *(char *)((long)&(pTVar32->fields).m_CanvasRenderer + 1);
          *(undefined1 *)((long)&(pTVar32->fields).m_CanvasRenderer + 1) = 0;
          pSStack_48 = (System_Int32_array *)0x43292c2;
          PatreonEffects_NameEffectController__ClearPopGradient
                    ((PatreonEffects_NameEffectController_o *)pTVar32,pMVar28);
          if (cVar9 != '\0') {
            pSStack_48 = (System_Int32_array *)0x43292cf;
            PatreonEffects_NameEffectController__ClearShaderMaterial
                      ((PatreonEffects_NameEffectController_o *)pTVar32,pMVar28);
          }
          pSStack_48 = (System_Int32_array *)0x43292d7;
          PatreonEffects_NameEffectController__ClearEffectVertexData
                    ((PatreonEffects_NameEffectController_o *)pTVar32,pMVar28);
          pSStack_48 = (System_Int32_array *)0x43292df;
          PatreonEffects_NameEffectController__ClearShaderMaterial
                    ((PatreonEffects_NameEffectController_o *)pTVar32,pMVar28);
          *(undefined1 *)&(pTVar32->fields).m_RaycastPadding.fields.x = 0;
          return;
        }
        return;
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$Clear
// il2cpp: void PatreonEffects_NameEffectController__Clear (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x43291c0

void PatreonEffects_NameEffectController__Clear
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_Text_o *x;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *method_00;
  
  if (g_data_057ae039 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae039 = '\x01';
    cVar1 = (char)(__this->fields).outlineActive;
  }
  else {
    cVar1 = (char)(__this->fields).outlineActive;
  }
  if (cVar1 != '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).outlineActive = 1;
  x = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (TMPro_TMP_Text_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    method_00 = (TMPro_TMP_Text_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this->fields).text = method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).text);
  }
  PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)method_00);
  if (g_data_057ae042 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae042 = '\x01';
  }
  *(undefined1 *)&(__this->fields).popActive = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_00);
  if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PatreonEffects_NameEffectController__DestroyPopLayer
            (&(__this->fields).popShadowText,(MethodInfo *)method_00);
  PatreonEffects_NameEffectController__DestroyPopLayer
            (&(__this->fields).popExtrusionText,(MethodInfo *)method_00);
  cVar1 = *(char *)((long)&(__this->fields).popActive + 1);
  *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_00);
  if (cVar1 != '\0') {
    PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_00);
  }
  PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_00);
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_00);
  *(undefined1 *)&(__this->fields).initialized = 0;
  return;
}


// PatreonEffects.NameEffectController$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectController__OnDestroy (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432a7d0

void PatreonEffects_NameEffectController__OnDestroy
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController__Clear(__this,method);
  return;
}


// PatreonEffects.NameEffectController$$ApplyHolographic
// il2cpp: void PatreonEffects_NameEffectController__ApplyHolographic (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432a7e0

void PatreonEffects_NameEffectController__ApplyHolographic
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  
  if (g_data_057ae051 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae051 = '\x01';
  }
  settings = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (settings->fields).gradientA.fields.r = 0.78;
  (settings->fields).gradientA.fields.g = 1.0;
  (settings->fields).gradientA.fields.b = 0.9;
  (settings->fields).gradientA.fields.a = 1.0;
  (settings->fields).gradientB.fields.r = 0.64;
  (settings->fields).gradientB.fields.g = 0.95;
  (settings->fields).gradientB.fields.b = 1.0;
  (settings->fields).gradientB.fields.a = 1.0;
  (settings->fields).gradientC.fields.r = 0.86;
  (settings->fields).gradientC.fields.g = 0.76;
  (settings->fields).gradientC.fields.b = 1.0;
  (settings->fields).gradientC.fields.a = 1.0;
  (settings->fields).gradientD.fields.r = 1.0;
  (settings->fields).gradientD.fields.g = 0.96;
  (settings->fields).gradientD.fields.b = 0.82;
  (settings->fields).gradientD.fields.a = 1.0;
  (settings->fields).gradientScale = 2.8;
  (settings->fields).gradientSpeed = 0.16;
  (settings->fields).glow = 1.35;
  (settings->fields).scanlineStrength = 0.12;
  (settings->fields).scanlineDensity = 180.0;
  (settings->fields).scanlineSpeed = 0.18;
  (settings->fields).flickerStrength = 0.05;
  (settings->fields).flickerSpeed = 18.0;
  (settings->fields).softness = 1.0;
  (settings->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (settings->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)settings,(MethodInfo *)0x0);
  PatreonEffects_NameEffectController__Apply(__this,settings,method_00);
  return;
}


// PatreonEffects.NameEffectController$$FindText
// il2cpp: bool PatreonEffects_NameEffectController__FindText (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329440

bool_conflict
PatreonEffects_NameEffectController__FindText
          (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **ppTVar1;
  bool_conflict *pbVar2;
  char cVar3;
  TMPro_TMP_Text_o *pTVar4;
  TMPro_TMP_FontAsset_o *x;
  TMPro_ITextPreprocessor_o *pTVar5;
  UnityEngine_Material_o *pUVar6;
  undefined8 uVar7;
  UnityEngine_Material_c *pUVar8;
  undefined8 uVar9;
  Il2CppClass *pIVar10;
  void *pvVar11;
  bool_conflict bVar12;
  bool_conflict bVar13;
  uint uVar14;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  TMPro_TMP_Text_o *pTVar15;
  UnityEngine_Object_o *pUVar16;
  System_String_o *pSVar17;
  UnityEngine_Object_o *x_00;
  TMPro_ITextPreprocessor_c *method_00;
  Il2CppObject *pIVar18;
  PatreonEffects_NameEffectController_o *pPVar19;
  MethodInfo *method_01;
  MethodInfo *pMVar20;
  PatreonEffects_NameEffectController_o *__this_00;
  TMPro_TMP_FontAsset_o **ppTVar21;
  
  if (g_data_057ae03a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"[NameEffectController] No TMP_Text found on ");
    g_data_057ae03a = '\x01';
  }
  pTVar15 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppTVar1 = &(__this->fields).text;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    pTVar15 = (TMPro_TMP_Text_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this->fields).text = pTVar15;
    il2cpp_runtime_helper_022b4080(ppTVar1);
  }
  pTVar15 = *ppTVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)pTVar15 >> 8),1);
  }
  pUVar16 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_Object_o *)0x0) {
    pSVar17 = UnityEngine_Object__get_name(pUVar16,(MethodInfo *)0x0);
    pSVar17 = System_String__Concat_3ae5ba0("[NameEffectController] No TMP_Text found on ",pSVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae036 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae036 = '\x01';
  }
  pTVar15 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (TMPro_ITextPreprocessor_c *)0x0;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return 0;
  }
  pTVar4 = (__this->fields).text;
  if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
    x = (__this->fields).originalFontAsset;
    pUVar16 = (UnityEngine_Object_o *)(pTVar4->fields).m_TextPreprocessor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    bVar12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x,pUVar16,(MethodInfo *)0x0);
    method_00 = (TMPro_ITextPreprocessor_c *)0x0;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)(__this->fields).runtimeMat,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      pTVar4 = (__this->fields).text;
      pTVar15 = (TMPro_TMP_Text_o *)0x0;
      if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_0432973a;
      x_00 = (UnityEngine_Object_o *)
             (*(pTVar4->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                       (pTVar4,(pTVar4->klass->vtable)._67_get_fontSharedMaterial.method);
      pUVar16 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar14 = UnityEngine_Object__op_Inequality(x_00,pUVar16,(MethodInfo *)0x0);
      uVar14 = uVar14 & 0xff;
    }
    pTVar15 = (TMPro_TMP_Text_o *)(__this->fields).originalFontMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (TMPro_ITextPreprocessor_c *)0x0;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (uVar14 == 0 && ((char)bVar12 == '\0' && (char)bVar13 == '\0')) {
      return 0;
    }
    pTVar4 = (__this->fields).text;
    if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
      pUVar16 = (UnityEngine_Object_o *)(pTVar4->fields).m_TextPreprocessor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (TMPro_ITextPreprocessor_c *)0x0;
      bVar12 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pTVar15 = (__this->fields).text;
      if (pTVar15 != (TMPro_TMP_Text_o *)0x0) {
        if ((char)bVar12 == '\0') {
          method_00 = (TMPro_ITextPreprocessor_c *)
                      (*(pTVar15->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                                (pTVar15,(pTVar15->klass->vtable)._67_get_fontSharedMaterial.method);
        }
        else {
          pTVar5 = (pTVar15->fields).m_TextPreprocessor;
          if (pTVar5 == (TMPro_ITextPreprocessor_o *)0x0) goto label_0432973a;
          method_00 = pTVar5[2].klass;
        }
        pTVar15 = (TMPro_TMP_Text_o *)&(__this->fields).originalFontMaterial;
        (__this->fields).originalFontMaterial = (UnityEngine_Material_o *)method_00;
        il2cpp_runtime_helper_022b4080();
        pTVar4 = (__this->fields).text;
        if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
          ppTVar21 = &(__this->fields).originalFontAsset;
          *ppTVar21 = (TMPro_TMP_FontAsset_o *)(pTVar4->fields).m_TextPreprocessor;
          il2cpp_runtime_helper_022b4080(ppTVar21);
          return 1;
        }
      }
    }
  }
label_0432973a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae037 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_Instantiate_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Could not find shader: TextMeshPro/NameFX_Master");
    il2cpp_runtime_helper_023445d0(&"TextMeshPro/NameFX_Master");
    g_data_057ae037 = '\x01';
  }
  bVar12 = PatreonEffects_NameEffectController__FindText
                     ((PatreonEffects_NameEffectController_o *)pTVar15,(MethodInfo *)method_00);
  if ((char)bVar12 != '\0') {
    *(undefined1 *)((long)&(pTVar15->fields).m_CanvasRenderer + 4) = 0;
    bVar12 = PatreonEffects_NameEffectController__RefreshOriginalMaterial
                       ((PatreonEffects_NameEffectController_o *)pTVar15,(MethodInfo *)method_00);
    if ((char)bVar12 != '\0') {
      (pTVar15->fields).m_RaycastTarget = 0;
      (pTVar15->fields).m_RaycastTargetCache = 0;
      il2cpp_runtime_helper_022b4080(&(pTVar15->fields).m_RaycastTarget);
      *(undefined1 *)&(pTVar15->fields).m_RaycastPadding.fields.x = 0;
    }
  }
  if (*(char *)&(pTVar15->fields).m_RaycastPadding.fields.x != '\0') {
    pUVar16 = *(UnityEngine_Object_o **)&(pTVar15->fields).m_RaycastTarget;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return bVar12;
    }
  }
  pUVar16 = (UnityEngine_Object_o *)(pTVar15->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar16 = *(UnityEngine_Object_o **)&(pTVar15->fields).m_Color.fields.b;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Equality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      pIVar18 = *(Il2CppObject **)&(pTVar15->fields).m_Color.fields.b;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar18 = UnityEngine_Object__Instantiate_object_(pIVar18,MethodInfo_Material_Instantiate_Material);
      pbVar2 = &(pTVar15->fields).m_RaycastTarget;
      *(Il2CppObject **)&(pTVar15->fields).m_RaycastTarget = pIVar18;
      il2cpp_runtime_helper_022b4080(pbVar2);
      pUVar16 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      bVar12 = UnityEngine_Object__op_Equality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        pUVar6 = *(UnityEngine_Material_o **)pbVar2;
        if (pUVar6 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_shader(pUVar6,(UnityEngine_Shader_o *)pUVar16,(MethodInfo *)0x0);
          pUVar6 = (pTVar15->fields).m_Material;
          if (pUVar6 != (UnityEngine_Material_o *)0x0) {
            uVar7._0_4_ = (pTVar15->fields).m_RaycastTarget;
            uVar7._4_4_ = (pTVar15->fields).m_RaycastTargetCache;
            pUVar8 = pUVar6->klass;
            uVar9._0_4_ = pUVar8[3]._2.token;
            uVar9._4_2_ = pUVar8[3]._2.method_count;
            uVar9._6_2_ = pUVar8[3]._2.property_count;
            bVar12 = (**(code **)&pUVar8[3]._2.thread_static_fields_offset)(pUVar6,uVar7,uVar9);
            *(undefined1 *)&(pTVar15->fields).m_RaycastPadding.fields.x = 1;
            return bVar12;
          }
        }
        pMVar20 = (MethodInfo *)0x0;
        bVar12 = il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae045 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateEffectVertexData);
          bVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae045 = '\x01';
        }
        if (*(char *)((long)&pMVar20[1].virtualMethodPointer + 3) != '\0') {
          pIVar10 = pMVar20->klass;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pIVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            pIVar10 = pMVar20->klass;
            pPVar19 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
            method_01 = pMVar20;
            __this_00 = pPVar19;
            System_Action_object____ctor();
            if (pIVar10 == (Il2CppClass *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              cVar3 = *(char *)((long)&(__this_00->fields).popActive + 1);
              *(undefined1 *)((long)&(__this_00->fields).popActive + 1) = 0;
              PatreonEffects_NameEffectController__ClearPopGradient(__this_00,method_01);
              if (cVar3 == '\0') {
                return extraout_EAX_00;
              }
              PatreonEffects_NameEffectController__ClearShaderMaterial(__this_00,method_01);
              return extraout_EAX_01;
            }
            pvVar11 = (pIVar10->_1).image;
            bVar12 = (**(code **)((long)pvVar11 + 0x628))
                               (pIVar10,pPVar19,*(undefined8 *)((long)pvVar11 + 0x630));
          }
        }
        *(undefined1 *)((long)&pMVar20[1].virtualMethodPointer + 3) = 0;
        return bVar12;
      }
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError("Could not find shader: TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  return bVar12;
}


// PatreonEffects.NameEffectController$$ApplyPop
// il2cpp: void PatreonEffects_NameEffectController__ApplyPop (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x4329a50

void PatreonEffects_NameEffectController__ApplyPop
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_Fields UVar4;
  TMPro_TMP_Text_o *pTVar5;
  TMPro_TMP_Text_c *pTVar6;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar7;
  bool_conflict bVar8;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  TMPro_TMP_Text_o *layer;
  TMPro_TMP_Text_o *__this_00;
  float fVar9;
  float fVar10;
  
  layer = (TMPro_TMP_Text_o *)settings;
  if (g_data_057ae03b == '\0') {
    il2cpp_runtime_helper_023445d0(&"PopExtrusion");
    il2cpp_runtime_helper_023445d0(&"PopShadow");
    g_data_057ae03b = '\x01';
  }
  bVar8 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)layer);
  if ((char)bVar8 == '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).outlineActive = 0;
  __this_00 = (TMPro_TMP_Text_o *)__this;
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)layer);
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,&(__this->fields).popExtrusionText,"PopExtrusion",
               (UnityEngine_Color_o)(settings->fields).gradientD.fields,in_RCX);
    method_02 = (MethodInfo *)&(__this->fields).popShadowText;
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,(TMPro_TMP_Text_o **)method_02,"PopShadow",
               (UnityEngine_Color_o)(settings->fields).gradientC.fields,in_RCX);
    fVar10 = (settings->fields).gradientA.fields.g;
    fVar9 = (settings->fields).gradientA.fields.b;
    fVar7 = (settings->fields).gradientA.fields.a;
    (__this->fields).popGradientHooked = (bool_conflict)(settings->fields).gradientA.fields.r;
    (__this->fields).effectVertexDataHooked = (bool_conflict)fVar10;
    (__this->fields).cleared = (bool_conflict)fVar9;
    (__this->fields).popFaceA.fields.r = fVar7;
    fVar10 = (settings->fields).gradientB.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientB.fields.b;
    (__this->fields).popFaceA.fields.g = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceA.fields.b = fVar10;
    *(undefined8 *)&(__this->fields).popFaceA.fields.a = uVar2;
    fVar10 = (settings->fields).gradientB.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientB.fields.b;
    (__this->fields).popFaceB.fields.g = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceB.fields.b = fVar10;
    *(undefined8 *)&(__this->fields).popFaceB.fields.a = uVar2;
    fVar10 = (settings->fields).gradientC.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientC.fields.b;
    (__this->fields).popFaceC.fields.g = (settings->fields).gradientC.fields.r;
    (__this->fields).popFaceC.fields.b = fVar10;
    *(undefined8 *)&(__this->fields).popFaceC.fields.a = uVar2;
    fVar10 = (settings->fields).gradientD.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientD.fields.b;
    (__this->fields).popShadowColor.fields.g = (settings->fields).gradientD.fields.r;
    (__this->fields).popShadowColor.fields.b = fVar10;
    *(undefined8 *)&(__this->fields).popShadowColor.fields.a = uVar2;
    UVar4 = (settings->fields).popShadowOffset.fields;
    (__this->fields).popExtrusionColor.fields.g = UVar4.x;
    (__this->fields).popExtrusionColor.fields.b = UVar4.y;
    *(UnityEngine_Vector2_Fields *)&(__this->fields).popExtrusionColor.fields.a =
         (settings->fields).popExtrusionOffset.fields;
    *(undefined1 *)&(__this->fields).popActive = 1;
    PatreonEffects_NameEffectController__HookPopGradient(__this,method_02);
    if (g_data_057ae03d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae03d = '\x01';
    }
    __this_00 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    layer = (TMPro_TMP_Text_o *)0x0;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pTVar5 = (__this->fields).text;
      if (pTVar5 == (TMPro_TMP_Text_o *)0x0) goto label_04329c6c;
      fVar9 = *(float *)&(pTVar5->fields).m_spriteColor.fields.r / 48.0;
      fVar10 = 0.35;
      if (0.35 <= fVar9) {
        fVar10 = fVar9;
      }
      uVar2 = *(undefined8 *)&(__this->fields).popExtrusionColor.fields.a;
      offset.fields.y = (float)((ulong)uVar2 >> 0x20) * fVar10;
      offset.fields.x = (float)uVar2 * fVar10;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,(__this->fields).popExtrusionText,offset,
                 (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).popShadowColor.fields.g,
                 method_00);
      layer = (__this->fields).popShadowText;
      uVar1 = (__this->fields).popExtrusionColor.fields.g;
      uVar3 = (__this->fields).popExtrusionColor.fields.b;
      offset_00.fields.y = (float)uVar3 * fVar10;
      offset_00.fields.x = (float)uVar1 * fVar10;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,layer,offset_00,
                 (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).popFaceC.fields.g,
                 method_01);
    }
    pTVar5 = (__this->fields).text;
    __this_00 = (TMPro_TMP_Text_o *)0x0;
    if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
      pTVar6 = pTVar5->klass;
      layer = (TMPro_TMP_Text_o *)(pTVar6->vtable)._23_set_color.method;
      (*(pTVar6->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
      pTVar5 = (__this->fields).text;
      __this_00 = (TMPro_TMP_Text_o *)0x0;
      if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar5->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar5,0,0,(pTVar5->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
label_04329c6c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae042 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae042 = '\x01';
  }
  *(undefined1 *)&(__this_00->fields).m_CanvasRenderer = 0;
  PatreonEffects_NameEffectController__ClearPopGradient
            ((PatreonEffects_NameEffectController_o *)__this_00,(MethodInfo *)layer);
  if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PatreonEffects_NameEffectController__DestroyPopLayer
            ((TMPro_TMP_Text_o **)&(__this_00->fields).m_RaycastPadding.fields.z,(MethodInfo *)layer);
  PatreonEffects_NameEffectController__DestroyPopLayer
            ((TMPro_TMP_Text_o **)&(__this_00->fields).m_RectTransform,(MethodInfo *)layer);
  return;
}


// PatreonEffects.NameEffectController$$LateUpdate
// il2cpp: void PatreonEffects_NameEffectController__LateUpdate (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432af20

void PatreonEffects_NameEffectController__LateUpdate
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  void *pvVar6;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  UnityEngine_Material_o *pUVar12;
  UnityEngine_Material_c *pUVar13;
  undefined8 uVar14;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Component_c *pUVar15;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o UVar16;
  bool_conflict bVar17;
  uint uVar18;
  MethodInfo *pMVar19;
  MethodInfo *pMVar20;
  TMPro_TMP_Text_o *pTVar21;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 *puVar22;
  UnityEngine_Object_o *pUVar23;
  float *pfVar24;
  ulong uVar25;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float *extraout_RDX;
  ulong uVar26;
  int32_t iVar27;
  TMPro_TMP_Text_o *__this_02;
  float *pfVar28;
  TMPro_TMP_Text_o *pTVar29;
  undefined8 *puVar30;
  UnityEngine_Component_o *__this_03;
  float *in_R8;
  long lVar31;
  long lVar32;
  ulong uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined4 in_XMM1_Da;
  undefined4 uVar37;
  undefined4 in_XMM1_Db;
  float fVar38;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  UnityEngine_Quaternion_o value;
  UnityEngine_Color_o UVar39;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o value_02;
  void *pvStack_218;
  undefined8 uStack_210;
  void *pvStack_208;
  undefined8 uStack_200;
  Il2CppClass *pIStack_1f8;
  Il2CppClass *pIStack_1f0;
  Il2CppClass *pIStack_1e8;
  Il2CppClass *pIStack_1e0;
  void *pvStack_1d8;
  void *pvStack_1d0;
  UnityEngine_Object_o *pUStack_1c0;
  long *plStack_1b8;
  undefined4 uStack_e0;
  
  if ((char)(__this->fields).popActive != '\0') {
    if (g_data_057ae03d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae03d = '\x01';
    }
    pTVar21 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (TMPro_TMP_Text_o *)0x0;
    bVar17 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar17 == '\0') {
      pTVar29 = (__this->fields).text;
      if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
        fVar34 = *(float *)&(pTVar29->fields).m_spriteColor.fields.r / 48.0;
        fVar38 = 0.35;
        if (0.35 <= fVar34) {
          fVar38 = fVar34;
        }
        uVar35 = *(undefined8 *)&(__this->fields).popExtrusionColor.fields.a;
        UVar16.fields.y = (float)((ulong)uVar35 >> 0x20) * fVar38;
        UVar16.fields.x = (float)uVar35 * fVar38;
        PatreonEffects_NameEffectController__SyncPopLayer
                  (__this,(__this->fields).popExtrusionText,UVar16,
                   (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).popShadowColor.fields.g
                   ,method_00);
        uVar4 = (__this->fields).popExtrusionColor.fields.g;
        uVar7 = (__this->fields).popExtrusionColor.fields.b;
        offset.fields.y = (float)uVar7 * fVar38;
        offset.fields.x = (float)uVar4 * fVar38;
        PatreonEffects_NameEffectController__SyncPopLayer
                  (__this,(__this->fields).popShadowText,offset,
                   (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).popFaceC.fields.g,
                   method_01);
        return;
      }
      uVar35 = il2cpp_runtime_helper_022b2c90();
      uVar37 = in_XMM1_Da;
      if (g_data_057ae040 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae040 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar17 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        pUVar23 = (UnityEngine_Object_o *)(pTVar21->fields).m_Material;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar20 = (MethodInfo *)0x0;
        bVar17 = UnityEngine_Object__op_Equality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar17 == '\0') {
          pTVar29 = (TMPro_TMP_Text_o *)(pTVar21->fields).m_Material;
          if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
            pMVar20 = (pTVar29->klass->vtable)._65_get_text.method;
            pMVar19 = (MethodInfo *)(*(pTVar29->klass->vtable)._65_get_text.methodPtr)();
            if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
              pTVar29 = __this_02;
              (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                        (__this_02,pMVar19,(__this_02->klass->vtable)._66_set_text.method);
              pUVar12 = (pTVar21->fields).m_Material;
              pMVar20 = pMVar19;
              if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                TMPro_TMP_Text__set_font(__this_02,pUVar12[10].monitor,(MethodInfo *)0x0);
                pUVar23 = *(UnityEngine_Object_o **)&(pTVar21->fields).m_Color.fields.b;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar20 = (MethodInfo *)0x0;
                bVar17 = UnityEngine_Object__op_Inequality
                                   (pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar17 == '\0') {
                  pUVar12 = (pTVar21->fields).m_Material;
                  pTVar29 = (TMPro_TMP_Text_o *)0x0;
                  if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0432b374;
                  pUVar13 = pUVar12->klass;
                  uVar14._0_4_ = pUVar13[3]._2.static_fields_size;
                  uVar14._4_4_ = pUVar13[3]._2.thread_static_fields_size;
                  pMVar20 = (MethodInfo *)(**(code **)&pUVar13[3]._2.element_size)(pUVar12,uVar14);
                }
                else {
                  pMVar20 = *(MethodInfo **)&(pTVar21->fields).m_Color.fields.b;
                }
                pTVar29 = __this_02;
                (*(__this_02->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                          (__this_02,pMVar20,(__this_02->klass->vtable)._68_set_fontSharedMaterial.method);
                pUVar12 = (pTVar21->fields).m_Material;
                if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                  pMVar20 = (MethodInfo *)0x0;
                  pTVar29 = __this_02;
                  TMPro_TMP_Text__set_fontSize
                            (__this_02,*(float *)((long)&pUVar12[0x14].klass + 4),(MethodInfo *)0x0);
                  pUVar12 = (pTVar21->fields).m_Material;
                  if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                    uVar18 = *(uint *)&pUVar12[0x19].klass;
                    pMVar20 = (MethodInfo *)(ulong)uVar18;
                    TMPro_TMP_Text__set_fontStyle(__this_02,uVar18,(MethodInfo *)0x0);
                    __this_00 = (TMPro_TMP_Text_o *)(pTVar21->fields).m_Material;
                    pTVar29 = (TMPro_TMP_Text_o *)0x0;
                    if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                      uVar18 = TMPro_TMP_Text__get_alignment(__this_00,(MethodInfo *)0x0);
                      pMVar20 = (MethodInfo *)(ulong)uVar18;
                      pTVar29 = __this_02;
                      TMPro_TMP_Text__set_alignment(__this_02,uVar18,(MethodInfo *)0x0);
                      pUVar12 = (pTVar21->fields).m_Material;
                      if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                        bVar8 = *(byte *)((long)&pUVar12[0x20].klass + 2);
                        pMVar20 = (MethodInfo *)(ulong)bVar8;
                        pTVar29 = __this_02;
                        TMPro_TMP_Text__set_richText(__this_02,(uint)bVar8,(MethodInfo *)0x0);
                        pUVar12 = (pTVar21->fields).m_Material;
                        if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                          TMPro_TMP_Text__set_enableWordWrapping
                                    (__this_02,(uint)*(byte *)&pUVar12[0x1e].monitor,(MethodInfo *)0x0);
                          pMVar20 = (MethodInfo *)0x0;
                          pTVar29 = __this_02;
                          TMPro_TMP_Text__set_overflowMode(__this_02,0,(MethodInfo *)0x0);
                          pUVar12 = (pTVar21->fields).m_Material;
                          if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                            pMVar20 = (MethodInfo *)0x0;
                            pTVar29 = __this_02;
                            TMPro_TMP_Text__set_characterSpacing
                                      (__this_02,*(float *)&pUVar12[0x1c].monitor,(MethodInfo *)0x0);
                            pUVar12 = (pTVar21->fields).m_Material;
                            if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                              pMVar20 = (MethodInfo *)0x0;
                              pTVar29 = __this_02;
                              TMPro_TMP_Text__set_wordSpacing
                                        (__this_02,*(float *)((long)&pUVar12[0x1c].fields.m_CachedPtr + 4),
                                         (MethodInfo *)0x0);
                              pUVar12 = (pTVar21->fields).m_Material;
                              if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                                pMVar20 = (MethodInfo *)0x0;
                                pTVar29 = __this_02;
                                TMPro_TMP_Text__set_lineSpacing
                                          (__this_02,*(float *)&pUVar12[0x1d].klass,(MethodInfo *)0x0);
                                pUVar12 = (pTVar21->fields).m_Material;
                                if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                                  TMPro_TMP_Text__set_paragraphSpacing
                                            (__this_02,*(float *)((long)&pUVar12[0x1d].fields.m_CachedPtr + 4)
                                             ,(MethodInfo *)0x0);
                                  pMVar20 = (__this_02->klass->vtable)._23_set_color.method;
                                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)(in_XMM1_Da,__this_02);
                                  pTVar21 = (TMPro_TMP_Text_o *)(pTVar21->fields).m_Material;
                                  pTVar29 = (TMPro_TMP_Text_o *)0x0;
                                  uVar37 = in_XMM2_Da;
                                  in_XMM1_Db = in_XMM2_Db;
                                  if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
                                    pTVar21 = (TMPro_TMP_Text_o *)
                                              TMPro_TMP_Text__get_rectTransform(pTVar21,(MethodInfo *)0x0);
                                    pMVar20 = (MethodInfo *)0x0;
                                    __this_01 = TMPro_TMP_Text__get_rectTransform(__this_02,(MethodInfo *)0x0)
                                    ;
                                    pTVar29 = __this_02;
                                    uVar37 = in_XMM2_Da;
                                    in_XMM1_Db = in_XMM2_Db;
                                    if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
                                      pMVar20 = (MethodInfo *)0x0;
                                      pTVar29 = pTVar21;
                                      UVar16 = UnityEngine_RectTransform__get_anchorMin
                                                         ((UnityEngine_RectTransform_o *)pTVar21,
                                                          (MethodInfo *)0x0);
                                      uVar37 = in_XMM2_Da;
                                      in_XMM1_Db = in_XMM2_Db;
                                      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_01,UVar16,(MethodInfo *)0x0);
                                        UVar16 = UnityEngine_RectTransform__get_anchorMax
                                                           ((UnityEngine_RectTransform_o *)pTVar21,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_01,UVar16,(MethodInfo *)0x0);
                                        UVar16 = UnityEngine_RectTransform__get_pivot
                                                           ((UnityEngine_RectTransform_o *)pTVar21,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_pivot
                                                  (__this_01,UVar16,(MethodInfo *)0x0);
                                        UVar16 = UnityEngine_RectTransform__get_sizeDelta
                                                           ((UnityEngine_RectTransform_o *)pTVar21,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_sizeDelta
                                                  (__this_01,UVar16,(MethodInfo *)0x0);
                                        UVar40 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                           ((UnityEngine_RectTransform_o *)pTVar21,
                                                            (MethodInfo *)0x0);
                                        value_02.fields.x = UVar40.fields.x + (float)uVar35;
                                        value_02.fields.y = UVar40.fields.y + (float)((ulong)uVar35 >> 0x20);
                                        value_02.fields.z = UVar40.fields.z + 0.0;
                                        UnityEngine_RectTransform__set_anchoredPosition3D
                                                  (__this_01,value_02,(MethodInfo *)0x0);
                                        UVar40 = UnityEngine_Transform__get_localScale
                                                           ((UnityEngine_Transform_o *)pTVar21,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_Transform__set_localScale
                                                  ((UnityEngine_Transform_o *)__this_01,UVar40,
                                                   (MethodInfo *)0x0);
                                        value = UnityEngine_Transform__get_localRotation
                                                          ((UnityEngine_Transform_o *)pTVar21,
                                                           (MethodInfo *)0x0);
                                        UnityEngine_Transform__set_localRotation
                                                  ((UnityEngine_Transform_o *)__this_01,value,
                                                   (MethodInfo *)0x0);
                                        return;
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
label_0432b374:
          il2cpp_runtime_helper_022b2c90();
          if ((pTVar29->fields).m_Material != (UnityEngine_Material_o *)0x0) {
            return;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae03f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
            g_data_057ae03f = '\x01';
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar27 = 0;
          pTVar21 = pTVar29;
          bVar17 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pTVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar17 != '\0') {
            return;
          }
          if (pMVar20 != (MethodInfo *)0x0) {
            pvVar6 = (pMVar20->field8_0x40).genericMethod;
            uVar5 = pMVar20->token;
            fVar38 = *(float *)((long)&pMVar20[1].methodPointer + 4);
            pTVar21 = TypeInfo_ShaderUtilities;
            if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pTVar29,
                         (System_String_o *)(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_Canvas,
                         (MethodInfo *)0x0);
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,
                                  (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X,
                                  (MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Material__EnableKeyword
                          ((UnityEngine_Material_o *)pTVar29,
                           *(System_String_o **)
                            &(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_LastClipRectCanvasSpace.fields,
                           (MethodInfo *)0x0);
              }
              if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar27 = *(int32_t *)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor;
              if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UVar39.fields.b = 1.0;
                UVar39.fields.a = 1.0;
                UVar39.fields.r = 1.0;
                UVar39.fields.g = 1.0;
                UnityEngine_Material__SetColor_4dca510
                          ((UnityEngine_Material_o *)pTVar29,iVar27,UVar39,(MethodInfo *)0x0);
              }
              iVar27 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x34;
              UVar39.fields = *(UnityEngine_Color_Fields *)&pMVar20->field8_0x40;
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetColor_4dca510
                          ((UnityEngine_Material_o *)pTVar29,iVar27,UVar39,(MethodInfo *)0x0);
              }
              iVar27 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ClipTargets + 4);
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar29,iVar27,0.16,(MethodInfo *)0x0);
              }
              iVar27 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar29,iVar27,0.0,(MethodInfo *)0x0);
              }
              iVar27 = *(int32_t *)((long)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor + 4);
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar29,iVar27,0.02,(MethodInfo *)0x0);
              }
              iVar27 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X;
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                fVar38 = fVar38 * 0.45;
                fVar34 = 1.0;
                if (fVar38 <= 1.0) {
                  fVar34 = fVar38;
                }
                value_00.fields.a = (float)(-(uint)(0.0 <= fVar38) & (uint)fVar34);
                value_00.fields.b = (float)uVar5;
                value_00.fields._0_8_ = pvVar6;
                UnityEngine_Material__SetColor_4dca510
                          ((UnityEngine_Material_o *)pTVar29,iVar27,value_00,(MethodInfo *)0x0);
              }
              iVar27 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_Y;
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar29,iVar27,0.0,(MethodInfo *)0x0);
              }
              iVar27 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas + 4);
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar29,iVar27,0.05,(MethodInfo *)0x0);
              }
              iVar27 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas;
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar29,iVar27,0.08,(MethodInfo *)0x0);
              }
              iVar27 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x6c;
              bVar17 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar29,iVar27,(MethodInfo *)0x0);
              if ((char)bVar17 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar29,iVar27,0.72,(MethodInfo *)0x0);
              }
              TMPro_ShaderUtilities__UpdateShaderRatios((UnityEngine_Material_o *)pTVar29,(MethodInfo *)0x0);
              return;
            }
          }
          uVar35 = il2cpp_runtime_helper_022b2c90();
          if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
            bVar17 = UnityEngine_Material__HasProperty
                               ((UnityEngine_Material_o *)pTVar21,iVar27,(MethodInfo *)0x0);
            if ((char)bVar17 != '\0') {
              value_01.fields.a = (float)in_XMM1_Db;
              value_01.fields.b = (float)uVar37;
              value_01.fields.r = (float)(int)uVar35;
              value_01.fields.g = (float)(int)((ulong)uVar35 >> 0x20);
              UnityEngine_Material__SetColor_4dca510
                        ((UnityEngine_Material_o *)pTVar21,iVar27,value_01,(MethodInfo *)0x0);
              return;
            }
            return;
          }
          fVar38 = (float)il2cpp_runtime_helper_022b2c90();
          if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
            bVar17 = UnityEngine_Material__HasProperty
                               ((UnityEngine_Material_o *)pTVar21,iVar27,(MethodInfo *)0x0);
            if ((char)bVar17 != '\0') {
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pTVar21,iVar27,fVar38,(MethodInfo *)0x0);
              return;
            }
            return;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae043 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae043 = '\x01';
          }
          if (*(char *)((long)&(pTVar21->fields).m_CanvasRenderer + 2) != '\0') {
            pUVar23 = (UnityEngine_Object_o *)(pTVar21->fields).m_Material;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar17 = UnityEngine_Object__op_Inequality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar17 != '\0') {
              pUVar12 = (pTVar21->fields).m_Material;
              puVar22 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
              pfVar24 = (float *)0x0;
              puVar30 = puVar22;
              System_Action_object____ctor();
              if (pUVar12 == (UnityEngine_Material_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057ae046 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057ae046 = '\x01';
                }
                pUVar23 = (UnityEngine_Object_o *)*puVar30;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pfVar28 = (float *)0x0;
                bVar17 = UnityEngine_Object__op_Equality
                                   (pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar17 != '\0') {
                  return;
                }
                __this_03 = (UnityEngine_Component_o *)*puVar30;
                if (__this_03 != (UnityEngine_Component_o *)0x0) {
                  pUVar23 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject(__this_03,(MethodInfo *)0x0);
                  *puVar30 = 0;
                  il2cpp_runtime_helper_022b4080(puVar30);
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar17 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if ((char)bVar17 != '\0') {
                    UnityEngine_Object__Destroy_4e01c60(pUVar23,(MethodInfo *)0x0);
                    return;
                  }
                  UnityEngine_Object__DestroyImmediate_4e01e00(pUVar23,(MethodInfo *)0x0);
                  return;
                }
                il2cpp_runtime_helper_022b2c90();
                plStack_1b8 = &TypeInfo_Object;
                pUStack_1c0 = pUVar23;
                if (g_data_057ae049 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                  g_data_057ae049 = '\x01';
                }
                pvStack_1d8 = (void *)0x0;
                pvStack_1d0 = (void *)0x0;
                pIStack_1e8 = (Il2CppClass *)0x0;
                pIStack_1e0 = (Il2CppClass *)0x0;
                pIStack_1f8 = (Il2CppClass *)0x0;
                pIStack_1f0 = (Il2CppClass *)0x0;
                pvStack_208 = (void *)0x0;
                uStack_200 = 0;
                pvStack_218 = (void *)0x0;
                uStack_210 = 0;
                *pfVar28 = INFINITY;
                *extraout_RDX = -INFINITY;
                *pfVar24 = INFINITY;
                *in_R8 = -INFINITY;
                if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if ((__this_03 != (UnityEngine_Component_o *)0x0) && (__this_03[2].monitor != (void *)0x0)) {
                  uVar18 = *(uint *)((long)__this_03[2].monitor + 0x18);
                  if ((int)*(uint *)&__this_03[1].klass <= (int)uVar18) {
                    uVar18 = *(uint *)&__this_03[1].klass;
                  }
                  if (0 < (int)uVar18) {
                    lVar32 = 0x58;
                    uVar33 = 0;
                    pvVar6 = __this_03[2].monitor;
                    do {
                      if (pvVar6 == (void *)0x0) {
                        il2cpp_runtime_helper_022b2c90();
                        return;
                      }
                      if (*(uint *)((long)pvVar6 + 0x18) <= uVar33) goto label_0432bcf8;
                      if ((*(byte *)((long)pvVar6 + lVar32 + 0x13c) & 1) != 0) {
                        uVar9 = *(uint *)((long)pvVar6 + lVar32);
                        lVar31 = (long)(int)uVar9;
                        uVar10 = *(uint *)((long)pvVar6 + lVar32 + 0x14);
                        uVar26 = (ulong)uVar10;
                        if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pvStack_1d8 = (void *)0x0;
                        pvStack_1d0 = (void *)0x0;
                        pIStack_1e8 = (Il2CppClass *)0x0;
                        pIStack_1e0 = (Il2CppClass *)0x0;
                        pIStack_1f8 = (Il2CppClass *)0x0;
                        pIStack_1f0 = (Il2CppClass *)0x0;
                        pvStack_208 = (void *)0x0;
                        uStack_200 = 0;
                        pvStack_218 = (void *)0x0;
                        uStack_210 = 0;
                        if (((-1 < (int)uVar9) &&
                            (pUVar15 = __this_03[4].klass, pUVar15 != (UnityEngine_Component_c *)0x0)) &&
                           (uVar11 = *(uint *)&(pUVar15->_1).namespaze, (int)uVar9 < (int)uVar11)) {
                          if (uVar11 <= uVar9) goto label_0432bcf8;
                          pIVar1 = &(pUVar15->_1).byval_arg + lVar31 * 5;
                          pvStack_218 = pIVar1->data;
                          uStack_210 = *(undefined8 *)&pIVar1->bits;
                          pIVar1 = &(pUVar15->_1).this_arg + lVar31 * 5;
                          pvStack_208 = pIVar1->data;
                          uStack_200 = *(undefined8 *)&pIVar1->bits;
                          ppIVar2 = &(pUVar15->_1).element_class + lVar31 * 10;
                          pIStack_1f8 = *ppIVar2;
                          pIStack_1f0 = ppIVar2[1];
                          ppIVar2 = &(pUVar15->_1).declaringType + lVar31 * 10;
                          pIStack_1e8 = *ppIVar2;
                          pIStack_1e0 = ppIVar2[1];
                          ppvVar3 = &(pUVar15->_1).generic_class + lVar31 * 10;
                          pvStack_1d8 = *ppvVar3;
                          pvStack_1d0 = ppvVar3[1];
                          il2cpp_runtime_helper_022b4080(&pvStack_218,0);
                          if ((pvStack_208 != (void *)0x0) &&
                             ((int)(uVar10 + 3) < (int)*(ulong *)((long)pvStack_208 + 0x18))) {
                            uVar25 = *(ulong *)((long)pvStack_208 + 0x18) & 0xffffffff;
                            if (uVar25 <= uVar26) {
label_0432bcf8:
                              il2cpp_runtime_helper_022b2ca0();
                              return;
                            }
                            uVar35 = *(undefined8 *)((long)pvStack_208 + (long)(int)uVar10 * 0xc + 0x20);
                            fVar34 = (float)uVar35;
                            fVar36 = (float)((ulong)uVar35 >> 0x20);
                            fVar38 = *pfVar28;
                            if (fVar34 <= *pfVar28) {
                              fVar38 = fVar34;
                            }
                            *pfVar28 = fVar38;
                            fVar38 = *extraout_RDX;
                            if (*extraout_RDX <= fVar34) {
                              fVar38 = fVar34;
                            }
                            *extraout_RDX = fVar38;
                            fVar38 = *pfVar24;
                            if (fVar36 <= *pfVar24) {
                              fVar38 = fVar36;
                            }
                            *pfVar24 = fVar38;
                            fVar38 = *in_R8;
                            if (*in_R8 <= fVar36) {
                              fVar38 = fVar36;
                            }
                            *in_R8 = fVar38;
                            if (uVar25 <= uVar26 + 1) goto label_0432bcf8;
                            uVar35 = *(undefined8 *)((long)pvStack_208 + (long)(int)(uVar26 + 1) * 0xc + 0x20)
                            ;
                            fVar34 = (float)uVar35;
                            fVar36 = (float)((ulong)uVar35 >> 0x20);
                            fVar38 = *pfVar28;
                            if (fVar34 <= *pfVar28) {
                              fVar38 = fVar34;
                            }
                            *pfVar28 = fVar38;
                            fVar38 = *extraout_RDX;
                            if (*extraout_RDX <= fVar34) {
                              fVar38 = fVar34;
                            }
                            *extraout_RDX = fVar38;
                            fVar38 = *pfVar24;
                            if (fVar36 <= *pfVar24) {
                              fVar38 = fVar36;
                            }
                            *pfVar24 = fVar38;
                            fVar38 = *in_R8;
                            if (*in_R8 <= fVar36) {
                              fVar38 = fVar36;
                            }
                            *in_R8 = fVar38;
                            if (uVar25 <= uVar26 + 2) goto label_0432bcf8;
                            uVar35 = *(undefined8 *)((long)pvStack_208 + (long)(int)(uVar26 + 2) * 0xc + 0x20)
                            ;
                            fVar34 = (float)uVar35;
                            fVar36 = (float)((ulong)uVar35 >> 0x20);
                            fVar38 = *pfVar28;
                            if (fVar34 <= *pfVar28) {
                              fVar38 = fVar34;
                            }
                            *pfVar28 = fVar38;
                            fVar38 = *extraout_RDX;
                            if (*extraout_RDX <= fVar34) {
                              fVar38 = fVar34;
                            }
                            *extraout_RDX = fVar38;
                            fVar38 = *pfVar24;
                            if (fVar36 <= *pfVar24) {
                              fVar38 = fVar36;
                            }
                            *pfVar24 = fVar38;
                            fVar38 = *in_R8;
                            if (*in_R8 <= fVar36) {
                              fVar38 = fVar36;
                            }
                            *in_R8 = fVar38;
                            if (uVar25 <= uVar26 + 3) goto label_0432bcf8;
                            uVar35 = *(undefined8 *)((long)pvStack_208 + (long)(int)(uVar26 + 3) * 0xc + 0x20)
                            ;
                            fVar34 = (float)uVar35;
                            fVar36 = (float)((ulong)uVar35 >> 0x20);
                            fVar38 = *pfVar28;
                            if (fVar34 <= *pfVar28) {
                              fVar38 = fVar34;
                            }
                            *pfVar28 = fVar38;
                            fVar38 = *extraout_RDX;
                            if (*extraout_RDX <= fVar34) {
                              fVar38 = fVar34;
                            }
                            *extraout_RDX = fVar38;
                            fVar38 = *pfVar24;
                            if (fVar36 <= *pfVar24) {
                              fVar38 = fVar36;
                            }
                            *pfVar24 = fVar38;
                            fVar38 = *in_R8;
                            if (*in_R8 <= fVar36) {
                              fVar38 = fVar36;
                            }
                            *in_R8 = fVar38;
                          }
                        }
                      }
                      uVar33 = uVar33 + 1;
                      lVar32 = lVar32 + 0x178;
                      if (uVar18 == uVar33) {
                        return;
                      }
                      pvVar6 = __this_03[2].monitor;
                    } while( true );
                  }
                }
                return;
              }
              (*(code *)pUVar12->klass[4]._1.castClass)(pUVar12,puVar22,pUVar12->klass[4]._1.declaringType);
            }
          }
          *(undefined1 *)((long)&(pTVar21->fields).m_CanvasRenderer + 2) = 0;
          return;
        }
      }
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$EnsurePopLayer
// il2cpp: void PatreonEffects_NameEffectController__EnsurePopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o** layer, System_String_o* layerName, UnityEngine_Color_o color, const MethodInfo* method);
// 0x432a930

void PatreonEffects_NameEffectController__EnsurePopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o **layer,
               System_String_o *layerName,UnityEngine_Color_o color,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  UnityEngine_UI_RectMask2D_o *pUVar7;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  UnityEngine_Material_o *pUVar15;
  UnityEngine_Material_c *pUVar16;
  void *pvVar17;
  UnityEngine_Component_c *pUVar18;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o UVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  bool_conflict bVar22;
  int32_t iVar23;
  uint uVar24;
  UnityEngine_Transform_o *pUVar25;
  System_Type_array *components;
  System_Type_o *pSVar26;
  long lVar27;
  System_Type_array *__this_00;
  Il2CppObject *pIVar28;
  TMPro_TMP_Text_o *pTVar29;
  PatreonEffects_NameEffectController_o *pPVar30;
  MethodInfo *pMVar31;
  MethodInfo *pMVar32;
  TMPro_TMP_Text_o *pTVar33;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 *puVar34;
  UnityEngine_Object_o *pUVar35;
  float *pfVar36;
  ulong uVar37;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float *extraout_RDX_01;
  ulong uVar38;
  long *plVar39;
  float *pfVar40;
  PatreonEffects_NameEffectController_o *__this_02;
  TMPro_TMP_Text_o *pTVar41;
  undefined8 *puVar42;
  UnityEngine_Component_o *__this_03;
  float *in_R8;
  UnityEngine_Transform_o *unaff_R12;
  long lVar43;
  TMPro_TMP_Text_o **__this_04;
  ulong uVar44;
  float fVar45;
  float extraout_XMM0_Da;
  float fVar46;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar47;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM2_Db;
  UnityEngine_Quaternion_o value;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o value_04;
  UnityEngine_Color_o color_00;
  void *pvStack_2b0;
  undefined8 uStack_2a8;
  void *pvStack_2a0;
  undefined8 uStack_298;
  Il2CppClass *pIStack_290;
  Il2CppClass *pIStack_288;
  Il2CppClass *pIStack_280;
  Il2CppClass *pIStack_278;
  void *pvStack_270;
  void *pvStack_268;
  UnityEngine_Object_o *pUStack_258;
  long *plStack_250;
  TMPro_TMP_Text_o **ppTStack_248;
  UnityEngine_Material_o *pUStack_240;
  undefined8 *puStack_238;
  System_Type_o *pSStack_230;
  undefined8 uStack_228;
  TMPro_TMP_Text_o *pTStack_220;
  long *plStack_218;
  UnityEngine_Material_o *pUStack_210;
  undefined8 *puStack_208;
  TMPro_TMP_Text_o *pTStack_200;
  MethodInfo *pMStack_1f8;
  TMPro_TMP_Text_o *pTStack_1f0;
  undefined4 uStack_1e8;
  float fStack_1e4;
  TMPro_TMP_Text_o *pTStack_1e0;
  System_Type_o *pSStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c0;
  float fStack_1bc;
  TMPro_TMP_Text_o *pTStack_1a8;
  System_Type_o *pSStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  void *pvStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  _union_14 _Stack_158;
  undefined8 uStack_150;
  UnityEngine_Object_o *pUStack_140;
  TMPro_TMP_Text_o *pTStack_138;
  TMPro_TMP_Text_o *pTStack_130;
  System_Type_o *pSStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_f8;
  TMPro_TMP_Text_o *pTStack_e0;
  UnityEngine_Transform_o *pUStack_d8;
  TMPro_TMP_Text_o *pTStack_d0;
  PatreonEffects_NameEffectController_o *pPStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  PatreonEffects_NameEffectController_o *pPStack_a8;
  TMPro_TMP_Text_o *pTStack_a0;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  long lStack_80;
  long *plStack_78;
  System_Type_array *pSStack_70;
  PatreonEffects_NameEffectController_o *pPStack_68;
  System_String_o *pSStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  fVar45 = color.fields.b;
  fVar47 = color.fields.a;
  local_48._8_4_ = in_XMM1_Dc;
  local_48._0_8_ = color.fields._8_8_;
  local_48._12_4_ = in_XMM1_Dd;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = color.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  if (g_data_057ae03c == '\0') {
    pSStack_60 = (System_String_o *)0x432a965;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pSStack_60 = (System_String_o *)0x432a971;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_60 = (System_String_o *)0x432a97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pSStack_60 = (System_String_o *)0x432a989;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_60 = (System_String_o *)0x432a995;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pSStack_60 = (System_String_o *)0x432a9a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_60 = (System_String_o *)0x432a9ad;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_60 = (System_String_o *)0x432a9b9;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pSStack_60 = (System_String_o *)0x432a9c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae03c = '\x01';
  }
  components = (System_Type_array *)*layer;
  plVar39 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_60 = (System_String_o *)0x432a9e9;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_60 = (System_String_o *)0x432a9f5;
  bVar22 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)components,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return;
  }
  pTVar29 = (__this->fields).text;
  if (pTVar29 == (TMPro_TMP_Text_o *)0x0) {
label_0432ad44:
    pSStack_60 = (System_String_o *)0x432ad49;
    il2cpp_runtime_helper_022b2c90();
label_0432ad49:
    pSStack_60 = (System_String_o *)0x432ad4e;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pSStack_60 = (System_String_o *)0x432aa0d;
    pUVar25 = TMPro_TMP_Text__get_transform(pTVar29,(MethodInfo *)0x0);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto label_0432ad44;
    pSStack_60 = (System_String_o *)0x432aa20;
    unaff_R12 = UnityEngine_Transform__get_parent(pUVar25,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStack_60 = (System_String_o *)0x432aa35;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_60 = (System_String_o *)0x432aa41;
    bVar22 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar22 != '\0') {
      return;
    }
    pSStack_60 = (System_String_o *)0x432aa68;
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    plVar39 = (long *)TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pSStack_60 = (System_String_o *)0x432aa91;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_60 = (System_String_o *)0x432aa9b;
    pSVar26 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)plVar39,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_0432ad44;
    plVar39 = (long *)pSVar26;
    if (pSVar26 == (System_Type_o *)0x0) {
label_0432aac4:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar26;
        pSStack_60 = (System_String_o *)0x432aade;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSStack_60 = (System_String_o *)0x432aaef;
        plVar39 = (long *)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((System_Type_o *)plVar39 != (System_Type_o *)0x0) {
          pSStack_60 = (System_String_o *)0x432ab06;
          lVar27 = il2cpp_runtime_helper_023051f0(plVar39);
          if (lVar27 == 0) goto label_0432ad4e;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = (System_Type_o *)plVar39;
          pSStack_60 = (System_String_o *)0x432ab29;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSStack_60 = (System_String_o *)0x432ab3a;
          plVar39 = (long *)System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if ((System_Type_o *)plVar39 != (System_Type_o *)0x0) {
            pSStack_60 = (System_String_o *)0x432ab51;
            lVar27 = il2cpp_runtime_helper_023051f0(plVar39);
            if (lVar27 == 0) goto label_0432ad4e;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = (System_Type_o *)plVar39;
            pSStack_60 = (System_String_o *)0x432ab74;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSStack_60 = (System_String_o *)0x432ab85;
            plVar39 = (long *)System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if ((System_Type_o *)plVar39 != (System_Type_o *)0x0) {
              pSStack_60 = (System_String_o *)0x432ab9c;
              lVar27 = il2cpp_runtime_helper_023051f0(plVar39);
              if (lVar27 == 0) goto label_0432ad4e;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = (System_Type_o *)plVar39;
              pSStack_60 = (System_String_o *)0x432abc2;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,plVar39);
              pSStack_60 = (System_String_o *)0x432abd1;
              plVar39 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              pSStack_60 = (System_String_o *)0x432abe4;
              UnityEngine_GameObject___ctor_4dfc440
                        ((UnityEngine_GameObject_o *)plVar39,layerName,components,(MethodInfo *)0x0);
              if ((UnityEngine_GameObject_o *)plVar39 != (UnityEngine_GameObject_o *)0x0) {
                pSStack_60 = (System_String_o *)0x432abf7;
                pUVar25 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)plVar39,(MethodInfo *)0x0);
                if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                  pSStack_60 = (System_String_o *)0x432ac0f;
                  UnityEngine_Transform__SetParent_4e09e30(pUVar25,unaff_R12,0,(MethodInfo *)0x0);
                  pSStack_60 = (System_String_o *)0x432ac19;
                  __this_00 = (System_Type_array *)
                              UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)plVar39,(MethodInfo *)0x0);
                  pTVar29 = (__this->fields).text;
                  if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
                    pSStack_60 = (System_String_o *)0x432ac30;
                    pUVar25 = TMPro_TMP_Text__get_transform(pTVar29,(MethodInfo *)0x0);
                    components = __this_00;
                    if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                      pSStack_60 = (System_String_o *)0x432ac43;
                      iVar23 = UnityEngine_Transform__GetSiblingIndex(pUVar25,(MethodInfo *)0x0);
                      if (__this_00 != (System_Type_array *)0x0) {
                        pSStack_60 = (System_String_o *)0x432ac58;
                        UnityEngine_Transform__SetSiblingIndex
                                  ((UnityEngine_Transform_o *)__this_00,iVar23,(MethodInfo *)0x0);
                        pSStack_60 = (System_String_o *)0x432ac6a;
                        pIVar28 = UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)plVar39,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        if (pIVar28 != (Il2CppObject *)0x0) {
                          pSStack_60 = (System_String_o *)0x432ac8b;
                          (*pIVar28->klass->vtable[0x1c].methodPtr)
                                    (pIVar28,1,pIVar28->klass->vtable[0x1c].method);
                          pSStack_60 = (System_String_o *)0x432ac9d;
                          pTVar29 = (TMPro_TMP_Text_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)plVar39,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                          *layer = pTVar29;
                          pSStack_60 = (System_String_o *)0x432acac;
                          il2cpp_runtime_helper_022b4080(layer);
                          pTVar29 = *layer;
                          if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
                            pSStack_60 = (System_String_o *)0x432accb;
                            (*(pTVar29->klass->vtable)._25_set_raycastTarget.methodPtr)
                                      (pTVar29,0,(pTVar29->klass->vtable)._25_set_raycastTarget.method);
                            pTVar29 = *layer;
                            if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
                              pSStack_60 = (System_String_o *)0x432aced;
                              (*(pTVar29->klass->vtable)._23_set_color.methodPtr)
                                        (local_58._0_4_,local_48._0_4_,pTVar29,
                                         (pTVar29->klass->vtable)._23_set_color.method);
                              pTVar29 = *layer;
                              pMVar32 = extraout_RDX;
                              if (g_data_057a694c == '\0') {
                                pSStack_60 = (System_String_o *)0x432ad06;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                g_data_057a694c = '\x01';
                                pMVar32 = extraout_RDX_00;
                              }
                              auVar21 = local_48;
                              auVar20 = local_58;
                              color_00.fields.b = (float)local_48._0_4_;
                              color_00.fields.a = (float)local_48._4_4_;
                              color_00.fields.r = (float)local_58._0_4_;
                              color_00.fields.g = (float)local_58._4_4_;
                              local_58 = auVar20;
                              local_48 = auVar21;
                              PatreonEffects_NameEffectController__SyncPopLayer
                                        (__this,pTVar29,
                                         (UnityEngine_Vector2_o)
                                         **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),color_00,
                                         pMVar32);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto label_0432ad44;
            }
          }
        }
      }
      goto label_0432ad49;
    }
    pSStack_60 = (System_String_o *)0x432aabb;
    lVar27 = il2cpp_runtime_helper_023051f0(pSVar26);
    if (lVar27 != 0) goto label_0432aac4;
  }
label_0432ad4e:
  pSStack_60 = (System_String_o *)0x432ad53;
  lVar27 = il2cpp_runtime_helper_0231b270();
  pSStack_60 = (System_String_o *)0x432ad5d;
  il2cpp_runtime_helper_022b2b10();
  pSStack_70 = components;
  pPStack_68 = __this;
  pSStack_60 = layerName;
  if (g_data_057ae041 == '\0') {
    plStack_78 = (long *)0x432ad7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    plStack_78 = (long *)0x432ad89;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
    plStack_78 = (long *)0x432ad95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae041 = '\x01';
  }
  if (*(char *)(lVar27 + 0x62) == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)(lVar27 + 0x20);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_78 = (long *)0x432adbe;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_78 = (long *)0x432adca;
    bVar22 = UnityEngine_Object__op_Equality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar22 == '\0') {
      plVar14 = *(long **)(lVar27 + 0x20);
      plStack_78 = (long *)0x432ade1;
      pPVar30 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      plStack_78 = (long *)0x432adfb;
      __this_02 = pPVar30;
      System_Action_object____ctor();
      if (plVar14 == (long *)0x0) {
        plStack_78 = (long *)0x432ae25;
        il2cpp_runtime_helper_022b2c90();
        lStack_80 = lVar27;
        plStack_78 = plVar14;
        if (g_data_057ae03d == '\0') {
          pTStack_a0 = (TMPro_TMP_Text_o *)0x432ae4f;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae03d = '\x01';
        }
        pTVar29 = (__this_02->fields).text;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pTStack_a0 = (TMPro_TMP_Text_o *)0x432ae72;
          il2cpp_runtime_helper_02337ed0();
        }
        pTStack_a0 = (TMPro_TMP_Text_o *)0x432ae7e;
        pTVar41 = pTVar29;
        bVar22 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pTVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar22 != '\0') {
          return;
        }
        pTVar33 = (__this_02->fields).text;
        if (pTVar33 != (TMPro_TMP_Text_o *)0x0) {
          fVar45 = *(float *)&(pTVar33->fields).m_spriteColor.fields.r / 48.0;
          fStack_98 = 0.35;
          if (0.35 <= fVar45) {
            fStack_98 = fVar45;
          }
          uVar6 = *(undefined8 *)&(__this_02->fields).popExtrusionColor.fields.a;
          uStack_90 = 0;
          pTStack_a0 = (TMPro_TMP_Text_o *)0x432aede;
          UVar19.fields.y = (float)((ulong)uVar6 >> 0x20) * fStack_98;
          UVar19.fields.x = (float)uVar6 * fStack_98;
          fStack_94 = fStack_98;
          PatreonEffects_NameEffectController__SyncPopLayer
                    (__this_02,(__this_02->fields).popExtrusionText,UVar19,
                     (UnityEngine_Color_o)
                     *(UnityEngine_Color_Fields *)&(__this_02->fields).popShadowColor.fields.g,method_00);
          uVar4 = (__this_02->fields).popExtrusionColor.fields.g;
          uVar8 = (__this_02->fields).popExtrusionColor.fields.b;
          offset_01.fields.y = (float)uVar8 * fStack_94;
          offset_01.fields.x = (float)uVar4 * fStack_98;
          PatreonEffects_NameEffectController__SyncPopLayer
                    (__this_02,(__this_02->fields).popShadowText,offset_01,
                     (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this_02->fields).popFaceC.fields.g,
                     method_01);
          return;
        }
        pTStack_a0 = (TMPro_TMP_Text_o *)0x432af12;
        il2cpp_runtime_helper_022b2c90();
        if (*(char *)&(pTVar41->fields).m_CanvasRenderer != '\0') {
          pPStack_a8 = __this_02;
          pTStack_a0 = pTVar29;
          if (g_data_057ae03d == '\0') {
            pPStack_c8 = (PatreonEffects_NameEffectController_o *)0x432af45;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae03d = '\x01';
          }
          pTVar29 = (TMPro_TMP_Text_o *)(pTVar41->fields).m_Material;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pPStack_c8 = (PatreonEffects_NameEffectController_o *)0x432af68;
            il2cpp_runtime_helper_02337ed0();
          }
          __this_04 = (TMPro_TMP_Text_o **)0x0;
          pPStack_c8 = (PatreonEffects_NameEffectController_o *)0x432af74;
          pTVar33 = pTVar29;
          bVar22 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pTVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar22 == '\0') {
            pUVar15 = (pTVar41->fields).m_Material;
            if (pUVar15 != (UnityEngine_Material_o *)0x0) {
              fVar45 = *(float *)((long)&pUVar15[0x14].klass + 4) / 48.0;
              fStack_c0 = 0.35;
              if (0.35 <= fVar45) {
                fStack_c0 = fVar45;
              }
              uVar5 = (pTVar41->fields).m_Maskable;
              uVar9 = (pTVar41->fields).m_IsMaskingGraphic;
              uStack_b8 = 0;
              pPStack_c8 = (PatreonEffects_NameEffectController_o *)0x432afd4;
              offset.fields.y = (float)uVar9 * fStack_c0;
              offset.fields.x = (float)uVar5 * fStack_c0;
              fStack_bc = fStack_c0;
              PatreonEffects_NameEffectController__SyncPopLayer
                        ((PatreonEffects_NameEffectController_o *)pTVar41,
                         (TMPro_TMP_Text_o *)(pTVar41->fields).m_RectTransform,offset,
                         (UnityEngine_Color_o)
                         *(UnityEngine_Color_Fields *)
                          &(pTVar41->fields)._useLegacyMeshGeneration_k__BackingField,method_02);
              pUVar7 = (pTVar41->fields).m_ParentMask;
              offset_00.fields.y = (float)((ulong)pUVar7 >> 0x20) * fStack_bc;
              offset_00.fields.x = SUB84(pUVar7,0) * fStack_c0;
              PatreonEffects_NameEffectController__SyncPopLayer
                        ((PatreonEffects_NameEffectController_o *)pTVar41,
                         *(TMPro_TMP_Text_o **)&(pTVar41->fields).m_RaycastPadding.fields.z,offset_00,
                         (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(pTVar41->fields).m_CachedUvs,
                         method_03);
              return;
            }
            pPStack_c8 = (PatreonEffects_NameEffectController_o *)0x432b005;
            uStack_f8 = il2cpp_runtime_helper_022b2c90();
            fStack_118 = fVar45;
            fStack_114 = fVar47;
            fStack_108 = in_XMM2_Da;
            fStack_104 = in_XMM2_Db;
            pTStack_e0 = pTVar41;
            pUStack_d8 = unaff_R12;
            pTStack_d0 = pTVar29;
            pPStack_c8 = pPVar30;
            if (g_data_057ae040 == '\0') {
              uStack_120 = 0x432b044;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ae040 = '\x01';
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              uStack_120 = 0x432b064;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_120 = 0x432b070;
            bVar22 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar22 == '\0') {
              pUVar35 = (UnityEngine_Object_o *)(pTVar33->fields).m_Material;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                uStack_120 = 0x432b08a;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar32 = (MethodInfo *)0x0;
              uStack_120 = 0x432b096;
              bVar22 = UnityEngine_Object__op_Equality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar22 == '\0') {
                pTVar29 = (TMPro_TMP_Text_o *)(pTVar33->fields).m_Material;
                if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
                  pMVar32 = (pTVar29->klass->vtable)._65_get_text.method;
                  uStack_120 = 0x432b0c3;
                  pMVar31 = (MethodInfo *)(*(pTVar29->klass->vtable)._65_get_text.methodPtr)();
                  if ((TMPro_TMP_Text_o *)__this_04 != (TMPro_TMP_Text_o *)0x0) {
                    uStack_120 = 0x432b0e2;
                    pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                    (*(((TMPro_TMP_Text_o *)__this_04)->klass->vtable)._66_set_text.methodPtr)
                              (__this_04,pMVar31,
                               (((TMPro_TMP_Text_o *)__this_04)->klass->vtable)._66_set_text.method);
                    pUVar15 = (pTVar33->fields).m_Material;
                    pMVar32 = pMVar31;
                    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                      uStack_120 = 0x432b100;
                      TMPro_TMP_Text__set_font
                                ((TMPro_TMP_Text_o *)__this_04,pUVar15[10].monitor,(MethodInfo *)0x0);
                      pUVar35 = *(UnityEngine_Object_o **)&(pTVar33->fields).m_Color.fields.b;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        uStack_120 = 0x432b116;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pMVar32 = (MethodInfo *)0x0;
                      uStack_120 = 0x432b122;
                      bVar22 = UnityEngine_Object__op_Inequality
                                         (pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar22 == '\0') {
                        pUVar15 = (pTVar33->fields).m_Material;
                        pTVar29 = (TMPro_TMP_Text_o *)0x0;
                        if (pUVar15 == (UnityEngine_Material_o *)0x0) goto label_0432b374;
                        pUVar16 = pUVar15->klass;
                        uVar6._0_4_ = pUVar16[3]._2.static_fields_size;
                        uVar6._4_4_ = pUVar16[3]._2.thread_static_fields_size;
                        uStack_120 = 0x432b149;
                        pMVar32 = (MethodInfo *)(**(code **)&pUVar16[3]._2.element_size)(pUVar15,uVar6);
                      }
                      else {
                        pMVar32 = *(MethodInfo **)&(pTVar33->fields).m_Color.fields.b;
                      }
                      uStack_120 = 0x432b15f;
                      pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                      (*(((TMPro_TMP_Text_o *)__this_04)->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                                (__this_04,pMVar32,
                                 (((TMPro_TMP_Text_o *)__this_04)->klass->vtable)._68_set_fontSharedMaterial.
                                 method);
                      pUVar15 = (pTVar33->fields).m_Material;
                      if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                        pMVar32 = (MethodInfo *)0x0;
                        uStack_120 = 0x432b17e;
                        pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                        TMPro_TMP_Text__set_fontSize
                                  ((TMPro_TMP_Text_o *)__this_04,*(float *)((long)&pUVar15[0x14].klass + 4),
                                   (MethodInfo *)0x0);
                        pUVar15 = (pTVar33->fields).m_Material;
                        if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                          uVar24 = *(uint *)&pUVar15[0x19].klass;
                          pMVar32 = (MethodInfo *)(ulong)uVar24;
                          uStack_120 = 0x432b19b;
                          TMPro_TMP_Text__set_fontStyle
                                    ((TMPro_TMP_Text_o *)__this_04,uVar24,(MethodInfo *)0x0);
                          pTVar41 = (TMPro_TMP_Text_o *)(pTVar33->fields).m_Material;
                          pTVar29 = (TMPro_TMP_Text_o *)0x0;
                          if (pTVar41 != (TMPro_TMP_Text_o *)0x0) {
                            uStack_120 = 0x432b1af;
                            uVar24 = TMPro_TMP_Text__get_alignment(pTVar41,(MethodInfo *)0x0);
                            pMVar32 = (MethodInfo *)(ulong)uVar24;
                            uStack_120 = 0x432b1bb;
                            pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                            TMPro_TMP_Text__set_alignment
                                      ((TMPro_TMP_Text_o *)__this_04,uVar24,(MethodInfo *)0x0);
                            pUVar15 = (pTVar33->fields).m_Material;
                            if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                              bVar10 = *(byte *)((long)&pUVar15[0x20].klass + 2);
                              pMVar32 = (MethodInfo *)(ulong)bVar10;
                              uStack_120 = 0x432b1d9;
                              pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                              TMPro_TMP_Text__set_richText
                                        ((TMPro_TMP_Text_o *)__this_04,(uint)bVar10,(MethodInfo *)0x0);
                              pUVar15 = (pTVar33->fields).m_Material;
                              if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                                uStack_120 = 0x432b1f7;
                                TMPro_TMP_Text__set_enableWordWrapping
                                          ((TMPro_TMP_Text_o *)__this_04,(uint)*(byte *)&pUVar15[0x1e].monitor
                                           ,(MethodInfo *)0x0);
                                pMVar32 = (MethodInfo *)0x0;
                                uStack_120 = 0x432b203;
                                pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                                TMPro_TMP_Text__set_overflowMode
                                          ((TMPro_TMP_Text_o *)__this_04,0,(MethodInfo *)0x0);
                                pUVar15 = (pTVar33->fields).m_Material;
                                if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                                  pMVar32 = (MethodInfo *)0x0;
                                  uStack_120 = 0x432b222;
                                  pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                                  TMPro_TMP_Text__set_characterSpacing
                                            ((TMPro_TMP_Text_o *)__this_04,*(float *)&pUVar15[0x1c].monitor,
                                             (MethodInfo *)0x0);
                                  pUVar15 = (pTVar33->fields).m_Material;
                                  if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                                    pMVar32 = (MethodInfo *)0x0;
                                    uStack_120 = 0x432b241;
                                    pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                                    TMPro_TMP_Text__set_wordSpacing
                                              ((TMPro_TMP_Text_o *)__this_04,
                                               *(float *)((long)&pUVar15[0x1c].fields.m_CachedPtr + 4),
                                               (MethodInfo *)0x0);
                                    pUVar15 = (pTVar33->fields).m_Material;
                                    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                                      pMVar32 = (MethodInfo *)0x0;
                                      uStack_120 = 0x432b260;
                                      pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                                      TMPro_TMP_Text__set_lineSpacing
                                                ((TMPro_TMP_Text_o *)__this_04,*(float *)&pUVar15[0x1d].klass,
                                                 (MethodInfo *)0x0);
                                      pUVar15 = (pTVar33->fields).m_Material;
                                      if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                                        uStack_120 = 0x432b27f;
                                        TMPro_TMP_Text__set_paragraphSpacing
                                                  ((TMPro_TMP_Text_o *)__this_04,
                                                   *(float *)((long)&pUVar15[0x1d].fields.m_CachedPtr + 4),
                                                   (MethodInfo *)0x0);
                                        pMVar32 = (((TMPro_TMP_Text_o *)__this_04)->klass->vtable).
                                                  _23_set_color.method;
                                        uStack_120 = 0x432b29b;
                                        (*(((TMPro_TMP_Text_o *)__this_04)->klass->vtable)._23_set_color.
                                          methodPtr)(fStack_118,__this_04);
                                        pTVar41 = (TMPro_TMP_Text_o *)(pTVar33->fields).m_Material;
                                        pTVar29 = (TMPro_TMP_Text_o *)0x0;
                                        fVar45 = fStack_108;
                                        fVar47 = fStack_104;
                                        if (pTVar41 != (TMPro_TMP_Text_o *)0x0) {
                                          uStack_120 = 0x432b2af;
                                          pTVar33 = (TMPro_TMP_Text_o *)
                                                    TMPro_TMP_Text__get_rectTransform
                                                              (pTVar41,(MethodInfo *)0x0);
                                          pMVar32 = (MethodInfo *)0x0;
                                          uStack_120 = 0x432b2bc;
                                          pTVar29 = (TMPro_TMP_Text_o *)__this_04;
                                          __this_01 = TMPro_TMP_Text__get_rectTransform
                                                                ((TMPro_TMP_Text_o *)__this_04,
                                                                 (MethodInfo *)0x0);
                                          fVar45 = fStack_108;
                                          fVar47 = fStack_104;
                                          if (pTVar33 != (TMPro_TMP_Text_o *)0x0) {
                                            pMVar32 = (MethodInfo *)0x0;
                                            uStack_120 = 0x432b2d2;
                                            pTVar29 = pTVar33;
                                            UVar19 = UnityEngine_RectTransform__get_anchorMin
                                                               ((UnityEngine_RectTransform_o *)pTVar33,
                                                                (MethodInfo *)0x0);
                                            pUVar35 = (UnityEngine_Object_o *)0x0;
                                            fVar45 = fStack_108;
                                            fVar47 = fStack_104;
                                            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                              uStack_120 = 0x432b2e5;
                                              UnityEngine_RectTransform__set_anchorMin
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              uStack_120 = 0x432b2ef;
                                              UVar19 = UnityEngine_RectTransform__get_anchorMax
                                                                 ((UnityEngine_RectTransform_o *)pTVar33,
                                                                  (MethodInfo *)0x0);
                                              uStack_120 = 0x432b2f9;
                                              UnityEngine_RectTransform__set_anchorMax
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              uStack_120 = 0x432b303;
                                              UVar19 = UnityEngine_RectTransform__get_pivot
                                                                 ((UnityEngine_RectTransform_o *)pTVar33,
                                                                  (MethodInfo *)0x0);
                                              uStack_120 = 0x432b30d;
                                              UnityEngine_RectTransform__set_pivot
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              uStack_120 = 0x432b317;
                                              UVar19 = UnityEngine_RectTransform__get_sizeDelta
                                                                 ((UnityEngine_RectTransform_o *)pTVar33,
                                                                  (MethodInfo *)0x0);
                                              uStack_120 = 0x432b321;
                                              UnityEngine_RectTransform__set_sizeDelta
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              uStack_120 = 0x432b32b;
                                              UVar48 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                                 ((UnityEngine_RectTransform_o *)pTVar33,
                                                                  (MethodInfo *)0x0);
                                              value_04.fields.x = UVar48.fields.x + (float)uStack_f8;
                                              value_04.fields.y = UVar48.fields.y + uStack_f8._4_4_;
                                              value_04.fields.z = UVar48.fields.z + 0.0;
                                              uStack_120 = 0x432b341;
                                              UnityEngine_RectTransform__set_anchoredPosition3D
                                                        (__this_01,value_04,(MethodInfo *)0x0);
                                              uStack_120 = 0x432b34b;
                                              UVar48 = UnityEngine_Transform__get_localScale
                                                                 ((UnityEngine_Transform_o *)pTVar33,
                                                                  (MethodInfo *)0x0);
                                              uStack_120 = 0x432b355;
                                              UnityEngine_Transform__set_localScale
                                                        ((UnityEngine_Transform_o *)__this_01,UVar48,
                                                         (MethodInfo *)0x0);
                                              uStack_120 = 0x432b35f;
                                              value = UnityEngine_Transform__get_localRotation
                                                                ((UnityEngine_Transform_o *)pTVar33,
                                                                 (MethodInfo *)0x0);
                                              UnityEngine_Transform__set_localRotation
                                                        ((UnityEngine_Transform_o *)__this_01,value,
                                                         (MethodInfo *)0x0);
                                              return;
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
label_0432b374:
                uStack_120 = 0x432b379;
                uStack_120 = il2cpp_runtime_helper_022b2c90();
                if ((pTVar29->fields).m_Material != (UnityEngine_Material_o *)0x0) {
                  return;
                }
                pSStack_128 = (System_Type_o *)0x432b3ad;
                il2cpp_runtime_helper_022b2c90();
                pUStack_140 = pUVar35;
                pTStack_138 = pTVar33;
                pTStack_130 = (TMPro_TMP_Text_o *)__this_04;
                pSStack_128 = (System_Type_o *)plVar39;
                if (g_data_057ae03f == '\0') {
                  pSStack_1a0 = (System_Type_o *)0x432b3d5;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                  pSStack_1a0 = (System_Type_o *)0x432b3e1;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  pSStack_1a0 = (System_Type_o *)0x432b3ed;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
                  g_data_057ae03f = '\x01';
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  pSStack_1a0 = (System_Type_o *)0x432b40c;
                  il2cpp_runtime_helper_02337ed0();
                }
                iVar23 = 0;
                pSStack_1a0 = (System_Type_o *)0x432b418;
                pTVar41 = pTVar29;
                bVar22 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pTVar29,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar22 != '\0') {
                  return;
                }
                if (pMVar32 != (MethodInfo *)0x0) {
                  _Stack_158 = pMVar32->field8_0x40;
                  uStack_150 = 0;
                  uStack_178._0_4_ = pMVar32->token;
                  uStack_178._4_2_ = pMVar32->flags;
                  uStack_178._6_2_ = pMVar32->iflags;
                  uStack_170 = 0;
                  auStack_168 = ZEXT416(*(uint *)((long)&pMVar32[1].methodPointer + 4));
                  __this_04 = &TypeInfo_ShaderUtilities;
                  pTVar41 = TypeInfo_ShaderUtilities;
                  if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                    pSStack_1a0 = (System_Type_o *)0x432b469;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if (pTVar29 != (TMPro_TMP_Text_o *)0x0) {
                    pSStack_1a0 = (System_Type_o *)0x432b48d;
                    UnityEngine_Material__EnableKeyword
                              ((UnityEngine_Material_o *)pTVar29,
                               (System_String_o *)(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_Canvas,
                               (MethodInfo *)0x0);
                    pSStack_1a0 = (System_Type_o *)0x432b4a4;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,
                                        (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X,
                                        (MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                        pSStack_1a0 = (System_Type_o *)0x432b4b9;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSStack_1a0 = (System_Type_o *)0x432b4d4;
                      UnityEngine_Material__EnableKeyword
                                ((UnityEngine_Material_o *)pTVar29,
                                 *(System_String_o **)
                                  &(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_LastClipRectCanvasSpace.
                                   fields,(MethodInfo *)0x0);
                    }
                    if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                      pSStack_1a0 = (System_Type_o *)0x432b4e5;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    iVar23 = *(int32_t *)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor;
                    if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                      pSStack_1a0 = (System_Type_o *)0x432b50a;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSStack_1a0 = (System_Type_o *)0x432b516;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b530;
                      value_00.fields.b = 1.0;
                      value_00.fields.a = 1.0;
                      value_00.fields.r = 1.0;
                      value_00.fields.g = 1.0;
                      UnityEngine_Material__SetColor_4dca510
                                ((UnityEngine_Material_o *)pTVar29,iVar23,value_00,(MethodInfo *)0x0);
                    }
                    iVar23 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x34;
                    pvStack_188 = (pMVar32->field8_0x40).genericMethod;
                    uStack_180 = 0;
                    uStack_198._0_4_ = pMVar32->token;
                    uStack_198._4_2_ = pMVar32->flags;
                    uStack_198._6_2_ = pMVar32->iflags;
                    uStack_190 = 0;
                    pSStack_1a0 = (System_Type_o *)0x432b55e;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b577;
                      value_01.fields.b = (float)(undefined4)uStack_198;
                      value_01.fields.a = (float)uStack_198._4_4_;
                      value_01.fields._0_8_ = pvStack_188;
                      UnityEngine_Material__SetColor_4dca510
                                ((UnityEngine_Material_o *)pTVar29,iVar23,value_01,(MethodInfo *)0x0);
                    }
                    iVar23 = *(int32_t *)
                              ((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ClipTargets + 4);
                    pSStack_1a0 = (System_Type_o *)0x432b590;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b5a8;
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar29,iVar23,0.16,(MethodInfo *)0x0);
                    }
                    iVar23 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
                    pSStack_1a0 = (System_Type_o *)0x432b5c1;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b5d4;
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar29,iVar23,0.0,(MethodInfo *)0x0);
                    }
                    iVar23 = *(int32_t *)((long)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor + 4);
                    pSStack_1a0 = (System_Type_o *)0x432b5ed;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b605;
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar29,iVar23,0.02,(MethodInfo *)0x0);
                    }
                    iVar23 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X;
                    pSStack_1a0 = (System_Type_o *)0x432b61e;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      fVar47 = (float)auStack_168._0_4_ * 0.45;
                      fVar45 = 1.0;
                      if (fVar47 <= 1.0) {
                        fVar45 = fVar47;
                      }
                      pSStack_1a0 = (System_Type_o *)0x432b664;
                      value_02.fields.a = (float)(-(uint)(0.0 <= fVar47) & (uint)fVar45);
                      value_02.fields.b = (float)(undefined4)uStack_178;
                      value_02.fields._0_8_ = _Stack_158.genericMethod;
                      UnityEngine_Material__SetColor_4dca510
                                ((UnityEngine_Material_o *)pTVar29,iVar23,value_02,(MethodInfo *)0x0);
                    }
                    iVar23 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_Y;
                    pSStack_1a0 = (System_Type_o *)0x432b67d;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b690;
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar29,iVar23,0.0,(MethodInfo *)0x0);
                    }
                    iVar23 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas + 4)
                    ;
                    pSStack_1a0 = (System_Type_o *)0x432b6ac;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b6c4;
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar29,iVar23,0.05,(MethodInfo *)0x0);
                    }
                    iVar23 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas;
                    pSStack_1a0 = (System_Type_o *)0x432b6e0;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b6f8;
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar29,iVar23,0.08,(MethodInfo *)0x0);
                    }
                    iVar23 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x6c;
                    pSStack_1a0 = (System_Type_o *)0x432b711;
                    bVar22 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar29,iVar23,(MethodInfo *)0x0);
                    if ((char)bVar22 != '\0') {
                      pSStack_1a0 = (System_Type_o *)0x432b729;
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar29,iVar23,0.72,(MethodInfo *)0x0);
                    }
                    TMPro_ShaderUtilities__UpdateShaderRatios
                              ((UnityEngine_Material_o *)pTVar29,(MethodInfo *)0x0);
                    return;
                  }
                }
                pSStack_1a0 = (System_Type_o *)0x432b742;
                uStack_1d0 = il2cpp_runtime_helper_022b2c90();
                fStack_1c0 = fVar45;
                fStack_1bc = fVar47;
                pTStack_1a8 = pTVar29;
                pSStack_1a0 = (System_Type_o *)plVar39;
                if (pTVar41 != (TMPro_TMP_Text_o *)0x0) {
                  pSStack_1d8 = (System_Type_o *)0x432b770;
                  bVar22 = UnityEngine_Material__HasProperty
                                     ((UnityEngine_Material_o *)pTVar41,iVar23,(MethodInfo *)0x0);
                  if ((char)bVar22 != '\0') {
                    value_03.fields.a = fStack_1bc;
                    value_03.fields.b = fStack_1c0;
                    value_03.fields.r = (float)(undefined4)uStack_1d0;
                    value_03.fields.g = (float)uStack_1d0._4_4_;
                    UnityEngine_Material__SetColor_4dca510
                              ((UnityEngine_Material_o *)pTVar41,iVar23,value_03,(MethodInfo *)0x0);
                    return;
                  }
                  return;
                }
                pSStack_1d8 = (System_Type_o *)0x432b79b;
                uStack_1e8 = il2cpp_runtime_helper_022b2c90();
                pTStack_1e0 = pTVar29;
                pSStack_1d8 = (System_Type_o *)plVar39;
                fStack_1e4 = extraout_XMM0_Da;
                if (pTVar41 != (TMPro_TMP_Text_o *)0x0) {
                  pTStack_1f0 = (TMPro_TMP_Text_o *)0x432b7ba;
                  bVar22 = UnityEngine_Material__HasProperty
                                     ((UnityEngine_Material_o *)pTVar41,iVar23,(MethodInfo *)0x0);
                  if ((char)bVar22 != '\0') {
                    UnityEngine_Material__SetFloat_4dcd3b0
                              ((UnityEngine_Material_o *)pTVar41,iVar23,fStack_1e4,(MethodInfo *)0x0);
                    return;
                  }
                  return;
                }
                pTStack_1f0 = (TMPro_TMP_Text_o *)0x432b7e2;
                il2cpp_runtime_helper_022b2c90();
                pTStack_200 = pTVar29;
                pMStack_1f8 = pMVar32;
                pTStack_1f0 = (TMPro_TMP_Text_o *)__this_04;
                if (g_data_057ae043 == '\0') {
                  puStack_208 = (undefined8 *)0x432b80d;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
                  puStack_208 = (undefined8 *)0x432b819;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
                  puStack_208 = (undefined8 *)0x432b825;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057ae043 = '\x01';
                }
                if (*(char *)((long)&(pTVar41->fields).m_CanvasRenderer + 2) != '\0') {
                  pUVar35 = (UnityEngine_Object_o *)(pTVar41->fields).m_Material;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    puStack_208 = (undefined8 *)0x432b84e;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  puStack_208 = (undefined8 *)0x432b85a;
                  bVar22 = UnityEngine_Object__op_Inequality
                                     (pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar22 != '\0') {
                    pUVar15 = (pTVar41->fields).m_Material;
                    puStack_208 = (undefined8 *)0x432b871;
                    puVar34 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
                    pfVar36 = (float *)0x0;
                    puStack_208 = (undefined8 *)0x432b88b;
                    puVar42 = puVar34;
                    System_Action_object____ctor();
                    if (pUVar15 == (UnityEngine_Material_o *)0x0) {
                      puStack_208 = (undefined8 *)0x432b8b5;
                      uStack_228 = il2cpp_runtime_helper_022b2c90();
                      plStack_218 = &TypeInfo_Object;
                      pTStack_220 = pTVar41;
                      pUStack_210 = pUVar15;
                      puStack_208 = puVar34;
                      if (g_data_057ae046 == '\0') {
                        pSStack_230 = (System_Type_o *)0x432b8e0;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                        pSStack_230 = (System_Type_o *)0x432b8ec;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                        g_data_057ae046 = '\x01';
                      }
                      pUVar35 = (UnityEngine_Object_o *)*puVar42;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        pSStack_230 = (System_Type_o *)0x432b90f;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pfVar40 = (float *)0x0;
                      pSStack_230 = (System_Type_o *)0x432b91b;
                      bVar22 = UnityEngine_Object__op_Equality
                                         (pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar22 != '\0') {
                        return;
                      }
                      __this_03 = (UnityEngine_Component_o *)*puVar42;
                      if (__this_03 != (UnityEngine_Component_o *)0x0) {
                        pSStack_230 = (System_Type_o *)0x432b93a;
                        pUVar35 = (UnityEngine_Object_o *)
                                  UnityEngine_Component__get_gameObject(__this_03,(MethodInfo *)0x0);
                        *puVar42 = 0;
                        pSStack_230 = (System_Type_o *)0x432b94e;
                        il2cpp_runtime_helper_022b4080(puVar42);
                        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                          pSStack_230 = (System_Type_o *)0x432b966;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_230 = (System_Type_o *)0x432b96d;
                        bVar22 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pSStack_230 = (System_Type_o *)0x432b981;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if ((char)bVar22 != '\0') {
                          UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
                          return;
                        }
                        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar35,(MethodInfo *)0x0);
                        return;
                      }
                      pSStack_230 = (System_Type_o *)0x432b9ab;
                      il2cpp_runtime_helper_022b2c90();
                      plStack_250 = &TypeInfo_Object;
                      pUStack_258 = pUVar35;
                      ppTStack_248 = layer;
                      pUStack_240 = pUVar15;
                      puStack_238 = puVar42;
                      pSStack_230 = (System_Type_o *)plVar39;
                      if (g_data_057ae049 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                        g_data_057ae049 = '\x01';
                      }
                      pvStack_270 = (void *)0x0;
                      pvStack_268 = (void *)0x0;
                      pIStack_280 = (Il2CppClass *)0x0;
                      pIStack_278 = (Il2CppClass *)0x0;
                      pIStack_290 = (Il2CppClass *)0x0;
                      pIStack_288 = (Il2CppClass *)0x0;
                      pvStack_2a0 = (void *)0x0;
                      uStack_298 = 0;
                      pvStack_2b0 = (void *)0x0;
                      uStack_2a8 = 0;
                      *pfVar40 = INFINITY;
                      *extraout_RDX_01 = -INFINITY;
                      *pfVar36 = INFINITY;
                      *in_R8 = -INFINITY;
                      if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if ((__this_03 != (UnityEngine_Component_o *)0x0) &&
                         (__this_03[2].monitor != (void *)0x0)) {
                        uVar24 = *(uint *)((long)__this_03[2].monitor + 0x18);
                        if ((int)*(uint *)&__this_03[1].klass <= (int)uVar24) {
                          uVar24 = *(uint *)&__this_03[1].klass;
                        }
                        if (0 < (int)uVar24) {
                          lVar27 = 0x58;
                          uVar44 = 0;
                          pvVar17 = __this_03[2].monitor;
                          do {
                            if (pvVar17 == (void *)0x0) {
                              il2cpp_runtime_helper_022b2c90();
                              return;
                            }
                            if (*(uint *)((long)pvVar17 + 0x18) <= uVar44) goto label_0432bcf8;
                            if ((*(byte *)((long)pvVar17 + lVar27 + 0x13c) & 1) != 0) {
                              uVar11 = *(uint *)((long)pvVar17 + lVar27);
                              lVar43 = (long)(int)uVar11;
                              uVar12 = *(uint *)((long)pvVar17 + lVar27 + 0x14);
                              uVar38 = (ulong)uVar12;
                              if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pvStack_270 = (void *)0x0;
                              pvStack_268 = (void *)0x0;
                              pIStack_280 = (Il2CppClass *)0x0;
                              pIStack_278 = (Il2CppClass *)0x0;
                              pIStack_290 = (Il2CppClass *)0x0;
                              pIStack_288 = (Il2CppClass *)0x0;
                              pvStack_2a0 = (void *)0x0;
                              uStack_298 = 0;
                              pvStack_2b0 = (void *)0x0;
                              uStack_2a8 = 0;
                              if (((-1 < (int)uVar11) &&
                                  (pUVar18 = __this_03[4].klass, pUVar18 != (UnityEngine_Component_c *)0x0))
                                 && (uVar13 = *(uint *)&(pUVar18->_1).namespaze, (int)uVar11 < (int)uVar13)) {
                                if (uVar13 <= uVar11) goto label_0432bcf8;
                                pIVar1 = &(pUVar18->_1).byval_arg + lVar43 * 5;
                                pvStack_2b0 = pIVar1->data;
                                uStack_2a8 = *(undefined8 *)&pIVar1->bits;
                                pIVar1 = &(pUVar18->_1).this_arg + lVar43 * 5;
                                pvStack_2a0 = pIVar1->data;
                                uStack_298 = *(undefined8 *)&pIVar1->bits;
                                ppIVar2 = &(pUVar18->_1).element_class + lVar43 * 10;
                                pIStack_290 = *ppIVar2;
                                pIStack_288 = ppIVar2[1];
                                ppIVar2 = &(pUVar18->_1).declaringType + lVar43 * 10;
                                pIStack_280 = *ppIVar2;
                                pIStack_278 = ppIVar2[1];
                                ppvVar3 = &(pUVar18->_1).generic_class + lVar43 * 10;
                                pvStack_270 = *ppvVar3;
                                pvStack_268 = ppvVar3[1];
                                il2cpp_runtime_helper_022b4080(&pvStack_2b0,0);
                                if ((pvStack_2a0 != (void *)0x0) &&
                                   ((int)(uVar12 + 3) < (int)*(ulong *)((long)pvStack_2a0 + 0x18))) {
                                  uVar37 = *(ulong *)((long)pvStack_2a0 + 0x18) & 0xffffffff;
                                  if (uVar37 <= uVar38) {
label_0432bcf8:
                                    il2cpp_runtime_helper_022b2ca0();
                                    return;
                                  }
                                  uVar6 = *(undefined8 *)((long)pvStack_2a0 + (long)(int)uVar12 * 0xc + 0x20);
                                  fVar47 = (float)uVar6;
                                  fVar46 = (float)((ulong)uVar6 >> 0x20);
                                  fVar45 = *pfVar40;
                                  if (fVar47 <= *pfVar40) {
                                    fVar45 = fVar47;
                                  }
                                  *pfVar40 = fVar45;
                                  fVar45 = *extraout_RDX_01;
                                  if (*extraout_RDX_01 <= fVar47) {
                                    fVar45 = fVar47;
                                  }
                                  *extraout_RDX_01 = fVar45;
                                  fVar45 = *pfVar36;
                                  if (fVar46 <= *pfVar36) {
                                    fVar45 = fVar46;
                                  }
                                  *pfVar36 = fVar45;
                                  fVar45 = *in_R8;
                                  if (*in_R8 <= fVar46) {
                                    fVar45 = fVar46;
                                  }
                                  *in_R8 = fVar45;
                                  if (uVar37 <= uVar38 + 1) goto label_0432bcf8;
                                  uVar6 = *(undefined8 *)
                                           ((long)pvStack_2a0 + (long)(int)(uVar38 + 1) * 0xc + 0x20);
                                  fVar47 = (float)uVar6;
                                  fVar46 = (float)((ulong)uVar6 >> 0x20);
                                  fVar45 = *pfVar40;
                                  if (fVar47 <= *pfVar40) {
                                    fVar45 = fVar47;
                                  }
                                  *pfVar40 = fVar45;
                                  fVar45 = *extraout_RDX_01;
                                  if (*extraout_RDX_01 <= fVar47) {
                                    fVar45 = fVar47;
                                  }
                                  *extraout_RDX_01 = fVar45;
                                  fVar45 = *pfVar36;
                                  if (fVar46 <= *pfVar36) {
                                    fVar45 = fVar46;
                                  }
                                  *pfVar36 = fVar45;
                                  fVar45 = *in_R8;
                                  if (*in_R8 <= fVar46) {
                                    fVar45 = fVar46;
                                  }
                                  *in_R8 = fVar45;
                                  if (uVar37 <= uVar38 + 2) goto label_0432bcf8;
                                  uVar6 = *(undefined8 *)
                                           ((long)pvStack_2a0 + (long)(int)(uVar38 + 2) * 0xc + 0x20);
                                  fVar47 = (float)uVar6;
                                  fVar46 = (float)((ulong)uVar6 >> 0x20);
                                  fVar45 = *pfVar40;
                                  if (fVar47 <= *pfVar40) {
                                    fVar45 = fVar47;
                                  }
                                  *pfVar40 = fVar45;
                                  fVar45 = *extraout_RDX_01;
                                  if (*extraout_RDX_01 <= fVar47) {
                                    fVar45 = fVar47;
                                  }
                                  *extraout_RDX_01 = fVar45;
                                  fVar45 = *pfVar36;
                                  if (fVar46 <= *pfVar36) {
                                    fVar45 = fVar46;
                                  }
                                  *pfVar36 = fVar45;
                                  fVar45 = *in_R8;
                                  if (*in_R8 <= fVar46) {
                                    fVar45 = fVar46;
                                  }
                                  *in_R8 = fVar45;
                                  if (uVar37 <= uVar38 + 3) goto label_0432bcf8;
                                  uVar6 = *(undefined8 *)
                                           ((long)pvStack_2a0 + (long)(int)(uVar38 + 3) * 0xc + 0x20);
                                  fVar47 = (float)uVar6;
                                  fVar46 = (float)((ulong)uVar6 >> 0x20);
                                  fVar45 = *pfVar40;
                                  if (fVar47 <= *pfVar40) {
                                    fVar45 = fVar47;
                                  }
                                  *pfVar40 = fVar45;
                                  fVar45 = *extraout_RDX_01;
                                  if (*extraout_RDX_01 <= fVar47) {
                                    fVar45 = fVar47;
                                  }
                                  *extraout_RDX_01 = fVar45;
                                  fVar45 = *pfVar36;
                                  if (fVar46 <= *pfVar36) {
                                    fVar45 = fVar46;
                                  }
                                  *pfVar36 = fVar45;
                                  fVar45 = *in_R8;
                                  if (*in_R8 <= fVar46) {
                                    fVar45 = fVar46;
                                  }
                                  *in_R8 = fVar45;
                                }
                              }
                            }
                            uVar44 = uVar44 + 1;
                            lVar27 = lVar27 + 0x178;
                            if (uVar24 == uVar44) {
                              return;
                            }
                            pvVar17 = __this_03[2].monitor;
                          } while( true );
                        }
                      }
                      return;
                    }
                    puStack_208 = (undefined8 *)0x432b8a6;
                    (*(code *)pUVar15->klass[4]._1.castClass)
                              (pUVar15,puVar34,pUVar15->klass[4]._1.declaringType);
                  }
                }
                *(undefined1 *)((long)&(pTVar41->fields).m_CanvasRenderer + 2) = 0;
                return;
              }
            }
            return;
          }
        }
        return;
      }
      plStack_78 = (long *)0x432ae16;
      (**(code **)(*plVar14 + 0x618))(plVar14,pPVar30,*(undefined8 *)(*plVar14 + 0x620));
      *(undefined1 *)(lVar27 + 0x62) = 1;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$SyncPopLayers
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayers (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432ae30

void PatreonEffects_NameEffectController__SyncPopLayers
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_UI_RectMask2D_o *pUVar6;
  Il2CppClass *pIVar7;
  Il2CppClass *pIVar8;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  UnityEngine_Material_o *pUVar15;
  UnityEngine_Object_o *x;
  long *plVar16;
  void *pvVar17;
  UnityEngine_Component_c *pUVar18;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o UVar19;
  bool_conflict bVar20;
  uint uVar21;
  UnityEngine_Object_c *pUVar22;
  UnityEngine_Object_c *pUVar23;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 *puVar24;
  UnityEngine_Object_o *pUVar25;
  float *pfVar26;
  ulong uVar27;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float *extraout_RDX;
  ulong uVar28;
  int32_t iVar29;
  TMPro_TMP_Text_o *pTVar30;
  float *pfVar31;
  TMPro_TMP_Text_o *pTVar32;
  undefined8 *puVar33;
  UnityEngine_Component_o *__this_02;
  float *in_R8;
  long lVar34;
  long lVar35;
  ulong uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined4 in_XMM1_Da;
  undefined4 uVar40;
  undefined4 in_XMM1_Db;
  float fVar41;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  UnityEngine_Quaternion_o value;
  UnityEngine_Color_o UVar42;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o value_02;
  void *pvStack_240;
  undefined8 uStack_238;
  void *pvStack_230;
  undefined8 uStack_228;
  Il2CppClass *pIStack_220;
  Il2CppClass *pIStack_218;
  Il2CppClass *pIStack_210;
  Il2CppClass *pIStack_208;
  void *pvStack_200;
  void *pvStack_1f8;
  UnityEngine_Object_o *pUStack_1e8;
  long *plStack_1e0;
  undefined4 uStack_108;
  
  if (g_data_057ae03d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae03d = '\x01';
  }
  pTVar32 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar20 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar20 != '\0') {
    return;
  }
  pTVar30 = (__this->fields).text;
  if (pTVar30 != (TMPro_TMP_Text_o *)0x0) {
    fVar37 = *(float *)&(pTVar30->fields).m_spriteColor.fields.r / 48.0;
    fVar41 = 0.35;
    if (0.35 <= fVar37) {
      fVar41 = fVar37;
    }
    uVar38 = *(undefined8 *)&(__this->fields).popExtrusionColor.fields.a;
    UVar19.fields.y = (float)((ulong)uVar38 >> 0x20) * fVar41;
    UVar19.fields.x = (float)uVar38 * fVar41;
    PatreonEffects_NameEffectController__SyncPopLayer
              (__this,(__this->fields).popExtrusionText,UVar19,
               (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).popShadowColor.fields.g,
               method_00);
    uVar4 = (__this->fields).popExtrusionColor.fields.g;
    uVar9 = (__this->fields).popExtrusionColor.fields.b;
    offset_01.fields.y = (float)uVar9 * fVar41;
    offset_01.fields.x = (float)uVar4 * fVar41;
    PatreonEffects_NameEffectController__SyncPopLayer
              (__this,(__this->fields).popShadowText,offset_01,
               (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).popFaceC.fields.g,method_01
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(pTVar32->fields).m_CanvasRenderer != '\0') {
    if (g_data_057ae03d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae03d = '\x01';
    }
    pUVar25 = (UnityEngine_Object_o *)(pTVar32->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar30 = (TMPro_TMP_Text_o *)0x0;
    bVar20 = UnityEngine_Object__op_Equality(pUVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar20 == '\0') {
      pUVar15 = (pTVar32->fields).m_Material;
      if (pUVar15 != (UnityEngine_Material_o *)0x0) {
        fVar37 = *(float *)((long)&pUVar15[0x14].klass + 4) / 48.0;
        fVar41 = 0.35;
        if (0.35 <= fVar37) {
          fVar41 = fVar37;
        }
        uVar5 = (pTVar32->fields).m_Maskable;
        uVar10 = (pTVar32->fields).m_IsMaskingGraphic;
        offset.fields.y = (float)uVar10 * fVar41;
        offset.fields.x = (float)uVar5 * fVar41;
        PatreonEffects_NameEffectController__SyncPopLayer
                  ((PatreonEffects_NameEffectController_o *)pTVar32,
                   (TMPro_TMP_Text_o *)(pTVar32->fields).m_RectTransform,offset,
                   (UnityEngine_Color_o)
                   *(UnityEngine_Color_Fields *)&(pTVar32->fields)._useLegacyMeshGeneration_k__BackingField,
                   method_02);
        pUVar6 = (pTVar32->fields).m_ParentMask;
        offset_00.fields.y = (float)((ulong)pUVar6 >> 0x20) * fVar41;
        offset_00.fields.x = SUB84(pUVar6,0) * fVar41;
        PatreonEffects_NameEffectController__SyncPopLayer
                  ((PatreonEffects_NameEffectController_o *)pTVar32,
                   *(TMPro_TMP_Text_o **)&(pTVar32->fields).m_RaycastPadding.fields.z,offset_00,
                   (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(pTVar32->fields).m_CachedUvs,method_03)
        ;
        return;
      }
      uVar38 = il2cpp_runtime_helper_022b2c90();
      uVar40 = in_XMM1_Da;
      if (g_data_057ae040 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae040 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar20 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pTVar30,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar20 == '\0') {
        x = pUVar25[1].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar23 = (UnityEngine_Object_c *)0x0;
        bVar20 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 == '\0') {
          pTVar32 = pUVar25[1].monitor;
          if (pTVar32 != (TMPro_TMP_Text_o *)0x0) {
            pUVar23 = (UnityEngine_Object_c *)(pTVar32->klass->vtable)._65_get_text.method;
            pUVar22 = (UnityEngine_Object_c *)(*(pTVar32->klass->vtable)._65_get_text.methodPtr)();
            if (pTVar30 != (TMPro_TMP_Text_o *)0x0) {
              pTVar32 = pTVar30;
              (*(pTVar30->klass->vtable)._66_set_text.methodPtr)
                        (pTVar30,pUVar22,(pTVar30->klass->vtable)._66_set_text.method);
              pUVar23 = pUVar22;
              if (pUVar25[1].monitor != (void *)0x0) {
                TMPro_TMP_Text__set_font
                          (pTVar30,*(TMPro_TMP_FontAsset_o **)((long)pUVar25[1].monitor + 0xf8),
                           (MethodInfo *)0x0);
                pUVar22 = pUVar25[2].klass;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar23 = (UnityEngine_Object_c *)0x0;
                bVar20 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar22,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar20 == '\0') {
                  plVar16 = pUVar25[1].monitor;
                  pTVar32 = (TMPro_TMP_Text_o *)0x0;
                  if (plVar16 == (long *)0x0) goto label_0432b374;
                  pUVar23 = (UnityEngine_Object_c *)
                            (**(code **)(*plVar16 + 0x568))(plVar16,*(undefined8 *)(*plVar16 + 0x570));
                }
                else {
                  pUVar23 = pUVar25[2].klass;
                }
                pTVar32 = pTVar30;
                (*(pTVar30->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                          (pTVar30,pUVar23,(pTVar30->klass->vtable)._68_set_fontSharedMaterial.method);
                if (pUVar25[1].monitor != (void *)0x0) {
                  pUVar23 = (UnityEngine_Object_c *)0x0;
                  pTVar32 = pTVar30;
                  TMPro_TMP_Text__set_fontSize
                            (pTVar30,*(float *)((long)pUVar25[1].monitor + 0x1e4),(MethodInfo *)0x0);
                  if (pUVar25[1].monitor != (void *)0x0) {
                    uVar21 = *(uint *)((long)pUVar25[1].monitor + 600);
                    pUVar23 = (UnityEngine_Object_c *)(ulong)uVar21;
                    TMPro_TMP_Text__set_fontStyle(pTVar30,uVar21,(MethodInfo *)0x0);
                    pTVar32 = (TMPro_TMP_Text_o *)0x0;
                    if (pUVar25[1].monitor != (TMPro_TMP_Text_o *)0x0) {
                      uVar21 = TMPro_TMP_Text__get_alignment(pUVar25[1].monitor,(MethodInfo *)0x0);
                      pUVar23 = (UnityEngine_Object_c *)(ulong)uVar21;
                      pTVar32 = pTVar30;
                      TMPro_TMP_Text__set_alignment(pTVar30,uVar21,(MethodInfo *)0x0);
                      if (pUVar25[1].monitor != (void *)0x0) {
                        bVar11 = *(byte *)((long)pUVar25[1].monitor + 0x302);
                        pUVar23 = (UnityEngine_Object_c *)(ulong)bVar11;
                        pTVar32 = pTVar30;
                        TMPro_TMP_Text__set_richText(pTVar30,(uint)bVar11,(MethodInfo *)0x0);
                        if (pUVar25[1].monitor != (void *)0x0) {
                          TMPro_TMP_Text__set_enableWordWrapping
                                    (pTVar30,(uint)*(byte *)((long)pUVar25[1].monitor + 0x2d8),
                                     (MethodInfo *)0x0);
                          pUVar23 = (UnityEngine_Object_c *)0x0;
                          pTVar32 = pTVar30;
                          TMPro_TMP_Text__set_overflowMode(pTVar30,0,(MethodInfo *)0x0);
                          if (pUVar25[1].monitor != (void *)0x0) {
                            pUVar23 = (UnityEngine_Object_c *)0x0;
                            pTVar32 = pTVar30;
                            TMPro_TMP_Text__set_characterSpacing
                                      (pTVar30,*(float *)((long)pUVar25[1].monitor + 0x2a8),(MethodInfo *)0x0)
                            ;
                            if (pUVar25[1].monitor != (void *)0x0) {
                              pUVar23 = (UnityEngine_Object_c *)0x0;
                              pTVar32 = pTVar30;
                              TMPro_TMP_Text__set_wordSpacing
                                        (pTVar30,*(float *)((long)pUVar25[1].monitor + 0x2b4),
                                         (MethodInfo *)0x0);
                              if (pUVar25[1].monitor != (void *)0x0) {
                                pUVar23 = (UnityEngine_Object_c *)0x0;
                                pTVar32 = pTVar30;
                                TMPro_TMP_Text__set_lineSpacing
                                          (pTVar30,*(float *)((long)pUVar25[1].monitor + 0x2b8),
                                           (MethodInfo *)0x0);
                                if (pUVar25[1].monitor != (void *)0x0) {
                                  TMPro_TMP_Text__set_paragraphSpacing
                                            (pTVar30,*(float *)((long)pUVar25[1].monitor + 0x2cc),
                                             (MethodInfo *)0x0);
                                  pUVar23 = (UnityEngine_Object_c *)
                                            (pTVar30->klass->vtable)._23_set_color.method;
                                  (*(pTVar30->klass->vtable)._23_set_color.methodPtr)(in_XMM1_Da,pTVar30);
                                  pTVar32 = (TMPro_TMP_Text_o *)0x0;
                                  uVar40 = in_XMM2_Da;
                                  in_XMM1_Db = in_XMM2_Db;
                                  if (pUVar25[1].monitor != (TMPro_TMP_Text_o *)0x0) {
                                    __this_00 = (TMPro_TMP_Text_o *)
                                                TMPro_TMP_Text__get_rectTransform
                                                          (pUVar25[1].monitor,(MethodInfo *)0x0);
                                    pUVar23 = (UnityEngine_Object_c *)0x0;
                                    __this_01 = TMPro_TMP_Text__get_rectTransform(pTVar30,(MethodInfo *)0x0);
                                    pTVar32 = pTVar30;
                                    uVar40 = in_XMM2_Da;
                                    in_XMM1_Db = in_XMM2_Db;
                                    if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                                      pUVar23 = (UnityEngine_Object_c *)0x0;
                                      pTVar32 = __this_00;
                                      UVar19 = UnityEngine_RectTransform__get_anchorMin
                                                         ((UnityEngine_RectTransform_o *)__this_00,
                                                          (MethodInfo *)0x0);
                                      uVar40 = in_XMM2_Da;
                                      in_XMM1_Db = in_XMM2_Db;
                                      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_01,UVar19,(MethodInfo *)0x0);
                                        UVar19 = UnityEngine_RectTransform__get_anchorMax
                                                           ((UnityEngine_RectTransform_o *)__this_00,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_01,UVar19,(MethodInfo *)0x0);
                                        UVar19 = UnityEngine_RectTransform__get_pivot
                                                           ((UnityEngine_RectTransform_o *)__this_00,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_pivot
                                                  (__this_01,UVar19,(MethodInfo *)0x0);
                                        UVar19 = UnityEngine_RectTransform__get_sizeDelta
                                                           ((UnityEngine_RectTransform_o *)__this_00,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_sizeDelta
                                                  (__this_01,UVar19,(MethodInfo *)0x0);
                                        UVar43 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                           ((UnityEngine_RectTransform_o *)__this_00,
                                                            (MethodInfo *)0x0);
                                        value_02.fields.x = UVar43.fields.x + (float)uVar38;
                                        value_02.fields.y = UVar43.fields.y + (float)((ulong)uVar38 >> 0x20);
                                        value_02.fields.z = UVar43.fields.z + 0.0;
                                        UnityEngine_RectTransform__set_anchoredPosition3D
                                                  (__this_01,value_02,(MethodInfo *)0x0);
                                        UVar43 = UnityEngine_Transform__get_localScale
                                                           ((UnityEngine_Transform_o *)__this_00,
                                                            (MethodInfo *)0x0);
                                        UnityEngine_Transform__set_localScale
                                                  ((UnityEngine_Transform_o *)__this_01,UVar43,
                                                   (MethodInfo *)0x0);
                                        value = UnityEngine_Transform__get_localRotation
                                                          ((UnityEngine_Transform_o *)__this_00,
                                                           (MethodInfo *)0x0);
                                        UnityEngine_Transform__set_localRotation
                                                  ((UnityEngine_Transform_o *)__this_01,value,
                                                   (MethodInfo *)0x0);
                                        return;
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
label_0432b374:
          il2cpp_runtime_helper_022b2c90();
          if ((pTVar32->fields).m_Material != (UnityEngine_Material_o *)0x0) {
            return;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae03f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
            g_data_057ae03f = '\x01';
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar29 = 0;
          pTVar30 = pTVar32;
          bVar20 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pTVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar20 != '\0') {
            return;
          }
          if (pUVar23 != (UnityEngine_Object_c *)0x0) {
            pIVar7 = (pUVar23->_1).element_class;
            pIVar8 = (pUVar23->_1).castClass;
            fVar41 = *(float *)((long)&(pUVar23->_1).parent + 4);
            pTVar30 = TypeInfo_ShaderUtilities;
            if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (pTVar32 != (TMPro_TMP_Text_o *)0x0) {
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pTVar32,
                         (System_String_o *)(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_Canvas,
                         (MethodInfo *)0x0);
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,
                                  (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X,
                                  (MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Material__EnableKeyword
                          ((UnityEngine_Material_o *)pTVar32,
                           *(System_String_o **)
                            &(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_LastClipRectCanvasSpace.fields,
                           (MethodInfo *)0x0);
              }
              if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar29 = *(int32_t *)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor;
              if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UVar42.fields.b = 1.0;
                UVar42.fields.a = 1.0;
                UVar42.fields.r = 1.0;
                UVar42.fields.g = 1.0;
                UnityEngine_Material__SetColor_4dca510
                          ((UnityEngine_Material_o *)pTVar32,iVar29,UVar42,(MethodInfo *)0x0);
              }
              iVar29 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x34;
              UVar42.fields = *(UnityEngine_Color_Fields *)&(pUVar23->_1).element_class;
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetColor_4dca510
                          ((UnityEngine_Material_o *)pTVar32,iVar29,UVar42,(MethodInfo *)0x0);
              }
              iVar29 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ClipTargets + 4);
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar32,iVar29,0.16,(MethodInfo *)0x0);
              }
              iVar29 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar32,iVar29,0.0,(MethodInfo *)0x0);
              }
              iVar29 = *(int32_t *)((long)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor + 4);
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar32,iVar29,0.02,(MethodInfo *)0x0);
              }
              iVar29 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X;
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                fVar41 = fVar41 * 0.45;
                fVar37 = 1.0;
                if (fVar41 <= 1.0) {
                  fVar37 = fVar41;
                }
                uStack_108 = SUB84(pIVar8,0);
                value_00.fields.a = (float)(-(uint)(0.0 <= fVar41) & (uint)fVar37);
                value_00.fields.b = (float)uStack_108;
                value_00.fields._0_8_ = pIVar7;
                UnityEngine_Material__SetColor_4dca510
                          ((UnityEngine_Material_o *)pTVar32,iVar29,value_00,(MethodInfo *)0x0);
              }
              iVar29 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_Y;
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar32,iVar29,0.0,(MethodInfo *)0x0);
              }
              iVar29 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas + 4);
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar32,iVar29,0.05,(MethodInfo *)0x0);
              }
              iVar29 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas;
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar32,iVar29,0.08,(MethodInfo *)0x0);
              }
              iVar29 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x6c;
              bVar20 = UnityEngine_Material__HasProperty
                                 ((UnityEngine_Material_o *)pTVar32,iVar29,(MethodInfo *)0x0);
              if ((char)bVar20 != '\0') {
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pTVar32,iVar29,0.72,(MethodInfo *)0x0);
              }
              TMPro_ShaderUtilities__UpdateShaderRatios((UnityEngine_Material_o *)pTVar32,(MethodInfo *)0x0);
              return;
            }
          }
          uVar38 = il2cpp_runtime_helper_022b2c90();
          if (pTVar30 != (TMPro_TMP_Text_o *)0x0) {
            bVar20 = UnityEngine_Material__HasProperty
                               ((UnityEngine_Material_o *)pTVar30,iVar29,(MethodInfo *)0x0);
            if ((char)bVar20 != '\0') {
              value_01.fields.a = (float)in_XMM1_Db;
              value_01.fields.b = (float)uVar40;
              value_01.fields.r = (float)(int)uVar38;
              value_01.fields.g = (float)(int)((ulong)uVar38 >> 0x20);
              UnityEngine_Material__SetColor_4dca510
                        ((UnityEngine_Material_o *)pTVar30,iVar29,value_01,(MethodInfo *)0x0);
              return;
            }
            return;
          }
          fVar41 = (float)il2cpp_runtime_helper_022b2c90();
          if (pTVar30 != (TMPro_TMP_Text_o *)0x0) {
            bVar20 = UnityEngine_Material__HasProperty
                               ((UnityEngine_Material_o *)pTVar30,iVar29,(MethodInfo *)0x0);
            if ((char)bVar20 != '\0') {
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pTVar30,iVar29,fVar41,(MethodInfo *)0x0);
              return;
            }
            return;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae043 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae043 = '\x01';
          }
          if (*(char *)((long)&(pTVar30->fields).m_CanvasRenderer + 2) != '\0') {
            pUVar25 = (UnityEngine_Object_o *)(pTVar30->fields).m_Material;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar20 = UnityEngine_Object__op_Inequality(pUVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar20 != '\0') {
              pUVar15 = (pTVar30->fields).m_Material;
              puVar24 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
              pfVar26 = (float *)0x0;
              puVar33 = puVar24;
              System_Action_object____ctor();
              if (pUVar15 == (UnityEngine_Material_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057ae046 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057ae046 = '\x01';
                }
                pUVar25 = (UnityEngine_Object_o *)*puVar33;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pfVar31 = (float *)0x0;
                bVar20 = UnityEngine_Object__op_Equality
                                   (pUVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar20 != '\0') {
                  return;
                }
                __this_02 = (UnityEngine_Component_o *)*puVar33;
                if (__this_02 != (UnityEngine_Component_o *)0x0) {
                  pUVar25 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
                  *puVar33 = 0;
                  il2cpp_runtime_helper_022b4080(puVar33);
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar20 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if ((char)bVar20 != '\0') {
                    UnityEngine_Object__Destroy_4e01c60(pUVar25,(MethodInfo *)0x0);
                    return;
                  }
                  UnityEngine_Object__DestroyImmediate_4e01e00(pUVar25,(MethodInfo *)0x0);
                  return;
                }
                il2cpp_runtime_helper_022b2c90();
                plStack_1e0 = &TypeInfo_Object;
                pUStack_1e8 = pUVar25;
                if (g_data_057ae049 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                  g_data_057ae049 = '\x01';
                }
                pvStack_200 = (void *)0x0;
                pvStack_1f8 = (void *)0x0;
                pIStack_210 = (Il2CppClass *)0x0;
                pIStack_208 = (Il2CppClass *)0x0;
                pIStack_220 = (Il2CppClass *)0x0;
                pIStack_218 = (Il2CppClass *)0x0;
                pvStack_230 = (void *)0x0;
                uStack_228 = 0;
                pvStack_240 = (void *)0x0;
                uStack_238 = 0;
                *pfVar31 = INFINITY;
                *extraout_RDX = -INFINITY;
                *pfVar26 = INFINITY;
                *in_R8 = -INFINITY;
                if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if ((__this_02 != (UnityEngine_Component_o *)0x0) && (__this_02[2].monitor != (void *)0x0)) {
                  uVar21 = *(uint *)((long)__this_02[2].monitor + 0x18);
                  if ((int)*(uint *)&__this_02[1].klass <= (int)uVar21) {
                    uVar21 = *(uint *)&__this_02[1].klass;
                  }
                  if (0 < (int)uVar21) {
                    lVar35 = 0x58;
                    uVar36 = 0;
                    pvVar17 = __this_02[2].monitor;
                    do {
                      if (pvVar17 == (void *)0x0) {
                        il2cpp_runtime_helper_022b2c90();
                        return;
                      }
                      if (*(uint *)((long)pvVar17 + 0x18) <= uVar36) goto label_0432bcf8;
                      if ((*(byte *)((long)pvVar17 + lVar35 + 0x13c) & 1) != 0) {
                        uVar12 = *(uint *)((long)pvVar17 + lVar35);
                        lVar34 = (long)(int)uVar12;
                        uVar13 = *(uint *)((long)pvVar17 + lVar35 + 0x14);
                        uVar28 = (ulong)uVar13;
                        if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pvStack_200 = (void *)0x0;
                        pvStack_1f8 = (void *)0x0;
                        pIStack_210 = (Il2CppClass *)0x0;
                        pIStack_208 = (Il2CppClass *)0x0;
                        pIStack_220 = (Il2CppClass *)0x0;
                        pIStack_218 = (Il2CppClass *)0x0;
                        pvStack_230 = (void *)0x0;
                        uStack_228 = 0;
                        pvStack_240 = (void *)0x0;
                        uStack_238 = 0;
                        if (((-1 < (int)uVar12) &&
                            (pUVar18 = __this_02[4].klass, pUVar18 != (UnityEngine_Component_c *)0x0)) &&
                           (uVar14 = *(uint *)&(pUVar18->_1).namespaze, (int)uVar12 < (int)uVar14)) {
                          if (uVar14 <= uVar12) goto label_0432bcf8;
                          pIVar1 = &(pUVar18->_1).byval_arg + lVar34 * 5;
                          pvStack_240 = pIVar1->data;
                          uStack_238 = *(undefined8 *)&pIVar1->bits;
                          pIVar1 = &(pUVar18->_1).this_arg + lVar34 * 5;
                          pvStack_230 = pIVar1->data;
                          uStack_228 = *(undefined8 *)&pIVar1->bits;
                          ppIVar2 = &(pUVar18->_1).element_class + lVar34 * 10;
                          pIStack_220 = *ppIVar2;
                          pIStack_218 = ppIVar2[1];
                          ppIVar2 = &(pUVar18->_1).declaringType + lVar34 * 10;
                          pIStack_210 = *ppIVar2;
                          pIStack_208 = ppIVar2[1];
                          ppvVar3 = &(pUVar18->_1).generic_class + lVar34 * 10;
                          pvStack_200 = *ppvVar3;
                          pvStack_1f8 = ppvVar3[1];
                          il2cpp_runtime_helper_022b4080(&pvStack_240,0);
                          if ((pvStack_230 != (void *)0x0) &&
                             ((int)(uVar13 + 3) < (int)*(ulong *)((long)pvStack_230 + 0x18))) {
                            uVar27 = *(ulong *)((long)pvStack_230 + 0x18) & 0xffffffff;
                            if (uVar27 <= uVar28) {
label_0432bcf8:
                              il2cpp_runtime_helper_022b2ca0();
                              return;
                            }
                            uVar38 = *(undefined8 *)((long)pvStack_230 + (long)(int)uVar13 * 0xc + 0x20);
                            fVar37 = (float)uVar38;
                            fVar39 = (float)((ulong)uVar38 >> 0x20);
                            fVar41 = *pfVar31;
                            if (fVar37 <= *pfVar31) {
                              fVar41 = fVar37;
                            }
                            *pfVar31 = fVar41;
                            fVar41 = *extraout_RDX;
                            if (*extraout_RDX <= fVar37) {
                              fVar41 = fVar37;
                            }
                            *extraout_RDX = fVar41;
                            fVar41 = *pfVar26;
                            if (fVar39 <= *pfVar26) {
                              fVar41 = fVar39;
                            }
                            *pfVar26 = fVar41;
                            fVar41 = *in_R8;
                            if (*in_R8 <= fVar39) {
                              fVar41 = fVar39;
                            }
                            *in_R8 = fVar41;
                            if (uVar27 <= uVar28 + 1) goto label_0432bcf8;
                            uVar38 = *(undefined8 *)((long)pvStack_230 + (long)(int)(uVar28 + 1) * 0xc + 0x20)
                            ;
                            fVar37 = (float)uVar38;
                            fVar39 = (float)((ulong)uVar38 >> 0x20);
                            fVar41 = *pfVar31;
                            if (fVar37 <= *pfVar31) {
                              fVar41 = fVar37;
                            }
                            *pfVar31 = fVar41;
                            fVar41 = *extraout_RDX;
                            if (*extraout_RDX <= fVar37) {
                              fVar41 = fVar37;
                            }
                            *extraout_RDX = fVar41;
                            fVar41 = *pfVar26;
                            if (fVar39 <= *pfVar26) {
                              fVar41 = fVar39;
                            }
                            *pfVar26 = fVar41;
                            fVar41 = *in_R8;
                            if (*in_R8 <= fVar39) {
                              fVar41 = fVar39;
                            }
                            *in_R8 = fVar41;
                            if (uVar27 <= uVar28 + 2) goto label_0432bcf8;
                            uVar38 = *(undefined8 *)((long)pvStack_230 + (long)(int)(uVar28 + 2) * 0xc + 0x20)
                            ;
                            fVar37 = (float)uVar38;
                            fVar39 = (float)((ulong)uVar38 >> 0x20);
                            fVar41 = *pfVar31;
                            if (fVar37 <= *pfVar31) {
                              fVar41 = fVar37;
                            }
                            *pfVar31 = fVar41;
                            fVar41 = *extraout_RDX;
                            if (*extraout_RDX <= fVar37) {
                              fVar41 = fVar37;
                            }
                            *extraout_RDX = fVar41;
                            fVar41 = *pfVar26;
                            if (fVar39 <= *pfVar26) {
                              fVar41 = fVar39;
                            }
                            *pfVar26 = fVar41;
                            fVar41 = *in_R8;
                            if (*in_R8 <= fVar39) {
                              fVar41 = fVar39;
                            }
                            *in_R8 = fVar41;
                            if (uVar27 <= uVar28 + 3) goto label_0432bcf8;
                            uVar38 = *(undefined8 *)((long)pvStack_230 + (long)(int)(uVar28 + 3) * 0xc + 0x20)
                            ;
                            fVar37 = (float)uVar38;
                            fVar39 = (float)((ulong)uVar38 >> 0x20);
                            fVar41 = *pfVar31;
                            if (fVar37 <= *pfVar31) {
                              fVar41 = fVar37;
                            }
                            *pfVar31 = fVar41;
                            fVar41 = *extraout_RDX;
                            if (*extraout_RDX <= fVar37) {
                              fVar41 = fVar37;
                            }
                            *extraout_RDX = fVar41;
                            fVar41 = *pfVar26;
                            if (fVar39 <= *pfVar26) {
                              fVar41 = fVar39;
                            }
                            *pfVar26 = fVar41;
                            fVar41 = *in_R8;
                            if (*in_R8 <= fVar39) {
                              fVar41 = fVar39;
                            }
                            *in_R8 = fVar41;
                          }
                        }
                      }
                      uVar36 = uVar36 + 1;
                      lVar35 = lVar35 + 0x178;
                      if (uVar21 == uVar36) {
                        return;
                      }
                      pvVar17 = __this_02[2].monitor;
                    } while( true );
                  }
                }
                return;
              }
              (*(code *)pUVar15->klass[4]._1.castClass)(pUVar15,puVar24,pUVar15->klass[4]._1.declaringType);
            }
          }
          *(undefined1 *)((long)&(pTVar30->fields).m_CanvasRenderer + 2) = 0;
          return;
        }
      }
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ApplyOutline
// il2cpp: void PatreonEffects_NameEffectController__ApplyOutline (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x4329cf0

void PatreonEffects_NameEffectController__ApplyOutline
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  ulong uVar1;
  TMPro_TMP_MeshInfo_Fields *pTVar2;
  UnityEngine_Vector3_array **ppUVar3;
  UnityEngine_Vector4_array **ppUVar4;
  UnityEngine_Vector2_array **ppUVar5;
  System_Int32_array **ppSVar6;
  float fVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Material_o *material;
  TMPro_TMP_Text_o *pTVar13;
  TMPro_TMP_Text_c *pTVar14;
  Il2CppMethodPointer vtableDispatch;
  TMPro_TMP_CharacterInfo_array *pTVar15;
  TMPro_TMP_MeshInfo_array *pTVar16;
  Il2CppClass *pIVar17;
  void *pvVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  byte bVar23;
  byte bVar24;
  bool_conflict bVar25;
  uint uVar26;
  UnityEngine_Object_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar27;
  System_String_o *value;
  long lVar28;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar29;
  long lVar30;
  PatreonEffects_NameEffectSettings_o *method_00;
  PatreonEffects_NameEffectController_o *textInfo;
  MethodInfo *pMVar31;
  MethodInfo *in_R9;
  UnityEngine_Material_o *unaff_R12;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  long lStack_d0;
  undefined1 auStack_c8 [72];
  UnityEngine_Material_o *pUStack_80;
  PatreonEffects_NameEffectController_o *pPStack_70;
  UnityEngine_Material_o *pUStack_68;
  
  method_00 = settings;
  if (g_data_057ae03e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&" Outline Runtime");
    g_data_057ae03e = '\x01';
  }
  bVar25 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)method_00);
  if ((char)bVar25 != '\0') {
    *(undefined1 *)&(__this->fields).outlineActive = 0;
    PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)method_00);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar29 = (MethodInfo *)0x0;
    bVar25 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 == '\0') {
      pPVar27 = __this;
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,pMVar29);
      if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
        fVar35 = (settings->fields).gradientA.fields.g;
        fVar19 = (settings->fields).gradientA.fields.b;
        fVar34 = (settings->fields).gradientA.fields.a;
        (__this->fields).popGradientHooked = (bool_conflict)(settings->fields).gradientA.fields.r;
        (__this->fields).effectVertexDataHooked = (bool_conflict)fVar35;
        (__this->fields).cleared = (bool_conflict)fVar19;
        (__this->fields).popFaceA.fields.r = fVar34;
        fVar35 = (settings->fields).gradientB.fields.g;
        uVar20 = *(undefined8 *)&(settings->fields).gradientB.fields.b;
        (__this->fields).popFaceA.fields.g = (settings->fields).gradientB.fields.r;
        (__this->fields).popFaceA.fields.b = fVar35;
        *(undefined8 *)&(__this->fields).popFaceA.fields.a = uVar20;
        fVar35 = (settings->fields).gradientC.fields.g;
        fVar19 = (settings->fields).gradientC.fields.b;
        fVar34 = (settings->fields).gradientC.fields.a;
        (__this->fields).popFaceB.fields.g = (settings->fields).gradientC.fields.r;
        (__this->fields).popFaceB.fields.b = fVar35;
        (__this->fields).popFaceB.fields.a = fVar19;
        (__this->fields).popFaceC.fields.r = fVar34;
        *(undefined1 *)((long)&(__this->fields).popActive + 1) = 1;
        unaff_R12 = (__this->fields).originalFontMaterial;
        __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
        UnityEngine_Material___ctor_4dc9e70((UnityEngine_Material_o *)__this_00,unaff_R12,(MethodInfo *)0x0);
        pUVar12 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
        pPVar27 = (PatreonEffects_NameEffectController_o *)0x0;
        if (pUVar12 != (UnityEngine_Object_o *)0x0) {
          pPVar27 = (PatreonEffects_NameEffectController_o *)
                    UnityEngine_Object__get_name(pUVar12,(MethodInfo *)0x0);
          value = System_String__Concat_3ae5ba0((System_String_o *)pPVar27," Outline Runtime",(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_name(__this_00,value,(MethodInfo *)0x0);
            (__this->fields).runtimeMat = (UnityEngine_Material_o *)__this_00;
            il2cpp_runtime_helper_022b4080(&(__this->fields).runtimeMat,__this_00);
            material = (__this->fields).runtimeMat;
            pMVar29 = extraout_RDX;
            if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar29 = extraout_RDX_00;
            }
            PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial(material,settings,pMVar29);
            pTVar13 = (__this->fields).text;
            pPVar27 = (PatreonEffects_NameEffectController_o *)0x0;
            if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_fontMaterial(pTVar13,(__this->fields).runtimeMat,(MethodInfo *)0x0);
              pTVar13 = (__this->fields).text;
              pPVar27 = (PatreonEffects_NameEffectController_o *)0x0;
              if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
                pTVar14 = pTVar13->klass;
                pMVar29 = (pTVar14->vtable)._111_UpdateMeshPadding.method;
                (*(pTVar14->vtable)._111_UpdateMeshPadding.methodPtr)();
                *(undefined1 *)&(__this->fields).initialized = 1;
                PatreonEffects_NameEffectController__HookPopGradient(__this,pMVar29);
                pTVar13 = (__this->fields).text;
                pPVar27 = (PatreonEffects_NameEffectController_o *)0x0;
                if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
                  (*(pTVar13->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
                  pTVar13 = (__this->fields).text;
                  pPVar27 = (PatreonEffects_NameEffectController_o *)0x0;
                  if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
                    vtableDispatch = (pTVar13->klass->vtable)._106_ForceMeshUpdate.methodPtr;
                    (*vtableDispatch)
                              (pTVar13,0,0,(pTVar13->klass->vtable)._106_ForceMeshUpdate.method,
                               vtableDispatch);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae044 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateEffectVertexData);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae044 = '\x01';
      }
      if (*(char *)((long)&(pPVar27->fields).popActive + 3) == '\0') {
        pTVar13 = (pPVar27->fields).text;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar25 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pTVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar25 == '\0') {
          pTVar13 = (pPVar27->fields).text;
          lVar28 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
          textInfo = pPVar27;
          lVar30 = lVar28;
          System_Action_object____ctor();
          if (pTVar13 == (TMPro_TMP_Text_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            pPStack_70 = pPVar27;
            pUStack_68 = unaff_R12;
            if (g_data_057ae048 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ae048 = '\x01';
            }
            fStack_d4 = 0.0;
            fStack_d8 = 0.0;
            fStack_dc = 0.0;
            fStack_e0 = 0.0;
            auStack_c8._64_8_ = (System_Int32_array *)0x0;
            pUStack_80 = (UnityEngine_Material_o *)0x0;
            auStack_c8._48_8_ = (UnityEngine_Vector2_array *)0x0;
            auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
            auStack_c8._32_8_ = (UnityEngine_Vector4_array *)0x0;
            auStack_c8._40_8_ = (UnityEngine_Vector2_array *)0x0;
            auStack_c8._16_8_ = (UnityEngine_Vector3_array *)0x0;
            auStack_c8._24_8_ = (UnityEngine_Vector3_array *)0x0;
            auStack_c8._0_8_ = (UnityEngine_Mesh_o *)0x0;
            auStack_c8._8_8_ = (Il2CppMethodPointer)0x0;
            pUVar12 = *(UnityEngine_Object_o **)(lVar30 + 0x40);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar25 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (((char)bVar25 == '\0') && (textInfo != (PatreonEffects_NameEffectController_o *)0x0)) {
              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar25 = PatreonEffects_NameEffectController__TryLocalBounds
                                 ((TMPro_TMP_TextInfo_o *)textInfo,&fStack_d4,&fStack_d8,&fStack_dc,&fStack_e0
                                  ,in_R9);
              fVar21 = fStack_d4;
              fVar34 = fStack_d8;
              fVar19 = fStack_dc;
              fVar35 = fStack_e0;
              if ((char)bVar25 != '\0') {
                pMVar29 = TypeInfo_NameEffectController;
                if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  pTVar15 = (TMPro_TMP_CharacterInfo_array *)(textInfo->fields).originalFontAsset;
                }
                else {
                  pTVar15 = (TMPro_TMP_CharacterInfo_array *)(textInfo->fields).originalFontAsset;
                }
                if (pTVar15 != (TMPro_TMP_CharacterInfo_array *)0x0) {
                  uVar9 = *(uint *)&(textInfo->fields).m_CancellationTokenSource;
                  uVar26 = (uint)pTVar15->max_length;
                  if ((int)uVar9 <= (int)uVar26) {
                    uVar26 = uVar9;
                  }
                  if (0 < (int)uVar26) {
                    fVar34 = fVar34 - fVar21;
                    fVar35 = fVar35 - fVar19;
                    if (fVar34 <= 0.001) {
                      fVar34 = 0.001;
                    }
                    if (fVar35 <= 0.001) {
                      fVar35 = 0.001;
                    }
                    lVar30 = 0x58;
                    uVar32 = 0;
                    pTVar15 = (TMPro_TMP_CharacterInfo_array *)(textInfo->fields).originalFontAsset;
                    pMVar31 = TypeInfo_NameEffectController;
                    while (TypeInfo_NameEffectController = pMVar31, pTVar15 != (TMPro_TMP_CharacterInfo_array *)0x0) {
                      if ((uint)pTVar15->max_length <= uVar32) goto label_0432a626;
                      if ((*(byte *)((long)&pTVar15->m_Items[0].fields.topRight.fields.y + lVar30) & 1) != 0)
                      {
                        uVar9 = *(uint *)((long)pTVar15->m_Items + lVar30 + -0x20);
                        uVar10 = *(uint *)((long)pTVar15->m_Items + lVar30 + -0xc);
                        uVar33 = (ulong)uVar10;
                        pMVar29 = pMVar31;
                        if (*(int *)((long)&pMVar31[2].parameters + 4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar29 = pMVar31;
                        }
                        auStack_c8._64_8_ = (System_Int32_array *)0x0;
                        pUStack_80 = (UnityEngine_Material_o *)0x0;
                        auStack_c8._48_8_ = (UnityEngine_Vector2_array *)0x0;
                        auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
                        auStack_c8._32_8_ = (UnityEngine_Vector4_array *)0x0;
                        auStack_c8._40_8_ = (UnityEngine_Vector2_array *)0x0;
                        auStack_c8._16_8_ = (UnityEngine_Vector3_array *)0x0;
                        auStack_c8._24_8_ = (UnityEngine_Vector3_array *)0x0;
                        auStack_c8._0_8_ = (UnityEngine_Mesh_o *)0x0;
                        auStack_c8._8_8_ = (Il2CppMethodPointer)0x0;
                        if (((-1 < (int)uVar9) &&
                            (pTVar16 = *(TMPro_TMP_MeshInfo_array **)&(textInfo->fields).popActive,
                            pTVar16 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
                           (uVar11 = (uint)pTVar16->max_length, (int)uVar9 < (int)uVar11)) {
                          if (uVar11 <= uVar9) goto label_0432a626;
                          pTVar2 = &pTVar16->m_Items[(int)uVar9].fields;
                          auStack_c8._0_8_ = pTVar2->mesh;
                          auStack_c8._8_8_ = *(undefined8 *)&pTVar2->vertexCount;
                          ppUVar3 = &pTVar16->m_Items[(int)uVar9].fields.vertices;
                          auStack_c8._16_8_ = *ppUVar3;
                          auStack_c8._24_8_ = ppUVar3[1];
                          ppUVar4 = &pTVar16->m_Items[(int)uVar9].fields.tangents;
                          auStack_c8._32_8_ = *ppUVar4;
                          auStack_c8._40_8_ = ppUVar4[1];
                          ppUVar5 = &pTVar16->m_Items[(int)uVar9].fields.uvs2;
                          auStack_c8._48_8_ = *ppUVar5;
                          auStack_c8._56_8_ = ((_union_13 *)(ppUVar5 + 1))->rgctx_data;
                          ppSVar6 = &pTVar16->m_Items[(int)uVar9].fields.triangles;
                          auStack_c8._64_8_ = *ppSVar6;
                          pUStack_80 = (UnityEngine_Material_o *)ppSVar6[1];
                          pMVar29 = (MethodInfo *)auStack_c8;
                          il2cpp_runtime_helper_022b4080();
                          uVar22 = auStack_c8._56_8_;
                          uVar20 = auStack_c8._16_8_;
                          if (((Il2CppRGCTXData *)auStack_c8._56_8_ != (Il2CppRGCTXData *)0x0) &&
                             ((UnityEngine_Vector3_array *)auStack_c8._16_8_ !=
                              (UnityEngine_Vector3_array *)0x0)) {
                            if (((int)(uVar10 + 3) <
                                 (int)((Il2CppRGCTXData *)(auStack_c8._56_8_ + 0x18))->rgctxDataDummy) &&
                               ((int)(uVar10 + 3) < (int)*(il2cpp_array_size_t *)(auStack_c8._16_8_ + 0x18)))
                            {
                              if ((((ulong)((Il2CppRGCTXData *)(auStack_c8._56_8_ + 0x18))->rgctxDataDummy &
                                   0xffffffff) <= uVar33) ||
                                 ((*(il2cpp_array_size_t *)(auStack_c8._16_8_ + 0x18) & 0xffffffff) <= uVar33)
                                 ) {
label_0432a626:
                                il2cpp_runtime_helper_022b2ca0();
                                return;
                              }
                              lVar28 = (long)(int)uVar10;
                              bVar8 = *(byte *)(auStack_c8._56_8_ + lVar28 * 4 + 0x23);
                              fVar7 = ((UnityEngine_Vector3_o *)(auStack_c8._16_8_ + 0x20))[lVar28].fields.x;
                              pMVar29 = TypeInfo_NameEffectController;
                              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 ((fVar7 - fVar21) / fVar34,pMVar29);
                              if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar33) ||
                                 (bVar24 = PatreonEffects_NameEffectController__ToByte
                                                     ((((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar28].
                                                       fields.y - fVar19) / fVar35,pMVar29),
                                 *(uint *)(uVar22 + 0x18) <= uVar33)) goto label_0432a626;
                              *(uint *)(uVar22 + lVar28 * 4 + 0x20) =
                                   (uint)bVar23 | (uint)bVar8 << 0x18 | (uint)bVar24 << 8 | 0xff0000;
                              uVar1 = uVar33 + 1;
                              if ((*(uint *)(uVar22 + 0x18) <= uVar1) ||
                                 ((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1)) goto label_0432a626;
                              lVar28 = (long)(int)uVar1;
                              bVar8 = *(byte *)(uVar22 + lVar28 * 4 + 0x23);
                              lStack_d0 = lVar28 * 3;
                              fVar7 = ((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar28].fields.x;
                              pMVar29 = TypeInfo_NameEffectController;
                              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 ((fVar7 - fVar21) / fVar34,pMVar29);
                              if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1) ||
                                 (bVar24 = PatreonEffects_NameEffectController__ToByte
                                                     (((&(((UnityEngine_Vector3_o *)(uVar20 + 0x20))->fields).
                                                         y)[lStack_d0] - fVar19) / fVar35,pMVar29),
                                 *(uint *)(uVar22 + 0x18) <= uVar1)) goto label_0432a626;
                              *(uint *)(uVar22 + lVar28 * 4 + 0x20) =
                                   (uint)bVar23 | (uint)bVar8 << 0x18 | (uint)bVar24 << 8 | 0xff0000;
                              uVar1 = uVar33 + 2;
                              if ((*(uint *)(uVar22 + 0x18) <= uVar1) ||
                                 ((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1)) goto label_0432a626;
                              lVar28 = (long)(int)uVar1;
                              bVar8 = *(byte *)(uVar22 + lVar28 * 4 + 0x23);
                              lStack_d0 = lVar28 * 3;
                              fVar7 = ((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar28].fields.x;
                              pMVar29 = TypeInfo_NameEffectController;
                              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 ((fVar7 - fVar21) / fVar34,pMVar29);
                              if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1) ||
                                 (bVar24 = PatreonEffects_NameEffectController__ToByte
                                                     (((&(((UnityEngine_Vector3_o *)(uVar20 + 0x20))->fields).
                                                         y)[lStack_d0] - fVar19) / fVar35,pMVar29),
                                 *(uint *)(uVar22 + 0x18) <= uVar1)) goto label_0432a626;
                              *(uint *)(uVar22 + lVar28 * 4 + 0x20) =
                                   (uint)bVar23 | (uint)bVar8 << 0x18 | (uint)bVar24 << 8 | 0xff0000;
                              uVar33 = uVar33 + 3;
                              if ((*(uint *)(uVar22 + 0x18) <= uVar33) ||
                                 ((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar33)) goto label_0432a626;
                              lVar28 = (long)(int)uVar33;
                              bVar8 = *(byte *)(uVar22 + lVar28 * 4 + 0x23);
                              fVar7 = ((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar28].fields.x;
                              pMVar29 = TypeInfo_NameEffectController;
                              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 ((fVar7 - fVar21) / fVar34,pMVar29);
                              if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar33) ||
                                 (bVar24 = PatreonEffects_NameEffectController__ToByte
                                                     ((((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar28].
                                                       fields.y - fVar19) / fVar35,pMVar29),
                                 *(uint *)(uVar22 + 0x18) <= uVar33)) goto label_0432a626;
                              *(uint *)(uVar22 + lVar28 * 4 + 0x20) =
                                   (uint)bVar23 | (uint)bVar8 << 0x18 | (uint)bVar24 << 8 | 0xff0000;
                            }
                          }
                        }
                      }
                      uVar32 = uVar32 + 1;
                      lVar30 = lVar30 + 0x178;
                      if (uVar26 == uVar32) {
                        return;
                      }
                      pMVar31 = TypeInfo_NameEffectController;
                      pTVar15 = (TMPro_TMP_CharacterInfo_array *)(textInfo->fields).originalFontAsset;
                    }
                    il2cpp_runtime_helper_022b2c90();
                    if (g_data_057ae047 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                      g_data_057ae047 = '\x01';
                    }
                    pIVar17 = pMVar29->klass;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar25 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)pIVar17,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if ((char)bVar25 != '\0') {
                      pUVar12 = (UnityEngine_Object_o *)pMVar29->parameters;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pMVar31 = (MethodInfo *)0x0;
                      bVar25 = UnityEngine_Object__op_Inequality
                                         (pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar25 != '\0') {
                        pIVar17 = pMVar29->klass;
                        if (pIVar17 != (Il2CppClass *)0x0) {
                          pMVar31 = (MethodInfo *)pMVar29->parameters;
                          pvVar18 = (pIVar17->_1).image;
                          (**(code **)((long)pvVar18 + 0x578))
                                    (pIVar17,pMVar31,*(undefined8 *)((long)pvVar18 + 0x580));
                          pIVar17 = pMVar29->klass;
                          if (pIVar17 != (Il2CppClass *)0x0) {
                            pvVar18 = (pIVar17->_1).image;
                            (**(code **)((long)pvVar18 + 0x7d8))
                                      (pIVar17,0,0,*(undefined8 *)((long)pvVar18 + 0x7e0));
                            goto label_0432a71e;
                          }
                        }
                        pPVar27 = (PatreonEffects_NameEffectController_o *)0x0;
                        il2cpp_runtime_helper_022b2c90();
                        PatreonEffects_NameEffectController__Clear(pPVar27,pMVar31);
                        return;
                      }
                    }
label_0432a71e:
                    pUVar12 = (pMVar29->field8_0x40).genericMethod;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar25 = UnityEngine_Object__op_Inequality
                                       (pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar25 != '\0') {
                      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar25 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                      pUVar12 = (pMVar29->field8_0x40).genericMethod;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if ((char)bVar25 == '\0') {
                        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar12,(MethodInfo *)0x0);
                      }
                      else {
                        UnityEngine_Object__Destroy_4e01c60(pUVar12,(MethodInfo *)0x0);
                      }
                    }
                    (pMVar29->field8_0x40).genericMethod = (void *)0x0;
                    il2cpp_runtime_helper_022b4080(&pMVar29->field8_0x40,0);
                    *(undefined1 *)&pMVar29->token = 0;
                    return;
                  }
                }
              }
            }
            return;
          }
          (*(pTVar13->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                    (pTVar13,lVar28,(pTVar13->klass->vtable)._78_add_OnPreRenderText.method);
          *(undefined1 *)((long)&(pPVar27->fields).popActive + 3) = 1;
        }
      }
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ApplyTmpOutlineMaterial
// il2cpp: void PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial (UnityEngine_Material_o* material, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x432b3b0

void PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial
               (UnityEngine_Material_o *material,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  void *pvVar11;
  UnityEngine_Component_c *pUVar12;
  undefined8 uVar13;
  UnityEngine_Color_Fields value;
  bool_conflict bVar14;
  uint uVar15;
  undefined8 *puVar16;
  UnityEngine_Object_o *pUVar17;
  float *pfVar18;
  ulong uVar19;
  float *extraout_RDX;
  ulong uVar20;
  int32_t iVar21;
  void **ppvVar22;
  UnityEngine_Material_o *__this;
  undefined8 *puVar23;
  UnityEngine_Component_o *__this_00;
  float *in_R8;
  long lVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float fVar29;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  void *pvStack_190;
  undefined8 uStack_188;
  void *pvStack_180;
  undefined8 uStack_178;
  Il2CppClass *pIStack_170;
  Il2CppClass *pIStack_168;
  Il2CppClass *pIStack_160;
  Il2CppClass *pIStack_158;
  void *pvStack_150;
  void *pvStack_148;
  UnityEngine_Object_o *pUStack_138;
  undefined8 *puStack_130;
  undefined4 local_58;
  
  if (g_data_057ae03f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
    g_data_057ae03f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar21 = 0;
  __this = material;
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    uVar4 = (settings->fields).gradientD.fields.r;
    uVar6 = (settings->fields).gradientD.fields.g;
    value_01.fields.g = (float)uVar6;
    value_01.fields.r = (float)uVar4;
    uVar5 = (settings->fields).gradientD.fields.b;
    fVar29 = (settings->fields).glow;
    __this = TypeInfo_ShaderUtilities;
    if (*(int *)((long)&TypeInfo_ShaderUtilities[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (material != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__EnableKeyword
                (material,*(System_String_o **)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x110),(MethodInfo *)0x0)
      ;
      bVar14 = UnityEngine_Material__HasProperty
                         (material,*(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x74),(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        if (*(int *)((long)&TypeInfo_ShaderUtilities[9].monitor + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Material__EnableKeyword
                  (material,*(System_String_o **)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0xe0),(MethodInfo *)0x0
                  );
      }
      if (*(int *)((long)&TypeInfo_ShaderUtilities[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 8);
      if (*(float *)((long)TypeInfo_NameEffectController + 0xe4) == 0.0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        value_00.fields.b = 1.0;
        value_00.fields.a = 1.0;
        value_00.fields.r = 1.0;
        value_00.fields.g = 1.0;
        UnityEngine_Material__SetColor_4dca510(material,iVar21,value_00,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x44);
      value = (settings->fields).gradientD.fields;
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetColor_4dca510(material,iVar21,(UnityEngine_Color_o)value,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x3c);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0(material,iVar21,0.16,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x40);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0(material,iVar21,0.0,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0xc);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0(material,iVar21,0.02,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x74);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        fVar29 = fVar29 * 0.45;
        fVar27 = 1.0;
        if (fVar29 <= 1.0) {
          fVar27 = fVar29;
        }
        value_01.fields.a = (float)(-(uint)(0.0 <= fVar29) & (uint)fVar27);
        value_01.fields.b = (float)uVar5;
        UnityEngine_Material__SetColor_4dca510(material,iVar21,value_01,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x78);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0(material,iVar21,0.0,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x84);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0(material,iVar21,0.05,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x80);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0(material,iVar21,0.08,(MethodInfo *)0x0);
      }
      iVar21 = *(int32_t *)(TypeInfo_ShaderUtilities[7].fields.m_CachedPtr + 0x7c);
      bVar14 = UnityEngine_Material__HasProperty(material,iVar21,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0(material,iVar21,0.72,(MethodInfo *)0x0);
      }
      TMPro_ShaderUtilities__UpdateShaderRatios(material,(MethodInfo *)0x0);
      return;
    }
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  if (__this != (UnityEngine_Material_o *)0x0) {
    bVar14 = UnityEngine_Material__HasProperty(__this,iVar21,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      value_02.fields.a = (float)in_XMM1_Db;
      value_02.fields.b = (float)in_XMM1_Da;
      value_02.fields.r = (float)(int)uVar13;
      value_02.fields.g = (float)(int)((ulong)uVar13 >> 0x20);
      UnityEngine_Material__SetColor_4dca510(__this,iVar21,value_02,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  if (__this != (UnityEngine_Material_o *)0x0) {
    bVar14 = UnityEngine_Material__HasProperty(__this,iVar21,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      UnityEngine_Material__SetFloat_4dcd3b0(__this,iVar21,fVar29,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae043 = '\x01';
  }
  if (*(char *)((long)&__this[4].klass + 2) != '\0') {
    pUVar17 = __this[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      plVar10 = __this[1].monitor;
      puVar16 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      pfVar18 = (float *)0x0;
      puVar23 = puVar16;
      System_Action_object____ctor();
      if (plVar10 == (long *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae046 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae046 = '\x01';
        }
        pUVar17 = (UnityEngine_Object_o *)*puVar23;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ppvVar22 = (void **)0x0;
        bVar14 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          return;
        }
        __this_00 = (UnityEngine_Component_o *)*puVar23;
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          pUVar17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0)
          ;
          *puVar23 = 0;
          il2cpp_runtime_helper_022b4080(puVar23);
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar14 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar14 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(pUVar17,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar17,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        puStack_130 = &TypeInfo_Object;
        pUStack_138 = pUVar17;
        if (g_data_057ae049 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
          g_data_057ae049 = '\x01';
        }
        pvStack_150 = (void *)0x0;
        pvStack_148 = (void *)0x0;
        pIStack_160 = (Il2CppClass *)0x0;
        pIStack_158 = (Il2CppClass *)0x0;
        pIStack_170 = (Il2CppClass *)0x0;
        pIStack_168 = (Il2CppClass *)0x0;
        pvStack_180 = (void *)0x0;
        uStack_178 = 0;
        pvStack_190 = (void *)0x0;
        uStack_188 = 0;
        *(float *)ppvVar22 = INFINITY;
        *extraout_RDX = -INFINITY;
        *pfVar18 = INFINITY;
        *in_R8 = -INFINITY;
        if (*(float *)((long)TypeInfo_NameEffectController + 0xe4) == 0.0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((__this_00 != (UnityEngine_Component_o *)0x0) && (__this_00[2].monitor != (void *)0x0)) {
          uVar15 = *(uint *)((long)__this_00[2].monitor + 0x18);
          if ((int)*(uint *)&__this_00[1].klass <= (int)uVar15) {
            uVar15 = *(uint *)&__this_00[1].klass;
          }
          if (0 < (int)uVar15) {
            lVar25 = 0x58;
            uVar26 = 0;
            pvVar11 = __this_00[2].monitor;
            do {
              if (pvVar11 == (void *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                return;
              }
              if (*(uint *)((long)pvVar11 + 0x18) <= uVar26) goto label_0432bcf8;
              if ((*(byte *)((long)pvVar11 + lVar25 + 0x13c) & 1) != 0) {
                uVar7 = *(uint *)((long)pvVar11 + lVar25);
                lVar24 = (long)(int)uVar7;
                uVar8 = *(uint *)((long)pvVar11 + lVar25 + 0x14);
                uVar20 = (ulong)uVar8;
                if (*(float *)((long)TypeInfo_NameEffectController + 0xe4) == 0.0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pvStack_150 = (void *)0x0;
                pvStack_148 = (void *)0x0;
                pIStack_160 = (Il2CppClass *)0x0;
                pIStack_158 = (Il2CppClass *)0x0;
                pIStack_170 = (Il2CppClass *)0x0;
                pIStack_168 = (Il2CppClass *)0x0;
                pvStack_180 = (void *)0x0;
                uStack_178 = 0;
                pvStack_190 = (void *)0x0;
                uStack_188 = 0;
                if (((-1 < (int)uVar7) &&
                    (pUVar12 = __this_00[4].klass, pUVar12 != (UnityEngine_Component_c *)0x0)) &&
                   (uVar9 = *(uint *)&(pUVar12->_1).namespaze, (int)uVar7 < (int)uVar9)) {
                  if (uVar9 <= uVar7) goto label_0432bcf8;
                  pIVar1 = &(pUVar12->_1).byval_arg + lVar24 * 5;
                  pvStack_190 = pIVar1->data;
                  uStack_188 = *(undefined8 *)&pIVar1->bits;
                  pIVar1 = &(pUVar12->_1).this_arg + lVar24 * 5;
                  pvStack_180 = pIVar1->data;
                  uStack_178 = *(undefined8 *)&pIVar1->bits;
                  ppIVar2 = &(pUVar12->_1).element_class + lVar24 * 10;
                  pIStack_170 = *ppIVar2;
                  pIStack_168 = ppIVar2[1];
                  ppIVar2 = &(pUVar12->_1).declaringType + lVar24 * 10;
                  pIStack_160 = *ppIVar2;
                  pIStack_158 = ppIVar2[1];
                  ppvVar3 = &(pUVar12->_1).generic_class + lVar24 * 10;
                  pvStack_150 = *ppvVar3;
                  pvStack_148 = ppvVar3[1];
                  il2cpp_runtime_helper_022b4080(&pvStack_190,0);
                  if ((pvStack_180 != (void *)0x0) &&
                     ((int)(uVar8 + 3) < (int)*(ulong *)((long)pvStack_180 + 0x18))) {
                    uVar19 = *(ulong *)((long)pvStack_180 + 0x18) & 0xffffffff;
                    if (uVar19 <= uVar20) {
label_0432bcf8:
                      il2cpp_runtime_helper_022b2ca0();
                      return;
                    }
                    uVar13 = *(undefined8 *)((long)pvStack_180 + (long)(int)uVar8 * 0xc + 0x20);
                    fVar27 = (float)uVar13;
                    fVar28 = (float)((ulong)uVar13 >> 0x20);
                    fVar29 = *(float *)ppvVar22;
                    if (fVar27 <= *(float *)ppvVar22) {
                      fVar29 = fVar27;
                    }
                    *(float *)ppvVar22 = fVar29;
                    fVar29 = *extraout_RDX;
                    if (*extraout_RDX <= fVar27) {
                      fVar29 = fVar27;
                    }
                    *extraout_RDX = fVar29;
                    fVar29 = *pfVar18;
                    if (fVar28 <= *pfVar18) {
                      fVar29 = fVar28;
                    }
                    *pfVar18 = fVar29;
                    fVar29 = *in_R8;
                    if (*in_R8 <= fVar28) {
                      fVar29 = fVar28;
                    }
                    *in_R8 = fVar29;
                    if (uVar19 <= uVar20 + 1) goto label_0432bcf8;
                    uVar13 = *(undefined8 *)((long)pvStack_180 + (long)(int)(uVar20 + 1) * 0xc + 0x20);
                    fVar27 = (float)uVar13;
                    fVar28 = (float)((ulong)uVar13 >> 0x20);
                    fVar29 = *(float *)ppvVar22;
                    if (fVar27 <= *(float *)ppvVar22) {
                      fVar29 = fVar27;
                    }
                    *(float *)ppvVar22 = fVar29;
                    fVar29 = *extraout_RDX;
                    if (*extraout_RDX <= fVar27) {
                      fVar29 = fVar27;
                    }
                    *extraout_RDX = fVar29;
                    fVar29 = *pfVar18;
                    if (fVar28 <= *pfVar18) {
                      fVar29 = fVar28;
                    }
                    *pfVar18 = fVar29;
                    fVar29 = *in_R8;
                    if (*in_R8 <= fVar28) {
                      fVar29 = fVar28;
                    }
                    *in_R8 = fVar29;
                    if (uVar19 <= uVar20 + 2) goto label_0432bcf8;
                    uVar13 = *(undefined8 *)((long)pvStack_180 + (long)(int)(uVar20 + 2) * 0xc + 0x20);
                    fVar27 = (float)uVar13;
                    fVar28 = (float)((ulong)uVar13 >> 0x20);
                    fVar29 = *(float *)ppvVar22;
                    if (fVar27 <= *(float *)ppvVar22) {
                      fVar29 = fVar27;
                    }
                    *(float *)ppvVar22 = fVar29;
                    fVar29 = *extraout_RDX;
                    if (*extraout_RDX <= fVar27) {
                      fVar29 = fVar27;
                    }
                    *extraout_RDX = fVar29;
                    fVar29 = *pfVar18;
                    if (fVar28 <= *pfVar18) {
                      fVar29 = fVar28;
                    }
                    *pfVar18 = fVar29;
                    fVar29 = *in_R8;
                    if (*in_R8 <= fVar28) {
                      fVar29 = fVar28;
                    }
                    *in_R8 = fVar29;
                    if (uVar19 <= uVar20 + 3) goto label_0432bcf8;
                    uVar13 = *(undefined8 *)((long)pvStack_180 + (long)(int)(uVar20 + 3) * 0xc + 0x20);
                    fVar27 = (float)uVar13;
                    fVar28 = (float)((ulong)uVar13 >> 0x20);
                    fVar29 = *(float *)ppvVar22;
                    if (fVar27 <= *(float *)ppvVar22) {
                      fVar29 = fVar27;
                    }
                    *(float *)ppvVar22 = fVar29;
                    fVar29 = *extraout_RDX;
                    if (*extraout_RDX <= fVar27) {
                      fVar29 = fVar27;
                    }
                    *extraout_RDX = fVar29;
                    fVar29 = *pfVar18;
                    if (fVar28 <= *pfVar18) {
                      fVar29 = fVar28;
                    }
                    *pfVar18 = fVar29;
                    fVar29 = *in_R8;
                    if (*in_R8 <= fVar28) {
                      fVar29 = fVar28;
                    }
                    *in_R8 = fVar29;
                  }
                }
              }
              uVar26 = uVar26 + 1;
              lVar25 = lVar25 + 0x178;
              if (uVar15 == uVar26) {
                return;
              }
              pvVar11 = __this_00[2].monitor;
            } while( true );
          }
        }
        return;
      }
      (**(code **)(*plVar10 + 0x628))(plVar10,puVar16,*(undefined8 *)(*plVar10 + 0x630));
    }
  }
  *(undefined1 *)((long)&__this[4].klass + 2) = 0;
  return;
}


// PatreonEffects.NameEffectController$$SetColorIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetColorIfPresent (UnityEngine_Material_o* material, int32_t propertyId, UnityEngine_Color_o value, const MethodInfo* method);
// 0x432b750

void PatreonEffects_NameEffectController__SetColorIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,UnityEngine_Color_o value,
               MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  void *pvVar9;
  UnityEngine_Component_c *pUVar10;
  bool_conflict bVar11;
  uint uVar12;
  undefined8 *puVar13;
  UnityEngine_Object_o *pUVar14;
  float *pfVar15;
  ulong uVar16;
  float *extraout_RDX;
  ulong uVar17;
  void **ppvVar18;
  undefined8 *puVar19;
  UnityEngine_Component_o *__this;
  float *in_R8;
  long lVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  void *pvStack_118;
  undefined8 uStack_110;
  void *pvStack_108;
  undefined8 uStack_100;
  Il2CppClass *pIStack_f8;
  Il2CppClass *pIStack_f0;
  Il2CppClass *pIStack_e8;
  Il2CppClass *pIStack_e0;
  void *pvStack_d8;
  void *pvStack_d0;
  UnityEngine_Object_o *pUStack_c0;
  undefined8 *puStack_b8;
  
  if (material != (UnityEngine_Material_o *)0x0) {
    bVar11 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      UnityEngine_Material__SetColor_4dca510(material,propertyId,value,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar23 = (float)il2cpp_runtime_helper_022b2c90();
  if (material != (UnityEngine_Material_o *)0x0) {
    bVar11 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      UnityEngine_Material__SetFloat_4dcd3b0(material,propertyId,fVar23,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae043 = '\x01';
  }
  if (*(char *)((long)&material[4].klass + 2) != '\0') {
    pUVar14 = material[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      plVar8 = material[1].monitor;
      puVar13 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      pfVar15 = (float *)0x0;
      puVar19 = puVar13;
      System_Action_object____ctor();
      if (plVar8 == (long *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae046 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae046 = '\x01';
        }
        pUVar14 = (UnityEngine_Object_o *)*puVar19;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ppvVar18 = (void **)0x0;
        bVar11 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return;
        }
        __this = (UnityEngine_Component_o *)*puVar19;
        if (__this != (UnityEngine_Component_o *)0x0) {
          pUVar14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
          *puVar19 = 0;
          il2cpp_runtime_helper_022b4080(puVar19);
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar11 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar14,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        puStack_b8 = &TypeInfo_Object;
        pUStack_c0 = pUVar14;
        if (g_data_057ae049 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
          g_data_057ae049 = '\x01';
        }
        pvStack_d8 = (void *)0x0;
        pvStack_d0 = (void *)0x0;
        pIStack_e8 = (Il2CppClass *)0x0;
        pIStack_e0 = (Il2CppClass *)0x0;
        pIStack_f8 = (Il2CppClass *)0x0;
        pIStack_f0 = (Il2CppClass *)0x0;
        pvStack_108 = (void *)0x0;
        uStack_100 = 0;
        pvStack_118 = (void *)0x0;
        uStack_110 = 0;
        *(float *)ppvVar18 = INFINITY;
        *extraout_RDX = -INFINITY;
        *pfVar15 = INFINITY;
        *in_R8 = -INFINITY;
        if (*(float *)((long)TypeInfo_NameEffectController + 0xe4) == 0.0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((__this != (UnityEngine_Component_o *)0x0) && (__this[2].monitor != (void *)0x0)) {
          uVar12 = *(uint *)((long)__this[2].monitor + 0x18);
          if ((int)*(uint *)&__this[1].klass <= (int)uVar12) {
            uVar12 = *(uint *)&__this[1].klass;
          }
          if (0 < (int)uVar12) {
            lVar21 = 0x58;
            uVar22 = 0;
            pvVar9 = __this[2].monitor;
            do {
              if (pvVar9 == (void *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                return;
              }
              if (*(uint *)((long)pvVar9 + 0x18) <= uVar22) goto label_0432bcf8;
              if ((*(byte *)((long)pvVar9 + lVar21 + 0x13c) & 1) != 0) {
                uVar5 = *(uint *)((long)pvVar9 + lVar21);
                lVar20 = (long)(int)uVar5;
                uVar6 = *(uint *)((long)pvVar9 + lVar21 + 0x14);
                uVar17 = (ulong)uVar6;
                if (*(float *)((long)TypeInfo_NameEffectController + 0xe4) == 0.0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pvStack_d8 = (void *)0x0;
                pvStack_d0 = (void *)0x0;
                pIStack_e8 = (Il2CppClass *)0x0;
                pIStack_e0 = (Il2CppClass *)0x0;
                pIStack_f8 = (Il2CppClass *)0x0;
                pIStack_f0 = (Il2CppClass *)0x0;
                pvStack_108 = (void *)0x0;
                uStack_100 = 0;
                pvStack_118 = (void *)0x0;
                uStack_110 = 0;
                if (((-1 < (int)uVar5) &&
                    (pUVar10 = __this[4].klass, pUVar10 != (UnityEngine_Component_c *)0x0)) &&
                   (uVar7 = *(uint *)&(pUVar10->_1).namespaze, (int)uVar5 < (int)uVar7)) {
                  if (uVar7 <= uVar5) goto label_0432bcf8;
                  pIVar1 = &(pUVar10->_1).byval_arg + lVar20 * 5;
                  pvStack_118 = pIVar1->data;
                  uStack_110 = *(undefined8 *)&pIVar1->bits;
                  pIVar1 = &(pUVar10->_1).this_arg + lVar20 * 5;
                  pvStack_108 = pIVar1->data;
                  uStack_100 = *(undefined8 *)&pIVar1->bits;
                  ppIVar2 = &(pUVar10->_1).element_class + lVar20 * 10;
                  pIStack_f8 = *ppIVar2;
                  pIStack_f0 = ppIVar2[1];
                  ppIVar2 = &(pUVar10->_1).declaringType + lVar20 * 10;
                  pIStack_e8 = *ppIVar2;
                  pIStack_e0 = ppIVar2[1];
                  ppvVar3 = &(pUVar10->_1).generic_class + lVar20 * 10;
                  pvStack_d8 = *ppvVar3;
                  pvStack_d0 = ppvVar3[1];
                  il2cpp_runtime_helper_022b4080(&pvStack_118,0);
                  if ((pvStack_108 != (void *)0x0) &&
                     ((int)(uVar6 + 3) < (int)*(ulong *)((long)pvStack_108 + 0x18))) {
                    uVar16 = *(ulong *)((long)pvStack_108 + 0x18) & 0xffffffff;
                    if (uVar16 <= uVar17) {
label_0432bcf8:
                      il2cpp_runtime_helper_022b2ca0();
                      return;
                    }
                    uVar4 = *(undefined8 *)((long)pvStack_108 + (long)(int)uVar6 * 0xc + 0x20);
                    fVar24 = (float)uVar4;
                    fVar25 = (float)((ulong)uVar4 >> 0x20);
                    fVar23 = *(float *)ppvVar18;
                    if (fVar24 <= *(float *)ppvVar18) {
                      fVar23 = fVar24;
                    }
                    *(float *)ppvVar18 = fVar23;
                    fVar23 = *extraout_RDX;
                    if (*extraout_RDX <= fVar24) {
                      fVar23 = fVar24;
                    }
                    *extraout_RDX = fVar23;
                    fVar23 = *pfVar15;
                    if (fVar25 <= *pfVar15) {
                      fVar23 = fVar25;
                    }
                    *pfVar15 = fVar23;
                    fVar23 = *in_R8;
                    if (*in_R8 <= fVar25) {
                      fVar23 = fVar25;
                    }
                    *in_R8 = fVar23;
                    if (uVar16 <= uVar17 + 1) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_108 + (long)(int)(uVar17 + 1) * 0xc + 0x20);
                    fVar24 = (float)uVar4;
                    fVar25 = (float)((ulong)uVar4 >> 0x20);
                    fVar23 = *(float *)ppvVar18;
                    if (fVar24 <= *(float *)ppvVar18) {
                      fVar23 = fVar24;
                    }
                    *(float *)ppvVar18 = fVar23;
                    fVar23 = *extraout_RDX;
                    if (*extraout_RDX <= fVar24) {
                      fVar23 = fVar24;
                    }
                    *extraout_RDX = fVar23;
                    fVar23 = *pfVar15;
                    if (fVar25 <= *pfVar15) {
                      fVar23 = fVar25;
                    }
                    *pfVar15 = fVar23;
                    fVar23 = *in_R8;
                    if (*in_R8 <= fVar25) {
                      fVar23 = fVar25;
                    }
                    *in_R8 = fVar23;
                    if (uVar16 <= uVar17 + 2) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_108 + (long)(int)(uVar17 + 2) * 0xc + 0x20);
                    fVar24 = (float)uVar4;
                    fVar25 = (float)((ulong)uVar4 >> 0x20);
                    fVar23 = *(float *)ppvVar18;
                    if (fVar24 <= *(float *)ppvVar18) {
                      fVar23 = fVar24;
                    }
                    *(float *)ppvVar18 = fVar23;
                    fVar23 = *extraout_RDX;
                    if (*extraout_RDX <= fVar24) {
                      fVar23 = fVar24;
                    }
                    *extraout_RDX = fVar23;
                    fVar23 = *pfVar15;
                    if (fVar25 <= *pfVar15) {
                      fVar23 = fVar25;
                    }
                    *pfVar15 = fVar23;
                    fVar23 = *in_R8;
                    if (*in_R8 <= fVar25) {
                      fVar23 = fVar25;
                    }
                    *in_R8 = fVar23;
                    if (uVar16 <= uVar17 + 3) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_108 + (long)(int)(uVar17 + 3) * 0xc + 0x20);
                    fVar24 = (float)uVar4;
                    fVar25 = (float)((ulong)uVar4 >> 0x20);
                    fVar23 = *(float *)ppvVar18;
                    if (fVar24 <= *(float *)ppvVar18) {
                      fVar23 = fVar24;
                    }
                    *(float *)ppvVar18 = fVar23;
                    fVar23 = *extraout_RDX;
                    if (*extraout_RDX <= fVar24) {
                      fVar23 = fVar24;
                    }
                    *extraout_RDX = fVar23;
                    fVar23 = *pfVar15;
                    if (fVar25 <= *pfVar15) {
                      fVar23 = fVar25;
                    }
                    *pfVar15 = fVar23;
                    fVar23 = *in_R8;
                    if (*in_R8 <= fVar25) {
                      fVar23 = fVar25;
                    }
                    *in_R8 = fVar23;
                  }
                }
              }
              uVar22 = uVar22 + 1;
              lVar21 = lVar21 + 0x178;
              if (uVar12 == uVar22) {
                return;
              }
              pvVar9 = __this[2].monitor;
            } while( true );
          }
        }
        return;
      }
      (**(code **)(*plVar8 + 0x628))(plVar8,puVar13,*(undefined8 *)(*plVar8 + 0x630));
    }
  }
  *(undefined1 *)((long)&material[4].klass + 2) = 0;
  return;
}


// PatreonEffects.NameEffectController$$SetFloatIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetFloatIfPresent (UnityEngine_Material_o* material, int32_t propertyId, float value, const MethodInfo* method);
// 0x432b7a0

void PatreonEffects_NameEffectController__SetFloatIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,float value,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  void *pvVar9;
  UnityEngine_Component_c *pUVar10;
  bool_conflict bVar11;
  uint uVar12;
  undefined8 *puVar13;
  UnityEngine_Object_o *pUVar14;
  float *pfVar15;
  ulong uVar16;
  float *extraout_RDX;
  ulong uVar17;
  void **ppvVar18;
  undefined8 *puVar19;
  UnityEngine_Component_o *__this;
  float *in_R8;
  long lVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  void *pvStack_e0;
  undefined8 uStack_d8;
  void *pvStack_d0;
  undefined8 uStack_c8;
  Il2CppClass *pIStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppClass *pIStack_b0;
  Il2CppClass *pIStack_a8;
  void *pvStack_a0;
  void *pvStack_98;
  UnityEngine_Object_o *pUStack_88;
  undefined8 *puStack_80;
  
  if (material != (UnityEngine_Material_o *)0x0) {
    bVar11 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      UnityEngine_Material__SetFloat_4dcd3b0(material,propertyId,value,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae043 = '\x01';
  }
  if (*(char *)((long)&material[4].klass + 2) != '\0') {
    pUVar14 = material[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      plVar8 = material[1].monitor;
      puVar13 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      pfVar15 = (float *)0x0;
      puVar19 = puVar13;
      System_Action_object____ctor();
      if (plVar8 == (long *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae046 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae046 = '\x01';
        }
        pUVar14 = (UnityEngine_Object_o *)*puVar19;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ppvVar18 = (void **)0x0;
        bVar11 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return;
        }
        __this = (UnityEngine_Component_o *)*puVar19;
        if (__this != (UnityEngine_Component_o *)0x0) {
          pUVar14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
          *puVar19 = 0;
          il2cpp_runtime_helper_022b4080(puVar19);
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar11 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar14,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        puStack_80 = &TypeInfo_Object;
        pUStack_88 = pUVar14;
        if (g_data_057ae049 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
          g_data_057ae049 = '\x01';
        }
        pvStack_a0 = (void *)0x0;
        pvStack_98 = (void *)0x0;
        pIStack_b0 = (Il2CppClass *)0x0;
        pIStack_a8 = (Il2CppClass *)0x0;
        pIStack_c0 = (Il2CppClass *)0x0;
        pIStack_b8 = (Il2CppClass *)0x0;
        pvStack_d0 = (void *)0x0;
        uStack_c8 = 0;
        pvStack_e0 = (void *)0x0;
        uStack_d8 = 0;
        *(float *)ppvVar18 = INFINITY;
        *extraout_RDX = -INFINITY;
        *pfVar15 = INFINITY;
        *in_R8 = -INFINITY;
        if (*(float *)((long)TypeInfo_NameEffectController + 0xe4) == 0.0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((__this != (UnityEngine_Component_o *)0x0) && (__this[2].monitor != (void *)0x0)) {
          uVar12 = *(uint *)((long)__this[2].monitor + 0x18);
          if ((int)*(uint *)&__this[1].klass <= (int)uVar12) {
            uVar12 = *(uint *)&__this[1].klass;
          }
          if (0 < (int)uVar12) {
            lVar21 = 0x58;
            uVar22 = 0;
            pvVar9 = __this[2].monitor;
            do {
              if (pvVar9 == (void *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                return;
              }
              if (*(uint *)((long)pvVar9 + 0x18) <= uVar22) goto label_0432bcf8;
              if ((*(byte *)((long)pvVar9 + lVar21 + 0x13c) & 1) != 0) {
                uVar5 = *(uint *)((long)pvVar9 + lVar21);
                lVar20 = (long)(int)uVar5;
                uVar6 = *(uint *)((long)pvVar9 + lVar21 + 0x14);
                uVar17 = (ulong)uVar6;
                if (*(float *)((long)TypeInfo_NameEffectController + 0xe4) == 0.0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pvStack_a0 = (void *)0x0;
                pvStack_98 = (void *)0x0;
                pIStack_b0 = (Il2CppClass *)0x0;
                pIStack_a8 = (Il2CppClass *)0x0;
                pIStack_c0 = (Il2CppClass *)0x0;
                pIStack_b8 = (Il2CppClass *)0x0;
                pvStack_d0 = (void *)0x0;
                uStack_c8 = 0;
                pvStack_e0 = (void *)0x0;
                uStack_d8 = 0;
                if (((-1 < (int)uVar5) &&
                    (pUVar10 = __this[4].klass, pUVar10 != (UnityEngine_Component_c *)0x0)) &&
                   (uVar7 = *(uint *)&(pUVar10->_1).namespaze, (int)uVar5 < (int)uVar7)) {
                  if (uVar7 <= uVar5) goto label_0432bcf8;
                  pIVar1 = &(pUVar10->_1).byval_arg + lVar20 * 5;
                  pvStack_e0 = pIVar1->data;
                  uStack_d8 = *(undefined8 *)&pIVar1->bits;
                  pIVar1 = &(pUVar10->_1).this_arg + lVar20 * 5;
                  pvStack_d0 = pIVar1->data;
                  uStack_c8 = *(undefined8 *)&pIVar1->bits;
                  ppIVar2 = &(pUVar10->_1).element_class + lVar20 * 10;
                  pIStack_c0 = *ppIVar2;
                  pIStack_b8 = ppIVar2[1];
                  ppIVar2 = &(pUVar10->_1).declaringType + lVar20 * 10;
                  pIStack_b0 = *ppIVar2;
                  pIStack_a8 = ppIVar2[1];
                  ppvVar3 = &(pUVar10->_1).generic_class + lVar20 * 10;
                  pvStack_a0 = *ppvVar3;
                  pvStack_98 = ppvVar3[1];
                  il2cpp_runtime_helper_022b4080(&pvStack_e0,0);
                  if ((pvStack_d0 != (void *)0x0) &&
                     ((int)(uVar6 + 3) < (int)*(ulong *)((long)pvStack_d0 + 0x18))) {
                    uVar16 = *(ulong *)((long)pvStack_d0 + 0x18) & 0xffffffff;
                    if (uVar16 <= uVar17) {
label_0432bcf8:
                      il2cpp_runtime_helper_022b2ca0();
                      return;
                    }
                    uVar4 = *(undefined8 *)((long)pvStack_d0 + (long)(int)uVar6 * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *(float *)ppvVar18;
                    if (fVar23 <= *(float *)ppvVar18) {
                      fVar25 = fVar23;
                    }
                    *(float *)ppvVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                    if (uVar16 <= uVar17 + 1) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_d0 + (long)(int)(uVar17 + 1) * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *(float *)ppvVar18;
                    if (fVar23 <= *(float *)ppvVar18) {
                      fVar25 = fVar23;
                    }
                    *(float *)ppvVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                    if (uVar16 <= uVar17 + 2) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_d0 + (long)(int)(uVar17 + 2) * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *(float *)ppvVar18;
                    if (fVar23 <= *(float *)ppvVar18) {
                      fVar25 = fVar23;
                    }
                    *(float *)ppvVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                    if (uVar16 <= uVar17 + 3) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_d0 + (long)(int)(uVar17 + 3) * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *(float *)ppvVar18;
                    if (fVar23 <= *(float *)ppvVar18) {
                      fVar25 = fVar23;
                    }
                    *(float *)ppvVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                  }
                }
              }
              uVar22 = uVar22 + 1;
              lVar21 = lVar21 + 0x178;
              if (uVar12 == uVar22) {
                return;
              }
              pvVar9 = __this[2].monitor;
            } while( true );
          }
        }
        return;
      }
      (**(code **)(*plVar8 + 0x628))(plVar8,puVar13,*(undefined8 *)(*plVar8 + 0x630));
    }
  }
  *(undefined1 *)((long)&material[4].klass + 2) = 0;
  return;
}


// PatreonEffects.NameEffectController$$PopOffsetScale
// il2cpp: float PatreonEffects_NameEffectController__PopOffsetScale (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432b380

float PatreonEffects_NameEffectController__PopOffsetScale
                (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TMPro_TMP_Text_o *pTVar9;
  UnityEngine_Component_c *pUVar10;
  undefined8 uVar11;
  bool_conflict bVar12;
  uint uVar13;
  undefined8 *puVar14;
  UnityEngine_Object_o *pUVar15;
  float *pfVar16;
  ulong uVar17;
  float *extraout_RDX;
  ulong uVar18;
  int32_t iVar19;
  float *pfVar20;
  PatreonEffects_NameEffectController_o *__this_00;
  undefined8 *puVar21;
  UnityEngine_Component_o *__this_01;
  float *in_R8;
  long lVar22;
  long lVar23;
  ulong uVar24;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float fVar25;
  undefined4 in_XMM1_Da;
  float fVar26;
  undefined4 in_XMM1_Db;
  float fVar27;
  UnityEngine_Color_o UVar28;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  void *pvStack_198;
  undefined8 uStack_190;
  void *pvStack_188;
  undefined8 uStack_180;
  Il2CppClass *pIStack_178;
  Il2CppClass *pIStack_170;
  Il2CppClass *pIStack_168;
  Il2CppClass *pIStack_160;
  void *pvStack_158;
  void *pvStack_150;
  UnityEngine_Object_o *pUStack_140;
  long *plStack_138;
  undefined4 uStack_60;
  
  pTVar9 = (__this->fields).text;
  if (pTVar9 != (TMPro_TMP_Text_o *)0x0) {
    fVar26 = *(float *)&(pTVar9->fields).m_spriteColor.fields.r / 48.0;
    fVar27 = 0.35;
    if (0.35 <= fVar26) {
      fVar27 = fVar26;
    }
    return fVar27;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae03f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
    g_data_057ae03f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar19 = 0;
  __this_00 = __this;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return extraout_XMM0_Da;
  }
  if (method != (MethodInfo *)0x0) {
    pvVar5 = (method->field8_0x40).genericMethod;
    uVar4 = method->token;
    fVar27 = *(float *)((long)&method[1].methodPointer + 4);
    __this_00 = TypeInfo_ShaderUtilities;
    if (*(int *)((long)&TypeInfo_ShaderUtilities[1].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this != (PatreonEffects_NameEffectController_o *)0x0) {
      UnityEngine_Material__EnableKeyword
                ((UnityEngine_Material_o *)__this,
                 *(System_String_o **)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x110),
                 (MethodInfo *)0x0);
      bVar12 = UnityEngine_Material__HasProperty
                         ((UnityEngine_Material_o *)__this,
                          *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x74),
                          (MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (*(int *)((long)&TypeInfo_ShaderUtilities[1].monitor + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Material__EnableKeyword
                  ((UnityEngine_Material_o *)__this,
                   *(System_String_o **)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0xe0),
                   (MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_ShaderUtilities[1].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 8);
      if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UVar28.fields.b = 1.0;
        UVar28.fields.a = 1.0;
        UVar28.fields.r = 1.0;
        UVar28.fields.g = 1.0;
        UnityEngine_Material__SetColor_4dca510
                  ((UnityEngine_Material_o *)__this,iVar19,UVar28,(MethodInfo *)0x0);
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x44);
      UVar28.fields = *(UnityEngine_Color_Fields *)&method->field8_0x40;
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetColor_4dca510
                  ((UnityEngine_Material_o *)__this,iVar19,UVar28,(MethodInfo *)0x0);
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x3c);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar19,0.16,(MethodInfo *)0x0)
        ;
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x40);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar19,0.0,(MethodInfo *)0x0);
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0xc);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar19,0.02,(MethodInfo *)0x0)
        ;
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x74);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        fVar27 = fVar27 * 0.45;
        fVar26 = 1.0;
        if (fVar27 <= 1.0) {
          fVar26 = fVar27;
        }
        value.fields.a = (float)(-(uint)(0.0 <= fVar27) & (uint)fVar26);
        value.fields.b = (float)uVar4;
        value.fields._0_8_ = pvVar5;
        UnityEngine_Material__SetColor_4dca510
                  ((UnityEngine_Material_o *)__this,iVar19,value,(MethodInfo *)0x0);
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x78);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar19,0.0,(MethodInfo *)0x0);
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x84);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar19,0.05,(MethodInfo *)0x0)
        ;
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x80);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar19,0.08,(MethodInfo *)0x0)
        ;
      }
      iVar19 = *(int32_t *)(*(long *)&(TypeInfo_ShaderUtilities->fields).popExtrusionColor.fields.g + 0x7c);
      bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this,iVar19,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar19,0.72,(MethodInfo *)0x0)
        ;
      }
      TMPro_ShaderUtilities__UpdateShaderRatios((UnityEngine_Material_o *)__this,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (PatreonEffects_NameEffectController_o *)0x0) {
    bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this_00,iVar19,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return extraout_XMM0_Da_01;
    }
    value_00.fields.a = (float)in_XMM1_Db;
    value_00.fields.b = (float)in_XMM1_Da;
    value_00.fields.r = (float)(int)uVar11;
    value_00.fields.g = (float)(int)((ulong)uVar11 >> 0x20);
    UnityEngine_Material__SetColor_4dca510
              ((UnityEngine_Material_o *)__this_00,iVar19,value_00,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (PatreonEffects_NameEffectController_o *)0x0) {
    bVar12 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)__this_00,iVar19,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return extraout_XMM0_Da_03;
    }
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)__this_00,iVar19,fVar27,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
    fVar27 = (float)il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae043 = '\x01';
  }
  if (*(char *)((long)&(__this_00->fields).popActive + 2) != '\0') {
    pTVar9 = (__this_00->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar27 = extraout_XMM0_Da_05;
    if ((char)bVar12 != '\0') {
      pTVar9 = (__this_00->fields).text;
      puVar14 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      pfVar16 = (float *)0x0;
      puVar21 = puVar14;
      System_Action_object____ctor();
      if (pTVar9 == (TMPro_TMP_Text_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae046 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae046 = '\x01';
        }
        pUVar15 = (UnityEngine_Object_o *)*puVar21;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pfVar20 = (float *)0x0;
        bVar12 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          return extraout_XMM0_Da_06;
        }
        __this_01 = (UnityEngine_Component_o *)*puVar21;
        if (__this_01 != (UnityEngine_Component_o *)0x0) {
          pUVar15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0)
          ;
          *puVar21 = 0;
          il2cpp_runtime_helper_022b4080(puVar21);
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar12 == '\0') {
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar15,(MethodInfo *)0x0);
            return extraout_XMM0_Da_08;
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar15,(MethodInfo *)0x0);
          return extraout_XMM0_Da_07;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_138 = &TypeInfo_Object;
        pUStack_140 = pUVar15;
        if (g_data_057ae049 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
          g_data_057ae049 = '\x01';
        }
        pvStack_158 = (void *)0x0;
        pvStack_150 = (void *)0x0;
        pIStack_168 = (Il2CppClass *)0x0;
        pIStack_160 = (Il2CppClass *)0x0;
        pIStack_178 = (Il2CppClass *)0x0;
        pIStack_170 = (Il2CppClass *)0x0;
        pvStack_188 = (void *)0x0;
        uStack_180 = 0;
        pvStack_198 = (void *)0x0;
        uStack_190 = 0;
        *pfVar20 = INFINITY;
        *extraout_RDX = -INFINITY;
        *pfVar16 = INFINITY;
        *in_R8 = -INFINITY;
        if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((__this_01 != (UnityEngine_Component_o *)0x0) && (__this_01[2].monitor != (void *)0x0)) {
          uVar13 = *(uint *)((long)__this_01[2].monitor + 0x18);
          if ((int)*(uint *)&__this_01[1].klass <= (int)uVar13) {
            uVar13 = *(uint *)&__this_01[1].klass;
          }
          if (0 < (int)uVar13) {
            lVar23 = 0x58;
            uVar24 = 0;
            pvVar5 = __this_01[2].monitor;
            do {
              if (pvVar5 == (void *)0x0) {
                fVar27 = (float)il2cpp_runtime_helper_022b2c90();
                return fVar27;
              }
              if (*(uint *)((long)pvVar5 + 0x18) <= uVar24) goto label_0432bcf8;
              if ((*(byte *)((long)pvVar5 + lVar23 + 0x13c) & 1) != 0) {
                uVar6 = *(uint *)((long)pvVar5 + lVar23);
                lVar22 = (long)(int)uVar6;
                uVar7 = *(uint *)((long)pvVar5 + lVar23 + 0x14);
                uVar18 = (ulong)uVar7;
                if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pvStack_158 = (void *)0x0;
                pvStack_150 = (void *)0x0;
                pIStack_168 = (Il2CppClass *)0x0;
                pIStack_160 = (Il2CppClass *)0x0;
                pIStack_178 = (Il2CppClass *)0x0;
                pIStack_170 = (Il2CppClass *)0x0;
                pvStack_188 = (void *)0x0;
                uStack_180 = 0;
                pvStack_198 = (void *)0x0;
                uStack_190 = 0;
                if (((-1 < (int)uVar6) &&
                    (pUVar10 = __this_01[4].klass, pUVar10 != (UnityEngine_Component_c *)0x0)) &&
                   (uVar8 = *(uint *)&(pUVar10->_1).namespaze, (int)uVar6 < (int)uVar8)) {
                  if (uVar6 < uVar8) {
                    pIVar1 = &(pUVar10->_1).byval_arg + lVar22 * 5;
                    pvStack_198 = pIVar1->data;
                    uStack_190 = *(undefined8 *)&pIVar1->bits;
                    pIVar1 = &(pUVar10->_1).this_arg + lVar22 * 5;
                    pvStack_188 = pIVar1->data;
                    uStack_180 = *(undefined8 *)&pIVar1->bits;
                    ppIVar2 = &(pUVar10->_1).element_class + lVar22 * 10;
                    pIStack_178 = *ppIVar2;
                    pIStack_170 = ppIVar2[1];
                    ppIVar2 = &(pUVar10->_1).declaringType + lVar22 * 10;
                    pIStack_168 = *ppIVar2;
                    pIStack_160 = ppIVar2[1];
                    ppvVar3 = &(pUVar10->_1).generic_class + lVar22 * 10;
                    pvStack_158 = *ppvVar3;
                    pvStack_150 = ppvVar3[1];
                    il2cpp_runtime_helper_022b4080(&pvStack_198,0);
                    if ((pvStack_188 == (void *)0x0) ||
                       ((int)*(ulong *)((long)pvStack_188 + 0x18) <= (int)(uVar7 + 3))) goto label_0432bae0;
                    uVar17 = *(ulong *)((long)pvStack_188 + 0x18) & 0xffffffff;
                    if (uVar18 < uVar17) {
                      uVar11 = *(undefined8 *)((long)pvStack_188 + (long)(int)uVar7 * 0xc + 0x20);
                      fVar26 = (float)uVar11;
                      fVar25 = (float)((ulong)uVar11 >> 0x20);
                      fVar27 = *pfVar20;
                      if (fVar26 <= *pfVar20) {
                        fVar27 = fVar26;
                      }
                      *pfVar20 = fVar27;
                      fVar27 = *extraout_RDX;
                      if (*extraout_RDX <= fVar26) {
                        fVar27 = fVar26;
                      }
                      *extraout_RDX = fVar27;
                      fVar27 = *pfVar16;
                      if (fVar25 <= *pfVar16) {
                        fVar27 = fVar25;
                      }
                      *pfVar16 = fVar27;
                      fVar27 = *in_R8;
                      if (*in_R8 <= fVar25) {
                        fVar27 = fVar25;
                      }
                      *in_R8 = fVar27;
                      if (uVar18 + 1 < uVar17) {
                        uVar11 = *(undefined8 *)((long)pvStack_188 + (long)(int)(uVar18 + 1) * 0xc + 0x20);
                        fVar26 = (float)uVar11;
                        fVar25 = (float)((ulong)uVar11 >> 0x20);
                        fVar27 = *pfVar20;
                        if (fVar26 <= *pfVar20) {
                          fVar27 = fVar26;
                        }
                        *pfVar20 = fVar27;
                        fVar27 = *extraout_RDX;
                        if (*extraout_RDX <= fVar26) {
                          fVar27 = fVar26;
                        }
                        *extraout_RDX = fVar27;
                        fVar27 = *pfVar16;
                        if (fVar25 <= *pfVar16) {
                          fVar27 = fVar25;
                        }
                        *pfVar16 = fVar27;
                        fVar27 = *in_R8;
                        if (*in_R8 <= fVar25) {
                          fVar27 = fVar25;
                        }
                        *in_R8 = fVar27;
                        if (uVar18 + 2 < uVar17) {
                          uVar11 = *(undefined8 *)((long)pvStack_188 + (long)(int)(uVar18 + 2) * 0xc + 0x20);
                          fVar26 = (float)uVar11;
                          fVar25 = (float)((ulong)uVar11 >> 0x20);
                          fVar27 = *pfVar20;
                          if (fVar26 <= *pfVar20) {
                            fVar27 = fVar26;
                          }
                          *pfVar20 = fVar27;
                          fVar27 = *extraout_RDX;
                          if (*extraout_RDX <= fVar26) {
                            fVar27 = fVar26;
                          }
                          *extraout_RDX = fVar27;
                          fVar27 = *pfVar16;
                          if (fVar25 <= *pfVar16) {
                            fVar27 = fVar25;
                          }
                          *pfVar16 = fVar27;
                          fVar27 = *in_R8;
                          if (*in_R8 <= fVar25) {
                            fVar27 = fVar25;
                          }
                          *in_R8 = fVar27;
                          if (uVar18 + 3 < uVar17) {
                            uVar11 = *(undefined8 *)((long)pvStack_188 + (long)(int)(uVar18 + 3) * 0xc + 0x20)
                            ;
                            fVar26 = (float)uVar11;
                            fVar25 = (float)((ulong)uVar11 >> 0x20);
                            fVar27 = *pfVar20;
                            if (fVar26 <= *pfVar20) {
                              fVar27 = fVar26;
                            }
                            *pfVar20 = fVar27;
                            fVar27 = *extraout_RDX;
                            if (*extraout_RDX <= fVar26) {
                              fVar27 = fVar26;
                            }
                            *extraout_RDX = fVar27;
                            fVar27 = *pfVar16;
                            if (fVar25 <= *pfVar16) {
                              fVar27 = fVar25;
                            }
                            *pfVar16 = fVar27;
                            fVar27 = *in_R8;
                            if (*in_R8 <= fVar25) {
                              fVar27 = fVar25;
                            }
                            *in_R8 = fVar27;
                            goto label_0432bae0;
                          }
                        }
                      }
                    }
                  }
label_0432bcf8:
                  il2cpp_runtime_helper_022b2ca0();
                  break;
                }
              }
label_0432bae0:
              uVar24 = uVar24 + 1;
              lVar23 = lVar23 + 0x178;
              if (uVar13 == uVar24) break;
              pvVar5 = __this_01[2].monitor;
            } while( true );
          }
        }
        fVar27 = *extraout_RDX;
        if (*pfVar20 <= fVar27 && fVar27 != *pfVar20) {
          fVar27 = *in_R8;
        }
        return fVar27;
      }
      fVar27 = (float)(*(pTVar9->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                                (pTVar9,puVar14,(pTVar9->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  *(undefined1 *)((long)&(__this_00->fields).popActive + 2) = 0;
  return fVar27;
}


// PatreonEffects.NameEffectController$$SyncPopLayer
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o* layer, UnityEngine_Vector2_o offset, UnityEngine_Color_o color, const MethodInfo* method);
// 0x432b010

void PatreonEffects_NameEffectController__SyncPopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o *layer,
               UnityEngine_Vector2_o offset,UnityEngine_Color_o color,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined4 uVar4;
  void *pvVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Component_c *pUVar11;
  UnityEngine_Vector2_o UVar12;
  undefined8 uVar13;
  bool_conflict bVar14;
  uint uVar15;
  MethodInfo *pMVar16;
  MethodInfo *pMVar17;
  TMPro_TMP_Text_o *pTVar18;
  UnityEngine_RectTransform_o *__this_00;
  undefined8 *puVar19;
  UnityEngine_Object_o *pUVar20;
  float *pfVar21;
  ulong uVar22;
  float *extraout_RDX;
  ulong uVar23;
  int32_t iVar24;
  float *pfVar25;
  TMPro_TMP_Text_o *pTVar26;
  undefined8 *puVar27;
  UnityEngine_Component_o *__this_01;
  float *in_R8;
  long lVar28;
  long lVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Quaternion_o value;
  UnityEngine_Color_o UVar34;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o value_02;
  void *pvStack_1f0;
  undefined8 uStack_1e8;
  void *pvStack_1e0;
  undefined8 uStack_1d8;
  Il2CppClass *pIStack_1d0;
  Il2CppClass *pIStack_1c8;
  Il2CppClass *pIStack_1c0;
  Il2CppClass *pIStack_1b8;
  void *pvStack_1b0;
  void *pvStack_1a8;
  UnityEngine_Object_o *pUStack_198;
  long *plStack_190;
  undefined4 uStack_b8;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  fVar33 = color.fields.r;
  fStack_44 = color.fields.g;
  local_48 = fVar33;
  if (g_data_057ae040 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae040 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)layer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pTVar26 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = (MethodInfo *)0x0;
    bVar14 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      pTVar26 = (__this->fields).text;
      if (pTVar26 != (TMPro_TMP_Text_o *)0x0) {
        pMVar17 = (pTVar26->klass->vtable)._65_get_text.method;
        pMVar16 = (MethodInfo *)(*(pTVar26->klass->vtable)._65_get_text.methodPtr)();
        if (layer != (TMPro_TMP_Text_o *)0x0) {
          pTVar26 = layer;
          (*(layer->klass->vtable)._66_set_text.methodPtr)
                    (layer,pMVar16,(layer->klass->vtable)._66_set_text.method);
          pTVar18 = (__this->fields).text;
          pMVar17 = pMVar16;
          if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
            TMPro_TMP_Text__set_font
                      (layer,(TMPro_TMP_FontAsset_o *)(pTVar18->fields).m_TextPreprocessor,(MethodInfo *)0x0);
            pUVar20 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar17 = (MethodInfo *)0x0;
            bVar14 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              pTVar18 = (__this->fields).text;
              pTVar26 = (TMPro_TMP_Text_o *)0x0;
              if (pTVar18 == (TMPro_TMP_Text_o *)0x0) goto label_0432b374;
              pMVar17 = (MethodInfo *)
                        (*(pTVar18->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                                  (pTVar18,(pTVar18->klass->vtable)._67_get_fontSharedMaterial.method);
            }
            else {
              pMVar17 = (MethodInfo *)(__this->fields).originalFontMaterial;
            }
            pTVar26 = layer;
            (*(layer->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                      (layer,pMVar17,(layer->klass->vtable)._68_set_fontSharedMaterial.method);
            pTVar18 = (__this->fields).text;
            if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
              pMVar17 = (MethodInfo *)0x0;
              pTVar26 = layer;
              TMPro_TMP_Text__set_fontSize
                        (layer,*(float *)&(pTVar18->fields).m_spriteColor.fields.r,(MethodInfo *)0x0);
              pTVar18 = (__this->fields).text;
              if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                uVar15 = (pTVar18->fields).m_FontWeightStack.fields.m_Capacity;
                pMVar17 = (MethodInfo *)(ulong)uVar15;
                TMPro_TMP_Text__set_fontStyle(layer,uVar15,(MethodInfo *)0x0);
                pTVar18 = (__this->fields).text;
                pTVar26 = (TMPro_TMP_Text_o *)0x0;
                if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                  uVar15 = TMPro_TMP_Text__get_alignment(pTVar18,(MethodInfo *)0x0);
                  pMVar17 = (MethodInfo *)(ulong)uVar15;
                  pTVar26 = layer;
                  TMPro_TMP_Text__set_alignment(layer,uVar15,(MethodInfo *)0x0);
                  pTVar18 = (__this->fields).text;
                  if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                    bVar6 = *(byte *)((long)&(pTVar18->fields).m_charWidthMaxAdj + 2);
                    pMVar17 = (MethodInfo *)(ulong)bVar6;
                    pTVar26 = layer;
                    TMPro_TMP_Text__set_richText(layer,(uint)bVar6,(MethodInfo *)0x0);
                    pTVar18 = (__this->fields).text;
                    if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                      TMPro_TMP_Text__set_enableWordWrapping
                                (layer,(uint)*(byte *)&(pTVar18->fields).m_characterSpacing,(MethodInfo *)0x0)
                      ;
                      pMVar17 = (MethodInfo *)0x0;
                      pTVar26 = layer;
                      TMPro_TMP_Text__set_overflowMode(layer,0,(MethodInfo *)0x0);
                      pTVar18 = (__this->fields).text;
                      if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                        pMVar17 = (MethodInfo *)0x0;
                        pTVar26 = layer;
                        TMPro_TMP_Text__set_characterSpacing
                                  (layer,(float)(pTVar18->fields).m_textAlignment,(MethodInfo *)0x0);
                        pTVar18 = (__this->fields).text;
                        if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                          pMVar17 = (MethodInfo *)0x0;
                          pTVar26 = layer;
                          TMPro_TMP_Text__set_wordSpacing
                                    (layer,*(float *)((long)&(pTVar18->fields).m_lineJustificationStack.fields
                                                             .itemStack + 4),(MethodInfo *)0x0);
                          pTVar18 = (__this->fields).text;
                          if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                            pMVar17 = (MethodInfo *)0x0;
                            pTVar26 = layer;
                            TMPro_TMP_Text__set_lineSpacing
                                      (layer,(float)(pTVar18->fields).m_lineJustificationStack.fields.index,
                                       (MethodInfo *)0x0);
                            pTVar18 = (__this->fields).text;
                            if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                              TMPro_TMP_Text__set_paragraphSpacing
                                        (layer,*(float *)&(pTVar18->fields).m_lineJustificationStack.fields.
                                                          field_0x1c,(MethodInfo *)0x0);
                              pMVar17 = (layer->klass->vtable)._23_set_color.method;
                              local_48 = color.fields.b;
                              fStack_44 = color.fields.a;
                              (*(layer->klass->vtable)._23_set_color.methodPtr)(fVar33,layer);
                              pTVar18 = (__this->fields).text;
                              pTVar26 = (TMPro_TMP_Text_o *)0x0;
                              if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                                pTVar18 = (TMPro_TMP_Text_o *)
                                          TMPro_TMP_Text__get_rectTransform(pTVar18,(MethodInfo *)0x0);
                                pMVar17 = (MethodInfo *)0x0;
                                __this_00 = TMPro_TMP_Text__get_rectTransform(layer,(MethodInfo *)0x0);
                                pTVar26 = layer;
                                if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
                                  pMVar17 = (MethodInfo *)0x0;
                                  pTVar26 = pTVar18;
                                  UVar12 = UnityEngine_RectTransform__get_anchorMin
                                                     ((UnityEngine_RectTransform_o *)pTVar18,(MethodInfo *)0x0
                                                     );
                                  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_anchorMin
                                              (__this_00,UVar12,(MethodInfo *)0x0);
                                    UVar12 = UnityEngine_RectTransform__get_anchorMax
                                                       ((UnityEngine_RectTransform_o *)pTVar18,
                                                        (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (__this_00,UVar12,(MethodInfo *)0x0);
                                    UVar12 = UnityEngine_RectTransform__get_pivot
                                                       ((UnityEngine_RectTransform_o *)pTVar18,
                                                        (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_pivot(__this_00,UVar12,(MethodInfo *)0x0);
                                    UVar12 = UnityEngine_RectTransform__get_sizeDelta
                                                       ((UnityEngine_RectTransform_o *)pTVar18,
                                                        (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (__this_00,UVar12,(MethodInfo *)0x0);
                                    UVar35 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                       ((UnityEngine_RectTransform_o *)pTVar18,
                                                        (MethodInfo *)0x0);
                                    local_38 = offset.fields.x;
                                    fStack_34 = offset.fields.y;
                                    value_02.fields.x = UVar35.fields.x + local_38;
                                    value_02.fields.y = UVar35.fields.y + fStack_34;
                                    value_02.fields.z = UVar35.fields.z + 0.0;
                                    UnityEngine_RectTransform__set_anchoredPosition3D
                                              (__this_00,value_02,(MethodInfo *)0x0);
                                    UVar35 = UnityEngine_Transform__get_localScale
                                                       ((UnityEngine_Transform_o *)pTVar18,(MethodInfo *)0x0);
                                    UnityEngine_Transform__set_localScale
                                              ((UnityEngine_Transform_o *)__this_00,UVar35,(MethodInfo *)0x0);
                                    value = UnityEngine_Transform__get_localRotation
                                                      ((UnityEngine_Transform_o *)pTVar18,(MethodInfo *)0x0);
                                    UnityEngine_Transform__set_localRotation
                                              ((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
                                    return;
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
label_0432b374:
      il2cpp_runtime_helper_022b2c90();
      if ((pTVar26->fields).m_Material != (UnityEngine_Material_o *)0x0) {
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae03f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
        g_data_057ae03f = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar24 = 0;
      pTVar18 = pTVar26;
      bVar14 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pTVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        return;
      }
      if (pMVar17 != (MethodInfo *)0x0) {
        pvVar5 = (pMVar17->field8_0x40).genericMethod;
        uVar4 = pMVar17->token;
        fVar33 = *(float *)((long)&pMVar17[1].methodPointer + 4);
        pTVar18 = TypeInfo_ShaderUtilities;
        if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pTVar26 != (TMPro_TMP_Text_o *)0x0) {
          UnityEngine_Material__EnableKeyword
                    ((UnityEngine_Material_o *)pTVar26,
                     (System_String_o *)(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_Canvas,
                     (MethodInfo *)0x0);
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,
                              (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X,
                              (MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Material__EnableKeyword
                      ((UnityEngine_Material_o *)pTVar26,
                       *(System_String_o **)
                        &(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_LastClipRectCanvasSpace.fields,
                       (MethodInfo *)0x0);
          }
          if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar24 = *(int32_t *)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor;
          if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UVar34.fields.b = 1.0;
            UVar34.fields.a = 1.0;
            UVar34.fields.r = 1.0;
            UVar34.fields.g = 1.0;
            UnityEngine_Material__SetColor_4dca510
                      ((UnityEngine_Material_o *)pTVar26,iVar24,UVar34,(MethodInfo *)0x0);
          }
          iVar24 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x34;
          UVar34.fields = *(UnityEngine_Color_Fields *)&pMVar17->field8_0x40;
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetColor_4dca510
                      ((UnityEngine_Material_o *)pTVar26,iVar24,UVar34,(MethodInfo *)0x0);
          }
          iVar24 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ClipTargets + 4);
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pTVar26,iVar24,0.16,(MethodInfo *)0x0);
          }
          iVar24 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pTVar26,iVar24,0.0,(MethodInfo *)0x0);
          }
          iVar24 = *(int32_t *)((long)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor + 4);
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pTVar26,iVar24,0.02,(MethodInfo *)0x0);
          }
          iVar24 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X;
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            fVar33 = fVar33 * 0.45;
            fVar31 = 1.0;
            if (fVar33 <= 1.0) {
              fVar31 = fVar33;
            }
            value_00.fields.a = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar31);
            value_00.fields.b = (float)uVar4;
            value_00.fields._0_8_ = pvVar5;
            UnityEngine_Material__SetColor_4dca510
                      ((UnityEngine_Material_o *)pTVar26,iVar24,value_00,(MethodInfo *)0x0);
          }
          iVar24 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_Y;
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pTVar26,iVar24,0.0,(MethodInfo *)0x0);
          }
          iVar24 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas + 4);
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pTVar26,iVar24,0.05,(MethodInfo *)0x0);
          }
          iVar24 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas;
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pTVar26,iVar24,0.08,(MethodInfo *)0x0);
          }
          iVar24 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x6c;
          bVar14 = UnityEngine_Material__HasProperty
                             ((UnityEngine_Material_o *)pTVar26,iVar24,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pTVar26,iVar24,0.72,(MethodInfo *)0x0);
          }
          TMPro_ShaderUtilities__UpdateShaderRatios((UnityEngine_Material_o *)pTVar26,(MethodInfo *)0x0);
          return;
        }
      }
      uVar13 = il2cpp_runtime_helper_022b2c90();
      if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
        bVar14 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)pTVar18,iVar24,(MethodInfo *)0x0)
        ;
        if ((char)bVar14 != '\0') {
          value_01.fields.a = fStack_44;
          value_01.fields.b = local_48;
          value_01.fields.r = (float)(int)uVar13;
          value_01.fields.g = (float)(int)((ulong)uVar13 >> 0x20);
          UnityEngine_Material__SetColor_4dca510
                    ((UnityEngine_Material_o *)pTVar18,iVar24,value_01,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      fVar33 = (float)il2cpp_runtime_helper_022b2c90();
      if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
        bVar14 = UnityEngine_Material__HasProperty((UnityEngine_Material_o *)pTVar18,iVar24,(MethodInfo *)0x0)
        ;
        if ((char)bVar14 != '\0') {
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pTVar18,iVar24,fVar33,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae043 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae043 = '\x01';
      }
      if (*(char *)((long)&(pTVar18->fields).m_CanvasRenderer + 2) != '\0') {
        pUVar20 = (UnityEngine_Object_o *)(pTVar18->fields).m_Material;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar14 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          pUVar10 = (pTVar18->fields).m_Material;
          puVar19 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
          pfVar21 = (float *)0x0;
          puVar27 = puVar19;
          System_Action_object____ctor();
          if (pUVar10 == (UnityEngine_Material_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ae046 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ae046 = '\x01';
            }
            pUVar20 = (UnityEngine_Object_o *)*puVar27;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pfVar25 = (float *)0x0;
            bVar14 = UnityEngine_Object__op_Equality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar14 != '\0') {
              return;
            }
            __this_01 = (UnityEngine_Component_o *)*puVar27;
            if (__this_01 != (UnityEngine_Component_o *)0x0) {
              pUVar20 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
              *puVar27 = 0;
              il2cpp_runtime_helper_022b4080(puVar27);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar14 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if ((char)bVar14 != '\0') {
                UnityEngine_Object__Destroy_4e01c60(pUVar20,(MethodInfo *)0x0);
                return;
              }
              UnityEngine_Object__DestroyImmediate_4e01e00(pUVar20,(MethodInfo *)0x0);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            plStack_190 = &TypeInfo_Object;
            pUStack_198 = pUVar20;
            if (g_data_057ae049 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
              g_data_057ae049 = '\x01';
            }
            pvStack_1b0 = (void *)0x0;
            pvStack_1a8 = (void *)0x0;
            pIStack_1c0 = (Il2CppClass *)0x0;
            pIStack_1b8 = (Il2CppClass *)0x0;
            pIStack_1d0 = (Il2CppClass *)0x0;
            pIStack_1c8 = (Il2CppClass *)0x0;
            pvStack_1e0 = (void *)0x0;
            uStack_1d8 = 0;
            pvStack_1f0 = (void *)0x0;
            uStack_1e8 = 0;
            *pfVar25 = INFINITY;
            *extraout_RDX = -INFINITY;
            *pfVar21 = INFINITY;
            *in_R8 = -INFINITY;
            if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if ((__this_01 != (UnityEngine_Component_o *)0x0) && (__this_01[2].monitor != (void *)0x0)) {
              uVar15 = *(uint *)((long)__this_01[2].monitor + 0x18);
              if ((int)*(uint *)&__this_01[1].klass <= (int)uVar15) {
                uVar15 = *(uint *)&__this_01[1].klass;
              }
              if (0 < (int)uVar15) {
                lVar29 = 0x58;
                uVar30 = 0;
                pvVar5 = __this_01[2].monitor;
                do {
                  if (pvVar5 == (void *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    return;
                  }
                  if (*(uint *)((long)pvVar5 + 0x18) <= uVar30) goto label_0432bcf8;
                  if ((*(byte *)((long)pvVar5 + lVar29 + 0x13c) & 1) != 0) {
                    uVar7 = *(uint *)((long)pvVar5 + lVar29);
                    lVar28 = (long)(int)uVar7;
                    uVar8 = *(uint *)((long)pvVar5 + lVar29 + 0x14);
                    uVar23 = (ulong)uVar8;
                    if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pvStack_1b0 = (void *)0x0;
                    pvStack_1a8 = (void *)0x0;
                    pIStack_1c0 = (Il2CppClass *)0x0;
                    pIStack_1b8 = (Il2CppClass *)0x0;
                    pIStack_1d0 = (Il2CppClass *)0x0;
                    pIStack_1c8 = (Il2CppClass *)0x0;
                    pvStack_1e0 = (void *)0x0;
                    uStack_1d8 = 0;
                    pvStack_1f0 = (void *)0x0;
                    uStack_1e8 = 0;
                    if (((-1 < (int)uVar7) &&
                        (pUVar11 = __this_01[4].klass, pUVar11 != (UnityEngine_Component_c *)0x0)) &&
                       (uVar9 = *(uint *)&(pUVar11->_1).namespaze, (int)uVar7 < (int)uVar9)) {
                      if (uVar9 <= uVar7) goto label_0432bcf8;
                      pIVar1 = &(pUVar11->_1).byval_arg + lVar28 * 5;
                      pvStack_1f0 = pIVar1->data;
                      uStack_1e8 = *(undefined8 *)&pIVar1->bits;
                      pIVar1 = &(pUVar11->_1).this_arg + lVar28 * 5;
                      pvStack_1e0 = pIVar1->data;
                      uStack_1d8 = *(undefined8 *)&pIVar1->bits;
                      ppIVar2 = &(pUVar11->_1).element_class + lVar28 * 10;
                      pIStack_1d0 = *ppIVar2;
                      pIStack_1c8 = ppIVar2[1];
                      ppIVar2 = &(pUVar11->_1).declaringType + lVar28 * 10;
                      pIStack_1c0 = *ppIVar2;
                      pIStack_1b8 = ppIVar2[1];
                      ppvVar3 = &(pUVar11->_1).generic_class + lVar28 * 10;
                      pvStack_1b0 = *ppvVar3;
                      pvStack_1a8 = ppvVar3[1];
                      il2cpp_runtime_helper_022b4080(&pvStack_1f0,0);
                      if ((pvStack_1e0 != (void *)0x0) &&
                         ((int)(uVar8 + 3) < (int)*(ulong *)((long)pvStack_1e0 + 0x18))) {
                        uVar22 = *(ulong *)((long)pvStack_1e0 + 0x18) & 0xffffffff;
                        if (uVar22 <= uVar23) {
label_0432bcf8:
                          il2cpp_runtime_helper_022b2ca0();
                          return;
                        }
                        uVar13 = *(undefined8 *)((long)pvStack_1e0 + (long)(int)uVar8 * 0xc + 0x20);
                        fVar31 = (float)uVar13;
                        fVar32 = (float)((ulong)uVar13 >> 0x20);
                        fVar33 = *pfVar25;
                        if (fVar31 <= *pfVar25) {
                          fVar33 = fVar31;
                        }
                        *pfVar25 = fVar33;
                        fVar33 = *extraout_RDX;
                        if (*extraout_RDX <= fVar31) {
                          fVar33 = fVar31;
                        }
                        *extraout_RDX = fVar33;
                        fVar33 = *pfVar21;
                        if (fVar32 <= *pfVar21) {
                          fVar33 = fVar32;
                        }
                        *pfVar21 = fVar33;
                        fVar33 = *in_R8;
                        if (*in_R8 <= fVar32) {
                          fVar33 = fVar32;
                        }
                        *in_R8 = fVar33;
                        if (uVar22 <= uVar23 + 1) goto label_0432bcf8;
                        uVar13 = *(undefined8 *)((long)pvStack_1e0 + (long)(int)(uVar23 + 1) * 0xc + 0x20);
                        fVar31 = (float)uVar13;
                        fVar32 = (float)((ulong)uVar13 >> 0x20);
                        fVar33 = *pfVar25;
                        if (fVar31 <= *pfVar25) {
                          fVar33 = fVar31;
                        }
                        *pfVar25 = fVar33;
                        fVar33 = *extraout_RDX;
                        if (*extraout_RDX <= fVar31) {
                          fVar33 = fVar31;
                        }
                        *extraout_RDX = fVar33;
                        fVar33 = *pfVar21;
                        if (fVar32 <= *pfVar21) {
                          fVar33 = fVar32;
                        }
                        *pfVar21 = fVar33;
                        fVar33 = *in_R8;
                        if (*in_R8 <= fVar32) {
                          fVar33 = fVar32;
                        }
                        *in_R8 = fVar33;
                        if (uVar22 <= uVar23 + 2) goto label_0432bcf8;
                        uVar13 = *(undefined8 *)((long)pvStack_1e0 + (long)(int)(uVar23 + 2) * 0xc + 0x20);
                        fVar31 = (float)uVar13;
                        fVar32 = (float)((ulong)uVar13 >> 0x20);
                        fVar33 = *pfVar25;
                        if (fVar31 <= *pfVar25) {
                          fVar33 = fVar31;
                        }
                        *pfVar25 = fVar33;
                        fVar33 = *extraout_RDX;
                        if (*extraout_RDX <= fVar31) {
                          fVar33 = fVar31;
                        }
                        *extraout_RDX = fVar33;
                        fVar33 = *pfVar21;
                        if (fVar32 <= *pfVar21) {
                          fVar33 = fVar32;
                        }
                        *pfVar21 = fVar33;
                        fVar33 = *in_R8;
                        if (*in_R8 <= fVar32) {
                          fVar33 = fVar32;
                        }
                        *in_R8 = fVar33;
                        if (uVar22 <= uVar23 + 3) goto label_0432bcf8;
                        uVar13 = *(undefined8 *)((long)pvStack_1e0 + (long)(int)(uVar23 + 3) * 0xc + 0x20);
                        fVar31 = (float)uVar13;
                        fVar32 = (float)((ulong)uVar13 >> 0x20);
                        fVar33 = *pfVar25;
                        if (fVar31 <= *pfVar25) {
                          fVar33 = fVar31;
                        }
                        *pfVar25 = fVar33;
                        fVar33 = *extraout_RDX;
                        if (*extraout_RDX <= fVar31) {
                          fVar33 = fVar31;
                        }
                        *extraout_RDX = fVar33;
                        fVar33 = *pfVar21;
                        if (fVar32 <= *pfVar21) {
                          fVar33 = fVar32;
                        }
                        *pfVar21 = fVar33;
                        fVar33 = *in_R8;
                        if (*in_R8 <= fVar32) {
                          fVar33 = fVar32;
                        }
                        *in_R8 = fVar33;
                      }
                    }
                  }
                  uVar30 = uVar30 + 1;
                  lVar29 = lVar29 + 0x178;
                  if (uVar15 == uVar30) {
                    return;
                  }
                  pvVar5 = __this_01[2].monitor;
                } while( true );
              }
            }
            return;
          }
          (*(code *)pUVar10->klass[4]._1.castClass)(pUVar10,puVar19,pUVar10->klass[4]._1.declaringType);
        }
      }
      *(undefined1 *)((long)&(pTVar18->fields).m_CanvasRenderer + 2) = 0;
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$HookPopGradient
// il2cpp: void PatreonEffects_NameEffectController__HookPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432ad60

void PatreonEffects_NameEffectController__HookPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_UI_RectMask2D_o *pUVar6;
  Il2CppClass *pIVar7;
  Il2CppClass *pIVar8;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  UnityEngine_Material_o *pUVar15;
  UnityEngine_Object_o *x;
  long *plVar16;
  void *pvVar17;
  UnityEngine_Component_c *pUVar18;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Vector2_o offset_01;
  UnityEngine_Vector2_o UVar19;
  bool_conflict bVar20;
  uint uVar21;
  PatreonEffects_NameEffectController_o *pPVar22;
  UnityEngine_Object_c *pUVar23;
  UnityEngine_Object_c *pUVar24;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 *puVar25;
  UnityEngine_Object_o *pUVar26;
  float *pfVar27;
  ulong uVar28;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float *extraout_RDX;
  ulong uVar29;
  int32_t iVar30;
  TMPro_TMP_Text_o *pTVar31;
  float *pfVar32;
  PatreonEffects_NameEffectController_o *__this_02;
  TMPro_TMP_Text_o *pTVar33;
  undefined8 *puVar34;
  UnityEngine_Component_o *__this_03;
  float *in_R8;
  long lVar35;
  long lVar36;
  ulong uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  undefined4 in_XMM1_Da;
  undefined4 uVar41;
  undefined4 in_XMM1_Db;
  float fVar42;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  UnityEngine_Quaternion_o value;
  UnityEngine_Color_o UVar43;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o value_02;
  void *pvStack_258;
  undefined8 uStack_250;
  void *pvStack_248;
  undefined8 uStack_240;
  Il2CppClass *pIStack_238;
  Il2CppClass *pIStack_230;
  Il2CppClass *pIStack_228;
  Il2CppClass *pIStack_220;
  void *pvStack_218;
  void *pvStack_210;
  UnityEngine_Object_o *pUStack_200;
  long *plStack_1f8;
  undefined4 uStack_120;
  
  if (g_data_057ae041 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae041 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 2) == '\0') {
    pTVar33 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar20 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar20 == '\0') {
      pTVar33 = (__this->fields).text;
      pPVar22 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      __this_02 = pPVar22;
      System_Action_object____ctor();
      if (pTVar33 == (TMPro_TMP_Text_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae03d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae03d = '\x01';
        }
        pTVar33 = (__this_02->fields).text;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar20 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pTVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 != '\0') {
          return;
        }
        pTVar31 = (__this_02->fields).text;
        if (pTVar31 != (TMPro_TMP_Text_o *)0x0) {
          fVar38 = *(float *)&(pTVar31->fields).m_spriteColor.fields.r / 48.0;
          fVar42 = 0.35;
          if (0.35 <= fVar38) {
            fVar42 = fVar38;
          }
          uVar39 = *(undefined8 *)&(__this_02->fields).popExtrusionColor.fields.a;
          UVar19.fields.y = (float)((ulong)uVar39 >> 0x20) * fVar42;
          UVar19.fields.x = (float)uVar39 * fVar42;
          PatreonEffects_NameEffectController__SyncPopLayer
                    (__this_02,(__this_02->fields).popExtrusionText,UVar19,
                     (UnityEngine_Color_o)
                     *(UnityEngine_Color_Fields *)&(__this_02->fields).popShadowColor.fields.g,method_00);
          uVar4 = (__this_02->fields).popExtrusionColor.fields.g;
          uVar9 = (__this_02->fields).popExtrusionColor.fields.b;
          offset_01.fields.y = (float)uVar9 * fVar42;
          offset_01.fields.x = (float)uVar4 * fVar42;
          PatreonEffects_NameEffectController__SyncPopLayer
                    (__this_02,(__this_02->fields).popShadowText,offset_01,
                     (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this_02->fields).popFaceC.fields.g,
                     method_01);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (*(char *)&(pTVar33->fields).m_CanvasRenderer != '\0') {
          if (g_data_057ae03d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae03d = '\x01';
          }
          pUVar26 = (UnityEngine_Object_o *)(pTVar33->fields).m_Material;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pTVar31 = (TMPro_TMP_Text_o *)0x0;
          bVar20 = UnityEngine_Object__op_Equality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar20 == '\0') {
            pUVar15 = (pTVar33->fields).m_Material;
            if (pUVar15 != (UnityEngine_Material_o *)0x0) {
              fVar38 = *(float *)((long)&pUVar15[0x14].klass + 4) / 48.0;
              fVar42 = 0.35;
              if (0.35 <= fVar38) {
                fVar42 = fVar38;
              }
              uVar5 = (pTVar33->fields).m_Maskable;
              uVar10 = (pTVar33->fields).m_IsMaskingGraphic;
              offset.fields.y = (float)uVar10 * fVar42;
              offset.fields.x = (float)uVar5 * fVar42;
              PatreonEffects_NameEffectController__SyncPopLayer
                        ((PatreonEffects_NameEffectController_o *)pTVar33,
                         (TMPro_TMP_Text_o *)(pTVar33->fields).m_RectTransform,offset,
                         (UnityEngine_Color_o)
                         *(UnityEngine_Color_Fields *)
                          &(pTVar33->fields)._useLegacyMeshGeneration_k__BackingField,method_02);
              pUVar6 = (pTVar33->fields).m_ParentMask;
              offset_00.fields.y = (float)((ulong)pUVar6 >> 0x20) * fVar42;
              offset_00.fields.x = SUB84(pUVar6,0) * fVar42;
              PatreonEffects_NameEffectController__SyncPopLayer
                        ((PatreonEffects_NameEffectController_o *)pTVar33,
                         *(TMPro_TMP_Text_o **)&(pTVar33->fields).m_RaycastPadding.fields.z,offset_00,
                         (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(pTVar33->fields).m_CachedUvs,
                         method_03);
              return;
            }
            uVar39 = il2cpp_runtime_helper_022b2c90();
            uVar41 = in_XMM1_Da;
            if (g_data_057ae040 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ae040 = '\x01';
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar20 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pTVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar20 == '\0') {
              x = pUVar26[1].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar24 = (UnityEngine_Object_c *)0x0;
              bVar20 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar20 == '\0') {
                pTVar33 = pUVar26[1].monitor;
                if (pTVar33 != (TMPro_TMP_Text_o *)0x0) {
                  pUVar24 = (UnityEngine_Object_c *)(pTVar33->klass->vtable)._65_get_text.method;
                  pUVar23 = (UnityEngine_Object_c *)(*(pTVar33->klass->vtable)._65_get_text.methodPtr)();
                  if (pTVar31 != (TMPro_TMP_Text_o *)0x0) {
                    pTVar33 = pTVar31;
                    (*(pTVar31->klass->vtable)._66_set_text.methodPtr)
                              (pTVar31,pUVar23,(pTVar31->klass->vtable)._66_set_text.method);
                    pUVar24 = pUVar23;
                    if (pUVar26[1].monitor != (void *)0x0) {
                      TMPro_TMP_Text__set_font
                                (pTVar31,*(TMPro_TMP_FontAsset_o **)((long)pUVar26[1].monitor + 0xf8),
                                 (MethodInfo *)0x0);
                      pUVar23 = pUVar26[2].klass;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pUVar24 = (UnityEngine_Object_c *)0x0;
                      bVar20 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar20 == '\0') {
                        plVar16 = pUVar26[1].monitor;
                        pTVar33 = (TMPro_TMP_Text_o *)0x0;
                        if (plVar16 == (long *)0x0) goto label_0432b374;
                        pUVar24 = (UnityEngine_Object_c *)
                                  (**(code **)(*plVar16 + 0x568))(plVar16,*(undefined8 *)(*plVar16 + 0x570));
                      }
                      else {
                        pUVar24 = pUVar26[2].klass;
                      }
                      pTVar33 = pTVar31;
                      (*(pTVar31->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                                (pTVar31,pUVar24,(pTVar31->klass->vtable)._68_set_fontSharedMaterial.method);
                      if (pUVar26[1].monitor != (void *)0x0) {
                        pUVar24 = (UnityEngine_Object_c *)0x0;
                        pTVar33 = pTVar31;
                        TMPro_TMP_Text__set_fontSize
                                  (pTVar31,*(float *)((long)pUVar26[1].monitor + 0x1e4),(MethodInfo *)0x0);
                        if (pUVar26[1].monitor != (void *)0x0) {
                          uVar21 = *(uint *)((long)pUVar26[1].monitor + 600);
                          pUVar24 = (UnityEngine_Object_c *)(ulong)uVar21;
                          TMPro_TMP_Text__set_fontStyle(pTVar31,uVar21,(MethodInfo *)0x0);
                          pTVar33 = (TMPro_TMP_Text_o *)0x0;
                          if (pUVar26[1].monitor != (TMPro_TMP_Text_o *)0x0) {
                            uVar21 = TMPro_TMP_Text__get_alignment(pUVar26[1].monitor,(MethodInfo *)0x0);
                            pUVar24 = (UnityEngine_Object_c *)(ulong)uVar21;
                            pTVar33 = pTVar31;
                            TMPro_TMP_Text__set_alignment(pTVar31,uVar21,(MethodInfo *)0x0);
                            if (pUVar26[1].monitor != (void *)0x0) {
                              bVar11 = *(byte *)((long)pUVar26[1].monitor + 0x302);
                              pUVar24 = (UnityEngine_Object_c *)(ulong)bVar11;
                              pTVar33 = pTVar31;
                              TMPro_TMP_Text__set_richText(pTVar31,(uint)bVar11,(MethodInfo *)0x0);
                              if (pUVar26[1].monitor != (void *)0x0) {
                                TMPro_TMP_Text__set_enableWordWrapping
                                          (pTVar31,(uint)*(byte *)((long)pUVar26[1].monitor + 0x2d8),
                                           (MethodInfo *)0x0);
                                pUVar24 = (UnityEngine_Object_c *)0x0;
                                pTVar33 = pTVar31;
                                TMPro_TMP_Text__set_overflowMode(pTVar31,0,(MethodInfo *)0x0);
                                if (pUVar26[1].monitor != (void *)0x0) {
                                  pUVar24 = (UnityEngine_Object_c *)0x0;
                                  pTVar33 = pTVar31;
                                  TMPro_TMP_Text__set_characterSpacing
                                            (pTVar31,*(float *)((long)pUVar26[1].monitor + 0x2a8),
                                             (MethodInfo *)0x0);
                                  if (pUVar26[1].monitor != (void *)0x0) {
                                    pUVar24 = (UnityEngine_Object_c *)0x0;
                                    pTVar33 = pTVar31;
                                    TMPro_TMP_Text__set_wordSpacing
                                              (pTVar31,*(float *)((long)pUVar26[1].monitor + 0x2b4),
                                               (MethodInfo *)0x0);
                                    if (pUVar26[1].monitor != (void *)0x0) {
                                      pUVar24 = (UnityEngine_Object_c *)0x0;
                                      pTVar33 = pTVar31;
                                      TMPro_TMP_Text__set_lineSpacing
                                                (pTVar31,*(float *)((long)pUVar26[1].monitor + 0x2b8),
                                                 (MethodInfo *)0x0);
                                      if (pUVar26[1].monitor != (void *)0x0) {
                                        TMPro_TMP_Text__set_paragraphSpacing
                                                  (pTVar31,*(float *)((long)pUVar26[1].monitor + 0x2cc),
                                                   (MethodInfo *)0x0);
                                        pUVar24 = (UnityEngine_Object_c *)
                                                  (pTVar31->klass->vtable)._23_set_color.method;
                                        (*(pTVar31->klass->vtable)._23_set_color.methodPtr)
                                                  (in_XMM1_Da,pTVar31);
                                        pTVar33 = (TMPro_TMP_Text_o *)0x0;
                                        uVar41 = in_XMM2_Da;
                                        in_XMM1_Db = in_XMM2_Db;
                                        if (pUVar26[1].monitor != (TMPro_TMP_Text_o *)0x0) {
                                          __this_00 = (TMPro_TMP_Text_o *)
                                                      TMPro_TMP_Text__get_rectTransform
                                                                (pUVar26[1].monitor,(MethodInfo *)0x0);
                                          pUVar24 = (UnityEngine_Object_c *)0x0;
                                          __this_01 = TMPro_TMP_Text__get_rectTransform
                                                                (pTVar31,(MethodInfo *)0x0);
                                          pTVar33 = pTVar31;
                                          uVar41 = in_XMM2_Da;
                                          in_XMM1_Db = in_XMM2_Db;
                                          if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                                            pUVar24 = (UnityEngine_Object_c *)0x0;
                                            pTVar33 = __this_00;
                                            UVar19 = UnityEngine_RectTransform__get_anchorMin
                                                               ((UnityEngine_RectTransform_o *)__this_00,
                                                                (MethodInfo *)0x0);
                                            uVar41 = in_XMM2_Da;
                                            in_XMM1_Db = in_XMM2_Db;
                                            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                              UnityEngine_RectTransform__set_anchorMin
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              UVar19 = UnityEngine_RectTransform__get_anchorMax
                                                                 ((UnityEngine_RectTransform_o *)__this_00,
                                                                  (MethodInfo *)0x0);
                                              UnityEngine_RectTransform__set_anchorMax
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              UVar19 = UnityEngine_RectTransform__get_pivot
                                                                 ((UnityEngine_RectTransform_o *)__this_00,
                                                                  (MethodInfo *)0x0);
                                              UnityEngine_RectTransform__set_pivot
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              UVar19 = UnityEngine_RectTransform__get_sizeDelta
                                                                 ((UnityEngine_RectTransform_o *)__this_00,
                                                                  (MethodInfo *)0x0);
                                              UnityEngine_RectTransform__set_sizeDelta
                                                        (__this_01,UVar19,(MethodInfo *)0x0);
                                              UVar44 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                                 ((UnityEngine_RectTransform_o *)__this_00,
                                                                  (MethodInfo *)0x0);
                                              value_02.fields.x = UVar44.fields.x + (float)uVar39;
                                              value_02.fields.y =
                                                   UVar44.fields.y + (float)((ulong)uVar39 >> 0x20);
                                              value_02.fields.z = UVar44.fields.z + 0.0;
                                              UnityEngine_RectTransform__set_anchoredPosition3D
                                                        (__this_01,value_02,(MethodInfo *)0x0);
                                              UVar44 = UnityEngine_Transform__get_localScale
                                                                 ((UnityEngine_Transform_o *)__this_00,
                                                                  (MethodInfo *)0x0);
                                              UnityEngine_Transform__set_localScale
                                                        ((UnityEngine_Transform_o *)__this_01,UVar44,
                                                         (MethodInfo *)0x0);
                                              value = UnityEngine_Transform__get_localRotation
                                                                ((UnityEngine_Transform_o *)__this_00,
                                                                 (MethodInfo *)0x0);
                                              UnityEngine_Transform__set_localRotation
                                                        ((UnityEngine_Transform_o *)__this_01,value,
                                                         (MethodInfo *)0x0);
                                              return;
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
label_0432b374:
                il2cpp_runtime_helper_022b2c90();
                if ((pTVar33->fields).m_Material != (UnityEngine_Material_o *)0x0) {
                  return;
                }
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057ae03f == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ShaderUtilities);
                  g_data_057ae03f = '\x01';
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                iVar30 = 0;
                pTVar31 = pTVar33;
                bVar20 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pTVar33,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar20 != '\0') {
                  return;
                }
                if (pUVar24 != (UnityEngine_Object_c *)0x0) {
                  pIVar7 = (pUVar24->_1).element_class;
                  pIVar8 = (pUVar24->_1).castClass;
                  fVar42 = *(float *)((long)&(pUVar24->_1).parent + 4);
                  pTVar31 = TypeInfo_ShaderUtilities;
                  if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if (pTVar33 != (TMPro_TMP_Text_o *)0x0) {
                    UnityEngine_Material__EnableKeyword
                              ((UnityEngine_Material_o *)pTVar33,
                               (System_String_o *)(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_Canvas,
                               (MethodInfo *)0x0);
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,
                                        (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X,
                                        (MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UnityEngine_Material__EnableKeyword
                                ((UnityEngine_Material_o *)pTVar33,
                                 *(System_String_o **)
                                  &(TypeInfo_ShaderUtilities->fields).m_ParentMask[1].fields.m_LastClipRectCanvasSpace.
                                   fields,(MethodInfo *)0x0);
                    }
                    if (*(int *)((long)&(TypeInfo_ShaderUtilities->fields).m_Corners + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    iVar30 = *(int32_t *)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor;
                    if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UVar43.fields.b = 1.0;
                      UVar43.fields.a = 1.0;
                      UVar43.fields.r = 1.0;
                      UVar43.fields.g = 1.0;
                      UnityEngine_Material__SetColor_4dca510
                                ((UnityEngine_Material_o *)pTVar33,iVar30,UVar43,(MethodInfo *)0x0);
                    }
                    iVar30 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x34;
                    UVar43.fields = *(UnityEngine_Color_Fields *)&(pUVar24->_1).element_class;
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetColor_4dca510
                                ((UnityEngine_Material_o *)pTVar33,iVar30,UVar43,(MethodInfo *)0x0);
                    }
                    iVar30 = *(int32_t *)
                              ((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ClipTargets + 4);
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar33,iVar30,0.16,(MethodInfo *)0x0);
                    }
                    iVar30 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar33,iVar30,0.0,(MethodInfo *)0x0);
                    }
                    iVar30 = *(int32_t *)((long)&((TypeInfo_ShaderUtilities->fields).m_ParentMask)->monitor + 4);
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar33,iVar30,0.02,(MethodInfo *)0x0);
                    }
                    iVar30 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_X;
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      fVar42 = fVar42 * 0.45;
                      fVar38 = 1.0;
                      if (fVar42 <= 1.0) {
                        fVar38 = fVar42;
                      }
                      uStack_120 = SUB84(pIVar8,0);
                      value_00.fields.a = (float)(-(uint)(0.0 <= fVar42) & (uint)fVar38);
                      value_00.fields.b = (float)uStack_120;
                      value_00.fields._0_8_ = pIVar7;
                      UnityEngine_Material__SetColor_4dca510
                                ((UnityEngine_Material_o *)pTVar33,iVar30,value_00,(MethodInfo *)0x0);
                    }
                    iVar30 = (((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Softness.fields.m_Y;
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar33,iVar30,0.0,(MethodInfo *)0x0);
                    }
                    iVar30 = *(int32_t *)((long)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas + 4)
                    ;
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar33,iVar30,0.05,(MethodInfo *)0x0);
                    }
                    iVar30 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).m_Canvas;
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar33,iVar30,0.08,(MethodInfo *)0x0);
                    }
                    iVar30 = *(int32_t *)&(((TypeInfo_ShaderUtilities->fields).m_ParentMask)->fields).field_0x6c;
                    bVar20 = UnityEngine_Material__HasProperty
                                       ((UnityEngine_Material_o *)pTVar33,iVar30,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                ((UnityEngine_Material_o *)pTVar33,iVar30,0.72,(MethodInfo *)0x0);
                    }
                    TMPro_ShaderUtilities__UpdateShaderRatios
                              ((UnityEngine_Material_o *)pTVar33,(MethodInfo *)0x0);
                    return;
                  }
                }
                uVar39 = il2cpp_runtime_helper_022b2c90();
                if (pTVar31 != (TMPro_TMP_Text_o *)0x0) {
                  bVar20 = UnityEngine_Material__HasProperty
                                     ((UnityEngine_Material_o *)pTVar31,iVar30,(MethodInfo *)0x0);
                  if ((char)bVar20 != '\0') {
                    value_01.fields.a = (float)in_XMM1_Db;
                    value_01.fields.b = (float)uVar41;
                    value_01.fields.r = (float)(int)uVar39;
                    value_01.fields.g = (float)(int)((ulong)uVar39 >> 0x20);
                    UnityEngine_Material__SetColor_4dca510
                              ((UnityEngine_Material_o *)pTVar31,iVar30,value_01,(MethodInfo *)0x0);
                    return;
                  }
                  return;
                }
                fVar42 = (float)il2cpp_runtime_helper_022b2c90();
                if (pTVar31 != (TMPro_TMP_Text_o *)0x0) {
                  bVar20 = UnityEngine_Material__HasProperty
                                     ((UnityEngine_Material_o *)pTVar31,iVar30,(MethodInfo *)0x0);
                  if ((char)bVar20 != '\0') {
                    UnityEngine_Material__SetFloat_4dcd3b0
                              ((UnityEngine_Material_o *)pTVar31,iVar30,fVar42,(MethodInfo *)0x0);
                    return;
                  }
                  return;
                }
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057ae043 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057ae043 = '\x01';
                }
                if (*(char *)((long)&(pTVar31->fields).m_CanvasRenderer + 2) != '\0') {
                  pUVar26 = (UnityEngine_Object_o *)(pTVar31->fields).m_Material;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar20 = UnityEngine_Object__op_Inequality
                                     (pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar20 != '\0') {
                    pUVar15 = (pTVar31->fields).m_Material;
                    puVar25 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
                    pfVar27 = (float *)0x0;
                    puVar34 = puVar25;
                    System_Action_object____ctor();
                    if (pUVar15 == (UnityEngine_Material_o *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057ae046 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                        g_data_057ae046 = '\x01';
                      }
                      pUVar26 = (UnityEngine_Object_o *)*puVar34;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pfVar32 = (float *)0x0;
                      bVar20 = UnityEngine_Object__op_Equality
                                         (pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar20 != '\0') {
                        return;
                      }
                      __this_03 = (UnityEngine_Component_o *)*puVar34;
                      if (__this_03 != (UnityEngine_Component_o *)0x0) {
                        pUVar26 = (UnityEngine_Object_o *)
                                  UnityEngine_Component__get_gameObject(__this_03,(MethodInfo *)0x0);
                        *puVar34 = 0;
                        il2cpp_runtime_helper_022b4080(puVar34);
                        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar20 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if ((char)bVar20 != '\0') {
                          UnityEngine_Object__Destroy_4e01c60(pUVar26,(MethodInfo *)0x0);
                          return;
                        }
                        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar26,(MethodInfo *)0x0);
                        return;
                      }
                      il2cpp_runtime_helper_022b2c90();
                      plStack_1f8 = &TypeInfo_Object;
                      pUStack_200 = pUVar26;
                      if (g_data_057ae049 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                        g_data_057ae049 = '\x01';
                      }
                      pvStack_218 = (void *)0x0;
                      pvStack_210 = (void *)0x0;
                      pIStack_228 = (Il2CppClass *)0x0;
                      pIStack_220 = (Il2CppClass *)0x0;
                      pIStack_238 = (Il2CppClass *)0x0;
                      pIStack_230 = (Il2CppClass *)0x0;
                      pvStack_248 = (void *)0x0;
                      uStack_240 = 0;
                      pvStack_258 = (void *)0x0;
                      uStack_250 = 0;
                      *pfVar32 = INFINITY;
                      *extraout_RDX = -INFINITY;
                      *pfVar27 = INFINITY;
                      *in_R8 = -INFINITY;
                      if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if ((__this_03 != (UnityEngine_Component_o *)0x0) &&
                         (__this_03[2].monitor != (void *)0x0)) {
                        uVar21 = *(uint *)((long)__this_03[2].monitor + 0x18);
                        if ((int)*(uint *)&__this_03[1].klass <= (int)uVar21) {
                          uVar21 = *(uint *)&__this_03[1].klass;
                        }
                        if (0 < (int)uVar21) {
                          lVar36 = 0x58;
                          uVar37 = 0;
                          pvVar17 = __this_03[2].monitor;
                          do {
                            if (pvVar17 == (void *)0x0) {
                              il2cpp_runtime_helper_022b2c90();
                              return;
                            }
                            if (*(uint *)((long)pvVar17 + 0x18) <= uVar37) goto label_0432bcf8;
                            if ((*(byte *)((long)pvVar17 + lVar36 + 0x13c) & 1) != 0) {
                              uVar12 = *(uint *)((long)pvVar17 + lVar36);
                              lVar35 = (long)(int)uVar12;
                              uVar13 = *(uint *)((long)pvVar17 + lVar36 + 0x14);
                              uVar29 = (ulong)uVar13;
                              if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pvStack_218 = (void *)0x0;
                              pvStack_210 = (void *)0x0;
                              pIStack_228 = (Il2CppClass *)0x0;
                              pIStack_220 = (Il2CppClass *)0x0;
                              pIStack_238 = (Il2CppClass *)0x0;
                              pIStack_230 = (Il2CppClass *)0x0;
                              pvStack_248 = (void *)0x0;
                              uStack_240 = 0;
                              pvStack_258 = (void *)0x0;
                              uStack_250 = 0;
                              if (((-1 < (int)uVar12) &&
                                  (pUVar18 = __this_03[4].klass, pUVar18 != (UnityEngine_Component_c *)0x0))
                                 && (uVar14 = *(uint *)&(pUVar18->_1).namespaze, (int)uVar12 < (int)uVar14)) {
                                if (uVar14 <= uVar12) goto label_0432bcf8;
                                pIVar1 = &(pUVar18->_1).byval_arg + lVar35 * 5;
                                pvStack_258 = pIVar1->data;
                                uStack_250 = *(undefined8 *)&pIVar1->bits;
                                pIVar1 = &(pUVar18->_1).this_arg + lVar35 * 5;
                                pvStack_248 = pIVar1->data;
                                uStack_240 = *(undefined8 *)&pIVar1->bits;
                                ppIVar2 = &(pUVar18->_1).element_class + lVar35 * 10;
                                pIStack_238 = *ppIVar2;
                                pIStack_230 = ppIVar2[1];
                                ppIVar2 = &(pUVar18->_1).declaringType + lVar35 * 10;
                                pIStack_228 = *ppIVar2;
                                pIStack_220 = ppIVar2[1];
                                ppvVar3 = &(pUVar18->_1).generic_class + lVar35 * 10;
                                pvStack_218 = *ppvVar3;
                                pvStack_210 = ppvVar3[1];
                                il2cpp_runtime_helper_022b4080(&pvStack_258,0);
                                if ((pvStack_248 != (void *)0x0) &&
                                   ((int)(uVar13 + 3) < (int)*(ulong *)((long)pvStack_248 + 0x18))) {
                                  uVar28 = *(ulong *)((long)pvStack_248 + 0x18) & 0xffffffff;
                                  if (uVar28 <= uVar29) {
label_0432bcf8:
                                    il2cpp_runtime_helper_022b2ca0();
                                    return;
                                  }
                                  uVar39 = *(undefined8 *)((long)pvStack_248 + (long)(int)uVar13 * 0xc + 0x20)
                                  ;
                                  fVar38 = (float)uVar39;
                                  fVar40 = (float)((ulong)uVar39 >> 0x20);
                                  fVar42 = *pfVar32;
                                  if (fVar38 <= *pfVar32) {
                                    fVar42 = fVar38;
                                  }
                                  *pfVar32 = fVar42;
                                  fVar42 = *extraout_RDX;
                                  if (*extraout_RDX <= fVar38) {
                                    fVar42 = fVar38;
                                  }
                                  *extraout_RDX = fVar42;
                                  fVar42 = *pfVar27;
                                  if (fVar40 <= *pfVar27) {
                                    fVar42 = fVar40;
                                  }
                                  *pfVar27 = fVar42;
                                  fVar42 = *in_R8;
                                  if (*in_R8 <= fVar40) {
                                    fVar42 = fVar40;
                                  }
                                  *in_R8 = fVar42;
                                  if (uVar28 <= uVar29 + 1) goto label_0432bcf8;
                                  uVar39 = *(undefined8 *)
                                            ((long)pvStack_248 + (long)(int)(uVar29 + 1) * 0xc + 0x20);
                                  fVar38 = (float)uVar39;
                                  fVar40 = (float)((ulong)uVar39 >> 0x20);
                                  fVar42 = *pfVar32;
                                  if (fVar38 <= *pfVar32) {
                                    fVar42 = fVar38;
                                  }
                                  *pfVar32 = fVar42;
                                  fVar42 = *extraout_RDX;
                                  if (*extraout_RDX <= fVar38) {
                                    fVar42 = fVar38;
                                  }
                                  *extraout_RDX = fVar42;
                                  fVar42 = *pfVar27;
                                  if (fVar40 <= *pfVar27) {
                                    fVar42 = fVar40;
                                  }
                                  *pfVar27 = fVar42;
                                  fVar42 = *in_R8;
                                  if (*in_R8 <= fVar40) {
                                    fVar42 = fVar40;
                                  }
                                  *in_R8 = fVar42;
                                  if (uVar28 <= uVar29 + 2) goto label_0432bcf8;
                                  uVar39 = *(undefined8 *)
                                            ((long)pvStack_248 + (long)(int)(uVar29 + 2) * 0xc + 0x20);
                                  fVar38 = (float)uVar39;
                                  fVar40 = (float)((ulong)uVar39 >> 0x20);
                                  fVar42 = *pfVar32;
                                  if (fVar38 <= *pfVar32) {
                                    fVar42 = fVar38;
                                  }
                                  *pfVar32 = fVar42;
                                  fVar42 = *extraout_RDX;
                                  if (*extraout_RDX <= fVar38) {
                                    fVar42 = fVar38;
                                  }
                                  *extraout_RDX = fVar42;
                                  fVar42 = *pfVar27;
                                  if (fVar40 <= *pfVar27) {
                                    fVar42 = fVar40;
                                  }
                                  *pfVar27 = fVar42;
                                  fVar42 = *in_R8;
                                  if (*in_R8 <= fVar40) {
                                    fVar42 = fVar40;
                                  }
                                  *in_R8 = fVar42;
                                  if (uVar28 <= uVar29 + 3) goto label_0432bcf8;
                                  uVar39 = *(undefined8 *)
                                            ((long)pvStack_248 + (long)(int)(uVar29 + 3) * 0xc + 0x20);
                                  fVar38 = (float)uVar39;
                                  fVar40 = (float)((ulong)uVar39 >> 0x20);
                                  fVar42 = *pfVar32;
                                  if (fVar38 <= *pfVar32) {
                                    fVar42 = fVar38;
                                  }
                                  *pfVar32 = fVar42;
                                  fVar42 = *extraout_RDX;
                                  if (*extraout_RDX <= fVar38) {
                                    fVar42 = fVar38;
                                  }
                                  *extraout_RDX = fVar42;
                                  fVar42 = *pfVar27;
                                  if (fVar40 <= *pfVar27) {
                                    fVar42 = fVar40;
                                  }
                                  *pfVar27 = fVar42;
                                  fVar42 = *in_R8;
                                  if (*in_R8 <= fVar40) {
                                    fVar42 = fVar40;
                                  }
                                  *in_R8 = fVar42;
                                }
                              }
                            }
                            uVar37 = uVar37 + 1;
                            lVar36 = lVar36 + 0x178;
                            if (uVar21 == uVar37) {
                              return;
                            }
                            pvVar17 = __this_03[2].monitor;
                          } while( true );
                        }
                      }
                      return;
                    }
                    (*(code *)pUVar15->klass[4]._1.castClass)
                              (pUVar15,puVar25,pUVar15->klass[4]._1.declaringType);
                  }
                }
                *(undefined1 *)((long)&(pTVar31->fields).m_CanvasRenderer + 2) = 0;
                return;
              }
            }
            return;
          }
        }
        return;
      }
      (*(pTVar33->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar33,pPVar22,(pTVar33->klass->vtable)._78_add_OnPreRenderText.method);
      *(undefined1 *)((long)&(__this->fields).popActive + 2) = 1;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearPop
// il2cpp: void PatreonEffects_NameEffectController__ClearPop (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329c80

void PatreonEffects_NameEffectController__ClearPop
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  if (g_data_057ae042 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae042 = '\x01';
  }
  *(undefined1 *)&(__this->fields).popActive = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,method);
  if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popShadowText,method);
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popExtrusionText,method);
  return;
}


// PatreonEffects.NameEffectController$$ClearOutline
// il2cpp: void PatreonEffects_NameEffectController__ClearOutline (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329a20

void PatreonEffects_NameEffectController__ClearOutline
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  char cVar1;
  
  cVar1 = *(char *)((long)&(__this->fields).popActive + 1);
  *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,method);
  if (cVar1 != '\0') {
    PatreonEffects_NameEffectController__ClearShaderMaterial(__this,method);
    return;
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearPopGradient
// il2cpp: void PatreonEffects_NameEffectController__ClearPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432b7f0

void PatreonEffects_NameEffectController__ClearPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppClass **ppIVar2;
  void **ppvVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TMPro_TMP_Text_o *pTVar8;
  void *pvVar9;
  UnityEngine_Component_c *pUVar10;
  bool_conflict bVar11;
  uint uVar12;
  undefined8 *puVar13;
  UnityEngine_Object_o *pUVar14;
  float *pfVar15;
  ulong uVar16;
  float *extraout_RDX;
  ulong uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  UnityEngine_Component_o *__this_00;
  float *in_R8;
  long lVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  Il2CppClass *pIStack_a8;
  Il2CppClass *pIStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  void *pvStack_88;
  void *pvStack_80;
  UnityEngine_Object_o *pUStack_70;
  long *plStack_68;
  
  if (g_data_057ae043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyPopFaceGradient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae043 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 2) != '\0') {
    pTVar8 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pTVar8 = (__this->fields).text;
      puVar13 = (undefined8 *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      pfVar15 = (float *)0x0;
      puVar19 = puVar13;
      System_Action_object____ctor();
      if (pTVar8 == (TMPro_TMP_Text_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae046 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae046 = '\x01';
        }
        pUVar14 = (UnityEngine_Object_o *)*puVar19;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pfVar18 = (float *)0x0;
        bVar11 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return;
        }
        __this_00 = (UnityEngine_Component_o *)*puVar19;
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          pUVar14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0)
          ;
          *puVar19 = 0;
          il2cpp_runtime_helper_022b4080(puVar19);
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar11 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar14,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_68 = &TypeInfo_Object;
        pUStack_70 = pUVar14;
        if (g_data_057ae049 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
          g_data_057ae049 = '\x01';
        }
        pvStack_88 = (void *)0x0;
        pvStack_80 = (void *)0x0;
        pIStack_98 = (Il2CppClass *)0x0;
        pIStack_90 = (Il2CppClass *)0x0;
        pIStack_a8 = (Il2CppClass *)0x0;
        pIStack_a0 = (Il2CppClass *)0x0;
        pvStack_b8 = (void *)0x0;
        uStack_b0 = 0;
        pvStack_c8 = (void *)0x0;
        uStack_c0 = 0;
        *pfVar18 = INFINITY;
        *extraout_RDX = -INFINITY;
        *pfVar15 = INFINITY;
        *in_R8 = -INFINITY;
        if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((__this_00 != (UnityEngine_Component_o *)0x0) && (__this_00[2].monitor != (void *)0x0)) {
          uVar12 = *(uint *)((long)__this_00[2].monitor + 0x18);
          if ((int)*(uint *)&__this_00[1].klass <= (int)uVar12) {
            uVar12 = *(uint *)&__this_00[1].klass;
          }
          if (0 < (int)uVar12) {
            lVar21 = 0x58;
            uVar22 = 0;
            pvVar9 = __this_00[2].monitor;
            do {
              if (pvVar9 == (void *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                return;
              }
              if (*(uint *)((long)pvVar9 + 0x18) <= uVar22) goto label_0432bcf8;
              if ((*(byte *)((long)pvVar9 + lVar21 + 0x13c) & 1) != 0) {
                uVar5 = *(uint *)((long)pvVar9 + lVar21);
                lVar20 = (long)(int)uVar5;
                uVar6 = *(uint *)((long)pvVar9 + lVar21 + 0x14);
                uVar17 = (ulong)uVar6;
                if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pvStack_88 = (void *)0x0;
                pvStack_80 = (void *)0x0;
                pIStack_98 = (Il2CppClass *)0x0;
                pIStack_90 = (Il2CppClass *)0x0;
                pIStack_a8 = (Il2CppClass *)0x0;
                pIStack_a0 = (Il2CppClass *)0x0;
                pvStack_b8 = (void *)0x0;
                uStack_b0 = 0;
                pvStack_c8 = (void *)0x0;
                uStack_c0 = 0;
                if (((-1 < (int)uVar5) &&
                    (pUVar10 = __this_00[4].klass, pUVar10 != (UnityEngine_Component_c *)0x0)) &&
                   (uVar7 = *(uint *)&(pUVar10->_1).namespaze, (int)uVar5 < (int)uVar7)) {
                  if (uVar7 <= uVar5) goto label_0432bcf8;
                  pIVar1 = &(pUVar10->_1).byval_arg + lVar20 * 5;
                  pvStack_c8 = pIVar1->data;
                  uStack_c0 = *(undefined8 *)&pIVar1->bits;
                  pIVar1 = &(pUVar10->_1).this_arg + lVar20 * 5;
                  pvStack_b8 = pIVar1->data;
                  uStack_b0 = *(undefined8 *)&pIVar1->bits;
                  ppIVar2 = &(pUVar10->_1).element_class + lVar20 * 10;
                  pIStack_a8 = *ppIVar2;
                  pIStack_a0 = ppIVar2[1];
                  ppIVar2 = &(pUVar10->_1).declaringType + lVar20 * 10;
                  pIStack_98 = *ppIVar2;
                  pIStack_90 = ppIVar2[1];
                  ppvVar3 = &(pUVar10->_1).generic_class + lVar20 * 10;
                  pvStack_88 = *ppvVar3;
                  pvStack_80 = ppvVar3[1];
                  il2cpp_runtime_helper_022b4080(&pvStack_c8,0);
                  if ((pvStack_b8 != (void *)0x0) &&
                     ((int)(uVar6 + 3) < (int)*(ulong *)((long)pvStack_b8 + 0x18))) {
                    uVar16 = *(ulong *)((long)pvStack_b8 + 0x18) & 0xffffffff;
                    if (uVar16 <= uVar17) {
label_0432bcf8:
                      il2cpp_runtime_helper_022b2ca0();
                      return;
                    }
                    uVar4 = *(undefined8 *)((long)pvStack_b8 + (long)(int)uVar6 * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *pfVar18;
                    if (fVar23 <= *pfVar18) {
                      fVar25 = fVar23;
                    }
                    *pfVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                    if (uVar16 <= uVar17 + 1) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_b8 + (long)(int)(uVar17 + 1) * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *pfVar18;
                    if (fVar23 <= *pfVar18) {
                      fVar25 = fVar23;
                    }
                    *pfVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                    if (uVar16 <= uVar17 + 2) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_b8 + (long)(int)(uVar17 + 2) * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *pfVar18;
                    if (fVar23 <= *pfVar18) {
                      fVar25 = fVar23;
                    }
                    *pfVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                    if (uVar16 <= uVar17 + 3) goto label_0432bcf8;
                    uVar4 = *(undefined8 *)((long)pvStack_b8 + (long)(int)(uVar17 + 3) * 0xc + 0x20);
                    fVar23 = (float)uVar4;
                    fVar24 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = *pfVar18;
                    if (fVar23 <= *pfVar18) {
                      fVar25 = fVar23;
                    }
                    *pfVar18 = fVar25;
                    fVar25 = *extraout_RDX;
                    if (*extraout_RDX <= fVar23) {
                      fVar25 = fVar23;
                    }
                    *extraout_RDX = fVar25;
                    fVar25 = *pfVar15;
                    if (fVar24 <= *pfVar15) {
                      fVar25 = fVar24;
                    }
                    *pfVar15 = fVar25;
                    fVar25 = *in_R8;
                    if (*in_R8 <= fVar24) {
                      fVar25 = fVar24;
                    }
                    *in_R8 = fVar25;
                  }
                }
              }
              uVar22 = uVar22 + 1;
              lVar21 = lVar21 + 0x178;
              if (uVar12 == uVar22) {
                return;
              }
              pvVar9 = __this_00[2].monitor;
            } while( true );
          }
        }
        return;
      }
      (*(pTVar8->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar8,puVar13,(pTVar8->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  *(undefined1 *)((long)&(__this->fields).popActive + 2) = 0;
  return;
}


// PatreonEffects.NameEffectController$$HookEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__HookEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329ef0

void PatreonEffects_NameEffectController__HookEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  ulong uVar1;
  TMPro_TMP_MeshInfo_Fields *pTVar2;
  UnityEngine_Vector3_array **ppUVar3;
  UnityEngine_Vector4_array **ppUVar4;
  UnityEngine_Vector2_array **ppUVar5;
  System_Int32_array **ppSVar6;
  float fVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TMPro_TMP_Text_o *pTVar12;
  UnityEngine_Object_o *pUVar13;
  TMPro_TMP_CharacterInfo_array *pTVar14;
  TMPro_TMP_MeshInfo_array *pTVar15;
  Il2CppClass *pIVar16;
  void *pvVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  byte bVar23;
  bool_conflict bVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  PatreonEffects_NameEffectController_o *pPVar28;
  MethodInfo *pMVar29;
  MethodInfo *pMVar30;
  MethodInfo *in_R9;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  long local_a8;
  undefined1 local_a0 [72];
  UnityEngine_Material_o *pUStack_58;
  PatreonEffects_NameEffectController_o *pPStack_48;
  
  if (g_data_057ae044 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateEffectVertexData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae044 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 3) == '\0') {
    pTVar12 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar24 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar24 == '\0') {
      pTVar12 = (__this->fields).text;
      lVar26 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      pPVar28 = __this;
      lVar27 = lVar26;
      System_Action_object____ctor();
      if (pTVar12 == (TMPro_TMP_Text_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pPStack_48 = __this;
        if (g_data_057ae048 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae048 = '\x01';
        }
        local_ac = 0.0;
        local_b0 = 0.0;
        local_b4 = 0.0;
        local_b8 = 0.0;
        local_a0._64_8_ = (System_Int32_array *)0x0;
        pUStack_58 = (UnityEngine_Material_o *)0x0;
        local_a0._48_8_ = (UnityEngine_Vector2_array *)0x0;
        local_a0._56_8_ = (Il2CppRGCTXData *)0x0;
        local_a0._32_8_ = (UnityEngine_Vector4_array *)0x0;
        local_a0._40_8_ = (UnityEngine_Vector2_array *)0x0;
        local_a0._16_8_ = (UnityEngine_Vector3_array *)0x0;
        local_a0._24_8_ = (UnityEngine_Vector3_array *)0x0;
        local_a0._0_8_ = (UnityEngine_Mesh_o *)0x0;
        local_a0._8_8_ = (Il2CppMethodPointer)0x0;
        pUVar13 = *(UnityEngine_Object_o **)(lVar27 + 0x40);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar24 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((char)bVar24 == '\0') && (pPVar28 != (PatreonEffects_NameEffectController_o *)0x0)) {
          if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar24 = PatreonEffects_NameEffectController__TryLocalBounds
                             ((TMPro_TMP_TextInfo_o *)pPVar28,&local_ac,&local_b0,&local_b4,&local_b8,in_R9);
          fVar19 = local_ac;
          fVar33 = local_b0;
          fVar18 = local_b4;
          fVar34 = local_b8;
          if ((char)bVar24 != '\0') {
            pMVar30 = TypeInfo_NameEffectController;
            if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pTVar14 = (TMPro_TMP_CharacterInfo_array *)(pPVar28->fields).originalFontAsset;
            }
            else {
              pTVar14 = (TMPro_TMP_CharacterInfo_array *)(pPVar28->fields).originalFontAsset;
            }
            if (pTVar14 != (TMPro_TMP_CharacterInfo_array *)0x0) {
              uVar9 = *(uint *)&(pPVar28->fields).m_CancellationTokenSource;
              uVar25 = (uint)pTVar14->max_length;
              if ((int)uVar9 <= (int)uVar25) {
                uVar25 = uVar9;
              }
              if (0 < (int)uVar25) {
                fVar33 = fVar33 - fVar19;
                fVar34 = fVar34 - fVar18;
                if (fVar33 <= 0.001) {
                  fVar33 = 0.001;
                }
                if (fVar34 <= 0.001) {
                  fVar34 = 0.001;
                }
                lVar27 = 0x58;
                uVar31 = 0;
                pTVar14 = (TMPro_TMP_CharacterInfo_array *)(pPVar28->fields).originalFontAsset;
                pMVar29 = TypeInfo_NameEffectController;
                while (TypeInfo_NameEffectController = pMVar29, pTVar14 != (TMPro_TMP_CharacterInfo_array *)0x0) {
                  if ((uint)pTVar14->max_length <= uVar31) goto label_0432a626;
                  if ((*(byte *)((long)&pTVar14->m_Items[0].fields.topRight.fields.y + lVar27) & 1) != 0) {
                    uVar9 = *(uint *)((long)pTVar14->m_Items + lVar27 + -0x20);
                    uVar10 = *(uint *)((long)pTVar14->m_Items + lVar27 + -0xc);
                    uVar32 = (ulong)uVar10;
                    pMVar30 = pMVar29;
                    if (*(int *)((long)&pMVar29[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      pMVar30 = pMVar29;
                    }
                    local_a0._64_8_ = (System_Int32_array *)0x0;
                    pUStack_58 = (UnityEngine_Material_o *)0x0;
                    local_a0._48_8_ = (UnityEngine_Vector2_array *)0x0;
                    local_a0._56_8_ = (Il2CppRGCTXData *)0x0;
                    local_a0._32_8_ = (UnityEngine_Vector4_array *)0x0;
                    local_a0._40_8_ = (UnityEngine_Vector2_array *)0x0;
                    local_a0._16_8_ = (UnityEngine_Vector3_array *)0x0;
                    local_a0._24_8_ = (UnityEngine_Vector3_array *)0x0;
                    local_a0._0_8_ = (UnityEngine_Mesh_o *)0x0;
                    local_a0._8_8_ = (Il2CppMethodPointer)0x0;
                    if (((-1 < (int)uVar9) &&
                        (pTVar15 = *(TMPro_TMP_MeshInfo_array **)&(pPVar28->fields).popActive,
                        pTVar15 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
                       (uVar11 = (uint)pTVar15->max_length, (int)uVar9 < (int)uVar11)) {
                      if (uVar11 <= uVar9) goto label_0432a626;
                      pTVar2 = &pTVar15->m_Items[(int)uVar9].fields;
                      local_a0._0_8_ = pTVar2->mesh;
                      local_a0._8_8_ = *(undefined8 *)&pTVar2->vertexCount;
                      ppUVar3 = &pTVar15->m_Items[(int)uVar9].fields.vertices;
                      local_a0._16_8_ = *ppUVar3;
                      local_a0._24_8_ = ppUVar3[1];
                      ppUVar4 = &pTVar15->m_Items[(int)uVar9].fields.tangents;
                      local_a0._32_8_ = *ppUVar4;
                      local_a0._40_8_ = ppUVar4[1];
                      ppUVar5 = &pTVar15->m_Items[(int)uVar9].fields.uvs2;
                      local_a0._48_8_ = *ppUVar5;
                      local_a0._56_8_ = ((_union_13 *)(ppUVar5 + 1))->rgctx_data;
                      ppSVar6 = &pTVar15->m_Items[(int)uVar9].fields.triangles;
                      local_a0._64_8_ = *ppSVar6;
                      pUStack_58 = (UnityEngine_Material_o *)ppSVar6[1];
                      pMVar30 = (MethodInfo *)local_a0;
                      il2cpp_runtime_helper_022b4080();
                      uVar21 = local_a0._56_8_;
                      uVar20 = local_a0._16_8_;
                      if (((Il2CppRGCTXData *)local_a0._56_8_ != (Il2CppRGCTXData *)0x0) &&
                         ((UnityEngine_Vector3_array *)local_a0._16_8_ != (UnityEngine_Vector3_array *)0x0)) {
                        if (((int)(uVar10 + 3) <
                             (int)((Il2CppRGCTXData *)(local_a0._56_8_ + 0x18))->rgctxDataDummy) &&
                           ((int)(uVar10 + 3) < (int)*(il2cpp_array_size_t *)(local_a0._16_8_ + 0x18))) {
                          if ((((ulong)((Il2CppRGCTXData *)(local_a0._56_8_ + 0x18))->rgctxDataDummy &
                               0xffffffff) <= uVar32) ||
                             ((*(il2cpp_array_size_t *)(local_a0._16_8_ + 0x18) & 0xffffffff) <= uVar32)) {
label_0432a626:
                            il2cpp_runtime_helper_022b2ca0();
                            return;
                          }
                          lVar26 = (long)(int)uVar10;
                          bVar8 = *(byte *)(local_a0._56_8_ + lVar26 * 4 + 0x23);
                          fVar7 = ((UnityEngine_Vector3_o *)(local_a0._16_8_ + 0x20))[lVar26].fields.x;
                          pMVar30 = TypeInfo_NameEffectController;
                          if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar22 = PatreonEffects_NameEffectController__ToByte
                                             ((fVar7 - fVar19) / fVar33,pMVar30);
                          if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar32) ||
                             (bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 ((((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar26].fields.y
                                                  - fVar18) / fVar34,pMVar30),
                             *(uint *)(uVar21 + 0x18) <= uVar32)) goto label_0432a626;
                          *(uint *)(uVar21 + lVar26 * 4 + 0x20) =
                               (uint)bVar22 | (uint)bVar8 << 0x18 | (uint)bVar23 << 8 | 0xff0000;
                          uVar1 = uVar32 + 1;
                          if ((*(uint *)(uVar21 + 0x18) <= uVar1) ||
                             ((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1)) goto label_0432a626;
                          lVar26 = (long)(int)uVar1;
                          bVar8 = *(byte *)(uVar21 + lVar26 * 4 + 0x23);
                          local_a8 = lVar26 * 3;
                          fVar7 = ((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar26].fields.x;
                          pMVar30 = TypeInfo_NameEffectController;
                          if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar22 = PatreonEffects_NameEffectController__ToByte
                                             ((fVar7 - fVar19) / fVar33,pMVar30);
                          if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1) ||
                             (bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 (((&(((UnityEngine_Vector3_o *)(uVar20 + 0x20))->fields).y)
                                                   [local_a8] - fVar18) / fVar34,pMVar30),
                             *(uint *)(uVar21 + 0x18) <= uVar1)) goto label_0432a626;
                          *(uint *)(uVar21 + lVar26 * 4 + 0x20) =
                               (uint)bVar22 | (uint)bVar8 << 0x18 | (uint)bVar23 << 8 | 0xff0000;
                          uVar1 = uVar32 + 2;
                          if ((*(uint *)(uVar21 + 0x18) <= uVar1) ||
                             ((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1)) goto label_0432a626;
                          lVar26 = (long)(int)uVar1;
                          bVar8 = *(byte *)(uVar21 + lVar26 * 4 + 0x23);
                          local_a8 = lVar26 * 3;
                          fVar7 = ((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar26].fields.x;
                          pMVar30 = TypeInfo_NameEffectController;
                          if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar22 = PatreonEffects_NameEffectController__ToByte
                                             ((fVar7 - fVar19) / fVar33,pMVar30);
                          if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar1) ||
                             (bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 (((&(((UnityEngine_Vector3_o *)(uVar20 + 0x20))->fields).y)
                                                   [local_a8] - fVar18) / fVar34,pMVar30),
                             *(uint *)(uVar21 + 0x18) <= uVar1)) goto label_0432a626;
                          *(uint *)(uVar21 + lVar26 * 4 + 0x20) =
                               (uint)bVar22 | (uint)bVar8 << 0x18 | (uint)bVar23 << 8 | 0xff0000;
                          uVar32 = uVar32 + 3;
                          if ((*(uint *)(uVar21 + 0x18) <= uVar32) ||
                             ((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar32)) goto label_0432a626;
                          lVar26 = (long)(int)uVar32;
                          bVar8 = *(byte *)(uVar21 + lVar26 * 4 + 0x23);
                          fVar7 = ((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar26].fields.x;
                          pMVar30 = TypeInfo_NameEffectController;
                          if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar22 = PatreonEffects_NameEffectController__ToByte
                                             ((fVar7 - fVar19) / fVar33,pMVar30);
                          if (((uint)*(il2cpp_array_size_t *)(uVar20 + 0x18) <= uVar32) ||
                             (bVar23 = PatreonEffects_NameEffectController__ToByte
                                                 ((((UnityEngine_Vector3_o *)(uVar20 + 0x20))[lVar26].fields.y
                                                  - fVar18) / fVar34,pMVar30),
                             *(uint *)(uVar21 + 0x18) <= uVar32)) goto label_0432a626;
                          *(uint *)(uVar21 + lVar26 * 4 + 0x20) =
                               (uint)bVar22 | (uint)bVar8 << 0x18 | (uint)bVar23 << 8 | 0xff0000;
                        }
                      }
                    }
                  }
                  uVar31 = uVar31 + 1;
                  lVar27 = lVar27 + 0x178;
                  if (uVar25 == uVar31) {
                    return;
                  }
                  pMVar29 = TypeInfo_NameEffectController;
                  pTVar14 = (TMPro_TMP_CharacterInfo_array *)(pPVar28->fields).originalFontAsset;
                }
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057ae047 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057ae047 = '\x01';
                }
                pIVar16 = pMVar30->klass;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar24 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pIVar16,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar24 != '\0') {
                  pUVar13 = (UnityEngine_Object_o *)pMVar30->parameters;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pMVar29 = (MethodInfo *)0x0;
                  bVar24 = UnityEngine_Object__op_Inequality
                                     (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar24 != '\0') {
                    pIVar16 = pMVar30->klass;
                    if (pIVar16 != (Il2CppClass *)0x0) {
                      pMVar29 = (MethodInfo *)pMVar30->parameters;
                      pvVar17 = (pIVar16->_1).image;
                      (**(code **)((long)pvVar17 + 0x578))
                                (pIVar16,pMVar29,*(undefined8 *)((long)pvVar17 + 0x580));
                      pIVar16 = pMVar30->klass;
                      if (pIVar16 != (Il2CppClass *)0x0) {
                        pvVar17 = (pIVar16->_1).image;
                        (**(code **)((long)pvVar17 + 0x7d8))
                                  (pIVar16,0,0,*(undefined8 *)((long)pvVar17 + 0x7e0));
                        goto label_0432a71e;
                      }
                    }
                    pPVar28 = (PatreonEffects_NameEffectController_o *)0x0;
                    il2cpp_runtime_helper_022b2c90();
                    PatreonEffects_NameEffectController__Clear(pPVar28,pMVar29);
                    return;
                  }
                }
label_0432a71e:
                pUVar13 = (pMVar30->field8_0x40).genericMethod;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar24 = UnityEngine_Object__op_Inequality
                                   (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar24 != '\0') {
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar24 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  pUVar13 = (pMVar30->field8_0x40).genericMethod;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if ((char)bVar24 == '\0') {
                    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar13,(MethodInfo *)0x0);
                  }
                  else {
                    UnityEngine_Object__Destroy_4e01c60(pUVar13,(MethodInfo *)0x0);
                  }
                }
                (pMVar30->field8_0x40).genericMethod = (void *)0x0;
                il2cpp_runtime_helper_022b4080(&pMVar30->field8_0x40,0);
                *(undefined1 *)&pMVar30->token = 0;
                return;
              }
            }
          }
        }
        return;
      }
      (*(pTVar12->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar12,lVar26,(pTVar12->klass->vtable)._78_add_OnPreRenderText.method);
      *(undefined1 *)((long)&(__this->fields).popActive + 3) = 1;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__ClearEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4329950

void PatreonEffects_NameEffectController__ClearEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool_conflict bVar3;
  PatreonEffects_NameEffectController_o *pPVar4;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectController_o *__this_00;
  
  if (g_data_057ae045 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateEffectVertexData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae045 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 3) != '\0') {
    pTVar2 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pTVar2 = (__this->fields).text;
      pPVar4 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      method_00 = __this;
      __this_00 = pPVar4;
      System_Action_object____ctor();
      if (pTVar2 == (TMPro_TMP_Text_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        cVar1 = *(char *)((long)&(__this_00->fields).popActive + 1);
        *(undefined1 *)((long)&(__this_00->fields).popActive + 1) = 0;
        PatreonEffects_NameEffectController__ClearPopGradient(__this_00,(MethodInfo *)method_00);
        if (cVar1 != '\0') {
          PatreonEffects_NameEffectController__ClearShaderMaterial(__this_00,(MethodInfo *)method_00);
          return;
        }
        return;
      }
      (*(pTVar2->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar2,pPVar4,(pTVar2->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  *(undefined1 *)((long)&(__this->fields).popActive + 3) = 0;
  return;
}


// PatreonEffects.NameEffectController$$DestroyPopLayer
// il2cpp: void PatreonEffects_NameEffectController__DestroyPopLayer (TMPro_TMP_Text_o** layer, const MethodInfo* method);
// 0x432b8c0

void PatreonEffects_NameEffectController__DestroyPopLayer(TMPro_TMP_Text_o **layer,MethodInfo *method)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  TMPro_TMP_Text_o *x;
  UnityEngine_CanvasRenderer_o *pUVar7;
  bool_conflict bVar8;
  uint uVar9;
  UnityEngine_Object_o *obj;
  float *in_RCX;
  long lVar10;
  ulong uVar11;
  float *extraout_RDX;
  ulong uVar12;
  float *pfVar13;
  TMPro_TMP_Text_o *__this;
  float *in_R8;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  TMPro_TMP_Text_o *pTStack_58;
  undefined8 *puStack_50;
  
  if (g_data_057ae046 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae046 = '\x01';
  }
  x = *layer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pfVar13 = (float *)0x0;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  __this = *layer;
  if (__this != (TMPro_TMP_Text_o *)0x0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    *layer = (TMPro_TMP_Text_o *)0x0;
    il2cpp_runtime_helper_022b4080(layer);
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar8 != '\0') {
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  puStack_50 = &TypeInfo_Object;
  pTStack_58 = x;
  if (g_data_057ae049 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae049 = '\x01';
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  *pfVar13 = INFINITY;
  *extraout_RDX = -INFINITY;
  *in_RCX = INFINITY;
  *in_R8 = -INFINITY;
  if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((__this != (TMPro_TMP_Text_o *)0x0) &&
     (lVar10 = *(long *)&(__this->fields).m_SkipLayoutUpdate, lVar10 != 0)) {
    uVar4 = *(uint *)&(__this->fields).m_CancellationTokenSource;
    uVar9 = *(uint *)(lVar10 + 0x18);
    if ((int)uVar4 <= (int)uVar9) {
      uVar9 = uVar4;
    }
    if (0 < (int)uVar9) {
      lVar14 = 0x58;
      uVar15 = 0;
      lVar10._0_4_ = (__this->fields).m_SkipLayoutUpdate;
      lVar10._4_4_ = (__this->fields).m_SkipMaterialUpdate;
      do {
        if (lVar10 == 0) {
          il2cpp_runtime_helper_022b2c90();
          return;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto label_0432bcf8;
        if ((*(byte *)(lVar10 + lVar14 + 0x13c) & 1) != 0) {
          uVar4 = *(uint *)(lVar10 + lVar14);
          uVar5 = *(uint *)(lVar10 + lVar14 + 0x14);
          uVar12 = (ulong)uVar5;
          if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          lStack_a0 = 0;
          lStack_98 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          if (((-1 < (int)uVar4) &&
              (pUVar7 = (__this->fields).m_CanvasRenderer, pUVar7 != (UnityEngine_CanvasRenderer_o *)0x0)) &&
             (uVar6 = (pUVar7->fields)._isMask_k__BackingField, (int)uVar4 < (int)uVar6)) {
            if (uVar6 <= uVar4) goto label_0432bcf8;
            lVar10 = (long)(int)uVar4 * 0x50;
            puVar1 = (undefined8 *)((long)pUVar7 + lVar10 + 0x20);
            uStack_b0 = *puVar1;
            uStack_a8 = puVar1[1];
            plVar2 = (long *)((long)pUVar7 + lVar10 + 0x30);
            lStack_a0 = *plVar2;
            lStack_98 = plVar2[1];
            puVar1 = (undefined8 *)((long)pUVar7 + lVar10 + 0x40);
            uStack_90 = *puVar1;
            uStack_88 = puVar1[1];
            puVar1 = (undefined8 *)((long)pUVar7 + lVar10 + 0x50);
            uStack_80 = *puVar1;
            uStack_78 = puVar1[1];
            puVar1 = (undefined8 *)((long)pUVar7 + lVar10 + 0x60);
            uStack_70 = *puVar1;
            uStack_68 = puVar1[1];
            il2cpp_runtime_helper_022b4080(&uStack_b0,0);
            if ((lStack_a0 != 0) && ((int)(uVar5 + 3) < (int)*(ulong *)(lStack_a0 + 0x18))) {
              uVar11 = *(ulong *)(lStack_a0 + 0x18) & 0xffffffff;
              if (uVar11 <= uVar12) {
label_0432bcf8:
                il2cpp_runtime_helper_022b2ca0();
                return;
              }
              uVar3 = *(undefined8 *)(lStack_a0 + 0x20 + (long)(int)uVar5 * 0xc);
              fVar16 = (float)uVar3;
              fVar17 = (float)((ulong)uVar3 >> 0x20);
              fVar18 = *pfVar13;
              if (fVar16 <= *pfVar13) {
                fVar18 = fVar16;
              }
              *pfVar13 = fVar18;
              fVar18 = *extraout_RDX;
              if (*extraout_RDX <= fVar16) {
                fVar18 = fVar16;
              }
              *extraout_RDX = fVar18;
              fVar18 = *in_RCX;
              if (fVar17 <= *in_RCX) {
                fVar18 = fVar17;
              }
              *in_RCX = fVar18;
              fVar18 = *in_R8;
              if (*in_R8 <= fVar17) {
                fVar18 = fVar17;
              }
              *in_R8 = fVar18;
              if (uVar11 <= uVar12 + 1) goto label_0432bcf8;
              uVar3 = *(undefined8 *)(lStack_a0 + 0x20 + (long)(int)(uVar12 + 1) * 0xc);
              fVar16 = (float)uVar3;
              fVar17 = (float)((ulong)uVar3 >> 0x20);
              fVar18 = *pfVar13;
              if (fVar16 <= *pfVar13) {
                fVar18 = fVar16;
              }
              *pfVar13 = fVar18;
              fVar18 = *extraout_RDX;
              if (*extraout_RDX <= fVar16) {
                fVar18 = fVar16;
              }
              *extraout_RDX = fVar18;
              fVar18 = *in_RCX;
              if (fVar17 <= *in_RCX) {
                fVar18 = fVar17;
              }
              *in_RCX = fVar18;
              fVar18 = *in_R8;
              if (*in_R8 <= fVar17) {
                fVar18 = fVar17;
              }
              *in_R8 = fVar18;
              if (uVar11 <= uVar12 + 2) goto label_0432bcf8;
              uVar3 = *(undefined8 *)(lStack_a0 + 0x20 + (long)(int)(uVar12 + 2) * 0xc);
              fVar16 = (float)uVar3;
              fVar17 = (float)((ulong)uVar3 >> 0x20);
              fVar18 = *pfVar13;
              if (fVar16 <= *pfVar13) {
                fVar18 = fVar16;
              }
              *pfVar13 = fVar18;
              fVar18 = *extraout_RDX;
              if (*extraout_RDX <= fVar16) {
                fVar18 = fVar16;
              }
              *extraout_RDX = fVar18;
              fVar18 = *in_RCX;
              if (fVar17 <= *in_RCX) {
                fVar18 = fVar17;
              }
              *in_RCX = fVar18;
              fVar18 = *in_R8;
              if (*in_R8 <= fVar17) {
                fVar18 = fVar17;
              }
              *in_R8 = fVar18;
              if (uVar11 <= uVar12 + 3) goto label_0432bcf8;
              uVar3 = *(undefined8 *)(lStack_a0 + 0x20 + (long)(int)(uVar12 + 3) * 0xc);
              fVar16 = (float)uVar3;
              fVar17 = (float)((ulong)uVar3 >> 0x20);
              fVar18 = *pfVar13;
              if (fVar16 <= *pfVar13) {
                fVar18 = fVar16;
              }
              *pfVar13 = fVar18;
              fVar18 = *extraout_RDX;
              if (*extraout_RDX <= fVar16) {
                fVar18 = fVar16;
              }
              *extraout_RDX = fVar18;
              fVar18 = *in_RCX;
              if (fVar17 <= *in_RCX) {
                fVar18 = fVar17;
              }
              *in_RCX = fVar18;
              fVar18 = *in_R8;
              if (*in_R8 <= fVar17) {
                fVar18 = fVar17;
              }
              *in_R8 = fVar18;
            }
          }
        }
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x178;
        if (uVar9 == uVar15) {
          return;
        }
        lVar10._0_4_ = (__this->fields).m_SkipLayoutUpdate;
        lVar10._4_4_ = (__this->fields).m_SkipMaterialUpdate;
      } while( true );
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearShaderMaterial
// il2cpp: void PatreonEffects_NameEffectController__ClearShaderMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432a650

void PatreonEffects_NameEffectController__ClearShaderMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  PatreonEffects_NameEffectController_o *__this_00;
  
  if (g_data_057ae047 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae047 = '\x01';
  }
  pTVar2 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pTVar2 = (__this->fields).text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        method_00 = (MethodInfo *)(__this->fields).originalFontMaterial;
        (*(pTVar2->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                  (pTVar2,method_00,(pTVar2->klass->vtable)._68_set_fontSharedMaterial.method);
        pTVar2 = (__this->fields).text;
        if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
          goto label_0432a71e;
        }
      }
      __this_00 = (PatreonEffects_NameEffectController_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      PatreonEffects_NameEffectController__Clear(__this_00,method_00);
      return;
    }
  }
label_0432a71e:
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).runtimeMat;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar4 == '\0') {
      UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    }
  }
  (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  *(undefined1 *)&(__this->fields).initialized = 0;
  return;
}


// PatreonEffects.NameEffectController$$UpdateEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__UpdateEffectVertexData (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x4329fc0

void PatreonEffects_NameEffectController__UpdateEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  ulong uVar1;
  UnityEngine_Vector3_array **ppUVar2;
  UnityEngine_Vector4_array **ppUVar3;
  UnityEngine_Vector2_array **ppUVar4;
  System_Int32_array **ppSVar5;
  float fVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  UnityEngine_Object_o *pUVar11;
  TMPro_TMP_CharacterInfo_array *pTVar12;
  TMPro_TMP_MeshInfo_array *pTVar13;
  Il2CppClass *pIVar14;
  void *pvVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  byte bVar21;
  bool_conflict bVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  MethodInfo *pMVar26;
  MethodInfo *pMVar27;
  PatreonEffects_NameEffectController_o *__this_00;
  MethodInfo *in_R9;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long lStack_90;
  undefined1 auStack_88 [72];
  UnityEngine_Material_o *pUStack_40;
  
  if (g_data_057ae048 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae048 = '\x01';
  }
  fStack_94 = 0.0;
  fStack_98 = 0.0;
  fStack_9c = 0.0;
  fStack_a0 = 0.0;
  auStack_88._64_8_ = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  auStack_88._48_8_ = (UnityEngine_Vector2_array *)0x0;
  auStack_88._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
  auStack_88._40_8_ = (UnityEngine_Vector2_array *)0x0;
  auStack_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
  auStack_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
  auStack_88._0_8_ = (UnityEngine_Mesh_o *)0x0;
  auStack_88._8_8_ = (Il2CppMethodPointer)0x0;
  pUVar11 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar22 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar22 == '\0') && (textInfo != (TMPro_TMP_TextInfo_o *)0x0)) {
    if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar22 = PatreonEffects_NameEffectController__TryLocalBounds
                       (textInfo,&fStack_94,&fStack_98,&fStack_9c,&fStack_a0,in_R9);
    fVar17 = fStack_94;
    fVar30 = fStack_98;
    fVar16 = fStack_9c;
    fVar31 = fStack_a0;
    if ((char)bVar22 != '\0') {
      pMVar27 = TypeInfo_NameEffectController;
      if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pTVar12 = (textInfo->fields).characterInfo;
      }
      else {
        pTVar12 = (textInfo->fields).characterInfo;
      }
      if (pTVar12 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        uVar8 = (textInfo->fields).characterCount;
        uVar23 = (uint)pTVar12->max_length;
        if ((int)uVar8 <= (int)uVar23) {
          uVar23 = uVar8;
        }
        if (0 < (int)uVar23) {
          fVar30 = fVar30 - fVar17;
          fVar31 = fVar31 - fVar16;
          if (fVar30 <= 0.001) {
            fVar30 = 0.001;
          }
          if (fVar31 <= 0.001) {
            fVar31 = 0.001;
          }
          lVar25 = 0x58;
          uVar28 = 0;
          pTVar12 = (textInfo->fields).characterInfo;
          pMVar26 = TypeInfo_NameEffectController;
          while (TypeInfo_NameEffectController = pMVar26, pTVar12 != (TMPro_TMP_CharacterInfo_array *)0x0) {
            if ((uint)pTVar12->max_length <= uVar28) goto label_0432a626;
            if ((*(byte *)((long)&pTVar12->m_Items[0].fields.topRight.fields.y + lVar25) & 1) != 0) {
              uVar8 = *(uint *)((long)pTVar12->m_Items + lVar25 + -0x20);
              uVar9 = *(uint *)((long)pTVar12->m_Items + lVar25 + -0xc);
              uVar29 = (ulong)uVar9;
              pMVar27 = pMVar26;
              if (*(int *)((long)&pMVar26[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar27 = pMVar26;
              }
              auStack_88._64_8_ = (System_Int32_array *)0x0;
              pUStack_40 = (UnityEngine_Material_o *)0x0;
              auStack_88._48_8_ = (UnityEngine_Vector2_array *)0x0;
              auStack_88._56_8_ = (Il2CppRGCTXData *)0x0;
              auStack_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
              auStack_88._40_8_ = (UnityEngine_Vector2_array *)0x0;
              auStack_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
              auStack_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
              auStack_88._0_8_ = (UnityEngine_Mesh_o *)0x0;
              auStack_88._8_8_ = (Il2CppMethodPointer)0x0;
              if (((-1 < (int)uVar8) &&
                  (pTVar13 = (textInfo->fields).meshInfo, pTVar13 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
                 (uVar10 = (uint)pTVar13->max_length, (int)uVar8 < (int)uVar10)) {
                if (uVar10 <= uVar8) goto label_0432a626;
                auStack_88._0_8_ = pTVar13->m_Items[(int)uVar8].fields.mesh;
                auStack_88._8_8_ = *(undefined8 *)&pTVar13->m_Items[(int)uVar8].fields.vertexCount;
                ppUVar2 = &pTVar13->m_Items[(int)uVar8].fields.vertices;
                auStack_88._16_8_ = *ppUVar2;
                auStack_88._24_8_ = ppUVar2[1];
                ppUVar3 = &pTVar13->m_Items[(int)uVar8].fields.tangents;
                auStack_88._32_8_ = *ppUVar3;
                auStack_88._40_8_ = ppUVar3[1];
                ppUVar4 = &pTVar13->m_Items[(int)uVar8].fields.uvs2;
                auStack_88._48_8_ = *ppUVar4;
                auStack_88._56_8_ = ((_union_13 *)(ppUVar4 + 1))->rgctx_data;
                ppSVar5 = &pTVar13->m_Items[(int)uVar8].fields.triangles;
                auStack_88._64_8_ = *ppSVar5;
                pUStack_40 = (UnityEngine_Material_o *)ppSVar5[1];
                pMVar27 = (MethodInfo *)auStack_88;
                il2cpp_runtime_helper_022b4080();
                uVar19 = auStack_88._56_8_;
                uVar18 = auStack_88._16_8_;
                if (((Il2CppRGCTXData *)auStack_88._56_8_ != (Il2CppRGCTXData *)0x0) &&
                   ((UnityEngine_Vector3_array *)auStack_88._16_8_ != (UnityEngine_Vector3_array *)0x0)) {
                  if (((int)(uVar9 + 3) < (int)((Il2CppRGCTXData *)(auStack_88._56_8_ + 0x18))->rgctxDataDummy
                      ) && ((int)(uVar9 + 3) < (int)*(il2cpp_array_size_t *)(auStack_88._16_8_ + 0x18))) {
                    if ((((ulong)((Il2CppRGCTXData *)(auStack_88._56_8_ + 0x18))->rgctxDataDummy & 0xffffffff)
                         <= uVar29) ||
                       ((*(il2cpp_array_size_t *)(auStack_88._16_8_ + 0x18) & 0xffffffff) <= uVar29)) {
label_0432a626:
                      il2cpp_runtime_helper_022b2ca0();
                      return;
                    }
                    lVar24 = (long)(int)uVar9;
                    bVar7 = *(byte *)(auStack_88._56_8_ + lVar24 * 4 + 0x23);
                    fVar6 = ((UnityEngine_Vector3_o *)(auStack_88._16_8_ + 0x20))[lVar24].fields.x;
                    pMVar27 = TypeInfo_NameEffectController;
                    if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar20 = PatreonEffects_NameEffectController__ToByte((fVar6 - fVar17) / fVar30,pMVar27);
                    if (((uint)*(il2cpp_array_size_t *)(uVar18 + 0x18) <= uVar29) ||
                       (bVar21 = PatreonEffects_NameEffectController__ToByte
                                           ((((UnityEngine_Vector3_o *)(uVar18 + 0x20))[lVar24].fields.y -
                                            fVar16) / fVar31,pMVar27), *(uint *)(uVar19 + 0x18) <= uVar29))
                    goto label_0432a626;
                    *(uint *)(uVar19 + lVar24 * 4 + 0x20) =
                         (uint)bVar20 | (uint)bVar7 << 0x18 | (uint)bVar21 << 8 | 0xff0000;
                    uVar1 = uVar29 + 1;
                    if ((*(uint *)(uVar19 + 0x18) <= uVar1) ||
                       ((uint)*(il2cpp_array_size_t *)(uVar18 + 0x18) <= uVar1)) goto label_0432a626;
                    lVar24 = (long)(int)uVar1;
                    bVar7 = *(byte *)(uVar19 + lVar24 * 4 + 0x23);
                    lStack_90 = lVar24 * 3;
                    fVar6 = ((UnityEngine_Vector3_o *)(uVar18 + 0x20))[lVar24].fields.x;
                    pMVar27 = TypeInfo_NameEffectController;
                    if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar20 = PatreonEffects_NameEffectController__ToByte((fVar6 - fVar17) / fVar30,pMVar27);
                    if (((uint)*(il2cpp_array_size_t *)(uVar18 + 0x18) <= uVar1) ||
                       (bVar21 = PatreonEffects_NameEffectController__ToByte
                                           (((&(((UnityEngine_Vector3_o *)(uVar18 + 0x20))->fields).y)
                                             [lStack_90] - fVar16) / fVar31,pMVar27),
                       *(uint *)(uVar19 + 0x18) <= uVar1)) goto label_0432a626;
                    *(uint *)(uVar19 + lVar24 * 4 + 0x20) =
                         (uint)bVar20 | (uint)bVar7 << 0x18 | (uint)bVar21 << 8 | 0xff0000;
                    uVar1 = uVar29 + 2;
                    if ((*(uint *)(uVar19 + 0x18) <= uVar1) ||
                       ((uint)*(il2cpp_array_size_t *)(uVar18 + 0x18) <= uVar1)) goto label_0432a626;
                    lVar24 = (long)(int)uVar1;
                    bVar7 = *(byte *)(uVar19 + lVar24 * 4 + 0x23);
                    lStack_90 = lVar24 * 3;
                    fVar6 = ((UnityEngine_Vector3_o *)(uVar18 + 0x20))[lVar24].fields.x;
                    pMVar27 = TypeInfo_NameEffectController;
                    if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar20 = PatreonEffects_NameEffectController__ToByte((fVar6 - fVar17) / fVar30,pMVar27);
                    if (((uint)*(il2cpp_array_size_t *)(uVar18 + 0x18) <= uVar1) ||
                       (bVar21 = PatreonEffects_NameEffectController__ToByte
                                           (((&(((UnityEngine_Vector3_o *)(uVar18 + 0x20))->fields).y)
                                             [lStack_90] - fVar16) / fVar31,pMVar27),
                       *(uint *)(uVar19 + 0x18) <= uVar1)) goto label_0432a626;
                    *(uint *)(uVar19 + lVar24 * 4 + 0x20) =
                         (uint)bVar20 | (uint)bVar7 << 0x18 | (uint)bVar21 << 8 | 0xff0000;
                    uVar29 = uVar29 + 3;
                    if ((*(uint *)(uVar19 + 0x18) <= uVar29) ||
                       ((uint)*(il2cpp_array_size_t *)(uVar18 + 0x18) <= uVar29)) goto label_0432a626;
                    lVar24 = (long)(int)uVar29;
                    bVar7 = *(byte *)(uVar19 + lVar24 * 4 + 0x23);
                    fVar6 = ((UnityEngine_Vector3_o *)(uVar18 + 0x20))[lVar24].fields.x;
                    pMVar27 = TypeInfo_NameEffectController;
                    if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar20 = PatreonEffects_NameEffectController__ToByte((fVar6 - fVar17) / fVar30,pMVar27);
                    if (((uint)*(il2cpp_array_size_t *)(uVar18 + 0x18) <= uVar29) ||
                       (bVar21 = PatreonEffects_NameEffectController__ToByte
                                           ((((UnityEngine_Vector3_o *)(uVar18 + 0x20))[lVar24].fields.y -
                                            fVar16) / fVar31,pMVar27), *(uint *)(uVar19 + 0x18) <= uVar29))
                    goto label_0432a626;
                    *(uint *)(uVar19 + lVar24 * 4 + 0x20) =
                         (uint)bVar20 | (uint)bVar7 << 0x18 | (uint)bVar21 << 8 | 0xff0000;
                  }
                }
              }
            }
            uVar28 = uVar28 + 1;
            lVar25 = lVar25 + 0x178;
            if (uVar23 == uVar28) {
              return;
            }
            pMVar26 = TypeInfo_NameEffectController;
            pTVar12 = (textInfo->fields).characterInfo;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae047 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae047 = '\x01';
          }
          pIVar14 = pMVar27->klass;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar22 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar22 != '\0') {
            pUVar11 = (UnityEngine_Object_o *)pMVar27->parameters;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar26 = (MethodInfo *)0x0;
            bVar22 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar22 != '\0') {
              pIVar14 = pMVar27->klass;
              if (pIVar14 != (Il2CppClass *)0x0) {
                pMVar26 = (MethodInfo *)pMVar27->parameters;
                pvVar15 = (pIVar14->_1).image;
                (**(code **)((long)pvVar15 + 0x578))(pIVar14,pMVar26,*(undefined8 *)((long)pvVar15 + 0x580));
                pIVar14 = pMVar27->klass;
                if (pIVar14 != (Il2CppClass *)0x0) {
                  pvVar15 = (pIVar14->_1).image;
                  (**(code **)((long)pvVar15 + 0x7d8))(pIVar14,0,0,*(undefined8 *)((long)pvVar15 + 0x7e0));
                  goto label_0432a71e;
                }
              }
              __this_00 = (PatreonEffects_NameEffectController_o *)0x0;
              il2cpp_runtime_helper_022b2c90();
              PatreonEffects_NameEffectController__Clear(__this_00,pMVar26);
              return;
            }
          }
label_0432a71e:
          pUVar11 = (pMVar27->field8_0x40).genericMethod;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar22 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar22 != '\0') {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar22 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            pUVar11 = (pMVar27->field8_0x40).genericMethod;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if ((char)bVar22 == '\0') {
              UnityEngine_Object__DestroyImmediate_4e01e00(pUVar11,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_Object__Destroy_4e01c60(pUVar11,(MethodInfo *)0x0);
            }
          }
          (pMVar27->field8_0x40).genericMethod = (void *)0x0;
          il2cpp_runtime_helper_022b4080(&pMVar27->field8_0x40,0);
          *(undefined1 *)&pMVar27->token = 0;
          return;
        }
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ToByte
// il2cpp: uint8_t PatreonEffects_NameEffectController__ToByte (float value, const MethodInfo* method);
// 0x432bdf0

uint8_t PatreonEffects_NameEffectController__ToByte(float value,MethodInfo *method)

{
  int iVar1;
  double dVar2;
  double dVar3;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  float fVar4;
  undefined1 local_20 [8];
  undefined1 local_18 [16];
  
  fVar4 = 1.0;
  if (value <= 1.0) {
    fVar4 = value;
  }
  local_18 = ZEXT416(-(uint)(0.0 <= value) & (uint)(fVar4 * 255.0));
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  dVar2 = (double)(float)local_18._0_4_;
  method_00 = (MethodInfo *)local_20;
  dVar3 = modf(dVar2,(double *)method_00,in_RSI);
  if (0.0 <= (float)local_18._0_4_) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      dVar2 = floor(dVar2 + 0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      local_20 = (undefined1  [8])((double)local_20 + 1.0);
    }
  }
  else {
    if ((dVar3 != -0.5) || (NAN(dVar3))) {
      dVar2 = ceil(dVar2 + -0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      return (uint8_t)(int)((double)local_20 + -1.0);
    }
  }
  return (uint8_t)(int)(double)local_20;
}


// PatreonEffects.NameEffectController$$SafeCharacterCount
// il2cpp: int32_t PatreonEffects_NameEffectController__SafeCharacterCount (TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x432bd40

int32_t PatreonEffects_NameEffectController__SafeCharacterCount
                  (TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_CharacterInfo_array *pTVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     (pTVar2 = (textInfo->fields).characterInfo, pTVar2 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
    iVar1 = (textInfo->fields).characterCount;
    iVar3 = (int)pTVar2->max_length;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}


// PatreonEffects.NameEffectController$$TryGetMeshInfo
// il2cpp: bool PatreonEffects_NameEffectController__TryGetMeshInfo (TMPro_TMP_TextInfo_o* textInfo, int32_t materialReferenceIndex, TMPro_TMP_MeshInfo_o* mesh, const MethodInfo* method);
// 0x432bd60

bool_conflict
PatreonEffects_NameEffectController__TryGetMeshInfo
          (TMPro_TMP_TextInfo_o *textInfo,int32_t materialReferenceIndex,TMPro_TMP_MeshInfo_o *mesh,
          MethodInfo *method)

{
  TMPro_TMP_MeshInfo_o *pTVar1;
  uint uVar2;
  int iVar3;
  TMPro_TMP_MeshInfo_array *pTVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int32_t iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  TMPro_TMP_MeshInfo_Fields *pTVar26;
  bool_conflict bVar27;
  undefined8 uVar28;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar29;
  float fVar30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  char *pcStack_10;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,materialReferenceIndex);
  (mesh->fields).triangles = (System_Int32_array *)0x0;
  (mesh->fields).material = (UnityEngine_Material_o *)0x0;
  (mesh->fields).uvs2 = (UnityEngine_Vector2_array *)0x0;
  (mesh->fields).colors32 = (UnityEngine_Color32_array *)0x0;
  (mesh->fields).tangents = (UnityEngine_Vector4_array *)0x0;
  (mesh->fields).uvs0 = (UnityEngine_Vector2_array *)0x0;
  (mesh->fields).vertices = (UnityEngine_Vector3_array *)0x0;
  (mesh->fields).normals = (UnityEngine_Vector3_array *)0x0;
  (mesh->fields).mesh = (UnityEngine_Mesh_o *)0x0;
  *(undefined8 *)&(mesh->fields).vertexCount = 0;
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    bVar27 = 0;
    if ((-1 < materialReferenceIndex) &&
       (pTVar4 = (textInfo->fields).meshInfo, pTVar4 != (TMPro_TMP_MeshInfo_array *)0x0)) {
      uVar2 = (uint)pTVar4->max_length;
      if ((int)uVar2 <= materialReferenceIndex) {
        return 0;
      }
      if (uVar2 <= (uint)materialReferenceIndex) goto code_r0x0432bde0;
      pTVar1 = pTVar4->m_Items + materialReferenceIndex;
      uVar7 = *(undefined4 *)&(pTVar1->fields).mesh;
      uVar8 = *(undefined4 *)((long)&(pTVar1->fields).mesh + 4);
      iVar9 = (pTVar1->fields).vertexCount;
      uVar10 = *(undefined4 *)&(pTVar1->fields).field_0xc;
      pTVar26 = &pTVar4->m_Items[materialReferenceIndex].fields;
      uVar11 = *(undefined4 *)&pTVar26->vertices;
      uVar12 = *(undefined4 *)((long)&pTVar26->vertices + 4);
      uVar13 = *(undefined4 *)&pTVar26->normals;
      uVar14 = *(undefined4 *)((long)&pTVar26->normals + 4);
      pTVar26 = &pTVar4->m_Items[materialReferenceIndex].fields;
      uVar15 = *(undefined4 *)&pTVar26->tangents;
      uVar16 = *(undefined4 *)((long)&pTVar26->tangents + 4);
      uVar17 = *(undefined4 *)&pTVar26->uvs0;
      uVar18 = *(undefined4 *)((long)&pTVar26->uvs0 + 4);
      pTVar26 = &pTVar4->m_Items[materialReferenceIndex].fields;
      uVar19 = *(undefined4 *)&pTVar26->uvs2;
      uVar20 = *(undefined4 *)((long)&pTVar26->uvs2 + 4);
      uVar21 = *(undefined4 *)&pTVar26->colors32;
      uVar22 = *(undefined4 *)((long)&pTVar26->colors32 + 4);
      pTVar26 = &pTVar4->m_Items[materialReferenceIndex].fields;
      uVar23 = *(undefined4 *)((long)&pTVar26->triangles + 4);
      uVar24 = *(undefined4 *)&pTVar26->material;
      uVar25 = *(undefined4 *)((long)&pTVar26->material + 4);
      *(undefined4 *)&(mesh->fields).triangles = *(undefined4 *)&pTVar26->triangles;
      *(undefined4 *)((long)&(mesh->fields).triangles + 4) = uVar23;
      *(undefined4 *)&(mesh->fields).material = uVar24;
      *(undefined4 *)((long)&(mesh->fields).material + 4) = uVar25;
      *(undefined4 *)&(mesh->fields).uvs2 = uVar19;
      *(undefined4 *)((long)&(mesh->fields).uvs2 + 4) = uVar20;
      *(undefined4 *)&(mesh->fields).colors32 = uVar21;
      *(undefined4 *)((long)&(mesh->fields).colors32 + 4) = uVar22;
      *(undefined4 *)&(mesh->fields).tangents = uVar15;
      *(undefined4 *)((long)&(mesh->fields).tangents + 4) = uVar16;
      *(undefined4 *)&(mesh->fields).uvs0 = uVar17;
      *(undefined4 *)((long)&(mesh->fields).uvs0 + 4) = uVar18;
      *(undefined4 *)&(mesh->fields).vertices = uVar11;
      *(undefined4 *)((long)&(mesh->fields).vertices + 4) = uVar12;
      *(undefined4 *)&(mesh->fields).normals = uVar13;
      *(undefined4 *)((long)&(mesh->fields).normals + 4) = uVar14;
      *(undefined4 *)&(mesh->fields).mesh = uVar7;
      *(undefined4 *)((long)&(mesh->fields).mesh + 4) = uVar8;
      (mesh->fields).vertexCount = iVar9;
      *(undefined4 *)&(mesh->fields).field_0xc = uVar10;
      pcStack_10 = &g_data_0432bdd3;
      uVar28 = il2cpp_runtime_helper_022b4080(mesh,0);
      bVar27 = (bool_conflict)CONCAT71((int7)((ulong)uVar28 >> 8),1);
    }
    return bVar27;
  }
  pcStack_10 = &g_data_0432bde0;
  il2cpp_runtime_helper_022b2c90();
code_r0x0432bde0:
  pcStack_10 = &g_data_0432bde5;
  fVar29 = (float)il2cpp_runtime_helper_022b2ca0();
  fVar30 = 1.0;
  if (fVar29 <= 1.0) {
    fVar30 = fVar29;
  }
  auStack_20 = ZEXT416(-(uint)(0.0 <= fVar29) & (uint)(fVar30 * 255.0));
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  dVar5 = (double)(float)auStack_20._0_4_;
  method_01 = (MethodInfo *)auStack_28;
  dVar6 = modf(dVar5,(double *)method_01,method_00);
  if (0.0 <= (float)auStack_20._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar5 = floor(dVar5 + 0.5,method_01);
      return (int)dVar5;
    }
    if (((long)(double)auStack_28 & 1U) != 0) {
      auStack_28 = (undefined1  [8])((double)auStack_28 + 1.0);
    }
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar5 = ceil(dVar5 + -0.5,method_01);
      return (int)dVar5;
    }
    if (((long)(double)auStack_28 & 1U) != 0) {
      return (int)((double)auStack_28 + -1.0);
    }
  }
  return (int)(double)auStack_28;
}


// PatreonEffects.NameEffectController$$TryLocalBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryLocalBounds (TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, float* minY, float* maxY, const MethodInfo* method);
// 0x432b9b0

bool_conflict
PatreonEffects_NameEffectController__TryLocalBounds
          (TMPro_TMP_TextInfo_o *textInfo,float *minX,float *maxX,float *minY,float *maxY,MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TMPro_TMP_CharacterInfo_array *pTVar16;
  TMPro_TMP_MeshInfo_array *pTVar17;
  uint uVar18;
  bool_conflict bVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  UnityEngine_Mesh_o **ppUVar23;
  UnityEngine_Mesh_o **ppUVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  UnityEngine_Mesh_o *local_88;
  undefined8 uStack_80;
  UnityEngine_Vector3_array *local_78;
  UnityEngine_Vector3_array *pUStack_70;
  UnityEngine_Vector4_array *local_68;
  UnityEngine_Vector2_array *pUStack_60;
  UnityEngine_Vector2_array *local_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *local_48;
  UnityEngine_Material_o *pUStack_40;
  
  if (g_data_057ae049 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae049 = '\x01';
  }
  local_48 = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  local_58 = (UnityEngine_Vector2_array *)0x0;
  pUStack_50 = (UnityEngine_Color32_array *)0x0;
  local_68 = (UnityEngine_Vector4_array *)0x0;
  pUStack_60 = (UnityEngine_Vector2_array *)0x0;
  local_78 = (UnityEngine_Vector3_array *)0x0;
  pUStack_70 = (UnityEngine_Vector3_array *)0x0;
  local_88 = (UnityEngine_Mesh_o *)0x0;
  uStack_80 = 0;
  *minX = INFINITY;
  *maxX = -INFINITY;
  *minY = INFINITY;
  *maxY = -INFINITY;
  ppUVar23 = TypeInfo_NameEffectController;
  if (*(int *)((long)TypeInfo_NameEffectController + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     (pTVar16 = (textInfo->fields).characterInfo, pTVar16 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
    uVar13 = (textInfo->fields).characterCount;
    uVar18 = (uint)pTVar16->max_length;
    if ((int)uVar13 <= (int)uVar18) {
      uVar18 = uVar13;
    }
    if (0 < (int)uVar18) {
      lVar25 = 0x58;
      uVar26 = 0;
      pTVar16 = (textInfo->fields).characterInfo;
      ppUVar24 = TypeInfo_NameEffectController;
      do {
        TypeInfo_NameEffectController = ppUVar24;
        if (pTVar16 == (TMPro_TMP_CharacterInfo_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          iVar20 = 0;
          if ((ppUVar23 != (UnityEngine_Mesh_o **)0x0) && (ppUVar23[7] != (UnityEngine_Mesh_o *)0x0)) {
            iVar20 = *(int *)&ppUVar23[7][1].klass;
            if (*(int *)(ppUVar23 + 3) <= iVar20) {
              iVar20 = *(int *)(ppUVar23 + 3);
            }
          }
          return iVar20;
        }
        if ((uint)pTVar16->max_length <= uVar26) goto label_0432bcf8;
        if ((*(byte *)((long)&pTVar16->m_Items[0].fields.topRight.fields.y + lVar25) & 1) != 0) {
          uVar13 = *(uint *)((long)pTVar16->m_Items + lVar25 + -0x20);
          uVar14 = *(uint *)((long)pTVar16->m_Items + lVar25 + -0xc);
          uVar22 = (ulong)uVar14;
          if (*(int *)((long)ppUVar24 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          local_48 = (System_Int32_array *)0x0;
          pUStack_40 = (UnityEngine_Material_o *)0x0;
          local_58 = (UnityEngine_Vector2_array *)0x0;
          pUStack_50 = (UnityEngine_Color32_array *)0x0;
          local_68 = (UnityEngine_Vector4_array *)0x0;
          pUStack_60 = (UnityEngine_Vector2_array *)0x0;
          local_78 = (UnityEngine_Vector3_array *)0x0;
          pUStack_70 = (UnityEngine_Vector3_array *)0x0;
          local_88 = (UnityEngine_Mesh_o *)0x0;
          uStack_80 = 0;
          ppUVar23 = ppUVar24;
          if (((-1 < (int)uVar13) &&
              (pTVar17 = (textInfo->fields).meshInfo, pTVar17 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
             (uVar15 = (uint)pTVar17->max_length, (int)uVar13 < (int)uVar15)) {
            if (uVar13 < uVar15) {
              local_88 = pTVar17->m_Items[(int)uVar13].fields.mesh;
              uStack_80 = *(undefined8 *)&pTVar17->m_Items[(int)uVar13].fields.vertexCount;
              ppUVar1 = &pTVar17->m_Items[(int)uVar13].fields.vertices;
              local_78 = *ppUVar1;
              pUStack_70 = ppUVar1[1];
              ppUVar2 = &pTVar17->m_Items[(int)uVar13].fields.tangents;
              local_68 = *ppUVar2;
              pUStack_60 = (UnityEngine_Vector2_array *)ppUVar2[1];
              ppUVar3 = &pTVar17->m_Items[(int)uVar13].fields.uvs2;
              local_58 = *ppUVar3;
              pUStack_50 = (UnityEngine_Color32_array *)ppUVar3[1];
              ppSVar4 = &pTVar17->m_Items[(int)uVar13].fields.triangles;
              local_48 = *ppSVar4;
              pUStack_40 = (UnityEngine_Material_o *)ppSVar4[1];
              ppUVar23 = &local_88;
              il2cpp_runtime_helper_022b4080(ppUVar23,0);
              if ((local_78 == (UnityEngine_Vector3_array *)0x0) ||
                 ((int)local_78->max_length <= (int)(uVar14 + 3))) goto label_0432bae0;
              uVar21 = local_78->max_length & 0xffffffff;
              if (uVar22 < uVar21) {
                uVar6 = local_78->m_Items[(int)uVar14].fields.x;
                uVar10 = local_78->m_Items[(int)uVar14].fields.y;
                fVar27 = *minX;
                if ((float)uVar6 <= *minX) {
                  fVar27 = (float)uVar6;
                }
                *minX = fVar27;
                fVar27 = *maxX;
                if (*maxX <= (float)uVar6) {
                  fVar27 = (float)uVar6;
                }
                *maxX = fVar27;
                fVar27 = *minY;
                if ((float)uVar10 <= *minY) {
                  fVar27 = (float)uVar10;
                }
                *minY = fVar27;
                fVar27 = *maxY;
                if (*maxY <= (float)uVar10) {
                  fVar27 = (float)uVar10;
                }
                *maxY = fVar27;
                if (uVar22 + 1 < uVar21) {
                  uVar7 = local_78->m_Items[(int)(uVar22 + 1)].fields.x;
                  uVar11 = local_78->m_Items[(int)(uVar22 + 1)].fields.y;
                  fVar27 = *minX;
                  if ((float)uVar7 <= *minX) {
                    fVar27 = (float)uVar7;
                  }
                  *minX = fVar27;
                  fVar27 = *maxX;
                  if (*maxX <= (float)uVar7) {
                    fVar27 = (float)uVar7;
                  }
                  *maxX = fVar27;
                  fVar27 = *minY;
                  if ((float)uVar11 <= *minY) {
                    fVar27 = (float)uVar11;
                  }
                  *minY = fVar27;
                  fVar27 = *maxY;
                  if (*maxY <= (float)uVar11) {
                    fVar27 = (float)uVar11;
                  }
                  *maxY = fVar27;
                  if (uVar22 + 2 < uVar21) {
                    uVar8 = local_78->m_Items[(int)(uVar22 + 2)].fields.x;
                    uVar12 = local_78->m_Items[(int)(uVar22 + 2)].fields.y;
                    fVar27 = *minX;
                    if ((float)uVar8 <= *minX) {
                      fVar27 = (float)uVar8;
                    }
                    *minX = fVar27;
                    fVar27 = *maxX;
                    if (*maxX <= (float)uVar8) {
                      fVar27 = (float)uVar8;
                    }
                    *maxX = fVar27;
                    fVar27 = *minY;
                    if ((float)uVar12 <= *minY) {
                      fVar27 = (float)uVar12;
                    }
                    *minY = fVar27;
                    fVar27 = *maxY;
                    if (*maxY <= (float)uVar12) {
                      fVar27 = (float)uVar12;
                    }
                    *maxY = fVar27;
                    if (uVar22 + 3 < uVar21) {
                      uVar5 = local_78->m_Items[(int)(uVar22 + 3)].fields.x;
                      uVar9 = local_78->m_Items[(int)(uVar22 + 3)].fields.y;
                      fVar27 = *minX;
                      if ((float)uVar5 <= *minX) {
                        fVar27 = (float)uVar5;
                      }
                      *minX = fVar27;
                      fVar27 = *maxX;
                      if (*maxX <= (float)uVar5) {
                        fVar27 = (float)uVar5;
                      }
                      *maxX = fVar27;
                      fVar27 = *minY;
                      if ((float)uVar9 <= *minY) {
                        fVar27 = (float)uVar9;
                      }
                      *minY = fVar27;
                      fVar27 = *maxY;
                      if (*maxY <= (float)uVar9) {
                        fVar27 = (float)uVar9;
                      }
                      *maxY = fVar27;
                      ppUVar23 = (UnityEngine_Mesh_o **)minX;
                      goto label_0432bae0;
                    }
                  }
                }
              }
            }
label_0432bcf8:
            il2cpp_runtime_helper_022b2ca0();
            break;
          }
        }
label_0432bae0:
        uVar26 = uVar26 + 1;
        lVar25 = lVar25 + 0x178;
        if (uVar18 == uVar26) break;
        pTVar16 = (textInfo->fields).characterInfo;
        ppUVar24 = TypeInfo_NameEffectController;
      } while( true );
    }
  }
  if (*maxX < *minX || *maxX == *minX) {
    bVar19 = 0;
  }
  else {
    bVar19 = (bool_conflict)CONCAT71((int7)((ulong)minY >> 8),*minY <= *maxY && *maxY != *minY);
  }
  return bVar19;
}


// PatreonEffects.NameEffectController$$ApplyPopFaceGradient
// il2cpp: void PatreonEffects_NameEffectController__ApplyPopFaceGradient (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x432bf20

void PatreonEffects_NameEffectController__ApplyPopFaceGradient
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_Vector2_Fields UVar12;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Color32_Fields UVar13;
  UnityEngine_Vector2_o UVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  bool_conflict bVar17;
  uint uVar18;
  int iVar19;
  int32_t iVar20;
  uint uVar21;
  TMPro_TMP_FontAsset_o *pTVar22;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_Camera_o *x;
  UnityEngine_Transform_o *pUVar23;
  uint uVar24;
  UnityEngine_Vector2_array *pUVar25;
  TMPro_TMP_FontAsset_o *pTVar26;
  UnityEngine_Vector3_array *pUVar27;
  TMPro_TMP_Text_o *cam;
  PatreonEffects_NameEffectController_o *__this_02;
  TMPro_TMP_Text_o *pTVar28;
  long lVar29;
  UnityEngine_Events_UnityAction_o *pUVar30;
  ulong uVar31;
  TMPro_TMP_TextInfo_o *method_00;
  UnityEngine_Color32_array *pUVar32;
  UnityEngine_Vector3_array *pUVar33;
  UnityEngine_Color32_array *cam_00;
  TMPro_TMP_Text_o *pTVar34;
  UnityEngine_Canvas_o *pUVar35;
  float *maxX;
  MethodInfo *in_R9;
  uint uVar36;
  UnityEngine_Events_UnityAction_o *pUVar37;
  UnityEngine_Vector3_array *unaff_R13;
  UnityEngine_Vector3_array *pUVar38;
  long lVar39;
  UnityEngine_Mesh_o *unaff_R14;
  float fVar40;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  float fVar41;
  float fVar42;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o worldPoint;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o UVar43;
  undefined1 auStack_1b8 [40];
  UnityEngine_Vector2_array *pUStack_190;
  UnityEngine_Vector2_array *pUStack_188;
  UnityEngine_Color32_array *pUStack_180;
  System_Int32_array *pSStack_178;
  UnityEngine_Material_o *pUStack_170;
  TMPro_TMP_Text_o *pTStack_160;
  UnityEngine_Events_UnityAction_o *pUStack_158;
  UnityEngine_Vector3_array *pUStack_150;
  UnityEngine_Mesh_o *pUStack_148;
  UnityEngine_Vector2_array *pUStack_140;
  UnityEngine_Events_UnityAction_o *pUStack_138;
  PatreonEffects_NameEffectController_o *pPStack_130;
  UnityEngine_Mesh_o *pUStack_128;
  UnityEngine_Vector2_array *pUStack_120;
  float fStack_110;
  float fStack_10c;
  UnityEngine_Material_o *pUStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  UnityEngine_Vector3_array *pUStack_f0;
  TMPro_TMP_FontAsset_o *pTStack_e8;
  PatreonEffects_NameEffectController_o *pPStack_e0;
  UnityEngine_Vector3_array *pUStack_d8;
  TMPro_TMP_FontAsset_o *pTStack_d0;
  undefined1 auStack_c8 [16];
  UnityEngine_Vector3_array *pUStack_b8;
  TMPro_TMP_FontAsset_o *pTStack_b0;
  UnityEngine_Color32_array *pUStack_a8;
  UnityEngine_Events_UnityAction_o *pUStack_a0;
  UnityEngine_Vector2_array *pUStack_98;
  UnityEngine_Camera_o *pUStack_90;
  undefined1 auStack_88 [40];
  UnityEngine_Vector2_array *pUStack_60;
  UnityEngine_Vector2_array *pUStack_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *pSStack_48;
  UnityEngine_Material_o *pUStack_40;
  UnityEngine_Vector3_o position_03;
  
  method_00 = textInfo;
  pPStack_e0 = __this;
  if (g_data_057ae04a == '\0') {
    pUStack_120 = (UnityEngine_Vector2_array *)0x432bf4e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae04a = '\x01';
  }
  __this_02 = pPStack_e0;
  fStack_f4 = 0.0;
  fStack_f8 = 0.0;
  pSStack_48 = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  pUStack_58 = (UnityEngine_Vector2_array *)0x0;
  pUStack_50 = (UnityEngine_Color32_array *)0x0;
  auStack_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
  pUStack_60 = (UnityEngine_Vector2_array *)0x0;
  auStack_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
  auStack_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
  auStack_88._0_8_ = (TMPro_TMP_Text_c *)0x0;
  auStack_88._8_8_ = (UnityEngine_Material_array *)0x0;
  pUStack_120 = (UnityEngine_Vector2_array *)0x432bf9d;
  pUStack_90 = PatreonEffects_NameEffectController__PopCamera(pPStack_e0,(MethodInfo *)method_00);
  maxX = &fStack_f8;
  pUStack_120 = (UnityEngine_Vector2_array *)0x432bfbd;
  pUVar32 = (UnityEngine_Color32_array *)textInfo;
  bVar17 = PatreonEffects_NameEffectController__TryPopFaceBounds
                     (__this_02,textInfo,pUStack_90,&fStack_f4,maxX,in_R9);
  if ((char)bVar17 != '\0') {
    fStack_110 = fStack_f8;
    fStack_fc = fStack_f4;
    pTVar28 = TypeInfo_NameEffectController;
    if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) goto label_0432c3ef;
    if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
label_0432bffd:
      if (((UnityEngine_Vector2_array *)textInfo)->m_Items[3].fields != (UnityEngine_Vector2_Fields)0x0) {
        uVar21 = (uint)((UnityEngine_Vector2_array *)textInfo)->max_length;
        uVar18 = *(uint *)((long)((UnityEngine_Vector2_array *)textInfo)->m_Items[3].fields + 0x18);
        if ((int)uVar21 <= (int)uVar18) {
          uVar18 = uVar21;
        }
        if (0 < (int)uVar18) {
          fStack_110 = fStack_110 - fStack_fc;
          if (fStack_110 <= 0.001) {
            fStack_110 = 0.001;
          }
          pTStack_d0 = (TMPro_TMP_FontAsset_o *)&(pPStack_e0->fields).popGradientHooked;
          pUStack_d8 = (UnityEngine_Vector3_array *)&(pPStack_e0->fields).cleared;
          pTStack_e8 = (TMPro_TMP_FontAsset_o *)&(pPStack_e0->fields).popFaceA.fields.g;
          pUStack_f0 = (UnityEngine_Vector3_array *)&(pPStack_e0->fields).popFaceA.fields.a;
          pTStack_b0 = (TMPro_TMP_FontAsset_o *)&(pPStack_e0->fields).popFaceB.fields.g;
          pUVar25 = (UnityEngine_Vector2_array *)&(pPStack_e0->fields).popFaceB.fields.a;
          pUVar30 = (UnityEngine_Events_UnityAction_o *)(ulong)uVar18;
          pUVar37 = (UnityEngine_Events_UnityAction_o *)0x0;
          UVar12 = ((UnityEngine_Vector2_array *)textInfo)->m_Items[3].fields;
          pUStack_b8 = (UnityEngine_Vector3_array *)pUVar25;
          pUVar38 = unaff_R13;
          pTVar34 = TypeInfo_NameEffectController;
          do {
            TypeInfo_NameEffectController = pTVar34;
            if (UVar12 == (UnityEngine_Vector2_Fields)0x0) {
label_0432c40f:
              pUStack_120 = (UnityEngine_Vector2_array *)0x432c414;
              il2cpp_runtime_helper_022b2c90();
              pUStack_120 = (UnityEngine_Vector2_array *)textInfo;
              pUStack_128 = unaff_R14;
              pPStack_130 = __this_02;
              if (g_data_057ae04c == '\0') {
                pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c43d;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponentInParent_Canvas);
                pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c449;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057ae04c = '\x01';
              }
              __this_00 = (UnityEngine_Component_o *)(pTVar28->fields).m_Material;
              pUVar35 = (UnityEngine_Canvas_o *)0x0;
              if (__this_00 != (UnityEngine_Component_o *)0x0) {
                pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c46c;
                __this_01 = (UnityEngine_Canvas_o *)
                            UnityEngine_Component__GetComponentInParent_object_(__this_00,MethodInfo_Canvas_GetComponentInParent_Canvas);
                textInfo = (TMPro_TMP_TextInfo_o *)&TypeInfo_Object;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c487;
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar32 = (UnityEngine_Color32_array *)0x0;
                pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c493;
                pUVar35 = __this_01;
                bVar17 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar17 != '\0') {
                  return;
                }
                pTVar28 = (TMPro_TMP_Text_o *)0x0;
                if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
                  pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c4a6;
                  iVar20 = UnityEngine_Canvas__get_renderMode(__this_01,(MethodInfo *)0x0);
                  if (iVar20 == 0) {
                    return;
                  }
                  pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c4b4;
                  x = UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c4c8;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUStack_138 = (UnityEngine_Events_UnityAction_o *)0x432c4d4;
                  bVar17 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                  ;
                  if ((char)bVar17 != '\0') {
                    UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
                    return;
                  }
                  UnityEngine_Camera__get_main((MethodInfo *)0x0);
                  return;
                }
              }
              pUStack_138 = (UnityEngine_Events_UnityAction_o *)
                            PatreonEffects_NameEffectController__TryPopFaceBounds;
              il2cpp_runtime_helper_022b2c90();
              cam_00 = pUVar32;
              pTStack_160 = pTVar28;
              pUStack_158 = pUVar37;
              pUStack_150 = pUVar38;
              pUStack_148 = unaff_R14;
              pUStack_140 = (UnityEngine_Vector2_array *)textInfo;
              pUStack_138 = pUVar30;
              if (g_data_057ae04b == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                g_data_057ae04b = '\x01';
              }
              pSStack_178 = (System_Int32_array *)0x0;
              pUStack_170 = (UnityEngine_Material_o *)0x0;
              pUStack_188 = (UnityEngine_Vector2_array *)0x0;
              pUStack_180 = (UnityEngine_Color32_array *)0x0;
              auStack_1b8._32_8_ = (UnityEngine_Vector4_array *)0x0;
              pUStack_190 = (UnityEngine_Vector2_array *)0x0;
              auStack_1b8._16_8_ = (UnityEngine_Vector3_array *)0x0;
              auStack_1b8._24_8_ = (UnityEngine_Vector3_array *)0x0;
              auStack_1b8._0_8_ = (TMPro_TMP_Text_c *)0x0;
              auStack_1b8._8_8_ = (void *)0x0;
              *(undefined4 *)&(pUVar25->obj).klass = 0x7f800000;
              *maxX = -INFINITY;
              pTVar28 = TypeInfo_NameEffectController;
              if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (pUVar32 == (UnityEngine_Color32_array *)0x0) {
                return;
              }
              if (pUVar32->m_Items[3].fields == (UnityEngine_Color32_Fields)0x0) {
                return;
              }
              uVar21 = (uint)pUVar32->max_length;
              uVar18 = *(uint *)((long)pUVar32->m_Items[3].fields + 0x18);
              if ((int)uVar21 <= (int)uVar18) {
                uVar18 = uVar21;
              }
              if ((int)uVar18 < 1) {
                return;
              }
              lVar39 = 0x58;
              uVar31 = 0;
              UVar13 = pUVar32->m_Items[3].fields;
              pTVar34 = TypeInfo_NameEffectController;
              goto joined_r0x0432c5d5;
            }
            unaff_R13 = pUVar38;
            if ((UnityEngine_Events_UnityAction_o *)(ulong)*(uint *)((long)UVar12 + 0x18) <= pUVar37)
            goto label_0432c3ea;
            pUVar25 = (UnityEngine_Vector2_array *)((long)pUVar37 * 0x178);
            if ((((UnityEngine_Color32_o *)((long)UVar12 + 0x194))[(long)pUVar37 * 0x2f].fields.rgba & 1) != 0
               ) {
              uVar21 = ((int32_t *)((long)UVar12 + 0x58))[(long)pUVar37 * 0x5e];
              __this_02 = (PatreonEffects_NameEffectController_o *)(long)(int)uVar21;
              pUStack_108 = (UnityEngine_Material_o *)
                            (ulong)(uint)((int32_t *)((long)UVar12 + 0x6c))[(long)pUVar37 * 0x5e];
              pTVar28 = pTVar34;
              if (*(int *)((long)&(pTVar34->fields).m_Corners + 4) == 0) {
                pUStack_120 = (UnityEngine_Vector2_array *)0x432c0ed;
                il2cpp_runtime_helper_02337ed0();
                pTVar28 = pTVar34;
              }
              pSStack_48 = (System_Int32_array *)0x0;
              pUStack_40 = (UnityEngine_Material_o *)0x0;
              pUStack_58 = (UnityEngine_Vector2_array *)0x0;
              pUStack_50 = (UnityEngine_Color32_array *)0x0;
              auStack_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
              pUStack_60 = (UnityEngine_Vector2_array *)0x0;
              auStack_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
              auStack_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
              auStack_88._0_8_ = (TMPro_TMP_Text_c *)0x0;
              auStack_88._8_8_ = (UnityEngine_Material_array *)0x0;
              if ((-1 < (int)uVar21) &&
                 (UVar12 = ((UnityEngine_Vector2_array *)textInfo)->m_Items[8].fields,
                 UVar12 != (UnityEngine_Vector2_Fields)0x0)) {
                uVar18 = *(uint *)((long)UVar12 + 0x18);
                pUVar25 = (UnityEngine_Vector2_array *)(ulong)uVar18;
                if ((int)uVar21 < (int)uVar18) {
                  if (uVar18 <= uVar21) goto label_0432c3ea;
                  pUVar25 = (UnityEngine_Vector2_array *)((long)__this_02 * 0x50);
                  auStack_88._0_8_ =
                       ((TMPro_TMP_MeshInfo_o *)((long)UVar12 + 0x20))[(long)__this_02].fields.mesh;
                  auStack_88._8_8_ =
                       *(undefined8 *)
                        &((TMPro_TMP_MeshInfo_o *)((long)UVar12 + 0x20))[(long)__this_02].fields.vertexCount;
                  ppUVar1 = (UnityEngine_Vector3_array **)((long)UVar12 + 0x30) + (long)__this_02 * 10;
                  in_XMM1_Da = *(float *)ppUVar1;
                  auStack_88._16_8_ = *ppUVar1;
                  auStack_88._24_8_ = ppUVar1[1];
                  auStack_88._32_8_ =
                       ((UnityEngine_Vector4_array **)((long)UVar12 + 0x40))[(long)__this_02 * 10];
                  pUStack_60 = (UnityEngine_Vector2_array *)
                               ((UnityEngine_Vector4_array **)((long)UVar12 + 0x40) + (long)__this_02 * 10)[1]
                  ;
                  pUStack_58 = ((UnityEngine_Vector2_array **)((long)UVar12 + 0x50))[(long)__this_02 * 10];
                  pUStack_50 = (UnityEngine_Color32_array *)
                               ((UnityEngine_Vector2_array **)((long)UVar12 + 0x50) + (long)__this_02 * 10)[1]
                  ;
                  pSStack_48 = ((System_Int32_array **)((long)UVar12 + 0x60))[(long)__this_02 * 10];
                  pUStack_40 = (UnityEngine_Material_o *)
                               ((System_Int32_array **)((long)UVar12 + 0x60) + (long)__this_02 * 10)[1];
                  pTVar28 = (TMPro_TMP_Text_o *)auStack_88;
                  pUStack_120 = (UnityEngine_Vector2_array *)0x432c198;
                  il2cpp_runtime_helper_022b4080(pTVar28,0);
                  unaff_R13 = (UnityEngine_Vector3_array *)auStack_88._16_8_;
                  pUVar32 = pUStack_50;
                  if ((pUStack_50 != (UnityEngine_Color32_array *)0x0) &&
                     (pUVar38 = unaff_R13,
                     (UnityEngine_Vector3_array *)auStack_88._16_8_ != (UnityEngine_Vector3_array *)0x0)) {
                    iVar19 = (int)pUStack_108 + 3;
                    if ((iVar19 < (int)pUStack_50->max_length) &&
                       (pUVar25 = *(UnityEngine_Vector2_array **)(auStack_88._16_8_ + 0x18),
                       iVar19 < (int)pUVar25)) {
                      pUStack_a0 = pUVar30;
                      if ((UnityEngine_Material_o *)((ulong)pUVar25 & 0xffffffff) <= pUStack_108)
                      goto label_0432c3ea;
                      pUVar30 = (UnityEngine_Events_UnityAction_o *)(long)(int)pUStack_108;
                      unaff_R14 = (UnityEngine_Mesh_o *)(((long)pUStack_108 << 0x20) + 0x100000000);
                      __this_02 = (PatreonEffects_NameEffectController_o *)0x0;
                      pUStack_a8 = pUStack_50;
                      pUStack_98 = (UnityEngine_Vector2_array *)textInfo;
                      while( true ) {
                        textInfo = (TMPro_TMP_TextInfo_o *)pUStack_98;
                        uVar2 = ((UnityEngine_Vector3_o *)((long)unaff_R13 + 0x20))[(long)pUVar30].fields.x;
                        uVar7 = ((UnityEngine_Vector3_o *)((long)unaff_R13 + 0x20))[(long)pUVar30].fields.y;
                        auStack_c8._4_4_ = uVar7;
                        auStack_c8._0_4_ = uVar2;
                        auStack_c8._8_8_ = 0;
                        fStack_10c = ((UnityEngine_Vector3_o *)((long)unaff_R13 + 0x20))[(long)pUVar30].fields
                                     .z;
                        pUVar32 = pUStack_a8;
                        if (g_data_057ae04d == '\0') {
                          pUStack_120 = (UnityEngine_Vector2_array *)0x432c259;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                          g_data_057ae04d = '\x01';
                        }
                        pTVar28 = (pPStack_e0->fields).text;
                        if (pTVar28 == (TMPro_TMP_Text_o *)0x0) goto label_0432c40f;
                        pUVar32 = (UnityEngine_Color32_array *)0x0;
                        pUStack_120 = (UnityEngine_Vector2_array *)0x432c279;
                        pUVar23 = TMPro_TMP_Text__get_transform(pTVar28,(MethodInfo *)0x0);
                        auVar16 = auStack_c8;
                        if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_0432c40f;
                        pUStack_120 = (UnityEngine_Vector2_array *)0x432c297;
                        position.fields.z = fStack_10c;
                        position.fields.x = (float)auStack_c8._0_4_;
                        position.fields.y = (float)auStack_c8._4_4_;
                        auStack_c8 = auVar16;
                        UVar43 = UnityEngine_Transform__TransformPoint(pUVar23,position,(MethodInfo *)0x0);
                        fVar42 = UVar43.fields.x;
                        fVar40 = UVar43.fields.y;
                        fVar41 = UVar43.fields.z;
                        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                          auStack_c8._8_4_ = extraout_XMM0_Dc;
                          auStack_c8._0_8_ = UVar43.fields._0_8_;
                          auStack_c8._12_4_ = extraout_XMM0_Dd;
                          pUStack_120 = (UnityEngine_Vector2_array *)0x432c2ba;
                          fStack_10c = UVar43.fields.z;
                          il2cpp_runtime_helper_02337ed0();
                          fVar42 = (float)auStack_c8._0_4_;
                          fVar40 = (float)auStack_c8._4_4_;
                          fVar41 = fStack_10c;
                        }
                        textInfo = (TMPro_TMP_TextInfo_o *)
                                   ((long)&__this_02->klass + (long)&pUStack_108->klass);
                        pUStack_120 = (UnityEngine_Vector2_array *)0x432c2dd;
                        worldPoint.fields.y = fVar40;
                        worldPoint.fields.x = fVar42;
                        worldPoint.fields.z = fVar41;
                        UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                           (pUStack_90,worldPoint,(MethodInfo *)0x0);
                        fVar40 = (UVar14.fields.x - fStack_fc) / fStack_110;
                        pTVar22 = pTStack_d0;
                        pTVar26 = pTStack_e8;
                        pUVar27 = pUStack_d8;
                        pUVar33 = pUStack_f0;
                        fVar42 = 0.0;
                        if ((0.0 <= fVar40) &&
                           ((fVar42 = 1.0, 1.0 < fVar40 || (fVar42 = fVar40, 0.5 <= fVar40)))) {
                          pTVar22 = pTStack_e8;
                          pTVar26 = pTStack_b0;
                          pUVar27 = pUStack_f0;
                          pUVar33 = pUStack_b8;
                          fVar42 = fVar42 + -0.5;
                        }
                        in_XMM1_Da = SUB84((pUVar27->obj).klass,0);
                        fVar41 = SUB84((UnityEngine_UI_MaskableGraphic_CullStateChangedEvent_c *)
                                       pTVar22->klass,0);
                        fVar42 = fVar42 + fVar42;
                        fVar40 = 1.0;
                        if (fVar42 <= 1.0) {
                          fVar40 = fVar42;
                        }
                        fVar40 = (float)(-(uint)(0.0 <= fVar42) & (uint)fVar40);
                        in_XMM1_Da = (SUB84((pUVar33->obj).klass,0) - in_XMM1_Da) * fVar40 + in_XMM1_Da;
                        pTVar28 = (TMPro_TMP_Text_o *)0x0;
                        pUStack_120 = (UnityEngine_Vector2_array *)0x432c395;
                        iVar20 = il2cpp_runtime_helper_03b428b0((SUB84((UnityEngine_UI_MaskableGraphic_CullStateChangedEvent_c *
                                                     )pTVar26->klass,0) - fVar41) * fVar40 + fVar41);
                        pUVar25 = (UnityEngine_Vector2_array *)(ulong)(uint)pUStack_a8->max_length;
                        pUVar32 = pUStack_a8;
                        if (pUVar25 <= textInfo) goto label_0432c3ea;
                        (&pUStack_a8->m_Items[0].fields.rgba)[(long)pUVar30] = iVar20;
                        pUVar30 = pUStack_a0;
                        textInfo = (TMPro_TMP_TextInfo_o *)pUStack_98;
                        if (__this_02 == (PatreonEffects_NameEffectController_o *)0x3) break;
                        __this_02 = (PatreonEffects_NameEffectController_o *)((long)&__this_02->klass + 1);
                        pUVar30 = (UnityEngine_Events_UnityAction_o *)((long)unaff_R14 >> 0x20);
                        pUVar25 = (UnityEngine_Vector2_array *)
                                  ((long)&__this_02->klass + (long)&pUStack_108->klass);
                        unaff_R14 = (UnityEngine_Mesh_o *)&unaff_R14[0xaaaaaaa].fields;
                        if ((UnityEngine_Vector2_array *)
                            (ulong)(uint)*(il2cpp_array_size_t *)((long)unaff_R13 + 0x18) <= pUVar25)
                        goto label_0432c3ea;
                      }
                    }
                  }
                }
              }
            }
            pUVar37 = (UnityEngine_Events_UnityAction_o *)((long)&pUVar37->klass + 1);
            if (pUVar37 == pUVar30) {
              return;
            }
            UVar12 = ((UnityEngine_Vector2_array *)textInfo)->m_Items[3].fields;
            pTVar34 = TypeInfo_NameEffectController;
          } while( true );
        }
      }
    }
  }
  return;
joined_r0x0432c5d5:
  TypeInfo_NameEffectController = pTVar34;
  if (UVar13 == (UnityEngine_Color32_Fields)0x0) {
label_0432caa9:
    uVar15 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae04d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ae04d = '\x01';
    }
    pTVar28 = (TMPro_TMP_Text_o *)(pTVar28->fields).m_Material;
    if ((pTVar28 != (TMPro_TMP_Text_o *)0x0) &&
       (pUVar23 = TMPro_TMP_Text__get_transform(pTVar28,(MethodInfo *)0x0),
       pUVar23 != (UnityEngine_Transform_o *)0x0)) {
      position_03.fields.z = in_XMM1_Da;
      position_03.fields.x = (float)(int)uVar15;
      position_03.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
      UVar43 = UnityEngine_Transform__TransformPoint(pUVar23,position_03,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__WorldToScreenPoint
                ((UnityEngine_Camera_o *)cam_00,UVar43,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  if (*(uint *)((long)UVar13 + 0x18) <= uVar31) goto label_0432caa4;
  if ((*(byte *)((long)((long)UVar13 + 0x13c) + lVar39) & 1) != 0) {
    uVar21 = *(uint *)((long)UVar13 + lVar39);
    lVar29 = (long)(int)uVar21;
    uVar36 = *(uint *)((undefined1 *)((long)UVar13 + 0x14) + lVar39);
    pTVar28 = pTVar34;
    if (*(int *)&((TMPro_TMP_Text_Fields *)((long)pTVar34 + 0xe4))->m_CachedPtr == 0) {
      il2cpp_runtime_helper_02337ed0();
      pTVar28 = pTVar34;
    }
    pSStack_178 = (System_Int32_array *)0x0;
    pUStack_170 = (UnityEngine_Material_o *)0x0;
    pUStack_188 = (UnityEngine_Vector2_array *)0x0;
    pUStack_180 = (UnityEngine_Color32_array *)0x0;
    auStack_1b8._32_8_ = (UnityEngine_Vector4_array *)0x0;
    pUStack_190 = (UnityEngine_Vector2_array *)0x0;
    auStack_1b8._16_8_ = (UnityEngine_Vector3_array *)0x0;
    auStack_1b8._24_8_ = (UnityEngine_Vector3_array *)0x0;
    auStack_1b8._0_8_ = (TMPro_TMP_Text_c *)0x0;
    auStack_1b8._8_8_ = (void *)0x0;
    if (((-1 < (int)uVar21) &&
        (UVar13 = pUVar32->m_Items[8].fields, UVar13 != (UnityEngine_Color32_Fields)0x0)) &&
       ((int)uVar21 < (int)*(uint *)((long)UVar13 + 0x18))) {
      if (*(uint *)((long)UVar13 + 0x18) <= uVar21) {
label_0432caa4:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0432caa9;
      }
      auStack_1b8._0_8_ = ((TMPro_TMP_MeshInfo_o *)((long)UVar13 + 0x20))[lVar29].fields.mesh;
      auStack_1b8._8_8_ =
           *(undefined8 *)&((TMPro_TMP_MeshInfo_o *)((long)UVar13 + 0x20))[lVar29].fields.vertexCount;
      ppUVar1 = (UnityEngine_Vector3_array **)((long)UVar13 + 0x30) + lVar29 * 10;
      in_XMM1_Da = *(float *)ppUVar1;
      auStack_1b8._16_8_ = *ppUVar1;
      auStack_1b8._24_8_ = ppUVar1[1];
      auStack_1b8._32_8_ = ((UnityEngine_Vector4_array **)((long)UVar13 + 0x40))[lVar29 * 10];
      pUStack_190 = (UnityEngine_Vector2_array *)
                    ((UnityEngine_Vector4_array **)((long)UVar13 + 0x40) + lVar29 * 10)[1];
      pUStack_188 = ((UnityEngine_Vector2_array **)((long)UVar13 + 0x50))[lVar29 * 10];
      pUStack_180 = (UnityEngine_Color32_array *)
                    ((UnityEngine_Vector2_array **)((long)UVar13 + 0x50) + lVar29 * 10)[1];
      pSStack_178 = ((System_Int32_array **)((long)UVar13 + 0x60))[lVar29 * 10];
      pUStack_170 = (UnityEngine_Material_o *)((System_Int32_array **)((long)UVar13 + 0x60) + lVar29 * 10)[1];
      pTVar28 = (TMPro_TMP_Text_o *)auStack_1b8;
      cam_00 = (UnityEngine_Color32_array *)0x0;
      il2cpp_runtime_helper_022b4080();
      uVar15 = auStack_1b8._16_8_;
      if ((UnityEngine_Vector3_array *)auStack_1b8._16_8_ != (UnityEngine_Vector3_array *)0x0) {
        uVar21 = (uint)*(il2cpp_array_size_t *)(auStack_1b8._16_8_ + 0x18);
        uVar24 = uVar36 + 3;
        if ((int)uVar24 < (int)uVar21) {
          if (uVar36 < uVar21) {
            uVar3 = ((UnityEngine_Vector3_o *)(auStack_1b8._16_8_ + 0x20))[(int)uVar36].fields.x;
            uVar8 = ((UnityEngine_Vector3_o *)(auStack_1b8._16_8_ + 0x20))[(int)uVar36].fields.y;
            UVar43.fields.y = (float)uVar8;
            UVar43.fields.x = (float)uVar3;
            fVar42 = ((UnityEngine_Vector3_o *)(auStack_1b8._16_8_ + 0x20))[(int)uVar36].fields.z;
            if (g_data_057ae04d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057ae04d = '\x01';
            }
            pTVar28 = pUVar35[1].monitor;
            if (pTVar28 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
            cam_00 = (UnityEngine_Color32_array *)0x0;
            pUVar23 = TMPro_TMP_Text__get_transform(pTVar28,(MethodInfo *)0x0);
            if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
            UVar43.fields.z = fVar42;
            UVar43 = UnityEngine_Transform__TransformPoint(pUVar23,UVar43,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            cam_00 = (UnityEngine_Color32_array *)0x0;
            pTVar28 = cam;
            UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                               ((UnityEngine_Camera_o *)cam,UVar43,(MethodInfo *)0x0);
            fVar40 = UVar14.fields.x;
            fVar42 = *(float *)&(pUVar25->obj).klass;
            if (fVar40 <= fVar42) {
              fVar42 = fVar40;
            }
            *(float *)&(pUVar25->obj).klass = fVar42;
            in_XMM1_Da = *maxX;
            if (*maxX <= fVar40) {
              in_XMM1_Da = fVar40;
            }
            *maxX = in_XMM1_Da;
            uVar21 = uVar36 + 1;
            if ((uint)*(il2cpp_array_size_t *)(uVar15 + 0x18) <= uVar21) goto label_0432caa4;
            uVar4 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar21].fields.x;
            uVar9 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar21].fields.y;
            position_00.fields.y = (float)uVar9;
            position_00.fields.x = (float)uVar4;
            fVar42 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar21].fields.z;
            if (g_data_057ae04d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057ae04d = '\x01';
            }
            pTVar28 = pUVar35[1].monitor;
            if (pTVar28 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
            cam_00 = (UnityEngine_Color32_array *)0x0;
            pUVar23 = TMPro_TMP_Text__get_transform(pTVar28,(MethodInfo *)0x0);
            if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
            position_00.fields.z = fVar42;
            UVar43 = UnityEngine_Transform__TransformPoint(pUVar23,position_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            cam_00 = (UnityEngine_Color32_array *)0x0;
            pTVar28 = cam;
            UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                               ((UnityEngine_Camera_o *)cam,UVar43,(MethodInfo *)0x0);
            fVar40 = UVar14.fields.x;
            fVar42 = *(float *)&(pUVar25->obj).klass;
            if (fVar40 <= fVar42) {
              fVar42 = fVar40;
            }
            *(float *)&(pUVar25->obj).klass = fVar42;
            in_XMM1_Da = *maxX;
            if (*maxX <= fVar40) {
              in_XMM1_Da = fVar40;
            }
            *maxX = in_XMM1_Da;
            uVar36 = uVar36 + 2;
            if (uVar36 < (uint)*(il2cpp_array_size_t *)(uVar15 + 0x18)) {
              uVar5 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar36].fields.x;
              uVar10 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar36].fields.y;
              position_01.fields.y = (float)uVar10;
              position_01.fields.x = (float)uVar5;
              fVar42 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar36].fields.z;
              if (g_data_057ae04d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                g_data_057ae04d = '\x01';
              }
              pTVar28 = pUVar35[1].monitor;
              if (pTVar28 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
              cam_00 = (UnityEngine_Color32_array *)0x0;
              pUVar23 = TMPro_TMP_Text__get_transform(pTVar28,(MethodInfo *)0x0);
              if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
              position_01.fields.z = fVar42;
              UVar43 = UnityEngine_Transform__TransformPoint(pUVar23,position_01,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              cam_00 = (UnityEngine_Color32_array *)0x0;
              pTVar28 = cam;
              UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                 ((UnityEngine_Camera_o *)cam,UVar43,(MethodInfo *)0x0);
              fVar40 = UVar14.fields.x;
              fVar42 = *(float *)&(pUVar25->obj).klass;
              if (fVar40 <= fVar42) {
                fVar42 = fVar40;
              }
              *(float *)&(pUVar25->obj).klass = fVar42;
              in_XMM1_Da = *maxX;
              if (*maxX <= fVar40) {
                in_XMM1_Da = fVar40;
              }
              *maxX = in_XMM1_Da;
              if (uVar24 < (uint)*(il2cpp_array_size_t *)(uVar15 + 0x18)) {
                uVar6 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar24].fields.x;
                uVar11 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar24].fields.y;
                position_02.fields.y = (float)uVar11;
                position_02.fields.x = (float)uVar6;
                fVar42 = ((UnityEngine_Vector3_o *)(uVar15 + 0x20))[(int)uVar24].fields.z;
                if (g_data_057ae04d == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                  g_data_057ae04d = '\x01';
                }
                pTVar28 = pUVar35[1].monitor;
                if (pTVar28 != (TMPro_TMP_Text_o *)0x0) {
                  cam_00 = (UnityEngine_Color32_array *)0x0;
                  pUVar23 = TMPro_TMP_Text__get_transform(pTVar28,(MethodInfo *)0x0);
                  if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
                    position_02.fields.z = fVar42;
                    UVar43 = UnityEngine_Transform__TransformPoint(pUVar23,position_02,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    cam_00 = (UnityEngine_Color32_array *)0x0;
                    pTVar28 = cam;
                    UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                       ((UnityEngine_Camera_o *)cam,UVar43,(MethodInfo *)0x0);
                    fVar40 = UVar14.fields.x;
                    fVar42 = *(float *)&(pUVar25->obj).klass;
                    if (fVar40 <= fVar42) {
                      fVar42 = fVar40;
                    }
                    *(float *)&(pUVar25->obj).klass = fVar42;
                    in_XMM1_Da = *maxX;
                    if (*maxX <= fVar40) {
                      in_XMM1_Da = fVar40;
                    }
                    *maxX = in_XMM1_Da;
                    goto label_0432c620;
                  }
                }
                goto label_0432caa9;
              }
            }
          }
          goto label_0432caa4;
        }
      }
    }
  }
label_0432c620:
  uVar31 = uVar31 + 1;
  lVar39 = lVar39 + 0x178;
  if (uVar18 == uVar31) {
    return;
  }
  UVar13 = pUVar32->m_Items[3].fields;
  pTVar34 = TypeInfo_NameEffectController;
  goto joined_r0x0432c5d5;
label_0432c3ea:
  pUStack_120 = (UnityEngine_Vector2_array *)0x432c3ef;
  il2cpp_runtime_helper_022b2ca0();
label_0432c3ef:
  pUStack_120 = (UnityEngine_Vector2_array *)0x432c3f4;
  il2cpp_runtime_helper_02337ed0();
  if ((UnityEngine_Vector2_array *)textInfo == (UnityEngine_Vector2_array *)0x0) {
    return;
  }
  goto label_0432bffd;
}


// PatreonEffects.NameEffectController$$SampleFaceGradient
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectController__SampleFaceGradient (PatreonEffects_NameEffectController_o* __this, float t, const MethodInfo* method);
// 0x432cb50

UnityEngine_Color_o
PatreonEffects_NameEffectController__SampleFaceGradient
          (PatreonEffects_NameEffectController_o *__this,float t,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Color_o *pUVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  
  fVar8 = 0.0;
  if (0.0 <= t) {
    fVar8 = 1.0;
    if (t <= 1.0) {
      fVar8 = t;
    }
    if (0.5 <= fVar8) {
      pfVar7 = &(__this->fields).popFaceA.fields.a;
      pUVar4 = &(__this->fields).popFaceB;
      pfVar6 = &(__this->fields).popFaceA.fields.g;
      pUVar5 = &(__this->fields).popFaceB;
      fVar8 = fVar8 + -0.5;
      goto label_0432cba4;
    }
  }
  pfVar6 = (float *)&(__this->fields).popGradientHooked;
  pfVar7 = (float *)&(__this->fields).cleared;
  pUVar4 = &(__this->fields).popFaceA;
  pUVar5 = &(__this->fields).popFaceA;
label_0432cba4:
  uVar2 = *(undefined8 *)&(pUVar5->fields).a;
  uVar1 = (pUVar4->fields).g;
  uVar3 = (pUVar4->fields).b;
  fVar8 = fVar8 + fVar8;
  fVar9 = 1.0;
  if (fVar8 <= 1.0) {
    fVar9 = fVar8;
  }
  fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
  fVar8 = (float)*(undefined8 *)pfVar6;
  fVar10 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
  UVar11.fields.r = ((float)uVar1 - fVar8) * fVar9 + fVar8;
  UVar11.fields.g = ((float)uVar3 - fVar10) * fVar9 + fVar10;
  fVar8 = (float)*(undefined8 *)pfVar7;
  fVar10 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  UVar11.fields.b = ((float)uVar2 - fVar8) * fVar9 + fVar8;
  UVar11.fields.a = ((float)((ulong)uVar2 >> 0x20) - fVar10) * fVar9 + fVar10;
  return (UnityEngine_Color_o)UVar11.fields;
}


// PatreonEffects.NameEffectController$$TryPopFaceBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryPopFaceBounds (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Camera_o* camera, float* minX, float* maxX, const MethodInfo* method);
// 0x432c500

bool_conflict
PatreonEffects_NameEffectController__TryPopFaceBounds
          (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
          UnityEngine_Camera_o *camera,float *minX,float *maxX,MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  TMPro_TMP_MeshInfo_array *pTVar13;
  UnityEngine_Vector2_o UVar14;
  int iVar15;
  undefined8 uVar16;
  TMPro_TMP_MeshInfo_Fields *pTVar17;
  uint uVar18;
  uint uVar19;
  bool_conflict extraout_EAX;
  TMPro_TMP_CharacterInfo_array *pTVar20;
  UnityEngine_Transform_o *pUVar21;
  uint uVar22;
  ulong uVar23;
  TMPro_TMP_TextInfo_o *cam;
  int iVar24;
  TMPro_TMP_Text_o *pTVar25;
  uint uVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float in_XMM1_Da;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar30;
  undefined1 local_88 [40];
  UnityEngine_Vector2_array *pUStack_60;
  UnityEngine_Vector2_array *local_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *local_48;
  UnityEngine_Material_o *pUStack_40;
  UnityEngine_Vector3_o position_02;
  
  cam = textInfo;
  if (g_data_057ae04b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae04b = '\x01';
  }
  local_48 = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  local_58 = (UnityEngine_Vector2_array *)0x0;
  pUStack_50 = (UnityEngine_Color32_array *)0x0;
  local_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
  pUStack_60 = (UnityEngine_Vector2_array *)0x0;
  local_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
  local_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
  local_88._0_8_ = (TMPro_TMP_Text_c *)0x0;
  local_88._8_8_ = (void *)0x0;
  *minX = INFINITY;
  *maxX = -INFINITY;
  pTVar25 = TypeInfo_NameEffectController;
  if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((textInfo == (TMPro_TMP_TextInfo_o *)0x0) ||
     (pTVar20 = (textInfo->fields).characterInfo, pTVar20 == (TMPro_TMP_CharacterInfo_array *)0x0)) {
label_0432ca7e:
    return (bool_conflict)CONCAT71((int7)((ulong)minX >> 8),*minX <= *maxX && *maxX != *minX);
  }
  uVar19 = (textInfo->fields).characterCount;
  uVar18 = (uint)pTVar20->max_length;
  if ((int)uVar19 <= (int)uVar18) {
    uVar18 = uVar19;
  }
  if ((int)uVar18 < 1) goto label_0432ca7e;
  lVar27 = 0x58;
  uVar23 = 0;
  pTVar20 = (textInfo->fields).characterInfo;
  if (pTVar20 != (TMPro_TMP_CharacterInfo_array *)0x0) {
label_0432c643:
    if ((uint)pTVar20->max_length <= uVar23) goto label_0432caa4;
    if ((*(byte *)((long)&pTVar20->m_Items[0].fields.topRight.fields.y + lVar27) & 1) != 0) {
      uVar19 = *(uint *)((long)pTVar20->m_Items + lVar27 + -0x20);
      uVar26 = *(uint *)((long)pTVar20->m_Items + lVar27 + -0xc);
      pTVar25 = TypeInfo_NameEffectController;
      if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_48 = (System_Int32_array *)0x0;
      pUStack_40 = (UnityEngine_Material_o *)0x0;
      local_58 = (UnityEngine_Vector2_array *)0x0;
      pUStack_50 = (UnityEngine_Color32_array *)0x0;
      local_88._32_8_ = (UnityEngine_Vector4_array *)0x0;
      pUStack_60 = (UnityEngine_Vector2_array *)0x0;
      local_88._16_8_ = (UnityEngine_Vector3_array *)0x0;
      local_88._24_8_ = (UnityEngine_Vector3_array *)0x0;
      local_88._0_8_ = (TMPro_TMP_Text_c *)0x0;
      local_88._8_8_ = (void *)0x0;
      if (((-1 < (int)uVar19) &&
          (pTVar13 = (textInfo->fields).meshInfo, pTVar13 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
         (uVar22 = (uint)pTVar13->max_length, (int)uVar19 < (int)uVar22)) {
        if (uVar22 <= uVar19) {
label_0432caa4:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0432caa9;
        }
        local_88._0_8_ = pTVar13->m_Items[(int)uVar19].fields.mesh;
        local_88._8_8_ = *(undefined8 *)&pTVar13->m_Items[(int)uVar19].fields.vertexCount;
        pTVar17 = &pTVar13->m_Items[(int)uVar19].fields;
        ppUVar1 = &pTVar17->vertices;
        in_XMM1_Da = *(float *)ppUVar1;
        local_88._16_8_ = *ppUVar1;
        local_88._24_8_ = pTVar17->normals;
        ppUVar2 = &pTVar13->m_Items[(int)uVar19].fields.tangents;
        local_88._32_8_ = *ppUVar2;
        pUStack_60 = (UnityEngine_Vector2_array *)ppUVar2[1];
        ppUVar3 = &pTVar13->m_Items[(int)uVar19].fields.uvs2;
        local_58 = *ppUVar3;
        pUStack_50 = (UnityEngine_Color32_array *)ppUVar3[1];
        ppSVar4 = &pTVar13->m_Items[(int)uVar19].fields.triangles;
        local_48 = *ppSVar4;
        pUStack_40 = (UnityEngine_Material_o *)ppSVar4[1];
        pTVar25 = (TMPro_TMP_Text_o *)local_88;
        cam = (TMPro_TMP_TextInfo_o *)0x0;
        il2cpp_runtime_helper_022b4080();
        uVar16 = local_88._16_8_;
        if ((UnityEngine_Vector3_array *)local_88._16_8_ != (UnityEngine_Vector3_array *)0x0) {
          uVar19 = (uint)*(il2cpp_array_size_t *)(local_88._16_8_ + 0x18);
          uVar22 = uVar26 + 3;
          if ((int)uVar22 < (int)uVar19) {
            if (uVar19 <= uVar26) goto label_0432caa4;
            uVar5 = ((UnityEngine_Vector3_o *)(local_88._16_8_ + 0x20))[(int)uVar26].fields.x;
            uVar9 = ((UnityEngine_Vector3_o *)(local_88._16_8_ + 0x20))[(int)uVar26].fields.y;
            UVar30.fields.y = (float)uVar9;
            UVar30.fields.x = (float)uVar5;
            fVar29 = ((UnityEngine_Vector3_o *)(local_88._16_8_ + 0x20))[(int)uVar26].fields.z;
            if (g_data_057ae04d == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057ae04d = '\x01';
            }
            pTVar25 = (__this->fields).text;
            if (pTVar25 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
            cam = (TMPro_TMP_TextInfo_o *)0x0;
            pUVar21 = TMPro_TMP_Text__get_transform(pTVar25,(MethodInfo *)0x0);
            if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
            UVar30.fields.z = fVar29;
            UVar30 = UnityEngine_Transform__TransformPoint(pUVar21,UVar30,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            cam = (TMPro_TMP_TextInfo_o *)0x0;
            pTVar25 = (TMPro_TMP_Text_o *)camera;
            UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,UVar30,(MethodInfo *)0x0);
            fVar28 = UVar14.fields.x;
            fVar29 = *minX;
            if (fVar28 <= *minX) {
              fVar29 = fVar28;
            }
            *minX = fVar29;
            in_XMM1_Da = *maxX;
            if (*maxX <= fVar28) {
              in_XMM1_Da = fVar28;
            }
            *maxX = in_XMM1_Da;
            uVar19 = uVar26 + 1;
            if (uVar19 < (uint)*(il2cpp_array_size_t *)(uVar16 + 0x18)) {
              uVar6 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar19].fields.x;
              uVar10 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar19].fields.y;
              position.fields.y = (float)uVar10;
              position.fields.x = (float)uVar6;
              fVar29 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar19].fields.z;
              if (g_data_057ae04d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                g_data_057ae04d = '\x01';
              }
              pTVar25 = (__this->fields).text;
              if (pTVar25 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
              cam = (TMPro_TMP_TextInfo_o *)0x0;
              pUVar21 = TMPro_TMP_Text__get_transform(pTVar25,(MethodInfo *)0x0);
              if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
              position.fields.z = fVar29;
              UVar30 = UnityEngine_Transform__TransformPoint(pUVar21,position,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              cam = (TMPro_TMP_TextInfo_o *)0x0;
              pTVar25 = (TMPro_TMP_Text_o *)camera;
              UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,UVar30,(MethodInfo *)0x0);
              fVar28 = UVar14.fields.x;
              fVar29 = *minX;
              if (fVar28 <= *minX) {
                fVar29 = fVar28;
              }
              *minX = fVar29;
              in_XMM1_Da = *maxX;
              if (*maxX <= fVar28) {
                in_XMM1_Da = fVar28;
              }
              *maxX = in_XMM1_Da;
              uVar26 = uVar26 + 2;
              if (uVar26 < (uint)*(il2cpp_array_size_t *)(uVar16 + 0x18)) {
                uVar7 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar26].fields.x;
                uVar11 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar26].fields.y;
                position_00.fields.y = (float)uVar11;
                position_00.fields.x = (float)uVar7;
                fVar29 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar26].fields.z;
                if (g_data_057ae04d == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                  g_data_057ae04d = '\x01';
                }
                pTVar25 = (__this->fields).text;
                if (pTVar25 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
                cam = (TMPro_TMP_TextInfo_o *)0x0;
                pUVar21 = TMPro_TMP_Text__get_transform(pTVar25,(MethodInfo *)0x0);
                if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
                position_00.fields.z = fVar29;
                UVar30 = UnityEngine_Transform__TransformPoint(pUVar21,position_00,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                cam = (TMPro_TMP_TextInfo_o *)0x0;
                pTVar25 = (TMPro_TMP_Text_o *)camera;
                UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,UVar30,(MethodInfo *)0x0)
                ;
                fVar28 = UVar14.fields.x;
                fVar29 = *minX;
                if (fVar28 <= *minX) {
                  fVar29 = fVar28;
                }
                *minX = fVar29;
                in_XMM1_Da = *maxX;
                if (*maxX <= fVar28) {
                  in_XMM1_Da = fVar28;
                }
                *maxX = in_XMM1_Da;
                if (uVar22 < (uint)*(il2cpp_array_size_t *)(uVar16 + 0x18)) {
                  uVar8 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar22].fields.x;
                  uVar12 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar22].fields.y;
                  position_01.fields.y = (float)uVar12;
                  position_01.fields.x = (float)uVar8;
                  fVar29 = ((UnityEngine_Vector3_o *)(uVar16 + 0x20))[(int)uVar22].fields.z;
                  if (g_data_057ae04d == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                    g_data_057ae04d = '\x01';
                  }
                  pTVar25 = (__this->fields).text;
                  if (pTVar25 != (TMPro_TMP_Text_o *)0x0) {
                    cam = (TMPro_TMP_TextInfo_o *)0x0;
                    pUVar21 = TMPro_TMP_Text__get_transform(pTVar25,(MethodInfo *)0x0);
                    if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                      position_01.fields.z = fVar29;
                      UVar30 = UnityEngine_Transform__TransformPoint(pUVar21,position_01,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      cam = (TMPro_TMP_TextInfo_o *)0x0;
                      pTVar25 = (TMPro_TMP_Text_o *)camera;
                      UVar14 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                         (camera,UVar30,(MethodInfo *)0x0);
                      fVar28 = UVar14.fields.x;
                      fVar29 = *minX;
                      if (fVar28 <= *minX) {
                        fVar29 = fVar28;
                      }
                      *minX = fVar29;
                      in_XMM1_Da = *maxX;
                      if (*maxX <= fVar28) {
                        in_XMM1_Da = fVar28;
                      }
                      *maxX = in_XMM1_Da;
                      goto label_0432c620;
                    }
                  }
                  goto label_0432caa9;
                }
              }
            }
            goto label_0432caa4;
          }
        }
      }
    }
label_0432c620:
    uVar23 = uVar23 + 1;
    lVar27 = lVar27 + 0x178;
    if (uVar18 == uVar23) goto label_0432ca7e;
    pTVar20 = (textInfo->fields).characterInfo;
    if (pTVar20 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_0432caa9;
    goto label_0432c643;
  }
label_0432caa9:
  uVar16 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae04d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ae04d = '\x01';
  }
  pTVar25 = (TMPro_TMP_Text_o *)(pTVar25->fields).m_Material;
  if ((pTVar25 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar21 = TMPro_TMP_Text__get_transform(pTVar25,(MethodInfo *)0x0),
     pUVar21 != (UnityEngine_Transform_o *)0x0)) {
    position_02.fields.z = in_XMM1_Da;
    position_02.fields.x = (float)(int)uVar16;
    position_02.fields.y = (float)(int)((ulong)uVar16 >> 0x20);
    UVar30 = UnityEngine_Transform__TransformPoint(pUVar21,position_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_RectTransformUtility__WorldToScreenPoint((UnityEngine_Camera_o *)cam,UVar30,(MethodInfo *)0x0)
    ;
    return extraout_EAX;
  }
  iVar24 = (int)pTVar25;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  if (0.0 <= fVar29) {
    fVar28 = 1.0;
    if (fVar29 <= 1.0) {
      fVar28 = fVar29;
    }
    if (0.5 <= fVar28) {
      iVar15 = 0x78;
      goto label_0432cba4;
    }
  }
  iVar15 = 0x68;
label_0432cba4:
  return iVar24 + iVar15;
}


// PatreonEffects.NameEffectController$$PopCamera
// il2cpp: UnityEngine_Camera_o* PatreonEffects_NameEffectController__PopCamera (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432c420

UnityEngine_Camera_o *
PatreonEffects_NameEffectController__PopCamera
          (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_Vector2_o UVar4;
  undefined8 uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  uint uVar8;
  uint uVar9;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_Camera_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Camera_o *extraout_RAX;
  uint uVar12;
  float *in_RCX;
  long lVar13;
  TMPro_TMP_Text_o *cam;
  ulong uVar14;
  MethodInfo *cam_00;
  UnityEngine_Canvas_o *pUVar15;
  TMPro_TMP_Text_o *pTVar16;
  TMPro_TMP_Text_o *pTVar17;
  float *in_R8;
  uint uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float in_XMM1_Da;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  TMPro_TMP_Text_c *pTStack_a0;
  void *pvStack_98;
  long lStack_90;
  System_Threading_CancellationTokenSource_o *pSStack_88;
  UnityEngine_Material_o *pUStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  bool_conflict bStack_68;
  bool_conflict bStack_64;
  bool_conflict bStack_60;
  bool_conflict bStack_5c;
  float fStack_58;
  float fStack_54;
  PatreonEffects_NameEffectController_o *pPStack_48;
  UnityEngine_Vector3_o UVar22;
  
  if (g_data_057ae04c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponentInParent_Canvas);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae04c = '\x01';
  }
  pTVar16 = (__this->fields).text;
  pUVar15 = (UnityEngine_Canvas_o *)0x0;
  if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
    __this_00 = (UnityEngine_Canvas_o *)
                UnityEngine_Component__GetComponentInParent_object_
                          ((UnityEngine_Component_o *)pTVar16,MethodInfo_Canvas_GetComponentInParent_Canvas);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pUVar15 = __this_00;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return (UnityEngine_Camera_o *)0x0;
    }
    __this = (PatreonEffects_NameEffectController_o *)0x0;
    if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
      iVar7 = UnityEngine_Canvas__get_renderMode(__this_00,(MethodInfo *)0x0);
      if (iVar7 == 0) {
        return (UnityEngine_Camera_o *)0x0;
      }
      pUVar10 = UnityEngine_Canvas__get_worldCamera(__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pUVar10 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
        return pUVar10;
      }
      pUVar10 = UnityEngine_Canvas__get_worldCamera(__this_00,(MethodInfo *)0x0);
      return pUVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  cam_00 = method;
  pPStack_48 = __this;
  if (g_data_057ae04b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    g_data_057ae04b = '\x01';
  }
  bStack_60 = 0;
  bStack_5c = 0;
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  bStack_68 = 0;
  bStack_64 = 0;
  pUStack_80 = (UnityEngine_Material_o *)0x0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  lStack_90 = 0;
  pSStack_88 = (System_Threading_CancellationTokenSource_o *)0x0;
  pTStack_a0 = (TMPro_TMP_Text_c *)0x0;
  pvStack_98 = (void *)0x0;
  *in_RCX = INFINITY;
  *in_R8 = -INFINITY;
  pTVar16 = TypeInfo_NameEffectController;
  if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uVar8 = *(uint *)((method->field7_0x38).rgctx_data + 3);
    if ((int)*(uint *)&method->name <= (int)uVar8) {
      uVar8 = *(uint *)&method->name;
    }
    if (0 < (int)uVar8) {
      lVar19 = 0x58;
      uVar14 = 0;
      pIVar2 = (method->field7_0x38).rgctx_data;
      pTVar17 = TypeInfo_NameEffectController;
joined_r0x0432c5d5:
      TypeInfo_NameEffectController = pTVar17;
      if (pIVar2 == (Il2CppRGCTXData *)0x0) {
label_0432caa9:
        uVar5 = il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae04d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          g_data_057ae04d = '\x01';
        }
        pTVar16 = (TMPro_TMP_Text_o *)(pTVar16->fields).m_Material;
        if ((pTVar16 != (TMPro_TMP_Text_o *)0x0) &&
           (pUVar11 = TMPro_TMP_Text__get_transform(pTVar16,(MethodInfo *)0x0),
           pUVar11 != (UnityEngine_Transform_o *)0x0)) {
          position_02.fields.z = in_XMM1_Da;
          position_02.fields.x = (float)(int)uVar5;
          position_02.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
          UVar22 = UnityEngine_Transform__TransformPoint(pUVar11,position_02,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_RectTransformUtility__WorldToScreenPoint
                    ((UnityEngine_Camera_o *)cam_00,UVar22,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        fVar21 = (float)il2cpp_runtime_helper_022b2c90();
        if (0.0 <= fVar21) {
          fVar20 = 1.0;
          if (fVar21 <= 1.0) {
            fVar20 = fVar21;
          }
          if (0.5 <= fVar20) {
            return (UnityEngine_Camera_o *)&(pTVar16->fields).m_OnDirtyLayoutCallback;
          }
        }
        return (UnityEngine_Camera_o *)&(pTVar16->fields).m_Canvas;
      }
      if (*(uint *)(pIVar2 + 3) <= uVar14) goto label_0432caa4;
      if ((*(byte *)((long)pIVar2 + lVar19 + 0x13c) & 1) != 0) {
        uVar12 = *(uint *)((long)pIVar2 + lVar19);
        uVar18 = *(uint *)((long)pIVar2 + lVar19 + 0x14);
        pTVar16 = pTVar17;
        if (*(int *)((long)&(pTVar17->fields).m_Corners + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pTVar16 = pTVar17;
        }
        bStack_60 = 0;
        bStack_5c = 0;
        fStack_58 = 0.0;
        fStack_54 = 0.0;
        fStack_70 = 0.0;
        fStack_6c = 0.0;
        bStack_68 = 0;
        bStack_64 = 0;
        pUStack_80 = (UnityEngine_Material_o *)0x0;
        fStack_78 = 0.0;
        fStack_74 = 0.0;
        lStack_90 = 0;
        pSStack_88 = (System_Threading_CancellationTokenSource_o *)0x0;
        pTStack_a0 = (TMPro_TMP_Text_c *)0x0;
        pvStack_98 = (void *)0x0;
        if (((-1 < (int)uVar12) &&
            (pIVar3 = method[1].virtualMethodPointer, pIVar3 != (Il2CppMethodPointer)0x0)) &&
           ((int)uVar12 < (int)*(uint *)(pIVar3 + 0x18))) {
          if (*(uint *)(pIVar3 + 0x18) <= uVar12) {
label_0432caa4:
            il2cpp_runtime_helper_022b2ca0();
            goto label_0432caa9;
          }
          lVar13 = (long)(int)uVar12 * 0x50;
          pTStack_a0 = *(TMPro_TMP_Text_c **)(pIVar3 + lVar13 + 0x20);
          pvStack_98 = *(void **)(pIVar3 + lVar13 + 0x20 + 8);
          pfVar1 = (float *)(pIVar3 + lVar13 + 0x30);
          in_XMM1_Da = *pfVar1;
          lStack_90 = *(long *)pfVar1;
          pSStack_88 = *(System_Threading_CancellationTokenSource_o **)(pfVar1 + 2);
          pUStack_80 = *(UnityEngine_Material_o **)(pIVar3 + lVar13 + 0x40);
          _fStack_78 = *(undefined8 *)(pIVar3 + lVar13 + 0x40 + 8);
          _fStack_70 = *(undefined8 *)(pIVar3 + lVar13 + 0x50);
          _bStack_68 = *(undefined8 *)(pIVar3 + lVar13 + 0x50 + 8);
          _bStack_60 = *(undefined8 *)(pIVar3 + lVar13 + 0x60);
          _fStack_58 = *(undefined8 *)(pIVar3 + lVar13 + 0x60 + 8);
          pTVar16 = (TMPro_TMP_Text_o *)&stack0xffffffffffffff60;
          cam_00 = (MethodInfo *)0x0;
          il2cpp_runtime_helper_022b4080();
          lVar13 = lStack_90;
          if (lStack_90 != 0) {
            uVar12 = uVar18 + 3;
            if ((int)uVar12 < (int)*(uint *)(lStack_90 + 0x18)) {
              if (*(uint *)(lStack_90 + 0x18) <= uVar18) goto label_0432caa4;
              uVar5 = *(undefined8 *)(lStack_90 + 0x20 + (long)(int)uVar18 * 0xc);
              fVar21 = *(float *)(lStack_90 + 0x28 + (long)(int)uVar18 * 0xc);
              if (g_data_057ae04d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                g_data_057ae04d = '\x01';
              }
              pTVar16 = pUVar15[1].monitor;
              if (pTVar16 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
              cam_00 = (MethodInfo *)0x0;
              pUVar11 = TMPro_TMP_Text__get_transform(pTVar16,(MethodInfo *)0x0);
              if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
              UVar22.fields.z = fVar21;
              UVar22.fields._0_8_ = uVar5;
              UVar22 = UnityEngine_Transform__TransformPoint(pUVar11,UVar22,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              cam_00 = (MethodInfo *)0x0;
              pTVar16 = cam;
              UVar4 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                ((UnityEngine_Camera_o *)cam,UVar22,(MethodInfo *)0x0);
              fVar20 = UVar4.fields.x;
              fVar21 = *in_RCX;
              if (fVar20 <= *in_RCX) {
                fVar21 = fVar20;
              }
              *in_RCX = fVar21;
              in_XMM1_Da = *in_R8;
              if (*in_R8 <= fVar20) {
                in_XMM1_Da = fVar20;
              }
              *in_R8 = in_XMM1_Da;
              uVar9 = uVar18 + 1;
              if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                uVar5 = *(undefined8 *)(lVar13 + 0x20 + (long)(int)uVar9 * 0xc);
                fVar21 = *(float *)(lVar13 + 0x28 + (long)(int)uVar9 * 0xc);
                if (g_data_057ae04d == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                  g_data_057ae04d = '\x01';
                }
                pTVar16 = pUVar15[1].monitor;
                if (pTVar16 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
                cam_00 = (MethodInfo *)0x0;
                pUVar11 = TMPro_TMP_Text__get_transform(pTVar16,(MethodInfo *)0x0);
                if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
                position.fields.z = fVar21;
                position.fields._0_8_ = uVar5;
                UVar22 = UnityEngine_Transform__TransformPoint(pUVar11,position,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                cam_00 = (MethodInfo *)0x0;
                pTVar16 = cam;
                UVar4 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                  ((UnityEngine_Camera_o *)cam,UVar22,(MethodInfo *)0x0);
                fVar20 = UVar4.fields.x;
                fVar21 = *in_RCX;
                if (fVar20 <= *in_RCX) {
                  fVar21 = fVar20;
                }
                *in_RCX = fVar21;
                in_XMM1_Da = *in_R8;
                if (*in_R8 <= fVar20) {
                  in_XMM1_Da = fVar20;
                }
                *in_R8 = in_XMM1_Da;
                uVar18 = uVar18 + 2;
                if (uVar18 < *(uint *)(lVar13 + 0x18)) {
                  uVar5 = *(undefined8 *)(lVar13 + 0x20 + (long)(int)uVar18 * 0xc);
                  fVar21 = *(float *)(lVar13 + 0x28 + (long)(int)uVar18 * 0xc);
                  if (g_data_057ae04d == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                    g_data_057ae04d = '\x01';
                  }
                  pTVar16 = pUVar15[1].monitor;
                  if (pTVar16 == (TMPro_TMP_Text_o *)0x0) goto label_0432caa9;
                  cam_00 = (MethodInfo *)0x0;
                  pUVar11 = TMPro_TMP_Text__get_transform(pTVar16,(MethodInfo *)0x0);
                  if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0432caa9;
                  position_00.fields.z = fVar21;
                  position_00.fields._0_8_ = uVar5;
                  UVar22 = UnityEngine_Transform__TransformPoint(pUVar11,position_00,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  cam_00 = (MethodInfo *)0x0;
                  pTVar16 = cam;
                  UVar4 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                    ((UnityEngine_Camera_o *)cam,UVar22,(MethodInfo *)0x0);
                  fVar20 = UVar4.fields.x;
                  fVar21 = *in_RCX;
                  if (fVar20 <= *in_RCX) {
                    fVar21 = fVar20;
                  }
                  *in_RCX = fVar21;
                  in_XMM1_Da = *in_R8;
                  if (*in_R8 <= fVar20) {
                    in_XMM1_Da = fVar20;
                  }
                  *in_R8 = in_XMM1_Da;
                  if (uVar12 < *(uint *)(lVar13 + 0x18)) {
                    uVar5 = *(undefined8 *)(lVar13 + 0x20 + (long)(int)uVar12 * 0xc);
                    fVar21 = *(float *)(lVar13 + 0x28 + (long)(int)uVar12 * 0xc);
                    if (g_data_057ae04d == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                      g_data_057ae04d = '\x01';
                    }
                    pTVar16 = pUVar15[1].monitor;
                    if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
                      cam_00 = (MethodInfo *)0x0;
                      pUVar11 = TMPro_TMP_Text__get_transform(pTVar16,(MethodInfo *)0x0);
                      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                        position_01.fields.z = fVar21;
                        position_01.fields._0_8_ = uVar5;
                        UVar22 = UnityEngine_Transform__TransformPoint(pUVar11,position_01,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        cam_00 = (MethodInfo *)0x0;
                        pTVar16 = cam;
                        UVar4 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                          ((UnityEngine_Camera_o *)cam,UVar22,(MethodInfo *)0x0);
                        fVar20 = UVar4.fields.x;
                        fVar21 = *in_RCX;
                        if (fVar20 <= *in_RCX) {
                          fVar21 = fVar20;
                        }
                        *in_RCX = fVar21;
                        in_XMM1_Da = *in_R8;
                        if (*in_R8 <= fVar20) {
                          in_XMM1_Da = fVar20;
                        }
                        *in_R8 = in_XMM1_Da;
                        goto label_0432c620;
                      }
                    }
                    goto label_0432caa9;
                  }
                }
              }
              goto label_0432caa4;
            }
          }
        }
      }
label_0432c620:
      uVar14 = uVar14 + 1;
      lVar19 = lVar19 + 0x178;
      if (uVar8 == uVar14) goto label_0432ca7e;
      pIVar2 = (method->field7_0x38).rgctx_data;
      pTVar17 = TypeInfo_NameEffectController;
      goto joined_r0x0432c5d5;
    }
  }
label_0432ca7e:
  return (UnityEngine_Camera_o *)CONCAT71((int7)((ulong)in_RCX >> 8),*in_RCX <= *in_R8 && *in_R8 != *in_RCX);
}


// PatreonEffects.NameEffectController$$ScreenX
// il2cpp: float PatreonEffects_NameEffectController__ScreenX (PatreonEffects_NameEffectController_o* __this, UnityEngine_Vector3_o localVertex, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x432cab0

float PatreonEffects_NameEffectController__ScreenX
                (PatreonEffects_NameEffectController_o *__this,UnityEngine_Vector3_o localVertex,
                UnityEngine_Camera_o *camera,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Events_UnityAction_o **ppUVar2;
  UnityEngine_Events_UnityAction_o **ppUVar3;
  TMPro_TMP_Text_o *__this_01;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o worldPoint;
  
  if (g_data_057ae04d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ae04d = '\x01';
  }
  __this_01 = (__this->fields).text;
  if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
    __this_00 = TMPro_TMP_Text__get_transform(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      worldPoint = UnityEngine_Transform__TransformPoint(__this_00,localVertex,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar1 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,worldPoint,(MethodInfo *)0x0);
      return UVar1.fields.x;
    }
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    if (0.5 <= fVar5) {
      ppUVar3 = &(__this_01->fields).m_OnDirtyMaterialCallback;
      ppUVar2 = &(__this_01->fields).m_OnDirtyLayoutCallback;
      fVar5 = fVar5 + -0.5;
      goto label_0432cba4;
    }
  }
  ppUVar2 = (UnityEngine_Events_UnityAction_o **)&(__this_01->fields).m_Canvas;
  ppUVar3 = &(__this_01->fields).m_OnDirtyLayoutCallback;
label_0432cba4:
  fVar5 = fVar5 + fVar5;
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  return (SUB84(*ppUVar3,0) - SUB84(*ppUVar2,0)) * (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4) +
         SUB84(*ppUVar2,0);
}


// PatreonEffects.NameEffectController$$.ctor
// il2cpp: void PatreonEffects_NameEffectController___ctor (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x432cbf0

void PatreonEffects_NameEffectController___ctor
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  (__this->fields).effect = 1;
  (__this->fields).popGradientHooked = 0x3f800000;
  (__this->fields).effectVertexDataHooked = 0x3f800000;
  (__this->fields).cleared = 0x3f800000;
  (__this->fields).popFaceA.fields.r = 1.0;
  (__this->fields).popFaceA.fields.g = 1.0;
  (__this->fields).popFaceA.fields.b = 1.0;
  (__this->fields).popFaceA.fields.a = 1.0;
  (__this->fields).popFaceB.fields.r = 1.0;
  (__this->fields).popFaceB.fields.g = 1.0;
  (__this->fields).popFaceB.fields.b = 1.0;
  (__this->fields).popFaceB.fields.a = 1.0;
  (__this->fields).popFaceC.fields.r = 1.0;
  (__this->fields).popFaceC.fields.g = 0.0;
  (__this->fields).popFaceC.fields.b = 0.0;
  (__this->fields).popFaceC.fields.a = 0.0;
  (__this->fields).popShadowColor.fields.r = 1.0;
  (__this->fields).popShadowColor.fields.g = 1.0;
  (__this->fields).popShadowColor.fields.b = 0.0;
  (__this->fields).popShadowColor.fields.a = 1.0;
  (__this->fields).popExtrusionColor.fields.r = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$.cctor
// il2cpp: void PatreonEffects_NameEffectController___cctor (const MethodInfo* method);
// 0x432cc40

void PatreonEffects_NameEffectController___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057ae04e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
    il2cpp_runtime_helper_023445d0(&"_GradientA");
    il2cpp_runtime_helper_023445d0(&"_FaceColor");
    il2cpp_runtime_helper_023445d0(&"_GradientB");
    il2cpp_runtime_helper_023445d0(&"_GradientC");
    il2cpp_runtime_helper_023445d0(&"_EffectMode");
    il2cpp_runtime_helper_023445d0(&"_EffectGradientScale");
    il2cpp_runtime_helper_023445d0(&"_ScanlineDensity");
    il2cpp_runtime_helper_023445d0(&"_GradientD");
    il2cpp_runtime_helper_023445d0(&"_ScanlineStrength");
    il2cpp_runtime_helper_023445d0(&"_Softness");
    il2cpp_runtime_helper_023445d0(&"_FlickerSpeed");
    il2cpp_runtime_helper_023445d0(&"_GradientSpeed");
    il2cpp_runtime_helper_023445d0(&"_FlickerStrength");
    il2cpp_runtime_helper_023445d0(&"_ScanlineSpeed");
    il2cpp_runtime_helper_023445d0(&"_Glow");
    g_data_057ae04e = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_FaceColor",(MethodInfo *)0x0);
  **(int32_t **)(TypeInfo_NameEffectController + 0xb8) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientA",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 4) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientB",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 8) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientC",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0xc) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientD",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x10) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_EffectGradientScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x14) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientSpeed",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x18) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_EffectMode",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x1c) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Glow",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x20) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x24) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineDensity",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x28) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineSpeed",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x2c) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_FlickerStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x30) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_FlickerSpeed",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x34) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Softness",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x38) = iVar1;
  return;
}


