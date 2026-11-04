// Type: UI.ChatPlayerNameOverlay
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatPlayerNameOverlay.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatPlayerNameOverlay$$get_Label
// il2cpp: PatreonEffects_NameEffectLabel_o* UI_ChatPlayerNameOverlay__get_Label (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x180584c80

PatreonEffects_NameEffectLabel_o*
UI_ChatPlayerNameOverlay__get_Label(UI_ChatPlayerNameOverlay_o* __this, MethodInfo* method)

{
  return (__this->fields)._label;
}


// UI.ChatPlayerNameOverlay$$Initialize
// il2cpp: void UI_ChatPlayerNameOverlay__Initialize (UI_ChatPlayerNameOverlay_o* __this, TMPro_TextMeshProUGUI_o* source, const MethodInfo* method);
// 0x18223dbd0

void UI_ChatPlayerNameOverlay__Initialize
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TextMeshProUGUI_o *source,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184347218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347218 = '\x01';
  }
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source,source);
  pTVar1 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._source;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName,
               (MethodInfo *)0x0);
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
              (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
               (pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
  }
  UI_ChatPlayerNameOverlay__BuildIfNeeded(__this,(MethodInfo *)0x0);
  return;
}


// UI.ChatPlayerNameOverlay$$SetName
// il2cpp: void UI_ChatPlayerNameOverlay__SetName (UI_ChatPlayerNameOverlay_o* __this, System_String_o* name, TMPro_TMP_FontAsset_o* font, float fontSize, UnityEngine_Color_o color, UI_ChatDisplayNameRange_o range, const MethodInfo* method);
// 0x18223def0

void UI_ChatPlayerNameOverlay__SetName
               (UI_ChatPlayerNameOverlay_o *__this,System_String_o *name,TMPro_TMP_FontAsset_o *font,
               float fontSize,UnityEngine_Color_o *color,UI_ChatDisplayNameRange_o range,MethodInfo *method)

{
  System_String_o *pSVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  bool bVar3;
  UI_ChatDisplayNameRange_Fields local_res10;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347219 = '\x01';
  }
  UI_ChatPlayerNameOverlay__BuildIfNeeded(__this,(MethodInfo *)0x0);
  if (name == (System_String_o *)0x0) {
    name = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (UI_ChatPlayerNameOverlay_o *)0x0) {
    (__this->fields)._nameText = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._nameText,name);
    local_res10 = range.fields;
    (__this->fields)._range.fields = range.fields;
    bVar3 = UI_ChatDisplayNameRange__get_IsValid((UI_ChatDisplayNameRange_o *)&local_res10,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar1 = (__this->fields)._nameText;
      if (pSVar1 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = 0 < (pSVar1->fields)._stringLength;
    }
    else {
      bVar3 = false;
    }
    (__this->fields)._hasRange = bVar3;
    pPVar2 = (__this->fields)._label;
    if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      PatreonEffects_NameEffectLabel__set_fontSize(pPVar2,fontSize,(MethodInfo *)0x0);
      pPVar2 = (__this->fields)._label;
      if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        local_28[0].r = (color->fields).r;
        local_28[0].g = (color->fields).g;
        local_28[0].b = (color->fields).b;
        local_28[0].a = (color->fields).a;
        PatreonEffects_NameEffectLabel__set_color(pPVar2,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
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
              if (pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_18223e09f;
              PatreonEffects_NameEffectLabel__SetFont(pPVar2,font,(MethodInfo *)0x0);
            }
            pPVar2 = (__this->fields)._label;
            if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              PatreonEffects_NameEffectLabel__SetText
                        (pPVar2,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                         (__this->fields)._nameText,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
                         ,(MethodInfo *)0x0);
              UI_ChatPlayerNameOverlay__SetRaycastTargets(__this,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_18223e09f:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$SetRange
// il2cpp: void UI_ChatPlayerNameOverlay__SetRange (UI_ChatPlayerNameOverlay_o* __this, UI_ChatDisplayNameRange_o range, const MethodInfo* method);
// 0x18223e0b0

void UI_ChatPlayerNameOverlay__SetRange
               (UI_ChatPlayerNameOverlay_o *__this,UI_ChatDisplayNameRange_o range,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  UI_ChatDisplayNameRange_Fields local_res10 [3];
  
  (__this->fields)._range.fields = range.fields;
  local_res10[0] = range.fields;
  bVar2 = UI_ChatDisplayNameRange__get_IsValid((UI_ChatDisplayNameRange_o *)local_res10,(MethodInfo *)0x0);
  if (!bVar2) {
    (__this->fields)._hasRange = false;
    return;
  }
  pSVar1 = (__this->fields)._nameText;
  if (pSVar1 != (System_String_o *)0x0) {
    (__this->fields)._hasRange = 0 < (pSVar1->fields)._stringLength;
    return;
  }
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$Clear
// il2cpp: void UI_ChatPlayerNameOverlay__Clear (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x18223d300

void UI_ChatPlayerNameOverlay__Clear(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  UnityEngine_RectTransform_o *pUVar3;
  bool bVar4;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_18434721a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434721a = '\x01';
  }
  (__this->fields)._hasRange = false;
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._nameText = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nameText,pSVar1);
  pPVar2 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pPVar2 = (__this->fields)._label;
    if (pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_18223d40e;
    PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar2,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._label;
    if (pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_18223d40e;
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    PatreonEffects_NameEffectLabel__SetText(pPVar2,pSVar1,pSVar1,pSVar1,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._labelRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pUVar3 = (__this->fields)._labelRect;
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
label_18223d40e:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$OnDestroy
// il2cpp: void UI_ChatPlayerNameOverlay__OnDestroy (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x18223dcc0

void UI_ChatPlayerNameOverlay__OnDestroy(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_18434721b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434721b = '\x01';
  }
  pTVar1 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._source;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName,
               (MethodInfo *)0x0);
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
              (pTVar1,(System_Action_TMP_TextInfo__o *)__this_00,
               (pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
  }
  return;
}


// UI.ChatPlayerNameOverlay$$BuildIfNeeded
// il2cpp: void UI_ChatPlayerNameOverlay__BuildIfNeeded (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x18223d010

void UI_ChatPlayerNameOverlay__BuildIfNeeded(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
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
  
  if (Il2CppMethodInitialized_18434721c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Name Effect Overlay");
    Il2CppMethodInitialized_18434721c = '\x01';
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
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_18223d2d1:
    ThrowNullReferenceException();
  }
  if ((pSVar2 != (System_Type_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Type_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
       , pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,"Name Effect Overlay",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          (__this->fields)._labelRect = pUVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._labelRect,pUVar4);
          pUVar4 = (__this->fields)._labelRect;
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar4,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._labelRect;
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar4,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              pUVar4 = (__this->fields)._labelRect;
              if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (pUVar4,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                pPVar5 = UnityEngine_GameObject__AddComponent_object_
                                   (__this_00,
                                    (MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
                (__this->fields)._label = pPVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pPVar5);
                UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel(__this,__this_00,(MethodInfo *)0x0);
                UI_ChatPlayerNameOverlay__SetRaycastTargets(__this,false,(MethodInfo *)0x0);
                UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_18223d2d1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ChatPlayerNameOverlay$$ConfigureLayoutFreeNameLabel
// il2cpp: void UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel (UI_ChatPlayerNameOverlay_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x18223d420

void UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel
               (UI_ChatPlayerNameOverlay_o *__this,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  TMPro_TextMeshProUGUI_o *__this_00;
  bool bVar2;
  UnityEngine_UI_HorizontalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *x_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_18434721d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434721d = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (root,(MethodInfo_6F5650 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_18223d68a;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,false,(MethodInfo *)0x0);
    }
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     (root,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x_00 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_18223d68a;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x_00,false,(MethodInfo *)0x0);
    }
    pPVar1 = (__this->fields)._label;
    if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UI_ChatPlayerNameOverlay__DisableSegmentLayout((pPVar1->fields)._prefixTmp,false,(MethodInfo *)0x0);
      pPVar1 = (__this->fields)._label;
      if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UI_ChatPlayerNameOverlay__DisableSegmentLayout((pPVar1->fields)._suffixTmp,false,(MethodInfo *)0x0);
        pPVar1 = (__this->fields)._label;
        if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          UI_ChatPlayerNameOverlay__DisableSegmentLayout((pPVar1->fields)._nameTmp,true,(MethodInfo *)0x0);
          pPVar1 = (__this->fields)._label;
          if ((pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
             (__this_00 = (pPVar1->fields)._nameTmp, __this_00 != (TMPro_TextMeshProUGUI_o *)0x0)) {
            __this_01 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)__this_00,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_01,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_184341f36 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_184341f36 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (__this_01,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (__this_01,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
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
label_18223d68a:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$DisableSegmentLayout
// il2cpp: void UI_ChatPlayerNameOverlay__DisableSegmentLayout (TMPro_TextMeshProUGUI_o* segment, bool active, const MethodInfo* method);
// 0x18223d690

void UI_ChatPlayerNameOverlay__DisableSegmentLayout
               (TMPro_TextMeshProUGUI_o *segment,bool active,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_18434721e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434721e = '\x01';
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
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18223d770;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,false,(MethodInfo *)0x0);
    }
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)segment,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this,active,(MethodInfo *)0x0);
      return;
    }
  }
label_18223d770:
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$HideSourceName
// il2cpp: void UI_ChatPlayerNameOverlay__HideSourceName (UI_ChatPlayerNameOverlay_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x18223d780
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18223d8dc: nop dword ptr [rax]
// asm:   0x18223d91e: nop 
// asm:   0x18223da6e: nop 
// asm:   0x18223db94: mov rdi, qword ptr [rsp + 0x3a0]
// asm:   0x18223db9c: mov rbp, qword ptr [rsp + 0x398]
// asm:   0x18223dba4: mov rbx, qword ptr [rsp + 0x390]
// asm:   0x18223dbac: mov r15, qword ptr [rsp + 0x370]

void UI_ChatPlayerNameOverlay__HideSourceName
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  TMPro_TMP_CharacterInfo_array *pTVar1;
  undefined8 uVar2;
  TMPro_TMP_MeshInfo_array *pTVar3;
  UnityEngine_Color32_array *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TMPro_TMP_TextElement_o *pTVar9;
  UnityEngine_TextCore_Glyph_o *pUVar10;
  TMPro_TMP_FontAsset_o *pTVar11;
  UnityEngine_Material_o *pUVar12;
  undefined8 *puVar13;
  bool bVar14;
  bool bVar15;
  undefined8 *puVar16;
  TMPro_TMP_CharacterInfo_o *pTVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  TMPro_TMP_CharacterInfo_o *pTVar21;
  TMPro_TMP_CharacterInfo_o *pTVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined8 local_318;
  int32_t iStack_310;
  uint local_2e8;
  int iStack_2dc;
  uint uStack_2d4;
  undefined8 local_198;
  int32_t iStack_190;
  char local_28;
  
  if (((__this->fields)._hasRange != false) && (textInfo != (TMPro_TMP_TextInfo_o *)0x0)) {
    bVar15 = false;
    iVar25 = -1;
    for (iVar23 = 0; iVar23 < (textInfo->fields).characterCount; iVar23 = iVar23 + 1) {
      pTVar1 = (textInfo->fields).characterInfo;
      if (pTVar1 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_18223dbbf;
      il2cpp_runtime_helper_180354250(pTVar1,&local_318);
      lVar20 = 2;
      puVar13 = &local_318;
      puVar19 = &local_198;
      do {
        puVar18 = puVar19;
        puVar16 = puVar13;
        uVar2 = puVar16[1];
        uVar5 = puVar16[2];
        uVar6 = puVar16[3];
        *puVar18 = *puVar16;
        puVar18[1] = uVar2;
        uVar2 = puVar16[4];
        uVar7 = puVar16[5];
        puVar18[2] = uVar5;
        puVar18[3] = uVar6;
        uVar5 = puVar16[6];
        uVar6 = puVar16[7];
        puVar18[4] = uVar2;
        puVar18[5] = uVar7;
        uVar2 = puVar16[8];
        uVar7 = puVar16[9];
        puVar18[6] = uVar5;
        puVar18[7] = uVar6;
        uVar5 = puVar16[10];
        uVar6 = puVar16[0xb];
        puVar18[8] = uVar2;
        puVar18[9] = uVar7;
        uVar2 = puVar16[0xc];
        uVar7 = puVar16[0xd];
        puVar18[10] = uVar5;
        puVar18[0xb] = uVar6;
        uVar5 = puVar16[0xe];
        uVar6 = puVar16[0xf];
        puVar18[0xc] = uVar2;
        puVar18[0xd] = uVar7;
        puVar18[0xe] = uVar5;
        puVar18[0xf] = uVar6;
        lVar20 = lVar20 + -1;
        puVar13 = puVar16 + 0x10;
        puVar19 = puVar18 + 0x10;
      } while (lVar20 != 0);
      uVar2 = puVar16[0x11];
      uVar5 = puVar16[0x12];
      uVar6 = puVar16[0x13];
      puVar18[0x10] = puVar16[0x10];
      puVar18[0x11] = uVar2;
      uVar2 = puVar16[0x14];
      uVar7 = puVar16[0x15];
      puVar18[0x12] = uVar5;
      puVar18[0x13] = uVar6;
      uVar5 = puVar16[0x16];
      uVar6 = puVar16[0x17];
      puVar18[0x14] = uVar2;
      puVar18[0x15] = uVar7;
      uVar2 = puVar16[0x18];
      uVar7 = puVar16[0x19];
      puVar18[0x16] = uVar5;
      puVar18[0x17] = uVar6;
      uVar5 = puVar16[0x1a];
      uVar6 = puVar16[0x1b];
      puVar18[0x18] = uVar2;
      puVar18[0x19] = uVar7;
      uVar7 = puVar16[0x1c];
      uVar8 = puVar16[0x1d];
      uVar2 = puVar16[0x1e];
      puVar18[0x1a] = uVar5;
      puVar18[0x1b] = uVar6;
      puVar18[0x1c] = uVar7;
      puVar18[0x1d] = uVar8;
      puVar18[0x1e] = uVar2;
      if ((local_28 != '\0') &&
         (bVar14 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             (&(__this->fields)._range,iStack_310,(MethodInfo *)0x0), bVar14)) {
        if (iVar25 < 0) {
          iVar25 = iStack_2dc;
        }
        if (iStack_2dc != iVar25) {
          return;
        }
        bVar15 = true;
      }
    }
    if (bVar15) {
      for (uVar24 = 0; (int)uVar24 < (textInfo->fields).characterCount; uVar24 = uVar24 + 1) {
        pTVar1 = (textInfo->fields).characterInfo;
        if (pTVar1 == (TMPro_TMP_CharacterInfo_array *)0x0) {
label_18223dbbf:
          ThrowNullReferenceException();
        }
        if ((uint)pTVar1->max_length <= uVar24) goto label_18223dbc5;
        lVar20 = 2;
        pTVar21 = pTVar1->m_Items + (int)uVar24;
        pTVar22 = pTVar21;
        puVar13 = &local_318;
        do {
          puVar19 = puVar13;
          pTVar17 = pTVar22;
          uVar2 = *(undefined8 *)&(pTVar17->fields).index;
          pTVar9 = (pTVar17->fields).textElement;
          pUVar10 = (pTVar17->fields).alternativeGlyph;
          pTVar22 = (TMPro_TMP_CharacterInfo_o *)((longlong)&(pTVar17->fields).vertex_TL.fields.uv.fields + 4)
          ;
          *puVar19 = *(undefined8 *)&pTVar17->fields;
          puVar19[1] = uVar2;
          pTVar11 = (pTVar17->fields).fontAsset;
          pUVar12 = (pTVar17->fields).material;
          puVar19[2] = pTVar9;
          puVar19[3] = pUVar10;
          uVar2 = *(undefined8 *)&(pTVar17->fields).materialReferenceIndex;
          uVar5 = *(undefined8 *)&(pTVar17->fields).pointSize;
          puVar19[4] = pTVar11;
          puVar19[5] = pUVar12;
          uVar6 = *(undefined8 *)&(pTVar17->fields).pageNumber;
          uVar7 = *(undefined8 *)&(pTVar17->fields).vertex_BL.fields.position.fields;
          puVar19[6] = uVar2;
          puVar19[7] = uVar5;
          uVar2 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.position.fields + 8);
          uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.uv.fields + 4);
          puVar19[8] = uVar6;
          puVar19[9] = uVar7;
          uVar6 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.uv.fields + 0xc);
          uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.uv2.fields + 4);
          puVar19[10] = uVar2;
          puVar19[0xb] = uVar5;
          uVar2 = *(undefined8 *)&(pTVar17->fields).vertex_TL.fields.position.fields;
          uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TL.fields.position.fields + 8);
          puVar19[0xc] = uVar6;
          puVar19[0xd] = uVar7;
          puVar19[0xe] = uVar2;
          puVar19[0xf] = uVar5;
          lVar20 = lVar20 + -1;
          puVar13 = puVar19 + 0x10;
        } while (lVar20 != 0);
        uVar2 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TL.fields.uv.fields + 0xc);
        lVar20 = 2;
        uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TL.fields.uv2.fields + 4);
        uVar6 = *(undefined8 *)&(pTVar17->fields).vertex_TR.fields.position.fields;
        puVar19[0x10] = *(undefined8 *)pTVar22;
        puVar19[0x11] = uVar2;
        uVar2 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.position.fields + 8);
        uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.uv.fields + 4);
        puVar19[0x12] = uVar5;
        puVar19[0x13] = uVar6;
        uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.uv.fields + 0xc);
        uVar6 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.uv2.fields + 4);
        puVar19[0x14] = uVar2;
        puVar19[0x15] = uVar7;
        uVar2 = *(undefined8 *)&(pTVar17->fields).vertex_BR.fields.position.fields;
        uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.position.fields + 8);
        puVar19[0x16] = uVar5;
        puVar19[0x17] = uVar6;
        uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.uv.fields + 4);
        uVar6 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.uv.fields + 0xc);
        puVar19[0x18] = uVar2;
        puVar19[0x19] = uVar7;
        uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.uv2.fields + 4);
        uVar8 = *(undefined8 *)&(pTVar17->fields).topLeft.fields;
        uVar2 = *(undefined8 *)&(pTVar17->fields).topLeft.fields.z;
        puVar19[0x1a] = uVar5;
        puVar19[0x1b] = uVar6;
        puVar19[0x1c] = uVar7;
        puVar19[0x1d] = uVar8;
        puVar19[0x1e] = uVar2;
        pTVar22 = pTVar21;
        puVar13 = &local_198;
        do {
          puVar19 = puVar13;
          pTVar17 = pTVar22;
          uVar2 = *(undefined8 *)&(pTVar17->fields).index;
          pTVar9 = (pTVar17->fields).textElement;
          pUVar10 = (pTVar17->fields).alternativeGlyph;
          pTVar22 = (TMPro_TMP_CharacterInfo_o *)((longlong)&(pTVar17->fields).vertex_TL.fields.uv.fields + 4)
          ;
          *puVar19 = *(undefined8 *)&pTVar17->fields;
          puVar19[1] = uVar2;
          pTVar11 = (pTVar17->fields).fontAsset;
          pUVar12 = (pTVar17->fields).material;
          puVar19[2] = pTVar9;
          puVar19[3] = pUVar10;
          uVar2 = *(undefined8 *)&(pTVar17->fields).materialReferenceIndex;
          uVar5 = *(undefined8 *)&(pTVar17->fields).pointSize;
          puVar19[4] = pTVar11;
          puVar19[5] = pUVar12;
          uVar6 = *(undefined8 *)&(pTVar17->fields).pageNumber;
          uVar7 = *(undefined8 *)&(pTVar17->fields).vertex_BL.fields.position.fields;
          puVar19[6] = uVar2;
          puVar19[7] = uVar5;
          uVar2 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.position.fields + 8);
          uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.uv.fields + 4);
          puVar19[8] = uVar6;
          puVar19[9] = uVar7;
          uVar6 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.uv.fields + 0xc);
          uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BL.fields.uv2.fields + 4);
          puVar19[10] = uVar2;
          puVar19[0xb] = uVar5;
          uVar2 = *(undefined8 *)&(pTVar17->fields).vertex_TL.fields.position.fields;
          uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TL.fields.position.fields + 8);
          puVar19[0xc] = uVar6;
          puVar19[0xd] = uVar7;
          puVar19[0xe] = uVar2;
          puVar19[0xf] = uVar5;
          lVar20 = lVar20 + -1;
          puVar13 = puVar19 + 0x10;
        } while (lVar20 != 0);
        uVar2 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TL.fields.uv.fields + 0xc);
        uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TL.fields.uv2.fields + 4);
        uVar6 = *(undefined8 *)&(pTVar17->fields).vertex_TR.fields.position.fields;
        puVar19[0x10] = *(undefined8 *)pTVar22;
        puVar19[0x11] = uVar2;
        uVar2 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.position.fields + 8);
        uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.uv.fields + 4);
        puVar19[0x12] = uVar5;
        puVar19[0x13] = uVar6;
        uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.uv.fields + 0xc);
        uVar6 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_TR.fields.uv2.fields + 4);
        puVar19[0x14] = uVar2;
        puVar19[0x15] = uVar7;
        uVar2 = *(undefined8 *)&(pTVar17->fields).vertex_BR.fields.position.fields;
        uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.position.fields + 8);
        puVar19[0x16] = uVar5;
        puVar19[0x17] = uVar6;
        uVar5 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.uv.fields + 4);
        uVar6 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.uv.fields + 0xc);
        puVar19[0x18] = uVar2;
        puVar19[0x19] = uVar7;
        uVar7 = *(undefined8 *)((longlong)&(pTVar17->fields).vertex_BR.fields.uv2.fields + 4);
        uVar8 = *(undefined8 *)&(pTVar17->fields).topLeft.fields;
        uVar2 = *(undefined8 *)&(pTVar17->fields).topLeft.fields.z;
        puVar19[0x1a] = uVar5;
        puVar19[0x1b] = uVar6;
        puVar19[0x1c] = uVar7;
        puVar19[0x1d] = uVar8;
        puVar19[0x1e] = uVar2;
        if (local_28 != '\0') {
          lVar20 = 2;
          puVar13 = &local_198;
          do {
            pTVar22 = pTVar21;
            puVar19 = puVar13;
            uVar2 = *(undefined8 *)&(pTVar22->fields).index;
            pTVar9 = (pTVar22->fields).textElement;
            pUVar10 = (pTVar22->fields).alternativeGlyph;
            pTVar21 = (TMPro_TMP_CharacterInfo_o *)
                      ((longlong)&(pTVar22->fields).vertex_TL.fields.uv.fields + 4);
            *puVar19 = *(undefined8 *)&pTVar22->fields;
            puVar19[1] = uVar2;
            pTVar11 = (pTVar22->fields).fontAsset;
            pUVar12 = (pTVar22->fields).material;
            puVar19[2] = pTVar9;
            puVar19[3] = pUVar10;
            uVar2 = *(undefined8 *)&(pTVar22->fields).materialReferenceIndex;
            uVar5 = *(undefined8 *)&(pTVar22->fields).pointSize;
            puVar19[4] = pTVar11;
            puVar19[5] = pUVar12;
            uVar6 = *(undefined8 *)&(pTVar22->fields).pageNumber;
            uVar7 = *(undefined8 *)&(pTVar22->fields).vertex_BL.fields.position.fields;
            puVar19[6] = uVar2;
            puVar19[7] = uVar5;
            uVar2 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BL.fields.position.fields + 8);
            uVar5 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BL.fields.uv.fields + 4);
            puVar19[8] = uVar6;
            puVar19[9] = uVar7;
            uVar6 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BL.fields.uv.fields + 0xc);
            uVar7 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BL.fields.uv2.fields + 4);
            puVar19[10] = uVar2;
            puVar19[0xb] = uVar5;
            uVar2 = *(undefined8 *)&(pTVar22->fields).vertex_TL.fields.position.fields;
            uVar5 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_TL.fields.position.fields + 8);
            puVar19[0xc] = uVar6;
            puVar19[0xd] = uVar7;
            puVar19[0xe] = uVar2;
            puVar19[0xf] = uVar5;
            lVar20 = lVar20 + -1;
            puVar13 = puVar19 + 0x10;
          } while (lVar20 != 0);
          uVar5 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_TL.fields.uv.fields + 0xc);
          uVar2 = *(undefined8 *)&(pTVar22->fields).topLeft.fields.z;
          uVar6 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_TL.fields.uv2.fields + 4);
          uVar7 = *(undefined8 *)&(pTVar22->fields).vertex_TR.fields.position.fields;
          puVar19[0x10] = *(undefined8 *)pTVar21;
          puVar19[0x11] = uVar5;
          uVar5 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_TR.fields.position.fields + 8);
          uVar8 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_TR.fields.uv.fields + 4);
          puVar19[0x12] = uVar6;
          puVar19[0x13] = uVar7;
          uVar6 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_TR.fields.uv.fields + 0xc);
          uVar7 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_TR.fields.uv2.fields + 4);
          puVar19[0x14] = uVar5;
          puVar19[0x15] = uVar8;
          uVar5 = *(undefined8 *)&(pTVar22->fields).vertex_BR.fields.position.fields;
          uVar8 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BR.fields.position.fields + 8);
          puVar19[0x16] = uVar6;
          puVar19[0x17] = uVar7;
          uVar6 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BR.fields.uv.fields + 4);
          uVar7 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BR.fields.uv.fields + 0xc);
          puVar19[0x18] = uVar5;
          puVar19[0x19] = uVar8;
          uVar5 = *(undefined8 *)((longlong)&(pTVar22->fields).vertex_BR.fields.uv2.fields + 4);
          uVar8 = *(undefined8 *)&(pTVar22->fields).topLeft.fields;
          puVar19[0x1a] = uVar6;
          puVar19[0x1b] = uVar7;
          puVar19[0x1c] = uVar5;
          puVar19[0x1d] = uVar8;
          puVar19[0x1e] = uVar2;
          bVar15 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             (&(__this->fields)._range,iStack_190,(MethodInfo *)0x0);
          if (bVar15) {
            pTVar3 = (textInfo->fields).meshInfo;
            if (pTVar3 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_18223dbbf;
            if ((uint)pTVar3->max_length <= local_2e8) {
label_18223dbc5:
              ThrowIndexOutOfRangeException();
            }
            pUVar4 = pTVar3->m_Items[(int)local_2e8].fields.colors32;
            if ((pUVar4 != (UnityEngine_Color32_array *)0x0) &&
               (lVar20 = (longlong)(int)uStack_2d4, (int)(uStack_2d4 + 3) < (int)pUVar4->max_length)) {
              if (((uint)pUVar4->max_length <= uStack_2d4) ||
                 (((pUVar4->m_Items[lVar20].fields._overlap_0._at_a.a = '\0',
                   (uint)pUVar4->max_length <= uStack_2d4 + 1 ||
                   (pUVar4->m_Items[lVar20 + 1].fields._overlap_0._at_a.a = '\0',
                   (uint)pUVar4->max_length <= uStack_2d4 + 2)) ||
                  (pUVar4->m_Items[lVar20 + 2].fields._overlap_0._at_a.a = '\0',
                  (uint)pUVar4->max_length <= uStack_2d4 + 3)))) goto label_18223dbc5;
              pUVar4->m_Items[lVar20 + 3].fields._overlap_0._at_a.a = '\0';
            }
          }
        }
      }
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$SyncToSource
// il2cpp: void UI_ChatPlayerNameOverlay__SyncToSource (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x18223e1e0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18223e3a9: nop dword ptr [rax]
// asm:   0x18223e801: xor r8d, r8d
// asm:   0x18223e804: xor edx, edx
// asm:   0x18223e806: mov rcx, rax
// asm:   0x18223e809: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x18223e80e: jmp 0x18223e784

void UI_ChatPlayerNameOverlay__SyncToSource(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TMP_CharacterInfo_array *pTVar3;
  undefined8 uVar4;
  PatreonEffects_NameEffectLabel_o *pPVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  TMPro_TMP_TextInfo_o *pTVar14;
  undefined8 *puVar15;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Rect_o *pUVar18;
  UnityEngine_Vector2_o UVar19;
  UnityEngine_Vector2_o UVar20;
  UnityEngine_GameObject_o *pUVar21;
  undefined8 *puVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  UnityEngine_RectTransform_o *pUVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fStackX_c;
  UnityEngine_Vector3_Fields local_3d8;
  UnityEngine_Rect_o local_3c8;
  UnityEngine_Vector3_o local_3b8;
  undefined8 local_3a8;
  int32_t iStack_3a0;
  int iStack_36c;
  float fStack_2b4;
  float local_2a8;
  float local_288;
  float local_284;
  float local_280;
  undefined8 local_228 [46];
  char local_b8;
  
  if (Il2CppMethodInitialized_18434721f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434721f = '\x01';
  }
  pTVar2 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar12) {
    pUVar26 = (__this->fields)._labelRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar12) && ((__this->fields)._hasRange != false)) {
      pTVar2 = (__this->fields)._source;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
        pTVar2 = (__this->fields)._source;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pTVar14 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0);
          local_3b8.fields.z = 0.0;
          local_3c8.fields.m_Width = 0.0;
          if (((__this->fields)._hasRange != false) && (pTVar14 != (TMPro_TMP_TextInfo_o *)0x0)) {
            fVar29 = INFINITY;
            fVar30 = 0.0;
            fVar27 = -INFINITY;
            fVar31 = INFINITY;
            fVar28 = -INFINITY;
            bVar12 = false;
            iVar25 = -1;
            for (iVar24 = 0; iVar24 < (pTVar14->fields).characterCount; iVar24 = iVar24 + 1) {
              pTVar3 = (pTVar14->fields).characterInfo;
              if (pTVar3 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_18223e81c;
              il2cpp_runtime_helper_180354250(pTVar3,&local_3a8);
              lVar23 = 2;
              puVar10 = &local_3a8;
              puVar11 = local_228;
              do {
                puVar22 = puVar11;
                puVar15 = puVar10;
                uVar4 = puVar15[1];
                uVar6 = puVar15[2];
                uVar7 = puVar15[3];
                *puVar22 = *puVar15;
                puVar22[1] = uVar4;
                uVar4 = puVar15[4];
                uVar8 = puVar15[5];
                puVar22[2] = uVar6;
                puVar22[3] = uVar7;
                uVar6 = puVar15[6];
                uVar7 = puVar15[7];
                puVar22[4] = uVar4;
                puVar22[5] = uVar8;
                uVar4 = puVar15[8];
                uVar8 = puVar15[9];
                puVar22[6] = uVar6;
                puVar22[7] = uVar7;
                uVar6 = puVar15[10];
                uVar7 = puVar15[0xb];
                puVar22[8] = uVar4;
                puVar22[9] = uVar8;
                uVar4 = puVar15[0xc];
                uVar8 = puVar15[0xd];
                puVar22[10] = uVar6;
                puVar22[0xb] = uVar7;
                uVar6 = puVar15[0xe];
                uVar7 = puVar15[0xf];
                puVar22[0xc] = uVar4;
                puVar22[0xd] = uVar8;
                puVar22[0xe] = uVar6;
                puVar22[0xf] = uVar7;
                lVar23 = lVar23 + -1;
                puVar10 = puVar15 + 0x10;
                puVar11 = puVar22 + 0x10;
              } while (lVar23 != 0);
              uVar4 = puVar15[0x11];
              uVar6 = puVar15[0x12];
              uVar7 = puVar15[0x13];
              puVar22[0x10] = puVar15[0x10];
              puVar22[0x11] = uVar4;
              uVar4 = puVar15[0x14];
              uVar8 = puVar15[0x15];
              puVar22[0x12] = uVar6;
              puVar22[0x13] = uVar7;
              uVar6 = puVar15[0x16];
              uVar7 = puVar15[0x17];
              puVar22[0x14] = uVar4;
              puVar22[0x15] = uVar8;
              uVar4 = puVar15[0x18];
              uVar8 = puVar15[0x19];
              puVar22[0x16] = uVar6;
              puVar22[0x17] = uVar7;
              uVar6 = puVar15[0x1a];
              uVar7 = puVar15[0x1b];
              puVar22[0x18] = uVar4;
              puVar22[0x19] = uVar8;
              uVar8 = puVar15[0x1c];
              uVar9 = puVar15[0x1d];
              uVar4 = puVar15[0x1e];
              puVar22[0x1a] = uVar6;
              puVar22[0x1b] = uVar7;
              puVar22[0x1c] = uVar8;
              puVar22[0x1d] = uVar9;
              puVar22[0x1e] = uVar4;
              if ((local_b8 != '\0') &&
                 (bVar13 = UI_ChatDisplayNameRange__ContainsSourceIndex
                                     (&(__this->fields)._range,iStack_3a0,(MethodInfo *)0x0), bVar13)) {
                if (iVar25 < 0) {
                  fVar30 = local_284;
                  iVar25 = iStack_36c;
                }
                if (iStack_36c != iVar25) goto label_18223e7ec;
                if (fStack_2b4 <= fVar29) {
                  fVar29 = fStack_2b4;
                }
                if (local_280 <= fVar31) {
                  fVar31 = local_280;
                }
                if (fVar27 <= local_2a8) {
                  fVar27 = local_2a8;
                }
                if (fVar28 <= local_288) {
                  fVar28 = local_288;
                }
                bVar12 = true;
              }
            }
            if (bVar12) {
              pTVar2 = (__this->fields)._source;
              if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                __this_00 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0);
                pUVar26 = (__this->fields)._labelRect;
                if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
                  pUVar16 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Transform__GetParent
                                      ((UnityEngine_Transform_o *)pUVar26,(MethodInfo *)0x0);
                  pUVar26 = (UnityEngine_RectTransform_o *)0x0;
                  if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
                    if (pUVar16->klass == TypeInfo_UnityEngine_RectTransform) {
                      pUVar26 = pUVar16;
                    }
                    if (pUVar26 == (UnityEngine_RectTransform_o *)0x0) {
                      il2cpp_codegen_raise_invalid_cast_exception(pUVar16);
                    }
                  }
                  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    local_3d8.z = local_3b8.fields.z;
                    local_3d8.y = fVar31;
                    local_3d8.x = fVar29;
                    pUVar17 = UnityEngine_Transform__TransformPoint
                                        (&local_3b8,(UnityEngine_Transform_o *)__this_00,
                                         (UnityEngine_Vector3_o *)&local_3d8,(MethodInfo *)0x0);
                    local_3d8.y = fVar28;
                    local_3d8.x = fVar27;
                    uVar4._0_4_ = (pUVar17->fields).x;
                    uVar4._4_4_ = (pUVar17->fields).y;
                    fVar27 = (pUVar17->fields).z;
                    local_3d8.z = local_3c8.fields.m_Width;
                    pUVar17 = UnityEngine_Transform__TransformPoint
                                        ((UnityEngine_Vector3_o *)&local_3c8,
                                         (UnityEngine_Transform_o *)__this_00,
                                         (UnityEngine_Vector3_o *)&local_3d8,(MethodInfo *)0x0);
                    local_3d8.y = fVar30;
                    local_3d8.x = fVar29;
                    local_3d8.z = 0.0;
                    uVar6._0_4_ = (pUVar17->fields).x;
                    uVar6._4_4_ = (pUVar17->fields).y;
                    fVar31 = (pUVar17->fields).z;
                    pUVar17 = UnityEngine_Transform__TransformPoint
                                        ((UnityEngine_Vector3_o *)&local_3c8,
                                         (UnityEngine_Transform_o *)__this_00,
                                         (UnityEngine_Vector3_o *)&local_3d8,(MethodInfo *)0x0);
                    if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
                      uVar7._0_4_ = (pUVar17->fields).x;
                      uVar7._4_4_ = (pUVar17->fields).y;
                      fVar29 = (pUVar17->fields).z;
                      local_3d8._0_8_ = uVar4;
                      local_3d8.z = fVar27;
                      pUVar17 = UnityEngine_Transform__InverseTransformPoint
                                          ((UnityEngine_Vector3_o *)&local_3c8,
                                           (UnityEngine_Transform_o *)pUVar26,
                                           (UnityEngine_Vector3_o *)&local_3d8,(MethodInfo *)0x0);
                      fVar27 = (pUVar17->fields).x;
                      fVar28 = (pUVar17->fields).y;
                      local_3d8._0_8_ = uVar6;
                      local_3d8.z = fVar31;
                      pUVar17 = UnityEngine_Transform__InverseTransformPoint
                                          ((UnityEngine_Vector3_o *)&local_3c8,
                                           (UnityEngine_Transform_o *)pUVar26,
                                           (UnityEngine_Vector3_o *)&local_3d8,(MethodInfo *)0x0);
                      fVar31 = (pUVar17->fields).x;
                      fVar30 = (pUVar17->fields).y;
                      local_3d8._0_8_ = uVar7;
                      local_3d8.z = fVar29;
                      pUVar17 = UnityEngine_Transform__InverseTransformPoint
                                          ((UnityEngine_Vector3_o *)&local_3c8,
                                           (UnityEngine_Transform_o *)pUVar26,
                                           (UnityEngine_Vector3_o *)&local_3d8,(MethodInfo *)0x0);
                      pPVar5 = (__this->fields)._label;
                      if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                        fVar29 = (pPVar5->fields)._fontSize;
                        fVar30 = fVar30 - fVar28;
                        fVar28 = (pUVar17->fields).y;
                        if (fVar29 <= fVar30) {
                          fVar29 = fVar30;
                        }
                        pUVar18 = UnityEngine_RectTransform__get_rect(&local_3c8,pUVar26,(MethodInfo *)0x0);
                        fVar30 = (pUVar18->fields).m_Width;
                        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                        }
                        UVar19 = UnityEngine_RectTransform__get_pivot(pUVar26,(MethodInfo *)0x0);
                        pUVar18 = UnityEngine_RectTransform__get_rect(&local_3c8,pUVar26,(MethodInfo *)0x0);
                        fVar1 = (pUVar18->fields).m_Height;
                        UVar20 = UnityEngine_RectTransform__get_pivot(pUVar26,(MethodInfo *)0x0);
                        pUVar26 = (__this->fields)._labelRect;
                        fStackX_c = UVar20.fields.y;
                        if ((pUVar26 != (UnityEngine_RectTransform_o *)0x0) &&
                           (pUVar21 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
                           pUVar21 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive(pUVar21,true,(MethodInfo *)0x0);
                          pUVar26 = (__this->fields)._labelRect;
                          if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
                            UVar20.fields.y = (fVar29 * 0.5 + fVar28) - (1.0 - fStackX_c) * fVar1;
                            UVar20.fields.x = fVar30 * UVar19.fields.x + fVar27;
                            UnityEngine_RectTransform__set_anchoredPosition(pUVar26,UVar20,(MethodInfo *)0x0);
                            pUVar26 = (__this->fields)._labelRect;
                            fVar31 = fVar31 - fVar27;
                            fVar27 = 0.0;
                            if (0.0 <= fVar31) {
                              fVar27 = fVar31;
                            }
                            if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                        (pUVar26,0,fVar27,(MethodInfo *)0x0);
                              pUVar26 = (__this->fields)._labelRect;
                              if (pUVar26 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                          (pUVar26,1,fVar29,(MethodInfo *)0x0);
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
              goto label_18223e81c;
            }
          }
label_18223e7ec:
          pUVar26 = (__this->fields)._labelRect;
          if ((pUVar26 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar21 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
             pUVar21 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar21,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
label_18223e81c:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$PreferredNameWidth
// il2cpp: float UI_ChatPlayerNameOverlay__PreferredNameWidth (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x18223dd90

float UI_ChatPlayerNameOverlay__PreferredNameWidth(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  bool bVar3;
  System_String_o *text;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184347220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184347220 = '\x01';
  }
  pPVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pPVar1 = (__this->fields)._label;
    if (pPVar1 == (PatreonEffects_NameEffectLabel_o *)0x0) {
label_18223dee9:
      ThrowNullReferenceException();
    }
    pTVar2 = (pPVar1->fields)._nameTmp;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      bVar3 = System_String__IsNullOrEmpty((__this->fields)._nameText,(MethodInfo *)0x0);
      if (!bVar3) {
        pPVar1 = (__this->fields)._label;
        if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          pTVar2 = (pPVar1->fields)._nameTmp;
          text = System_String__Concat_1969e50
                           ((__this->fields)._nameText,"|",(MethodInfo *)0x0);
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            UVar4 = TMPro_TMP_Text__GetPreferredValues_2d12740
                              ((TMPro_TMP_Text_o *)pTVar2,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
            UVar5 = TMPro_TMP_Text__GetPreferredValues_2d12740
                              ((TMPro_TMP_Text_o *)pTVar2,"|",3.4028235e+38,3.4028235e+38,
                               (MethodInfo *)0x0);
            fVar6 = UVar4.fields.x - UVar5.fields.x;
            if (fVar6 <= 0.0) {
              fVar6 = 0.0;
            }
            return fVar6;
          }
        }
        goto label_18223dee9;
      }
    }
  }
  return 0.0;
}


// UI.ChatPlayerNameOverlay$$TryGetSourceNameBounds
// il2cpp: bool UI_ChatPlayerNameOverlay__TryGetSourceNameBounds (UI_ChatPlayerNameOverlay_o* __this, TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Vector3_o* min, UnityEngine_Vector3_o* max, float* baseline, int32_t* firstLine, int32_t* lastLine, const MethodInfo* method);
// 0x18223e830
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18223e8bf: nop 
// asm:   0x18223ea53: movzx eax, bpl
// asm:   0x18223ea57: jmp 0x18223ea5b

bool UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TMP_TextInfo_o *textInfo,UnityEngine_Vector3_o *min,
               UnityEngine_Vector3_o *max,float *baseline,int32_t *firstLine,int32_t *lastLine,
               MethodInfo *method)

{
  TMPro_TMP_CharacterInfo_array *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined8 local_348;
  int32_t iStack_340;
  int iStack_30c;
  float fStack_254;
  float local_248;
  float local_228;
  float local_224;
  float local_220;
  undefined8 local_1c8 [46];
  char local_58;
  
  (min->fields).x = INFINITY;
  (min->fields).y = INFINITY;
  (min->fields).z = 0.0;
  (max->fields).x = -INFINITY;
  (max->fields).y = -INFINITY;
  (max->fields).z = 0.0;
  *baseline = 0.0;
  *firstLine = -1;
  *lastLine = -1;
  if (((__this->fields)._hasRange == false) || (textInfo == (TMPro_TMP_TextInfo_o *)0x0)) {
label_18223ea59:
    bVar10 = false;
  }
  else {
    bVar10 = false;
    for (iVar14 = 0; iVar14 < (textInfo->fields).characterCount; iVar14 = iVar14 + 1) {
      pTVar1 = (textInfo->fields).characterInfo;
      if (pTVar1 == (TMPro_TMP_CharacterInfo_array *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180354250(pTVar1,&local_348);
      lVar13 = 2;
      puVar7 = &local_348;
      puVar8 = local_1c8;
      do {
        puVar12 = puVar8;
        puVar11 = puVar7;
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar12 = *puVar11;
        puVar12[1] = uVar2;
        uVar2 = puVar11[4];
        uVar5 = puVar11[5];
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar12[4] = uVar2;
        puVar12[5] = uVar5;
        uVar2 = puVar11[8];
        uVar5 = puVar11[9];
        puVar12[6] = uVar3;
        puVar12[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar12[8] = uVar2;
        puVar12[9] = uVar5;
        uVar2 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar12[10] = uVar3;
        puVar12[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar12[0xc] = uVar2;
        puVar12[0xd] = uVar5;
        puVar12[0xe] = uVar3;
        puVar12[0xf] = uVar4;
        lVar13 = lVar13 + -1;
        puVar7 = puVar11 + 0x10;
        puVar8 = puVar12 + 0x10;
      } while (lVar13 != 0);
      uVar2 = puVar11[0x11];
      uVar3 = puVar11[0x12];
      uVar4 = puVar11[0x13];
      puVar12[0x10] = puVar11[0x10];
      puVar12[0x11] = uVar2;
      uVar2 = puVar11[0x14];
      uVar5 = puVar11[0x15];
      puVar12[0x12] = uVar3;
      puVar12[0x13] = uVar4;
      uVar3 = puVar11[0x16];
      uVar4 = puVar11[0x17];
      puVar12[0x14] = uVar2;
      puVar12[0x15] = uVar5;
      uVar2 = puVar11[0x18];
      uVar5 = puVar11[0x19];
      puVar12[0x16] = uVar3;
      puVar12[0x17] = uVar4;
      uVar3 = puVar11[0x1a];
      uVar4 = puVar11[0x1b];
      puVar12[0x18] = uVar2;
      puVar12[0x19] = uVar5;
      uVar5 = puVar11[0x1c];
      uVar6 = puVar11[0x1d];
      uVar2 = puVar11[0x1e];
      puVar12[0x1a] = uVar3;
      puVar12[0x1b] = uVar4;
      puVar12[0x1c] = uVar5;
      puVar12[0x1d] = uVar6;
      puVar12[0x1e] = uVar2;
      if ((local_58 != '\0') &&
         (bVar9 = UI_ChatDisplayNameRange__ContainsSourceIndex
                            (&(__this->fields)._range,iStack_340,(MethodInfo *)0x0), bVar9)) {
        if (*firstLine < 0) {
          *firstLine = iStack_30c;
          *baseline = local_224;
        }
        *lastLine = iStack_30c;
        if (iStack_30c != *firstLine) goto label_18223ea59;
        fVar15 = (min->fields).x;
        if (fStack_254 <= fVar15) {
          fVar15 = fStack_254;
        }
        fVar16 = (min->fields).y;
        (min->fields).x = fVar15;
        if (local_220 <= fVar16) {
          fVar16 = local_220;
        }
        (min->fields).y = fVar16;
        fVar15 = (max->fields).x;
        if (fVar15 <= local_248) {
          fVar15 = local_248;
        }
        (max->fields).x = fVar15;
        fVar15 = (max->fields).y;
        if (fVar15 <= local_228) {
          fVar15 = local_228;
        }
        (max->fields).y = fVar15;
        bVar10 = true;
      }
    }
  }
  return bVar10;
}


// UI.ChatPlayerNameOverlay$$SetRaycastTargets
// il2cpp: void UI_ChatPlayerNameOverlay__SetRaycastTargets (UI_ChatPlayerNameOverlay_o* __this, bool value, const MethodInfo* method);
// 0x18223e100

void UI_ChatPlayerNameOverlay__SetRaycastTargets
               (UI_ChatPlayerNameOverlay_o *__this,bool value,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184347221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347221 = '\x01';
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
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pPVar1,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic),
     pSVar4 != (System_Object_array *)0x0)) {
    uVar5 = 0;
    while( true ) {
      if ((int)pSVar4->max_length <= (int)uVar5) {
        return;
      }
      if ((uint)pSVar4->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = pSVar4->m_Items[(int)uVar5];
      if (pIVar2 == (Il2CppObject *)0x0) break;
      (*pIVar2->klass->vtable[0x19].methodPtr)(pIVar2,(ulonglong)value,pIVar2->klass->vtable[0x19].method);
      uVar5 = uVar5 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.ChatPlayerNameOverlay$$.ctor
// il2cpp: void UI_ChatPlayerNameOverlay___ctor (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x18223ea80

void UI_ChatPlayerNameOverlay___ctor(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  System_String_o *value;
  
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._nameText = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nameText,value);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


