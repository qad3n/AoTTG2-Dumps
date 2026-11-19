// Type: Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgTruncatedTextTooltip.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x58bc950

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **targetAddress;
  bool bVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar3;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_075453b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075453b0 = '\x01';
  }
  pTVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
  if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
    pTVar2 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B09D0 *)
                        MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *)0x0) {
    targetAddress = &(__this->fields)._text;
    (__this->fields)._text = pTVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pGVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchTooltipTrigger);
    if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_058bca94;
      pGVar3 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    }
    (__this->fields)._tooltip = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip);
    pTVar2 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)*targetAddress,false,(MethodInfo *)0x0);
      if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)*targetAddress,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_058bca94:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__LateUpdate (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x58bcaa0

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__LateUpdate
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  UnityEngine_Vector2_Fields UVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  bool bVar3;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o *b;
  System_String_o *pSVar4;
  UnityEngine_Rect_o UVar5;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075453b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075453b1 = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pTVar2 = (__this->fields)._text;
  if ((pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) &&
     (__this_01 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar5 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pTVar2 = (__this->fields)._text;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      targetAddress = &(__this->fields)._lastText;
      pSVar4 = *targetAddress;
      b = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                    (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
      bVar3 = System_String__op_Equality(pSVar4,b,(MethodInfo *)0x0);
      if (bVar3) {
        UVar1 = (__this->fields)._lastSize.fields;
        fStack_28 = UVar5.fields.m_Width;
        fStack_24 = UVar5.fields.m_Height;
        fStack_28 = UVar1.x - fStack_28;
        fStack_24 = UVar1.y - fStack_24;
        if (fStack_24 * fStack_24 + fStack_28 * fStack_28 < 9.9999994e-11) {
          return;
        }
      }
      pTVar2 = (__this->fields)._text;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pSVar4 = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                           (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
        (__this->fields)._lastText = pSVar4;
        Il2CppCodeGenWriteBarrier(targetAddress);
        (__this->fields)._lastSize.fields = UVar5.fields._8_8_;
        pTVar2 = (__this->fields)._text;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
          pTVar2 = (__this->fields)._text;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            __this_00 = (__this->fields)._tooltip;
            bVar3 = TMPro_TMP_Text__get_isTextOverflowing((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0);
            if (bVar3) {
              pTVar2 = (__this->fields)._text;
              if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_058bcc68;
              pSVar4 = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                                 (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
            }
            else {
              pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            }
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                        (__this_00,pSVar4,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                         (System_String_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_058bcc68:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x58bcc70

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


