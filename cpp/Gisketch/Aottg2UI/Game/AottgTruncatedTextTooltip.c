// Type: Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgTruncatedTextTooltip.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x181de7810

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__Awake
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  bool bVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *value;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b0a = '\x01';
  }
  pTVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
  if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
    pTVar2 = UnityEngine_Component__GetComponentInChildren_object__664b50
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_664B50 *)
                        MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *)0x0) {
    (__this->fields)._text = pTVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._text,pTVar2);
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this,
                       (MethodInfo_6651A0 *)
                       MethodInfo_UnityEngine_Component_GetComponent_GisketchTooltipTrigger);
    if (value == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181de794f;
      value = UnityEngine_GameObject__AddComponent_object_
                        (__this_00,
                         (MethodInfo_6F4D60 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    }
    (__this->fields)._tooltip = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,value);
    pTVar2 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pTVar2 = (__this->fields)._text;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar2,false,(MethodInfo *)0x0);
      pTVar2 = (__this->fields)._text;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar2,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181de794f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__LateUpdate (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x181de7960

void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip__LateUpdate
               (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Rect_o *pUVar5;
  System_String_o *b;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184344b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184344b0b = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pTVar3 = (__this->fields)._text;
  if ((pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) &&
     (__this_01 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    pUVar5 = UnityEngine_RectTransform__get_rect(local_38,__this_01,(MethodInfo *)0x0);
    fVar1 = (pUVar5->fields).m_Width;
    fVar2 = (pUVar5->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pTVar3 = (__this->fields)._text;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pSVar6 = (__this->fields)._lastText;
      b = (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                    (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
      bVar4 = System_String__op_Equality(pSVar6,b,(MethodInfo *)0x0);
      if ((bVar4) &&
         (fVar7 = (__this->fields)._lastSize.fields.x - fVar1,
         fVar8 = (__this->fields)._lastSize.fields.y - fVar2, fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11))
      {
        return;
      }
      pTVar3 = (__this->fields)._text;
      if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pSVar6 = (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                           (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
        (__this->fields)._lastText = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText,pSVar6);
        pTVar3 = (__this->fields)._text;
        (__this->fields)._lastSize.fields.x = fVar1;
        (__this->fields)._lastSize.fields.y = fVar2;
        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar3,false,false,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
          pTVar3 = (__this->fields)._text;
          if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
            __this_00 = (__this->fields)._tooltip;
            bVar4 = TMPro_TMP_Text__get_isTextOverflowing((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0);
            if (bVar4) {
              pTVar3 = (__this->fields)._text;
              if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_181de7b4c;
              pSVar6 = (*(pTVar3->klass->vtable)._65_get_text.methodPtr)
                                 (pTVar3,(pTVar3->klass->vtable)._65_get_text.method);
            }
            else {
              pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                        (__this_00,pSVar6,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                         (System_String_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_181de7b4c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor (Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip___ctor(Gisketch_Aottg2UI_Game_AottgTruncatedTextTooltip_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


