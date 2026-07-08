// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditorRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* inputId, System_String_o* value, System_String_o* pickerId, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x41dbc60

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *inputId,System_String_o *value,System_String_o *pickerId,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *colorsEnabledKey,
               bool_conflict colorsEnabled,System_Action_GameObject__o *imported,
               System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,
               System_String_o *previewFont,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_array *pSVar1;
  System_Action_string__o *value_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)pickerId;
  if (DAT_05704ea0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    DAT_05704ea0 = '\x01';
  }
  (__this->fields)._inputId = inputId;
  il2cpp_runtime_glue(&(__this->fields)._inputId,inputId);
  (__this->fields)._pickerId = pickerId;
  il2cpp_runtime_glue(&(__this->fields)._pickerId,pickerId);
  (__this->fields)._state = state;
  il2cpp_runtime_glue(&(__this->fields)._state,state);
  (__this->fields)._colorsEnabledKey = colorsEnabledKey;
  il2cpp_runtime_glue(&(__this->fields)._colorsEnabledKey,colorsEnabledKey);
  *(undefined1 *)((long)&(__this->fields)._attached + 2) = (undefined1)colorsEnabled;
  (__this->fields)._imported = imported;
  il2cpp_runtime_glue(&(__this->fields)._imported);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = (System_String_array *)
           PatreonEffects_NameFontCatalog__Normalize(previewFont,(MethodInfo *)0x0);
  (__this->fields)._previewEffectColors = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._previewEffectColors,pSVar1);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this,previewEffectType,previewEffectColors,method_00);
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value_00 = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,value_00,(MethodInfo *)0x0);
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._initialValue = value;
  il2cpp_runtime_glue(&(__this->fields)._initialValue);
  if ((char)(__this->fields)._attached != '\0') {
    document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((__this->fields)._initialValue,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
              (__this,document,1,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSerializedValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41dc090

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  MethodInfo *in_RCX;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    (__this->fields)._initialValue = value;
    il2cpp_runtime_glue(&(__this->fields)._initialValue);
    if ((char)(__this->fields)._attached != '\0') {
      document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                           ((__this->fields)._initialValue,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                (__this,document,1,in_RCX);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dc260

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Attach
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dc270

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o **ppTVar1;
  TMPro_TMP_InputField_TextSelectionEvent_o *pTVar2;
  TMPro_TMP_InputField_SelectionEvent_o *__this_00;
  TMPro_TMP_Text_o *pTVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *root;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_T0__T1__T2__o *pUVar6;
  undefined8 uVar7;
  MethodInfo *pMVar8;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704ea1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyTextColors);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnTextChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnTextSelection);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string__int__int);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_05704ea1 = '\x01';
  }
  if ((char)(__this->fields)._attached == '\0') {
    root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
    ;
    pTVar5 = (TMPro_TMP_InputField_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find<object>
                       (root,(__this->fields)._inputId,MethodInfo_TMP_InputField_Find_TMP_InputField);
    ppTVar1 = &(__this->fields)._input;
    (__this->fields)._input = pTVar5;
    il2cpp_runtime_glue(ppTVar1);
    pTVar5 = (__this->fields)._input;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      pTVar5 = *ppTVar1;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined1 *)&(pTVar5->fields).m_IsTextComponentUpdateRequired = 0;
        pTVar2 = (pTVar5->fields).m_OnEndTextSelection;
        call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (pTVar2 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)pTVar2,call,MethodInfo_Void_AddListener);
          if (*ppTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            __this_00 = ((*ppTVar1)->fields).m_OnDeselect;
            pUVar6 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
                     il2cpp_runtime_glue(TypeInfo_UnityAction_string__int__int);
            UnityEngine_Events_UnityAction<object__int__int>___ctor();
            if (__this_00 != (TMPro_TMP_InputField_SelectionEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent<object__int__int>__AddListener
                        ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,pUVar6,
                         MethodInfo_Void_AddListener);
              if (*ppTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                pTVar2 = ((*ppTVar1)->fields).m_OnTextSelection;
                pUVar6 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)
                         il2cpp_runtime_glue(TypeInfo_UnityAction_string__int__int);
                method_00 = (MethodInfo *)0x0;
                UnityEngine_Events_UnityAction<object__int__int>___ctor();
                if (pTVar2 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent<object__int__int>__AddListener
                            ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar2,pUVar6,
                             MethodInfo_Void_AddListener);
                  if (*ppTVar1 != (TMPro_TMP_InputField_o *)0x0) {
                    (__this->fields)._text =
                         *(TMPro_TMP_Text_o **)
                          &((*ppTVar1)->fields).m_CachedViewportRect.fields.m_Width;
                    il2cpp_runtime_glue(&(__this->fields)._text);
                    pTVar3 = (__this->fields)._text;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar4 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    pMVar8 = extraout_RDX;
                    if ((char)bVar4 != '\0') {
                      pTVar3 = (__this->fields)._text;
                      uVar7 = il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
                      method_00 = (MethodInfo *)0x0;
                      System_Action<object>___ctor();
                      if (pTVar3 == (TMPro_TMP_Text_o *)0x0) goto LAB_041dc564;
                      (*(pTVar3->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                                (pTVar3,uVar7,(pTVar3->klass->vtable)._78_add_OnPreRenderText.method
                                );
                      pMVar8 = extraout_RDX_00;
                    }
                    *(undefined1 *)&(__this->fields)._attached = 1;
                    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
                              (__this,(System_String_o *)(__this->fields)._previewEffectColors,
                               pMVar8);
                    pMVar8 = (MethodInfo *)
                             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                                       ((__this->fields)._initialValue,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                              (__this,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o
                                       *)pMVar8,1,method_00);
                    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
                              (__this,pMVar8);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_041dc564:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* font, const MethodInfo* method);
// 0x41dc570

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *font,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *x;
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool bVar3;
  bool_conflict bVar4;
  System_String_array *pSVar5;
  MethodInfo *method_00;
  
  if (DAT_05704ea2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ea2 = '\x01';
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = false;
  pSVar5 = (System_String_array *)PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
  (__this->fields)._previewEffectColors = pSVar5;
  il2cpp_runtime_glue(&(__this->fields)._previewEffectColors);
  x = (__this->fields)._effectPreview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    bVar3 = false;
    method_00 = (MethodInfo *)0x0;
    bVar4 = System_String__IsNullOrEmpty
                      ((System_String_o *)(__this->fields)._gradientStops,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview
                (__this,method_00);
      bVar3 = true;
    }
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = (System_String_array *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pTVar1 = (__this->fields)._input;
    pSVar5 = (__this->fields)._previewEffectColors;
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PatreonEffects_NameFontCatalog__Apply(pTVar1,(System_String_o *)pSVar5,(MethodInfo *)0x0);
  }
  if (bVar3) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
              (__this,(MethodInfo *)pSVar5);
  }
  if (DAT_05704eac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eac = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pTVar2 = (__this->fields)._text;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      vtable_dispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
      (*vtable_dispatch)
                (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,
                 vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* hex, bool clearSelection, const MethodInfo* method);
// 0x41dca30

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *hex,bool_conflict clearSelection,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  TMPro_TMP_Text_o *pTVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *value;
  int iVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (DAT_05704ea3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05704ea3 = '\x01';
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar4 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    __this_00 = (__this->fields)._state;
    if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    pMVar6 = (MethodInfo *)(__this->fields)._colorsEnabledKey;
    bVar4 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      (__this_00,(System_String_o *)pMVar6,
                       (uint)*(byte *)((long)&(__this->fields)._attached + 2),(MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    cVar3 = *(char *)((long)&(__this->fields)._attached + 2);
  }
  if (((cVar3 == '\0') || (iVar5 = (__this->fields)._selectionStart, iVar5 < 0)) ||
     ((__this->fields)._selectionEnd <= iVar5)) {
    return;
  }
  if (*(char *)((long)&(__this->fields)._attached + 1) == '\0') {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors(__this,pMVar6)
    ;
  }
  value = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(hex,(MethodInfo *)0x0);
  __this_01 = (__this->fields)._colors;
  if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar5 = (__this->fields)._selectionEnd;
    iVar1 = (__this_01->fields)._size;
    if (iVar5 <= iVar1) {
      iVar1 = iVar5;
    }
    iVar5 = (__this->fields)._selectionStart;
    if (iVar1 <= iVar5) {
LAB_041dcb5a:
      if (DAT_05704eac == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05704eac = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar6 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pTVar2 = (__this->fields)._text;
        if (pTVar2 == (TMPro_TMP_Text_o *)0x0) goto LAB_041dcb1f;
        pMVar6 = (MethodInfo *)0x0;
        (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
      }
      if ((char)clearSelection == '\0') {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection(__this,pMVar6)
        ;
        return;
      }
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,pMVar6);
      return;
    }
    do {
      System_Collections_Generic_List<object>__set_Item
                ((System_Collections_Generic_List_object__o *)__this_01,iVar5,(Il2CppObject *)value,
                 MethodInfo_Void_set_Item);
      iVar5 = iVar5 + 1;
      if (iVar1 <= iVar5) goto LAB_041dcb5a;
      __this_01 = (__this->fields)._colors;
    } while (__this_01 != (System_Collections_Generic_List_string__o *)0x0);
  }
LAB_041dcb1f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CancelPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dcf50

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors(__this,method);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Serialized
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dd0f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704ea4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ea4 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    ppSVar3 = &(__this->fields)._lastText;
  }
  else {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppSVar3 = (System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     (*ppSVar3,(System_Collections_Generic_IList_string__o *)
                               (__this->fields)._colors,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x41dd170

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
          System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  System_String_o **ppSVar3;
  System_String_o *serialized;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  MethodInfo *in_RCX;
  
  if (DAT_05704ea5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ea5 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    ppSVar3 = &(__this->fields)._lastText;
  }
  else {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppSVar3 = (System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  serialized = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                         (*ppSVar3,stops,(MethodInfo *)0x0);
  document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       (serialized,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
            (__this,document,0,in_RCX);
  return serialized;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x41dd210

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  System_String_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_IList_string__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  int iVar8;
  undefined4 uVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  void *pvVar12;
  MethodInfo *method_00;
  ulong uVar13;
  MethodInfo *method_01;
  long lVar14;
  
  method_01 = (MethodInfo *)stops;
  if (DAT_05704ea6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata(&TypeInfo_IList_string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_05704ea6 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
            (__this,method_01);
  if (stops != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar6 = stops->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_ICollection_string) {
          pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
          goto LAB_041dd2c1;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041dd2c1:
    iVar8 = (*pVVar10->methodPtr)(stops,pVVar10->method);
    if (iVar8 != 0) {
      pSVar6 = stops->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_ICollection_string) {
            pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
            goto LAB_041dd34b;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar14);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041dd34b:
      uVar9 = (*pVVar10->methodPtr)(stops,pVVar10->method);
      pSVar11 = (System_String_o *)il2cpp_glue_02274930(TypeInfo_string,uVar9);
      ppSVar1 = &(__this->fields)._pendingImportColor;
      (__this->fields)._pendingImportColor = pSVar11;
      il2cpp_runtime_glue(ppSVar1,pSVar11);
      uVar13 = 0;
      do {
        pSVar6 = stops->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_ICollection_string) {
              pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto LAB_041dd3f3;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041dd3f3:
        iVar8 = (*pVVar10->methodPtr)(stops,pVVar10->method);
        if ((long)iVar8 <= (long)uVar13) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                    (__this,(System_Collections_Generic_IList_string__o *)
                            (__this->fields)._pendingImportColor,method_00);
          return;
        }
        pSVar11 = *ppSVar1;
        pSVar6 = stops->klass;
        uVar5._0_1_ = (pSVar6->_2).rank;
        uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IList_string) {
              pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto LAB_041dd463;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_IList_string,0);
LAB_041dd463:
        pvVar12 = (void *)(*pVVar10->methodPtr)(stops,uVar13 & 0xffffffff,pVVar10->method);
        if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(uint *)&pSVar11[1].klass <= uVar13) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (&pSVar11[1].monitor)[uVar13] = pvVar12;
        il2cpp_runtime_glue(&pSVar11[1].monitor + uVar13,pvVar12);
        uVar13 = uVar13 + 1;
      } while( true );
    }
  }
  (__this->fields)._pendingImportColor = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pendingImportColor,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dd5c0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  (__this->fields)._pendingImportColor = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pendingImportColor,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x41dd5e0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *type,System_Collections_Generic_IList_string__o *colors,
               MethodInfo *method)

{
  (__this->fields)._pendingImportColor = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pendingImportColor,0);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this,type,colors,method);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
            (__this,(MethodInfo *)type);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dd4d0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_05704ea7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ea7 = '\x01';
  }
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._gradientStops);
  (__this->fields)._previewEffectType = (System_String_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._previewEffectType);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview
            (__this,method_00);
  pTVar1 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._text;
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,pTVar1,(pTVar1->klass->vtable)._23_set_color.method);
      pTVar1 = (__this->fields)._text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        vtable_dispatch = (pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtable_dispatch)
                  (pTVar1,0,0,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method,
                   vtable_dispatch);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$DestroyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dc8f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool_conflict bVar2;
  PatreonEffects_NameEffectController_o **ppPVar3;
  
  if (DAT_05704ea8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ea8 = '\x01';
  }
  pPVar1 = (__this->fields)._effectPreview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    ppPVar3 = &(__this->fields)._effectPreview;
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
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dd630

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_InputField_TextSelectionEvent_o *pTVar2;
  TMPro_TMP_InputField_SelectionEvent_o *__this_00;
  TMPro_TMP_Text_o *pTVar3;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  bool_conflict bVar4;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_T0__T1__T2__o *pUVar5;
  MethodInfo *method_00;
  System_Action_string__o *value;
  
  if (DAT_05704ea9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyTextColors);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnTextChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnTextSelection);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string__int__int);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveListener);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveListener);
    DAT_05704ea9 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_041dd8e2;
    pTVar2 = (pTVar1->fields).m_OnEndTextSelection;
    call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (pTVar2 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto LAB_041dd8e2;
    UnityEngine_Events_UnityEvent<object>__RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)pTVar2,call,MethodInfo_Void_RemoveListener);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_041dd8e2;
    __this_00 = (pTVar1->fields).m_OnDeselect;
    pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string__int__int);
    UnityEngine_Events_UnityAction<object__int__int>___ctor();
    if (__this_00 == (TMPro_TMP_InputField_SelectionEvent_o *)0x0) goto LAB_041dd8e2;
    UnityEngine_Events_UnityEvent<object__int__int>__RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,pUVar5,MethodInfo_Void_RemoveListener);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_041dd8e2;
    pTVar2 = (pTVar1->fields).m_OnTextSelection;
    pUVar5 = (UnityEngine_Events_UnityAction_T0__T1__T2__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string__int__int);
    UnityEngine_Events_UnityAction<object__int__int>___ctor();
    if (pTVar2 == (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) goto LAB_041dd8e2;
    UnityEngine_Events_UnityEvent<object__int__int>__RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar2,pUVar5,MethodInfo_Void_RemoveListener);
  }
  pTVar3 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pTVar3 = (__this->fields)._text;
    method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
    System_Action<object>___ctor();
    if (pTVar3 == (TMPro_TMP_Text_o *)0x0) {
LAB_041dd8e2:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pTVar3->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
              (pTVar3,method_00,(pTVar3->klass->vtable)._79_remove_OnPreRenderText.method);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
            (__this,method_00);
  __this_01 = (__this->fields)._state;
  if (__this_01 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_01,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dd8f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  TMPro_TMP_InputField_o *pTVar3;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  int32_t start;
  int32_t iVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  System_String_o SStack_38;
  undefined8 uStack_20;
  
  if (DAT_05704eaa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eaa = '\x01';
  }
  if ((char)(__this->fields)._attached == '\0') {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,method);
  }
  pTVar3 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pTVar3 = (__this->fields)._input;
    if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) {
LAB_041ddb13:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)&(pTVar3->fields).m_Mesh != '\0') {
      bVar6 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        __this_00 = (__this->fields)._state;
        if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        in_RCX = (MethodInfo *)0x0;
        bVar6 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (__this_00,(__this->fields)._colorsEnabledKey,
                           (uint)*(byte *)((long)&(__this->fields)._attached + 2),(MethodInfo *)0x0)
        ;
        cVar5 = (char)bVar6;
      }
      else {
        cVar5 = *(char *)((long)&(__this->fields)._attached + 2);
      }
      if (cVar5 != '\0') {
        pTVar3 = (__this->fields)._input;
        if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
          iVar7 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar3,(MethodInfo *)0x0);
          pTVar3 = (__this->fields)._input;
          if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
            start = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar3,(MethodInfo *)0x0)
            ;
            if (iVar7 <= start) {
              start = iVar7;
            }
            pTVar3 = (__this->fields)._input;
            if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
              iVar7 = TMPro_TMP_InputField__get_selectionStringAnchorPosition
                                (pTVar3,(MethodInfo *)0x0);
              pTVar3 = (__this->fields)._input;
              if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
                iVar8 = TMPro_TMP_InputField__get_selectionStringFocusPosition
                                  (pTVar3,(MethodInfo *)0x0);
                if (iVar7 < iVar8) {
                  iVar7 = iVar8;
                }
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                          (__this,start,iVar7,in_RCX);
                iVar1 = (__this->fields)._selectionStart;
                if ((iVar1 < 0) || ((__this->fields)._selectionEnd <= iVar1)) {
                  (__this->fields)._openedStart = -1;
                  (__this->fields)._openedEnd = -1;
                  return;
                }
                method_00 = (MethodInfo *)0x0;
                bVar6 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
                if ((char)bVar6 != '\0') {
                  return;
                }
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
                if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
                  pSVar4 = (__this->fields)._pickerId;
                  node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pTVar3,(MethodInfo *)0x0);
                  SStack_38.fields._stringLength = 0;
                  SStack_38.fields._firstChar = 0;
                  SStack_38.fields._6_2_ = 0;
                  uStack_20 = 0;
                  SStack_38.klass = (System_String_c *)0x0;
                  SStack_38.monitor = (void *)0x0;
                  __this_01.fields.GameObject =
                       (UnityEngine_GameObject_o *)in_stack_ffffffffffffffb0;
                  __this_01.fields.ElementId = (System_String_o *)in_stack_ffffffffffffffa8;
                  __this_01.fields.Node =
                       (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_ffffffffffffffb8;
                  __this_01.fields._24_8_ = in_stack_ffffffffffffffc0;
                  Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                            (__this_01,&SStack_38,(UnityEngine_GameObject_o *)pSVar4,node,
                             (MethodInfo *)0x0);
                  pSVar4 = (__this->fields)._pickerId;
                  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  context.fields.GameObject = SStack_38.monitor;
                  context.fields.ElementId = (System_String_o *)SStack_38.klass;
                  context.fields.Node =
                       (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SStack_38.fields;
                  context.fields._24_8_ = uStack_20;
                  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                            (context,pSVar4,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto LAB_041ddb13;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dcbf0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return CONCAT31((int3)((uint)bVar1 >> 8),
                    *(char *)((long)&(__this->fields)._attached + 2) != '\0');
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      (__this_00,(__this->fields)._colorsEnabledKey,
                       (uint)*(byte *)((long)&(__this->fields)._attached + 2),(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x41ddbf0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  char cVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  bVar2 = System_String__op_Equality(key,(__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (__this->fields)._state;
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto LAB_041ddc42;
      method_00 = (MethodInfo *)(__this->fields)._colorsEnabledKey;
      bVar2 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (__this_00,(System_String_o *)method_00,
                         (uint)*(byte *)((long)&(__this->fields)._attached + 2),(MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      cVar1 = *(char *)((long)&(__this->fields)._attached + 2);
    }
    if (cVar1 == '\0') {
LAB_041ddc42:
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ddc50

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int32_t length;
  System_Action_GameObject__o *pSVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  UnityEngine_GameObject_o *pUVar9;
  MethodInfo *pMVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar11;
  System_Collections_Generic_List_string__o *__this_00;
  char local_31;
  Il2CppMethodPointer local_30;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_28;
  
  pMVar10 = (MethodInfo *)value;
  if (DAT_05704eab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"\n");
    DAT_05704eab = '\x01';
  }
  local_28 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  local_30 = (Il2CppMethodPointer)0x0;
  local_31 = '\0';
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument
                     (__this,pMVar10);
  pMVar10 = (MethodInfo *)&stack0xffffffffffffffd0;
  bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
                    (value,pGVar6,&stack0xffffffffffffffd8,(System_String_o **)pMVar10,
                     (bool_conflict *)&local_31,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    *(Il2CppMethodPointer *)&(__this->fields)._colorsEnabled = local_30;
    il2cpp_runtime_glue(&(__this->fields)._colorsEnabled);
    if (local_31 != '\0') {
      (__this->fields)._pendingImportColor = (System_String_o *)0x0;
      pMVar11 = (MethodInfo *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._pendingImportColor);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                (__this,pMVar11);
      pGVar6 = local_28;
      goto LAB_041dde6c;
    }
  }
  if (value == (System_String_o *)0x0) {
    iVar2 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    iVar2 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    pSVar7 = value;
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar7 = MiscExtensions__StripRichText(pSVar7,(MethodInfo *)0x0);
  pSVar7 = MiscExtensions__StripHex(pSVar7,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    pMVar10 = (MethodInfo *)0x0;
    pSVar7 = System_String__Replace
                       (pSVar7,"\n",
                        (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0)
    ;
    if ((pSVar7 != (System_String_o *)0x0) ||
       (pSVar7 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
       pSVar7 != (System_String_o *)0x0)) {
      if (0x1f < (pSVar7->fields)._stringLength) {
        pMVar10 = (MethodInfo *)0x0;
        pSVar7 = System_String__Substring(pSVar7,0,0x1f,(MethodInfo *)0x0);
      }
      bVar5 = System_String__op_Inequality(pSVar7,value,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                  (__this,pSVar7,method_00);
      }
      pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         ((__this->fields)._lastText,
                          (System_Collections_Generic_IList_string__o *)(__this->fields)._colors,
                          (MethodInfo *)0x0);
      pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
                         (pSVar8,pSVar7,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar8,(MethodInfo *)0x0);
      bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
                        (__this,pGVar6,method_01);
      if ((char)bVar5 != '\0') {
        (__this->fields)._pendingImportColor = (System_String_o *)0x0;
        pMVar11 = (MethodInfo *)0x0;
        il2cpp_runtime_glue();
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  (__this,pMVar11);
        *(undefined8 *)&(__this->fields)._colorsEnabled = 0;
        il2cpp_runtime_glue(&(__this->fields)._colorsEnabled,0);
LAB_041dde6c:
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                  (__this,pGVar6,1,pMVar10);
        pSVar3 = (__this->fields)._imported;
        if (pSVar3 != (System_Action_GameObject__o *)0x0) {
          pUVar9 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          (*(code *)(pSVar3->fields).invoke_impl)
                    ((pSVar3->fields).method_code,pUVar9,(pSVar3->fields).method);
        }
        return;
      }
      pSVar8 = (__this->fields)._pendingImportColor;
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                           (pSVar7,(System_Collections_Generic_IList_string__o *)pSVar8,
                            (MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                           (pSVar7,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                  (__this,pGVar6,0,pMVar10);
        return;
      }
      if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
        (__this->fields)._lastText = (pGVar6->fields).Text;
        il2cpp_runtime_glue(&(__this->fields)._lastText);
        __this_00 = (__this->fields)._colors;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (__this_00->fields)._size;
          (__this_00->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,
                                (MethodInfo *)0x0);
            __this_00 = (__this->fields)._colors;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041ddfde;
          }
          System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (System_Collections_Generic_IEnumerable_T__o *)(pGVar6->fields).Colors,
                     MethodInfo_Void_AddRange);
          if (DAT_05704eac == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Object);
            DAT_05704eac = '\x01';
          }
          pTVar4 = (__this->fields)._text;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            return;
          }
          pTVar4 = (__this->fields)._text;
          if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
            (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                      (pTVar4,0,0,(pTVar4->klass->vtable)._106_ForceMeshUpdate.method);
            return;
          }
        }
      }
    }
  }
LAB_041ddfde:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RefreshTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dc9a0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  
  if (DAT_05704eac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eac = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._text;
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      vtable_dispatch = (pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr;
      (*vtable_dispatch)
                (pTVar1,0,0,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method,
                 vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyDocument
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, bool updateInput, const MethodInfo* method);
// 0x41dc0f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,
               bool_conflict updateInput,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_string__o *__this_00;
  
  method_01 = (MethodInfo *)document;
  if (DAT_05704ead == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ead = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim(document,method_01);
  if (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    (__this->fields)._lastText = (document->fields).Text;
    il2cpp_runtime_glue(&(__this->fields)._lastText);
    __this_00 = (__this->fields)._colors;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_00->fields)._size;
      (__this_00->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0)
        ;
        __this_00 = (__this->fields)._colors;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041dc24d;
      }
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(document->fields).Colors,
                 MethodInfo_Void_AddRange);
      if ((char)updateInput != '\0') {
        x = (__this->fields)._input;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                    (__this,(document->fields).Text,method_00);
        }
      }
      if (DAT_05704eac == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05704eac = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pTVar2 = (__this->fields)._text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        vtable_dispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtable_dispatch)
                  (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,
                   vtable_dispatch);
        return;
      }
    }
  }
LAB_041dc24d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CurrentDocument
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41ddff0

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704eae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Document);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    DAT_05704eae = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
              il2cpp_runtime_glue(TypeInfo_Document);
  if (DAT_05704e9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704e9c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_System_String);
  (__this_00->fields).Colors = pSVar1;
  il2cpp_runtime_glue(&(__this_00->fields).Colors);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._lastText;
  if (pSVar2 == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
  }
  (__this_00->fields).Text = pSVar2;
  il2cpp_runtime_glue(&__this_00->fields);
  pSVar1 = (__this_00->fields).Colors;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._colors,MethodInfo_Void_AddRange)
    ;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPendingImportColor
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x41de200

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,
          MethodInfo *method)

{
  System_String_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  uint16_t uVar1;
  bool_conflict bVar2;
  int iVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  int index;
  bool_conflict bVar4;
  ulong uVar5;
  int iVar6;
  System_String_o *__this_02;
  int iVar7;
  
  if (DAT_05704eaf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05704eaf = '\x01';
  }
  bVar4 = 0;
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(__this->fields)._colorsEnabled,(MethodInfo *)0x0);
  if ((document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     ((char)bVar2 == '\0')) {
    bVar4 = 0;
    bVar2 = System_String__IsNullOrEmpty((document->fields).Text,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (__this->fields)._lastText;
      if (__this_00 == (System_String_o *)0x0) {
        __this_00 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        __this_02 = (document->fields).Text;
      }
      else {
        __this_02 = (document->fields).Text;
      }
      if (((__this_02 == (System_String_o *)0x0) &&
          (__this_02 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
          __this_02 == (System_String_o *)0x0)) || (__this_00 == (System_String_o *)0x0)) {
LAB_041de419:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar3 = (__this_02->fields)._stringLength;
      iVar6 = (__this_00->fields)._stringLength;
      index = 0;
      uVar5 = 0;
      bVar4 = 0;
      if (iVar6 < iVar3) {
        if ((0 < iVar6) && (0 < iVar3)) {
          iVar3 = 0;
          do {
            index = iVar3;
            uVar1 = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
            uVar5 = CONCAT62(extraout_var,uVar1) & 0xffffffff;
            uVar1 = System_String__get_Chars(__this_02,index,(MethodInfo *)0x0);
            if ((uint16_t)uVar5 != uVar1) {
              iVar6 = (__this_00->fields)._stringLength;
              goto LAB_041de35d;
            }
            iVar3 = index + 1;
            iVar6 = (__this_00->fields)._stringLength;
          } while ((iVar3 < iVar6) && (iVar3 < (__this_02->fields)._stringLength));
          index = index + 1;
        }
LAB_041de35d:
        iVar3 = 0;
        if (0 < iVar6 - index) {
          iVar7 = -1;
          do {
            if ((__this_02->fields)._stringLength - index <= iVar3) break;
            uVar1 = System_String__get_Chars(__this_00,iVar6 + iVar7,(MethodInfo *)0x0);
            uVar5 = CONCAT62(extraout_var_00,uVar1) & 0xffffffff;
            uVar1 = System_String__get_Chars
                              (__this_02,(__this_02->fields)._stringLength + iVar7,(MethodInfo *)0x0
                              );
            if ((uint16_t)uVar5 != uVar1) break;
            iVar3 = iVar3 + 1;
            iVar6 = (__this_00->fields)._stringLength;
            iVar7 = iVar7 + -1;
          } while (iVar3 < iVar6 - index);
        }
        iVar3 = (__this_02->fields)._stringLength - iVar3;
        if (index < iVar3) {
          do {
            __this_01 = (document->fields).Colors;
            if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041de419;
            uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
            bVar4 = (bool_conflict)uVar5;
            if ((__this_01->fields)._size <= index) {
              return bVar4;
            }
            System_Collections_Generic_List<object>__set_Item
                      ((System_Collections_Generic_List_object__o *)__this_01,index,
                       *(Il2CppObject **)&(__this->fields)._colorsEnabled,MethodInfo_Void_set_Item);
            index = index + 1;
          } while (iVar3 != index);
        }
        else {
          bVar4 = 0;
        }
      }
    }
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41de150

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *value,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  
  if (DAT_05704eb0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eb0 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pTVar1 = (__this->fields)._input;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__ForceLabelUpdate(pTVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim (System_String_o* value, const MethodInfo* method);
// 0x41de100

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim
          (System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((value == (System_String_o *)0x0) &&
     (value = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8), value == (System_String_o *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (0x1f < (value->fields)._stringLength) {
    pSVar1 = System_String__Substring(value,0,0x1f,(MethodInfo *)0x0);
    return pSVar1;
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x41de420

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar1;
  int32_t *piVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *item;
  System_String_o *pSVar5;
  uint uVar6;
  System_Collections_Generic_List_string__o *__this;
  
  if (DAT_05704eb1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704eb1 = '\x01';
  }
  if (document == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return;
  }
  pSVar5 = (document->fields).Text;
  if ((pSVar5 != (System_String_o *)0x0) ||
     (pSVar5 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8), pSVar5 != (System_String_o *)0x0
     )) {
    pGVar1 = &document->fields;
    if (0x1f < (pSVar5->fields)._stringLength) {
      pSVar5 = System_String__Substring(pSVar5,0,0x1f,(MethodInfo *)0x0);
    }
    (document->fields).Text = pSVar5;
    il2cpp_runtime_glue(pGVar1);
    __this = (document->fields).Colors;
    while ((__this != (System_Collections_Generic_List_string__o *)0x0 &&
           (pSVar5 = pGVar1->Text, pSVar5 != (System_String_o *)0x0))) {
      uVar6 = (__this->fields)._size;
      if ((int)uVar6 <= (pSVar5->fields)._stringLength) goto LAB_041de520;
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,uVar6 - 1,MethodInfo_Void_RemoveAt);
      __this = (document->fields).Colors;
    }
  }
  goto LAB_041de59b;
  while( true ) {
    if (uVar6 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar6 + 1;
      pSVar3->m_Items[(int)uVar6] = item;
      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar6,item);
      __this = (document->fields).Colors;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      __this = (document->fields).Colors;
    }
    if (__this == (System_Collections_Generic_List_string__o *)0x0) break;
    uVar6 = (__this->fields)._size;
    pSVar5 = pGVar1->Text;
    if (pSVar5 == (System_String_o *)0x0) break;
LAB_041de520:
    item = "FFFFFF";
    lVar4 = MethodInfo_Void_Add;
    if ((pSVar5->fields)._stringLength <= (int)uVar6) {
      return;
    }
    piVar2 = &(__this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) break;
  }
LAB_041de59b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* __, int32_t start, int32_t end, const MethodInfo* method);
// 0x41de5b0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *__,int32_t start,int32_t end,MethodInfo *method)

{
  undefined4 in_register_0000000c;
  
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
            (__this,start,end,(MethodInfo *)CONCAT44(in_register_0000000c,end));
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x41ddb20

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,int32_t start,
               int32_t end,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  long lVar2;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  int32_t iVar6;
  
  if (DAT_05704eb2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eb2 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pTVar1 = (__this->fields)._input;
    if ((pTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
       (lVar2 = *(long *)&(pTVar1->fields).m_SelectionColor.fields.a, lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar5 = *(int *)(lVar2 + 0x10);
    iVar6 = start;
    if (iVar5 <= start) {
      iVar6 = iVar5;
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
      if (*(char *)&(pTVar1->fields).m_Mesh != '\0') {
        (__this->fields)._selectionStart = -1;
        (__this->fields)._selectionEnd = -1;
      }
    }
    else {
      iVar4 = iVar5;
      if (iVar6 <= iVar5) {
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
// 0x41dcc30

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar4;
  long lVar5;
  System_String_o *item;
  int iVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  
  if (DAT_05704eb3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_05704eb3 = '\x01';
  }
  pSVar7 = (__this->fields)._previewColors;
  if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar7 = (__this->fields)._colors;
    if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar6 = (__this->fields)._selectionEnd;
      iVar2 = (pSVar7->fields)._size;
      if (iVar6 <= iVar2) {
        iVar2 = iVar6;
      }
      iVar6 = (__this->fields)._selectionStart;
      if (iVar2 <= iVar6) {
LAB_041dcd72:
        *(undefined1 *)((long)&(__this->fields)._attached + 1) = 1;
        return;
      }
      do {
        __this_00 = (__this->fields)._previewColors;
        item = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar7,iVar6,MethodInfo_String_get_Item);
        lVar5 = MethodInfo_Void_Add;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_00->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) break;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = item;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (iVar2 <= iVar6 + 1) goto LAB_041dcd72;
        iVar6 = iVar6 + 1;
        pSVar7 = (__this->fields)._colors;
      } while (pSVar7 != (System_Collections_Generic_List_string__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestorePreviewColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dcf70

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_Text_o *pTVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  Il2CppObject *value;
  System_Collections_Generic_List_string__o *__this_00;
  int index;
  System_Collections_Generic_List_string__o *__this_01;
  int iVar4;
  
  if (DAT_05704eb4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05704eb4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._attached + 1) == '\0') {
    return;
  }
  __this_01 = (__this->fields)._previewColors;
  if ((__this_01 != (System_Collections_Generic_List_string__o *)0x0) &&
     (__this_00 = (__this->fields)._colors,
     __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
    index = (__this->fields)._selectionStart;
    iVar1 = (__this_00->fields)._size;
    iVar4 = (__this_01->fields)._size + index;
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    if (index < iVar4) {
      do {
        value = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           index - (__this->fields)._selectionStart,MethodInfo_String_get_Item);
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
        System_Collections_Generic_List<object>__set_Item
                  ((System_Collections_Generic_List_object__o *)__this_00,index,value,MethodInfo_Void_set_Item);
        index = index + 1;
        if (iVar4 <= index) goto LAB_041dd056;
        __this_00 = (__this->fields)._colors;
        __this_01 = (__this->fields)._previewColors;
      } while (__this_01 != (System_Collections_Generic_List_string__o *)0x0);
    }
    else {
LAB_041dd056:
      if (DAT_05704eac == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05704eac = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pTVar2 = (__this->fields)._text;
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


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x41de5c0

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  PatreonEffects_NameEffectController_o *x;
  System_Collections_Generic_List_string__o *pSVar4;
  TMPro_TMP_CharacterInfo_array *pTVar5;
  TMPro_TMP_MeshInfo_array *pTVar6;
  UnityEngine_Color32_array *pUVar7;
  bool_conflict bVar8;
  int iVar9;
  int32_t iVar10;
  UnityEngine_Color32_o UVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  ulong uVar12;
  long lVar13;
  
  if (DAT_05704eb5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eb5 = '\x01';
  }
  x = (__this->fields)._effectPreview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     (pSVar4 = (__this->fields)._colors, pSVar4 != (System_Collections_Generic_List_string__o *)0x0)
     ) {
    iVar1 = (textInfo->fields).characterCount;
    iVar9 = (pSVar4->fields)._size;
    if (iVar1 <= iVar9) {
      iVar9 = iVar1;
    }
    if (iVar9 < 1) {
      return;
    }
    lVar13 = 0x58;
    uVar12 = 0;
    pTVar5 = (textInfo->fields).characterInfo;
    method_00 = extraout_RDX;
    while (pTVar5 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      if ((uint)pTVar5->max_length <= uVar12) goto LAB_041de737;
      if ((*(byte *)((long)&pTVar5->m_Items[0].fields.topRight.fields.y + lVar13) & 1) != 0) {
        uVar2 = *(uint *)((long)pTVar5->m_Items + lVar13 + -0x20);
        uVar3 = *(uint *)((long)pTVar5->m_Items + lVar13 + -0xc);
        UVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
                           (__this,(int32_t)uVar12,method_00);
        pTVar6 = (textInfo->fields).meshInfo;
        if (pTVar6 == (TMPro_TMP_MeshInfo_array *)0x0) break;
        if ((uint)pTVar6->max_length <= uVar2) {
LAB_041de737:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar7 = pTVar6->m_Items[(int)uVar2].fields.colors32;
        if (pUVar7 == (UnityEngine_Color32_array *)0x0) break;
        if ((uint)pUVar7->max_length <= uVar3) goto LAB_041de737;
        iVar10 = UVar11.fields.rgba;
        (&pUVar7->m_Items[0].fields.rgba)[(int)uVar3] = iVar10;
        if ((uint)pUVar7->max_length <= uVar3 + 1) goto LAB_041de737;
        (&pUVar7->m_Items[0].fields.rgba)[(int)(uVar3 + 1)] = iVar10;
        if ((uint)pUVar7->max_length <= uVar3 + 2) goto LAB_041de737;
        (&pUVar7->m_Items[0].fields.rgba)[(int)(uVar3 + 2)] = iVar10;
        if ((uint)pUVar7->max_length <= uVar3 + 3) goto LAB_041de737;
        method_00 = (MethodInfo *)(long)(int)(uVar3 + 3);
        (&pUVar7->m_Items[0].fields.rgba)[(long)method_00] = iVar10;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x178;
      if ((long)iVar9 <= (long)uVar12) {
        return;
      }
      pTVar5 = (textInfo->fields).characterInfo;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorFor
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t index, const MethodInfo* method);
// 0x41de750

UnityEngine_Color32_o
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,int32_t index,
          MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  UnityEngine_Color32_o UVar3;
  float fVar4;
  undefined8 uVar5;
  UnityEngine_Color_Fields local_28;
  
  if (DAT_05704eb6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&"#");
    il2cpp_init_method_metadata(&"#FFFFFF");
    DAT_05704eb6 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  pSVar2 = "#FFFFFF";
  if (-1 < index) {
    __this_00 = (__this->fields)._colors;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (index < (__this_00->fields)._size) {
      pSVar2 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_String_get_Item)
      ;
      pSVar2 = System_String__Concat("#",pSVar2,(MethodInfo *)0x0);
    }
  }
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar2,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    uVar5._0_4_ = 1.0;
    uVar5._4_4_ = 1.0;
    fVar4 = 1.0;
  }
  else {
    fVar4 = local_28.r;
    uVar5 = local_28._8_8_;
  }
  UVar3.fields = (UnityEngine_Color32_Fields)il2cpp_glue_03ad8d60(fVar4,uVar5,0);
  return (UnityEngine_Color32_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$StoreEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x41dbe40

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               System_String_o *type,System_Collections_Generic_IList_string__o *colors,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_Generic_IList_string__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  undefined4 uVar6;
  int iVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *pSVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  System_String_o **ppSVar13;
  
  if (DAT_05704eb7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata(&TypeInfo_IList_string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_05704eb7 = '\x01';
  }
  (__this->fields)._gradientStops = (System_String_array *)type;
  il2cpp_runtime_glue(&(__this->fields)._gradientStops,type);
  if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
    (__this->fields)._previewEffectType = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._previewEffectType,0);
    return;
  }
  pSVar4 = colors->klass;
  uVar1._0_1_ = (pSVar4->_2).rank;
  uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar5 = (pSVar4->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_ICollection_string) {
        pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
        goto LAB_041dbf2b;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar12);
  }
  pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041dbf2b:
  uVar6 = (*pVVar8->methodPtr)(colors,pVVar8->method);
  pSVar9 = (System_String_o *)il2cpp_glue_02274930(TypeInfo_string,uVar6);
  (__this->fields)._previewEffectType = pSVar9;
  ppSVar13 = &(__this->fields)._previewEffectType;
  il2cpp_runtime_glue(ppSVar13,pSVar9);
  uVar11 = 0;
  do {
    pSVar4 = colors->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_ICollection_string) {
          pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
          goto LAB_041dbfc3;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar12);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041dbfc3:
    iVar7 = (*pVVar8->methodPtr)(colors,pVVar8->method);
    if ((long)iVar7 <= (long)uVar11) {
      return;
    }
    pSVar9 = *ppSVar13;
    pSVar4 = colors->klass;
    uVar3._0_1_ = (pSVar4->_2).rank;
    uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IList_string) {
          pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
          goto LAB_041dc033;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar12);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_IList_string,0);
LAB_041dc033:
    pvVar10 = (void *)(*pVVar8->methodPtr)(colors,uVar11 & 0xffffffff,pVVar8->method);
    if (pSVar9 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(uint *)&pSVar9[1].klass <= uVar11) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (&pSVar9[1].monitor)[uVar11] = pvVar10;
    il2cpp_runtime_glue(&pSVar9[1].monitor + uVar11,pvVar10);
    uVar11 = uVar11 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyStoredEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dc720

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **ppPVar1;
  TMPro_TMP_Text_o *pTVar2;
  uint in_EAX;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar4;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo_24F0EB0 **in_RCX;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_05704eb8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eb8 = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  pTVar2 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  bVar3 = System_String__IsNullOrEmpty
                    ((System_String_o *)(__this->fields)._gradientStops,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  bVar3 = PatreonEffects_NameEffectPresets__TryResolve
                    ((System_String_o *)(__this->fields)._gradientStops,
                     (int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pPVar4 = (__this->fields)._effectPreview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppPVar1 = &(__this->fields)._effectPreview;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar2 = (__this->fields)._text;
    if ((pTVar2 == (TMPro_TMP_Text_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_041dc8e9;
    in_RCX = &MethodInfo_NameEffectController_AddComponent_NameEffectCont;
    pPVar4 = (PatreonEffects_NameEffectController_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    *ppPVar1 = pPVar4;
    il2cpp_runtime_glue(ppPVar1);
  }
  if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(*ppPVar1,(MethodInfo *)0x0);
    settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_28._4_4_,(MethodInfo *)0x0);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,0
                 ,&(settings->fields).gradientA,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,1
                 ,&(settings->fields).gradientB,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,2
                 ,&(settings->fields).gradientC,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,3
                 ,&(settings->fields).gradientD,(MethodInfo *)in_RCX);
      pTVar2 = (__this->fields)._text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0x3f800000,pTVar2,(pTVar2->klass->vtable)._23_set_color.method);
        if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppPVar1,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_041dc8e9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPreviewColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor (System_Collections_Generic_IList_string__o* colors, int32_t index, UnityEngine_Color_o* target, const MethodInfo* method);
// 0x41de830

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
               (System_Collections_Generic_IList_string__o *colors,int32_t index,
               UnityEngine_Color_o *target,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_IList_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int iVar5;
  bool_conflict bVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *htmlString;
  long lVar8;
  UnityEngine_Color_Fields local_28;
  
  if (DAT_05704eb9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata();
    DAT_05704eb9 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar3 = colors->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar8) == TypeInfo_ICollection_string) {
          pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar8);
          goto LAB_041de8d1;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar8);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041de8d1:
    iVar5 = (*pVVar7->methodPtr)(colors,pVVar7->method);
    if (index < iVar5) {
      pSVar3 = colors->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar8) == TypeInfo_IList_string) {
            pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar8);
            goto LAB_041de941;
          }
          lVar8 = lVar8 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar8);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_IList_string,0);
LAB_041de941:
      htmlString = (System_String_o *)(*pVVar7->methodPtr)(colors,index,pVVar7->method);
      bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                        (htmlString,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
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
// 0x41dceb0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  
  if (DAT_05704eba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704eba = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41dcd90

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_string__o *pSVar2;
  bool_conflict bVar3;
  int value;
  long lVar4;
  TMPro_TMP_InputField_o *pTVar5;
  
  if (DAT_05704ebb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ebb = '\x01';
  }
  pTVar5 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  value = (__this->fields)._selectionEnd;
  pTVar5 = (__this->fields)._input;
  if (value < 0) {
    if (pTVar5 == (TMPro_TMP_InputField_o *)0x0) goto LAB_041dceaa;
    value = TMPro_TMP_InputField__get_caretPosition(pTVar5,(MethodInfo *)0x0);
    pTVar5 = (__this->fields)._input;
    if ((pTVar5 == (TMPro_TMP_InputField_o *)0x0) ||
       (lVar4 = *(long *)&(pTVar5->fields).m_SelectionColor.fields.a, lVar4 == 0))
    goto LAB_041dceaa;
    if (-1 < value) goto LAB_041dce41;
    value = 0;
  }
  else {
    if ((pTVar5 == (TMPro_TMP_InputField_o *)0x0) ||
       (lVar4 = *(long *)&(pTVar5->fields).m_SelectionColor.fields.a, lVar4 == 0))
    goto LAB_041dceaa;
LAB_041dce41:
    if (*(int *)(lVar4 + 0x10) < value) {
      value = *(int *)(lVar4 + 0x10);
    }
  }
  TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar5,value,(MethodInfo *)0x0);
  pTVar5 = (__this->fields)._input;
  if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar5,value,(MethodInfo *)0x0);
    (__this->fields)._selectionStart = -1;
    (__this->fields)._selectionEnd = -1;
    (__this->fields)._openedStart = -1;
    (__this->fields)._openedEnd = -1;
    pSVar2 = (__this->fields)._previewColors;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      *(undefined1 *)((long)&(__this->fields)._attached + 1) = 0;
      return;
    }
  }
LAB_041dceaa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_2500F90* method);
// 0x2600f90

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find<object>
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_2500F90 *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if ((method->rgctx_data == (MethodInfo_2500F90_RGCTXs *)0x0) &&
     (il2cpp_init_method_metadata(&TypeInfo_Object), method->rgctx_data == (MethodInfo_2500F90_RGCTXs *)0x0)) {
    il2cpp_glue_022c2910(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)root,1,
                            (MethodInfo_24A5220 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_)
       , pSVar4 == (System_Object_array *)0x0)) {
LAB_026010ec:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_026010ec;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (Il2CppObject *)x;
            }
          }
          uVar5 = uVar5 + 1;
          uVar2 = (uint)pSVar4->max_length;
          if ((long)(int)uVar2 <= (long)uVar5) {
            return (Il2CppObject *)0x0;
          }
        } while (uVar5 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x41de970

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (DAT_05704ebc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704ebc = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_System_String);
  (__this->fields)._colors = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._colors,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_System_String);
  (__this->fields)._previewColors = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._previewColors,pSVar1);
  (__this->fields)._lastText = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._lastText);
  (__this->fields)._selectionStart = -1;
  (__this->fields)._selectionEnd = -1;
  (__this->fields)._openedStart = -1;
  (__this->fields)._openedEnd = -1;
  *(undefined1 *)((long)&(__this->fields)._attached + 2) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


