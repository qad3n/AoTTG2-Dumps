// Type: UnityStandardAssets.ImageEffects.ColorCorrectionCurves
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ColorCorrectionCurves.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionCurves.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__Start (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x42595b0

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
// 0x42595f0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__Awake
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_ColorCorrectionCurves__CheckResources (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x4259600

bool_conflict
UnityStandardAssets_ImageEffects_ColorCorrectionCurves__CheckResources
          (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Texture2D_o **ppUVar2;
  UnityEngine_Texture2D_o **ppUVar3;
  UnityEngine_Object_o *exists;
  bool_conflict bVar4;
  UnityEngine_AnimationCurve_o *pUVar5;
  UnityEngine_Material_o *pUVar6;
  UnityEngine_Texture2D_o *pUVar7;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05705240 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_05705240 = '\x01';
    in_RDX = extraout_RDX;
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
             (uint)((__this->fields).selectiveToColor.fields.b == 1.4013e-45),in_RDX);
  pUVar5 = (UnityEngine_AnimationCurve_o *)
           UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (__this->fields).colorCorrectionCurvesShader,
                      (UnityEngine_Material_o *)(__this->fields).depthBlueChannel,in_RCX);
  (__this->fields).depthBlueChannel = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).depthBlueChannel,pUVar5);
  pUVar6 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).mode,(__this->fields).ccMaterial,
                      in_RCX);
  (__this->fields).ccMaterial = pUVar6;
  il2cpp_runtime_glue(&(__this->fields).ccMaterial,pUVar6);
  pUVar6 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (__this->fields).simpleColorCorrectionCurvesShader,
                      (__this->fields).ccDepthMaterial,in_RCX);
  (__this->fields).ccDepthMaterial = pUVar6;
  il2cpp_runtime_glue(&(__this->fields).ccDepthMaterial);
  exists = (UnityEngine_Object_o *)(__this->fields).selectiveCcMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).selectiveCcMaterial;
  bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar7 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar7,0x100,4,5,0,1,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_Material_o *)pUVar7;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar7 = (__this->fields).rgbChannelTex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar2 = &(__this->fields).rgbChannelTex;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar7 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar7,0x100,4,5,0,1,(MethodInfo *)0x0);
    *ppUVar2 = pUVar7;
    il2cpp_runtime_glue(ppUVar2);
  }
  pUVar7 = (__this->fields).rgbDepthChannelTex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar3 = &(__this->fields).rgbDepthChannelTex;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar7 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar7,0x100,1,5,0,1,(MethodInfo *)0x0);
    *ppUVar3 = pUVar7;
    il2cpp_runtime_glue(ppUVar3,pUVar7);
  }
  if ((UnityEngine_Object_o *)*ppUVar1 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar1,0x34,(MethodInfo *)0x0);
    if (*ppUVar2 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar2,0x34,(MethodInfo *)0x0);
      if (*ppUVar3 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar3,0x34,(MethodInfo *)0x0);
        if ((UnityEngine_Texture_o *)*ppUVar1 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
          if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0)
            ;
            if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
              method_00 = (MethodInfo *)0x1;
              UnityEngine_Texture__set_wrapMode
                        ((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$UpdateParameters
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateParameters (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x42598e0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateParameters
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  UnityEngine_Texture2D_o *pUVar2;
  int x;
  System_Collections_Generic_List_Material__o *__this_00;
  float time;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  
  (*(__this->klass->vtable)._4_CheckResources.methodPtr)();
  __this_00 = (__this->fields).createdMaterials;
  if (((__this_00 == (System_Collections_Generic_List_Material__o *)0x0) ||
      ((__this->fields).redChannel == (UnityEngine_AnimationCurve_o *)0x0)) ||
     ((__this->fields).greenChannel == (UnityEngine_AnimationCurve_o *)0x0)) {
    return;
  }
  time = 0.0;
  while( true ) {
    fVar3 = UnityEngine_AnimationCurve__Evaluate
                      ((UnityEngine_AnimationCurve_o *)__this_00,time,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).redChannel;
    if (pUVar1 == (UnityEngine_AnimationCurve_o *)0x0) break;
    fVar4 = UnityEngine_AnimationCurve__Evaluate(pUVar1,time,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).greenChannel;
    if (pUVar1 == (UnityEngine_AnimationCurve_o *)0x0) break;
    fVar5 = UnityEngine_AnimationCurve__Evaluate(pUVar1,time,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Texture2D_o *)(__this->fields).selectiveCcMaterial;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) break;
    fVar6 = 1.0;
    if (fVar3 <= 1.0) {
      fVar6 = fVar3;
    }
    uVar7 = -(uint)(0.0 <= fVar3) & (uint)fVar6;
    color.fields.g = (float)uVar7;
    color.fields.r = (float)uVar7;
    fVar3 = floorf(time * 255.0);
    x = (int)fVar3;
    color.fields.a = 1.0;
    color.fields.b = (float)uVar7;
    UnityEngine_Texture2D__SetPixel(pUVar2,x,0,color,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Texture2D_o *)(__this->fields).selectiveCcMaterial;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) break;
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    color_00.fields.b = -(uint)(0.0 <= fVar4) & (uint)fVar3;
    color_00.fields.a = 1.0;
    color_00.fields.g = (float)color_00.fields.b;
    color_00.fields.r = (float)color_00.fields.b;
    UnityEngine_Texture2D__SetPixel(pUVar2,x,1,color_00,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Texture2D_o *)(__this->fields).selectiveCcMaterial;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) break;
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    color_01.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar3;
    color_01.fields.a = 1.0;
    color_01.fields.g = (float)color_01.fields.b;
    color_01.fields.r = (float)color_01.fields.b;
    UnityEngine_Texture2D__SetPixel(pUVar2,x,2,color_01,(MethodInfo *)0x0);
    pUVar1 = *(UnityEngine_AnimationCurve_o **)&(__this->fields).useDepthCorrection;
    if (pUVar1 == (UnityEngine_AnimationCurve_o *)0x0) break;
    fVar3 = UnityEngine_AnimationCurve__Evaluate(pUVar1,time,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).rgbDepthChannelTex;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) break;
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    color_02.fields.r = -(uint)(0.0 <= fVar3) & (uint)fVar4;
    color_02.fields.a = 1.0;
    color_02.fields.b = (float)color_02.fields.r;
    color_02.fields.g = (float)color_02.fields.r;
    UnityEngine_Texture2D__SetPixel(pUVar2,x,0,color_02,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).zCurve;
    if (pUVar1 == (UnityEngine_AnimationCurve_o *)0x0) break;
    fVar3 = UnityEngine_AnimationCurve__Evaluate(pUVar1,time,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).depthRedChannel;
    if (pUVar1 == (UnityEngine_AnimationCurve_o *)0x0) break;
    fVar4 = UnityEngine_AnimationCurve__Evaluate(pUVar1,time,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).depthGreenChannel;
    if (pUVar1 == (UnityEngine_AnimationCurve_o *)0x0) break;
    fVar5 = UnityEngine_AnimationCurve__Evaluate(pUVar1,time,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).rgbChannelTex;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) break;
    fVar6 = 1.0;
    if (fVar3 <= 1.0) {
      fVar6 = fVar3;
    }
    uVar7 = -(uint)(0.0 <= fVar3) & (uint)fVar6;
    color_03.fields.a = 1.0;
    color_03.fields.b = (float)uVar7;
    color_03.fields.g = (float)uVar7;
    color_03.fields.r = (float)uVar7;
    UnityEngine_Texture2D__SetPixel(pUVar2,x,0,color_03,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).rgbChannelTex;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) break;
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    color_04.fields.b = -(uint)(0.0 <= fVar4) & (uint)fVar3;
    color_04.fields.a = 1.0;
    color_04.fields.g = (float)color_04.fields.b;
    color_04.fields.r = (float)color_04.fields.b;
    UnityEngine_Texture2D__SetPixel(pUVar2,x,1,color_04,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).rgbChannelTex;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) break;
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    color_05.fields.b = -(uint)(0.0 <= fVar5) & (uint)fVar3;
    color_05.fields.a = 1.0;
    color_05.fields.g = (float)color_05.fields.b;
    color_05.fields.r = (float)color_05.fields.b;
    UnityEngine_Texture2D__SetPixel(pUVar2,x,2,color_05,(MethodInfo *)0x0);
    time = time + 0.003921569;
    if (1.0 < time) {
      pUVar2 = (UnityEngine_Texture2D_o *)(__this->fields).selectiveCcMaterial;
      if (pUVar2 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(pUVar2,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).rgbChannelTex;
        if (pUVar2 != (UnityEngine_Texture2D_o *)0x0) {
          UnityEngine_Texture2D__Apply(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).rgbDepthChannelTex;
          if (pUVar2 != (UnityEngine_Texture2D_o *)0x0) {
            UnityEngine_Texture2D__Apply(pUVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
      break;
    }
    __this_00 = (__this->fields).createdMaterials;
    if (__this_00 == (System_Collections_Generic_List_Material__o *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$UpdateTextures
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateTextures (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x4259cd0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateTextures
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,MethodInfo *method)

{
  UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateParameters(__this,method);
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__OnRenderImage (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4259ce0

void UnityStandardAssets_ImageEffects_ColorCorrectionCurves__OnRenderImage
               (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  int iVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_AnimationCurve_o *pUVar3;
  UnityEngine_Color_o value;
  char cVar4;
  uint uVar5;
  int32_t width;
  int32_t height;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Texture_o *source_00;
  MethodInfo *method_00;
  
  if (DAT_05705241 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"selColor");
    il2cpp_init_method_metadata(&"targetColor");
    il2cpp_init_method_metadata(&"_RgbTex");
    il2cpp_init_method_metadata(&"_RgbDepthTex");
    il2cpp_init_method_metadata(&"_Saturation");
    il2cpp_init_method_metadata(&"_ZCurve");
    DAT_05705241 = '\x01';
  }
  method_00 = (__this->klass->vtable)._4_CheckResources.method;
  cVar4 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar4 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  if (*(char *)&(__this->fields).colorCorrectionSelectiveShader != '\0') {
    UnityStandardAssets_ImageEffects_ColorCorrectionCurves__UpdateParameters(__this,method_00);
    *(undefined1 *)&(__this->fields).colorCorrectionSelectiveShader = 0;
  }
  if (*(char *)&(__this->fields).blueChannel != '\0') {
    __this_00 = (UnityEngine_Camera_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_0425a045;
    uVar5 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar5 | 1,(MethodInfo *)0x0);
  }
  source_00 = (UnityEngine_Texture_o *)destination;
  if (*(char *)((long)&(__this->fields).zCurveTex + 4) != '\0') {
    if (source == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425a045;
    width = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    height = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary(width,height,(MethodInfo *)0x0);
  }
  if (*(char *)&(__this->fields).blueChannel == '\0') {
    pUVar3 = (__this->fields).depthBlueChannel;
    if (pUVar3 == (UnityEngine_AnimationCurve_o *)0x0) goto LAB_0425a045;
    UnityEngine_Material__SetTexture
              ((UnityEngine_Material_o *)pUVar3,"_RgbTex",
               (UnityEngine_Texture_o *)(__this->fields).selectiveCcMaterial,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).depthBlueChannel;
    if (pUVar3 == (UnityEngine_AnimationCurve_o *)0x0) goto LAB_0425a045;
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)pUVar3,"_Saturation",*(float *)&(__this->fields).zCurveTex,
               (MethodInfo *)0x0);
    pUVar3 = (__this->fields).depthBlueChannel;
    iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
  }
  else {
    pUVar2 = (__this->fields).ccMaterial;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto LAB_0425a045;
    UnityEngine_Material__SetTexture
              (pUVar2,"_RgbTex",(UnityEngine_Texture_o *)(__this->fields).selectiveCcMaterial,
               (MethodInfo *)0x0);
    pUVar2 = (__this->fields).ccMaterial;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto LAB_0425a045;
    UnityEngine_Material__SetTexture
              (pUVar2,"_ZCurve",(UnityEngine_Texture_o *)(__this->fields).rgbDepthChannelTex,
               (MethodInfo *)0x0);
    pUVar2 = (__this->fields).ccMaterial;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto LAB_0425a045;
    UnityEngine_Material__SetTexture
              (pUVar2,"_RgbDepthTex",(UnityEngine_Texture_o *)(__this->fields).rgbChannelTex,
               (MethodInfo *)0x0);
    pUVar2 = (__this->fields).ccMaterial;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto LAB_0425a045;
    UnityEngine_Material__SetFloat
              (pUVar2,"_Saturation",*(float *)&(__this->fields).zCurveTex,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_AnimationCurve_o *)(__this->fields).ccMaterial;
    iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit
            ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,
             (UnityEngine_Material_o *)pUVar3,(MethodInfo *)0x0);
  if (*(char *)((long)&(__this->fields).zCurveTex + 4) == '\0') {
    return;
  }
  pUVar2 = (__this->fields).ccDepthMaterial;
  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
    value.fields.r = (__this->fields).saturation;
    value.fields.g = (float)(__this->fields).selectiveCc;
    value.fields.b = (__this->fields).selectiveFromColor.fields.r;
    value.fields.a = (__this->fields).selectiveFromColor.fields.g;
    UnityEngine_Material__SetColor(pUVar2,"selColor",value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).ccDepthMaterial;
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetColor
                (pUVar2,"targetColor",
                 (UnityEngine_Color_o)
                 *(UnityEngine_Color_Fields *)&(__this->fields).selectiveFromColor.fields.b,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).ccDepthMaterial;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit(source_00,destination,pUVar2,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary
                ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0425a045:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionCurves___ctor (UnityStandardAssets_ImageEffects_ColorCorrectionCurves_o* __this, const MethodInfo* method);
// 0x425a050

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
  UnityEngine_Keyframe_array *pUVar1;
  System_Collections_Generic_List_Material__o *__this_14;
  UnityEngine_AnimationCurve_o *pUVar2;
  System_Collections_Generic_List_object__o *__this_15;
  undefined4 in_stack_fffffffffffffdf8;
  undefined4 uVar3;
  float fVar4;
  undefined4 in_stack_fffffffffffffdfc;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_stack_fffffffffffffe00;
  float fVar7;
  undefined4 in_stack_fffffffffffffe04;
  float fVar8;
  undefined4 in_stack_fffffffffffffe08;
  undefined4 uVar9;
  undefined8 in_stack_fffffffffffffe0c;
  undefined8 uVar10;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined1 local_1c8 [40];
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_194;
  _union_14 local_188;
  uint32_t uStack_180;
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
  
  if (DAT_05705242 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationCurve);
    il2cpp_init_method_metadata(&TypeInfo_Keyframe);
    DAT_05705242 = '\x01';
  }
  pUVar1 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
  uStack_38 = 0;
  uStack_34 = 0;
  local_48.genericMethod = (void *)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  __this_00.fields.m_Value = (float)in_stack_fffffffffffffdfc;
  __this_00.fields.m_Time = (float)in_stack_fffffffffffffdf8;
  __this_00.fields.m_InTangent = (float)in_stack_fffffffffffffe00;
  __this_00.fields.m_OutTangent = (float)in_stack_fffffffffffffe04;
  __this_00.fields.m_WeightedMode = in_stack_fffffffffffffe08;
  __this_00.fields.m_InWeight = (float)(int)in_stack_fffffffffffffe0c;
  __this_00.fields.m_OutWeight = (float)(int)((ulong)in_stack_fffffffffffffe0c >> 0x20);
  UnityEngine_Keyframe___ctor(__this_00,0.0,0.0,(MethodInfo *)&local_48);
  if (pUVar1 != (UnityEngine_Keyframe_array *)0x0) {
    if ((int)pUVar1->max_length != 0) {
      pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_3c;
      pUVar1->m_Items[0].fields.m_WeightedMode = uStack_38;
      pUVar1->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_34;
      pUVar1->m_Items[0].fields.m_OutWeight = (float)uStack_34._4_4_;
      *(_union_14 *)&pUVar1->m_Items[0].fields = (void *)local_48;
      pUVar1->m_Items[0].fields.m_InTangent = (float)uStack_40;
      pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_3c;
      uStack_58 = 0;
      uStack_54 = 0;
      local_68.genericMethod = (void *)0x0;
      fStack_60 = 0.0;
      fStack_5c = 0.0;
      __this_01.fields.m_InTangent = (float)uStack_40;
      __this_01.fields._0_8_ = local_48.genericMethod;
      __this_01.fields.m_OutTangent = (float)uStack_3c;
      __this_01.fields.m_WeightedMode = uStack_38;
      __this_01.fields.m_InWeight = (float)(undefined4)uStack_34;
      __this_01.fields.m_OutWeight = (float)uStack_34._4_4_;
      UnityEngine_Keyframe___ctor(__this_01,1.0,1.0,(MethodInfo *)&local_68);
      if (1 < (uint)pUVar1->max_length) {
        pUVar1->m_Items[1].fields.m_OutTangent = fStack_5c;
        pUVar1->m_Items[1].fields.m_WeightedMode = uStack_58;
        pUVar1->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_54;
        pUVar1->m_Items[1].fields.m_OutWeight = (float)uStack_54._4_4_;
        pUVar1->m_Items[1].fields.m_Time = (float)local_68._0_4_;
        pUVar1->m_Items[1].fields.m_Value = (float)local_68._4_4_;
        pUVar1->m_Items[1].fields.m_InTangent = fStack_60;
        pUVar1->m_Items[1].fields.m_OutTangent = fStack_5c;
        uVar3 = local_68._0_4_;
        uVar5 = local_68._4_4_;
        fVar4 = fStack_60;
        fVar6 = fStack_5c;
        uVar9 = uStack_58;
        uVar10 = uStack_54;
        __this_14 = (System_Collections_Generic_List_Material__o *)il2cpp_runtime_glue(TypeInfo_AnimationCurve);
        UnityEngine_AnimationCurve___ctor
                  ((UnityEngine_AnimationCurve_o *)__this_14,pUVar1,(MethodInfo *)0x0);
        (__this->fields).createdMaterials = __this_14;
        il2cpp_runtime_glue(&(__this->fields).createdMaterials,__this_14);
        pUVar1 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
        uStack_78 = 0;
        uStack_74 = 0;
        local_88.genericMethod = (void *)0x0;
        uStack_80 = 0;
        uStack_7c = 0;
        __this_02.fields.m_Value = (float)uVar5;
        __this_02.fields.m_Time = (float)uVar3;
        __this_02.fields.m_InTangent = fVar4;
        __this_02.fields.m_OutTangent = fVar6;
        __this_02.fields.m_WeightedMode = uVar9;
        __this_02.fields.m_InWeight = (float)(int)uVar10;
        __this_02.fields.m_OutWeight = (float)(int)((ulong)uVar10 >> 0x20);
        UnityEngine_Keyframe___ctor(__this_02,0.0,0.0,(MethodInfo *)&local_88);
        if (pUVar1 == (UnityEngine_Keyframe_array *)0x0) goto LAB_0425a851;
        if ((int)pUVar1->max_length != 0) {
          pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
          pUVar1->m_Items[0].fields.m_WeightedMode = uStack_78;
          pUVar1->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_74;
          pUVar1->m_Items[0].fields.m_OutWeight = (float)uStack_74._4_4_;
          *(_union_14 *)&pUVar1->m_Items[0].fields = (void *)local_88;
          pUVar1->m_Items[0].fields.m_InTangent = (float)uStack_80;
          pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
          uStack_98 = 0;
          uStack_94 = 0;
          local_a8.genericMethod = (void *)0x0;
          fStack_a0 = 0.0;
          fStack_9c = 0.0;
          __this_03.fields.m_InTangent = (float)uStack_80;
          __this_03.fields._0_8_ = local_88.genericMethod;
          __this_03.fields.m_OutTangent = (float)uStack_7c;
          __this_03.fields.m_WeightedMode = uStack_78;
          __this_03.fields.m_InWeight = (float)(undefined4)uStack_74;
          __this_03.fields.m_OutWeight = (float)uStack_74._4_4_;
          UnityEngine_Keyframe___ctor(__this_03,1.0,1.0,(MethodInfo *)&local_a8);
          if (1 < (uint)pUVar1->max_length) {
            pUVar1->m_Items[1].fields.m_OutTangent = fStack_9c;
            pUVar1->m_Items[1].fields.m_WeightedMode = uStack_98;
            pUVar1->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_94;
            pUVar1->m_Items[1].fields.m_OutWeight = (float)uStack_94._4_4_;
            pUVar1->m_Items[1].fields.m_Time = (float)local_a8._0_4_;
            pUVar1->m_Items[1].fields.m_Value = (float)local_a8._4_4_;
            pUVar1->m_Items[1].fields.m_InTangent = fStack_a0;
            pUVar1->m_Items[1].fields.m_OutTangent = fStack_9c;
            uVar3 = local_a8._0_4_;
            uVar5 = local_a8._4_4_;
            fVar4 = fStack_a0;
            fVar6 = fStack_9c;
            uVar9 = uStack_98;
            uVar10 = uStack_94;
            pUVar2 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_glue(TypeInfo_AnimationCurve);
            UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
            (__this->fields).redChannel = pUVar2;
            il2cpp_runtime_glue(&(__this->fields).redChannel,pUVar2);
            pUVar1 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
            uStack_b8 = 0;
            uStack_b4 = 0;
            local_c8.genericMethod = (void *)0x0;
            uStack_c0 = 0;
            uStack_bc = 0;
            __this_04.fields.m_Value = (float)uVar5;
            __this_04.fields.m_Time = (float)uVar3;
            __this_04.fields.m_InTangent = fVar4;
            __this_04.fields.m_OutTangent = fVar6;
            __this_04.fields.m_WeightedMode = uVar9;
            __this_04.fields.m_InWeight = (float)(int)uVar10;
            __this_04.fields.m_OutWeight = (float)(int)((ulong)uVar10 >> 0x20);
            UnityEngine_Keyframe___ctor(__this_04,0.0,0.0,(MethodInfo *)&local_c8);
            if (pUVar1 == (UnityEngine_Keyframe_array *)0x0) goto LAB_0425a851;
            if ((int)pUVar1->max_length != 0) {
              pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_bc;
              pUVar1->m_Items[0].fields.m_WeightedMode = uStack_b8;
              pUVar1->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_b4;
              pUVar1->m_Items[0].fields.m_OutWeight = (float)uStack_b4._4_4_;
              *(_union_14 *)&pUVar1->m_Items[0].fields = (void *)local_c8;
              pUVar1->m_Items[0].fields.m_InTangent = (float)uStack_c0;
              pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_bc;
              uStack_d8 = 0;
              uStack_d4 = 0;
              local_e8.genericMethod = (void *)0x0;
              fStack_e0 = 0.0;
              fStack_dc = 0.0;
              __this_05.fields.m_InTangent = (float)uStack_c0;
              __this_05.fields._0_8_ = local_c8.genericMethod;
              __this_05.fields.m_OutTangent = (float)uStack_bc;
              __this_05.fields.m_WeightedMode = uStack_b8;
              __this_05.fields.m_InWeight = (float)(undefined4)uStack_b4;
              __this_05.fields.m_OutWeight = (float)uStack_b4._4_4_;
              UnityEngine_Keyframe___ctor(__this_05,1.0,1.0,(MethodInfo *)&local_e8);
              if (1 < (uint)pUVar1->max_length) {
                pUVar1->m_Items[1].fields.m_OutTangent = fStack_dc;
                pUVar1->m_Items[1].fields.m_WeightedMode = uStack_d8;
                pUVar1->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_d4;
                pUVar1->m_Items[1].fields.m_OutWeight = (float)uStack_d4._4_4_;
                pUVar1->m_Items[1].fields.m_Time = (float)local_e8._0_4_;
                pUVar1->m_Items[1].fields.m_Value = (float)local_e8._4_4_;
                pUVar1->m_Items[1].fields.m_InTangent = fStack_e0;
                pUVar1->m_Items[1].fields.m_OutTangent = fStack_dc;
                uVar3 = local_e8._0_4_;
                uVar5 = local_e8._4_4_;
                fVar4 = fStack_e0;
                fVar6 = fStack_dc;
                uVar9 = uStack_d8;
                uVar10 = uStack_d4;
                pUVar2 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_glue(TypeInfo_AnimationCurve);
                UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
                (__this->fields).greenChannel = pUVar2;
                il2cpp_runtime_glue(&(__this->fields).greenChannel,pUVar2);
                pUVar1 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
                uStack_f8 = 0;
                uStack_f4 = 0;
                local_108.genericMethod = (void *)0x0;
                uStack_100 = 0;
                uStack_fc = 0;
                __this_06.fields.m_Value = (float)uVar5;
                __this_06.fields.m_Time = (float)uVar3;
                __this_06.fields.m_InTangent = fVar4;
                __this_06.fields.m_OutTangent = fVar6;
                __this_06.fields.m_WeightedMode = uVar9;
                __this_06.fields.m_InWeight = (float)(int)uVar10;
                __this_06.fields.m_OutWeight = (float)(int)((ulong)uVar10 >> 0x20);
                UnityEngine_Keyframe___ctor(__this_06,0.0,0.0,(MethodInfo *)&local_108);
                if (pUVar1 == (UnityEngine_Keyframe_array *)0x0) goto LAB_0425a851;
                if ((int)pUVar1->max_length != 0) {
                  pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_fc;
                  pUVar1->m_Items[0].fields.m_WeightedMode = uStack_f8;
                  pUVar1->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_f4;
                  pUVar1->m_Items[0].fields.m_OutWeight = (float)uStack_f4._4_4_;
                  *(_union_14 *)&pUVar1->m_Items[0].fields = (void *)local_108;
                  pUVar1->m_Items[0].fields.m_InTangent = (float)uStack_100;
                  pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_fc;
                  uStack_118 = 0;
                  uStack_114 = 0;
                  local_128.genericMethod = (void *)0x0;
                  fStack_120 = 0.0;
                  fStack_11c = 0.0;
                  __this_07.fields.m_InTangent = (float)uStack_100;
                  __this_07.fields._0_8_ = local_108.genericMethod;
                  __this_07.fields.m_OutTangent = (float)uStack_fc;
                  __this_07.fields.m_WeightedMode = uStack_f8;
                  __this_07.fields.m_InWeight = (float)(undefined4)uStack_f4;
                  __this_07.fields.m_OutWeight = (float)uStack_f4._4_4_;
                  UnityEngine_Keyframe___ctor(__this_07,1.0,1.0,(MethodInfo *)&local_128);
                  if (1 < (uint)pUVar1->max_length) {
                    pUVar1->m_Items[1].fields.m_OutTangent = fStack_11c;
                    pUVar1->m_Items[1].fields.m_WeightedMode = uStack_118;
                    pUVar1->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_114;
                    pUVar1->m_Items[1].fields.m_OutWeight = (float)uStack_114._4_4_;
                    pUVar1->m_Items[1].fields.m_Time = (float)local_128._0_4_;
                    pUVar1->m_Items[1].fields.m_Value = (float)local_128._4_4_;
                    pUVar1->m_Items[1].fields.m_InTangent = fStack_120;
                    pUVar1->m_Items[1].fields.m_OutTangent = fStack_11c;
                    uVar3 = local_128._0_4_;
                    uVar5 = local_128._4_4_;
                    fVar4 = fStack_120;
                    fVar6 = fStack_11c;
                    uVar9 = uStack_118;
                    uVar10 = uStack_114;
                    pUVar2 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_glue(TypeInfo_AnimationCurve);
                    UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
                    *(UnityEngine_AnimationCurve_o **)&(__this->fields).useDepthCorrection = pUVar2;
                    il2cpp_runtime_glue(&(__this->fields).useDepthCorrection,pUVar2);
                    pUVar1 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
                    uStack_138 = 0;
                    uStack_134 = 0;
                    local_148.genericMethod = (void *)0x0;
                    uStack_140 = 0;
                    uStack_13c = 0;
                    __this_08.fields.m_Value = (float)uVar5;
                    __this_08.fields.m_Time = (float)uVar3;
                    __this_08.fields.m_InTangent = fVar4;
                    __this_08.fields.m_OutTangent = fVar6;
                    __this_08.fields.m_WeightedMode = uVar9;
                    __this_08.fields.m_InWeight = (float)(int)uVar10;
                    __this_08.fields.m_OutWeight = (float)(int)((ulong)uVar10 >> 0x20);
                    UnityEngine_Keyframe___ctor(__this_08,0.0,0.0,(MethodInfo *)&local_148);
                    if (pUVar1 == (UnityEngine_Keyframe_array *)0x0) goto LAB_0425a851;
                    if ((int)pUVar1->max_length != 0) {
                      pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_13c;
                      pUVar1->m_Items[0].fields.m_WeightedMode = uStack_138;
                      pUVar1->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_134;
                      pUVar1->m_Items[0].fields.m_OutWeight = (float)uStack_134._4_4_;
                      *(_union_14 *)&pUVar1->m_Items[0].fields = (void *)local_148;
                      pUVar1->m_Items[0].fields.m_InTangent = (float)uStack_140;
                      pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_13c;
                      uStack_158 = 0;
                      uStack_154 = 0;
                      local_168.genericMethod = (void *)0x0;
                      fStack_160 = 0.0;
                      fStack_15c = 0.0;
                      __this_09.fields.m_InTangent = (float)uStack_140;
                      __this_09.fields._0_8_ = local_148.genericMethod;
                      __this_09.fields.m_OutTangent = (float)uStack_13c;
                      __this_09.fields.m_WeightedMode = uStack_138;
                      __this_09.fields.m_InWeight = (float)(undefined4)uStack_134;
                      __this_09.fields.m_OutWeight = (float)uStack_134._4_4_;
                      UnityEngine_Keyframe___ctor(__this_09,1.0,1.0,(MethodInfo *)&local_168);
                      if (1 < (uint)pUVar1->max_length) {
                        pUVar1->m_Items[1].fields.m_OutTangent = fStack_15c;
                        pUVar1->m_Items[1].fields.m_WeightedMode = uStack_158;
                        pUVar1->m_Items[1].fields.m_InWeight = (float)(undefined4)uStack_154;
                        pUVar1->m_Items[1].fields.m_OutWeight = (float)uStack_154._4_4_;
                        pUVar1->m_Items[1].fields.m_Time = (float)local_168._0_4_;
                        pUVar1->m_Items[1].fields.m_Value = (float)local_168._4_4_;
                        pUVar1->m_Items[1].fields.m_InTangent = fStack_160;
                        pUVar1->m_Items[1].fields.m_OutTangent = fStack_15c;
                        uVar3 = local_168._0_4_;
                        uVar5 = local_168._4_4_;
                        fVar4 = fStack_160;
                        fVar6 = fStack_15c;
                        uVar9 = uStack_158;
                        uVar10 = uStack_154;
                        pUVar2 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_glue(TypeInfo_AnimationCurve);
                        UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
                        (__this->fields).zCurve = pUVar2;
                        il2cpp_runtime_glue(&(__this->fields).zCurve,pUVar2);
                        pUVar1 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
                        uStack_178._0_2_ = 0;
                        uStack_178._2_1_ = '\0';
                        uStack_178._3_1_ = '\0';
                        uStack_174 = 0;
                        local_188.genericMethod = (void *)0x0;
                        uStack_180 = 0;
                        uStack_17c._0_2_ = 0;
                        uStack_17c._2_2_ = 0;
                        __this_10.fields.m_Value = (float)uVar5;
                        __this_10.fields.m_Time = (float)uVar3;
                        __this_10.fields.m_InTangent = fVar4;
                        __this_10.fields.m_OutTangent = fVar6;
                        __this_10.fields.m_WeightedMode = uVar9;
                        __this_10.fields.m_InWeight = (float)(int)uVar10;
                        __this_10.fields.m_OutWeight = (float)(int)((ulong)uVar10 >> 0x20);
                        UnityEngine_Keyframe___ctor(__this_10,0.0,0.0,(MethodInfo *)&local_188);
                        if (pUVar1 == (UnityEngine_Keyframe_array *)0x0) goto LAB_0425a851;
                        if ((int)pUVar1->max_length != 0) {
                          pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_17c;
                          pUVar1->m_Items[0].fields.m_WeightedMode = uStack_178;
                          pUVar1->m_Items[0].fields.m_InWeight = (float)(undefined4)uStack_174;
                          pUVar1->m_Items[0].fields.m_OutWeight = (float)uStack_174._4_4_;
                          *(_union_14 *)&pUVar1->m_Items[0].fields = (void *)local_188;
                          pUVar1->m_Items[0].fields.m_InTangent = (float)uStack_180;
                          pUVar1->m_Items[0].fields.m_OutTangent = (float)uStack_17c;
                          uStack_198._0_2_ = 0;
                          uStack_198._2_1_ = '\0';
                          uStack_198._3_1_ = '\0';
                          uStack_194 = 0;
                          local_1c8._32_8_ = (Il2CppClass *)0x0;
                          fStack_1a0 = 0.0;
                          fStack_19c = 0.0;
                          __this_11.fields.m_InTangent = (float)uStack_180;
                          __this_11.fields._0_8_ = local_188.genericMethod;
                          __this_11.fields.m_OutTangent = (float)uStack_17c;
                          __this_11.fields.m_WeightedMode._0_2_ = (uint16_t)uStack_178;
                          __this_11.fields.m_WeightedMode._2_1_ = uStack_178._2_1_;
                          __this_11.fields.m_WeightedMode._3_1_ = uStack_178._3_1_;
                          __this_11.fields.m_InWeight = (float)(undefined4)uStack_174;
                          __this_11.fields.m_OutWeight = (float)uStack_174._4_4_;
                          UnityEngine_Keyframe___ctor
                                    (__this_11,1.0,1.0,(MethodInfo *)(local_1c8 + 0x20));
                          if (1 < (uint)pUVar1->max_length) {
                            pUVar1->m_Items[1].fields.m_OutTangent = fStack_19c;
                            pUVar1->m_Items[1].fields.m_WeightedMode = uStack_198;
                            *(undefined8 *)&pUVar1->m_Items[1].fields.m_InWeight = uStack_194;
                            pUVar1->m_Items[1].fields.m_Time = (float)local_1c8._32_4_;
                            pUVar1->m_Items[1].fields.m_Value = (float)local_1c8._36_4_;
                            pUVar1->m_Items[1].fields.m_InTangent = fStack_1a0;
                            pUVar1->m_Items[1].fields.m_OutTangent = fStack_19c;
                            fVar4 = (float)local_1c8._32_4_;
                            fVar6 = (float)local_1c8._36_4_;
                            fVar7 = fStack_1a0;
                            fVar8 = fStack_19c;
                            uVar3 = uStack_198;
                            uVar10 = uStack_194;
                            pUVar2 = (UnityEngine_AnimationCurve_o *)
                                     il2cpp_runtime_glue(TypeInfo_AnimationCurve);
                            UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
                            (__this->fields).depthRedChannel = pUVar2;
                            il2cpp_runtime_glue(&(__this->fields).depthRedChannel,pUVar2);
                            pUVar1 = (UnityEngine_Keyframe_array *)il2cpp_glue_02274930(TypeInfo_Keyframe,2);
                            local_1c8._16_4_ = 0;
                            local_1c8._20_8_ = 0;
                            local_1c8._0_8_ = (Il2CppClass *)0x0;
                            local_1c8._8_4_ = 0;
                            local_1c8._12_4_ = 0;
                            __this_12.fields.m_Value = fVar6;
                            __this_12.fields.m_Time = fVar4;
                            __this_12.fields.m_InTangent = fVar7;
                            __this_12.fields.m_OutTangent = fVar8;
                            __this_12.fields.m_WeightedMode._0_2_ = (uint16_t)uVar3;
                            __this_12.fields.m_WeightedMode._2_1_ = SUB41(uVar3,2);
                            __this_12.fields.m_WeightedMode._3_1_ = SUB41(uVar3,3);
                            __this_12.fields._20_8_ = uVar10;
                            UnityEngine_Keyframe___ctor(__this_12,0.0,0.0,(MethodInfo *)local_1c8);
                            if (pUVar1 == (UnityEngine_Keyframe_array *)0x0) goto LAB_0425a851;
                            if ((int)pUVar1->max_length != 0) {
                              pUVar1->m_Items[0].fields.m_OutTangent = (float)local_1c8._12_4_;
                              pUVar1->m_Items[0].fields.m_WeightedMode = local_1c8._16_4_;
                              pUVar1->m_Items[0].fields.m_InWeight = (float)local_1c8._20_4_;
                              pUVar1->m_Items[0].fields.m_OutWeight = (float)local_1c8._24_4_;
                              pUVar1->m_Items[0].fields.m_Time = (float)local_1c8._0_4_;
                              pUVar1->m_Items[0].fields.m_Value = (float)local_1c8._4_4_;
                              pUVar1->m_Items[0].fields.m_InTangent = (float)local_1c8._8_4_;
                              pUVar1->m_Items[0].fields.m_OutTangent = (float)local_1c8._12_4_;
                              uStack_1d8 = 0;
                              uStack_1d4 = 0;
                              local_1e8 = (undefined1  [8])0x0;
                              fStack_1e0 = 0.0;
                              fStack_1dc = 0.0;
                              __this_13.fields.m_InTangent = (float)local_1c8._8_4_;
                              __this_13.fields.m_Time = (float)local_1c8._0_4_;
                              __this_13.fields.m_Value = (float)local_1c8._4_4_;
                              __this_13.fields.m_OutTangent = (float)local_1c8._12_4_;
                              __this_13.fields.m_WeightedMode = local_1c8._16_4_;
                              __this_13.fields.m_InWeight = (float)local_1c8._20_4_;
                              __this_13.fields.m_OutWeight = (float)local_1c8._24_4_;
                              UnityEngine_Keyframe___ctor(__this_13,1.0,1.0,(MethodInfo *)local_1e8)
                              ;
                              if (1 < (uint)pUVar1->max_length) {
                                pUVar1->m_Items[1].fields.m_OutTangent = fStack_1dc;
                                pUVar1->m_Items[1].fields.m_WeightedMode = uStack_1d8;
                                *(undefined8 *)&pUVar1->m_Items[1].fields.m_InWeight = uStack_1d4;
                                pUVar1->m_Items[1].fields.m_Time = (float)local_1e8._0_4_;
                                pUVar1->m_Items[1].fields.m_Value = (float)local_1e8._4_4_;
                                pUVar1->m_Items[1].fields.m_InTangent = fStack_1e0;
                                pUVar1->m_Items[1].fields.m_OutTangent = fStack_1dc;
                                pUVar2 = (UnityEngine_AnimationCurve_o *)
                                         il2cpp_runtime_glue(TypeInfo_AnimationCurve);
                                UnityEngine_AnimationCurve___ctor(pUVar2,pUVar1,(MethodInfo *)0x0);
                                (__this->fields).depthGreenChannel = pUVar2;
                                il2cpp_runtime_glue(&(__this->fields).depthGreenChannel,pUVar2);
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
                                if (DAT_05705271 == '\0') {
                                  il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material);
                                  il2cpp_init_method_metadata(&TypeInfo_List_Material);
                                  DAT_05705271 = '\x01';
                                }
                                *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
                                *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
                                __this_15 = (System_Collections_Generic_List_object__o *)
                                            il2cpp_runtime_glue(TypeInfo_List_Material);
                                System_Collections_Generic_List<object>___ctor
                                          (__this_15,MethodInfo_List_1_UnityEngine_Material);
                                *(System_Collections_Generic_List_object__o **)
                                 &(__this->fields).isSupported = __this_15;
                                il2cpp_runtime_glue(&(__this->fields).isSupported);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0425a851:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


