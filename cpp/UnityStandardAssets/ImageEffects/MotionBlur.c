// Type: UnityStandardAssets.ImageEffects.MotionBlur
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/MotionBlur.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/MotionBlur.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.MotionBlur$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur__Start (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, const MethodInfo* method);
// 0x45831f0

void UnityStandardAssets_ImageEffects_MotionBlur__Start
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  UnityStandardAssets_ImageEffects_ImageEffectBase__Start(__this,method);
  return;
}


// UnityStandardAssets.ImageEffects.MotionBlur$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur__OnDisable (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, const MethodInfo* method);
// 0x4583200

void UnityStandardAssets_ImageEffects_MotionBlur__OnDisable
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_RenderTexture_o *obj;
  bool_conflict bVar2;
  
  if (g_data_057af0dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0dd = '\x01';
  }
  if (g_data_057af0d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0d9 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
  }
  obj = (__this->fields).accumTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.MotionBlur$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur__OnRenderImage (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x45832b0

void UnityStandardAssets_ImageEffects_MotionBlur__OnRenderImage
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

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
  UnityStandardAssets_ImageEffects_MotionBlur_o *__this_00;
  float fVar9;
  
  if (g_data_057af0de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    il2cpp_runtime_helper_023445d0(&"_AccumOrig");
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057af0de = '\x01';
  }
  pUVar6 = (__this->fields).accumTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).accumTexture;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') goto label_045833ba;
  __this_00 = (UnityStandardAssets_ImageEffects_MotionBlur_o *)*ppUVar1;
  if (__this_00 == (UnityStandardAssets_ImageEffects_MotionBlur_o *)0x0) goto label_0458361b;
  iVar4 = (*(__this_00->klass->vtable)._5_OnDisable.methodPtr)();
  if (source == (UnityEngine_RenderTexture_o *)0x0) goto label_0458361b;
  iVar5 = (*(source->klass->vtable)._5_get_width.methodPtr)(source);
  if (iVar4 == iVar5) {
    pUVar6 = *ppUVar1;
    __this_00 = (UnityStandardAssets_ImageEffects_MotionBlur_o *)0x0;
    if (pUVar6 == (UnityEngine_RenderTexture_o *)0x0) goto label_0458361b;
    iVar4 = (*(pUVar6->klass->vtable)._7_get_height.methodPtr)
                      (pUVar6,(pUVar6->klass->vtable)._7_get_height.method);
    pMVar8 = (source->klass->vtable)._7_get_height.method;
    iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)(source);
    if (iVar4 != iVar5) goto label_045833ba;
  }
  else {
label_045833ba:
    __this_00 = (UnityStandardAssets_ImageEffects_MotionBlur_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (source == (UnityEngine_RenderTexture_o *)0x0) goto label_0458361b;
    width = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    height = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    pUVar6 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
    UnityEngine_RenderTexture___ctor_4de1430(pUVar6,width,height,0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar6;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    __this_00 = (UnityStandardAssets_ImageEffects_MotionBlur_o *)0x0;
    if (*ppUVar1 == (UnityEngine_RenderTexture_o *)0x0) goto label_0458361b;
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar1,0x3d,(MethodInfo *)0x0);
    pMVar8 = (MethodInfo *)*ppUVar1;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pMVar8,(MethodInfo *)0x0);
  }
  if ((char)(__this->fields).extraBlur != '\0') {
    iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    source_01 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d70
                          ((int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2,
                           (int)(((uint)(iVar5 >> 0x1f) >> 0x1e) + iVar5) >> 2,0,(MethodInfo *)0x0);
    __this_00 = (UnityStandardAssets_ImageEffects_MotionBlur_o *)0x0;
    if (*ppUVar1 == (UnityEngine_RenderTexture_o *)0x0) goto label_0458361b;
    UnityEngine_RenderTexture__MarkRestoreExpected(*ppUVar1,(MethodInfo *)0x0);
    source_00 = (UnityEngine_Texture_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit(source_00,(UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
    UnityEngine_Graphics__Blit(source_01,*ppUVar1,(MethodInfo *)0x0);
    pMVar8 = (MethodInfo *)0x0;
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
  }
  fVar2 = (__this->fields).blurAmount;
  fVar9 = 0.92;
  if (fVar2 <= 0.92) {
    fVar9 = fVar2;
  }
  (__this->fields).blurAmount = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar9);
  __this_00 = __this;
  pUVar7 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                     ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar8);
  if (pUVar7 != (UnityEngine_Material_o *)0x0) {
    pMVar8 = "_MainTex";
    UnityEngine_Material__SetTexture
              (pUVar7,(System_String_o *)"_MainTex",(UnityEngine_Texture_o *)(__this->fields).accumTexture,
               (MethodInfo *)0x0);
    __this_00 = __this;
    pUVar7 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                       ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar8);
    if (pUVar7 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar7,"_AccumOrig",1.0 - (__this->fields).blurAmount,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).accumTexture;
      __this_00 = (UnityStandardAssets_ImageEffects_MotionBlur_o *)0x0;
      if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
        pMVar8 = (MethodInfo *)0x0;
        UnityEngine_RenderTexture__MarkRestoreExpected(pUVar6,(MethodInfo *)0x0);
        pUVar6 = (__this->fields).accumTexture;
        pUVar7 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                           ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar8);
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,pUVar6,pUVar7,(MethodInfo *)0x0);
        UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)*ppUVar1,destination,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0458361b:
  il2cpp_runtime_helper_022b2c90();
  (__this_00->fields).blurAmount = 0.8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.MotionBlur$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_MotionBlur___ctor (UnityStandardAssets_ImageEffects_MotionBlur_o* __this, const MethodInfo* method);
// 0x4583620

void UnityStandardAssets_ImageEffects_MotionBlur___ctor
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  (__this->fields).blurAmount = 0.8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


