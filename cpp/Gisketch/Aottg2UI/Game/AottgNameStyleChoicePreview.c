// Type: Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgNameStyleChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureDisabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e7590

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_07545534 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07545534 = '\x01';
    in_RDX = extraout_RDX;
  }
  pMVar3 = (MethodInfo *)"Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,"Normal",in_RDX);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pMVar3 = (MethodInfo *)"Normal";
  PatreonEffects_NameFontCatalog__Apply(pTVar1,"Normal",(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    pMVar3 = (pTVar1->klass->vtable)._23_set_color.method;
    UVar4.fields.b = 0.58;
    UVar4.fields.a = 1.0;
    UVar4.fields.r = 0.58;
    UVar4.fields.g = 0.58;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)(pTVar1,UVar4,pMVar3);
    pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
    pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      UVar4 = (*(pTVar2->klass->vtable)._22_get_color.methodPtr)
                        (pTVar2,(pTVar2->klass->vtable)._22_get_color.method);
      value.fields._overlap_0 =
           (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(UVar4.fields._0_8_,UVar4.fields._8_8_,0);
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        pMVar3 = (MethodInfo *)(ulong)(uint)value.fields._overlap_0;
        TMPro_TMP_Text__set_faceColor(pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x58e7cd0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_o *pTVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar2;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07545535 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_07545535 = '\x01';
    method = extraout_RDX;
  }
  pMVar2 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,method);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar2);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar1,font,(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    pMVar2 = (pTVar1->klass->vtable)._23_set_color.method;
    UVar3.fields.b = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.g = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)(pTVar1,UVar3,pMVar2);
    pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar2);
    value.fields._overlap_0 =
         (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0x3f8000003f800000,0x3f8000003f800000,0);
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      pMVar2 = (MethodInfo *)(ulong)(uint)value.fields._overlap_0;
      TMPro_TMP_Text__set_faceColor(pTVar1,value,(MethodInfo *)0x0);
      pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar2);
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureSolid
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_o color, System_String_o* font, const MethodInfo* method);
// 0x58e76b0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,UnityEngine_Color_o color,
               System_String_o *font,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Color_array *colors;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545536 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    Il2CppMethodInitialized_07545536 = '\x01';
  }
  colors = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,2);
  if (colors == (UnityEngine_Color_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)colors->max_length;
  fStack_28 = color.fields.r;
  fStack_24 = color.fields.g;
  if (uVar1 != 0) {
    colors->m_Items[0].fields.r = fStack_28;
    colors->m_Items[0].fields.g = fStack_24;
    colors->m_Items[0].fields.b = color.fields.b;
    colors->m_Items[0].fields.a = color.fields.a;
    if (uVar1 != 1) {
      colors->m_Items[1].fields.r = fStack_28;
      colors->m_Items[1].fields.g = fStack_24;
      colors->m_Items[1].fields.b = color.fields.b;
      colors->m_Items[1].fields.a = color.fields.a;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                (__this,colors,font,(MethodInfo *)(ulong)uVar1);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x58e7990

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,UnityEngine_Color_array *colors,
               System_String_o *font,MethodInfo *method)

{
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_o *pTVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar2;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar3;
  
  pMVar2 = (MethodInfo *)font;
  if (Il2CppMethodInitialized_07545537 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_07545537 = '\x01';
    pMVar2 = extraout_RDX;
  }
  method_00 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,pMVar2);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_00);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar1,font,(MethodInfo *)0x0);
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    pMVar2 = (pTVar1->klass->vtable)._23_set_color.method;
    UVar3.fields.b = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.g = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)(pTVar1,UVar3,pMVar2);
    pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar2);
    value.fields._overlap_0 =
         (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0x3f8000003f800000,0x3f8000003f800000,0);
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_faceColor(pTVar1,value,(MethodInfo *)0x0);
      (__this->fields)._colors = colors;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._colors);
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors(__this,(MethodInfo *)colors);
      pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)colors);
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, int32_t effect, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x58e7ab0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,int32_t effect,
               UnityEngine_Color_array *colors,System_String_o *font,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TMPro_TMP_Text_o *pTVar4;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar5;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_array *extraout_RDX;
  UnityEngine_Color_array *method_00;
  PatreonEffects_NameEffectController_o **targetAddress;
  MethodInfo *method_01;
  
  method_00 = colors;
  if (Il2CppMethodInitialized_07545538 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_07545538 = '\x01';
    method_00 = extraout_RDX;
  }
  method_01 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,(MethodInfo *)method_00);
  pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_01);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar4,font,(MethodInfo *)0x0);
  pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar4,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pPVar5 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
      (__this->fields)._effect = pPVar5;
      targetAddress = &(__this->fields)._effect;
      Il2CppCodeGenWriteBarrier(targetAddress);
      settings = PatreonEffects_NameEffectPresets__GetPreset(effect,(MethodInfo *)0x0);
      if (colors != (UnityEngine_Color_array *)0x0) {
        if (colors->max_length != 0) {
          if ((int)colors->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_058e7be4;
          fVar1 = colors->m_Items[0].fields.g;
          fVar2 = colors->m_Items[0].fields.b;
          fVar3 = colors->m_Items[0].fields.a;
          (settings->fields).gradientA.fields.r = colors->m_Items[0].fields.r;
          (settings->fields).gradientA.fields.g = fVar1;
          (settings->fields).gradientA.fields.b = fVar2;
          (settings->fields).gradientA.fields.a = fVar3;
          if (1 < (int)colors->max_length) {
            fVar1 = colors->m_Items[1].fields.g;
            fVar2 = colors->m_Items[1].fields.b;
            fVar3 = colors->m_Items[1].fields.a;
            (settings->fields).gradientB.fields.r = colors->m_Items[1].fields.r;
            (settings->fields).gradientB.fields.g = fVar1;
            (settings->fields).gradientB.fields.b = fVar2;
            (settings->fields).gradientB.fields.a = fVar3;
            if (2 < (int)colors->max_length) {
              fVar1 = colors->m_Items[2].fields.g;
              fVar2 = colors->m_Items[2].fields.b;
              fVar3 = colors->m_Items[2].fields.a;
              (settings->fields).gradientC.fields.r = colors->m_Items[2].fields.r;
              (settings->fields).gradientC.fields.g = fVar1;
              (settings->fields).gradientC.fields.b = fVar2;
              (settings->fields).gradientC.fields.a = fVar3;
              if (3 < (int)colors->max_length) {
                fVar1 = colors->m_Items[3].fields.g;
                fVar2 = colors->m_Items[3].fields.b;
                fVar3 = colors->m_Items[3].fields.a;
                (settings->fields).gradientD.fields.r = colors->m_Items[3].fields.r;
                (settings->fields).gradientD.fields.g = fVar1;
                (settings->fields).gradientD.fields.b = fVar2;
                (settings->fields).gradientD.fields.a = fVar3;
              }
            }
          }
        }
        pPVar5 = *targetAddress;
        if (pPVar5 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(pPVar5,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_058e7be4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$get_Text
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e8120

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **targetAddress;
  bool bVar1;
  TMPro_TMP_Text_o *pTVar2;
  
  if (Il2CppMethodInitialized_07545539 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545539 = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._text;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields)._text = pTVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return *targetAddress;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$HookVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e81b0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_0754553a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors);
    Il2CppMethodInitialized_0754553a = '\x01';
  }
  if ((__this->fields)._hooked != false) {
    return;
  }
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors,
             (MethodInfo_4A81BE0 *)0x0);
  if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
            (pTVar1,__this_00,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
  (__this->fields)._hooked = true;
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e8250

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_0754553b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754553b = '\x01';
  }
  (__this->fields)._colors = (UnityEngine_Color_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colors);
  if ((__this->fields)._hooked != false) {
    pTVar1 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._text;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors,
                 (MethodInfo_4A81BE0 *)0x0);
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,__this_00,(pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  (__this->fields)._hooked = false;
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e8330

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  PatreonEffects_NameEffectController_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754553c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754553c = '\x01';
  }
  pPVar1 = (__this->fields)._effect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  targetAddress = &(__this->fields)._effect;
  if (*targetAddress == (PatreonEffects_NameEffectController_o *)0x0) {
    ThrowNullReferenceException();
  }
  PatreonEffects_NameEffectController__Clear(*targetAddress,(MethodInfo *)0x0);
  pPVar1 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
  *targetAddress = (PatreonEffects_NameEffectController_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ResetPlainVisuals
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x58e7fd0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  TMPro_TMP_FontAsset_o *pTVar1;
  bool bVar2;
  TMPro_TMP_Text_o *pTVar3;
  TMPro_TMP_Text_o *pTVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar5;
  
  pMVar5 = (MethodInfo *)font;
  if (Il2CppMethodInitialized_0754553d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"PopExtrusion");
    il2cpp_codegen_initialize_runtime_metadata(&"PopShadow");
    Il2CppMethodInitialized_0754553d = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,pMVar5);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects(__this,pMVar5);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,"PopShadow",method_00);
  pMVar5 = (MethodInfo *)"PopExtrusion";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,"PopExtrusion",method_01);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar3,font,(MethodInfo *)0x0);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    pTVar1 = (pTVar3->fields).m_fontAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar5 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
    if (((pTVar4 != (TMPro_TMP_Text_o *)0x0) &&
        (pTVar1 = (pTVar4->fields).m_fontAsset, pTVar1 != (TMPro_TMP_FontAsset_o *)0x0)) &&
       (pTVar3 != (TMPro_TMP_Text_o *)0x0)) {
      (*(pTVar3->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                (pTVar3,(pTVar1->fields).m_Material,(pTVar3->klass->vtable)._68_set_fontSharedMaterial.method)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearAllEffects
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e83e0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint32_t uVar2;
  PatreonEffects_NameEffectController_o *__this_00;
  bool bVar3;
  TMPro_TMP_Text_o *__this_01;
  System_Object_array *pSVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_0754553e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponents_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754553e = '\x01';
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method);
  if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
    pSVar4 = UnityEngine_Component__GetComponents_object__34b1030
                       ((UnityEngine_Component_o *)__this_01,
                        (MethodInfo_34B1030 *)
                        MethodInfo_UnityEngine_Component_GetComponents_NameEffectController);
    if (pSVar4 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar4->max_length) {
        uVar5 = pSVar4->max_length & 0xffffffff;
        uVar6 = 0;
        do {
          if (uVar5 <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (PatreonEffects_NameEffectController_o *)pSVar4->m_Items[uVar6];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            if (__this_00 == (PatreonEffects_NameEffectController_o *)0x0) goto label_058e856c;
            PatreonEffects_NameEffectController__Clear(__this_00,(MethodInfo *)0x0);
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
            }
            bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
            if (bVar3) {
              if (uVar2 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            }
            else {
              if (uVar2 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__DestroyImmediate_6921750
                        ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            }
          }
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar4->max_length;
          uVar5 = (ulong)uVar1;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
      (__this->fields)._effect = (PatreonEffects_NameEffectController_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._effect);
      return;
    }
  }
label_058e856c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$DestroyStalePopLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* name, const MethodInfo* method);
// 0x58e8580

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *name,
               MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)name;
  if (Il2CppMethodInitialized_0754553f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754553f = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_00);
  if ((__this_00 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar2 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar2,name,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      else {
        bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      }
      if (bVar1) {
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_6921750(pUVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ApplyVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x58e86f0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  UnityEngine_Color_array *pUVar4;
  TMPro_TMP_CharacterInfo_array *pTVar5;
  TMPro_TMP_MeshInfo_array *pTVar6;
  UnityEngine_Vector3_array *method_00;
  UnityEngine_Color32_array *pUVar7;
  bool bVar8;
  _struct_53532 _Var9;
  UnityEngine_Vector3_array *method_01;
  MethodInfo *in_R8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  float fStack_48;
  float fStack_44;
  UnityEngine_Vector3_array *pUStack_40;
  TMPro_TMP_TextInfo_o *pTStack_38;
  
  fStack_44 = 0.0;
  fStack_48 = 0.0;
  pUVar4 = (__this->fields)._colors;
  if ((pUVar4 != (UnityEngine_Color_array *)0x0) && (pUVar4->max_length != 0)) {
    bVar8 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                      (__this,textInfo,&fStack_44,&fStack_48,in_R8);
    fVar16 = fStack_44;
    if (bVar8) {
      if (textInfo == (TMPro_TMP_TextInfo_o *)0x0) {
label_058e8a31:
        ThrowNullReferenceException();
      }
      if (0 < (textInfo->fields).characterCount) {
        fVar13 = fStack_48 - fStack_44;
        if (fVar13 <= 0.001) {
          fVar13 = 0.001;
        }
        lVar10 = 0x50;
        uVar11 = 0;
        pTStack_38 = textInfo;
        do {
          pTVar5 = (textInfo->fields).characterInfo;
          if (pTVar5 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_058e8a31;
          if ((uint)pTVar5->max_length <= uVar11) goto label_058e8a36;
          if ((*(byte *)((long)(&pTVar5->m_Items[0].fields.color + -8) + lVar10) & 1) != 0) {
            pTVar6 = (textInfo->fields).meshInfo;
            if (pTVar6 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_058e8a31;
            uVar2 = *(uint *)((long)(&pTVar5->m_Items[0].fields.vertex_BL.fields.color + -0x23) + lVar10);
            if ((uint)pTVar6->max_length <= uVar2) {
label_058e8a36:
              ThrowIndexOutOfRangeException();
            }
            method_00 = pTVar6->m_Items[(int)uVar2].fields.vertices;
            if (method_00 == (UnityEngine_Vector3_array *)0x0) goto label_058e8a31;
            uVar3 = *(uint *)((long)(&pTVar5->m_Items[0].fields.vertex_BL.fields.color + -0x1e) + lVar10);
            uVar12 = (ulong)uVar3;
            pUVar7 = pTVar6->m_Items[(int)uVar2].fields.colors32;
            if (pUVar7 == (UnityEngine_Color32_array *)0x0) {
              if (*(uint *)&method_00->max_length <= uVar3) goto label_058e8a36;
              fVar13 = (method_00->m_Items[(int)uVar3].fields.x - fVar16) / fVar13;
              fVar16 = 1.0;
              if (fVar13 <= 1.0) {
                fVar16 = fVar13;
              }
              UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                                 (__this,(float)(-(uint)(0.0 <= fVar13) & (uint)fVar16),
                                  (MethodInfo *)method_00);
              il2cpp_runtime_helper_05334d00(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
              goto label_058e8a31;
            }
            pUStack_40 = method_00;
            if (*(uint *)&method_00->max_length <= uVar12) goto label_058e8a36;
            fVar14 = (method_00->m_Items[(int)uVar3].fields.x - fVar16) / fVar13;
            fVar15 = 1.0;
            if (fVar14 <= 1.0) {
              fVar15 = fVar14;
            }
            method_01 = method_00;
            UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                               (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),(MethodInfo *)method_00)
            ;
            _Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
            if ((uint)pUVar7->max_length <= uVar12) goto label_058e8a36;
            pUVar7->m_Items[(int)uVar3].fields._overlap_0._at_rgba.rgba = _Var9.rgba;
            uVar1 = uVar12 + 1;
            if (*(uint *)&pUStack_40->max_length <= uVar1) goto label_058e8a36;
            fVar14 = (method_00->m_Items[(int)uVar1].fields.x - fVar16) / fVar13;
            fVar15 = 1.0;
            if (fVar14 <= 1.0) {
              fVar15 = fVar14;
            }
            UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                               (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),(MethodInfo *)method_01)
            ;
            _Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
            if ((uint)pUVar7->max_length <= uVar1) goto label_058e8a36;
            pUVar7->m_Items[(int)uVar1].fields._overlap_0._at_rgba.rgba = _Var9.rgba;
            uVar1 = uVar12 + 2;
            if (*(uint *)&pUStack_40->max_length <= uVar1) goto label_058e8a36;
            fVar14 = (method_00->m_Items[(int)uVar1].fields.x - fVar16) / fVar13;
            fVar15 = 1.0;
            if (fVar14 <= 1.0) {
              fVar15 = fVar14;
            }
            UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                               (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),(MethodInfo *)method_01)
            ;
            _Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
            if ((uint)pUVar7->max_length <= uVar1) goto label_058e8a36;
            pUVar7->m_Items[(int)uVar1].fields._overlap_0._at_rgba.rgba = _Var9.rgba;
            uVar12 = uVar12 + 3;
            if (*(uint *)&pUStack_40->max_length <= uVar12) goto label_058e8a36;
            fVar14 = (method_00->m_Items[(int)uVar12].fields.x - fVar16) / fVar13;
            fVar15 = 1.0;
            if (fVar14 <= 1.0) {
              fVar15 = fVar14;
            }
            UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                               (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),(MethodInfo *)method_01)
            ;
            _Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17.fields._0_8_,0);
            if ((uint)pUVar7->max_length <= uVar12) goto label_058e8a36;
            pUVar7->m_Items[(int)uVar12].fields._overlap_0._at_rgba.rgba = _Var9.rgba;
            textInfo = pTStack_38;
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 0x178;
        } while ((long)uVar11 < (long)(textInfo->fields).characterCount);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$TryBounds
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, const MethodInfo* method);
// 0x58e8a40

bool Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               float *minX,float *maxX,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  TMPro_TMP_MeshInfo_array *pTVar5;
  UnityEngine_Vector3_array *pUVar6;
  il2cpp_array_size_t iVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  
  *minX = INFINITY;
  *maxX = -INFINITY;
  if (textInfo == (TMPro_TMP_TextInfo_o *)0x0) {
label_058e8bd7:
    ThrowNullReferenceException();
  }
  uVar1 = (textInfo->fields).characterCount;
  if ((int)uVar1 < 1) {
    fVar11 = -INFINITY;
  }
  else {
    pTVar4 = (textInfo->fields).characterInfo;
    if (pTVar4 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_058e8bd7;
    iVar7 = pTVar4->max_length;
    fVar11 = -INFINITY;
    lVar9 = 0;
    do {
      if ((ulong)(uint)iVar7 * 0x178 == lVar9) goto label_058e8bd2;
      if ((*(byte *)((long)(&pTVar4->m_Items[0].fields.highlightState + 1) + lVar9 + 4) & 1) != 0) {
        pTVar5 = (textInfo->fields).meshInfo;
        if (pTVar5 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_058e8bd7;
        uVar2 = *(uint *)((long)(&pTVar4->m_Items[0].fields.vertex_BL.fields.color + -0xf) + lVar9);
        if ((uint)pTVar5->max_length <= uVar2) {
label_058e8bd2:
          ThrowIndexOutOfRangeException();
        }
        pUVar6 = pTVar5->m_Items[(int)uVar2].fields.vertices;
        if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto label_058e8bd7;
        uVar2 = *(uint *)((long)(&pTVar4->m_Items[0].fields.vertex_BL.fields.color + -10) + lVar9);
        uVar3 = (uint)pUVar6->max_length;
        iVar8 = uVar3 - uVar2;
        bVar10 = iVar8 == 0;
        if (uVar3 < uVar2) {
          iVar8 = 0;
        }
        if (uVar3 < uVar2 || bVar10) goto label_058e8bd2;
        fVar11 = pUVar6->m_Items[(int)uVar2].fields.x;
        fVar12 = *minX;
        if (fVar11 <= *minX) {
          fVar12 = fVar11;
        }
        *minX = fVar12;
        fVar12 = *maxX;
        if (*maxX <= fVar11) {
          fVar12 = fVar11;
        }
        *maxX = fVar12;
        if (iVar8 == 1) goto label_058e8bd2;
        fVar11 = pUVar6->m_Items[(int)(uVar2 + 1)].fields.x;
        fVar12 = *minX;
        if (fVar11 <= *minX) {
          fVar12 = fVar11;
        }
        *minX = fVar12;
        fVar12 = *maxX;
        if (*maxX <= fVar11) {
          fVar12 = fVar11;
        }
        *maxX = fVar12;
        if (iVar8 == 2) goto label_058e8bd2;
        fVar11 = pUVar6->m_Items[(int)(uVar2 + 2)].fields.x;
        fVar12 = *minX;
        if (fVar11 <= *minX) {
          fVar12 = fVar11;
        }
        *minX = fVar12;
        fVar12 = *maxX;
        if (*maxX <= fVar11) {
          fVar12 = fVar11;
        }
        *maxX = fVar12;
        if (iVar8 == 3) goto label_058e8bd2;
        fVar12 = pUVar6->m_Items[(int)(uVar2 + 3)].fields.x;
        fVar11 = *minX;
        if (fVar12 <= *minX) {
          fVar11 = fVar12;
        }
        *minX = fVar11;
        fVar11 = *maxX;
        if (*maxX <= fVar12) {
          fVar11 = fVar12;
        }
        *maxX = fVar11;
      }
      lVar9 = lVar9 + 0x178;
    } while ((ulong)uVar1 * 0x178 != lVar9);
  }
  return *minX <= fVar11 && fVar11 != *minX;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$Sample
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, float t, const MethodInfo* method);
// 0x58e8be0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,float t,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint32_t uVar10;
  uint uVar11;
  UnityEngine_Color_array *pUVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  
  pUVar12 = (__this->fields)._colors;
  if (pUVar12 != (UnityEngine_Color_array *)0x0) {
    iVar9 = (int)pUVar12->max_length;
    if (iVar9 == 1) {
      return (UnityEngine_Color_o)pUVar12->m_Items[0].fields;
    }
    if (Il2CppMethodInitialized_0753e7f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f6 = '\x01';
      uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar10 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      pUVar12 = (__this->fields)._colors;
    }
    else {
      pUVar12 = (__this->fields)._colors;
    }
    if (pUVar12 != (UnityEngine_Color_array *)0x0) {
      fVar15 = 1.0;
      if (t <= 1.0) {
        fVar15 = t;
      }
      fVar15 = (float)(iVar9 + -1) * (float)(-(uint)(0.0 <= t) & (uint)fVar15);
      fVar16 = floorf(fVar15);
      uVar11 = (uint)pUVar12->max_length;
      uVar13 = uVar11 - 2;
      if ((int)fVar16 < (int)(uVar11 - 2)) {
        uVar13 = (int)fVar16;
      }
      if ((uVar11 <= uVar13) || (uVar14 = uVar13 + 1, uVar11 <= uVar14)) {
        ThrowIndexOutOfRangeException();
      }
      uVar1 = pUVar12->m_Items[(int)uVar13].fields.r;
      uVar5 = pUVar12->m_Items[(int)uVar13].fields.g;
      uVar2 = pUVar12->m_Items[(int)uVar13].fields.b;
      uVar6 = pUVar12->m_Items[(int)uVar13].fields.a;
      uVar3 = pUVar12->m_Items[(int)uVar14].fields.r;
      uVar7 = pUVar12->m_Items[(int)uVar14].fields.g;
      uVar4 = pUVar12->m_Items[(int)uVar14].fields.b;
      uVar8 = pUVar12->m_Items[(int)uVar14].fields.a;
      fVar15 = fVar15 - (float)(int)uVar13;
      fVar16 = 1.0;
      if (fVar15 <= 1.0) {
        fVar16 = fVar15;
      }
      fVar16 = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar16);
      UVar17.fields.r = ((float)uVar3 - (float)uVar1) * fVar16 + (float)uVar1;
      UVar17.fields.g = ((float)uVar7 - (float)uVar5) * fVar16 + (float)uVar5;
      UVar17.fields.b = ((float)uVar4 - (float)uVar2) * fVar16 + (float)uVar2;
      UVar17.fields.a = ((float)uVar8 - (float)uVar6) * fVar16 + (float)uVar6;
      return (UnityEngine_Color_o)UVar17.fields;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e8d60

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect(__this,method);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x58e8d80

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


