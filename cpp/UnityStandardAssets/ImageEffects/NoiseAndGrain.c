// Type: UnityStandardAssets.ImageEffects.NoiseAndGrain
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/NoiseAndGrain.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/NoiseAndGrain.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.NoiseAndGrain$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_NoiseAndGrain__CheckResources (UnityStandardAssets_ImageEffects_NoiseAndGrain_o* __this, const MethodInfo* method);
// 0x4583630

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
  
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
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
  uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).noiseShader);
  if ((*(char *)&(__this->fields).whiteIntensity != '\0') &&
     (*(char *)((long)&(__this->fields).supportHDRTextures + 1) != '\0')) {
    method_00 = (MethodInfo *)
                UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                          ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                           (UnityEngine_Shader_o *)(__this->fields).noiseMaterial,
                           (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader,in_RCX);
    (__this->fields).dx11NoiseShader = (UnityEngine_Shader_o *)method_00;
    uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).dx11NoiseShader);
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
// 0x4583730

void UnityStandardAssets_ImageEffects_NoiseAndGrain__OnRenderImage
               (UnityStandardAssets_ImageEffects_NoiseAndGrain_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Texture_o *pUVar5;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  UnityEngine_Transform_o *context;
  UnityEngine_Vector3_o *pUVar12;
  MethodInfo *pMVar13;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo **noise;
  UnityEngine_Texture2D_o *noise_00;
  UnityEngine_Material_o *pUVar14;
  UnityEngine_Material_o *__this_01;
  uint passNr;
  MethodInfo *__this_02;
  MethodInfo *name;
  long *value;
  long *__this_03;
  int in_R8D;
  MethodInfo *in_R9;
  float fVar15;
  float fVar16;
  float fVar17;
  float x;
  undefined4 extraout_XMM1_Db;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector4_o value_05;
  UnityEngine_Vector4_o value_06;
  float fStack_c8;
  float fStack_c4;
  
  noise = (MethodInfo **)method;
  if (g_data_057af0df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NoiseAndGrain);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_NoiseAmount");
    il2cpp_runtime_helper_023445d0(&"Noise & Grain effect failing as noise texture is not assigned. please assign.");
    il2cpp_runtime_helper_023445d0(&"_NoiseTilingPerChannel");
    il2cpp_runtime_helper_023445d0(&"_NoiseTex");
    il2cpp_runtime_helper_023445d0(&"_DX11NoiseTime");
    il2cpp_runtime_helper_023445d0(&"_NoisePerChannel");
    il2cpp_runtime_helper_023445d0(&"_MidGrey");
    g_data_057af0df = '\x01';
    noise = (MethodInfo **)method;
  }
  cVar6 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar6 != '\0') {
    __this_02 = *(MethodInfo **)&(__this->fields).monochromeTiling;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      fVar15 = (__this->fields).midGrey;
      fVar1 = 0.99;
      if (fVar15 <= 0.99) {
        fVar1 = fVar15;
      }
      (__this->fields).midGrey = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar1);
      if ((*(char *)&(__this->fields).whiteIntensity == '\0') ||
         (*(char *)((long)&(__this->fields).supportHDRTextures + 1) == '\0')) {
        pUVar4 = *(UnityEngine_Object_o **)&(__this->fields).monochromeTiling;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Implicit(pUVar4,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pUVar5 = *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling;
          value = (long *)0x0;
          if (pUVar5 == (UnityEngine_Texture_o *)0x0) goto label_04583f7d;
          __this_02 = (MethodInfo *)0x0;
          UnityEngine_Texture__set_wrapMode(pUVar5,0,(MethodInfo *)0x0);
          pUVar5 = *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling;
          value = (long *)0x0;
          if (pUVar5 == (UnityEngine_Texture_o *)0x0) goto label_04583f7d;
          fVar15 = (__this->fields).tiling.fields.z;
          __this_02 = (MethodInfo *)(ulong)(uint)fVar15;
          UnityEngine_Texture__set_filterMode(pUVar5,(int32_t)fVar15,(MethodInfo *)0x0);
        }
        value = (long *)(__this->fields).noiseShader;
        if ((UnityEngine_Texture_o *)value != (UnityEngine_Texture_o *)0x0) {
          __this_02 = "_NoiseTex";
          UnityEngine_Material__SetTexture
                    ((UnityEngine_Material_o *)value,(System_String_o *)"_NoiseTex",
                     *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling,(MethodInfo *)0x0);
          pMVar13 = "_NoisePerChannel";
          __this_03 = (long *)(__this->fields).noiseShader;
          if ((char)(__this->fields).dx11Grain == '\0') {
            noise = (MethodInfo **)&(__this->fields).softness;
            pUVar12 = &(__this->fields).intensities;
          }
          else {
            if (g_data_057a6932 == '\0') {
              value = &TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
            }
            noise = (MethodInfo **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            pUVar12 = (UnityEngine_Vector3_o *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          }
          if ((UnityEngine_Texture_o *)__this_03 != (UnityEngine_Texture_o *)0x0) {
            value_00.fields.z = (pUVar12->fields).x;
            value_00.fields._0_8_ = (UnityEngine_Texture2D_c *)((MethodInfo *)noise)->methodPointer;
            value_00.fields.w = 0.0;
            UnityEngine_Material__SetVector
                      ((UnityEngine_Material_o *)__this_03,(System_String_o *)pMVar13,value_00,
                       (MethodInfo *)0x0);
            name = "_NoiseTilingPerChannel";
            pUVar14 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
            if ((char)(__this->fields).dx11Grain == '\0') {
              fVar1 = (__this->fields).intensities.fields.y;
              fVar3 = (__this->fields).intensities.fields.z;
              fVar15 = (__this->fields).tiling.fields.x;
              __this_02 = pMVar13;
              value = __this_03;
            }
            else {
              if (g_data_057a6932 == '\0') {
                __this_03 = &TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6932 = '\x01';
              }
              uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
              fVar15 = (__this->fields).tiling.fields.y;
              fVar1 = fVar15 * (float)uVar2;
              fVar3 = fVar15 * (float)((ulong)uVar2 >> 0x20);
              fVar15 = fVar15 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
              __this_02 = pMVar13;
              value = __this_03;
            }
            if (pUVar14 != (UnityEngine_Material_o *)0x0) {
              value_01.fields.y = fVar3;
              value_01.fields.x = fVar1;
              value_01.fields.z = fVar15;
              value_01.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar14,(System_String_o *)name,value_01,(MethodInfo *)0x0);
              pUVar14 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
              value = (long *)0x0;
              __this_02 = name;
              if (pUVar14 != (UnityEngine_Material_o *)0x0) {
                fVar15 = (__this->fields).blackIntensity;
                value_02.fields.y = 1.0 / (1.0 - fVar15);
                value_02.fields.x = fVar15;
                value_02.fields.z = -1.0 / fVar15;
                value_02.fields.w = 0.0;
                __this_02 = "_MidGrey";
                UnityEngine_Material__SetVector
                          (pUVar14,(System_String_o *)"_MidGrey",value_02,(MethodInfo *)0x0);
                value = (long *)(__this->fields).noiseShader;
                if ((UnityEngine_Texture_o *)value != (UnityEngine_Texture_o *)0x0) {
                  fVar15 = *(float *)&(__this->fields).createdMaterials;
                  uVar2 = *(undefined8 *)((long)&(__this->fields).createdMaterials + 4);
                  value_03.fields.x = fVar15 * (float)uVar2;
                  value_03.fields.y = fVar15 * (float)((ulong)uVar2 >> 0x20);
                  value_03.fields.z = fVar15 * (__this->fields).generalIntensity;
                  value_03.fields.w = 0.0;
                  __this_02 = "_NoiseAmount";
                  UnityEngine_Material__SetVector
                            ((UnityEngine_Material_o *)value,(System_String_o *)"_NoiseAmount",value_03,
                             (MethodInfo *)0x0);
                  fVar15 = (__this->fields).midGrey;
                  if (fVar15 < **(float **)(TypeInfo_Mathf + 0xb8) ||
                      fVar15 == **(float **)(TypeInfo_Mathf + 0xb8)) {
                    noise_00 = *(UnityEngine_Texture2D_o **)&(__this->fields).monochromeTiling;
                    pUVar14 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                    if (*(int *)((long)&TypeInfo_NoiseAndGrain[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    passNr = 0;
                    goto label_04583f6d;
                  }
                  if (source != (UnityEngine_RenderTexture_o *)0x0) {
                    iVar9 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                      (source,(source->klass->vtable)._5_get_width.method);
                    fVar15 = (__this->fields).midGrey;
                    iVar10 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                       (source,(source->klass->vtable)._7_get_height.method);
                    pMVar13 = (MethodInfo *)
                              UnityEngine_RenderTexture__GetTemporary_4de1e00
                                        ((int)((float)iVar9 * (1.0 - fVar15)),
                                         (int)((1.0 - (__this->fields).midGrey) * (float)iVar10),
                                         (MethodInfo *)0x0);
                    noise = *(MethodInfo ***)&(__this->fields).monochromeTiling;
                    pUVar14 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                    if (*(int *)((long)&TypeInfo_NoiseAndGrain[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    in_R8D = 2;
                    __this_02 = pMVar13;
                    UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
                              (source,(UnityEngine_RenderTexture_o *)pMVar13,pUVar14,
                               (UnityEngine_Texture2D_o *)noise,2,in_R9);
                    pUVar14 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                    value = (long *)0x0;
                    if (pUVar14 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetTexture
                                (pUVar14,(System_String_o *)"_NoiseTex",(UnityEngine_Texture_o *)pMVar13,
                                 (MethodInfo *)0x0);
                      pUVar14 = (UnityEngine_Material_o *)(__this->fields).noiseShader;
                      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      iVar8 = 1;
                      goto label_04583f17;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pUVar14 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
        value = (long *)0x0;
        iVar8 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_Material_o *)0x0) {
          noise = &"_DX11NoiseTime";
          __this_02 = "_DX11NoiseTime";
          UnityEngine_Material__SetFloat
                    (pUVar14,(System_String_o *)"_DX11NoiseTime",(float)iVar8,(MethodInfo *)0x0);
          value = (long *)(__this->fields).dx11NoiseShader;
          if ((UnityEngine_Texture_o *)value != (UnityEngine_Texture_o *)0x0) {
            __this_02 = "_NoiseTex";
            UnityEngine_Material__SetTexture
                      ((UnityEngine_Material_o *)value,(System_String_o *)"_NoiseTex",
                       *(UnityEngine_Texture_o **)&(__this->fields).monochromeTiling,(MethodInfo *)0x0);
            pMVar13 = "_NoisePerChannel";
            pUVar14 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
            if ((char)(__this->fields).dx11Grain == '\0') {
              noise = (MethodInfo **)&(__this->fields).softness;
              pUVar12 = &(__this->fields).intensities;
            }
            else {
              if (g_data_057a6932 == '\0') {
                value = &TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6932 = '\x01';
              }
              noise = (MethodInfo **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
              pUVar12 = (UnityEngine_Vector3_o *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            }
            if (pUVar14 != (UnityEngine_Material_o *)0x0) {
              value_04.fields.z = (pUVar12->fields).x;
              value_04.fields._0_8_ = (UnityEngine_Texture2D_c *)((MethodInfo *)noise)->methodPointer;
              value_04.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar14,(System_String_o *)pMVar13,value_04,(MethodInfo *)0x0);
              pUVar14 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
              value = (long *)0x0;
              __this_02 = pMVar13;
              if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_04583f7d;
              fVar15 = (__this->fields).blackIntensity;
              value_05.fields.y = 1.0 / (1.0 - fVar15);
              value_05.fields.x = fVar15;
              value_05.fields.z = -1.0 / fVar15;
              value_05.fields.w = 0.0;
              __this_02 = "_MidGrey";
              UnityEngine_Material__SetVector
                        (pUVar14,(System_String_o *)"_MidGrey",value_05,(MethodInfo *)0x0);
              value = (long *)(__this->fields).dx11NoiseShader;
              if ((UnityEngine_Texture_o *)value == (UnityEngine_Texture_o *)0x0) goto label_04583f7d;
              fVar15 = *(float *)&(__this->fields).createdMaterials;
              uVar2 = *(undefined8 *)((long)&(__this->fields).createdMaterials + 4);
              value_06.fields.x = fVar15 * (float)uVar2;
              value_06.fields.y = fVar15 * (float)((ulong)uVar2 >> 0x20);
              value_06.fields.z = fVar15 * (__this->fields).generalIntensity;
              value_06.fields.w = 0.0;
              __this_02 = "_NoiseAmount";
              UnityEngine_Material__SetVector
                        ((UnityEngine_Material_o *)value,(System_String_o *)"_NoiseAmount",value_06,
                         (MethodInfo *)0x0);
              fVar15 = (__this->fields).midGrey;
              if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar15 && fVar15 != **(float **)(TypeInfo_Mathf + 0xb8))
              {
                if (source == (UnityEngine_RenderTexture_o *)0x0) goto label_04583f7d;
                iVar9 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                  (source,(source->klass->vtable)._5_get_width.method);
                fVar15 = (__this->fields).midGrey;
                iVar10 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                   (source,(source->klass->vtable)._7_get_height.method);
                pMVar13 = (MethodInfo *)
                          UnityEngine_RenderTexture__GetTemporary_4de1e00
                                    ((int)((float)iVar9 * (1.0 - fVar15)),
                                     (int)((1.0 - (__this->fields).midGrey) * (float)iVar10),(MethodInfo *)0x0
                                    );
                noise = *(MethodInfo ***)&(__this->fields).monochromeTiling;
                pUVar14 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
                in_R8D = 3 - (uint)((char)(__this->fields).dx11Grain == '\0');
                if (*(int *)((long)&TypeInfo_NoiseAndGrain[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_02 = pMVar13;
                UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
                          (source,(UnityEngine_RenderTexture_o *)pMVar13,pUVar14,
                           (UnityEngine_Texture2D_o *)noise,in_R8D,in_R9);
                pUVar14 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
                value = (long *)0x0;
                if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_04583f7d;
                UnityEngine_Material__SetTexture
                          (pUVar14,(System_String_o *)"_NoiseTex",(UnityEngine_Texture_o *)pMVar13,
                           (MethodInfo *)0x0);
                pUVar14 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                iVar8 = 4;
label_04583f17:
                UnityEngine_Graphics__Blit_4dc2a60
                          ((UnityEngine_Texture_o *)source,destination,pUVar14,iVar8,(MethodInfo *)0x0);
                UnityEngine_RenderTexture__ReleaseTemporary
                          ((UnityEngine_RenderTexture_o *)pMVar13,(MethodInfo *)0x0);
                return;
              }
              noise_00 = *(UnityEngine_Texture2D_o **)&(__this->fields).monochromeTiling;
              pUVar14 = (UnityEngine_Material_o *)(__this->fields).dx11NoiseShader;
              bVar7 = (__this->fields).dx11Grain;
              if (*(int *)((long)&TypeInfo_NoiseAndGrain[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              passNr = (uint)(byte)bVar7;
label_04583f6d:
              UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
                        (source,destination,pUVar14,noise_00,passNr,in_R9);
              return;
            }
          }
        }
      }
label_04583f7d:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057af0e0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NoiseAndGrain);
        il2cpp_runtime_helper_023445d0(&"_MainTex");
        g_data_057af0e0 = '\x01';
      }
      UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)__this_02,(MethodInfo *)0x0);
      if (((MethodInfo *)noise != (MethodInfo *)0x0) &&
         (__this_02 = (MethodInfo *)noise,
         iVar9 = (*(((UnityEngine_Texture2D_c *)((MethodInfo *)noise)->methodPointer)->vtable)._5_get_width.
                   methodPtr)(noise,(((UnityEngine_Texture2D_c *)((MethodInfo *)noise)->methodPointer)->vtable
                                    )._5_get_width.method),
         (UnityEngine_Texture_o *)value != (UnityEngine_Texture_o *)0x0)) {
        iVar10 = (*(((UnityEngine_Texture_o *)value)->klass->vtable)._5_get_width.methodPtr)
                           (value,(((UnityEngine_Texture_o *)value)->klass->vtable)._5_get_width.method);
        __this_02 = TypeInfo_NoiseAndGrain;
        if (*(int *)((long)&TypeInfo_NoiseAndGrain[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (__this_01 != (UnityEngine_Material_o *)0x0) {
          fVar1 = (float)iVar9;
          fVar15 = *(float *)TypeInfo_NoiseAndGrain[2].virtualMethodPointer;
          UnityEngine_Material__SetTexture
                    (__this_01,"_MainTex",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
          UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
          UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
          iVar9 = (*(((UnityEngine_Texture_o *)value)->klass->vtable)._5_get_width.methodPtr)
                            (value,(((UnityEngine_Texture_o *)value)->klass->vtable)._5_get_width.method);
          iVar11 = (*(((UnityEngine_Texture_o *)value)->klass->vtable)._7_get_height.methodPtr)
                             (value,(((UnityEngine_Texture_o *)value)->klass->vtable)._7_get_height.method);
          auVar18._4_4_ = (float)iVar9;
          auVar18._0_4_ = 0x3f800000;
          auVar18._8_8_ = 0;
          auVar19._4_4_ = (float)iVar11;
          auVar19._0_4_ = (float)iVar10 / fVar15;
          auVar19._8_4_ = 0;
          auVar19._12_4_ = extraout_XMM1_Db;
          auVar19 = divps(auVar18,auVar19);
          iVar9 = (*(((UnityEngine_Texture2D_c *)((MethodInfo *)noise)->methodPointer)->vtable)._5_get_width.
                    methodPtr)(noise,(((UnityEngine_Texture2D_c *)((MethodInfo *)noise)->methodPointer)->
                                     vtable)._5_get_width.method);
          UnityEngine_Material__SetPass(__this_01,in_R8D,(MethodInfo *)0x0);
          UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
          fVar15 = (1.0 / fVar1) * (fVar1 / (float)iVar9);
          fStack_c4 = 0.0;
          do {
            fVar3 = auVar19._0_4_ + fStack_c4;
            fStack_c8 = 0.0;
            do {
              fVar16 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
              fVar17 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
              fVar16 = floorf(fVar16 * fVar1);
              fVar16 = fVar16 / fVar1;
              fVar17 = floorf(fVar17 * fVar1);
              fVar17 = fVar17 / fVar1;
              UnityEngine_GL__MultiTexCoord2(0,fVar16,fVar17,(MethodInfo *)0x0);
              UnityEngine_GL__MultiTexCoord2(1,0.0,0.0,(MethodInfo *)0x0);
              UnityEngine_GL__Vertex3(fStack_c4,fStack_c8,0.1,(MethodInfo *)0x0);
              x = fVar15 + fVar16;
              UnityEngine_GL__MultiTexCoord2(0,x,fVar17,(MethodInfo *)0x0);
              UnityEngine_GL__MultiTexCoord2(1,1.0,0.0,(MethodInfo *)0x0);
              UnityEngine_GL__Vertex3(fVar3,fStack_c8,0.1,(MethodInfo *)0x0);
              fVar17 = fVar17 + fVar15;
              UnityEngine_GL__MultiTexCoord2(0,x,fVar17,(MethodInfo *)0x0);
              UnityEngine_GL__MultiTexCoord2(1,1.0,1.0,(MethodInfo *)0x0);
              fStack_c8 = fStack_c8 + auVar19._4_4_ * auVar19._0_4_;
              UnityEngine_GL__Vertex3(fVar3,fStack_c8,0.1,(MethodInfo *)0x0);
              UnityEngine_GL__MultiTexCoord2(0,fVar16,fVar17,(MethodInfo *)0x0);
              UnityEngine_GL__MultiTexCoord2(1,0.0,1.0,(MethodInfo *)0x0);
              UnityEngine_GL__Vertex3(fStack_c4,fStack_c8,0.1,(MethodInfo *)0x0);
            } while (fStack_c8 < 1.0);
            fStack_c4 = fVar3;
          } while (fVar3 < 1.0);
          UnityEngine_GL__End((MethodInfo *)0x0);
          UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      __this_02->parameters = (Il2CppType **)0x3f0000003e800000;
      (__this_02->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x3f8000003f800000;
      *(undefined4 *)&__this_02->field8_0x40 = 0x3e4ccccd;
      __this_02->slot = 0;
      __this_02->parameters_count = 0x80;
      __this_02->bitflags = '?';
      *(undefined4 *)&__this_02->field_0x54 = 0x3f800000;
      __this_02[1].methodPointer = (Il2CppMethodPointer)0x428000003f800000;
      *(undefined4 *)&__this_02[1].virtualMethodPointer = 0x42800000;
      *(undefined4 *)((long)&__this_02[1].virtualMethodPointer + 4) = 0x42800000;
      *(undefined4 *)&__this_02[1].invoker_method = 0x42800000;
      *(undefined4 *)((long)&__this_02[1].invoker_method + 4) = 1;
      if (g_data_057af0ed == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
        g_data_057af0ed = '\x01';
      }
      *(undefined1 *)&__this_02->klass = 1;
      *(undefined1 *)((long)&__this_02->klass + 2) = 1;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
      __this_02->return_type = (Il2CppType *)__this_00;
      il2cpp_runtime_helper_022b4080(&__this_02->return_type);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  pUVar4 = *(UnityEngine_Object_o **)&(__this->fields).monochromeTiling;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,pUVar4,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    context = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogWarning_4db7c80("Noise & Grain effect failing as noise texture is not assigned. please assign.",(UnityEngine_Object_o *)context,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.NoiseAndGrain$$DrawNoiseQuadGrid
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid (UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* fxMaterial, UnityEngine_Texture2D_o* noise, int32_t passNr, const MethodInfo* method);
// 0x4583f90

void UnityStandardAssets_ImageEffects_NoiseAndGrain__DrawNoiseQuadGrid
               (UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *dest,
               UnityEngine_Material_o *fxMaterial,UnityEngine_Texture2D_o *noise,int32_t passNr,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Collections_Generic_List_object__o *__this;
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
  
  if (g_data_057af0e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NoiseAndGrain);
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057af0e0 = '\x01';
  }
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  if (noise != (UnityEngine_Texture2D_o *)0x0) {
    dest = (UnityEngine_RenderTexture_o *)noise;
    iVar1 = (*(noise->klass->vtable)._5_get_width.methodPtr)(noise,(noise->klass->vtable)._5_get_width.method)
    ;
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      iVar2 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      dest = (UnityEngine_RenderTexture_o *)TypeInfo_NoiseAndGrain;
      if (*(int *)((long)&TypeInfo_NoiseAndGrain[7].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (fxMaterial != (UnityEngine_Material_o *)0x0) {
        fVar4 = (float)iVar1;
        fVar5 = *(float *)&(TypeInfo_NoiseAndGrain[5].fields.m_CancellationTokenSource)->klass;
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
  il2cpp_runtime_helper_022b2c90();
  (((UnityEngine_MonoBehaviour_o *)((long)dest + 0x20))->fields).m_CachedPtr = 0x3f0000003e800000;
  (((UnityEngine_MonoBehaviour_o *)((long)dest + 0x20))->fields).m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f8000003f800000;
  *(undefined4 *)&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x40))->klass = 0x3e4ccccd;
  (((UnityEngine_MonoBehaviour_o *)((long)dest + 0x40))->fields).m_CachedPtr = 0x3f8000003f800000;
  (((UnityEngine_MonoBehaviour_o *)((long)dest + 0x40))->fields).m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x428000003f800000;
  *(undefined4 *)&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x60))->klass = 0x42800000;
  *(undefined4 *)((long)&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x60))->klass + 4) = 0x42800000;
  *(undefined4 *)&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x60))->monitor = 0x42800000;
  *(undefined4 *)((long)&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x60))->monitor + 4) = 1;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x20))->klass = 1;
  *(undefined1 *)((long)&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x20))->klass + 2) = 1;
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_UnityEngine_Material);
  ((UnityEngine_MonoBehaviour_o *)((long)dest + 0x20))->monitor = __this;
  il2cpp_runtime_helper_022b4080(&((UnityEngine_MonoBehaviour_o *)((long)dest + 0x20))->monitor);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)dest,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.NoiseAndGrain$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndGrain___ctor (UnityStandardAssets_ImageEffects_NoiseAndGrain_o* __this, const MethodInfo* method);
// 0x4584380

void UnityStandardAssets_ImageEffects_NoiseAndGrain___ctor
               (UnityStandardAssets_ImageEffects_NoiseAndGrain_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x3f0000003e800000;
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


// UnityStandardAssets.ImageEffects.NoiseAndGrain$$.cctor
// il2cpp: void UnityStandardAssets_ImageEffects_NoiseAndGrain___cctor (const MethodInfo* method);
// 0x4584430

void UnityStandardAssets_ImageEffects_NoiseAndGrain___cctor(MethodInfo *method)

{
  if (g_data_057af0e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NoiseAndGrain);
    g_data_057af0e1 = '\x01';
  }
  **(undefined4 **)(TypeInfo_NoiseAndGrain + 0xb8) = 0x42800000;
  return;
}


