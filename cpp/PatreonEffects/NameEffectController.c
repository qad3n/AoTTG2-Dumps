// Type: PatreonEffects.NameEffectController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectController.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectController$$Awake
// il2cpp: void PatreonEffects_NameEffectController__Awake (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2170

void PatreonEffects_NameEffectController__Awake
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController__AutoConfigure(__this,method);
  return;
}


// PatreonEffects.NameEffectController$$AutoConfigure
// il2cpp: void PatreonEffects_NameEffectController__AutoConfigure (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59bf910

void PatreonEffects_NameEffectController__AutoConfigure
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545be2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545be2 = '\x01';
  }
  bVar2 = PatreonEffects_NameEffectController__FindText(__this,method);
  if (bVar2) {
    (__this->fields).cleared = false;
    bVar2 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,method);
    if (bVar2) {
      pUVar3 = (__this->fields).runtimeMat;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pTVar1 = (__this->fields).text;
        if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
label_059bfa07:
          ThrowNullReferenceException();
        }
        pUVar3 = (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                           (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
        method_00 = (MethodInfo *)(__this->fields).runtimeMat;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)method_00,(MethodInfo *)0x0)
        ;
        if (bVar2) {
          pTVar1 = (__this->fields).text;
          if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto label_059bfa07;
          method_00 = (MethodInfo *)(__this->fields).originalFontMaterial;
          (*(pTVar1->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                    (pTVar1,(UnityEngine_Material_o *)method_00,
                     (pTVar1->klass->vtable)._68_set_fontSharedMaterial.method);
        }
      }
      PatreonEffects_NameEffectController__DestroyRuntimeMaterial(__this,method_00);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$RefreshOriginalMaterial
// il2cpp: bool PatreonEffects_NameEffectController__RefreshOriginalMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c22b0

bool PatreonEffects_NameEffectController__RefreshOriginalMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  TMPro_TMP_FontAsset_o *y;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UnityEngine_Material_o *x;
  UnityEngine_Material_o *pUVar6;
  TMPro_TMP_FontAsset_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545be3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545be3 = '\x01';
  }
  pTVar1 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  pTVar1 = (__this->fields).text;
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    pTVar2 = (__this->fields).originalFontAsset;
    y = (pTVar1->fields).m_fontAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = false;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)(__this->fields).runtimeMat,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar4) {
      pTVar1 = (__this->fields).text;
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto label_059c2482;
      x = (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                    (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
      pUVar6 = (__this->fields).runtimeMat;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
    }
    pUVar6 = (__this->fields).originalFontMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5 == false && (!bVar3 && !bVar4)) {
      return false;
    }
    pTVar1 = (__this->fields).text;
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      pTVar2 = (pTVar1->fields).m_fontAsset;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pTVar1 = (__this->fields).text;
      if (bVar3) {
        if ((pTVar1 == (TMPro_TMP_Text_o *)0x0) ||
           (pTVar2 = (pTVar1->fields).m_fontAsset, pTVar2 == (TMPro_TMP_FontAsset_o *)0x0)) goto label_059c2482;
        pUVar6 = (pTVar2->fields).m_Material;
      }
      else {
        if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto label_059c2482;
        pUVar6 = (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                           (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
      }
      (__this->fields).originalFontMaterial = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).originalFontMaterial);
      pTVar1 = (__this->fields).text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        targetAddress = &(__this->fields).originalFontAsset;
        *targetAddress = (pTVar1->fields).m_fontAsset;
        Il2CppCodeGenWriteBarrier(targetAddress);
        return true;
      }
    }
  }
label_059c2482:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$EnsureShaderMaterial
// il2cpp: void PatreonEffects_NameEffectController__EnsureShaderMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2580

void PatreonEffects_NameEffectController__EnsureShaderMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **targetAddress;
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_07545be4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Could not find shader: TextMeshPro/NameFX_Master");
    il2cpp_codegen_initialize_runtime_metadata(&"TextMeshPro/NameFX_Master");
    Il2CppMethodInitialized_07545be4 = '\x01';
  }
  if ((__this->fields).initialized != false) {
    pUVar3 = (__this->fields).runtimeMat;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
  }
  pTVar1 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar3 = (__this->fields).originalFontMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar3 = (__this->fields).originalFontMaterial;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pUVar3 = UnityEngine_Object__Instantiate_object__35a4190
                         ((Il2CppObject *)pUVar3,
                          (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_Material);
      targetAddress = &(__this->fields).runtimeMat;
      (__this->fields).runtimeMat = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
      x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"Could not find shader: TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
        return;
      }
      pUVar3 = *targetAddress;
      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_shader(pUVar3,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
        pTVar1 = (__this->fields).text;
        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar1->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                    (pTVar1,(__this->fields).runtimeMat,
                     (pTVar1->klass->vtable)._68_set_fontSharedMaterial.method);
          (__this->fields).initialized = true;
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$Apply
// il2cpp: void PatreonEffects_NameEffectController__Apply (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x59bfba0

void PatreonEffects_NameEffectController__Apply
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  int iVar1;
  uint nameID;
  UnityEngine_Material_o *pUVar2;
  TMPro_TMP_Text_o *pTVar3;
  bool bVar4;
  TMPro_TMP_TextInfo_o *textInfo;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PatreonEffects_NameEffectSettings_o *method_02;
  UnityEngine_Color_o value;
  
  method_02 = settings;
  if (Il2CppMethodInitialized_07545be5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545be5 = '\x01';
  }
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(__this,(MethodInfo *)method_02);
    iVar1 = (settings->fields).effectMode;
    if (iVar1 == 6) {
      PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_02);
      if (Il2CppMethodInitialized_07545bef == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
        Il2CppMethodInitialized_07545bef = '\x01';
      }
      (__this->fields).popActive = false;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
      if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
      }
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(__this->fields).popShadowText,(MethodInfo *)method_02);
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(__this->fields).popExtrusionText,(MethodInfo *)method_02);
      PatreonEffects_NameEffectController__ApplyOutline(__this,settings,method_00);
      return;
    }
    if (iVar1 == 1) {
      PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_02);
      bVar4 = (__this->fields).outlineActive;
      (__this->fields).outlineActive = false;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
      pMVar5 = extraout_RDX;
      if (bVar4 != false) {
        PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_02);
        pMVar5 = extraout_RDX_00;
      }
      PatreonEffects_NameEffectController__ApplyPop(__this,settings,pMVar5);
      return;
    }
    if (Il2CppMethodInitialized_07545bef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
      Il2CppMethodInitialized_07545bef = '\x01';
    }
    (__this->fields).popActive = false;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
    }
    PatreonEffects_NameEffectController__DestroyPopLayer
              (&(__this->fields).popShadowText,(MethodInfo *)method_02);
    PatreonEffects_NameEffectController__DestroyPopLayer
              (&(__this->fields).popExtrusionText,(MethodInfo *)method_02);
    bVar4 = (__this->fields).outlineActive;
    (__this->fields).outlineActive = false;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
    if (bVar4 != false) {
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_02);
    }
    PatreonEffects_NameEffectController__EnsureShaderMaterial(__this,(MethodInfo *)method_02);
    if ((__this->fields).initialized != false) {
      pUVar2 = (__this->fields).runtimeMat;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        pUVar2 = (__this->fields).runtimeMat;
        if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
        }
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          value.fields.b = 1.0;
          value.fields.a = 1.0;
          value.fields.r = 1.0;
          value.fields.g = 1.0;
          UnityEngine_Material__SetColor_68dd4d0
                    (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->FaceColor_ID,value,
                     (MethodInfo *)0x0);
          pUVar2 = (__this->fields).runtimeMat;
          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetColor_68dd4d0
                      (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientA_ID,
                       (UnityEngine_Color_o)(settings->fields).gradientA.fields,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).runtimeMat;
            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetColor_68dd4d0
                        (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientB_ID,
                         (UnityEngine_Color_o)(settings->fields).gradientB.fields,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).runtimeMat;
              if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetColor_68dd4d0
                          (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientC_ID,
                           (UnityEngine_Color_o)(settings->fields).gradientC.fields,(MethodInfo *)0x0);
                pUVar2 = (__this->fields).runtimeMat;
                if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                  UnityEngine_Material__SetColor_68dd4d0
                            (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientD_ID,
                             (UnityEngine_Color_o)(settings->fields).gradientD.fields,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields).runtimeMat;
                  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetFloat_68e0ad0
                              (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                      EffectGradientScale_ID,(settings->fields).gradientScale,
                               (MethodInfo *)0x0);
                    pUVar2 = (__this->fields).runtimeMat;
                    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetFloat_68e0ad0
                                (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                        GradientSpeed_ID,(settings->fields).gradientSpeed,(MethodInfo *)0x0);
                      pUVar2 = (__this->fields).runtimeMat;
                      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                        UnityEngine_Material__SetFloat_68e0ad0
                                  (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                          EffectMode_ID,(float)(settings->fields).effectMode,(MethodInfo *)0x0
                                  );
                        pUVar2 = (__this->fields).runtimeMat;
                        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                          UnityEngine_Material__SetFloat_68e0ad0
                                    (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                            Glow_ID,(settings->fields).glow,(MethodInfo *)0x0);
                          pUVar2 = (__this->fields).runtimeMat;
                          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                            UnityEngine_Material__SetFloat_68e0ad0
                                      (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                              ScanlineStrength_ID,(settings->fields).scanlineStrength,
                                       (MethodInfo *)0x0);
                            pUVar2 = (__this->fields).runtimeMat;
                            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                              UnityEngine_Material__SetFloat_68e0ad0
                                        (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                                ScanlineDensity_ID,(settings->fields).scanlineDensity,
                                         (MethodInfo *)0x0);
                              pUVar2 = (__this->fields).runtimeMat;
                              if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                UnityEngine_Material__SetFloat_68e0ad0
                                          (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields
                                                  ->ScanlineSpeed_ID,(settings->fields).scanlineSpeed,
                                           (MethodInfo *)0x0);
                                pUVar2 = (__this->fields).runtimeMat;
                                if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                  UnityEngine_Material__SetFloat_68e0ad0
                                            (pUVar2,TypeInfo_PatreonEffects_NameEffectController->
                                                    static_fields->FlickerStrength_ID,
                                             (settings->fields).flickerStrength,(MethodInfo *)0x0);
                                  pUVar2 = (__this->fields).runtimeMat;
                                  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                    UnityEngine_Material__SetFloat_68e0ad0
                                              (pUVar2,TypeInfo_PatreonEffects_NameEffectController->
                                                      static_fields->FlickerSpeed_ID,
                                               (settings->fields).flickerSpeed,(MethodInfo *)0x0);
                                    pUVar2 = (__this->fields).runtimeMat;
                                    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                      nameID = TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                               Softness_ID;
                                      pMVar5 = (MethodInfo *)(ulong)nameID;
                                      UnityEngine_Material__SetFloat_68e0ad0
                                                (pUVar2,nameID,(settings->fields).softness,(MethodInfo *)0x0);
                                      PatreonEffects_NameEffectController__HookEffectVertexData(__this,pMVar5)
                                      ;
                                      pTVar3 = (__this->fields).text;
                                      if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                                        (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                                                  (pTVar3,false,false,
                                                   (pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
                                        pTVar3 = (__this->fields).text;
                                        if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                                          textInfo = TMPro_TMP_Text__get_textInfo(pTVar3,(MethodInfo *)0x0);
                                          PatreonEffects_NameEffectController__UpdateEffectVertexData
                                                    (__this,textInfo,method_01);
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
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$Clear
// il2cpp: void PatreonEffects_NameEffectController__Clear (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c1f30

void PatreonEffects_NameEffectController__Clear
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_Text_o *x;
  bool bVar2;
  TMPro_TMP_Text_o *method_00;
  
  if (Il2CppMethodInitialized_07545be6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545be6 = '\x01';
    cVar1 = (__this->fields).cleared;
  }
  else {
    cVar1 = (__this->fields).cleared;
  }
  if (cVar1 != '\0') {
    return;
  }
  (__this->fields).cleared = true;
  x = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (TMPro_TMP_Text_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    method_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields).text = method_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text);
  }
  PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)method_00);
  if (Il2CppMethodInitialized_07545bef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_07545bef = '\x01';
  }
  (__this->fields).popActive = false;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_00);
  if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
  }
  PatreonEffects_NameEffectController__DestroyPopLayer
            (&(__this->fields).popShadowText,(MethodInfo *)method_00);
  PatreonEffects_NameEffectController__DestroyPopLayer
            (&(__this->fields).popExtrusionText,(MethodInfo *)method_00);
  bVar2 = (__this->fields).outlineActive;
  (__this->fields).outlineActive = false;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_00);
  if (bVar2 != false) {
    PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_00);
  }
  PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_00);
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_00);
  (__this->fields).initialized = false;
  return;
}


// PatreonEffects.NameEffectController$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectController__OnDestroy (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c3500

void PatreonEffects_NameEffectController__OnDestroy
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController__Clear(__this,method);
  return;
}


// PatreonEffects.NameEffectController$$ApplyHolographic
// il2cpp: void PatreonEffects_NameEffectController__ApplyHolographic (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c3510

void PatreonEffects_NameEffectController__ApplyHolographic
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545bff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545bff = '\x01';
  }
  settings = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (settings->fields).gradientA.fields.r = 0.78;
  (settings->fields).gradientA.fields.g = 1.0;
  (settings->fields).gradientA.fields.b = 0.9;
  (settings->fields).gradientA.fields.a = 1.0;
  (settings->fields).gradientB.fields.r = 0.64;
  (settings->fields).gradientB.fields.g = 0.95;
  (settings->fields).gradientB.fields.b = 1.0;
  (settings->fields).gradientB.fields.a = 1.0;
  (settings->fields).gradientC.fields.r = 0.86;
  (settings->fields).gradientC.fields.g = 0.76;
  (settings->fields).gradientC.fields.b = 1.0;
  (settings->fields).gradientC.fields.a = 1.0;
  (settings->fields).gradientD.fields.r = 1.0;
  (settings->fields).gradientD.fields.g = 0.96;
  (settings->fields).gradientD.fields.b = 0.82;
  (settings->fields).gradientD.fields.a = 1.0;
  (settings->fields).gradientScale = 2.8;
  (settings->fields).gradientSpeed = 0.16;
  (settings->fields).glow = 1.35;
  (settings->fields).scanlineStrength = 0.12;
  (settings->fields).scanlineDensity = 180.0;
  (settings->fields).scanlineSpeed = 0.18;
  (settings->fields).flickerStrength = 0.05;
  (settings->fields).flickerSpeed = 18.0;
  (settings->fields).softness = 1.0;
  (settings->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (settings->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)settings,(MethodInfo *)0x0);
  PatreonEffects_NameEffectController__Apply(__this,settings,method_00);
  return;
}


// PatreonEffects.NameEffectController$$FindText
// il2cpp: bool PatreonEffects_NameEffectController__FindText (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2180

bool PatreonEffects_NameEffectController__FindText
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **targetAddress;
  bool bVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545be7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"[NameEffectController] No TMP_Text found on ");
    Il2CppMethodInitialized_07545be7 = '\x01';
  }
  pTVar2 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).text;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields).text = pTVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pTVar2 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320("[NameEffectController] No TMP_Text found on ",pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  return bVar1;
}


// PatreonEffects.NameEffectController$$ApplyPop
// il2cpp: void PatreonEffects_NameEffectController__ApplyPop (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x59c2850

void PatreonEffects_NameEffectController__ApplyPop
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar3;
  bool bVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PatreonEffects_NameEffectSettings_o *method_02;
  MethodInfo *method_03;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  
  method_02 = settings;
  if (Il2CppMethodInitialized_07545be8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PopExtrusion");
    il2cpp_codegen_initialize_runtime_metadata(&"PopShadow");
    Il2CppMethodInitialized_07545be8 = '\x01';
  }
  bVar4 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)method_02);
  if (!bVar4) {
    return;
  }
  (__this->fields).cleared = false;
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_02);
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,&(__this->fields).popExtrusionText,"PopExtrusion",
               (UnityEngine_Color_o)(settings->fields).gradientD.fields,in_RCX);
    method_03 = (MethodInfo *)&(__this->fields).popShadowText;
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,(TMPro_TMP_Text_o **)method_03,"PopShadow",
               (UnityEngine_Color_o)(settings->fields).gradientC.fields,in_RCX);
    fVar6 = (settings->fields).gradientA.fields.g;
    fVar5 = (settings->fields).gradientA.fields.b;
    fVar3 = (settings->fields).gradientA.fields.a;
    (__this->fields).popFaceA.fields.r = (settings->fields).gradientA.fields.r;
    (__this->fields).popFaceA.fields.g = fVar6;
    (__this->fields).popFaceA.fields.b = fVar5;
    (__this->fields).popFaceA.fields.a = fVar3;
    fVar6 = (settings->fields).gradientB.fields.g;
    fVar5 = (settings->fields).gradientB.fields.b;
    fVar3 = (settings->fields).gradientB.fields.a;
    (__this->fields).popFaceB.fields.r = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceB.fields.g = fVar6;
    (__this->fields).popFaceB.fields.b = fVar5;
    (__this->fields).popFaceB.fields.a = fVar3;
    fVar6 = (settings->fields).gradientB.fields.g;
    fVar5 = (settings->fields).gradientB.fields.b;
    fVar3 = (settings->fields).gradientB.fields.a;
    (__this->fields).popFaceC.fields.r = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceC.fields.g = fVar6;
    (__this->fields).popFaceC.fields.b = fVar5;
    (__this->fields).popFaceC.fields.a = fVar3;
    fVar6 = (settings->fields).gradientC.fields.g;
    fVar5 = (settings->fields).gradientC.fields.b;
    fVar3 = (settings->fields).gradientC.fields.a;
    (__this->fields).popShadowColor.fields.r = (settings->fields).gradientC.fields.r;
    (__this->fields).popShadowColor.fields.g = fVar6;
    (__this->fields).popShadowColor.fields.b = fVar5;
    (__this->fields).popShadowColor.fields.a = fVar3;
    fVar6 = (settings->fields).gradientD.fields.g;
    fVar5 = (settings->fields).gradientD.fields.b;
    fVar3 = (settings->fields).gradientD.fields.a;
    (__this->fields).popExtrusionColor.fields.r = (settings->fields).gradientD.fields.r;
    (__this->fields).popExtrusionColor.fields.g = fVar6;
    (__this->fields).popExtrusionColor.fields.b = fVar5;
    (__this->fields).popExtrusionColor.fields.a = fVar3;
    (__this->fields).popShadowOffset.fields = (settings->fields).popShadowOffset.fields;
    (__this->fields).popExtrusionOffset.fields = (settings->fields).popExtrusionOffset.fields;
    (__this->fields).popActive = true;
    PatreonEffects_NameEffectController__HookPopGradient(__this,method_03);
    if (Il2CppMethodInitialized_07545bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545bea = '\x01';
    }
    pTVar2 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pTVar2 = (__this->fields).text;
      if (pTVar2 == (TMPro_TMP_Text_o *)0x0) goto label_059c2a6c;
      fVar5 = (pTVar2->fields).m_fontSize / 48.0;
      fVar6 = 0.35;
      if (0.35 <= fVar5) {
        fVar6 = fVar5;
      }
      UVar1 = (__this->fields).popExtrusionOffset.fields;
      offset.fields.y = UVar1.y * fVar6;
      offset.fields.x = UVar1.x * fVar6;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,(__this->fields).popExtrusionText,offset,
                 (UnityEngine_Color_o)(__this->fields).popExtrusionColor.fields,method_00);
      UVar1 = (__this->fields).popShadowOffset.fields;
      offset_00.fields.y = UVar1.y * fVar6;
      offset_00.fields.x = UVar1.x * fVar6;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,(__this->fields).popShadowText,offset_00,
                 (UnityEngine_Color_o)(__this->fields).popShadowColor.fields,method_01);
    }
    pTVar2 = (__this->fields).text;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      UVar7.fields.b = 1.0;
      UVar7.fields.a = 1.0;
      UVar7.fields.r = 1.0;
      UVar7.fields.g = 1.0;
      (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                (pTVar2,UVar7,(pTVar2->klass->vtable)._23_set_color.method);
      pTVar2 = (__this->fields).text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
        return;
      }
    }
  }
label_059c2a6c:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$LateUpdate
// il2cpp: void PatreonEffects_NameEffectController__LateUpdate (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c3c70

void PatreonEffects_NameEffectController__LateUpdate
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar5;
  
  if ((__this->fields).popActive != false) {
    if (Il2CppMethodInitialized_07545bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545bea = '\x01';
    }
    pTVar2 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pTVar2 = (__this->fields).text;
      if (pTVar2 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar4 = (pTVar2->fields).m_fontSize / 48.0;
      fVar5 = 0.35;
      if (0.35 <= fVar4) {
        fVar5 = fVar4;
      }
      UVar1 = (__this->fields).popExtrusionOffset.fields;
      offset.fields.x = UVar1.x * fVar5;
      offset.fields.y = UVar1.y * fVar5;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,(__this->fields).popExtrusionText,offset,
                 (UnityEngine_Color_o)(__this->fields).popExtrusionColor.fields,method_00);
      UVar1 = (__this->fields).popShadowOffset.fields;
      offset_00.fields.x = UVar1.x * fVar5;
      offset_00.fields.y = UVar1.y * fVar5;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,(__this->fields).popShadowText,offset_00,
                 (UnityEngine_Color_o)(__this->fields).popShadowColor.fields,method_01);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$EnsurePopLayer
// il2cpp: void PatreonEffects_NameEffectController__EnsurePopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o** layer, System_String_o* layerName, UnityEngine_Color_o color, const MethodInfo* method);
// 0x59c3660

void PatreonEffects_NameEffectController__EnsurePopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o **layer,
               System_String_o *layerName,UnityEngine_Color_o color,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  Il2CppType *handle;
  bool bVar2;
  int32_t index;
  UnityEngine_Transform_o *pUVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545be9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07545be9 = '\x01';
  }
  pTVar1 = *layer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pTVar1 = (__this->fields).text;
  if ((pTVar1 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar3 = TMPro_TMP_Text__get_transform(pTVar1,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if ((pSVar4 != (System_Type_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
label_059c3a9d:
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar4;
        Il2CppCodeGenWriteBarrier(components->m_Items);
        pSVar4 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Type_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) goto label_059c3a9d;
        if ((components->max_length & 0xfffffffe) != 0) {
          components->m_Items[1] = pSVar4;
          Il2CppCodeGenWriteBarrier(components->m_Items + 1);
          pSVar4 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
          if ((pSVar4 != (System_Type_o *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) goto label_059c3a9d;
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar4;
            Il2CppCodeGenWriteBarrier(components->m_Items + 2);
            pSVar4 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                                (MethodInfo *)0x0);
            if ((pSVar4 != (System_Type_o *)0x0) &&
               (pIVar5 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
               pIVar5 == (Il2CppObject *)0x0)) goto label_059c3a9d;
            if ((components->max_length & 0xfffffffc) != 0) {
              components->m_Items[3] = pSVar4;
              Il2CppCodeGenWriteBarrier(components->m_Items + 3);
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_691aa60(__this_00,layerName,components,(MethodInfo *)0x0);
              if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar3,false,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                pTVar1 = (__this->fields).text;
                if ((pTVar1 != (TMPro_TMP_Text_o *)0x0) &&
                   ((pUVar6 = TMPro_TMP_Text__get_transform(pTVar1,(MethodInfo *)0x0),
                    pUVar6 != (UnityEngine_Transform_o *)0x0 &&
                    (index = UnityEngine_Transform__GetSiblingIndex(pUVar6,(MethodInfo *)0x0),
                    pUVar3 != (UnityEngine_Transform_o *)0x0)))) {
                  UnityEngine_Transform__SetSiblingIndex(pUVar3,index,(MethodInfo *)0x0);
                  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,
                                      (MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar7->klass->vtable)._28_set_ignoreLayout.methodPtr)
                              (pUVar7,true,(pUVar7->klass->vtable)._28_set_ignoreLayout.method);
                    pTVar8 = UnityEngine_GameObject__GetComponent_object_
                                       (__this_00,
                                        (MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                    *layer = (TMPro_TMP_Text_o *)pTVar8;
                    Il2CppCodeGenWriteBarrier(layer);
                    pTVar1 = *layer;
                    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                      (*(pTVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pTVar1,false,(pTVar1->klass->vtable)._25_set_raycastTarget.method);
                      if (*layer != (TMPro_TMP_Text_o *)0x0) {
                        TMPro_TMP_Text__set_overrideColorTags(*layer,true,(MethodInfo *)0x0);
                        pTVar1 = *layer;
                        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                          (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                                    (pTVar1,color,(pTVar1->klass->vtable)._23_set_color.method);
                          pTVar1 = *layer;
                          method_00 = extraout_RDX;
                          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                            Il2CppMethodInitialized_0753ecc8 = '\x01';
                            method_00 = extraout_RDX_00;
                          }
                          PatreonEffects_NameEffectController__SyncPopLayer
                                    (__this,pTVar1,
                                     (UnityEngine_Vector2_o)
                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,color,
                                     method_00);
                          return;
                        }
                      }
                    }
                  }
                }
              }
              goto label_059c3a93;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_059c3a93:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$SyncPopLayers
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayers (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c3b80

void PatreonEffects_NameEffectController__SyncPopLayers
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar5;
  
  if (Il2CppMethodInitialized_07545bea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bea = '\x01';
  }
  pTVar2 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pTVar2 = (__this->fields).text;
  if (pTVar2 == (TMPro_TMP_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar4 = (pTVar2->fields).m_fontSize / 48.0;
  fVar5 = 0.35;
  if (0.35 <= fVar4) {
    fVar5 = fVar4;
  }
  UVar1 = (__this->fields).popExtrusionOffset.fields;
  offset.fields.x = UVar1.x * fVar5;
  offset.fields.y = UVar1.y * fVar5;
  PatreonEffects_NameEffectController__SyncPopLayer
            (__this,(__this->fields).popExtrusionText,offset,
             (UnityEngine_Color_o)(__this->fields).popExtrusionColor.fields,method_00);
  UVar1 = (__this->fields).popShadowOffset.fields;
  offset_00.fields.x = UVar1.x * fVar5;
  offset_00.fields.y = UVar1.y * fVar5;
  PatreonEffects_NameEffectController__SyncPopLayer
            (__this,(__this->fields).popShadowText,offset_00,
             (UnityEngine_Color_o)(__this->fields).popShadowColor.fields,method_01);
  return;
}


// PatreonEffects.NameEffectController$$ApplyOutline
// il2cpp: void PatreonEffects_NameEffectController__ApplyOutline (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x59c2ae0

void PatreonEffects_NameEffectController__ApplyOutline
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  TMPro_TMP_Text_o *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  UnityEngine_Material_o *__this_00;
  System_String_o *pSVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  PatreonEffects_NameEffectSettings_o *method_00;
  UnityEngine_Color_o UVar9;
  
  method_00 = settings;
  if (Il2CppMethodInitialized_07545beb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" Outline Runtime");
    Il2CppMethodInitialized_07545beb = '\x01';
  }
  bVar6 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)method_00);
  if (bVar6) {
    (__this->fields).cleared = false;
    pUVar1 = (__this->fields).originalFontMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar8 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,pMVar8);
      if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
        fVar3 = (settings->fields).gradientA.fields.g;
        fVar4 = (settings->fields).gradientA.fields.b;
        fVar5 = (settings->fields).gradientA.fields.a;
        (__this->fields).popFaceA.fields.r = (settings->fields).gradientA.fields.r;
        (__this->fields).popFaceA.fields.g = fVar3;
        (__this->fields).popFaceA.fields.b = fVar4;
        (__this->fields).popFaceA.fields.a = fVar5;
        fVar3 = (settings->fields).gradientB.fields.g;
        fVar4 = (settings->fields).gradientB.fields.b;
        fVar5 = (settings->fields).gradientB.fields.a;
        (__this->fields).popFaceB.fields.r = (settings->fields).gradientB.fields.r;
        (__this->fields).popFaceB.fields.g = fVar3;
        (__this->fields).popFaceB.fields.b = fVar4;
        (__this->fields).popFaceB.fields.a = fVar5;
        fVar3 = (settings->fields).gradientC.fields.g;
        fVar4 = (settings->fields).gradientC.fields.b;
        fVar5 = (settings->fields).gradientC.fields.a;
        (__this->fields).popFaceC.fields.r = (settings->fields).gradientC.fields.r;
        (__this->fields).popFaceC.fields.g = fVar3;
        (__this->fields).popFaceC.fields.b = fVar4;
        (__this->fields).popFaceC.fields.a = fVar5;
        (__this->fields).outlineActive = true;
        pUVar1 = (__this->fields).originalFontMaterial;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor_68dcfd0(__this_00,pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).originalFontMaterial;
        if (pUVar1 != (UnityEngine_Material_o *)0x0) {
          pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
          pSVar7 = System_String__Concat_52f0320(pSVar7," Outline Runtime",(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_00,pSVar7,(MethodInfo *)0x0);
            (__this->fields).runtimeMat = __this_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields).runtimeMat);
            pUVar1 = (__this->fields).runtimeMat;
            pMVar8 = extraout_RDX;
            if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
              pMVar8 = extraout_RDX_00;
            }
            PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial(pUVar1,settings,pMVar8);
            pTVar2 = (__this->fields).text;
            if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_fontMaterial(pTVar2,(__this->fields).runtimeMat,(MethodInfo *)0x0);
              pTVar2 = (__this->fields).text;
              if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
                pMVar8 = (pTVar2->klass->vtable)._111_UpdateMeshPadding.method;
                (*(pTVar2->klass->vtable)._111_UpdateMeshPadding.methodPtr)(pTVar2,pMVar8);
                (__this->fields).initialized = true;
                PatreonEffects_NameEffectController__HookPopGradient(__this,pMVar8);
                pTVar2 = (__this->fields).text;
                if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
                  UVar9.fields.b = 1.0;
                  UVar9.fields.a = 1.0;
                  UVar9.fields.r = 1.0;
                  UVar9.fields.g = 1.0;
                  (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                            (pTVar2,UVar9,(pTVar2->klass->vtable)._23_set_color.method);
                  pTVar2 = (__this->fields).text;
                  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
                    (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                              (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ApplyTmpOutlineMaterial
// il2cpp: void PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial (UnityEngine_Material_o* material, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x59c4100

void PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial
               (UnityEngine_Material_o *material,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Color_Fields value;
  bool bVar2;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_07545bec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_ShaderUtilities);
    Il2CppMethodInitialized_07545bec = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__EnableKeyword
              (material,TypeInfo_TMPro_ShaderUtilities->static_fields->Keyword_Outline,(MethodInfo *)0x0);
    iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_FaceColor;
    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
    }
    bVar2 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
    if (bVar2) {
      value_00.fields.b = 1.0;
      value_00.fields.a = 1.0;
      value_00.fields.r = 1.0;
      value_00.fields.g = 1.0;
      UnityEngine_Material__SetColor_68dd4d0(material,iVar1,value_00,(MethodInfo *)0x0);
    }
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_OutlineColor;
      value = (settings->fields).gradientD.fields;
      bVar2 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar2) {
        UnityEngine_Material__SetColor_68dd4d0(material,iVar1,(UnityEngine_Color_o)value,(MethodInfo *)0x0);
      }
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_OutlineWidth;
      bVar2 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar2) {
        UnityEngine_Material__SetFloat_68e0ad0(material,iVar1,0.16,(MethodInfo *)0x0);
      }
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_OutlineSoftness;
      bVar2 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar2) {
        UnityEngine_Material__SetFloat_68e0ad0(material,iVar1,0.0,(MethodInfo *)0x0);
      }
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_FaceDilate;
      bVar2 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar2) {
        UnityEngine_Material__SetFloat_68e0ad0(material,iVar1,0.02,(MethodInfo *)0x0);
      }
      TMPro_ShaderUtilities__UpdateShaderRatios(material,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$SetColorIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetColorIfPresent (UnityEngine_Material_o* material, int32_t propertyId, UnityEngine_Color_o value, const MethodInfo* method);
// 0x59c4300

void PatreonEffects_NameEffectController__SetColorIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,UnityEngine_Color_o value,
               MethodInfo *method)

{
  bool bVar1;
  
  if (material == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
  if (bVar1) {
    UnityEngine_Material__SetColor_68dd4d0(material,propertyId,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectController$$SetFloatIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetFloatIfPresent (UnityEngine_Material_o* material, int32_t propertyId, float value, const MethodInfo* method);
// 0x59c4350

void PatreonEffects_NameEffectController__SetFloatIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,float value,MethodInfo *method)

{
  bool bVar1;
  
  if (material == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
  if (bVar1) {
    UnityEngine_Material__SetFloat_68e0ad0(material,propertyId,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectController$$PopOffsetScale
// il2cpp: float PatreonEffects_NameEffectController__PopOffsetScale (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c40d0

float PatreonEffects_NameEffectController__PopOffsetScale
                (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  float fVar2;
  float fVar3;
  
  pTVar1 = (__this->fields).text;
  if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar3 = (pTVar1->fields).m_fontSize / 48.0;
  fVar2 = 0.35;
  if (0.35 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}


// PatreonEffects.NameEffectController$$SyncPopLayer
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o* layer, UnityEngine_Vector2_o offset, UnityEngine_Color_o color, const MethodInfo* method);
// 0x59c3d60

void PatreonEffects_NameEffectController__SyncPopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o *layer,
               UnityEngine_Vector2_o offset,UnityEngine_Color_o color,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  int32_t value;
  System_String_o *pSVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value_01;
  float local_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_07545bed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bed = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)layer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pTVar1 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pTVar1 = (__this->fields).text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        pSVar4 = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                           (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
        if (layer != (TMPro_TMP_Text_o *)0x0) {
          (*(layer->klass->vtable)._66_set_text.methodPtr)
                    (layer,pSVar4,(layer->klass->vtable)._66_set_text.method);
          pTVar1 = (__this->fields).text;
          if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
            TMPro_TMP_Text__set_font(layer,(pTVar1->fields).m_fontAsset,(MethodInfo *)0x0);
            pUVar5 = (__this->fields).originalFontMaterial;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              pUVar5 = (__this->fields).originalFontMaterial;
            }
            else {
              pTVar1 = (__this->fields).text;
              if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto label_059c40c7;
              pUVar5 = (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                                 (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
            }
            (*(layer->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                      (layer,pUVar5,(layer->klass->vtable)._68_set_fontSharedMaterial.method);
            pTVar1 = (__this->fields).text;
            if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_fontSize(layer,(pTVar1->fields).m_fontSize,(MethodInfo *)0x0);
              pTVar1 = (__this->fields).text;
              if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                TMPro_TMP_Text__set_fontStyle(layer,(pTVar1->fields).m_fontStyle,(MethodInfo *)0x0);
                pTVar1 = (__this->fields).text;
                if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                  value = TMPro_TMP_Text__get_alignment(pTVar1,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_alignment(layer,value,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields).text;
                  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                    TMPro_TMP_Text__set_richText(layer,(pTVar1->fields).m_isRichText,(MethodInfo *)0x0);
                    pTVar1 = (__this->fields).text;
                    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                      bVar3 = TMPro_TMP_Text__get_enableWordWrapping(pTVar1,(MethodInfo *)0x0);
                      TMPro_TMP_Text__set_enableWordWrapping(layer,bVar3,(MethodInfo *)0x0);
                      TMPro_TMP_Text__set_overflowMode(layer,0,(MethodInfo *)0x0);
                      pTVar1 = (__this->fields).text;
                      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                        TMPro_TMP_Text__set_characterSpacing
                                  (layer,(pTVar1->fields).m_characterSpacing,(MethodInfo *)0x0);
                        pTVar1 = (__this->fields).text;
                        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                          TMPro_TMP_Text__set_wordSpacing
                                    (layer,(pTVar1->fields).m_wordSpacing,(MethodInfo *)0x0);
                          pTVar1 = (__this->fields).text;
                          if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                            TMPro_TMP_Text__set_lineSpacing
                                      (layer,(pTVar1->fields).m_lineSpacing,(MethodInfo *)0x0);
                            pTVar1 = (__this->fields).text;
                            if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                              TMPro_TMP_Text__set_paragraphSpacing
                                        (layer,(pTVar1->fields).m_paragraphSpacing,(MethodInfo *)0x0);
                              (*(layer->klass->vtable)._23_set_color.methodPtr)
                                        (layer,color,(layer->klass->vtable)._23_set_color.method);
                              pTVar1 = (__this->fields).text;
                              if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                                __this_00 = TMPro_TMP_Text__get_rectTransform(pTVar1,(MethodInfo *)0x0);
                                __this_01 = TMPro_TMP_Text__get_rectTransform(layer,(MethodInfo *)0x0);
                                if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                                  UVar2 = UnityEngine_RectTransform__get_anchorMin
                                                    (__this_00,(MethodInfo *)0x0);
                                  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_anchorMin
                                              (__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar2 = UnityEngine_RectTransform__get_anchorMax
                                                      (__this_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar2 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_pivot(__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar2 = UnityEngine_RectTransform__get_sizeDelta
                                                      (__this_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar6 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                      (__this_00,(MethodInfo *)0x0);
                                    local_58 = offset.fields.x;
                                    fStack_54 = offset.fields.y;
                                    value_01.fields.x = UVar6.fields.x + local_58;
                                    value_01.fields.y = UVar6.fields.y + fStack_54;
                                    value_01.fields.z = UVar6.fields.z + 0.0;
                                    UnityEngine_RectTransform__set_anchoredPosition3D
                                              (__this_01,value_01,(MethodInfo *)0x0);
                                    UVar6 = UnityEngine_Transform__get_localScale
                                                      ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0)
                                    ;
                                    UnityEngine_Transform__set_localScale
                                              ((UnityEngine_Transform_o *)__this_01,UVar6,(MethodInfo *)0x0);
                                    value_00 = UnityEngine_Transform__get_localRotation
                                                         ((UnityEngine_Transform_o *)__this_00,
                                                          (MethodInfo *)0x0);
                                    UnityEngine_Transform__set_localRotation
                                              ((UnityEngine_Transform_o *)__this_01,value_00,(MethodInfo *)0x0
                                              );
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
      }
label_059c40c7:
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$HookPopGradient
// il2cpp: void PatreonEffects_NameEffectController__HookPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c3ab0

void PatreonEffects_NameEffectController__HookPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bee = '\x01';
  }
  if ((__this->fields).popGradientHooked == false) {
    pTVar1 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pTVar1 = (__this->fields).text;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient,
                 (MethodInfo_4A81BE0 *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar1,__this_00,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
      (__this->fields).popGradientHooked = true;
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearPop
// il2cpp: void PatreonEffects_NameEffectController__ClearPop (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2a80

void PatreonEffects_NameEffectController__ClearPop
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545bef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_07545bef = '\x01';
  }
  (__this->fields).popActive = false;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,method);
  if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
  }
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popShadowText,method);
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popExtrusionText,method);
  return;
}


// PatreonEffects.NameEffectController$$ClearOutline
// il2cpp: void PatreonEffects_NameEffectController__ClearOutline (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2820

void PatreonEffects_NameEffectController__ClearOutline
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (__this->fields).outlineActive;
  (__this->fields).outlineActive = false;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,method);
  if (bVar1 == false) {
    return;
  }
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,method);
  return;
}


// PatreonEffects.NameEffectController$$ClearPopGradient
// il2cpp: void PatreonEffects_NameEffectController__ClearPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c43a0

void PatreonEffects_NameEffectController__ClearPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bf0 = '\x01';
  }
  if ((__this->fields).popGradientHooked != false) {
    pTVar1 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields).text;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient,
                 (MethodInfo_4A81BE0 *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,__this_00,(pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  (__this->fields).popGradientHooked = false;
  return;
}


// PatreonEffects.NameEffectController$$HookEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__HookEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2cd0

void PatreonEffects_NameEffectController__HookEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bf1 = '\x01';
  }
  if ((__this->fields).effectVertexDataHooked == false) {
    pTVar1 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pTVar1 = (__this->fields).text;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData,
                 (MethodInfo_4A81BE0 *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar1,__this_00,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
      (__this->fields).effectVertexDataHooked = true;
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__ClearEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2750

void PatreonEffects_NameEffectController__ClearEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bf2 = '\x01';
  }
  if ((__this->fields).effectVertexDataHooked != false) {
    pTVar1 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields).text;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData,
                 (MethodInfo_4A81BE0 *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,__this_00,(pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  (__this->fields).effectVertexDataHooked = false;
  return;
}


// PatreonEffects.NameEffectController$$DestroyPopLayer
// il2cpp: void PatreonEffects_NameEffectController__DestroyPopLayer (TMPro_TMP_Text_o** layer, const MethodInfo* method);
// 0x59c4470

void PatreonEffects_NameEffectController__DestroyPopLayer(TMPro_TMP_Text_o **layer,MethodInfo *method)

{
  uint32_t uVar1;
  TMPro_TMP_Text_o *x;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07545bf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bf3 = '\x01';
  }
  x = *layer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (*layer == (TMPro_TMP_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*layer,(MethodInfo *)0x0);
  *layer = (TMPro_TMP_Text_o *)0x0;
  Il2CppCodeGenWriteBarrier(layer);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DestroyImmediate_6921750(obj,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$ClearShaderMaterial
// il2cpp: void PatreonEffects_NameEffectController__ClearShaderMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c3430

void PatreonEffects_NameEffectController__ClearShaderMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Material_o *x;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545bf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bf4 = '\x01';
  }
  pTVar1 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    x = (__this->fields).originalFontMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields).text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar1->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                  (pTVar1,(__this->fields).originalFontMaterial,
                   (pTVar1->klass->vtable)._68_set_fontSharedMaterial.method);
        pTVar1 = (__this->fields).text;
        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
          goto label_059c34df;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_059c34df:
  PatreonEffects_NameEffectController__DestroyRuntimeMaterial(__this,method_00);
  return;
}


// PatreonEffects.NameEffectController$$DestroyRuntimeMaterial
// il2cpp: void PatreonEffects_NameEffectController__DestroyRuntimeMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c2490

void PatreonEffects_NameEffectController__DestroyRuntimeMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **targetAddress;
  uint32_t uVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545bf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bf5 = '\x01';
  }
  pUVar2 = (__this->fields).runtimeMat;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).runtimeMat;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar2 = *targetAddress;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    if (bVar3) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    }
  }
  (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields).initialized = false;
  return;
}


// PatreonEffects.NameEffectController$$UpdateEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__UpdateEffectVertexData (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x59c2da0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c2ee3: jmp 0x59c340a

void PatreonEffects_NameEffectController__UpdateEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  ulong uVar1;
  UnityEngine_Vector3_array **ppUVar2;
  UnityEngine_Vector4_array **ppUVar3;
  UnityEngine_Vector2_array **ppUVar4;
  System_Int32_array **ppSVar5;
  float fVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  UnityEngine_Material_o *x;
  TMPro_TMP_CharacterInfo_array *pTVar11;
  TMPro_TMP_MeshInfo_array *pTVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_array *pUVar15;
  UnityEngine_Color32_array *pUVar16;
  bool bVar17;
  uint8_t uVar18;
  uint8_t uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  PatreonEffects_NameEffectController_c *pPVar23;
  MethodInfo *in_R9;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  UnityEngine_Mesh_o *pUStack_88;
  undefined8 uStack_80;
  UnityEngine_Vector3_array *pUStack_78;
  UnityEngine_Vector3_array *pUStack_70;
  UnityEngine_Vector4_array *pUStack_68;
  UnityEngine_Vector4_array *pUStack_60;
  UnityEngine_Vector2_array *pUStack_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *pSStack_48;
  UnityEngine_Material_o *pUStack_40;
  
  if (Il2CppMethodInitialized_07545bf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bf6 = '\x01';
  }
  fStack_8c = 0.0;
  fStack_90 = 0.0;
  fStack_94 = 0.0;
  fStack_98 = 0.0;
  pSStack_48 = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  pUStack_58 = (UnityEngine_Vector2_array *)0x0;
  pUStack_50 = (UnityEngine_Color32_array *)0x0;
  pUStack_68 = (UnityEngine_Vector4_array *)0x0;
  pUStack_60 = (UnityEngine_Vector4_array *)0x0;
  pUStack_78 = (UnityEngine_Vector3_array *)0x0;
  pUStack_70 = (UnityEngine_Vector3_array *)0x0;
  pUStack_88 = (UnityEngine_Mesh_o *)0x0;
  uStack_80 = 0;
  x = (__this->fields).runtimeMat;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar17 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar17) && (textInfo != (TMPro_TMP_TextInfo_o *)0x0)) {
    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
    }
    bVar17 = PatreonEffects_NameEffectController__TryLocalBounds
                       (textInfo,&fStack_8c,&fStack_90,&fStack_94,&fStack_98,in_R9);
    fVar14 = fStack_8c;
    fVar26 = fStack_90;
    fVar13 = fStack_94;
    fVar27 = fStack_98;
    if (bVar17) {
      if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
        pTVar11 = (textInfo->fields).characterInfo;
      }
      else {
        pTVar11 = (textInfo->fields).characterInfo;
      }
      if (pTVar11 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        uVar8 = (textInfo->fields).characterCount;
        uVar20 = (uint)pTVar11->max_length;
        if ((int)uVar8 < (int)uVar20) {
          uVar20 = uVar8;
        }
        if (0 < (int)uVar20) {
          fVar26 = fVar26 - fVar14;
          fVar27 = fVar27 - fVar13;
          if (fVar26 <= 0.001) {
            fVar26 = 0.001;
          }
          if (fVar27 <= 0.001) {
            fVar27 = 0.001;
          }
          lVar22 = 0x50;
          uVar24 = 0;
          do {
            pTVar11 = (textInfo->fields).characterInfo;
            if (pTVar11 == (TMPro_TMP_CharacterInfo_array *)0x0) {
              ThrowNullReferenceException();
            }
            if ((uint)pTVar11->max_length <= uVar24) goto label_059c341c;
            if ((*(byte *)((long)(&pTVar11->m_Items[0].fields.color + -8) + lVar22) & 1) != 0) {
              uVar8 = *(uint *)((long)(&pTVar11->m_Items[0].fields.vertex_BL.fields.color + -0x23) + lVar22);
              uVar9 = *(uint *)((long)(&pTVar11->m_Items[0].fields.vertex_BL.fields.color + -0x1e) + lVar22);
              uVar25 = (ulong)uVar9;
              if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController)
                ;
              }
              pSStack_48 = (System_Int32_array *)0x0;
              pUStack_40 = (UnityEngine_Material_o *)0x0;
              pUStack_58 = (UnityEngine_Vector2_array *)0x0;
              pUStack_50 = (UnityEngine_Color32_array *)0x0;
              pUStack_68 = (UnityEngine_Vector4_array *)0x0;
              pUStack_60 = (UnityEngine_Vector4_array *)0x0;
              pUStack_78 = (UnityEngine_Vector3_array *)0x0;
              pUStack_70 = (UnityEngine_Vector3_array *)0x0;
              pUStack_88 = (UnityEngine_Mesh_o *)0x0;
              uStack_80 = 0;
              if (((-1 < (int)uVar8) &&
                  (pTVar12 = (textInfo->fields).meshInfo, pTVar12 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
                 (uVar10 = (uint)pTVar12->max_length, (int)uVar8 < (int)uVar10)) {
                if (uVar10 <= uVar8) goto label_059c341c;
                pUStack_88 = pTVar12->m_Items[uVar8].fields.mesh;
                uStack_80 = *(undefined8 *)&pTVar12->m_Items[uVar8].fields.vertexCount;
                ppUVar2 = &pTVar12->m_Items[uVar8].fields.vertices;
                pUStack_78 = *ppUVar2;
                pUStack_70 = ppUVar2[1];
                ppUVar3 = &pTVar12->m_Items[uVar8].fields.tangents;
                pUStack_68 = *ppUVar3;
                pUStack_60 = ppUVar3[1];
                ppUVar4 = &pTVar12->m_Items[uVar8].fields.uvs2;
                pUStack_58 = *ppUVar4;
                pUStack_50 = (UnityEngine_Color32_array *)ppUVar4[1];
                ppSVar5 = &pTVar12->m_Items[uVar8].fields.triangles;
                pSStack_48 = *ppSVar5;
                pUStack_40 = (UnityEngine_Material_o *)ppSVar5[1];
                Il2CppCodeGenWriteBarrier(&pUStack_88);
                pUVar16 = pUStack_50;
                pUVar15 = pUStack_78;
                if ((pUStack_50 != (UnityEngine_Color32_array *)0x0) &&
                   (pUStack_78 != (UnityEngine_Vector3_array *)0x0)) {
                  if (((int)(uVar9 + 3) < (int)pUStack_50->max_length) &&
                     ((int)(uVar9 + 3) < (int)pUStack_78->max_length)) {
                    if (((pUStack_50->max_length & 0xffffffff) <= uVar25) ||
                       ((pUStack_78->max_length & 0xffffffff) <= uVar25)) {
label_059c341c:
                      ThrowIndexOutOfRangeException();
                    }
                    bVar7 = pUStack_50->m_Items[(int)uVar9].fields._overlap_0._at_a.a;
                    fVar6 = pUStack_78->m_Items[(int)uVar9].fields.x;
                    pPVar23 = TypeInfo_PatreonEffects_NameEffectController;
                    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
                    }
                    uVar18 = PatreonEffects_NameEffectController__ToByte
                                       ((fVar6 - fVar14) / fVar26,(MethodInfo *)pPVar23);
                    if (((uint)pUVar15->max_length <= uVar25) ||
                       (uVar19 = PatreonEffects_NameEffectController__ToByte
                                           ((pUVar15->m_Items[(int)uVar9].fields.y - fVar13) / fVar27,
                                            (MethodInfo *)pPVar23), (uint)pUVar16->max_length <= uVar25))
                    goto label_059c341c;
                    pUVar16->m_Items[(int)uVar9].fields._overlap_0._at_rgba.rgba =
                         (uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
                    uVar1 = uVar25 + 1;
                    if (((uint)pUVar16->max_length <= uVar1) || ((uint)pUVar15->max_length <= uVar1))
                    goto label_059c341c;
                    iVar21 = (int)uVar1;
                    bVar7 = pUVar16->m_Items[iVar21].fields._overlap_0._at_a.a;
                    fVar6 = pUVar15->m_Items[iVar21].fields.x;
                    pPVar23 = TypeInfo_PatreonEffects_NameEffectController;
                    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
                    }
                    uVar18 = PatreonEffects_NameEffectController__ToByte
                                       ((fVar6 - fVar14) / fVar26,(MethodInfo *)pPVar23);
                    if (((uint)pUVar15->max_length <= uVar1) ||
                       (uVar19 = PatreonEffects_NameEffectController__ToByte
                                           ((pUVar15->m_Items[iVar21].fields.y - fVar13) / fVar27,
                                            (MethodInfo *)pPVar23), (uint)pUVar16->max_length <= uVar1))
                    goto label_059c341c;
                    pUVar16->m_Items[iVar21].fields._overlap_0._at_rgba.rgba =
                         (uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
                    uVar1 = uVar25 + 2;
                    if (((uint)pUVar16->max_length <= uVar1) || ((uint)pUVar15->max_length <= uVar1))
                    goto label_059c341c;
                    iVar21 = (int)uVar1;
                    bVar7 = pUVar16->m_Items[iVar21].fields._overlap_0._at_a.a;
                    fVar6 = pUVar15->m_Items[iVar21].fields.x;
                    pPVar23 = TypeInfo_PatreonEffects_NameEffectController;
                    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
                    }
                    uVar18 = PatreonEffects_NameEffectController__ToByte
                                       ((fVar6 - fVar14) / fVar26,(MethodInfo *)pPVar23);
                    if (((uint)pUVar15->max_length <= uVar1) ||
                       (uVar19 = PatreonEffects_NameEffectController__ToByte
                                           ((pUVar15->m_Items[iVar21].fields.y - fVar13) / fVar27,
                                            (MethodInfo *)pPVar23), (uint)pUVar16->max_length <= uVar1))
                    goto label_059c341c;
                    pUVar16->m_Items[iVar21].fields._overlap_0._at_rgba.rgba =
                         (uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
                    uVar25 = uVar25 + 3;
                    if (((uint)pUVar16->max_length <= uVar25) || ((uint)pUVar15->max_length <= uVar25))
                    goto label_059c341c;
                    iVar21 = (int)uVar25;
                    bVar7 = pUVar16->m_Items[iVar21].fields._overlap_0._at_a.a;
                    fVar6 = pUVar15->m_Items[iVar21].fields.x;
                    pPVar23 = TypeInfo_PatreonEffects_NameEffectController;
                    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
                    }
                    uVar18 = PatreonEffects_NameEffectController__ToByte
                                       ((fVar6 - fVar14) / fVar26,(MethodInfo *)pPVar23);
                    if (((uint)pUVar15->max_length <= uVar25) ||
                       (uVar19 = PatreonEffects_NameEffectController__ToByte
                                           ((pUVar15->m_Items[iVar21].fields.y - fVar13) / fVar27,
                                            (MethodInfo *)pPVar23), (uint)pUVar16->max_length <= uVar25))
                    goto label_059c341c;
                    pUVar16->m_Items[iVar21].fields._overlap_0._at_rgba.rgba =
                         (uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
                  }
                }
              }
            }
            uVar24 = uVar24 + 1;
            lVar22 = lVar22 + 0x178;
          } while (uVar20 != uVar24);
        }
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ToByte
// il2cpp: uint8_t PatreonEffects_NameEffectController__ToByte (float value, const MethodInfo* method);
// 0x59c49b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c4aa4: jmp 0x59c49f8

uint8_t PatreonEffects_NameEffectController__ToByte(float value,MethodInfo *method)

{
  uint32_t uVar1;
  double dVar2;
  double dVar3;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  float fVar4;
  Il2CppMethodPointer local_20;
  undefined1 local_18 [16];
  
  fVar4 = 1.0;
  if (value <= 1.0) {
    fVar4 = value;
  }
  local_18 = ZEXT416(-(uint)(0.0 <= value) & (uint)(fVar4 * 255.0));
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar2 = (double)(float)local_18._0_4_;
  method_00 = (MethodInfo *)&local_20;
  dVar3 = modf(dVar2,(double *)method_00,in_RSI);
  if (0.0 <= (float)local_18._0_4_) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      dVar2 = floor(dVar2 + 0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      return (uint8_t)(int)((double)local_20 + 1.0);
    }
  }
  else {
    if ((dVar3 != -0.5) || (NAN(dVar3))) {
      dVar2 = ceil(dVar2 + -0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      local_20 = (Il2CppMethodPointer)((double)local_20 + -1.0);
    }
  }
  return (uint8_t)(int)(double)local_20;
}


// PatreonEffects.NameEffectController$$SafeCharacterCount
// il2cpp: int32_t PatreonEffects_NameEffectController__SafeCharacterCount (TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x59c4900

int32_t PatreonEffects_NameEffectController__SafeCharacterCount
                  (TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_CharacterInfo_array *pTVar2;
  int iVar3;
  
  if ((textInfo == (TMPro_TMP_TextInfo_o *)0x0) ||
     (pTVar2 = (textInfo->fields).characterInfo, pTVar2 == (TMPro_TMP_CharacterInfo_array *)0x0)) {
    return 0;
  }
  iVar1 = (textInfo->fields).characterCount;
  iVar3 = (int)pTVar2->max_length;
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  return iVar3;
}


// PatreonEffects.NameEffectController$$TryGetMeshInfo
// il2cpp: bool PatreonEffects_NameEffectController__TryGetMeshInfo (TMPro_TMP_TextInfo_o* textInfo, int32_t materialReferenceIndex, TMPro_TMP_MeshInfo_o* mesh, const MethodInfo* method);
// 0x59c4920

bool PatreonEffects_NameEffectController__TryGetMeshInfo
               (TMPro_TMP_TextInfo_o *textInfo,int32_t materialReferenceIndex,TMPro_TMP_MeshInfo_o *mesh,
               MethodInfo *method)

{
  TMPro_TMP_MeshInfo_o *pTVar1;
  UnityEngine_Vector3_array **ppUVar2;
  UnityEngine_Vector4_array **ppUVar3;
  UnityEngine_Vector2_array **ppUVar4;
  System_Int32_array **ppSVar5;
  uint uVar6;
  TMPro_TMP_MeshInfo_array *pTVar7;
  UnityEngine_Mesh_o *pUVar8;
  UnityEngine_Vector3_array *pUVar9;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_Vector4_array *pUVar11;
  UnityEngine_Vector4_array *pUVar12;
  UnityEngine_Vector2_array *pUVar13;
  UnityEngine_Color32_array *pUVar14;
  UnityEngine_Material_o *pUVar15;
  int32_t iVar16;
  undefined4 uVar17;
  bool bVar18;
  
  (mesh->fields).triangles = (System_Int32_array *)0x0;
  (mesh->fields).material = (UnityEngine_Material_o *)0x0;
  (mesh->fields).uvs2 = (UnityEngine_Vector2_array *)0x0;
  (mesh->fields).colors32 = (UnityEngine_Color32_array *)0x0;
  (mesh->fields).tangents = (UnityEngine_Vector4_array *)0x0;
  (mesh->fields).uvs0 = (UnityEngine_Vector4_array *)0x0;
  (mesh->fields).vertices = (UnityEngine_Vector3_array *)0x0;
  (mesh->fields).normals = (UnityEngine_Vector3_array *)0x0;
  (mesh->fields).mesh = (UnityEngine_Mesh_o *)0x0;
  *(undefined8 *)&(mesh->fields).vertexCount = 0;
  if (textInfo == (TMPro_TMP_TextInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar18 = false;
  if ((-1 < materialReferenceIndex) &&
     (pTVar7 = (textInfo->fields).meshInfo, pTVar7 != (TMPro_TMP_MeshInfo_array *)0x0)) {
    uVar6 = (uint)pTVar7->max_length;
    if ((int)uVar6 <= materialReferenceIndex) {
      return false;
    }
    if (uVar6 <= (uint)materialReferenceIndex) {
      ThrowIndexOutOfRangeException();
    }
    pTVar1 = pTVar7->m_Items + (uint)materialReferenceIndex;
    pUVar8 = (pTVar1->fields).mesh;
    iVar16 = (pTVar1->fields).vertexCount;
    uVar17 = *(undefined4 *)&(pTVar1->fields).field_0xc;
    ppUVar2 = &pTVar7->m_Items[(uint)materialReferenceIndex].fields.vertices;
    pUVar9 = *ppUVar2;
    pUVar10 = ppUVar2[1];
    ppUVar3 = &pTVar7->m_Items[(uint)materialReferenceIndex].fields.tangents;
    pUVar11 = *ppUVar3;
    pUVar12 = ppUVar3[1];
    ppUVar4 = &pTVar7->m_Items[(uint)materialReferenceIndex].fields.uvs2;
    pUVar13 = *ppUVar4;
    pUVar14 = (UnityEngine_Color32_array *)ppUVar4[1];
    ppSVar5 = &pTVar7->m_Items[(uint)materialReferenceIndex].fields.triangles;
    pUVar15 = (UnityEngine_Material_o *)ppSVar5[1];
    (mesh->fields).triangles = *ppSVar5;
    (mesh->fields).material = pUVar15;
    (mesh->fields).uvs2 = pUVar13;
    (mesh->fields).colors32 = pUVar14;
    (mesh->fields).tangents = pUVar11;
    (mesh->fields).uvs0 = pUVar12;
    (mesh->fields).vertices = pUVar9;
    (mesh->fields).normals = pUVar10;
    (mesh->fields).mesh = pUVar8;
    (mesh->fields).vertexCount = iVar16;
    *(undefined4 *)&(mesh->fields).field_0xc = uVar17;
    Il2CppCodeGenWriteBarrier((void **)mesh);
    bVar18 = true;
  }
  return bVar18;
}


// PatreonEffects.NameEffectController$$TryLocalBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryLocalBounds (TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, float* minY, float* maxY, const MethodInfo* method);
// 0x59c4570
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c4606: test r12, r12
// asm:   0x59c4609: jne 0x59c461e
// asm:   0x59c460b: jmp 0x59c48b7

bool PatreonEffects_NameEffectController__TryLocalBounds
               (TMPro_TMP_TextInfo_o *textInfo,float *minX,float *maxX,float *minY,float *maxY,
               MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TMPro_TMP_CharacterInfo_array *pTVar16;
  TMPro_TMP_MeshInfo_array *pTVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  UnityEngine_Mesh_o *local_88;
  undefined8 uStack_80;
  UnityEngine_Vector3_array *local_78;
  UnityEngine_Vector3_array *pUStack_70;
  UnityEngine_Vector4_array *local_68;
  UnityEngine_Vector4_array *pUStack_60;
  UnityEngine_Vector2_array *local_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *local_48;
  UnityEngine_Material_o *pUStack_40;
  
  if (Il2CppMethodInitialized_07545bf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_07545bf7 = '\x01';
  }
  local_48 = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  local_58 = (UnityEngine_Vector2_array *)0x0;
  pUStack_50 = (UnityEngine_Color32_array *)0x0;
  local_68 = (UnityEngine_Vector4_array *)0x0;
  pUStack_60 = (UnityEngine_Vector4_array *)0x0;
  local_78 = (UnityEngine_Vector3_array *)0x0;
  pUStack_70 = (UnityEngine_Vector3_array *)0x0;
  local_88 = (UnityEngine_Mesh_o *)0x0;
  uStack_80 = 0;
  *minX = INFINITY;
  *maxX = -INFINITY;
  *minY = INFINITY;
  *maxY = -INFINITY;
  if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
  }
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     (pTVar16 = (textInfo->fields).characterInfo, pTVar16 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
    uVar13 = (textInfo->fields).characterCount;
    uVar18 = (uint)pTVar16->max_length;
    if ((int)uVar13 < (int)uVar18) {
      uVar18 = uVar13;
    }
    if (0 < (int)uVar18) {
      lVar20 = 0x50;
      uVar21 = 0;
      do {
        pTVar16 = (textInfo->fields).characterInfo;
        if (pTVar16 == (TMPro_TMP_CharacterInfo_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pTVar16->max_length <= uVar21) goto label_059c48b2;
        if ((*(byte *)((long)(&pTVar16->m_Items[0].fields.color + -8) + lVar20) & 1) != 0) {
          uVar13 = *(uint *)((long)(&pTVar16->m_Items[0].fields.vertex_BL.fields.color + -0x23) + lVar20);
          uVar14 = *(uint *)((long)(&pTVar16->m_Items[0].fields.vertex_BL.fields.color + -0x1e) + lVar20);
          if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
          }
          local_48 = (System_Int32_array *)0x0;
          pUStack_40 = (UnityEngine_Material_o *)0x0;
          local_58 = (UnityEngine_Vector2_array *)0x0;
          pUStack_50 = (UnityEngine_Color32_array *)0x0;
          local_68 = (UnityEngine_Vector4_array *)0x0;
          pUStack_60 = (UnityEngine_Vector4_array *)0x0;
          local_78 = (UnityEngine_Vector3_array *)0x0;
          pUStack_70 = (UnityEngine_Vector3_array *)0x0;
          local_88 = (UnityEngine_Mesh_o *)0x0;
          uStack_80 = 0;
          if (((-1 < (int)uVar13) &&
              (pTVar17 = (textInfo->fields).meshInfo, pTVar17 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
             (uVar15 = (uint)pTVar17->max_length, (int)uVar13 < (int)uVar15)) {
            if (uVar15 <= uVar13) goto label_059c48b2;
            local_88 = pTVar17->m_Items[uVar13].fields.mesh;
            uStack_80 = *(undefined8 *)&pTVar17->m_Items[uVar13].fields.vertexCount;
            ppUVar1 = &pTVar17->m_Items[uVar13].fields.vertices;
            local_78 = *ppUVar1;
            pUStack_70 = ppUVar1[1];
            ppUVar2 = &pTVar17->m_Items[uVar13].fields.tangents;
            local_68 = *ppUVar2;
            pUStack_60 = ppUVar2[1];
            ppUVar3 = &pTVar17->m_Items[uVar13].fields.uvs2;
            local_58 = *ppUVar3;
            pUStack_50 = (UnityEngine_Color32_array *)ppUVar3[1];
            ppSVar4 = &pTVar17->m_Items[uVar13].fields.triangles;
            local_48 = *ppSVar4;
            pUStack_40 = (UnityEngine_Material_o *)ppSVar4[1];
            Il2CppCodeGenWriteBarrier(&local_88);
            if ((local_78 != (UnityEngine_Vector3_array *)0x0) &&
               (uVar13 = (uint)local_78->max_length, (int)(uVar14 + 3) < (int)uVar13)) {
              iVar19 = uVar13 - uVar14;
              bVar22 = iVar19 == 0;
              if (uVar13 < uVar14) {
                iVar19 = 0;
              }
              if (uVar13 < uVar14 || bVar22) {
label_059c48b2:
                ThrowIndexOutOfRangeException();
              }
              uVar6 = local_78->m_Items[(int)uVar14].fields.x;
              uVar10 = local_78->m_Items[(int)uVar14].fields.y;
              fVar23 = *minX;
              if ((float)uVar6 <= *minX) {
                fVar23 = (float)uVar6;
              }
              *minX = fVar23;
              fVar23 = *maxX;
              if (*maxX <= (float)uVar6) {
                fVar23 = (float)uVar6;
              }
              *maxX = fVar23;
              fVar23 = *minY;
              if ((float)uVar10 <= *minY) {
                fVar23 = (float)uVar10;
              }
              *minY = fVar23;
              fVar23 = *maxY;
              if (*maxY <= (float)uVar10) {
                fVar23 = (float)uVar10;
              }
              *maxY = fVar23;
              if (iVar19 == 1) goto label_059c48b2;
              uVar7 = local_78->m_Items[(int)(uVar14 + 1)].fields.x;
              uVar11 = local_78->m_Items[(int)(uVar14 + 1)].fields.y;
              fVar23 = *minX;
              if ((float)uVar7 <= *minX) {
                fVar23 = (float)uVar7;
              }
              *minX = fVar23;
              fVar23 = *maxX;
              if (*maxX <= (float)uVar7) {
                fVar23 = (float)uVar7;
              }
              *maxX = fVar23;
              fVar23 = *minY;
              if ((float)uVar11 <= *minY) {
                fVar23 = (float)uVar11;
              }
              *minY = fVar23;
              fVar23 = *maxY;
              if (*maxY <= (float)uVar11) {
                fVar23 = (float)uVar11;
              }
              *maxY = fVar23;
              if (iVar19 == 2) goto label_059c48b2;
              uVar8 = local_78->m_Items[(int)(uVar14 + 2)].fields.x;
              uVar12 = local_78->m_Items[(int)(uVar14 + 2)].fields.y;
              fVar23 = *minX;
              if ((float)uVar8 <= *minX) {
                fVar23 = (float)uVar8;
              }
              *minX = fVar23;
              fVar23 = *maxX;
              if (*maxX <= (float)uVar8) {
                fVar23 = (float)uVar8;
              }
              *maxX = fVar23;
              fVar23 = *minY;
              if ((float)uVar12 <= *minY) {
                fVar23 = (float)uVar12;
              }
              *minY = fVar23;
              fVar23 = *maxY;
              if (*maxY <= (float)uVar12) {
                fVar23 = (float)uVar12;
              }
              *maxY = fVar23;
              if (iVar19 == 3) goto label_059c48b2;
              uVar5 = local_78->m_Items[(int)(uVar14 + 3)].fields.x;
              uVar9 = local_78->m_Items[(int)(uVar14 + 3)].fields.y;
              fVar23 = *minX;
              if ((float)uVar5 <= *minX) {
                fVar23 = (float)uVar5;
              }
              *minX = fVar23;
              fVar23 = *maxX;
              if (*maxX <= (float)uVar5) {
                fVar23 = (float)uVar5;
              }
              *maxX = fVar23;
              fVar23 = *minY;
              if ((float)uVar9 <= *minY) {
                fVar23 = (float)uVar9;
              }
              *minY = fVar23;
              fVar23 = *maxY;
              if (*maxY <= (float)uVar9) {
                fVar23 = (float)uVar9;
              }
              *maxY = fVar23;
            }
          }
        }
        uVar21 = uVar21 + 1;
        lVar20 = lVar20 + 0x178;
      } while (uVar18 != uVar21);
    }
  }
  if (*maxX < *minX || *maxX == *minX) {
    bVar22 = false;
  }
  else {
    bVar22 = *minY <= *maxY && *maxY != *minY;
  }
  return bVar22;
}


// PatreonEffects.NameEffectController$$ApplyPopFaceGradient
// il2cpp: void PatreonEffects_NameEffectController__ApplyPopFaceGradient (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x59c4ae0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c4bb0: test r13, r13
// asm:   0x59c4bb3: jne 0x59c4bc8
// asm:   0x59c4bb5: jmp 0x59c4f72
// asm:   0x59c4f6d: jmp 0x59c4c50

void PatreonEffects_NameEffectController__ApplyPopFaceGradient
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  TMPro_TMP_CharacterInfo_array *pTVar10;
  TMPro_TMP_MeshInfo_array *pTVar11;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  PatreonEffects_NameEffectController_o *__this_01;
  bool bVar14;
  uint uVar15;
  int iVar16;
  _struct_53532 _Var17;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Color_o *pUVar18;
  UnityEngine_Color_o *pUVar19;
  float *pfVar20;
  ulong uVar21;
  long lVar22;
  TMPro_TMP_TextInfo_o *method_00;
  float *pfVar23;
  MethodInfo *in_R9;
  ulong uVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o worldPoint;
  float fStack_100;
  float fStack_fc;
  PatreonEffects_NameEffectController_o *pPStack_f8;
  ulong uStack_f0;
  float *pfStack_e8;
  UnityEngine_Color_o *pUStack_e0;
  undefined1 auStack_d8 [16];
  float *pfStack_c8;
  UnityEngine_Color_o *pUStack_c0;
  float *pfStack_b8;
  UnityEngine_Color_o *pUStack_b0;
  UnityEngine_Vector3_array *pUStack_a8;
  ulong uStack_a0;
  UnityEngine_Color32_array *pUStack_98;
  UnityEngine_Camera_o *pUStack_90;
  UnityEngine_Mesh_o *pUStack_88;
  undefined8 uStack_80;
  UnityEngine_Vector3_array *pUStack_78;
  UnityEngine_Vector3_array *pUStack_70;
  UnityEngine_Vector4_array *pUStack_68;
  UnityEngine_Vector4_array *pUStack_60;
  UnityEngine_Vector2_array *pUStack_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *pSStack_48;
  UnityEngine_Material_o *pUStack_40;
  
  method_00 = textInfo;
  pPStack_f8 = __this;
  if (Il2CppMethodInitialized_07545bf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_07545bf8 = '\x01';
  }
  __this_01 = pPStack_f8;
  fStack_fc = 0.0;
  fStack_100 = 0.0;
  pSStack_48 = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  pUStack_58 = (UnityEngine_Vector2_array *)0x0;
  pUStack_50 = (UnityEngine_Color32_array *)0x0;
  pUStack_68 = (UnityEngine_Vector4_array *)0x0;
  pUStack_60 = (UnityEngine_Vector4_array *)0x0;
  pUStack_78 = (UnityEngine_Vector3_array *)0x0;
  pUStack_70 = (UnityEngine_Vector3_array *)0x0;
  pUStack_88 = (UnityEngine_Mesh_o *)0x0;
  uStack_80 = 0;
  pUStack_90 = PatreonEffects_NameEffectController__PopCamera(pPStack_f8,(MethodInfo *)method_00);
  bVar14 = PatreonEffects_NameEffectController__TryPopFaceBounds
                     (__this_01,textInfo,pUStack_90,&fStack_fc,&fStack_100,in_R9);
  fVar13 = fStack_fc;
  fVar27 = fStack_100;
  if (bVar14) {
    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
    }
    if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
       (pTVar10 = (textInfo->fields).characterInfo, pTVar10 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
      uVar9 = (textInfo->fields).characterCount;
      uVar15 = (uint)pTVar10->max_length;
      if ((int)uVar9 < (int)uVar15) {
        uVar15 = uVar9;
      }
      if (0 < (int)uVar15) {
        fVar27 = fVar27 - fVar13;
        if (fVar27 <= 0.001) {
          fVar27 = 0.001;
        }
        pUStack_e0 = &(pPStack_f8->fields).popFaceB;
        pfStack_e8 = &(pPStack_f8->fields).popFaceB.fields.b;
        pUStack_b0 = &(pPStack_f8->fields).popFaceC;
        pfStack_b8 = &(pPStack_f8->fields).popFaceC.fields.b;
        pUStack_c0 = &(pPStack_f8->fields).popFaceA;
        pfStack_c8 = &(pPStack_f8->fields).popFaceA.fields.b;
        uVar21 = (ulong)uVar15;
        uVar24 = 0;
        do {
          pTVar10 = (textInfo->fields).characterInfo;
          if (pTVar10 == (TMPro_TMP_CharacterInfo_array *)0x0) {
label_059c4f84:
            ThrowNullReferenceException();
          }
          if ((uint)pTVar10->max_length <= uVar24) {
label_059c4f89:
            ThrowIndexOutOfRangeException();
          }
          if ((pTVar10->m_Items[uVar24].fields.isVisible & 1U) != 0) {
            uVar9 = pTVar10->m_Items[uVar24].fields.materialReferenceIndex;
            uStack_f0 = (ulong)(uint)pTVar10->m_Items[uVar24].fields.vertexIndex;
            if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
            }
            pSStack_48 = (System_Int32_array *)0x0;
            pUStack_40 = (UnityEngine_Material_o *)0x0;
            pUStack_58 = (UnityEngine_Vector2_array *)0x0;
            pUStack_50 = (UnityEngine_Color32_array *)0x0;
            pUStack_68 = (UnityEngine_Vector4_array *)0x0;
            pUStack_60 = (UnityEngine_Vector4_array *)0x0;
            pUStack_78 = (UnityEngine_Vector3_array *)0x0;
            pUStack_70 = (UnityEngine_Vector3_array *)0x0;
            pUStack_88 = (UnityEngine_Mesh_o *)0x0;
            uStack_80 = 0;
            if (((-1 < (int)uVar9) &&
                (pTVar11 = (textInfo->fields).meshInfo, pTVar11 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
               (uVar15 = (uint)pTVar11->max_length, (int)uVar9 < (int)uVar15)) {
              if (uVar15 <= uVar9) goto label_059c4f89;
              pUStack_88 = pTVar11->m_Items[uVar9].fields.mesh;
              uStack_80 = *(undefined8 *)&pTVar11->m_Items[uVar9].fields.vertexCount;
              ppUVar1 = &pTVar11->m_Items[uVar9].fields.vertices;
              pUStack_78 = *ppUVar1;
              pUStack_70 = ppUVar1[1];
              ppUVar2 = &pTVar11->m_Items[uVar9].fields.tangents;
              pUStack_68 = *ppUVar2;
              pUStack_60 = ppUVar2[1];
              ppUVar3 = &pTVar11->m_Items[uVar9].fields.uvs2;
              pUStack_58 = *ppUVar3;
              pUStack_50 = (UnityEngine_Color32_array *)ppUVar3[1];
              ppSVar4 = &pTVar11->m_Items[uVar9].fields.triangles;
              pSStack_48 = *ppSVar4;
              pUStack_40 = (UnityEngine_Material_o *)ppSVar4[1];
              Il2CppCodeGenWriteBarrier(&pUStack_88);
              if (((pUStack_50 != (UnityEngine_Color32_array *)0x0) &&
                  (pUStack_78 != (UnityEngine_Vector3_array *)0x0)) &&
                 ((iVar16 = (int)uStack_f0 + 3, iVar16 < (int)pUStack_50->max_length &&
                  (iVar16 < (int)pUStack_78->max_length)))) {
                lVar26 = uStack_f0 << 0x20;
                lVar25 = 0;
                pUStack_98 = pUStack_50;
                pUStack_a8 = pUStack_78;
                uStack_a0 = uVar21;
                do {
                  uVar21 = uStack_f0 + lVar25;
                  if ((uint)pUStack_a8->max_length <= uVar21) goto label_059c4f89;
                  lVar22 = lVar26 >> 0x20;
                  uVar5 = pUStack_a8->m_Items[lVar22].fields.x;
                  uVar8 = pUStack_a8->m_Items[lVar22].fields.y;
                  auStack_d8._4_4_ = uVar8;
                  auStack_d8._0_4_ = uVar5;
                  auStack_d8._8_8_ = 0;
                  fVar29 = pUStack_a8->m_Items[lVar22].fields.z;
                  if (Il2CppMethodInitialized_07545bfb == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
                    Il2CppMethodInitialized_07545bfb = '\x01';
                  }
                  __this_00 = (pPStack_f8->fields).text;
                  if ((__this_00 == (TMPro_TMP_Text_o *)0x0) ||
                     (__this_02 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0),
                     __this_02 == (UnityEngine_Transform_o *)0x0)) goto label_059c4f84;
                  UVar30.fields.z = fVar29;
                  UVar30.fields.x = (float)auStack_d8._0_4_;
                  UVar30.fields.y = (float)auStack_d8._4_4_;
                  UVar30 = UnityEngine_Transform__TransformPoint(__this_02,UVar30,(MethodInfo *)0x0);
                  worldPoint.fields.z = UVar30.fields.z;
                  fVar29 = UVar30.fields.x;
                  fVar28 = UVar30.fields.y;
                  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                    auStack_d8._8_4_ = extraout_XMM0_Dc;
                    auStack_d8._0_8_ = UVar30.fields._0_8_;
                    auStack_d8._12_4_ = extraout_XMM0_Dd;
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                    fVar29 = (float)auStack_d8._0_4_;
                    fVar28 = (float)auStack_d8._4_4_;
                  }
                  worldPoint.fields.y = fVar28;
                  worldPoint.fields.x = fVar29;
                  UVar12 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                     (pUStack_90,worldPoint,(MethodInfo *)0x0);
                  fVar28 = (UVar12.fields.x - fVar13) / fVar27;
                  fVar29 = 1.0;
                  if (fVar28 <= 1.0) {
                    fVar29 = fVar28;
                  }
                  fVar29 = (float)(-(uint)(0.0 <= fVar28) & (uint)fVar29);
                  fVar28 = 0.0;
                  if (0.0 <= fVar29) {
                    fVar28 = fVar29;
                  }
                  if (0.5 <= fVar28) {
                    fVar28 = fVar28 + -0.5;
                    pUVar18 = pUStack_e0;
                    pUVar19 = pUStack_b0;
                    pfVar20 = pfStack_e8;
                    pfVar23 = pfStack_b8;
                  }
                  else {
                    pUVar18 = pUStack_c0;
                    pUVar19 = pUStack_e0;
                    pfVar20 = pfStack_c8;
                    pfVar23 = pfStack_e8;
                  }
                  uVar6 = (pUVar19->fields).r;
                  uVar7 = (pUVar18->fields).r;
                  fVar28 = fVar28 + fVar28;
                  fVar29 = 1.0;
                  if (fVar28 <= 1.0) {
                    fVar29 = fVar28;
                  }
                  fVar29 = (float)(-(uint)(0.0 <= fVar28) & (uint)fVar29);
                  _Var17.rgba = il2cpp_runtime_helper_05334d00(((float)uVar6 - (float)uVar7) * fVar29 + (float)uVar7,
                                             ((float)*(undefined8 *)pfVar23 - (float)*(undefined8 *)pfVar20) *
                                             fVar29 + (float)*(undefined8 *)pfVar20,0);
                  if ((uint)pUStack_98->max_length <= uVar21) goto label_059c4f89;
                  pUStack_98->m_Items[lVar22].fields._overlap_0._at_rgba.rgba = _Var17.rgba;
                  lVar25 = lVar25 + 1;
                  lVar26 = lVar26 + 0x100000000;
                  uVar21 = uStack_a0;
                } while (lVar25 != 4);
              }
            }
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar21);
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$SampleFaceGradient
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectController__SampleFaceGradient (PatreonEffects_NameEffectController_o* __this, float t, const MethodInfo* method);
// 0x59c56c0

UnityEngine_Color_o
PatreonEffects_NameEffectController__SampleFaceGradient
          (PatreonEffects_NameEffectController_o *__this,float t,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UnityEngine_Color_o *pUVar9;
  UnityEngine_Color_o *pUVar10;
  UnityEngine_Color_o *pUVar11;
  UnityEngine_Color_o *pUVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Color_o UVar15;
  
  fVar13 = 1.0;
  if (t <= 1.0) {
    fVar13 = t;
  }
  fVar13 = (float)(-(uint)(0.0 <= t) & (uint)fVar13);
  if (0.5 <= fVar13) {
    pUVar11 = &(__this->fields).popFaceB;
    pUVar9 = &(__this->fields).popFaceB;
    pUVar12 = &(__this->fields).popFaceC;
    pUVar10 = &(__this->fields).popFaceC;
    fVar13 = fVar13 + -0.5;
  }
  else {
    pUVar11 = &(__this->fields).popFaceA;
    pUVar9 = &(__this->fields).popFaceA;
    pUVar12 = &(__this->fields).popFaceB;
    pUVar10 = &(__this->fields).popFaceB;
  }
  fVar13 = fVar13 + fVar13;
  fVar14 = 1.0;
  if (fVar13 <= 1.0) {
    fVar14 = fVar13;
  }
  uVar1 = (pUVar12->fields).r;
  uVar5 = (pUVar12->fields).g;
  uVar2 = (pUVar10->fields).b;
  uVar6 = (pUVar10->fields).a;
  fVar14 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar14);
  uVar3 = (pUVar11->fields).r;
  uVar7 = (pUVar11->fields).g;
  uVar4 = (pUVar9->fields).b;
  uVar8 = (pUVar9->fields).a;
  UVar15.fields.r = fVar14 * ((float)uVar1 - (float)uVar3) + (float)uVar3;
  UVar15.fields.g = fVar14 * ((float)uVar5 - (float)uVar7) + (float)uVar7;
  UVar15.fields.a = fVar14 * ((float)uVar6 - (float)uVar8) + (float)uVar8;
  UVar15.fields.b = fVar14 * ((float)uVar2 - (float)uVar4) + (float)uVar4;
  return (UnityEngine_Color_o)UVar15.fields;
}


// PatreonEffects.NameEffectController$$TryPopFaceBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryPopFaceBounds (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Camera_o* camera, float* minX, float* maxX, const MethodInfo* method);
// 0x59c5070
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c5105: test r15, r15
// asm:   0x59c5108: jne 0x59c511d
// asm:   0x59c510a: jmp 0x59c55e5

bool PatreonEffects_NameEffectController__TryPopFaceBounds
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               UnityEngine_Camera_o *camera,float *minX,float *maxX,MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  TMPro_TMP_CharacterInfo_array *pTVar13;
  TMPro_TMP_MeshInfo_array *pTVar14;
  TMPro_TMP_Text_o *pTVar15;
  UnityEngine_Vector2_o UVar16;
  UnityEngine_Vector3_array *pUVar17;
  uint uVar18;
  uint uVar19;
  UnityEngine_Transform_o *pUVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Mesh_o *local_88;
  undefined8 uStack_80;
  UnityEngine_Vector3_array *local_78;
  UnityEngine_Vector3_array *pUStack_70;
  UnityEngine_Vector4_array *local_68;
  UnityEngine_Vector4_array *pUStack_60;
  UnityEngine_Vector2_array *local_58;
  UnityEngine_Color32_array *pUStack_50;
  System_Int32_array *local_48;
  UnityEngine_Material_o *pUStack_40;
  
  if (Il2CppMethodInitialized_07545bf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_07545bf9 = '\x01';
  }
  local_48 = (System_Int32_array *)0x0;
  pUStack_40 = (UnityEngine_Material_o *)0x0;
  local_58 = (UnityEngine_Vector2_array *)0x0;
  pUStack_50 = (UnityEngine_Color32_array *)0x0;
  local_68 = (UnityEngine_Vector4_array *)0x0;
  pUStack_60 = (UnityEngine_Vector4_array *)0x0;
  local_78 = (UnityEngine_Vector3_array *)0x0;
  pUStack_70 = (UnityEngine_Vector3_array *)0x0;
  local_88 = (UnityEngine_Mesh_o *)0x0;
  uStack_80 = 0;
  *minX = INFINITY;
  *maxX = -INFINITY;
  if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
  }
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     (pTVar13 = (textInfo->fields).characterInfo, pTVar13 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
    uVar19 = (textInfo->fields).characterCount;
    uVar18 = (uint)pTVar13->max_length;
    if ((int)uVar19 < (int)uVar18) {
      uVar18 = uVar19;
    }
    if (0 < (int)uVar18) {
      lVar24 = 0x50;
      uVar22 = 0;
      do {
        pTVar13 = (textInfo->fields).characterInfo;
        if (pTVar13 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_059c5610;
        if ((uint)pTVar13->max_length <= uVar22) goto label_059c560b;
        if ((*(byte *)((long)(&pTVar13->m_Items[0].fields.color + -8) + lVar24) & 1) != 0) {
          uVar19 = *(uint *)((long)(&pTVar13->m_Items[0].fields.vertex_BL.fields.color + -0x23) + lVar24);
          uVar23 = *(uint *)((long)(&pTVar13->m_Items[0].fields.vertex_BL.fields.color + -0x1e) + lVar24);
          if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
          }
          local_48 = (System_Int32_array *)0x0;
          pUStack_40 = (UnityEngine_Material_o *)0x0;
          local_58 = (UnityEngine_Vector2_array *)0x0;
          pUStack_50 = (UnityEngine_Color32_array *)0x0;
          local_68 = (UnityEngine_Vector4_array *)0x0;
          pUStack_60 = (UnityEngine_Vector4_array *)0x0;
          local_78 = (UnityEngine_Vector3_array *)0x0;
          pUStack_70 = (UnityEngine_Vector3_array *)0x0;
          local_88 = (UnityEngine_Mesh_o *)0x0;
          uStack_80 = 0;
          if (((-1 < (int)uVar19) &&
              (pTVar14 = (textInfo->fields).meshInfo, pTVar14 != (TMPro_TMP_MeshInfo_array *)0x0)) &&
             (uVar21 = (uint)pTVar14->max_length, (int)uVar19 < (int)uVar21)) {
            if (uVar21 <= uVar19) goto label_059c560b;
            local_88 = pTVar14->m_Items[uVar19].fields.mesh;
            uStack_80 = *(undefined8 *)&pTVar14->m_Items[uVar19].fields.vertexCount;
            ppUVar1 = &pTVar14->m_Items[uVar19].fields.vertices;
            local_78 = *ppUVar1;
            pUStack_70 = ppUVar1[1];
            ppUVar2 = &pTVar14->m_Items[uVar19].fields.tangents;
            local_68 = *ppUVar2;
            pUStack_60 = ppUVar2[1];
            ppUVar3 = &pTVar14->m_Items[uVar19].fields.uvs2;
            local_58 = *ppUVar3;
            pUStack_50 = (UnityEngine_Color32_array *)ppUVar3[1];
            ppSVar4 = &pTVar14->m_Items[uVar19].fields.triangles;
            local_48 = *ppSVar4;
            pUStack_40 = (UnityEngine_Material_o *)ppSVar4[1];
            Il2CppCodeGenWriteBarrier(&local_88);
            pUVar17 = local_78;
            if (local_78 != (UnityEngine_Vector3_array *)0x0) {
              uVar19 = (uint)local_78->max_length;
              uVar21 = uVar23 + 3;
              if ((int)uVar21 < (int)uVar19) {
                if (uVar19 <= uVar23) {
label_059c560b:
                  ThrowIndexOutOfRangeException();
                }
                uVar5 = local_78->m_Items[(int)uVar23].fields.x;
                uVar9 = local_78->m_Items[(int)uVar23].fields.y;
                UVar27.fields.y = (float)uVar9;
                UVar27.fields.x = (float)uVar5;
                fVar26 = local_78->m_Items[(int)uVar23].fields.z;
                if (Il2CppMethodInitialized_07545bfb == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
                  Il2CppMethodInitialized_07545bfb = '\x01';
                }
                pTVar15 = (__this->fields).text;
                if ((pTVar15 == (TMPro_TMP_Text_o *)0x0) ||
                   (pUVar20 = TMPro_TMP_Text__get_transform(pTVar15,(MethodInfo *)0x0),
                   pUVar20 == (UnityEngine_Transform_o *)0x0)) {
label_059c5610:
                  ThrowNullReferenceException();
                }
                UVar27.fields.z = fVar26;
                UVar27 = UnityEngine_Transform__TransformPoint(pUVar20,UVar27,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                }
                UVar16 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,UVar27,(MethodInfo *)0x0)
                ;
                fVar25 = UVar16.fields.x;
                fVar26 = *minX;
                if (fVar25 <= *minX) {
                  fVar26 = fVar25;
                }
                *minX = fVar26;
                fVar26 = *maxX;
                if (*maxX <= fVar25) {
                  fVar26 = fVar25;
                }
                *maxX = fVar26;
                uVar19 = uVar23 + 1;
                if ((uint)pUVar17->max_length <= uVar19) goto label_059c560b;
                uVar6 = pUVar17->m_Items[(int)uVar19].fields.x;
                uVar10 = pUVar17->m_Items[(int)uVar19].fields.y;
                position.fields.y = (float)uVar10;
                position.fields.x = (float)uVar6;
                fVar26 = pUVar17->m_Items[(int)uVar19].fields.z;
                if (Il2CppMethodInitialized_07545bfb == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
                  Il2CppMethodInitialized_07545bfb = '\x01';
                }
                pTVar15 = (__this->fields).text;
                if ((pTVar15 == (TMPro_TMP_Text_o *)0x0) ||
                   (pUVar20 = TMPro_TMP_Text__get_transform(pTVar15,(MethodInfo *)0x0),
                   pUVar20 == (UnityEngine_Transform_o *)0x0)) goto label_059c5610;
                position.fields.z = fVar26;
                UVar27 = UnityEngine_Transform__TransformPoint(pUVar20,position,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                }
                UVar16 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,UVar27,(MethodInfo *)0x0)
                ;
                fVar25 = UVar16.fields.x;
                fVar26 = *minX;
                if (fVar25 <= *minX) {
                  fVar26 = fVar25;
                }
                *minX = fVar26;
                fVar26 = *maxX;
                if (*maxX <= fVar25) {
                  fVar26 = fVar25;
                }
                *maxX = fVar26;
                uVar23 = uVar23 + 2;
                if ((uint)pUVar17->max_length <= uVar23) goto label_059c560b;
                uVar7 = pUVar17->m_Items[(int)uVar23].fields.x;
                uVar11 = pUVar17->m_Items[(int)uVar23].fields.y;
                position_00.fields.y = (float)uVar11;
                position_00.fields.x = (float)uVar7;
                fVar26 = pUVar17->m_Items[(int)uVar23].fields.z;
                if (Il2CppMethodInitialized_07545bfb == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
                  Il2CppMethodInitialized_07545bfb = '\x01';
                }
                pTVar15 = (__this->fields).text;
                if ((pTVar15 == (TMPro_TMP_Text_o *)0x0) ||
                   (pUVar20 = TMPro_TMP_Text__get_transform(pTVar15,(MethodInfo *)0x0),
                   pUVar20 == (UnityEngine_Transform_o *)0x0)) goto label_059c5610;
                position_00.fields.z = fVar26;
                UVar27 = UnityEngine_Transform__TransformPoint(pUVar20,position_00,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                }
                UVar16 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,UVar27,(MethodInfo *)0x0)
                ;
                fVar25 = UVar16.fields.x;
                fVar26 = *minX;
                if (fVar25 <= *minX) {
                  fVar26 = fVar25;
                }
                *minX = fVar26;
                fVar26 = *maxX;
                if (*maxX <= fVar25) {
                  fVar26 = fVar25;
                }
                *maxX = fVar26;
                if ((uint)pUVar17->max_length <= uVar21) goto label_059c560b;
                uVar8 = pUVar17->m_Items[(int)uVar21].fields.x;
                uVar12 = pUVar17->m_Items[(int)uVar21].fields.y;
                position_01.fields.y = (float)uVar12;
                position_01.fields.x = (float)uVar8;
                fVar26 = pUVar17->m_Items[(int)uVar21].fields.z;
                if (Il2CppMethodInitialized_07545bfb == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
                  Il2CppMethodInitialized_07545bfb = '\x01';
                }
                pTVar15 = (__this->fields).text;
                if ((pTVar15 == (TMPro_TMP_Text_o *)0x0) ||
                   (pUVar20 = TMPro_TMP_Text__get_transform(pTVar15,(MethodInfo *)0x0),
                   pUVar20 == (UnityEngine_Transform_o *)0x0)) goto label_059c5610;
                position_01.fields.z = fVar26;
                UVar27 = UnityEngine_Transform__TransformPoint(pUVar20,position_01,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                }
                UVar16 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,UVar27,(MethodInfo *)0x0)
                ;
                fVar25 = UVar16.fields.x;
                fVar26 = *minX;
                if (fVar25 <= *minX) {
                  fVar26 = fVar25;
                }
                *minX = fVar26;
                fVar26 = *maxX;
                if (*maxX <= fVar25) {
                  fVar26 = fVar25;
                }
                *maxX = fVar26;
              }
            }
          }
        }
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 0x178;
      } while (uVar18 != uVar22);
    }
  }
  return *minX <= *maxX && *maxX != *minX;
}


// PatreonEffects.NameEffectController$$PopCamera
// il2cpp: UnityEngine_Camera_o* PatreonEffects_NameEffectController__PopCamera (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c4f90

UnityEngine_Camera_o *
PatreonEffects_NameEffectController__PopCamera
          (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_Camera_o *pUVar3;
  
  if (Il2CppMethodInitialized_07545bfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bfa = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (__this_00 == (TMPro_TMP_Text_o *)0x0) {
label_059c506b:
    ThrowNullReferenceException();
  }
  __this_01 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                        ((UnityEngine_Component_o *)__this_00,
                         (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (__this_01 == (UnityEngine_Canvas_o *)0x0) goto label_059c506b;
    iVar2 = UnityEngine_Canvas__get_renderMode(__this_01,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      pUVar3 = UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar3 = UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
        return pUVar3;
      }
      pUVar3 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
      return pUVar3;
    }
  }
  return (UnityEngine_Camera_o *)0x0;
}


// PatreonEffects.NameEffectController$$ScreenX
// il2cpp: float PatreonEffects_NameEffectController__ScreenX (PatreonEffects_NameEffectController_o* __this, UnityEngine_Vector3_o localVertex, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x59c5620

float PatreonEffects_NameEffectController__ScreenX
                (PatreonEffects_NameEffectController_o *__this,UnityEngine_Vector3_o localVertex,
                UnityEngine_Camera_o *camera,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o worldPoint;
  
  if (Il2CppMethodInitialized_07545bfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07545bfb = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    __this_01 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      worldPoint = UnityEngine_Transform__TransformPoint(__this_01,localVertex,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      UVar1 = UnityEngine_RectTransformUtility__WorldToScreenPoint(camera,worldPoint,(MethodInfo *)0x0);
      return UVar1.fields.x;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$.ctor
// il2cpp: void PatreonEffects_NameEffectController___ctor (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x59c5760

void PatreonEffects_NameEffectController___ctor
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  (__this->fields).effect = 1;
  (__this->fields).popFaceA.fields.r = 1.0;
  (__this->fields).popFaceA.fields.g = 1.0;
  (__this->fields).popFaceA.fields.b = 1.0;
  (__this->fields).popFaceA.fields.a = 1.0;
  (__this->fields).popFaceB.fields.r = 1.0;
  (__this->fields).popFaceB.fields.g = 1.0;
  (__this->fields).popFaceB.fields.b = 1.0;
  (__this->fields).popFaceB.fields.a = 1.0;
  (__this->fields).popFaceC.fields.r = 1.0;
  (__this->fields).popFaceC.fields.g = 1.0;
  (__this->fields).popFaceC.fields.b = 1.0;
  (__this->fields).popFaceC.fields.a = 1.0;
  (__this->fields).popShadowColor.fields.r = 0.0;
  (__this->fields).popShadowColor.fields.g = 0.0;
  (__this->fields).popShadowColor.fields.b = 0.0;
  (__this->fields).popShadowColor.fields.a = 1.0;
  (__this->fields).popExtrusionColor.fields.r = 1.0;
  (__this->fields).popExtrusionColor.fields.g = 0.0;
  (__this->fields).popExtrusionColor.fields.b = 1.0;
  (__this->fields).popExtrusionColor.fields.a = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$.cctor
// il2cpp: void PatreonEffects_NameEffectController___cctor (const MethodInfo* method);
// 0x59c57b0

void PatreonEffects_NameEffectController___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07545bfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&"_GradientA");
    il2cpp_codegen_initialize_runtime_metadata(&"_FaceColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_GradientB");
    il2cpp_codegen_initialize_runtime_metadata(&"_GradientC");
    il2cpp_codegen_initialize_runtime_metadata(&"_EffectMode");
    il2cpp_codegen_initialize_runtime_metadata(&"_EffectGradientScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_ScanlineDensity");
    il2cpp_codegen_initialize_runtime_metadata(&"_GradientD");
    il2cpp_codegen_initialize_runtime_metadata(&"_ScanlineStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_Softness");
    il2cpp_codegen_initialize_runtime_metadata(&"_FlickerSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_GradientSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_FlickerStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_ScanlineSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_Glow");
    Il2CppMethodInitialized_07545bfc = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_FaceColor",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->FaceColor_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientA",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientA_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientB",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientB_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientC",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientC_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientD",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientD_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_EffectGradientScale",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->EffectGradientScale_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientSpeed",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientSpeed_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_EffectMode",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->EffectMode_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Glow",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->Glow_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineStrength",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->ScanlineStrength_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineDensity",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->ScanlineDensity_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineSpeed",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->ScanlineSpeed_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_FlickerStrength",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->FlickerStrength_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_FlickerSpeed",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->FlickerSpeed_ID = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Softness",(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_NameEffectController->static_fields->Softness_ID = iVar1;
  return;
}


