// Type: Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterStyleChoicePreview.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register (const MethodInfo* method);
// 0x41d4350

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_Action_GisketchChoiceOptionRenderContext__o *pSVar4;
  
  if (DAT_05704e76 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchChoiceOptionRenderContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_RenderEffect);
    il2cpp_init_method_metadata(&MethodInfo_Void_RenderFont);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_init_method_metadata(&"profile-character-font-preview");
    il2cpp_init_method_metadata(&"profile-character-effect-preview");
    DAT_05704e76 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x20);
  }
  else {
    lVar3 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x20);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
  }
  *(undefined1 *)(lVar3 + 0x20) = 1;
  pSVar4 = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action<object>___ctor();
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
            ("profile-character-effect-preview",pSVar4,(MethodInfo *)0x0);
  pSVar4 = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action<object>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
            ("profile-character-font-preview",pSVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseEffectRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x41d6df0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (DAT_05704e77 == '\0') {
    il2cpp_init_method_metadata(&"profile-character-effect-preview");
    DAT_05704e77 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptions = "profile-character-effect-preview";
    il2cpp_runtime_glue(&(node->fields).choiceOptions);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseFontRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x41d6e40

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (DAT_05704e78 == '\0') {
    il2cpp_init_method_metadata(&"profile-character-font-preview");
    DAT_05704e78 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptions = "profile-character-font-preview";
    il2cpp_runtime_glue(&(node->fields).choiceOptions);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x41d73c0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_o *font;
  undefined4 effect;
  uint in_EAX;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this;
  UnityEngine_Color_array *pUVar4;
  System_String_array *colors;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  MethodInfo *in_R8;
  undefined1 auStack_28 [8];
  
  auStack_28._0_4_ = in_EAX;
  if (DAT_05704e79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    il2cpp_init_method_metadata(&"Aottg2");
    il2cpp_init_method_metadata(&"Color");
    DAT_05704e79 = '\x01';
  }
  auStack_28._4_4_ = 0;
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,pMVar5);
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0)
  goto LAB_041d7672;
  bVar1 = (byte)(context->fields).Enabled;
  pMVar5 = (MethodInfo *)(ulong)bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
            (context,(uint)bVar1,method_00);
  if ((char)(context->fields).Enabled == '\0') {
LAB_041d765a:
    if (__this == (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) goto LAB_041d7672;
    Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this,pMVar5);
  }
  else {
    bVar3 = System_String__op_Equality((context->fields).Value,"Color",(MethodInfo *)0x0);
    font = "Aottg2";
    if ((char)bVar3 != '\0') {
      if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        if (DAT_05704e82 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Color);
          DAT_05704e82 = '\x01';
        }
        pUVar4 = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color,2);
        if (pUVar4 != (UnityEngine_Color_array *)0x0) {
          uVar2 = (uint)pUVar4->max_length;
          if (uVar2 != 0) {
            pUVar4->m_Items[0].fields.r = 1.0;
            pUVar4->m_Items[0].fields.g = 1.0;
            pUVar4->m_Items[0].fields.b = 1.0;
            pUVar4->m_Items[0].fields.a = 1.0;
            if (uVar2 != 1) {
              pUVar4->m_Items[1].fields.r = 1.0;
              pUVar4->m_Items[1].fields.g = 1.0;
              pUVar4->m_Items[1].fields.b = 1.0;
              pUVar4->m_Items[1].fields.a = 1.0;
              Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                        (__this,pUVar4,font,(MethodInfo *)(ulong)uVar2);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      goto LAB_041d7672;
    }
    pMVar5 = "TwoColorGradient";
    bVar3 = System_String__op_Equality
                      ((context->fields).Value,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pMVar5 = "FourColorGradient";
      bVar3 = System_String__op_Equality
                        ((context->fields).Value,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pMVar5 = (MethodInfo *)(auStack_28 + 4);
        bVar3 = PatreonEffects_NameEffectPresets__TryResolve
                          ((context->fields).Value,(int32_t *)pMVar5,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          effect = auStack_28._4_4_;
          colors = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors
                             ((context->fields).Value,pMVar5);
          if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar4 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                             ((System_Collections_Generic_IList_string__o *)colors,pMVar5);
          if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect
                      (__this,effect,pUVar4,"Aottg2",in_R8);
            return;
          }
          goto LAB_041d7672;
        }
        goto LAB_041d765a;
      }
      if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar4 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                         (*(System_Collections_Generic_IList_string__o **)
                           (*(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8) + 8),pMVar5);
    }
    else {
      if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar4 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                         ((System_Collections_Generic_IList_string__o *)
                          **(undefined8 **)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8),pMVar5);
    }
    if (__this == (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
LAB_041d7672:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
              (__this,pUVar4,"Aottg2",(MethodInfo *)&"Aottg2");
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x41d82d0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this;
  TMPro_TMP_Text_o *pTVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *pMVar5;
  MethodInfo *method_02;
  UnityEngine_Color32_Fields value;
  
  if (DAT_05704e7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e7a = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,pMVar5);
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    bVar1 = (byte)(context->fields).Enabled;
    pMVar5 = (MethodInfo *)(ulong)bVar1;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              (context,(uint)bVar1,method_00);
    if ((char)(context->fields).Enabled == '\0') {
      if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this,pMVar5);
        return;
      }
    }
    else if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
      pMVar5 = (MethodInfo *)(context->fields).Value;
      method_01 = extraout_RDX;
      if (DAT_05704e81 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
        DAT_05704e81 = '\x01';
        method_01 = extraout_RDX_00;
      }
      method_02 = pMVar5;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
                (__this,(System_String_o *)pMVar5,method_01);
      pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_02);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      PatreonEffects_NameFontCatalog__Apply(pTVar4,(System_String_o *)pMVar5,(MethodInfo *)0x0);
      pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
      if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
        pMVar5 = (pTVar4->klass->vtable)._23_set_color.method;
        (*(pTVar4->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar4);
        pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
        uVar3 = il2cpp_glue_03ad8d60(0x3f800000,0x3f800000,0);
        if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
          value.r = '\0';
          value.g = '\0';
          value.b = '\0';
          value.a = '\0';
          value.rgba = uVar3;
          TMPro_TMP_Text__set_faceColor(pTVar4,(UnityEngine_Color32_o)value,(MethodInfo *)0x0);
          pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                             (__this,(MethodInfo *)value);
          if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
            vtable_dispatch = (pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr;
            (*vtable_dispatch)
                      (pTVar4,0,0,(pTVar4->klass->vtable)._106_ForceMeshUpdate.method,
                       vtable_dispatch);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Preview
// il2cpp: Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x41d7680

Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
          (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method
          )

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGVar3;
  UnityEngine_GameObject_o *__this;
  
  if (DAT_05704e7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNa);
    il2cpp_init_method_metadata(&MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNa);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e7b = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    pTVar1 = (context->fields).Label;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pTVar1 = (context->fields).Label;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                  (pTVar1,(context->fields).Text,(pTVar1->klass->vtable)._66_set_text.method);
        pTVar1 = (context->fields).Label;
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pGVar3 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pTVar1,MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNa);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return pGVar3;
          }
          pTVar1 = (context->fields).Label;
          if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
             (__this = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
             __this != (UnityEngine_GameObject_o *)0x0)) {
            pGVar3 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                     UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNa);
            return pGVar3;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$SetFeedback
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, bool ownsColor, const MethodInfo* method);
// 0x41d7a60

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
               bool_conflict ownsColor,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  System_String_o *normal;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_00;
  
  if (DAT_05704e7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e7c = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    x = (UnityEngine_Object_o *)(context->fields).Root;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this = (context->fields).Root;
      if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_041d7b3e;
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
      normal = (context->fields).Text;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                (__this_00,normal,normal,ownsColor & 0xffU & (uint)(byte)(context->fields).Enabled,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_041d7b3e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x41d77b0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
               MethodInfo *method)

{
  int iVar1;
  TMPro_TextMeshProUGUI_o *__this;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  System_String_o *pSVar4;
  
  if (DAT_05704e7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponentInParent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"-popover");
    il2cpp_init_method_metadata(&"-options-scroll");
    DAT_05704e7d = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    if (*(char *)((long)&(context->fields).Enabled + 2) == '\0') {
      pUVar3 = (UnityEngine_Object_o *)(context->fields).Root;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_01 = (UnityEngine_Transform_o *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_00 = (context->fields).Root;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041d7a57;
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      }
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      while( true ) {
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
           (pSVar4 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0),
           pSVar4 == (System_String_o *)0x0)) break;
        bVar2 = System_String__EndsWith(pSVar4,"-popover",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0)
          ;
          if (pSVar4 == (System_String_o *)0x0) break;
          bVar2 = System_String__EndsWith(pSVar4,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') goto LAB_041d79cf;
        }
        else {
LAB_041d79cf:
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (pUVar3 == (UnityEngine_Object_o *)0x0) break;
            (**(code **)&pUVar3->klass[1]._2.naturalAligment)
                      (*(undefined8 *)(*(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8) + 0x10),
                       *(undefined8 *)(*(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8) + 0x18),pUVar3);
          }
        }
        __this_01 = UnityEngine_Transform__get_parent(__this_01,(MethodInfo *)0x0);
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this = (context->fields).Label;
      if (__this != (TMPro_TextMeshProUGUI_o *)0x0) {
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponentInParent<object>
                           ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pUVar3 != (UnityEngine_Object_o *)0x0) {
          (**(code **)&pUVar3->klass[1]._2.naturalAligment)
                    (*(undefined8 *)(*(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8) + 0x10),
                     *(undefined8 *)(*(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8) + 0x18),pUVar3,
                     pUVar3->klass[1].vtable._0_Equals.methodPtr);
          return;
        }
      }
    }
  }
LAB_041d7a57:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_array* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x41d7d00

UnityEngine_Color_array *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
          (System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  System_Collections_Generic_IList_string__c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  undefined4 uVar9;
  int iVar10;
  bool_conflict bVar11;
  VirtualInvokeData *pVVar12;
  UnityEngine_Color_array *pUVar13;
  System_String_o *pSVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Color_Fields local_48;
  
  if (DAT_05704e7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata();
    DAT_05704e7e = '\x01';
  }
  if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = colors->klass;
  uVar2._0_1_ = (pSVar7->_2).rank;
  uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar8 = (pSVar7->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar15) == TypeInfo_ICollection_string) {
        pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar15);
        goto LAB_041d7db1;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar15);
  }
  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041d7db1:
  uVar9 = (*pVVar12->methodPtr)(colors,pVVar12->method);
  pUVar13 = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color,uVar9);
  if (pUVar13 != (UnityEngine_Color_array *)0x0) {
    uVar16 = 0;
    do {
      pSVar7 = colors->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar15) == TypeInfo_ICollection_string) {
            pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar15);
            goto LAB_041d7e73;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar15);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041d7e73:
      iVar10 = (*pVVar12->methodPtr)(colors,pVVar12->method);
      if ((long)iVar10 <= (long)uVar16) {
        return pUVar13;
      }
      pSVar7 = colors->klass;
      uVar4._0_1_ = (pSVar7->_2).rank;
      uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar15) == TypeInfo_IList_string) {
            pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar15);
            goto LAB_041d7ee3;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar15);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_IList_string,0);
LAB_041d7ee3:
      pSVar14 = (System_String_o *)(*pVVar12->methodPtr)(colors,uVar16 & 0xffffffff,pVVar12->method)
      ;
      if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_48.r = 0.0;
      local_48.g = 0.0;
      local_48.b = 0.0;
      local_48.a = 0.0;
      bVar11 = UnityEngine_ColorUtility__TryParseHtmlString
                         (pSVar14,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
      if ((uint)pUVar13->max_length <= uVar16) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((char)bVar11 == '\0') {
        fVar17 = 1.0;
        fVar18 = 1.0;
        fVar19 = fVar17;
        fVar20 = fVar18;
      }
      else {
        fVar17 = local_48.r;
        fVar18 = local_48.g;
        fVar19 = local_48.b;
        fVar20 = local_48.a;
      }
      pUVar1 = pUVar13->m_Items + uVar16;
      (pUVar1->fields).r = fVar17;
      (pUVar1->fields).g = fVar18;
      (pUVar1->fields).b = fVar19;
      (pUVar1->fields).a = fVar20;
      uVar16 = uVar16 + 1;
    } while( true );
  }
  pSVar7 = colors->klass;
  uVar5._0_1_ = (pSVar7->_2).rank;
  uVar5._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar5 != 0) {
    pIVar8 = (pSVar7->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar15) == TypeInfo_ICollection_string) {
        pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar15);
        goto LAB_041d7fa1;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar5 << 4 != lVar15);
  }
  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041d7fa1:
  iVar10 = (*pVVar12->methodPtr)(colors,pVVar12->method);
  if (iVar10 < 1) {
    return (UnityEngine_Color_array *)0x0;
  }
  pSVar7 = colors->klass;
  uVar6._0_1_ = (pSVar7->_2).rank;
  uVar6._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar6 != 0) {
    pIVar8 = (pSVar7->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar15) == TypeInfo_IList_string) {
        pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar15);
        goto LAB_041d8023;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar6 << 4 != lVar15);
  }
  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_IList_string,0);
LAB_041d8023:
  pSVar14 = (System_String_o *)(*pVVar12->methodPtr)(colors,0,pVVar12->method);
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  UnityEngine_ColorUtility__TryParseHtmlString
            (pSVar14,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_String_o* hex, const MethodInfo* method);
// 0x41d84a0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
          (System_String_o *hex,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool_conflict bVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_Fields local_18;
  
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hex,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UVar3.fields.b = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.g = 1.0;
    return (UnityEngine_Color_o)UVar3.fields;
  }
  UVar1.b = local_18.b;
  UVar1.a = local_18.a;
  UVar1.r = local_18.r;
  UVar1.g = local_18.g;
  return (UnityEngine_Color_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor (const MethodInfo* method);
// 0x41d84e0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_05704e7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"#B7F8C8FF");
    il2cpp_init_method_metadata(&"#8CEBFFFF");
    il2cpp_init_method_metadata(&"#A8F5D6FF");
    il2cpp_init_method_metadata(&"#97F0E8FF");
    DAT_05704e7f = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,2);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "#B7F8C8FF";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "#8CEBFFFF";
        il2cpp_runtime_glue(lVar2 + 0x28);
        **(long **)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8) = lVar2;
        il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8),lVar2);
        lVar2 = il2cpp_glue_02274930(TypeInfo_string,4);
        if (lVar2 == 0) goto LAB_041d8698;
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(undefined8 *)(lVar2 + 0x20) = "#B7F8C8FF";
          il2cpp_runtime_glue(lVar2 + 0x20);
          if (1 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x28) = "#A8F5D6FF";
            il2cpp_runtime_glue(lVar2 + 0x28);
            if (2 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x30) = "#97F0E8FF";
              il2cpp_runtime_glue(lVar2 + 0x30);
              if (3 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x38) = "#8CEBFFFF";
                il2cpp_runtime_glue(lVar2 + 0x38);
                lVar1 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
                *(long *)(lVar1 + 8) = lVar2;
                il2cpp_runtime_glue(lVar1 + 8,lVar2);
                lVar2 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
                *(undefined8 *)(lVar2 + 0x10) = 0x3e0f5c293e0f5c29;
                *(undefined8 *)(lVar2 + 0x18) = 0x3f8000003e0f5c29;
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041d8698:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


