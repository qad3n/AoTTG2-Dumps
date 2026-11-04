// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditorRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* inputId, System_String_o* value, System_String_o* pickerId, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x181e03030

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *inputId
               ,System_String_o *value,System_String_o *pickerId,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *colorsEnabledKey,
               bool colorsEnabled,System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *value_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  
  if (Il2CppMethodInitialized_184344bdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_184344bdf = '\x01';
  }
  (__this->fields)._inputId = inputId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputId,inputId);
  (__this->fields)._pickerId = pickerId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pickerId,pickerId);
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state,state);
  (__this->fields)._colorsEnabledKey = colorsEnabledKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colorsEnabledKey,colorsEnabledKey);
  (__this->fields)._colorsEnabled = colorsEnabled;
  (__this->fields)._imported = imported;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._imported,imported);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  value_00 = PatreonEffects_NameFontCatalog__Normalize(previewFont,(MethodInfo *)0x0);
  (__this->fields)._previewFont = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewFont,value_00);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this,previewEffectType,previewEffectColors,(MethodInfo *)0x0);
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = (__this->fields)._state;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged
               ,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._initialValue = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._initialValue,value);
  if ((__this->fields)._attached != false) {
    document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((__this->fields)._initialValue,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
              (__this,document,true,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSerializedValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181e02fc0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    (__this->fields)._initialValue = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._initialValue,value);
    if ((__this->fields)._attached != false) {
      document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                           ((__this->fields)._initialValue,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                (__this,document,true,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e031d0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Attach
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e00b60

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  TMPro_TMP_InputField_TextSelectionEvent_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  UnityEngine_Transform_o *root;
  TMPro_TMP_InputField_o *pTVar4;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  UnityEngine_Events_UnityAction_T0__T1__T2__o *pUVar5;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  
  if (Il2CppMethodInitialized_184344be0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_Find_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_AddListener);
    Il2CppMethodInitialized_184344be0 = '\x01';
  }
  if ((__this->fields)._attached == false) {
    root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pTVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                       (root,(__this->fields)._inputId,
                        (MethodInfo_68B400 *)
                        MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_Find_TMP_InputField
                       );
    (__this->fields)._input = pTVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._input,pTVar4);
    pTVar4 = (__this->fields)._input;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pTVar4 = (__this->fields)._input;
      if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
        (pTVar4->fields).m_OnFocusSelectAll = false;
        pTVar4 = (__this->fields)._input;
        if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
          __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pTVar4->fields).m_OnValueChanged;
          __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string)
          ;
          DG_Tweening_Core_DOSetter_object____ctor
                    (__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged,
                     (MethodInfo_EB6EC0 *)0x0);
          if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
            UnityEngine_Events_UnityEvent_Vector2___AddListener
                      (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
                       (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
            pTVar4 = (__this->fields)._input;
            if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
              pTVar1 = (pTVar4->fields).m_OnTextSelection;
              pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
              UnityEngine_Events_UnityAction_object__int__int____ctor
                        (pUVar5,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection
                         ,(MethodInfo_EB7250 *)0x0);
              if (pTVar1 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent_object__int__int___AddListener
                          ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar1,pUVar5,
                           (MethodInfo_EBDFB0 *)
                           MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_AddListener);
                pTVar4 = (__this->fields)._input;
                if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
                  pTVar1 = (pTVar4->fields).m_OnEndTextSelection;
                  pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
                           il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
                  UnityEngine_Events_UnityAction_object__int__int____ctor
                            (pUVar5,(Il2CppObject *)__this,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection
                             ,(MethodInfo_EB7250 *)0x0);
                  if (pTVar1 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent_object__int__int___AddListener
                              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar1,pUVar5,
                               (MethodInfo_EBDFB0 *)
                               MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_AddListener);
                    pTVar4 = (__this->fields)._input;
                    if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
                      pTVar2 = (pTVar4->fields).m_TextComponent;
                      (__this->fields)._text = pTVar2;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._text,pTVar2);
                      pTVar2 = (__this->fields)._text;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar3 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar3) {
                        pTVar2 = (__this->fields)._text;
                        __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                                    il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
                        System_Action_object____ctor
                                  (__this_02,(Il2CppObject *)__this,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors
                                   ,(MethodInfo *)0x0);
                        if (pTVar2 == (TMPro_TMP_Text_o *)0x0) goto label_181e00e4e;
                        (*(pTVar2->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                                  (pTVar2,(System_Action_TMP_TextInfo__o *)__this_02,
                                   (pTVar2->klass->vtable)._78_add_OnPreRenderText.method);
                      }
                      (__this->fields)._attached = true;
                      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
                                (__this,(__this->fields)._previewFont,(MethodInfo *)0x0);
                      document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                                           ((__this->fields)._initialValue,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                                (__this,document,true,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
                                (__this,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_181e00e4e:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* font, const MethodInfo* method);
// 0x181e02a20

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *font,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *x;
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344be1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344be1 = '\x01';
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar4 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
  (__this->fields)._previewFont = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewFont,pSVar4);
  x = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    bVar3 = System_String__IsNullOrEmpty((__this->fields)._previewEffectType,(MethodInfo *)0x0);
    bVar2 = !bVar3;
    if (!bVar3) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview
                (__this,(MethodInfo *)0x0);
    }
  }
  else {
    bVar2 = false;
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._input;
    pSVar4 = (__this->fields)._previewFont;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    PatreonEffects_NameFontCatalog__Apply_20cbe80(pTVar1,pSVar4,(MethodInfo *)0x0);
  }
  if (bVar2) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
              (__this,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* hex, bool clearSelection, const MethodInfo* method);
// 0x181dfffb0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *hex,
               bool clearSelection,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  TMPro_TMP_Text_o *pTVar3;
  TMPro_TMP_InputField_o *pTVar4;
  bool bVar5;
  char cVar6;
  System_String_o *value;
  int iVar7;
  
  if (Il2CppMethodInitialized_184344be2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    Il2CppMethodInitialized_184344be2 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if (bVar5) {
    cVar6 = (__this->fields)._colorsEnabled;
  }
  else {
    if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    cVar6 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      ((__this->fields)._state,(__this->fields)._colorsEnabledKey,
                       (__this->fields)._colorsEnabled,(MethodInfo *)0x0);
  }
  if (((cVar6 != '\0') && (-1 < (__this->fields)._selectionStart)) &&
     ((__this->fields)._selectionStart < (__this->fields)._selectionEnd)) {
    if ((__this->fields)._hasPreview == false) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                (__this,(MethodInfo *)0x0);
    }
    value = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(hex,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._colors;
    if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) {
label_181e001d3:
      ThrowNullReferenceException();
    }
    iVar1 = (__this->fields)._selectionEnd;
    iVar7 = (pSVar2->fields)._size;
    if (iVar7 <= iVar1) {
      iVar1 = iVar7;
    }
    for (iVar7 = (__this->fields)._selectionStart; iVar7 < iVar1; iVar7 = iVar7 + 1) {
      pSVar2 = (__this->fields)._colors;
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e001d3;
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar2,iVar7,(Il2CppObject *)value,
                 (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
    }
    if (Il2CppMethodInitialized_184344beb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184344beb = '\x01';
    }
    pTVar3 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pTVar3 = (__this->fields)._text;
      if (pTVar3 == (TMPro_TMP_Text_o *)0x0) goto label_181e001d3;
      (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar3,(System_Type_o *)0x0,(MethodInfo *)0x0)
      ;
    }
    if (clearSelection) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,(MethodInfo *)0x0);
    }
    else {
      if (Il2CppMethodInitialized_184344bf9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184344bf9 = '\x01';
      }
      pTVar4 = (__this->fields)._input;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        pTVar4 = (__this->fields)._input;
        if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__set_selectionStringAnchorPosition
                    (pTVar4,(__this->fields)._selectionStart,(MethodInfo *)0x0);
          pTVar4 = (__this->fields)._input;
          if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
            TMPro_TMP_InputField__set_selectionStringFocusPosition
                      (pTVar4,(__this->fields)._selectionEnd,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_181e001d3;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CancelPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e00e60
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e00ee6: mov edi, eax
// asm:   0x181e00ee8: cmp eax, ebp
// asm:   0x181e00eec: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool bVar5;
  System_String_o *value;
  int iVar6;
  int index;
  
  if (Il2CppMethodInitialized_184344bf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    Il2CppMethodInitialized_184344bf3 = '\x01';
  }
  if ((__this->fields)._hasPreview != false) {
    pSVar2 = (__this->fields)._previewColors;
    if ((pSVar2 == (System_Collections_Generic_List_string__o *)0x0) ||
       (pSVar3 = (__this->fields)._colors, pSVar3 == (System_Collections_Generic_List_string__o *)0x0)) {
label_181e00fba:
      ThrowNullReferenceException();
    }
    index = (__this->fields)._selectionStart;
    iVar6 = (pSVar2->fields)._size + index;
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 <= iVar6) {
      iVar6 = iVar1;
    }
    for (; index < iVar6; index = index + 1) {
      pSVar2 = (__this->fields)._previewColors;
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e00fba;
      pSVar3 = (__this->fields)._colors;
      value = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         index - (__this->fields)._selectionStart,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e00fba;
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar3,index,(Il2CppObject *)value,
                 (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
    }
    if (Il2CppMethodInitialized_184344beb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184344beb = '\x01';
    }
    pTVar4 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pTVar4 = (__this->fields)._text;
      if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_181e00fba;
      (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar4,(System_Type_o *)0x0,(MethodInfo *)0x0)
      ;
    }
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Serialized
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e02990

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344be3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344be3 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pTVar1->fields).m_Text;
  }
  else {
    pSVar3 = (__this->fields)._lastText;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     (pSVar3,(System_Collections_Generic_IList_string__o *)(__this->fields)._colors,
                      (MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x181e00300

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
          System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  TMPro_TMP_InputField_o *pTVar2;
  System_String_o *value;
  System_Collections_Generic_List_string__o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  
  if (Il2CppMethodInitialized_184344be4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344be4 = '\x01';
  }
  pTVar2 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar2 = (__this->fields)._input;
    if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_181e00444;
    pSVar5 = (pTVar2->fields).m_Text;
  }
  else {
    pSVar5 = (__this->fields)._lastText;
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                     (pSVar5,stops,(MethodInfo *)0x0);
  document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar5,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184344bec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bec = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_1e03400(document,(MethodInfo *)0x0);
  if (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    value = (document->fields).Text;
    (__this->fields)._lastText = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText,value);
    pSVar3 = (__this->fields)._colors;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar3->fields)._size;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pSVar3 = (__this->fields)._colors;
      if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar3,
                   (System_Collections_Generic_IEnumerable_T__o *)(document->fields).Colors,
                   (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
                  (__this,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
  }
label_181e00444:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x181e02b70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e02c2e: nop 

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  int32_t iVar5;
  void *pvVar6;
  System_String_array *pSVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *value;
  ulonglong uVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184344be5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184344be5 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
            (__this,(MethodInfo *)0x0);
  if (stops != (System_Collections_Generic_IList_string__o *)0x0) {
    pvVar6 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                        (Il2CppObject *)stops);
    if ((int)pvVar6 != 0) {
      pvVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                          (Il2CppObject *)stops);
      pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pvVar6);
      (__this->fields)._gradientStops = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,pSVar7);
      uVar10 = 0;
      do {
        pSVar2 = stops->klass;
        uVar1 = (pSVar2->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar3 = (pSVar2->_1).interfaceOffsets;
          uVar4 = 0;
          do {
            if (pIVar3[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string) {
              pVVar8 = pSVar2->vtable + pIVar3[uVar4].offset;
              goto label_181e02c86;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)stops,
                            (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_181e02c86:
        iVar5 = (*pVVar8->methodPtr)((Il2CppObject *)stops,pVVar8->method);
        pSVar7 = (__this->fields)._gradientStops;
        if (iVar5 <= (int)uVar10) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                    (__this,(System_Collections_Generic_IList_string__o *)pSVar7,(MethodInfo *)0x0);
          return;
        }
        pSVar2 = stops->klass;
        uVar1 = (pSVar2->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar3 = (pSVar2->_1).interfaceOffsets;
          uVar9 = 0;
          do {
            if (pIVar3[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string
               ) {
              pVVar8 = pSVar2->vtable + pIVar3[uVar9].offset;
              goto label_181e02ce2;
            }
            uVar4 = (short)uVar9 + 1;
            uVar9 = (ulonglong)uVar4;
          } while (uVar4 < uVar1);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)stops,
                            (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0);
label_181e02ce2:
        value = (*pVVar8->methodPtr)((Il2CppObject *)stops,uVar10,pVVar8->method);
        if (pSVar7 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pSVar7->max_length <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pSVar7->m_Items[(int)uVar10] = value;
        Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar10,value);
        uVar10 = uVar10 + 1;
      } while( true );
    }
  }
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e01130

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x181e02e60

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *type,
               System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,(void *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this,type,colors,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
            (__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e01150

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344be6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344be6 = '\x01';
  }
  (__this->fields)._previewEffectType = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectType,(void *)0x0);
  (__this->fields)._previewEffectColors = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectColors,(void *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview(__this,(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._text;
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    local_18.r = 1.0;
    local_18.g = 1.0;
    local_18.b = 1.0;
    local_18.a = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method);
    pTVar1 = (__this->fields)._text;
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar1,(System_Type_o *)0x0,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$DestroyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e015b0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344be7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344be7 = '\x01';
  }
  pPVar1 = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pPVar1 = (__this->fields)._effectPreview;
    if (pPVar1 == (PatreonEffects_NameEffectController_o *)0x0) {
      ThrowNullReferenceException();
    }
    PatreonEffects_NameEffectController__Clear(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._effectPreview;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    (__this->fields)._effectPreview = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._effectPreview,(void *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e01660

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_TextSelectionEvent_o *pTVar2;
  TMPro_TMP_Text_o *pTVar3;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  bool bVar4;
  DG_Tweening_Core_DOSetter_T__o *__this_02;
  UnityEngine_Events_UnityAction_T0__T1__T2__o *pUVar5;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar6;
  
  if (Il2CppMethodInitialized_184344be8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_TMP_TextInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_RemoveListener);
    Il2CppMethodInitialized_184344be8 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_181e018f6;
    __this_00 = (pTVar1->fields).m_OnValueChanged;
    __this_02 = (DG_Tweening_Core_DOSetter_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged,
               (MethodInfo_EB6EC0 *)0x0);
    if (__this_00 == (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) goto label_181e018f6;
    UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,
               (UnityEngine_Events_UnityAction_T0__T1__T2__o *)__this_02,
               (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_181e018f6;
    pTVar2 = (pTVar1->fields).m_OnTextSelection;
    pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
    UnityEngine_Events_UnityAction_object__int__int____ctor
              (pUVar5,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection,
               (MethodInfo_EB7250 *)0x0);
    if (pTVar2 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto label_181e018f6;
    UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar2,pUVar5,
               (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_RemoveListener);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_181e018f6;
    pTVar2 = (pTVar1->fields).m_OnEndTextSelection;
    pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
    UnityEngine_Events_UnityAction_object__int__int____ctor
              (pUVar5,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection,
               (MethodInfo_EB7250 *)0x0);
    if (pTVar2 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto label_181e018f6;
    UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar2,pUVar5,
               (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_RemoveListener);
  }
  pTVar3 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar3 = (__this->fields)._text;
    pUVar6 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
    System_Action_object____ctor
              (pUVar6,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors,
               (MethodInfo *)0x0);
    if (pTVar3 == (TMPro_TMP_Text_o *)0x0) {
label_181e018f6:
      ThrowNullReferenceException();
    }
    (*(pTVar3->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
              (pTVar3,(System_Action_TMP_TextInfo__o *)pUVar6,
               (pTVar3->klass->vtable)._79_remove_OnPreRenderText.method);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
            (__this,(MethodInfo *)0x0);
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_01 = (__this->fields)._state;
    pUVar6 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (pUVar6,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged
               ,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
              (__this_01,(System_Action_string__o *)pUVar6,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e035c0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *pSVar2;
  bool bVar3;
  char cVar4;
  int32_t iVar5;
  int32_t start;
  int32_t end;
  UnityEngine_GameObject_o *gameObject;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184344be9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344be9 = '\x01';
  }
  if ((__this->fields)._attached == false) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_181e03821:
      ThrowNullReferenceException();
    }
    if ((pTVar1->fields).m_AllowInput != false) {
      bVar3 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
      if (bVar3) {
        cVar4 = (__this->fields)._colorsEnabled;
      }
      else {
        if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        cVar4 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          ((__this->fields)._state,(__this->fields)._colorsEnabledKey,
                           (__this->fields)._colorsEnabled,(MethodInfo *)0x0);
      }
      if (cVar4 != '\0') {
        pTVar1 = (__this->fields)._input;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          iVar5 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar1,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._input;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            start = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar1,(MethodInfo *)0x0);
            if (iVar5 < start) {
              start = iVar5;
            }
            pTVar1 = (__this->fields)._input;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              iVar5 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar1,(MethodInfo *)0x0);
              pTVar1 = (__this->fields)._input;
              if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                end = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar1,(MethodInfo *)0x0);
                if (end < iVar5) {
                  end = iVar5;
                }
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                          (__this,start,end,(MethodInfo *)0x0);
                if (((__this->fields)._selectionStart < 0) ||
                   ((__this->fields)._selectionEnd <= (__this->fields)._selectionStart)) {
                  (__this->fields)._openedStart = -1;
                  (__this->fields)._openedEnd = -1;
                  return;
                }
                bVar3 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
                if (bVar3) {
                  return;
                }
                if (((__this->fields)._openedStart == (__this->fields)._selectionStart) &&
                   ((__this->fields)._openedEnd == (__this->fields)._selectionEnd)) {
                  return;
                }
                (__this->fields)._openedStart = (__this->fields)._selectionStart;
                (__this->fields)._openedEnd = (__this->fields)._selectionEnd;
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                          (__this,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._input;
                if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                  pSVar2 = (__this->fields)._pickerId;
                  gameObject = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
                  local_48.fields.ElementId = (System_String_o *)0x0;
                  local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
                  local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
                  local_48.fields.InputSource = 0;
                  local_48.fields._28_4_ = 0;
                  Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                            (&local_48,pSVar2,gameObject,
                             (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0,(MethodInfo *)0x0);
                  pSVar2 = (__this->fields)._pickerId;
                  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
                  }
                  local_28.fields.ElementId = local_48.fields.ElementId;
                  local_28.fields.GameObject = local_48.fields.GameObject;
                  local_28.fields.Node = local_48.fields.Node;
                  local_28.fields.InputSource = local_48.fields.InputSource;
                  local_28.fields._28_4_ = local_48.fields._28_4_;
                  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(&local_28,pSVar2,false,(MethodInfo *)0x0)
                  ;
                  return;
                }
                ThrowNullReferenceException();
              }
            }
          }
        }
        goto label_181e03821;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e014a0

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._colorsEnabled;
  }
  if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return false;
  }
  bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                    ((__this->fields)._state,(__this->fields)._colorsEnabledKey,
                     (__this->fields)._colorsEnabled,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x181e01900

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = System_String__op_Equality(key,(__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
    if (bVar1) {
      cVar2 = (__this->fields)._colorsEnabled;
    }
    else {
      if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_181e0195a;
      cVar2 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        ((__this->fields)._state,(__this->fields)._colorsEnabledKey,
                         (__this->fields)._colorsEnabled,(MethodInfo *)0x0);
    }
    if (cVar2 == '\0') {
label_181e0195a:
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181e01970
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e01ba3: mov r15, rsi
// asm:   0x181e01ba6: mov qword ptr [rsp + 0x60], rsi
// asm:   0x181e01bab: mov rcx, rsi
// asm:   0x181e01bae: jmp 0x181e01bd2
// asm:   0x181e01bcf: mov rcx, r15
// asm:   0x181e01be9: nop dword ptr [rax]
// asm:   0x181e01c5a: mov rax, qword ptr [rsp + 0x40]
// asm:   0x181e01c5f: jmp 0x181e01cda
// asm:   0x181e01cd3: mov rax, qword ptr [rip + 0x22dd69e]  ; "FFFFFF"
// asm:   0x181e020b1: mov rbx, rsi
// asm:   0x181e020b4: jmp 0x181e020c7
// asm:   0x181e021c0: mov rdx, r14
// asm:   0x181e021c3: jmp 0x181e021d6
// asm:   0x181e0229b: mov r8, qword ptr [rip + 0x22d9f6e]  ; MethodInfo_System_Collections_Generic_List_string_AddRange
// asm:   0x181e022a2: mov rdx, qword ptr [rbx + 0x18]
// asm:   0x181e022a6: call 0x18093da30  ; System_Collections_Generic_List_object___AddRange()
// asm:   0x181e022ab: xor edx, edx
// asm:   0x181e022ad: mov rcx, rdi
// asm:   0x181e022b0: call 0x181e02700  ; Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors()
// asm:   0x181e022b5: jmp 0x181e02044
// asm:   0x181e02654: xor edx, edx
// asm:   0x181e02656: mov rcx, r14
// asm:   0x181e02659: call 0x181dff000  ; Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse()
// asm:   0x181e0265e: mov rdx, rax
// asm:   0x181e02661: xor r9d, r9d
// asm:   0x181e02664: xor r8d, r8d
// asm:   0x181e02667: mov rcx, rdi
// asm:   0x181e0266a: call 0x181e001e0  ; Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument()
// asm:   0x181e0266f: jmp 0x181e02044

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int32_t iVar7;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar8;
  TMPro_TMP_InputField_o *pTVar9;
  System_Action_GameObject__o *pSVar10;
  System_String_array *pSVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  MethodInfo *pMVar15;
  bool bVar16;
  bool bVar17;
  uint16_t value_00;
  int iVar18;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar19;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar20;
  System_String_o *pSVar21;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar22;
  UnityEngine_GameObject_o *pUVar23;
  System_String_o *pSVar24;
  void *pvVar25;
  System_Collections_Generic_List_string__o *pSVar26;
  UnityEngine_Color_o *pUVar27;
  int iVar28;
  System_String_o **ppSVar29;
  System_Collections_Generic_ICollection_string__c *method_00;
  int iVar30;
  int iVar31;
  byte bVar32;
  double dVar33;
  float fVar34;
  int32_t local_res20 [2];
  System_String_o *local_108;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_100;
  System_String_o *local_f8;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  System_String_o *local_d8;
  UnityEngine_Color_o local_d0;
  System_String_o *local_c0 [17];
  
  if (Il2CppMethodInitialized_184344bea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_184344bea = '\x01';
  }
  local_100 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  local_108 = (System_String_o *)0x0;
  if (Il2CppMethodInitialized_184344bed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    Il2CppMethodInitialized_184344bed = '\x01';
  }
  pGVar19 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(pGVar19,(MethodInfo *)0x0);
  ppSVar29 = &(__this->fields)._lastText;
  if ((__this->fields)._lastText == (System_String_o *)0x0) {
    ppSVar29 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    pSVar21 = *ppSVar29;
    (pGVar19->fields).Text = pSVar21;
    Il2CppCodeGenWriteBarrier(&(pGVar19->fields).Text,pSVar21);
    pSVar26 = (pGVar19->fields).Colors;
    if (pSVar26 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)pSVar26,
                 (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._colors,
                 (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      if (Il2CppMethodInitialized_184344bcd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_get_Count);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
        il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
        Il2CppMethodInitialized_184344bcd = '\x01';
      }
      local_d0.fields._0_8_ = (System_String_o *)0x0;
      local_res20[0] = 0;
      pGVar20 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(pGVar20,(MethodInfo *)0x0);
      if (pGVar20 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
        pSVar21 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        (pGVar20->fields).Text = pSVar21;
        Il2CppCodeGenWriteBarrier(&(pGVar20->fields).Text,pSVar21);
        local_100 = pGVar20;
        Il2CppCodeGenWriteBarrier(&local_100,pGVar20);
        local_e8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
        System_Text_StringBuilder___ctor(local_e8,(MethodInfo *)0x0);
        local_f8 = "FFFFFF";
        local_108 = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&local_108,(void *)0x0);
        local_d8 = value;
        if ((value != (System_String_o *)0x0) ||
           (local_d8 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
           local_d8 != (System_String_o *)0x0)) {
          bVar14 = false;
          bVar12 = false;
          iVar30 = 0;
          bVar17 = false;
          bVar32 = 0;
          pSVar21 = local_d8;
          local_c0[0] = local_d8;
          bVar13 = false;
          while (pGVar20 = local_100, iVar30 < (local_c0[0]->fields)._stringLength) {
            bVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                               (pSVar21,iVar30,(System_String_o **)&local_d0,local_res20,(MethodInfo *)0x0);
            if (bVar16) {
              local_f8 = (System_String_o *)local_d0.fields._0_8_;
              bVar17 = true;
              bVar32 = 1;
              bVar14 = true;
              iVar30 = iVar30 + local_res20[0];
            }
            else {
              value_00 = System_String__get_Chars(pSVar21,iVar30,(MethodInfo *)0x0);
              if ((local_e8 == (System_Text_StringBuilder_o *)0x0) ||
                 (System_Text_StringBuilder__Append_197e090(local_e8,value_00,(MethodInfo *)0x0),
                 local_100 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0))
              goto label_181e026cc;
              pSVar26 = (local_100->fields).Colors;
              pSVar21 = local_f8;
              if (!bVar17) {
                if (pSVar26 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e026cc;
                iVar28 = (pSVar26->fields)._size;
                if (Il2CppMethodInitialized_184344bd6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_List_string_get_Count);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_List_string_get_Item);
                  il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
                  Il2CppMethodInitialized_184344bd6 = '\x01';
                }
                pSVar21 = "FFFFFF";
                if ((((pGVar19->fields).Colors != (System_Collections_Generic_List_string__o *)0x0) &&
                    (-1 < iVar28)) &&
                   (__this_00 = (pGVar19->fields).Colors, iVar28 < (__this_00->fields)._size)) {
                  pSVar21 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_00,iVar28,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_string_get_Item);
                  pSVar21 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                      (pSVar21,(MethodInfo *)0x0);
                }
              }
              if (pSVar26 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e026cc;
              il2cpp_runtime_helper_180012890(pSVar26,pSVar21,MethodInfo_System_Collections_Generic_List_string_Add);
              bVar12 = bVar13;
              if (bVar17) {
                bVar12 = true;
              }
              bVar32 = 0;
              iVar30 = iVar30 + 1;
              pSVar21 = local_d8;
              bVar13 = bVar12;
            }
          }
          if ((local_e8 != (System_Text_StringBuilder_o *)0x0) &&
             (pSVar21 = (*(local_e8->klass->vtable)._3_ToString.methodPtr)
                                  (local_e8,(local_e8->klass->vtable)._3_ToString.method),
             pGVar20 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)) {
            (pGVar20->fields).Text = pSVar21;
            Il2CppCodeGenWriteBarrier(&(pGVar20->fields).Text,pSVar21);
            if ((bool)(bVar14 & bVar32)) {
              local_108 = local_f8;
              Il2CppCodeGenWriteBarrier(&local_108,local_f8);
            }
            if (bVar14) {
              (__this->fields)._pendingImportColor = local_108;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingImportColor,local_108);
              if (bVar12) {
                (__this->fields)._gradientStops = (System_String_array *)0x0;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,(void *)0x0);
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                          (__this,(MethodInfo *)0x0);
                pGVar19 = local_100;
                if (Il2CppMethodInitialized_184344bec == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_List_string_AddRange);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_List_string_Clear);
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                  Il2CppMethodInitialized_184344bec = '\x01';
                }
                if (Il2CppMethodInitialized_184344bf0 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_List_string_Add);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_List_string_get_Count);
                  il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
                  Il2CppMethodInitialized_184344bf0 = '\x01';
                }
                if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
                  pGVar22 = &pGVar19->fields;
                  if ((pGVar19->fields).Text == (System_String_o *)0x0) {
                    pGVar22 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields **)
                               (g_data_184354e50 + 0xb8);
                  }
                  pSVar21 = pGVar22->Text;
                  if (pSVar21 != (System_String_o *)0x0) {
                    if (0x1f < (pSVar21->fields)._stringLength) {
                      pSVar21 = System_String__Substring_1972740(pSVar21,0,0x1f,(MethodInfo *)0x0);
                    }
                    (pGVar19->fields).Text = pSVar21;
                    Il2CppCodeGenWriteBarrier(&(pGVar19->fields).Text,pSVar21);
                    while ((pSVar26 = (pGVar19->fields).Colors,
                           pSVar26 != (System_Collections_Generic_List_string__o *)0x0 &&
                           (pSVar21 = (pGVar19->fields).Text, pSVar21 != (System_String_o *)0x0))) {
                      if ((pSVar26->fields)._size <= (pSVar21->fields)._stringLength) goto label_181e01f00;
                      System_Collections_Generic_List_object___RemoveAt
                                ((System_Collections_Generic_List_object__o *)pSVar26,
                                 (pSVar26->fields)._size + -1,
                                 (MethodInfo_947010 *)
                                 MethodInfo_System_Collections_Generic_List_string_RemoveAt);
                    }
                  }
                }
                goto label_181e026c0;
              }
            }
            pSVar21 = value;
            if (value == (System_String_o *)0x0) {
              pSVar21 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
            if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
            }
            pSVar21 = MiscExtensions__StripRichText(pSVar21,(MethodInfo *)0x0);
            pSVar21 = MiscExtensions__StripHex(pSVar21,(MethodInfo *)0x0);
            if ((pSVar21 == (System_String_o *)0x0) ||
               ((pSVar21 = System_String__Replace_1970e80
                                     (pSVar21,"\n",
                                      (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                      (MethodInfo *)0x0), pSVar21 == (System_String_o *)0x0 &&
                (pSVar21 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
                pSVar21 == (System_String_o *)0x0)))) goto label_181e026c0;
            if (0x1f < (pSVar21->fields)._stringLength) {
              pSVar21 = System_String__Substring_1972740(pSVar21,0,0x1f,(MethodInfo *)0x0);
            }
            bVar17 = System_String__op_Inequality(pSVar21,value,(MethodInfo *)0x0);
            if (bVar17) {
              if (Il2CppMethodInitialized_184344bef == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                Il2CppMethodInitialized_184344bef = '\x01';
              }
              pTVar9 = (__this->fields)._input;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar17 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if (!bVar17) {
                pTVar9 = (__this->fields)._input;
                pSVar24 = pSVar21;
                if (pSVar21 == (System_String_o *)0x0) {
                  pSVar24 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                }
                if (pTVar9 == (TMPro_TMP_InputField_o *)0x0) goto label_181e026c0;
                TMPro_TMP_InputField__SetTextWithoutNotify(pTVar9,pSVar24,(MethodInfo *)0x0);
                pTVar9 = (__this->fields)._input;
                if (pTVar9 == (TMPro_TMP_InputField_o *)0x0) goto label_181e026c0;
                TMPro_TMP_InputField__ForceLabelUpdate(pTVar9,(MethodInfo *)0x0);
              }
            }
            pSVar24 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                                ((__this->fields)._lastText,
                                 (System_Collections_Generic_IList_string__o *)(__this->fields)._colors,
                                 (MethodInfo *)0x0);
            pSVar24 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
                                (pSVar24,pSVar21,(MethodInfo *)0x0);
            pGVar19 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar24,(MethodInfo *)0x0);
            bVar17 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
                               (__this,pGVar19,(MethodInfo *)0x0);
            if (bVar17) {
              (__this->fields)._gradientStops = (System_String_array *)0x0;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,(void *)0x0);
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                        (__this,(MethodInfo *)0x0);
              (__this->fields)._pendingImportColor = (System_String_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingImportColor,(void *)0x0);
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                        (__this,pGVar19,true,(MethodInfo *)0x0);
label_181e02023:
              pSVar10 = (__this->fields)._imported;
              if (pSVar10 != (System_Action_GameObject__o *)0x0) {
                pUVar23 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                (*(code *)(pSVar10->fields).invoke_impl)
                          ((pSVar10->fields).method_code,pUVar23,(pSVar10->fields).method);
              }
              return;
            }
            if ((__this->fields)._gradientStops == (System_String_array *)0x0) {
              if (pGVar19 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
                pSVar21 = (pGVar19->fields).Text;
                (__this->fields)._lastText = pSVar21;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText,pSVar21);
                pSVar26 = (__this->fields)._colors;
                if (pSVar26 != (System_Collections_Generic_List_string__o *)0x0) {
                  iVar7 = (pSVar26->fields)._size;
                  piVar1 = &(pSVar26->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  (pSVar26->fields)._size = 0;
                  if (0 < iVar7) {
                    System_Array__Clear((System_Array_o *)(pSVar26->fields)._items,0,iVar7,(MethodInfo *)0x0);
                  }
                  pSVar26 = (__this->fields)._colors;
                  if (pSVar26 != (System_Collections_Generic_List_string__o *)0x0) {
                    System_Collections_Generic_List_object___AddRange
                              ((System_Collections_Generic_List_object__o *)pSVar26,
                               (System_Collections_Generic_IEnumerable_T__o *)(pGVar19->fields).Colors,
                               (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange
                              );
                    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
                              (__this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else {
              pSVar8 = (__this->fields)._gradientStops;
              if (Il2CppMethodInitialized_184344bcf == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Collections_Generic_ICollection_string);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_string_Add);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
                Il2CppMethodInitialized_184344bcf = '\x01';
              }
              if ((pSVar21 != (System_String_o *)0x0) ||
                 (pSVar21 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
                 pSVar21 != (System_String_o *)0x0)) {
                if (((pSVar21->fields)._stringLength != 0) &&
                   ((pSVar8 != (System_String_array *)0x0 &&
                    (pvVar25 = InterfaceInvoker0_Invoke
                                         (0,(Il2CppClass *)
                                            TypeInfo_System_Collections_Generic_ICollection_string,
                                          &pSVar8->obj), (int)pvVar25 != 0)))) {
                  iVar7 = (pSVar21->fields)._stringLength;
                  pSVar26 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_List_T__o *)pSVar26,iVar7,
                             (MethodInfo_92A4F0 *)
                             MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
                  iVar30 = 0;
                  while (iVar30 < (pSVar21->fields)._stringLength) {
                    iVar28 = (pSVar21->fields)._stringLength;
                    if (Il2CppMethodInitialized_184344bd3 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_System_Collections_Generic_ICollection_string);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_System_Collections_Generic_IList_string);
                      Il2CppMethodInitialized_184344bd3 = '\x01';
                    }
                    pvVar25 = InterfaceInvoker0_Invoke
                                        (0,(Il2CppClass *)
                                           TypeInfo_System_Collections_Generic_ICollection_string,&pSVar8->obj
                                        );
                    if (((int)pvVar25 == 1) || (iVar28 < 2)) {
                      pSVar24 = (System_String_o *)
                                il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,pSVar8,0);
                      pSVar24 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                          (pSVar24,(MethodInfo *)0x0);
                    }
                    else {
                      pvVar25 = InterfaceInvoker0_Invoke
                                          (0,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_ICollection_string,
                                           &pSVar8->obj);
                      if (Il2CppMethodInitialized_18433df26 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                        Il2CppMethodInitialized_18433df26 = '\x01';
                      }
                      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                      }
                      fVar34 = (float)((int)pvVar25 + -1) * ((float)iVar30 / (float)(iVar28 + -1));
                      method_00 = TypeInfo_System_Collections_Generic_ICollection_string;
                      pvVar25 = InterfaceInvoker0_Invoke
                                          (0,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_ICollection_string,
                                           &pSVar8->obj);
                      dVar33 = il2cpp_runtime_helper_1804f4690((double)fVar34,(MethodInfo *)method_00);
                      iVar28 = (int)dVar33;
                      if (((iVar28 < 0) || (iVar31 = (int)pvVar25 + -1, iVar28 <= iVar31)) &&
                         (iVar31 = iVar28, iVar28 < 0)) {
                        iVar31 = 0;
                      }
                      pvVar25 = InterfaceInvoker0_Invoke
                                          (0,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_ICollection_string,
                                           &pSVar8->obj);
                      iVar18 = (int)pvVar25 + -1;
                      iVar28 = iVar31 + 1;
                      if (iVar18 <= iVar31 + 1) {
                        iVar28 = iVar18;
                      }
                      fVar34 = fVar34 - (float)iVar31;
                      if (fVar34 < 0.0) {
                        fVar34 = 0.0;
                      }
                      else if (1.0 < fVar34) {
                        fVar34 = 1.0;
                      }
                      pSVar24 = (System_String_o *)
                                il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,pSVar8,iVar31
                                             );
                      pUVar27 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb
                                          ((UnityEngine_Color_o *)local_c0,pSVar24,(MethodInfo *)0x0);
                      fVar2 = (pUVar27->fields).r;
                      fVar3 = (pUVar27->fields).g;
                      fVar4 = (pUVar27->fields).b;
                      fVar5 = (pUVar27->fields).a;
                      pSVar24 = (System_String_o *)
                                il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,pSVar8,iVar28
                                             );
                      pUVar27 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb
                                          (&local_d0,pSVar24,(MethodInfo *)0x0);
                      if (fVar34 < 0.0) {
                        fVar34 = 0.0;
                      }
                      else if (1.0 < fVar34) {
                        fVar34 = 1.0;
                      }
                      local_e0 = ((pUVar27->fields).b - fVar4) * fVar34 + fVar4;
                      local_dc = ((pUVar27->fields).a - fVar5) * fVar34 + fVar5;
                      local_e8 = (System_Text_StringBuilder_o *)
                                 CONCAT44(((pUVar27->fields).g - fVar3) * fVar34 + fVar3,
                                          ((pUVar27->fields).r - fVar2) * fVar34 + fVar2);
                      pSVar24 = UnityEngine_ColorUtility__ToHtmlStringRGB
                                          ((UnityEngine_Color_o *)&local_e8,(MethodInfo *)0x0);
                    }
                    pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
                    if (pSVar26 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e026c0;
                    piVar1 = &(pSVar26->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar11 = (pSVar26->fields)._items;
                    if (pSVar11 == (System_String_array *)0x0) goto label_181e026c0;
                    uVar6 = (pSVar26->fields)._size;
                    if (uVar6 < (uint)pSVar11->max_length) {
                      (pSVar26->fields)._size = uVar6 + 1;
                      if ((uint)pSVar11->max_length <= uVar6) {
label_181e026c6:
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar11->m_Items[(int)uVar6] = pSVar24;
                      Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar6,pSVar24);
                      iVar30 = iVar30 + 1;
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar26,(Il2CppObject *)pSVar24,
                                 (MethodInfo_93DD50 *)pMVar15->klass->rgctx_data[0xe].method);
                      iVar30 = iVar30 + 1;
                    }
                  }
                  pSVar21 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                                      (pSVar21,(System_Collections_Generic_IList_string__o *)pSVar26,
                                       (MethodInfo *)0x0);
                }
                pGVar19 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                                    (pSVar21,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                          (__this,pGVar19,false,(MethodInfo *)0x0);
                return;
              }
            }
            goto label_181e026c0;
          }
        }
      }
label_181e026cc:
      ThrowNullReferenceException();
    }
  }
label_181e026c0:
  ThrowNullReferenceException();
label_181e01f00:
  pSVar21 = "FFFFFF";
  pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar26 = (pGVar19->fields).Colors;
  if ((pSVar26 == (System_Collections_Generic_List_string__o *)0x0) ||
     (pSVar24 = (pGVar19->fields).Text, pSVar24 == (System_String_o *)0x0)) goto label_181e026c0;
  if ((pSVar24->fields)._stringLength <= (pSVar26->fields)._size) {
    pSVar21 = (pGVar19->fields).Text;
    (__this->fields)._lastText = pSVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText,pSVar21);
    pSVar26 = (__this->fields)._colors;
    if (pSVar26 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar7 = (pSVar26->fields)._size;
      piVar1 = &(pSVar26->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar26->fields)._size = 0;
      if (0 < iVar7) {
        System_Array__Clear((System_Array_o *)(pSVar26->fields)._items,0,iVar7,(MethodInfo *)0x0);
      }
      pSVar26 = (__this->fields)._colors;
      if (pSVar26 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar26,
                   (System_Collections_Generic_IEnumerable_T__o *)(pGVar19->fields).Colors,
                   (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
        pTVar9 = (__this->fields)._input;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar17 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar17) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                    (__this,(pGVar19->fields).Text,(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
                  (__this,(MethodInfo *)0x0);
        goto label_181e02023;
      }
    }
    goto label_181e026c0;
  }
  piVar1 = &(pSVar26->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar8 = (pSVar26->fields)._items;
  if (pSVar8 == (System_String_array *)0x0) goto label_181e026c0;
  uVar6 = (pSVar26->fields)._size;
  if (uVar6 < (uint)pSVar8->max_length) {
    (pSVar26->fields)._size = uVar6 + 1;
    if ((uint)pSVar8->max_length <= uVar6) goto label_181e026c6;
    pSVar8->m_Items[(int)uVar6] = pSVar21;
    Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar6,pSVar21);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar26,(Il2CppObject *)pSVar21,
               (MethodInfo_93DD50 *)pMVar15->klass->rgctx_data[0xe].method);
  }
  goto label_181e01f00;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RefreshTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e02700

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344beb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344beb = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._text;
    if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar1,(System_Type_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyDocument
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, bool updateInput, const MethodInfo* method);
// 0x181e001e0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,bool updateInput,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_String_o *value;
  System_Collections_Generic_List_string__o *pSVar2;
  TMPro_TMP_InputField_o *x;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344bec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bec = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_1e03400(document,(MethodInfo *)0x0);
  if (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    value = (document->fields).Text;
    (__this->fields)._lastText = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText,value);
    pSVar2 = (__this->fields)._colors;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar2->fields)._size;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields)._colors;
      if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar2,
                   (System_Collections_Generic_IEnumerable_T__o *)(document->fields).Colors,
                   (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
        if (updateInput) {
          x = (__this->fields)._input;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                      (__this,(document->fields).Text,(MethodInfo *)0x0);
          }
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
                  (__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CurrentDocument
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e01500

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_string__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this_01;
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_184344bed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    Il2CppMethodInitialized_184344bed = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document)
  ;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(__this_01,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._lastText;
  if ((__this->fields)._lastText == (System_String_o *)0x0) {
    ppSVar1 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    value = *ppSVar1;
    (__this_01->fields).Text = value;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Text,value);
    __this_00 = (__this_01->fields).Colors;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._colors,
                 (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPendingImportColor
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x181e00450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0055d: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  bool bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  int index;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar4;
  int iVar5;
  System_String_o **ppSVar6;
  
  if (Il2CppMethodInitialized_184344bee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    Il2CppMethodInitialized_184344bee = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._pendingImportColor,(MethodInfo *)0x0);
  if (((!bVar1) && (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)) &&
     (bVar1 = System_String__IsNullOrEmpty((document->fields).Text,(MethodInfo *)0x0), !bVar1)) {
    ppSVar6 = &(__this->fields)._lastText;
    if ((__this->fields)._lastText == (System_String_o *)0x0) {
      ppSVar6 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    pGVar4 = &document->fields;
    if ((document->fields).Text == (System_String_o *)0x0) {
      pGVar4 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields **)(g_data_184354e50 + 0xb8)
      ;
    }
    __this_00 = pGVar4->Text;
    if ((__this_00 == (System_String_o *)0x0) || (__this_01 = *ppSVar6, __this_01 == (System_String_o *)0x0))
    {
label_181e00603:
      ThrowNullReferenceException();
    }
    if ((__this_01->fields)._stringLength < (__this_00->fields)._stringLength) {
      for (index = 0;
          (index < (__this_01->fields)._stringLength && (index < (__this_00->fields)._stringLength));
          index = index + 1) {
        uVar2 = System_String__get_Chars(__this_01,index,(MethodInfo *)0x0);
        uVar3 = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
        if (uVar2 != uVar3) break;
      }
      for (iVar5 = 0;
          (iVar5 < (__this_01->fields)._stringLength - index &&
          (iVar5 < (__this_00->fields)._stringLength - index)); iVar5 = iVar5 + 1) {
        uVar2 = System_String__get_Chars
                          (__this_01,((__this_01->fields)._stringLength - iVar5) + -1,(MethodInfo *)0x0);
        uVar3 = System_String__get_Chars
                          (__this_00,((__this_00->fields)._stringLength - iVar5) + -1,(MethodInfo *)0x0);
        if (uVar2 != uVar3) break;
      }
      iVar5 = (__this_00->fields)._stringLength - iVar5;
      if (index < iVar5) {
        while (__this_02 = (document->fields).Colors,
              __this_02 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((__this_02->fields)._size <= index) {
            return true;
          }
          System_Collections_Generic_List_object___set_Item
                    ((System_Collections_Generic_List_object__o *)__this_02,index,
                     (Il2CppObject *)(__this->fields)._pendingImportColor,
                     (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
          index = index + 1;
          if (iVar5 <= index) {
            return true;
          }
        }
        goto label_181e00603;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181e02db0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344bef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bef = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._input;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim (System_String_o* value, const MethodInfo* method);
// 0x181e03570

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((value == (System_String_o *)0x0) &&
     (value = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), value == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (0x1f < (value->fields)._stringLength) {
    pSVar1 = System_String__Substring_1972740(value,0,0x1f,(MethodInfo *)0x0);
    return pSVar1;
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x181e03400

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_1e03400
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_184344bf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bf0 = '\x01';
  }
  if (document == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return;
  }
  pGVar7 = &document->fields;
  if ((document->fields).Text == (System_String_o *)0x0) {
    pGVar7 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields **)(g_data_184354e50 + 0xb8);
  }
  pSVar8 = pGVar7->Text;
  if (pSVar8 != (System_String_o *)0x0) {
    if (0x1f < (pSVar8->fields)._stringLength) {
      pSVar8 = System_String__Substring_1972740(pSVar8,0,0x1f,(MethodInfo *)0x0);
    }
    (document->fields).Text = pSVar8;
    Il2CppCodeGenWriteBarrier(&(document->fields).Text,pSVar8);
    while ((pSVar3 = (document->fields).Colors, pSVar3 != (System_Collections_Generic_List_string__o *)0x0 &&
           (pSVar8 = (document->fields).Text, pSVar8 != (System_String_o *)0x0))) {
      if ((pSVar3->fields)._size <= (pSVar8->fields)._stringLength) goto label_181e034e0;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar3,(pSVar3->fields)._size + -1,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    }
  }
label_181e03565:
  ThrowNullReferenceException();
label_181e034e0:
  pSVar8 = "FFFFFF";
  pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar3 = (document->fields).Colors;
  if ((pSVar3 == (System_Collections_Generic_List_string__o *)0x0) ||
     (pSVar4 = (document->fields).Text, pSVar4 == (System_String_o *)0x0)) goto label_181e03565;
  if ((pSVar4->fields)._stringLength <= (pSVar3->fields)._size) {
    return;
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar5 = (pSVar3->fields)._items;
  if (pSVar5 == (System_String_array *)0x0) goto label_181e03565;
  uVar2 = (pSVar3->fields)._size;
  if (uVar2 < (uint)pSVar5->max_length) {
    (pSVar3->fields)._size = uVar2 + 1;
    if ((uint)pSVar5->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    pSVar5->m_Items[(int)uVar2] = pSVar8;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,pSVar8);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar8,
               (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
  }
  goto label_181e034e0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* __, int32_t start, int32_t end, const MethodInfo* method);
// 0x181e026e0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *__,
               int32_t start,int32_t end,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
            (__this,start,end,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x181e02ec0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,int32_t start,
               int32_t end,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *pSVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (Il2CppMethodInitialized_184344bf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bf1 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pTVar1 = (__this->fields)._input;
    if ((pTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
       (pSVar2 = (pTVar1->fields).m_Text, pSVar2 == (System_String_o *)0x0)) {
label_181e02fb5:
      ThrowNullReferenceException();
    }
    if (((start < 0) || (iVar5 = (pSVar2->fields)._stringLength, start <= iVar5)) &&
       (iVar5 = start, start < 0)) {
      iVar5 = 0;
    }
    if (((end < 0) ||
        (iVar6 = (((((__this->fields)._input)->fields).m_Text)->fields)._stringLength, end <= iVar6)) &&
       (iVar6 = end, end < 0)) {
      iVar6 = 0;
    }
    if (iVar5 == iVar6) {
      pTVar1 = (__this->fields)._input;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_181e02fb5;
      if ((pTVar1->fields).m_AllowInput != false) {
        (__this->fields)._selectionStart = -1;
        (__this->fields)._selectionEnd = -1;
        return;
      }
    }
    else {
      iVar4 = iVar5;
      if (iVar6 <= iVar5) {
        iVar4 = iVar6;
      }
      (__this->fields)._selectionStart = iVar4;
      if (iVar5 < iVar6) {
        iVar5 = iVar6;
      }
      (__this->fields)._selectionEnd = iVar5;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CapturePreviewColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e00fc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0106f: nop 

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *item;
  int iVar7;
  
  if (Il2CppMethodInitialized_184344bf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_184344bf2 = '\x01';
  }
  pSVar4 = (__this->fields)._previewColors;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar4->fields)._size;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields)._colors;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar2 = (__this->fields)._selectionEnd;
      iVar7 = (pSVar4->fields)._size;
      if (iVar7 <= iVar2) {
        iVar2 = iVar7;
      }
      iVar7 = (__this->fields)._selectionStart;
      while( true ) {
        if (iVar2 <= iVar7) {
          (__this->fields)._hasPreview = true;
          return;
        }
        pSVar4 = (__this->fields)._colors;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) break;
        __this_00 = (__this->fields)._previewColors;
        item = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,iVar7,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 == (System_String_array *)0x0) break;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pSVar5->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestorePreviewColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e02790
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e02816: mov edi, ecx
// asm:   0x181e02818: cmp ecx, ebp
// asm:   0x181e0281c: nop dword ptr [rax]
// asm:   0x181e028cc: mov rsi, qword ptr [rsp + 0x38]
// asm:   0x181e028d1: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x181e028d6: mov rdi, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool bVar5;
  System_String_o *value;
  int iVar6;
  int index;
  
  if (Il2CppMethodInitialized_184344bf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    Il2CppMethodInitialized_184344bf3 = '\x01';
  }
  if ((__this->fields)._hasPreview != false) {
    pSVar2 = (__this->fields)._previewColors;
    if ((pSVar2 == (System_Collections_Generic_List_string__o *)0x0) ||
       (pSVar3 = (__this->fields)._colors, pSVar3 == (System_Collections_Generic_List_string__o *)0x0)) {
label_181e028e1:
      ThrowNullReferenceException();
    }
    index = (__this->fields)._selectionStart;
    iVar6 = (pSVar2->fields)._size + index;
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 <= iVar6) {
      iVar6 = iVar1;
    }
    for (; index < iVar6; index = index + 1) {
      pSVar2 = (__this->fields)._previewColors;
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e028e1;
      pSVar3 = (__this->fields)._colors;
      value = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         index - (__this->fields)._selectionStart,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e028e1;
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar3,index,(Il2CppObject *)value,
                 (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
    }
    if (Il2CppMethodInitialized_184344beb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184344beb = '\x01';
    }
    pTVar4 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pTVar4 = (__this->fields)._text;
      if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_181e028e1;
      (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar4,(System_Type_o *)0x0,(MethodInfo *)0x0)
      ;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x181e008a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e00a1e: nop 
// asm:   0x181e00b2d: mov rbp, qword ptr [rsp + 0x330]

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  int iVar1;
  PatreonEffects_NameEffectController_o *x;
  TMPro_TMP_CharacterInfo_array *pTVar2;
  undefined8 uVar3;
  TMPro_TMP_MeshInfo_array *pTVar4;
  UnityEngine_Color32_array *pUVar5;
  TMPro_TMP_TextElement_o *pTVar6;
  UnityEngine_TextCore_Glyph_o *pUVar7;
  TMPro_TMP_FontAsset_o *pTVar8;
  UnityEngine_Material_o *pUVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TMPro_TMP_CharacterInfo_o *pTVar14;
  undefined8 *puVar15;
  bool bVar16;
  UnityEngine_Color32_o UVar17;
  TMPro_TMP_CharacterInfo_o *pTVar18;
  TMPro_TMP_TextInfo_o *pTVar19;
  undefined8 *puVar20;
  uint index;
  longlong lVar21;
  undefined8 local_308 [6];
  uint local_2d8;
  uint uStack_2c4;
  undefined8 local_188 [46];
  char local_18;
  
  if (Il2CppMethodInitialized_184344bf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bf4 = '\x01';
  }
  x = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar16 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar16) {
    if ((textInfo == (TMPro_TMP_TextInfo_o *)0x0) ||
       (pTVar19 = (TMPro_TMP_TextInfo_o *)(__this->fields)._colors, pTVar19 == (TMPro_TMP_TextInfo_o *)0x0)) {
label_181e00b4a:
      ThrowNullReferenceException();
    }
    if ((textInfo->fields).characterCount < (pTVar19->fields).characterCount) {
      pTVar19 = textInfo;
    }
    iVar1 = (pTVar19->fields).characterCount;
    index = 0;
    if (0 < iVar1) {
      do {
        pTVar2 = (textInfo->fields).characterInfo;
        if (pTVar2 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_181e00b4a;
        if ((uint)pTVar2->max_length <= index) goto label_181e00b50;
        lVar21 = 2;
        pTVar14 = pTVar2->m_Items + index;
        puVar15 = local_308;
        do {
          puVar20 = puVar15;
          pTVar18 = pTVar14;
          uVar3 = *(undefined8 *)&(pTVar18->fields).index;
          pTVar6 = (pTVar18->fields).textElement;
          pUVar7 = (pTVar18->fields).alternativeGlyph;
          pTVar14 = (TMPro_TMP_CharacterInfo_o *)((longlong)&(pTVar18->fields).vertex_TL.fields.uv.fields + 4)
          ;
          *puVar20 = *(undefined8 *)&pTVar18->fields;
          puVar20[1] = uVar3;
          pTVar8 = (pTVar18->fields).fontAsset;
          pUVar9 = (pTVar18->fields).material;
          puVar20[2] = pTVar6;
          puVar20[3] = pUVar7;
          uVar3 = *(undefined8 *)&(pTVar18->fields).materialReferenceIndex;
          uVar10 = *(undefined8 *)&(pTVar18->fields).pointSize;
          puVar20[4] = pTVar8;
          puVar20[5] = pUVar9;
          uVar11 = *(undefined8 *)&(pTVar18->fields).pageNumber;
          uVar12 = *(undefined8 *)&(pTVar18->fields).vertex_BL.fields.position.fields;
          puVar20[6] = uVar3;
          puVar20[7] = uVar10;
          uVar3 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.position.fields + 8);
          uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.uv.fields + 4);
          puVar20[8] = uVar11;
          puVar20[9] = uVar12;
          uVar11 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.uv.fields + 0xc);
          uVar12 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.uv2.fields + 4);
          puVar20[10] = uVar3;
          puVar20[0xb] = uVar10;
          uVar3 = *(undefined8 *)&(pTVar18->fields).vertex_TL.fields.position.fields;
          uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TL.fields.position.fields + 8);
          puVar20[0xc] = uVar11;
          puVar20[0xd] = uVar12;
          puVar20[0xe] = uVar3;
          puVar20[0xf] = uVar10;
          lVar21 = lVar21 + -1;
          puVar15 = puVar20 + 0x10;
        } while (lVar21 != 0);
        uVar3 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TL.fields.uv.fields + 0xc);
        uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TL.fields.uv2.fields + 4);
        uVar11 = *(undefined8 *)&(pTVar18->fields).vertex_TR.fields.position.fields;
        puVar20[0x10] = *(undefined8 *)pTVar14;
        puVar20[0x11] = uVar3;
        uVar3 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.position.fields + 8);
        uVar12 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.uv.fields + 4);
        puVar20[0x12] = uVar10;
        puVar20[0x13] = uVar11;
        uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.uv.fields + 0xc);
        uVar11 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.uv2.fields + 4);
        puVar20[0x14] = uVar3;
        puVar20[0x15] = uVar12;
        uVar3 = *(undefined8 *)&(pTVar18->fields).vertex_BR.fields.position.fields;
        uVar12 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.position.fields + 8);
        puVar20[0x16] = uVar10;
        puVar20[0x17] = uVar11;
        uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.uv.fields + 4);
        uVar11 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.uv.fields + 0xc);
        puVar20[0x18] = uVar3;
        puVar20[0x19] = uVar12;
        uVar12 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.uv2.fields + 4);
        uVar13 = *(undefined8 *)&(pTVar18->fields).topLeft.fields;
        uVar3 = *(undefined8 *)&(pTVar18->fields).topLeft.fields.z;
        puVar20[0x1a] = uVar10;
        puVar20[0x1b] = uVar11;
        puVar20[0x1c] = uVar12;
        puVar20[0x1d] = uVar13;
        puVar20[0x1e] = uVar3;
        lVar21 = 2;
        pTVar14 = pTVar2->m_Items + index;
        puVar15 = local_188;
        do {
          puVar20 = puVar15;
          pTVar18 = pTVar14;
          uVar3 = *(undefined8 *)&(pTVar18->fields).index;
          pTVar6 = (pTVar18->fields).textElement;
          pUVar7 = (pTVar18->fields).alternativeGlyph;
          pTVar14 = (TMPro_TMP_CharacterInfo_o *)((longlong)&(pTVar18->fields).vertex_TL.fields.uv.fields + 4)
          ;
          *puVar20 = *(undefined8 *)&pTVar18->fields;
          puVar20[1] = uVar3;
          pTVar8 = (pTVar18->fields).fontAsset;
          pUVar9 = (pTVar18->fields).material;
          puVar20[2] = pTVar6;
          puVar20[3] = pUVar7;
          uVar3 = *(undefined8 *)&(pTVar18->fields).materialReferenceIndex;
          uVar10 = *(undefined8 *)&(pTVar18->fields).pointSize;
          puVar20[4] = pTVar8;
          puVar20[5] = pUVar9;
          uVar11 = *(undefined8 *)&(pTVar18->fields).pageNumber;
          uVar12 = *(undefined8 *)&(pTVar18->fields).vertex_BL.fields.position.fields;
          puVar20[6] = uVar3;
          puVar20[7] = uVar10;
          uVar3 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.position.fields + 8);
          uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.uv.fields + 4);
          puVar20[8] = uVar11;
          puVar20[9] = uVar12;
          uVar11 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.uv.fields + 0xc);
          uVar12 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BL.fields.uv2.fields + 4);
          puVar20[10] = uVar3;
          puVar20[0xb] = uVar10;
          uVar3 = *(undefined8 *)&(pTVar18->fields).vertex_TL.fields.position.fields;
          uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TL.fields.position.fields + 8);
          puVar20[0xc] = uVar11;
          puVar20[0xd] = uVar12;
          puVar20[0xe] = uVar3;
          puVar20[0xf] = uVar10;
          lVar21 = lVar21 + -1;
          puVar15 = puVar20 + 0x10;
        } while (lVar21 != 0);
        uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TL.fields.uv.fields + 0xc);
        uVar3 = *(undefined8 *)&(pTVar18->fields).topLeft.fields.z;
        uVar11 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TL.fields.uv2.fields + 4);
        uVar12 = *(undefined8 *)&(pTVar18->fields).vertex_TR.fields.position.fields;
        puVar20[0x10] = *(undefined8 *)pTVar14;
        puVar20[0x11] = uVar10;
        uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.position.fields + 8);
        uVar13 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.uv.fields + 4);
        puVar20[0x12] = uVar11;
        puVar20[0x13] = uVar12;
        uVar11 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.uv.fields + 0xc);
        uVar12 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_TR.fields.uv2.fields + 4);
        puVar20[0x14] = uVar10;
        puVar20[0x15] = uVar13;
        uVar10 = *(undefined8 *)&(pTVar18->fields).vertex_BR.fields.position.fields;
        uVar13 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.position.fields + 8);
        puVar20[0x16] = uVar11;
        puVar20[0x17] = uVar12;
        uVar11 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.uv.fields + 4);
        uVar12 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.uv.fields + 0xc);
        puVar20[0x18] = uVar10;
        puVar20[0x19] = uVar13;
        uVar10 = *(undefined8 *)((longlong)&(pTVar18->fields).vertex_BR.fields.uv2.fields + 4);
        uVar13 = *(undefined8 *)&(pTVar18->fields).topLeft.fields;
        puVar20[0x1a] = uVar11;
        puVar20[0x1b] = uVar12;
        puVar20[0x1c] = uVar10;
        puVar20[0x1d] = uVar13;
        puVar20[0x1e] = uVar3;
        if (local_18 != '\0') {
          UVar17 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
                             (__this,index,(MethodInfo *)0x0);
          pTVar4 = (textInfo->fields).meshInfo;
          if (pTVar4 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_181e00b4a;
          if ((uint)pTVar4->max_length <= local_2d8) {
label_181e00b50:
            ThrowIndexOutOfRangeException();
          }
          pUVar5 = pTVar4->m_Items[(int)local_2d8].fields.colors32;
          if (pUVar5 == (UnityEngine_Color32_array *)0x0) goto label_181e00b4a;
          lVar21 = (longlong)(int)uStack_2c4;
          if ((uint)pUVar5->max_length <= uStack_2c4) goto label_181e00b50;
          pUVar5->m_Items[lVar21].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
          if ((uint)pUVar5->max_length <= uStack_2c4 + 1) goto label_181e00b50;
          pUVar5->m_Items[lVar21 + 1].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
          if ((uint)pUVar5->max_length <= uStack_2c4 + 2) goto label_181e00b50;
          pUVar5->m_Items[lVar21 + 2].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
          if ((uint)pUVar5->max_length <= uStack_2c4 + 3) goto label_181e00b50;
          pUVar5->m_Items[lVar21 + 3].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
        }
        index = index + 1;
      } while ((int)index < iVar1);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorFor
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t index, const MethodInfo* method);
// 0x181e01390
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e01422: mov rax, qword ptr [rip + 0x22a91e7]  ; "#FFFFFF"

UnityEngine_Color32_o
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,int32_t index,
          MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  bool bVar1;
  UnityEngine_Color32_Fields UVar2;
  System_String_o *pSVar3;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184344bf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_184344bf5 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  pSVar3 = "#FFFFFF";
  if (-1 < index) {
    __this_00 = (__this->fields)._colors;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (index < (__this_00->fields)._size) {
      pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar3 = System_String__Concat_1969e50("#",pSVar3,(MethodInfo *)0x0);
    }
  }
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
  if (bVar1) {
    local_18.fields.r = local_28.r;
    local_18.fields.g = local_28.g;
    local_18.fields.b = local_28.b;
    local_18.fields.a = local_28.a;
  }
  else {
    local_18.fields.r = 1.0;
    local_18.fields.g = 1.0;
    local_18.fields.b = 1.0;
    local_18.fields.a = 1.0;
  }
  UVar2._overlap_0 = (_union_53103)UnityEngine_Color32__op_Implicit(&local_18,(MethodInfo *)0x0);
  return (UnityEngine_Color32_Fields)(UnityEngine_Color32_Fields)UVar2._overlap_0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$StoreEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x181e031e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0331f: nop 

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *type,
               System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  int32_t iVar5;
  void *pvVar6;
  System_String_array *pSVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *value;
  ulonglong uVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184344bf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184344bf6 = '\x01';
  }
  (__this->fields)._previewEffectType = type;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectType,type);
  if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
    (__this->fields)._previewEffectColors = (System_String_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectColors,(void *)0x0);
    return;
  }
  pvVar6 = InterfaceInvoker0_Invoke
                     (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                      (Il2CppObject *)colors);
  pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pvVar6);
  (__this->fields)._previewEffectColors = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectColors,pSVar7);
  uVar10 = 0;
  do {
    pSVar2 = colors->klass;
    uVar1 = (pSVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      uVar4 = 0;
      do {
        if (pIVar3[uVar4].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string) {
          pVVar8 = pSVar2->vtable + pIVar3[uVar4].offset;
          goto label_181e032e6;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)colors,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_181e032e6:
    iVar5 = (*pVVar8->methodPtr)((Il2CppObject *)colors,pVVar8->method);
    if (iVar5 <= (int)uVar10) {
      return;
    }
    pSVar2 = colors->klass;
    pSVar7 = (__this->fields)._previewEffectColors;
    uVar1 = (pSVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      uVar9 = 0;
      do {
        if (pIVar3[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string) {
          pVVar8 = pSVar2->vtable + pIVar3[uVar9].offset;
          goto label_181e03342;
        }
        uVar4 = (short)uVar9 + 1;
        uVar9 = (ulonglong)uVar4;
      } while (uVar4 < uVar1);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)colors,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string
                        ,0);
label_181e03342:
    value = (*pVVar8->methodPtr)((Il2CppObject *)colors,uVar10,pVVar8->method);
    if (pSVar7 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar7->max_length <= uVar10) {
      ThrowIndexOutOfRangeException();
    }
    pSVar7->m_Items[(int)uVar10] = value;
    Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar10,value);
    uVar10 = uVar10 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyStoredEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e006c0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *settings;
  int32_t local_res8 [2];
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bf7 = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  local_res8[0] = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._previewEffectType,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  bVar2 = PatreonEffects_NameEffectPresets__TryResolve
                    ((__this->fields)._previewEffectType,local_res8,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pPVar3 = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._text;
    if ((pTVar1 == (TMPro_TMP_Text_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0)
       , __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_181e00895;
    pPVar3 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    (__this->fields)._effectPreview = pPVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._effectPreview,pPVar3);
  }
  pPVar3 = (__this->fields)._effectPreview;
  if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(pPVar3,(MethodInfo *)0x0);
    settings = PatreonEffects_NameEffectPresets__GetPreset(local_res8[0],(MethodInfo *)0x0);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,0,
                 &(settings->fields).gradientA,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,1,
                 &(settings->fields).gradientB,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,2,
                 &(settings->fields).gradientC,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,3,
                 &(settings->fields).gradientD,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        local_18.r = 1.0;
        local_18.g = 1.0;
        local_18.b = 1.0;
        local_18.a = 1.0;
        (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                  (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method);
        pPVar3 = (__this->fields)._effectPreview;
        if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(pPVar3,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181e00895:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPreviewColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor (System_Collections_Generic_IList_string__o* colors, int32_t index, UnityEngine_Color_o* target, const MethodInfo* method);
// 0x181e00610

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
               (System_Collections_Generic_IList_string__o *colors,int32_t index,UnityEngine_Color_o *target,
               MethodInfo *method)

{
  bool bVar1;
  void *pvVar2;
  System_String_o *htmlString;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    Il2CppMethodInitialized_184344bf8 = '\x01';
  }
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
    pvVar2 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                        (Il2CppObject *)colors);
    if (index < (int)pvVar2) {
      htmlString = (System_String_o *)
                   il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,colors,index);
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        (htmlString,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      if (bVar1) {
        (target->fields).r = local_18.r;
        (target->fields).g = local_18.g;
        (target->fields).b = local_18.b;
        (target->fields).a = local_18.a;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestoreSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e028f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344bf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bf9 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._input;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__set_selectionStringAnchorPosition
              (pTVar1,(__this->fields)._selectionStart,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_selectionStringFocusPosition
                (pTVar1,(__this->fields)._selectionEnd,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e01240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e012e0: jmp 0x181e0131b

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  bool bVar5;
  int32_t iVar6;
  TMPro_TMP_InputField_o *pTVar7;
  int value;
  
  if (Il2CppMethodInitialized_184344bfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bfa = '\x01';
  }
  pTVar7 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pTVar7 = (__this->fields)._input;
  if (pTVar7 == (TMPro_TMP_InputField_o *)0x0) goto label_181e0138a;
  if ((__this->fields)._selectionEnd < 0) {
    iVar6 = TMPro_TMP_InputField__get_selectionFocusPosition(pTVar7,(MethodInfo *)0x0);
    pTVar7 = (__this->fields)._input;
    if ((pTVar7 == (TMPro_TMP_InputField_o *)0x0) ||
       (pSVar3 = (pTVar7->fields).m_Text, pSVar3 == (System_String_o *)0x0)) goto label_181e0138a;
    if (iVar6 < 0) {
      value = 0;
    }
    else {
      value = (pSVar3->fields)._stringLength;
      if (iVar6 <= value) {
        value = iVar6;
      }
    }
    pTVar7 = (__this->fields)._input;
  }
  else {
    pSVar3 = (pTVar7->fields).m_Text;
    if (pSVar3 == (System_String_o *)0x0) goto label_181e0138a;
    value = (pSVar3->fields)._stringLength;
    iVar2 = (__this->fields)._selectionEnd;
    if (iVar2 <= value) {
      value = iVar2;
    }
    if (pTVar7 == (TMPro_TMP_InputField_o *)0x0) goto label_181e0138a;
  }
  TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar7,value,(MethodInfo *)0x0);
  pTVar7 = (__this->fields)._input;
  if (pTVar7 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar7,value,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._previewColors;
    (__this->fields)._selectionStart = -1;
    (__this->fields)._selectionEnd = -1;
    (__this->fields)._openedStart = -1;
    (__this->fields)._openedEnd = -1;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar6 = (pSVar4->fields)._size;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      if (0 < iVar6) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar6,(MethodInfo *)0x0);
      }
      (__this->fields)._hasPreview = false;
      return;
    }
  }
label_181e0138a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_68B400* method);
// 0x18068b400
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068b506: mov rax, rdi
// asm:   0x18068b509: jmp 0x18068b50d

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_(UnityEngine_Transform_o* root, System_String_o* id, MethodInfo_68B400* method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar3;
  
  if ((method->rgctx_data == (MethodInfo_68B400_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_68B400_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar2 == (System_Object_array *)0x0)) {
label_18068b528:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) goto label_18068b528;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
        if (bVar1) {
          return (Il2CppObject *)x;
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x181e03830

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344bfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184344bfb = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._colors = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colors,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._previewColors = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewColors,pSVar1);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._lastText = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText,value);
  (__this->fields)._selectionStart = -1;
  (__this->fields)._selectionEnd = -1;
  (__this->fields)._openedStart = -1;
  (__this->fields)._openedEnd = -1;
  (__this->fields)._colorsEnabled = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


