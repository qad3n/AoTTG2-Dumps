// Type: WaterEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/WaterEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/WaterEffect.cs
// --------------------------------

// WaterEffect$$Start
// il2cpp: void WaterEffect__Start (WaterEffect_o* __this, const MethodInfo* method);
// 0x405c430

void WaterEffect__Start(WaterEffect_o *__this,MethodInfo *method)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  bool_conflict bVar8;
  PostProcessingManager_o *pPVar9;
  UnityStandardAssets_ImageEffects_GlobalFog_o *pUVar10;
  UnityEngine_BoxCollider_o *pUVar11;
  PostProcessingManager_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  WaterEffect_o *__this_03;
  UnityEngine_GameObject_o *pUVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  PostProcessingManager_o *__this_04;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *__this_05;
  float fVar13;
  float in_XMM1_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined1 auVar18 [16];
  
  if (g_data_057ac283 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GlobalFog_GetComponent_GlobalFog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PostProcessingManager_FindFirstObjectByType_PostProcessi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_ColorGrading);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Unsupported Object for Water Effect (must have box collider).");
    g_data_057ac283 = '\x01';
  }
  __this_04 = (__this->fields)._postProcessingManager;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar9 = (PostProcessingManager_o *)0x0;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    __this_04 = (PostProcessingManager_o *)&(__this->fields)._postProcessingManager;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar9 = (PostProcessingManager_o *)UnityEngine_Object__FindFirstObjectByType_object_(MethodInfo_PostProcessingManager_FindFirstObjectByType_PostProcessi);
    *(PostProcessingManager_o **)__this_04 = pPVar9;
    il2cpp_runtime_helper_022b4080();
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar3 != 0) {
    __this_00 = *(UnityEngine_Component_o **)(lVar3 + 0x20);
    __this_04 = (PostProcessingManager_o *)0x0;
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      pUVar10 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)
                UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_GlobalFog_GetComponent_GlobalFog);
      (__this->fields)._globalFog = pUVar10;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._globalFog,pUVar10);
      pUVar11 = (UnityEngine_BoxCollider_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BoxCollider_GetComponent_BoxCollider);
      (__this->fields)._boxCollider = pUVar11;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._boxCollider);
      x = (UnityEngine_Object_o *)(__this->fields)._boxCollider;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar9 = (PostProcessingManager_o *)0x0;
      bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__Log("Unsupported Object for Water Effect (must have box collider).",(MethodInfo *)0x0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
        return;
      }
      pUVar12 = (__this->fields).PostProcessingVolume;
      __this_04 = (PostProcessingManager_o *)0x0;
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pPVar9 = (PostProcessingManager_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume)
        ;
        (__this->fields)._volume = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)pPVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._volume);
        __this_04 = (PostProcessingManager_o *)(__this->fields)._volume;
        if (__this_04 != (PostProcessingManager_o *)0x0) {
          pPVar9 = (PostProcessingManager_o *)0x0;
          __this_01 = (PostProcessingManager_o *)
                      UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)__this_04,
                                 (MethodInfo *)0x0);
          if (__this_01 != (PostProcessingManager_o *)0x0) {
            pPVar9 = (PostProcessingManager_o *)&(__this->fields)._colorGrading;
            UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                      ((UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)__this_01,
                       (Il2CppObject **)pPVar9,MethodInfo_Boolean_TryGetSettings_ColorGrading);
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
            if (lVar3 == 0) {
              return;
            }
            lVar3 = *(long *)(lVar3 + 0x110);
            __this_04 = __this_01;
            if (lVar3 != 0) {
              WaterEffect__ApplySettings(__this,*(int32_t *)(lVar3 + 0x14),method_00);
              return;
            }
          }
        }
      }
    }
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pPVar9 != (PostProcessingManager_o *)0x0) &&
     (__this_04 = pPVar9,
     __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar9,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_Transform_o *)0x0)) {
    fVar14 = 0.0;
    UVar19.fields.z = in_XMM1_Da;
    UVar19.fields.x = (float)(undefined4)uStack_60;
    UVar19.fields.y = (float)uStack_60._4_4_;
    UVar19 = UnityEngine_Transform__InverseTransformPoint(__this_02,UVar19,(MethodInfo *)0x0);
    fVar15 = fVar14;
    UVar20 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)pPVar9,(MethodInfo *)0x0);
    fVar13 = UVar20.fields.x;
    auStack_70._0_4_ = UVar19.fields.x;
    auStack_70._4_4_ = UVar19.fields.y;
    fVar16 = (float)auStack_70._0_4_ - fVar13;
    UVar21 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)pPVar9,(MethodInfo *)0x0);
    auStack_70._0_4_ = UVar21.fields.z * 0.5 + (UVar19.fields.z - UVar20.fields.z);
    fVar16 = UVar21.fields.x * 0.5 + fVar16;
    fStack_68 = fVar13 * 0.0 + (fVar14 - fVar15);
    fStack_64 = UVar21.fields.y * 0.0 + ((float)auStack_70._4_4_ - UVar20.fields.y);
    auStack_70._4_4_ = fVar16;
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uVar1 = *(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar18._4_8_ = 0;
    auVar18._0_4_ = uVar1;
    auVar18._12_4_ = (int)((ulong)uVar2 >> 0x20);
    auVar17._8_8_ = auVar18._8_8_;
    auVar17._4_4_ = (int)uVar2;
    auVar17._0_4_ = uVar1;
    auVar5._4_4_ = fVar16;
    auVar5._0_4_ = auStack_70._0_4_;
    auVar5._8_4_ = fStack_68;
    auVar5._12_4_ = fStack_64;
    maxps(auVar17,auVar5);
    UVar19 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)pPVar9,(MethodInfo *)0x0);
    auVar6._4_4_ = UVar19.fields.x;
    auVar6._0_4_ = UVar19.fields.z;
    auVar6._8_4_ = fVar16;
    auVar6._12_4_ = UVar19.fields.y;
    minps(_auStack_70,auVar6);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar9 = __this_04;
  if (g_data_057ac284 == '\0') {
    pPVar9 = (PostProcessingManager_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac284 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar3 != 0) &&
      (pPVar9 = *(PostProcessingManager_o **)(lVar3 + 0x20), pPVar9 != (PostProcessingManager_o *)0x0)) &&
     (__this_03 = (WaterEffect_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar9,(MethodInfo *)0x0),
     __this_03 != (WaterEffect_o *)0x0)) {
    UVar19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
    bVar8 = WaterEffect__IsInsideBounds
                      (__this_03,UVar19,(UnityEngine_BoxCollider_o *)(__this_04->fields)._depthOfField,
                       method_01);
    pPVar9 = (PostProcessingManager_o *)(__this_04->fields)._postProcessingVolume;
    if ((pPVar9 != (PostProcessingManager_o *)0x0) &&
       (pUVar12 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)pPVar9,(MethodInfo *)0x0)
       , pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
      if ((char)bVar8 == '\0') {
        UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
        pUVar4 = (__this_04->fields)._ambientOcclusion;
        pPVar9 = (PostProcessingManager_o *)0x0;
        if (pUVar4 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *)0x0) {
          PostProcessingManager__SetState((PostProcessingManager_o *)pUVar4,1,method_03);
          __this_05 = (__this_04->fields)._colorGrading;
          pPVar9 = (PostProcessingManager_o *)0x0;
          if (__this_05 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
            bVar7 = 0;
            goto label_0405c90a;
          }
        }
      }
      else {
        UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
        pUVar4 = (__this_04->fields)._ambientOcclusion;
        pPVar9 = (PostProcessingManager_o *)0x0;
        if (pUVar4 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *)0x0) {
          PostProcessingManager__SetState((PostProcessingManager_o *)pUVar4,0,method_02);
          if (*(char *)&(__this_04->fields)._motionBlur == '\0') {
            return;
          }
          __this_05 = (__this_04->fields)._colorGrading;
          bVar7 = 1;
          if (__this_05 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
label_0405c90a:
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)__this_05,(uint)bVar7,(MethodInfo *)0x0);
            return;
          }
          pPVar9 = (PostProcessingManager_o *)0x0;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pPVar9,(MethodInfo *)0x0);
  return;
}


// WaterEffect$$ApplySettings
// il2cpp: void WaterEffect__ApplySettings (WaterEffect_o* __this, int32_t wfxl, const MethodInfo* method);
// 0x405a0d0

void WaterEffect__ApplySettings(WaterEffect_o *__this,int32_t wfxl,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  undefined1 uVar3;
  UnityStandardAssets_ImageEffects_GlobalFog_o *__this_01;
  
  __this_01 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)(__this->fields).PostProcessingVolume;
  if ((__this_01 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (wfxl == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields)._fogEnabled = 0;
      __this_01 = (__this->fields)._globalFog;
      if (__this_01 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._colorGrading;
        if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
           (pUVar2 = (pUVar1->fields).enabled,
           pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar3 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (wfxl == 1) {
        *(undefined1 *)&(__this->fields)._fogEnabled = 0;
        __this_01 = (__this->fields)._globalFog;
        if (__this_01 == (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._colorGrading;
      }
      else {
        if ((wfxl != 2) && (wfxl != 3)) {
          return;
        }
        *(undefined1 *)&(__this->fields)._fogEnabled = 1;
        pUVar1 = (__this->fields)._colorGrading;
      }
      if (pUVar1 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        pUVar2 = (pUVar1->fields).enabled;
        uVar3 = 1;
        if (pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = uVar3;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// WaterEffect$$IsInsideBounds
// il2cpp: bool WaterEffect__IsInsideBounds (WaterEffect_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_BoxCollider_o* bc, const MethodInfo* method);
// 0x405c6b0

bool_conflict
WaterEffect__IsInsideBounds
          (WaterEffect_o *__this,UnityEngine_Vector3_o worldPos,UnityEngine_BoxCollider_o *bc,
          MethodInfo *method)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  PostProcessingManager_o *pPVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  UnityEngine_Transform_o *__this_00;
  undefined8 extraout_RAX;
  WaterEffect_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  WaterEffect_o *__this_03;
  UnityStandardAssets_ImageEffects_GlobalFog_o *__this_04;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  if ((bc != (UnityEngine_BoxCollider_o *)0x0) &&
     (__this = (WaterEffect_o *)bc,
     __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bc,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    fVar11 = 0.0;
    UVar16 = UnityEngine_Transform__InverseTransformPoint(__this_00,worldPos,(MethodInfo *)0x0);
    fVar10 = fVar11;
    UVar17 = UnityEngine_BoxCollider__get_center(bc,(MethodInfo *)0x0);
    fVar8 = UVar17.fields.x;
    local_48._0_4_ = UVar16.fields.x;
    local_48._4_4_ = UVar16.fields.y;
    fVar13 = (float)local_48._0_4_ - fVar8;
    UVar18 = UnityEngine_BoxCollider__get_size(bc,(MethodInfo *)0x0);
    fVar9 = UVar18.fields.y * 0.5 + ((float)local_48._4_4_ - UVar17.fields.y);
    local_48._0_4_ = UVar18.fields.z * 0.5 + (UVar16.fields.z - UVar17.fields.z);
    fVar13 = UVar18.fields.x * 0.5 + fVar13;
    fStack_40 = fVar8 * 0.0 + (fVar11 - fVar10);
    fStack_3c = UVar18.fields.y * 0.0 + ((float)local_48._4_4_ - UVar17.fields.y);
    local_48._4_4_ = fVar13;
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uVar1 = *(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar14._4_8_ = 0;
    auVar14._0_4_ = uVar1;
    fVar10 = (float)((ulong)uVar2 >> 0x20);
    auVar14._12_4_ = fVar10;
    auVar12._8_8_ = auVar14._8_8_;
    auVar12._4_4_ = (int)uVar2;
    auVar12._0_4_ = uVar1;
    auVar15._4_4_ = fVar13;
    auVar15._0_4_ = local_48._0_4_;
    auVar15._8_4_ = fStack_40;
    auVar15._12_4_ = fStack_3c;
    auVar15 = maxps(auVar12,auVar15);
    UVar16 = UnityEngine_BoxCollider__get_size(bc,(MethodInfo *)0x0);
    fVar8 = UVar16.fields.y;
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    fVar10 = fVar10 - fVar9;
    auVar5._4_4_ = UVar16.fields.x;
    auVar5._0_4_ = UVar16.fields.z;
    auVar5._8_4_ = fVar13;
    auVar5._12_4_ = fVar8;
    auVar12 = minps(_local_48,auVar5);
    local_38 = auVar15._0_4_;
    fStack_34 = auVar15._4_4_;
    local_38 = local_38 - auVar12._0_4_;
    fStack_34 = fStack_34 - auVar12._4_4_;
    return (bool_conflict)
           CONCAT71((int7)((ulong)extraout_RAX >> 8),
                    fStack_34 * fStack_34 + fVar10 * fVar10 + local_38 * local_38 < 9.9999994e-11);
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = __this;
  if (g_data_057ac284 == '\0') {
    __this_03 = (WaterEffect_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac284 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar3 != 0) && (__this_03 = *(WaterEffect_o **)(lVar3 + 0x20), __this_03 != (WaterEffect_o *)0x0)) &&
     (__this_01 = (WaterEffect_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
     , __this_01 != (WaterEffect_o *)0x0)) {
    UVar16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    bVar7 = WaterEffect__IsInsideBounds(__this_01,UVar16,(__this->fields)._boxCollider,method_00);
    __this_03 = (WaterEffect_o *)(__this->fields).PostProcessingVolume;
    if ((__this_03 != (WaterEffect_o *)0x0) &&
       (__this_02 = UnityEngine_GameObject__get_gameObject
                              ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      if ((char)bVar7 == '\0') {
        UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
        pPVar4 = (__this->fields)._postProcessingManager;
        __this_03 = (WaterEffect_o *)0x0;
        if (pPVar4 != (PostProcessingManager_o *)0x0) {
          PostProcessingManager__SetState(pPVar4,1,method_02);
          __this_04 = (__this->fields)._globalFog;
          __this_03 = (WaterEffect_o *)0x0;
          if (__this_04 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
            bVar6 = 0;
            goto label_0405c90a;
          }
        }
      }
      else {
        UnityEngine_GameObject__SetActive(__this_02,1,(MethodInfo *)0x0);
        pPVar4 = (__this->fields)._postProcessingManager;
        __this_03 = (WaterEffect_o *)0x0;
        if (pPVar4 != (PostProcessingManager_o *)0x0) {
          PostProcessingManager__SetState(pPVar4,0,method_01);
          if ((char)(__this->fields)._fogEnabled == '\0') {
            return extraout_EAX;
          }
          __this_04 = (__this->fields)._globalFog;
          bVar6 = 1;
          if (__this_04 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
label_0405c90a:
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)__this_04,(uint)bVar6,(MethodInfo *)0x0);
            return extraout_EAX_00;
          }
          __this_03 = (WaterEffect_o *)0x0;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return extraout_EAX_01;
}


// WaterEffect$$FixedUpdate
// il2cpp: void WaterEffect__FixedUpdate (WaterEffect_o* __this, const MethodInfo* method);
// 0x405c820

void WaterEffect__FixedUpdate(WaterEffect_o *__this,MethodInfo *method)

{
  long lVar1;
  PostProcessingManager_o *pPVar2;
  byte bVar3;
  bool_conflict bVar4;
  WaterEffect_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  WaterEffect_o *__this_02;
  UnityStandardAssets_ImageEffects_GlobalFog_o *__this_03;
  UnityEngine_Vector3_o worldPos;
  
  __this_02 = __this;
  if (g_data_057ac284 == '\0') {
    __this_02 = (WaterEffect_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac284 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if ((lVar1 != 0) && (__this_02 = *(WaterEffect_o **)(lVar1 + 0x20), __this_02 != (WaterEffect_o *)0x0)) {
    __this_00 = (WaterEffect_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (__this_00 != (WaterEffect_o *)0x0) {
      worldPos = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      bVar4 = WaterEffect__IsInsideBounds(__this_00,worldPos,(__this->fields)._boxCollider,method_00);
      __this_02 = (WaterEffect_o *)(__this->fields).PostProcessingVolume;
      if (__this_02 != (WaterEffect_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_gameObject
                              ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          if ((char)bVar4 == '\0') {
            UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
            pPVar2 = (__this->fields)._postProcessingManager;
            __this_02 = (WaterEffect_o *)0x0;
            if (pPVar2 != (PostProcessingManager_o *)0x0) {
              PostProcessingManager__SetState(pPVar2,1,method_02);
              __this_03 = (__this->fields)._globalFog;
              __this_02 = (WaterEffect_o *)0x0;
              if (__this_03 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
                bVar3 = 0;
                goto label_0405c90a;
              }
            }
          }
          else {
            UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
            pPVar2 = (__this->fields)._postProcessingManager;
            __this_02 = (WaterEffect_o *)0x0;
            if (pPVar2 != (PostProcessingManager_o *)0x0) {
              PostProcessingManager__SetState(pPVar2,0,method_01);
              if ((char)(__this->fields)._fogEnabled == '\0') {
                return;
              }
              __this_03 = (__this->fields)._globalFog;
              bVar3 = 1;
              if (__this_03 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
label_0405c90a:
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)__this_03,(uint)bVar3,(MethodInfo *)0x0);
                return;
              }
              __this_02 = (WaterEffect_o *)0x0;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// WaterEffect$$.ctor
// il2cpp: void WaterEffect___ctor (WaterEffect_o* __this, const MethodInfo* method);
// 0x405c930

void WaterEffect___ctor(WaterEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


