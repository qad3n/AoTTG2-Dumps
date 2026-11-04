// Type: Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterStyleChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register (const MethodInfo* method);
// 0x181dfd320

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register(MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344bb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderFont);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-font-preview");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effect-preview");
    Il2CppMethodInitialized_184344bb6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->_registered = true;
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    System_Action_object____ctor
              (pUVar1,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderEffect,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    }
    Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
              ("profile-character-effect-preview",(System_Action_GisketchChoiceOptionRenderContext__o *)pUVar1,
               (MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    System_Action_object____ctor
              (pUVar1,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderFont,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
              ("profile-character-font-preview",(System_Action_GisketchChoiceOptionRenderContext__o *)pUVar1,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseEffectRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x181dfdb80

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344bb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effect-preview");
    Il2CppMethodInitialized_184344bb7 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptionRenderer = "profile-character-effect-preview";
    Il2CppCodeGenWriteBarrier(&(node->fields).choiceOptionRenderer,"profile-character-effect-preview");
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseFontRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x181dfdbe0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344bb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-font-preview");
    Il2CppMethodInitialized_184344bb8 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptionRenderer = "profile-character-font-preview";
    Il2CppCodeGenWriteBarrier(&(node->fields).choiceOptionRenderer,"profile-character-font-preview");
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x181dfd470
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfd7e9: mov r8, qword ptr [rip + 0x22a4b48]  ; "Aottg2"
// asm:   0x181dfd7f0: xor r9d, r9d

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t type;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this;
  System_String_array *pSVar6;
  UnityEngine_Color_array *pUVar7;
  TMPro_TMP_Text_o *pTVar8;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar9;
  PatreonEffects_NameEffectSettings_o *settings;
  System_String_o *pSVar10;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184344bb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_184344bb9 = '\x01';
  }
  local_res8[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,(MethodInfo *)0x0);
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) goto label_181dfd887;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
            (context,(context->fields).Enabled,(MethodInfo *)0x0);
  if ((context->fields).Enabled == false) {
label_181dfd86c:
    if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar5 = System_String__op_Equality((context->fields).Value,"Color",(MethodInfo *)0x0);
    pSVar10 = "Aottg2";
    if (bVar5) {
      if (__this == (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) goto label_181dfd887;
      if (Il2CppMethodInitialized_184344bc2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
        Il2CppMethodInitialized_184344bc2 = '\x01';
      }
      pUVar7 = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,2);
      if (pUVar7 == (UnityEngine_Color_array *)0x0) goto label_181dfd887;
      if ((int)pUVar7->max_length == 0) {
label_181dfd88d:
        ThrowIndexOutOfRangeException();
      }
      pUVar7->m_Items[0].fields.r = 1.0;
      pUVar7->m_Items[0].fields.g = 1.0;
      pUVar7->m_Items[0].fields.b = 1.0;
      pUVar7->m_Items[0].fields.a = 1.0;
      if ((uint)pUVar7->max_length < 2) goto label_181dfd88d;
      pUVar7->m_Items[1].fields.r = 1.0;
      pUVar7->m_Items[1].fields.g = 1.0;
      pUVar7->m_Items[1].fields.b = 1.0;
      pUVar7->m_Items[1].fields.a = 1.0;
      goto label_181dfd7f3;
    }
    bVar5 = System_String__op_Equality((context->fields).Value,"TwoColorGradient",(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
      }
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->TwoGradient;
    }
    else {
      bVar5 = System_String__op_Equality((context->fields).Value,"FourColorGradient",(MethodInfo *)0x0);
      if (!bVar5) {
        bVar5 = PatreonEffects_NameEffectPresets__TryResolve
                          ((context->fields).Value,local_res8,(MethodInfo *)0x0);
        type = local_res8[0];
        if (bVar5) {
          pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors
                             ((context->fields).Value,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
          }
          pUVar7 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                             ((System_Collections_Generic_IList_string__o *)pSVar6,(MethodInfo *)0x0);
          pSVar10 = "Aottg2";
          if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
            if (Il2CppMethodInitialized_184344bc4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
              Il2CppMethodInitialized_184344bc4 = '\x01';
            }
            Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
                      (__this,pSVar10,(MethodInfo *)0x0);
            pTVar8 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
            if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
            }
            PatreonEffects_NameFontCatalog__Apply(pTVar8,pSVar10,(MethodInfo *)0x0);
            pTVar8 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
            if ((pTVar8 != (TMPro_TMP_Text_o *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pTVar8,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              pPVar9 = UnityEngine_GameObject__AddComponent_object_
                                 (__this_00,
                                  (MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
              (__this->fields)._effect = pPVar9;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._effect,pPVar9);
              settings = PatreonEffects_NameEffectPresets__GetPreset(type,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Color_array *)0x0) {
                if (pUVar7->max_length != 0) {
                  if ((int)pUVar7->max_length == 0) goto label_181dfd88d;
                  if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181dfd887;
                  fVar2 = pUVar7->m_Items[0].fields.g;
                  fVar3 = pUVar7->m_Items[0].fields.b;
                  fVar4 = pUVar7->m_Items[0].fields.a;
                  (settings->fields).gradientA.fields.r = pUVar7->m_Items[0].fields.r;
                  (settings->fields).gradientA.fields.g = fVar2;
                  (settings->fields).gradientA.fields.b = fVar3;
                  (settings->fields).gradientA.fields.a = fVar4;
                }
                uVar1 = (uint)pUVar7->max_length;
                if (1 < (int)uVar1) {
                  if (uVar1 < 2) goto label_181dfd88d;
                  if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181dfd887;
                  fVar2 = pUVar7->m_Items[1].fields.g;
                  fVar3 = pUVar7->m_Items[1].fields.b;
                  fVar4 = pUVar7->m_Items[1].fields.a;
                  (settings->fields).gradientB.fields.r = pUVar7->m_Items[1].fields.r;
                  (settings->fields).gradientB.fields.g = fVar2;
                  (settings->fields).gradientB.fields.b = fVar3;
                  (settings->fields).gradientB.fields.a = fVar4;
                }
                uVar1 = (uint)pUVar7->max_length;
                if (2 < (int)uVar1) {
                  if (uVar1 < 3) goto label_181dfd88d;
                  if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181dfd887;
                  fVar2 = pUVar7->m_Items[2].fields.g;
                  fVar3 = pUVar7->m_Items[2].fields.b;
                  fVar4 = pUVar7->m_Items[2].fields.a;
                  (settings->fields).gradientC.fields.r = pUVar7->m_Items[2].fields.r;
                  (settings->fields).gradientC.fields.g = fVar2;
                  (settings->fields).gradientC.fields.b = fVar3;
                  (settings->fields).gradientC.fields.a = fVar4;
                }
                uVar1 = (uint)pUVar7->max_length;
                if (3 < (int)uVar1) {
                  if (uVar1 < 4) goto label_181dfd88d;
                  if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181dfd887;
                  fVar2 = pUVar7->m_Items[3].fields.g;
                  fVar3 = pUVar7->m_Items[3].fields.b;
                  fVar4 = pUVar7->m_Items[3].fields.a;
                  (settings->fields).gradientD.fields.r = pUVar7->m_Items[3].fields.r;
                  (settings->fields).gradientD.fields.g = fVar2;
                  (settings->fields).gradientD.fields.b = fVar3;
                  (settings->fields).gradientD.fields.a = fVar4;
                }
                pPVar9 = (__this->fields)._effect;
                if (pPVar9 != (PatreonEffects_NameEffectController_o *)0x0) {
                  PatreonEffects_NameEffectController__Apply(pPVar9,settings,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto label_181dfd887;
        }
        goto label_181dfd86c;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
      }
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->FourGradient;
    }
    pUVar7 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                       ((System_Collections_Generic_IList_string__o *)pSVar6,(MethodInfo *)0x0);
    pSVar10 = "Aottg2";
    if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
label_181dfd7f3:
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                (__this,pUVar7,pSVar10,(MethodInfo *)0x0);
      return;
    }
  }
label_181dfd887:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x181dfd8a0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  System_String_o *font;
  bool bVar1;
  UnityEngine_Color32_o value;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bba = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,(MethodInfo *)0x0);
  if ((context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) &&
     (Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
                (context,(context->fields).Enabled,(MethodInfo *)0x0),
     __this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0)) {
    if ((context->fields).Enabled == false) {
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this,(MethodInfo *)0x0);
      return;
    }
    font = (context->fields).Value;
    if (Il2CppMethodInitialized_184344bc1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
      Il2CppMethodInitialized_184344bc1 = '\x01';
    }
    Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,(MethodInfo *)0x0);
    pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    PatreonEffects_NameFontCatalog__Apply(pTVar2,font,(MethodInfo *)0x0);
    pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      local_18.r = 1.0;
      local_18.g = 1.0;
      local_18.b = 1.0;
      local_18.a = 1.0;
      (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                (pTVar2,(UnityEngine_Color_o *)&local_18,(pTVar2->klass->vtable)._23_set_color.method);
      pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
      local_18.r = 1.0;
      local_18.g = 1.0;
      local_18.b = 1.0;
      local_18.a = 1.0;
      value = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_faceColor(pTVar2,value,(MethodInfo *)0x0);
        pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
        if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Preview
// il2cpp: Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x181dfd200

Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
          (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGVar3;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_184344bbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgNameStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgNameStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bbb = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    pTVar1 = (context->fields).Label;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pTVar1 = (context->fields).Label;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                  (pTVar1,(context->fields).Text,(pTVar1->klass->vtable)._66_set_text.method);
        pTVar1 = (context->fields).Label;
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pGVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pTVar1,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_AottgNameStyleChoicePreview);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            return pGVar3;
          }
          pTVar1 = (context->fields).Label;
          if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
             (__this = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
             __this != (UnityEngine_GameObject_o *)0x0)) {
            pGVar3 = UnityEngine_GameObject__AddComponent_object_
                               (__this,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgNameStyleChoicePreview
                               );
            return pGVar3;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$SetFeedback
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, bool ownsColor, const MethodInfo* method);
// 0x181dfda90

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,bool ownsColor,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  System_String_o *normal;
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_00;
  
  if (Il2CppMethodInitialized_184344bbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bbc = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    x = (UnityEngine_Object_o *)(context->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (context->fields).Root;
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181dfdb77;
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (__this,(MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback
                            );
    }
    else {
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) goto label_181dfdb77;
      normal = (context->fields).Text;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                (__this_00,normal,normal,(bool)((context->fields).Enabled & ownsColor),(MethodInfo *)0x0);
    }
    return;
  }
label_181dfdb77:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x181dfccd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfcd8e: nop 

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_StaticFields *pGVar1;
  TMPro_TextMeshProUGUI_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *__this_01;
  System_String_o *pSVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-popover");
    il2cpp_codegen_initialize_runtime_metadata(&"-options-scroll");
    Il2CppMethodInitialized_184344bbd = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    if ((context->fields).ClosedValue == false) {
      x = (UnityEngine_Object_o *)(context->fields).Root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (context->fields).Root;
        if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181dfcf4e;
        __this_01 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      }
      else {
        __this_01 = (UnityEngine_Transform_o *)0x0;
      }
      while( true ) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
           (pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0),
           pSVar3 == (System_String_o *)0x0)) break;
        bVar2 = System_String__EndsWith(pSVar3,"-popover",(MethodInfo *)0x0);
        if (bVar2) {
label_181dfce19:
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
            }
            if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) break;
            pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields;
            local_18.r = (pGVar1->DarkSurface).fields.r;
            local_18.g = (pGVar1->DarkSurface).fields.g;
            local_18.b = (pGVar1->DarkSurface).fields.b;
            local_18.a = (pGVar1->DarkSurface).fields.a;
            (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                      (pUVar4,(UnityEngine_Color_o *)&local_18,(pUVar4->klass->vtable)._23_set_color.method);
          }
        }
        else {
          pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (pSVar3 == (System_String_o *)0x0) break;
          bVar2 = System_String__EndsWith(pSVar3,"-options-scroll",(MethodInfo *)0x0);
          if (bVar2) goto label_181dfce19;
        }
        __this_01 = UnityEngine_Transform__GetParent(__this_01,(MethodInfo *)0x0);
      }
    }
    else {
      __this_00 = (context->fields).Label;
      if (__this_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponentInParent_object__664f20
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Image);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
          }
          if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_181dfcf4e;
          pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields;
          local_18.r = (pGVar1->DarkSurface).fields.r;
          local_18.g = (pGVar1->DarkSurface).fields.g;
          local_18.b = (pGVar1->DarkSurface).fields.b;
          local_18.a = (pGVar1->DarkSurface).fields.a;
          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                    (pUVar4,(UnityEngine_Color_o *)&local_18,(pUVar4->klass->vtable)._23_set_color.method);
        }
        return;
      }
    }
  }
label_181dfcf4e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_array* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x181dfcf60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfd079: nop dword ptr [rax]

UnityEngine_Color_array *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
          (System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  void *pvVar6;
  UnityEngine_Color_array *pUVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *htmlString;
  ushort uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344bbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    Il2CppMethodInitialized_184344bbe = '\x01';
  }
  if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
    pvVar6 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                        (Il2CppObject *)colors);
    pUVar7 = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,(uint32_t)pvVar6);
    uVar10 = 0;
    do {
      pSVar2 = colors->klass;
      uVar9 = 0;
      uVar1 = (pSVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pSVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar9].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string) {
            pVVar8 = pSVar2->vtable + pIVar3[uVar9].offset;
            goto label_181dfd046;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)colors,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_181dfd046:
      iVar5 = (*pVVar8->methodPtr)((Il2CppObject *)colors,pVVar8->method);
      if (iVar5 <= (int)uVar10) {
        return pUVar7;
      }
      pSVar2 = colors->klass;
      uVar1 = (pSVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pSVar2->_1).interfaceOffsets;
        uVar9 = 0;
        do {
          if (pIVar3[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string)
          {
            pVVar8 = pSVar2->vtable + pIVar3[uVar9].offset;
            goto label_181dfd0a6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)colors,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0);
label_181dfd0a6:
      htmlString = (*pVVar8->methodPtr)((Il2CppObject *)colors,uVar10,pVVar8->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
      }
      local_28[0].r = 0.0;
      local_28[0].g = 0.0;
      local_28[0].b = 0.0;
      local_28[0].a = 0.0;
      bVar4 = UnityEngine_ColorUtility__TryParseHtmlString
                        (htmlString,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      if (bVar4) {
        fVar11 = local_28[0].r;
        fVar12 = local_28[0].g;
        fVar13 = local_28[0].b;
        fVar14 = local_28[0].a;
      }
      else {
        fVar11 = 1.0;
        fVar12 = 1.0;
        fVar13 = 1.0;
        fVar14 = 1.0;
      }
      if (pUVar7 == (UnityEngine_Color_array *)0x0) break;
      if ((uint)pUVar7->max_length <= uVar10) {
        ThrowIndexOutOfRangeException();
      }
      pUVar7->m_Items[(int)uVar10].fields.r = fVar11;
      pUVar7->m_Items[(int)uVar10].fields.g = fVar12;
      pUVar7->m_Items[(int)uVar10].fields.b = fVar13;
      pUVar7->m_Items[(int)uVar10].fields.a = fVar14;
      uVar10 = uVar10 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_String_o* hex, const MethodInfo* method);
// 0x181dfd1a0

UnityEngine_Color_o *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse_1dfd1a0
          (UnityEngine_Color_o *__return_storage_ptr__,System_String_o *hex,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Color_Fields local_18;
  
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString(hex,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0)
  ;
  if (bVar1) {
    (__return_storage_ptr__->fields).r = local_18.r;
    (__return_storage_ptr__->fields).g = local_18.g;
    (__return_storage_ptr__->fields).b = local_18.b;
    (__return_storage_ptr__->fields).a = local_18.a;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->fields).r = 1.0;
  (__return_storage_ptr__->fields).g = 1.0;
  (__return_storage_ptr__->fields).b = 1.0;
  (__return_storage_ptr__->fields).a = 1.0;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor (const MethodInfo* method);
// 0x181dfdc40

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_StaticFields *pGVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_184344bbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#B7F8C8FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#8CEBFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#A8F5D6FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#97F0E8FF");
    Il2CppMethodInitialized_184344bbf = '\x01';
  }
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar2 = "#B7F8C8FF";
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = "#B7F8C8FF";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
      pSVar2 = "#8CEBFFFF";
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = "#8CEBFFFF";
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar2);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->TwoGradient = pSVar3;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->
                    TwoGradient,pSVar3);
        pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
        pSVar2 = "#B7F8C8FF";
        if (pSVar3 == (System_String_array *)0x0) goto label_181dfde0b;
        if ((int)pSVar3->max_length != 0) {
          pSVar3->m_Items[0] = "#B7F8C8FF";
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
          pSVar2 = "#A8F5D6FF";
          if (1 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[1] = "#A8F5D6FF";
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar2);
            pSVar2 = "#97F0E8FF";
            if (2 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[2] = "#97F0E8FF";
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2,pSVar2);
              pSVar2 = "#8CEBFFFF";
              if (3 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[3] = "#8CEBFFFF";
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3,pSVar2);
                TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->FourGradient
                     = pSVar3;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->
                            FourGradient,pSVar3);
                pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields;
                (pGVar1->DarkSurface).fields.r = 0.14;
                (pGVar1->DarkSurface).fields.g = 0.14;
                (pGVar1->DarkSurface).fields.b = 0.14;
                (pGVar1->DarkSurface).fields.a = 1.0;
                return;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181dfde0b:
  ThrowNullReferenceException();
}


