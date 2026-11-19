// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditorRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* inputId, System_String_o* value, System_String_o* pickerId, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x58eba30
// fidelity: the machine code has facts this C leaves out:
//   tail call to Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *inputId
               ,System_String_o *value,System_String_o *pickerId,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *colorsEnabledKey,
               bool colorsEnabled,System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Action_object__o *__this_01;
  MethodInfo *document;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *__this_02;
  
  pMVar5 = (MethodInfo *)pickerId;
  if (Il2CppMethodInitialized_07545553 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    Il2CppMethodInitialized_07545553 = '\x01';
  }
  (__this->fields)._inputId = inputId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputId);
  (__this->fields)._pickerId = pickerId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pickerId);
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
  (__this->fields)._colorsEnabledKey = colorsEnabledKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colorsEnabledKey);
  (__this->fields)._colorsEnabled = colorsEnabled;
  (__this->fields)._imported = imported;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._imported);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar4 = PatreonEffects_NameFontCatalog__Normalize(previewFont,(MethodInfo *)0x0);
  (__this->fields)._previewFont = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewFont);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this,previewEffectType,previewEffectColors,pMVar5);
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_01 = (System_Action_object__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged
               ,(MethodInfo_4A81BE0 *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._initialValue = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._initialValue);
  if ((__this->fields)._attached == false) {
    return;
  }
  document = (MethodInfo *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((__this->fields)._initialValue,(MethodInfo *)value);
  pMVar5 = document;
  if (Il2CppMethodInitialized_07545560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545560 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_57ed910
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)document,pMVar5);
  if (document != (MethodInfo *)0x0) {
    (__this->fields)._lastText =
         ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *)&document->invoker_method)->
         Text;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText);
    __this_02 = (__this->fields)._colors;
    if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_02->fields)._size;
      (__this_02->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(__this_02->fields)._items,0,length,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._colors;
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ec01c;
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Collections_Generic_IEnumerable_T__o *)document->name,
                 (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      x = (__this->fields)._input;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                  (__this,((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *)
                          &document->invoker_method)->Text,method_00);
      }
      if (Il2CppMethodInitialized_0754555f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754555f = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      pTVar2 = (__this->fields)._text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
        return;
      }
    }
  }
label_058ec01c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSerializedValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58ebe60

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  MethodInfo *in_RCX;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._initialValue = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._initialValue);
  if ((__this->fields)._attached == false) {
    return;
  }
  document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((__this->fields)._initialValue,(MethodInfo *)value);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,document,true,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec030

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Attach
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec040

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o **targetAddress;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_TextSelectionEvent_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  UnityEngine_Transform_o *root;
  TMPro_TMP_InputField_o *pTVar4;
  UnityEngine_Events_UnityAction_T0__o *__this_01;
  UnityEngine_Events_UnityAction_T0__T1__T2__o *pUVar5;
  System_Action_TMP_TextInfo__o *__this_02;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07545554 == '\0') {
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
    Il2CppMethodInitialized_07545554 = '\x01';
  }
  if ((__this->fields)._attached == false) {
    root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_
                       (root,(__this->fields)._inputId,
                        (MethodInfo_3488020 *)
                        MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_Find_TMP_InputField
                       );
    targetAddress = &(__this->fields)._input;
    (__this->fields)._input = pTVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pTVar4 = (__this->fields)._input;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pTVar4 = *targetAddress;
      if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
        (pTVar4->fields).m_OnFocusSelectAll = false;
        __this_00 = (pTVar4->fields).m_OnValueChanged;
        __this_01 = (UnityEngine_Events_UnityAction_T0__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged,
                   (MethodInfo_4311A10 *)0x0);
        if (__this_00 != (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent_object___AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,__this_01,
                     (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          if (*targetAddress != (TMPro_TMP_InputField_o *)0x0) {
            pTVar1 = ((*targetAddress)->fields).m_OnTextSelection;
            pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
            UnityEngine_Events_UnityAction_object__int__int____ctor
                      (pUVar5,(Il2CppObject *)__this,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection,
                       (MethodInfo_4312120 *)0x0);
            if (pTVar1 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent_object__int__int___AddListener
                        ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar1,pUVar5,
                         (MethodInfo_431A780 *)
                         MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_AddListener);
              if (*targetAddress != (TMPro_TMP_InputField_o *)0x0) {
                pTVar1 = ((*targetAddress)->fields).m_OnEndTextSelection;
                pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
                method_00 = (MethodInfo *)0x0;
                UnityEngine_Events_UnityAction_object__int__int____ctor
                          (pUVar5,(Il2CppObject *)__this,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection
                           ,(MethodInfo_4312120 *)0x0);
                if (pTVar1 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent_object__int__int___AddListener
                            ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar1,pUVar5,
                             (MethodInfo_431A780 *)
                             MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_AddListener);
                  if (*targetAddress != (TMPro_TMP_InputField_o *)0x0) {
                    (__this->fields)._text = ((*targetAddress)->fields).m_TextComponent;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
                    pTVar2 = (__this->fields)._text;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar3 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    pMVar6 = extraout_RDX;
                    if (bVar3) {
                      pTVar2 = (__this->fields)._text;
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
                      method_00 = (MethodInfo *)0x0;
                      System_Action_object____ctor
                                ((System_Action_object__o *)__this_02,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors
                                 ,(MethodInfo_4A81BE0 *)0x0);
                      if (pTVar2 == (TMPro_TMP_Text_o *)0x0) goto label_058ec331;
                      (*(pTVar2->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                                (pTVar2,__this_02,(pTVar2->klass->vtable)._78_add_OnPreRenderText.method);
                      pMVar6 = extraout_RDX_00;
                    }
                    (__this->fields)._attached = true;
                    method_01 = (MethodInfo *)(__this->fields)._previewFont;
                    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
                              (__this,(System_String_o *)method_01,pMVar6);
                    pMVar6 = (MethodInfo *)
                             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                                       ((__this->fields)._initialValue,method_01);
                    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                              (__this,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)pMVar6
                               ,true,method_00);
                    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
                              (__this,pMVar6);
                    return;
                  }
                }
              }
            }
          }
        }
      }
label_058ec331:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* font, const MethodInfo* method);
// 0x58e5ec0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e5fa4: test bpl, bpl
// asm:   0x58e5fa7: je 0x58e6049
// asm:   0x58e5fad: cmp byte ptr [rip + 0x1c5f5ab], 0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *font,
               MethodInfo *method)

{
  uint32_t uVar1;
  PatreonEffects_NameEffectController_o *x;
  TMPro_TMP_InputField_o *pTVar2;
  TMPro_TMP_Text_o *pTVar3;
  bool bVar4;
  bool bVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_07545555 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545555 = '\x01';
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar6 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
  (__this->fields)._previewFont = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewFont);
  x = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar5 = true;
  if (bVar4) {
    pMVar7 = (MethodInfo *)0x0;
    bVar4 = System_String__IsNullOrEmpty((__this->fields)._previewEffectType,(MethodInfo *)0x0);
    if (!bVar4) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview(__this,pMVar7);
      bVar5 = false;
    }
  }
  pTVar2 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar2 = (__this->fields)._input;
    pMVar7 = (MethodInfo *)(__this->fields)._previewFont;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    PatreonEffects_NameFontCatalog__Apply_58c81e0(pTVar2,(System_String_o *)pMVar7,(MethodInfo *)0x0);
  }
  if (!bVar5) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview(__this,pMVar7);
  }
  if (Il2CppMethodInitialized_0754555f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754555f = '\x01';
    pTVar3 = (__this->fields)._text;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pTVar3 = (__this->fields)._text;
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pTVar3 = (__this->fields)._text;
    if (pTVar3 == (TMPro_TMP_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (pTVar3,false,false,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* hex, bool clearSelection, const MethodInfo* method);
// 0x58e48b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e4907: jmp 0x58e4a54
// asm:   0x58e499d: lea r13, [rip + 0x19b2074]  ; MethodInfo_System_Collections_Generic_List_string_set_Item
// asm:   0x58e49a4: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *hex,
               bool clearSelection,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar2;
  TMPro_TMP_Text_o *pTVar3;
  bool bVar4;
  System_String_o *value;
  int iVar5;
  int iVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_07545556 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    Il2CppMethodInitialized_07545556 = '\x01';
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if (bVar4) {
    if ((__this->fields)._colorsEnabled == false) {
      return;
    }
  }
  else {
    __this_00 = (__this->fields)._state;
    if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    pMVar7 = (MethodInfo *)(__this->fields)._colorsEnabledKey;
    bVar4 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      (__this_00,(System_String_o *)pMVar7,(__this->fields)._colorsEnabled,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
  }
  iVar6 = (__this->fields)._selectionStart;
  if ((iVar6 < 0) || ((__this->fields)._selectionEnd <= iVar6)) {
    return;
  }
  if ((__this->fields)._hasPreview == false) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors(__this,pMVar7);
  }
  value = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(hex,pMVar7);
  pSVar2 = (__this->fields)._colors;
  if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) {
label_058e4a72:
    ThrowNullReferenceException();
  }
  iVar6 = (__this->fields)._selectionStart;
  iVar1 = (__this->fields)._selectionEnd;
  iVar5 = (pSVar2->fields)._size;
  if (iVar1 < iVar5) {
    iVar5 = iVar1;
  }
  if (iVar6 < iVar5) {
    do {
      pSVar2 = (__this->fields)._colors;
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_058e4a72;
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar2,iVar6,(Il2CppObject *)value,
                 (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  if (Il2CppMethodInitialized_0754555f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754555f = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar3 = (__this->fields)._text;
    if (pTVar3 == (TMPro_TMP_Text_o *)0x0) goto label_058e4a72;
    pMVar7 = (MethodInfo *)0x0;
    (*(pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (pTVar3,false,false,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method);
  }
  if (clearSelection) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,pMVar7);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection(__this,pMVar7);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CancelPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58e4890

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors(__this,method);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Serialized
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58e53b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545557 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545557 = '\x01';
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
    ppSVar3 = &(pTVar1->fields).m_Text;
  }
  else {
    ppSVar3 = &(__this->fields)._lastText;
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     (*ppSVar3,(System_Collections_Generic_IList_string__o *)(__this->fields)._colors,
                      method_00);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x58e5530

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
          System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *serialized;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545558 = '\x01';
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
    ppSVar3 = &(pTVar1->fields).m_Text;
  }
  else {
    ppSVar3 = &(__this->fields)._lastText;
  }
  serialized = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                         (*ppSVar3,stops,method_00);
  document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(serialized,(MethodInfo *)stops);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,document,false,in_RCX);
  return serialized;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x58e5bc0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e5c3e: nop 
// asm:   0x58e5c9f: nop 
// asm:   0x58e5d3c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  System_String_array **targetAddress;
  System_Collections_Generic_IList_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  uint32_t length;
  VirtualInvokeData *pVVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  ulong uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar8;
  ulong uVar9;
  
  method_01 = (MethodInfo *)stops;
  if (Il2CppMethodInitialized_07545559 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07545559 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,method_01);
  if (stops != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar1 = stops->klass;
    uVar9 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_Generic_ICollection_string) {
          pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_058e5c71;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar9 * 0x10 != lVar8);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)stops,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e5c71:
    iVar3 = (*pVVar4->methodPtr)((Il2CppObject *)stops,pVVar4->method);
    if (iVar3 != 0) {
      pSVar1 = stops->klass;
      uVar9 = (ulong)(pSVar1->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar2 = (pSVar1->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar8) ==
              TypeInfo_System_Collections_Generic_ICollection_string) {
            pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
            goto label_058e5cfb;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar9 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)stops,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e5cfb:
      length = (*pVVar4->methodPtr)((Il2CppObject *)stops,pVVar4->method);
      pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,length);
      targetAddress = &(__this->fields)._gradientStops;
      (__this->fields)._gradientStops = pSVar5;
      Il2CppCodeGenWriteBarrier(targetAddress);
      uVar9 = 0;
      do {
        pSVar1 = stops->klass;
        uVar7 = (ulong)(pSVar1->_2).interface_offsets_count;
        if (uVar7 != 0) {
          pIVar2 = (pSVar1->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar8)
                == TypeInfo_System_Collections_Generic_ICollection_string) {
              pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
              goto label_058e5da3;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar7 * 0x10 != lVar8);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)stops,
                            (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e5da3:
        iVar3 = (*pVVar4->methodPtr)((Il2CppObject *)stops,pVVar4->method);
        pSVar5 = *targetAddress;
        if ((long)iVar3 <= (long)uVar9) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                    (__this,(System_Collections_Generic_IList_string__o *)pSVar5,method_00);
          return;
        }
        pSVar1 = stops->klass;
        uVar7 = (ulong)(pSVar1->_2).interface_offsets_count;
        if (uVar7 != 0) {
          pIVar2 = (pSVar1->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar8) ==
                TypeInfo_System_Collections_Generic_IList_string) {
              pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
              goto label_058e5e13;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar7 * 0x10 != lVar8);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)stops,
                            (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0);
label_058e5e13:
        pSVar6 = (*pVVar4->methodPtr)((Il2CppObject *)stops,(int32_t)uVar9,pVVar4->method);
        if (pSVar5 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pSVar5->max_length <= uVar9) {
          ThrowIndexOutOfRangeException();
        }
        pSVar5->m_Items[uVar9] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + uVar9);
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58e5ba0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x58e5e70

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *type,
               System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview(__this,type,colors,method);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
            (__this,(MethodInfo *)type);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58e5ab0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_0754555a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754555a = '\x01';
  }
  (__this->fields)._previewEffectType = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectType);
  (__this->fields)._previewEffectColors = (System_String_array *)0x0;
  method_00 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectColors);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview(__this,method_00);
  pTVar1 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._text;
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      UVar3.fields.b = 1.0;
      UVar3.fields.a = 1.0;
      UVar3.fields.r = 1.0;
      UVar3.fields.g = 1.0;
      (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                (pTVar1,UVar3,(pTVar1->klass->vtable)._23_set_color.method);
      pTVar1 = (__this->fields)._text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$DestroyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec510

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  PatreonEffects_NameEffectController_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754555b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754555b = '\x01';
  }
  pPVar1 = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    targetAddress = &(__this->fields)._effectPreview;
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
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ecb30

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_TextSelectionEvent_o *pTVar2;
  TMPro_TMP_Text_o *pTVar3;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  bool bVar4;
  UnityEngine_Events_UnityAction_T0__o *__this_02;
  UnityEngine_Events_UnityAction_T0__T1__T2__o *pUVar5;
  System_Action_TMP_TextInfo__o *__this_03;
  System_Action_string__o *__this_04;
  
  if (Il2CppMethodInitialized_0754555c == '\0') {
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
    Il2CppMethodInitialized_0754555c = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_058ecde2;
    __this_00 = (pTVar1->fields).m_OnValueChanged;
    __this_02 = (UnityEngine_Events_UnityAction_T0__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged,
               (MethodInfo_4311A10 *)0x0);
    if (__this_00 == (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) goto label_058ecde2;
    UnityEngine_Events_UnityEvent_object___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,__this_02,
               (MethodInfo_4319030 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_058ecde2;
    pTVar2 = (pTVar1->fields).m_OnTextSelection;
    pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
    UnityEngine_Events_UnityAction_object__int__int____ctor
              (pUVar5,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection,
               (MethodInfo_4312120 *)0x0);
    if (pTVar2 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto label_058ecde2;
    UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar2,pUVar5,
               (MethodInfo_431A830 *)MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_RemoveListener);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_058ecde2;
    pTVar2 = (pTVar1->fields).m_OnEndTextSelection;
    pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string_int_int);
    UnityEngine_Events_UnityAction_object__int__int____ctor
              (pUVar5,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection,
               (MethodInfo_4312120 *)0x0);
    if (pTVar2 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto label_058ecde2;
    UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar2,pUVar5,
               (MethodInfo_431A830 *)MethodInfo_UnityEngine_Events_UnityEvent_string_int_int_RemoveListener);
  }
  pTVar3 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_03 = (System_Action_TMP_TextInfo__o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar3 = (__this->fields)._text;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_TMP_TextInfo);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_03,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors,
               (MethodInfo_4A81BE0 *)0x0);
    if (pTVar3 == (TMPro_TMP_Text_o *)0x0) {
label_058ecde2:
      ThrowNullReferenceException();
    }
    (*(pTVar3->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
              (pTVar3,__this_03,(pTVar3->klass->vtable)._79_remove_OnPreRenderText.method);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
            (__this,(MethodInfo *)__this_03);
  __this_01 = (__this->fields)._state;
  if (__this_01 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_04,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged,
             (MethodInfo_4A81BE0 *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_01,__this_04,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ecdf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ece96: jmp 0x58ecf79
// asm:   0x58ecf6c: jmp 0x58ecf88

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  TMPro_TMP_InputField_o *pTVar3;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar5;
  int32_t iVar6;
  int32_t start;
  int32_t iVar7;
  UnityEngine_GameObject_o *gameObject;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o GStack_38;
  
  if (Il2CppMethodInitialized_0754555d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754555d = '\x01';
  }
  if ((__this->fields)._attached == false) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,method);
  }
  pTVar3 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pTVar3 = (__this->fields)._input;
  if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
    if ((pTVar3->fields).m_AllowInput == false) {
      return;
    }
    bVar5 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
    if (bVar5) {
      if ((__this->fields)._colorsEnabled == false) {
        return;
      }
    }
    else {
      __this_00 = (__this->fields)._state;
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        return;
      }
      in_RCX = (MethodInfo *)0x0;
      bVar5 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (__this_00,(__this->fields)._colorsEnabledKey,(__this->fields)._colorsEnabled,
                         (MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
    }
    pTVar3 = (__this->fields)._input;
    if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
      iVar6 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar3,(MethodInfo *)0x0);
      pTVar3 = (__this->fields)._input;
      if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
        start = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar3,(MethodInfo *)0x0);
        if (iVar6 < start) {
          start = iVar6;
        }
        pTVar3 = (__this->fields)._input;
        if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
          iVar6 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar3,(MethodInfo *)0x0);
          pTVar3 = (__this->fields)._input;
          if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
            iVar7 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar3,(MethodInfo *)0x0);
            if (iVar6 <= iVar7) {
              iVar6 = iVar7;
            }
            Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                      (__this,start,iVar6,in_RCX);
            iVar1 = (__this->fields)._selectionStart;
            if ((iVar1 < 0) || ((__this->fields)._selectionEnd <= iVar1)) {
              (__this->fields)._openedStart = -1;
              (__this->fields)._openedEnd = -1;
            }
            else {
              method_00 = (MethodInfo *)0x0;
              bVar5 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if (!bVar5) {
                iVar1 = (__this->fields)._selectionStart;
                if ((__this->fields)._openedStart == iVar1) {
                  iVar2 = (__this->fields)._selectionEnd;
                  if ((__this->fields)._openedEnd == iVar2) {
                    return;
                  }
                }
                else {
                  iVar2 = (__this->fields)._selectionEnd;
                }
                (__this->fields)._openedStart = iVar1;
                (__this->fields)._openedEnd = iVar2;
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                          (__this,method_00);
                pTVar3 = (__this->fields)._input;
                if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) goto label_058ed012;
                pSVar4 = (__this->fields)._pickerId;
                gameObject = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pTVar3,(MethodInfo *)0x0);
                GStack_38.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
                GStack_38.fields.InputSource = 0;
                GStack_38.fields._28_4_ = 0;
                GStack_38.fields.ElementId = (System_String_o *)0x0;
                GStack_38.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          (&GStack_38,pSVar4,gameObject,(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0
                           ,(MethodInfo *)0x0);
                pSVar4 = (__this->fields)._pickerId;
                if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
                }
                context.fields.GameObject = GStack_38.fields.GameObject;
                context.fields.ElementId = GStack_38.fields.ElementId;
                context.fields.Node = GStack_38.fields.Node;
                context.fields.InputSource = GStack_38.fields.InputSource;
                context.fields._28_4_ = GStack_38.fields._28_4_;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,pSVar4,false,(MethodInfo *)0x0);
              }
            }
            return;
          }
        }
      }
    }
  }
label_058ed012:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec650

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._colorsEnabled != false;
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return false;
  }
  bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                    (__this_00,(__this->fields)._colorsEnabledKey,(__this->fields)._colorsEnabled,
                     (MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x58ed0f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ed121: jmp 0x58ed144

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = System_String__op_Equality(key,(__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields)._colorsEnabled != false) {
      return;
    }
  }
  else {
    __this_00 = (__this->fields)._state;
    if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      method_00 = (MethodInfo *)(__this->fields)._colorsEnabledKey;
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (__this_00,(System_String_o *)method_00,(__this->fields)._colorsEnabled,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
    }
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58ed150

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array **targetAddress;
  uint32_t uVar2;
  int32_t length;
  System_Action_GameObject__o *pSVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar6;
  System_String_o *pSVar7;
  MethodInfo *pMVar8;
  UnityEngine_GameObject_o *pUVar9;
  MethodInfo *pMVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar11;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_array *method_04;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *in_R9;
  bool bStack_31;
  System_String_o *pSStack_30;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_28;
  
  pMVar10 = (MethodInfo *)value;
  if (Il2CppMethodInitialized_0754555e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_0754555e = '\x01';
  }
  pGStack_28 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  pSStack_30 = (System_String_o *)0x0;
  bStack_31 = false;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument(__this,pMVar10);
  pMVar10 = (MethodInfo *)&pSStack_30;
  bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_57e90b0
                    (value,pGVar6,&pGStack_28,(System_String_o **)pMVar10,&bStack_31,in_R9);
  if (bVar5) {
    (__this->fields)._pendingImportColor = pSStack_30;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingImportColor);
    if (bStack_31 != false) {
      (__this->fields)._gradientStops = (System_String_array *)0x0;
      pMVar8 = (MethodInfo *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,pMVar8);
      pGVar6 = pGStack_28;
      goto label_058ed363;
    }
  }
  if (value == (System_String_o *)0x0) {
    uVar2 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    uVar2 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
    pSVar7 = value;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar7 = MiscExtensions__StripRichText(pSVar7,(MethodInfo *)0x0);
  pSVar7 = MiscExtensions__StripHex(pSVar7,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    pMVar10 = (MethodInfo *)0x0;
    pMVar8 = (MethodInfo *)
             System_String__Replace_5304550
                       (pSVar7,"\n",(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8)
                        ,(MethodInfo *)0x0);
    if ((pMVar8 != (MethodInfo *)0x0) ||
       (pMVar8 = (MethodInfo *)**(long **)(g_data_07556758 + 0xb8), pMVar8 != (MethodInfo *)0x0)) {
      if (0x1f < ((System_String_Fields *)&pMVar8->invoker_method)->_stringLength) {
        pMVar10 = (MethodInfo *)0x0;
        pMVar8 = (MethodInfo *)
                 System_String__Substring_53042f0((System_String_o *)pMVar8,0,0x1f,(MethodInfo *)0x0);
      }
      bVar5 = System_String__op_Inequality((System_String_o *)pMVar8,value,(MethodInfo *)0x0);
      pMVar11 = method_00;
      if (bVar5) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                  (__this,(System_String_o *)pMVar8,method_00);
        pMVar11 = extraout_RDX;
      }
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         ((__this->fields)._lastText,
                          (System_Collections_Generic_IList_string__o *)(__this->fields)._colors,pMVar11);
      pMVar11 = pMVar8;
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
                         (pSVar7,(System_String_o *)pMVar8,method_01);
      pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar7,pMVar11);
      bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
                        (__this,pGVar6,method_02);
      targetAddress = &(__this->fields)._gradientStops;
      if (bVar5) {
        (__this->fields)._gradientStops = (System_String_array *)0x0;
        pMVar8 = (MethodInfo *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,pMVar8);
        (__this->fields)._pendingImportColor = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingImportColor);
label_058ed363:
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,pGVar6,true,pMVar10)
        ;
        pSVar3 = (__this->fields)._imported;
        if (pSVar3 != (System_Action_GameObject__o *)0x0) {
          pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pUVar9,(pSVar3->fields).method)
          ;
        }
        return;
      }
      method_04 = *targetAddress;
      if (method_04 != (System_String_array *)0x0) {
        pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                           ((System_String_o *)pMVar8,(System_Collections_Generic_IList_string__o *)method_04,
                            method_03);
        pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar7,(MethodInfo *)method_04);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                  (__this,pGVar6,false,pMVar10);
        return;
      }
      if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
        (__this->fields)._lastText = (pGVar6->fields).Text;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText);
        __this_00 = (__this->fields)._colors;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (__this_00->fields)._size;
          (__this_00->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._colors;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ed4d0;
          }
          System_Collections_Generic_List_object___AddRange
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (System_Collections_Generic_IEnumerable_T__o *)(pGVar6->fields).Colors,
                     (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
          if (Il2CppMethodInitialized_0754555f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_0754555f = '\x01';
          }
          pTVar4 = (__this->fields)._text;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
          pTVar4 = (__this->fields)._text;
          if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
            (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                      (pTVar4,false,false,(pTVar4->klass->vtable)._106_ForceMeshUpdate.method);
            return;
          }
        }
      }
    }
  }
label_058ed4d0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RefreshTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec5c0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754555f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754555f = '\x01';
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
    (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyDocument
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, bool updateInput, const MethodInfo* method);
// 0x58ebec0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,bool updateInput,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_string__o *__this_00;
  
  method_01 = (MethodInfo *)document;
  if (Il2CppMethodInitialized_07545560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545560 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_57ed910(document,method_01);
  if (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    (__this->fields)._lastText = (document->fields).Text;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText);
    __this_00 = (__this->fields)._colors;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_00->fields)._size;
      (__this_00->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._colors;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ec01c;
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(document->fields).Colors,
                 (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      if (updateInput) {
        x = (__this->fields)._input;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                    (__this,(document->fields).Text,method_00);
        }
      }
      if (Il2CppMethodInitialized_0754555f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754555f = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      pTVar2 = (__this->fields)._text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,false,false,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
        return;
      }
    }
  }
label_058ec01c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CurrentDocument
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ed4e0

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545561 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    Il2CppMethodInitialized_07545561 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document)
  ;
  if (Il2CppMethodInitialized_0754554d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_0754554d = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this_00->fields).Colors = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Colors);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._lastText;
  if (pSVar2 == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  }
  (__this_00->fields).Text = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Text);
  pSVar1 = (__this_00->fields).Colors;
  if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___AddRange
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._colors,
             (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPendingImportColor
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x58ed6f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ed78d: jmp 0x58ed7b5
// asm:   0x58ed85d: nop dword ptr [rax]
// asm:   0x58ed8b0: lea r14, [rip + 0x19a9161]  ; MethodInfo_System_Collections_Generic_List_string_set_Item
// asm:   0x58ed8b7: nop word ptr [rax + rax]
// asm:   0x58ed8f3: jmp 0x58ed8f7

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,MethodInfo *method)

{
  System_String_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  bool bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  int32_t iVar4;
  int32_t index;
  bool bVar5;
  int iVar6;
  System_String_o *__this_02;
  int iVar7;
  int iVar8;
  
  if (Il2CppMethodInitialized_07545562 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    Il2CppMethodInitialized_07545562 = '\x01';
  }
  bVar5 = false;
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._pendingImportColor,(MethodInfo *)0x0);
  if ((document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) && (!bVar1)) {
    bVar5 = false;
    bVar1 = System_String__IsNullOrEmpty((document->fields).Text,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = (__this->fields)._lastText;
      if (__this_00 == (System_String_o *)0x0) {
        __this_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        __this_02 = (document->fields).Text;
      }
      else {
        __this_02 = (document->fields).Text;
      }
      if (((__this_02 == (System_String_o *)0x0) &&
          (__this_02 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8),
          __this_02 == (System_String_o *)0x0)) || (__this_00 == (System_String_o *)0x0)) {
label_058ed908:
        ThrowNullReferenceException();
      }
      iVar6 = (__this_00->fields)._stringLength;
      index = 0;
      bVar5 = false;
      if (iVar6 < (__this_02->fields)._stringLength) {
        if ((0 < iVar6) && (0 < (__this_02->fields)._stringLength)) {
          iVar4 = 0;
          do {
            index = iVar4;
            uVar2 = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
            uVar3 = System_String__get_Chars(__this_02,index,(MethodInfo *)0x0);
            if (uVar2 != uVar3) {
              iVar6 = (__this_00->fields)._stringLength;
              goto label_058ed84c;
            }
            iVar4 = index + 1;
            iVar6 = (__this_00->fields)._stringLength;
          } while ((iVar4 < iVar6) && (iVar4 < (__this_02->fields)._stringLength));
          index = index + 1;
        }
label_058ed84c:
        iVar7 = 0;
        if (0 < iVar6 - index) {
          iVar8 = -1;
          do {
            if ((__this_02->fields)._stringLength - index <= iVar7) break;
            uVar2 = System_String__get_Chars(__this_00,iVar6 + iVar8,(MethodInfo *)0x0);
            uVar3 = System_String__get_Chars
                              (__this_02,(__this_02->fields)._stringLength + iVar8,(MethodInfo *)0x0);
            if (uVar2 != uVar3) break;
            iVar7 = iVar7 + 1;
            iVar6 = (__this_00->fields)._stringLength;
            iVar8 = iVar8 + -1;
          } while (iVar7 < iVar6 - index);
        }
        iVar7 = (__this_02->fields)._stringLength - iVar7;
        if (index < iVar7) {
          do {
            __this_01 = (document->fields).Colors;
            if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ed908;
            bVar5 = true;
            if ((__this_01->fields)._size <= index) {
              return true;
            }
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)__this_01,index,
                       (Il2CppObject *)(__this->fields)._pendingImportColor,
                       (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
            index = index + 1;
          } while (index < iVar7);
        }
        else {
          bVar5 = false;
        }
      }
    }
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58ed640

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545563 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545563 = '\x01';
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
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
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
// 0x58ed5f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((value == (System_String_o *)0x0) &&
     (value = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), value == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((value->fields)._stringLength < 0x20) {
    return value;
  }
  pSVar1 = System_String__Substring_53042f0(value,0,0x1f,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x58ed910
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ed9bd: lea r15, [rip + 0x19a9004]  ; MethodInfo_System_Collections_Generic_List_string_RemoveAt
// asm:   0x58ed9c4: nop word ptr cs:[rax + rax]
// asm:   0x58ed9f8: lea r15, [rip + 0x19edeb9]  ; "FFFFFF"
// asm:   0x58ed9ff: lea r12, [rip + 0x19a8f52]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x58eda06: jmp 0x58eda69
// asm:   0x58eda2d: jmp 0x58ed9f3

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_57ed910
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *targetAddress;
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_07545564 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_07545564 = '\x01';
  }
  if (document == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return;
  }
  pSVar6 = (document->fields).Text;
  if ((pSVar6 != (System_String_o *)0x0) ||
     (pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar6 != (System_String_o *)0x0)) {
    targetAddress = &document->fields;
    if (0x1f < (pSVar6->fields)._stringLength) {
      pSVar6 = System_String__Substring_53042f0(pSVar6,0,0x1f,(MethodInfo *)0x0);
    }
    (document->fields).Text = pSVar6;
    Il2CppCodeGenWriteBarrier(&targetAddress->Text);
    __this = (document->fields).Colors;
    while ((__this != (System_Collections_Generic_List_string__o *)0x0 &&
           (targetAddress->Text != (System_String_o *)0x0))) {
      iVar2 = (__this->fields)._size;
      if (iVar2 <= (targetAddress->Text->fields)._stringLength) goto label_058eda69;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,iVar2 + -1,
                 (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
      __this = (document->fields).Colors;
    }
  }
  goto label_058ed9f3;
  while( true ) {
    uVar3 = (__this->fields)._size;
    if ((targetAddress->Text->fields)._stringLength <= (int)uVar3) {
      return;
    }
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 == (System_String_array *)0x0) break;
    if (uVar3 < (uint)pSVar4->max_length) {
      (__this->fields)._size = uVar3 + 1;
      pSVar4->m_Items[(int)uVar3] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
      __this = (document->fields).Colors;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      __this = (document->fields).Colors;
    }
    if (__this == (System_Collections_Generic_List_string__o *)0x0) break;
label_058eda69:
    pSVar6 = "FFFFFF";
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (targetAddress->Text == (System_String_o *)0x0) break;
  }
label_058ed9f3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* __, int32_t start, int32_t end, const MethodInfo* method);
// 0x58eda90

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *__,
               int32_t start,int32_t end,MethodInfo *method)

{
  undefined4 in_register_0000000c;
  
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
            (__this,start,end,(MethodInfo *)CONCAT44(in_register_0000000c,end));
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x58ed020

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
  
  if (Il2CppMethodInitialized_07545565 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545565 = '\x01';
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
      ThrowNullReferenceException();
    }
    iVar5 = (pSVar2->fields)._stringLength;
    iVar6 = iVar5;
    if (start < iVar5) {
      iVar6 = start;
    }
    if (start < 0) {
      iVar6 = 0;
    }
    if (end < iVar5) {
      iVar5 = end;
    }
    if (end < 0) {
      iVar5 = 0;
    }
    if (iVar6 == iVar5) {
      if ((pTVar1->fields).m_AllowInput != false) {
        (__this->fields)._selectionStart = -1;
        (__this->fields)._selectionEnd = -1;
      }
    }
    else {
      iVar4 = iVar5;
      if (iVar6 < iVar5) {
        iVar4 = iVar6;
      }
      (__this->fields)._selectionStart = iVar4;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      (__this->fields)._selectionEnd = iVar5;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CapturePreviewColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec690
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ec738: lea r12, [rip + 0x19aa2c9]  ; MethodInfo_System_Collections_Generic_List_string_get_Item
// asm:   0x58ec73f: lea r13, [rip + 0x19aa212]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x58ec746: jmp 0x58ec771

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
  int index;
  int iVar7;
  
  if (Il2CppMethodInitialized_07545566 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_07545566 = '\x01';
  }
  pSVar4 = (__this->fields)._previewColors;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields)._colors;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      index = (__this->fields)._selectionStart;
      iVar2 = (__this->fields)._selectionEnd;
      iVar7 = (pSVar4->fields)._size;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
      if (index < iVar7) {
        do {
          while( true ) {
            pSVar4 = (__this->fields)._colors;
            if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ec7e0;
            __this_00 = (__this->fields)._previewColors;
            item = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                             );
            pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ec7e0;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_00->fields)._items;
            if (pSVar5 == (System_String_array *)0x0) goto label_058ec7e0;
            uVar3 = (__this_00->fields)._size;
            if ((uint)pSVar5->max_length <= uVar3) break;
            (__this_00->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = item;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
            index = index + 1;
            if (iVar7 == index) goto label_058ec7c9;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          index = index + 1;
        } while (iVar7 != index);
      }
label_058ec7c9:
      (__this->fields)._hasPreview = true;
      return;
    }
  }
label_058ec7e0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestorePreviewColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec9c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58eca47: lea r12, [rip + 0x19a9fba]  ; MethodInfo_System_Collections_Generic_List_string_get_Item
// asm:   0x58eca4e: lea r13, [rip + 0x19a9fc3]  ; MethodInfo_System_Collections_Generic_List_string_set_Item
// asm:   0x58eca55: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool bVar5;
  System_String_o *value;
  int index;
  int iVar6;
  
  if (Il2CppMethodInitialized_07545567 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    Il2CppMethodInitialized_07545567 = '\x01';
  }
  if ((__this->fields)._hasPreview == false) {
    return;
  }
  pSVar2 = (__this->fields)._previewColors;
  if ((pSVar2 != (System_Collections_Generic_List_string__o *)0x0) &&
     (pSVar3 = (__this->fields)._colors, pSVar3 != (System_Collections_Generic_List_string__o *)0x0)) {
    index = (__this->fields)._selectionStart;
    iVar1 = (pSVar3->fields)._size;
    iVar6 = (pSVar2->fields)._size + index;
    if (iVar1 <= iVar6) {
      iVar6 = iVar1;
    }
    if (index < iVar6) {
      do {
        pSVar2 = (__this->fields)._previewColors;
        if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ecb2a;
        pSVar3 = (__this->fields)._colors;
        value = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar2,
                           index - (__this->fields)._selectionStart,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ecb2a;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,(Il2CppObject *)value,
                   (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
        index = index + 1;
      } while (iVar6 != index);
    }
    if (Il2CppMethodInitialized_0754555f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_0754555f = '\x01';
    }
    pTVar4 = (__this->fields)._text;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    pTVar4 = (__this->fields)._text;
    if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                (pTVar4,false,false,(pTVar4->klass->vtable)._106_ForceMeshUpdate.method);
      return;
    }
  }
label_058ecb2a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x58edaa0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PatreonEffects_NameEffectController_o *x;
  System_Collections_Generic_List_string__o *pSVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  TMPro_TMP_MeshInfo_array *pTVar5;
  UnityEngine_Color32_array *pUVar6;
  bool bVar7;
  uint uVar8;
  UnityEngine_Color32_o UVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  ulong uVar10;
  long lVar11;
  
  if (Il2CppMethodInitialized_07545568 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545568 = '\x01';
  }
  x = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    if ((textInfo == (TMPro_TMP_TextInfo_o *)0x0) ||
       (pSVar3 = (__this->fields)._colors, pSVar3 == (System_Collections_Generic_List_string__o *)0x0)) {
label_058edc0b:
      ThrowNullReferenceException();
    }
    uVar1 = (textInfo->fields).characterCount;
    uVar8 = (pSVar3->fields)._size;
    if ((int)uVar1 < (int)uVar8) {
      uVar8 = uVar1;
    }
    if (0 < (int)uVar8) {
      lVar11 = 0x50;
      uVar10 = 0;
      method_00 = extraout_RDX;
      do {
        pTVar4 = (textInfo->fields).characterInfo;
        if (pTVar4 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_058edc0b;
        if ((uint)pTVar4->max_length <= uVar10) goto label_058edc06;
        if ((*(byte *)((long)(&pTVar4->m_Items[0].fields.color + -8) + lVar11) & 1) != 0) {
          uVar1 = *(uint *)((long)(&pTVar4->m_Items[0].fields.vertex_BL.fields.color + -0x23) + lVar11);
          uVar2 = *(uint *)((long)(&pTVar4->m_Items[0].fields.vertex_BL.fields.color + -0x1e) + lVar11);
          UVar9 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
                            (__this,(int32_t)uVar10,method_00);
          pTVar5 = (textInfo->fields).meshInfo;
          if (pTVar5 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_058edc0b;
          if ((uint)pTVar5->max_length <= uVar1) {
label_058edc06:
            ThrowIndexOutOfRangeException();
          }
          pUVar6 = pTVar5->m_Items[(int)uVar1].fields.colors32;
          if (pUVar6 == (UnityEngine_Color32_array *)0x0) goto label_058edc0b;
          if ((uint)pUVar6->max_length <= uVar2) goto label_058edc06;
          pUVar6->m_Items[(int)uVar2].fields._overlap_0._at_rgba.rgba = (int32_t)UVar9.fields._overlap_0;
          if ((uint)pUVar6->max_length <= uVar2 + 1) goto label_058edc06;
          pUVar6->m_Items[(int)(uVar2 + 1)].fields._overlap_0._at_rgba.rgba = (int32_t)UVar9.fields._overlap_0
          ;
          if ((uint)pUVar6->max_length <= uVar2 + 2) goto label_058edc06;
          pUVar6->m_Items[(int)(uVar2 + 2)].fields._overlap_0._at_rgba.rgba = (int32_t)UVar9.fields._overlap_0
          ;
          if ((uint)pUVar6->max_length <= uVar2 + 3) goto label_058edc06;
          method_00 = (MethodInfo *)(long)(int)(uVar2 + 3);
          pUVar6->m_Items[(long)method_00].fields._overlap_0._at_rgba.rgba = (int32_t)UVar9.fields._overlap_0;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x178;
      } while (uVar8 != uVar10);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorFor
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t index, const MethodInfo* method);
// 0x58edc10

UnityEngine_Color32_o
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,int32_t index,
          MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  bool bVar1;
  UnityEngine_Color32_Fields UVar2;
  System_String_o *pSVar3;
  float fVar4;
  undefined8 uVar5;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_07545569 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_07545569 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if (-1 < index) {
    __this_00 = (__this->fields)._colors;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (index < (__this_00->fields)._size) {
      pSVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar3 = System_String__Concat_52f0320("#",pSVar3,(MethodInfo *)0x0);
      goto label_058edca9;
    }
  }
  pSVar3 = "#FFFFFF";
label_058edca9:
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
  if (bVar1) {
    fVar4 = local_28.r;
    uVar5 = local_28._8_8_;
  }
  else {
    uVar5._0_4_ = 1.0;
    uVar5._4_4_ = 1.0;
    fVar4 = 1.0;
  }
  UVar2._overlap_0 = (_union_53531)il2cpp_runtime_helper_05334d00(fVar4,uVar5,0);
  return (UnityEngine_Color32_Fields)(UnityEngine_Color32_Fields)UVar2._overlap_0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$StoreEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x58ebc10

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *type,
               System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  System_Collections_Generic_IList_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  uint32_t length;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  System_String_array **targetAddress;
  
  if (Il2CppMethodInitialized_0754556a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754556a = '\x01';
  }
  (__this->fields)._previewEffectType = type;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectType);
  if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
    (__this->fields)._previewEffectColors = (System_String_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectColors);
    return;
  }
  pSVar1 = colors->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar9 = 0;
    do {
      if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar9) ==
          TypeInfo_System_Collections_Generic_ICollection_string) {
        pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
        goto label_058ebcfb;
      }
      lVar9 = lVar9 + 0x10;
    } while (uVar8 * 0x10 != lVar9);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)colors,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058ebcfb:
  length = (*pVVar4->methodPtr)((Il2CppObject *)colors,pVVar4->method);
  pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,length);
  (__this->fields)._previewEffectColors = pSVar5;
  targetAddress = &(__this->fields)._previewEffectColors;
  Il2CppCodeGenWriteBarrier(targetAddress);
  uVar8 = 0;
  do {
    pSVar1 = colors->klass;
    uVar7 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_ICollection_string) {
          pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_058ebd93;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar7 * 0x10 != lVar9);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)colors,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058ebd93:
    iVar3 = (*pVVar4->methodPtr)((Il2CppObject *)colors,pVVar4->method);
    if ((long)iVar3 <= (long)uVar8) {
      return;
    }
    pSVar5 = *targetAddress;
    pSVar1 = colors->klass;
    uVar7 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IList_string) {
          pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_058ebe03;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar7 * 0x10 != lVar9);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)colors,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string
                        ,0);
label_058ebe03:
    pSVar6 = (*pVVar4->methodPtr)((Il2CppObject *)colors,(int32_t)uVar8,pVVar4->method);
    if (pSVar5 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar5->max_length <= uVar8) {
      ThrowIndexOutOfRangeException();
    }
    pSVar5->m_Items[uVar8] = pSVar6;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + uVar8);
    uVar8 = uVar8 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyStoredEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec340

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **targetAddress;
  TMPro_TMP_Text_o *pTVar1;
  bool bVar2;
  uint in_EAX;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo **in_RCX;
  UnityEngine_Color_o UVar4;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_0754556b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754556b = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  pTVar1 = (__this->fields)._text;
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
                    ((__this->fields)._previewEffectType,(int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pPVar3 = (__this->fields)._effectPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._effectPreview;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._text;
    if ((pTVar1 == (TMPro_TMP_Text_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0)
       , __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_058ec509;
    in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController;
    pPVar3 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    *targetAddress = pPVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  if (*targetAddress != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(*targetAddress,(MethodInfo *)0x0);
    settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_28._4_4_,(MethodInfo *)0x0);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,0,
                 &(settings->fields).gradientA,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,1,
                 &(settings->fields).gradientB,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,2,
                 &(settings->fields).gradientC,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectColors,3,
                 &(settings->fields).gradientD,(MethodInfo *)in_RCX);
      pTVar1 = (__this->fields)._text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        UVar4.fields.b = 1.0;
        UVar4.fields.a = 1.0;
        UVar4.fields.r = 1.0;
        UVar4.fields.g = 1.0;
        (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                  (pTVar1,UVar4,(pTVar1->klass->vtable)._23_set_color.method);
        if (*targetAddress != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*targetAddress,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_058ec509:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPreviewColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor (System_Collections_Generic_IList_string__o* colors, int32_t index, UnityEngine_Color_o* target, const MethodInfo* method);
// 0x58edcf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58edd5e: nop 

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
               (System_Collections_Generic_IList_string__o *colors,int32_t index,UnityEngine_Color_o *target,
               MethodInfo *method)

{
  System_Collections_Generic_IList_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *htmlString;
  ulong uVar6;
  long lVar7;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_0754556c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    Il2CppMethodInitialized_0754556c = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar1 = colors->klass;
    uVar6 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar7) ==
            TypeInfo_System_Collections_Generic_ICollection_string) {
          pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
          goto label_058edd91;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)colors,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058edd91:
    iVar4 = (*pVVar5->methodPtr)((Il2CppObject *)colors,pVVar5->method);
    if (index < iVar4) {
      pSVar1 = colors->klass;
      uVar6 = (ulong)(pSVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pSVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_System_Collections_Generic_IList_string) {
            pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
            goto label_058ede01;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar6 * 0x10 != lVar7);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)colors,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0);
label_058ede01:
      htmlString = (*pVVar5->methodPtr)((Il2CppObject *)colors,index,pVVar5->method);
      bVar3 = UnityEngine_ColorUtility__TryParseHtmlString
                        (htmlString,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
      if (bVar3) {
        (target->fields).r = local_28.r;
        (target->fields).g = local_28.g;
        (target->fields).b = local_28.b;
        (target->fields).a = local_28.a;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestoreSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ec920

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754556d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754556d = '\x01';
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
// 0x58ec7f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ec87d: jmp 0x58ec8b3

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  bool bVar5;
  int32_t iVar6;
  int value;
  TMPro_TMP_InputField_o *pTVar7;
  
  if (Il2CppMethodInitialized_0754556e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754556e = '\x01';
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
  iVar2 = (__this->fields)._selectionEnd;
  pTVar7 = (__this->fields)._input;
  if (iVar2 < 0) {
    if (pTVar7 == (TMPro_TMP_InputField_o *)0x0) goto label_058ec90f;
    iVar6 = TMPro_TMP_InputField__get_caretPosition(pTVar7,(MethodInfo *)0x0);
    pTVar7 = (__this->fields)._input;
    if ((pTVar7 == (TMPro_TMP_InputField_o *)0x0) ||
       (pSVar3 = (pTVar7->fields).m_Text, pSVar3 == (System_String_o *)0x0)) goto label_058ec90f;
    iVar2 = (pSVar3->fields)._stringLength;
    if (iVar6 < iVar2) {
      iVar2 = iVar6;
    }
    value = 0;
    if (-1 < iVar6) {
      value = iVar2;
    }
  }
  else {
    if ((pTVar7 == (TMPro_TMP_InputField_o *)0x0) ||
       (pSVar3 = (pTVar7->fields).m_Text, pSVar3 == (System_String_o *)0x0)) goto label_058ec90f;
    value = (pSVar3->fields)._stringLength;
    if (iVar2 < value) {
      value = iVar2;
    }
  }
  TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar7,value,(MethodInfo *)0x0);
  pTVar7 = (__this->fields)._input;
  if (pTVar7 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar7,value,(MethodInfo *)0x0);
    (__this->fields)._selectionStart = -1;
    (__this->fields)._selectionEnd = -1;
    (__this->fields)._openedStart = -1;
    (__this->fields)._openedEnd = -1;
    pSVar4 = (__this->fields)._previewColors;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar6 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < iVar6) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar6,(MethodInfo *)0x0);
      }
      (__this->fields)._hasPreview = false;
      return;
    }
  }
label_058ec90f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_3488020* method);
// 0x3588020
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x3588130: jmp 0x3588134
// asm:   0x3588132: xor ebp, ebp
// asm:   0x3588166: jmp 0x3588067

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_3488020 *method)

{
  uint32_t uVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar6;
  
  if ((method->rgctx_data == (MethodInfo_3488020_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_3488020_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_34B1260 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar4 == (System_Object_array *)0x0)) {
label_0358816b:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto label_0358816b;
          a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
          if (bVar3) {
            return (Il2CppObject *)x;
          }
        }
        uVar6 = uVar6 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x58ede30

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_0754556f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_0754556f = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._colors = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colors);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._previewColors = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewColors);
  (__this->fields)._lastText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastText);
  (__this->fields)._selectionStart = -1;
  (__this->fields)._selectionEnd = -1;
  (__this->fields)._openedStart = -1;
  (__this->fields)._openedEnd = -1;
  (__this->fields)._colorsEnabled = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


