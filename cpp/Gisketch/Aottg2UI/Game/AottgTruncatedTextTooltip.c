// Type: Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgTruncatedTextTooltip.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x44f44d0

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **ppTVar1;
  System_String_o **ppSVar2;
  UnityEngine_Vector2_Fields UVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  bool_conflict bVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o *b;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *pGVar9;
  UnityEngine_Rect_o UVar10;
  float fStack_40;
  float fStack_3c;
  
  if (g_data_057aec98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec98 = '\x01';
  }
  pGVar9 = __this;
  pTVar6 = (TMPro_TextMeshProUGUI_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
  if (pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) {
    pGVar9 = __this;
    pTVar6 = (TMPro_TextMeshProUGUI_o *)
             UnityEngine_Component__GetComponentInChildren_object__24e7d50
                       ((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *)0x0) {
    ppTVar1 = &(__this->fields)._text;
    (__this->fields)._text = pTVar6;
    il2cpp_runtime_helper_022b4080(ppTVar1,pTVar6);
    pGVar7 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchTooltipTrigger_GetComponent_GisketchTooltipTrigg);
    if (pGVar7 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
      pGVar9 = __this;
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_044f4614;
      pGVar7 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
               UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    }
    (__this->fields)._tooltip = pGVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltip);
    pTVar6 = (__this->fields)._text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pGVar9 = (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *)0x0;
    if (*ppTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*ppTVar1,0,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *)0x0;
      if (*ppTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)*ppTVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_044f4614:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec99 = '\x01';
  }
  pTVar6 = (pGVar9->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pTVar6 = (pGVar9->fields)._text;
  if ((pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) &&
     (__this_01 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar10 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    pTVar4 = (pGVar9->fields)._text;
    pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
      ppSVar2 = &(pGVar9->fields)._lastText;
      pSVar8 = *ppSVar2;
      b = (System_String_o *)
          (*(pTVar4->klass->vtable)._65_get_text.methodPtr)
                    (UVar10.fields._0_8_,pTVar4,(pTVar4->klass->vtable)._65_get_text.method);
      bVar5 = System_String__op_Equality(pSVar8,b,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UVar3 = (pGVar9->fields)._lastSize.fields;
        fStack_40 = UVar10.fields.m_Width;
        fStack_3c = UVar10.fields.m_Height;
        fStack_40 = UVar3.x - fStack_40;
        fStack_3c = UVar3.y - fStack_3c;
        if (fStack_3c * fStack_3c + fStack_40 * fStack_40 < 9.9999994e-11) {
          return;
        }
      }
      pTVar4 = (pGVar9->fields)._text;
      pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pSVar8 = (System_String_o *)
                 (*(pTVar4->klass->vtable)._65_get_text.methodPtr)
                           (pTVar4,(pTVar4->klass->vtable)._65_get_text.method);
        (pGVar9->fields)._lastText = pSVar8;
        il2cpp_runtime_helper_022b4080(ppSVar2);
        (pGVar9->fields)._lastSize.fields = UVar10.fields._8_8_;
        pTVar4 = (pGVar9->fields)._text;
        pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
        if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar4,0,0);
          pTVar6 = (pGVar9->fields)._text;
          if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
            pGVar7 = (pGVar9->fields)._tooltip;
            bVar5 = TMPro_TMP_Text__get_isTextOverflowing((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            else {
              pTVar6 = (pGVar9->fields)._text;
              if (pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_044f47ca;
              pSVar8 = (System_String_o *)
                       (*(pTVar6->klass->vtable)._65_get_text.methodPtr)
                                 (pTVar6,(pTVar6->klass->vtable)._65_get_text.method);
            }
            if (pGVar7 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                        (pGVar7,pSVar8,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_044f47ca:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pTVar6,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__LateUpdate (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x44f4620

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
  TMPro_TextMeshProUGUI_o *pTVar6;
  UnityEngine_Rect_o UVar7;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057aec99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec99 = '\x01';
  }
  pTVar6 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pTVar6 = (__this->fields)._text;
  if ((pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) &&
     (__this_01 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar7 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    pTVar3 = (__this->fields)._text;
    pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      ppSVar1 = &(__this->fields)._lastText;
      pSVar5 = *ppSVar1;
      b = (System_String_o *)
          (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                    (UVar7.fields._0_8_,pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
      bVar4 = System_String__op_Equality(pSVar5,b,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        UVar2 = (__this->fields)._lastSize.fields;
        fStack_28 = UVar7.fields.m_Width;
        fStack_24 = UVar7.fields.m_Height;
        fStack_28 = UVar2.x - fStack_28;
        fStack_24 = UVar2.y - fStack_24;
        if (fStack_24 * fStack_24 + fStack_28 * fStack_28 < 9.9999994e-11) {
          return;
        }
      }
      pTVar3 = (__this->fields)._text;
      pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pSVar5 = (System_String_o *)
                 (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                           (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
        (__this->fields)._lastText = pSVar5;
        il2cpp_runtime_helper_022b4080(ppSVar1);
        (__this->fields)._lastSize.fields = UVar7.fields._8_8_;
        pTVar3 = (__this->fields)._text;
        pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar3,0,0);
          pTVar6 = (__this->fields)._text;
          if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
            __this_00 = (__this->fields)._tooltip;
            bVar4 = TMPro_TMP_Text__get_isTextOverflowing((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            else {
              pTVar6 = (__this->fields)._text;
              if (pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_044f47ca;
              pSVar5 = (System_String_o *)
                       (*(pTVar6->klass->vtable)._65_get_text.methodPtr)
                                 (pTVar6,(pTVar6->klass->vtable)._65_get_text.method);
            }
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                        (__this_00,pSVar5,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_044f47ca:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pTVar6,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x44f47d0

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


