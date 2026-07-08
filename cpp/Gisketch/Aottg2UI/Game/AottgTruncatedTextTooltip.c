// Type: Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgTruncatedTextTooltip.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x41c35f0

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **ppTVar1;
  bool_conflict bVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar4;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_05704dd9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshP);
    il2cpp_init_method_metadata(&MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTool);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTool);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704dd9 = '\x01';
  }
  pTVar3 = (TMPro_TextMeshProUGUI_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) {
    pTVar3 = (TMPro_TextMeshProUGUI_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshP);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *)0x0) {
    ppTVar1 = &(__this->fields)._text;
    (__this->fields)._text = pTVar3;
    il2cpp_runtime_glue(ppTVar1,pTVar3);
    pGVar4 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTool);
    if (pGVar4 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041c3734;
      pGVar4 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
               UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTool);
    }
    (__this->fields)._tooltip = pGVar4;
    il2cpp_runtime_glue(&(__this->fields)._tooltip);
    pTVar3 = (__this->fields)._text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*ppTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*ppTVar1,0,(MethodInfo *)0x0);
      if (*ppTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)*ppTVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_041c3734:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__LateUpdate (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x41c3740

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__LateUpdate
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  UnityEngine_Vector2_Fields UVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o *b;
  System_String_o *pSVar5;
  UnityEngine_Rect_o UVar6;
  float local_28;
  float fStack_24;
  
  if (DAT_05704dda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704dda = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pTVar3 = (__this->fields)._text;
  if ((pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) &&
     (__this_01 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    pTVar3 = (__this->fields)._text;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      ppSVar1 = &(__this->fields)._lastText;
      pSVar5 = *ppSVar1;
      b = (System_String_o *)
          (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                    (UVar6.fields._0_8_,pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
      bVar4 = System_String__op_Equality(pSVar5,b,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        UVar2 = (__this->fields)._lastSize.fields;
        local_28 = UVar6.fields.m_Width;
        fStack_24 = UVar6.fields.m_Height;
        local_28 = UVar2.x - local_28;
        fStack_24 = UVar2.y - fStack_24;
        if (fStack_24 * fStack_24 + local_28 * local_28 < 9.9999994e-11) {
          return;
        }
      }
      pTVar3 = (__this->fields)._text;
      if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pSVar5 = (System_String_o *)
                 (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                           (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
        (__this->fields)._lastText = pSVar5;
        il2cpp_runtime_glue(ppSVar1);
        (__this->fields)._lastSize.fields = UVar6.fields._8_8_;
        pTVar3 = (__this->fields)._text;
        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar3,0,0);
          pTVar3 = (__this->fields)._text;
          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
            __this_00 = (__this->fields)._tooltip;
            bVar4 = TMPro_TMP_Text__get_isTextOverflowing
                              ((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            else {
              pTVar3 = (__this->fields)._text;
              if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_041c38ea;
              pSVar5 = (System_String_o *)
                       (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                                 (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
            }
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                        (__this_00,pSVar5,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_041c38ea:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x41c38f0

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


