// Type: UI.ChatPlayerNameOverlay
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatPlayerNameOverlay.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatPlayerNameOverlay$$get_Label
// il2cpp: PatreonEffects_NameEffectLabel_o* UI_ChatPlayerNameOverlay__get_Label (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x5d1a0d0

PatreonEffects_NameEffectLabel_o *
UI_ChatPlayerNameOverlay__get_Label(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  return (__this->fields)._label;
}


// UI.ChatPlayerNameOverlay$$Initialize
// il2cpp: void UI_ChatPlayerNameOverlay__Initialize (UI_ChatPlayerNameOverlay_o* __this, TMPro_TextMeshProUGUI_o* source, const MethodInfo* method);
// 0x5d18100

void UI_ChatPlayerNameOverlay__Initialize
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TextMeshProUGUI_o *source,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_07547d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d8a = '\x01';
  }
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source);
  pTVar1 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (System_Action_TMP_TextInfo__o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._source;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName,(MethodInfo_4A81BE0 *)0x0);
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
              (pTVar1,__this_00,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
  }
  UI_ChatPlayerNameOverlay__BuildIfNeeded(__this,(MethodInfo *)__this_00);
  return;
}


// UI.ChatPlayerNameOverlay$$SetName
// il2cpp: void UI_ChatPlayerNameOverlay__SetName (UI_ChatPlayerNameOverlay_o* __this, System_String_o* name, TMPro_TMP_FontAsset_o* font, float fontSize, UnityEngine_Color_o color, UI_ChatDisplayNameRange_o range, const MethodInfo* method);
// 0x5d19020
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1905f: test r12, r12
// asm:   0x5d19064: jmp 0x5d191f7
// asm:   0x5d190f8: jmp 0x5d191f7

void UI_ChatPlayerNameOverlay__SetName
               (UI_ChatPlayerNameOverlay_o *__this,System_String_o *name,TMPro_TMP_FontAsset_o *font,
               float fontSize,UnityEngine_Color_o color,UI_ChatDisplayNameRange_o range,MethodInfo *method)

{
  System_String_o **targetAddress;
  System_String_o *pSVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_07547d8b == '\0') {
    method_01 = (MethodInfo *)name;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    g_data_07547d8b = '\x01';
    UI_ChatPlayerNameOverlay__BuildIfNeeded(__this,method_01);
  }
  else {
    UI_ChatPlayerNameOverlay__BuildIfNeeded(__this,(MethodInfo *)name);
  }
  if (name == (System_String_o *)0x0) {
    name = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this != (UI_ChatPlayerNameOverlay_o *)0x0) {
    targetAddress = &(__this->fields)._nameText;
    (__this->fields)._nameText = name;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this->fields)._range.fields = range.fields;
    if ((range.fields.SourceStartIndex < 0) || (range.fields.SourceEndIndex <= range.fields.SourceStartIndex))
    {
      (__this->fields)._hasRange = false;
      pPVar2 = (__this->fields)._label;
    }
    else {
      pSVar1 = *targetAddress;
      if (pSVar1 == (System_String_o *)0x0) goto label_05d191f7;
      (__this->fields)._hasRange = 0 < (pSVar1->fields)._stringLength;
      pPVar2 = (__this->fields)._label;
    }
    if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      PatreonEffects_NameEffectLabel__set_fontSize(pPVar2,fontSize,(MethodInfo *)0x0);
      pPVar2 = (__this->fields)._label;
      if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        PatreonEffects_NameEffectLabel__set_color(pPVar2,color,(MethodInfo *)0x0);
        pPVar2 = (__this->fields)._label;
        if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          PatreonEffects_NameEffectLabel__set_richText(pPVar2,true,(MethodInfo *)0x0);
          pPVar2 = (__this->fields)._label;
          if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            PatreonEffects_NameEffectLabel__set_alignment(pPVar2,0x801,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              pPVar2 = (__this->fields)._label;
              if (pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_05d191f7;
              PatreonEffects_NameEffectLabel__SetFont(pPVar2,font,(MethodInfo *)0x0);
            }
            pPVar2 = (__this->fields)._label;
            if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              PatreonEffects_NameEffectLabel__SetText
                        (pPVar2,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                         (__this->fields)._nameText,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                         (MethodInfo *)0x0);
              UI_ChatPlayerNameOverlay__SetRaycastTargets(__this,false,method_00);
              return;
            }
          }
        }
      }
    }
  }
label_05d191f7:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$SetRange
// il2cpp: void UI_ChatPlayerNameOverlay__SetRange (UI_ChatPlayerNameOverlay_o* __this, UI_ChatDisplayNameRange_o range, const MethodInfo* method);
// 0x5d18840

void UI_ChatPlayerNameOverlay__SetRange
               (UI_ChatPlayerNameOverlay_o *__this,UI_ChatDisplayNameRange_o range,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  (__this->fields)._range.fields = range.fields;
  if ((range.fields.SourceStartIndex < 0) || (range.fields.SourceEndIndex <= range.fields.SourceStartIndex)) {
    (__this->fields)._hasRange = false;
    return;
  }
  pSVar1 = (__this->fields)._nameText;
  if (pSVar1 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._hasRange = 0 < (pSVar1->fields)._stringLength;
  return;
}


// UI.ChatPlayerNameOverlay$$Clear
// il2cpp: void UI_ChatPlayerNameOverlay__Clear (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x5d182a0

void UI_ChatPlayerNameOverlay__Clear(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  System_String_o *prefix;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_07547d8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d8c = '\x01';
  }
  (__this->fields)._hasRange = false;
  (__this->fields)._nameText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nameText);
  pPVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pPVar1 = (__this->fields)._label;
    if (pPVar1 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_05d183b7;
    PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._label;
    if (pPVar1 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_05d183b7;
    prefix = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    PatreonEffects_NameEffectLabel__SetText(pPVar1,prefix,prefix,prefix,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._labelRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar2 = (__this->fields)._labelRect;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05d183b7:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$OnDestroy
// il2cpp: void UI_ChatPlayerNameOverlay__OnDestroy (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x5d1a480

void UI_ChatPlayerNameOverlay__OnDestroy(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  System_Action_TMP_TextInfo__o *__this_00;
  
  if (Il2CppMethodInitialized_07547d8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d8d = '\x01';
  }
  pTVar1 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._source;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName,(MethodInfo_4A81BE0 *)0x0);
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
              (pTVar1,__this_00,(pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    return;
  }
  return;
}


// UI.ChatPlayerNameOverlay$$BuildIfNeeded
// il2cpp: void UI_ChatPlayerNameOverlay__BuildIfNeeded (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x5d1a0e0

void UI_ChatPlayerNameOverlay__BuildIfNeeded(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar4;
  PatreonEffects_NameEffectLabel_o *pPVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547d8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Name Effect Overlay");
    Il2CppMethodInitialized_07547d8e = '\x01';
  }
  pPVar5 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05d1a395:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d1a39f;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05d1a39f:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,"Name Effect Overlay",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          targetAddress = &(__this->fields)._labelRect;
          (__this->fields)._labelRect = pUVar4;
          Il2CppCodeGenWriteBarrier(targetAddress);
          pUVar4 = (__this->fields)._labelRect;
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar4,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (*targetAddress,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (*targetAddress,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                pPVar5 = UnityEngine_GameObject__AddComponent_object_
                                   (__this_00,
                                    (MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
                (__this->fields)._label = pPVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
                UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel(__this,__this_00,method_00);
                UI_ChatPlayerNameOverlay__SetRaycastTargets(__this,false,method_01);
                UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_05d1a395;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ChatPlayerNameOverlay$$ConfigureLayoutFreeNameLabel
// il2cpp: void UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel (UI_ChatPlayerNameOverlay_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5d1a550

void UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel
               (UI_ChatPlayerNameOverlay_o *__this,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  TMPro_TextMeshProUGUI_o *__this_00;
  bool bVar2;
  UnityEngine_UI_HorizontalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *x_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07547d8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d8f = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (root,(MethodInfo_353B730 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05d1a795;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,false,(MethodInfo *)0x0);
    }
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     (root,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (bVar2) {
      if (x_00 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_05d1a795;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x_00,false,(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    pPVar1 = (__this->fields)._label;
    if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UI_ChatPlayerNameOverlay__DisableSegmentLayout((pPVar1->fields)._prefixTmp,false,method_00);
      pPVar1 = (__this->fields)._label;
      if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UI_ChatPlayerNameOverlay__DisableSegmentLayout((pPVar1->fields)._suffixTmp,false,method_01);
        pPVar1 = (__this->fields)._label;
        if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          UI_ChatPlayerNameOverlay__DisableSegmentLayout((pPVar1->fields)._nameTmp,true,method_02);
          pPVar1 = (__this->fields)._label;
          if ((pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
             (__this_00 = (pPVar1->fields)._nameTmp, __this_00 != (TMPro_TextMeshProUGUI_o *)0x0)) {
            __this_01 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)__this_00,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_01,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_07542885 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_07542885 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (__this_01,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0753ecc8 = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (__this_01,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0753ecc8 = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMax
                        (__this_01,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05d1a795:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$DisableSegmentLayout
// il2cpp: void UI_ChatPlayerNameOverlay__DisableSegmentLayout (TMPro_TextMeshProUGUI_o* segment, bool active, const MethodInfo* method);
// 0x5d1a7a0

void UI_ChatPlayerNameOverlay__DisableSegmentLayout
               (TMPro_TextMeshProUGUI_o *segment,bool active,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_07547d90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d90 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)segment,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (segment != (TMPro_TextMeshProUGUI_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)segment,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d1a87b;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,false,(MethodInfo *)0x0);
    }
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)segment,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this,active,(MethodInfo *)0x0);
      return;
    }
  }
label_05d1a87b:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$HideSourceName
// il2cpp: void UI_ChatPlayerNameOverlay__HideSourceName (UI_ChatPlayerNameOverlay_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x5d1a880
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1a8c2: mov r8d, r11d
// asm:   0x5d1a8c5: nop word ptr cs:[rax + rax]
// asm:   0x5d1a90e: jmp 0x5d1a9fc
// asm:   0x5d1a93c: nop dword ptr [rax]

void UI_ChatPlayerNameOverlay__HideSourceName
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  TMPro_TMP_MeshInfo_array *pTVar5;
  UnityEngine_Color32_array *pUVar6;
  ulong uVar7;
  int32_t *piVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  ulong uVar14;
  bool bVar15;
  
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && ((__this->fields)._hasRange != false)) {
    iVar1 = (textInfo->fields).characterCount;
    uVar14 = (ulong)iVar1;
    if (0 < (long)uVar14) {
      pTVar4 = (textInfo->fields).characterInfo;
      if (pTVar4 == (TMPro_TMP_CharacterInfo_array *)0x0) {
label_05d1a9fe:
        ThrowNullReferenceException();
      }
      piVar8 = &pTVar4->m_Items[0].fields.index;
      bVar12 = false;
      uVar7 = 0;
      iVar11 = -1;
      do {
        if ((uint)pTVar4->max_length == uVar7) goto label_05d1a9f7;
        iVar10 = iVar11;
        if ((((*(bool *)(piVar8 + 0x5a) & 1U) != 0) &&
            ((__this->fields)._range.fields.SourceStartIndex <= *piVar8)) &&
           (*piVar8 < (__this->fields)._range.fields.SourceEndIndex)) {
          iVar10 = piVar8[0xd];
          bVar12 = true;
          if ((-1 < iVar11) && (bVar15 = iVar10 != iVar11, iVar10 = iVar11, bVar15)) {
            return;
          }
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x5e;
        iVar11 = iVar10;
      } while (uVar14 != uVar7);
      if ((bVar12) && (0 < iVar1)) {
        lVar9 = 0x28;
        uVar7 = 0;
        do {
          pTVar4 = (textInfo->fields).characterInfo;
          if (pTVar4 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_05d1a9fe;
          if ((uint)pTVar4->max_length <= uVar7) goto label_05d1a9f7;
          if ((((*(byte *)((long)(&pTVar4->m_Items[0].fields.underlineColor + 1) + lVar9) & 1) != 0) &&
              (iVar1 = *(int *)((long)(&pTVar4->m_Items[0].fields.vertex_BL.fields.color + -0x23) + lVar9),
              (__this->fields)._range.fields.SourceStartIndex <= iVar1)) &&
             (iVar1 < (__this->fields)._range.fields.SourceEndIndex)) {
            pTVar5 = (textInfo->fields).meshInfo;
            if (pTVar5 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_05d1a9fe;
            uVar2 = *(uint *)((long)(&pTVar4->m_Items[0].fields.vertex_BL.fields.color + -0x19) + lVar9);
            if ((uint)pTVar5->max_length <= uVar2) goto label_05d1a9f7;
            pUVar6 = pTVar5->m_Items[(int)uVar2].fields.colors32;
            if (pUVar6 != (UnityEngine_Color32_array *)0x0) {
              uVar2 = *(uint *)((long)(&pTVar4->m_Items[0].fields.vertex_BL.fields.color + -0x14) + lVar9);
              uVar3 = (uint)pUVar6->max_length;
              uVar13 = uVar2 + 3;
              if ((int)uVar13 < (int)uVar3) {
                if (uVar3 <= uVar2) {
label_05d1a9f7:
                  ThrowIndexOutOfRangeException();
                }
                pUVar6->m_Items[(int)uVar2].fields._overlap_0._at_a.a = 0;
                if ((uint)pUVar6->max_length <= uVar2 + 1) goto label_05d1a9f7;
                pUVar6->m_Items[(int)(uVar2 + 1)].fields._overlap_0._at_a.a = 0;
                if (((uint)pUVar6->max_length <= uVar2 + 2) ||
                   (pUVar6->m_Items[(int)(uVar2 + 2)].fields._overlap_0._at_a.a = 0,
                   (uint)pUVar6->max_length <= uVar13)) goto label_05d1a9f7;
                pUVar6->m_Items[(int)uVar13].fields._overlap_0._at_a.a = 0;
                uVar14 = (ulong)(uint)(textInfo->fields).characterCount;
              }
            }
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0x178;
        } while ((long)uVar7 < (long)(int)uVar14);
      }
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$SyncToSource
// il2cpp: void UI_ChatPlayerNameOverlay__SyncToSource (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x5d18880
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d189dd: nop dword ptr [rax]
// asm:   0x5d18a32: jmp 0x5d18a3a

void UI_ChatPlayerNameOverlay__SyncToSource(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  TMPro_TMP_CharacterInfo_array *pTVar2;
  PatreonEffects_NameEffectLabel_o *pPVar3;
  undefined1 auVar4 [16];
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  TMPro_TMP_TextInfo_o *pTVar9;
  bool *pbVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  float size;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  UnityEngine_Rect_o UVar20;
  UnityEngine_Rect_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  ulong local_a8;
  undefined8 local_98;
  float local_88;
  float fStack_84;
  float fStack_74;
  float local_68;
  float local_58;
  float fStack_44;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547d91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547d91 = '\x01';
  }
  pTVar1 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    pUVar12 = (__this->fields)._labelRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar8) && ((__this->fields)._hasRange != false)) {
      pTVar1 = (__this->fields)._source;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
        pTVar1 = (__this->fields)._source;
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pTVar9 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0);
          if (((pTVar9 != (TMPro_TMP_TextInfo_o *)0x0) && ((__this->fields)._hasRange != false)) &&
             (uVar13 = (ulong)(pTVar9->fields).characterCount, 0 < (long)uVar13)) {
            pTVar2 = (pTVar9->fields).characterInfo;
            if (pTVar2 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_05d18cf8;
            pbVar10 = &pTVar2->m_Items[0].fields.isVisible;
            fVar17 = 0.0;
            bVar8 = false;
            uVar16 = 0;
            auVar18 = _DAT_01008860;
            auVar19 = _DAT_010093c0;
            iVar15 = -1;
            do {
              if ((uint)pTVar2->max_length == uVar16) {
                ThrowIndexOutOfRangeException();
              }
              iVar14 = iVar15;
              if ((((*pbVar10 & 1U) != 0) &&
                  ((__this->fields)._range.fields.SourceStartIndex <= *(int *)(pbVar10 + -0x168))) &&
                 (*(int *)(pbVar10 + -0x168) < (__this->fields)._range.fields.SourceEndIndex)) {
                iVar14 = *(int *)(pbVar10 + -0x134);
                if (iVar15 < 0) {
                  fVar17 = *(float *)(pbVar10 + -0x4c);
                }
                else {
                  bVar8 = iVar14 != iVar15;
                  iVar14 = iVar15;
                  if (bVar8) goto label_05d18a3a;
                }
                auVar7._4_4_ = *(float *)(pbVar10 + -0x48);
                auVar7._0_4_ = (((UnityEngine_Vector3_o *)(pbVar10 + -0x7c))->fields).x;
                auVar7._8_8_ = 0;
                auVar18 = minps(auVar18,auVar7);
                auVar4._4_4_ = *(float *)(pbVar10 + -0x50);
                auVar4._0_4_ = (((UnityEngine_Vector3_o *)(pbVar10 + -0x70))->fields).x;
                auVar4._8_8_ = 0;
                auVar19 = maxps(auVar19,auVar4);
                bVar8 = true;
              }
              uVar16 = uVar16 + 1;
              pbVar10 = pbVar10 + 0x178;
              iVar15 = iVar14;
            } while (uVar13 != uVar16);
            if (bVar8) {
              pTVar1 = (__this->fields)._source;
              if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                __this_00 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0);
                pUVar12 = (__this->fields)._labelRect;
                if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                  pUVar12 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Transform__get_parent
                                      ((UnityEngine_Transform_o *)pUVar12,(MethodInfo *)0x0);
                  if ((pUVar12 != (UnityEngine_RectTransform_o *)0x0) &&
                     (pUVar12->klass != TypeInfo_UnityEngine_RectTransform)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pUVar12);
                  }
                  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar22.fields.z = 0.0;
                    local_a8._0_4_ = auVar18._0_4_;
                    local_a8._4_4_ = auVar18._4_4_;
                    UVar22.fields.x = (float)(undefined4)local_a8;
                    UVar22.fields.y = (float)local_a8._4_4_;
                    UVar22 = UnityEngine_Transform__TransformPoint
                                       ((UnityEngine_Transform_o *)__this_00,UVar22,(MethodInfo *)0x0);
                    UVar23.fields.z = 0.0;
                    local_98._0_4_ = auVar19._0_4_;
                    local_98._4_4_ = auVar19._4_4_;
                    UVar23.fields.x = (float)local_98;
                    UVar23.fields.y = local_98._4_4_;
                    UVar23 = UnityEngine_Transform__TransformPoint
                                       ((UnityEngine_Transform_o *)__this_00,UVar23,(MethodInfo *)0x0);
                    local_a8._0_4_ = auVar18._0_4_;
                    UVar24.fields.y = fVar17;
                    UVar24.fields.x = (float)(undefined4)local_a8;
                    UVar24.fields.z = 0.0;
                    UVar24 = UnityEngine_Transform__TransformPoint
                                       ((UnityEngine_Transform_o *)__this_00,UVar24,(MethodInfo *)0x0);
                    if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                      UVar22 = UnityEngine_Transform__InverseTransformPoint
                                         ((UnityEngine_Transform_o *)pUVar12,UVar22,(MethodInfo *)0x0);
                      UVar23 = UnityEngine_Transform__InverseTransformPoint
                                         ((UnityEngine_Transform_o *)pUVar12,UVar23,(MethodInfo *)0x0);
                      UVar24 = UnityEngine_Transform__InverseTransformPoint
                                         ((UnityEngine_Transform_o *)pUVar12,UVar24,(MethodInfo *)0x0);
                      pPVar3 = (__this->fields)._label;
                      if (pPVar3 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                        fVar17 = (pPVar3->fields)._fontSize;
                        UVar20 = UnityEngine_RectTransform__get_rect(pUVar12,(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                        }
                        UVar5 = UnityEngine_RectTransform__get_pivot(pUVar12,(MethodInfo *)0x0);
                        UVar21 = UnityEngine_RectTransform__get_rect(pUVar12,(MethodInfo *)0x0);
                        UVar6 = UnityEngine_RectTransform__get_pivot(pUVar12,(MethodInfo *)0x0);
                        pUVar12 = (__this->fields)._labelRect;
                        if ((pUVar12 != (UnityEngine_RectTransform_o *)0x0) &&
                           (pUVar11 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
                           pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
                          pUVar12 = (__this->fields)._labelRect;
                          if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                            local_98._4_4_ = UVar23.fields.y;
                            local_88 = UVar22.fields.x;
                            fStack_84 = UVar22.fields.y;
                            if (fVar17 <= local_98._4_4_ - fStack_84) {
                              fVar17 = local_98._4_4_ - fStack_84;
                            }
                            fStack_44 = UVar24.fields.y;
                            fStack_74 = UVar21.fields.m_Height;
                            fStack_34 = UVar6.fields.y;
                            local_58 = UVar20.fields.m_Width;
                            local_68 = UVar5.fields.x;
                            UVar5.fields.y = (fVar17 * 0.5 + fStack_44) - (1.0 - fStack_34) * fStack_74;
                            UVar5.fields.x = local_58 * local_68 + local_88;
                            UnityEngine_RectTransform__set_anchoredPosition(pUVar12,UVar5,(MethodInfo *)0x0);
                            pUVar12 = (__this->fields)._labelRect;
                            if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                              local_98._0_4_ = UVar23.fields.x;
                              size = 0.0;
                              if (0.0 <= (float)local_98 - local_88) {
                                size = (float)local_98 - local_88;
                              }
                              UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                        (pUVar12,0,size,(MethodInfo *)0x0);
                              pUVar12 = (__this->fields)._labelRect;
                              if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                          (pUVar12,1,fVar17,(MethodInfo *)0x0);
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
              goto label_05d18cf8;
            }
          }
label_05d18a3a:
          pUVar12 = (__this->fields)._labelRect;
          if ((pUVar12 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
label_05d18cf8:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$PreferredNameWidth
// il2cpp: float UI_ChatPlayerNameOverlay__PreferredNameWidth (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x5d19200
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d19299: xorps xmm0, xmm0
// asm:   0x5d1929c: jmp 0x5d1931d

float UI_ChatPlayerNameOverlay__PreferredNameWidth(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  bool bVar5;
  System_String_o *text;
  float local_28;
  
  if (Il2CppMethodInitialized_07547d92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07547d92 = '\x01';
  }
  pPVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return 0.0;
  }
  pPVar1 = (__this->fields)._label;
  if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
    pTVar2 = (pPVar1->fields)._nameTmp;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      return 0.0;
    }
    bVar5 = System_String__IsNullOrEmpty((__this->fields)._nameText,(MethodInfo *)0x0);
    if (bVar5) {
      return 0.0;
    }
    pPVar1 = (__this->fields)._label;
    if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      pTVar2 = (pPVar1->fields)._nameTmp;
      text = System_String__Concat_52f0320((__this->fields)._nameText,"|",(MethodInfo *)0x0)
      ;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        UVar3 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                          ((TMPro_TMP_Text_o *)pTVar2,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
        UVar4 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                          ((TMPro_TMP_Text_o *)pTVar2,"|",3.4028235e+38,3.4028235e+38,
                           (MethodInfo *)0x0);
        local_28 = UVar3.fields.x;
        local_28 = local_28 - UVar4.fields.x;
        if (local_28 <= 0.0) {
          local_28 = 0.0;
        }
        return local_28;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$TryGetSourceNameBounds
// il2cpp: bool UI_ChatPlayerNameOverlay__TryGetSourceNameBounds (UI_ChatPlayerNameOverlay_o* __this, TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Vector3_o* min, UnityEngine_Vector3_o* max, float* baseline, int32_t* firstLine, int32_t* lastLine, const MethodInfo* method);
// 0x5d1aa10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1ab32: and al, 1

bool UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TMP_TextInfo_o *textInfo,UnityEngine_Vector3_o *min,
               UnityEngine_Vector3_o *max,float *baseline,int32_t *firstLine,int32_t *lastLine,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  TMPro_TMP_CharacterInfo_array *pTVar11;
  bool bVar12;
  ulong uVar13;
  bool *pbVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  (min->fields).x = INFINITY;
  (min->fields).y = INFINITY;
  (min->fields).z = 0.0;
  (max->fields).x = -INFINITY;
  (max->fields).y = -INFINITY;
  (max->fields).z = 0.0;
  *baseline = 0.0;
  *firstLine = -1;
  *lastLine = -1;
  bVar12 = false;
  if (((__this->fields)._hasRange != false) && (textInfo != (TMPro_TMP_TextInfo_o *)0x0)) {
    if ((textInfo->fields).characterCount < 1) {
      bVar12 = false;
    }
    else {
      pTVar11 = (textInfo->fields).characterInfo;
      pbVar14 = &pTVar11->m_Items[0].fields.isVisible;
      bVar12 = false;
      uVar13 = 0;
      do {
        if (pTVar11 == (TMPro_TMP_CharacterInfo_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pTVar11->max_length <= uVar13) {
          ThrowIndexOutOfRangeException();
        }
        if ((((*pbVar14 & 1U) != 0) &&
            ((__this->fields)._range.fields.SourceStartIndex <= *(int *)(pbVar14 + -0x168))) &&
           (*(int *)(pbVar14 + -0x168) < (__this->fields)._range.fields.SourceEndIndex)) {
          iVar10 = *(int *)(pbVar14 + -0x134);
          fVar1 = (((UnityEngine_Vector3_o *)(pbVar14 + -0x70))->fields).x;
          fVar2 = *(float *)(pbVar14 + -0x50);
          fVar3 = (((UnityEngine_Vector3_o *)(pbVar14 + -0x7c))->fields).x;
          fVar4 = *(float *)(pbVar14 + -0x48);
          if (*firstLine < 0) {
            fVar5 = *(float *)(pbVar14 + -0x4c);
            *firstLine = iVar10;
            *baseline = fVar5;
          }
          *lastLine = iVar10;
          if (iVar10 != *firstLine) {
            return false;
          }
          uVar6 = (min->fields).x;
          uVar8 = (min->fields).y;
          auVar17._4_4_ = uVar8;
          auVar17._0_4_ = uVar6;
          auVar17._8_8_ = 0;
          auVar15._4_4_ = fVar4;
          auVar15._0_4_ = fVar3;
          auVar15._8_8_ = 0;
          auVar18 = minps(auVar17,auVar15);
          (min->fields).x = (float)auVar18._0_4_;
          (min->fields).y = (float)auVar18._4_4_;
          uVar7 = (max->fields).x;
          uVar9 = (max->fields).y;
          auVar16._4_4_ = uVar9;
          auVar16._0_4_ = uVar7;
          auVar16._8_8_ = 0;
          auVar18._4_4_ = fVar2;
          auVar18._0_4_ = fVar1;
          auVar18._8_8_ = 0;
          auVar18 = maxps(auVar16,auVar18);
          (max->fields).x = (float)auVar18._0_4_;
          (max->fields).y = (float)auVar18._4_4_;
          bVar12 = true;
        }
        uVar13 = uVar13 + 1;
        pbVar14 = pbVar14 + 0x178;
      } while ((long)uVar13 < (long)(textInfo->fields).characterCount);
    }
  }
  return bVar12;
}


// UI.ChatPlayerNameOverlay$$SetRaycastTargets
// il2cpp: void UI_ChatPlayerNameOverlay__SetRaycastTargets (UI_ChatPlayerNameOverlay_o* __this, bool value, const MethodInfo* method);
// 0x5d1a3b0

void UI_ChatPlayerNameOverlay__SetRaycastTargets
               (UI_ChatPlayerNameOverlay_o *__this,bool value,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_07547d93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d93 = '\x01';
  }
  pPVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pPVar1 = (__this->fields)._label;
  if ((pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
     (pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pPVar1,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar4 = (uint)pSVar5->max_length;
    if ((int)uVar4 < 1) {
      return;
    }
    uVar6 = 0;
    while( true ) {
      if (uVar4 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = pSVar5->m_Items[(int)uVar6];
      if (pIVar2 == (Il2CppObject *)0x0) break;
      (*pIVar2->klass->vtable[0x19].methodPtr)(pIVar2,value,pIVar2->klass->vtable[0x19].method);
      uVar6 = uVar6 + 1;
      uVar4 = (uint)pSVar5->max_length;
      if ((int)uVar4 <= (int)uVar6) {
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$.ctor
// il2cpp: void UI_ChatPlayerNameOverlay___ctor (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x5d1ab50

void UI_ChatPlayerNameOverlay___ctor(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  (__this->fields)._nameText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nameText);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


