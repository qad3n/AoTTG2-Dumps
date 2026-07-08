// Type: UnityStandardAssets.ImageEffects.MotionBlur
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/MotionBlur.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/MotionBlur.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.MotionBlur$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur__Start (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, const MethodInfo* method);
// 0x425e0f0

void UnityStandardAssets_ImageEffects_MotionBlur__Start
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  UnityStandardAssets_ImageEffects_ImageEffectBase__Start(__this,method);
  return;
}


// UnityStandardAssets.ImageEffects.MotionBlur$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur__OnDisable (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, const MethodInfo* method);
// 0x425e100

void UnityStandardAssets_ImageEffects_MotionBlur__OnDisable
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_RenderTexture_o *obj;
  bool_conflict bVar2;
  
  if (DAT_05705261 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705261 = '\x01';
  }
  if (DAT_0570525d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570525d = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
  }
  obj = (__this->fields).accumTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.MotionBlur$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur__OnRenderImage (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425e1b0

void UnityStandardAssets_ImageEffects_MotionBlur__OnRenderImage
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_RenderTexture_o **ppUVar1;
  float fVar2;
  UnityEngine_Texture_o *source_00;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  int32_t width;
  int32_t height;
  UnityEngine_RenderTexture_o *pUVar6;
  UnityEngine_Texture_o *source_01;
  UnityEngine_Material_o *pUVar7;
  MethodInfo *pMVar8;
  float fVar9;
  
  if (DAT_05705262 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RenderTexture);
    il2cpp_init_method_metadata(&"_AccumOrig");
    il2cpp_init_method_metadata(&"_MainTex");
    DAT_05705262 = '\x01';
  }
  pUVar6 = (__this->fields).accumTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).accumTexture;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') goto LAB_0425e2ba;
  pUVar6 = *ppUVar1;
  if (pUVar6 == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425e51b;
  iVar4 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)
                    (pUVar6,(pUVar6->klass->vtable)._5_get_width.method);
  if (source == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425e51b;
  iVar5 = (*(source->klass->vtable)._5_get_width.methodPtr)(source);
  if (iVar4 == iVar5) {
    pUVar6 = *ppUVar1;
    if (pUVar6 == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425e51b;
    iVar4 = (*(pUVar6->klass->vtable)._7_get_height.methodPtr)
                      (pUVar6,(pUVar6->klass->vtable)._7_get_height.method);
    pMVar8 = (source->klass->vtable)._7_get_height.method;
    iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)(source);
    if (iVar4 != iVar5) goto LAB_0425e2ba;
  }
  else {
LAB_0425e2ba:
    pUVar6 = *ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
    if (source == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425e51b;
    width = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    height = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    pUVar6 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_glue(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor(pUVar6,width,height,0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar6;
    il2cpp_runtime_glue(ppUVar1,pUVar6);
    if (*ppUVar1 == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425e51b;
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar1,0x3d,(MethodInfo *)0x0);
    pMVar8 = (MethodInfo *)*ppUVar1;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pMVar8,
               (MethodInfo *)0x0);
  }
  if ((char)(__this->fields).extraBlur != '\0') {
    iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    source_01 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary
                          ((int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2,
                           (int)(((uint)(iVar5 >> 0x1f) >> 0x1e) + iVar5) >> 2,0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425e51b;
    UnityEngine_RenderTexture__MarkRestoreExpected(*ppUVar1,(MethodInfo *)0x0);
    source_00 = (UnityEngine_Texture_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit(source_00,(UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0)
    ;
    UnityEngine_Graphics__Blit(source_01,*ppUVar1,(MethodInfo *)0x0);
    pMVar8 = (MethodInfo *)0x0;
    UnityEngine_RenderTexture__ReleaseTemporary
              ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
  }
  fVar2 = (__this->fields).blurAmount;
  fVar9 = 0.92;
  if (fVar2 <= 0.92) {
    fVar9 = fVar2;
  }
  (__this->fields).blurAmount = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar9);
  pUVar7 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                     ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar8);
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    pMVar8 = "_MainTex";
    UnityEngine_Material__SetTexture
              (pUVar7,(System_String_o *)"_MainTex",
               (UnityEngine_Texture_o *)(__this->fields).accumTexture,(MethodInfo *)0x0);
    pUVar7 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                       ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar8);
    if (pUVar7 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat
                (pUVar7,"_AccumOrig",1.0 - (__this->fields).blurAmount,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).accumTexture;
      if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
        pMVar8 = (MethodInfo *)0x0;
        UnityEngine_RenderTexture__MarkRestoreExpected(pUVar6,(MethodInfo *)0x0);
        pUVar6 = (__this->fields).accumTexture;
        pUVar7 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                           ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar8);
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,pUVar6,pUVar7,(MethodInfo *)0x0);
        UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)*ppUVar1,destination,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0425e51b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.MotionBlur$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur___ctor (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, const MethodInfo* method);
// 0x425e520

void UnityStandardAssets_ImageEffects_MotionBlur___ctor
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  (__this->fields).blurAmount = 0.8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


