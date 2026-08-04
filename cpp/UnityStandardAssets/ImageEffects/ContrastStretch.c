// Type: UnityStandardAssets.ImageEffects.ContrastStretch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ContrastStretch.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ContrastStretch.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialLum
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x4580d70

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Shader_o *pUVar2;
  Il2CppClass *pIVar3;
  long lVar4;
  UnityEngine_Texture_o *source;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  int iVar8;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Object_c *pUVar10;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_RenderTexture_o *pUVar11;
  long lVar12;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX_00;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar13;
  undefined4 extraout_var_01;
  UnityEngine_Material_o *extraout_RAX_01;
  UnityEngine_RenderTexture_array *pUVar14;
  UnityEngine_Material_o *extraout_RAX_02;
  UnityEngine_RenderTexture_array *pUVar15;
  UnityEngine_Material_o *extraout_RAX_03;
  UnityEngine_Material_o *extraout_RAX_04;
  UnityEngine_RenderTexture_o *dest;
  MethodInfo *method_00;
  UnityEngine_RenderTexture_array *pUVar16;
  MethodInfo *pMVar17;
  UnityEngine_Object_o *pUVar18;
  UnityEngine_Object_o *pUVar19;
  long lVar20;
  long *__this_00;
  MethodInfo **__this_01;
  UnityEngine_RenderTexture_array *curTexture;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  float fVar21;
  float fVar22;
  UnityEngine_Vector4_o value;
  
  if (g_data_057af0c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0c8 = '\x01';
  }
  pUVar18 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).m_materialLum;
  bVar5 = UnityEngine_Object__op_Equality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04580e1f:
    return *ppUVar1;
  }
  pUVar2 = (__this->fields).shaderLum;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar9,pUVar2,(MethodInfo *)0x0);
  (__this->fields).m_materialLum = pUVar9;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar18 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
  if (pUVar18 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(pUVar18,0x3d,(MethodInfo *)0x0);
    goto label_04580e1f;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0c9 = '\x01';
  }
  pUVar19 = (UnityEngine_Object_o *)pUVar18[3].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04580eef:
    return (UnityEngine_Material_o *)pUVar18[3].fields.m_CachedPtr;
  }
  pUVar2 = pUVar18[3].monitor;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar9,pUVar2,(MethodInfo *)0x0);
  pUVar18[3].fields.m_CachedPtr = (intptr_t)pUVar9;
  il2cpp_runtime_helper_022b4080(&pUVar18[3].fields);
  pUVar19 = (UnityEngine_Object_o *)pUVar18[3].fields.m_CachedPtr;
  if (pUVar19 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(pUVar19,0x3d,(MethodInfo *)0x0);
    goto label_04580eef;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0ca = '\x01';
  }
  pUVar18 = pUVar19[4].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04580fbf:
    return pUVar19[4].monitor;
  }
  pUVar10 = pUVar19[4].klass;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar9,(UnityEngine_Shader_o *)pUVar10,(MethodInfo *)0x0);
  pUVar19[4].monitor = pUVar9;
  il2cpp_runtime_helper_022b4080(&pUVar19[4].monitor);
  pUVar18 = pUVar19[4].monitor;
  if (pUVar18 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(pUVar18,0x3d,(MethodInfo *)0x0);
    goto label_04580fbf;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0cb = '\x01';
  }
  pUVar10 = pUVar18[5].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0458108f:
    return (UnityEngine_Material_o *)pUVar18[5].klass;
  }
  pUVar2 = (UnityEngine_Shader_o *)pUVar18[4].fields.m_CachedPtr;
  pUVar10 = (UnityEngine_Object_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar10,pUVar2,(MethodInfo *)0x0);
  pUVar18[5].klass = pUVar10;
  il2cpp_runtime_helper_022b4080(pUVar18 + 5);
  pUVar10 = pUVar18[5].klass;
  if (pUVar10 != (UnityEngine_Object_c *)0x0) {
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)pUVar10,0x3d,(MethodInfo *)0x0);
    goto label_0458108f;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar5 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_04581111;
  pUVar2 = (pUVar10->_1).generic_class;
  if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
    bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_04581111;
    pUVar2 = (pUVar10->_1).interopData;
    if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
      bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto label_04581111;
      pIVar3 = (pUVar10->_1).element_class;
      if (pIVar3 != (Il2CppClass *)0x0) {
        bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pIVar3,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04581111:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar10,0,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        pIVar3 = (pUVar10->_1).declaringType;
        if (pIVar3 != (Il2CppClass *)0x0) {
          bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pIVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar5);
          }
          goto label_04581111;
        }
      }
    }
  }
  lVar20 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0cc = '\x01';
  }
  lVar4 = *(long *)(lVar20 + 0x30);
  if (lVar4 == 0) goto label_0458132c;
  if (*(int *)(lVar4 + 0x18) == 0) goto label_04581331;
  pUVar18 = *(UnityEngine_Object_o **)(lVar4 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    lVar4 = *(long *)(lVar20 + 0x30);
    pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor_4de1430(pUVar11,1,1,0,(MethodInfo *)0x0);
    if (lVar4 == 0) goto label_0458132c;
    if ((pUVar11 == (UnityEngine_RenderTexture_o *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pUVar11), lVar12 != 0)
       ) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(UnityEngine_RenderTexture_o **)(lVar4 + 0x20) = pUVar11;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x20);
        lVar4 = *(long *)(lVar20 + 0x30);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar4 + 0x20) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)(lVar4 + 0x20),0x3d,(MethodInfo *)0x0)
            ;
            goto label_04581249;
          }
        }
        goto label_0458132c;
      }
      goto label_04581331;
    }
  }
  else {
label_04581249:
    lVar4 = *(long *)(lVar20 + 0x30);
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
      pUVar18 = *(UnityEngine_Object_o **)(lVar4 + 0x28);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar5);
      }
      lVar4 = *(long *)(lVar20 + 0x30);
      pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor_4de1430(pUVar11,1,1,0,(MethodInfo *)0x0);
      if (lVar4 != 0) {
        if ((pUVar11 != (UnityEngine_RenderTexture_o *)0x0) &&
           (lVar12 = il2cpp_runtime_helper_023051f0(pUVar11), lVar12 == 0)) goto label_04581336;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
        *(UnityEngine_RenderTexture_o **)(lVar4 + 0x28) = pUVar11;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x28);
        lVar20 = *(long *)(lVar20 + 0x30);
        if (lVar20 != 0) {
          if ((*(uint *)(lVar20 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar20 + 0x28) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      (*(UnityEngine_Object_o **)(lVar20 + 0x28),0x3d,(MethodInfo *)0x0);
            return extraout_RAX_00;
          }
        }
      }
    }
label_0458132c:
    il2cpp_runtime_helper_022b2c90();
label_04581331:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04581336:
  pUVar13 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)il2cpp_runtime_helper_0231b270();
  pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
  il2cpp_runtime_helper_022b2b10();
  __this_00 = (long *)pUVar13;
  if (g_data_057af0cd == '\0') {
    __this_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cd = '\x01';
  }
  pUVar16 = (pUVar13->fields).adaptRenderTex;
  if (pUVar16 == (UnityEngine_RenderTexture_array *)0x0) {
label_04581554:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar16->max_length != 0) {
    pUVar11 = pUVar16->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
    __this_00 = (long *)(pUVar13->fields).adaptRenderTex;
    if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
    goto label_04581554;
    if (*(int *)&((UnityEngine_RenderTexture_array *)__this_00)->max_length != 0) {
      ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
      __this_00 = (long *)((UnityEngine_RenderTexture_array *)__this_00)->m_Items;
      pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
      il2cpp_runtime_helper_022b4080();
      pUVar16 = (pUVar13->fields).adaptRenderTex;
      if (pUVar16 == (UnityEngine_RenderTexture_array *)0x0) goto label_04581554;
      if ((pUVar16->max_length & 0xfffffffe) != 0) {
        pUVar11 = pUVar16->m_Items[1];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
        __this_00 = (long *)(pUVar13->fields).adaptRenderTex;
        if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
        goto label_04581554;
        if (((ulong)((UnityEngine_RenderTexture_array *)__this_00)->max_length & 0xfffffffe) != 0) {
          ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
          il2cpp_runtime_helper_022b4080(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 1);
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialLum;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialReduce;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialAdapt;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialApply;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
            return extraout_RAX_01;
          }
          return (UnityEngine_Material_o *)CONCAT44(extraout_var_01,bVar5);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar16 = pUVar15;
  __this_01 = (MethodInfo **)__this_00;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_01 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if (pUVar15 != (UnityEngine_RenderTexture_array *)0x0) {
    pIVar3 = (pUVar15->obj).klass;
    iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                      (pUVar15,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
    pIVar3 = (pUVar15->obj).klass;
    uVar7 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                      (pUVar15,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method);
    pMVar17 = (MethodInfo *)(ulong)uVar7;
    pUVar14 = (UnityEngine_RenderTexture_array *)
              UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
    pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
                       ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar16 = pUVar14;
    __this_01 = (MethodInfo **)pUVar15;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)pUVar15,(UnityEngine_RenderTexture_o *)pUVar14,pUVar9,
               (MethodInfo *)0x0);
    while (curTexture = pUVar14, curTexture != (UnityEngine_RenderTexture_array *)0x0) {
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
      if ((iVar8 < 2) &&
         (pIVar3 = (curTexture->obj).klass,
         iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                           (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method)
         , iVar8 < 2)) {
        pUVar16 = curTexture;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                   (UnityEngine_Texture_o *)curTexture,method_00);
        __this_01 = (MethodInfo **)__this_00;
        pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                           ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                            (MethodInfo *)pUVar16);
        pUVar14 = (UnityEngine_RenderTexture_array *)
                  ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[2];
        if (pUVar14 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((uint)pUVar14->max_length <=
              *(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)) goto label_04581799;
          if (pUVar9 != (UnityEngine_Material_o *)0x0) {
            pMVar17 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar9,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)
                       pUVar14->m_Items
                       [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)],
                       (MethodInfo *)0x0);
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)pUVar15,dest,pUVar9,(MethodInfo *)0x0)
            ;
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
            return extraout_RAX_02;
          }
        }
        break;
      }
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
      uVar7 = 1;
      iVar6 = 1;
      if (1 < iVar8) {
        iVar6 = iVar8 / 2;
      }
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method);
      if (1 < iVar8) {
        uVar7 = iVar8 / 2;
      }
      pMVar17 = (MethodInfo *)(ulong)uVar7;
      pUVar14 = (UnityEngine_RenderTexture_array *)
                UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
      pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                         ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)curTexture,(UnityEngine_RenderTexture_o *)pUVar14,pUVar9,
                 (MethodInfo *)0x0);
      pUVar16 = (UnityEngine_RenderTexture_array *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0)
      ;
      __this_01 = (MethodInfo **)curTexture;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar15 = pUVar16;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar7 = *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3);
  *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) =
       (uVar7 + 1) - ((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar22 = *(float *)((UnityEngine_RenderTexture_array *)__this_01)->m_Items;
  __this_02 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar22 = powf(__this_02,1.0 - fVar22,fVar21 * 30.0,(MethodInfo *)pUVar15);
  pUVar14 = (UnityEngine_RenderTexture_array *)__this_01;
  pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                     ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,(MethodInfo *)pUVar15);
  if (pUVar9 != (UnityEngine_Material_o *)0x0) {
    pMVar17 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar9,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar16,(MethodInfo *)0x0);
    pUVar14 = (UnityEngine_RenderTexture_array *)__this_01;
    pUVar15 = (UnityEngine_RenderTexture_array *)
              UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar17);
    if (pUVar15 != (UnityEngine_RenderTexture_array *)0x0) {
      fVar22 = 1.0 - fVar22;
      fVar21 = 1.0;
      if (fVar22 <= 1.0) {
        fVar21 = fVar22;
      }
      value.fields.y =
           (float)*(undefined4 *)((long)((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 4);
      value.fields.x = (float)(~-(uint)(0.01 <= fVar22) & 0x3c23d70a | (uint)fVar21 & -(uint)(0.01 <= fVar22))
      ;
      value.fields.z = (float)*(undefined4 *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 1);
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar15,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar11 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
      pUVar14 = pUVar15;
      if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
        if (*(uint *)&pUVar11[1].klass <=
            *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)) goto label_0458195f;
        pUVar11 = (&pUVar11[1].monitor)
                  [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar11,(MethodInfo *)0x0);
        pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
        pMVar17 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar11 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
        if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
          if ((uVar7 < *(uint *)&pUVar11[1].klass) &&
             (*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) <
              *(uint *)&pUVar11[1].klass)) {
            source = (&pUVar11[1].monitor)[(int)uVar7];
            pUVar11 = (&pUVar11[1].monitor)
                      [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar17);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar11,pUVar9,(MethodInfo *)0x0);
            return extraout_RAX_03;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  pUVar14->m_Items[0] = (UnityEngine_RenderTexture_o *)0x3e4ccccd3ca3d70a;
  *(undefined4 *)(pUVar14->m_Items + 1) = 0x3f19999a;
  pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  pUVar14->m_Items[2] = pUVar11;
  il2cpp_runtime_helper_022b4080(pUVar14->m_Items + 2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar14,(MethodInfo *)0x0);
  return extraout_RAX_04;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialReduce
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x4580e40

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Shader_o *pUVar2;
  Il2CppClass *pIVar3;
  long lVar4;
  UnityEngine_Texture_o *source;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  int iVar8;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Object_c *pUVar10;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_RenderTexture_o *pUVar11;
  long lVar12;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX_00;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar13;
  undefined4 extraout_var_01;
  UnityEngine_Material_o *extraout_RAX_01;
  UnityEngine_RenderTexture_array *pUVar14;
  UnityEngine_Material_o *extraout_RAX_02;
  UnityEngine_RenderTexture_array *pUVar15;
  UnityEngine_Material_o *extraout_RAX_03;
  UnityEngine_Material_o *extraout_RAX_04;
  UnityEngine_RenderTexture_o *dest;
  MethodInfo *method_00;
  UnityEngine_RenderTexture_array *pUVar16;
  MethodInfo *pMVar17;
  UnityEngine_Object_o *pUVar18;
  UnityEngine_Object_o *pUVar19;
  long lVar20;
  long *__this_00;
  MethodInfo **__this_01;
  UnityEngine_RenderTexture_array *curTexture;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  float fVar21;
  float fVar22;
  UnityEngine_Vector4_o value;
  
  if (g_data_057af0c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0c9 = '\x01';
  }
  pUVar18 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).m_materialReduce;
  bVar5 = UnityEngine_Object__op_Equality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04580eef:
    return *ppUVar1;
  }
  pUVar2 = (__this->fields).shaderReduce;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar9,pUVar2,(MethodInfo *)0x0);
  (__this->fields).m_materialReduce = pUVar9;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar18 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
  if (pUVar18 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(pUVar18,0x3d,(MethodInfo *)0x0);
    goto label_04580eef;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0ca = '\x01';
  }
  pUVar19 = pUVar18[4].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04580fbf:
    return pUVar18[4].monitor;
  }
  pUVar10 = pUVar18[4].klass;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar9,(UnityEngine_Shader_o *)pUVar10,(MethodInfo *)0x0);
  pUVar18[4].monitor = pUVar9;
  il2cpp_runtime_helper_022b4080(&pUVar18[4].monitor);
  pUVar19 = pUVar18[4].monitor;
  if (pUVar19 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(pUVar19,0x3d,(MethodInfo *)0x0);
    goto label_04580fbf;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0cb = '\x01';
  }
  pUVar10 = pUVar19[5].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0458108f:
    return (UnityEngine_Material_o *)pUVar19[5].klass;
  }
  pUVar2 = (UnityEngine_Shader_o *)pUVar19[4].fields.m_CachedPtr;
  pUVar10 = (UnityEngine_Object_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar10,pUVar2,(MethodInfo *)0x0);
  pUVar19[5].klass = pUVar10;
  il2cpp_runtime_helper_022b4080(pUVar19 + 5);
  pUVar10 = pUVar19[5].klass;
  if (pUVar10 != (UnityEngine_Object_c *)0x0) {
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)pUVar10,0x3d,(MethodInfo *)0x0);
    goto label_0458108f;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar5 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_04581111;
  pUVar2 = (pUVar10->_1).generic_class;
  if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
    bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_04581111;
    pUVar2 = (pUVar10->_1).interopData;
    if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
      bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto label_04581111;
      pIVar3 = (pUVar10->_1).element_class;
      if (pIVar3 != (Il2CppClass *)0x0) {
        bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pIVar3,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04581111:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar10,0,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        pIVar3 = (pUVar10->_1).declaringType;
        if (pIVar3 != (Il2CppClass *)0x0) {
          bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pIVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar5);
          }
          goto label_04581111;
        }
      }
    }
  }
  lVar20 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0cc = '\x01';
  }
  lVar4 = *(long *)(lVar20 + 0x30);
  if (lVar4 == 0) goto label_0458132c;
  if (*(int *)(lVar4 + 0x18) == 0) goto label_04581331;
  pUVar18 = *(UnityEngine_Object_o **)(lVar4 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    lVar4 = *(long *)(lVar20 + 0x30);
    pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor_4de1430(pUVar11,1,1,0,(MethodInfo *)0x0);
    if (lVar4 == 0) goto label_0458132c;
    if ((pUVar11 == (UnityEngine_RenderTexture_o *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pUVar11), lVar12 != 0)
       ) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(UnityEngine_RenderTexture_o **)(lVar4 + 0x20) = pUVar11;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x20);
        lVar4 = *(long *)(lVar20 + 0x30);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar4 + 0x20) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)(lVar4 + 0x20),0x3d,(MethodInfo *)0x0)
            ;
            goto label_04581249;
          }
        }
        goto label_0458132c;
      }
      goto label_04581331;
    }
  }
  else {
label_04581249:
    lVar4 = *(long *)(lVar20 + 0x30);
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
      pUVar18 = *(UnityEngine_Object_o **)(lVar4 + 0x28);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar5);
      }
      lVar4 = *(long *)(lVar20 + 0x30);
      pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor_4de1430(pUVar11,1,1,0,(MethodInfo *)0x0);
      if (lVar4 != 0) {
        if ((pUVar11 != (UnityEngine_RenderTexture_o *)0x0) &&
           (lVar12 = il2cpp_runtime_helper_023051f0(pUVar11), lVar12 == 0)) goto label_04581336;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
        *(UnityEngine_RenderTexture_o **)(lVar4 + 0x28) = pUVar11;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x28);
        lVar20 = *(long *)(lVar20 + 0x30);
        if (lVar20 != 0) {
          if ((*(uint *)(lVar20 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar20 + 0x28) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      (*(UnityEngine_Object_o **)(lVar20 + 0x28),0x3d,(MethodInfo *)0x0);
            return extraout_RAX_00;
          }
        }
      }
    }
label_0458132c:
    il2cpp_runtime_helper_022b2c90();
label_04581331:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04581336:
  pUVar13 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)il2cpp_runtime_helper_0231b270();
  pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
  il2cpp_runtime_helper_022b2b10();
  __this_00 = (long *)pUVar13;
  if (g_data_057af0cd == '\0') {
    __this_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cd = '\x01';
  }
  pUVar16 = (pUVar13->fields).adaptRenderTex;
  if (pUVar16 == (UnityEngine_RenderTexture_array *)0x0) {
label_04581554:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar16->max_length != 0) {
    pUVar11 = pUVar16->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
    __this_00 = (long *)(pUVar13->fields).adaptRenderTex;
    if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
    goto label_04581554;
    if (*(int *)&((UnityEngine_RenderTexture_array *)__this_00)->max_length != 0) {
      ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
      __this_00 = (long *)((UnityEngine_RenderTexture_array *)__this_00)->m_Items;
      pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
      il2cpp_runtime_helper_022b4080();
      pUVar16 = (pUVar13->fields).adaptRenderTex;
      if (pUVar16 == (UnityEngine_RenderTexture_array *)0x0) goto label_04581554;
      if ((pUVar16->max_length & 0xfffffffe) != 0) {
        pUVar11 = pUVar16->m_Items[1];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
        __this_00 = (long *)(pUVar13->fields).adaptRenderTex;
        if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
        goto label_04581554;
        if (((ulong)((UnityEngine_RenderTexture_array *)__this_00)->max_length & 0xfffffffe) != 0) {
          ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
          il2cpp_runtime_helper_022b4080(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 1);
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialLum;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialReduce;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialAdapt;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialApply;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
            return extraout_RAX_01;
          }
          return (UnityEngine_Material_o *)CONCAT44(extraout_var_01,bVar5);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar16 = pUVar15;
  __this_01 = (MethodInfo **)__this_00;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_01 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if (pUVar15 != (UnityEngine_RenderTexture_array *)0x0) {
    pIVar3 = (pUVar15->obj).klass;
    iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                      (pUVar15,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
    pIVar3 = (pUVar15->obj).klass;
    uVar7 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                      (pUVar15,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method);
    pMVar17 = (MethodInfo *)(ulong)uVar7;
    pUVar14 = (UnityEngine_RenderTexture_array *)
              UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
    pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
                       ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar16 = pUVar14;
    __this_01 = (MethodInfo **)pUVar15;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)pUVar15,(UnityEngine_RenderTexture_o *)pUVar14,pUVar9,
               (MethodInfo *)0x0);
    while (curTexture = pUVar14, curTexture != (UnityEngine_RenderTexture_array *)0x0) {
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
      if ((iVar8 < 2) &&
         (pIVar3 = (curTexture->obj).klass,
         iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                           (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method)
         , iVar8 < 2)) {
        pUVar16 = curTexture;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                   (UnityEngine_Texture_o *)curTexture,method_00);
        __this_01 = (MethodInfo **)__this_00;
        pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                           ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                            (MethodInfo *)pUVar16);
        pUVar14 = (UnityEngine_RenderTexture_array *)
                  ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[2];
        if (pUVar14 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((uint)pUVar14->max_length <=
              *(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)) goto label_04581799;
          if (pUVar9 != (UnityEngine_Material_o *)0x0) {
            pMVar17 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar9,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)
                       pUVar14->m_Items
                       [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)],
                       (MethodInfo *)0x0);
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)pUVar15,dest,pUVar9,(MethodInfo *)0x0)
            ;
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
            return extraout_RAX_02;
          }
        }
        break;
      }
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
      uVar7 = 1;
      iVar6 = 1;
      if (1 < iVar8) {
        iVar6 = iVar8 / 2;
      }
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method);
      if (1 < iVar8) {
        uVar7 = iVar8 / 2;
      }
      pMVar17 = (MethodInfo *)(ulong)uVar7;
      pUVar14 = (UnityEngine_RenderTexture_array *)
                UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
      pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                         ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)curTexture,(UnityEngine_RenderTexture_o *)pUVar14,pUVar9,
                 (MethodInfo *)0x0);
      pUVar16 = (UnityEngine_RenderTexture_array *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0)
      ;
      __this_01 = (MethodInfo **)curTexture;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar15 = pUVar16;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar7 = *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3);
  *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) =
       (uVar7 + 1) - ((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar22 = *(float *)((UnityEngine_RenderTexture_array *)__this_01)->m_Items;
  __this_02 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar22 = powf(__this_02,1.0 - fVar22,fVar21 * 30.0,(MethodInfo *)pUVar15);
  pUVar14 = (UnityEngine_RenderTexture_array *)__this_01;
  pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                     ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,(MethodInfo *)pUVar15);
  if (pUVar9 != (UnityEngine_Material_o *)0x0) {
    pMVar17 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar9,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar16,(MethodInfo *)0x0);
    pUVar14 = (UnityEngine_RenderTexture_array *)__this_01;
    pUVar15 = (UnityEngine_RenderTexture_array *)
              UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar17);
    if (pUVar15 != (UnityEngine_RenderTexture_array *)0x0) {
      fVar22 = 1.0 - fVar22;
      fVar21 = 1.0;
      if (fVar22 <= 1.0) {
        fVar21 = fVar22;
      }
      value.fields.y =
           (float)*(undefined4 *)((long)((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 4);
      value.fields.x = (float)(~-(uint)(0.01 <= fVar22) & 0x3c23d70a | (uint)fVar21 & -(uint)(0.01 <= fVar22))
      ;
      value.fields.z = (float)*(undefined4 *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 1);
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar15,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar11 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
      pUVar14 = pUVar15;
      if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
        if (*(uint *)&pUVar11[1].klass <=
            *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)) goto label_0458195f;
        pUVar11 = (&pUVar11[1].monitor)
                  [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar11,(MethodInfo *)0x0);
        pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
        pMVar17 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar11 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
        if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
          if ((uVar7 < *(uint *)&pUVar11[1].klass) &&
             (*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) <
              *(uint *)&pUVar11[1].klass)) {
            source = (&pUVar11[1].monitor)[(int)uVar7];
            pUVar11 = (&pUVar11[1].monitor)
                      [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar17);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar11,pUVar9,(MethodInfo *)0x0);
            return extraout_RAX_03;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  pUVar14->m_Items[0] = (UnityEngine_RenderTexture_o *)0x3e4ccccd3ca3d70a;
  *(undefined4 *)(pUVar14->m_Items + 1) = 0x3f19999a;
  pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  pUVar14->m_Items[2] = pUVar11;
  il2cpp_runtime_helper_022b4080(pUVar14->m_Items + 2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar14,(MethodInfo *)0x0);
  return extraout_RAX_04;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialAdapt
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x4580f10

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Shader_o *pUVar2;
  Il2CppClass *pIVar3;
  long lVar4;
  UnityEngine_Texture_o *source;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  int iVar8;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Object_c *pUVar10;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_RenderTexture_o *pUVar11;
  long lVar12;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX_00;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar13;
  undefined4 extraout_var_01;
  UnityEngine_Material_o *extraout_RAX_01;
  UnityEngine_RenderTexture_array *pUVar14;
  UnityEngine_Material_o *extraout_RAX_02;
  UnityEngine_RenderTexture_array *pUVar15;
  UnityEngine_Material_o *extraout_RAX_03;
  UnityEngine_Material_o *extraout_RAX_04;
  UnityEngine_RenderTexture_o *dest;
  MethodInfo *method_00;
  UnityEngine_RenderTexture_array *pUVar16;
  MethodInfo *pMVar17;
  UnityEngine_Object_o *pUVar18;
  long lVar19;
  long *__this_00;
  MethodInfo **__this_01;
  UnityEngine_RenderTexture_array *curTexture;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  float fVar20;
  float fVar21;
  UnityEngine_Vector4_o value;
  
  if (g_data_057af0ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0ca = '\x01';
  }
  pUVar18 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).m_materialAdapt;
  bVar5 = UnityEngine_Object__op_Equality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04580fbf:
    return *ppUVar1;
  }
  pUVar2 = (__this->fields).shaderAdapt;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar9,pUVar2,(MethodInfo *)0x0);
  (__this->fields).m_materialAdapt = pUVar9;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar18 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
  if (pUVar18 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(pUVar18,0x3d,(MethodInfo *)0x0);
    goto label_04580fbf;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0cb = '\x01';
  }
  pUVar10 = pUVar18[5].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0458108f:
    return (UnityEngine_Material_o *)pUVar18[5].klass;
  }
  pUVar2 = (UnityEngine_Shader_o *)pUVar18[4].fields.m_CachedPtr;
  pUVar10 = (UnityEngine_Object_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar10,pUVar2,(MethodInfo *)0x0);
  pUVar18[5].klass = pUVar10;
  il2cpp_runtime_helper_022b4080(pUVar18 + 5);
  pUVar10 = pUVar18[5].klass;
  if (pUVar10 != (UnityEngine_Object_c *)0x0) {
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)pUVar10,0x3d,(MethodInfo *)0x0);
    goto label_0458108f;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar5 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_04581111;
  pUVar2 = (pUVar10->_1).generic_class;
  if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
    bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_04581111;
    pUVar2 = (pUVar10->_1).interopData;
    if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
      bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto label_04581111;
      pIVar3 = (pUVar10->_1).element_class;
      if (pIVar3 != (Il2CppClass *)0x0) {
        bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pIVar3,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04581111:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar10,0,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        pIVar3 = (pUVar10->_1).declaringType;
        if (pIVar3 != (Il2CppClass *)0x0) {
          bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pIVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar5);
          }
          goto label_04581111;
        }
      }
    }
  }
  lVar19 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0cc = '\x01';
  }
  lVar4 = *(long *)(lVar19 + 0x30);
  if (lVar4 == 0) goto label_0458132c;
  if (*(int *)(lVar4 + 0x18) == 0) goto label_04581331;
  pUVar18 = *(UnityEngine_Object_o **)(lVar4 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    lVar4 = *(long *)(lVar19 + 0x30);
    pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor_4de1430(pUVar11,1,1,0,(MethodInfo *)0x0);
    if (lVar4 == 0) goto label_0458132c;
    if ((pUVar11 == (UnityEngine_RenderTexture_o *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pUVar11), lVar12 != 0)
       ) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(UnityEngine_RenderTexture_o **)(lVar4 + 0x20) = pUVar11;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x20);
        lVar4 = *(long *)(lVar19 + 0x30);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar4 + 0x20) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)(lVar4 + 0x20),0x3d,(MethodInfo *)0x0)
            ;
            goto label_04581249;
          }
        }
        goto label_0458132c;
      }
      goto label_04581331;
    }
  }
  else {
label_04581249:
    lVar4 = *(long *)(lVar19 + 0x30);
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
      pUVar18 = *(UnityEngine_Object_o **)(lVar4 + 0x28);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar5);
      }
      lVar4 = *(long *)(lVar19 + 0x30);
      pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor_4de1430(pUVar11,1,1,0,(MethodInfo *)0x0);
      if (lVar4 != 0) {
        if ((pUVar11 != (UnityEngine_RenderTexture_o *)0x0) &&
           (lVar12 = il2cpp_runtime_helper_023051f0(pUVar11), lVar12 == 0)) goto label_04581336;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
        *(UnityEngine_RenderTexture_o **)(lVar4 + 0x28) = pUVar11;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x28);
        lVar19 = *(long *)(lVar19 + 0x30);
        if (lVar19 != 0) {
          if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar19 + 0x28) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      (*(UnityEngine_Object_o **)(lVar19 + 0x28),0x3d,(MethodInfo *)0x0);
            return extraout_RAX_00;
          }
        }
      }
    }
label_0458132c:
    il2cpp_runtime_helper_022b2c90();
label_04581331:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04581336:
  pUVar13 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)il2cpp_runtime_helper_0231b270();
  pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
  il2cpp_runtime_helper_022b2b10();
  __this_00 = (long *)pUVar13;
  if (g_data_057af0cd == '\0') {
    __this_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cd = '\x01';
  }
  pUVar16 = (pUVar13->fields).adaptRenderTex;
  if (pUVar16 == (UnityEngine_RenderTexture_array *)0x0) {
label_04581554:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar16->max_length != 0) {
    pUVar11 = pUVar16->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
    __this_00 = (long *)(pUVar13->fields).adaptRenderTex;
    if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
    goto label_04581554;
    if (*(int *)&((UnityEngine_RenderTexture_array *)__this_00)->max_length != 0) {
      ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
      __this_00 = (long *)((UnityEngine_RenderTexture_array *)__this_00)->m_Items;
      pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
      il2cpp_runtime_helper_022b4080();
      pUVar16 = (pUVar13->fields).adaptRenderTex;
      if (pUVar16 == (UnityEngine_RenderTexture_array *)0x0) goto label_04581554;
      if ((pUVar16->max_length & 0xfffffffe) != 0) {
        pUVar11 = pUVar16->m_Items[1];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
        __this_00 = (long *)(pUVar13->fields).adaptRenderTex;
        if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
        goto label_04581554;
        if (((ulong)((UnityEngine_RenderTexture_array *)__this_00)->max_length & 0xfffffffe) != 0) {
          ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
          il2cpp_runtime_helper_022b4080(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 1);
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialLum;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialReduce;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialAdapt;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
          }
          pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialApply;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar18,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar18 = (UnityEngine_Object_o *)(pUVar13->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar18,(MethodInfo *)0x0);
            return extraout_RAX_01;
          }
          return (UnityEngine_Material_o *)CONCAT44(extraout_var_01,bVar5);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar16 = pUVar15;
  __this_01 = (MethodInfo **)__this_00;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_01 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if (pUVar15 != (UnityEngine_RenderTexture_array *)0x0) {
    pIVar3 = (pUVar15->obj).klass;
    iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                      (pUVar15,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
    pIVar3 = (pUVar15->obj).klass;
    uVar7 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                      (pUVar15,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method);
    pMVar17 = (MethodInfo *)(ulong)uVar7;
    pUVar14 = (UnityEngine_RenderTexture_array *)
              UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
    pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
                       ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar16 = pUVar14;
    __this_01 = (MethodInfo **)pUVar15;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)pUVar15,(UnityEngine_RenderTexture_o *)pUVar14,pUVar9,
               (MethodInfo *)0x0);
    while (curTexture = pUVar14, curTexture != (UnityEngine_RenderTexture_array *)0x0) {
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
      if ((iVar8 < 2) &&
         (pIVar3 = (curTexture->obj).klass,
         iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                           (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method)
         , iVar8 < 2)) {
        pUVar16 = curTexture;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                   (UnityEngine_Texture_o *)curTexture,method_00);
        __this_01 = (MethodInfo **)__this_00;
        pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                           ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                            (MethodInfo *)pUVar16);
        pUVar14 = (UnityEngine_RenderTexture_array *)
                  ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[2];
        if (pUVar14 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((uint)pUVar14->max_length <=
              *(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)) goto label_04581799;
          if (pUVar9 != (UnityEngine_Material_o *)0x0) {
            pMVar17 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar9,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)
                       pUVar14->m_Items
                       [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)],
                       (MethodInfo *)0x0);
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)pUVar15,dest,pUVar9,(MethodInfo *)0x0)
            ;
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
            return extraout_RAX_02;
          }
        }
        break;
      }
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_5_get_width).method);
      uVar7 = 1;
      iVar6 = 1;
      if (1 < iVar8) {
        iVar6 = iVar8 / 2;
      }
      pIVar3 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar3->vtable)->_7_get_height).method);
      if (1 < iVar8) {
        uVar7 = iVar8 / 2;
      }
      pMVar17 = (MethodInfo *)(ulong)uVar7;
      pUVar14 = (UnityEngine_RenderTexture_array *)
                UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
      pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                         ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar17);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)curTexture,(UnityEngine_RenderTexture_o *)pUVar14,pUVar9,
                 (MethodInfo *)0x0);
      pUVar16 = (UnityEngine_RenderTexture_array *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0)
      ;
      __this_01 = (MethodInfo **)curTexture;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar15 = pUVar16;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar7 = *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3);
  *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) =
       (uVar7 + 1) - ((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar21 = *(float *)((UnityEngine_RenderTexture_array *)__this_01)->m_Items;
  __this_02 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar21 = powf(__this_02,1.0 - fVar21,fVar20 * 30.0,(MethodInfo *)pUVar15);
  pUVar14 = (UnityEngine_RenderTexture_array *)__this_01;
  pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                     ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,(MethodInfo *)pUVar15);
  if (pUVar9 != (UnityEngine_Material_o *)0x0) {
    pMVar17 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar9,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar16,(MethodInfo *)0x0);
    pUVar14 = (UnityEngine_RenderTexture_array *)__this_01;
    pUVar15 = (UnityEngine_RenderTexture_array *)
              UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar17);
    if (pUVar15 != (UnityEngine_RenderTexture_array *)0x0) {
      fVar21 = 1.0 - fVar21;
      fVar20 = 1.0;
      if (fVar21 <= 1.0) {
        fVar20 = fVar21;
      }
      value.fields.y =
           (float)*(undefined4 *)((long)((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 4);
      value.fields.x = (float)(~-(uint)(0.01 <= fVar21) & 0x3c23d70a | (uint)fVar20 & -(uint)(0.01 <= fVar21))
      ;
      value.fields.z = (float)*(undefined4 *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 1);
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar15,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar11 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
      pUVar14 = pUVar15;
      if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
        if (*(uint *)&pUVar11[1].klass <=
            *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)) goto label_0458195f;
        pUVar11 = (&pUVar11[1].monitor)
                  [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar11,(MethodInfo *)0x0);
        pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
        pMVar17 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar11 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
        if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
          if ((uVar7 < *(uint *)&pUVar11[1].klass) &&
             (*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) <
              *(uint *)&pUVar11[1].klass)) {
            source = (&pUVar11[1].monitor)[(int)uVar7];
            pUVar11 = (&pUVar11[1].monitor)
                      [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar17);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar11,pUVar9,(MethodInfo *)0x0);
            return extraout_RAX_03;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  pUVar14->m_Items[0] = (UnityEngine_RenderTexture_o *)0x3e4ccccd3ca3d70a;
  *(undefined4 *)(pUVar14->m_Items + 1) = 0x3f19999a;
  pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  pUVar14->m_Items[2] = pUVar11;
  il2cpp_runtime_helper_022b4080(pUVar14->m_Items + 2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar14,(MethodInfo *)0x0);
  return extraout_RAX_04;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialApply
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x4580fe0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Shader_o *pUVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Texture_o *source;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  int iVar8;
  UnityEngine_Material_o *pUVar9;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_RenderTexture_o *pUVar10;
  long lVar11;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX_00;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar12;
  undefined4 extraout_var_01;
  UnityEngine_Material_o *extraout_RAX_01;
  UnityEngine_RenderTexture_array *pUVar13;
  UnityEngine_Material_o *extraout_RAX_02;
  UnityEngine_RenderTexture_array *pUVar14;
  UnityEngine_Material_o *extraout_RAX_03;
  UnityEngine_Material_o *extraout_RAX_04;
  UnityEngine_RenderTexture_o *dest;
  MethodInfo *method_00;
  UnityEngine_RenderTexture_array *pUVar15;
  MethodInfo *pMVar16;
  UnityEngine_Object_o *pUVar17;
  long lVar18;
  long *__this_00;
  MethodInfo **__this_01;
  UnityEngine_RenderTexture_array *curTexture;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  float fVar19;
  float fVar20;
  UnityEngine_Vector4_o value;
  
  if (g_data_057af0cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0cb = '\x01';
  }
  pUVar17 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).m_materialApply;
  bVar5 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0458108f:
    return *ppUVar1;
  }
  pUVar2 = (__this->fields).shaderApply;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar9,pUVar2,(MethodInfo *)0x0);
  (__this->fields).m_materialApply = pUVar9;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar17 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
  if (pUVar17 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(pUVar17,0x3d,(MethodInfo *)0x0);
    goto label_0458108f;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar5 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_04581111;
  if (pUVar17[4].klass != (UnityEngine_Object_c *)0x0) {
    bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pUVar17[4].klass,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_04581111;
    pUVar2 = (UnityEngine_Shader_o *)pUVar17[4].fields.m_CachedPtr;
    if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
      bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto label_04581111;
      pUVar2 = (UnityEngine_Shader_o *)pUVar17[2].fields.m_CachedPtr;
      if (pUVar2 != (UnityEngine_Shader_o *)0x0) {
        bVar5 = UnityEngine_Shader__get_isSupported(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04581111:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar17,0,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        if (pUVar17[3].monitor != (UnityEngine_Shader_o *)0x0) {
          bVar5 = UnityEngine_Shader__get_isSupported(pUVar17[3].monitor,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar5);
          }
          goto label_04581111;
        }
      }
    }
  }
  lVar18 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0cc = '\x01';
  }
  lVar3 = *(long *)(lVar18 + 0x30);
  if (lVar3 == 0) goto label_0458132c;
  if (*(int *)(lVar3 + 0x18) == 0) goto label_04581331;
  pUVar17 = *(UnityEngine_Object_o **)(lVar3 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar17,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    lVar3 = *(long *)(lVar18 + 0x30);
    pUVar10 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor_4de1430(pUVar10,1,1,0,(MethodInfo *)0x0);
    if (lVar3 == 0) goto label_0458132c;
    if ((pUVar10 == (UnityEngine_RenderTexture_o *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pUVar10), lVar11 != 0)
       ) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(UnityEngine_RenderTexture_o **)(lVar3 + 0x20) = pUVar10;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
        lVar3 = *(long *)(lVar18 + 0x30);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar3 + 0x20) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)(lVar3 + 0x20),0x3d,(MethodInfo *)0x0)
            ;
            goto label_04581249;
          }
        }
        goto label_0458132c;
      }
      goto label_04581331;
    }
  }
  else {
label_04581249:
    lVar3 = *(long *)(lVar18 + 0x30);
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
      pUVar17 = *(UnityEngine_Object_o **)(lVar3 + 0x28);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Implicit(pUVar17,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar5);
      }
      lVar3 = *(long *)(lVar18 + 0x30);
      pUVar10 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor_4de1430(pUVar10,1,1,0,(MethodInfo *)0x0);
      if (lVar3 != 0) {
        if ((pUVar10 != (UnityEngine_RenderTexture_o *)0x0) &&
           (lVar11 = il2cpp_runtime_helper_023051f0(pUVar10), lVar11 == 0)) goto label_04581336;
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
        *(UnityEngine_RenderTexture_o **)(lVar3 + 0x28) = pUVar10;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x28);
        lVar18 = *(long *)(lVar18 + 0x30);
        if (lVar18 != 0) {
          if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar18 + 0x28) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      (*(UnityEngine_Object_o **)(lVar18 + 0x28),0x3d,(MethodInfo *)0x0);
            return extraout_RAX_00;
          }
        }
      }
    }
label_0458132c:
    il2cpp_runtime_helper_022b2c90();
label_04581331:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04581336:
  pUVar12 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)il2cpp_runtime_helper_0231b270();
  pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
  il2cpp_runtime_helper_022b2b10();
  __this_00 = (long *)pUVar12;
  if (g_data_057af0cd == '\0') {
    __this_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cd = '\x01';
  }
  pUVar15 = (pUVar12->fields).adaptRenderTex;
  if (pUVar15 == (UnityEngine_RenderTexture_array *)0x0) {
label_04581554:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar15->max_length != 0) {
    pUVar10 = pUVar15->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
    __this_00 = (long *)(pUVar12->fields).adaptRenderTex;
    if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
    goto label_04581554;
    if (*(int *)&((UnityEngine_RenderTexture_array *)__this_00)->max_length != 0) {
      ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
      __this_00 = (long *)((UnityEngine_RenderTexture_array *)__this_00)->m_Items;
      pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
      il2cpp_runtime_helper_022b4080();
      pUVar15 = (pUVar12->fields).adaptRenderTex;
      if (pUVar15 == (UnityEngine_RenderTexture_array *)0x0) goto label_04581554;
      if ((pUVar15->max_length & 0xfffffffe) != 0) {
        pUVar10 = pUVar15->m_Items[1];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
        __this_00 = (long *)(pUVar12->fields).adaptRenderTex;
        if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
        goto label_04581554;
        if (((ulong)((UnityEngine_RenderTexture_array *)__this_00)->max_length & 0xfffffffe) != 0) {
          ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
          il2cpp_runtime_helper_022b4080(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 1);
          pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialLum;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar17,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar17,(MethodInfo *)0x0);
          }
          pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialReduce;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar17,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar17,(MethodInfo *)0x0);
          }
          pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialAdapt;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar17,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar17,(MethodInfo *)0x0);
          }
          pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialApply;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar17,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar17 = (UnityEngine_Object_o *)(pUVar12->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar17,(MethodInfo *)0x0);
            return extraout_RAX_01;
          }
          return (UnityEngine_Material_o *)CONCAT44(extraout_var_01,bVar5);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar15 = pUVar14;
  __this_01 = (MethodInfo **)__this_00;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_01 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if (pUVar14 != (UnityEngine_RenderTexture_array *)0x0) {
    pIVar4 = (pUVar14->obj).klass;
    iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).methodPtr)
                      (pUVar14,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).method);
    pIVar4 = (pUVar14->obj).klass;
    uVar7 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).methodPtr)
                      (pUVar14,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).method);
    pMVar16 = (MethodInfo *)(ulong)uVar7;
    pUVar13 = (UnityEngine_RenderTexture_array *)
              UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
    pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
                       ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar16);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar15 = pUVar13;
    __this_01 = (MethodInfo **)pUVar14;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)pUVar14,(UnityEngine_RenderTexture_o *)pUVar13,pUVar9,
               (MethodInfo *)0x0);
    while (curTexture = pUVar13, curTexture != (UnityEngine_RenderTexture_array *)0x0) {
      pIVar4 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).method);
      if ((iVar8 < 2) &&
         (pIVar4 = (curTexture->obj).klass,
         iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).methodPtr)
                           (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).method)
         , iVar8 < 2)) {
        pUVar15 = curTexture;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                   (UnityEngine_Texture_o *)curTexture,method_00);
        __this_01 = (MethodInfo **)__this_00;
        pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                           ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                            (MethodInfo *)pUVar15);
        pUVar13 = (UnityEngine_RenderTexture_array *)
                  ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[2];
        if (pUVar13 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((uint)pUVar13->max_length <=
              *(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)) goto label_04581799;
          if (pUVar9 != (UnityEngine_Material_o *)0x0) {
            pMVar16 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar9,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)
                       pUVar13->m_Items
                       [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)],
                       (MethodInfo *)0x0);
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar16);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)pUVar14,dest,pUVar9,(MethodInfo *)0x0)
            ;
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
            return extraout_RAX_02;
          }
        }
        break;
      }
      pIVar4 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).method);
      uVar7 = 1;
      iVar6 = 1;
      if (1 < iVar8) {
        iVar6 = iVar8 / 2;
      }
      pIVar4 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).method);
      if (1 < iVar8) {
        uVar7 = iVar8 / 2;
      }
      pMVar16 = (MethodInfo *)(ulong)uVar7;
      pUVar13 = (UnityEngine_RenderTexture_array *)
                UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
      pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                         ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar16);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)curTexture,(UnityEngine_RenderTexture_o *)pUVar13,pUVar9,
                 (MethodInfo *)0x0);
      pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0)
      ;
      __this_01 = (MethodInfo **)curTexture;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar14 = pUVar15;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar7 = *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3);
  *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) =
       (uVar7 + 1) - ((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar20 = *(float *)((UnityEngine_RenderTexture_array *)__this_01)->m_Items;
  __this_02 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar20 = powf(__this_02,1.0 - fVar20,fVar19 * 30.0,(MethodInfo *)pUVar14);
  pUVar13 = (UnityEngine_RenderTexture_array *)__this_01;
  pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                     ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,(MethodInfo *)pUVar14);
  if (pUVar9 != (UnityEngine_Material_o *)0x0) {
    pMVar16 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar9,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar15,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_RenderTexture_array *)__this_01;
    pUVar14 = (UnityEngine_RenderTexture_array *)
              UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar16);
    if (pUVar14 != (UnityEngine_RenderTexture_array *)0x0) {
      fVar20 = 1.0 - fVar20;
      fVar19 = 1.0;
      if (fVar20 <= 1.0) {
        fVar19 = fVar20;
      }
      value.fields.y =
           (float)*(undefined4 *)((long)((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 4);
      value.fields.x = (float)(~-(uint)(0.01 <= fVar20) & 0x3c23d70a | (uint)fVar19 & -(uint)(0.01 <= fVar20))
      ;
      value.fields.z = (float)*(undefined4 *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 1);
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar14,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar10 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
      pUVar13 = pUVar14;
      if (pUVar10 != (UnityEngine_RenderTexture_o *)0x0) {
        if (*(uint *)&pUVar10[1].klass <=
            *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)) goto label_0458195f;
        pUVar10 = (&pUVar10[1].monitor)
                  [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar10,(MethodInfo *)0x0);
        pUVar13 = (UnityEngine_RenderTexture_array *)0x0;
        pMVar16 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar10 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
        if (pUVar10 != (UnityEngine_RenderTexture_o *)0x0) {
          if ((uVar7 < *(uint *)&pUVar10[1].klass) &&
             (*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) <
              *(uint *)&pUVar10[1].klass)) {
            source = (&pUVar10[1].monitor)[(int)uVar7];
            pUVar10 = (&pUVar10[1].monitor)
                      [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
            pUVar9 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar16);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar10,pUVar9,(MethodInfo *)0x0);
            return extraout_RAX_03;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  pUVar13->m_Items[0] = (UnityEngine_RenderTexture_o *)0x3e4ccccd3ca3d70a;
  *(undefined4 *)(pUVar13->m_Items + 1) = 0x3f19999a;
  pUVar10 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  pUVar13->m_Items[2] = pUVar10;
  il2cpp_runtime_helper_022b4080(pUVar13->m_Items + 2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar13,(MethodInfo *)0x0);
  return extraout_RAX_04;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__Start (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x45810b0

void UnityStandardAssets_ImageEffects_ContrastStretch__Start
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o *pUVar1;
  long lVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Texture_o *source;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  int iVar8;
  UnityEngine_RenderTexture_o *pUVar9;
  long lVar10;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar11;
  UnityEngine_RenderTexture_array *pUVar12;
  UnityEngine_Material_o *pUVar13;
  UnityEngine_RenderTexture_array *pUVar14;
  UnityEngine_RenderTexture_o *dest;
  MethodInfo *method_00;
  UnityEngine_RenderTexture_array *pUVar15;
  MethodInfo *pMVar16;
  long lVar17;
  long *__this_00;
  MethodInfo **__this_01;
  UnityEngine_RenderTexture_array *curTexture;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  float fVar18;
  float fVar19;
  UnityEngine_Vector4_o value;
  
  bVar5 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_04581111;
  pUVar1 = (__this->fields).shaderAdapt;
  if (pUVar1 != (UnityEngine_Shader_o *)0x0) {
    bVar5 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_04581111;
    pUVar1 = (__this->fields).shaderApply;
    if (pUVar1 != (UnityEngine_Shader_o *)0x0) {
      bVar5 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto label_04581111;
      pUVar1 = (__this->fields).shaderLum;
      if (pUVar1 != (UnityEngine_Shader_o *)0x0) {
        bVar5 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04581111:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
          return;
        }
        pUVar1 = (__this->fields).shaderReduce;
        if (pUVar1 != (UnityEngine_Shader_o *)0x0) {
          bVar5 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return;
          }
          goto label_04581111;
        }
      }
    }
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0cc = '\x01';
  }
  lVar2 = *(long *)(lVar17 + 0x30);
  if (lVar2 == 0) goto label_0458132c;
  if (*(int *)(lVar2 + 0x18) == 0) goto label_04581331;
  pUVar3 = *(UnityEngine_Object_o **)(lVar2 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    lVar2 = *(long *)(lVar17 + 0x30);
    pUVar9 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor_4de1430(pUVar9,1,1,0,(MethodInfo *)0x0);
    if (lVar2 == 0) goto label_0458132c;
    if ((pUVar9 == (UnityEngine_RenderTexture_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pUVar9), lVar10 != 0))
    {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(UnityEngine_RenderTexture_o **)(lVar2 + 0x20) = pUVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
        lVar2 = *(long *)(lVar17 + 0x30);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar2 + 0x20) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)(lVar2 + 0x20),0x3d,(MethodInfo *)0x0)
            ;
            goto label_04581249;
          }
        }
        goto label_0458132c;
      }
      goto label_04581331;
    }
  }
  else {
label_04581249:
    lVar2 = *(long *)(lVar17 + 0x30);
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
      pUVar3 = *(UnityEngine_Object_o **)(lVar2 + 0x28);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      lVar2 = *(long *)(lVar17 + 0x30);
      pUVar9 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor_4de1430(pUVar9,1,1,0,(MethodInfo *)0x0);
      if (lVar2 != 0) {
        if ((pUVar9 != (UnityEngine_RenderTexture_o *)0x0) &&
           (lVar10 = il2cpp_runtime_helper_023051f0(pUVar9), lVar10 == 0)) goto label_04581336;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
        *(UnityEngine_RenderTexture_o **)(lVar2 + 0x28) = pUVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        lVar17 = *(long *)(lVar17 + 0x30);
        if (lVar17 != 0) {
          if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto label_04581331;
          if (*(UnityEngine_Object_o **)(lVar17 + 0x28) != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      (*(UnityEngine_Object_o **)(lVar17 + 0x28),0x3d,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
label_0458132c:
    il2cpp_runtime_helper_022b2c90();
label_04581331:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04581336:
  pUVar11 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)il2cpp_runtime_helper_0231b270();
  pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
  il2cpp_runtime_helper_022b2b10();
  __this_00 = (long *)pUVar11;
  if (g_data_057af0cd == '\0') {
    __this_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cd = '\x01';
  }
  pUVar15 = (pUVar11->fields).adaptRenderTex;
  if (pUVar15 == (UnityEngine_RenderTexture_array *)0x0) {
label_04581554:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar15->max_length != 0) {
    pUVar9 = pUVar15->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
    __this_00 = (long *)(pUVar11->fields).adaptRenderTex;
    if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
    goto label_04581554;
    if (*(int *)&((UnityEngine_RenderTexture_array *)__this_00)->max_length != 0) {
      ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
      __this_00 = (long *)((UnityEngine_RenderTexture_array *)__this_00)->m_Items;
      pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
      il2cpp_runtime_helper_022b4080();
      pUVar15 = (pUVar11->fields).adaptRenderTex;
      if (pUVar15 == (UnityEngine_RenderTexture_array *)0x0) goto label_04581554;
      if ((pUVar15->max_length & 0xfffffffe) != 0) {
        pUVar9 = pUVar15->m_Items[1];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar14 = (UnityEngine_RenderTexture_array *)0x0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
        __this_00 = (long *)(pUVar11->fields).adaptRenderTex;
        if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
        goto label_04581554;
        if (((ulong)((UnityEngine_RenderTexture_array *)__this_00)->max_length & 0xfffffffe) != 0) {
          ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
          il2cpp_runtime_helper_022b4080(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 1);
          pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialLum;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
          }
          pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialReduce;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
          }
          pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialAdapt;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
          }
          pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialApply;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar3 = (UnityEngine_Object_o *)(pUVar11->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar15 = pUVar14;
  __this_01 = (MethodInfo **)__this_00;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_01 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if (pUVar14 != (UnityEngine_RenderTexture_array *)0x0) {
    pIVar4 = (pUVar14->obj).klass;
    iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).methodPtr)
                      (pUVar14,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).method);
    pIVar4 = (pUVar14->obj).klass;
    uVar7 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).methodPtr)
                      (pUVar14,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).method);
    pMVar16 = (MethodInfo *)(ulong)uVar7;
    pUVar12 = (UnityEngine_RenderTexture_array *)
              UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
    pUVar13 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar16);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar15 = pUVar12;
    __this_01 = (MethodInfo **)pUVar14;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)pUVar14,(UnityEngine_RenderTexture_o *)pUVar12,pUVar13,
               (MethodInfo *)0x0);
    while (curTexture = pUVar12, curTexture != (UnityEngine_RenderTexture_array *)0x0) {
      pIVar4 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).method);
      if ((iVar8 < 2) &&
         (pIVar4 = (curTexture->obj).klass,
         iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).methodPtr)
                           (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).method)
         , iVar8 < 2)) {
        pUVar15 = curTexture;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                   (UnityEngine_Texture_o *)curTexture,method_00);
        __this_01 = (MethodInfo **)__this_00;
        pUVar13 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                            ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                             (MethodInfo *)pUVar15);
        pUVar12 = (UnityEngine_RenderTexture_array *)
                  ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[2];
        if (pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((uint)pUVar12->max_length <=
              *(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)) goto label_04581799;
          if (pUVar13 != (UnityEngine_Material_o *)0x0) {
            pMVar16 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar13,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)
                       pUVar12->m_Items
                       [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)],
                       (MethodInfo *)0x0);
            pUVar13 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                                ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar16);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0
                      ((UnityEngine_Texture_o *)pUVar14,dest,pUVar13,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      pIVar4 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_5_get_width).method);
      uVar7 = 1;
      iVar6 = 1;
      if (1 < iVar8) {
        iVar6 = iVar8 / 2;
      }
      pIVar4 = (curTexture->obj).klass;
      iVar8 = (*(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar4->vtable)->_7_get_height).method);
      if (1 < iVar8) {
        uVar7 = iVar8 / 2;
      }
      pMVar16 = (MethodInfo *)(ulong)uVar7;
      pUVar12 = (UnityEngine_RenderTexture_array *)
                UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar6,uVar7,(MethodInfo *)0x0);
      pUVar13 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                          ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar16);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)curTexture,(UnityEngine_RenderTexture_o *)pUVar12,pUVar13,
                 (MethodInfo *)0x0);
      pUVar15 = (UnityEngine_RenderTexture_array *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0)
      ;
      __this_01 = (MethodInfo **)curTexture;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar14 = pUVar15;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar7 = *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3);
  *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) =
       (uVar7 + 1) - ((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar19 = *(float *)((UnityEngine_RenderTexture_array *)__this_01)->m_Items;
  __this_02 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar19 = powf(__this_02,1.0 - fVar19,fVar18 * 30.0,(MethodInfo *)pUVar14);
  pUVar12 = (UnityEngine_RenderTexture_array *)__this_01;
  pUVar13 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                      ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,(MethodInfo *)pUVar14);
  if (pUVar13 != (UnityEngine_Material_o *)0x0) {
    pMVar16 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar13,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar15,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_RenderTexture_array *)__this_01;
    pUVar14 = (UnityEngine_RenderTexture_array *)
              UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar16);
    if (pUVar14 != (UnityEngine_RenderTexture_array *)0x0) {
      fVar19 = 1.0 - fVar19;
      fVar18 = 1.0;
      if (fVar19 <= 1.0) {
        fVar18 = fVar19;
      }
      value.fields.y =
           (float)*(undefined4 *)((long)((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 4);
      value.fields.x = (float)(~-(uint)(0.01 <= fVar19) & 0x3c23d70a | (uint)fVar18 & -(uint)(0.01 <= fVar19))
      ;
      value.fields.z = (float)*(undefined4 *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 1);
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar14,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar9 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
      pUVar12 = pUVar14;
      if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
        if (*(uint *)&pUVar9[1].klass <=
            *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)) goto label_0458195f;
        pUVar9 = (&pUVar9[1].monitor)
                 [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar9,(MethodInfo *)0x0);
        pUVar12 = (UnityEngine_RenderTexture_array *)0x0;
        pMVar16 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar9 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
        if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
          if ((uVar7 < *(uint *)&pUVar9[1].klass) &&
             (*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) <
              *(uint *)&pUVar9[1].klass)) {
            source = (&pUVar9[1].monitor)[(int)uVar7];
            pUVar9 = (&pUVar9[1].monitor)
                     [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
            pUVar13 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                                ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar16);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar9,pUVar13,(MethodInfo *)0x0);
            return;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  pUVar12->m_Items[0] = (UnityEngine_RenderTexture_o *)0x3e4ccccd3ca3d70a;
  *(undefined4 *)(pUVar12->m_Items + 1) = 0x3f19999a;
  pUVar9 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  pUVar12->m_Items[2] = pUVar9;
  il2cpp_runtime_helper_022b4080(pUVar12->m_Items + 2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar12,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__OnEnable (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x4581130

void UnityStandardAssets_ImageEffects_ContrastStretch__OnEnable
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Texture_o *source;
  bool_conflict bVar3;
  int32_t iVar4;
  uint uVar5;
  int iVar6;
  UnityEngine_RenderTexture_o *pUVar7;
  long lVar8;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar9;
  UnityEngine_RenderTexture_array *pUVar10;
  UnityEngine_Material_o *pUVar11;
  UnityEngine_RenderTexture_array *pUVar12;
  UnityEngine_RenderTexture_o *dest;
  MethodInfo *method_00;
  UnityEngine_RenderTexture_array *pUVar13;
  MethodInfo *pMVar14;
  long *__this_00;
  MethodInfo **__this_01;
  UnityEngine_RenderTexture_array *curTexture;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  float fVar15;
  float fVar16;
  UnityEngine_Vector4_o value;
  
  if (g_data_057af0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0cc = '\x01';
  }
  pUVar12 = (__this->fields).adaptRenderTex;
  if (pUVar12 == (UnityEngine_RenderTexture_array *)0x0) goto label_0458132c;
  if ((int)pUVar12->max_length == 0) goto label_04581331;
  pUVar7 = pUVar12->m_Items[0];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar12 = (__this->fields).adaptRenderTex;
    pUVar7 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor_4de1430(pUVar7,1,1,0,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_RenderTexture_array *)0x0) goto label_0458132c;
    if ((pUVar7 == (UnityEngine_RenderTexture_o *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pUVar7), lVar8 != 0)) {
      if ((int)pUVar12->max_length != 0) {
        pUVar12->m_Items[0] = pUVar7;
        il2cpp_runtime_helper_022b4080(pUVar12->m_Items);
        pUVar12 = (__this->fields).adaptRenderTex;
        if (pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((int)pUVar12->max_length == 0) goto label_04581331;
          if (pUVar12->m_Items[0] != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      ((UnityEngine_Object_o *)pUVar12->m_Items[0],0x3d,(MethodInfo *)0x0);
            goto label_04581249;
          }
        }
        goto label_0458132c;
      }
      goto label_04581331;
    }
  }
  else {
label_04581249:
    pUVar12 = (__this->fields).adaptRenderTex;
    if (pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
      if ((pUVar12->max_length & 0xfffffffe) == 0) goto label_04581331;
      pUVar7 = pUVar12->m_Items[1];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return;
      }
      pUVar12 = (__this->fields).adaptRenderTex;
      pUVar7 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor_4de1430(pUVar7,1,1,0,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
        if ((pUVar7 != (UnityEngine_RenderTexture_o *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pUVar7), lVar8 == 0)
           ) goto label_04581336;
        if ((pUVar12->max_length & 0xfffffffe) == 0) goto label_04581331;
        pUVar12->m_Items[1] = pUVar7;
        il2cpp_runtime_helper_022b4080(pUVar12->m_Items + 1);
        pUVar12 = (__this->fields).adaptRenderTex;
        if (pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((pUVar12->max_length & 0xfffffffe) == 0) goto label_04581331;
          if (pUVar12->m_Items[1] != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      ((UnityEngine_Object_o *)pUVar12->m_Items[1],0x3d,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
label_0458132c:
    il2cpp_runtime_helper_022b2c90();
label_04581331:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04581336:
  pUVar9 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)il2cpp_runtime_helper_0231b270();
  pUVar12 = (UnityEngine_RenderTexture_array *)0x0;
  il2cpp_runtime_helper_022b2b10();
  __this_00 = (long *)pUVar9;
  if (g_data_057af0cd == '\0') {
    __this_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cd = '\x01';
  }
  pUVar13 = (pUVar9->fields).adaptRenderTex;
  if (pUVar13 == (UnityEngine_RenderTexture_array *)0x0) {
label_04581554:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar13->max_length != 0) {
    pUVar7 = pUVar13->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar12 = (UnityEngine_RenderTexture_array *)0x0;
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    __this_00 = (long *)(pUVar9->fields).adaptRenderTex;
    if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
    goto label_04581554;
    if (*(int *)&((UnityEngine_RenderTexture_array *)__this_00)->max_length != 0) {
      ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
      __this_00 = (long *)((UnityEngine_RenderTexture_array *)__this_00)->m_Items;
      pUVar12 = (UnityEngine_RenderTexture_array *)0x0;
      il2cpp_runtime_helper_022b4080();
      pUVar13 = (pUVar9->fields).adaptRenderTex;
      if (pUVar13 == (UnityEngine_RenderTexture_array *)0x0) goto label_04581554;
      if ((pUVar13->max_length & 0xfffffffe) != 0) {
        pUVar7 = pUVar13->m_Items[1];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar12 = (UnityEngine_RenderTexture_array *)0x0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
        __this_00 = (long *)(pUVar9->fields).adaptRenderTex;
        if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
        goto label_04581554;
        if (((ulong)((UnityEngine_RenderTexture_array *)__this_00)->max_length & 0xfffffffe) != 0) {
          ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
          il2cpp_runtime_helper_022b4080(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 1);
          pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialLum;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
          }
          pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialReduce;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
          }
          pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialAdapt;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
          }
          pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialApply;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(pUVar9->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar13 = pUVar12;
  __this_01 = (MethodInfo **)__this_00;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_01 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if (pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
    pIVar2 = (pUVar12->obj).klass;
    iVar4 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).methodPtr)
                      (pUVar12,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).method);
    pIVar2 = (pUVar12->obj).klass;
    uVar5 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).methodPtr)
                      (pUVar12,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).method);
    pMVar14 = (MethodInfo *)(ulong)uVar5;
    pUVar10 = (UnityEngine_RenderTexture_array *)
              UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar4,uVar5,(MethodInfo *)0x0);
    pUVar11 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar14);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar13 = pUVar10;
    __this_01 = (MethodInfo **)pUVar12;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)pUVar12,(UnityEngine_RenderTexture_o *)pUVar10,pUVar11,
               (MethodInfo *)0x0);
    while (curTexture = pUVar10, curTexture != (UnityEngine_RenderTexture_array *)0x0) {
      pIVar2 = (curTexture->obj).klass;
      iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).method);
      if ((iVar6 < 2) &&
         (pIVar2 = (curTexture->obj).klass,
         iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).methodPtr)
                           (curTexture,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).method)
         , iVar6 < 2)) {
        pUVar13 = curTexture;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                   (UnityEngine_Texture_o *)curTexture,method_00);
        __this_01 = (MethodInfo **)__this_00;
        pUVar11 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                            ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                             (MethodInfo *)pUVar13);
        pUVar10 = (UnityEngine_RenderTexture_array *)
                  ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[2];
        if (pUVar10 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((uint)pUVar10->max_length <=
              *(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)) goto label_04581799;
          if (pUVar11 != (UnityEngine_Material_o *)0x0) {
            pMVar14 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar11,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)
                       pUVar10->m_Items
                       [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)],
                       (MethodInfo *)0x0);
            pUVar11 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                                ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar14);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0
                      ((UnityEngine_Texture_o *)pUVar12,dest,pUVar11,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      pIVar2 = (curTexture->obj).klass;
      iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).method);
      uVar5 = 1;
      iVar4 = 1;
      if (1 < iVar6) {
        iVar4 = iVar6 / 2;
      }
      pIVar2 = (curTexture->obj).klass;
      iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).methodPtr)
                        (curTexture,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).method);
      if (1 < iVar6) {
        uVar5 = iVar6 / 2;
      }
      pMVar14 = (MethodInfo *)(ulong)uVar5;
      pUVar10 = (UnityEngine_RenderTexture_array *)
                UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar4,uVar5,(MethodInfo *)0x0);
      pUVar11 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                          ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar14);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)curTexture,(UnityEngine_RenderTexture_o *)pUVar10,pUVar11,
                 (MethodInfo *)0x0);
      pUVar13 = (UnityEngine_RenderTexture_array *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0)
      ;
      __this_01 = (MethodInfo **)curTexture;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar12 = pUVar13;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar5 = *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3);
  *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) =
       (uVar5 + 1) - ((uVar5 - ((int)(uVar5 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar16 = *(float *)((UnityEngine_RenderTexture_array *)__this_01)->m_Items;
  __this_02 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar16 = powf(__this_02,1.0 - fVar16,fVar15 * 30.0,(MethodInfo *)pUVar12);
  pUVar10 = (UnityEngine_RenderTexture_array *)__this_01;
  pUVar11 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                      ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,(MethodInfo *)pUVar12);
  if (pUVar11 != (UnityEngine_Material_o *)0x0) {
    pMVar14 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar11,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar13,(MethodInfo *)0x0);
    pUVar10 = (UnityEngine_RenderTexture_array *)__this_01;
    pUVar12 = (UnityEngine_RenderTexture_array *)
              UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                        ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar14);
    if (pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
      fVar16 = 1.0 - fVar16;
      fVar15 = 1.0;
      if (fVar16 <= 1.0) {
        fVar15 = fVar16;
      }
      value.fields.y =
           (float)*(undefined4 *)((long)((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 4);
      value.fields.x = (float)(~-(uint)(0.01 <= fVar16) & 0x3c23d70a | (uint)fVar15 & -(uint)(0.01 <= fVar16))
      ;
      value.fields.z = (float)*(undefined4 *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 1);
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar12,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar7 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
      pUVar10 = pUVar12;
      if (pUVar7 != (UnityEngine_RenderTexture_o *)0x0) {
        if (*(uint *)&pUVar7[1].klass <=
            *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)) goto label_0458195f;
        pUVar7 = (&pUVar7[1].monitor)
                 [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar7,(MethodInfo *)0x0);
        pUVar10 = (UnityEngine_RenderTexture_array *)0x0;
        pMVar14 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar7 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
        if (pUVar7 != (UnityEngine_RenderTexture_o *)0x0) {
          if ((uVar5 < *(uint *)&pUVar7[1].klass) &&
             (*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) <
              *(uint *)&pUVar7[1].klass)) {
            source = (&pUVar7[1].monitor)[(int)uVar5];
            pUVar7 = (&pUVar7[1].monitor)
                     [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
            pUVar11 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                                ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar14);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar7,pUVar11,(MethodInfo *)0x0);
            return;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  pUVar10->m_Items[0] = (UnityEngine_RenderTexture_o *)0x3e4ccccd3ca3d70a;
  *(undefined4 *)(pUVar10->m_Items + 1) = 0x3f19999a;
  pUVar7 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  pUVar10->m_Items[2] = pUVar7;
  il2cpp_runtime_helper_022b4080(pUVar10->m_Items + 2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar10,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__OnDisable (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x4581350

void UnityStandardAssets_ImageEffects_ContrastStretch__OnDisable
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Texture_o *source;
  bool_conflict bVar3;
  int32_t iVar4;
  uint uVar5;
  int iVar6;
  UnityEngine_RenderTexture_array *pUVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_RenderTexture_array *pUVar9;
  UnityEngine_RenderTexture_o *pUVar10;
  UnityEngine_RenderTexture_o *dest;
  MethodInfo *method_00;
  MethodInfo *pMVar11;
  long *__this_00;
  MethodInfo **__this_01;
  CustomLogic_CustomLogicMathBuiltin_o *__this_02;
  UnityEngine_RenderTexture_array *pUVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector4_o value;
  
  __this_00 = (long *)__this;
  if (g_data_057af0cd == '\0') {
    __this_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cd = '\x01';
  }
  pUVar9 = (__this->fields).adaptRenderTex;
  if (pUVar9 == (UnityEngine_RenderTexture_array *)0x0) {
label_04581554:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar9->max_length != 0) {
    pUVar10 = pUVar9->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
    __this_00 = (long *)(__this->fields).adaptRenderTex;
    if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
    goto label_04581554;
    if (*(int *)&((UnityEngine_RenderTexture_array *)__this_00)->max_length != 0) {
      ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
      __this_00 = (long *)((UnityEngine_RenderTexture_array *)__this_00)->m_Items;
      method = (MethodInfo *)0x0;
      il2cpp_runtime_helper_022b4080();
      pUVar9 = (__this->fields).adaptRenderTex;
      if (pUVar9 == (UnityEngine_RenderTexture_array *)0x0) goto label_04581554;
      if ((pUVar9->max_length & 0xfffffffe) != 0) {
        pUVar10 = pUVar9->m_Items[1];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)0x0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
        __this_00 = (long *)(__this->fields).adaptRenderTex;
        if ((UnityEngine_RenderTexture_array *)__this_00 == (UnityEngine_RenderTexture_array *)0x0)
        goto label_04581554;
        if (((ulong)((UnityEngine_RenderTexture_array *)__this_00)->max_length & 0xfffffffe) != 0) {
          ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
          il2cpp_runtime_helper_022b4080(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 1);
          pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
          }
          pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
          }
          pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
          }
          pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar9 = (UnityEngine_RenderTexture_array *)method;
  __this_01 = (MethodInfo **)__this_00;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_01 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if ((UnityEngine_RenderTexture_array *)method != (UnityEngine_RenderTexture_array *)0x0) {
    pIVar2 = (((UnityEngine_RenderTexture_array *)method)->obj).klass;
    iVar4 = (*pIVar2->vtable[5].methodPtr)(method,pIVar2->vtable[5].method);
    pIVar2 = (((UnityEngine_RenderTexture_array *)method)->obj).klass;
    uVar5 = (*pIVar2->vtable[7].methodPtr)(method,pIVar2->vtable[7].method);
    pMVar11 = (MethodInfo *)(ulong)uVar5;
    pUVar7 = (UnityEngine_RenderTexture_array *)
             UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar4,uVar5,(MethodInfo *)0x0);
    pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
                       ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar11);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = pUVar7;
    __this_01 = (MethodInfo **)method;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)method,(UnityEngine_RenderTexture_o *)pUVar7,pUVar8,(MethodInfo *)0x0)
    ;
    while (pUVar12 = pUVar7, pUVar12 != (UnityEngine_RenderTexture_array *)0x0) {
      pIVar2 = (pUVar12->obj).klass;
      iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).methodPtr)
                        (pUVar12,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).method);
      if ((iVar6 < 2) &&
         (pIVar2 = (pUVar12->obj).klass,
         iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).methodPtr)
                           (pUVar12,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).method),
         iVar6 < 2)) {
        pUVar9 = pUVar12;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                   (UnityEngine_Texture_o *)pUVar12,method_00);
        __this_01 = (MethodInfo **)__this_00;
        pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                           ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,
                            (MethodInfo *)pUVar9);
        pUVar10 = ((UnityEngine_RenderTexture_array *)__this_00)->m_Items[2];
        if (pUVar10 != (UnityEngine_RenderTexture_o *)0x0) {
          if (*(uint *)&pUVar10[1].klass <=
              *(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)) goto label_04581799;
          if (pUVar8 != (UnityEngine_Material_o *)0x0) {
            pMVar11 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar8,(System_String_o *)"_AdaptTex",
                       (&pUVar10[1].monitor)
                       [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_00)->m_Items + 3)],
                       (MethodInfo *)0x0);
            pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar11);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)method,dest,pUVar8,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)pUVar12,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      pIVar2 = (pUVar12->obj).klass;
      iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).methodPtr)
                        (pUVar12,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_5_get_width).method);
      uVar5 = 1;
      iVar4 = 1;
      if (1 < iVar6) {
        iVar4 = iVar6 / 2;
      }
      pIVar2 = (pUVar12->obj).klass;
      iVar6 = (*(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).methodPtr)
                        (pUVar12,(((UnityEngine_Texture_VTable *)pIVar2->vtable)->_7_get_height).method);
      if (1 < iVar6) {
        uVar5 = iVar6 / 2;
      }
      pMVar11 = (MethodInfo *)(ulong)uVar5;
      pUVar7 = (UnityEngine_RenderTexture_array *)
               UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar4,uVar5,(MethodInfo *)0x0);
      pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                         ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar11);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)pUVar12,(UnityEngine_RenderTexture_o *)pUVar7,pUVar8,
                 (MethodInfo *)0x0);
      pUVar9 = (UnityEngine_RenderTexture_array *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar12,(MethodInfo *)0x0);
      __this_01 = (MethodInfo **)pUVar12;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar7 = pUVar9;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar5 = *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3);
  *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) =
       (uVar5 + 1) - ((uVar5 - ((int)(uVar5 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar14 = *(float *)((UnityEngine_RenderTexture_array *)__this_01)->m_Items;
  __this_02 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar14 = powf(__this_02,1.0 - fVar14,fVar13 * 30.0,(MethodInfo *)pUVar7);
  pUVar12 = (UnityEngine_RenderTexture_array *)__this_01;
  pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                     ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,(MethodInfo *)pUVar7);
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    pMVar11 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar8,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar9,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_RenderTexture_array *)__this_01;
    pUVar9 = (UnityEngine_RenderTexture_array *)
             UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                       ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar11);
    if (pUVar9 != (UnityEngine_RenderTexture_array *)0x0) {
      fVar14 = 1.0 - fVar14;
      fVar13 = 1.0;
      if (fVar14 <= 1.0) {
        fVar13 = fVar14;
      }
      value.fields.y =
           (float)*(undefined4 *)((long)((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 4);
      value.fields.x = (float)(~-(uint)(0.01 <= fVar14) & 0x3c23d70a | (uint)fVar13 & -(uint)(0.01 <= fVar14))
      ;
      value.fields.z = (float)*(undefined4 *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 1);
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar9,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar10 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
      pUVar12 = pUVar9;
      if (pUVar10 != (UnityEngine_RenderTexture_o *)0x0) {
        if (*(uint *)&pUVar10[1].klass <=
            *(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)) goto label_0458195f;
        pUVar10 = (&pUVar10[1].monitor)
                  [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar10,(MethodInfo *)0x0);
        pUVar12 = (UnityEngine_RenderTexture_array *)0x0;
        pMVar11 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar10 = ((UnityEngine_RenderTexture_array *)__this_01)->m_Items[2];
        if (pUVar10 != (UnityEngine_RenderTexture_o *)0x0) {
          if ((uVar5 < *(uint *)&pUVar10[1].klass) &&
             (*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3) <
              *(uint *)&pUVar10[1].klass)) {
            source = (&pUVar10[1].monitor)[(int)uVar5];
            pUVar10 = (&pUVar10[1].monitor)
                      [(int)*(uint *)(((UnityEngine_RenderTexture_array *)__this_01)->m_Items + 3)];
            pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_01,pMVar11);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar10,pUVar8,(MethodInfo *)0x0);
            return;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  pUVar12->m_Items[0] = (UnityEngine_RenderTexture_o *)0x3e4ccccd3ca3d70a;
  *(undefined4 *)(pUVar12->m_Items + 1) = 0x3f19999a;
  pUVar10 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  pUVar12->m_Items[2] = pUVar10;
  il2cpp_runtime_helper_022b4080(pUVar12->m_Items + 2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar12,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__OnRenderImage (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4581560

void UnityStandardAssets_ImageEffects_ContrastStretch__OnRenderImage
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,UnityEngine_RenderTexture_o *source
               ,UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  UnityEngine_RenderTexture_o *pUVar3;
  UnityEngine_Texture_o *source_00;
  int32_t iVar4;
  uint uVar5;
  int iVar6;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar7;
  UnityEngine_Material_o *pUVar8;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar9;
  UnityEngine_RenderTexture_array *pUVar10;
  MethodInfo *method_00;
  MethodInfo *pMVar11;
  MethodInfo **__this_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *pUVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector4_o value;
  
  pUVar9 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)source;
  __this_00 = (MethodInfo **)__this;
  if (g_data_057af0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    __this_00 = &"_AdaptTex";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0ce = '\x01';
  }
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    uVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    pMVar11 = (MethodInfo *)(ulong)uVar5;
    pUVar7 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)
             UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar4,uVar5,(MethodInfo *)0x0);
    pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum(__this,pMVar11);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = pUVar7;
    __this_00 = (MethodInfo **)source;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUVar7,pUVar8,(MethodInfo *)0x0)
    ;
    while (pUVar12 = pUVar7, pUVar12 != (UnityStandardAssets_ImageEffects_ContrastStretch_o *)0x0) {
      iVar6 = (*(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._5_get_width.methodPtr)
                        (pUVar12,(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._5_get_width.method);
      if ((iVar6 < 2) &&
         (iVar6 = (*(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._7_get_height.methodPtr)
                            (pUVar12,(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._7_get_height.method)
         , iVar6 < 2)) {
        pUVar9 = pUVar12;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  (__this,(UnityEngine_Texture_o *)pUVar12,method_00);
        __this_00 = (MethodInfo **)__this;
        pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                           (__this,(MethodInfo *)pUVar9);
        pUVar10 = (__this->fields).adaptRenderTex;
        if (pUVar10 != (UnityEngine_RenderTexture_array *)0x0) {
          uVar5 = (__this->fields).curAdaptIndex;
          if ((uint)pUVar10->max_length <= uVar5) goto label_04581799;
          if (pUVar8 != (UnityEngine_Material_o *)0x0) {
            pMVar11 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar8,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)pUVar10->m_Items[(int)uVar5],(MethodInfo *)0x0);
            pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply(__this,pMVar11);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0
                      ((UnityEngine_Texture_o *)source,destination,pUVar8,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)pUVar12,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      iVar6 = (*(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._5_get_width.methodPtr)
                        (pUVar12,(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._5_get_width.method);
      uVar5 = 1;
      iVar4 = 1;
      if (1 < iVar6) {
        iVar4 = iVar6 / 2;
      }
      iVar6 = (*(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._7_get_height.methodPtr)
                        (pUVar12,(((UnityEngine_Texture_c *)pUVar12->klass)->vtable)._7_get_height.method);
      if (1 < iVar6) {
        uVar5 = iVar6 / 2;
      }
      pMVar11 = (MethodInfo *)(ulong)uVar5;
      pUVar7 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar4,uVar5,(MethodInfo *)0x0);
      pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce(__this,pMVar11);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)pUVar12,(UnityEngine_RenderTexture_o *)pUVar7,pUVar8,
                 (MethodInfo *)0x0);
      pUVar9 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)0x0;
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar12,(MethodInfo *)0x0);
      __this_00 = (MethodInfo **)pUVar12;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04581799:
  il2cpp_runtime_helper_022b2ca0();
  pUVar7 = pUVar9;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar5 = (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).curAdaptIndex;
  (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).curAdaptIndex =
       (uVar5 + 1) - ((uVar5 - ((int)(uVar5 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar14 = (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).adaptationSpeed;
  __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar14 = powf(__this_01,1.0 - fVar14,fVar13 * 30.0,(MethodInfo *)pUVar7);
  pUVar12 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00;
  pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                     ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,(MethodInfo *)pUVar7);
  if (pUVar8 != (UnityEngine_Material_o *)0x0) {
    pMVar11 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar8,(System_String_o *)"_CurTex",(UnityEngine_Texture_o *)pUVar9,(MethodInfo *)0x0);
    pUVar12 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00;
    pUVar9 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)
             UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                       ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar11);
    if (pUVar9 != (UnityStandardAssets_ImageEffects_ContrastStretch_o *)0x0) {
      fVar14 = 1.0 - fVar14;
      fVar13 = 1.0;
      if (fVar14 <= 1.0) {
        fVar13 = fVar14;
      }
      value.fields.y =
           (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).limitMinimum;
      value.fields.x = (float)(~-(uint)(0.01 <= fVar14) & 0x3c23d70a | (uint)fVar13 & -(uint)(0.01 <= fVar14))
      ;
      value.fields.z =
           (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).limitMaximum;
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector((UnityEngine_Material_o *)pUVar9,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar10 = (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).adaptRenderTex;
      pUVar12 = pUVar9;
      if (pUVar10 != (UnityEngine_RenderTexture_array *)0x0) {
        uVar1 = (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).curAdaptIndex;
        if ((uint)pUVar10->max_length <= uVar1) goto label_0458195f;
        pUVar3 = pUVar10->m_Items[(int)uVar1];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar3,(MethodInfo *)0x0);
        pUVar12 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)0x0;
        pMVar11 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar10 = (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).adaptRenderTex;
        if (pUVar10 != (UnityEngine_RenderTexture_array *)0x0) {
          uVar1 = (uint)pUVar10->max_length;
          if ((uVar5 < uVar1) &&
             (uVar2 = (((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00)->fields).
                      curAdaptIndex, uVar2 < uVar1)) {
            source_00 = (UnityEngine_Texture_o *)pUVar10->m_Items[(int)uVar5];
            pUVar3 = pUVar10->m_Items[(int)uVar2];
            pUVar8 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                               ((UnityStandardAssets_ImageEffects_ContrastStretch_o *)__this_00,pMVar11);
            UnityEngine_Graphics__Blit_4dc2ad0(source_00,pUVar3,pUVar8,(MethodInfo *)0x0);
            return;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  (pUVar12->fields).adaptationSpeed = 0.02;
  (pUVar12->fields).limitMinimum = 0.2;
  (pUVar12->fields).limitMaximum = 0.6;
  pUVar10 = (UnityEngine_RenderTexture_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  (pUVar12->fields).adaptRenderTex = pUVar10;
  il2cpp_runtime_helper_022b4080(&(pUVar12->fields).adaptRenderTex);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar12,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$CalculateAdaptation
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, UnityEngine_Texture_o* curTexture, const MethodInfo* method);
// 0x45817a0

void UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,UnityEngine_Texture_o *curTexture,
               MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UnityEngine_RenderTexture_o *pUVar4;
  UnityEngine_Texture_o *source;
  UnityEngine_Material_o *pUVar5;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *__this_00;
  UnityEngine_RenderTexture_array *pUVar6;
  MethodInfo *pMVar7;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  UnityStandardAssets_ImageEffects_ContrastStretch_o *__this_02;
  float fVar8;
  float fVar9;
  UnityEngine_Vector4_o value;
  
  pMVar7 = (MethodInfo *)curTexture;
  if (g_data_057af0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_CurTex");
    il2cpp_runtime_helper_023445d0();
    g_data_057af0cf = '\x01';
  }
  uVar1 = (__this->fields).curAdaptIndex;
  (__this->fields).curAdaptIndex = (uVar1 + 1) - ((uVar1 - ((int)(uVar1 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar9 = (__this->fields).adaptationSpeed;
  __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar9 = powf(__this_01,1.0 - fVar9,fVar8 * 30.0,pMVar7);
  __this_02 = __this;
  pUVar5 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt(__this,pMVar7);
  if (pUVar5 != (UnityEngine_Material_o *)0x0) {
    pMVar7 = "_CurTex";
    UnityEngine_Material__SetTexture(pUVar5,(System_String_o *)"_CurTex",curTexture,(MethodInfo *)0x0);
    __this_02 = __this;
    __this_00 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)
                UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt(__this,pMVar7);
    if (__this_00 != (UnityStandardAssets_ImageEffects_ContrastStretch_o *)0x0) {
      fVar9 = 1.0 - fVar9;
      fVar8 = 1.0;
      if (fVar9 <= 1.0) {
        fVar8 = fVar9;
      }
      value.fields.y = (__this->fields).limitMinimum;
      value.fields.x = (float)(~-(uint)(0.01 <= fVar9) & 0x3c23d70a | (uint)fVar8 & -(uint)(0.01 <= fVar9));
      value.fields.z = (__this->fields).limitMaximum;
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector
                ((UnityEngine_Material_o *)__this_00,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).adaptRenderTex;
      __this_02 = __this_00;
      if (pUVar6 != (UnityEngine_RenderTexture_array *)0x0) {
        uVar2 = (__this->fields).curAdaptIndex;
        if ((uint)pUVar6->max_length <= uVar2) goto label_0458195f;
        pUVar4 = pUVar6->m_Items[(int)uVar2];
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0(pUVar4,(MethodInfo *)0x0);
        __this_02 = (UnityStandardAssets_ImageEffects_ContrastStretch_o *)0x0;
        pMVar7 = (MethodInfo *)0x1;
        UnityEngine_GL__Clear_4dc38b0
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        pUVar6 = (__this->fields).adaptRenderTex;
        if (pUVar6 != (UnityEngine_RenderTexture_array *)0x0) {
          uVar2 = (uint)pUVar6->max_length;
          if ((uVar1 < uVar2) && (uVar3 = (__this->fields).curAdaptIndex, uVar3 < uVar2)) {
            source = (UnityEngine_Texture_o *)pUVar6->m_Items[(int)uVar1];
            pUVar4 = pUVar6->m_Items[(int)uVar3];
            pUVar5 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt(__this,pMVar7);
            UnityEngine_Graphics__Blit_4dc2ad0(source,pUVar4,pUVar5,(MethodInfo *)0x0);
            return;
          }
          goto label_0458195f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0458195f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  (__this_02->fields).adaptationSpeed = 0.02;
  (__this_02->fields).limitMinimum = 0.2;
  (__this_02->fields).limitMaximum = 0.6;
  pUVar6 = (UnityEngine_RenderTexture_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  (__this_02->fields).adaptRenderTex = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).adaptRenderTex);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch___ctor (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x4581970

void UnityStandardAssets_ImageEffects_ContrastStretch___ctor
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_RenderTexture_array *pUVar1;
  
  if (g_data_057af0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af0d0 = '\x01';
  }
  (__this->fields).adaptationSpeed = 0.02;
  (__this->fields).limitMinimum = 0.2;
  (__this->fields).limitMaximum = 0.6;
  pUVar1 = (UnityEngine_RenderTexture_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,2);
  (__this->fields).adaptRenderTex = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).adaptRenderTex);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


