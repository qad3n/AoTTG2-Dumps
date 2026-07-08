// Type: Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgNameStyleChoicePreview.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureDisabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d7b50

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  uint uVar1;
  TMPro_TMP_Text_o *pTVar2;
  TMPro_TMP_Text_o *pTVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  UnityEngine_Color32_Fields value;
  
  if (DAT_05704e80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"Normal");
    DAT_05704e80 = '\x01';
    in_RDX = extraout_RDX;
  }
  pMVar4 = "Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (__this,(System_String_o *)"Normal",in_RDX);
  pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar4);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = "Normal";
  PatreonEffects_NameFontCatalog__Apply(pTVar2,(System_String_o *)"Normal",(MethodInfo *)0x0);
  pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar4);
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    pMVar4 = (pTVar2->klass->vtable)._23_set_color.method;
    (*(pTVar2->klass->vtable)._23_set_color.methodPtr)(0x3f147ae1,0x3f147ae1,pTVar2);
    pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar4);
    pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar4);
    if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar3->klass->vtable)._22_get_color.methodPtr)
                (pTVar3,(pTVar3->klass->vtable)._22_get_color.method);
      uVar1 = il2cpp_glue_03ad8d60(0);
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        value.r = '\0';
        value.g = '\0';
        value.b = '\0';
        value.a = '\0';
        value.rgba = uVar1;
        TMPro_TMP_Text__set_faceColor(pTVar2,(UnityEngine_Color32_o)value,(MethodInfo *)0x0);
        pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                           (__this,(MethodInfo *)value);
        if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
          vtable_dispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
          (*vtable_dispatch)
                    (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,
                     vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x41d83b0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  uint uVar1;
  TMPro_TMP_Text_o *pTVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  UnityEngine_Color32_Fields value;
  
  if (DAT_05704e81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    DAT_05704e81 = '\x01';
    method = extraout_RDX;
  }
  pMVar3 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,method);
  pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar2,font,(MethodInfo *)0x0);
  pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    pMVar3 = (pTVar2->klass->vtable)._23_set_color.method;
    (*(pTVar2->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar2);
    pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
    uVar1 = il2cpp_glue_03ad8d60(0x3f800000,0x3f800000,0);
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      value.r = '\0';
      value.g = '\0';
      value.b = '\0';
      value.a = '\0';
      value.rgba = uVar1;
      TMPro_TMP_Text__set_faceColor(pTVar2,(UnityEngine_Color32_o)value,(MethodInfo *)0x0);
      pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                         (__this,(MethodInfo *)value);
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        vtable_dispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtable_dispatch)
                  (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureSolid
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_o color, System_String_o* font, const MethodInfo* method);
// 0x41d7c70

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,
               UnityEngine_Color_o color,System_String_o *font,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Color_array *colors;
  MethodInfo *extraout_RDX;
  float fStack_28;
  float fStack_24;
  
  if (DAT_05704e82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    DAT_05704e82 = '\x01';
    method = extraout_RDX;
  }
  colors = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color,2,method);
  if (colors != (UnityEngine_Color_array *)0x0) {
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x41d8070

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,
               UnityEngine_Color_array *colors,System_String_o *font,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  uint uVar1;
  TMPro_TMP_Text_o *pTVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  UnityEngine_Color32_o value;
  
  pMVar3 = (MethodInfo *)font;
  if (DAT_05704e83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    DAT_05704e83 = '\x01';
    pMVar3 = extraout_RDX;
  }
  method_00 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,pMVar3);
  pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_00);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar2,font,(MethodInfo *)0x0);
  pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    pMVar3 = (pTVar2->klass->vtable)._23_set_color.method;
    (*(pTVar2->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar2);
    pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar3);
    uVar1 = il2cpp_glue_03ad8d60(0x3f800000,0x3f800000,0);
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar1;
      TMPro_TMP_Text__set_faceColor(pTVar2,value,(MethodInfo *)0x0);
      (__this->fields)._colors = colors;
      il2cpp_runtime_glue(&(__this->fields)._colors);
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                (__this,(MethodInfo *)colors);
      pTVar2 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                         (__this,(MethodInfo *)colors);
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        vtable_dispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtable_dispatch)
                  (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, int32_t effect, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x41d8190

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
  PatreonEffects_NameEffectController_o **ppPVar6;
  MethodInfo *method_01;
  
  method_00 = colors;
  if (DAT_05704e84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    DAT_05704e84 = '\x01';
    method_00 = extraout_RDX;
  }
  method_01 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (__this,font,(MethodInfo *)method_00);
  pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_01);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar4,font,(MethodInfo *)0x0);
  pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pTVar4,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pPVar5 = (PatreonEffects_NameEffectController_o *)
               UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
      (__this->fields)._effect = pPVar5;
      ppPVar6 = &(__this->fields)._effect;
      il2cpp_runtime_glue(ppPVar6);
      settings = PatreonEffects_NameEffectPresets__GetPreset(effect,(MethodInfo *)0x0);
      if (colors != (UnityEngine_Color_array *)0x0) {
        if (colors->max_length != 0) {
          if ((int)colors->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_041d82c4;
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
        pPVar5 = *ppPVar6;
        if (pPVar5 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(pPVar5,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_041d82c4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$get_Text
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d87e0

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **ppTVar1;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *pTVar3;
  
  if (DAT_05704e85 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e85 = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppTVar1 = &(__this->fields)._text;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar3 = (TMPro_TMP_Text_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this->fields)._text = pTVar3;
    il2cpp_runtime_glue(ppTVar1,pTVar3);
  }
  return *ppTVar1;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$HookVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d8870

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  undefined8 uVar2;
  
  if (DAT_05704e86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyVertexColors);
    DAT_05704e86 = '\x01';
  }
  if ((char)(__this->fields)._hooked != '\0') {
    return;
  }
  pTVar1 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method);
  uVar2 = il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
  System_Action<object>___ctor();
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
              (pTVar1,uVar2,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
    *(undefined1 *)&(__this->fields)._hooked = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d8910

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  
  if (DAT_05704e87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyVertexColors);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e87 = '\x01';
  }
  (__this->fields)._colors = (UnityEngine_Color_array *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._colors);
  if ((char)(__this->fields)._hooked != '\0') {
    pTVar1 = (__this->fields)._text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pTVar1 = (__this->fields)._text;
      uVar3 = il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
      System_Action<object>___ctor();
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,uVar3,(pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  *(undefined1 *)&(__this->fields)._hooked = 0;
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d89f0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool_conflict bVar2;
  PatreonEffects_NameEffectController_o **ppPVar3;
  
  if (DAT_05704e88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e88 = '\x01';
  }
  pPVar1 = (__this->fields)._effect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  ppPVar3 = &(__this->fields)._effect;
  if (*ppPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__Clear(*ppPVar3,(MethodInfo *)0x0);
    pPVar1 = *ppPVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *ppPVar3 = (PatreonEffects_NameEffectController_o *)0x0;
    il2cpp_runtime_glue(ppPVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ResetPlainVisuals
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x41d86a0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  TMPro_ITextPreprocessor_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *pTVar3;
  TMPro_TMP_Text_o *pTVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar5;
  
  pMVar5 = (MethodInfo *)font;
  if (DAT_05704e89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PopExtrusion");
    il2cpp_init_method_metadata(&"PopShadow");
    DAT_05704e89 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,pMVar5);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects(__this,pMVar5);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,"PopShadow",method_00);
  pMVar5 = "PopExtrusion";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,(System_String_o *)"PopExtrusion",method_01);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar3,font,(MethodInfo *)0x0);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    x = (UnityEngine_Object_o *)(pTVar3->fields).m_TextPreprocessor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar5 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
    if (((pTVar4 != (TMPro_TMP_Text_o *)0x0) &&
        (pTVar1 = (pTVar4->fields).m_TextPreprocessor, pTVar1 != (TMPro_ITextPreprocessor_o *)0x0))
       && (pTVar3 != (TMPro_TMP_Text_o *)0x0)) {
      vtable_dispatch = (pTVar3->klass->vtable)._68_set_fontSharedMaterial.methodPtr;
      (*vtable_dispatch)
                (pTVar3,pTVar1[2].klass,(pTVar3->klass->vtable)._68_set_fontSharedMaterial.method,
                 vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearAllEffects
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d8aa0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  uint uVar1;
  PatreonEffects_NameEffectController_o *__this_00;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *__this_01;
  System_Object_array *pSVar3;
  ulong uVar4;
  
  if (DAT_05704e8a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController___GetComponents_NameEffectC);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e8a = '\x01';
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method);
  if ((__this_01 != (TMPro_TMP_Text_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponents<object>
                         ((UnityEngine_Component_o *)__this_01,MethodInfo_NameEffectController___GetComponents_NameEffectC),
     pSVar3 != (System_Object_array *)0x0)) {
    if ((int)pSVar3->max_length < 1) {
LAB_041d8bff:
      (__this->fields)._effect = (PatreonEffects_NameEffectController_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._effect,0);
      return;
    }
    uVar4 = 0;
    if ((pSVar3->max_length & 0xffffffff) != 0) {
      do {
        __this_00 = (PatreonEffects_NameEffectController_o *)pSVar3->m_Items[uVar4];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (__this_00 == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_041d8c29;
          PatreonEffects_NameEffectController__Clear(__this_00,(MethodInfo *)0x0);
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((char)bVar2 == '\0') {
            UnityEngine_Object__DestroyImmediate
                      ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
          }
          else {
            UnityEngine_Object__Destroy((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
          }
        }
        uVar4 = uVar4 + 1;
        uVar1 = (uint)pSVar3->max_length;
        if ((long)(int)uVar1 <= (long)uVar4) goto LAB_041d8bff;
      } while (uVar4 < uVar1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041d8c29:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$DestroyStalePopLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* name, const MethodInfo* method);
// 0x41d8c30

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *name,
               MethodInfo *method)

{
  bool_conflict bVar1;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *obj;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)name;
  if (DAT_05704e8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e8b = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_00);
  if ((__this_00 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar2 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar2,name,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((char)bVar1 != '\0') {
          UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
          return;
        }
        UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ApplyVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x41d8d70

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,
               TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  UnityEngine_Color_array *pUVar4;
  TMPro_TMP_CharacterInfo_array *pTVar5;
  TMPro_TMP_MeshInfo_array *pTVar6;
  UnityEngine_Vector3_array *pUVar7;
  UnityEngine_Color32_array *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  float fStack_48;
  float fStack_44;
  TMPro_TMP_TextInfo_o *pTStack_40;
  MethodInfo *pMStack_38;
  
  fStack_44 = 0.0;
  fStack_48 = 0.0;
  pUVar4 = (__this->fields)._colors;
  if (((pUVar4 == (UnityEngine_Color_array *)0x0) || (pUVar4->max_length == 0)) ||
     (bVar9 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                        (__this,textInfo,&fStack_44,&fStack_48,in_R8), fVar16 = fStack_44,
     (char)bVar9 == '\0')) {
    return;
  }
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    if ((textInfo->fields).characterCount < 1) {
      return;
    }
    fVar13 = fStack_48 - fStack_44;
    if (fVar13 <= 0.001) {
      fVar13 = 0.001;
    }
    method_00 = (MethodInfo *)0x58;
    uVar12 = 0;
    pTVar5 = (textInfo->fields).characterInfo;
    pTStack_40 = textInfo;
    while (pTVar5 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      if ((uint)pTVar5->max_length <= uVar12) goto LAB_041d90a8;
      if ((*(byte *)((long)&pTVar5->m_Items[0].fields.topRight.fields.y + (long)method_00) & 1) != 0
         ) {
        pTVar6 = (textInfo->fields).meshInfo;
        if (pTVar6 == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar2 = *(uint *)((long)(pTVar5->m_Items + -1) + (long)&method_00[4].klass);
        if ((uint)pTVar6->max_length <= uVar2) {
LAB_041d90a8:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar7 = pTVar6->m_Items[(int)uVar2].fields.vertices;
        if (pUVar7 == (UnityEngine_Vector3_array *)0x0) break;
        uVar3 = *(uint *)((undefined1 *)((long)&pTVar5->bounds + 4) + (long)method_00);
        uVar11 = (ulong)uVar3;
        pUVar8 = pTVar6->m_Items[(int)uVar2].fields.colors32;
        pMStack_38 = method_00;
        if (pUVar8 == (UnityEngine_Color32_array *)0x0) {
          if ((uint)pUVar7->max_length <= uVar3) goto LAB_041d90a8;
          fVar13 = (pUVar7->m_Items[(int)uVar3].fields.x - fVar16) / fVar13;
          fVar16 = 1.0;
          if (fVar13 <= 1.0) {
            fVar16 = fVar13;
          }
          UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                             (__this,(float)(-(uint)(0.0 <= fVar13) & (uint)fVar16),method_00);
          il2cpp_glue_03ad8d60(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
          break;
        }
        if ((uint)pUVar7->max_length <= uVar11) goto LAB_041d90a8;
        fVar14 = (pUVar7->m_Items[(int)uVar3].fields.x - fVar16) / fVar13;
        fVar15 = 1.0;
        if (fVar14 <= 1.0) {
          fVar15 = fVar14;
        }
        UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),method_00);
        iVar10 = il2cpp_glue_03ad8d60(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
        if ((uint)pUVar8->max_length <= uVar11) goto LAB_041d90a8;
        (&pUVar8->m_Items[0].fields.rgba)[(int)uVar3] = iVar10;
        uVar1 = uVar11 + 1;
        if ((uint)pUVar7->max_length <= uVar1) goto LAB_041d90a8;
        fVar14 = (pUVar7->m_Items[(int)uVar1].fields.x - fVar16) / fVar13;
        fVar15 = 1.0;
        if (fVar14 <= 1.0) {
          fVar15 = fVar14;
        }
        UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),method_00);
        iVar10 = il2cpp_glue_03ad8d60(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
        if ((uint)pUVar8->max_length <= uVar1) goto LAB_041d90a8;
        (&pUVar8->m_Items[0].fields.rgba)[(int)uVar1] = iVar10;
        uVar1 = uVar11 + 2;
        if ((uint)pUVar7->max_length <= uVar1) goto LAB_041d90a8;
        fVar14 = (pUVar7->m_Items[(int)uVar1].fields.x - fVar16) / fVar13;
        fVar15 = 1.0;
        if (fVar14 <= 1.0) {
          fVar15 = fVar14;
        }
        UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),method_00);
        iVar10 = il2cpp_glue_03ad8d60(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
        if ((uint)pUVar8->max_length <= uVar1) goto LAB_041d90a8;
        (&pUVar8->m_Items[0].fields.rgba)[(int)uVar1] = iVar10;
        uVar11 = uVar11 + 3;
        if ((uint)pUVar7->max_length <= uVar11) goto LAB_041d90a8;
        fVar14 = (pUVar7->m_Items[(int)uVar11].fields.x - fVar16) / fVar13;
        fVar15 = 1.0;
        if (fVar14 <= 1.0) {
          fVar15 = fVar14;
        }
        UVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),method_00);
        iVar10 = il2cpp_glue_03ad8d60(UVar17.fields._0_8_,UVar17.fields._8_8_,0);
        if ((uint)pUVar8->max_length <= uVar11) goto LAB_041d90a8;
        (&pUVar8->m_Items[0].fields.rgba)[(int)uVar11] = iVar10;
        textInfo = pTStack_40;
        method_00 = pMStack_38;
      }
      uVar12 = uVar12 + 1;
      method_00 = (MethodInfo *)&method_00[4].name;
      if ((long)(textInfo->fields).characterCount <= (long)uVar12) {
        return;
      }
      pTVar5 = (textInfo->fields).characterInfo;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$TryBounds
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, const MethodInfo* method);
// 0x41d90b0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,
          TMPro_TMP_TextInfo_o *textInfo,float *minX,float *maxX,MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_MeshInfo_array *pTVar2;
  UnityEngine_Vector3_array *pUVar3;
  ulong in_RAX;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  
  *minX = INFINITY;
  *maxX = -INFINITY;
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    lVar6 = (long)(textInfo->fields).characterCount;
    fVar10 = -INFINITY;
    if (lVar6 < 1) {
LAB_041d9234:
      return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),*minX <= fVar10 && fVar10 != *minX);
    }
    lVar7 = 0x58;
    uVar9 = 0;
    __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
             (textInfo->fields).characterInfo;
    while ((TMPro_TMP_CharacterInfo_array *)__this != (TMPro_TMP_CharacterInfo_array *)0x0) {
      in_RAX = (ulong)(uint)((TMPro_TMP_CharacterInfo_array *)__this)->max_length;
      if (in_RAX <= uVar9) goto LAB_041d9242;
      if ((*(byte *)((long)&((TMPro_TMP_CharacterInfo_array *)__this)->m_Items[0].fields.topRight.
                            fields.y + lVar7) & 1) != 0) {
        pTVar2 = (textInfo->fields).meshInfo;
        if (pTVar2 == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar1 = *(uint *)((long)((TMPro_TMP_CharacterInfo_array *)__this)->m_Items + lVar7 + -0x20);
        if ((uint)pTVar2->max_length <= uVar1) {
LAB_041d9242:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar3 = pTVar2->m_Items[(int)uVar1].fields.vertices;
        if (pUVar3 == (UnityEngine_Vector3_array *)0x0) break;
        uVar1 = *(uint *)((long)((TMPro_TMP_CharacterInfo_array *)__this)->m_Items + lVar7 + -0xc);
        uVar5 = (ulong)uVar1;
        uVar8 = (ulong)(uint)pUVar3->max_length;
        if (uVar8 <= uVar5) goto LAB_041d9242;
        fVar10 = pUVar3->m_Items[(int)uVar1].fields.x;
        fVar11 = *minX;
        if (fVar10 <= *minX) {
          fVar11 = fVar10;
        }
        *minX = fVar11;
        fVar11 = *maxX;
        if (*maxX <= fVar10) {
          fVar11 = fVar10;
        }
        *maxX = fVar11;
        if (uVar8 <= uVar5 + 1) goto LAB_041d9242;
        fVar10 = pUVar3->m_Items[(int)(uVar5 + 1)].fields.x;
        fVar11 = *minX;
        if (fVar10 <= *minX) {
          fVar11 = fVar10;
        }
        *minX = fVar11;
        fVar11 = *maxX;
        if (*maxX <= fVar10) {
          fVar11 = fVar10;
        }
        *maxX = fVar11;
        if (uVar8 <= uVar5 + 2) goto LAB_041d9242;
        fVar10 = pUVar3->m_Items[(int)(uVar5 + 2)].fields.x;
        fVar11 = *minX;
        if (fVar10 <= *minX) {
          fVar11 = fVar10;
        }
        *minX = fVar11;
        fVar11 = *maxX;
        if (*maxX <= fVar10) {
          fVar11 = fVar10;
        }
        *maxX = fVar11;
        if (uVar8 <= uVar5 + 3) goto LAB_041d9242;
        lVar4 = (long)(int)(uVar5 + 3);
        in_RAX = lVar4 * 3;
        fVar11 = pUVar3->m_Items[lVar4].fields.x;
        fVar10 = *minX;
        if (fVar11 <= *minX) {
          fVar10 = fVar11;
        }
        *minX = fVar10;
        fVar10 = *maxX;
        if (*maxX <= fVar11) {
          fVar10 = fVar11;
        }
        *maxX = fVar10;
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x178;
      if (lVar6 <= (long)uVar9) goto LAB_041d9234;
      __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
               (textInfo->fields).characterInfo;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$Sample
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, float t, const MethodInfo* method);
// 0x41d9250

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
  uint uVar10;
  UnityEngine_Color_array *pUVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o UVar16;
  
  pUVar11 = (__this->fields)._colors;
  if (pUVar11 != (UnityEngine_Color_array *)0x0) {
    iVar9 = (int)pUVar11->max_length;
    if (iVar9 == 1) {
      return (UnityEngine_Color_o)pUVar11->m_Items[0].fields;
    }
    fVar14 = 1.0;
    if (t <= 1.0) {
      fVar14 = t;
    }
    if (DAT_056fdee5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdee5 = '\x01';
    }
    fVar14 = (float)(-(uint)(0.0 <= t) & (uint)fVar14) * (float)(iVar9 + -1);
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar15 = floorf(fVar14);
    pUVar11 = (__this->fields)._colors;
    if (pUVar11 != (UnityEngine_Color_array *)0x0) {
      uVar10 = (uint)pUVar11->max_length;
      uVar12 = uVar10 - 2;
      if ((int)fVar15 < (int)(uVar10 - 2)) {
        uVar12 = (int)fVar15;
      }
      if (uVar12 < uVar10) {
        uVar13 = uVar12 + 1;
        if (uVar13 < uVar10) {
          uVar1 = pUVar11->m_Items[(int)uVar12].fields.r;
          uVar5 = pUVar11->m_Items[(int)uVar12].fields.g;
          uVar2 = pUVar11->m_Items[(int)uVar12].fields.b;
          uVar6 = pUVar11->m_Items[(int)uVar12].fields.a;
          uVar3 = pUVar11->m_Items[(int)uVar13].fields.r;
          uVar7 = pUVar11->m_Items[(int)uVar13].fields.g;
          uVar4 = pUVar11->m_Items[(int)uVar13].fields.b;
          uVar8 = pUVar11->m_Items[(int)uVar13].fields.a;
          fVar14 = fVar14 - (float)(int)uVar12;
          fVar15 = 1.0;
          if (fVar14 <= 1.0) {
            fVar15 = fVar14;
          }
          fVar15 = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar15);
          UVar16.fields.r = ((float)uVar3 - (float)uVar1) * fVar15 + (float)uVar1;
          UVar16.fields.g = ((float)uVar7 - (float)uVar5) * fVar15 + (float)uVar5;
          UVar16.fields.b = ((float)uVar4 - (float)uVar2) * fVar15 + (float)uVar2;
          UVar16.fields.a = ((float)uVar8 - (float)uVar6) * fVar15 + (float)uVar6;
          return (UnityEngine_Color_o)UVar16.fields;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d93a0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect(__this,method);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x41d93c0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


