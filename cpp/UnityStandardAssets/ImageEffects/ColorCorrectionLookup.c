// Type: UnityStandardAssets.ImageEffects.ColorCorrectionLookup
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ColorCorrectionLookup.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionLookup.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_ColorCorrectionLookup__CheckResources (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x425a860

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
  
  if (DAT_0570526e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570526e = '\x01';
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
  il2cpp_runtime_glue();
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    uVar3 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0);
    uVar4 = (ulong)uVar3;
    if ((char)uVar3 != '\0') goto LAB_0425a90a;
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  uVar4 = extraout_RAX;
LAB_0425a90a:
  return (bool_conflict)
         CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2)
                 );
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDisable (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x425a920

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDisable
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Shader_o **ppUVar3;
  
  if (DAT_05705243 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705243 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).shader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    ppUVar3 = &(__this->fields).shader;
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    *ppUVar3 = (UnityEngine_Shader_o *)0x0;
    il2cpp_runtime_glue(ppUVar3,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$OnDestroy
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDestroy (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x425a9b0

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnDestroy
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Material_o **ppUVar3;
  
  if (DAT_05705244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705244 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar3 = &(__this->fields).material;
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
  }
  *ppUVar3 = (UnityEngine_Material_o *)0x0;
  il2cpp_runtime_glue(ppUVar3,0);
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$SetIdentityLut
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x425aa40

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__SetIdentityLut
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Color_array *colors;
  UnityEngine_Texture3D_o *__this_00;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (DAT_05705245 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture3D);
    il2cpp_init_method_metadata(&"");
    DAT_05705245 = '\x01';
  }
  colors = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color);
  if (colors != (UnityEngine_Color_array *)0x0) {
    pfVar7 = &colors->m_Items[0xf00].fields.b;
    lVar4 = 0;
    do {
      fVar9 = (float)(int)lVar4 * 0.06666667;
      iVar8 = 0;
      lVar5 = 0;
      pfVar6 = pfVar7;
      do {
        if ((ulong)(uint)colors->max_length <= (ulong)(lVar4 + lVar5)) {
LAB_0425aeb8:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar10 = (float)iVar8 * 0.06666667;
        pfVar6[-0x3c02] = fVar9;
        pfVar6[-0x3c01] = fVar10;
        pfVar6[-0x3c00] = 0.0;
        pfVar6[-0x3bff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x100U) goto LAB_0425aeb8;
        pfVar6[-0x3802] = fVar9;
        pfVar6[-0x3801] = fVar10;
        pfVar6[-0x3800] = 0.06666667;
        pfVar6[-0x37ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x200U) goto LAB_0425aeb8;
        pfVar6[-0x3402] = fVar9;
        pfVar6[-0x3401] = fVar10;
        pfVar6[-0x3400] = 0.13333334;
        pfVar6[-0x33ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x300U) goto LAB_0425aeb8;
        pfVar6[-0x3002] = fVar9;
        pfVar6[-0x3001] = fVar10;
        pfVar6[-0x3000] = 0.20000002;
        pfVar6[-0x2fff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x400U) goto LAB_0425aeb8;
        pfVar6[-0x2c02] = fVar9;
        pfVar6[-0x2c01] = fVar10;
        pfVar6[-0x2c00] = 0.26666668;
        pfVar6[-0x2bff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x500U) goto LAB_0425aeb8;
        pfVar6[-0x2802] = fVar9;
        pfVar6[-0x2801] = fVar10;
        pfVar6[-0x2800] = 0.33333334;
        pfVar6[-0x27ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x600U) goto LAB_0425aeb8;
        pfVar6[-0x2402] = fVar9;
        pfVar6[-0x2401] = fVar10;
        pfVar6[-0x2400] = 0.40000004;
        pfVar6[-0x23ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x700U) goto LAB_0425aeb8;
        pfVar6[-0x2002] = fVar9;
        pfVar6[-0x2001] = fVar10;
        pfVar6[-0x2000] = 0.4666667;
        pfVar6[-0x1fff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x800U) goto LAB_0425aeb8;
        pfVar6[-0x1c02] = fVar9;
        pfVar6[-0x1c01] = fVar10;
        pfVar6[-0x1c00] = 0.53333336;
        pfVar6[-0x1bff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0x900U) goto LAB_0425aeb8;
        pfVar6[-0x1802] = fVar9;
        pfVar6[-0x1801] = fVar10;
        pfVar6[-0x1800] = 0.6;
        pfVar6[-0x17ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0xa00U) goto LAB_0425aeb8;
        pfVar6[-0x1402] = fVar9;
        pfVar6[-0x1401] = fVar10;
        pfVar6[-0x1400] = 0.6666667;
        pfVar6[-0x13ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0xb00U) goto LAB_0425aeb8;
        pfVar6[-0x1002] = fVar9;
        pfVar6[-0x1001] = fVar10;
        pfVar6[-0x1000] = 0.73333335;
        pfVar6[-0xfff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0xc00U) goto LAB_0425aeb8;
        pfVar6[-0xc02] = fVar9;
        pfVar6[-0xc01] = fVar10;
        pfVar6[-0xc00] = 0.8000001;
        pfVar6[-0xbff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0xd00U) goto LAB_0425aeb8;
        pfVar6[-0x802] = fVar9;
        pfVar6[-0x801] = fVar10;
        pfVar6[-0x800] = 0.86666673;
        pfVar6[-0x7ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0xe00U) goto LAB_0425aeb8;
        pfVar6[-0x402] = fVar9;
        pfVar6[-0x401] = fVar10;
        pfVar6[-0x400] = 0.9333334;
        pfVar6[-0x3ff] = 1.0;
        if ((ulong)(uint)colors->max_length <= lVar4 + lVar5 + 0xf00U) goto LAB_0425aeb8;
        lVar5 = lVar5 + 0x10;
        iVar8 = iVar8 + 1;
        ((UnityEngine_Color_Fields *)(pfVar6 + -2))->r = fVar9;
        pfVar6[-1] = fVar10;
        *pfVar6 = 1.0;
        pfVar6[1] = 1.0;
        pfVar6 = pfVar6 + 0x40;
      } while (lVar5 != 0x100);
      lVar4 = lVar4 + 1;
      pfVar7 = pfVar7 + 4;
    } while (lVar4 != 0x10);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppUVar1 = &(__this->fields).material;
    bVar3 = UnityEngine_Object__op_Implicit(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__DestroyImmediate(pUVar2,(MethodInfo *)0x0);
    }
    __this_00 = (UnityEngine_Texture3D_o *)il2cpp_runtime_glue(TypeInfo_Texture3D);
    UnityEngine_Texture3D___ctor(__this_00,0x10,0x10,0x10,5,0,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_Material_o *)__this_00;
    il2cpp_runtime_glue(ppUVar1,__this_00);
    if ((UnityEngine_Texture3D_o *)*ppUVar1 != (UnityEngine_Texture3D_o *)0x0) {
      UnityEngine_Texture3D__SetPixels((UnityEngine_Texture3D_o *)*ppUVar1,colors,(MethodInfo *)0x0)
      ;
      if ((UnityEngine_Texture3D_o *)*ppUVar1 != (UnityEngine_Texture3D_o *)0x0) {
        UnityEngine_Texture3D__Apply((UnityEngine_Texture3D_o *)*ppUVar1,(MethodInfo *)0x0);
        (__this->fields).converted3DLut = "";
        il2cpp_runtime_glue(&(__this->fields).converted3DLut);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$ValidDimensions
// il2cpp: bool UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, UnityEngine_Texture2D_o* tex2d, const MethodInfo* method);
// 0x425aed0

bool_conflict
UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions
          (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,
          UnityEngine_Texture2D_o *tex2d,MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if (DAT_05705246 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705246 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)tex2d,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (tex2d != (UnityEngine_Texture2D_o *)0x0) {
      iVar2 = (*(tex2d->klass->vtable)._7_get_height.methodPtr)
                        (tex2d,(tex2d->klass->vtable)._7_get_height.method);
      iVar3 = (*(tex2d->klass->vtable)._5_get_width.methodPtr)
                        (tex2d,(tex2d->klass->vtable)._5_get_width.method);
      fVar4 = (float)iVar3;
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      if (DAT_056fdee5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdee5 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar4 = floorf(fVar4);
      return CONCAT31((int3)((uint)(int)fVar4 >> 8),iVar2 == (int)fVar4);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$Convert
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__Convert (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, UnityEngine_Texture2D_o* temp2DTex, System_String_o* path, const MethodInfo* method);
// 0x425afe0

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__Convert
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,
               UnityEngine_Texture2D_o *temp2DTex,System_String_o *path,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool_conflict bVar7;
  uint width;
  int iVar8;
  UnityEngine_Color_array *pUVar9;
  UnityEngine_Color_array *colors;
  UnityEngine_Texture3D_o *__this_00;
  System_String_o *pSVar10;
  uint uVar11;
  MethodInfo *method_00;
  ulong uVar12;
  UnityEngine_Material_o **ppUVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this_01;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  if (DAT_05705247 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture3D);
    il2cpp_init_method_metadata(&"The given 2D texture ");
    il2cpp_init_method_metadata(&"Couldn't color correct with 3D LUT texture. Image Effect will be disabled.");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&" cannot be used as a 3D LUT.");
    DAT_05705247 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)temp2DTex,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogError("Couldn't color correct with 3D LUT texture. Image Effect will be disabled.",(MethodInfo *)0x0);
    return;
  }
  if (temp2DTex != (UnityEngine_Texture2D_o *)0x0) {
    (*(temp2DTex->klass->vtable)._5_get_width.methodPtr)
              (temp2DTex,(temp2DTex->klass->vtable)._5_get_width.method);
    (*(temp2DTex->klass->vtable)._7_get_height.methodPtr)
              (temp2DTex,(temp2DTex->klass->vtable)._7_get_height.method);
    __this_01 = (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *)temp2DTex;
    width = (*(temp2DTex->klass->vtable)._7_get_height.methodPtr)
                      (temp2DTex,(temp2DTex->klass->vtable)._7_get_height.method);
    bVar7 = UnityStandardAssets_ImageEffects_ColorCorrectionLookup__ValidDimensions
                      (__this_01,temp2DTex,method_00);
    if ((char)bVar7 == '\0') {
      pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)temp2DTex,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat("The given 2D texture ",pSVar10," cannot be used as a 3D LUT.",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      (__this->fields).converted3DLut = "";
LAB_0425b326:
      il2cpp_runtime_glue(&(__this->fields).converted3DLut);
      return;
    }
    pUVar9 = UnityEngine_Texture2D__GetPixels(temp2DTex,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Color_array *)0x0) {
      colors = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color);
      if (0 < (int)width) {
        iVar8 = width * width;
        uVar17 = (width - 1) * iVar8;
        uVar18 = 0;
        do {
          uVar19 = 0;
          uVar16 = uVar18;
          uVar14 = uVar17;
          do {
            uVar12 = (ulong)width;
            uVar15 = uVar14;
            uVar11 = uVar16;
            if (colors == (UnityEngine_Color_array *)0x0) {
              if ((uint)pUVar9->max_length <= iVar8 * (width + ~uVar19) + uVar18) {
LAB_0425b350:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              goto LAB_0425b34b;
            }
            do {
              if (((uint)pUVar9->max_length <= uVar15) || ((uint)colors->max_length <= uVar11))
              goto LAB_0425b350;
              pUVar1 = pUVar9->m_Items + (int)uVar15;
              fVar4 = (pUVar1->fields).g;
              fVar5 = (pUVar1->fields).b;
              fVar6 = (pUVar1->fields).a;
              pUVar2 = colors->m_Items + (int)uVar11;
              (pUVar2->fields).r = (pUVar1->fields).r;
              (pUVar2->fields).g = fVar4;
              (pUVar2->fields).b = fVar5;
              (pUVar2->fields).a = fVar6;
              uVar12 = uVar12 - 1;
              uVar15 = uVar15 + width;
              uVar11 = uVar11 + iVar8;
            } while (uVar12 != 0);
            uVar19 = uVar19 + 1;
            uVar16 = uVar16 + width;
            uVar14 = uVar14 - iVar8;
          } while (uVar19 != width);
          uVar18 = uVar18 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar18 != width);
      }
      pUVar3 = (UnityEngine_Object_o *)(__this->fields).material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ppUVar13 = &(__this->fields).material;
      bVar7 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar3 = (UnityEngine_Object_o *)*ppUVar13;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
      }
      __this_00 = (UnityEngine_Texture3D_o *)il2cpp_runtime_glue(TypeInfo_Texture3D);
      UnityEngine_Texture3D___ctor(__this_00,width,width,width,5,0,(MethodInfo *)0x0);
      *ppUVar13 = (UnityEngine_Material_o *)__this_00;
      il2cpp_runtime_glue(ppUVar13,__this_00);
      if ((UnityEngine_Texture3D_o *)*ppUVar13 != (UnityEngine_Texture3D_o *)0x0) {
        UnityEngine_Texture3D__SetPixels
                  ((UnityEngine_Texture3D_o *)*ppUVar13,colors,(MethodInfo *)0x0);
        if ((UnityEngine_Texture3D_o *)*ppUVar13 != (UnityEngine_Texture3D_o *)0x0) {
          UnityEngine_Texture3D__Apply((UnityEngine_Texture3D_o *)*ppUVar13,(MethodInfo *)0x0);
          (__this->fields).converted3DLut = (UnityEngine_Texture3D_o *)path;
          goto LAB_0425b326;
        }
      }
    }
  }
LAB_0425b34b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnRenderImage (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425b360

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup__OnRenderImage
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Texture_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  int32_t iVar5;
  MethodInfo *method_00;
  float fVar6;
  
  if (DAT_05705248 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_ClutTex");
    il2cpp_init_method_metadata(&"_Scale");
    il2cpp_init_method_metadata(&"_Offset");
    DAT_05705248 = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar2 != '\0') {
    bVar3 = UnityEngine_SystemInfo__get_supports3DTextures((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      x = (UnityEngine_Object_o *)(__this->fields).material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
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
            UnityEngine_Material__SetFloat
                      (pUVar1,"_Scale",(float)(iVar4 + -1) / fVar6,(MethodInfo *)0x0);
            pUVar1 = (UnityEngine_Material_o *)(__this->fields).shader;
            if (pUVar1 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat
                        (pUVar1,"_Offset",1.0 / (fVar6 + fVar6),(MethodInfo *)0x0);
              pUVar1 = (UnityEngine_Material_o *)(__this->fields).shader;
              if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetTexture
                          (pUVar1,"_ClutTex",(UnityEngine_Texture_o *)(__this->fields).material,
                           (MethodInfo *)0x0);
                pUVar1 = (UnityEngine_Material_o *)(__this->fields).shader;
                iVar5 = UnityEngine_QualitySettings__get_activeColorSpace((MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Graphics__Blit
                          ((UnityEngine_Texture_o *)source,destination,pUVar1,(uint)(iVar5 == 1),
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionLookup$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionLookup___ctor (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o* __this, const MethodInfo* method);
// 0x425b570

void UnityStandardAssets_ImageEffects_ColorCorrectionLookup___ctor
               (UnityStandardAssets_ImageEffects_ColorCorrectionLookup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_05705249 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05705249 = '\x01';
  }
  (__this->fields).converted3DLut = "";
  il2cpp_runtime_glue(&(__this->fields).converted3DLut);
  if (DAT_05705271 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_init_method_metadata(&TypeInfo_List_Material);
    DAT_05705271 = '\x01';
  }
  *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Material);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported = __this_00;
  il2cpp_runtime_glue(&(__this->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


