// Type: Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgNameStyleChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureDisabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x181e0aba0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Color_o *pUVar3;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344bc0 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (__this,"Normal",(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar1,"Normal",(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    local_18.r = 0.58;
    local_18.g = 0.58;
    local_18.b = 0.58;
    local_18.a = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method);
    pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
    pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      pUVar3 = (*(pTVar2->klass->vtable)._22_get_color.methodPtr)
                         ((UnityEngine_Color_o *)&local_18,pTVar2,(pTVar2->klass->vtable)._22_get_color.method
                         );
      local_18.r = (pUVar3->fields).r;
      local_18.g = (pUVar3->fields).g;
      local_18.b = (pUVar3->fields).b;
      local_18.a = (pUVar3->fields).a;
      value = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_faceColor(pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar1,(System_Type_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x181e0ae50

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_184344bc1 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar1,font,(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    local_18.r = 1.0;
    local_18.g = 1.0;
    local_18.b = 1.0;
    local_18.a = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method);
    pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
    local_18.r = 1.0;
    local_18.g = 1.0;
    local_18.b = 1.0;
    local_18.a = 1.0;
    value = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_faceColor(pTVar1,value,(MethodInfo *)0x0);
      pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar1,(System_Type_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureSolid
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_o color, System_String_o* font, const MethodInfo* method);
// 0x181e0b120

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,UnityEngine_Color_o *color,
               System_String_o *font,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Color_array *colors;
  
  if (Il2CppMethodInitialized_184344bc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    Il2CppMethodInitialized_184344bc2 = '\x01';
  }
  colors = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,2);
  if (colors != (UnityEngine_Color_array *)0x0) {
    if ((int)colors->max_length != 0) {
      uVar1 = (color->fields).r;
      uVar2 = (color->fields).g;
      uVar3 = (color->fields).b;
      uVar4 = (color->fields).a;
      colors->m_Items[0].fields.r = (float)uVar1;
      colors->m_Items[0].fields.g = (float)uVar2;
      colors->m_Items[0].fields.b = (float)uVar3;
      colors->m_Items[0].fields.a = (float)uVar4;
      if (1 < (uint)colors->max_length) {
        colors->m_Items[1].fields.r = (float)uVar1;
        colors->m_Items[1].fields.g = (float)uVar2;
        colors->m_Items[1].fields.b = (float)uVar3;
        colors->m_Items[1].fields.a = (float)uVar4;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (__this,colors,font,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x181e0af70

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,UnityEngine_Color_array *colors,
               System_String_o *font,MethodInfo *method)

{
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184344bc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_184344bc3 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar1,font,(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    local_38.r = 1.0;
    local_38.g = 1.0;
    local_38.b = 1.0;
    local_38.a = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,(UnityEngine_Color_o *)&local_38,(pTVar1->klass->vtable)._23_set_color.method);
    pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
    local_38.r = 1.0;
    local_38.g = 1.0;
    local_38.b = 1.0;
    local_38.a = 1.0;
    value = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_faceColor(pTVar1,value,(MethodInfo *)0x0);
      (__this->fields)._colors = colors;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._colors,colors);
      if (Il2CppMethodInitialized_184344bc6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors);
        Il2CppMethodInitialized_184344bc6 = '\x01';
      }
      if ((__this->fields)._hooked == false) {
        pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors,
                   (MethodInfo *)0x0);
        if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto label_181e0b110;
        (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                  (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
                   (pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
        (__this->fields)._hooked = true;
      }
      pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar1,(System_Type_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e0b110:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, int32_t effect, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x181e0acf0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,int32_t effect,
               UnityEngine_Color_array *colors,System_String_o *font,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TMPro_TMP_Text_o *pTVar5;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar6;
  PatreonEffects_NameEffectSettings_o *settings;
  
  if (Il2CppMethodInitialized_184344bc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_184344bc4 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,(MethodInfo *)0x0);
  pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar5,font,(MethodInfo *)0x0);
  pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181e0ae38;
    pPVar6 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    (__this->fields)._effect = pPVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._effect,pPVar6);
    settings = PatreonEffects_NameEffectPresets__GetPreset(effect,(MethodInfo *)0x0);
    if (colors == (UnityEngine_Color_array *)0x0) goto label_181e0ae38;
    if (colors->max_length != 0) {
      if ((int)colors->max_length == 0) goto label_181e0ae3e;
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181e0ae38;
      fVar2 = colors->m_Items[0].fields.g;
      fVar3 = colors->m_Items[0].fields.b;
      fVar4 = colors->m_Items[0].fields.a;
      (settings->fields).gradientA.fields.r = colors->m_Items[0].fields.r;
      (settings->fields).gradientA.fields.g = fVar2;
      (settings->fields).gradientA.fields.b = fVar3;
      (settings->fields).gradientA.fields.a = fVar4;
    }
    uVar1 = (uint)colors->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181e0ae3e;
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181e0ae38;
      fVar2 = colors->m_Items[1].fields.g;
      fVar3 = colors->m_Items[1].fields.b;
      fVar4 = colors->m_Items[1].fields.a;
      (settings->fields).gradientB.fields.r = colors->m_Items[1].fields.r;
      (settings->fields).gradientB.fields.g = fVar2;
      (settings->fields).gradientB.fields.b = fVar3;
      (settings->fields).gradientB.fields.a = fVar4;
    }
    uVar1 = (uint)colors->max_length;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_181e0ae3e;
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181e0ae38;
      fVar2 = colors->m_Items[2].fields.g;
      fVar3 = colors->m_Items[2].fields.b;
      fVar4 = colors->m_Items[2].fields.a;
      (settings->fields).gradientC.fields.r = colors->m_Items[2].fields.r;
      (settings->fields).gradientC.fields.g = fVar2;
      (settings->fields).gradientC.fields.b = fVar3;
      (settings->fields).gradientC.fields.a = fVar4;
    }
    uVar1 = (uint)colors->max_length;
    if (3 < (int)uVar1) {
      if (uVar1 < 4) {
label_181e0ae3e:
        ThrowIndexOutOfRangeException();
      }
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_181e0ae38;
      fVar2 = colors->m_Items[3].fields.g;
      fVar3 = colors->m_Items[3].fields.b;
      fVar4 = colors->m_Items[3].fields.a;
      (settings->fields).gradientD.fields.r = colors->m_Items[3].fields.r;
      (settings->fields).gradientD.fields.g = fVar2;
      (settings->fields).gradientD.fields.b = fVar3;
      (settings->fields).gradientD.fields.a = fVar4;
    }
    pPVar6 = (__this->fields)._effect;
    if (pPVar6 != (PatreonEffects_NameEffectController_o *)0x0) {
      PatreonEffects_NameEffectController__Apply(pPVar6,settings,(MethodInfo *)0x0);
      return;
    }
  }
label_181e0ae38:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$get_Text
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x181e0bb00

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_Text_o *pTVar2;
  
  if (Il2CppMethodInitialized_184344bc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bc5 = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields)._text = pTVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._text,pTVar2);
  }
  return (__this->fields)._text;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$HookVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x181e0b320

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184344bc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors);
    Il2CppMethodInitialized_184344bc6 = '\x01';
  }
  if ((__this->fields)._hooked == false) {
    pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors,
               (MethodInfo *)0x0);
    if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
              (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
               (pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
    (__this->fields)._hooked = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x181e0aab0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184344bc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bc7 = '\x01';
  }
  (__this->fields)._colors = (UnityEngine_Color_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colors,(void *)0x0);
  if ((__this->fields)._hooked != false) {
    pTVar1 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._text;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors,
                 (MethodInfo *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
                 (pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  (__this->fields)._hooked = false;
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x181e0aa00

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344bc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bc8 = '\x01';
  }
  pPVar1 = (__this->fields)._effect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = (__this->fields)._effect;
    if (pPVar1 == (PatreonEffects_NameEffectController_o *)0x0) {
      ThrowNullReferenceException();
    }
    PatreonEffects_NameEffectController__Clear(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._effect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    (__this->fields)._effect = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._effect,(void *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ResetPlainVisuals
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x181e0b490

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *__this_00;
  TMPro_TMP_FontAsset_o *pTVar1;
  bool bVar2;
  TMPro_TMP_Text_o *pTVar3;
  System_Object_array *pSVar4;
  TMPro_TMP_Text_o *pTVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184344bc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"PopExtrusion");
    il2cpp_codegen_initialize_runtime_metadata(&"PopShadow");
    Il2CppMethodInitialized_184344bc9 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184344bca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponents_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bca = '\x01';
  }
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    pSVar4 = UnityEngine_Component__GetComponents_object__665710
                       ((UnityEngine_Component_o *)pTVar3,
                        (MethodInfo_665710 *)
                        MethodInfo_UnityEngine_Component_GetComponents_NameEffectController);
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar6 = 0;
label_181e0b560:
      do {
        if ((int)pSVar4->max_length <= (int)uVar6) goto label_181e0b62d;
        if ((uint)pSVar4->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (PatreonEffects_NameEffectController_o *)pSVar4->m_Items[(int)uVar6];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          if (__this_00 == (PatreonEffects_NameEffectController_o *)0x0) break;
          PatreonEffects_NameEffectController__Clear(__this_00,(MethodInfo *)0x0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
          }
          bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (!bVar2) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            goto label_181e0b560;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
  }
label_181e0b736:
  ThrowNullReferenceException();
label_181e0b62d:
  (__this->fields)._effect = (PatreonEffects_NameEffectController_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._effect,(void *)0x0);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,"PopShadow",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,"PopExtrusion",(MethodInfo *)0x0);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar3,font,(MethodInfo *)0x0);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    pTVar1 = (pTVar3->fields).m_fontAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
      pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
      if (((pTVar5 == (TMPro_TMP_Text_o *)0x0) ||
          (pTVar1 = (pTVar5->fields).m_fontAsset, pTVar1 == (TMPro_TMP_FontAsset_o *)0x0)) ||
         (pTVar3 == (TMPro_TMP_Text_o *)0x0)) goto label_181e0b736;
      (*(pTVar3->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                (pTVar3,(pTVar1->fields).m_Material,(pTVar3->klass->vtable)._68_set_fontSharedMaterial.method)
      ;
    }
    return;
  }
  goto label_181e0b736;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearAllEffects
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x181e0a880
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0a8fe: nop 

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *__this_00;
  bool bVar1;
  TMPro_TMP_Text_o *__this_01;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344bca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponents_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bca = '\x01';
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponents_object__665710
                       ((UnityEngine_Component_o *)__this_01,
                        (MethodInfo_665710 *)
                        MethodInfo_UnityEngine_Component_GetComponents_NameEffectController);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar3 = 0;
label_181e0a900:
      do {
        if ((int)pSVar2->max_length <= (int)uVar3) {
          (__this->fields)._effect = (PatreonEffects_NameEffectController_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._effect,(void *)0x0);
          return;
        }
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (PatreonEffects_NameEffectController_o *)pSVar2->m_Items[(int)uVar3];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          if (__this_00 == (PatreonEffects_NameEffectController_o *)0x0) break;
          PatreonEffects_NameEffectController__Clear(__this_00,(MethodInfo *)0x0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
          }
          bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (!bVar1) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            uVar3 = uVar3 + 1;
            goto label_181e0a900;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
        }
        uVar3 = uVar3 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$DestroyStalePopLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181e0b1b0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *name,
               MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  
  if (Il2CppMethodInitialized_184344bcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bcb = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)0x0);
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    pUVar2 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181e0b312;
        pUVar2 = UnityEngine_Transform__Find(pUVar2,name,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
          }
          bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181e0b312;
          if (bVar1) {
            pUVar3 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
            return;
          }
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar3,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
label_181e0b312:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ApplyVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x181e0a460
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0a50f: nop 
// asm:   0x181e0a5ee: nop 
// asm:   0x181e0a69c: nop dword ptr [rax]
// asm:   0x181e0a785: nop word ptr [rax + rax]
// asm:   0x181e0a812: movaps xmm8, xmmword ptr [rsp + 0x3a0]
// asm:   0x181e0a81b: movaps xmm7, xmmword ptr [rsp + 0x3b0]
// asm:   0x181e0a823: movaps xmm6, xmmword ptr [rsp + 0x3c0]
// asm:   0x181e0a82b: mov r14, qword ptr [rsp + 0x3d0]
// asm:   0x181e0a833: mov rdi, qword ptr [rsp + 0x408]
// asm:   0x181e0a83b: mov rsi, qword ptr [rsp + 0x400]
// asm:   0x181e0a843: mov rbp, qword ptr [rsp + 0x3f8]
// asm:   0x181e0a84b: mov rbx, qword ptr [rsp + 0x3f0]
// asm:   0x181e0a853: movaps xmm9, xmmword ptr [rsp + 0x390]

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_CharacterInfo_array *pTVar2;
  undefined8 uVar3;
  TMPro_TMP_MeshInfo_array *pTVar4;
  UnityEngine_Vector3_array *pUVar5;
  UnityEngine_Color32_array *pUVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  UnityEngine_Color32_o UVar17;
  undefined8 *puVar18;
  UnityEngine_Color_o *pUVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_Color_Fields local_3c8 [6];
  UnityEngine_Color_o local_368;
  undefined8 local_358 [6];
  uint local_328;
  int iStack_314;
  undefined8 local_1d8 [46];
  char local_68;
  
  if (((__this->fields)._colors != (UnityEngine_Color_array *)0x0) &&
     (((__this->fields)._colors)->max_length != 0)) {
    if (textInfo == (TMPro_TMP_TextInfo_o *)0x0) {
label_181e0a868:
      ThrowNullReferenceException();
    }
    fVar27 = INFINITY;
    fVar26 = -INFINITY;
    for (iVar23 = 0; iVar23 < (textInfo->fields).characterCount; iVar23 = iVar23 + 1) {
      pTVar2 = (textInfo->fields).characterInfo;
      if (pTVar2 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_181e0a868;
      il2cpp_runtime_helper_180354250(pTVar2,local_358,(longlong)iVar23);
      lVar22 = 2;
      puVar15 = local_358;
      puVar16 = local_1d8;
      do {
        puVar20 = puVar16;
        puVar18 = puVar15;
        uVar3 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar20 = *puVar18;
        puVar20[1] = uVar3;
        uVar3 = puVar18[4];
        uVar13 = puVar18[5];
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar20[4] = uVar3;
        puVar20[5] = uVar13;
        uVar3 = puVar18[8];
        uVar13 = puVar18[9];
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar20[8] = uVar3;
        puVar20[9] = uVar13;
        uVar3 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar20[10] = uVar11;
        puVar20[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar20[0xc] = uVar3;
        puVar20[0xd] = uVar13;
        puVar20[0xe] = uVar11;
        puVar20[0xf] = uVar12;
        lVar22 = lVar22 + -1;
        puVar15 = puVar18 + 0x10;
        puVar16 = puVar20 + 0x10;
      } while (lVar22 != 0);
      uVar3 = puVar18[0x11];
      uVar11 = puVar18[0x12];
      uVar12 = puVar18[0x13];
      puVar20[0x10] = puVar18[0x10];
      puVar20[0x11] = uVar3;
      uVar3 = puVar18[0x14];
      uVar13 = puVar18[0x15];
      puVar20[0x12] = uVar11;
      puVar20[0x13] = uVar12;
      uVar11 = puVar18[0x16];
      uVar12 = puVar18[0x17];
      puVar20[0x14] = uVar3;
      puVar20[0x15] = uVar13;
      uVar3 = puVar18[0x18];
      uVar13 = puVar18[0x19];
      puVar20[0x16] = uVar11;
      puVar20[0x17] = uVar12;
      uVar11 = puVar18[0x1a];
      uVar12 = puVar18[0x1b];
      puVar20[0x18] = uVar3;
      puVar20[0x19] = uVar13;
      uVar13 = puVar18[0x1c];
      uVar14 = puVar18[0x1d];
      uVar3 = puVar18[0x1e];
      puVar20[0x1a] = uVar11;
      puVar20[0x1b] = uVar12;
      puVar20[0x1c] = uVar13;
      puVar20[0x1d] = uVar14;
      puVar20[0x1e] = uVar3;
      if (local_68 != '\0') {
        pTVar4 = (textInfo->fields).meshInfo;
        if (pTVar4 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_181e0a868;
        if ((uint)pTVar4->max_length <= local_328) goto label_181e0a86e;
        pUVar5 = pTVar4->m_Items[(int)local_328].fields.vertices;
        iVar21 = 0;
        if (pUVar5 == (UnityEngine_Vector3_array *)0x0) goto label_181e0a868;
        do {
          if ((uint)pUVar5->max_length <= (uint)(iVar21 + iStack_314)) goto label_181e0a86e;
          fVar25 = pUVar5->m_Items[iVar21 + iStack_314].fields.x;
          if (fVar25 <= fVar27) {
            fVar27 = fVar25;
          }
          if (fVar26 <= fVar25) {
            fVar26 = fVar25;
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 4);
      }
    }
    if (fVar27 < fVar26) {
      fVar26 = fVar26 - fVar27;
      if (fVar26 <= 0.001) {
        fVar26 = 0.001;
      }
      for (iVar23 = 0; iVar23 < (textInfo->fields).characterCount; iVar23 = iVar23 + 1) {
        pTVar2 = (textInfo->fields).characterInfo;
        if (pTVar2 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_181e0a868;
        il2cpp_runtime_helper_180354250(pTVar2,local_358,(longlong)iVar23);
        iVar21 = iStack_314;
        lVar22 = 2;
        puVar15 = local_358;
        puVar16 = local_1d8;
        do {
          puVar20 = puVar16;
          puVar18 = puVar15;
          uVar3 = puVar18[1];
          uVar11 = puVar18[2];
          uVar12 = puVar18[3];
          *puVar20 = *puVar18;
          puVar20[1] = uVar3;
          uVar3 = puVar18[4];
          uVar13 = puVar18[5];
          puVar20[2] = uVar11;
          puVar20[3] = uVar12;
          uVar11 = puVar18[6];
          uVar12 = puVar18[7];
          puVar20[4] = uVar3;
          puVar20[5] = uVar13;
          uVar3 = puVar18[8];
          uVar13 = puVar18[9];
          puVar20[6] = uVar11;
          puVar20[7] = uVar12;
          uVar11 = puVar18[10];
          uVar12 = puVar18[0xb];
          puVar20[8] = uVar3;
          puVar20[9] = uVar13;
          uVar3 = puVar18[0xc];
          uVar13 = puVar18[0xd];
          puVar20[10] = uVar11;
          puVar20[0xb] = uVar12;
          uVar11 = puVar18[0xe];
          uVar12 = puVar18[0xf];
          puVar20[0xc] = uVar3;
          puVar20[0xd] = uVar13;
          puVar20[0xe] = uVar11;
          puVar20[0xf] = uVar12;
          lVar22 = lVar22 + -1;
          puVar15 = puVar18 + 0x10;
          puVar16 = puVar20 + 0x10;
        } while (lVar22 != 0);
        uVar3 = puVar18[0x11];
        uVar11 = puVar18[0x12];
        uVar12 = puVar18[0x13];
        puVar20[0x10] = puVar18[0x10];
        puVar20[0x11] = uVar3;
        uVar3 = puVar18[0x14];
        uVar13 = puVar18[0x15];
        puVar20[0x12] = uVar11;
        puVar20[0x13] = uVar12;
        uVar11 = puVar18[0x16];
        uVar12 = puVar18[0x17];
        puVar20[0x14] = uVar3;
        puVar20[0x15] = uVar13;
        uVar3 = puVar18[0x18];
        uVar13 = puVar18[0x19];
        puVar20[0x16] = uVar11;
        puVar20[0x17] = uVar12;
        uVar11 = puVar18[0x1a];
        uVar12 = puVar18[0x1b];
        puVar20[0x18] = uVar3;
        puVar20[0x19] = uVar13;
        uVar7 = *(undefined4 *)(puVar18 + 0x1c);
        uVar8 = *(undefined4 *)((longlong)puVar18 + 0xe4);
        uVar9 = *(undefined4 *)(puVar18 + 0x1d);
        uVar10 = *(undefined4 *)((longlong)puVar18 + 0xec);
        uVar3 = puVar18[0x1e];
        puVar20[0x1a] = uVar11;
        puVar20[0x1b] = uVar12;
        *(undefined4 *)(puVar20 + 0x1c) = uVar7;
        *(undefined4 *)((longlong)puVar20 + 0xe4) = uVar8;
        *(undefined4 *)(puVar20 + 0x1d) = uVar9;
        *(undefined4 *)((longlong)puVar20 + 0xec) = uVar10;
        puVar20[0x1e] = uVar3;
        if (local_68 != '\0') {
          pTVar4 = (textInfo->fields).meshInfo;
          if (pTVar4 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_181e0a868;
          if ((uint)pTVar4->max_length <= local_328) {
label_181e0a86e:
            ThrowIndexOutOfRangeException();
          }
          pUVar6 = pTVar4->m_Items[(int)local_328].fields.colors32;
          pUVar5 = pTVar4->m_Items[(int)local_328].fields.vertices;
          iVar24 = 0;
          if (pUVar5 == (UnityEngine_Vector3_array *)0x0) goto label_181e0a868;
          do {
            uVar1 = iVar24 + iVar21;
            if ((uint)pUVar5->max_length <= uVar1) goto label_181e0a86e;
            fVar25 = (pUVar5->m_Items[(int)uVar1].fields.x - fVar27) / fVar26;
            if (fVar25 < 0.0) {
              fVar25 = 0.0;
            }
            else if (1.0 < fVar25) {
              fVar25 = 1.0;
            }
            pUVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                                (&local_368,__this,fVar25,(MethodInfo *)0x0);
            local_3c8[0].r = (pUVar19->fields).r;
            local_3c8[0].g = (pUVar19->fields).g;
            local_3c8[0].b = (pUVar19->fields).b;
            local_3c8[0].a = (pUVar19->fields).a;
            UVar17 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)local_3c8,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_Color32_array *)0x0) goto label_181e0a868;
            uVar1 = iVar24 + iVar21;
            if ((uint)pUVar6->max_length <= uVar1) goto label_181e0a86e;
            iVar24 = iVar24 + 1;
            pUVar6->m_Items[(int)uVar1].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
          } while (iVar24 < 4);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$TryBounds
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, const MethodInfo* method);
// 0x181e0b910
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0baa0: mov rax, rbx
// asm:   0x181e0baa3: jmp 0x181e0baad

bool Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               float *minX,float *maxX,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  TMPro_TMP_CharacterInfo_array *pTVar3;
  undefined8 uVar4;
  TMPro_TMP_MeshInfo_array *pTVar5;
  UnityEngine_Vector3_array *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  UnityEngine_Vector3_o *pUVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  undefined8 local_328 [6];
  uint local_2f8;
  int iStack_2e4;
  undefined8 local_1a8 [46];
  char local_38;
  
  *minX = INFINITY;
  *maxX = -INFINITY;
  if (textInfo == (TMPro_TMP_TextInfo_o *)0x0) {
label_181e0baed:
    ThrowNullReferenceException();
  }
  iVar18 = 0;
  do {
    if ((textInfo->fields).characterCount <= iVar18) {
      return *minX <= *maxX && *maxX != *minX;
    }
    pTVar3 = (textInfo->fields).characterInfo;
    if (pTVar3 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_181e0baed;
    il2cpp_runtime_helper_180354250(pTVar3,local_328,(longlong)iVar18);
    lVar17 = 2;
    puVar11 = local_328;
    puVar12 = local_1a8;
    do {
      puVar16 = puVar12;
      puVar13 = puVar11;
      uVar4 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      *puVar16 = *puVar13;
      puVar16[1] = uVar4;
      uVar4 = puVar13[4];
      uVar9 = puVar13[5];
      puVar16[2] = uVar7;
      puVar16[3] = uVar8;
      uVar7 = puVar13[6];
      uVar8 = puVar13[7];
      puVar16[4] = uVar4;
      puVar16[5] = uVar9;
      uVar4 = puVar13[8];
      uVar9 = puVar13[9];
      puVar16[6] = uVar7;
      puVar16[7] = uVar8;
      uVar7 = puVar13[10];
      uVar8 = puVar13[0xb];
      puVar16[8] = uVar4;
      puVar16[9] = uVar9;
      uVar4 = puVar13[0xc];
      uVar9 = puVar13[0xd];
      puVar16[10] = uVar7;
      puVar16[0xb] = uVar8;
      uVar7 = puVar13[0xe];
      uVar8 = puVar13[0xf];
      puVar16[0xc] = uVar4;
      puVar16[0xd] = uVar9;
      puVar16[0xe] = uVar7;
      puVar16[0xf] = uVar8;
      lVar17 = lVar17 + -1;
      puVar11 = puVar13 + 0x10;
      puVar12 = puVar16 + 0x10;
    } while (lVar17 != 0);
    uVar4 = puVar13[0x11];
    uVar7 = puVar13[0x12];
    uVar8 = puVar13[0x13];
    puVar16[0x10] = puVar13[0x10];
    puVar16[0x11] = uVar4;
    uVar4 = puVar13[0x14];
    uVar9 = puVar13[0x15];
    puVar16[0x12] = uVar7;
    puVar16[0x13] = uVar8;
    uVar7 = puVar13[0x16];
    uVar8 = puVar13[0x17];
    puVar16[0x14] = uVar4;
    puVar16[0x15] = uVar9;
    uVar4 = puVar13[0x18];
    uVar9 = puVar13[0x19];
    puVar16[0x16] = uVar7;
    puVar16[0x17] = uVar8;
    uVar7 = puVar13[0x1a];
    uVar8 = puVar13[0x1b];
    puVar16[0x18] = uVar4;
    puVar16[0x19] = uVar9;
    uVar9 = puVar13[0x1c];
    uVar10 = puVar13[0x1d];
    uVar4 = puVar13[0x1e];
    puVar16[0x1a] = uVar7;
    puVar16[0x1b] = uVar8;
    puVar16[0x1c] = uVar9;
    puVar16[0x1d] = uVar10;
    puVar16[0x1e] = uVar4;
    if (local_38 != '\0') {
      pTVar5 = (textInfo->fields).meshInfo;
      if (pTVar5 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_181e0baed;
      if ((uint)pTVar5->max_length <= local_2f8) {
label_181e0bae7:
        ThrowIndexOutOfRangeException();
      }
      pUVar6 = pTVar5->m_Items[(int)local_2f8].fields.vertices;
      iVar15 = 0;
      if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto label_181e0baed;
      do {
        uVar1 = iVar15 + iStack_2e4;
        if ((uint)pUVar6->max_length <= uVar1) goto label_181e0bae7;
        fVar2 = pUVar6->m_Items[(int)uVar1].fields.x;
        pUVar14 = (UnityEngine_Vector3_o *)minX;
        if (fVar2 < *minX || fVar2 == *minX) {
          pUVar14 = pUVar6->m_Items + (int)uVar1;
        }
        *minX = (pUVar14->fields).x;
        fVar19 = *maxX;
        if (*maxX <= fVar2) {
          fVar19 = fVar2;
        }
        iVar15 = iVar15 + 1;
        *maxX = fVar19;
      } while (iVar15 < 4);
    }
    iVar18 = iVar18 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$Sample
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, float t, const MethodInfo* method);
// 0x181e0b750

UnityEngine_Color_o *
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
          (UnityEngine_Color_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_array *pUVar6;
  uint uVar7;
  uint uVar8;
  MethodInfo *method_00;
  double dVar9;
  float fVar10;
  
  pUVar6 = (__this->fields)._colors;
  if (pUVar6 != (UnityEngine_Color_array *)0x0) {
    if ((int)pUVar6->max_length == 1) {
      if (pUVar6 == (UnityEngine_Color_array *)0x0) goto label_181e0b903;
      if ((int)pUVar6->max_length == 0) goto label_181e0b909;
      fVar10 = pUVar6->m_Items[0].fields.g;
      fVar1 = pUVar6->m_Items[0].fields.b;
      fVar2 = pUVar6->m_Items[0].fields.a;
      (__return_storage_ptr__->fields).r = pUVar6->m_Items[0].fields.r;
      (__return_storage_ptr__->fields).g = fVar10;
      (__return_storage_ptr__->fields).b = fVar1;
      (__return_storage_ptr__->fields).a = fVar2;
    }
    else {
      if (t < 0.0) {
        t = 0.0;
      }
      else if (1.0 < t) {
        t = 1.0;
      }
      fVar10 = (float)((int)pUVar6->max_length + -1) * t;
      method_00 = (MethodInfo *)__this;
      if (Il2CppMethodInitialized_18433df26 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433df26 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar9 = il2cpp_runtime_helper_1804f4690((double)fVar10,method_00);
      pUVar6 = (__this->fields)._colors;
      if (pUVar6 == (UnityEngine_Color_array *)0x0) goto label_181e0b903;
      uVar8 = (int)pUVar6->max_length - 2;
      uVar7 = (int)dVar9;
      if ((int)uVar8 <= (int)dVar9) {
        uVar7 = uVar8;
      }
      pUVar6 = (__this->fields)._colors;
      if (((uint)pUVar6->max_length <= uVar7) || ((uint)pUVar6->max_length <= uVar7 + 1)) {
label_181e0b909:
        ThrowIndexOutOfRangeException();
      }
      fVar10 = fVar10 - (float)(int)uVar7;
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      else if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      fVar1 = pUVar6->m_Items[(int)uVar7].fields.r;
      fVar2 = pUVar6->m_Items[(int)uVar7].fields.g;
      fVar3 = pUVar6->m_Items[(int)uVar7].fields.b;
      fVar4 = pUVar6->m_Items[(int)uVar7].fields.a;
      fVar5 = pUVar6->m_Items[(longlong)(int)uVar7 + 1].fields.b;
      (__return_storage_ptr__->fields).r =
           (pUVar6->m_Items[(longlong)(int)uVar7 + 1].fields.r - fVar1) * fVar10 + fVar1;
      fVar1 = pUVar6->m_Items[(longlong)(int)uVar7 + 1].fields.g;
      (__return_storage_ptr__->fields).b = (fVar5 - fVar3) * fVar10 + fVar3;
      (__return_storage_ptr__->fields).g = (fVar1 - fVar2) * fVar10 + fVar2;
      (__return_storage_ptr__->fields).a =
           (pUVar6->m_Items[(longlong)(int)uVar7 + 1].fields.a - fVar4) * fVar10 + fVar4;
    }
    return __return_storage_ptr__;
  }
label_181e0b903:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x181e0b3d0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344bc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bc8 = '\x01';
  }
  pPVar1 = (__this->fields)._effect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = (__this->fields)._effect;
    if (pPVar1 == (PatreonEffects_NameEffectController_o *)0x0) {
      ThrowNullReferenceException();
    }
    PatreonEffects_NameEffectController__Clear(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._effect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    (__this->fields)._effect = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._effect,(void *)0x0);
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor(Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


