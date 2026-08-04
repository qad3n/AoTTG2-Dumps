// Type: UnityStandardAssets.ImageEffects.ColorCorrectionLookup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ColorCorrectionLookup.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionLookup.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_ColorCorrectionLookup__CheckResources (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x457f960

bool_conflict
UnityStandardAssets_ImageEffects_ColorCorrectionLookup__CheckResources
          (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  uint uVar3;
  MethodInfo *method_00;
  ulong extraout_RAX;
  MethodInfo *in_RCX;
  undefined1 uVar5;
  ulong uVar4;
  
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar5 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar5 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar5;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).createdMaterials,
                         (UnityEngine_Material_o *)(__this->fields).shader,in_RCX);
  (__this->fields).shader = (UnityEngine_Shader_o *)method_00;
  il2cpp_runtime_helper_022b4080();
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    uVar3 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0);
    uVar4 = (ulong)uVar3;
    if ((char)uVar3 != '\0') goto label_0457fa0a;
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  uVar4 = extraout_RAX;
label_0457fa0a:
  return (bool_conflict)
         CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2));
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDisable (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x457fa20

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDisable
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Shader_o **ppUVar3;
  
  if (g_data_057af0bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0bf = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).shader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    ppUVar3 = &(__this->fields).shader;
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
    *ppUVar3 = (UnityEngine_Shader_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar3,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$OnDestroy
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDestroy (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x457fab0

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDestroy
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Material_o **ppUVar3;
  
  if (g_data_057af0c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0c0 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar3 = &(__this->fields).material;
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
  }
  *ppUVar3 = (UnityEngine_Material_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar3,0);
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$SetIdentityLut
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x457fb40

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Texture_o *__this_00;
  float fVar6;
  char cVar7;
  bool_conflict bVar8;
  uint width;
  int32_t iVar9;
  UnityEngine_Color_array *pUVar10;
  UnityEngine_Color_array *pUVar11;
  UnityEngine_Color_array *colors;
  System_String_o *pSVar12;
  System_Collections_Generic_List_object__o *__this_01;
  uint uVar13;
  long lVar14;
  UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *pUVar15;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  ulong uVar16;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_Color_o *pUVar17;
  uint uVar18;
  uint uVar19;
  UnityEngine_Color_array *pUVar20;
  UnityEngine_Color_array *pUVar21;
  MethodInfo *method_01;
  float *pfVar22;
  UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *pUVar23;
  UnityEngine_MonoBehaviour_o *__this_02;
  uint uVar24;
  float *pfVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  
  if (g_data_057af0c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture3D);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057af0c1 = '\x01';
  }
  pUVar20 = (UnityEngine_Color_array *)0x1000;
  pUVar10 = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color);
  if (pUVar10 != (UnityEngine_Color_array *)0x0) {
    pfVar25 = &pUVar10->m_Items[0xf00].fields.b;
    lVar14 = 0;
    do {
      fVar29 = (float)(int)lVar14 * 0.06666667;
      iVar26 = 0;
      pUVar20 = (UnityEngine_Color_array *)0x0;
      pfVar22 = pfVar25;
      do {
        if ((ulong)(uint)pUVar10->max_length <=
            (ulong)((long)&(((UnityEngine_Color_array *)(pUVar20->m_Items + -2))->obj).klass + lVar14)) {
label_0457ffb8:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0457ffbd;
        }
        fVar30 = (float)iVar26 * 0.06666667;
        pfVar22[-0x3c02] = fVar29;
        pfVar22[-0x3c01] = fVar30;
        pfVar22[-0x3c00] = 0.0;
        pfVar22[-0x3bff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0xe].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x3802] = fVar29;
        pfVar22[-0x3801] = fVar30;
        pfVar22[-0x3800] = 0.06666667;
        pfVar22[-0x37ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x1e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x3402] = fVar29;
        pfVar22[-0x3401] = fVar30;
        pfVar22[-0x3400] = 0.13333334;
        pfVar22[-0x33ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x2e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x3002] = fVar29;
        pfVar22[-0x3001] = fVar30;
        pfVar22[-0x3000] = 0.20000002;
        pfVar22[-0x2fff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x3e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x2c02] = fVar29;
        pfVar22[-0x2c01] = fVar30;
        pfVar22[-0x2c00] = 0.26666668;
        pfVar22[-0x2bff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x4e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x2802] = fVar29;
        pfVar22[-0x2801] = fVar30;
        pfVar22[-0x2800] = 0.33333334;
        pfVar22[-0x27ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x5e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x2402] = fVar29;
        pfVar22[-0x2401] = fVar30;
        pfVar22[-0x2400] = 0.40000004;
        pfVar22[-0x23ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x6e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x2002] = fVar29;
        pfVar22[-0x2001] = fVar30;
        pfVar22[-0x2000] = 0.4666667;
        pfVar22[-0x1fff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x7e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x1c02] = fVar29;
        pfVar22[-0x1c01] = fVar30;
        pfVar22[-0x1c00] = 0.53333336;
        pfVar22[-0x1bff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x8e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x1802] = fVar29;
        pfVar22[-0x1801] = fVar30;
        pfVar22[-0x1800] = 0.6;
        pfVar22[-0x17ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0x9e].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x1402] = fVar29;
        pfVar22[-0x1401] = fVar30;
        pfVar22[-0x1400] = 0.6666667;
        pfVar22[-0x13ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0xae].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x1002] = fVar29;
        pfVar22[-0x1001] = fVar30;
        pfVar22[-0x1000] = 0.73333335;
        pfVar22[-0xfff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0xbe].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0xc02] = fVar29;
        pfVar22[-0xc01] = fVar30;
        pfVar22[-0xc00] = 0.8000001;
        pfVar22[-0xbff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0xce].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x802] = fVar29;
        pfVar22[-0x801] = fVar30;
        pfVar22[-0x800] = 0.86666673;
        pfVar22[-0x7ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0xde].fields.r + lVar14))
        goto label_0457ffb8;
        pfVar22[-0x402] = fVar29;
        pfVar22[-0x401] = fVar30;
        pfVar22[-0x400] = 0.9333334;
        pfVar22[-0x3ff] = 1.0;
        if ((ulong)(uint)pUVar10->max_length <= (ulong)((long)&pUVar20->m_Items[0xee].fields.r + lVar14))
        goto label_0457ffb8;
        pUVar20 = (UnityEngine_Color_array *)&pUVar20->bounds;
        iVar26 = iVar26 + 1;
        ((UnityEngine_Color_Fields *)(pfVar22 + -2))->r = fVar29;
        pfVar22[-1] = fVar30;
        *pfVar22 = 1.0;
        pfVar22[1] = 1.0;
        pfVar22 = pfVar22 + 0x40;
      } while (pUVar20 != (UnityEngine_Color_array *)0x100);
      lVar14 = lVar14 + 1;
      pfVar25 = pfVar25 + 4;
    } while (lVar14 != 0x10);
    pUVar3 = (UnityEngine_Object_o *)(__this->fields).material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar1 = &(__this->fields).material;
    bVar8 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    }
    pUVar20 = (UnityEngine_Color_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture3D);
    UnityEngine_Texture3D___ctor_4ddb6d0
              ((UnityEngine_Texture3D_o *)pUVar20,0x10,0x10,0x10,5,0,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_Material_o *)pUVar20;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    if ((UnityEngine_Texture3D_o *)*ppUVar1 != (UnityEngine_Texture3D_o *)0x0) {
      UnityEngine_Texture3D__SetPixels_4ddb0a0((UnityEngine_Texture3D_o *)*ppUVar1,pUVar10,(MethodInfo *)0x0);
      pUVar20 = pUVar10;
      if ((UnityEngine_Texture3D_o *)*ppUVar1 != (UnityEngine_Texture3D_o *)0x0) {
        UnityEngine_Texture3D__Apply_4ddb9c0((UnityEngine_Texture3D_o *)*ppUVar1,(MethodInfo *)0x0);
        (__this->fields).converted3DLut = "";
        il2cpp_runtime_helper_022b4080(&(__this->fields).converted3DLut);
        return;
      }
    }
  }
label_0457ffbd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0c2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar15 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
  pUVar10 = pUVar20;
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar20,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  if (pUVar20 != (UnityEngine_Color_array *)0x0) {
    pIVar4 = (pUVar20->obj).klass;
    (*pIVar4->vtable[7].methodPtr)(pUVar20,pIVar4->vtable[7].method);
    pIVar4 = (pUVar20->obj).klass;
    iVar26 = (*pIVar4->vtable[5].methodPtr)(pUVar20,pIVar4->vtable[5].method);
    fVar29 = (float)iVar26;
    if (fVar29 < 0.0) {
      fVar29 = sqrtf(fVar29);
    }
    else {
      fVar29 = SQRT(fVar29);
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    floorf(fVar29);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture3D);
    il2cpp_runtime_helper_023445d0(&"The given 2D texture ");
    il2cpp_runtime_helper_023445d0(&"Couldn't color correct with 3D LUT texture. Image Effect will be disabled.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&" cannot be used as a 3D LUT.");
    g_data_057af0c3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar20 = (UnityEngine_Color_array *)0x0;
  pUVar23 = pUVar15;
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("Couldn't color correct with 3D LUT texture. Image Effect will be disabled.",(MethodInfo *)0x0);
    return;
  }
  if (pUVar15 != (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0) {
    (*(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._5_get_width.methodPtr)
              (pUVar15,(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._5_get_width.method);
    (*(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.methodPtr)
              (pUVar15,(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.method);
    pUVar23 = pUVar15;
    width = (*(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.methodPtr)
                      (pUVar15,(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.method);
    bVar8 = UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions
                      (pUVar23,(UnityEngine_Texture2D_o *)pUVar15,method_00);
    if ((char)bVar8 == '\0') {
      pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_3af7150("The given 2D texture ",pSVar12," cannot be used as a 3D LUT.",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
      *(UnityEngine_Texture3D_o **)&pUVar10->m_Items[2].fields.b = "";
label_04580426:
      il2cpp_runtime_helper_022b4080(&pUVar10->m_Items[2].fields.b);
      return;
    }
    pUVar20 = (UnityEngine_Color_array *)0x0;
    pUVar11 = UnityEngine_Texture2D__GetPixels_4dd9ca0((UnityEngine_Texture2D_o *)pUVar15,(MethodInfo *)0x0);
    pUVar23 = pUVar15;
    if (pUVar11 != (UnityEngine_Color_array *)0x0) {
      pUVar21 = (UnityEngine_Color_array *)(ulong)(uint)pUVar11->max_length;
      colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color);
      if (0 < (int)width) {
        iVar26 = width * width;
        uVar24 = (width - 1) * iVar26;
        pUVar23 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
        do {
          iVar27 = (int)pUVar23;
          uVar28 = 0;
          pUVar20 = pUVar21;
          uVar18 = uVar24;
          do {
            pUVar21 = (UnityEngine_Color_array *)(ulong)uVar18;
            if (colors == (UnityEngine_Color_array *)0x0) {
              if (iVar26 * (width + ~uVar28) + iVar27 < (uint)pUVar11->max_length) goto label_0458044b;
              goto label_04580450;
            }
            pUVar15 = pUVar23;
            uVar16 = (ulong)width;
            do {
              uVar19 = (uint)pUVar21;
              pUVar20 = pUVar21;
              if (((uint)pUVar11->max_length <= uVar19) ||
                 (uVar13 = (uint)pUVar15, (uint)colors->max_length <= uVar13)) goto label_04580450;
              pUVar17 = pUVar11->m_Items + (int)uVar19;
              fVar29 = (pUVar17->fields).g;
              fVar30 = (pUVar17->fields).b;
              fVar6 = (pUVar17->fields).a;
              pUVar2 = colors->m_Items + (int)uVar13;
              (pUVar2->fields).r = (pUVar17->fields).r;
              (pUVar2->fields).g = fVar29;
              (pUVar2->fields).b = fVar30;
              (pUVar2->fields).a = fVar6;
              pUVar15 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)(ulong)(uVar13 + iVar26);
              pUVar21 = (UnityEngine_Color_array *)(ulong)(uVar19 + width);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            uVar28 = uVar28 + 1;
            pUVar23 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)
                      (ulong)((int)pUVar23 + width);
            uVar18 = uVar18 - iVar26;
            pUVar20 = pUVar21;
          } while (uVar28 != width);
          uVar18 = iVar27 + 1;
          pUVar23 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)(ulong)uVar18;
          uVar24 = uVar24 + 1;
        } while (uVar18 != width);
      }
      pUVar3 = *(UnityEngine_Object_o **)&pUVar10->m_Items[2].fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar17 = pUVar10->m_Items + 2;
      bVar8 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pUVar3 = *(UnityEngine_Object_o **)&pUVar17->fields;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
      }
      pUVar20 = (UnityEngine_Color_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture3D);
      UnityEngine_Texture3D___ctor_4ddb6d0
                ((UnityEngine_Texture3D_o *)pUVar20,width,width,width,5,0,(MethodInfo *)0x0);
      *(UnityEngine_Color_array **)&pUVar17->fields = pUVar20;
      il2cpp_runtime_helper_022b4080(pUVar17);
      pUVar23 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
      if (*(UnityEngine_Texture3D_o **)&pUVar17->fields != (UnityEngine_Texture3D_o *)0x0) {
        UnityEngine_Texture3D__SetPixels_4ddb0a0
                  (*(UnityEngine_Texture3D_o **)&pUVar17->fields,colors,(MethodInfo *)0x0);
        pUVar23 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
        pUVar20 = colors;
        if (*(UnityEngine_Texture3D_o **)&pUVar17->fields != (UnityEngine_Texture3D_o *)0x0) {
          UnityEngine_Texture3D__Apply_4ddb9c0
                    (*(UnityEngine_Texture3D_o **)&pUVar17->fields,(MethodInfo *)0x0);
          pUVar10->m_Items[2].fields.b = (float)(int)extraout_RDX;
          pUVar10->m_Items[2].fields.a = (float)(int)((ulong)extraout_RDX >> 0x20);
          goto label_04580426;
        }
      }
    }
  }
label_0458044b:
  il2cpp_runtime_helper_022b2c90();
label_04580450:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ClutTex");
    il2cpp_runtime_helper_023445d0(&"_Scale");
    il2cpp_runtime_helper_023445d0(&"_Offset");
    g_data_057af0c4 = '\x01';
  }
  cVar7 = (*(pUVar23->klass->vtable)._4_CheckResources.methodPtr)();
  if ((cVar7 != '\0') &&
     (bVar8 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0), (char)bVar8 != '\0')) {
    pUVar3 = (UnityEngine_Object_o *)(pUVar23->fields).material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut(pUVar23,method_01);
    }
    pUVar5 = (pUVar23->fields).material;
    if (pUVar5 != (UnityEngine_Material_o *)0x0) {
      iVar26 = (*(code *)pUVar5->klass[1]._1.name)(pUVar5,pUVar5->klass[1]._1.namespaze);
      __this_00 = (UnityEngine_Texture_o *)(pUVar23->fields).material;
      if (__this_00 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_Material_o *)(pUVar23->fields).shader;
        if (pUVar5 != (UnityEngine_Material_o *)0x0) {
          fVar29 = (float)iVar26;
          UnityEngine_Material__SetFloat(pUVar5,"_Scale",(float)(iVar26 + -1) / fVar29,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Material_o *)(pUVar23->fields).shader;
          if (pUVar5 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetFloat(pUVar5,"_Offset",1.0 / (fVar29 + fVar29),(MethodInfo *)0x0);
            pUVar5 = (UnityEngine_Material_o *)(pUVar23->fields).shader;
            if (pUVar5 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetTexture
                        (pUVar5,"_ClutTex",(UnityEngine_Texture_o *)(pUVar23->fields).material,
                         (MethodInfo *)0x0);
              pUVar5 = (UnityEngine_Material_o *)(pUVar23->fields).shader;
              iVar9 = UnityEngine_QualitySettings__get_activeColorSpace((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2a60
                        ((UnityEngine_Texture_o *)pUVar20,dest,pUVar5,(uint)(iVar9 == 1),(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0c5 == '\0') {
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057af0c5 = '\x01';
    }
    __this_02[2].monitor = "";
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor);
    if (g_data_057af0ed == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      g_data_057af0ed = '\x01';
    }
    *(undefined1 *)&__this_02[1].klass = 1;
    *(undefined1 *)((long)&__this_02[1].klass + 2) = 1;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Material);
    __this_02[1].monitor = __this_01;
    il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
    UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)pUVar20,dest,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$ValidDimensions
// il2cpp: bool UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, UnityEngine_Texture2D_o* tex2d, const MethodInfo* method);
// 0x457ffd0

bool_conflict
UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions
          (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,UnityEngine_Texture2D_o *tex2d,
          MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Texture_o *__this_00;
  float fVar5;
  float fVar6;
  char cVar7;
  bool_conflict bVar8;
  int iVar9;
  int iVar10;
  uint width;
  bool_conflict extraout_EAX;
  int32_t iVar11;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  UnityEngine_Color_array *pUVar12;
  UnityEngine_Color_array *colors;
  UnityEngine_Color_array *source;
  System_String_o *pSVar13;
  System_Collections_Generic_List_object__o *__this_01;
  uint uVar14;
  UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *pUVar15;
  UnityEngine_Texture2D_c *extraout_RDX;
  MethodInfo *method_00;
  ulong uVar16;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_Texture2D_Fields *pUVar17;
  uint uVar18;
  uint uVar19;
  UnityEngine_Color_array *pUVar20;
  MethodInfo *method_01;
  UnityEngine_Texture2D_o *pUVar21;
  UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *pUVar22;
  UnityEngine_MonoBehaviour_o *__this_02;
  uint uVar23;
  uint uVar24;
  float fVar25;
  
  if (g_data_057af0c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0c2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar15 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
  pUVar21 = tex2d;
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)tex2d,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return 0;
  }
  if (tex2d != (UnityEngine_Texture2D_o *)0x0) {
    iVar9 = (*(tex2d->klass->vtable)._7_get_height.methodPtr)
                      (tex2d,(tex2d->klass->vtable)._7_get_height.method);
    iVar10 = (*(tex2d->klass->vtable)._5_get_width.methodPtr)
                       (tex2d,(tex2d->klass->vtable)._5_get_width.method);
    fVar25 = (float)iVar10;
    if (fVar25 < 0.0) {
      fVar25 = sqrtf(fVar25);
    }
    else {
      fVar25 = SQRT(fVar25);
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar25 = floorf(fVar25);
    return CONCAT31((int3)((uint)(int)fVar25 >> 8),iVar9 == (int)fVar25);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture3D);
    il2cpp_runtime_helper_023445d0(&"The given 2D texture ");
    il2cpp_runtime_helper_023445d0(&"Couldn't color correct with 3D LUT texture. Image Effect will be disabled.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&" cannot be used as a 3D LUT.");
    g_data_057af0c3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (UnityEngine_Color_array *)0x0;
  pUVar22 = pUVar15;
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("Couldn't color correct with 3D LUT texture. Image Effect will be disabled.",(MethodInfo *)0x0);
    return extraout_EAX;
  }
  if (pUVar15 != (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0) {
    (*(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._5_get_width.methodPtr)
              (pUVar15,(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._5_get_width.method);
    (*(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.methodPtr)
              (pUVar15,(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.method);
    pUVar22 = pUVar15;
    width = (*(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.methodPtr)
                      (pUVar15,(((UnityEngine_Texture2D_c *)pUVar15->klass)->vtable)._7_get_height.method);
    bVar8 = UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions
                      (pUVar22,(UnityEngine_Texture2D_o *)pUVar15,method_00);
    if ((char)bVar8 == '\0') {
      pSVar13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3af7150("The given 2D texture ",pSVar13," cannot be used as a 3D LUT.",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
      pUVar21[3].klass = "";
label_04580426:
      bVar8 = il2cpp_runtime_helper_022b4080(pUVar21 + 3);
      return bVar8;
    }
    source = (UnityEngine_Color_array *)0x0;
    pUVar12 = UnityEngine_Texture2D__GetPixels_4dd9ca0((UnityEngine_Texture2D_o *)pUVar15,(MethodInfo *)0x0);
    pUVar22 = pUVar15;
    if (pUVar12 != (UnityEngine_Color_array *)0x0) {
      pUVar20 = (UnityEngine_Color_array *)(ulong)(uint)pUVar12->max_length;
      colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color);
      if (0 < (int)width) {
        iVar9 = width * width;
        uVar23 = (width - 1) * iVar9;
        pUVar22 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
        do {
          iVar10 = (int)pUVar22;
          uVar24 = 0;
          source = pUVar20;
          uVar18 = uVar23;
          do {
            pUVar20 = (UnityEngine_Color_array *)(ulong)uVar18;
            if (colors == (UnityEngine_Color_array *)0x0) {
              if (iVar9 * (width + ~uVar24) + iVar10 < (uint)pUVar12->max_length) goto label_0458044b;
              goto label_04580450;
            }
            pUVar15 = pUVar22;
            uVar16 = (ulong)width;
            do {
              uVar19 = (uint)pUVar20;
              source = pUVar20;
              if (((uint)pUVar12->max_length <= uVar19) ||
                 (uVar14 = (uint)pUVar15, (uint)colors->max_length <= uVar14)) goto label_04580450;
              pUVar1 = pUVar12->m_Items + (int)uVar19;
              fVar25 = (pUVar1->fields).g;
              fVar5 = (pUVar1->fields).b;
              fVar6 = (pUVar1->fields).a;
              pUVar2 = colors->m_Items + (int)uVar14;
              (pUVar2->fields).r = (pUVar1->fields).r;
              (pUVar2->fields).g = fVar25;
              (pUVar2->fields).b = fVar5;
              (pUVar2->fields).a = fVar6;
              pUVar15 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)(ulong)(uVar14 + iVar9);
              pUVar20 = (UnityEngine_Color_array *)(ulong)(uVar19 + width);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            uVar24 = uVar24 + 1;
            pUVar22 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)
                      (ulong)((int)pUVar22 + width);
            uVar18 = uVar18 - iVar9;
            source = pUVar20;
          } while (uVar24 != width);
          uVar18 = iVar10 + 1;
          pUVar22 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)(ulong)uVar18;
          uVar23 = uVar23 + 1;
        } while (uVar18 != width);
      }
      pUVar3 = (UnityEngine_Object_o *)pUVar21[2].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar17 = &pUVar21[2].fields;
      bVar8 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pUVar3 = (UnityEngine_Object_o *)pUVar17->m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
      }
      source = (UnityEngine_Color_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture3D);
      UnityEngine_Texture3D___ctor_4ddb6d0
                ((UnityEngine_Texture3D_o *)source,width,width,width,5,0,(MethodInfo *)0x0);
      pUVar17->m_CachedPtr = (intptr_t)source;
      il2cpp_runtime_helper_022b4080(pUVar17);
      pUVar22 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
      if ((UnityEngine_Texture3D_o *)pUVar17->m_CachedPtr != (UnityEngine_Texture3D_o *)0x0) {
        UnityEngine_Texture3D__SetPixels_4ddb0a0
                  ((UnityEngine_Texture3D_o *)pUVar17->m_CachedPtr,colors,(MethodInfo *)0x0);
        pUVar22 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
        source = colors;
        if ((UnityEngine_Texture3D_o *)pUVar17->m_CachedPtr != (UnityEngine_Texture3D_o *)0x0) {
          UnityEngine_Texture3D__Apply_4ddb9c0
                    ((UnityEngine_Texture3D_o *)pUVar17->m_CachedPtr,(MethodInfo *)0x0);
          pUVar21[3].klass = extraout_RDX;
          goto label_04580426;
        }
      }
    }
  }
label_0458044b:
  il2cpp_runtime_helper_022b2c90();
label_04580450:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ClutTex");
    il2cpp_runtime_helper_023445d0(&"_Scale");
    il2cpp_runtime_helper_023445d0(&"_Offset");
    g_data_057af0c4 = '\x01';
  }
  cVar7 = (*(pUVar22->klass->vtable)._4_CheckResources.methodPtr)();
  if ((cVar7 != '\0') &&
     (bVar8 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0), (char)bVar8 != '\0')) {
    pUVar3 = (UnityEngine_Object_o *)(pUVar22->fields).material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut(pUVar22,method_01);
    }
    pUVar4 = (pUVar22->fields).material;
    if (pUVar4 != (UnityEngine_Material_o *)0x0) {
      iVar9 = (*(code *)pUVar4->klass[1]._1.name)(pUVar4,pUVar4->klass[1]._1.namespaze);
      __this_00 = (UnityEngine_Texture_o *)(pUVar22->fields).material;
      if (__this_00 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Material_o *)(pUVar22->fields).shader;
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          fVar25 = (float)iVar9;
          UnityEngine_Material__SetFloat(pUVar4,"_Scale",(float)(iVar9 + -1) / fVar25,(MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Material_o *)(pUVar22->fields).shader;
          if (pUVar4 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetFloat(pUVar4,"_Offset",1.0 / (fVar25 + fVar25),(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(pUVar22->fields).shader;
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetTexture
                        (pUVar4,"_ClutTex",(UnityEngine_Texture_o *)(pUVar22->fields).material,
                         (MethodInfo *)0x0);
              pUVar4 = (UnityEngine_Material_o *)(pUVar22->fields).shader;
              iVar11 = UnityEngine_QualitySettings__get_activeColorSpace((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2a60
                        ((UnityEngine_Texture_o *)source,dest,pUVar4,(uint)(iVar11 == 1),(MethodInfo *)0x0);
              return extraout_EAX_00;
            }
          }
        }
      }
    }
    __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0c5 == '\0') {
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057af0c5 = '\x01';
    }
    __this_02[2].monitor = "";
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor);
    if (g_data_057af0ed == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      g_data_057af0ed = '\x01';
    }
    *(undefined1 *)&__this_02[1].klass = 1;
    *(undefined1 *)((long)&__this_02[1].klass + 2) = 1;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Material);
    __this_02[1].monitor = __this_01;
    il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
    UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,dest,(MethodInfo *)0x0);
  return extraout_EAX_01;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$Convert
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__Convert (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, UnityEngine_Texture2D_o* temp2DTex, System_String_o* path, const MethodInfo* method);
// 0x45800e0

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__Convert
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,
               UnityEngine_Texture2D_o *temp2DTex,System_String_o *path,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Texture_o *__this_00;
  float fVar5;
  float fVar6;
  char cVar7;
  bool_conflict bVar8;
  uint width;
  int iVar9;
  int32_t iVar10;
  UnityEngine_Color_array *pUVar11;
  UnityEngine_Color_array *colors;
  UnityEngine_Color_array *source;
  System_String_o *pSVar12;
  System_Collections_Generic_List_object__o *__this_01;
  uint uVar13;
  UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *pUVar14;
  MethodInfo *method_00;
  ulong uVar15;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_Material_o **ppUVar16;
  uint uVar17;
  uint uVar18;
  UnityEngine_Color_array *pUVar19;
  MethodInfo *method_01;
  UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *pUVar20;
  UnityEngine_MonoBehaviour_o *__this_02;
  uint uVar21;
  int iVar22;
  uint uVar23;
  float fVar24;
  
  if (g_data_057af0c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture3D);
    il2cpp_runtime_helper_023445d0(&"The given 2D texture ");
    il2cpp_runtime_helper_023445d0(&"Couldn't color correct with 3D LUT texture. Image Effect will be disabled.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&" cannot be used as a 3D LUT.");
    g_data_057af0c3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (UnityEngine_Color_array *)0x0;
  pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)temp2DTex;
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)temp2DTex,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("Couldn't color correct with 3D LUT texture. Image Effect will be disabled.",(MethodInfo *)0x0);
    return;
  }
  if (temp2DTex != (UnityEngine_Texture2D_o *)0x0) {
    (*(temp2DTex->klass->vtable)._5_get_width.methodPtr)
              (temp2DTex,(temp2DTex->klass->vtable)._5_get_width.method);
    (*(temp2DTex->klass->vtable)._7_get_height.methodPtr)
              (temp2DTex,(temp2DTex->klass->vtable)._7_get_height.method);
    pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)temp2DTex;
    width = (*(temp2DTex->klass->vtable)._7_get_height.methodPtr)
                      (temp2DTex,(temp2DTex->klass->vtable)._7_get_height.method);
    bVar8 = UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions
                      (pUVar20,temp2DTex,method_00);
    if ((char)bVar8 == '\0') {
      pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)temp2DTex,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_3af7150("The given 2D texture ",pSVar12," cannot be used as a 3D LUT.",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
      (__this->fields).converted3DLut = "";
label_04580426:
      il2cpp_runtime_helper_022b4080(&(__this->fields).converted3DLut);
      return;
    }
    source = (UnityEngine_Color_array *)0x0;
    pUVar11 = UnityEngine_Texture2D__GetPixels_4dd9ca0(temp2DTex,(MethodInfo *)0x0);
    pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)temp2DTex;
    if (pUVar11 != (UnityEngine_Color_array *)0x0) {
      pUVar19 = (UnityEngine_Color_array *)(ulong)(uint)pUVar11->max_length;
      colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color);
      if (0 < (int)width) {
        iVar9 = width * width;
        uVar21 = (width - 1) * iVar9;
        pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
        do {
          iVar22 = (int)pUVar20;
          uVar23 = 0;
          source = pUVar19;
          uVar17 = uVar21;
          do {
            pUVar19 = (UnityEngine_Color_array *)(ulong)uVar17;
            if (colors == (UnityEngine_Color_array *)0x0) {
              if (iVar9 * (width + ~uVar23) + iVar22 < (uint)pUVar11->max_length) goto label_0458044b;
              goto label_04580450;
            }
            pUVar14 = pUVar20;
            uVar15 = (ulong)width;
            do {
              uVar18 = (uint)pUVar19;
              source = pUVar19;
              if (((uint)pUVar11->max_length <= uVar18) ||
                 (uVar13 = (uint)pUVar14, (uint)colors->max_length <= uVar13)) goto label_04580450;
              pUVar1 = pUVar11->m_Items + (int)uVar18;
              fVar24 = (pUVar1->fields).g;
              fVar5 = (pUVar1->fields).b;
              fVar6 = (pUVar1->fields).a;
              pUVar2 = colors->m_Items + (int)uVar13;
              (pUVar2->fields).r = (pUVar1->fields).r;
              (pUVar2->fields).g = fVar24;
              (pUVar2->fields).b = fVar5;
              (pUVar2->fields).a = fVar6;
              pUVar14 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)(ulong)(uVar13 + iVar9);
              pUVar19 = (UnityEngine_Color_array *)(ulong)(uVar18 + width);
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            uVar23 = uVar23 + 1;
            pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)
                      (ulong)((int)pUVar20 + width);
            uVar17 = uVar17 - iVar9;
            source = pUVar19;
          } while (uVar23 != width);
          uVar17 = iVar22 + 1;
          pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)(ulong)uVar17;
          uVar21 = uVar21 + 1;
        } while (uVar17 != width);
      }
      pUVar3 = (UnityEngine_Object_o *)(__this->fields).material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppUVar16 = &(__this->fields).material;
      bVar8 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pUVar3 = (UnityEngine_Object_o *)*ppUVar16;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
      }
      source = (UnityEngine_Color_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture3D);
      UnityEngine_Texture3D___ctor_4ddb6d0
                ((UnityEngine_Texture3D_o *)source,width,width,width,5,0,(MethodInfo *)0x0);
      *ppUVar16 = (UnityEngine_Material_o *)source;
      il2cpp_runtime_helper_022b4080(ppUVar16);
      pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
      if ((UnityEngine_Texture3D_o *)*ppUVar16 != (UnityEngine_Texture3D_o *)0x0) {
        UnityEngine_Texture3D__SetPixels_4ddb0a0
                  ((UnityEngine_Texture3D_o *)*ppUVar16,colors,(MethodInfo *)0x0);
        pUVar20 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)0x0;
        source = colors;
        if ((UnityEngine_Texture3D_o *)*ppUVar16 != (UnityEngine_Texture3D_o *)0x0) {
          UnityEngine_Texture3D__Apply_4ddb9c0((UnityEngine_Texture3D_o *)*ppUVar16,(MethodInfo *)0x0);
          (__this->fields).converted3DLut = (UnityEngine_Texture3D_o *)path;
          goto label_04580426;
        }
      }
    }
  }
label_0458044b:
  il2cpp_runtime_helper_022b2c90();
label_04580450:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ClutTex");
    il2cpp_runtime_helper_023445d0(&"_Scale");
    il2cpp_runtime_helper_023445d0(&"_Offset");
    g_data_057af0c4 = '\x01';
  }
  cVar7 = (*(pUVar20->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar7 != '\0') {
    bVar8 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar3 = (UnityEngine_Object_o *)(pUVar20->fields).material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (MethodInfo *)0x0;
      bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut(pUVar20,method_01);
      }
      pUVar4 = (pUVar20->fields).material;
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        iVar9 = (*(code *)pUVar4->klass[1]._1.name)(pUVar4,pUVar4->klass[1]._1.namespaze);
        __this_00 = (UnityEngine_Texture_o *)(pUVar20->fields).material;
        if (__this_00 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Material_o *)(pUVar20->fields).shader;
          if (pUVar4 != (UnityEngine_Material_o *)0x0) {
            fVar24 = (float)iVar9;
            UnityEngine_Material__SetFloat(pUVar4,"_Scale",(float)(iVar9 + -1) / fVar24,(MethodInfo *)0x0)
            ;
            pUVar4 = (UnityEngine_Material_o *)(pUVar20->fields).shader;
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat(pUVar4,"_Offset",1.0 / (fVar24 + fVar24),(MethodInfo *)0x0);
              pUVar4 = (UnityEngine_Material_o *)(pUVar20->fields).shader;
              if (pUVar4 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetTexture
                          (pUVar4,"_ClutTex",(UnityEngine_Texture_o *)(pUVar20->fields).material,
                           (MethodInfo *)0x0);
                pUVar4 = (UnityEngine_Material_o *)(pUVar20->fields).shader;
                iVar10 = UnityEngine_QualitySettings__get_activeColorSpace((MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Graphics__Blit_4dc2a60
                          ((UnityEngine_Texture_o *)source,dest,pUVar4,(uint)(iVar10 == 1),(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057af0c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057af0c5 = '\x01';
      }
      __this_02[2].monitor = "";
      il2cpp_runtime_helper_022b4080(&__this_02[2].monitor);
      if (g_data_057af0ed == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
        g_data_057af0ed = '\x01';
      }
      *(undefined1 *)&__this_02[1].klass = 1;
      *(undefined1 *)((long)&__this_02[1].klass + 2) = 1;
      __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
      System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Material);
      __this_02[1].monitor = __this_01;
      il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
      UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,dest,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnRenderImage (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4580460

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnRenderImage
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Texture_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  int32_t iVar5;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_02;
  float fVar6;
  
  if (g_data_057af0c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ClutTex");
    il2cpp_runtime_helper_023445d0(&"_Scale");
    il2cpp_runtime_helper_023445d0(&"_Offset");
    g_data_057af0c4 = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar2 != '\0') {
    bVar3 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      x = (UnityEngine_Object_o *)(__this->fields).material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut(__this,method_00);
      }
      pUVar1 = (__this->fields).material;
      if (pUVar1 != (UnityEngine_Material_o *)0x0) {
        iVar4 = (*(code *)pUVar1->klass[1]._1.name)(pUVar1,pUVar1->klass[1]._1.namespaze);
        __this_00 = (UnityEngine_Texture_o *)(__this->fields).material;
        if (__this_00 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
          pUVar1 = (UnityEngine_Material_o *)(__this->fields).shader;
          if (pUVar1 != (UnityEngine_Material_o *)0x0) {
            fVar6 = (float)iVar4;
            UnityEngine_Material__SetFloat(pUVar1,"_Scale",(float)(iVar4 + -1) / fVar6,(MethodInfo *)0x0);
            pUVar1 = (UnityEngine_Material_o *)(__this->fields).shader;
            if (pUVar1 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat(pUVar1,"_Offset",1.0 / (fVar6 + fVar6),(MethodInfo *)0x0);
              pUVar1 = (UnityEngine_Material_o *)(__this->fields).shader;
              if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetTexture
                          (pUVar1,"_ClutTex",(UnityEngine_Texture_o *)(__this->fields).material,
                           (MethodInfo *)0x0);
                pUVar1 = (UnityEngine_Material_o *)(__this->fields).shader;
                iVar5 = UnityEngine_QualitySettings__get_activeColorSpace((MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Graphics__Blit_4dc2a60
                          ((UnityEngine_Texture_o *)source,destination,pUVar1,(uint)(iVar5 == 1),
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057af0c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057af0c5 = '\x01';
      }
      __this_02[2].monitor = "";
      il2cpp_runtime_helper_022b4080(&__this_02[2].monitor);
      if (g_data_057af0ed == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
        g_data_057af0ed = '\x01';
      }
      *(undefined1 *)&__this_02[1].klass = 1;
      *(undefined1 *)((long)&__this_02[1].klass + 2) = 1;
      __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
      System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Material);
      __this_02[1].monitor = __this_01;
      il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
      UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup___ctor (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x4580670

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup___ctor
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057af0c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057af0c5 = '\x01';
  }
  (__this->fields).converted3DLut = "";
  il2cpp_runtime_helper_022b4080(&(__this->fields).converted3DLut);
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


