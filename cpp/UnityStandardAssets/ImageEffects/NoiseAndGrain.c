// Type: UnityStandardAssets.ImageEffects.NoiseAndGrain
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/NoiseAndGrain.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/NoiseAndGrain.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.NoiseAndGrain$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_NoiseAndGrain__CheckResources (UnityStandardAssets_ImageEffects_NoiseAndGrain_o* __this, const MethodInfo* method);
// 0x425e530

bool_conflict
UnityStandardAssets_ImageEffects_NoiseAndGrain__CheckResources
          (UnityStandardAssets_ImageEffects_NoiseAndGrain_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  undefined8 uVar3;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  undefined1 uVar4;
  
  if (DAT_0570526e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570526e = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar4 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar4 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar4;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).noiseTexture,
                         (UnityEngine_Material_o *)(__this->fields).noiseShader,in_RCX);
  (__this->fields).noiseShader = (UnityEngine_Shader_o *)method_00;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).noiseShader);
  if ((*(char *)&(__this->fields).whiteIntensity != '\0') &&
     (*(char *)((long)&(__this->fields).supportHDRTextures + 1) != '\0')) {
    method_00 = (MethodInfo *)
                UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                          ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                           (UnityEngine_Shader_o *)(__this->fields).noiseMaterial,
                           (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader,in_RCX);
    (__this->fields).dx11NoiseShader = (UnityEngine_Shader_o *)method_00;
    uVar3 = il2cpp_runtime_glue(&(__this->fields).dx11NoiseShader);
  }
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.NoiseAndGrain$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndGrain__OnRenderImage (UnityStandardAssets_ImageEffects_NoiseAndGrain_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425e630

void UnityStandardAssets_ImageEffects_NoiseAndGrain__OnRenderImage
               (UnityStandardAssets_ImageEffects_NoiseAndGrain_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Object_o *pUVar2;
  float fVar3;
  System_String_o *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  int iVar8;
  int iVar9;
  UnityEngine_Transform_o *context;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Texture_o *pUVar11;
  UnityEngine_Texture2D_o *pUVar12;
  UnityEngine_Material_o *pUVar13;
  uint passNr;
  MethodInfo *in_R9;
  undefined8 uVar14;
  float fVar15;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector4_o value_05;
  
  if (DAT_05705263 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    il2cpp_init_method_metadata(&TypeInfo_NoiseAndGrain);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_NoiseAmount");
    il2cpp_init_method_metadata(&"Noise & Grain effect failing as noise texture is not assigned. please assign.");
    il2cpp_init_method_metadata(&"_NoiseTilingPerChannel");
    il2cpp_init_method_metadata(&"_NoiseTex");
    il2cpp_init_method_metadata(&"_DX11NoiseTime");
    il2cpp_init_method_metadata(&"_NoisePerChannel");
    il2cpp_init_method_metadata(&"_MidGrey");
    DAT_05705263 = '\x01';
  }
  cVar5 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar5 != '\0') {
    pUVar2 = *(UnityEngine_Object_o **)&(__this->fields).monochromeTiling;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,pUVar2,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      fVar15 = (__this->fields).midGrey;
      fVar3 = 0.99;
      if (fVar15 <= 0.99) {
        fVar3 = fVar15;
      }
      (__this->fields).midGrey = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar3);
      if ((*(char *)&(__this->fields).whiteIntensity == '\0') ||
         (*(char *)((long)&(__this->fields).supportHDRTextures + 1) == '\0')) {
        pUVar2 = *(UnityEngine_Object_o **)&(__this->fields).monochromeTiling;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Implicit(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar11 = *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling;
          if (pUVar11 == (UnityEngine_Texture_o *)0x0) goto LAB_0425ee7d;
          UnityEngine_Texture__set_wrapMode(pUVar11,0,(MethodInfo *)0x0);
          pUVar11 = *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling;
          if (pUVar11 == (UnityEngine_Texture_o *)0x0) goto LAB_0425ee7d;
          UnityEngine_Texture__set_filterMode
                    (pUVar11,(int32_t)(__this->fields).tiling.fields.z,(MethodInfo *)0x0);
        }
        pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
        if (pUVar13 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetTexture
                    (pUVar13,"_NoiseTex",
                     *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling,(MethodInfo *)0x0
                    );
          pSVar4 = "_NoisePerChannel";
          pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
          if ((char)(__this->fields).dx11Grain == '\0') {
            pfVar1 = &(__this->fields).softness;
            pUVar10 = &(__this->fields).intensities;
          }
          else {
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
            }
            pfVar1 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            pUVar10 = (UnityEngine_Vector3_o *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          }
          if (pUVar13 != (UnityEngine_Material_o *)0x0) {
            value.fields.z = (pUVar10->fields).x;
            value.fields._0_8_ = *(undefined8 *)pfVar1;
            value.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar13,pSVar4,value,(MethodInfo *)0x0);
            pSVar4 = "_NoiseTilingPerChannel";
            pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
            if ((char)(__this->fields).dx11Grain == '\0') {
              uVar14._0_4_ = (__this->fields).intensities.fields.y;
              uVar14._4_4_ = (__this->fields).intensities.fields.z;
              fVar15 = (__this->fields).tiling.fields.x;
            }
            else {
              if (DAT_056fe077 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fe077 = '\x01';
              }
              uVar14 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
              fVar15 = (__this->fields).tiling.fields.y;
              uVar14 = CONCAT44(fVar15 * (float)((ulong)uVar14 >> 0x20),fVar15 * (float)uVar14);
              fVar15 = fVar15 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            }
            if (pUVar13 != (UnityEngine_Material_o *)0x0) {
              value_00.fields.z = fVar15;
              value_00.fields.x = (float)(int)uVar14;
              value_00.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
              value_00.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar13,pSVar4,value_00,(MethodInfo *)0x0);
              pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
              if (pUVar13 != (UnityEngine_Material_o *)0x0) {
                fVar15 = (__this->fields).blackIntensity;
                value_01.fields.y = 1.0 / (1.0 - fVar15);
                value_01.fields.x = fVar15;
                value_01.fields.z = -1.0 / fVar15;
                value_01.fields.w = 0.0;
                UnityEngine_Material__SetVector(pUVar13,"_MidGrey",value_01,(MethodInfo *)0x0);
                pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                if (pUVar13 != (UnityEngine_Material_o *)0x0) {
                  fVar15 = *(float *)&(__this->fields).createdMaterials;
                  uVar14 = *(undefined8 *)((long)&(__this->fields).createdMaterials + 4);
                  value_02.fields.x = fVar15 * (float)uVar14;
                  value_02.fields.y = fVar15 * (float)((ulong)uVar14 >> 0x20);
                  value_02.fields.z = fVar15 * (__this->fields).generalIntensity;
                  value_02.fields.w = 0.0;
                  UnityEngine_Material__SetVector(pUVar13,"_NoiseAmount",value_02,(MethodInfo *)0x0);
                  fVar15 = (__this->fields).midGrey;
                  if (fVar15 < **(float **)(TypeInfo_Mathf + 0xb8) ||
                      fVar15 == **(float **)(TypeInfo_Mathf + 0xb8)) {
                    pUVar12 = *(UnityEngine_Texture2D_o **)&(__this->fields).monochromeTiling;
                    pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                    if (*(int *)(TypeInfo_NoiseAndGrain + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    passNr = 0;
                    goto LAB_0425ee6d;
                  }
                  if (source != (UnityEngine_RenderTexture_o *)0x0) {
                    iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                      (source,(source->klass->vtable)._5_get_width.method);
                    fVar15 = (__this->fields).midGrey;
                    iVar9 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                      (source,(source->klass->vtable)._7_get_height.method);
                    pUVar11 = (UnityEngine_Texture_o *)
                              UnityEngine_RenderTexture__GetTemporary
                                        ((int)((float)iVar8 * (1.0 - fVar15)),
                                         (int)((1.0 - (__this->fields).midGrey) * (float)iVar9),
                                         (MethodInfo *)0x0);
                    pUVar12 = *(UnityEngine_Texture2D_o **)&(__this->fields).monochromeTiling;
                    pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                    if (*(int *)(TypeInfo_NoiseAndGrain + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
                              (source,(UnityEngine_RenderTexture_o *)pUVar11,pUVar13,pUVar12,2,in_R9
                              );
                    pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                    if (pUVar13 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetTexture
                                (pUVar13,"_NoiseTex",pUVar11,(MethodInfo *)0x0);
                      pUVar13 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      iVar7 = 1;
                      goto LAB_0425ee17;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
        iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat(pUVar13,"_DX11NoiseTime",(float)iVar7,(MethodInfo *)0x0);
          pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
          if (pUVar13 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetTexture
                      (pUVar13,"_NoiseTex",
                       *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling,
                       (MethodInfo *)0x0);
            pSVar4 = "_NoisePerChannel";
            pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
            if ((char)(__this->fields).dx11Grain == '\0') {
              pfVar1 = &(__this->fields).softness;
              pUVar10 = &(__this->fields).intensities;
            }
            else {
              if (DAT_056fe077 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fe077 = '\x01';
              }
              pfVar1 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
              pUVar10 = (UnityEngine_Vector3_o *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            }
            if (pUVar13 != (UnityEngine_Material_o *)0x0) {
              value_03.fields.z = (pUVar10->fields).x;
              value_03.fields._0_8_ = *(undefined8 *)pfVar1;
              value_03.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar13,pSVar4,value_03,(MethodInfo *)0x0);
              pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
              if (pUVar13 == (UnityEngine_Material_o *)0x0) goto LAB_0425ee7d;
              fVar15 = (__this->fields).blackIntensity;
              value_04.fields.y = 1.0 / (1.0 - fVar15);
              value_04.fields.x = fVar15;
              value_04.fields.z = -1.0 / fVar15;
              value_04.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar13,"_MidGrey",value_04,(MethodInfo *)0x0);
              pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
              if (pUVar13 == (UnityEngine_Material_o *)0x0) goto LAB_0425ee7d;
              fVar15 = *(float *)&(__this->fields).createdMaterials;
              uVar14 = *(undefined8 *)((long)&(__this->fields).createdMaterials + 4);
              value_05.fields.x = fVar15 * (float)uVar14;
              value_05.fields.y = fVar15 * (float)((ulong)uVar14 >> 0x20);
              value_05.fields.z = fVar15 * (__this->fields).generalIntensity;
              value_05.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar13,"_NoiseAmount",value_05,(MethodInfo *)0x0);
              fVar15 = (__this->fields).midGrey;
              if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar15 &&
                  fVar15 != **(float **)(TypeInfo_Mathf + 0xb8)) {
                if (source == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425ee7d;
                iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                  (source,(source->klass->vtable)._5_get_width.method);
                fVar15 = (__this->fields).midGrey;
                iVar9 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                  (source,(source->klass->vtable)._7_get_height.method);
                pUVar11 = (UnityEngine_Texture_o *)
                          UnityEngine_RenderTexture__GetTemporary
                                    ((int)((float)iVar8 * (1.0 - fVar15)),
                                     (int)((1.0 - (__this->fields).midGrey) * (float)iVar9),
                                     (MethodInfo *)0x0);
                pUVar12 = *(UnityEngine_Texture2D_o **)&(__this->fields).monochromeTiling;
                bVar6 = (__this->fields).dx11Grain;
                pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
                if (*(int *)(TypeInfo_NoiseAndGrain + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
                          (source,(UnityEngine_RenderTexture_o *)pUVar11,pUVar13,pUVar12,
                           3 - (uint)((char)bVar6 == '\0'),in_R9);
                pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
                if (pUVar13 == (UnityEngine_Material_o *)0x0) goto LAB_0425ee7d;
                UnityEngine_Material__SetTexture(pUVar13,"_NoiseTex",pUVar11,(MethodInfo *)0x0);
                pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                iVar7 = 4;
LAB_0425ee17:
                UnityEngine_Graphics__Blit
                          ((UnityEngine_Texture_o *)source,destination,pUVar13,iVar7,
                           (MethodInfo *)0x0);
                UnityEngine_RenderTexture__ReleaseTemporary
                          ((UnityEngine_RenderTexture_o *)pUVar11,(MethodInfo *)0x0);
                return;
              }
              pUVar12 = *(UnityEngine_Texture2D_o **)&(__this->fields).monochromeTiling;
              pUVar13 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
              bVar6 = (__this->fields).dx11Grain;
              if (*(int *)(TypeInfo_NoiseAndGrain + 0xe4) == 0) {
                il2cpp_init_class();
              }
              passNr = (uint)(byte)bVar6;
LAB_0425ee6d:
              UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
                        (source,destination,pUVar13,pUVar12,passNr,in_R9);
              return;
            }
          }
        }
      }
LAB_0425ee7d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  pUVar2 = *(UnityEngine_Object_o **)&(__this->fields).monochromeTiling;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,pUVar2,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    context = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning("Noise & Grain effect failing as noise texture is not assigned. please assign.",(UnityEngine_Object_o *)context,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.NoiseAndGrain$$DrawNoiseQuadGrid
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid (UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* fxMaterial, UnityEngine_Texture2D_o* noise, int32_t passNr, const MethodInfo* method);
// 0x425ee90

void UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
               (UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *dest,
               UnityEngine_Material_o *fxMaterial,UnityEngine_Texture2D_o *noise,int32_t passNr,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float x;
  float fVar6;
  float fVar7;
  float x_00;
  undefined4 extraout_XMM1_Db;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_90;
  float local_8c;
  
  if (DAT_05705264 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NoiseAndGrain);
    il2cpp_init_method_metadata(&"_MainTex");
    DAT_05705264 = '\x01';
  }
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  if (noise != (UnityEngine_Texture2D_o *)0x0) {
    iVar1 = (*(noise->klass->vtable)._5_get_width.methodPtr)
                      (noise,(noise->klass->vtable)._5_get_width.method);
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      iVar2 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      if (*(int *)(TypeInfo_NoiseAndGrain + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (fxMaterial != (UnityEngine_Material_o *)0x0) {
        fVar4 = (float)iVar1;
        fVar5 = **(float **)(TypeInfo_NoiseAndGrain + 0xb8);
        UnityEngine_Material__SetTexture
                  (fxMaterial,"_MainTex",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
        UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
        UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
        iVar1 = (*(source->klass->vtable)._5_get_width.methodPtr)
                          (source,(source->klass->vtable)._5_get_width.method);
        iVar3 = (*(source->klass->vtable)._7_get_height.methodPtr)
                          (source,(source->klass->vtable)._7_get_height.method);
        auVar8._4_4_ = (float)iVar1;
        auVar8._0_4_ = 0x3f800000;
        auVar8._8_8_ = 0;
        auVar9._4_4_ = (float)iVar3;
        auVar9._0_4_ = (float)iVar2 / fVar5;
        auVar9._8_4_ = 0;
        auVar9._12_4_ = extraout_XMM1_Db;
        auVar9 = divps(auVar8,auVar9);
        iVar1 = (*(noise->klass->vtable)._5_get_width.methodPtr)
                          (noise,(noise->klass->vtable)._5_get_width.method);
        UnityEngine_Material__SetPass(fxMaterial,passNr,(MethodInfo *)0x0);
        UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
        fVar5 = (1.0 / fVar4) * (fVar4 / (float)iVar1);
        local_8c = 0.0;
        do {
          x = auVar9._0_4_ + local_8c;
          local_90 = 0.0;
          do {
            fVar6 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
            fVar7 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
            fVar6 = floorf(fVar6 * fVar4);
            fVar6 = fVar6 / fVar4;
            fVar7 = floorf(fVar7 * fVar4);
            fVar7 = fVar7 / fVar4;
            UnityEngine_GL__MultiTexCoord2(0,fVar6,fVar7,(MethodInfo *)0x0);
            UnityEngine_GL__MultiTexCoord2(1,0.0,0.0,(MethodInfo *)0x0);
            UnityEngine_GL__Vertex3(local_8c,local_90,0.1,(MethodInfo *)0x0);
            x_00 = fVar5 + fVar6;
            UnityEngine_GL__MultiTexCoord2(0,x_00,fVar7,(MethodInfo *)0x0);
            UnityEngine_GL__MultiTexCoord2(1,1.0,0.0,(MethodInfo *)0x0);
            UnityEngine_GL__Vertex3(x,local_90,0.1,(MethodInfo *)0x0);
            fVar7 = fVar7 + fVar5;
            UnityEngine_GL__MultiTexCoord2(0,x_00,fVar7,(MethodInfo *)0x0);
            UnityEngine_GL__MultiTexCoord2(1,1.0,1.0,(MethodInfo *)0x0);
            local_90 = local_90 + auVar9._4_4_ * auVar9._0_4_;
            UnityEngine_GL__Vertex3(x,local_90,0.1,(MethodInfo *)0x0);
            UnityEngine_GL__MultiTexCoord2(0,fVar6,fVar7,(MethodInfo *)0x0);
            UnityEngine_GL__MultiTexCoord2(1,0.0,1.0,(MethodInfo *)0x0);
            UnityEngine_GL__Vertex3(local_8c,local_90,0.1,(MethodInfo *)0x0);
          } while (local_90 < 1.0);
          local_8c = x;
        } while (x < 1.0);
        UnityEngine_GL__End((MethodInfo *)0x0);
        UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.NoiseAndGrain$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndGrain___ctor (UnityStandardAssets_ImageEffects_NoiseAndGrain_o* __this, const MethodInfo* method);
// 0x425f280

void UnityStandardAssets_ImageEffects_NoiseAndGrain___ctor
               (UnityStandardAssets_ImageEffects_NoiseAndGrain_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials =
       (System_Collections_Generic_List_Material__o *)0x3f0000003e800000;
  (__this->fields).intensityMultiplier = 1.0;
  (__this->fields).generalIntensity = 1.0;
  (__this->fields).blackIntensity = 0.2;
  (__this->fields).softness = 1.0;
  (__this->fields).monochrome = 0x3f800000;
  (__this->fields).intensities.fields.x = 1.0;
  (__this->fields).intensities.fields.y = 64.0;
  (__this->fields).intensities.fields.z = 64.0;
  (__this->fields).tiling.fields.x = 64.0;
  (__this->fields).tiling.fields.y = 64.0;
  (__this->fields).tiling.fields.z = 1.4013e-45;
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


// UnityStandardAssets.ImageEffects.NoiseAndGrain$$.cctor
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndGrain___cctor (const MethodInfo* method);
// 0x425f330

void UnityStandardAssets_ImageEffects_NoiseAndGrain___cctor(MethodInfo *method)

{
  if (DAT_05705265 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NoiseAndGrain);
    DAT_05705265 = '\x01';
  }
  **(undefined4 **)(TypeInfo_NoiseAndGrain + 0xb8) = 0x42800000;
  return;
}


