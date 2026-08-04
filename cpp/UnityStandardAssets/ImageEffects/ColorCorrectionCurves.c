// Type: UnityStandardAssets.ImageEffects.ColorCorrectionCurves
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ColorCorrectionCurves.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionCurves.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__Start (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x457e6b0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__Start
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._4_CheckResources.methodPtr)
            (__this,(__this->klass->vtable)._4_CheckResources.method);
  *(undefined1 *)&(__this->fields).colorCorrectionSelectiveShader = 1;
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$Awake
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__Awake (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x457e6f0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__Awake
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_ColorCorrectionCurves__CheckResources (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x457e700

bool_conflict
UnityStandardAssets_ImageEffects_ColorCorrectionCurves__CheckResources
          (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o **ppUVar1;
  UnityEngine_Texture2D_o **ppUVar2;
  UnityEngine_Object_o *exists;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  UnityEngine_AnimationCurve_o *pUVar5;
  UnityEngine_Material_o *pUVar6;
  UnityEngine_Texture2D_o *pUVar7;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  undefined1 *puVar8;
  long *plVar9;
  MethodInfo *method_00;
  UnityEngine_AnimationCurve_o *__this_00;
  UnityEngine_AnimationCurve_o *pUVar10;
  UnityEngine_AnimationCurve_c *pUVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  uint uVar14;
  uint uVar15;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  
  if (g_data_057af0bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057af0bc = '\x01';
    in_RDX = extraout_RDX;
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
             (uint)((__this->fields).selectiveToColor.fields.b == 1.4013e-45),in_RDX);
  pUVar5 = (UnityEngine_AnimationCurve_o *)
           UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (__this->fields).colorCorrectionCurvesShader,
                      (UnityEngine_Material_o *)(__this->fields).depthBlueChannel,in_RCX);
  (__this->fields).depthBlueChannel = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).depthBlueChannel,pUVar5);
  pUVar6 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).mode,(__this->fields).ccMaterial,in_RCX);
  (__this->fields).ccMaterial = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ccMaterial,pUVar6);
  pUVar6 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (__this->fields).simpleColorCorrectionCurvesShader,(__this->fields).ccDepthMaterial,
                      in_RCX);
  (__this->fields).ccDepthMaterial = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ccDepthMaterial);
  exists = (UnityEngine_Object_o *)(__this->fields).selectiveCcMaterial;
  plVar9 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_AnimationCurve_o *)&(__this->fields).selectiveCcMaterial;
  bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar7 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9090(pUVar7,0x100,4,5,0,1,(MethodInfo *)0x0);
    *(UnityEngine_Texture2D_o **)pUVar5 = pUVar7;
    il2cpp_runtime_helper_022b4080(pUVar5);
  }
  pUVar7 = (__this->fields).rgbChannelTex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).rgbChannelTex;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar7 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9090(pUVar7,0x100,4,5,0,1,(MethodInfo *)0x0);
    *ppUVar1 = pUVar7;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar7 = (__this->fields).rgbDepthChannelTex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(__this->fields).rgbDepthChannelTex;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar7 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9090(pUVar7,0x100,1,5,0,1,(MethodInfo *)0x0);
    *ppUVar2 = pUVar7;
    il2cpp_runtime_helper_022b4080(ppUVar2,pUVar7);
  }
  if (*(UnityEngine_Object_o **)pUVar5 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)pUVar5,0x34,(MethodInfo *)0x0);
    if (*ppUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar1,0x34,(MethodInfo *)0x0);
      if (*ppUVar2 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar2,0x34,(MethodInfo *)0x0);
        if (*(UnityEngine_Texture_o **)pUVar5 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode(*(UnityEngine_Texture_o **)pUVar5,1,(MethodInfo *)0x0);
          if ((UnityEngine_Texture_o *)*ppUVar1 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
            if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
              method_00 = (MethodInfo *)0x1;
              UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
              bVar4 = (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
              if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) == '\0') {
                UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
                          ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
                bVar4 = (bool_conflict)
                        CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),
                                 *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
              }
              return bVar4;
            }
          }
        }
      }
    }
  }
  __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  puVar8 = &stack0xffffffffffffffc8;
  do {
    pUVar10 = __this_00;
    *(long **)(puVar8 + -8) = plVar9;
    *(UnityEngine_AnimationCurve_o **)(puVar8 + -0x10) = pUVar5;
    *(UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o **)(puVar8 + -0x18) = __this;
    pIVar3 = (pUVar10->klass->vtable)._4_Equals.methodPtr;
    *(undefined8 *)(puVar8 + -0x70) = 0x457e9fb;
    bVar4 = (*pIVar3)();
    pUVar11 = pUVar10[2].klass;
    if (((pUVar11 == (UnityEngine_AnimationCurve_c *)0x0) || (pUVar10[2].monitor == (void *)0x0)) ||
       (pUVar10[2].fields.m_Ptr == 0)) {
      return bVar4;
    }
    fVar12 = 0.0;
    do {
      *(float *)(puVar8 + -0x5c) = fVar12;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ea3d;
      fVar12 = UnityEngine_AnimationCurve__Evaluate
                         ((UnityEngine_AnimationCurve_o *)pUVar11,fVar12,(MethodInfo *)0x0);
      *(float *)(puVar8 + -0x58) = fVar12;
      *(undefined4 *)(puVar8 + -0x54) = extraout_XMM0_Db;
      *(undefined4 *)(puVar8 + -0x50) = extraout_XMM0_Dc;
      *(undefined4 *)(puVar8 + -0x4c) = extraout_XMM0_Dd;
      pUVar5 = pUVar10[2].monitor;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar5 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ea5c;
      fVar12 = UnityEngine_AnimationCurve__Evaluate(pUVar5,*(float *)(puVar8 + -0x5c),(MethodInfo *)0x0);
      *(float *)(puVar8 + -0x48) = fVar12;
      *(undefined4 *)(puVar8 + -0x44) = extraout_XMM0_Db_00;
      *(undefined4 *)(puVar8 + -0x40) = extraout_XMM0_Dc_00;
      *(undefined4 *)(puVar8 + -0x3c) = extraout_XMM0_Dd_00;
      __this_00 = (UnityEngine_AnimationCurve_o *)pUVar10[2].fields.m_Ptr;
      if (__this_00 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ea7b;
      fVar12 = UnityEngine_AnimationCurve__Evaluate(__this_00,*(float *)(puVar8 + -0x5c),(MethodInfo *)0x0);
      *(float *)(puVar8 + -0x38) = fVar12;
      *(undefined4 *)(puVar8 + -0x34) = extraout_XMM0_Db_01;
      *(undefined4 *)(puVar8 + -0x30) = extraout_XMM0_Dc_01;
      *(undefined4 *)(puVar8 + -0x2c) = extraout_XMM0_Dd_01;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)pUVar10[5].fields.m_Ptr;
      if (__this == (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0) goto label_0457edc6;
      fVar12 = *(float *)(puVar8 + -0x58);
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      uVar14 = -(uint)(0.0 <= fVar12) & (uint)fVar13;
      *(undefined1 (*) [16])(puVar8 + -0x28) = ZEXT416(uVar14);
      *(ulong *)(puVar8 + -0x58) = CONCAT44(uVar14,uVar14);
      *(undefined8 *)(puVar8 + -0x50) = 0;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ead4;
      fVar12 = floorf(*(float *)(puVar8 + -0x5c) * 255.0);
      uVar14 = (uint)fVar12;
      plVar9 = (long *)(ulong)uVar14;
      color.fields.a = 1.0;
      color.fields.b = (float)*(undefined4 *)(puVar8 + -0x28);
      *(undefined8 *)(puVar8 + -0x70) = 0x457eafe;
      color.fields._0_8_ = *(undefined8 *)(puVar8 + -0x58);
      UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this,uVar14,0,color,(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_Texture2D_o *)pUVar10[5].fields.m_Ptr;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar7 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar12 = *(float *)(puVar8 + -0x48);
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      color_00.fields.b = -(uint)(0.0 <= fVar12) & (uint)fVar13;
      color_00.fields.a = 1.0;
      *(undefined8 *)(puVar8 + -0x70) = 0x457eb4f;
      color_00.fields.g = (float)color_00.fields.b;
      color_00.fields.r = (float)color_00.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar7,uVar14,1,color_00,(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_Texture2D_o *)pUVar10[5].fields.m_Ptr;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar7 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar12 = *(float *)(puVar8 + -0x38);
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      color_01.fields.b = -(uint)(0.0 <= fVar12) & (uint)fVar13;
      color_01.fields.a = 1.0;
      *(undefined8 *)(puVar8 + -0x70) = 0x457eba0;
      color_01.fields.g = (float)color_01.fields.b;
      color_01.fields.r = (float)color_01.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar7,uVar14,2,color_01,(MethodInfo *)0x0);
      pUVar5 = pUVar10[3].monitor;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar5 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ebba;
      fVar12 = UnityEngine_AnimationCurve__Evaluate(pUVar5,*(float *)(puVar8 + -0x5c),(MethodInfo *)0x0);
      pUVar7 = pUVar10[6].monitor;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar7 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      color_02.fields.r = -(uint)(0.0 <= fVar12) & (uint)fVar13;
      color_02.fields.a = 1.0;
      color_02.fields.b = (float)color_02.fields.r;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ec06;
      color_02.fields.g = (float)color_02.fields.r;
      UnityEngine_Texture2D__SetPixel(pUVar7,uVar14,0,color_02,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_AnimationCurve_o *)pUVar10[3].fields.m_Ptr;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar5 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ec20;
      fVar12 = UnityEngine_AnimationCurve__Evaluate(pUVar5,*(float *)(puVar8 + -0x5c),(MethodInfo *)0x0);
      *(float *)(puVar8 + -0x58) = fVar12;
      *(undefined4 *)(puVar8 + -0x54) = extraout_XMM0_Db_02;
      *(undefined4 *)(puVar8 + -0x50) = extraout_XMM0_Dc_02;
      *(undefined4 *)(puVar8 + -0x4c) = extraout_XMM0_Dd_02;
      pUVar11 = pUVar10[4].klass;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar11 == (UnityEngine_AnimationCurve_c *)0x0) goto label_0457edc6;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ec3f;
      fVar12 = UnityEngine_AnimationCurve__Evaluate
                         ((UnityEngine_AnimationCurve_o *)pUVar11,*(float *)(puVar8 + -0x5c),(MethodInfo *)0x0
                         );
      *(float *)(puVar8 + -0x48) = fVar12;
      *(undefined4 *)(puVar8 + -0x44) = extraout_XMM0_Db_03;
      *(undefined4 *)(puVar8 + -0x40) = extraout_XMM0_Dc_03;
      *(undefined4 *)(puVar8 + -0x3c) = extraout_XMM0_Dd_03;
      pUVar5 = pUVar10[4].monitor;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar5 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ec5e;
      fVar12 = UnityEngine_AnimationCurve__Evaluate(pUVar5,*(float *)(puVar8 + -0x5c),(MethodInfo *)0x0);
      *(float *)(puVar8 + -0x38) = fVar12;
      *(undefined4 *)(puVar8 + -0x34) = extraout_XMM0_Db_04;
      *(undefined4 *)(puVar8 + -0x30) = extraout_XMM0_Dc_04;
      *(undefined4 *)(puVar8 + -0x2c) = extraout_XMM0_Dd_04;
      pUVar11 = pUVar10[6].klass;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar11 == (UnityEngine_AnimationCurve_c *)0x0) goto label_0457edc6;
      fVar12 = *(float *)(puVar8 + -0x58);
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      uVar15 = -(uint)(0.0 <= fVar12) & (uint)fVar13;
      color_03.fields.a = 1.0;
      color_03.fields.b = (float)uVar15;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ecb0;
      color_03.fields.g = (float)uVar15;
      color_03.fields.r = (float)uVar15;
      UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)pUVar11,uVar14,0,color_03,(MethodInfo *)0x0);
      pUVar11 = pUVar10[6].klass;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar11 == (UnityEngine_AnimationCurve_c *)0x0) goto label_0457edc6;
      fVar12 = *(float *)(puVar8 + -0x48);
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      color_04.fields.b = -(uint)(0.0 <= fVar12) & (uint)fVar13;
      color_04.fields.a = 1.0;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ed01;
      color_04.fields.g = (float)color_04.fields.b;
      color_04.fields.r = (float)color_04.fields.b;
      UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)pUVar11,uVar14,1,color_04,(MethodInfo *)0x0);
      pUVar11 = pUVar10[6].klass;
      __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
      if (pUVar11 == (UnityEngine_AnimationCurve_c *)0x0) goto label_0457edc6;
      fVar12 = *(float *)(puVar8 + -0x38);
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      color_05.fields.b = -(uint)(0.0 <= fVar12) & (uint)fVar13;
      color_05.fields.a = 1.0;
      *(undefined8 *)(puVar8 + -0x70) = 0x457ed52;
      color_05.fields.g = (float)color_05.fields.b;
      color_05.fields.r = (float)color_05.fields.b;
      UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)pUVar11,uVar14,2,color_05,(MethodInfo *)0x0);
      fVar12 = *(float *)(puVar8 + -0x5c) + 0.003921569;
      if (1.0 < fVar12) {
        pUVar7 = (UnityEngine_Texture2D_o *)pUVar10[5].fields.m_Ptr;
        __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
        if (pUVar7 != (UnityEngine_Texture2D_o *)0x0) {
          *(undefined8 *)(puVar8 + -0x70) = 0x457ed98;
          UnityEngine_Texture2D__Apply_4dd97c0(pUVar7,(MethodInfo *)0x0);
          pUVar11 = pUVar10[6].klass;
          __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
          if (pUVar11 != (UnityEngine_AnimationCurve_c *)0x0) {
            *(undefined8 *)(puVar8 + -0x70) = 0x457edab;
            UnityEngine_Texture2D__Apply_4dd97c0((UnityEngine_Texture2D_o *)pUVar11,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
            if (pUVar10[6].monitor != (UnityEngine_Texture2D_o *)0x0) {
              UnityEngine_Texture2D__Apply_4dd97c0(pUVar10[6].monitor,(MethodInfo *)0x0);
              return extraout_EAX;
            }
          }
        }
        goto label_0457edc6;
      }
      pUVar11 = pUVar10[2].klass;
    } while (pUVar11 != (UnityEngine_AnimationCurve_c *)0x0);
    __this_00 = (UnityEngine_AnimationCurve_o *)0x0;
label_0457edc6:
    *(undefined8 *)(puVar8 + -0x70) = 0x457edcb;
    il2cpp_runtime_helper_022b2c90();
    puVar8 = puVar8 + -0x68;
    pUVar5 = pUVar10;
  } while( true );
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$UpdateParameters
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateParameters (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x457e9e0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateParameters
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  UnityEngine_AnimationCurve_o *pUVar2;
  UnityEngine_Texture2D_o *pUVar3;
  UnityEngine_Texture2D_o *unaff_RBX;
  ulong unaff_RBP;
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *pUVar4;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *unaff_R14;
  float fVar5;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  uint uVar7;
  uint uVar8;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  
  do {
    pUVar4 = __this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o **)((long)register0x00000020 + -0x10) =
         unaff_R14;
    *(UnityEngine_Texture2D_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    pIVar1 = (pUVar4->klass->vtable)._4_CheckResources.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457e9fb;
    (*pIVar1)();
    __this_00 = (pUVar4->fields).createdMaterials;
    if (((__this_00 == (System_Collections_Generic_List_Material__o *)0x0) ||
        ((pUVar4->fields).redChannel == (UnityEngine_AnimationCurve_o *)0x0)) ||
       ((pUVar4->fields).greenChannel == (UnityEngine_AnimationCurve_o *)0x0)) {
      return;
    }
    fVar5 = 0.0;
    do {
      *(float *)((long)register0x00000020 + -0x5c) = fVar5;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ea3d;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        ((UnityEngine_AnimationCurve_o *)__this_00,fVar5,(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x58) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x54) = extraout_XMM0_Db;
      *(undefined4 *)((long)register0x00000020 + -0x50) = extraout_XMM0_Dc;
      *(undefined4 *)((long)register0x00000020 + -0x4c) = extraout_XMM0_Dd;
      pUVar2 = (pUVar4->fields).redChannel;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ea5c;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x48) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x44) = extraout_XMM0_Db_00;
      *(undefined4 *)((long)register0x00000020 + -0x40) = extraout_XMM0_Dc_00;
      *(undefined4 *)((long)register0x00000020 + -0x3c) = extraout_XMM0_Dd_00;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)(pUVar4->fields).greenChannel;
      if (__this == (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ea7b;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        ((UnityEngine_AnimationCurve_o *)__this,*(float *)((long)register0x00000020 + -0x5c),
                         (MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x38) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x34) = extraout_XMM0_Db_01;
      *(undefined4 *)((long)register0x00000020 + -0x30) = extraout_XMM0_Dc_01;
      *(undefined4 *)((long)register0x00000020 + -0x2c) = extraout_XMM0_Dd_01;
      unaff_RBX = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
      if (unaff_RBX == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x58);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      uVar7 = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = ZEXT416(uVar7);
      *(ulong *)((long)register0x00000020 + -0x58) = CONCAT44(uVar7,uVar7);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ead4;
      fVar5 = floorf(*(float *)((long)register0x00000020 + -0x5c) * 255.0);
      uVar7 = (uint)fVar5;
      unaff_RBP = (ulong)uVar7;
      color.fields.a = 1.0;
      color.fields.b = (float)*(undefined4 *)((long)register0x00000020 + -0x28);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457eafe;
      color.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x58);
      UnityEngine_Texture2D__SetPixel(unaff_RBX,uVar7,0,color,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x48);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_00.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_00.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457eb4f;
      color_00.fields.g = (float)color_00.fields.b;
      color_00.fields.r = (float)color_00.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,1,color_00,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x38);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_01.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_01.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457eba0;
      color_01.fields.g = (float)color_01.fields.b;
      color_01.fields.r = (float)color_01.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,2,color_01,(MethodInfo *)0x0);
      pUVar2 = *(UnityEngine_AnimationCurve_o **)&(pUVar4->fields).useDepthCorrection;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ebba;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      pUVar3 = (pUVar4->fields).rgbDepthChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_02.fields.r = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_02.fields.a = 1.0;
      color_02.fields.b = (float)color_02.fields.r;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec06;
      color_02.fields.g = (float)color_02.fields.r;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,0,color_02,(MethodInfo *)0x0);
      pUVar2 = (pUVar4->fields).zCurve;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec20;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x58) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x54) = extraout_XMM0_Db_02;
      *(undefined4 *)((long)register0x00000020 + -0x50) = extraout_XMM0_Dc_02;
      *(undefined4 *)((long)register0x00000020 + -0x4c) = extraout_XMM0_Dd_02;
      pUVar2 = (pUVar4->fields).depthRedChannel;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec3f;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x48) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x44) = extraout_XMM0_Db_03;
      *(undefined4 *)((long)register0x00000020 + -0x40) = extraout_XMM0_Dc_03;
      *(undefined4 *)((long)register0x00000020 + -0x3c) = extraout_XMM0_Dd_03;
      pUVar2 = (pUVar4->fields).depthGreenChannel;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec5e;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x38) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x34) = extraout_XMM0_Db_04;
      *(undefined4 *)((long)register0x00000020 + -0x30) = extraout_XMM0_Dc_04;
      *(undefined4 *)((long)register0x00000020 + -0x2c) = extraout_XMM0_Dd_04;
      pUVar3 = (pUVar4->fields).rgbChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x58);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      uVar8 = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_03.fields.a = 1.0;
      color_03.fields.b = (float)uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ecb0;
      color_03.fields.g = (float)uVar8;
      color_03.fields.r = (float)uVar8;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,0,color_03,(MethodInfo *)0x0);
      pUVar3 = (pUVar4->fields).rgbChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x48);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_04.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_04.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ed01;
      color_04.fields.g = (float)color_04.fields.b;
      color_04.fields.r = (float)color_04.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,1,color_04,(MethodInfo *)0x0);
      pUVar3 = (pUVar4->fields).rgbChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x38);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_05.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_05.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ed52;
      color_05.fields.g = (float)color_05.fields.b;
      color_05.fields.r = (float)color_05.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,2,color_05,(MethodInfo *)0x0);
      fVar5 = *(float *)((long)register0x00000020 + -0x5c) + 0.003921569;
      if (1.0 < fVar5) {
        pUVar3 = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
        __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
        if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ed98;
          UnityEngine_Texture2D__Apply_4dd97c0(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (pUVar4->fields).rgbChannelTex;
          __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
          if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457edab;
            UnityEngine_Texture2D__Apply_4dd97c0(pUVar3,(MethodInfo *)0x0);
            pUVar3 = (pUVar4->fields).rgbDepthChannelTex;
            __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
            if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
              UnityEngine_Texture2D__Apply_4dd97c0(pUVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_0457edc6;
      }
      __this_00 = (pUVar4->fields).createdMaterials;
    } while (__this_00 != (System_Collections_Generic_List_Material__o *)0x0);
    __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
label_0457edc6:
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457edcb;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x68);
    unaff_R14 = pUVar4;
  } while( true );
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$UpdateTextures
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateTextures (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x457edd0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateTextures
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  UnityEngine_AnimationCurve_o *pUVar2;
  UnityEngine_Texture2D_o *pUVar3;
  UnityEngine_Texture2D_o *unaff_RBX;
  ulong unaff_RBP;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *pUVar4;
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *unaff_R14;
  float fVar5;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  uint uVar7;
  uint uVar8;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  
  do {
    pUVar4 = __this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o **)((long)register0x00000020 + -0x10) =
         unaff_R14;
    *(UnityEngine_Texture2D_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    pIVar1 = (pUVar4->klass->vtable)._4_CheckResources.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457e9fb;
    (*pIVar1)();
    __this_00 = (pUVar4->fields).createdMaterials;
    if (((__this_00 == (System_Collections_Generic_List_Material__o *)0x0) ||
        ((pUVar4->fields).redChannel == (UnityEngine_AnimationCurve_o *)0x0)) ||
       ((pUVar4->fields).greenChannel == (UnityEngine_AnimationCurve_o *)0x0)) {
      return;
    }
    fVar5 = 0.0;
    do {
      *(float *)((long)register0x00000020 + -0x5c) = fVar5;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ea3d;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        ((UnityEngine_AnimationCurve_o *)__this_00,fVar5,(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x58) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x54) = extraout_XMM0_Db;
      *(undefined4 *)((long)register0x00000020 + -0x50) = extraout_XMM0_Dc;
      *(undefined4 *)((long)register0x00000020 + -0x4c) = extraout_XMM0_Dd;
      pUVar2 = (pUVar4->fields).redChannel;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ea5c;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x48) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x44) = extraout_XMM0_Db_00;
      *(undefined4 *)((long)register0x00000020 + -0x40) = extraout_XMM0_Dc_00;
      *(undefined4 *)((long)register0x00000020 + -0x3c) = extraout_XMM0_Dd_00;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)(pUVar4->fields).greenChannel;
      if (__this == (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ea7b;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        ((UnityEngine_AnimationCurve_o *)__this,*(float *)((long)register0x00000020 + -0x5c),
                         (MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x38) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x34) = extraout_XMM0_Db_01;
      *(undefined4 *)((long)register0x00000020 + -0x30) = extraout_XMM0_Dc_01;
      *(undefined4 *)((long)register0x00000020 + -0x2c) = extraout_XMM0_Dd_01;
      unaff_RBX = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
      if (unaff_RBX == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x58);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      uVar7 = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = ZEXT416(uVar7);
      *(ulong *)((long)register0x00000020 + -0x58) = CONCAT44(uVar7,uVar7);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ead4;
      fVar5 = floorf(*(float *)((long)register0x00000020 + -0x5c) * 255.0);
      uVar7 = (uint)fVar5;
      unaff_RBP = (ulong)uVar7;
      color.fields.a = 1.0;
      color.fields.b = (float)*(undefined4 *)((long)register0x00000020 + -0x28);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457eafe;
      color.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x58);
      UnityEngine_Texture2D__SetPixel(unaff_RBX,uVar7,0,color,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x48);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_00.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_00.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457eb4f;
      color_00.fields.g = (float)color_00.fields.b;
      color_00.fields.r = (float)color_00.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,1,color_00,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x38);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_01.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_01.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457eba0;
      color_01.fields.g = (float)color_01.fields.b;
      color_01.fields.r = (float)color_01.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,2,color_01,(MethodInfo *)0x0);
      pUVar2 = *(UnityEngine_AnimationCurve_o **)&(pUVar4->fields).useDepthCorrection;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ebba;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      pUVar3 = (pUVar4->fields).rgbDepthChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_02.fields.r = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_02.fields.a = 1.0;
      color_02.fields.b = (float)color_02.fields.r;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec06;
      color_02.fields.g = (float)color_02.fields.r;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,0,color_02,(MethodInfo *)0x0);
      pUVar2 = (pUVar4->fields).zCurve;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec20;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x58) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x54) = extraout_XMM0_Db_02;
      *(undefined4 *)((long)register0x00000020 + -0x50) = extraout_XMM0_Dc_02;
      *(undefined4 *)((long)register0x00000020 + -0x4c) = extraout_XMM0_Dd_02;
      pUVar2 = (pUVar4->fields).depthRedChannel;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec3f;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x48) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x44) = extraout_XMM0_Db_03;
      *(undefined4 *)((long)register0x00000020 + -0x40) = extraout_XMM0_Dc_03;
      *(undefined4 *)((long)register0x00000020 + -0x3c) = extraout_XMM0_Dd_03;
      pUVar2 = (pUVar4->fields).depthGreenChannel;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 == (UnityEngine_AnimationCurve_o *)0x0) goto label_0457edc6;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ec5e;
      fVar5 = UnityEngine_AnimationCurve__Evaluate
                        (pUVar2,*(float *)((long)register0x00000020 + -0x5c),(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x38) = fVar5;
      *(undefined4 *)((long)register0x00000020 + -0x34) = extraout_XMM0_Db_04;
      *(undefined4 *)((long)register0x00000020 + -0x30) = extraout_XMM0_Dc_04;
      *(undefined4 *)((long)register0x00000020 + -0x2c) = extraout_XMM0_Dd_04;
      pUVar3 = (pUVar4->fields).rgbChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x58);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      uVar8 = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_03.fields.a = 1.0;
      color_03.fields.b = (float)uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ecb0;
      color_03.fields.g = (float)uVar8;
      color_03.fields.r = (float)uVar8;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,0,color_03,(MethodInfo *)0x0);
      pUVar3 = (pUVar4->fields).rgbChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x48);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_04.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_04.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ed01;
      color_04.fields.g = (float)color_04.fields.b;
      color_04.fields.r = (float)color_04.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,1,color_04,(MethodInfo *)0x0);
      pUVar3 = (pUVar4->fields).rgbChannelTex;
      __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar3 == (UnityEngine_Texture2D_o *)0x0) goto label_0457edc6;
      fVar5 = *(float *)((long)register0x00000020 + -0x38);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      color_05.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar6;
      color_05.fields.a = 1.0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ed52;
      color_05.fields.g = (float)color_05.fields.b;
      color_05.fields.r = (float)color_05.fields.b;
      UnityEngine_Texture2D__SetPixel(pUVar3,uVar7,2,color_05,(MethodInfo *)0x0);
      fVar5 = *(float *)((long)register0x00000020 + -0x5c) + 0.003921569;
      if (1.0 < fVar5) {
        pUVar3 = (UnityEngine_Texture2D_o *)(pUVar4->fields).selectiveCcMaterial;
        __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
        if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457ed98;
          UnityEngine_Texture2D__Apply_4dd97c0(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (pUVar4->fields).rgbChannelTex;
          __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
          if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457edab;
            UnityEngine_Texture2D__Apply_4dd97c0(pUVar3,(MethodInfo *)0x0);
            pUVar3 = (pUVar4->fields).rgbDepthChannelTex;
            __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
            if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
              UnityEngine_Texture2D__Apply_4dd97c0(pUVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_0457edc6;
      }
      __this_00 = (pUVar4->fields).createdMaterials;
    } while (__this_00 != (System_Collections_Generic_List_Material__o *)0x0);
    __this = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
label_0457edc6:
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x457edcb;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x68);
    unaff_R14 = pUVar4;
  } while( true );
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__OnRenderImage (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x457ede0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__OnRenderImage
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

{
  int iVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Color_o value;
  UnityEngine_Keyframe_o __this_00;
  UnityEngine_Keyframe_o __this_01;
  UnityEngine_Keyframe_o __this_02;
  UnityEngine_Keyframe_o __this_03;
  UnityEngine_Keyframe_o __this_04;
  UnityEngine_Keyframe_o __this_05;
  UnityEngine_Keyframe_o __this_06;
  UnityEngine_Keyframe_o __this_07;
  UnityEngine_Keyframe_o __this_08;
  UnityEngine_Keyframe_o __this_09;
  UnityEngine_Keyframe_o __this_10;
  UnityEngine_Keyframe_o __this_11;
  UnityEngine_Keyframe_o __this_12;
  UnityEngine_Keyframe_o __this_13;
  char cVar3;
  uint uVar4;
  int32_t iVar5;
  int32_t height;
  bool_conflict bVar6;
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this_14;
  UnityEngine_Keyframe_array *pUVar7;
  System_Collections_Generic_List_Material__o *__this_15;
  UnityEngine_AnimationCurve_o *pUVar8;
  System_Collections_Generic_List_object__o *__this_16;
  Il2CppRGCTXData *method_00;
  MethodInfo *method_01;
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this_17;
  _union_14 *method_02;
  UnityEngine_Texture_o *unaff_R12;
  UnityEngine_AnimationCurve_o *unaff_R13;
  undefined1 uVar9;
  undefined4 in_stack_fffffffffffffdc0;
  undefined4 uVar10;
  undefined4 in_stack_fffffffffffffdc4;
  undefined4 uVar11;
  undefined4 in_stack_fffffffffffffdc8;
  float fVar12;
  undefined4 in_stack_fffffffffffffdcc;
  float fVar13;
  undefined4 in_stack_fffffffffffffdd0;
  undefined4 uVar14;
  undefined8 in_stack_fffffffffffffdd4;
  undefined8 uVar15;
  _union_14 _Stack_220;
  float fStack_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  _union_14 _Stack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  _union_14 _Stack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  _union_14 _Stack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  _union_14 _Stack_1a0;
  float fStack_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  _union_14 _Stack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  _union_14 _Stack_160;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  _union_14 _Stack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  _union_14 _Stack_120;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  _union_14 _Stack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  _union_14 _Stack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  _union_14 _Stack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  _union_14 _Stack_a0;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  _union_14 _Stack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *pUStack_60;
  UnityEngine_Texture_o *pUStack_58;
  UnityEngine_AnimationCurve_o *pUStack_50;
  UnityEngine_RenderTexture_o *pUStack_48;
  UnityEngine_RenderTexture_o *pUStack_40;
  
  if (g_data_057af0bd == '\0') {
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee15;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee21;
    il2cpp_runtime_helper_023445d0(&"selColor");
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee2d;
    il2cpp_runtime_helper_023445d0(&"targetColor");
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee39;
    il2cpp_runtime_helper_023445d0(&"_RgbTex");
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee45;
    il2cpp_runtime_helper_023445d0(&"_RgbDepthTex");
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee51;
    il2cpp_runtime_helper_023445d0(&"_Saturation");
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee5d;
    il2cpp_runtime_helper_023445d0(&"_ZCurve");
    g_data_057af0bd = '\x01';
  }
  method_01 = (__this->klass->vtable)._4_CheckResources.method;
  pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee77;
  __this_17 = __this;
  cVar3 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar3 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f0b8;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  if (*(char *)&(__this->fields).colorCorrectionSelectiveShader != '\0') {
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ee90;
    __this_17 = __this;
    UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateParameters(__this,method_01);
    *(undefined1 *)&(__this->fields).colorCorrectionSelectiveShader = 0;
  }
  if (*(char *)&(__this->fields).blueChannel == '\0') {
label_0457eed4:
    unaff_R12 = (UnityEngine_Texture_o *)destination;
    if (*(char *)((long)&(__this->fields).zCurveTex + 4) != '\0') {
      if (source == (UnityEngine_RenderTexture_o *)0x0) goto label_0457f145;
      pUStack_40 = (UnityEngine_RenderTexture_o *)0x457eefc;
      iVar5 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ef11;
      height = (*(source->klass->vtable)._7_get_height.methodPtr)
                         (source,(source->klass->vtable)._7_get_height.method);
      pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ef1c;
      unaff_R12 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1e00(iVar5,height,(MethodInfo *)0x0);
    }
    if (*(char *)&(__this->fields).blueChannel == '\0') {
      pUVar8 = (__this->fields).depthBlueChannel;
      __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar8 != (UnityEngine_AnimationCurve_o *)0x0) {
        method = (MethodInfo *)0x0;
        pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f0f4;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pUVar8,"_RgbTex",
                   (UnityEngine_Texture_o *)(__this->fields).selectiveCcMaterial,(MethodInfo *)0x0);
        pUVar8 = (__this->fields).depthBlueChannel;
        __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
        if (pUVar8 != (UnityEngine_AnimationCurve_o *)0x0) {
          pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f116;
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)pUVar8,"_Saturation",*(float *)&(__this->fields).zCurveTex,
                     (MethodInfo *)0x0);
          unaff_R13 = (__this->fields).depthBlueChannel;
          iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
joined_r0x0457f12b:
          if (iVar1 == 0) {
            pUStack_40 = (UnityEngine_RenderTexture_o *)0x457efda;
            il2cpp_runtime_helper_02337ed0();
          }
          method = (MethodInfo *)0x0;
          pUStack_40 = (UnityEngine_RenderTexture_o *)0x457efea;
          UnityEngine_Graphics__Blit_4dc2ad0
                    ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)unaff_R12,
                     (UnityEngine_Material_o *)unaff_R13,(MethodInfo *)0x0);
          if (*(char *)((long)&(__this->fields).zCurveTex + 4) == '\0') {
            return;
          }
          pUVar2 = (__this->fields).ccDepthMaterial;
          __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
            value.fields.r = (__this->fields).saturation;
            value.fields.g = (float)(__this->fields).selectiveCc;
            value.fields.b = (__this->fields).selectiveFromColor.fields.r;
            value.fields.a = (__this->fields).selectiveFromColor.fields.g;
            pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f028;
            UnityEngine_Material__SetColor(pUVar2,"selColor",value,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).ccDepthMaterial;
            __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
              pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f059;
              UnityEngine_Material__SetColor
                        (pUVar2,"targetColor",
                         (UnityEngine_Color_o)
                         *(UnityEngine_Color_Fields *)&(__this->fields).selectiveFromColor.fields.b,
                         (MethodInfo *)0x0);
              pUVar2 = (__this->fields).ccDepthMaterial;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f078;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f088;
              UnityEngine_Graphics__Blit_4dc2ad0(unaff_R12,destination,pUVar2,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__ReleaseTemporary
                        ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      pUVar2 = (__this->fields).ccMaterial;
      __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        method = (MethodInfo *)0x0;
        pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ef4e;
        UnityEngine_Material__SetTexture
                  (pUVar2,"_RgbTex",(UnityEngine_Texture_o *)(__this->fields).selectiveCcMaterial,
                   (MethodInfo *)0x0);
        pUVar2 = (__this->fields).ccMaterial;
        __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          method = (MethodInfo *)0x0;
          pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ef73;
          UnityEngine_Material__SetTexture
                    (pUVar2,"_ZCurve",(UnityEngine_Texture_o *)(__this->fields).rgbDepthChannelTex,
                     (MethodInfo *)0x0);
          pUVar2 = (__this->fields).ccMaterial;
          __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
            method = (MethodInfo *)0x0;
            pUStack_40 = (UnityEngine_RenderTexture_o *)0x457ef98;
            UnityEngine_Material__SetTexture
                      (pUVar2,"_RgbDepthTex",(UnityEngine_Texture_o *)(__this->fields).rgbChannelTex,
                       (MethodInfo *)0x0);
            pUVar2 = (__this->fields).ccMaterial;
            __this_17 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0;
            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
              pUStack_40 = (UnityEngine_RenderTexture_o *)0x457efbe;
              UnityEngine_Material__SetFloat
                        (pUVar2,"_Saturation",*(float *)&(__this->fields).zCurveTex,(MethodInfo *)0x0);
              unaff_R13 = (UnityEngine_AnimationCurve_o *)(__this->fields).ccMaterial;
              iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
              goto joined_r0x0457f12b;
            }
          }
        }
      }
    }
  }
  else {
    pUStack_40 = (UnityEngine_RenderTexture_o *)0x457eeaf;
    __this_17 = __this;
    __this_14 = (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    if (__this_14 != (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *)0x0) {
      pUStack_40 = (UnityEngine_RenderTexture_o *)0x457eec5;
      uVar4 = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)__this_14,(MethodInfo *)0x0);
      pUStack_40 = (UnityEngine_RenderTexture_o *)0x457eed4;
      UnityEngine_Camera__set_depthTextureMode((UnityEngine_Camera_o *)__this_14,uVar4 | 1,(MethodInfo *)0x0);
      __this_17 = __this_14;
      goto label_0457eed4;
    }
  }
label_0457f145:
  pUStack_40 = (UnityEngine_RenderTexture_o *)0x457f14a;
  il2cpp_runtime_helper_022b2c90();
  pUStack_60 = __this;
  pUStack_58 = unaff_R12;
  pUStack_50 = unaff_R13;
  pUStack_48 = destination;
  pUStack_40 = source;
  if (g_data_057af0be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationCurve);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Keyframe);
    g_data_057af0be = '\x01';
  }
  pUVar7 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
  uStack_70 = 0;
  uStack_6c = 0;
  _Stack_80.genericMethod = (void *)0x0;
  uStack_78 = 0;
  uStack_74 = 0;
  method_02 = &_Stack_80;
  __this_00.fields.m_Value = (float)in_stack_fffffffffffffdc4;
  __this_00.fields.m_Time = (float)in_stack_fffffffffffffdc0;
  __this_00.fields.m_InTangent = (float)in_stack_fffffffffffffdc8;
  __this_00.fields.m_OutTangent = (float)in_stack_fffffffffffffdcc;
  __this_00.fields.m_WeightedMode = in_stack_fffffffffffffdd0;
  __this_00.fields.m_InWeight = (float)(int)in_stack_fffffffffffffdd4;
  __this_00.fields.m_OutWeight = (float)(int)((ulong)in_stack_fffffffffffffdd4 >> 0x20);
  UnityEngine_Keyframe___ctor(__this_00,0.0,0.0,(MethodInfo *)method_02);
  if (pUVar7 != (UnityEngine_Keyframe_array *)0x0) {
    if ((int)pUVar7->max_length != 0) {
      pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_74;
      pUVar7->m_Items[0].fields.m_WeightedMode = uStack_70;
      pUVar7->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_6c;
      pUVar7->m_Items[0].fields.m_OutWeight = (float)uStack_6c._4_4_;
      *(_union_14 *)&pUVar7->m_Items[0].fields = (void *)_Stack_80;
      pUVar7->m_Items[0].fields.m_InTangent = (float)uStack_78;
      pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_74;
      uStack_90 = 0;
      uStack_8c = 0;
      _Stack_a0.genericMethod = (void *)0x0;
      fStack_98 = 0.0;
      fStack_94 = 0.0;
      method_02 = &_Stack_a0;
      __this_01.fields.m_InTangent = (float)uStack_78;
      __this_01.fields._0_8_ = _Stack_80.genericMethod;
      __this_01.fields.m_OutTangent = (float)uStack_74;
      __this_01.fields.m_WeightedMode = uStack_70;
      __this_01.fields.m_InWeight = (float)(undefined4)uStack_6c;
      __this_01.fields.m_OutWeight = (float)uStack_6c._4_4_;
      UnityEngine_Keyframe___ctor(__this_01,1.0,1.0,(MethodInfo *)method_02);
      if (1 < (uint)pUVar7->max_length) {
        pUVar7->m_Items[1].fields.m_OutTangent = fStack_94;
        pUVar7->m_Items[1].fields.m_WeightedMode = uStack_90;
        pUVar7->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_8c;
        pUVar7->m_Items[1].fields.m_OutWeight = (float)uStack_8c._4_4_;
        pUVar7->m_Items[1].fields.m_Time = (float)_Stack_a0._0_4_;
        pUVar7->m_Items[1].fields.m_Value = (float)_Stack_a0._4_4_;
        pUVar7->m_Items[1].fields.m_InTangent = fStack_98;
        pUVar7->m_Items[1].fields.m_OutTangent = fStack_94;
        uVar10 = _Stack_a0._0_4_;
        uVar11 = _Stack_a0._4_4_;
        fVar12 = fStack_98;
        fVar13 = fStack_94;
        uVar14 = uStack_90;
        uVar15 = uStack_8c;
        __this_15 = (System_Collections_Generic_List_Material__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
        UnityEngine_AnimationCurve___ctor((UnityEngine_AnimationCurve_o *)__this_15,pUVar7,(MethodInfo *)0x0);
        (__this_17->fields).createdMaterials = __this_15;
        il2cpp_runtime_helper_022b4080(&(__this_17->fields).createdMaterials,__this_15);
        pUVar7 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
        uStack_b0 = 0;
        uStack_ac = 0;
        _Stack_c0.genericMethod = (void *)0x0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        method_02 = &_Stack_c0;
        __this_02.fields.m_Value = (float)uVar11;
        __this_02.fields.m_Time = (float)uVar10;
        __this_02.fields.m_InTangent = fVar12;
        __this_02.fields.m_OutTangent = fVar13;
        __this_02.fields.m_WeightedMode = uVar14;
        __this_02.fields.m_InWeight = (float)(int)uVar15;
        __this_02.fields.m_OutWeight = (float)(int)((ulong)uVar15 >> 0x20);
        UnityEngine_Keyframe___ctor(__this_02,0.0,0.0,(MethodInfo *)method_02);
        if (pUVar7 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
        if ((int)pUVar7->max_length != 0) {
          pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_b4;
          pUVar7->m_Items[0].fields.m_WeightedMode = uStack_b0;
          pUVar7->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_ac;
          pUVar7->m_Items[0].fields.m_OutWeight = (float)uStack_ac._4_4_;
          *(_union_14 *)&pUVar7->m_Items[0].fields = (void *)_Stack_c0;
          pUVar7->m_Items[0].fields.m_InTangent = (float)uStack_b8;
          pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_b4;
          uStack_d0 = 0;
          uStack_cc = 0;
          _Stack_e0.genericMethod = (void *)0x0;
          fStack_d8 = 0.0;
          fStack_d4 = 0.0;
          method_02 = &_Stack_e0;
          __this_03.fields.m_InTangent = (float)uStack_b8;
          __this_03.fields._0_8_ = _Stack_c0.genericMethod;
          __this_03.fields.m_OutTangent = (float)uStack_b4;
          __this_03.fields.m_WeightedMode = uStack_b0;
          __this_03.fields.m_InWeight = (float)(undefined4)uStack_ac;
          __this_03.fields.m_OutWeight = (float)uStack_ac._4_4_;
          UnityEngine_Keyframe___ctor(__this_03,1.0,1.0,(MethodInfo *)method_02);
          if (1 < (uint)pUVar7->max_length) {
            pUVar7->m_Items[1].fields.m_OutTangent = fStack_d4;
            pUVar7->m_Items[1].fields.m_WeightedMode = uStack_d0;
            pUVar7->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_cc;
            pUVar7->m_Items[1].fields.m_OutWeight = (float)uStack_cc._4_4_;
            pUVar7->m_Items[1].fields.m_Time = (float)_Stack_e0._0_4_;
            pUVar7->m_Items[1].fields.m_Value = (float)_Stack_e0._4_4_;
            pUVar7->m_Items[1].fields.m_InTangent = fStack_d8;
            pUVar7->m_Items[1].fields.m_OutTangent = fStack_d4;
            uVar10 = _Stack_e0._0_4_;
            uVar11 = _Stack_e0._4_4_;
            fVar12 = fStack_d8;
            fVar13 = fStack_d4;
            uVar14 = uStack_d0;
            uVar15 = uStack_cc;
            pUVar8 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
            UnityEngine_AnimationCurve___ctor(pUVar8,pUVar7,(MethodInfo *)0x0);
            (__this_17->fields).redChannel = pUVar8;
            il2cpp_runtime_helper_022b4080(&(__this_17->fields).redChannel,pUVar8);
            pUVar7 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
            uStack_f0 = 0;
            uStack_ec = 0;
            _Stack_100.genericMethod = (void *)0x0;
            uStack_f8 = 0;
            uStack_f4 = 0;
            method_02 = &_Stack_100;
            __this_04.fields.m_Value = (float)uVar11;
            __this_04.fields.m_Time = (float)uVar10;
            __this_04.fields.m_InTangent = fVar12;
            __this_04.fields.m_OutTangent = fVar13;
            __this_04.fields.m_WeightedMode = uVar14;
            __this_04.fields.m_InWeight = (float)(int)uVar15;
            __this_04.fields.m_OutWeight = (float)(int)((ulong)uVar15 >> 0x20);
            UnityEngine_Keyframe___ctor(__this_04,0.0,0.0,(MethodInfo *)method_02);
            if (pUVar7 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
            if ((int)pUVar7->max_length != 0) {
              pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_f4;
              pUVar7->m_Items[0].fields.m_WeightedMode = uStack_f0;
              pUVar7->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_ec;
              pUVar7->m_Items[0].fields.m_OutWeight = (float)uStack_ec._4_4_;
              *(_union_14 *)&pUVar7->m_Items[0].fields = (void *)_Stack_100;
              pUVar7->m_Items[0].fields.m_InTangent = (float)uStack_f8;
              pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_f4;
              uStack_110 = 0;
              uStack_10c = 0;
              _Stack_120.genericMethod = (void *)0x0;
              fStack_118 = 0.0;
              fStack_114 = 0.0;
              method_02 = &_Stack_120;
              __this_05.fields.m_InTangent = (float)uStack_f8;
              __this_05.fields._0_8_ = _Stack_100.genericMethod;
              __this_05.fields.m_OutTangent = (float)uStack_f4;
              __this_05.fields.m_WeightedMode = uStack_f0;
              __this_05.fields.m_InWeight = (float)(undefined4)uStack_ec;
              __this_05.fields.m_OutWeight = (float)uStack_ec._4_4_;
              UnityEngine_Keyframe___ctor(__this_05,1.0,1.0,(MethodInfo *)method_02);
              if (1 < (uint)pUVar7->max_length) {
                pUVar7->m_Items[1].fields.m_OutTangent = fStack_114;
                pUVar7->m_Items[1].fields.m_WeightedMode = uStack_110;
                pUVar7->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_10c;
                pUVar7->m_Items[1].fields.m_OutWeight = (float)uStack_10c._4_4_;
                pUVar7->m_Items[1].fields.m_Time = (float)_Stack_120._0_4_;
                pUVar7->m_Items[1].fields.m_Value = (float)_Stack_120._4_4_;
                pUVar7->m_Items[1].fields.m_InTangent = fStack_118;
                pUVar7->m_Items[1].fields.m_OutTangent = fStack_114;
                uVar10 = _Stack_120._0_4_;
                uVar11 = _Stack_120._4_4_;
                fVar12 = fStack_118;
                fVar13 = fStack_114;
                uVar14 = uStack_110;
                uVar15 = uStack_10c;
                pUVar8 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                UnityEngine_AnimationCurve___ctor(pUVar8,pUVar7,(MethodInfo *)0x0);
                (__this_17->fields).greenChannel = pUVar8;
                il2cpp_runtime_helper_022b4080(&(__this_17->fields).greenChannel,pUVar8);
                pUVar7 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                uStack_130 = 0;
                uStack_12c = 0;
                _Stack_140.genericMethod = (void *)0x0;
                uStack_138 = 0;
                uStack_134 = 0;
                method_02 = &_Stack_140;
                __this_06.fields.m_Value = (float)uVar11;
                __this_06.fields.m_Time = (float)uVar10;
                __this_06.fields.m_InTangent = fVar12;
                __this_06.fields.m_OutTangent = fVar13;
                __this_06.fields.m_WeightedMode = uVar14;
                __this_06.fields.m_InWeight = (float)(int)uVar15;
                __this_06.fields.m_OutWeight = (float)(int)((ulong)uVar15 >> 0x20);
                UnityEngine_Keyframe___ctor(__this_06,0.0,0.0,(MethodInfo *)method_02);
                if (pUVar7 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                if ((int)pUVar7->max_length != 0) {
                  pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_134;
                  pUVar7->m_Items[0].fields.m_WeightedMode = uStack_130;
                  pUVar7->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_12c;
                  pUVar7->m_Items[0].fields.m_OutWeight = (float)uStack_12c._4_4_;
                  *(_union_14 *)&pUVar7->m_Items[0].fields = (void *)_Stack_140;
                  pUVar7->m_Items[0].fields.m_InTangent = (float)uStack_138;
                  pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_134;
                  uStack_150 = 0;
                  uStack_14c = 0;
                  _Stack_160.genericMethod = (void *)0x0;
                  fStack_158 = 0.0;
                  fStack_154 = 0.0;
                  method_02 = &_Stack_160;
                  __this_07.fields.m_InTangent = (float)uStack_138;
                  __this_07.fields._0_8_ = _Stack_140.genericMethod;
                  __this_07.fields.m_OutTangent = (float)uStack_134;
                  __this_07.fields.m_WeightedMode = uStack_130;
                  __this_07.fields.m_InWeight = (float)(undefined4)uStack_12c;
                  __this_07.fields.m_OutWeight = (float)uStack_12c._4_4_;
                  UnityEngine_Keyframe___ctor(__this_07,1.0,1.0,(MethodInfo *)method_02);
                  if (1 < (uint)pUVar7->max_length) {
                    pUVar7->m_Items[1].fields.m_OutTangent = fStack_154;
                    pUVar7->m_Items[1].fields.m_WeightedMode = uStack_150;
                    pUVar7->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_14c;
                    pUVar7->m_Items[1].fields.m_OutWeight = (float)uStack_14c._4_4_;
                    pUVar7->m_Items[1].fields.m_Time = (float)_Stack_160._0_4_;
                    pUVar7->m_Items[1].fields.m_Value = (float)_Stack_160._4_4_;
                    pUVar7->m_Items[1].fields.m_InTangent = fStack_158;
                    pUVar7->m_Items[1].fields.m_OutTangent = fStack_154;
                    uVar10 = _Stack_160._0_4_;
                    uVar11 = _Stack_160._4_4_;
                    fVar12 = fStack_158;
                    fVar13 = fStack_154;
                    uVar14 = uStack_150;
                    uVar15 = uStack_14c;
                    pUVar8 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                    UnityEngine_AnimationCurve___ctor(pUVar8,pUVar7,(MethodInfo *)0x0);
                    *(UnityEngine_AnimationCurve_o **)&(__this_17->fields).useDepthCorrection = pUVar8;
                    il2cpp_runtime_helper_022b4080(&(__this_17->fields).useDepthCorrection,pUVar8);
                    pUVar7 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                    uStack_170 = 0;
                    uStack_16c = 0;
                    _Stack_180.genericMethod = (void *)0x0;
                    uStack_178 = 0;
                    uStack_174 = 0;
                    method_02 = &_Stack_180;
                    __this_08.fields.m_Value = (float)uVar11;
                    __this_08.fields.m_Time = (float)uVar10;
                    __this_08.fields.m_InTangent = fVar12;
                    __this_08.fields.m_OutTangent = fVar13;
                    __this_08.fields.m_WeightedMode = uVar14;
                    __this_08.fields.m_InWeight = (float)(int)uVar15;
                    __this_08.fields.m_OutWeight = (float)(int)((ulong)uVar15 >> 0x20);
                    UnityEngine_Keyframe___ctor(__this_08,0.0,0.0,(MethodInfo *)method_02);
                    if (pUVar7 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                    if ((int)pUVar7->max_length != 0) {
                      pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_174;
                      pUVar7->m_Items[0].fields.m_WeightedMode = uStack_170;
                      pUVar7->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_16c;
                      pUVar7->m_Items[0].fields.m_OutWeight = (float)uStack_16c._4_4_;
                      *(_union_14 *)&pUVar7->m_Items[0].fields = (void *)_Stack_180;
                      pUVar7->m_Items[0].fields.m_InTangent = (float)uStack_178;
                      pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_174;
                      uStack_190 = 0;
                      uStack_18c = 0;
                      _Stack_1a0.genericMethod = (void *)0x0;
                      fStack_198 = 0.0;
                      fStack_194 = 0.0;
                      method_02 = &_Stack_1a0;
                      __this_09.fields.m_InTangent = (float)uStack_178;
                      __this_09.fields._0_8_ = _Stack_180.genericMethod;
                      __this_09.fields.m_OutTangent = (float)uStack_174;
                      __this_09.fields.m_WeightedMode = uStack_170;
                      __this_09.fields.m_InWeight = (float)(undefined4)uStack_16c;
                      __this_09.fields.m_OutWeight = (float)uStack_16c._4_4_;
                      UnityEngine_Keyframe___ctor(__this_09,1.0,1.0,(MethodInfo *)method_02);
                      if (1 < (uint)pUVar7->max_length) {
                        pUVar7->m_Items[1].fields.m_OutTangent = fStack_194;
                        pUVar7->m_Items[1].fields.m_WeightedMode = uStack_190;
                        pUVar7->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_18c;
                        pUVar7->m_Items[1].fields.m_OutWeight = (float)uStack_18c._4_4_;
                        pUVar7->m_Items[1].fields.m_Time = (float)_Stack_1a0._0_4_;
                        pUVar7->m_Items[1].fields.m_Value = (float)_Stack_1a0._4_4_;
                        pUVar7->m_Items[1].fields.m_InTangent = fStack_198;
                        pUVar7->m_Items[1].fields.m_OutTangent = fStack_194;
                        uVar10 = _Stack_1a0._0_4_;
                        uVar11 = _Stack_1a0._4_4_;
                        fVar12 = fStack_198;
                        fVar13 = fStack_194;
                        uVar14 = uStack_190;
                        uVar15 = uStack_18c;
                        pUVar8 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                        UnityEngine_AnimationCurve___ctor(pUVar8,pUVar7,(MethodInfo *)0x0);
                        (__this_17->fields).zCurve = pUVar8;
                        il2cpp_runtime_helper_022b4080(&(__this_17->fields).zCurve,pUVar8);
                        pUVar7 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                        uStack_1b0 = 0;
                        uStack_1ac = 0;
                        _Stack_1c0.genericMethod = (void *)0x0;
                        uStack_1b8 = 0;
                        uStack_1b4 = 0;
                        method_02 = &_Stack_1c0;
                        __this_10.fields.m_Value = (float)uVar11;
                        __this_10.fields.m_Time = (float)uVar10;
                        __this_10.fields.m_InTangent = fVar12;
                        __this_10.fields.m_OutTangent = fVar13;
                        __this_10.fields.m_WeightedMode = uVar14;
                        __this_10.fields.m_InWeight = (float)(int)uVar15;
                        __this_10.fields.m_OutWeight = (float)(int)((ulong)uVar15 >> 0x20);
                        UnityEngine_Keyframe___ctor(__this_10,0.0,0.0,(MethodInfo *)method_02);
                        if (pUVar7 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                        if ((int)pUVar7->max_length != 0) {
                          pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_1b4;
                          pUVar7->m_Items[0].fields.m_WeightedMode = uStack_1b0;
                          pUVar7->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_1ac;
                          pUVar7->m_Items[0].fields.m_OutWeight = (float)uStack_1ac._4_4_;
                          *(_union_14 *)&pUVar7->m_Items[0].fields = (void *)_Stack_1c0;
                          pUVar7->m_Items[0].fields.m_InTangent = (float)uStack_1b8;
                          pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_1b4;
                          uStack_1d0 = 0;
                          uStack_1cc = 0;
                          _Stack_1e0.genericMethod = (void *)0x0;
                          fStack_1d8 = 0.0;
                          fStack_1d4 = 0.0;
                          method_02 = &_Stack_1e0;
                          __this_11.fields.m_InTangent = (float)uStack_1b8;
                          __this_11.fields._0_8_ = _Stack_1c0.genericMethod;
                          __this_11.fields.m_OutTangent = (float)uStack_1b4;
                          __this_11.fields.m_WeightedMode = uStack_1b0;
                          __this_11.fields.m_InWeight = (float)(undefined4)uStack_1ac;
                          __this_11.fields.m_OutWeight = (float)uStack_1ac._4_4_;
                          UnityEngine_Keyframe___ctor(__this_11,1.0,1.0,(MethodInfo *)method_02);
                          if (1 < (uint)pUVar7->max_length) {
                            pUVar7->m_Items[1].fields.m_OutTangent = fStack_1d4;
                            pUVar7->m_Items[1].fields.m_WeightedMode = uStack_1d0;
                            pUVar7->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_1cc;
                            pUVar7->m_Items[1].fields.m_OutWeight = (float)uStack_1cc._4_4_;
                            pUVar7->m_Items[1].fields.m_Time = (float)_Stack_1e0._0_4_;
                            pUVar7->m_Items[1].fields.m_Value = (float)_Stack_1e0._4_4_;
                            pUVar7->m_Items[1].fields.m_InTangent = fStack_1d8;
                            pUVar7->m_Items[1].fields.m_OutTangent = fStack_1d4;
                            uVar10 = _Stack_1e0._0_4_;
                            uVar11 = _Stack_1e0._4_4_;
                            fVar12 = fStack_1d8;
                            fVar13 = fStack_1d4;
                            uVar14 = uStack_1d0;
                            uVar15 = uStack_1cc;
                            pUVar8 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                            UnityEngine_AnimationCurve___ctor(pUVar8,pUVar7,(MethodInfo *)0x0);
                            (__this_17->fields).depthRedChannel = pUVar8;
                            il2cpp_runtime_helper_022b4080(&(__this_17->fields).depthRedChannel,pUVar8);
                            pUVar7 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                            uStack_1f0 = 0;
                            uStack_1ec = 0;
                            _Stack_200.genericMethod = (void *)0x0;
                            uStack_1f8 = 0;
                            uStack_1f4 = 0;
                            method_02 = &_Stack_200;
                            __this_12.fields.m_Value = (float)uVar11;
                            __this_12.fields.m_Time = (float)uVar10;
                            __this_12.fields.m_InTangent = fVar12;
                            __this_12.fields.m_OutTangent = fVar13;
                            __this_12.fields.m_WeightedMode = uVar14;
                            __this_12.fields.m_InWeight = (float)(int)uVar15;
                            __this_12.fields.m_OutWeight = (float)(int)((ulong)uVar15 >> 0x20);
                            UnityEngine_Keyframe___ctor(__this_12,0.0,0.0,(MethodInfo *)method_02);
                            if (pUVar7 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                            if ((int)pUVar7->max_length != 0) {
                              pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_1f4;
                              pUVar7->m_Items[0].fields.m_WeightedMode = uStack_1f0;
                              pUVar7->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_1ec;
                              pUVar7->m_Items[0].fields.m_OutWeight = (float)uStack_1ec._4_4_;
                              *(_union_14 *)&pUVar7->m_Items[0].fields = _Stack_200;
                              pUVar7->m_Items[0].fields.m_InTangent = (float)uStack_1f8;
                              pUVar7->m_Items[0].fields.m_OutTangent = (float)uStack_1f4;
                              uStack_210 = 0;
                              uStack_20c = 0;
                              _Stack_220.genericMethod = (void *)0x0;
                              fStack_218 = 0.0;
                              fStack_214 = 0.0;
                              method_02 = &_Stack_220;
                              __this_13.fields.m_InTangent = (float)uStack_1f8;
                              __this_13.fields._0_8_ = _Stack_200.genericMethod;
                              __this_13.fields.m_OutTangent = (float)uStack_1f4;
                              __this_13.fields.m_WeightedMode = uStack_1f0;
                              __this_13.fields.m_InWeight = (float)(undefined4)uStack_1ec;
                              __this_13.fields.m_OutWeight = (float)uStack_1ec._4_4_;
                              UnityEngine_Keyframe___ctor(__this_13,1.0,1.0,(MethodInfo *)method_02);
                              if (1 < (uint)pUVar7->max_length) {
                                pUVar7->m_Items[1].fields.m_OutTangent = fStack_214;
                                pUVar7->m_Items[1].fields.m_WeightedMode = uStack_210;
                                pUVar7->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_20c;
                                pUVar7->m_Items[1].fields.m_OutWeight = (float)uStack_20c._4_4_;
                                pUVar7->m_Items[1].fields.m_Time = (float)_Stack_220._0_4_;
                                pUVar7->m_Items[1].fields.m_Value = (float)_Stack_220._4_4_;
                                pUVar7->m_Items[1].fields.m_InTangent = fStack_218;
                                pUVar7->m_Items[1].fields.m_OutTangent = fStack_214;
                                pUVar8 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                                UnityEngine_AnimationCurve___ctor(pUVar8,pUVar7,(MethodInfo *)0x0);
                                (__this_17->fields).depthGreenChannel = pUVar8;
                                il2cpp_runtime_helper_022b4080(&(__this_17->fields).depthGreenChannel,pUVar8);
                                *(undefined4 *)&(__this_17->fields).zCurveTex = 0x3f800000;
                                (__this_17->fields).saturation = 1.0;
                                (__this_17->fields).selectiveCc = 0x3f800000;
                                (__this_17->fields).selectiveFromColor.fields.r = 1.0;
                                (__this_17->fields).selectiveFromColor.fields.g = 1.0;
                                (__this_17->fields).selectiveFromColor.fields.b = 1.0;
                                (__this_17->fields).selectiveFromColor.fields.a = 1.0;
                                (__this_17->fields).selectiveToColor.fields.r = 1.0;
                                (__this_17->fields).selectiveToColor.fields.g = 1.0;
                                *(undefined1 *)&(__this_17->fields).selectiveToColor.fields.a = 1;
                                *(undefined1 *)&(__this_17->fields).colorCorrectionSelectiveShader = 1;
                                if (g_data_057af0ed == '\0') {
                                  il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
                                  g_data_057af0ed = '\x01';
                                }
                                *(undefined1 *)&(__this_17->fields).supportHDRTextures = 1;
                                *(undefined1 *)((long)&(__this_17->fields).supportHDRTextures + 2) = 1;
                                __this_16 = (System_Collections_Generic_List_object__o *)
                                            il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
                                System_Collections_Generic_List_object____ctor(__this_16,MethodInfo_List_1_UnityEngine_Material);
                                *(System_Collections_Generic_List_object__o **)
                                 &(__this_17->fields).isSupported = __this_16;
                                il2cpp_runtime_helper_022b4080(&(__this_17->fields).isSupported);
                                UnityEngine_MonoBehaviour___ctor
                                          ((UnityEngine_MonoBehaviour_o *)__this_17,(MethodInfo *)0x0);
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_0457f951:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)method_02 + 0x22) = 1;
  uVar9 = 0;
  bVar6 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)(method_02 + 4) = (char)bVar6;
  iVar5 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar5) {
    bVar6 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar9 = (undefined1)bVar6;
  }
  *(undefined1 *)((long)method_02 + 0x21) = uVar9;
  bVar6 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)method_02,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)method_02 + 0x22) = 0;
  }
  method_00 = (Il2CppRGCTXData *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)method_02,
                         method_02[6].genericMethod,(UnityEngine_Material_o *)method_02[7].genericMethod,
                         method);
  method_02[7].genericMethod = method_00;
  il2cpp_runtime_helper_022b4080();
  if ((*(undefined1 *)((long)method_02 + 0x22) == '\0') ||
     (bVar6 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0), (char)bVar6 == '\0')) {
    UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
              ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)method_02,(MethodInfo *)method_00);
  }
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves___ctor (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x457f150

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves___ctor
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  UnityEngine_Keyframe_o __this_00;
  UnityEngine_Keyframe_o __this_01;
  UnityEngine_Keyframe_o __this_02;
  UnityEngine_Keyframe_o __this_03;
  UnityEngine_Keyframe_o __this_04;
  UnityEngine_Keyframe_o __this_05;
  UnityEngine_Keyframe_o __this_06;
  UnityEngine_Keyframe_o __this_07;
  UnityEngine_Keyframe_o __this_08;
  UnityEngine_Keyframe_o __this_09;
  UnityEngine_Keyframe_o __this_10;
  UnityEngine_Keyframe_o __this_11;
  UnityEngine_Keyframe_o __this_12;
  UnityEngine_Keyframe_o __this_13;
  bool_conflict bVar1;
  int32_t iVar2;
  UnityEngine_Keyframe_array *pUVar3;
  System_Collections_Generic_List_Material__o *__this_14;
  UnityEngine_AnimationCurve_o *pUVar4;
  System_Collections_Generic_List_object__o *__this_15;
  Il2CppRGCTXData *method_00;
  MethodInfo *in_RCX;
  _union_14 *method_01;
  undefined1 uVar5;
  undefined4 in_stack_fffffffffffffdf8;
  undefined4 uVar6;
  undefined4 in_stack_fffffffffffffdfc;
  undefined4 uVar7;
  undefined4 in_stack_fffffffffffffe00;
  float fVar8;
  undefined4 in_stack_fffffffffffffe04;
  float fVar9;
  undefined4 in_stack_fffffffffffffe08;
  undefined4 uVar10;
  undefined8 in_stack_fffffffffffffe0c;
  undefined8 uVar11;
  _union_14 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  _union_14 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  _union_14 local_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_194;
  _union_14 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  _union_14 local_168;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  _union_14 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  _union_14 local_128;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  _union_14 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  _union_14 local_e8;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  _union_14 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  _union_14 local_a8;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  _union_14 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  _union_14 local_68;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  _union_14 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  
  if (g_data_057af0be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationCurve);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Keyframe);
    g_data_057af0be = '\x01';
  }
  pUVar3 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
  uStack_38 = 0;
  uStack_34 = 0;
  local_48.genericMethod = (void *)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  method_01 = &local_48;
  __this_00.fields.m_Value = (float)in_stack_fffffffffffffdfc;
  __this_00.fields.m_Time = (float)in_stack_fffffffffffffdf8;
  __this_00.fields.m_InTangent = (float)in_stack_fffffffffffffe00;
  __this_00.fields.m_OutTangent = (float)in_stack_fffffffffffffe04;
  __this_00.fields.m_WeightedMode = in_stack_fffffffffffffe08;
  __this_00.fields.m_InWeight = (float)(int)in_stack_fffffffffffffe0c;
  __this_00.fields.m_OutWeight = (float)(int)((ulong)in_stack_fffffffffffffe0c >> 0x20);
  UnityEngine_Keyframe___ctor(__this_00,0.0,0.0,(MethodInfo *)method_01);
  if (pUVar3 != (UnityEngine_Keyframe_array *)0x0) {
    if ((int)pUVar3->max_length != 0) {
      pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_3c;
      pUVar3->m_Items[0].fields.m_WeightedMode = uStack_38;
      pUVar3->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_34;
      pUVar3->m_Items[0].fields.m_OutWeight = (float)uStack_34._4_4_;
      *(_union_14 *)&pUVar3->m_Items[0].fields = (void *)local_48;
      pUVar3->m_Items[0].fields.m_InTangent = (float)uStack_40;
      pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_3c;
      uStack_58 = 0;
      uStack_54 = 0;
      local_68.genericMethod = (void *)0x0;
      fStack_60 = 0.0;
      fStack_5c = 0.0;
      method_01 = &local_68;
      __this_01.fields.m_InTangent = (float)uStack_40;
      __this_01.fields._0_8_ = local_48.genericMethod;
      __this_01.fields.m_OutTangent = (float)uStack_3c;
      __this_01.fields.m_WeightedMode = uStack_38;
      __this_01.fields.m_InWeight = (float)(undefined4)uStack_34;
      __this_01.fields.m_OutWeight = (float)uStack_34._4_4_;
      UnityEngine_Keyframe___ctor(__this_01,1.0,1.0,(MethodInfo *)method_01);
      if (1 < (uint)pUVar3->max_length) {
        pUVar3->m_Items[1].fields.m_OutTangent = fStack_5c;
        pUVar3->m_Items[1].fields.m_WeightedMode = uStack_58;
        pUVar3->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_54;
        pUVar3->m_Items[1].fields.m_OutWeight = (float)uStack_54._4_4_;
        pUVar3->m_Items[1].fields.m_Time = (float)local_68._0_4_;
        pUVar3->m_Items[1].fields.m_Value = (float)local_68._4_4_;
        pUVar3->m_Items[1].fields.m_InTangent = fStack_60;
        pUVar3->m_Items[1].fields.m_OutTangent = fStack_5c;
        uVar6 = local_68._0_4_;
        uVar7 = local_68._4_4_;
        fVar8 = fStack_60;
        fVar9 = fStack_5c;
        uVar10 = uStack_58;
        uVar11 = uStack_54;
        __this_14 = (System_Collections_Generic_List_Material__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
        UnityEngine_AnimationCurve___ctor((UnityEngine_AnimationCurve_o *)__this_14,pUVar3,(MethodInfo *)0x0);
        (__this->fields).createdMaterials = __this_14;
        il2cpp_runtime_helper_022b4080(&(__this->fields).createdMaterials,__this_14);
        pUVar3 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
        uStack_78 = 0;
        uStack_74 = 0;
        local_88.genericMethod = (void *)0x0;
        uStack_80 = 0;
        uStack_7c = 0;
        method_01 = &local_88;
        __this_02.fields.m_Value = (float)uVar7;
        __this_02.fields.m_Time = (float)uVar6;
        __this_02.fields.m_InTangent = fVar8;
        __this_02.fields.m_OutTangent = fVar9;
        __this_02.fields.m_WeightedMode = uVar10;
        __this_02.fields.m_InWeight = (float)(int)uVar11;
        __this_02.fields.m_OutWeight = (float)(int)((ulong)uVar11 >> 0x20);
        UnityEngine_Keyframe___ctor(__this_02,0.0,0.0,(MethodInfo *)method_01);
        if (pUVar3 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
        if ((int)pUVar3->max_length != 0) {
          pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
          pUVar3->m_Items[0].fields.m_WeightedMode = uStack_78;
          pUVar3->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_74;
          pUVar3->m_Items[0].fields.m_OutWeight = (float)uStack_74._4_4_;
          *(_union_14 *)&pUVar3->m_Items[0].fields = (void *)local_88;
          pUVar3->m_Items[0].fields.m_InTangent = (float)uStack_80;
          pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
          uStack_98 = 0;
          uStack_94 = 0;
          local_a8.genericMethod = (void *)0x0;
          fStack_a0 = 0.0;
          fStack_9c = 0.0;
          method_01 = &local_a8;
          __this_03.fields.m_InTangent = (float)uStack_80;
          __this_03.fields._0_8_ = local_88.genericMethod;
          __this_03.fields.m_OutTangent = (float)uStack_7c;
          __this_03.fields.m_WeightedMode = uStack_78;
          __this_03.fields.m_InWeight = (float)(undefined4)uStack_74;
          __this_03.fields.m_OutWeight = (float)uStack_74._4_4_;
          UnityEngine_Keyframe___ctor(__this_03,1.0,1.0,(MethodInfo *)method_01);
          if (1 < (uint)pUVar3->max_length) {
            pUVar3->m_Items[1].fields.m_OutTangent = fStack_9c;
            pUVar3->m_Items[1].fields.m_WeightedMode = uStack_98;
            pUVar3->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_94;
            pUVar3->m_Items[1].fields.m_OutWeight = (float)uStack_94._4_4_;
            pUVar3->m_Items[1].fields.m_Time = (float)local_a8._0_4_;
            pUVar3->m_Items[1].fields.m_Value = (float)local_a8._4_4_;
            pUVar3->m_Items[1].fields.m_InTangent = fStack_a0;
            pUVar3->m_Items[1].fields.m_OutTangent = fStack_9c;
            uVar6 = local_a8._0_4_;
            uVar7 = local_a8._4_4_;
            fVar8 = fStack_a0;
            fVar9 = fStack_9c;
            uVar10 = uStack_98;
            uVar11 = uStack_94;
            pUVar4 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
            UnityEngine_AnimationCurve___ctor(pUVar4,pUVar3,(MethodInfo *)0x0);
            (__this->fields).redChannel = pUVar4;
            il2cpp_runtime_helper_022b4080(&(__this->fields).redChannel,pUVar4);
            pUVar3 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
            uStack_b8 = 0;
            uStack_b4 = 0;
            local_c8.genericMethod = (void *)0x0;
            uStack_c0 = 0;
            uStack_bc = 0;
            method_01 = &local_c8;
            __this_04.fields.m_Value = (float)uVar7;
            __this_04.fields.m_Time = (float)uVar6;
            __this_04.fields.m_InTangent = fVar8;
            __this_04.fields.m_OutTangent = fVar9;
            __this_04.fields.m_WeightedMode = uVar10;
            __this_04.fields.m_InWeight = (float)(int)uVar11;
            __this_04.fields.m_OutWeight = (float)(int)((ulong)uVar11 >> 0x20);
            UnityEngine_Keyframe___ctor(__this_04,0.0,0.0,(MethodInfo *)method_01);
            if (pUVar3 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
            if ((int)pUVar3->max_length != 0) {
              pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_bc;
              pUVar3->m_Items[0].fields.m_WeightedMode = uStack_b8;
              pUVar3->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_b4;
              pUVar3->m_Items[0].fields.m_OutWeight = (float)uStack_b4._4_4_;
              *(_union_14 *)&pUVar3->m_Items[0].fields = (void *)local_c8;
              pUVar3->m_Items[0].fields.m_InTangent = (float)uStack_c0;
              pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_bc;
              uStack_d8 = 0;
              uStack_d4 = 0;
              local_e8.genericMethod = (void *)0x0;
              fStack_e0 = 0.0;
              fStack_dc = 0.0;
              method_01 = &local_e8;
              __this_05.fields.m_InTangent = (float)uStack_c0;
              __this_05.fields._0_8_ = local_c8.genericMethod;
              __this_05.fields.m_OutTangent = (float)uStack_bc;
              __this_05.fields.m_WeightedMode = uStack_b8;
              __this_05.fields.m_InWeight = (float)(undefined4)uStack_b4;
              __this_05.fields.m_OutWeight = (float)uStack_b4._4_4_;
              UnityEngine_Keyframe___ctor(__this_05,1.0,1.0,(MethodInfo *)method_01);
              if (1 < (uint)pUVar3->max_length) {
                pUVar3->m_Items[1].fields.m_OutTangent = fStack_dc;
                pUVar3->m_Items[1].fields.m_WeightedMode = uStack_d8;
                pUVar3->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_d4;
                pUVar3->m_Items[1].fields.m_OutWeight = (float)uStack_d4._4_4_;
                pUVar3->m_Items[1].fields.m_Time = (float)local_e8._0_4_;
                pUVar3->m_Items[1].fields.m_Value = (float)local_e8._4_4_;
                pUVar3->m_Items[1].fields.m_InTangent = fStack_e0;
                pUVar3->m_Items[1].fields.m_OutTangent = fStack_dc;
                uVar6 = local_e8._0_4_;
                uVar7 = local_e8._4_4_;
                fVar8 = fStack_e0;
                fVar9 = fStack_dc;
                uVar10 = uStack_d8;
                uVar11 = uStack_d4;
                pUVar4 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                UnityEngine_AnimationCurve___ctor(pUVar4,pUVar3,(MethodInfo *)0x0);
                (__this->fields).greenChannel = pUVar4;
                il2cpp_runtime_helper_022b4080(&(__this->fields).greenChannel,pUVar4);
                pUVar3 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                uStack_f8 = 0;
                uStack_f4 = 0;
                local_108.genericMethod = (void *)0x0;
                uStack_100 = 0;
                uStack_fc = 0;
                method_01 = &local_108;
                __this_06.fields.m_Value = (float)uVar7;
                __this_06.fields.m_Time = (float)uVar6;
                __this_06.fields.m_InTangent = fVar8;
                __this_06.fields.m_OutTangent = fVar9;
                __this_06.fields.m_WeightedMode = uVar10;
                __this_06.fields.m_InWeight = (float)(int)uVar11;
                __this_06.fields.m_OutWeight = (float)(int)((ulong)uVar11 >> 0x20);
                UnityEngine_Keyframe___ctor(__this_06,0.0,0.0,(MethodInfo *)method_01);
                if (pUVar3 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                if ((int)pUVar3->max_length != 0) {
                  pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_fc;
                  pUVar3->m_Items[0].fields.m_WeightedMode = uStack_f8;
                  pUVar3->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_f4;
                  pUVar3->m_Items[0].fields.m_OutWeight = (float)uStack_f4._4_4_;
                  *(_union_14 *)&pUVar3->m_Items[0].fields = (void *)local_108;
                  pUVar3->m_Items[0].fields.m_InTangent = (float)uStack_100;
                  pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_fc;
                  uStack_118 = 0;
                  uStack_114 = 0;
                  local_128.genericMethod = (void *)0x0;
                  fStack_120 = 0.0;
                  fStack_11c = 0.0;
                  method_01 = &local_128;
                  __this_07.fields.m_InTangent = (float)uStack_100;
                  __this_07.fields._0_8_ = local_108.genericMethod;
                  __this_07.fields.m_OutTangent = (float)uStack_fc;
                  __this_07.fields.m_WeightedMode = uStack_f8;
                  __this_07.fields.m_InWeight = (float)(undefined4)uStack_f4;
                  __this_07.fields.m_OutWeight = (float)uStack_f4._4_4_;
                  UnityEngine_Keyframe___ctor(__this_07,1.0,1.0,(MethodInfo *)method_01);
                  if (1 < (uint)pUVar3->max_length) {
                    pUVar3->m_Items[1].fields.m_OutTangent = fStack_11c;
                    pUVar3->m_Items[1].fields.m_WeightedMode = uStack_118;
                    pUVar3->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_114;
                    pUVar3->m_Items[1].fields.m_OutWeight = (float)uStack_114._4_4_;
                    pUVar3->m_Items[1].fields.m_Time = (float)local_128._0_4_;
                    pUVar3->m_Items[1].fields.m_Value = (float)local_128._4_4_;
                    pUVar3->m_Items[1].fields.m_InTangent = fStack_120;
                    pUVar3->m_Items[1].fields.m_OutTangent = fStack_11c;
                    uVar6 = local_128._0_4_;
                    uVar7 = local_128._4_4_;
                    fVar8 = fStack_120;
                    fVar9 = fStack_11c;
                    uVar10 = uStack_118;
                    uVar11 = uStack_114;
                    pUVar4 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                    UnityEngine_AnimationCurve___ctor(pUVar4,pUVar3,(MethodInfo *)0x0);
                    *(UnityEngine_AnimationCurve_o **)&(__this->fields).useDepthCorrection = pUVar4;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).useDepthCorrection,pUVar4);
                    pUVar3 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                    uStack_138 = 0;
                    uStack_134 = 0;
                    local_148.genericMethod = (void *)0x0;
                    uStack_140 = 0;
                    uStack_13c = 0;
                    method_01 = &local_148;
                    __this_08.fields.m_Value = (float)uVar7;
                    __this_08.fields.m_Time = (float)uVar6;
                    __this_08.fields.m_InTangent = fVar8;
                    __this_08.fields.m_OutTangent = fVar9;
                    __this_08.fields.m_WeightedMode = uVar10;
                    __this_08.fields.m_InWeight = (float)(int)uVar11;
                    __this_08.fields.m_OutWeight = (float)(int)((ulong)uVar11 >> 0x20);
                    UnityEngine_Keyframe___ctor(__this_08,0.0,0.0,(MethodInfo *)method_01);
                    if (pUVar3 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                    if ((int)pUVar3->max_length != 0) {
                      pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_13c;
                      pUVar3->m_Items[0].fields.m_WeightedMode = uStack_138;
                      pUVar3->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_134;
                      pUVar3->m_Items[0].fields.m_OutWeight = (float)uStack_134._4_4_;
                      *(_union_14 *)&pUVar3->m_Items[0].fields = (void *)local_148;
                      pUVar3->m_Items[0].fields.m_InTangent = (float)uStack_140;
                      pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_13c;
                      uStack_158 = 0;
                      uStack_154 = 0;
                      local_168.genericMethod = (void *)0x0;
                      fStack_160 = 0.0;
                      fStack_15c = 0.0;
                      method_01 = &local_168;
                      __this_09.fields.m_InTangent = (float)uStack_140;
                      __this_09.fields._0_8_ = local_148.genericMethod;
                      __this_09.fields.m_OutTangent = (float)uStack_13c;
                      __this_09.fields.m_WeightedMode = uStack_138;
                      __this_09.fields.m_InWeight = (float)(undefined4)uStack_134;
                      __this_09.fields.m_OutWeight = (float)uStack_134._4_4_;
                      UnityEngine_Keyframe___ctor(__this_09,1.0,1.0,(MethodInfo *)method_01);
                      if (1 < (uint)pUVar3->max_length) {
                        pUVar3->m_Items[1].fields.m_OutTangent = fStack_15c;
                        pUVar3->m_Items[1].fields.m_WeightedMode = uStack_158;
                        pUVar3->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_154;
                        pUVar3->m_Items[1].fields.m_OutWeight = (float)uStack_154._4_4_;
                        pUVar3->m_Items[1].fields.m_Time = (float)local_168._0_4_;
                        pUVar3->m_Items[1].fields.m_Value = (float)local_168._4_4_;
                        pUVar3->m_Items[1].fields.m_InTangent = fStack_160;
                        pUVar3->m_Items[1].fields.m_OutTangent = fStack_15c;
                        uVar6 = local_168._0_4_;
                        uVar7 = local_168._4_4_;
                        fVar8 = fStack_160;
                        fVar9 = fStack_15c;
                        uVar10 = uStack_158;
                        uVar11 = uStack_154;
                        pUVar4 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                        UnityEngine_AnimationCurve___ctor(pUVar4,pUVar3,(MethodInfo *)0x0);
                        (__this->fields).zCurve = pUVar4;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).zCurve,pUVar4);
                        pUVar3 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                        uStack_178 = 0;
                        uStack_174 = 0;
                        local_188.genericMethod = (void *)0x0;
                        uStack_180 = 0;
                        uStack_17c = 0;
                        method_01 = &local_188;
                        __this_10.fields.m_Value = (float)uVar7;
                        __this_10.fields.m_Time = (float)uVar6;
                        __this_10.fields.m_InTangent = fVar8;
                        __this_10.fields.m_OutTangent = fVar9;
                        __this_10.fields.m_WeightedMode = uVar10;
                        __this_10.fields.m_InWeight = (float)(int)uVar11;
                        __this_10.fields.m_OutWeight = (float)(int)((ulong)uVar11 >> 0x20);
                        UnityEngine_Keyframe___ctor(__this_10,0.0,0.0,(MethodInfo *)method_01);
                        if (pUVar3 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                        if ((int)pUVar3->max_length != 0) {
                          pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_17c;
                          pUVar3->m_Items[0].fields.m_WeightedMode = uStack_178;
                          pUVar3->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_174;
                          pUVar3->m_Items[0].fields.m_OutWeight = (float)uStack_174._4_4_;
                          *(_union_14 *)&pUVar3->m_Items[0].fields = (void *)local_188;
                          pUVar3->m_Items[0].fields.m_InTangent = (float)uStack_180;
                          pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_17c;
                          uStack_198 = 0;
                          uStack_194 = 0;
                          local_1a8.genericMethod = (void *)0x0;
                          fStack_1a0 = 0.0;
                          fStack_19c = 0.0;
                          method_01 = &local_1a8;
                          __this_11.fields.m_InTangent = (float)uStack_180;
                          __this_11.fields._0_8_ = local_188.genericMethod;
                          __this_11.fields.m_OutTangent = (float)uStack_17c;
                          __this_11.fields.m_WeightedMode = uStack_178;
                          __this_11.fields.m_InWeight = (float)(undefined4)uStack_174;
                          __this_11.fields.m_OutWeight = (float)uStack_174._4_4_;
                          UnityEngine_Keyframe___ctor(__this_11,1.0,1.0,(MethodInfo *)method_01);
                          if (1 < (uint)pUVar3->max_length) {
                            pUVar3->m_Items[1].fields.m_OutTangent = fStack_19c;
                            pUVar3->m_Items[1].fields.m_WeightedMode = uStack_198;
                            pUVar3->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_194;
                            pUVar3->m_Items[1].fields.m_OutWeight = (float)uStack_194._4_4_;
                            pUVar3->m_Items[1].fields.m_Time = (float)local_1a8._0_4_;
                            pUVar3->m_Items[1].fields.m_Value = (float)local_1a8._4_4_;
                            pUVar3->m_Items[1].fields.m_InTangent = fStack_1a0;
                            pUVar3->m_Items[1].fields.m_OutTangent = fStack_19c;
                            uVar6 = local_1a8._0_4_;
                            uVar7 = local_1a8._4_4_;
                            fVar8 = fStack_1a0;
                            fVar9 = fStack_19c;
                            uVar10 = uStack_198;
                            uVar11 = uStack_194;
                            pUVar4 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                            UnityEngine_AnimationCurve___ctor(pUVar4,pUVar3,(MethodInfo *)0x0);
                            (__this->fields).depthRedChannel = pUVar4;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).depthRedChannel,pUVar4);
                            pUVar3 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
                            uStack_1b8 = 0;
                            uStack_1b4 = 0;
                            local_1c8.genericMethod = (void *)0x0;
                            uStack_1c0 = 0;
                            uStack_1bc = 0;
                            method_01 = &local_1c8;
                            __this_12.fields.m_Value = (float)uVar7;
                            __this_12.fields.m_Time = (float)uVar6;
                            __this_12.fields.m_InTangent = fVar8;
                            __this_12.fields.m_OutTangent = fVar9;
                            __this_12.fields.m_WeightedMode = uVar10;
                            __this_12.fields.m_InWeight = (float)(int)uVar11;
                            __this_12.fields.m_OutWeight = (float)(int)((ulong)uVar11 >> 0x20);
                            UnityEngine_Keyframe___ctor(__this_12,0.0,0.0,(MethodInfo *)method_01);
                            if (pUVar3 == (UnityEngine_Keyframe_array *)0x0) goto label_0457f951;
                            if ((int)pUVar3->max_length != 0) {
                              pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_1bc;
                              pUVar3->m_Items[0].fields.m_WeightedMode = uStack_1b8;
                              pUVar3->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_1b4;
                              pUVar3->m_Items[0].fields.m_OutWeight = (float)uStack_1b4._4_4_;
                              *(_union_14 *)&pUVar3->m_Items[0].fields = local_1c8;
                              pUVar3->m_Items[0].fields.m_InTangent = (float)uStack_1c0;
                              pUVar3->m_Items[0].fields.m_OutTangent = (float)uStack_1bc;
                              uStack_1d8 = 0;
                              uStack_1d4 = 0;
                              local_1e8.genericMethod = (void *)0x0;
                              fStack_1e0 = 0.0;
                              fStack_1dc = 0.0;
                              method_01 = &local_1e8;
                              __this_13.fields.m_InTangent = (float)uStack_1c0;
                              __this_13.fields._0_8_ = local_1c8.genericMethod;
                              __this_13.fields.m_OutTangent = (float)uStack_1bc;
                              __this_13.fields.m_WeightedMode = uStack_1b8;
                              __this_13.fields.m_InWeight = (float)(undefined4)uStack_1b4;
                              __this_13.fields.m_OutWeight = (float)uStack_1b4._4_4_;
                              UnityEngine_Keyframe___ctor(__this_13,1.0,1.0,(MethodInfo *)method_01);
                              if (1 < (uint)pUVar3->max_length) {
                                pUVar3->m_Items[1].fields.m_OutTangent = fStack_1dc;
                                pUVar3->m_Items[1].fields.m_WeightedMode = uStack_1d8;
                                pUVar3->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_1d4;
                                pUVar3->m_Items[1].fields.m_OutWeight = (float)uStack_1d4._4_4_;
                                pUVar3->m_Items[1].fields.m_Time = (float)local_1e8._0_4_;
                                pUVar3->m_Items[1].fields.m_Value = (float)local_1e8._4_4_;
                                pUVar3->m_Items[1].fields.m_InTangent = fStack_1e0;
                                pUVar3->m_Items[1].fields.m_OutTangent = fStack_1dc;
                                pUVar4 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
                                UnityEngine_AnimationCurve___ctor(pUVar4,pUVar3,(MethodInfo *)0x0);
                                (__this->fields).depthGreenChannel = pUVar4;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).depthGreenChannel,pUVar4);
                                *(undefined4 *)&(__this->fields).zCurveTex = 0x3f800000;
                                (__this->fields).saturation = 1.0;
                                (__this->fields).selectiveCc = 0x3f800000;
                                (__this->fields).selectiveFromColor.fields.r = 1.0;
                                (__this->fields).selectiveFromColor.fields.g = 1.0;
                                (__this->fields).selectiveFromColor.fields.b = 1.0;
                                (__this->fields).selectiveFromColor.fields.a = 1.0;
                                (__this->fields).selectiveToColor.fields.r = 1.0;
                                (__this->fields).selectiveToColor.fields.g = 1.0;
                                *(undefined1 *)&(__this->fields).selectiveToColor.fields.a = 1;
                                *(undefined1 *)&(__this->fields).colorCorrectionSelectiveShader = 1;
                                if (g_data_057af0ed == '\0') {
                                  il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
                                  g_data_057af0ed = '\x01';
                                }
                                *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
                                *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
                                __this_15 = (System_Collections_Generic_List_object__o *)
                                            il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
                                System_Collections_Generic_List_object____ctor(__this_15,MethodInfo_List_1_UnityEngine_Material);
                                *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported =
                                     __this_15;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).isSupported);
                                UnityEngine_MonoBehaviour___ctor
                                          ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_0457f951:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)method_01 + 0x22) = 1;
  uVar5 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)(method_01 + 4) = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar5 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)method_01 + 0x21) = uVar5;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)method_01,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)method_01 + 0x22) = 0;
  }
  method_00 = (Il2CppRGCTXData *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)method_01,
                         method_01[6].genericMethod,(UnityEngine_Material_o *)method_01[7].genericMethod,
                         in_RCX);
  method_01[7].genericMethod = method_00;
  il2cpp_runtime_helper_022b4080();
  if ((*(undefined1 *)((long)method_01 + 0x22) != '\0') &&
     (bVar1 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0), (char)bVar1 != '\0')) {
    return;
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)method_01,(MethodInfo *)method_00);
  return;
}


