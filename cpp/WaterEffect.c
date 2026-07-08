// Type: WaterEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/WaterEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Effects/WaterEffect.cs  [CHANGED since prior version]
// --------------------------------

// WaterEffect$$Start
// il2cpp: void WaterEffect__Start (WaterEffect_o* __this, const MethodInfo* method);
// 0x3d66ae0

void WaterEffect__Start(WaterEffect_o *__this,MethodInfo *method)

{
  PostProcessingManager_o **ppPVar1;
  long lVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool_conflict bVar3;
  PostProcessingManager_o *pPVar4;
  UnityStandardAssets_ImageEffects_GlobalFog_o *pUVar5;
  UnityEngine_BoxCollider_o *pUVar6;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *pUVar7;
  UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *__this_02;
  MethodInfo *method_00;
  
  if (DAT_057025d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_GlobalFog_GetComponent_GlobalFog);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume);
    il2cpp_init_method_metadata(&MethodInfo_PostProcessingManager_FindFirstObjectByType_Post);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_ColorGrading);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Unsupported Object for Water Effect (must have box collider).");
    DAT_057025d3 = '\x01';
  }
  pPVar4 = (__this->fields)._postProcessingManager;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppPVar1 = &(__this->fields)._postProcessingManager;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar4 = (PostProcessingManager_o *)
             UnityEngine_Object__FindFirstObjectByType<object>(MethodInfo_PostProcessingManager_FindFirstObjectByType_Post);
    *ppPVar1 = pPVar4;
    il2cpp_runtime_glue(ppPVar1,pPVar4);
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if ((lVar2 != 0) &&
     (__this_00 = *(UnityEngine_Component_o **)(lVar2 + 0x20),
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    pUVar5 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)
             UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_GlobalFog_GetComponent_GlobalFog);
    (__this->fields)._globalFog = pUVar5;
    il2cpp_runtime_glue(&(__this->fields)._globalFog,pUVar5);
    pUVar6 = (UnityEngine_BoxCollider_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_BoxCollider_GetComponent_BoxCollider);
    (__this->fields)._boxCollider = pUVar6;
    il2cpp_runtime_glue(&(__this->fields)._boxCollider);
    x = (UnityEngine_Object_o *)(__this->fields)._boxCollider;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__Log("Unsupported Object for Water Effect (must have box collider).",(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (__this->fields).PostProcessingVolume;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
               UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume);
      (__this->fields)._volume = pUVar7;
      il2cpp_runtime_glue(&(__this->fields)._volume);
      pUVar7 = (__this->fields)._volume;
      if (pUVar7 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
        __this_02 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                              (pUVar7,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
          UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                    (__this_02,(Il2CppObject **)&(__this->fields)._colorGrading,MethodInfo_Boolean_TryGetSettings_ColorGrading);
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
          if (lVar2 == 0) {
            return;
          }
          lVar2 = *(long *)(lVar2 + 0x110);
          if (lVar2 != 0) {
            WaterEffect__ApplySettings(__this,*(int32_t *)(lVar2 + 0x14),method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// WaterEffect$$ApplySettings
// il2cpp: void WaterEffect__ApplySettings (WaterEffect_o* __this, int32_t wfxl, const MethodInfo* method);
// 0x3d64780

void WaterEffect__ApplySettings(WaterEffect_o *__this,int32_t wfxl,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *pUVar1;
  UnityStandardAssets_ImageEffects_GlobalFog_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar4;
  undefined1 uVar5;
  
  pUVar3 = (__this->fields).PostProcessingVolume;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    if (wfxl == 0) {
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields)._fogEnabled = 0;
      pUVar2 = (__this->fields)._globalFog;
      if (pUVar2 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._colorGrading;
        if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
           (pUVar4 = (pUVar1->fields).enabled,
           pUVar4 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar5 = 0;
          goto LAB_03d6482f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (wfxl == 1) {
        *(undefined1 *)&(__this->fields)._fogEnabled = 0;
        pUVar2 = (__this->fields)._globalFog;
        if (pUVar2 == (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) goto LAB_03d64858;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
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
        pUVar4 = (pUVar1->fields).enabled;
        uVar5 = 1;
        if (pUVar4 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
LAB_03d6482f:
          *(undefined1 *)((long)&(pUVar4->fields).overrideState + 1) = uVar5;
          return;
        }
      }
    }
  }
LAB_03d64858:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// WaterEffect$$IsInsideBounds
// il2cpp: bool WaterEffect__IsInsideBounds (WaterEffect_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_BoxCollider_o* bc, const MethodInfo* method);
// 0x3d66d60

bool_conflict
WaterEffect__IsInsideBounds
          (WaterEffect_o *__this,UnityEngine_Vector3_o worldPos,UnityEngine_BoxCollider_o *bc,
          MethodInfo *method)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  UnityEngine_Transform_o *__this_00;
  undefined8 extraout_RAX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  if ((bc != (UnityEngine_BoxCollider_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)bc,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    fVar7 = 0.0;
    UVar12 = UnityEngine_Transform__InverseTransformPoint(__this_00,worldPos,(MethodInfo *)0x0);
    fVar6 = fVar7;
    UVar13 = UnityEngine_BoxCollider__get_center(bc,(MethodInfo *)0x0);
    fVar4 = UVar13.fields.x;
    local_48._0_4_ = UVar12.fields.x;
    local_48._4_4_ = UVar12.fields.y;
    fVar9 = (float)local_48._0_4_ - fVar4;
    UVar14 = UnityEngine_BoxCollider__get_size(bc,(MethodInfo *)0x0);
    fVar5 = UVar14.fields.y * 0.5 + ((float)local_48._4_4_ - UVar13.fields.y);
    local_48._0_4_ = UVar14.fields.z * 0.5 + (UVar12.fields.z - UVar13.fields.z);
    fVar9 = UVar14.fields.x * 0.5 + fVar9;
    fStack_40 = fVar4 * 0.0 + (fVar7 - fVar6);
    fStack_3c = UVar14.fields.y * 0.0 + ((float)local_48._4_4_ - UVar13.fields.y);
    local_48._4_4_ = fVar9;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uVar1 = *(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar10._4_8_ = 0;
    auVar10._0_4_ = uVar1;
    fVar6 = (float)((ulong)uVar2 >> 0x20);
    auVar10._12_4_ = fVar6;
    auVar8._8_8_ = auVar10._8_8_;
    auVar8._4_4_ = (int)uVar2;
    auVar8._0_4_ = uVar1;
    auVar11._4_4_ = fVar9;
    auVar11._0_4_ = local_48._0_4_;
    auVar11._8_4_ = fStack_40;
    auVar11._12_4_ = fStack_3c;
    auVar11 = maxps(auVar8,auVar11);
    UVar12 = UnityEngine_BoxCollider__get_size(bc,(MethodInfo *)0x0);
    fVar4 = UVar12.fields.y;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    fVar6 = fVar6 - fVar5;
    auVar3._4_4_ = UVar12.fields.x;
    auVar3._0_4_ = UVar12.fields.z;
    auVar3._8_4_ = fVar9;
    auVar3._12_4_ = fVar4;
    auVar8 = minps(_local_48,auVar3);
    local_38 = auVar11._0_4_;
    fStack_34 = auVar11._4_4_;
    local_38 = local_38 - auVar8._0_4_;
    fStack_34 = fStack_34 - auVar8._4_4_;
    return (bool_conflict)
           CONCAT71((int7)((ulong)extraout_RAX >> 8),
                    fStack_34 * fStack_34 + fVar6 * fVar6 + local_38 * local_38 < 9.9999994e-11);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// WaterEffect$$FixedUpdate
// il2cpp: void WaterEffect__FixedUpdate (WaterEffect_o* __this, const MethodInfo* method);
// 0x3d66ed0

void WaterEffect__FixedUpdate(WaterEffect_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Component_o *__this_00;
  PostProcessingManager_o *pPVar2;
  byte bVar3;
  bool_conflict bVar4;
  WaterEffect_o *__this_01;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityStandardAssets_ImageEffects_GlobalFog_o *__this_02;
  UnityEngine_Vector3_o worldPos;
  
  if (DAT_057025d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057025d4 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar1 != 0) &&
      (__this_00 = *(UnityEngine_Component_o **)(lVar1 + 0x20),
      __this_00 != (UnityEngine_Component_o *)0x0)) &&
     (__this_01 = (WaterEffect_o *)UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0)
     , __this_01 != (WaterEffect_o *)0x0)) {
    worldPos = UnityEngine_Transform__get_position
                         ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    bVar4 = WaterEffect__IsInsideBounds(__this_01,worldPos,(__this->fields)._boxCollider,method_00);
    pUVar5 = (__this->fields).PostProcessingVolume;
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      if ((char)bVar4 == '\0') {
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
        pPVar2 = (__this->fields)._postProcessingManager;
        if (pPVar2 != (PostProcessingManager_o *)0x0) {
          PostProcessingManager__SetState(pPVar2,1,method_02);
          __this_02 = (__this->fields)._globalFog;
          if (__this_02 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
            bVar3 = 0;
            goto LAB_03d66fba;
          }
        }
      }
      else {
        UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
        pPVar2 = (__this->fields)._postProcessingManager;
        if (pPVar2 != (PostProcessingManager_o *)0x0) {
          PostProcessingManager__SetState(pPVar2,0,method_01);
          if ((char)(__this->fields)._fogEnabled == '\0') {
            return;
          }
          __this_02 = (__this->fields)._globalFog;
          bVar3 = 1;
          if (__this_02 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
LAB_03d66fba:
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)__this_02,(uint)bVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// WaterEffect$$.ctor
// il2cpp: void WaterEffect___ctor (WaterEffect_o* __this, const MethodInfo* method);
// 0x3d66fe0

void WaterEffect___ctor(WaterEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


