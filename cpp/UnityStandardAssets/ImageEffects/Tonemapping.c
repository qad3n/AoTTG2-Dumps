// Type: UnityStandardAssets.ImageEffects.Tonemapping
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Tonemapping.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Tonemapping.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.Tonemapping$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_Tonemapping__CheckResources (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x42638b0

bool_conflict
UnityStandardAssets_ImageEffects_Tonemapping__CheckResources
          (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o **ppUVar1;
  UnityEngine_AnimationCurve_o *exists;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Texture2D_o *__this_00;
  ulong extraout_RAX;
  undefined8 extraout_RAX_00;
  ulong uVar5;
  
  if (DAT_05705287 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_05705287 = '\x01';
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,0,1,(MethodInfo *)0x0);
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).white,
                      *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat,
                      (MethodInfo *)0x0);
  *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat = pUVar4;
  il2cpp_runtime_glue(&(__this->fields).validRenderTextureFormat);
  exists = (__this->fields).remapCurve;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  uVar5 = (ulong)uVar2;
  if (((char)uVar2 == '\0') && (*(int *)&(__this->fields).createdMaterials == 1)) {
    ppUVar1 = &(__this->fields).remapCurve;
    __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(__this_00,0x100,1,5,0,1,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_AnimationCurve_o *)__this_00;
    il2cpp_runtime_glue(ppUVar1,__this_00);
    if ((UnityEngine_Texture_o *)*ppUVar1 != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
      if ((UnityEngine_Texture_o *)*ppUVar1 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
        if (*ppUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
          UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar1,0x34,(MethodInfo *)0x0)
          ;
          uVar5 = extraout_RAX;
          goto LAB_042639da;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_042639da:
  bVar3 = (bool_conflict)CONCAT71((int7)(uVar5 >> 8),1);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) == '\0') {
    UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
              ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
    bVar3 = (bool_conflict)
            CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),
                     *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
  }
  return bVar3;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$UpdateCurve
// il2cpp: float UnityStandardAssets_ImageEffects_Tonemapping__UpdateCurve (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4263a10

float UnityStandardAssets_ImageEffects_Tonemapping__UpdateCurve
                (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Texture2D_o *pUVar2;
  UnityEngine_Keyframe_o __this_00;
  UnityEngine_Keyframe_o __this_01;
  UnityEngine_Keyframe_o __this_02;
  undefined4 uVar3;
  undefined4 uVar4;
  int32_t iVar5;
  UnityEngine_Keyframe_array *pUVar6;
  UnityEngine_AnimationCurve_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o color;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  float in_stack_ffffffffffffff38;
  float in_stack_ffffffffffffff3c;
  float in_stack_ffffffffffffff40;
  float fStack_bc;
  int32_t iStack_b8;
  undefined8 uStack_b4;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  int32_t iStack_98;
  undefined8 uStack_94;
  undefined1 local_88 [8];
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  _union_14 local_68;
  float fStack_60;
  float fStack_5c;
  int32_t iStack_58;
  undefined8 uStack_54;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_05705288 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationCurve);
    il2cpp_init_method_metadata(&TypeInfo_Keyframe);
    DAT_05705288 = '\x01';
  }
  iStack_58 = 0;
  uStack_54 = 0;
  local_68.genericMethod = (Il2CppClass *)0x0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  pUVar7 = *(UnityEngine_AnimationCurve_o **)&(__this->fields).type;
  if (pUVar7 != (UnityEngine_AnimationCurve_o *)0x0) {
    pUVar6 = UnityEngine_AnimationCurve__get_keys(pUVar7,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Keyframe_array *)0x0) {
      piVar1 = &(__this->fields).type;
      if ((int)pUVar6->max_length < 1) {
        pUVar6 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
        uStack_78 = 0;
        uStack_74 = 0;
        local_88 = (undefined1  [8])0x0;
        fStack_80 = 0.0;
        uStack_7c = 0;
        __this_00.fields.m_InTangent = (float)in_stack_ffffffffffffff30;
        __this_00.fields.m_Time = (float)(int)in_stack_ffffffffffffff28;
        __this_00.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        __this_00.fields.m_OutTangent = (float)in_stack_ffffffffffffff34;
        __this_00.fields.m_WeightedMode = (int32_t)in_stack_ffffffffffffff38;
        __this_00.fields.m_InWeight = in_stack_ffffffffffffff3c;
        __this_00.fields.m_OutWeight = in_stack_ffffffffffffff40;
        UnityEngine_Keyframe___ctor(__this_00,0.0,0.0,(MethodInfo *)local_88);
        if (pUVar6 == (UnityEngine_Keyframe_array *)0x0) goto LAB_04263cdd;
        uVar3 = local_88._0_4_;
        uVar4 = local_88._4_4_;
        if ((int)pUVar6->max_length == 0) {
LAB_04263ce2:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar6->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
        pUVar6->m_Items[0].fields.m_WeightedMode = uStack_78;
        *(undefined8 *)&pUVar6->m_Items[0].fields.m_InWeight = uStack_74;
        pUVar6->m_Items[0].fields.m_Time = (float)local_88._0_4_;
        pUVar6->m_Items[0].fields.m_Value = (float)local_88._4_4_;
        pUVar6->m_Items[0].fields.m_InTangent = fStack_80;
        pUVar6->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
        iStack_98 = 0;
        uStack_94 = 0;
        local_a8 = (undefined1  [8])0x0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        __this_01.fields.m_InTangent = (float)in_stack_ffffffffffffff30;
        __this_01.fields.m_Time = (float)(int)in_stack_ffffffffffffff28;
        __this_01.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        __this_01.fields.m_OutTangent = (float)in_stack_ffffffffffffff34;
        __this_01.fields.m_WeightedMode = uVar3;
        __this_01.fields.m_InWeight = (float)uVar4;
        __this_01.fields.m_OutWeight = fStack_80;
        UnityEngine_Keyframe___ctor(__this_01,2.0,1.0,(MethodInfo *)local_a8);
        iStack_b8 = iStack_98;
        uStack_b4 = uStack_94;
        fStack_bc = fStack_9c;
        if ((uint)pUVar6->max_length < 2) goto LAB_04263ce2;
        pUVar6->m_Items[1].fields.m_OutTangent = fStack_9c;
        pUVar6->m_Items[1].fields.m_WeightedMode = iStack_98;
        *(undefined8 *)&pUVar6->m_Items[1].fields.m_InWeight = uStack_94;
        pUVar6->m_Items[1].fields.m_Time = (float)local_a8._0_4_;
        pUVar6->m_Items[1].fields.m_Value = (float)local_a8._4_4_;
        pUVar6->m_Items[1].fields.m_InTangent = fStack_a0;
        pUVar6->m_Items[1].fields.m_OutTangent = fStack_9c;
        in_stack_ffffffffffffff38 = (float)local_a8._0_4_;
        in_stack_ffffffffffffff3c = (float)local_a8._4_4_;
        in_stack_ffffffffffffff40 = fStack_a0;
        pUVar7 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_glue(TypeInfo_AnimationCurve);
        UnityEngine_AnimationCurve___ctor(pUVar7,pUVar6,(MethodInfo *)0x0);
        *(UnityEngine_AnimationCurve_o **)piVar1 = pUVar7;
        il2cpp_runtime_glue(piVar1);
      }
      fVar9 = 1.0;
      if (*(UnityEngine_AnimationCurve_o **)piVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
        iVar5 = UnityEngine_AnimationCurve__get_length
                          (*(UnityEngine_AnimationCurve_o **)piVar1,(MethodInfo *)0x0);
        fVar9 = 1.0;
        if (0 < iVar5) {
          pUVar7 = *(UnityEngine_AnimationCurve_o **)piVar1;
          if (pUVar7 == (UnityEngine_AnimationCurve_o *)0x0) goto LAB_04263cdd;
          iVar5 = UnityEngine_AnimationCurve__get_length(pUVar7,(MethodInfo *)0x0);
          UnityEngine_AnimationCurve__get_Item
                    ((UnityEngine_Keyframe_o *)&stack0xffffffffffffff38,pUVar7,iVar5 + -1,
                     (MethodInfo *)0x0);
          local_68._4_4_ = in_stack_ffffffffffffff3c;
          local_68._0_4_ = in_stack_ffffffffffffff38;
          iStack_58 = iStack_b8;
          uStack_54 = uStack_b4;
          fStack_5c = fStack_bc;
          __this_02.fields.m_InTangent = (float)in_stack_ffffffffffffff30;
          __this_02.fields.m_Time = (float)(int)in_stack_ffffffffffffff28;
          __this_02.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
          __this_02.fields.m_OutTangent = (float)in_stack_ffffffffffffff34;
          __this_02.fields.m_WeightedMode = (int32_t)in_stack_ffffffffffffff38;
          __this_02.fields.m_InWeight = in_stack_ffffffffffffff3c;
          __this_02.fields.m_OutWeight = in_stack_ffffffffffffff40;
          fStack_60 = in_stack_ffffffffffffff40;
          fVar9 = UnityEngine_Keyframe__get_time(__this_02,(MethodInfo *)&local_68);
        }
        fVar10 = 0.0;
        do {
          if (*(UnityEngine_AnimationCurve_o **)piVar1 == (UnityEngine_AnimationCurve_o *)0x0)
          goto LAB_04263cdd;
          fVar8 = UnityEngine_AnimationCurve__Evaluate
                            (*(UnityEngine_AnimationCurve_o **)piVar1,fVar9 * fVar10,
                             (MethodInfo *)0x0);
          pUVar2 = (UnityEngine_Texture2D_o *)(__this->fields).remapCurve;
          if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_04263cdd;
          local_48 = ZEXT416((uint)fVar8);
          local_38._4_4_ = fVar8;
          local_38._0_4_ = fVar8;
          uStack_30 = 0;
          fVar8 = floorf(fVar10 * 255.0);
          color.fields.a = 1.0;
          color.fields.b = (float)local_48._0_4_;
          color.fields._0_8_ = local_38;
          UnityEngine_Texture2D__SetPixel(pUVar2,(int)fVar8,0,color,(MethodInfo *)0x0);
          fVar10 = fVar10 + 0.003921569;
        } while (fVar10 <= 1.0);
        pUVar2 = (UnityEngine_Texture2D_o *)(__this->fields).remapCurve;
        if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_04263cdd;
        UnityEngine_Texture2D__Apply(pUVar2,(MethodInfo *)0x0);
      }
      return 1.0 / fVar9;
    }
  }
LAB_04263cdd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Tonemapping$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_Tonemapping__OnDisable (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4263cf0

void UnityStandardAssets_ImageEffects_Tonemapping__OnDisable
               (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  bool_conflict *pbVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_AnimationCurve_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_AnimationCurve_o **ppUVar6;
  
  if (DAT_05705289 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705289 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).tonemapMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppUVar1 = &(__this->fields).tonemapMaterial;
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_Material_o *)0x0;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar3 = *(UnityEngine_Object_o **)&(__this->fields).validRenderTextureFormat;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pbVar2 = &(__this->fields).validRenderTextureFormat;
    pUVar3 = *(UnityEngine_Object_o **)pbVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
    *(undefined8 *)pbVar2 = 0;
    il2cpp_runtime_glue(pbVar2);
  }
  pUVar4 = (__this->fields).remapCurve;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppUVar6 = &(__this->fields).remapCurve;
    pUVar4 = *ppUVar6;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
    *ppUVar6 = (UnityEngine_AnimationCurve_o *)0x0;
    il2cpp_runtime_glue(ppUVar6,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$CreateInternalRenderTexture
// il2cpp: bool UnityStandardAssets_ImageEffects_Tonemapping__CreateInternalRenderTexture (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4263e40

bool_conflict
UnityStandardAssets_ImageEffects_Tonemapping__CreateInternalRenderTexture
          (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_RenderTexture_o *__this_00;
  bool_conflict bVar3;
  int32_t format;
  
  if (DAT_0570528a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RenderTexture);
    DAT_0570528a = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).tonemapMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = 0;
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xd,(MethodInfo *)0x0);
    format = 2;
    if ((char)bVar2 != '\0') {
      format = 0xd;
    }
    *(int32_t *)&(__this->fields).rt = format;
    __this_00 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_glue(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor(__this_00,1,1,0,format,(MethodInfo *)0x0);
    (__this->fields).tonemapMaterial = (UnityEngine_Material_o *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).tonemapMaterial,__this_00);
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).tonemapMaterial;
    if (pUVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(pUVar1,0x34,(MethodInfo *)0x0);
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
  }
  return bVar3;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Tonemapping__OnRenderImage (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4263f30

void UnityStandardAssets_ImageEffects_Tonemapping__OnRenderImage
               (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Texture_o *pUVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UnityEngine_Texture_o *source_00;
  long *plVar7;
  UnityEngine_RenderTexture_o *pUVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int32_t iVar12;
  UnityEngine_Material_o *pUVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  MethodInfo *method_00;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  UnityEngine_Vector4_o value;
  UnityEngine_Texture_o *pUStack_68;
  
  if (DAT_0570528b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_RenderTexture);
    il2cpp_init_method_metadata(&"_HdrParams");
    il2cpp_init_method_metadata(&"No valid adaptive tonemapper type found!");
    il2cpp_init_method_metadata(&"_ExposureAdjustment");
    il2cpp_init_method_metadata(&"_Curve");
    il2cpp_init_method_metadata(&"_SmallTex");
    il2cpp_init_method_metadata(&"_AdaptionSpeed");
    il2cpp_init_method_metadata(&"_RangeScale");
    DAT_0570528b = '\x01';
  }
  method_00 = (__this->klass->vtable)._4_CheckResources.method;
  cVar2 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar2 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  fVar19 = *(float *)&(__this->fields).curveTex;
  fVar21 = 0.001;
  if (0.001 <= fVar19) {
    fVar21 = fVar19;
  }
  *(float *)&(__this->fields).curveTex = fVar21;
  switch(*(undefined4 *)&(__this->fields).createdMaterials) {
  case 0:
    pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar13 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar13,"_ExposureAdjustment",fVar21,(MethodInfo *)0x0);
      pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar12 = 6;
LAB_042641f4:
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)source,destination,pUVar13,iVar12,(MethodInfo *)0x0);
      return;
    }
    break;
  case 1:
    fVar19 = UnityStandardAssets_ImageEffects_Tonemapping__UpdateCurve(__this,method_00);
    pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar13 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar13,"_RangeScale",fVar19,(MethodInfo *)0x0);
      pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (pUVar13 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetTexture
                  (pUVar13,"_Curve",(UnityEngine_Texture_o *)(__this->fields).remapCurve,
                   (MethodInfo *)0x0);
        pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar12 = 4;
        goto LAB_042641f4;
      }
    }
    break;
  case 2:
    pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar13 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar13,"_ExposureAdjustment",fVar21,(MethodInfo *)0x0);
      pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar12 = 5;
      goto LAB_042641f4;
    }
    break;
  case 3:
    pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar13 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar13,"_ExposureAdjustment",fVar21,(MethodInfo *)0x0);
      pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar12 = 8;
      goto LAB_042641f4;
    }
    break;
  case 4:
    pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar13 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar13,"_ExposureAdjustment",fVar21 * 0.5,(MethodInfo *)0x0);
      pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar12 = 7;
      goto LAB_042641f4;
    }
    break;
  default:
    uVar3 = UnityStandardAssets_ImageEffects_Tonemapping__CreateInternalRenderTexture
                      (__this,method_00);
    iVar12 = *(int32_t *)((long)&(__this->fields).createdMaterials + 4);
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary
                          (iVar12,iVar12,0,*(int32_t *)&(__this->fields).rt,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,
               (MethodInfo *)0x0);
    if (source_00 != (UnityEngine_Texture_o *)0x0) {
      iVar4 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                        (source_00,(source_00->klass->vtable)._5_get_width.method);
      if (DAT_05705291 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_05705291 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      dVar20 = System_Math__Log((double)iVar4,2.0,(MethodInfo *)0x0);
      uVar14 = (uint)dVar20;
      plVar7 = (long *)il2cpp_glue_02274930(TypeInfo_RenderTexture,uVar14);
      if ((int)uVar14 < 1) {
        if (plVar7 == (long *)0x0) break;
      }
      else {
        if (plVar7 == (long *)0x0) {
          iVar4 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                            (source_00,(source_00->klass->vtable)._5_get_width.method);
          uVar18 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                             (source_00,(source_00->klass->vtable)._5_get_width.method);
          UnityEngine_RenderTexture__GetTemporary
                    (iVar4 / 2,(int)(((uint)(uVar18 >> 0x1f) & 1) + (int)uVar18) >> 1,0,
                     *(int32_t *)&(__this->fields).rt,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar16 = plVar7 + 4;
        iVar4 = 2;
        uVar18 = 0;
        do {
          iVar5 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                            (source_00,(source_00->klass->vtable)._5_get_width.method);
          iVar6 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                            (source_00,(source_00->klass->vtable)._5_get_width.method);
          pUVar8 = UnityEngine_RenderTexture__GetTemporary
                             (iVar5 / iVar4,iVar6 / iVar4,0,*(int32_t *)&(__this->fields).rt,
                              (MethodInfo *)0x0);
          if ((pUVar8 != (UnityEngine_RenderTexture_o *)0x0) &&
             (lVar9 = il2cpp_runtime_glue(pUVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
            uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar11,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar18) goto LAB_042647c8;
          *plVar16 = (long)pUVar8;
          il2cpp_runtime_glue(plVar16,pUVar8);
          iVar4 = iVar4 * 2;
          uVar18 = uVar18 + 1;
          plVar16 = plVar16 + 1;
        } while (uVar14 != uVar18);
      }
      uVar17 = uVar14 - 1;
      if (*(uint *)(plVar7 + 3) <= uVar17) {
LAB_042647c8:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUStack_68 = (UnityEngine_Texture_o *)plVar7[(long)(int)uVar17 + 4];
      pUVar8 = (UnityEngine_RenderTexture_o *)plVar7[4];
      pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit(source_00,pUVar8,pUVar13,1,(MethodInfo *)0x0);
      iVar4 = *(int *)&(__this->fields).createdMaterials;
      if (iVar4 == 6) {
        if (0 < (int)uVar17) {
          uVar10 = (ulong)*(uint *)(plVar7 + 3);
          uVar18 = 0;
          do {
            uVar15 = uVar18;
            if ((uVar10 <= uVar15) || (uVar18 = uVar15 + 1, uVar10 <= uVar18)) goto LAB_042647c8;
            pUVar1 = (UnityEngine_Texture_o *)plVar7[uVar15 + 4];
            pUVar8 = (UnityEngine_RenderTexture_o *)plVar7[uVar15 + 5];
            pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit(pUVar1,pUVar8,pUVar13,9,(MethodInfo *)0x0);
            uVar10 = (ulong)*(uint *)(plVar7 + 3);
            if (uVar10 <= uVar18) goto LAB_042647c8;
          } while (uVar17 != uVar18);
          pUStack_68 = (UnityEngine_Texture_o *)plVar7[uVar15 + 5];
        }
      }
      else if ((iVar4 == 5) && (0 < (int)uVar17)) {
        uVar10 = (ulong)*(uint *)(plVar7 + 3);
        uVar18 = 0;
        do {
          uVar15 = uVar18;
          if ((uVar10 <= uVar15) || (uVar18 = uVar15 + 1, uVar10 <= uVar18)) goto LAB_042647c8;
          pUVar1 = (UnityEngine_Texture_o *)plVar7[uVar15 + 4];
          pUVar8 = (UnityEngine_RenderTexture_o *)plVar7[uVar15 + 5];
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit(pUVar1,pUVar8,(MethodInfo *)0x0);
          uVar10 = (ulong)*(uint *)(plVar7 + 3);
          if (uVar10 <= uVar18) goto LAB_042647c8;
        } while (uVar17 != uVar18);
        pUStack_68 = (UnityEngine_Texture_o *)plVar7[uVar15 + 5];
      }
      fVar19 = (__this->fields).middleGrey;
      fVar21 = 0.001;
      if (0.001 <= fVar19) {
        fVar21 = fVar19;
      }
      (__this->fields).middleGrey = fVar21;
      pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (pUVar13 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat(pUVar13,"_AdaptionSpeed",fVar21,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_RenderTexture_o *)(__this->fields).tonemapMaterial;
        if (pUVar8 != (UnityEngine_RenderTexture_o *)0x0) {
          UnityEngine_RenderTexture__MarkRestoreExpected(pUVar8,(MethodInfo *)0x0);
          pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
          pUVar8 = (UnityEngine_RenderTexture_o *)(__this->fields).tonemapMaterial;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit(pUStack_68,pUVar8,pUVar13,uVar3 & 0xff | 2,(MethodInfo *)0x0);
          fVar19 = *(float *)((long)&(__this->fields).curveTex + 4);
          fVar21 = 0.001;
          if (0.001 <= fVar19) {
            fVar21 = fVar19;
          }
          *(float *)((long)&(__this->fields).curveTex + 4) = fVar21;
          pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
          if (pUVar13 != (UnityEngine_Material_o *)0x0) {
            fVar19 = (__this->fields).exposureAdjustment;
            value.fields.w = fVar19 * fVar19;
            value.fields.z = fVar21;
            value.fields.y = fVar21;
            value.fields.x = fVar21;
            UnityEngine_Material__SetVector(pUVar13,"_HdrParams",value,(MethodInfo *)0x0);
            pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
            if (pUVar13 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetTexture
                        (pUVar13,"_SmallTex",
                         (UnityEngine_Texture_o *)(__this->fields).tonemapMaterial,(MethodInfo *)0x0
                        );
              iVar4 = *(int *)&(__this->fields).createdMaterials;
              if (iVar4 == 6) {
                pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Graphics__Blit
                          ((UnityEngine_Texture_o *)source,destination,pUVar13,10,(MethodInfo *)0x0)
                ;
              }
              else if (iVar4 == 5) {
                pUVar13 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Graphics__Blit
                          ((UnityEngine_Texture_o *)source,destination,pUVar13,0,(MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Debug__LogError("No valid adaptive tonemapper type found!",(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Graphics__Blit
                          ((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
              }
              if (0 < (int)uVar14) {
                uVar18 = 0;
                do {
                  if (*(uint *)(plVar7 + 3) <= uVar18) goto LAB_042647c8;
                  UnityEngine_RenderTexture__ReleaseTemporary
                            ((UnityEngine_RenderTexture_o *)plVar7[uVar18 + 4],(MethodInfo *)0x0);
                  uVar18 = uVar18 + 1;
                } while (uVar14 != uVar18);
              }
              UnityEngine_RenderTexture__ReleaseTemporary
                        ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Tonemapping$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Tonemapping___ctor (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4264840

void UnityStandardAssets_ImageEffects_Tonemapping___ctor
               (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  (__this->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x10000000003;
  (__this->fields).curveTex = (UnityEngine_Texture2D_o *)0x3ecccccd3fc00000;
  (__this->fields).exposureAdjustment = 2.0;
  (__this->fields).middleGrey = 1.5;
  *(undefined1 *)&(__this->fields).tonemapper = 1;
  *(undefined4 *)&(__this->fields).rt = 2;
  UnityStandardAssets_ImageEffects_PostEffectsBase___ctor
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
  return;
}


