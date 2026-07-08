// Type: UnityStandardAssets.ImageEffects.EdgeDetection
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/EdgeDetection.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/EdgeDetection.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.EdgeDetection$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_EdgeDetection__CheckResources (UnityStandardAssets_ImageEffects_EdgeDetection_o* __this, const MethodInfo* method);
// 0x425cd90

bool_conflict
UnityStandardAssets_ImageEffects_EdgeDetection__CheckResources
          (UnityStandardAssets_ImageEffects_EdgeDetection_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,1,in_RDX);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         *(UnityEngine_Shader_o **)&(__this->fields).edgesOnlyBgColor.fields.a,
                         (UnityEngine_Material_o *)(__this->fields).edgeDetectShader,in_RCX);
  (__this->fields).edgeDetectShader = (UnityEngine_Shader_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).edgeDetectShader);
  iVar2 = *(int *)&(__this->fields).createdMaterials;
  if (iVar2 == *(int *)&(__this->fields).edgeDetectMaterial) {
    *(int *)&(__this->fields).edgeDetectMaterial = iVar2;
    bVar4 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    cVar1 = *(char *)((long)&(__this->fields).supportHDRTextures + 2);
  }
  else {
    UnityStandardAssets_ImageEffects_EdgeDetection__SetCameraFlag(__this,method_00);
    uVar3 = *(undefined4 *)&(__this->fields).createdMaterials;
    *(undefined4 *)&(__this->fields).edgeDetectMaterial = uVar3;
    bVar4 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    cVar1 = *(char *)((long)&(__this->fields).supportHDRTextures + 2);
  }
  if (cVar1 != '\0') {
    return bVar4;
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.EdgeDetection$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_EdgeDetection__Start (UnityStandardAssets_ImageEffects_EdgeDetection_o* __this, const MethodInfo* method);
// 0x425ceb0

void UnityStandardAssets_ImageEffects_EdgeDetection__Start
               (UnityStandardAssets_ImageEffects_EdgeDetection_o *__this,MethodInfo *method)

{
  *(undefined4 *)&(__this->fields).edgeDetectMaterial =
       *(undefined4 *)&(__this->fields).createdMaterials;
  return;
}


// UnityStandardAssets.ImageEffects.EdgeDetection$$SetCameraFlag
// il2cpp: void UnityStandardAssets_ImageEffects_EdgeDetection__SetCameraFlag (UnityStandardAssets_ImageEffects_EdgeDetection_o* __this, const MethodInfo* method);
// 0x425ce10

void UnityStandardAssets_ImageEffects_EdgeDetection__SetCameraFlag
               (UnityStandardAssets_ImageEffects_EdgeDetection_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Camera_o *__this_00;
  uint uVar2;
  
  if (DAT_05705256 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_05705256 = '\x01';
  }
  uVar2 = *(uint *)&(__this->fields).createdMaterials;
  if (uVar2 < 2) {
    __this_00 = (UnityEngine_Camera_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_0425cea7;
    uVar2 = 2;
  }
  else {
    if (1 < uVar2 - 2) {
      return;
    }
    __this_00 = (UnityEngine_Camera_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    if (__this_00 == (UnityEngine_Camera_o *)0x0) {
LAB_0425cea7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar2 = 1;
  }
  uVar1 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
  UnityEngine_Camera__set_depthTextureMode(__this_00,uVar2 | uVar1,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.EdgeDetection$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_EdgeDetection__OnEnable (UnityStandardAssets_ImageEffects_EdgeDetection_o* __this, const MethodInfo* method);
// 0x425cec0

void UnityStandardAssets_ImageEffects_EdgeDetection__OnEnable
               (UnityStandardAssets_ImageEffects_EdgeDetection_o *__this,MethodInfo *method)

{
  UnityStandardAssets_ImageEffects_EdgeDetection__SetCameraFlag(__this,method);
  return;
}


// UnityStandardAssets.ImageEffects.EdgeDetection$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_EdgeDetection__OnRenderImage (UnityStandardAssets_ImageEffects_EdgeDetection_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425ced0

void UnityStandardAssets_ImageEffects_EdgeDetection__OnRenderImage
               (UnityStandardAssets_ImageEffects_EdgeDetection_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  int32_t pass;
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Vector4_o value;
  char cVar2;
  UnityEngine_Vector4_o value_00;
  
  if (DAT_05705257 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Threshold");
    il2cpp_init_method_metadata(&"_Sensitivity");
    il2cpp_init_method_metadata(&"_SampleDistance");
    il2cpp_init_method_metadata(&"_BgColor");
    il2cpp_init_method_metadata(&"_Exponent");
    il2cpp_init_method_metadata(&"_BgFade");
    DAT_05705257 = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar2 != '\0') {
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).edgeDetectShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      value_00.fields.w = (float)(__this->fields).mode;
      value_00.fields.z = 1.0;
      value_00.fields._0_8_ = *(undefined8 *)((long)&(__this->fields).createdMaterials + 4);
      UnityEngine_Material__SetVector(pUVar1,"_Sensitivity",value_00,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).edgeDetectShader;
      if (pUVar1 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat
                  (pUVar1,"_BgFade",(__this->fields).edgeExp,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).edgeDetectShader;
        if (pUVar1 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (pUVar1,"_SampleDistance",(__this->fields).lumThreshold,(MethodInfo *)0x0);
          pUVar1 = (UnityEngine_Material_o *)(__this->fields).edgeDetectShader;
          if (pUVar1 != (UnityEngine_Material_o *)0x0) {
            value.fields.x = (__this->fields).sampleDist;
            value.fields.y = (__this->fields).edgesOnly;
            value.fields.z = (__this->fields).edgesOnlyBgColor.fields.r;
            value.fields.w = (__this->fields).edgesOnlyBgColor.fields.g;
            UnityEngine_Material__SetVector(pUVar1,"_BgColor",value,(MethodInfo *)0x0);
            pUVar1 = (UnityEngine_Material_o *)(__this->fields).edgeDetectShader;
            if (pUVar1 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat
                        (pUVar1,"_Exponent",(__this->fields).sensitivityNormals,(MethodInfo *)0x0);
              pUVar1 = (UnityEngine_Material_o *)(__this->fields).edgeDetectShader;
              if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetFloat
                          (pUVar1,"_Threshold",(__this->fields).sensitivityDepth,(MethodInfo *)0x0);
                pUVar1 = (UnityEngine_Material_o *)(__this->fields).edgeDetectShader;
                pass = *(int32_t *)&(__this->fields).createdMaterials;
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Graphics__Blit
                          ((UnityEngine_Texture_o *)source,destination,pUVar1,pass,(MethodInfo *)0x0
                          );
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
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.EdgeDetection$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_EdgeDetection___ctor (UnityStandardAssets_ImageEffects_EdgeDetection_o* __this, const MethodInfo* method);
// 0x425d0c0

void UnityStandardAssets_ImageEffects_EdgeDetection___ctor
               (UnityStandardAssets_ImageEffects_EdgeDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)&(__this->fields).createdMaterials = 3;
  *(undefined8 *)((long)&(__this->fields).createdMaterials + 4) = 0x3f8000003f800000;
  (__this->fields).sensitivityDepth = 0.2;
  (__this->fields).sensitivityNormals = 1.0;
  (__this->fields).lumThreshold = 1.0;
  (__this->fields).sampleDist = 1.0;
  (__this->fields).edgesOnly = 1.0;
  (__this->fields).edgesOnlyBgColor.fields.r = 1.0;
  (__this->fields).edgesOnlyBgColor.fields.g = 1.0;
  *(undefined4 *)&(__this->fields).edgeDetectMaterial = 3;
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


