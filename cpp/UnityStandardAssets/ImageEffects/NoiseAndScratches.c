// Type: UnityStandardAssets.ImageEffects.NoiseAndScratches
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/NoiseAndScratches.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/NoiseAndScratches.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.NoiseAndScratches$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndScratches__Start (UnityStandardAssets_ImageEffects_NoiseAndScratches_o* __this, const MethodInfo* method);
// 0x425f370

void UnityStandardAssets_ImageEffects_NoiseAndScratches__Start
               (UnityStandardAssets_ImageEffects_NoiseAndScratches_o *__this,MethodInfo *method)

{
  UnityEngine_Texture_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Shader_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05705266 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata();
    DAT_05705266 = '\x01';
  }
  bVar2 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).scratchTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      x = (UnityEngine_Object_o *)(__this->fields).shaderRGB;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pUVar1 = (__this->fields).scratchTexture;
        if (pUVar1 != (UnityEngine_Texture_o *)0x0) {
          bVar2 = UnityEngine_Shader__get_isSupported
                            ((UnityEngine_Shader_o *)pUVar1,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') goto LAB_0425f431;
          __this_00 = (__this->fields).shaderRGB;
          if (__this_00 != (UnityEngine_Shader_o *)0x0) {
            bVar2 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              *(undefined1 *)((long)&(__this->fields).monochrome + 1) = 1;
            }
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log("Noise shaders are not set up! Disabling noise effect.",(MethodInfo *)0x0);
  }
LAB_0425f431:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.NoiseAndScratches$$get_material
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_NoiseAndScratches__get_material (UnityStandardAssets_ImageEffects_NoiseAndScratches_o* __this, const MethodInfo* method);
// 0x425f480

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_NoiseAndScratches__get_material
          (UnityStandardAssets_ImageEffects_NoiseAndScratches_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  char cVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Texture_o *shader;
  UnityEngine_Shader_o *shader_00;
  bool_conflict bVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Shader_o **ppUVar6;
  
  if (DAT_05705267 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705267 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).shaderYUV;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar6 = &(__this->fields).shaderYUV;
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    shader = (__this->fields).scratchTexture;
    pUVar5 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(pUVar5,(UnityEngine_Shader_o *)shader,(MethodInfo *)0x0);
    (__this->fields).shaderYUV = (UnityEngine_Shader_o *)pUVar5;
    il2cpp_runtime_glue(ppUVar6,pUVar5);
    pUVar3 = (UnityEngine_Object_o *)(__this->fields).shaderYUV;
    if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0425f5d5;
    UnityEngine_Object__set_hideFlags(pUVar3,0x3d,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_MaterialRGB;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).m_MaterialRGB;
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 == '\0') || (*(char *)((long)&(__this->fields).monochrome + 1) != '\0')) {
    cVar2 = *(char *)((long)&(__this->fields).monochrome + 1);
  }
  else {
    shader_00 = (__this->fields).shaderRGB;
    pUVar5 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(pUVar5,shader_00,(MethodInfo *)0x0);
    (__this->fields).m_MaterialRGB = pUVar5;
    il2cpp_runtime_glue(ppUVar1,pUVar5);
    pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_MaterialRGB;
    if (pUVar3 == (UnityEngine_Object_o *)0x0) {
LAB_0425f5d5:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(pUVar3,0x3d,(MethodInfo *)0x0);
    cVar2 = *(char *)((long)&(__this->fields).monochrome + 1);
  }
  if ((cVar2 == '\0') && ((char)(__this->fields).monochrome == '\0')) {
    ppUVar6 = (UnityEngine_Shader_o **)ppUVar1;
  }
  return (UnityEngine_Material_o *)*ppUVar6;
}


// UnityStandardAssets.ImageEffects.NoiseAndScratches$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndScratches__OnDisable (UnityStandardAssets_ImageEffects_NoiseAndScratches_o* __this, const MethodInfo* method);
// 0x425f5e0

void UnityStandardAssets_ImageEffects_NoiseAndScratches__OnDisable
               (UnityStandardAssets_ImageEffects_NoiseAndScratches_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05705268 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705268 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).shaderYUV;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).shaderYUV;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_MaterialRGB;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_MaterialRGB;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.NoiseAndScratches$$SanitizeParameters
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndScratches__SanitizeParameters (UnityStandardAssets_ImageEffects_NoiseAndScratches_o* __this, const MethodInfo* method);
// 0x425f6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityStandardAssets_ImageEffects_NoiseAndScratches__SanitizeParameters
               (UnityStandardAssets_ImageEffects_NoiseAndScratches_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  
  fVar1 = (__this->fields).scratchIntensityMin;
  fVar3 = 5.0;
  if (fVar1 <= 5.0) {
    fVar3 = fVar1;
  }
  (__this->fields).scratchIntensityMin = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar3);
  fVar1 = (__this->fields).scratchIntensityMax;
  fVar3 = 30.0;
  if (fVar1 <= 30.0) {
    fVar3 = fVar1;
  }
  (__this->fields).scratchIntensityMax =
       (float)(~-(uint)(1.0 <= fVar1) & 0x3f800000 | (uint)fVar3 & -(uint)(1.0 <= fVar1));
  fVar1 = (__this->fields).scratchFPS;
  fVar3 = 1.0;
  if (fVar1 <= 1.0) {
    fVar3 = fVar1;
  }
  (__this->fields).scratchFPS = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar3);
  auVar2._0_4_ = (__this->fields).rgbFallback;
  auVar2._4_4_ = (__this->fields).grainIntensityMin;
  auVar2._8_4_ = (__this->fields).grainIntensityMax;
  auVar2._12_4_ = (__this->fields).grainSize;
  auVar4 = minps(_DAT_00cd08b0,auVar2);
  (__this->fields).rgbFallback = auVar4._0_4_ & -(uint)(0.0 <= (float)auVar2._0_4_);
  (__this->fields).grainIntensityMin = (float)(auVar4._4_4_ & -(uint)(0.0 <= (float)auVar2._4_4_));
  (__this->fields).grainIntensityMax =
       (float)(~-(uint)(0.1 <= (float)auVar2._8_4_) & 0x3dcccccd |
              auVar4._8_4_ & -(uint)(0.1 <= (float)auVar2._8_4_));
  (__this->fields).grainSize = (float)(auVar4._12_4_ & -(uint)(0.0 <= (float)auVar2._12_4_));
  return;
}


// UnityStandardAssets.ImageEffects.NoiseAndScratches$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndScratches__OnRenderImage (UnityStandardAssets_ImageEffects_NoiseAndScratches_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425f730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityStandardAssets_ImageEffects_NoiseAndScratches__OnRenderImage
               (UnityStandardAssets_ImageEffects_NoiseAndScratches_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  UnityEngine_Texture_o *pUVar5;
  int32_t iVar6;
  int iVar7;
  int32_t iVar8;
  int iVar9;
  UnityEngine_Material_o *__this_00;
  MethodInfo *method_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  
  method_00 = (MethodInfo *)source;
  if (DAT_05705269 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_GrainOffsetScale");
    il2cpp_init_method_metadata(&"_Intensity");
    il2cpp_init_method_metadata(&"_GrainTex");
    il2cpp_init_method_metadata(&"_ScratchTex");
    il2cpp_init_method_metadata();
    DAT_05705269 = '\x01';
  }
  fVar10 = (__this->fields).scratchIntensityMin;
  fVar11 = 5.0;
  if (fVar10 <= 5.0) {
    fVar11 = fVar10;
  }
  (__this->fields).scratchIntensityMin = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar11);
  fVar10 = (__this->fields).scratchIntensityMax;
  fVar11 = 30.0;
  if (fVar10 <= 30.0) {
    fVar11 = fVar10;
  }
  (__this->fields).scratchIntensityMax =
       (float)(~-(uint)(1.0 <= fVar10) & 0x3f800000 | (uint)fVar11 & -(uint)(1.0 <= fVar10));
  fVar10 = (__this->fields).scratchFPS;
  fVar11 = 1.0;
  if (fVar10 <= 1.0) {
    fVar11 = fVar10;
  }
  (__this->fields).scratchFPS = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar11);
  auVar3._0_4_ = (__this->fields).rgbFallback;
  auVar3._4_4_ = (__this->fields).grainIntensityMin;
  auVar3._8_4_ = (__this->fields).grainIntensityMax;
  auVar3._12_4_ = (__this->fields).grainSize;
  auVar14 = minps(_DAT_00cd08b0,auVar3);
  (__this->fields).rgbFallback = auVar14._0_4_ & -(uint)(0.0 <= (float)auVar3._0_4_);
  (__this->fields).grainIntensityMin = (float)(auVar14._4_4_ & -(uint)(0.0 <= (float)auVar3._4_4_));
  (__this->fields).grainIntensityMax =
       (float)(~-(uint)(0.1 <= (float)auVar3._8_4_) & 0x3dcccccd |
              auVar14._8_4_ & -(uint)(0.1 <= (float)auVar3._8_4_));
  (__this->fields).grainSize = (float)(auVar14._12_4_ & -(uint)(0.0 <= (float)auVar3._12_4_));
  fVar10 = *(float *)&(__this->fields).m_MaterialYUV;
  if (fVar10 <= 0.0) {
    fVar10 = UnityEngine_Random__get_value((MethodInfo *)0x0);
    *(float *)&(__this->fields).m_MaterialYUV =
         (fVar10 + fVar10) / (__this->fields).scratchIntensityMax;
    fVar10 = UnityEngine_Random__get_value((MethodInfo *)0x0);
    *(float *)((long)&(__this->fields).m_MaterialYUV + 4) = fVar10;
    fVar10 = UnityEngine_Random__get_value((MethodInfo *)0x0);
    (__this->fields).scratchTimeLeft = fVar10;
    fVar10 = *(float *)&(__this->fields).m_MaterialYUV;
  }
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  *(float *)&(__this->fields).m_MaterialYUV = fVar10 - fVar11;
  __this_00 = UnityStandardAssets_ImageEffects_NoiseAndScratches__get_material(__this,method_00);
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetTexture
              (__this_00,"_GrainTex",*(UnityEngine_Texture_o **)&(__this->fields).scratchJitter,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetTexture
              (__this_00,"_ScratchTex",(__this->fields).grainTexture,(MethodInfo *)0x0);
    fVar10 = 1.0 / (__this->fields).grainIntensityMax;
    value.fields.x = UnityEngine_Random__get_value((MethodInfo *)0x0);
    fVar11 = UnityEngine_Random__get_value((MethodInfo *)0x0);
    iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    plVar4 = *(long **)&(__this->fields).scratchJitter;
    if (plVar4 != (long *)0x0) {
      iVar7 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      iVar8 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      plVar4 = *(long **)&(__this->fields).scratchJitter;
      if (plVar4 != (long *)0x0) {
        iVar9 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        value.fields.z = ((float)iVar6 / (float)iVar7) * fVar10;
        value.fields.w = ((float)iVar8 / (float)iVar9) * fVar10;
        value.fields.y = fVar11;
        UnityEngine_Material__SetVector(__this_00,"_GrainOffsetScale",value,(MethodInfo *)0x0);
        fVar10 = *(float *)((long)&(__this->fields).m_MaterialYUV + 4);
        fVar12 = UnityEngine_Random__get_value((MethodInfo *)0x0);
        fVar11 = (__this->fields).scratchFPS;
        fVar1 = (__this->fields).scratchTimeLeft;
        fVar13 = UnityEngine_Random__get_value((MethodInfo *)0x0);
        fVar2 = (__this->fields).scratchFPS;
        iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        pUVar5 = (__this->fields).grainTexture;
        if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
          iVar7 = (*(pUVar5->klass->vtable)._5_get_width.methodPtr)
                            (pUVar5,(pUVar5->klass->vtable)._5_get_width.method);
          iVar8 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          pUVar5 = (__this->fields).grainTexture;
          if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
            iVar9 = (*(pUVar5->klass->vtable)._7_get_height.methodPtr)
                              (pUVar5,(pUVar5->klass->vtable)._7_get_height.method);
            value_00.fields.x = fVar10 + fVar11 * fVar12;
            value_00.fields.y = fVar1 + fVar2 * fVar13;
            value_00.fields.z = (float)iVar6 / (float)iVar7;
            value_00.fields.w = (float)iVar8 / (float)iVar9;
            UnityEngine_Material__SetVector(__this_00,"_ScratchOffsetScale",value_00,(MethodInfo *)0x0);
            value_01.fields.x =
                 UnityEngine_Random__Range
                           ((float)(__this->fields).rgbFallback,(__this->fields).grainIntensityMin,
                            (MethodInfo *)0x0);
            fVar10 = UnityEngine_Random__Range
                               ((__this->fields).grainSize,(__this->fields).scratchIntensityMin,
                                (MethodInfo *)0x0);
            value_01.fields.y = fVar10;
            value_01.fields.z = 0.0;
            value_01.fields.w = 0.0;
            UnityEngine_Material__SetVector(__this_00,"_Intensity",value_01,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      ((UnityEngine_Texture_o *)source,destination,__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.NoiseAndScratches$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndScratches___ctor (UnityStandardAssets_ImageEffects_NoiseAndScratches_o* __this, const MethodInfo* method);
// 0x425fb10

void UnityStandardAssets_ImageEffects_NoiseAndScratches___ctor
               (UnityStandardAssets_ImageEffects_NoiseAndScratches_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).monochrome = 1;
  (__this->fields).rgbFallback = 0x3dcccccd;
  (__this->fields).grainIntensityMin = 0.2;
  (__this->fields).grainIntensityMax = 2.0;
  (__this->fields).grainSize = 0.05;
  (__this->fields).scratchIntensityMin = 0.25;
  (__this->fields).scratchIntensityMax = 10.0;
  (__this->fields).scratchFPS = 0.01;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


