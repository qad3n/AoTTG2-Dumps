// Type: UnityStandardAssets.ImageEffects.SunShafts
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/SunShafts.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/SunShafts.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.SunShafts$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_SunShafts__CheckResources (UnityStandardAssets_ImageEffects_SunShafts_o* __this, const MethodInfo* method);
// 0x4587e00

bool_conflict
UnityStandardAssets_ImageEffects_SunShafts__CheckResources
          (UnityStandardAssets_ImageEffects_SunShafts_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  MethodInfo *method_00;
  undefined8 uVar2;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
             (uint)*(byte *)&(__this->fields).sunShaftIntensity,in_RDX);
  pUVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).useDepthTexture,
                      (UnityEngine_Material_o *)(__this->fields).sunShaftsShader,in_RCX);
  (__this->fields).sunShaftsShader = (UnityEngine_Shader_o *)pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).sunShaftsShader,pUVar1);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).sunShaftsMaterial,
                         (UnityEngine_Material_o *)(__this->fields).simpleClearShader,in_RCX);
  (__this->fields).simpleClearShader = (UnityEngine_Shader_o *)method_00;
  uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).simpleClearShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.SunShafts$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_SunShafts__OnRenderImage (UnityStandardAssets_ImageEffects_SunShafts_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4587ea0

void UnityStandardAssets_ImageEffects_SunShafts__OnRenderImage
               (UnityStandardAssets_ImageEffects_SunShafts_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  UnityEngine_Material_o *pUVar4;
  char cVar5;
  uint uVar6;
  bool_conflict bVar7;
  int iVar8;
  int32_t width;
  int32_t height;
  UnityEngine_Camera_o *pUVar9;
  UnityStandardAssets_ImageEffects_SunShafts_o *__this_00;
  UnityEngine_Texture_o *source_00;
  UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this_01;
  UnityEngine_Texture_o *source_01;
  System_Collections_Generic_List_object__o *__this_02;
  int iVar10;
  MethodInfo *method_00;
  int width_00;
  long *__this_03;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector4_o value_05;
  UnityEngine_Vector3_o UVar16;
  undefined8 uStack_78;
  
  if (g_data_057af0ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_Skybox");
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    il2cpp_runtime_helper_023445d0(&"_SunColor");
    il2cpp_runtime_helper_023445d0(&"_SunThreshold");
    il2cpp_runtime_helper_023445d0(&"_SunPosition");
    il2cpp_runtime_helper_023445d0(&"_BlurRadius4");
    g_data_057af0ff = '\x01';
  }
  cVar5 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar5 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  if (*(char *)&(__this->fields).sunShaftIntensity != '\0') {
    __this_03 = (long *)__this;
    pUVar9 = (UnityEngine_Camera_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_045885ea;
    uVar6 = UnityEngine_Camera__get_depthTextureMode(pUVar9,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(pUVar9,uVar6 | 1,(MethodInfo *)0x0);
  }
  iVar8 = *(int *)&(__this->fields).createdMaterials;
  iVar11 = 2;
  if (iVar8 != 1) {
    iVar11 = (uint)(iVar8 != 2) * 3 + 1;
  }
  if (g_data_057a6932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6932 = '\x01';
  }
  __this_03 = *(long **)&(__this->fields).resolution;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    uStack_78 = 0x3f0000003f000000;
    fVar15 = 0.0;
  }
  else {
    __this_00 = (UnityStandardAssets_ImageEffects_SunShafts_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    __this_03 = *(long **)&(__this->fields).resolution;
    if (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03 ==
         (UnityStandardAssets_ImageEffects_SunShafts_o *)0x0) ||
       (UVar16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0),
       __this_00 == (UnityStandardAssets_ImageEffects_SunShafts_o *)0x0)) goto label_045885ea;
    UVar16 = UnityEngine_Camera__WorldToViewportPoint_4db3380
                       ((UnityEngine_Camera_o *)__this_00,UVar16,(MethodInfo *)0x0);
    fVar15 = UVar16.fields.z;
    uStack_78 = UVar16.fields._0_8_;
    __this_03 = (long *)__this_00;
  }
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    width_00 = iVar8 / iVar11;
    iVar8 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method,
                       (long)iVar8 % (long)iVar11 & 0xffffffff);
    iVar8 = iVar8 / iVar11;
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d70(width_00,iVar8,0,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
    __this_03 = (long *)0x0;
    if (pUVar4 != (UnityEngine_Material_o *)0x0) {
      fVar12 = (__this->fields).sunThreshold.fields.b;
      value.fields.z = fVar12 * 0.0;
      value.fields.y = fVar12;
      value.fields.x = fVar12;
      value.fields.w = value.fields.z;
      UnityEngine_Material__SetVector(pUVar4,"_BlurRadius4",value,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
      __this_03 = (long *)0x0;
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        value_00.fields.w = (__this->fields).sunShaftBlurRadius;
        value_00.fields.z = fVar15;
        value_00.fields.x = (float)(int)uStack_78;
        value_00.fields.y = (float)(int)((ulong)uStack_78 >> 0x20);
        UnityEngine_Material__SetVector(pUVar4,"_SunPosition",value_00,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
        __this_03 = (long *)0x0;
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetVector
                    (pUVar4,"_SunThreshold",
                     (UnityEngine_Vector4_o)*(UnityEngine_Vector4_Fields *)&(__this->fields).sunColor.fields.b
                     ,(MethodInfo *)0x0);
          if (*(char *)&(__this->fields).sunShaftIntensity == '\0') {
            __this_03 = (long *)__this;
            pUVar9 = (UnityEngine_Camera_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
            if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_045885ea;
            uVar6 = UnityEngine_Camera__get_allowHDR(pUVar9,(MethodInfo *)0x0);
            width = (*(source->klass->vtable)._5_get_width.methodPtr)
                              (source,(source->klass->vtable)._5_get_width.method);
            height = (*(source->klass->vtable)._7_get_height.methodPtr)
                               (source,(source->klass->vtable)._7_get_height.method);
            __this_01 = (UnityStandardAssets_ImageEffects_PostEffectsBase_o *)
                        UnityEngine_RenderTexture__GetTemporary_4de1d50
                                  (width,height,0,(uVar6 & 0xff) * 2 + 7,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)__this_01,(MethodInfo *)0x0);
            pUVar9 = (UnityEngine_Camera_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
            UnityEngine_GL__ClearWithSkybox(0,pUVar9,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
            __this_03 = (long *)0x0;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_045885ea;
            UnityEngine_Material__SetTexture
                      (pUVar4,"_Skybox",(UnityEngine_Texture_o *)__this_01,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x3;
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,pUVar4,3,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)__this_01,(MethodInfo *)0x0);
          }
          else {
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x2;
            __this_01 = (UnityStandardAssets_ImageEffects_PostEffectsBase_o *)source;
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,pUVar4,2,
                       (MethodInfo *)0x0);
          }
          UnityStandardAssets_ImageEffects_PostEffectsBase__DrawBorder
                    (__this_01,(UnityEngine_RenderTexture_o *)source_00,
                     (UnityEngine_Material_o *)(__this->fields).simpleClearShader,method_00);
          iVar11 = *(int *)&(__this->fields).sunTransform;
          iVar10 = 4;
          if (iVar11 < 5) {
            iVar10 = iVar11;
          }
          iVar11 = 1;
          if (0 < iVar10) {
            iVar11 = iVar10;
          }
          *(int *)&(__this->fields).sunTransform = iVar11;
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
          __this_03 = (long *)0x0;
          if (pUVar4 != (UnityEngine_Material_o *)0x0) {
            value_01.fields.x = (__this->fields).sunThreshold.fields.b * 0.0013020834;
            value_01.fields.y = value_01.fields.x;
            value_01.fields.z = 0.0;
            value_01.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar4,"_BlurRadius4",value_01,(MethodInfo *)0x0);
            __this_03 = (long *)(__this->fields).sunShaftsShader;
            if ((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03 !=
                (UnityStandardAssets_ImageEffects_SunShafts_o *)0x0) {
              iVar11 = 0;
              value_02.fields.w = (__this->fields).sunShaftBlurRadius;
              value_02.fields.z = fVar15;
              value_02.fields.x = (float)(int)uStack_78;
              value_02.fields.y = (float)(int)((ulong)uStack_78 >> 0x20);
              UnityEngine_Material__SetVector
                        ((UnityEngine_Material_o *)__this_03,"_SunPosition",value_02,(MethodInfo *)0x0);
              if (0 < *(int *)&(__this->fields).sunTransform) {
                do {
                  source_01 = (UnityEngine_Texture_o *)
                              UnityEngine_RenderTexture__GetTemporary_4de1d70
                                        (width_00,iVar8,0,(MethodInfo *)0x0);
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            (source_00,(UnityEngine_RenderTexture_o *)source_01,pUVar4,1,(MethodInfo *)0x0);
                  UnityEngine_RenderTexture__ReleaseTemporary
                            ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
                  __this_03 = (long *)0x0;
                  if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_045885ea;
                  fVar12 = (float)iVar11 + (float)iVar11;
                  value_03.fields.x = ((fVar12 + 1.0) * 6.0 * (__this->fields).sunThreshold.fields.b) / 768.0;
                  value_03.fields.y = value_03.fields.x;
                  value_03.fields.z = 0.0;
                  value_03.fields.w = 0.0;
                  UnityEngine_Material__SetVector(pUVar4,"_BlurRadius4",value_03,(MethodInfo *)0x0);
                  source_00 = (UnityEngine_Texture_o *)
                              UnityEngine_RenderTexture__GetTemporary_4de1d70
                                        (width_00,iVar8,0,(MethodInfo *)0x0);
                  UnityEngine_Graphics__Blit_4dc2a60
                            (source_01,(UnityEngine_RenderTexture_o *)source_00,
                             (UnityEngine_Material_o *)(__this->fields).sunShaftsShader,1,(MethodInfo *)0x0);
                  UnityEngine_RenderTexture__ReleaseTemporary
                            ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
                  __this_03 = (long *)(__this->fields).sunShaftsShader;
                  if ((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03 ==
                      (UnityStandardAssets_ImageEffects_SunShafts_o *)0x0) goto label_045885ea;
                  value_04.fields.x = ((fVar12 + 2.0) * 6.0 * (__this->fields).sunThreshold.fields.b) / 768.0;
                  value_04.fields.y = value_04.fields.x;
                  value_04.fields.z = 0.0;
                  value_04.fields.w = 0.0;
                  UnityEngine_Material__SetVector
                            ((UnityEngine_Material_o *)__this_03,"_BlurRadius4",value_04,(MethodInfo *)0x0);
                  iVar11 = iVar11 + 1;
                } while (iVar11 < *(int *)&(__this->fields).sunTransform);
              }
              pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
              if (0.0 <= fVar15) {
                if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_045885ea;
                fVar15 = (__this->fields).sunThreshold.fields.a;
                uVar2 = *(undefined8 *)((long)&(__this->fields).sunTransform + 4);
                uVar1 = (__this->fields).sunColor.fields.r;
                uVar3 = (__this->fields).sunColor.fields.g;
                fVar12 = (float)uVar2 * fVar15;
                fVar13 = (float)((ulong)uVar2 >> 0x20) * fVar15;
                fVar14 = (float)uVar1 * fVar15;
                fVar15 = (float)uVar3 * fVar15;
              }
              else {
                if (g_data_057af101 == '\0') {
                  __this_03 = &TypeInfo_Vector4;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057af101 = '\x01';
                }
                if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_045885ea;
                uVar2 = **(undefined8 **)(TypeInfo_Vector4 + 0xb8);
                fVar12 = (float)uVar2;
                fVar13 = (float)((ulong)uVar2 >> 0x20);
                uVar2 = (*(undefined8 **)(TypeInfo_Vector4 + 0xb8))[1];
                fVar14 = (float)uVar2;
                fVar15 = (float)((ulong)uVar2 >> 0x20);
              }
              value_05.fields.y = fVar13;
              value_05.fields.x = fVar12;
              value_05.fields.w = fVar15;
              value_05.fields.z = fVar14;
              UnityEngine_Material__SetVector(pUVar4,"_SunColor",value_05,(MethodInfo *)0x0);
              pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
              __this_03 = (long *)0x0;
              if (pUVar4 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetTexture(pUVar4,"_ColorBuffer",source_00,(MethodInfo *)0x0);
                pUVar4 = (UnityEngine_Material_o *)(__this->fields).sunShaftsShader;
                iVar8 = *(int *)((long)&(__this->fields).createdMaterials + 4);
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Graphics__Blit_4dc2a60
                          ((UnityEngine_Texture_o *)source,destination,pUVar4,(uint)(iVar8 != 0) << 2,
                           (MethodInfo *)0x0);
                UnityEngine_RenderTexture__ReleaseTemporary
                          ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_045885ea:
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).createdMaterials = 1;
  *(undefined4 *)&(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunTransform = 2;
  *(undefined4 *)
   ((long)&(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunTransform + 4) =
       0x3f800000;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).radialBlurIterations = 0x3f800000;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunColor.fields.r = 1.0;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunColor.fields.g = 1.0;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunColor.fields.b = 0.87;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunColor.fields.a = 0.74;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunThreshold.fields.r = 0.65;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunThreshold.fields.g = 1.0;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunThreshold.fields.b = 2.5;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunThreshold.fields.a = 1.15;
  (((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunShaftBlurRadius = 0.75;
  *(undefined1 *)&(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).sunShaftIntensity = 1;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).supportHDRTextures = 1
  ;
  *(undefined1 *)
   ((long)&(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).supportHDRTextures + 2) = 1;
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)
   &(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).isSupported = __this_02;
  il2cpp_runtime_helper_022b4080(&(((UnityStandardAssets_ImageEffects_SunShafts_o *)__this_03)->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.SunShafts$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_SunShafts___ctor (UnityStandardAssets_ImageEffects_SunShafts_o* __this, const MethodInfo* method);
// 0x45885f0

void UnityStandardAssets_ImageEffects_SunShafts___ctor
               (UnityStandardAssets_ImageEffects_SunShafts_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)&(__this->fields).createdMaterials = 1;
  *(undefined4 *)&(__this->fields).sunTransform = 2;
  *(undefined4 *)((long)&(__this->fields).sunTransform + 4) = 0x3f800000;
  (__this->fields).radialBlurIterations = 0x3f800000;
  (__this->fields).sunColor.fields.r = 1.0;
  (__this->fields).sunColor.fields.g = 1.0;
  (__this->fields).sunColor.fields.b = 0.87;
  (__this->fields).sunColor.fields.a = 0.74;
  (__this->fields).sunThreshold.fields.r = 0.65;
  (__this->fields).sunThreshold.fields.g = 1.0;
  (__this->fields).sunThreshold.fields.b = 2.5;
  (__this->fields).sunThreshold.fields.a = 1.15;
  (__this->fields).sunShaftBlurRadius = 0.75;
  *(undefined1 *)&(__this->fields).sunShaftIntensity = 1;
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


