// Type: PatreonEffects.NameEffectController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectController.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectController$$Awake
// il2cpp: void PatreonEffects_NameEffectController__Awake (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c5f90

void
PatreonEffects_NameEffectController__Awake(PatreonEffects_NameEffectController_o* __this, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).cleared = false;
    bVar1 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).runtimeMat,(void *)0x0);
      (__this->fields).initialized = false;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$AutoConfigure
// il2cpp: void PatreonEffects_NameEffectController__AutoConfigure (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c5f90

void PatreonEffects_NameEffectController__AutoConfigure
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).cleared = false;
    bVar1 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).runtimeMat,(void *)0x0);
      (__this->fields).initialized = false;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$RefreshOriginalMaterial
// il2cpp: bool PatreonEffects_NameEffectController__RefreshOriginalMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c70a0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c7264: mov rdx, qword ptr [rdx + 0x100]
// asm:   0x1820c726b: lea rcx, [rbx + 0x38]
// asm:   0x1820c726f: mov qword ptr [rbx + 0x38], rdx
// asm:   0x1820c7273: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820c7278: mov al, 1
// asm:   0x1820c727a: jmp 0x1820c71ce

bool PatreonEffects_NameEffectController__RefreshOriginalMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  TMPro_TMP_FontAsset_o *y;
  UnityEngine_Material_o *pUVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UnityEngine_UI_Scrollbar_ScrollEvent_o *pUVar7;
  
  if (Il2CppMethodInitialized_18434694e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434694e = '\x01';
  }
  pTVar1 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return false;
  }
  pTVar1 = (__this->fields).text;
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    pTVar2 = (__this->fields).originalFontAsset;
    y = (pTVar1->fields).m_fontAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)(__this->fields).runtimeMat,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar5) {
      pTVar1 = (__this->fields).text;
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto label_1820c728c;
      pUVar7 = (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                         (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
      pUVar3 = (__this->fields).runtimeMat;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    }
    else {
      bVar5 = false;
    }
    pUVar3 = (__this->fields).originalFontMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar6 && bVar5 == false) && !bVar4) {
      return false;
    }
    pTVar1 = (__this->fields).text;
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      pTVar2 = (pTVar1->fields).m_fontAsset;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pTVar1 = (__this->fields).text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        if (bVar4) {
          pTVar2 = (pTVar1->fields).m_fontAsset;
          if (pTVar2 == (TMPro_TMP_FontAsset_o *)0x0) goto label_1820c728c;
          pUVar7 = (UnityEngine_UI_Scrollbar_ScrollEvent_o *)(pTVar2->fields).m_Material;
        }
        else {
          pUVar7 = (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                             (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
        }
        (__this->fields).originalFontMaterial = (UnityEngine_Material_o *)pUVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).originalFontMaterial,pUVar7);
        pTVar1 = (__this->fields).text;
        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
          pTVar2 = (pTVar1->fields).m_fontAsset;
          (__this->fields).originalFontAsset = pTVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).originalFontAsset,pTVar2);
          return true;
        }
      }
    }
  }
label_1820c728c:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$EnsureShaderMaterial
// il2cpp: void PatreonEffects_NameEffectController__EnsureShaderMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6a70

void PatreonEffects_NameEffectController__EnsureShaderMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_18434694f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Could not find shader: TextMeshPro/NameFX_Master");
    il2cpp_codegen_initialize_runtime_metadata(&"TextMeshPro/NameFX_Master");
    Il2CppMethodInitialized_18434694f = '\x01';
  }
  bVar2 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)0x0);
  if (bVar2) {
    (__this->fields).cleared = false;
    bVar2 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)0x0);
    if (bVar2) {
      (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).runtimeMat,(void *)0x0);
      (__this->fields).initialized = false;
    }
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
      pUVar3 = UnityEngine_Object__Instantiate_object__746ba0
                         ((Il2CppObject *)pUVar3,
                          (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_Material);
      (__this->fields).runtimeMat = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).runtimeMat,pUVar3);
      x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar3 = (__this->fields).runtimeMat;
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
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)"Could not find shader: TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$Apply
// il2cpp: void PatreonEffects_NameEffectController__Apply (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x1820c5930

void PatreonEffects_NameEffectController__Apply
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Material_o *pUVar2;
  TMPro_TMP_Text_o *pTVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  TMPro_TMP_TextInfo_o *textInfo;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346950 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346950 = '\x01';
  }
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    if ((settings->fields).effectMode == 1) {
      PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)0x0);
      bVar6 = (__this->fields).outlineActive;
      (__this->fields).outlineActive = false;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)0x0);
      if (bVar6 != false) {
        PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
      }
      if (Il2CppMethodInitialized_184346953 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"PopExtrusion");
        il2cpp_codegen_initialize_runtime_metadata(&"PopShadow");
        Il2CppMethodInitialized_184346953 = '\x01';
      }
      bVar6 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)0x0);
      if (bVar6) {
        (__this->fields).cleared = false;
        PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
        local_18.r = (settings->fields).gradientD.fields.r;
        local_18.g = (settings->fields).gradientD.fields.g;
        local_18.b = (settings->fields).gradientD.fields.b;
        local_18.a = (settings->fields).gradientD.fields.a;
        PatreonEffects_NameEffectController__EnsurePopLayer
                  (__this,&(__this->fields).popExtrusionText,"PopExtrusion",
                   (UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        local_18.r = (settings->fields).gradientC.fields.r;
        local_18.g = (settings->fields).gradientC.fields.g;
        local_18.b = (settings->fields).gradientC.fields.b;
        local_18.a = (settings->fields).gradientC.fields.a;
        PatreonEffects_NameEffectController__EnsurePopLayer
                  (__this,&(__this->fields).popShadowText,"PopShadow",
                   (UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        fVar1 = (settings->fields).gradientA.fields.g;
        fVar4 = (settings->fields).gradientA.fields.b;
        fVar5 = (settings->fields).gradientA.fields.a;
        (__this->fields).popFaceA.fields.r = (settings->fields).gradientA.fields.r;
        (__this->fields).popFaceA.fields.g = fVar1;
        (__this->fields).popFaceA.fields.b = fVar4;
        (__this->fields).popFaceA.fields.a = fVar5;
        fVar1 = (settings->fields).gradientB.fields.g;
        fVar4 = (settings->fields).gradientB.fields.b;
        fVar5 = (settings->fields).gradientB.fields.a;
        (__this->fields).popFaceB.fields.r = (settings->fields).gradientB.fields.r;
        (__this->fields).popFaceB.fields.g = fVar1;
        (__this->fields).popFaceB.fields.b = fVar4;
        (__this->fields).popFaceB.fields.a = fVar5;
        fVar1 = (settings->fields).gradientB.fields.g;
        fVar4 = (settings->fields).gradientB.fields.b;
        fVar5 = (settings->fields).gradientB.fields.a;
        (__this->fields).popFaceC.fields.r = (settings->fields).gradientB.fields.r;
        (__this->fields).popFaceC.fields.g = fVar1;
        (__this->fields).popFaceC.fields.b = fVar4;
        (__this->fields).popFaceC.fields.a = fVar5;
        fVar1 = (settings->fields).gradientC.fields.g;
        fVar4 = (settings->fields).gradientC.fields.b;
        fVar5 = (settings->fields).gradientC.fields.a;
        (__this->fields).popShadowColor.fields.r = (settings->fields).gradientC.fields.r;
        (__this->fields).popShadowColor.fields.g = fVar1;
        (__this->fields).popShadowColor.fields.b = fVar4;
        (__this->fields).popShadowColor.fields.a = fVar5;
        fVar1 = (settings->fields).gradientD.fields.g;
        fVar4 = (settings->fields).gradientD.fields.b;
        fVar5 = (settings->fields).gradientD.fields.a;
        (__this->fields).popExtrusionColor.fields.r = (settings->fields).gradientD.fields.r;
        (__this->fields).popExtrusionColor.fields.g = fVar1;
        (__this->fields).popExtrusionColor.fields.b = fVar4;
        (__this->fields).popExtrusionColor.fields.a = fVar5;
        fVar1 = (settings->fields).popShadowOffset.fields.x;
        (__this->fields).popShadowOffset.fields.y = (settings->fields).popShadowOffset.fields.y;
        (__this->fields).popShadowOffset.fields.x = fVar1;
        fVar1 = (settings->fields).popExtrusionOffset.fields.x;
        (__this->fields).popExtrusionOffset.fields.y = (settings->fields).popExtrusionOffset.fields.y;
        (__this->fields).popExtrusionOffset.fields.x = fVar1;
        (__this->fields).popActive = true;
        PatreonEffects_NameEffectController__HookPopGradient(__this,(MethodInfo *)0x0);
        PatreonEffects_NameEffectController__SyncPopLayers(__this,(MethodInfo *)0x0);
        pTVar3 = (__this->fields).text;
        if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
          local_18.r = 1.0;
          local_18.g = 1.0;
          local_18.b = 1.0;
          local_18.a = 1.0;
          (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
                    (pTVar3,(UnityEngine_Color_o *)&local_18,(pTVar3->klass->vtable)._23_set_color.method);
          pTVar3 = (__this->fields).text;
          if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
            (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                      (pTVar3,(System_Type_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_1820c5f88;
      }
    }
    else {
      if ((settings->fields).effectMode == 6) {
        PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)0x0);
        PatreonEffects_NameEffectController__ClearPop(__this,(MethodInfo *)0x0);
        PatreonEffects_NameEffectController__ApplyOutline(__this,settings,(MethodInfo *)0x0);
        return;
      }
      PatreonEffects_NameEffectController__ClearPop(__this,(MethodInfo *)0x0);
      bVar6 = (__this->fields).outlineActive;
      (__this->fields).outlineActive = false;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)0x0);
      if (bVar6 != false) {
        PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
      }
      PatreonEffects_NameEffectController__EnsureShaderMaterial(__this,(MethodInfo *)0x0);
      if ((__this->fields).initialized != false) {
        pUVar2 = (__this->fields).runtimeMat;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar6) {
          pUVar2 = (__this->fields).runtimeMat;
          if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
          }
          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
            local_18.r = 1.0;
            local_18.g = 1.0;
            local_18.b = 1.0;
            local_18.a = 1.0;
            UnityEngine_Material__SetVector_2ee31b0
                      (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->FaceColor_ID,
                       (UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).runtimeMat;
            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
              local_18.r = (settings->fields).gradientA.fields.r;
              local_18.g = (settings->fields).gradientA.fields.g;
              local_18.b = (settings->fields).gradientA.fields.b;
              local_18.a = (settings->fields).gradientA.fields.a;
              UnityEngine_Material__SetVector_2ee31b0
                        (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientA_ID,
                         (UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).runtimeMat;
              if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                local_18.r = (settings->fields).gradientB.fields.r;
                local_18.g = (settings->fields).gradientB.fields.g;
                local_18.b = (settings->fields).gradientB.fields.b;
                local_18.a = (settings->fields).gradientB.fields.a;
                UnityEngine_Material__SetVector_2ee31b0
                          (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientB_ID,
                           (UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
                pUVar2 = (__this->fields).runtimeMat;
                if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                  local_18.r = (settings->fields).gradientC.fields.r;
                  local_18.g = (settings->fields).gradientC.fields.g;
                  local_18.b = (settings->fields).gradientC.fields.b;
                  local_18.a = (settings->fields).gradientC.fields.a;
                  UnityEngine_Material__SetVector_2ee31b0
                            (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->GradientC_ID,
                             (UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields).runtimeMat;
                  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                    local_18.r = (settings->fields).gradientD.fields.r;
                    local_18.g = (settings->fields).gradientD.fields.g;
                    local_18.b = (settings->fields).gradientD.fields.b;
                    local_18.a = (settings->fields).gradientD.fields.a;
                    UnityEngine_Material__SetVector_2ee31b0
                              (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                      GradientD_ID,(UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields).runtimeMat;
                    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetFloat_2ee3980
                                (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                        EffectGradientScale_ID,(settings->fields).gradientScale,
                                 (MethodInfo *)0x0);
                      pUVar2 = (__this->fields).runtimeMat;
                      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                        UnityEngine_Material__SetFloat_2ee3980
                                  (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                          GradientSpeed_ID,(settings->fields).gradientSpeed,(MethodInfo *)0x0)
                        ;
                        pUVar2 = (__this->fields).runtimeMat;
                        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                          UnityEngine_Material__SetFloat_2ee3980
                                    (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                            EffectMode_ID,(float)(settings->fields).effectMode,
                                     (MethodInfo *)0x0);
                          pUVar2 = (__this->fields).runtimeMat;
                          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                            UnityEngine_Material__SetFloat_2ee3980
                                      (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                              Glow_ID,(settings->fields).glow,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields).runtimeMat;
                            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                              UnityEngine_Material__SetFloat_2ee3980
                                        (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields->
                                                ScanlineStrength_ID,(settings->fields).scanlineStrength,
                                         (MethodInfo *)0x0);
                              pUVar2 = (__this->fields).runtimeMat;
                              if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                UnityEngine_Material__SetFloat_2ee3980
                                          (pUVar2,TypeInfo_PatreonEffects_NameEffectController->static_fields
                                                  ->ScanlineDensity_ID,(settings->fields).scanlineDensity,
                                           (MethodInfo *)0x0);
                                pUVar2 = (__this->fields).runtimeMat;
                                if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                  UnityEngine_Material__SetFloat_2ee3980
                                            (pUVar2,TypeInfo_PatreonEffects_NameEffectController->
                                                    static_fields->ScanlineSpeed_ID,
                                             (settings->fields).scanlineSpeed,(MethodInfo *)0x0);
                                  pUVar2 = (__this->fields).runtimeMat;
                                  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                    UnityEngine_Material__SetFloat_2ee3980
                                              (pUVar2,TypeInfo_PatreonEffects_NameEffectController->
                                                      static_fields->FlickerStrength_ID,
                                               (settings->fields).flickerStrength,(MethodInfo *)0x0);
                                    pUVar2 = (__this->fields).runtimeMat;
                                    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                      UnityEngine_Material__SetFloat_2ee3980
                                                (pUVar2,TypeInfo_PatreonEffects_NameEffectController->
                                                        static_fields->FlickerSpeed_ID,
                                                 (settings->fields).flickerSpeed,(MethodInfo *)0x0);
                                      pUVar2 = (__this->fields).runtimeMat;
                                      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                                        UnityEngine_Material__SetFloat_2ee3980
                                                  (pUVar2,TypeInfo_PatreonEffects_NameEffectController->
                                                          static_fields->Softness_ID,
                                                   (settings->fields).softness,(MethodInfo *)0x0);
                                        if (Il2CppMethodInitialized_18434695c == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_System_Action_TMP_TextInfo);
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&
                                                     MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData
                                                    );
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_UnityEngine_Object);
                                          Il2CppMethodInitialized_18434695c = '\x01';
                                        }
                                        if ((__this->fields).effectVertexDataHooked == false) {
                                          pTVar3 = (__this->fields).text;
                                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor ==
                                              0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                          }
                                          bVar6 = UnityEngine_Object__op_Equality
                                                            ((UnityEngine_Object_o *)pTVar3,
                                                             (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                          if (!bVar6) {
                                            pTVar3 = (__this->fields).text;
                                            __this_00 = (
                                                       UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o
                                                       *)il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_System_Action_TMP_TextInfo);
                                            System_Action_object____ctor
                                                      (__this_00,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData
                                                       ,(MethodInfo *)0x0);
                                            if (pTVar3 == (TMPro_TMP_Text_o *)0x0) goto label_1820c5f88;
                                            (*(pTVar3->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                                                      (pTVar3,(System_Action_TMP_TextInfo__o *)__this_00,
                                                       (pTVar3->klass->vtable)._78_add_OnPreRenderText.method)
                                            ;
                                            (__this->fields).effectVertexDataHooked = true;
                                          }
                                        }
                                        pTVar3 = (__this->fields).text;
                                        if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                                          (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                                                    (pTVar3,(System_Type_o *)0x0,(MethodInfo *)0x0);
                                          pTVar3 = (__this->fields).text;
                                          if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                                            textInfo = TMPro_TMP_Text__get_textInfo(pTVar3,(MethodInfo *)0x0);
                                            PatreonEffects_NameEffectController__UpdateEffectVertexData
                                                      (__this,textInfo,(MethodInfo *)0x0);
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
label_1820c5f88:
          ThrowNullReferenceException();
        }
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$Clear
// il2cpp: void PatreonEffects_NameEffectController__Clear (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c63d0

void PatreonEffects_NameEffectController__Clear
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_Text_o *pTVar2;
  
  if (Il2CppMethodInitialized_184346951 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346951 = '\x01';
  }
  if ((__this->fields).cleared == false) {
    pTVar2 = (__this->fields).text;
    (__this->fields).cleared = true;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pTVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
      (__this->fields).text = pTVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).text,pTVar2);
    }
    PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18434695a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
      Il2CppMethodInitialized_18434695a = '\x01';
    }
    (__this->fields).popActive = false;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
    }
    PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popShadowText,(MethodInfo *)0x0);
    PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popExtrusionText,(MethodInfo *)0x0)
    ;
    bVar1 = (__this->fields).outlineActive;
    (__this->fields).outlineActive = false;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)0x0);
    if (bVar1 != false) {
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
    }
    PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)0x0);
    PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
    (__this->fields).initialized = false;
  }
  return;
}


// PatreonEffects.NameEffectController$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectController__OnDestroy (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6f60

void PatreonEffects_NameEffectController__OnDestroy
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController__Clear(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$ApplyHolographic
// il2cpp: void PatreonEffects_NameEffectController__ApplyHolographic (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c4e20

void PatreonEffects_NameEffectController__ApplyHolographic
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this_00;
  
  if (Il2CppMethodInitialized_184346969 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_184346969 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this_00,(MethodInfo *)0x0);
  PatreonEffects_NameEffectController__Apply(__this,__this_00,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$FindText
// il2cpp: bool PatreonEffects_NameEffectController__FindText (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6c60

bool PatreonEffects_NameEffectController__FindText
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346952 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"[NameEffectController] No TMP_Text found on ");
    Il2CppMethodInitialized_184346952 = '\x01';
  }
  pTVar2 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields).text = pTVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text,pTVar2);
  }
  pTVar2 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("[NameEffectController] No TMP_Text found on ",pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      return false;
    }
    ThrowNullReferenceException();
  }
  return true;
}


// PatreonEffects.NameEffectController$$ApplyPop
// il2cpp: void PatreonEffects_NameEffectController__ApplyPop (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x1820c5580

void PatreonEffects_NameEffectController__ApplyPop
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  float fVar1;
  TMPro_TMP_Text_o *pTVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346953 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PopExtrusion");
    il2cpp_codegen_initialize_runtime_metadata(&"PopShadow");
    Il2CppMethodInitialized_184346953 = '\x01';
  }
  bVar5 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  (__this->fields).cleared = false;
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    local_18.r = (settings->fields).gradientD.fields.r;
    local_18.g = (settings->fields).gradientD.fields.g;
    local_18.b = (settings->fields).gradientD.fields.b;
    local_18.a = (settings->fields).gradientD.fields.a;
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,&(__this->fields).popExtrusionText,"PopExtrusion",
               (UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    local_18.r = (settings->fields).gradientC.fields.r;
    local_18.g = (settings->fields).gradientC.fields.g;
    local_18.b = (settings->fields).gradientC.fields.b;
    local_18.a = (settings->fields).gradientC.fields.a;
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,&(__this->fields).popShadowText,"PopShadow",(UnityEngine_Color_o *)&local_18,
               (MethodInfo *)0x0);
    fVar1 = (settings->fields).gradientA.fields.g;
    fVar3 = (settings->fields).gradientA.fields.b;
    fVar4 = (settings->fields).gradientA.fields.a;
    (__this->fields).popFaceA.fields.r = (settings->fields).gradientA.fields.r;
    (__this->fields).popFaceA.fields.g = fVar1;
    (__this->fields).popFaceA.fields.b = fVar3;
    (__this->fields).popFaceA.fields.a = fVar4;
    fVar1 = (settings->fields).gradientB.fields.g;
    fVar3 = (settings->fields).gradientB.fields.b;
    fVar4 = (settings->fields).gradientB.fields.a;
    (__this->fields).popFaceB.fields.r = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceB.fields.g = fVar1;
    (__this->fields).popFaceB.fields.b = fVar3;
    (__this->fields).popFaceB.fields.a = fVar4;
    fVar1 = (settings->fields).gradientB.fields.g;
    fVar3 = (settings->fields).gradientB.fields.b;
    fVar4 = (settings->fields).gradientB.fields.a;
    (__this->fields).popFaceC.fields.r = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceC.fields.g = fVar1;
    (__this->fields).popFaceC.fields.b = fVar3;
    (__this->fields).popFaceC.fields.a = fVar4;
    fVar1 = (settings->fields).gradientC.fields.g;
    fVar3 = (settings->fields).gradientC.fields.b;
    fVar4 = (settings->fields).gradientC.fields.a;
    (__this->fields).popShadowColor.fields.r = (settings->fields).gradientC.fields.r;
    (__this->fields).popShadowColor.fields.g = fVar1;
    (__this->fields).popShadowColor.fields.b = fVar3;
    (__this->fields).popShadowColor.fields.a = fVar4;
    fVar1 = (settings->fields).gradientD.fields.g;
    fVar3 = (settings->fields).gradientD.fields.b;
    fVar4 = (settings->fields).gradientD.fields.a;
    (__this->fields).popExtrusionColor.fields.r = (settings->fields).gradientD.fields.r;
    (__this->fields).popExtrusionColor.fields.g = fVar1;
    (__this->fields).popExtrusionColor.fields.b = fVar3;
    (__this->fields).popExtrusionColor.fields.a = fVar4;
    fVar1 = (settings->fields).popShadowOffset.fields.x;
    (__this->fields).popShadowOffset.fields.y = (settings->fields).popShadowOffset.fields.y;
    (__this->fields).popShadowOffset.fields.x = fVar1;
    fVar1 = (settings->fields).popExtrusionOffset.fields.x;
    (__this->fields).popExtrusionOffset.fields.y = (settings->fields).popExtrusionOffset.fields.y;
    (__this->fields).popExtrusionOffset.fields.x = fVar1;
    (__this->fields).popActive = true;
    PatreonEffects_NameEffectController__HookPopGradient(__this,(MethodInfo *)0x0);
    PatreonEffects_NameEffectController__SyncPopLayers(__this,(MethodInfo *)0x0);
    pTVar2 = (__this->fields).text;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      local_18.r = 1.0;
      local_18.g = 1.0;
      local_18.b = 1.0;
      local_18.a = 1.0;
      (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                (pTVar2,(UnityEngine_Color_o *)&local_18,(pTVar2->klass->vtable)._23_set_color.method);
      pTVar2 = (__this->fields).text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$LateUpdate
// il2cpp: void PatreonEffects_NameEffectController__LateUpdate (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6f50

void PatreonEffects_NameEffectController__LateUpdate
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  if ((__this->fields).popActive != false) {
    PatreonEffects_NameEffectController__SyncPopLayers(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectController$$EnsurePopLayer
// il2cpp: void PatreonEffects_NameEffectController__EnsurePopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o** layer, System_String_o* layerName, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1820c6600

void PatreonEffects_NameEffectController__EnsurePopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o **layer,
               System_String_o *layerName,UnityEngine_Color_o *color,MethodInfo *method)

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
  TMPro_TextMeshProUGUI_o *value;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184346954 == '\0') {
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
    Il2CppMethodInitialized_184346954 = '\x01';
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
    pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
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
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if ((pSVar4 != (System_Type_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar4;
        Il2CppCodeGenWriteBarrier(components->m_Items,pSVar4);
        pSVar4 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Type_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar4;
          Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar4);
          pSVar4 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
          if ((pSVar4 != (System_Type_o *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar4;
            Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar4);
            pSVar4 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                                (MethodInfo *)0x0);
            if ((pSVar4 != (System_Type_o *)0x0) &&
               (pIVar5 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
               pIVar5 == (Il2CppObject *)0x0)) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar4;
              Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar4);
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0(__this_00,layerName,components,(MethodInfo *)0x0);
              if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,pUVar3,false,(MethodInfo *)0x0);
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
                                      (MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar7->klass->vtable)._28_set_ignoreLayout.methodPtr)
                              (pUVar7,true,(pUVar7->klass->vtable)._28_set_ignoreLayout.method);
                    value = UnityEngine_GameObject__GetComponent_object_
                                      (__this_00,
                                       (MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                    *layer = (TMPro_TMP_Text_o *)value;
                    Il2CppCodeGenWriteBarrier(layer,value);
                    pTVar1 = *layer;
                    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                      (*(pTVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pTVar1,false,(pTVar1->klass->vtable)._25_set_raycastTarget.method);
                      pTVar1 = *layer;
                      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                        local_28.r = (color->fields).r;
                        local_28.g = (color->fields).g;
                        local_28.b = (color->fields).b;
                        local_28.a = (color->fields).a;
                        (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                                  (pTVar1,(UnityEngine_Color_o *)&local_28,
                                   (pTVar1->klass->vtable)._23_set_color.method);
                        pTVar1 = *layer;
                        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                          Il2CppMethodInitialized_18433e3c9 = '\x01';
                        }
                        local_28.r = (color->fields).r;
                        local_28.g = (color->fields).g;
                        local_28.b = (color->fields).b;
                        local_28.a = (color->fields).a;
                        PatreonEffects_NameEffectController__SyncPopLayer
                                  (__this,pTVar1,
                                   (UnityEngine_Vector2_o)
                                   (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                   (UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
              goto label_1820c6a17;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_1820c6a17:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$SyncPopLayers
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayers (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c79d0

void PatreonEffects_NameEffectController__SyncPopLayers
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  bool bVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346955 = '\x01';
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
    local_28[0].r = (__this->fields).popExtrusionColor.fields.r;
    local_28[0].g = (__this->fields).popExtrusionColor.fields.g;
    local_28[0].b = (__this->fields).popExtrusionColor.fields.b;
    local_28[0].a = (__this->fields).popExtrusionColor.fields.a;
    offset_00.fields.y = UVar1.y * fVar5;
    offset_00.fields.x = UVar1.x * fVar5;
    PatreonEffects_NameEffectController__SyncPopLayer
              (__this,(__this->fields).popExtrusionText,offset_00,(UnityEngine_Color_o *)local_28,
               (MethodInfo *)0x0);
    UVar1 = (__this->fields).popShadowOffset.fields;
    local_28[0].r = (__this->fields).popShadowColor.fields.r;
    local_28[0].g = (__this->fields).popShadowColor.fields.g;
    local_28[0].b = (__this->fields).popShadowColor.fields.b;
    local_28[0].a = (__this->fields).popShadowColor.fields.a;
    offset.fields.y = UVar1.y * fVar5;
    offset.fields.x = UVar1.x * fVar5;
    PatreonEffects_NameEffectController__SyncPopLayer
              (__this,(__this->fields).popShadowText,offset,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0)
    ;
  }
  return;
}


// PatreonEffects.NameEffectController$$ApplyOutline
// il2cpp: void PatreonEffects_NameEffectController__ApplyOutline (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x1820c4e80

void PatreonEffects_NameEffectController__ApplyOutline
               (PatreonEffects_NameEffectController_o *__this,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  TMPro_TMP_Text_o *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  UnityEngine_Material_o *__this_00;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346956 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" Outline Runtime");
    Il2CppMethodInitialized_184346956 = '\x01';
  }
  bVar7 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)0x0);
  if (bVar7) {
    (__this->fields).cleared = false;
    PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).originalFontMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
      if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
        fVar3 = (settings->fields).gradientA.fields.g;
        fVar4 = (settings->fields).gradientA.fields.b;
        fVar5 = (settings->fields).gradientA.fields.a;
        pUVar1 = (__this->fields).originalFontMaterial;
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
        fVar3 = (settings->fields).gradientC.fields.r;
        fVar4 = (settings->fields).gradientC.fields.g;
        fVar5 = (settings->fields).gradientC.fields.b;
        fVar6 = (settings->fields).gradientC.fields.a;
        (__this->fields).outlineActive = true;
        (__this->fields).popFaceC.fields.r = fVar3;
        (__this->fields).popFaceC.fields.g = fVar4;
        (__this->fields).popFaceC.fields.b = fVar5;
        (__this->fields).popFaceC.fields.a = fVar6;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor_2ee55e0(__this_00,pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).originalFontMaterial;
        if (pUVar1 != (UnityEngine_Material_o *)0x0) {
          pSVar8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat_1969e50(pSVar8," Outline Runtime",(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_00,pSVar8,(MethodInfo *)0x0);
            (__this->fields).runtimeMat = __this_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields).runtimeMat,__this_00);
            pUVar1 = (__this->fields).runtimeMat;
            if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
            }
            PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial(pUVar1,settings,(MethodInfo *)0x0);
            pTVar2 = (__this->fields).text;
            if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
              pMVar9 = (MethodInfo *)0x0;
              TMPro_TMP_Text__set_fontMaterial(pTVar2,(__this->fields).runtimeMat,(MethodInfo *)0x0);
              pTVar2 = (__this->fields).text;
              if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
                (*(pTVar2->klass->vtable)._111_UpdateMeshPadding.methodPtr)
                          (pTVar2,(System_Type_o *)(pTVar2->klass->vtable)._111_UpdateMeshPadding.method,
                           pMVar9);
                (__this->fields).initialized = true;
                PatreonEffects_NameEffectController__HookPopGradient(__this,(MethodInfo *)0x0);
                pTVar2 = (__this->fields).text;
                if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
                  local_18.r = 1.0;
                  local_18.g = 1.0;
                  local_18.b = 1.0;
                  local_18.a = 1.0;
                  (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                            (pTVar2,(UnityEngine_Color_o *)&local_18,
                             (pTVar2->klass->vtable)._23_set_color.method);
                  pTVar2 = (__this->fields).text;
                  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
                    (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                              (pTVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
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
// 0x1820c5710

void PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial
               (UnityEngine_Material_o *material,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  int32_t iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UnityEngine_Vector4_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346957 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_ShaderUtilities);
    Il2CppMethodInitialized_184346957 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
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
    bVar4 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
    if (bVar4) {
      local_28[0].x = 1.0;
      local_28[0].y = 1.0;
      local_28[0].z = 1.0;
      local_28[0].w = 1.0;
      UnityEngine_Material__SetVector_2ee31b0
                (material,iVar1,(UnityEngine_Vector4_o *)local_28,(MethodInfo *)0x0);
    }
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      uVar2._0_4_ = (settings->fields).gradientD.fields.r;
      uVar2._4_4_ = (settings->fields).gradientD.fields.g;
      uVar3._0_4_ = (settings->fields).gradientD.fields.b;
      uVar3._4_4_ = (settings->fields).gradientD.fields.a;
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_OutlineColor;
      bVar4 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar4) {
        local_28[0]._0_8_ = uVar2;
        local_28[0]._8_8_ = uVar3;
        UnityEngine_Material__SetVector_2ee31b0
                  (material,iVar1,(UnityEngine_Vector4_o *)local_28,(MethodInfo *)0x0);
      }
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_OutlineWidth;
      bVar4 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar4) {
        UnityEngine_Material__SetFloat_2ee3980(material,iVar1,0.16,(MethodInfo *)0x0);
      }
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_OutlineSoftness;
      bVar4 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar4) {
        UnityEngine_Material__SetFloat_2ee3980(material,iVar1,0.0,(MethodInfo *)0x0);
      }
      iVar1 = TypeInfo_TMPro_ShaderUtilities->static_fields->ID_FaceDilate;
      bVar4 = UnityEngine_Material__HasProperty(material,iVar1,(MethodInfo *)0x0);
      if (bVar4) {
        UnityEngine_Material__SetFloat_2ee3980(material,iVar1,0.02,(MethodInfo *)0x0);
      }
      TMPro_ShaderUtilities__UpdateShaderRatios(material,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$SetColorIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetColorIfPresent (UnityEngine_Material_o* material, int32_t propertyId, UnityEngine_Color_o value, const MethodInfo* method);
// 0x1820c7500

void PatreonEffects_NameEffectController__SetColorIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,UnityEngine_Color_o *value,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector4_Fields local_18;
  
  if (material != (UnityEngine_Material_o *)0x0) {
    bVar1 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
    if (bVar1) {
      local_18.x = (value->fields).r;
      local_18.y = (value->fields).g;
      local_18.z = (value->fields).b;
      local_18.w = (value->fields).a;
      UnityEngine_Material__SetVector_2ee31b0
                (material,propertyId,(UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$SetFloatIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetFloatIfPresent (UnityEngine_Material_o* material, int32_t propertyId, float value, const MethodInfo* method);
// 0x1820c7560

void PatreonEffects_NameEffectController__SetFloatIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,float value,MethodInfo *method)

{
  bool bVar1;
  
  if (material != (UnityEngine_Material_o *)0x0) {
    bVar1 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
    if (bVar1) {
      UnityEngine_Material__SetFloat_2ee3980(material,propertyId,value,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$PopOffsetScale
// il2cpp: float PatreonEffects_NameEffectController__PopOffsetScale (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c7060

float PatreonEffects_NameEffectController__PopOffsetScale
                (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  float fVar2;
  float fVar3;
  
  pTVar1 = (__this->fields).text;
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    fVar3 = (pTVar1->fields).m_fontSize / 48.0;
    fVar2 = 0.35;
    if (0.35 <= fVar3) {
      fVar2 = fVar3;
    }
    return fVar2;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$SyncPopLayer
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o* layer, UnityEngine_Vector2_o offset, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1820c75b0

void PatreonEffects_NameEffectController__SyncPopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o *layer,
               UnityEngine_Vector2_o offset,UnityEngine_Color_o *color,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Material_o *x;
  bool bVar2;
  int32_t value;
  System_String_o *pSVar3;
  UnityEngine_UI_Scrollbar_ScrollEvent_o *pUVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  float fStack_54;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184346958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346958 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)layer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pTVar1 = (__this->fields).text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pTVar1 = (__this->fields).text;
      if ((pTVar1 != (TMPro_TMP_Text_o *)0x0) &&
         (pSVar3 = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                             (pTVar1,(pTVar1->klass->vtable)._65_get_text.method),
         layer != (TMPro_TMP_Text_o *)0x0)) {
        (*(layer->klass->vtable)._66_set_text.methodPtr)
                  (layer,pSVar3,(layer->klass->vtable)._66_set_text.method);
        pTVar1 = (__this->fields).text;
        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
          TMPro_TMP_Text__set_font(layer,(pTVar1->fields).m_fontAsset,(MethodInfo *)0x0);
          x = (__this->fields).originalFontMaterial;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            pUVar4 = (UnityEngine_UI_Scrollbar_ScrollEvent_o *)(__this->fields).originalFontMaterial;
          }
          else {
            pTVar1 = (__this->fields).text;
            if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto label_1820c79c3;
            pUVar4 = (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                               (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
          }
          (*(layer->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                    (layer,(UnityEngine_Material_o *)pUVar4,
                     (layer->klass->vtable)._68_set_fontSharedMaterial.method);
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
                    bVar2 = TMPro_TMP_Text__get_enableWordWrapping(pTVar1,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping(layer,bVar2,(MethodInfo *)0x0);
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
                            local_38[0].r = (color->fields).r;
                            local_38[0].g = (color->fields).g;
                            local_38[0].b = (color->fields).b;
                            local_38[0].a = (color->fields).a;
                            (*(layer->klass->vtable)._23_set_color.methodPtr)
                                      (layer,(UnityEngine_Color_o *)local_38,
                                       (layer->klass->vtable)._23_set_color.method);
                            pTVar1 = (__this->fields).text;
                            if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                              __this_00 = TMPro_TMP_Text__get_rectTransform(pTVar1,(MethodInfo *)0x0);
                              __this_01 = TMPro_TMP_Text__get_rectTransform(layer,(MethodInfo *)0x0);
                              if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
                                 (UVar5 = UnityEngine_RectTransform__get_anchorMin
                                                    (__this_00,(MethodInfo *)0x0),
                                 __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                                UnityEngine_RectTransform__set_anchorMin(__this_01,UVar5,(MethodInfo *)0x0);
                                UVar5 = UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchorMax(__this_01,UVar5,(MethodInfo *)0x0);
                                UVar5 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_pivot(__this_01,UVar5,(MethodInfo *)0x0);
                                UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_sizeDelta(__this_01,UVar5,(MethodInfo *)0x0);
                                fStack_54 = offset.fields.y;
                                pUVar6 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                   ((UnityEngine_Vector3_o *)local_38,__this_00,
                                                    (MethodInfo *)0x0);
                                local_48.z = (pUVar6->fields).z + 0.0;
                                local_48.y = fStack_54 + (pUVar6->fields).y;
                                local_48.x = offset.fields.x + (pUVar6->fields).x;
                                UnityEngine_RectTransform__set_anchoredPosition3D
                                          (__this_01,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                                pUVar6 = UnityEngine_Transform__get_localScale
                                                   ((UnityEngine_Vector3_o *)local_38,
                                                    (UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
                                local_48.x = (pUVar6->fields).x;
                                local_48.y = (pUVar6->fields).y;
                                local_48.z = (pUVar6->fields).z;
                                UnityEngine_Transform__set_localScale
                                          ((UnityEngine_Transform_o *)__this_01,
                                           (UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                                pUVar7 = UnityEngine_Transform__get_localRotation
                                                   ((UnityEngine_Quaternion_o *)local_38,
                                                    (UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
                                local_38[0].r = (pUVar7->fields).x;
                                local_38[0].g = (pUVar7->fields).y;
                                local_38[0].b = (pUVar7->fields).z;
                                local_38[0].a = (pUVar7->fields).w;
                                UnityEngine_Transform__set_localRotation
                                          ((UnityEngine_Transform_o *)__this_01,
                                           (UnityEngine_Quaternion_o *)local_38,(MethodInfo *)0x0);
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
label_1820c79c3:
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$HookPopGradient
// il2cpp: void PatreonEffects_NameEffectController__HookPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6e70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c6f38: mov rdi, qword ptr [rsp + 0x38]

void PatreonEffects_NameEffectController__HookPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184346959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346959 = '\x01';
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
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient,
                 (MethodInfo *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
                 (pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
      (__this->fields).popGradientHooked = true;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearPop
// il2cpp: void PatreonEffects_NameEffectController__ClearPop (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c61e0

void PatreonEffects_NameEffectController__ClearPop
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434695a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_18434695a = '\x01';
  }
  (__this->fields).popActive = false;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
  }
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popShadowText,(MethodInfo *)0x0);
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popExtrusionText,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$ClearOutline
// il2cpp: void PatreonEffects_NameEffectController__ClearOutline (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c60c0

void PatreonEffects_NameEffectController__ClearOutline
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (__this->fields).outlineActive;
  (__this->fields).outlineActive = false;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)0x0);
  if (bVar1 != false) {
    PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)0x0);
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearPopGradient
// il2cpp: void PatreonEffects_NameEffectController__ClearPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6100

void PatreonEffects_NameEffectController__ClearPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_18434695b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434695b = '\x01';
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
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient,
                 (MethodInfo *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
                 (pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  (__this->fields).popGradientHooked = false;
  return;
}


// PatreonEffects.NameEffectController$$HookEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__HookEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6d90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c6e58: mov rdi, qword ptr [rsp + 0x38]

void PatreonEffects_NameEffectController__HookEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_18434695c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434695c = '\x01';
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
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData,
                 (MethodInfo *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
                 (pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
      (__this->fields).effectVertexDataHooked = true;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__ClearEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c5fe0

void PatreonEffects_NameEffectController__ClearEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_18434695d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434695d = '\x01';
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
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData,
                 (MethodInfo *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
                 (pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  (__this->fields).effectVertexDataHooked = false;
  return;
}


// PatreonEffects.NameEffectController$$DestroyPopLayer
// il2cpp: void PatreonEffects_NameEffectController__DestroyPopLayer (TMPro_TMP_Text_o** layer, const MethodInfo* method);
// 0x1820c6500

void PatreonEffects_NameEffectController__DestroyPopLayer(TMPro_TMP_Text_o **layer,MethodInfo *method)

{
  TMPro_TMP_Text_o *x;
  bool bVar1;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_18434695e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434695e = '\x01';
  }
  x = *layer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (*layer == (TMPro_TMP_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*layer,(MethodInfo *)0x0);
    *layer = (TMPro_TMP_Text_o *)0x0;
    Il2CppCodeGenWriteBarrier(layer,(void *)0x0);
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_2f1fb90(obj,(MethodInfo *)0x0);
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearShaderMaterial
// il2cpp: void PatreonEffects_NameEffectController__ClearShaderMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6250

void PatreonEffects_NameEffectController__ClearShaderMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434695f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434695f = '\x01';
  }
  pTVar1 = (__this->fields).text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields).originalFontMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar1 = (__this->fields).text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar1->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                  (pTVar1,(__this->fields).originalFontMaterial,
                   (pTVar1->klass->vtable)._68_set_fontSharedMaterial.method);
        pTVar1 = (__this->fields).text;
        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar1,(System_Type_o *)0x0,(MethodInfo *)0x0);
          goto label_1820c631c;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_1820c631c:
  pUVar2 = (__this->fields).runtimeMat;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar2 = (__this->fields).runtimeMat;
    if (bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    }
  }
  (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).runtimeMat,(void *)0x0);
  (__this->fields).initialized = false;
  return;
}


// PatreonEffects.NameEffectController$$UpdateEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__UpdateEffectVertexData (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x1820c8330
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c84e4: mov qword ptr [rsp + 0x428], rsi
// asm:   0x1820c84ec: mov qword ptr [rsp + 0x3f8], rdi
// asm:   0x1820c84f4: mov qword ptr [rsp + 0x3e8], r14
// asm:   0x1820c84fc: mov qword ptr [rsp + 0x3e0], r15
// asm:   0x1820c8504: movaps xmmword ptr [rsp + 0x3d0], xmm6
// asm:   0x1820c850c: nop dword ptr [rax]
// asm:   0x1820c8539: nop dword ptr [rax]
// asm:   0x1820c8787: mov rdi, qword ptr [rsp + 0x3f8]
// asm:   0x1820c878f: mov r15, qword ptr [rsp + 0x3e0]
// asm:   0x1820c8797: mov r14, qword ptr [rsp + 0x3e8]
// asm:   0x1820c879f: movaps xmm6, xmmword ptr [rsp + 0x3d0]
// asm:   0x1820c87a7: mov rsi, qword ptr [rsp + 0x428]
// asm:   0x1820c87af: mov r12, qword ptr [rsp + 0x3f0]
// asm:   0x1820c87b7: movaps xmm7, xmmword ptr [rsp + 0x3c0]
// asm:   0x1820c87bf: movaps xmm8, xmmword ptr [rsp + 0x3b0]
// asm:   0x1820c87c8: movaps xmm9, xmmword ptr [rsp + 0x3a0]
// asm:   0x1820c87d1: movaps xmm10, xmmword ptr [rsp + 0x390]

void PatreonEffects_NameEffectController__UpdateEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  float fVar5;
  UnityEngine_Material_o *x;
  undefined8 uVar6;
  TMPro_TMP_MeshInfo_array *pTVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  _union_53103 _Var12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_array *pUVar15;
  UnityEngine_Color32_array *pUVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  uint8_t uVar21;
  undefined8 *puVar22;
  TMPro_TMP_CharacterInfo_array *pTVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  _union_53103 local_res8 [2];
  float local_res20 [2];
  float local_3e8;
  float local_3e4 [3];
  UnityEngine_Mesh_o *local_3d8;
  undefined8 uStack_3d0;
  UnityEngine_Vector3_array *local_3c8;
  UnityEngine_Vector3_array *pUStack_3c0;
  UnityEngine_Vector4_array *local_3b8;
  UnityEngine_Vector4_array *pUStack_3b0;
  UnityEngine_Vector2_array *local_3a8;
  UnityEngine_Color32_array *pUStack_3a0;
  System_Int32_array *local_398;
  UnityEngine_Material_o *pUStack_390;
  undefined8 local_388 [6];
  uint local_358;
  int iStack_344;
  undefined8 local_208 [46];
  char local_98;
  
  if (Il2CppMethodInitialized_184346960 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346960 = '\x01';
  }
  x = (__this->fields).runtimeMat;
  local_3d8 = (UnityEngine_Mesh_o *)0x0;
  uStack_3d0 = 0;
  local_res20[0] = 0.0;
  local_3c8 = (UnityEngine_Vector3_array *)0x0;
  pUStack_3c0 = (UnityEngine_Vector3_array *)0x0;
  local_res8[0] = (_union_53103)0x0;
  local_3b8 = (UnityEngine_Vector4_array *)0x0;
  pUStack_3b0 = (UnityEngine_Vector4_array *)0x0;
  local_3e4[0] = 0.0;
  local_3a8 = (UnityEngine_Vector2_array *)0x0;
  pUStack_3a0 = (UnityEngine_Color32_array *)0x0;
  local_3e8 = 0.0;
  local_398 = (System_Int32_array *)0x0;
  pUStack_390 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar20 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar20) && (textInfo != (TMPro_TMP_TextInfo_o *)0x0)) {
    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
    }
    bVar20 = PatreonEffects_NameEffectController__TryLocalBounds
                       (textInfo,local_res20,(float *)local_res8,local_3e4,&local_3e8,(MethodInfo *)0x0);
    fVar14 = local_3e4[0];
    fVar13 = local_res20[0];
    if (bVar20) {
      fVar29 = (float)local_res8[0] - local_res20[0];
      if (fVar29 <= 0.001) {
        fVar29 = 0.001;
      }
      fVar30 = local_3e8 - local_3e4[0];
      if (fVar30 <= 0.001) {
        fVar30 = 0.001;
      }
      if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
      }
      if ((textInfo->fields).characterInfo != (TMPro_TMP_CharacterInfo_array *)0x0) {
        pTVar23 = (textInfo->fields).characterInfo;
        if ((textInfo->fields).characterCount < (int)pTVar23->max_length) {
          pTVar23 = (TMPro_TMP_CharacterInfo_array *)textInfo;
        }
        local_res20[0] = *(float *)&pTVar23->max_length;
        iVar28 = 0;
        if (0 < (int)local_res20[0]) {
          do {
            pTVar23 = (textInfo->fields).characterInfo;
            if (pTVar23 == (TMPro_TMP_CharacterInfo_array *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180354250(pTVar23,local_388,(longlong)iVar28);
            lVar25 = 2;
            puVar18 = local_388;
            puVar19 = local_208;
            do {
              puVar24 = puVar19;
              puVar22 = puVar18;
              uVar6 = puVar22[1];
              uVar8 = puVar22[2];
              uVar9 = puVar22[3];
              *puVar24 = *puVar22;
              puVar24[1] = uVar6;
              uVar6 = puVar22[4];
              uVar10 = puVar22[5];
              puVar24[2] = uVar8;
              puVar24[3] = uVar9;
              uVar8 = puVar22[6];
              uVar9 = puVar22[7];
              puVar24[4] = uVar6;
              puVar24[5] = uVar10;
              uVar6 = puVar22[8];
              uVar10 = puVar22[9];
              puVar24[6] = uVar8;
              puVar24[7] = uVar9;
              uVar8 = puVar22[10];
              uVar9 = puVar22[0xb];
              puVar24[8] = uVar6;
              puVar24[9] = uVar10;
              uVar6 = puVar22[0xc];
              uVar10 = puVar22[0xd];
              puVar24[10] = uVar8;
              puVar24[0xb] = uVar9;
              uVar8 = puVar22[0xe];
              uVar9 = puVar22[0xf];
              puVar24[0xc] = uVar6;
              puVar24[0xd] = uVar10;
              puVar24[0xe] = uVar8;
              puVar24[0xf] = uVar9;
              lVar25 = lVar25 + -1;
              puVar18 = puVar22 + 0x10;
              puVar19 = puVar24 + 0x10;
            } while (lVar25 != 0);
            uVar6 = puVar22[0x11];
            uVar8 = puVar22[0x12];
            uVar9 = puVar22[0x13];
            puVar24[0x10] = puVar22[0x10];
            puVar24[0x11] = uVar6;
            uVar6 = puVar22[0x14];
            uVar10 = puVar22[0x15];
            puVar24[0x12] = uVar8;
            puVar24[0x13] = uVar9;
            uVar8 = puVar22[0x16];
            uVar9 = puVar22[0x17];
            puVar24[0x14] = uVar6;
            puVar24[0x15] = uVar10;
            uVar6 = puVar22[0x18];
            uVar10 = puVar22[0x19];
            puVar24[0x16] = uVar8;
            puVar24[0x17] = uVar9;
            uVar8 = puVar22[0x1a];
            uVar9 = puVar22[0x1b];
            puVar24[0x18] = uVar6;
            puVar24[0x19] = uVar10;
            uVar10 = puVar22[0x1c];
            uVar11 = puVar22[0x1d];
            uVar6 = puVar22[0x1e];
            puVar24[0x1a] = uVar8;
            puVar24[0x1b] = uVar9;
            puVar24[0x1c] = uVar10;
            puVar24[0x1d] = uVar11;
            puVar24[0x1e] = uVar6;
            if (local_98 != '\0') {
              if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController)
                ;
              }
              local_3d8 = (UnityEngine_Mesh_o *)0x0;
              uStack_3d0 = 0;
              local_3c8 = (UnityEngine_Vector3_array *)0x0;
              pUStack_3c0 = (UnityEngine_Vector3_array *)0x0;
              local_3b8 = (UnityEngine_Vector4_array *)0x0;
              pUStack_3b0 = (UnityEngine_Vector4_array *)0x0;
              local_3a8 = (UnityEngine_Vector2_array *)0x0;
              pUStack_3a0 = (UnityEngine_Color32_array *)0x0;
              local_398 = (System_Int32_array *)0x0;
              pUStack_390 = (UnityEngine_Material_o *)0x0;
              if (((textInfo->fields).meshInfo != (TMPro_TMP_MeshInfo_array *)0x0) &&
                 (lVar25 = (longlong)(int)local_358, -1 < (int)local_358)) {
                pTVar7 = (textInfo->fields).meshInfo;
                uVar26 = (uint)pTVar7->max_length;
                if ((int)local_358 < (int)uVar26) {
                  if (uVar26 <= local_358) {
label_1820c87ec:
                    ThrowIndexOutOfRangeException();
                  }
                  local_3d8 = pTVar7->m_Items[lVar25].fields.mesh;
                  uStack_3d0 = *(undefined8 *)&pTVar7->m_Items[lVar25].fields.vertexCount;
                  ppUVar1 = &pTVar7->m_Items[lVar25].fields.vertices;
                  local_3c8 = *ppUVar1;
                  pUStack_3c0 = ppUVar1[1];
                  ppUVar2 = &pTVar7->m_Items[lVar25].fields.tangents;
                  local_3b8 = *ppUVar2;
                  pUStack_3b0 = ppUVar2[1];
                  ppUVar3 = &pTVar7->m_Items[lVar25].fields.uvs2;
                  local_3a8 = *ppUVar3;
                  pUStack_3a0 = (UnityEngine_Color32_array *)ppUVar3[1];
                  ppSVar4 = &pTVar7->m_Items[lVar25].fields.triangles;
                  local_398 = *ppSVar4;
                  pUStack_390 = (UnityEngine_Material_o *)ppSVar4[1];
                  Il2CppCodeGenWriteBarrier(&local_3d8,(void *)0x0);
                  iVar17 = iStack_344;
                  pUVar16 = pUStack_3a0;
                  pUVar15 = local_3c8;
                  if ((((pUStack_3a0 != (UnityEngine_Color32_array *)0x0) &&
                       (local_3c8 != (UnityEngine_Vector3_array *)0x0)) &&
                      (iStack_344 + 3 < (int)pUStack_3a0->max_length)) &&
                     (iStack_344 + 3 < (int)local_3c8->max_length)) {
                    iVar27 = 0;
                    do {
                      uVar26 = iVar27 + iVar17;
                      if (((uint)pUVar16->max_length <= uVar26) ||
                         (local_res8[0] =
                               (_union_53103)pUVar16->m_Items[(int)uVar26].fields._overlap_0._at_rgba.rgba,
                         (uint)pUVar15->max_length <= uVar26)) goto label_1820c87ec;
                      fVar5 = pUVar15->m_Items[(int)uVar26].fields.x;
                      if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0)
                      {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
                      }
                      uVar21 = PatreonEffects_NameEffectController__ToByte
                                         ((fVar5 - fVar13) / fVar29,(MethodInfo *)0x0);
                      local_res8[0]._at_b._lead[0] = uVar21;
                      if ((uint)pUVar15->max_length <= uVar26) goto label_1820c87ec;
                      uVar21 = PatreonEffects_NameEffectController__ToByte
                                         ((pUVar15->m_Items[(int)uVar26].fields.y - fVar14) / fVar30,
                                          (MethodInfo *)0x0);
                      _Var12 = local_res8[0];
                      local_res8[0]._at_g.g = uVar21;
                      local_res8[0]._at_a.a = _Var12._at_a.a;
                      local_res8[0]._at_b.b = 0xff;
                      if ((uint)pUVar16->max_length <= uVar26) goto label_1820c87ec;
                      iVar27 = iVar27 + 1;
                      *(_union_53103 *)(pUVar16->m_Items + (int)uVar26) = local_res8[0];
                    } while (iVar27 < 4);
                  }
                }
              }
            }
            iVar28 = iVar28 + 1;
          } while (iVar28 < (int)local_res20[0]);
        }
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ToByte
// il2cpp: uint8_t PatreonEffects_NameEffectController__ToByte (float value, const MethodInfo* method);
// 0x1820c7ae0

uint8_t PatreonEffects_NameEffectController__ToByte(float value,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *in_R8;
  double dVar1;
  double dVar2;
  Il2CppMethodPointer local_res18;
  
  if (value < 0.0) {
    value = 0.0;
  }
  else if (1.0 < value) {
    value = 1.0;
  }
  if (Il2CppMethodInitialized_184340a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_184340a0c = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar2 = (double)(value * 255.0);
  method_00 = (MethodInfo *)&local_res18;
  if (dVar2 < 0.0) {
    dVar1 = il2cpp_runtime_helper_1804f3b80(dVar2,(double *)method_00,in_R8);
    if (dVar1 == -0.5) {
      if (((longlong)(double)local_res18 & 1U) != 0) {
        return (uint8_t)(int)((double)local_res18 - 1.0);
      }
    }
    else {
      local_res18 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f45c0(dVar2 - 0.5,method_00);
    }
  }
  else {
    dVar1 = il2cpp_runtime_helper_1804f3b80(dVar2,(double *)method_00,in_R8);
    if (dVar1 != 0.5) {
      dVar2 = il2cpp_runtime_helper_1804f4690(dVar2 + 0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((longlong)(double)local_res18 & 1U) != 0) {
      return (uint8_t)(int)((double)local_res18 + 1.0);
    }
  }
  return (uint8_t)(int)(double)local_res18;
}


// PatreonEffects.NameEffectController$$SafeCharacterCount
// il2cpp: int32_t PatreonEffects_NameEffectController__SafeCharacterCount (TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x1820c72a0

int32_t PatreonEffects_NameEffectController__SafeCharacterCount
                  (TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  TMPro_TMP_CharacterInfo_array *pTVar1;
  
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     ((textInfo->fields).characterInfo != (TMPro_TMP_CharacterInfo_array *)0x0)) {
    pTVar1 = (textInfo->fields).characterInfo;
    if ((textInfo->fields).characterCount < (int)pTVar1->max_length) {
      pTVar1 = (TMPro_TMP_CharacterInfo_array *)textInfo;
    }
    return (int32_t)pTVar1->max_length;
  }
  return 0;
}


// PatreonEffects.NameEffectController$$TryGetMeshInfo
// il2cpp: bool PatreonEffects_NameEffectController__TryGetMeshInfo (TMPro_TMP_TextInfo_o* textInfo, int32_t materialReferenceIndex, TMPro_TMP_MeshInfo_o* mesh, const MethodInfo* method);
// 0x1820c7c00

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
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_Vector3_array *pUVar9;
  UnityEngine_Vector4_array *pUVar10;
  UnityEngine_Vector4_array *pUVar11;
  UnityEngine_Vector2_array *pUVar12;
  UnityEngine_Color32_array *pUVar13;
  System_Int32_array *pSVar14;
  UnityEngine_Material_o *pUVar15;
  int32_t iVar16;
  undefined4 uVar17;
  
  (mesh->fields).mesh = (UnityEngine_Mesh_o *)0x0;
  *(undefined8 *)&(mesh->fields).vertexCount = 0;
  (mesh->fields).vertices = (UnityEngine_Vector3_array *)0x0;
  (mesh->fields).normals = (UnityEngine_Vector3_array *)0x0;
  (mesh->fields).tangents = (UnityEngine_Vector4_array *)0x0;
  (mesh->fields).uvs0 = (UnityEngine_Vector4_array *)0x0;
  (mesh->fields).uvs2 = (UnityEngine_Vector2_array *)0x0;
  (mesh->fields).colors32 = (UnityEngine_Color32_array *)0x0;
  (mesh->fields).triangles = (System_Int32_array *)0x0;
  (mesh->fields).material = (UnityEngine_Material_o *)0x0;
  if (textInfo == (TMPro_TMP_TextInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((textInfo->fields).meshInfo != (TMPro_TMP_MeshInfo_array *)0x0) && (-1 < materialReferenceIndex)) {
    pTVar7 = (textInfo->fields).meshInfo;
    uVar6 = (uint)pTVar7->max_length;
    if (materialReferenceIndex < (int)uVar6) {
      if ((uint)materialReferenceIndex < uVar6) {
        pTVar1 = pTVar7->m_Items + materialReferenceIndex;
        iVar16 = (pTVar1->fields).vertexCount;
        uVar17 = *(undefined4 *)&(pTVar1->fields).field_0xc;
        ppUVar2 = &pTVar7->m_Items[materialReferenceIndex].fields.vertices;
        pUVar8 = *ppUVar2;
        pUVar9 = ppUVar2[1];
        ppUVar3 = &pTVar7->m_Items[materialReferenceIndex].fields.tangents;
        pUVar10 = *ppUVar3;
        pUVar11 = ppUVar3[1];
        ppUVar4 = &pTVar7->m_Items[materialReferenceIndex].fields.uvs2;
        pUVar12 = *ppUVar4;
        pUVar13 = (UnityEngine_Color32_array *)ppUVar4[1];
        ppSVar5 = &pTVar7->m_Items[materialReferenceIndex].fields.triangles;
        pSVar14 = *ppSVar5;
        pUVar15 = (UnityEngine_Material_o *)ppSVar5[1];
        (mesh->fields).mesh = (pTVar1->fields).mesh;
        (mesh->fields).vertexCount = iVar16;
        *(undefined4 *)&(mesh->fields).field_0xc = uVar17;
        (mesh->fields).vertices = pUVar8;
        (mesh->fields).normals = pUVar9;
        (mesh->fields).tangents = pUVar10;
        (mesh->fields).uvs0 = pUVar11;
        (mesh->fields).uvs2 = pUVar12;
        (mesh->fields).colors32 = pUVar13;
        (mesh->fields).triangles = pSVar14;
        (mesh->fields).material = pUVar15;
        Il2CppCodeGenWriteBarrier((void **)mesh,(void *)0x0);
        return true;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  return false;
}


// PatreonEffects.NameEffectController$$TryLocalBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryLocalBounds (TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, float* minY, float* maxY, const MethodInfo* method);
// 0x1820c7cb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c7dae: nop 

bool PatreonEffects_NameEffectController__TryLocalBounds
               (TMPro_TMP_TextInfo_o *textInfo,float *minX,float *maxX,float *minY,float *maxY,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_array **ppUVar2;
  UnityEngine_Vector4_array **ppUVar3;
  UnityEngine_Vector2_array **ppUVar4;
  System_Int32_array **ppSVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  TMPro_TMP_MeshInfo_array *pTVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 *puVar17;
  UnityEngine_Vector3_o *pUVar18;
  TMPro_TMP_CharacterInfo_array *pTVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Mesh_o *local_368;
  undefined8 uStack_360;
  UnityEngine_Vector3_array *local_358;
  UnityEngine_Vector3_array *pUStack_350;
  UnityEngine_Vector4_array *local_348;
  UnityEngine_Vector4_array *pUStack_340;
  UnityEngine_Vector2_array *local_338;
  UnityEngine_Color32_array *pUStack_330;
  System_Int32_array *local_328;
  UnityEngine_Material_o *pUStack_320;
  undefined8 local_318 [6];
  uint local_2e8;
  int iStack_2d4;
  undefined8 local_198 [46];
  char local_28;
  
  if (Il2CppMethodInitialized_184346961 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_184346961 = '\x01';
  }
  *minX = INFINITY;
  *maxX = -INFINITY;
  *minY = INFINITY;
  *maxY = -INFINITY;
  local_368 = (UnityEngine_Mesh_o *)0x0;
  uStack_360 = 0;
  local_358 = (UnityEngine_Vector3_array *)0x0;
  pUStack_350 = (UnityEngine_Vector3_array *)0x0;
  local_348 = (UnityEngine_Vector4_array *)0x0;
  pUStack_340 = (UnityEngine_Vector4_array *)0x0;
  local_338 = (UnityEngine_Vector2_array *)0x0;
  pUStack_330 = (UnityEngine_Color32_array *)0x0;
  local_328 = (System_Int32_array *)0x0;
  pUStack_320 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
  }
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     ((textInfo->fields).characterInfo != (TMPro_TMP_CharacterInfo_array *)0x0)) {
    pTVar19 = (textInfo->fields).characterInfo;
    if ((textInfo->fields).characterCount < (int)pTVar19->max_length) {
      pTVar19 = (TMPro_TMP_CharacterInfo_array *)textInfo;
    }
    iVar7 = (int)pTVar19->max_length;
    iVar23 = 0;
    if (0 < iVar7) {
      do {
        pTVar19 = (textInfo->fields).characterInfo;
        if (pTVar19 == (TMPro_TMP_CharacterInfo_array *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180354250(pTVar19,local_318,(longlong)iVar23);
        lVar22 = 2;
        puVar14 = local_318;
        puVar15 = local_198;
        do {
          puVar20 = puVar15;
          puVar17 = puVar14;
          uVar8 = puVar17[1];
          uVar10 = puVar17[2];
          uVar11 = puVar17[3];
          *puVar20 = *puVar17;
          puVar20[1] = uVar8;
          uVar8 = puVar17[4];
          uVar12 = puVar17[5];
          puVar20[2] = uVar10;
          puVar20[3] = uVar11;
          uVar10 = puVar17[6];
          uVar11 = puVar17[7];
          puVar20[4] = uVar8;
          puVar20[5] = uVar12;
          uVar8 = puVar17[8];
          uVar12 = puVar17[9];
          puVar20[6] = uVar10;
          puVar20[7] = uVar11;
          uVar10 = puVar17[10];
          uVar11 = puVar17[0xb];
          puVar20[8] = uVar8;
          puVar20[9] = uVar12;
          uVar8 = puVar17[0xc];
          uVar12 = puVar17[0xd];
          puVar20[10] = uVar10;
          puVar20[0xb] = uVar11;
          uVar10 = puVar17[0xe];
          uVar11 = puVar17[0xf];
          puVar20[0xc] = uVar8;
          puVar20[0xd] = uVar12;
          puVar20[0xe] = uVar10;
          puVar20[0xf] = uVar11;
          lVar22 = lVar22 + -1;
          puVar14 = puVar17 + 0x10;
          puVar15 = puVar20 + 0x10;
        } while (lVar22 != 0);
        uVar8 = puVar17[0x11];
        uVar10 = puVar17[0x12];
        uVar11 = puVar17[0x13];
        puVar20[0x10] = puVar17[0x10];
        puVar20[0x11] = uVar8;
        uVar8 = puVar17[0x14];
        uVar12 = puVar17[0x15];
        puVar20[0x12] = uVar10;
        puVar20[0x13] = uVar11;
        uVar10 = puVar17[0x16];
        uVar11 = puVar17[0x17];
        puVar20[0x14] = uVar8;
        puVar20[0x15] = uVar12;
        uVar8 = puVar17[0x18];
        uVar12 = puVar17[0x19];
        puVar20[0x16] = uVar10;
        puVar20[0x17] = uVar11;
        uVar10 = puVar17[0x1a];
        uVar11 = puVar17[0x1b];
        puVar20[0x18] = uVar8;
        puVar20[0x19] = uVar12;
        uVar12 = puVar17[0x1c];
        uVar13 = puVar17[0x1d];
        uVar8 = puVar17[0x1e];
        puVar20[0x1a] = uVar10;
        puVar20[0x1b] = uVar11;
        puVar20[0x1c] = uVar12;
        puVar20[0x1d] = uVar13;
        puVar20[0x1e] = uVar8;
        if (local_28 != '\0') {
          if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
          }
          local_368 = (UnityEngine_Mesh_o *)0x0;
          uStack_360 = 0;
          local_358 = (UnityEngine_Vector3_array *)0x0;
          pUStack_350 = (UnityEngine_Vector3_array *)0x0;
          local_348 = (UnityEngine_Vector4_array *)0x0;
          pUStack_340 = (UnityEngine_Vector4_array *)0x0;
          local_338 = (UnityEngine_Vector2_array *)0x0;
          pUStack_330 = (UnityEngine_Color32_array *)0x0;
          local_328 = (System_Int32_array *)0x0;
          pUStack_320 = (UnityEngine_Material_o *)0x0;
          if ((textInfo->fields).meshInfo != (TMPro_TMP_MeshInfo_array *)0x0) {
            lVar22 = (longlong)(int)local_2e8;
            if (-1 < (int)local_2e8) {
              pTVar9 = (textInfo->fields).meshInfo;
              uVar1 = (uint)pTVar9->max_length;
              if ((int)local_2e8 < (int)uVar1) {
                if (uVar1 <= local_2e8) {
label_1820c7fe1:
                  ThrowIndexOutOfRangeException();
                }
                local_368 = pTVar9->m_Items[lVar22].fields.mesh;
                uStack_360 = *(undefined8 *)&pTVar9->m_Items[lVar22].fields.vertexCount;
                ppUVar2 = &pTVar9->m_Items[lVar22].fields.vertices;
                local_358 = *ppUVar2;
                pUStack_350 = ppUVar2[1];
                ppUVar3 = &pTVar9->m_Items[lVar22].fields.tangents;
                local_348 = *ppUVar3;
                pUStack_340 = ppUVar3[1];
                ppUVar4 = &pTVar9->m_Items[lVar22].fields.uvs2;
                local_338 = *ppUVar4;
                pUStack_330 = (UnityEngine_Color32_array *)ppUVar4[1];
                ppSVar5 = &pTVar9->m_Items[lVar22].fields.triangles;
                local_328 = *ppSVar5;
                pUStack_320 = (UnityEngine_Material_o *)ppSVar5[1];
                Il2CppCodeGenWriteBarrier(&local_368,(void *)0x0);
                if ((local_358 != (UnityEngine_Vector3_array *)0x0) &&
                   (iStack_2d4 + 3 < (int)local_358->max_length)) {
                  iVar21 = 0;
                  do {
                    uVar1 = iVar21 + iStack_2d4;
                    if ((uint)local_358->max_length <= uVar1) goto label_1820c7fe1;
                    fVar6 = local_358->m_Items[(int)uVar1].fields.y;
                    fVar25 = local_358->m_Items[(int)uVar1].fields.x;
                    pUVar18 = local_358->m_Items + (int)uVar1;
                    if (*minX <= fVar25 && fVar25 != *minX) {
                      pUVar18 = (UnityEngine_Vector3_o *)minX;
                    }
                    *minX = (pUVar18->fields).x;
                    fVar24 = *maxX;
                    if (*maxX <= fVar25) {
                      fVar24 = fVar25;
                    }
                    *maxX = fVar24;
                    fVar25 = *minY;
                    if (fVar6 <= *minY) {
                      fVar25 = fVar6;
                    }
                    *minY = fVar25;
                    fVar25 = *maxY;
                    if (*maxY <= fVar6) {
                      fVar25 = fVar6;
                    }
                    iVar21 = iVar21 + 1;
                    *maxY = fVar25;
                  } while (iVar21 < 4);
                }
              }
            }
          }
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < iVar7);
    }
  }
  if (*minX <= *maxX && *maxX != *minX) {
    bVar16 = *minY <= *maxY && *maxY != *minY;
  }
  else {
    bVar16 = false;
  }
  return bVar16;
}


// PatreonEffects.NameEffectController$$ApplyPopFaceGradient
// il2cpp: void PatreonEffects_NameEffectController__ApplyPopFaceGradient (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x1820c50a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c52c9: movss xmm6, dword ptr [rip + 0x1293937]

void PatreonEffects_NameEffectController__ApplyPopFaceGradient
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  TMPro_TMP_Text_o *__this_00;
  undefined8 uVar5;
  TMPro_TMP_MeshInfo_array *pTVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  UnityEngine_Vector3_array *pUVar12;
  UnityEngine_Color32_array *pUVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  int32_t iVar18;
  uint uVar19;
  UnityEngine_Color32_o UVar20;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_Camera_o *pUVar21;
  undefined8 *puVar22;
  UnityEngine_Color_o *pUVar23;
  TMPro_TMP_CharacterInfo_array *pTVar24;
  undefined8 *puVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float local_res8 [2];
  float local_res20 [2];
  UnityEngine_Vector3_Fields local_3f8;
  UnityEngine_Mesh_o *local_3e8;
  undefined8 uStack_3e0;
  UnityEngine_Vector3_array *local_3d8;
  UnityEngine_Vector3_array *pUStack_3d0;
  UnityEngine_Vector4_array *local_3c8;
  UnityEngine_Vector4_array *pUStack_3c0;
  UnityEngine_Vector2_array *local_3b8;
  UnityEngine_Color32_array *pUStack_3b0;
  System_Int32_array *local_3a8;
  UnityEngine_Material_o *pUStack_3a0;
  UnityEngine_Color_Fields local_398;
  UnityEngine_Color_o local_388;
  undefined8 local_378 [6];
  uint local_348;
  int iStack_334;
  undefined8 local_1f8 [46];
  char local_88;
  
  if (Il2CppMethodInitialized_184346962 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_184346962 = '\x01';
  }
  local_3e8 = (UnityEngine_Mesh_o *)0x0;
  uStack_3e0 = 0;
  local_res20[0] = 0.0;
  local_3d8 = (UnityEngine_Vector3_array *)0x0;
  pUStack_3d0 = (UnityEngine_Vector3_array *)0x0;
  local_res8[0] = 0.0;
  local_3c8 = (UnityEngine_Vector4_array *)0x0;
  pUStack_3c0 = (UnityEngine_Vector4_array *)0x0;
  local_3b8 = (UnityEngine_Vector2_array *)0x0;
  pUStack_3b0 = (UnityEngine_Color32_array *)0x0;
  local_3a8 = (System_Int32_array *)0x0;
  pUStack_3a0 = (UnityEngine_Material_o *)0x0;
  if (Il2CppMethodInitialized_184346964 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346964 = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (__this_00 == (TMPro_TMP_Text_o *)0x0) {
label_1820c5573:
    ThrowNullReferenceException();
  }
  __this_01 = UnityEngine_Component__GetComponentInParent_object__664f20
                        ((UnityEngine_Component_o *)__this_00,
                         (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar17 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar17) {
    if (__this_01 == (UnityEngine_Canvas_o *)0x0) goto label_1820c5573;
    iVar18 = UnityEngine_Canvas__get_renderMode(__this_01,(MethodInfo *)0x0);
    if (iVar18 != 0) {
      pUVar21 = UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar17 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar17) {
        pUVar21 = UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
      }
      else {
        pUVar21 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
      }
      goto label_1820c521d;
    }
  }
  pUVar21 = (UnityEngine_Camera_o *)0x0;
label_1820c521d:
  bVar17 = PatreonEffects_NameEffectController__TryPopFaceBounds
                     (__this,textInfo,pUVar21,local_res20,local_res8,(MethodInfo *)0x0);
  fVar11 = local_res20[0];
  if (bVar17) {
    fVar30 = local_res8[0] - local_res20[0];
    if (fVar30 <= 0.001) {
      fVar30 = 0.001;
    }
    if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
    }
    if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
       ((textInfo->fields).characterInfo != (TMPro_TMP_CharacterInfo_array *)0x0)) {
      pTVar24 = (textInfo->fields).characterInfo;
      if ((textInfo->fields).characterCount < (int)pTVar24->max_length) {
        pTVar24 = (TMPro_TMP_CharacterInfo_array *)textInfo;
      }
      local_res8[0] = *(float *)&pTVar24->max_length;
      iVar28 = 0;
      if (0 < (int)local_res8[0]) {
        do {
          pTVar24 = (textInfo->fields).characterInfo;
          if (pTVar24 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_1820c5573;
          il2cpp_runtime_helper_180354250(pTVar24,local_378,(longlong)iVar28);
          lVar26 = 2;
          puVar15 = local_378;
          puVar16 = local_1f8;
          do {
            puVar25 = puVar16;
            puVar22 = puVar15;
            uVar5 = puVar22[1];
            uVar7 = puVar22[2];
            uVar8 = puVar22[3];
            *puVar25 = *puVar22;
            puVar25[1] = uVar5;
            uVar5 = puVar22[4];
            uVar9 = puVar22[5];
            puVar25[2] = uVar7;
            puVar25[3] = uVar8;
            uVar7 = puVar22[6];
            uVar8 = puVar22[7];
            puVar25[4] = uVar5;
            puVar25[5] = uVar9;
            uVar5 = puVar22[8];
            uVar9 = puVar22[9];
            puVar25[6] = uVar7;
            puVar25[7] = uVar8;
            uVar7 = puVar22[10];
            uVar8 = puVar22[0xb];
            puVar25[8] = uVar5;
            puVar25[9] = uVar9;
            uVar5 = puVar22[0xc];
            uVar9 = puVar22[0xd];
            puVar25[10] = uVar7;
            puVar25[0xb] = uVar8;
            uVar7 = puVar22[0xe];
            uVar8 = puVar22[0xf];
            puVar25[0xc] = uVar5;
            puVar25[0xd] = uVar9;
            puVar25[0xe] = uVar7;
            puVar25[0xf] = uVar8;
            lVar26 = lVar26 + -1;
            puVar15 = puVar22 + 0x10;
            puVar16 = puVar25 + 0x10;
          } while (lVar26 != 0);
          uVar5 = puVar22[0x11];
          uVar7 = puVar22[0x12];
          uVar8 = puVar22[0x13];
          puVar25[0x10] = puVar22[0x10];
          puVar25[0x11] = uVar5;
          uVar5 = puVar22[0x14];
          uVar9 = puVar22[0x15];
          puVar25[0x12] = uVar7;
          puVar25[0x13] = uVar8;
          uVar7 = puVar22[0x16];
          uVar8 = puVar22[0x17];
          puVar25[0x14] = uVar5;
          puVar25[0x15] = uVar9;
          uVar5 = puVar22[0x18];
          uVar9 = puVar22[0x19];
          puVar25[0x16] = uVar7;
          puVar25[0x17] = uVar8;
          uVar7 = puVar22[0x1a];
          uVar8 = puVar22[0x1b];
          puVar25[0x18] = uVar5;
          puVar25[0x19] = uVar9;
          uVar9 = puVar22[0x1c];
          uVar10 = puVar22[0x1d];
          uVar5 = puVar22[0x1e];
          puVar25[0x1a] = uVar7;
          puVar25[0x1b] = uVar8;
          puVar25[0x1c] = uVar9;
          puVar25[0x1d] = uVar10;
          puVar25[0x1e] = uVar5;
          if (local_88 != '\0') {
            if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
            }
            local_3e8 = (UnityEngine_Mesh_o *)0x0;
            uStack_3e0 = 0;
            local_3d8 = (UnityEngine_Vector3_array *)0x0;
            pUStack_3d0 = (UnityEngine_Vector3_array *)0x0;
            local_3c8 = (UnityEngine_Vector4_array *)0x0;
            pUStack_3c0 = (UnityEngine_Vector4_array *)0x0;
            local_3b8 = (UnityEngine_Vector2_array *)0x0;
            pUStack_3b0 = (UnityEngine_Color32_array *)0x0;
            local_3a8 = (System_Int32_array *)0x0;
            pUStack_3a0 = (UnityEngine_Material_o *)0x0;
            if (((textInfo->fields).meshInfo != (TMPro_TMP_MeshInfo_array *)0x0) &&
               (lVar26 = (longlong)(int)local_348, -1 < (int)local_348)) {
              pTVar6 = (textInfo->fields).meshInfo;
              uVar19 = (uint)pTVar6->max_length;
              if ((int)local_348 < (int)uVar19) {
                if (uVar19 <= local_348) {
label_1820c5579:
                  ThrowIndexOutOfRangeException();
                }
                local_3e8 = pTVar6->m_Items[lVar26].fields.mesh;
                uStack_3e0 = *(undefined8 *)&pTVar6->m_Items[lVar26].fields.vertexCount;
                ppUVar1 = &pTVar6->m_Items[lVar26].fields.vertices;
                local_3d8 = *ppUVar1;
                pUStack_3d0 = ppUVar1[1];
                ppUVar2 = &pTVar6->m_Items[lVar26].fields.tangents;
                local_3c8 = *ppUVar2;
                pUStack_3c0 = ppUVar2[1];
                ppUVar3 = &pTVar6->m_Items[lVar26].fields.uvs2;
                local_3b8 = *ppUVar3;
                pUStack_3b0 = (UnityEngine_Color32_array *)ppUVar3[1];
                ppSVar4 = &pTVar6->m_Items[lVar26].fields.triangles;
                local_3a8 = *ppSVar4;
                pUStack_3a0 = (UnityEngine_Material_o *)ppSVar4[1];
                Il2CppCodeGenWriteBarrier(&local_3e8,(void *)0x0);
                iVar14 = iStack_334;
                pUVar13 = pUStack_3b0;
                pUVar12 = local_3d8;
                if ((((pUStack_3b0 != (UnityEngine_Color32_array *)0x0) &&
                     (local_3d8 != (UnityEngine_Vector3_array *)0x0)) &&
                    (iStack_334 + 3 < (int)pUStack_3b0->max_length)) &&
                   (iStack_334 + 3 < (int)local_3d8->max_length)) {
                  iVar27 = 0;
                  do {
                    uVar19 = iVar27 + iVar14;
                    if ((uint)pUVar12->max_length <= uVar19) goto label_1820c5579;
                    local_3f8.x = pUVar12->m_Items[(int)uVar19].fields.x;
                    local_3f8.y = pUVar12->m_Items[(int)uVar19].fields.y;
                    local_3f8.z = pUVar12->m_Items[(int)uVar19].fields.z;
                    fVar29 = PatreonEffects_NameEffectController__ScreenX
                                       (__this,(UnityEngine_Vector3_o *)&local_3f8,pUVar21,(MethodInfo *)0x0);
                    fVar29 = (fVar29 - fVar11) / fVar30;
                    if (fVar29 < 0.0) {
                      fVar29 = 0.0;
                    }
                    else if (1.0 < fVar29) {
                      fVar29 = 1.0;
                    }
                    pUVar23 = PatreonEffects_NameEffectController__SampleFaceGradient
                                        (&local_388,__this,fVar29,(MethodInfo *)0x0);
                    local_398.r = (pUVar23->fields).r;
                    local_398.g = (pUVar23->fields).g;
                    local_398.b = (pUVar23->fields).b;
                    local_398.a = (pUVar23->fields).a;
                    UVar20 = UnityEngine_Color32__op_Implicit
                                       ((UnityEngine_Color_o *)&local_398,(MethodInfo *)0x0);
                    uVar19 = iVar27 + iVar14;
                    if ((uint)pUVar13->max_length <= uVar19) goto label_1820c5579;
                    iVar27 = iVar27 + 1;
                    pUVar13->m_Items[(int)uVar19].fields._overlap_0._at_rgba.rgba =
                         (int32_t)UVar20.fields._overlap_0;
                  } while (iVar27 < 4);
                }
              }
            }
          }
          iVar28 = iVar28 + 1;
        } while (iVar28 < (int)local_res8[0]);
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$SampleFaceGradient
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectController__SampleFaceGradient (PatreonEffects_NameEffectController_o* __this, float t, const MethodInfo* method);
// 0x1820c72d0

UnityEngine_Color_o *
PatreonEffects_NameEffectController__SampleFaceGradient
          (UnityEngine_Color_o *__return_storage_ptr__,PatreonEffects_NameEffectController_o *__this,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (t < 0.0) {
    t = 0.0;
  }
  else if (1.0 < t) {
    t = 1.0;
    goto label_1820c72fe;
  }
  if (t < 0.5) {
    fVar1 = (__this->fields).popFaceA.fields.r;
    fVar5 = t + t;
    fVar2 = (__this->fields).popFaceA.fields.g;
    fVar4 = (__this->fields).popFaceA.fields.b;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    fVar3 = (__this->fields).popFaceB.fields.b;
    (__return_storage_ptr__->fields).r = ((__this->fields).popFaceB.fields.r - fVar1) * fVar5 + fVar1;
    fVar1 = (__this->fields).popFaceB.fields.g;
    (__return_storage_ptr__->fields).b = (fVar3 - fVar4) * fVar5 + fVar4;
    (__return_storage_ptr__->fields).g = (fVar1 - fVar2) * fVar5 + fVar2;
    (__return_storage_ptr__->fields).a =
         ((__this->fields).popFaceB.fields.a - (__this->fields).popFaceA.fields.a) * fVar5 +
         (__this->fields).popFaceA.fields.a;
    return __return_storage_ptr__;
  }
label_1820c72fe:
  fVar1 = (__this->fields).popFaceB.fields.r;
  fVar2 = (__this->fields).popFaceB.fields.g;
  fVar4 = (t - 0.5) + (t - 0.5);
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  fVar5 = (__this->fields).popFaceC.fields.b;
  fVar3 = (__this->fields).popFaceB.fields.b;
  (__return_storage_ptr__->fields).r = ((__this->fields).popFaceC.fields.r - fVar1) * fVar4 + fVar1;
  fVar1 = (__this->fields).popFaceC.fields.g;
  (__return_storage_ptr__->fields).b = (fVar5 - fVar3) * fVar4 + (__this->fields).popFaceB.fields.b;
  (__return_storage_ptr__->fields).g = (fVar1 - fVar2) * fVar4 + fVar2;
  (__return_storage_ptr__->fields).a =
       ((__this->fields).popFaceC.fields.a - (__this->fields).popFaceB.fields.a) * fVar4 +
       (__this->fields).popFaceB.fields.a;
  return __return_storage_ptr__;
}


// PatreonEffects.NameEffectController$$TryPopFaceBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryPopFaceBounds (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Camera_o* camera, float* minX, float* maxX, const MethodInfo* method);
// 0x1820c7ff0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c80ce: nop 
// asm:   0x1820c80f9: nop dword ptr [rax]
// asm:   0x1820c8259: nop dword ptr [rax]

bool PatreonEffects_NameEffectController__TryPopFaceBounds
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               UnityEngine_Camera_o *camera,float *minX,float *maxX,MethodInfo *method)

{
  UnityEngine_Vector3_array **ppUVar1;
  UnityEngine_Vector4_array **ppUVar2;
  UnityEngine_Vector2_array **ppUVar3;
  System_Int32_array **ppSVar4;
  int iVar5;
  undefined8 uVar6;
  TMPro_TMP_MeshInfo_array *pTVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UnityEngine_Vector3_array *pUVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  TMPro_TMP_CharacterInfo_array *pTVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_Fields local_398;
  UnityEngine_Mesh_o *local_388;
  undefined8 uStack_380;
  UnityEngine_Vector3_array *local_378;
  UnityEngine_Vector3_array *pUStack_370;
  UnityEngine_Vector4_array *local_368;
  UnityEngine_Vector4_array *pUStack_360;
  UnityEngine_Vector2_array *local_358;
  UnityEngine_Color32_array *pUStack_350;
  System_Int32_array *local_348;
  UnityEngine_Material_o *pUStack_340;
  undefined8 local_338 [6];
  uint local_308;
  int iStack_2f4;
  undefined8 local_1b8 [46];
  char local_48;
  
  if (Il2CppMethodInitialized_184346963 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectController);
    Il2CppMethodInitialized_184346963 = '\x01';
  }
  *minX = INFINITY;
  local_388 = (UnityEngine_Mesh_o *)0x0;
  uStack_380 = 0;
  *maxX = -INFINITY;
  local_378 = (UnityEngine_Vector3_array *)0x0;
  pUStack_370 = (UnityEngine_Vector3_array *)0x0;
  local_368 = (UnityEngine_Vector4_array *)0x0;
  pUStack_360 = (UnityEngine_Vector4_array *)0x0;
  local_358 = (UnityEngine_Vector2_array *)0x0;
  pUStack_350 = (UnityEngine_Color32_array *)0x0;
  local_348 = (System_Int32_array *)0x0;
  pUStack_340 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
  }
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     ((textInfo->fields).characterInfo != (TMPro_TMP_CharacterInfo_array *)0x0)) {
    pTVar18 = (textInfo->fields).characterInfo;
    if ((textInfo->fields).characterCount < (int)pTVar18->max_length) {
      pTVar18 = (TMPro_TMP_CharacterInfo_array *)textInfo;
    }
    iVar5 = (int)pTVar18->max_length;
    iVar22 = 0;
    if (0 < iVar5) {
      do {
        pTVar18 = (textInfo->fields).characterInfo;
        if (pTVar18 == (TMPro_TMP_CharacterInfo_array *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180354250(pTVar18,local_338,(longlong)iVar22);
        lVar20 = 2;
        puVar14 = local_338;
        puVar15 = local_1b8;
        do {
          puVar19 = puVar15;
          puVar17 = puVar14;
          uVar6 = puVar17[1];
          uVar8 = puVar17[2];
          uVar9 = puVar17[3];
          *puVar19 = *puVar17;
          puVar19[1] = uVar6;
          uVar6 = puVar17[4];
          uVar10 = puVar17[5];
          puVar19[2] = uVar8;
          puVar19[3] = uVar9;
          uVar8 = puVar17[6];
          uVar9 = puVar17[7];
          puVar19[4] = uVar6;
          puVar19[5] = uVar10;
          uVar6 = puVar17[8];
          uVar10 = puVar17[9];
          puVar19[6] = uVar8;
          puVar19[7] = uVar9;
          uVar8 = puVar17[10];
          uVar9 = puVar17[0xb];
          puVar19[8] = uVar6;
          puVar19[9] = uVar10;
          uVar6 = puVar17[0xc];
          uVar10 = puVar17[0xd];
          puVar19[10] = uVar8;
          puVar19[0xb] = uVar9;
          uVar8 = puVar17[0xe];
          uVar9 = puVar17[0xf];
          puVar19[0xc] = uVar6;
          puVar19[0xd] = uVar10;
          puVar19[0xe] = uVar8;
          puVar19[0xf] = uVar9;
          lVar20 = lVar20 + -1;
          puVar14 = puVar17 + 0x10;
          puVar15 = puVar19 + 0x10;
        } while (lVar20 != 0);
        uVar6 = puVar17[0x11];
        uVar8 = puVar17[0x12];
        uVar9 = puVar17[0x13];
        puVar19[0x10] = puVar17[0x10];
        puVar19[0x11] = uVar6;
        uVar6 = puVar17[0x14];
        uVar10 = puVar17[0x15];
        puVar19[0x12] = uVar8;
        puVar19[0x13] = uVar9;
        uVar8 = puVar17[0x16];
        uVar9 = puVar17[0x17];
        puVar19[0x14] = uVar6;
        puVar19[0x15] = uVar10;
        uVar6 = puVar17[0x18];
        uVar10 = puVar17[0x19];
        puVar19[0x16] = uVar8;
        puVar19[0x17] = uVar9;
        uVar8 = puVar17[0x1a];
        uVar9 = puVar17[0x1b];
        puVar19[0x18] = uVar6;
        puVar19[0x19] = uVar10;
        uVar10 = puVar17[0x1c];
        uVar11 = puVar17[0x1d];
        uVar6 = puVar17[0x1e];
        puVar19[0x1a] = uVar8;
        puVar19[0x1b] = uVar9;
        puVar19[0x1c] = uVar10;
        puVar19[0x1d] = uVar11;
        puVar19[0x1e] = uVar6;
        if (local_48 != '\0') {
          if ((TypeInfo_PatreonEffects_NameEffectController->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectController);
          }
          local_388 = (UnityEngine_Mesh_o *)0x0;
          uStack_380 = 0;
          local_378 = (UnityEngine_Vector3_array *)0x0;
          pUStack_370 = (UnityEngine_Vector3_array *)0x0;
          local_368 = (UnityEngine_Vector4_array *)0x0;
          pUStack_360 = (UnityEngine_Vector4_array *)0x0;
          local_358 = (UnityEngine_Vector2_array *)0x0;
          pUStack_350 = (UnityEngine_Color32_array *)0x0;
          local_348 = (System_Int32_array *)0x0;
          pUStack_340 = (UnityEngine_Material_o *)0x0;
          if ((textInfo->fields).meshInfo != (TMPro_TMP_MeshInfo_array *)0x0) {
            lVar20 = (longlong)(int)local_308;
            if (-1 < (int)local_308) {
              pTVar7 = (textInfo->fields).meshInfo;
              uVar16 = (uint)pTVar7->max_length;
              if ((int)local_308 < (int)uVar16) {
                if (uVar16 <= local_308) {
label_1820c831a:
                  ThrowIndexOutOfRangeException();
                }
                local_388 = pTVar7->m_Items[lVar20].fields.mesh;
                uStack_380 = *(undefined8 *)&pTVar7->m_Items[lVar20].fields.vertexCount;
                ppUVar1 = &pTVar7->m_Items[lVar20].fields.vertices;
                local_378 = *ppUVar1;
                pUStack_370 = ppUVar1[1];
                ppUVar2 = &pTVar7->m_Items[lVar20].fields.tangents;
                local_368 = *ppUVar2;
                pUStack_360 = ppUVar2[1];
                ppUVar3 = &pTVar7->m_Items[lVar20].fields.uvs2;
                local_358 = *ppUVar3;
                pUStack_350 = (UnityEngine_Color32_array *)ppUVar3[1];
                ppSVar4 = &pTVar7->m_Items[lVar20].fields.triangles;
                local_348 = *ppSVar4;
                pUStack_340 = (UnityEngine_Material_o *)ppSVar4[1];
                Il2CppCodeGenWriteBarrier(&local_388,(void *)0x0);
                iVar13 = iStack_2f4;
                pUVar12 = local_378;
                if ((local_378 != (UnityEngine_Vector3_array *)0x0) &&
                   (iStack_2f4 + 3 < (int)local_378->max_length)) {
                  iVar21 = 0;
                  do {
                    uVar16 = iVar21 + iVar13;
                    if ((uint)pUVar12->max_length <= uVar16) goto label_1820c831a;
                    local_398.x = pUVar12->m_Items[(int)uVar16].fields.x;
                    local_398.y = pUVar12->m_Items[(int)uVar16].fields.y;
                    local_398.z = pUVar12->m_Items[(int)uVar16].fields.z;
                    fVar23 = PatreonEffects_NameEffectController__ScreenX
                                       (__this,(UnityEngine_Vector3_o *)&local_398,camera,(MethodInfo *)0x0);
                    fVar24 = *minX;
                    if (fVar23 <= *minX) {
                      fVar24 = fVar23;
                    }
                    *minX = fVar24;
                    fVar24 = *maxX;
                    if (*maxX <= fVar23) {
                      fVar24 = fVar23;
                    }
                    iVar21 = iVar21 + 1;
                    *maxX = fVar24;
                  } while (iVar21 < 4);
                }
              }
            }
          }
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar5);
    }
  }
  return *minX <= *maxX && *maxX != *minX;
}


// PatreonEffects.NameEffectController$$PopCamera
// il2cpp: UnityEngine_Camera_o* PatreonEffects_NameEffectController__PopCamera (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c6f70

UnityEngine_Camera_o *
PatreonEffects_NameEffectController__PopCamera
          (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_Camera_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346964 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346964 = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    __this_01 = UnityEngine_Component__GetComponentInParent_object__664f20
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_01 == (UnityEngine_Canvas_o *)0x0) goto label_1820c7056;
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
label_1820c7056:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$ScreenX
// il2cpp: float PatreonEffects_NameEffectController__ScreenX (PatreonEffects_NameEffectController_o* __this, UnityEngine_Vector3_o localVertex, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x1820c7430

float PatreonEffects_NameEffectController__ScreenX
                (PatreonEffects_NameEffectController_o *__this,UnityEngine_Vector3_o *localVertex,
                UnityEngine_Camera_o *camera,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184346965 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_184346965 = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    __this_01 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      local_38.z = (localVertex->fields).z;
      local_38.x = (localVertex->fields).x;
      local_38.y = (localVertex->fields).y;
      pUVar3 = UnityEngine_Transform__TransformPoint
                         (local_28,__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      local_38._0_8_ = uVar1;
      local_38.z = fVar2;
      UVar4 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                        (camera,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      return UVar4.fields.x;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectController$$.ctor
// il2cpp: void PatreonEffects_NameEffectController___ctor (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x1820c8ab0

void PatreonEffects_NameEffectController___ctor
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  (__this->fields).effect = 1;
  (__this->fields).popShadowColor.fields.g = 0.0;
  (__this->fields).popShadowColor.fields.b = 0.0;
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
  *(undefined8 *)&(__this->fields).popFaceC.fields.a = 0x3f800000;
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
// 0x1820c8800

void PatreonEffects_NameEffectController___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184346966 == '\0') {
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
    Il2CppMethodInitialized_184346966 = '\x01';
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


