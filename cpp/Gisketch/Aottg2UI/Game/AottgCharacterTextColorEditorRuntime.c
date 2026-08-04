// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditorRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* inputId, System_String_o* value, System_String_o* pickerId, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x450ed30

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *inputId
               ,System_String_o *value,System_String_o *pickerId,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *colorsEnabledKey,
               bool_conflict colorsEnabled,System_Action_GameObject__o *imported,
               System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_Action_string__o *value_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *document;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *method_02;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  
  method_00 = (MethodInfo *)pickerId;
  if (cRam00000000057aed73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    cRam00000000057aed73 = '\x01';
  }
  (__this->fields)._inputId = inputId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._inputId,inputId);
  (__this->fields)._pickerId = pickerId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pickerId,pickerId);
  (__this->fields)._state = state;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._state,state);
  (__this->fields)._colorsEnabledKey = colorsEnabledKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colorsEnabledKey,colorsEnabledKey);
  *(undefined1 *)((long)&(__this->fields)._attached + 2) = (undefined1)colorsEnabled;
  (__this->fields)._imported = imported;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._imported);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (System_String_array *)PatreonEffects_NameFontCatalog__Normalize(previewFont,(MethodInfo *)0x0);
  (__this->fields)._previewEffectColors = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._previewEffectColors,pSVar4);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this,previewEffectType,previewEffectColors,method_00);
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value_00 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,value_00,(MethodInfo *)0x0);
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._initialValue = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._initialValue);
  if ((char)(__this->fields)._attached == '\0') {
    return;
  }
  document = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((__this->fields)._initialValue,(MethodInfo *)value);
  method_02 = document;
  if (g_data_057aed80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed80 = '\x01';
  }
  __this_01 = document;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_4410c10
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)document,
             (MethodInfo *)method_02);
  if (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    method_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                (document->fields).m_CachedPtr;
    (__this->fields)._lastText = (System_String_o *)method_02;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._lastText);
    __this_02 = (__this->fields)._colors;
    __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
    if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_02->fields)._size;
      (__this_02->fields)._size = 0;
      if (0 < length) {
        method_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        System_Array__Clear((System_Array_o *)(__this_02->fields)._items,0,length,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._colors;
        __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) goto label_0450f31d;
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Collections_Generic_IEnumerable_T__o *)(document->fields).m_CancellationTokenSource,
                 MethodInfo_Void_AddRange);
      x = (__this->fields)._input;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                  (__this,(System_String_o *)(document->fields).m_CachedPtr,method_01);
      }
      if (g_data_057aed7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed7f = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pTVar2 = (__this->fields)._text;
      __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
label_0450f31d:
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this_01,(MethodInfo *)method_02);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSerializedValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x450f160

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSerializedValue
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  MethodInfo *in_RCX;
  char extraout_DL;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *method_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    (__this->fields)._initialValue = value;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._initialValue);
    if ((char)(__this->fields)._attached != '\0') {
      document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                           ((__this->fields)._initialValue,(MethodInfo *)value);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,document,1,in_RCX);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)value;
  if (g_data_057aed80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed80 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)value;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_4410c10
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)value,(MethodInfo *)method_01);
  if ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)value !=
      (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    method_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)value)->fields).m_CachedPtr
    ;
    (__this->fields)._lastText = (System_String_o *)method_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._lastText);
    __this_01 = (__this->fields)._colors;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_01->fields)._size;
      (__this_01->fields)._size = 0;
      if (0 < length) {
        method_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        System_Array__Clear((System_Array_o *)(__this_01->fields)._items,0,length,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._colors;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_0450f31d;
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)value)->fields).
                 m_CancellationTokenSource,MethodInfo_Void_AddRange);
      if (extraout_DL != '\0') {
        x = (__this->fields)._input;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                    (__this,(System_String_o *)
                            (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)value)->fields)
                            .m_CachedPtr,method_00);
        }
      }
      if (g_data_057aed7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed7f = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pTVar2 = (__this->fields)._text;
      __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
label_0450f31d:
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this_00,(MethodInfo *)method_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450f330

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Start
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Attach
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450f340

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  float *pfVar1;
  TMPro_TMP_InputField_o *pTVar2;
  TMPro_TMP_Text_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  System_DelegateData_o *pSVar5;
  code *vtableDispatch;
  bool_conflict bVar6;
  UnityEngine_Transform_o *root;
  TMPro_TMP_InputField_o *pTVar7;
  MethodInfo *pMVar8;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar9;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo_253D000 **ppMVar10;
  MethodInfo_255A020 **method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  bool_conflict *pbVar11;
  System_String_array *method_01;
  TMPro_TMP_InputField_o *pTVar12;
  System_DelegateData_o *pSVar13;
  PatreonEffects_NameEffectController_o *__this_01;
  long *plVar14;
  TMPro_TMP_InputField_o *unaff_R12;
  TMPro_TMP_InputField_o **ppTVar15;
  undefined8 uStack_60;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGStack_58;
  TMPro_TMP_InputField_o *pTStack_50;
  TMPro_TMP_InputField_o **ppTStack_48;
  TMPro_TMP_InputField_o *pTStack_40;
  
  if (g_data_057aed74 == '\0') {
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f363;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f36f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f37b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f387;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f393;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f39f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f3ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f3b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f3c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f3cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057aed74 = '\x01';
  }
  if ((char)(__this->fields)._attached != '\0') {
    return;
  }
  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f3e9;
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  ppMVar10 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f3ff;
  pTVar7 = (TMPro_TMP_InputField_o *)
           Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_
                     (root,(__this->fields)._inputId,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ppTVar15 = &(__this->fields)._input;
  (__this->fields)._input = pTVar7;
  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f412;
  il2cpp_runtime_helper_022b4080(ppTVar15);
  pTVar7 = (__this->fields)._input;
  method_00 = (MethodInfo_255A020 **)ppMVar10;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f42e;
    il2cpp_runtime_helper_02337ed0();
    method_00 = (MethodInfo_255A020 **)ppMVar10;
  }
  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f43a;
  pTVar12 = pTVar7;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pTVar2 = *ppTVar15;
  if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
    *(undefined1 *)&(pTVar2->fields).m_IsTextComponentUpdateRequired = 0;
    pTVar7 = (TMPro_TMP_InputField_o *)(pTVar2->fields).m_OnEndTextSelection;
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f476;
    unaff_R12 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
    method_00 = (MethodInfo_255A020 **)0x0;
    pTStack_40 = (TMPro_TMP_InputField_o *)0x450f490;
    pTVar12 = unaff_R12;
    UnityEngine_Events_UnityAction_object____ctor();
    if (pTVar7 != (TMPro_TMP_InputField_o *)0x0) {
      pTStack_40 = (TMPro_TMP_InputField_o *)0x450f4ae;
      pTVar12 = pTVar7;
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pTVar7,
                 (UnityEngine_Events_UnityAction_T0__o *)unaff_R12,MethodInfo_Void_AddListener);
      if (*ppTVar15 != (TMPro_TMP_InputField_o *)0x0) {
        pTVar7 = (TMPro_TMP_InputField_o *)((*ppTVar15)->fields).m_OnDeselect;
        pTStack_40 = (TMPro_TMP_InputField_o *)0x450f4d0;
        unaff_R12 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
        method_00 = (MethodInfo_255A020 **)0x0;
        pTStack_40 = (TMPro_TMP_InputField_o *)0x450f4eb;
        pTVar12 = unaff_R12;
        UnityEngine_Events_UnityAction_object__int__int____ctor();
        if (pTVar7 != (TMPro_TMP_InputField_o *)0x0) {
          pTStack_40 = (TMPro_TMP_InputField_o *)0x450f50a;
          pTVar12 = pTVar7;
          UnityEngine_Events_UnityEvent_object__int__int___AddListener
                    ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar7,
                     (UnityEngine_Events_UnityAction_T0__T1__T2__o *)unaff_R12,MethodInfo_Void_AddListener);
          if (*ppTVar15 != (TMPro_TMP_InputField_o *)0x0) {
            pTVar7 = (TMPro_TMP_InputField_o *)((*ppTVar15)->fields).m_OnTextSelection;
            pTStack_40 = (TMPro_TMP_InputField_o *)0x450f52c;
            unaff_R12 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
            method_00 = (MethodInfo_255A020 **)0x0;
            pTStack_40 = (TMPro_TMP_InputField_o *)0x450f540;
            pTVar12 = unaff_R12;
            UnityEngine_Events_UnityAction_object__int__int____ctor();
            if (pTVar7 != (TMPro_TMP_InputField_o *)0x0) {
              pTStack_40 = (TMPro_TMP_InputField_o *)0x450f558;
              pTVar12 = pTVar7;
              UnityEngine_Events_UnityEvent_object__int__int___AddListener
                        ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)pTVar7,
                         (UnityEngine_Events_UnityAction_T0__T1__T2__o *)unaff_R12,MethodInfo_Void_AddListener);
              if (*ppTVar15 != (TMPro_TMP_InputField_o *)0x0) {
                (__this->fields)._text =
                     *(TMPro_TMP_Text_o **)&((*ppTVar15)->fields).m_CachedViewportRect.fields.m_Width;
                pTStack_40 = (TMPro_TMP_InputField_o *)0x450f578;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._text);
                pTVar3 = (__this->fields)._text;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f594;
                  il2cpp_runtime_helper_02337ed0();
                }
                pTStack_40 = (TMPro_TMP_InputField_o *)0x450f5a0;
                bVar6 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                pMVar8 = extraout_RDX;
                if ((char)bVar6 == '\0') {
label_0450f5ec:
                  *(undefined1 *)&(__this->fields)._attached = 1;
                  method_01 = (__this->fields)._previewEffectColors;
                  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f602;
                  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
                            (__this,(System_String_o *)method_01,pMVar8);
                  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f60b;
                  pMVar8 = (MethodInfo *)
                           Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                                     ((__this->fields)._initialValue,(MethodInfo *)method_01);
                  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f61b;
                  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                            (__this,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)pMVar8,1
                             ,(MethodInfo *)method_00);
                  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
                            (__this,pMVar8);
                  return;
                }
                pTVar3 = (__this->fields)._text;
                pTStack_40 = (TMPro_TMP_InputField_o *)0x450f5b7;
                pTVar7 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
                method_00 = (MethodInfo_255A020 **)0x0;
                pTStack_40 = (TMPro_TMP_InputField_o *)0x450f5d1;
                pTVar12 = pTVar7;
                System_Action_object____ctor();
                ppTVar15 = (TMPro_TMP_InputField_o **)0x0;
                if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f5ec;
                  (*(pTVar3->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                            (pTVar3,pTVar7,(pTVar3->klass->vtable)._78_add_OnPreRenderText.method);
                  pMVar8 = extraout_RDX_00;
                  goto label_0450f5ec;
                }
              }
            }
          }
        }
      }
    }
  }
  pTStack_40 = (TMPro_TMP_InputField_o *)0x450f633;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pGStack_58 = __this;
  pTStack_50 = unaff_R12;
  ppTStack_48 = ppTVar15;
  pTStack_40 = pTVar7;
  if (g_data_057aed8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed8b = '\x01';
  }
  uStack_60 = uStack_60 & 0xffffffff;
  pSVar13 = *(System_DelegateData_o **)&(pTVar12->fields).m_Colors.fields.m_HighlightedColor.fields.g;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  bVar6 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(pTVar12->fields).m_Colors.fields.m_FadeDuration,(MethodInfo *)0x0)
  ;
  if ((char)bVar6 != '\0') {
    return;
  }
  bVar6 = PatreonEffects_NameEffectPresets__TryResolve
                    (*(System_String_o **)&(pTVar12->fields).m_Colors.fields.m_FadeDuration,
                     (int32_t *)((long)&uStack_60 + 4),(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar4 = *(UnityEngine_Object_o **)&(pTVar12->fields).m_Colors.fields.m_HighlightedColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pfVar1 = &(pTVar12->fields).m_Colors.fields.m_HighlightedColor.fields.a;
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pSVar13 = *(System_DelegateData_o **)&(pTVar12->fields).m_Colors.fields.m_HighlightedColor.fields.g;
    if ((pSVar13 == (System_DelegateData_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar13,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_0450f809;
    method_00 = &MethodInfo_NameEffectController_AddComponent_NameEffectController;
    pIVar9 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)pfVar1 = pIVar9;
    il2cpp_runtime_helper_022b4080(pfVar1);
  }
  pSVar13 = (System_DelegateData_o *)0x0;
  if (*(PatreonEffects_NameEffectController_o **)pfVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure
              (*(PatreonEffects_NameEffectController_o **)pfVar1,(MethodInfo *)0x0);
    pSVar13 = (System_DelegateData_o *)(ulong)uStack_60._4_4_;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_60._4_4_,(MethodInfo *)0x0);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)
                 (pTVar12->fields).m_SpriteState.fields.m_HighlightedSprite,0,&(settings->fields).gradientA,
                 (MethodInfo *)method_00);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)
                 (pTVar12->fields).m_SpriteState.fields.m_HighlightedSprite,1,&(settings->fields).gradientB,
                 (MethodInfo *)method_00);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)
                 (pTVar12->fields).m_SpriteState.fields.m_HighlightedSprite,2,&(settings->fields).gradientC,
                 (MethodInfo *)method_00);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)
                 (pTVar12->fields).m_SpriteState.fields.m_HighlightedSprite,3,&(settings->fields).gradientD,
                 (MethodInfo *)method_00);
      pSVar5 = *(System_DelegateData_o **)&(pTVar12->fields).m_Colors.fields.m_HighlightedColor.fields.g;
      pSVar13 = (System_DelegateData_o *)0x0;
      if (pSVar5 != (System_DelegateData_o *)0x0) {
        (**(code **)&pSVar5->klass[1]._2.naturalAligment)(0x3f800000,0x3f800000);
        pSVar13 = (System_DelegateData_o *)0x0;
        if (*(PatreonEffects_NameEffectController_o **)pfVar1 != (PatreonEffects_NameEffectController_o *)0x0)
        {
          PatreonEffects_NameEffectController__Apply
                    (*(PatreonEffects_NameEffectController_o **)pfVar1,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0450f809:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7b = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&pSVar13[2].fields.curried_first_arg;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pbVar11 = &pSVar13[2].fields.curried_first_arg;
  __this_01 = *(PatreonEffects_NameEffectController_o **)pbVar11;
  if (__this_01 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__Clear(__this_01,(MethodInfo *)0x0);
    pUVar4 = *(UnityEngine_Object_o **)pbVar11;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    *(undefined8 *)pbVar11 = 0;
    il2cpp_runtime_helper_022b4080(pbVar11,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7f = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).popGradientHooked;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  plVar14 = *(long **)&(__this_01->fields).popGradientHooked;
  if (plVar14 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar14 + 0x7d8);
    (*vtableDispatch)(plVar14,0,0,*(undefined8 *)(*plVar14 + 0x7e0),vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)plVar14[8],(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if ((Gisketch_Aottg2UI_State_GisketchUIState_o *)plVar14[0xb] ==
        (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    Gisketch_Aottg2UI_State_GisketchUIState__GetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)plVar14[0xb],(System_String_o *)plVar14[8],
               (uint)*(byte *)((long)plVar14 + 0x92),(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* font, const MethodInfo* method);
// 0x4509640

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *font,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *x;
  TMPro_TMP_InputField_o *pTVar1;
  Il2CppMethodPointer vtableDispatch;
  bool bVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  MethodInfo *method_00;
  TMPro_TMP_Text_o *pTVar5;
  
  if (g_data_057aed75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed75 = '\x01';
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = false;
  pSVar4 = (System_String_array *)PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
  (__this->fields)._previewEffectColors = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._previewEffectColors);
  x = (__this->fields)._effectPreview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    bVar2 = false;
    method_00 = (MethodInfo *)0x0;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)(__this->fields)._gradientStops,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview(__this,method_00);
      bVar2 = true;
    }
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (System_String_array *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar1 = (__this->fields)._input;
    pSVar4 = (__this->fields)._previewEffectColors;
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    PatreonEffects_NameFontCatalog__Apply_422f820(pTVar1,(System_String_o *)pSVar4,(MethodInfo *)0x0);
  }
  if (bVar2) {
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
              (__this,(MethodInfo *)pSVar4);
  }
  if (g_data_057aed7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7f = '\x01';
  }
  pTVar5 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar5 = (__this->fields)._text;
    if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
      vtableDispatch = (pTVar5->klass->vtable)._106_ForceMeshUpdate.methodPtr;
      (*vtableDispatch)
                (pTVar5,0,0,(pTVar5->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pTVar5,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* hex, bool clearSelection, const MethodInfo* method);
// 0x4508180

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *hex,
               bool_conflict clearSelection,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  int32_t length;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  TMPro_TMP_Text_o *pTVar5;
  System_String_array *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtableDispatch;
  TMPro_TMP_InputField_o *pTVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *x_00;
  System_String_o *b;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  float fVar10;
  System_String_o *pSVar11;
  undefined4 extraout_var;
  undefined8 uVar12;
  long lVar13;
  Il2CppObject *pIVar14;
  System_Object_array *call;
  System_Object_array *method_00;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar15;
  float fVar16;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *unaff_RBX;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x_01;
  uint uVar17;
  int iVar18;
  ulong unaff_RBP;
  long *plVar19;
  TMPro_TMP_InputField_o *pTVar20;
  MethodInfo *pMVar21;
  System_Object_array *method_01;
  System_Collections_Generic_List_string__o *pSVar22;
  System_Object_array *__this_02;
  System_Object_array *__this_03;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar23;
  ulong unaff_R14;
  uint uVar24;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar25 [16];
  
  if (g_data_057aed76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed76 = '\x01';
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar8 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') goto label_04508274;
  cVar7 = *(char *)((long)&(__this->fields)._attached + 2);
  do {
    if (((cVar7 == '\0') || (iVar3 = (__this->fields)._selectionStart, iVar3 < 0)) ||
       ((__this->fields)._selectionEnd <= iVar3)) {
      return;
    }
    if (*(char *)((long)&(__this->fields)._attached + 1) == '\0') {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors(__this,pMVar21);
    }
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(hex,pMVar21);
    pSVar22 = (__this->fields)._colors;
    if (pSVar22 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar3 = (__this->fields)._selectionEnd;
      iVar18 = (pSVar22->fields)._size;
      if (iVar3 <= iVar18) {
        iVar18 = iVar3;
      }
      uVar17 = (__this->fields)._selectionStart;
      hex = (System_String_o *)(ulong)uVar17;
      if (iVar18 <= (int)uVar17) {
label_045082aa:
        if (g_data_057aed7f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057aed7f = '\x01';
        }
        hex = (System_String_o *)(__this->fields)._text;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)hex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        uVar12 = CONCAT44(extraout_var,bVar8);
        if ((char)bVar8 != '\0') {
          pTVar5 = (__this->fields)._text;
          if (pTVar5 == (TMPro_TMP_Text_o *)0x0) goto label_0450826f;
          method = (pTVar5->klass->vtable)._106_ForceMeshUpdate.method;
          uVar12 = (*(pTVar5->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar5,0,0);
        }
        if ((char)clearSelection == '\0')
        goto Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection;
        break;
      }
      do {
        method = MethodInfo_Void_set_Item;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar22,(int)hex,(Il2CppObject *)pSVar11,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        uVar17 = (int)hex + 1;
        hex = (System_String_o *)(ulong)uVar17;
        if (iVar18 <= (int)uVar17) goto label_045082aa;
        pSVar22 = (__this->fields)._colors;
      } while (pSVar22 != (System_Collections_Generic_List_string__o *)0x0);
    }
label_0450826f:
    il2cpp_runtime_helper_022b2c90();
label_04508274:
    pGVar4 = (__this->fields)._state;
    if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    pMVar21 = (MethodInfo *)(__this->fields)._colorsEnabledKey;
    method = (MethodInfo *)0x0;
    bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      (pGVar4,(System_String_o *)pMVar21,
                       (uint)*(byte *)((long)&(__this->fields)._attached + 2),(MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  } while( true );
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection:
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x10) =
       unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x18) = uVar12;
  if (g_data_057aed8e == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb0b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb17;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed8e = '\x01';
  }
  pTVar20 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb3a;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb46;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  uVar17 = (__this->fields)._selectionEnd;
  unaff_RBP = (ulong)uVar17;
  pTVar20 = (__this->fields)._input;
  if ((int)uVar17 < 0) {
    if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb86;
      uVar17 = TMPro_TMP_InputField__get_caretPosition(pTVar20,(MethodInfo *)0x0);
      pTVar20 = (__this->fields)._input;
      if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
        unaff_RBP = (ulong)uVar17;
        lVar13 = *(long *)&(pTVar20->fields).m_SelectionColor.fields.a;
        if (lVar13 != 0) {
          if (-1 < (int)uVar17) goto label_0450fba1;
          unaff_RBP = 0;
          goto label_0450fba9;
        }
      }
    }
  }
  else if ((pTVar20 != (TMPro_TMP_InputField_o *)0x0) &&
          (lVar13 = *(long *)&(pTVar20->fields).m_SelectionColor.fields.a, lVar13 != 0)) {
label_0450fba1:
    if ((int)*(uint *)(lVar13 + 0x10) < (int)unaff_RBP) {
      unaff_RBP = (ulong)*(uint *)(lVar13 + 0x10);
    }
label_0450fba9:
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbb2;
    TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar20,(int32_t)unaff_RBP,(MethodInfo *)0x0);
    pTVar20 = (__this->fields)._input;
    if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbc4;
      TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar20,(int32_t)unaff_RBP,(MethodInfo *)0x0);
      (__this->fields)._selectionStart = -1;
      (__this->fields)._selectionEnd = -1;
      (__this->fields)._openedStart = -1;
      (__this->fields)._openedEnd = -1;
      pSVar22 = (__this->fields)._previewColors;
      if (pSVar22 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(pSVar22->fields)._version;
        *piVar1 = *piVar1 + 1;
        length = (pSVar22->fields)._size;
        (pSVar22->fields)._size = 0;
        if (0 < length) {
          array = (pSVar22->fields)._items;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbf8;
          System_Array__Clear((System_Array_o *)array,0,length,(MethodInfo *)0x0);
        }
        *(undefined1 *)((long)&(__this->fields)._attached + 1) = 0;
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc0f;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  unaff_RBX = __this;
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
  __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pTVar20;
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection:
  *(ulong *)((long)register0x00000020 + -8) = unaff_R14;
  *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x10) =
       unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x18) = uVar12;
  if (g_data_057aed8d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc2c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed8d = '\x01';
  }
  x_01 = *(System_Collections_Generic_List_object__o **)
          &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc4f;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc5b;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pTVar20 = *(TMPro_TMP_InputField_o **)
             &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
    fVar10 = (((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_PressedColor.fields.a;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc7e;
    TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar20,(int32_t)fVar10,(MethodInfo *)0x0);
    pTVar20 = *(TMPro_TMP_InputField_o **)
               &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_selectionStringFocusPosition
                (pTVar20,(int32_t)(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_SelectedColor
                                  .fields.r,(MethodInfo *)0x0);
      return;
    }
  }
  method_00 = (System_Object_array *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fca1;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  *(ulong *)((long)register0x00000020 + -0x20) = unaff_RBP;
  *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x28) = unaff_R15;
  *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x30) =
       __this;
  *(MethodInfo ***)((long)register0x00000020 + -0x38) = unaff_R13;
  *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x40) = unaff_R12;
  *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x48) = x_01;
  *(undefined8 *)((long)register0x00000020 + -0x50) = uVar12;
  if (g_data_057aed87 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fcd3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fcdf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fceb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed87 = '\x01';
  }
  if (*(undefined1 *)((long)method_00->m_Items + 0x71) == '\0') {
    return;
  }
  __this_02 = (System_Object_array *)method_00->m_Items[1];
  if (__this_02 != (System_Object_array *)0x0) {
    __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
    x_01 = (System_Collections_Generic_List_object__o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      uVar17 = *(uint *)(method_00->m_Items + 0xc);
      unaff_RBP = (ulong)uVar17;
      uVar9 = (__this_01->fields)._size;
      uVar24 = (int)__this_02->max_length + uVar17;
      if ((int)uVar9 < (int)uVar24) {
        uVar24 = uVar9;
      }
      unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar24;
      if ((int)uVar17 < (int)uVar24) {
        unaff_R13 = &MethodInfo_Void_set_Item;
        do {
          iVar18 = (int)unaff_RBP;
          iVar3 = *(int *)(method_00->m_Items + 0xc);
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fd62;
          pIVar14 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_02,iVar18 - iVar3,
                               MethodInfo_String_get_Item);
          x_01 = (System_Collections_Generic_List_object__o *)0x0;
          unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fd7c;
          method = MethodInfo_Void_set_Item;
          System_Collections_Generic_List_object___set_Item
                    (__this_01,iVar18,pIVar14,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
          unaff_RBP = (ulong)(iVar18 + 1U);
          if ((int)uVar24 <= (int)(iVar18 + 1U)) goto label_0450fd96;
          __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
          __this_02 = (System_Object_array *)method_00->m_Items[1];
          x_01 = __this_01;
        } while (__this_02 != (System_Object_array *)0x0);
      }
      else {
label_0450fd96:
        if (g_data_057aed7f == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fdab;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057aed7f = '\x01';
        }
        x_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[9];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fdce;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fdda;
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pIVar14 = method_00->m_Items[9];
        __this_02 = (System_Object_array *)0x0;
        if (pIVar14 != (Il2CppObject *)0x0) {
          vtableDispatch = pIVar14->klass->vtable[0x6a].methodPtr;
          (*vtableDispatch)(pIVar14,0,0,pIVar14->klass->vtable[0x6a].method,vtableDispatch);
          return;
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fe21;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  *(ulong *)((long)register0x00000020 + -0x58) = unaff_RBP;
  *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x60) = unaff_R15;
  *(System_Object_array **)((long)register0x00000020 + -0x68) = method_00;
  *(MethodInfo ***)((long)register0x00000020 + -0x70) = unaff_R13;
  *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x78) = unaff_R12;
  *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x80) = x_01;
  *(undefined8 *)((long)register0x00000020 + -0x88) = uVar12;
  if (g_data_057aed7c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe57;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe7b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe87;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe93;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe9f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450feab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450feb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fec3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
    g_data_057aed7c = '\x01';
  }
  call = (System_Object_array *)__this_02->m_Items[8];
  plVar19 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fef3;
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (System_Object_array *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450feff;
  __this_03 = call;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04510010:
    plVar19 = &TypeInfo_Object;
    x = (UnityEngine_Object_o *)__this_02->m_Items[9];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510026;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510032;
    bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_0451007e:
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510086;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                 (MethodInfo *)method_00);
      pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x451009e;
        value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x45100b8;
        System_Action_object____ctor();
        Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    pIVar14 = __this_02->m_Items[9];
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510049;
    method_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
    method = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510063;
    method_01 = __this_02;
    __this_03 = method_00;
    System_Action_object____ctor();
    call = (System_Object_array *)0x0;
    if (pIVar14 != (Il2CppObject *)0x0) {
      pMVar21 = pIVar14->klass->vtable[0x4f].method;
      vtableDispatch = pIVar14->klass->vtable[0x4f].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x451007e;
      (*vtableDispatch)(pIVar14,method_00,pMVar21);
      goto label_0451007e;
    }
  }
  else if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
    method_00 = (System_Object_array *)__this_02->m_Items[8][0x1e].klass;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff2a;
    call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
    method = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff44;
    method_01 = __this_02;
    __this_03 = call;
    UnityEngine_Events_UnityAction_object____ctor();
    if (method_00 != (System_Object_array *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff62;
      method_01 = call;
      __this_03 = method_00;
      UnityEngine_Events_UnityEvent_object___RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)method_00,(UnityEngine_Events_UnityAction_T0__o *)call
                 ,MethodInfo_Void_RemoveListener);
      if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
        method_00 = (System_Object_array *)__this_02->m_Items[8][0x1d].klass;
        unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff86;
        call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
        plVar19 = &MethodInfo_Void_OnTextSelection;
        method = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ffa1;
        method_01 = __this_02;
        __this_03 = call;
        UnityEngine_Events_UnityAction_object__int__int____ctor();
        if (method_00 != (System_Object_array *)0x0) {
          unaff_R12 = &MethodInfo_Void_RemoveListener;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ffc0;
          method_01 = call;
          __this_03 = method_00;
          UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)method_00,
                     (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
          if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
            __this_00 = __this_02->m_Items[8][0x1d].monitor;
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ffdd;
            call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
            method = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fff1;
            method_01 = __this_02;
            __this_03 = call;
            UnityEngine_Events_UnityAction_object__int__int____ctor();
            method_00 = (System_Object_array *)0x0;
            if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510009;
              UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                        (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
              goto label_04510010;
            }
          }
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x45100e7;
  il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0x90) = plVar19;
  *(System_Object_array **)((long)register0x00000020 + -0x98) = method_00;
  *(System_Object_array **)((long)register0x00000020 + -0xa0) = call;
  if (g_data_057aed7d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510110;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451011c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7d = '\x01';
  }
  if ((char)*(bool_conflict *)(__this_03->m_Items + 0xe) == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510134;
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
              ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
               (MethodInfo *)method_01);
  }
  pTVar20 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510150;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451015c;
  unaff_R15 = pTVar20;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if ((TMPro_TMP_InputField_o *)__this_03->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
    if (*(char *)&(((TMPro_TMP_InputField_o *)__this_03->m_Items[8])->fields).m_Mesh == '\0') {
      return;
    }
    pSVar11 = (System_String_o *)__this_03->m_Items[4];
    pMVar21 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510189;
    bVar8 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
      if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        return;
      }
      bVar2 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
      pMVar21 = (MethodInfo *)__this_03->m_Items[4];
      method = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510265;
      bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (pGVar4,(System_String_o *)pMVar21,(uint)bVar2,(MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    else {
      cVar7 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
    }
    if (cVar7 == '\0') {
      return;
    }
    pTVar6 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
    unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
    if (pTVar6 != (TMPro_TMP_InputField_o *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101b2;
      uVar17 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar6,(MethodInfo *)0x0);
      pTVar6 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar6 != (TMPro_TMP_InputField_o *)0x0) {
        pTVar20 = (TMPro_TMP_InputField_o *)(ulong)uVar17;
        pMVar21 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101c8;
        uVar9 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar6,(MethodInfo *)0x0);
        if ((int)uVar17 <= (int)uVar9) {
          uVar9 = uVar17;
        }
        method_00 = (System_Object_array *)(ulong)uVar9;
        pTVar6 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar6 != (TMPro_TMP_InputField_o *)0x0) {
          pMVar21 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101e5;
          uVar17 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar6,(MethodInfo *)0x0);
          pTVar6 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar6 != (TMPro_TMP_InputField_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101fb;
            uVar24 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar6,(MethodInfo *)0x0);
            if ((int)uVar17 < (int)uVar24) {
              uVar17 = uVar24;
            }
            pTVar20 = (TMPro_TMP_InputField_o *)(ulong)uVar17;
            *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451020d;
            Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                      ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,uVar9,uVar17
                       ,method);
            if ((*(int *)(__this_03->m_Items + 0xc) < 0) ||
               (*(int32_t *)((long)__this_03->m_Items + 100) <= *(int *)(__this_03->m_Items + 0xc))) {
              __this_03->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
              return;
            }
            pMVar21 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510228;
            bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              return;
            }
            if (*(int *)(__this_03->m_Items + 0xd) == *(int *)(__this_03->m_Items + 0xc)) {
              uVar17 = *(int32_t *)((long)__this_03->m_Items + 100);
              if (*(int32_t *)((long)__this_03->m_Items + 0x6c) == uVar17) {
                return;
              }
            }
            else {
              uVar17 = *(int32_t *)((long)__this_03->m_Items + 100);
            }
            method = (MethodInfo *)(ulong)uVar17;
            *(int *)(__this_03->m_Items + 0xd) = *(int *)(__this_03->m_Items + 0xc);
            *(uint *)((long)__this_03->m_Items + 0x6c) = uVar17;
            *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451029d;
            Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                      ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,pMVar21);
            pTVar6 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar6 != (TMPro_TMP_InputField_o *)0x0) {
              pSVar11 = (System_String_o *)__this_03->m_Items[3];
              *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45102b1;
              node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pTVar6,(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
              *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
              *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
              *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45102d3;
              Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                        ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                         *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                          ((long)register0x00000020 + -0xe0),
                         (System_String_o *)((long)register0x00000020 + -0xc0),
                         (UnityEngine_GameObject_o *)pSVar11,node,(MethodInfo *)0x0);
              pSVar11 = (System_String_o *)__this_03->m_Items[3];
              if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45102ef;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0xd0) =
                   *(undefined8 *)((long)register0x00000020 + -0xb0);
              *(undefined8 *)((long)register0x00000020 + -200) =
                   *(undefined8 *)((long)register0x00000020 + -0xa8);
              *(undefined8 *)((long)register0x00000020 + -0xe0) =
                   *(undefined8 *)((long)register0x00000020 + -0xc0);
              *(undefined8 *)((long)register0x00000020 + -0xd8) =
                   *(undefined8 *)((long)register0x00000020 + -0xb8);
              *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451030e;
              Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                        ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                         *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                          ((long)register0x00000020 + -0xe0),pSVar11,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510318;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0xe8) = pTVar20;
  *(System_Object_array **)((long)register0x00000020 + -0xf0) = __this_02;
  *(System_Object_array **)((long)register0x00000020 + -0xf8) = method_00;
  *(System_Object_array **)((long)register0x00000020 + -0x100) = __this_03;
  *(long *)((long)register0x00000020 + -0x108) = auVar25._0_8_;
  unaff_R14 = auVar25._8_8_ & 0xffffffff;
  fVar23 = auVar25._8_4_;
  unaff_RBP = (ulong)pMVar21 & 0xffffffff;
  fVar10 = SUB84(pMVar21,0);
  if (g_data_057aed85 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x110) = 0x4510344;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed85 = '\x01';
  }
  x_00 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
          &(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x110) = 0x4510367;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_String_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x110) = 0x4510373;
  __this = x_00;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  lVar13 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
  if (lVar13 != 0) {
    method = (MethodInfo *)0x0;
    if (*(long *)(lVar13 + 0x220) != 0) {
      fVar15 = *(float *)(*(long *)(lVar13 + 0x220) + 0x10);
      fVar16 = fVar10;
      if ((int)fVar15 <= (int)fVar10) {
        fVar16 = fVar15;
      }
      if ((int)fVar10 < 0) {
        fVar16 = 0.0;
      }
      if ((int)fVar23 < (int)fVar15) {
        fVar15 = fVar23;
      }
      if ((int)fVar23 < 0) {
        fVar15 = 0.0;
      }
      if (fVar16 == fVar15) {
        if (*(char *)(lVar13 + 0x270) == '\0') {
          return;
        }
        *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
        return;
      }
      fVar10 = fVar15;
      if ((int)fVar16 <= (int)fVar15) {
        fVar10 = fVar16;
      }
      (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar10;
      if ((int)fVar15 <= (int)fVar16) {
        fVar15 = fVar16;
      }
      (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar15;
      return;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x110) = 0x45103ea;
  il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x110) =
       x_00;
  b = (__this->fields)._colorsEnabledKey;
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x4510405;
  bVar8 = System_String__op_Equality(pSVar11,b,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pSVar11 = (__this->fields)._colorsEnabledKey;
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x4510414;
  bVar8 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
  uVar12 = CONCAT44(extraout_var_00,bVar8);
  if ((char)bVar8 == '\0') {
    pGVar4 = (__this->fields)._state;
    if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      bVar2 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
      pSVar11 = (__this->fields)._colorsEnabledKey;
      method = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0x451043e;
      bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar4,pSVar11,(uint)bVar2,(MethodInfo *)0x0);
      uVar12 = CONCAT44(extraout_var_01,bVar8);
      cVar7 = (char)bVar8;
      goto joined_r0x04510440;
    }
  }
  else {
    cVar7 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
joined_r0x04510440:
    if (cVar7 != '\0') {
      return;
    }
  }
  unaff_RBX = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
               ((long)register0x00000020 + -0x110);
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x108);
  goto Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CancelPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x4508160

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CancelPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  int iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *array;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *x_00;
  System_String_o *b;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined8 extraout_RAX;
  long lVar12;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  System_Object_array *call;
  System_Object_array *method_00;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar15;
  MethodInfo *in_RCX;
  float fVar16;
  undefined8 unaff_RBX;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x_01;
  int index;
  ulong unaff_RBP;
  ulong uVar17;
  long *plVar18;
  TMPro_TMP_InputField_o *pTVar19;
  System_Object_array *method_01;
  MethodInfo *pMVar20;
  System_String_o *pSVar21;
  System_Object_array *__this_02;
  System_Object_array *__this_03;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar22;
  ulong unaff_R14;
  uint uVar23;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar24 [16];
  
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors(__this,method);
  uVar13 = extraout_RAX;
  do {
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar13;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pTVar19 = (__this->fields)._input;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb46;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    uVar9 = (__this->fields)._selectionEnd;
    uVar17 = (ulong)uVar9;
    pTVar19 = (__this->fields)._input;
    if ((int)uVar9 < 0) {
      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition(pTVar19,(MethodInfo *)0x0);
        pTVar19 = (__this->fields)._input;
        if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
          uVar17 = (ulong)uVar9;
          lVar12 = *(long *)&(pTVar19->fields).m_SelectionColor.fields.a;
          if (lVar12 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            uVar17 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar19 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar12 = *(long *)&(pTVar19->fields).m_SelectionColor.fields.a, lVar12 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar12 + 0x10) < (int)uVar17) {
        uVar17 = (ulong)*(uint *)(lVar12 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar19,(int32_t)uVar17,(MethodInfo *)0x0);
      pTVar19 = (__this->fields)._input;
      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar19,(int32_t)uVar17,(MethodInfo *)0x0);
        (__this->fields)._selectionStart = -1;
        (__this->fields)._selectionEnd = -1;
        (__this->fields)._openedStart = -1;
        (__this->fields)._openedEnd = -1;
        pSVar4 = (__this->fields)._previewColors;
        if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          if (0 < length) {
            array = (pSVar4->fields)._items;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbf8;
            System_Array__Clear((System_Array_o *)array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(__this->fields)._attached + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc0f;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x20) = unaff_R14;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x28) =
         __this;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar13;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x_01 = *(System_Collections_Generic_List_object__o **)
            &(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc5b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
      fVar11 = (pTVar19->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar5,(int32_t)fVar11,(MethodInfo *)0x0);
      pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar5,(int32_t)(pTVar19->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fca1;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x38) = uVar17;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x40) = unaff_R15;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x48) = pTVar19;
    *(MethodInfo ***)((long)register0x00000020 + -0x50) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x58) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x60) = x_01;
    *(undefined8 *)((long)register0x00000020 + -0x68) = uVar13;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)method_00->m_Items + 0x71) == '\0') {
      return;
    }
    __this_02 = (System_Object_array *)method_00->m_Items[1];
    if (__this_02 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
      x_01 = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar9 = *(uint *)(method_00->m_Items + 0xc);
        uVar17 = (ulong)uVar9;
        uVar10 = (__this_01->fields)._size;
        uVar23 = (int)__this_02->max_length + uVar9;
        if ((int)uVar10 < (int)uVar23) {
          uVar23 = uVar10;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar23;
        if ((int)uVar9 < (int)uVar23) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar17;
            iVar3 = *(int *)(method_00->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd62;
            pIVar14 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index - iVar3,
                                 MethodInfo_String_get_Item);
            x_01 = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar14,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar17 = (ulong)(index + 1U);
            if ((int)uVar23 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
            __this_02 = (System_Object_array *)method_00->m_Items[1];
            x_01 = __this_01;
          } while (__this_02 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdda;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pIVar14 = method_00->m_Items[9];
          __this_02 = (System_Object_array *)0x0;
          if (pIVar14 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar14->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar14,0,0,pIVar14->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fe21;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x70) = uVar17;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x78) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x80) = method_00;
    *(MethodInfo ***)((long)register0x00000020 + -0x88) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x90) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x98) = x_01;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar13;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_02->m_Items[8];
    plVar18 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feff;
    __this_03 = call;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04510010:
      plVar18 = &TypeInfo_Object;
      x = (UnityEngine_Object_o *)__this_02->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510032;
      bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                   (MethodInfo *)method_00);
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar6,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar14 = __this_02->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510049;
      method_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510063;
      method_01 = __this_02;
      __this_03 = method_00;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar14 != (Il2CppObject *)0x0) {
        pMVar20 = pIVar14->klass->vtable[0x4f].method;
        vtableDispatch = pIVar14->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451007e;
        (*vtableDispatch)(pIVar14,method_00,pMVar20);
        goto label_0451007e;
      }
    }
    else if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
      method_00 = (System_Object_array *)__this_02->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff44;
      method_01 = __this_02;
      __this_03 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (method_00 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff62;
        method_01 = call;
        __this_03 = method_00;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)method_00,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
          method_00 = (System_Object_array *)__this_02->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar18 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffa1;
          method_01 = __this_02;
          __this_03 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (method_00 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffc0;
            method_01 = call;
            __this_03 = method_00;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)method_00,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = __this_02->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fff1;
              method_01 = __this_02;
              __this_03 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              method_00 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0xa8) = plVar18;
    *(System_Object_array **)((long)register0x00000020 + -0xb0) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0xb8) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_03->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                 (MethodInfo *)method_01);
    }
    pTVar19 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451015c;
    unaff_R15 = pTVar19;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_03->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_03->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar21 = (System_String_o *)__this_03->m_Items[4];
      pMVar20 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510189;
      bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
        if (pGVar6 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar2 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
        pMVar20 = (MethodInfo *)__this_03->m_Items[4];
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510265;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar6,(System_String_o *)pMVar20,(uint)bVar2,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
      }
      else {
        cVar7 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
      }
      if (cVar7 == '\0') {
        return;
      }
      pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar20 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
        pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar20 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          method_00 = (System_Object_array *)(ulong)uVar10;
          pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar20 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
            pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101fb;
              uVar23 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar23) {
                uVar9 = uVar23;
              }
              pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,uVar10,
                         uVar9,in_RCX);
              if ((*(int *)(__this_03->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_03->m_Items + 100) <= *(int *)(__this_03->m_Items + 0xc))) {
                __this_03->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar20 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510228;
              bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              if (*(int *)(__this_03->m_Items + 0xd) == *(int *)(__this_03->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)__this_03->m_Items + 100);
                if (*(int32_t *)((long)__this_03->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)__this_03->m_Items + 100);
              }
              in_RCX = (MethodInfo *)(ulong)uVar9;
              *(int *)(__this_03->m_Items + 0xd) = *(int *)(__this_03->m_Items + 0xc);
              *(uint *)((long)__this_03->m_Items + 0x6c) = uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,pMVar20);
              pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar21 = (System_String_o *)__this_03->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -200) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),
                           (System_String_o *)((long)register0x00000020 + -0xd8),
                           (UnityEngine_GameObject_o *)pSVar21,node,(MethodInfo *)0x0);
                pSVar21 = (System_String_o *)__this_03->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0xe8) =
                     *(undefined8 *)((long)register0x00000020 + -200);
                *(undefined8 *)((long)register0x00000020 + -0xe0) =
                     *(undefined8 *)((long)register0x00000020 + -0xc0);
                *(undefined8 *)((long)register0x00000020 + -0xf8) =
                     *(undefined8 *)((long)register0x00000020 + -0xd8);
                *(undefined8 *)((long)register0x00000020 + -0xf0) =
                     *(undefined8 *)((long)register0x00000020 + -0xd0);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),pSVar21,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510318;
    auVar24 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x100) = pTVar19;
    *(System_Object_array **)((long)register0x00000020 + -0x108) = __this_02;
    *(System_Object_array **)((long)register0x00000020 + -0x110) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0x118) = __this_03;
    *(long *)((long)register0x00000020 + -0x120) = auVar24._0_8_;
    unaff_R14 = auVar24._8_8_ & 0xffffffff;
    fVar22 = auVar24._8_4_;
    unaff_RBP = (ulong)pMVar20 & 0xffffffff;
    fVar11 = SUB84(pMVar20,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    x_00 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
            &(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510373;
    __this = x_00;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    lVar12 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar12 != 0) {
      in_RCX = (MethodInfo *)0x0;
      if (*(long *)(lVar12 + 0x220) != 0) {
        fVar15 = *(float *)(*(long *)(lVar12 + 0x220) + 0x10);
        fVar16 = fVar11;
        if ((int)fVar15 <= (int)fVar11) {
          fVar16 = fVar15;
        }
        if ((int)fVar11 < 0) {
          fVar16 = 0.0;
        }
        if ((int)fVar22 < (int)fVar15) {
          fVar15 = fVar22;
        }
        if ((int)fVar22 < 0) {
          fVar15 = 0.0;
        }
        if (fVar16 == fVar15) {
          if (*(char *)(lVar12 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar11 = fVar15;
        if ((int)fVar16 <= (int)fVar15) {
          fVar11 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar11;
        if ((int)fVar15 <= (int)fVar16) {
          fVar15 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar15;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x128) =
         x_00;
    b = (__this->fields)._colorsEnabledKey;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x4510405;
    bVar8 = System_String__op_Equality(pSVar21,b,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pSVar21 = (__this->fields)._colorsEnabledKey;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x4510414;
    bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
    uVar13 = CONCAT44(extraout_var,bVar8);
    if ((char)bVar8 == '\0') {
      pGVar6 = (__this->fields)._state;
      if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar2 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
        pSVar21 = (__this->fields)._colorsEnabledKey;
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x130) = 0x451043e;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar6,pSVar21,(uint)bVar2,(MethodInfo *)0x0)
        ;
        uVar13 = CONCAT44(extraout_var_00,bVar8);
        cVar7 = (char)bVar8;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar7 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
joined_r0x04510440:
      if (cVar7 != '\0') {
        return;
      }
    }
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x128);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Serialized
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x4508bf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *pMVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *pMVar9;
  char cVar10;
  System_String_Fields method_02;
  TMPro_TMP_InputField_o *pTVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  TMPro_TMP_InputField_o *pTVar12;
  undefined8 *puVar13;
  long lVar14;
  System_String_Fields *pSVar15;
  undefined8 uVar16;
  
  if (g_data_057aed77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed77 = '\x01';
  }
  pTVar11 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    ppSVar5 = &(__this->fields)._lastText;
label_04508c54:
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                       (*ppSVar5,(System_Collections_Generic_IList_string__o *)(__this->fields)._colors,
                        method_00);
    return pSVar4;
  }
  pTVar12 = (__this->fields)._input;
  if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
    ppSVar5 = (System_String_o **)&(pTVar12->fields).m_SelectionColor.fields.a;
    goto label_04508c54;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aed3f = '\x01';
  }
  method_02 = (System_String_Fields)((ulong)pTVar11 & 0xffffffff);
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if ((int)pTVar11 < 1) {
    return pSVar4;
  }
  if (pSVar4 == (System_String_o *)0x0) {
    if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar1 = (((TypeInfo_AottgCharacterSetEffectsDialog->fields)._previewEffectColors)->obj).klass;
    __this_00 = TypeInfo_AottgCharacterSetEffectsDialog;
    if ((pIVar1 != (Il2CppClass *)0x0) && (*(int *)&(pIVar1->_1).namespaze == 0)) {
label_04508d71:
      __this_00 = TypeInfo_AottgCharacterSetEffectsDialog;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    pSVar15 = (System_String_Fields *)&pSVar4[1].monitor;
    pMVar9 = (MethodInfo *)0x0;
    while( true ) {
      if (*(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[1].fields.m_CancellationTokenSource + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar1 = (((TypeInfo_AottgCharacterSetEffectsDialog->fields)._previewEffectColors)->obj).klass;
      __this_00 = TypeInfo_AottgCharacterSetEffectsDialog;
      if (pIVar1 == (Il2CppClass *)0x0) break;
      in_RCX = (MethodInfo *)(ulong)*(uint *)&(pIVar1->_1).namespaze;
      if ((in_RCX <= pMVar9) || (in_RCX = (MethodInfo *)(ulong)*(uint *)&pSVar4[1].klass, in_RCX <= pMVar9))
      goto label_04508d71;
      method_02 = *(System_String_Fields *)(&(pIVar1->_1).byval_arg.data + (long)pMVar9);
      *pSVar15 = method_02;
      il2cpp_runtime_helper_022b4080(pSVar15);
      pMVar9 = (MethodInfo *)((long)&pMVar9->methodPointer + 1);
      pSVar15 = pSVar15 + 1;
      if ((MethodInfo *)((ulong)pTVar11 & 0xffffffff) == pMVar9) {
        return pSVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed78 = '\x01';
  }
  pTVar11 = (__this_00->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    ppSVar5 = &(__this_00->fields)._lastText;
label_04508de8:
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                       (*ppSVar5,(System_Collections_Generic_IList_string__o *)method_02,method_01);
    pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar4,(MethodInfo *)method_02);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this_00,pGVar6,0,in_RCX);
    return pSVar4;
  }
  pTVar12 = (__this_00->fields)._input;
  if (pTVar12 != (TMPro_TMP_InputField_o *)0x0) {
    ppSVar5 = (System_String_o **)&(pTVar12->fields).m_SelectionColor.fields.a;
    goto label_04508de8;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse((System_String_o *)pTVar11,pMVar9);
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return (pGVar6->fields).Text;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar9;
  if (g_data_057aed91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (extraout_RDX == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar10 = (char)pMVar8;
    pSVar4 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    pTVar12 = (TMPro_TMP_InputField_o *)0x0;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (extraout_RDX != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar10 = (char)pMVar8;
    pSVar4 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pTVar12 = (TMPro_TMP_InputField_o *)0x0;
      goto label_04508f89;
    }
  }
  pMVar8 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_01,(Il2CppObject *)pMVar9,(Il2CppObject *)pSVar4,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  cVar10 = '\0';
  pTVar12 = pTVar11;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04508f60:
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
              (pUVar7,(System_String_o *)pMVar9,pSVar4,pMVar8);
    return extraout_RAX;
  }
  if (pTVar11 != (TMPro_TMP_InputField_o *)0x0) {
    cVar10 = '\0';
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pTVar11,(MethodInfo *)0x0);
    pTVar12 = pTVar11;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
      goto label_04508f60;
    }
  }
label_04508f89:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    g_data_057aedb4 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pTVar12,"profile-character-name-effect",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
    lVar14 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  else {
    lVar14 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    lVar2 = TypeInfo_AottgEditCharacterDialog;
  }
  TypeInfo_AottgEditCharacterDialog = lVar2;
  if ((char)bVar3 == '\0') {
    *(char *)(lVar14 + 10) = cVar10;
    uVar16 = extraout_RDX_00;
    if (cVar10 == '\0') {
      uVar16 = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar2);
      lVar14 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar13 = (undefined8 *)(lVar14 + 0x18);
  }
  else {
    *(char *)(lVar14 + 9) = cVar10;
    uVar16 = extraout_RDX_00;
    if (cVar10 == '\0') {
      uVar16 = "None";
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar2);
      lVar14 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
    }
    puVar13 = (undefined8 *)(lVar14 + 0x10);
  }
  *puVar13 = uVar16;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b4080(puVar13,uVar16);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x4508d80

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
          System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar5;
  UnityEngine_Transform_o *pUVar6;
  System_String_o *extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  undefined8 extraout_RDX_00;
  char cVar8;
  MethodInfo *method_01;
  TMPro_TMP_InputField_o *serialized;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  TMPro_TMP_InputField_o *pTVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  if (g_data_057aed78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed78 = '\x01';
  }
  serialized = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)serialized,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    ppSVar3 = &(__this->fields)._lastText;
label_04508de8:
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient(*ppSVar3,stops,method_00);
    pGVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar4,(MethodInfo *)stops);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,pGVar5,0,in_RCX);
    return pSVar4;
  }
  pTVar9 = (__this->fields)._input;
  if (pTVar9 != (TMPro_TMP_InputField_o *)0x0) {
    ppSVar3 = (System_String_o **)&(pTVar9->fields).m_SelectionColor.fields.a;
    goto label_04508de8;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse((System_String_o *)serialized,method_01)
  ;
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return (pGVar5->fields).Text;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = method_01;
  if (g_data_057aed91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (extraout_RDX != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar8 = (char)pMVar7;
    pSVar4 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    pTVar9 = (TMPro_TMP_InputField_o *)0x0;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (extraout_RDX == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar8 = (char)pMVar7;
    pSVar4 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pTVar9 = (TMPro_TMP_InputField_o *)0x0;
      goto label_04508f89;
    }
  }
  pMVar7 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)method_01,(Il2CppObject *)pSVar4,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  cVar8 = '\0';
  pTVar9 = serialized;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)serialized,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (serialized != (TMPro_TMP_InputField_o *)0x0) {
      cVar8 = '\0';
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)serialized,(MethodInfo *)0x0)
      ;
      pTVar9 = serialized;
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0);
        goto label_04508f60;
      }
    }
label_04508f89:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aedb4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      il2cpp_runtime_helper_023445d0(&"None");
      il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
      g_data_057aedb4 = '\x01';
    }
    bVar2 = System_String__op_Equality((System_String_o *)pTVar9,"profile-character-name-effect",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
      lVar11 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      lVar1 = TypeInfo_AottgEditCharacterDialog;
    }
    else {
      lVar11 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      lVar1 = TypeInfo_AottgEditCharacterDialog;
    }
    TypeInfo_AottgEditCharacterDialog = lVar1;
    if ((char)bVar2 == '\0') {
      *(char *)(lVar11 + 10) = cVar8;
      uVar12 = extraout_RDX_00;
      if (cVar8 == '\0') {
        uVar12 = "None";
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar1);
        lVar11 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      }
      puVar10 = (undefined8 *)(lVar11 + 0x18);
    }
    else {
      *(char *)(lVar11 + 9) = cVar8;
      uVar12 = extraout_RDX_00;
      if (cVar8 == '\0') {
        uVar12 = "None";
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar1);
        lVar11 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      }
      puVar10 = (undefined8 *)(lVar11 + 0x10);
    }
    *puVar10 = uVar12;
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b4080(puVar10,uVar12);
    return pSVar4;
  }
label_04508f60:
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
            (pUVar6,(System_String_o *)method_01,pSVar4,pMVar7);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x4509330

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
  MethodInfo *method_00;
  void *pvVar12;
  MethodInfo *method_01;
  System_Collections_Generic_IList_string__o *colors;
  MethodInfo *pMVar13;
  MethodInfo *method_02;
  long lVar14;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  
  pMVar13 = (MethodInfo *)stops;
  if (g_data_057aed79 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aed79 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,pMVar13);
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
          goto label_045093e1;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_045093e1:
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
            goto label_0450946b;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar14);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_0450946b:
      uVar9 = (*pVVar10->methodPtr)(stops,pVVar10->method);
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,uVar9);
      ppSVar1 = &(__this->fields)._pendingImportColor;
      (__this->fields)._pendingImportColor = pSVar11;
      il2cpp_runtime_helper_022b4080(ppSVar1,pSVar11);
      pMVar13 = (MethodInfo *)0x0;
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
              goto label_04509513;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_04509513:
        iVar8 = (*pVVar10->methodPtr)(stops,pVVar10->method);
        if ((long)iVar8 <= (long)pMVar13) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                    (__this,(System_Collections_Generic_IList_string__o *)(__this->fields)._pendingImportColor
                     ,method_01);
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
              method_00 = (MethodInfo *)(pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14));
              goto label_04509583;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar14);
        }
        method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_IList_string,0);
label_04509583:
        method_02 = (MethodInfo *)((ulong)pMVar13 & 0xffffffff);
        __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)stops;
        pvVar12 = (void *)(*method_00->methodPointer)(stops,method_02,method_00->virtualMethodPointer);
        if (pSVar11 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
label_045095dd:
          il2cpp_runtime_helper_022b2ca0();
          (__this_00->fields)._pendingImportColor = (System_String_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pendingImportColor,0);
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
                    (__this_00,(System_String_o *)method_02,colors,method_00);
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
                    (__this_00,method_02);
          return;
        }
        method_00 = (MethodInfo *)(ulong)*(uint *)&pSVar11[1].klass;
        if (method_00 <= pMVar13) goto label_045095dd;
        (&pSVar11[1].monitor)[(long)pMVar13] = pvVar12;
        il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor + (long)pMVar13,pvVar12);
        pMVar13 = (MethodInfo *)((long)&pMVar13->methodPointer + 1);
      } while( true );
    }
  }
  (__this->fields)._pendingImportColor = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingImportColor,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x4509310

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearGradient
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._pendingImportColor = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingImportColor,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x45095f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *type,
               System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  (__this->fields)._pendingImportColor = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingImportColor,0);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview(__this,type,colors,method);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
            (__this,(MethodInfo *)type);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearNameEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x4509220

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  MethodInfo *method_00;
  long lVar3;
  
  if (g_data_057aed7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7a = '\x01';
  }
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._gradientStops);
  (__this->fields)._previewEffectType = (System_String_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._previewEffectType);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview(__this,method_00);
  pTVar1 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
        vtableDispatch = (pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar1,0,0,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
    lVar3 = 0;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(lVar3 + 0xa0) = 0;
    il2cpp_runtime_helper_022b4080(lVar3 + 0xa0,0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$DestroyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450f810

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__DestroyEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  code *vtableDispatch;
  bool_conflict bVar1;
  PatreonEffects_NameEffectController_o **ppPVar2;
  PatreonEffects_NameEffectController_o *pPVar3;
  long *plVar4;
  
  if (g_data_057aed7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7b = '\x01';
  }
  pPVar3 = (__this->fields)._effectPreview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  ppPVar2 = &(__this->fields)._effectPreview;
  pPVar3 = *ppPVar2;
  if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__Clear(pPVar3,(MethodInfo *)0x0);
    pPVar3 = *ppPVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pPVar3,(MethodInfo *)0x0);
    *ppPVar2 = (PatreonEffects_NameEffectController_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppPVar2,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7f = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pPVar3->fields).popGradientHooked;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    plVar4 = *(long **)&(pPVar3->fields).popGradientHooked;
    if (plVar4 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar4 + 0x7d8);
      (*vtableDispatch)(plVar4,0,0,*(undefined8 *)(*plVar4 + 0x7e0),vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)plVar4[8],(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    if ((Gisketch_Aottg2UI_State_GisketchUIState_o *)plVar4[0xb] !=
        (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)plVar4[0xb],(System_String_o *)plVar4[8],
                 (uint)*(byte *)((long)plVar4 + 0x92),(MethodInfo *)0x0);
      return;
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450fe30

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  int iVar2;
  UnityEngine_Object_c *x;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  TMPro_TMP_InputField_o *pTVar5;
  System_String_o *b;
  undefined8 uVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  long lVar13;
  undefined8 uVar14;
  Il2CppObject *pIVar15;
  undefined8 in_RAX;
  System_Object_array *call;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar16;
  MethodInfo *in_RCX;
  float fVar17;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *unaff_RBX;
  int index;
  ulong unaff_RBP;
  long *plVar18;
  TMPro_TMP_InputField_o *pTVar19;
  System_Object_array *method_00;
  MethodInfo *pMVar20;
  System_String_o *pSVar21;
  System_Object_array *__this_02;
  UnityEngine_Object_o *pUVar22;
  MethodInfo_362BED0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar23;
  System_Object_array *unaff_R14;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar24 [16];
  
  do {
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(MethodInfo ***)((long)register0x00000020 + -0x20) = unaff_R13;
    *(MethodInfo_362BED0 ***)((long)register0x00000020 + -0x28) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)((System_Object_array *)__this)->m_Items[8];
    plVar18 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450feff;
    __this_02 = call;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04510010:
      plVar18 = &TypeInfo_Object;
      pUVar3 = (UnityEngine_Object_o *)((System_Object_array *)__this)->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R14 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4510032;
      bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  (__this,(MethodInfo *)unaff_R14);
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)((System_Object_array *)__this)->m_Items[7];
        if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar15 = ((System_Object_array *)__this)->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4510049;
      unaff_R14 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4510063;
      method_00 = (System_Object_array *)__this;
      __this_02 = unaff_R14;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar15 != (Il2CppObject *)0x0) {
        pMVar20 = pIVar15->klass->vtable[0x4f].method;
        vtableDispatch = pIVar15->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x451007e;
        (*vtableDispatch)(pIVar15,unaff_R14,pMVar20);
        goto label_0451007e;
      }
    }
    else if (((System_Object_array *)__this)->m_Items[8] != (Il2CppObject *)0x0) {
      unaff_R14 = (System_Object_array *)((System_Object_array *)__this)->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450ff44;
      method_00 = (System_Object_array *)__this;
      __this_02 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (unaff_R14 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450ff62;
        method_00 = call;
        __this_02 = unaff_R14;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)unaff_R14,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (((System_Object_array *)__this)->m_Items[8] != (Il2CppObject *)0x0) {
          unaff_R14 = (System_Object_array *)((System_Object_array *)__this)->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar18 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450ffa1;
          method_00 = (System_Object_array *)__this;
          __this_02 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (unaff_R14 != (System_Object_array *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450ffc0;
            method_00 = call;
            __this_02 = unaff_R14;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)unaff_R14,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            unaff_R12 = (MethodInfo_362BED0 **)&MethodInfo_Void_RemoveListener;
            if (((System_Object_array *)__this)->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = ((System_Object_array *)__this)->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fff1;
              method_00 = (System_Object_array *)__this;
              __this_02 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              unaff_R14 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0x40) = plVar18;
    *(System_Object_array **)((long)register0x00000020 + -0x48) = unaff_R14;
    *(System_Object_array **)((long)register0x00000020 + -0x50) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_02->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                 (MethodInfo *)method_00);
    }
    pTVar19 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x451015c;
    unaff_R15 = pTVar19;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_02->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_02->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar21 = (System_String_o *)__this_02->m_Items[4];
      pMVar20 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4510189;
      bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)__this_02->m_Items + 0x72);
        pMVar20 = (MethodInfo *)__this_02->m_Items[4];
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4510265;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar4,(System_String_o *)pMVar20,(uint)bVar1,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
      }
      else {
        cVar7 = *(undefined1 *)((long)__this_02->m_Items + 0x72);
      }
      if (cVar7 == '\0') {
        return;
      }
      pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar20 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
        pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar20 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          unaff_R14 = (System_Object_array *)(ulong)uVar10;
          pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar20 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
            pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x45101fb;
              uVar11 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar11) {
                uVar9 = uVar11;
              }
              pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,uVar10,
                         uVar9,in_RCX);
              if ((*(int *)(__this_02->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_02->m_Items + 100) <= *(int *)(__this_02->m_Items + 0xc))) {
                __this_02->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar20 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4510228;
              bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              if (*(int *)(__this_02->m_Items + 0xd) == *(int *)(__this_02->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)__this_02->m_Items + 100);
                if (*(int32_t *)((long)__this_02->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)__this_02->m_Items + 100);
              }
              in_RCX = (MethodInfo *)(ulong)uVar9;
              *(int *)(__this_02->m_Items + 0xd) = *(int *)(__this_02->m_Items + 0xc);
              *(uint *)((long)__this_02->m_Items + 0x6c) = uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,pMVar20);
              pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar21 = (System_String_o *)__this_02->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0x90),
                           (System_String_o *)((long)register0x00000020 + -0x70),
                           (UnityEngine_GameObject_o *)pSVar21,node,(MethodInfo *)0x0);
                pSVar21 = (System_String_o *)__this_02->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0x80) =
                     *(undefined8 *)((long)register0x00000020 + -0x60);
                *(undefined8 *)((long)register0x00000020 + -0x78) =
                     *(undefined8 *)((long)register0x00000020 + -0x58);
                *(undefined8 *)((long)register0x00000020 + -0x90) =
                     *(undefined8 *)((long)register0x00000020 + -0x70);
                *(undefined8 *)((long)register0x00000020 + -0x88) =
                     *(undefined8 *)((long)register0x00000020 + -0x68);
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0x90),pSVar21,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4510318;
    auVar24 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x98) = pTVar19;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0xa0) =
         __this;
    *(System_Object_array **)((long)register0x00000020 + -0xa8) = unaff_R14;
    *(System_Object_array **)((long)register0x00000020 + -0xb0) = __this_02;
    *(long *)((long)register0x00000020 + -0xb8) = auVar24._0_8_;
    fVar23 = auVar24._8_4_;
    fVar12 = SUB84(pMVar20,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x4510373;
    pUVar22 = pUVar3;
    bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    lVar13 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar13 != 0) {
      in_RCX = (MethodInfo *)0x0;
      if (*(long *)(lVar13 + 0x220) != 0) {
        fVar16 = *(float *)(*(long *)(lVar13 + 0x220) + 0x10);
        fVar17 = fVar12;
        if ((int)fVar16 <= (int)fVar12) {
          fVar17 = fVar16;
        }
        if ((int)fVar12 < 0) {
          fVar17 = 0.0;
        }
        if ((int)fVar23 < (int)fVar16) {
          fVar16 = fVar23;
        }
        if ((int)fVar23 < 0) {
          fVar16 = 0.0;
        }
        if (fVar17 == fVar16) {
          if (*(char *)(lVar13 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar12 = fVar16;
        if ((int)fVar17 <= (int)fVar16) {
          fVar12 = fVar17;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar12;
        if ((int)fVar16 <= (int)fVar17) {
          fVar16 = fVar17;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar16;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0xc0) = pUVar3;
    b = (System_String_o *)pUVar22[2].fields.m_CachedPtr;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x4510405;
    bVar8 = System_String__op_Equality(pSVar21,b,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pSVar21 = (System_String_o *)pUVar22[2].fields.m_CachedPtr;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x4510414;
    bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
    uVar14 = CONCAT44(extraout_var,bVar8);
    if ((char)bVar8 == '\0') {
      pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)pUVar22[3].fields.m_CachedPtr;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar1 = *(undefined1 *)((long)&pUVar22[6].klass + 2);
        pSVar21 = (System_String_o *)pUVar22[2].fields.m_CachedPtr;
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -200) = 0x451043e;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar4,pSVar21,(uint)bVar1,(MethodInfo *)0x0)
        ;
        uVar14 = CONCAT44(extraout_var_00,bVar8);
        cVar7 = (char)bVar8;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar7 = *(undefined1 *)((long)&pUVar22[6].klass + 2);
joined_r0x04510440:
      if (cVar7 != '\0') {
        return;
      }
    }
    uVar6 = *(undefined8 *)((long)register0x00000020 + -0xc0);
    *(ulong *)((long)register0x00000020 + -0xc0) = (ulong)pMVar20 & 0xffffffff;
    *(undefined8 *)((long)register0x00000020 + -200) = uVar6;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = uVar14;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    x = pUVar22[4].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fb46;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    uVar9 = *(uint *)((long)&pUVar22[5].monitor + 4);
    unaff_RBP = (ulong)uVar9;
    pTVar19 = (TMPro_TMP_InputField_o *)pUVar22[4].klass;
    if ((int)uVar9 < 0) {
      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition(pTVar19,(MethodInfo *)0x0);
        pTVar19 = (TMPro_TMP_InputField_o *)pUVar22[4].klass;
        if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
          unaff_RBP = (ulong)uVar9;
          lVar13 = *(long *)&(pTVar19->fields).m_SelectionColor.fields.a;
          if (lVar13 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            unaff_RBP = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar19 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar13 = *(long *)&(pTVar19->fields).m_SelectionColor.fields.a, lVar13 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar13 + 0x10) < (int)unaff_RBP) {
        unaff_RBP = (ulong)*(uint *)(lVar13 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar19,(int32_t)unaff_RBP,(MethodInfo *)0x0);
      pTVar19 = (TMPro_TMP_InputField_o *)pUVar22[4].klass;
      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar19,(int32_t)unaff_RBP,(MethodInfo *)0x0);
        *(undefined4 *)&pUVar22[5].monitor = 0xffffffff;
        *(undefined4 *)((long)&pUVar22[5].monitor + 4) = 0xffffffff;
        *(undefined4 *)&pUVar22[5].fields.m_CachedPtr = 0xffffffff;
        *(undefined4 *)((long)&pUVar22[5].fields.m_CachedPtr + 4) = 0xffffffff;
        lVar13 = pUVar22[1].fields.m_CachedPtr;
        if (lVar13 != 0) {
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          length = *(int32_t *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar13 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&pUVar22[6].klass + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x450fc0f;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0xd8) = auVar24._8_8_ & 0xffffffff;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0xe0) = pUVar22;
    *(undefined8 *)((long)register0x00000020 + -0xe8) = uVar14;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    unaff_RBX = *(System_Collections_Generic_List_object__o **)
                 &(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fc5b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
      fVar12 = (pTVar19->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar5,(int32_t)fVar12,(MethodInfo *)0x0);
      pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar5,(int32_t)(pTVar19->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    unaff_R14 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fca1;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0xf0) = unaff_RBP;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0xf8) = unaff_R15;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x100) = pTVar19;
    *(MethodInfo ***)((long)register0x00000020 + -0x108) = unaff_R13;
    *(MethodInfo_362BED0 ***)((long)register0x00000020 + -0x110) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x118) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x120) = uVar14;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)unaff_R14->m_Items + 0x71) == '\0') {
      return;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R14->m_Items[1];
    if ((System_Object_array *)__this != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
      unaff_RBX = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar9 = *(uint *)(unaff_R14->m_Items + 0xc);
        unaff_RBP = (ulong)uVar9;
        uVar10 = (__this_01->fields)._size;
        uVar11 = (int)((System_Object_array *)__this)->max_length + uVar9;
        if ((int)uVar10 < (int)uVar11) {
          uVar11 = uVar10;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar11;
        if ((int)uVar9 < (int)uVar11) {
          unaff_R12 = &MethodInfo_String_get_Item;
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)unaff_RBP;
            iVar2 = *(int *)(unaff_R14->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fd62;
            pIVar15 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index - iVar2,
                                 MethodInfo_String_get_Item);
            unaff_RBX = (System_Collections_Generic_List_object__o *)0x0;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar15,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            unaff_RBP = (ulong)(index + 1U);
            if ((int)uVar11 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
            __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R14->m_Items[1];
            unaff_RBX = __this_01;
          } while ((System_Object_array *)__this != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          unaff_RBX = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fdda;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pIVar15 = unaff_R14->m_Items[9];
          __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
          if (pIVar15 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar15->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar15,0,0,pIVar15->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe21;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x45100f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Update
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  float value;
  System_Array_o *array;
  TMPro_TMP_InputField_o *pTVar2;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *gameObject;
  UnityEngine_Object_c *x;
  UnityEngine_Object_c *pUVar4;
  Il2CppClass **ppIVar5;
  Il2CppClass *pIVar6;
  Il2CppClass *key;
  undefined8 uVar7;
  char cVar8;
  bool_conflict bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  Il2CppObject *pIVar16;
  System_Action_string__o *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int iVar17;
  MethodInfo *in_RCX;
  int iVar18;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_object__o *x_00;
  System_Object_array *unaff_RBX;
  int iVar19;
  ulong uVar20;
  long *unaff_RBP;
  UnityEngine_Object_o *pUVar21;
  MethodInfo *pMVar22;
  System_String_o *pSVar23;
  TMPro_TMP_InputField_o *pTVar24;
  UnityEngine_Object_c *pUVar25;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  System_Object_array *unaff_R14;
  UnityEngine_Object_o *pUVar26;
  System_Object_array *unaff_R15;
  undefined1 auVar27 [16];
  
  do {
    *(long **)((long)register0x00000020 + -8) = unaff_RBP;
    *(System_Object_array **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(System_Object_array **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if (*(char *)(((System_Object_array *)__this)->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this,method);
    }
    pUVar21 = (UnityEngine_Object_o *)((System_Object_array *)__this)->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar22 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451015c;
    pUVar26 = pUVar21;
    bVar9 = UnityEngine_Object__op_Equality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    if (((System_Object_array *)__this)->m_Items[8] != (Il2CppObject *)0x0) {
      if (*(char *)&((System_Object_array *)__this)->m_Items[8][0x27].klass == '\0') {
        return;
      }
      pSVar23 = (System_String_o *)((System_Object_array *)__this)->m_Items[4];
      pMVar22 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4510189;
      bVar9 = System_String__IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        pGVar3 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)((System_Object_array *)__this)->m_Items[7];
        if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)((System_Object_array *)__this)->m_Items + 0x72);
        pMVar22 = (MethodInfo *)((System_Object_array *)__this)->m_Items[4];
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4510265;
        bVar9 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar3,(System_String_o *)pMVar22,(uint)bVar1,(MethodInfo *)0x0);
        cVar8 = (char)bVar9;
      }
      else {
        cVar8 = *(undefined1 *)((long)((System_Object_array *)__this)->m_Items + 0x72);
      }
      if (cVar8 == '\0') {
        return;
      }
      pTVar24 = (TMPro_TMP_InputField_o *)((System_Object_array *)__this)->m_Items[8];
      pUVar26 = (UnityEngine_Object_o *)0x0;
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar22 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x45101b2;
        uVar10 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar24,(MethodInfo *)0x0);
        pTVar24 = (TMPro_TMP_InputField_o *)((System_Object_array *)__this)->m_Items[8];
        pUVar26 = (UnityEngine_Object_o *)0x0;
        if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
          pUVar21 = (UnityEngine_Object_o *)(ulong)uVar10;
          pMVar22 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x45101c8;
          uVar11 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar24,(MethodInfo *)0x0);
          if ((int)uVar10 <= (int)uVar11) {
            uVar11 = uVar10;
          }
          unaff_R14 = (System_Object_array *)(ulong)uVar11;
          pTVar24 = (TMPro_TMP_InputField_o *)((System_Object_array *)__this)->m_Items[8];
          pUVar26 = (UnityEngine_Object_o *)0x0;
          if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar22 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x45101e5;
            uVar10 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar24,(MethodInfo *)0x0);
            pTVar24 = (TMPro_TMP_InputField_o *)((System_Object_array *)__this)->m_Items[8];
            pUVar26 = (UnityEngine_Object_o *)0x0;
            if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x45101fb;
              uVar12 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar24,(MethodInfo *)0x0);
              if ((int)uVar10 < (int)uVar12) {
                uVar10 = uVar12;
              }
              pUVar21 = (UnityEngine_Object_o *)(ulong)uVar10;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        (__this,uVar11,uVar10,in_RCX);
              if ((*(int *)(((System_Object_array *)__this)->m_Items + 0xc) < 0) ||
                 (*(int *)((long)((System_Object_array *)__this)->m_Items + 100) <=
                  *(int *)(((System_Object_array *)__this)->m_Items + 0xc))) {
                ((System_Object_array *)__this)->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar22 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4510228;
              bVar9 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') {
                return;
              }
              if (*(int *)(((System_Object_array *)__this)->m_Items + 0xd) ==
                  *(int *)(((System_Object_array *)__this)->m_Items + 0xc)) {
                uVar10 = *(uint *)((long)((System_Object_array *)__this)->m_Items + 100);
                if (*(uint *)((long)((System_Object_array *)__this)->m_Items + 0x6c) == uVar10) {
                  return;
                }
              }
              else {
                uVar10 = *(uint *)((long)((System_Object_array *)__this)->m_Items + 100);
              }
              in_RCX = (MethodInfo *)(ulong)uVar10;
              *(int *)(((System_Object_array *)__this)->m_Items + 0xd) =
                   *(int *)(((System_Object_array *)__this)->m_Items + 0xc);
              *(uint *)((long)((System_Object_array *)__this)->m_Items + 0x6c) = uVar10;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        (__this,pMVar22);
              __this_01 = (UnityEngine_Component_o *)((System_Object_array *)__this)->m_Items[8];
              pUVar26 = (UnityEngine_Object_o *)0x0;
              if (__this_01 != (UnityEngine_Component_o *)0x0) {
                gameObject = (UnityEngine_GameObject_o *)((System_Object_array *)__this)->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0x58),
                           (System_String_o *)((long)register0x00000020 + -0x38),gameObject,node,
                           (MethodInfo *)0x0);
                pSVar23 = (System_String_o *)((System_Object_array *)__this)->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0x48) =
                     *(undefined8 *)((long)register0x00000020 + -0x28);
                *(undefined8 *)((long)register0x00000020 + -0x40) =
                     *(undefined8 *)((long)register0x00000020 + -0x20);
                *(undefined8 *)((long)register0x00000020 + -0x58) =
                     *(undefined8 *)((long)register0x00000020 + -0x38);
                *(undefined8 *)((long)register0x00000020 + -0x50) =
                     *(undefined8 *)((long)register0x00000020 + -0x30);
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0x58),pSVar23,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4510318;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x60) = pUVar21;
    *(System_Object_array **)((long)register0x00000020 + -0x68) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x70) = unaff_R14;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x78) =
         __this;
    *(long *)((long)register0x00000020 + -0x80) = auVar27._0_8_;
    iVar19 = auVar27._8_4_;
    iVar13 = (int)pMVar22;
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    x = pUVar26[4].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar23 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4510373;
    pUVar25 = x;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pUVar4 = pUVar26[4].klass;
    if (pUVar4 != (UnityEngine_Object_c *)0x0) {
      ppIVar5 = pUVar4[1]._1.implementedInterfaces;
      in_RCX = (MethodInfo *)0x0;
      if (ppIVar5 != (Il2CppClass **)0x0) {
        iVar17 = *(int *)(ppIVar5 + 2);
        iVar18 = iVar13;
        if (iVar17 <= iVar13) {
          iVar18 = iVar17;
        }
        if (iVar13 < 0) {
          iVar18 = 0;
        }
        if (iVar19 < iVar17) {
          iVar17 = iVar19;
        }
        if (iVar19 < 0) {
          iVar17 = 0;
        }
        if (iVar18 == iVar17) {
          if ((char)pUVar4[1]._2.instance_size == '\0') {
            return;
          }
          pUVar26[5].monitor = (void *)0xffffffffffffffff;
          return;
        }
        iVar13 = iVar17;
        if (iVar18 <= iVar17) {
          iVar13 = iVar18;
        }
        *(int *)&pUVar26[5].monitor = iVar13;
        if (iVar17 <= iVar18) {
          iVar17 = iVar18;
        }
        *(int *)((long)&pUVar26[5].monitor + 4) = iVar17;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0x88) = x;
    pIVar6 = (pUVar25->_1).element_class;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510405;
    bVar9 = System_String__op_Equality(pSVar23,(System_String_o *)pIVar6,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pIVar6 = (pUVar25->_1).element_class;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510414;
    bVar9 = System_String__IsNullOrEmpty((System_String_o *)pIVar6,(MethodInfo *)0x0);
    uVar15 = CONCAT44(extraout_var,bVar9);
    if ((char)bVar9 == '\0') {
      pIVar6 = (pUVar25->_1).parent;
      if (pIVar6 != (Il2CppClass *)0x0) {
        bVar1 = *(undefined1 *)((long)&(pUVar25->_1).properties + 2);
        key = (pUVar25->_1).element_class;
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x451043e;
        bVar9 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pIVar6,(System_String_o *)key,
                           (uint)bVar1,(MethodInfo *)0x0);
        uVar15 = CONCAT44(extraout_var_00,bVar9);
        cVar8 = (char)bVar9;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar8 = *(undefined1 *)((long)&(pUVar25->_1).properties + 2);
joined_r0x04510440:
      if (cVar8 != '\0') {
        return;
      }
    }
    uVar7 = *(undefined8 *)((long)register0x00000020 + -0x88);
    *(ulong *)((long)register0x00000020 + -0x88) = (ulong)pMVar22 & 0xffffffff;
    *(undefined8 *)((long)register0x00000020 + -0x90) = uVar7;
    *(undefined8 *)((long)register0x00000020 + -0x98) = uVar15;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pUVar21 = (pUVar25->_1).generic_class;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fb46;
    bVar9 = UnityEngine_Object__op_Equality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    uVar10 = *(uint *)((long)&(pUVar25->_1).fields + 4);
    uVar20 = (ulong)uVar10;
    pTVar24 = (pUVar25->_1).generic_class;
    if ((int)uVar10 < 0) {
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fb86;
        uVar10 = TMPro_TMP_InputField__get_caretPosition(pTVar24,(MethodInfo *)0x0);
        pTVar24 = (pUVar25->_1).generic_class;
        if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
          uVar20 = (ulong)uVar10;
          lVar14 = *(long *)&(pTVar24->fields).m_SelectionColor.fields.a;
          if (lVar14 != 0) {
            if (-1 < (int)uVar10) goto label_0450fba1;
            uVar20 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar24 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar14 = *(long *)&(pTVar24->fields).m_SelectionColor.fields.a, lVar14 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar14 + 0x10) < (int)uVar20) {
        uVar20 = (ulong)*(uint *)(lVar14 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar24,(int32_t)uVar20,(MethodInfo *)0x0);
      pTVar24 = (pUVar25->_1).generic_class;
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar24,(int32_t)uVar20,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar25->_1).fields = 0xffffffff;
        *(undefined4 *)((long)&(pUVar25->_1).fields + 4) = 0xffffffff;
        *(undefined4 *)&(pUVar25->_1).events = 0xffffffff;
        *(undefined4 *)((long)&(pUVar25->_1).events + 4) = 0xffffffff;
        lVar14 = *(long *)&(pUVar25->_1).byval_arg.bits;
        if (lVar14 != 0) {
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          length = *(int32_t *)(lVar14 + 0x18);
          *(undefined4 *)(lVar14 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar14 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(pUVar25->_1).properties + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x450fc0f;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0xa0) = auVar27._8_8_ & 0xffffffff;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0xa8) = pUVar25;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = uVar15;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x_00 = *(System_Collections_Generic_List_object__o **)
            &(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x450fc5b;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pTVar2 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
      value = (pTVar24->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar2,(int32_t)value,(MethodInfo *)0x0);
      pTVar2 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar2,(int32_t)(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    unaff_R14 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x450fca1;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0xb8) = uVar20;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0xc0) = pUVar26;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -200) = pTVar24;
    *(MethodInfo ***)((long)register0x00000020 + -0xd0) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0xd8) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0xe0) = x_00;
    *(undefined8 *)((long)register0x00000020 + -0xe8) = uVar15;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)unaff_R14->m_Items + 0x71) == '\0') {
      return;
    }
    unaff_R15 = (System_Object_array *)unaff_R14->m_Items[1];
    if (unaff_R15 != (System_Object_array *)0x0) {
      __this_02 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
      x_00 = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar10 = *(uint *)(unaff_R14->m_Items + 0xc);
        uVar20 = (ulong)uVar10;
        uVar11 = (__this_02->fields)._size;
        uVar12 = (int)unaff_R15->max_length + uVar10;
        if ((int)uVar11 < (int)uVar12) {
          uVar12 = uVar11;
        }
        pUVar26 = (UnityEngine_Object_o *)(ulong)uVar12;
        if ((int)uVar10 < (int)uVar12) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            iVar19 = (int)uVar20;
            iVar13 = *(int *)(unaff_R14->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fd62;
            pIVar16 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)unaff_R15,iVar19 - iVar13,
                                 MethodInfo_String_get_Item);
            x_00 = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_02,iVar19,pIVar16,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar20 = (ulong)(iVar19 + 1U);
            if ((int)uVar12 <= (int)(iVar19 + 1U)) goto label_0450fd96;
            __this_02 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
            unaff_R15 = (System_Object_array *)unaff_R14->m_Items[1];
            x_00 = __this_02;
          } while (unaff_R15 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x_00 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fdda;
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pIVar16 = unaff_R14->m_Items[9];
          unaff_R15 = (System_Object_array *)0x0;
          if (pIVar16 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar16->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar16,0,0,pIVar16->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x450fe21;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0xf0) = uVar20;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0xf8) = pUVar26;
    *(System_Object_array **)((long)register0x00000020 + -0x100) = unaff_R14;
    *(MethodInfo ***)((long)register0x00000020 + -0x108) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x110) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x118) = x_00;
    *(undefined8 *)((long)register0x00000020 + -0x120) = uVar15;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    unaff_RBX = (System_Object_array *)unaff_R15->m_Items[8];
    unaff_RBP = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450feff;
    __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_04510010:
      unaff_RBP = &TypeInfo_Object;
      pUVar21 = (UnityEngine_Object_o *)unaff_R15->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R14 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510032;
      bVar9 = UnityEngine_Object__op_Inequality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_0451007e;
      pIVar16 = unaff_R15->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510049;
      unaff_R14 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510063;
      method = (MethodInfo *)unaff_R15;
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R14;
      System_Action_object____ctor();
      unaff_RBX = (System_Object_array *)0x0;
      if (pIVar16 != (Il2CppObject *)0x0) {
        pMVar22 = pIVar16->klass->vtable[0x4f].method;
        vtableDispatch = pIVar16->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x451007e;
        (*vtableDispatch)(pIVar16,unaff_R14,pMVar22);
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R15,
                   (MethodInfo *)unaff_R14);
        pGVar3 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_R15->m_Items[7];
        if (pGVar3 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x451009e;
          value_00 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar3,value_00,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
      unaff_R14 = (System_Object_array *)unaff_R15->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450ff2a;
      unaff_RBX = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450ff44;
      method = (MethodInfo *)unaff_R15;
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX;
      UnityEngine_Events_UnityAction_object____ctor();
      if (unaff_R14 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450ff62;
        method = (MethodInfo *)unaff_RBX;
        __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R14;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)unaff_R14,
                   (UnityEngine_Events_UnityAction_T0__o *)unaff_RBX,MethodInfo_Void_RemoveListener);
        if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
          unaff_R14 = (System_Object_array *)unaff_R15->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450ff86;
          unaff_RBX = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          unaff_RBP = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450ffa1;
          method = (MethodInfo *)unaff_R15;
          __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (unaff_R14 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450ffc0;
            method = (MethodInfo *)unaff_RBX;
            __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R14;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)unaff_R14,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)unaff_RBX,MethodInfo_Void_RemoveListener);
            if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = unaff_R15->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450ffdd;
              unaff_RBX = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fff1;
              method = (MethodInfo *)unaff_R15;
              __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              unaff_R14 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)unaff_RBX,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450f950

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorsEnabled
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._colorsEnabledKey,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return CONCAT31((int3)((uint)bVar1 >> 8),*(char *)((long)&(__this->fields)._attached + 2) != '\0');
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
// 0x45103f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  int iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *array;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  bool_conflict bVar13;
  long lVar14;
  undefined8 uVar15;
  Il2CppObject *pIVar16;
  System_Object_array *call;
  System_Object_array *method_00;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar17;
  MethodInfo *in_RCX;
  float fVar18;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *unaff_RBX;
  int index;
  ulong uVar19;
  long *plVar20;
  TMPro_TMP_InputField_o *pTVar21;
  ulong unaff_RBP;
  System_Object_array *method_01;
  MethodInfo *pMVar22;
  System_Object_array *__this_02;
  System_Object_array *__this_03;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar23;
  ulong unaff_R14;
  uint uVar24;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar25 [16];
  
  do {
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -8) =
         unaff_RBX;
    pSVar7 = (__this->fields)._colorsEnabledKey;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x4510405;
    bVar13 = System_String__op_Equality(key,pSVar7,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    pSVar7 = (__this->fields)._colorsEnabledKey;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x4510414;
    bVar13 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    uVar15 = CONCAT44(extraout_var,bVar13);
    if ((char)bVar13 == '\0') {
      pGVar6 = (__this->fields)._state;
      if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar2 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
        pSVar7 = (__this->fields)._colorsEnabledKey;
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0x451043e;
        bVar13 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar6,pSVar7,(uint)bVar2,(MethodInfo *)0x0)
        ;
        uVar15 = CONCAT44(extraout_var_00,bVar13);
        cVar9 = (char)bVar13;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar9 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
joined_r0x04510440:
      if (cVar9 != '\0') {
        return;
      }
    }
    uVar8 = *(undefined8 *)((long)register0x00000020 + -8);
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar8;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar15;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pTVar21 = (__this->fields)._input;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb46;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    uVar10 = (__this->fields)._selectionEnd;
    uVar19 = (ulong)uVar10;
    pTVar21 = (__this->fields)._input;
    if ((int)uVar10 < 0) {
      if (pTVar21 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb86;
        uVar10 = TMPro_TMP_InputField__get_caretPosition(pTVar21,(MethodInfo *)0x0);
        pTVar21 = (__this->fields)._input;
        if (pTVar21 != (TMPro_TMP_InputField_o *)0x0) {
          uVar19 = (ulong)uVar10;
          lVar14 = *(long *)&(pTVar21->fields).m_SelectionColor.fields.a;
          if (lVar14 != 0) {
            if (-1 < (int)uVar10) goto label_0450fba1;
            uVar19 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar21 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar14 = *(long *)&(pTVar21->fields).m_SelectionColor.fields.a, lVar14 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar14 + 0x10) < (int)uVar19) {
        uVar19 = (ulong)*(uint *)(lVar14 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar21,(int32_t)uVar19,(MethodInfo *)0x0);
      pTVar21 = (__this->fields)._input;
      if (pTVar21 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar21,(int32_t)uVar19,(MethodInfo *)0x0);
        (__this->fields)._selectionStart = -1;
        (__this->fields)._selectionEnd = -1;
        (__this->fields)._openedStart = -1;
        (__this->fields)._openedEnd = -1;
        pSVar4 = (__this->fields)._previewColors;
        if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          if (0 < length) {
            array = (pSVar4->fields)._items;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbf8;
            System_Array__Clear((System_Array_o *)array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(__this->fields)._attached + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc0f;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x20) = unaff_R14;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x28) =
         __this;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar15;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x_00 = *(System_Collections_Generic_List_object__o **)
            &(pTVar21->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc5b;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar21->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
      fVar12 = (pTVar21->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar5,(int32_t)fVar12,(MethodInfo *)0x0);
      pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar21->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar5,(int32_t)(pTVar21->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fca1;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x38) = uVar19;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x40) = unaff_R15;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x48) = pTVar21;
    *(MethodInfo ***)((long)register0x00000020 + -0x50) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x58) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x60) = x_00;
    *(undefined8 *)((long)register0x00000020 + -0x68) = uVar15;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)method_00->m_Items + 0x71) == '\0') {
      return;
    }
    __this_02 = (System_Object_array *)method_00->m_Items[1];
    if (__this_02 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
      x_00 = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar10 = *(uint *)(method_00->m_Items + 0xc);
        uVar19 = (ulong)uVar10;
        uVar11 = (__this_01->fields)._size;
        uVar24 = (int)__this_02->max_length + uVar10;
        if ((int)uVar11 < (int)uVar24) {
          uVar24 = uVar11;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar24;
        if ((int)uVar10 < (int)uVar24) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar19;
            iVar3 = *(int *)(method_00->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd62;
            pIVar16 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index - iVar3,
                                 MethodInfo_String_get_Item);
            x_00 = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar16,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar19 = (ulong)(index + 1U);
            if ((int)uVar24 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
            __this_02 = (System_Object_array *)method_00->m_Items[1];
            x_00 = __this_01;
          } while (__this_02 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x_00 = (System_Collections_Generic_List_object__o *)method_00->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdda;
          bVar13 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return;
          }
          pIVar16 = method_00->m_Items[9];
          __this_02 = (System_Object_array *)0x0;
          if (pIVar16 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar16->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar16,0,0,pIVar16->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fe21;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x70) = uVar19;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x78) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x80) = method_00;
    *(MethodInfo ***)((long)register0x00000020 + -0x88) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x90) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x98) = x_00;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar15;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_02->m_Items[8];
    plVar20 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feff;
    __this_03 = call;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
label_04510010:
      plVar20 = &TypeInfo_Object;
      x = (UnityEngine_Object_o *)__this_02->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510032;
      bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                   (MethodInfo *)method_00);
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar6,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar16 = __this_02->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510049;
      method_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510063;
      method_01 = __this_02;
      __this_03 = method_00;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar16 != (Il2CppObject *)0x0) {
        pMVar22 = pIVar16->klass->vtable[0x4f].method;
        vtableDispatch = pIVar16->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451007e;
        (*vtableDispatch)(pIVar16,method_00,pMVar22);
        goto label_0451007e;
      }
    }
    else if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
      method_00 = (System_Object_array *)__this_02->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff44;
      method_01 = __this_02;
      __this_03 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (method_00 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff62;
        method_01 = call;
        __this_03 = method_00;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)method_00,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
          method_00 = (System_Object_array *)__this_02->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar20 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffa1;
          method_01 = __this_02;
          __this_03 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (method_00 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffc0;
            method_01 = call;
            __this_03 = method_00;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)method_00,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = __this_02->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fff1;
              method_01 = __this_02;
              __this_03 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              method_00 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0xa8) = plVar20;
    *(System_Object_array **)((long)register0x00000020 + -0xb0) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0xb8) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_03->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                 (MethodInfo *)method_01);
    }
    pTVar21 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar22 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451015c;
    unaff_R15 = pTVar21;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_03->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_03->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar7 = (System_String_o *)__this_03->m_Items[4];
      pMVar22 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510189;
      bVar13 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
        if (pGVar6 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar2 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
        pMVar22 = (MethodInfo *)__this_03->m_Items[4];
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510265;
        bVar13 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           (pGVar6,(System_String_o *)pMVar22,(uint)bVar2,(MethodInfo *)0x0);
        cVar9 = (char)bVar13;
      }
      else {
        cVar9 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
      }
      if (cVar9 == '\0') {
        return;
      }
      pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar22 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101b2;
        uVar10 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
        pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar21 = (TMPro_TMP_InputField_o *)(ulong)uVar10;
          pMVar22 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101c8;
          uVar11 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
          if ((int)uVar10 <= (int)uVar11) {
            uVar11 = uVar10;
          }
          method_00 = (System_Object_array *)(ulong)uVar11;
          pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar22 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101e5;
            uVar10 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
            pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101fb;
              uVar24 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
              if ((int)uVar10 < (int)uVar24) {
                uVar10 = uVar24;
              }
              pTVar21 = (TMPro_TMP_InputField_o *)(ulong)uVar10;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,uVar11,
                         uVar10,in_RCX);
              if ((*(int *)(__this_03->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_03->m_Items + 100) <= *(int *)(__this_03->m_Items + 0xc))) {
                __this_03->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar22 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510228;
              bVar13 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar13 != '\0') {
                return;
              }
              if (*(int *)(__this_03->m_Items + 0xd) == *(int *)(__this_03->m_Items + 0xc)) {
                uVar10 = *(int32_t *)((long)__this_03->m_Items + 100);
                if (*(int32_t *)((long)__this_03->m_Items + 0x6c) == uVar10) {
                  return;
                }
              }
              else {
                uVar10 = *(int32_t *)((long)__this_03->m_Items + 100);
              }
              in_RCX = (MethodInfo *)(ulong)uVar10;
              *(int *)(__this_03->m_Items + 0xd) = *(int *)(__this_03->m_Items + 0xc);
              *(uint *)((long)__this_03->m_Items + 0x6c) = uVar10;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,pMVar22);
              pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar7 = (System_String_o *)__this_03->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -200) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),
                           (System_String_o *)((long)register0x00000020 + -0xd8),
                           (UnityEngine_GameObject_o *)pSVar7,node,(MethodInfo *)0x0);
                pSVar7 = (System_String_o *)__this_03->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0xe8) =
                     *(undefined8 *)((long)register0x00000020 + -200);
                *(undefined8 *)((long)register0x00000020 + -0xe0) =
                     *(undefined8 *)((long)register0x00000020 + -0xc0);
                *(undefined8 *)((long)register0x00000020 + -0xf8) =
                     *(undefined8 *)((long)register0x00000020 + -0xd8);
                *(undefined8 *)((long)register0x00000020 + -0xf0) =
                     *(undefined8 *)((long)register0x00000020 + -0xd0);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),pSVar7,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510318;
    auVar25 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x100) = pTVar21;
    *(System_Object_array **)((long)register0x00000020 + -0x108) = __this_02;
    *(System_Object_array **)((long)register0x00000020 + -0x110) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0x118) = __this_03;
    *(long *)((long)register0x00000020 + -0x120) = auVar25._0_8_;
    unaff_R14 = auVar25._8_8_ & 0xffffffff;
    fVar23 = auVar25._8_4_;
    unaff_RBP = (ulong)pMVar22 & 0xffffffff;
    fVar12 = SUB84(pMVar22,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    unaff_RBX = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
                 &(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    key = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510373;
    __this = unaff_RBX;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    lVar14 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar14 != 0) {
      in_RCX = (MethodInfo *)0x0;
      if (*(long *)(lVar14 + 0x220) != 0) {
        fVar17 = *(float *)(*(long *)(lVar14 + 0x220) + 0x10);
        fVar18 = fVar12;
        if ((int)fVar17 <= (int)fVar12) {
          fVar18 = fVar17;
        }
        if ((int)fVar12 < 0) {
          fVar18 = 0.0;
        }
        if ((int)fVar23 < (int)fVar17) {
          fVar17 = fVar23;
        }
        if ((int)fVar23 < 0) {
          fVar17 = 0.0;
        }
        if (fVar18 == fVar17) {
          if (*(char *)(lVar14 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar12 = fVar17;
        if ((int)fVar18 <= (int)fVar17) {
          fVar12 = fVar18;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar12;
        if ((int)fVar17 <= (int)fVar18) {
          fVar17 = fVar18;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar17;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4510450

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_String_Fields *pSVar2;
  int32_t length;
  System_Action_GameObject__o *pSVar3;
  TMPro_TMP_Text_o *pTVar4;
  System_Object_array *pSVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint16_t uVar8;
  uint16_t uVar9;
  bool_conflict bVar10;
  int iVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  MethodInfo *pMVar15;
  UnityEngine_GameObject_o *pUVar16;
  Il2CppObject *pIVar17;
  System_Collections_Generic_List_object__o *pSVar18;
  System_String_Fields SVar19;
  MethodInfo *pMVar20;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar21;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int index;
  int iVar22;
  uint uVar23;
  Il2CppClass *input;
  Il2CppClass *pIVar24;
  System_Collections_Generic_List_string__o *__this_00;
  long lVar25;
  System_String_c *__this_01;
  MethodInfo *in_R9;
  System_String_o *__this_02;
  int iVar26;
  char cStack_31;
  Il2CppMethodPointer pIStack_30;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_28;
  
  pMVar20 = (MethodInfo *)value;
  if (cRam00000000057aed7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"\n");
    cRam00000000057aed7e = '\x01';
  }
  pGStack_28 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  pIStack_30 = (Il2CppMethodPointer)0x0;
  cStack_31 = '\0';
  pGVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument(__this,pMVar20);
  pMVar20 = (MethodInfo *)&stack0xffffffffffffffd0;
  bVar10 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                     (value,pGVar12,&stack0xffffffffffffffd8,(System_String_o **)pMVar20,
                      (bool_conflict *)&cStack_31,in_R9);
  if ((char)bVar10 != '\0') {
    *(Il2CppMethodPointer *)&(__this->fields)._colorsEnabled = pIStack_30;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._colorsEnabled);
    if (cStack_31 != '\0') {
      (__this->fields)._pendingImportColor = (System_String_o *)0x0;
      pMVar15 = (MethodInfo *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingImportColor);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,pMVar15);
      pGVar12 = pGStack_28;
      goto code_r0x04510663;
    }
  }
  if (value == (System_String_o *)0x0) {
    iVar11 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    iVar11 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    pSVar13 = value;
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = MiscExtensions__StripRichText(pSVar13,(MethodInfo *)0x0);
  pSVar14 = MiscExtensions__StripHex(pSVar13,(MethodInfo *)0x0);
  if (pSVar14 != (System_String_o *)0x0) {
    pMVar20 = (MethodInfo *)0x0;
    pMVar15 = (MethodInfo *)
              System_String__Replace_3af9030
                        (pSVar14,"\n",(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                         (MethodInfo *)0x0);
    if ((pMVar15 != (MethodInfo *)0x0) ||
       (pMVar15 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8), pSVar13 = pSVar14,
       pMVar15 != (MethodInfo *)0x0)) {
      if (0x1f < ((System_String_Fields *)&pMVar15->invoker_method)->_stringLength) {
        pMVar20 = (MethodInfo *)0x0;
        pMVar15 = (MethodInfo *)
                  System_String__Substring_3af8da0((System_String_o *)pMVar15,0,0x1f,(MethodInfo *)0x0);
      }
      bVar10 = System_String__op_Inequality((System_String_o *)pMVar15,value,(MethodInfo *)0x0);
      pMVar21 = method_00;
      if ((char)bVar10 != '\0') {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                  (__this,(System_String_o *)pMVar15,method_00);
        pMVar21 = extraout_RDX;
      }
      pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          ((__this->fields)._lastText,
                           (System_Collections_Generic_IList_string__o *)(__this->fields)._colors,pMVar21);
      pMVar21 = pMVar15;
      pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
                          (pSVar13,(System_String_o *)pMVar15,method_01);
      pGVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar13,pMVar21);
      bVar10 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
                         (__this,pGVar12,method_02);
      pSVar13 = (System_String_o *)&(__this->fields)._pendingImportColor;
      if ((char)bVar10 != '\0') {
        (__this->fields)._pendingImportColor = (System_String_o *)0x0;
        pMVar15 = (MethodInfo *)0x0;
        il2cpp_runtime_helper_022b4080();
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,pMVar15);
        *(undefined8 *)&(__this->fields)._colorsEnabled = 0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._colorsEnabled,0);
code_r0x04510663:
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,pGVar12,1,pMVar20);
        pSVar3 = (__this->fields)._imported;
        if (pSVar3 == (System_Action_GameObject__o *)0x0) {
          return;
        }
        pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pUVar16,(pSVar3->fields).method);
        return;
      }
      pMVar21 = *(MethodInfo **)pSVar13;
      if (pMVar21 != (MethodInfo *)0x0) {
        pSVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
                            ((System_String_o *)pMVar15,(System_Collections_Generic_IList_string__o *)pMVar21,
                             method_03);
        pGVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar13,pMVar21);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument(__this,pGVar12,0,pMVar20);
        return;
      }
      if (pGVar12 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
        (__this->fields)._lastText = (pGVar12->fields).Text;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._lastText);
        __this_00 = (__this->fields)._colors;
        pSVar13 = (System_String_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (__this_00->fields)._size;
          (__this_00->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._colors;
            pSVar13 = (System_String_o *)0x0;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto code_r0x045107d1;
          }
          System_Collections_Generic_List_object___AddRange
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (System_Collections_Generic_IEnumerable_T__o *)(pGVar12->fields).Colors,MethodInfo_Void_AddRange);
          if (g_data_057aed7f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          pTVar4 = (__this->fields)._text;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            return;
          }
          pTVar4 = (__this->fields)._text;
          pSVar13 = (System_String_o *)0x0;
          if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
            (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                      (pTVar4,0,0,(pTVar4->klass->vtable)._106_ForceMeshUpdate.method);
            return;
          }
        }
      }
    }
  }
code_r0x045107d1:
  il2cpp_runtime_helper_022b2c90();
  if (cRam00000000057aed81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    cRam00000000057aed81 = '\x01';
  }
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
  if (g_data_057aed6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aed6f = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar18,MethodInfo_List_1_System_String);
  pIVar17[1].monitor = pSVar18;
  il2cpp_runtime_helper_022b4080(&pIVar17[1].monitor);
  System_Object___ctor(pIVar17,(MethodInfo *)0x0);
  input = pSVar13[3].monitor;
  if (input == (Il2CppClass *)0x0) {
    input = (Il2CppClass *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  pIVar17[1].klass = input;
  il2cpp_runtime_helper_022b4080(pIVar17 + 1);
  pSVar18 = pIVar17[1].monitor;
  if (pSVar18 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___AddRange(pSVar18,pSVar13[1].monitor,MethodInfo_Void_AddRange);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar18 != (System_Collections_Generic_List_object__o *)0x0) ||
     (pSVar18 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
     pSVar18 != (System_Collections_Generic_List_object__o *)0x0)) {
    if (0x1f < *(int *)&(pSVar18->fields)._items) {
      System_String__Substring_3af8da0((System_String_o *)pSVar18,0,0x1f,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed83 = '\x01';
  }
  pSVar5 = pSVar18[2].fields._items;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar24 = (Il2CppClass *)0x0;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  pSVar5 = pSVar18[2].fields._items;
  if (input == (Il2CppClass *)0x0) {
    input = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar5 != (System_Object_array *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify
              ((TMPro_TMP_InputField_o *)pSVar5,(System_String_o *)input,(MethodInfo *)0x0);
    pSVar5 = pSVar18[2].fields._items;
    pIVar24 = input;
    if (pSVar5 != (System_Object_array *)0x0) {
      TMPro_TMP_InputField__ForceLabelUpdate((TMPro_TMP_InputField_o *)pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
  lVar25 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed82 = '\x01';
  }
  bVar10 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar25 + 0x98),(MethodInfo *)0x0);
  if (pIVar24 == (Il2CppClass *)0x0) {
    return;
  }
  if ((char)bVar10 != '\0') {
    return;
  }
  pSVar13 = (System_String_o *)(pIVar24->_1).name;
  bVar10 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  pSVar14 = *(System_String_o **)(lVar25 + 0x50);
  if (pSVar14 == (System_String_o *)0x0) {
    pSVar14 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    __this_02 = (System_String_o *)(pIVar24->_1).name;
    if (__this_02 == (System_String_o *)0x0) goto label_04510ab5;
label_04510ad6:
    if (pSVar14 != (System_String_o *)0x0) {
      iVar11 = (__this_02->fields)._stringLength;
      iVar22 = (pSVar14->fields)._stringLength;
      index = 0;
      if (iVar22 < iVar11) {
        if ((0 < iVar22) && (0 < iVar11)) {
          iVar11 = 0;
          do {
            index = iVar11;
            uVar8 = System_String__get_Chars(pSVar14,index,(MethodInfo *)0x0);
            uVar9 = System_String__get_Chars(__this_02,index,(MethodInfo *)0x0);
            if (uVar8 != uVar9) {
              iVar22 = (pSVar14->fields)._stringLength;
              goto label_04510b4d;
            }
            iVar11 = index + 1;
            iVar22 = (pSVar14->fields)._stringLength;
          } while ((iVar11 < iVar22) && (iVar11 < (__this_02->fields)._stringLength));
          index = index + 1;
        }
label_04510b4d:
        iVar11 = 0;
        if (0 < iVar22 - index) {
          iVar26 = -1;
          do {
            if ((__this_02->fields)._stringLength - index <= iVar11) break;
            uVar8 = System_String__get_Chars(pSVar14,iVar22 + iVar26,(MethodInfo *)0x0);
            uVar9 = System_String__get_Chars
                              (__this_02,(__this_02->fields)._stringLength + iVar26,(MethodInfo *)0x0);
            if (uVar8 != uVar9) break;
            iVar11 = iVar11 + 1;
            iVar22 = (pSVar14->fields)._stringLength;
            iVar26 = iVar26 + -1;
          } while (iVar11 < iVar22 - index);
        }
        iVar11 = (__this_02->fields)._stringLength - iVar11;
        if (index < iVar11) {
          do {
            pSVar18 = (System_Collections_Generic_List_object__o *)(pIVar24->_1).namespaze;
            pSVar13 = (System_String_o *)0x0;
            if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) goto label_04510c09;
            if ((pSVar18->fields)._size <= index) {
              return;
            }
            System_Collections_Generic_List_object___set_Item
                      (pSVar18,index,*(Il2CppObject **)(lVar25 + 0x98),MethodInfo_Void_set_Item);
            index = index + 1;
          } while (iVar11 != index);
        }
      }
      return;
    }
  }
  else {
    __this_02 = (System_String_o *)(pIVar24->_1).name;
    if (__this_02 != (System_String_o *)0x0) goto label_04510ad6;
label_04510ab5:
    __this_02 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (__this_02 != (System_String_o *)0x0) goto label_04510ad6;
  }
label_04510c09:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed84 = '\x01';
  }
  if (pSVar13 == (System_String_o *)0x0) {
    return;
  }
  SVar19 = pSVar13->fields;
  if ((SVar19 != (System_String_Fields)0x0) ||
     (SVar19 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8), SVar19 != (System_String_Fields)0x0)) {
    pSVar2 = &pSVar13->fields;
    if (0x1f < *(int *)((long)SVar19 + 0x10)) {
      SVar19 = (System_String_Fields)
               System_String__Substring_3af8da0((System_String_o *)SVar19,0,0x1f,(MethodInfo *)0x0);
    }
    pSVar13->fields = SVar19;
    il2cpp_runtime_helper_022b4080(pSVar2);
    __this_01 = pSVar13[1].klass;
    while ((__this_01 != (System_String_c *)0x0 && (SVar19 = *pSVar2, SVar19 != (System_String_Fields)0x0))) {
      uVar23 = *(uint *)&(__this_01->_1).namespaze;
      if ((int)uVar23 <= *(int *)((long)SVar19 + 0x10)) goto label_04510d10;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,uVar23 - 1,MethodInfo_Void_RemoveAt);
      __this_01 = pSVar13[1].klass;
    }
  }
label_04510d8b:
  il2cpp_runtime_helper_022b2c90();
  return;
  while( true ) {
    if (uVar23 < *(uint *)(pcVar6 + 0x18)) {
      *(uint *)&(__this_01->_1).namespaze = uVar23 + 1;
      *(Il2CppObject **)(pcVar6 + (long)(int)uVar23 * 8 + 0x20) = pIVar17;
      il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar23 * 8 + 0x20,pIVar17);
      __this_01 = pSVar13[1].klass;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,pIVar17,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
      __this_01 = pSVar13[1].klass;
    }
    if (__this_01 == (System_String_c *)0x0) break;
    uVar23 = *(uint *)&(__this_01->_1).namespaze;
    SVar19 = *pSVar2;
    if (SVar19 == (System_String_Fields)0x0) break;
label_04510d10:
    pIVar17 = "FFFFFF";
    lVar25 = MethodInfo_Void_Add;
    if (*(int *)((long)SVar19 + 0x10) <= (int)uVar23) {
      return;
    }
    puVar7 = (undefined1 *)((long)&(__this_01->_1).namespaze + 4);
    *(int *)puVar7 = *(int *)puVar7 + 1;
    pcVar6 = (__this_01->_1).name;
    if (pcVar6 == (char *)0x0) break;
  }
  goto label_04510d8b;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RefreshTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450f8c0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RefreshTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  TMPro_TMP_Text_o *pTVar2;
  
  if (g_data_057aed7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7f = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  pTVar2 = (__this->fields)._text;
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    vtableDispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
    (*vtableDispatch)
              (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(pTVar2->fields).m_RaycastTarget,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(pTVar2->fields).m_RectTransform;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    Gisketch_Aottg2UI_State_GisketchUIState__GetBool
              (__this_00,*(System_String_o **)&(pTVar2->fields).m_RaycastTarget,
               (uint)*(byte *)((long)&(pTVar2->fields).m_CachedMesh + 2),(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyDocument
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, bool updateInput, const MethodInfo* method);
// 0x450f1c0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,
               bool_conflict updateInput,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  
  method_01 = (MethodInfo *)document;
  if (g_data_057aed80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed80 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)document;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_4410c10(document,method_01);
  if (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    method_01 = (MethodInfo *)(document->fields).Text;
    (__this->fields)._lastText = (System_String_o *)method_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._lastText);
    __this_01 = (__this->fields)._colors;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_01->fields)._size;
      (__this_01->fields)._size = 0;
      if (0 < length) {
        method_01 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(__this_01->fields)._items,0,length,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._colors;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_0450f31d;
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)(document->fields).Colors,MethodInfo_Void_AddRange);
      if ((char)updateInput != '\0') {
        x = (__this->fields)._input;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                    (__this,(document->fields).Text,method_00);
        }
      }
      if (g_data_057aed7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed7f = '\x01';
      }
      pTVar2 = (__this->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pTVar2 = (__this->fields)._text;
      __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
label_0450f31d:
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this_00,method_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CurrentDocument
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x45107e0

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CurrentDocument
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  System_String_Fields *pSVar1;
  System_String_array *pSVar2;
  char *pcVar3;
  undefined1 *puVar4;
  Il2CppObject *item;
  uint16_t uVar5;
  bool_conflict bVar6;
  int iVar7;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *extraout_RAX;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  System_String_Fields SVar10;
  int index;
  int iVar11;
  uint uVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  long lVar15;
  System_String_Fields value;
  System_String_c *pSVar16;
  int iVar17;
  
  if (cRam00000000057aed81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    cRam00000000057aed81 = '\x01';
  }
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
  if (g_data_057aed6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aed6f = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_String);
  (pGVar8->fields).Colors = pSVar9;
  il2cpp_runtime_helper_022b4080(&(pGVar8->fields).Colors);
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  pSVar13 = (__this->fields)._lastText;
  if (pSVar13 == (System_String_o *)0x0) {
    pSVar13 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  (pGVar8->fields).Text = pSVar13;
  il2cpp_runtime_helper_022b4080(&pGVar8->fields);
  pSVar9 = (pGVar8->fields).Colors;
  if (pSVar9 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)pSVar9,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._colors,MethodInfo_Void_AddRange);
    return pGVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar9 != (System_Collections_Generic_List_string__o *)0x0) ||
     (pSVar9 = (System_Collections_Generic_List_string__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
     pSVar9 != (System_Collections_Generic_List_string__o *)0x0)) {
    if (*(int *)&(pSVar9->fields)._items < 0x20) {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)pSVar9;
    }
    pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
             System_String__Substring_3af8da0((System_String_o *)pSVar9,0,0x1f,(MethodInfo *)0x0);
    return pGVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed83 = '\x01';
  }
  pSVar2 = pSVar9[2].fields._items;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = (System_String_o *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)CONCAT44(extraout_var_01,bVar6);
  }
  pSVar2 = pSVar9[2].fields._items;
  if (pSVar13 == (System_String_o *)0x0) {
    pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar2 != (System_String_array *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify((TMPro_TMP_InputField_o *)pSVar2,pSVar13,(MethodInfo *)0x0);
    pSVar2 = pSVar9[2].fields._items;
    pSVar14 = pSVar13;
    if (pSVar2 != (System_String_array *)0x0) {
      TMPro_TMP_InputField__ForceLabelUpdate((TMPro_TMP_InputField_o *)pSVar2,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed82 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar15 + 0x98),(MethodInfo *)0x0);
  if (pSVar14 == (System_String_o *)0x0) {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  }
  if ((char)bVar6 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  }
  value = pSVar14->fields;
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  }
  pSVar13 = *(System_String_o **)(lVar15 + 0x50);
  if (pSVar13 == (System_String_o *)0x0) {
    pSVar13 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    SVar10 = pSVar14->fields;
    if (SVar10 == (System_String_Fields)0x0) goto label_04510ab5;
label_04510ad6:
    if (pSVar13 != (System_String_o *)0x0) {
      iVar7 = ((System_String_Fields *)((long)SVar10 + 0x10))->_stringLength;
      iVar11 = (pSVar13->fields)._stringLength;
      index = 0;
      pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
      if (iVar11 < iVar7) {
        if ((0 < iVar11) && (0 < iVar7)) {
          iVar7 = 0;
          do {
            index = iVar7;
            uVar5 = System_String__get_Chars(pSVar13,index,(MethodInfo *)0x0);
            pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
                     (CONCAT62(extraout_var,uVar5) & 0xffffffff);
            uVar5 = System_String__get_Chars((System_String_o *)SVar10,index,(MethodInfo *)0x0);
            if ((uint16_t)pGVar8 != uVar5) {
              iVar11 = (pSVar13->fields)._stringLength;
              goto label_04510b4d;
            }
            iVar7 = index + 1;
            iVar11 = (pSVar13->fields)._stringLength;
          } while ((iVar7 < iVar11) &&
                  (iVar7 < ((System_String_Fields *)((long)SVar10 + 0x10))->_stringLength));
          index = index + 1;
        }
label_04510b4d:
        iVar7 = 0;
        if (0 < iVar11 - index) {
          iVar17 = -1;
          do {
            if (((System_String_Fields *)((long)SVar10 + 0x10))->_stringLength - index <= iVar7) break;
            uVar5 = System_String__get_Chars(pSVar13,iVar11 + iVar17,(MethodInfo *)0x0);
            pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
                     (CONCAT62(extraout_var_00,uVar5) & 0xffffffff);
            uVar5 = System_String__get_Chars
                              ((System_String_o *)SVar10,
                               ((System_String_Fields *)((long)SVar10 + 0x10))->_stringLength + iVar17,
                               (MethodInfo *)0x0);
            if ((uint16_t)pGVar8 != uVar5) break;
            iVar7 = iVar7 + 1;
            iVar11 = (pSVar13->fields)._stringLength;
            iVar17 = iVar17 + -1;
          } while (iVar7 < iVar11 - index);
        }
        iVar7 = ((System_String_Fields *)((long)SVar10 + 0x10))->_stringLength - iVar7;
        if (index < iVar7) {
          do {
            pSVar16 = pSVar14[1].klass;
            value._stringLength = 0;
            value._firstChar = 0;
            value._6_2_ = 0;
            if (pSVar16 == (System_String_c *)0x0) goto label_04510c09;
            pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
                     CONCAT71((int7)((ulong)pGVar8 >> 8),1);
            if (*(int *)&(pSVar16->_1).namespaze <= index) {
              return pGVar8;
            }
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar16,index,
                       *(Il2CppObject **)(lVar15 + 0x98),MethodInfo_Void_set_Item);
            index = index + 1;
          } while (iVar7 != index);
        }
        else {
          pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
        }
      }
      return pGVar8;
    }
  }
  else {
    SVar10 = pSVar14->fields;
    if (SVar10 != (System_String_Fields)0x0) goto label_04510ad6;
label_04510ab5:
    SVar10 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    if (SVar10 != (System_String_Fields)0x0) goto label_04510ad6;
  }
label_04510c09:
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
             il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed84 = '\x01';
  }
  if (value == (System_String_Fields)0x0) {
    return pGVar8;
  }
  SVar10 = *(System_String_Fields *)((long)value + 0x10);
  if ((SVar10 != (System_String_Fields)0x0) ||
     (SVar10 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8), SVar10 != (System_String_Fields)0x0)) {
    pSVar1 = (System_String_Fields *)((long)value + 0x10);
    if (0x1f < *(int *)((long)SVar10 + 0x10)) {
      SVar10 = (System_String_Fields)
               System_String__Substring_3af8da0((System_String_o *)SVar10,0,0x1f,(MethodInfo *)0x0);
    }
    *(System_String_Fields *)((long)value + 0x10) = SVar10;
    il2cpp_runtime_helper_022b4080(pSVar1);
    pSVar16 = ((System_String_o *)((long)value + 0x18))->klass;
    while ((pSVar16 != (System_String_c *)0x0 && (SVar10 = *pSVar1, SVar10 != (System_String_Fields)0x0))) {
      uVar12 = *(uint *)&(pSVar16->_1).namespaze;
      if ((int)uVar12 <= *(int *)((long)SVar10 + 0x10)) goto label_04510d10;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar16,uVar12 - 1,MethodInfo_Void_RemoveAt);
      pSVar16 = ((System_String_o *)((long)value + 0x18))->klass;
    }
  }
label_04510d8b:
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)il2cpp_runtime_helper_022b2c90();
  return pGVar8;
  while( true ) {
    if (uVar12 < *(uint *)(pcVar3 + 0x18)) {
      *(uint *)&(pSVar16->_1).namespaze = uVar12 + 1;
      *(Il2CppObject **)(pcVar3 + (long)(int)uVar12 * 8 + 0x20) = item;
      il2cpp_runtime_helper_022b4080(pcVar3 + (long)(int)uVar12 * 8 + 0x20,item);
      pSVar16 = ((System_String_o *)((long)value + 0x18))->klass;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar16,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      pSVar16 = ((System_String_o *)((long)value + 0x18))->klass;
    }
    if (pSVar16 == (System_String_c *)0x0) break;
    uVar12 = *(uint *)&(pSVar16->_1).namespaze;
    SVar10 = *pSVar1;
    if (SVar10 == (System_String_Fields)0x0) break;
label_04510d10:
    item = "FFFFFF";
    lVar15 = MethodInfo_Void_Add;
    if (*(int *)((long)SVar10 + 0x10) <= (int)uVar12) {
      return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)SVar10;
    }
    puVar4 = (undefined1 *)((long)&(pSVar16->_1).namespaze + 4);
    *(int *)puVar4 = *(int *)puVar4 + 1;
    pcVar3 = (pSVar16->_1).name;
    if (pcVar3 == (char *)0x0) break;
  }
  goto label_04510d8b;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPendingImportColor
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x45109f0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPendingImportColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,MethodInfo *method)

{
  System_String_Fields *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  char *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  Il2CppObject *item;
  uint16_t uVar5;
  bool_conflict bVar6;
  int iVar7;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  System_String_Fields SVar8;
  int index;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  System_String_o *value;
  System_String_c *__this_01;
  System_String_o *__this_02;
  System_String_o *__this_03;
  int iVar12;
  
  if (g_data_057aed82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed82 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(__this->fields)._colorsEnabled,(MethodInfo *)0x0);
  if (document == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return 0;
  }
  if ((char)bVar6 != '\0') {
    return 0;
  }
  value = (document->fields).Text;
  bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  __this_02 = (__this->fields)._lastText;
  if (__this_02 == (System_String_o *)0x0) {
    __this_02 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    __this_03 = (document->fields).Text;
    if (__this_03 == (System_String_o *)0x0) goto label_04510ab5;
label_04510ad6:
    if (__this_02 != (System_String_o *)0x0) {
      iVar7 = (__this_03->fields)._stringLength;
      iVar10 = (__this_02->fields)._stringLength;
      index = 0;
      uVar9 = 0;
      bVar6 = 0;
      if (iVar10 < iVar7) {
        if ((0 < iVar10) && (0 < iVar7)) {
          iVar7 = 0;
          do {
            index = iVar7;
            uVar5 = System_String__get_Chars(__this_02,index,(MethodInfo *)0x0);
            uVar9 = CONCAT62(extraout_var,uVar5) & 0xffffffff;
            uVar5 = System_String__get_Chars(__this_03,index,(MethodInfo *)0x0);
            if ((uint16_t)uVar9 != uVar5) {
              iVar10 = (__this_02->fields)._stringLength;
              goto label_04510b4d;
            }
            iVar7 = index + 1;
            iVar10 = (__this_02->fields)._stringLength;
          } while ((iVar7 < iVar10) && (iVar7 < (__this_03->fields)._stringLength));
          index = index + 1;
        }
label_04510b4d:
        iVar7 = 0;
        if (0 < iVar10 - index) {
          iVar12 = -1;
          do {
            if ((__this_03->fields)._stringLength - index <= iVar7) break;
            uVar5 = System_String__get_Chars(__this_02,iVar10 + iVar12,(MethodInfo *)0x0);
            uVar9 = CONCAT62(extraout_var_00,uVar5) & 0xffffffff;
            uVar5 = System_String__get_Chars
                              (__this_03,(__this_03->fields)._stringLength + iVar12,(MethodInfo *)0x0);
            if ((uint16_t)uVar9 != uVar5) break;
            iVar7 = iVar7 + 1;
            iVar10 = (__this_02->fields)._stringLength;
            iVar12 = iVar12 + -1;
          } while (iVar7 < iVar10 - index);
        }
        iVar7 = (__this_03->fields)._stringLength - iVar7;
        if (index < iVar7) {
          do {
            __this_00 = (document->fields).Colors;
            value = (System_String_o *)0x0;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_04510c09;
            uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
            bVar6 = (bool_conflict)uVar9;
            if ((__this_00->fields)._size <= index) {
              return bVar6;
            }
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)__this_00,index,
                       *(Il2CppObject **)&(__this->fields)._colorsEnabled,MethodInfo_Void_set_Item);
            index = index + 1;
          } while (iVar7 != index);
        }
        else {
          bVar6 = 0;
        }
      }
      return bVar6;
    }
  }
  else {
    __this_03 = (document->fields).Text;
    if (__this_03 != (System_String_o *)0x0) goto label_04510ad6;
label_04510ab5:
    __this_03 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (__this_03 != (System_String_o *)0x0) goto label_04510ad6;
  }
label_04510c09:
  SVar8 = (System_String_Fields)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    SVar8 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed84 = '\x01';
  }
  if (value == (System_String_o *)0x0) goto label_04510d90;
  SVar8 = value->fields;
  if ((SVar8 != (System_String_Fields)0x0) ||
     (SVar8 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8), SVar8 != (System_String_Fields)0x0)) {
    pSVar1 = &value->fields;
    if (0x1f < *(int *)((long)SVar8 + 0x10)) {
      SVar8 = (System_String_Fields)
              System_String__Substring_3af8da0((System_String_o *)SVar8,0,0x1f,(MethodInfo *)0x0);
    }
    value->fields = SVar8;
    il2cpp_runtime_helper_022b4080(pSVar1);
    __this_01 = value[1].klass;
    while ((__this_01 != (System_String_c *)0x0 && (SVar8 = *pSVar1, SVar8 != (System_String_Fields)0x0))) {
      uVar11 = *(uint *)&(__this_01->_1).namespaze;
      if ((int)uVar11 <= *(int *)((long)SVar8 + 0x10)) goto label_04510d10;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,uVar11 - 1,MethodInfo_Void_RemoveAt);
      __this_01 = value[1].klass;
    }
  }
  goto label_04510d8b;
  while( true ) {
    if (uVar11 < *(uint *)(pcVar2 + 0x18)) {
      *(uint *)&(__this_01->_1).namespaze = uVar11 + 1;
      *(Il2CppObject **)(pcVar2 + (long)(int)uVar11 * 8 + 0x20) = item;
      il2cpp_runtime_helper_022b4080(pcVar2 + (long)(int)uVar11 * 8 + 0x20,item);
      __this_01 = value[1].klass;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      __this_01 = value[1].klass;
    }
    if (__this_01 == (System_String_c *)0x0) break;
    uVar11 = *(uint *)&(__this_01->_1).namespaze;
    SVar8 = *pSVar1;
    if (SVar8 == (System_String_Fields)0x0) break;
label_04510d10:
    item = "FFFFFF";
    lVar4 = MethodInfo_Void_Add;
    if (*(int *)((long)SVar8 + 0x10) <= (int)uVar11) goto label_04510d90;
    puVar3 = (undefined1 *)((long)&(__this_01->_1).namespaze + 4);
    *(int *)puVar3 = *(int *)puVar3 + 1;
    pcVar2 = (__this_01->_1).name;
    if (pcVar2 == (char *)0x0) break;
  }
label_04510d8b:
  SVar8 = (System_String_Fields)il2cpp_runtime_helper_022b2c90();
label_04510d90:
  return SVar8._stringLength;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4510940

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *value,
               MethodInfo *method)

{
  System_String_Fields *pSVar1;
  TMPro_TMP_InputField_o *pTVar2;
  char *pcVar3;
  undefined1 *puVar4;
  Il2CppObject *item;
  uint16_t uVar5;
  uint16_t uVar6;
  bool_conflict bVar7;
  int iVar8;
  System_String_Fields SVar9;
  int index;
  int iVar10;
  uint uVar11;
  System_String_o *pSVar12;
  long lVar13;
  System_String_Fields value_00;
  System_String_c *pSVar14;
  System_String_o *__this_00;
  int iVar15;
  
  if (g_data_057aed83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed83 = '\x01';
  }
  pTVar2 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = (System_String_o *)0x0;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pTVar2 = (__this->fields)._input;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify(pTVar2,value,(MethodInfo *)0x0);
    pTVar2 = (__this->fields)._input;
    pSVar12 = value;
    if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
      return;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed82 = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar13 + 0x98),(MethodInfo *)0x0);
  if (pSVar12 == (System_String_o *)0x0) {
    return;
  }
  if ((char)bVar7 != '\0') {
    return;
  }
  value_00 = pSVar12->fields;
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  __this_00 = *(System_String_o **)(lVar13 + 0x50);
  if (__this_00 == (System_String_o *)0x0) {
    __this_00 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    SVar9 = pSVar12->fields;
    if (SVar9 == (System_String_Fields)0x0) goto label_04510ab5;
label_04510ad6:
    if (__this_00 != (System_String_o *)0x0) {
      iVar8 = ((System_String_Fields *)((long)SVar9 + 0x10))->_stringLength;
      iVar10 = (__this_00->fields)._stringLength;
      index = 0;
      if (iVar10 < iVar8) {
        if ((0 < iVar10) && (0 < iVar8)) {
          iVar8 = 0;
          do {
            index = iVar8;
            uVar5 = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
            uVar6 = System_String__get_Chars((System_String_o *)SVar9,index,(MethodInfo *)0x0);
            if (uVar5 != uVar6) {
              iVar10 = (__this_00->fields)._stringLength;
              goto label_04510b4d;
            }
            iVar8 = index + 1;
            iVar10 = (__this_00->fields)._stringLength;
          } while ((iVar8 < iVar10) && (iVar8 < ((System_String_Fields *)((long)SVar9 + 0x10))->_stringLength)
                  );
          index = index + 1;
        }
label_04510b4d:
        iVar8 = 0;
        if (0 < iVar10 - index) {
          iVar15 = -1;
          do {
            if (((System_String_Fields *)((long)SVar9 + 0x10))->_stringLength - index <= iVar8) break;
            uVar5 = System_String__get_Chars(__this_00,iVar10 + iVar15,(MethodInfo *)0x0);
            uVar6 = System_String__get_Chars
                              ((System_String_o *)SVar9,
                               ((System_String_Fields *)((long)SVar9 + 0x10))->_stringLength + iVar15,
                               (MethodInfo *)0x0);
            if (uVar5 != uVar6) break;
            iVar8 = iVar8 + 1;
            iVar10 = (__this_00->fields)._stringLength;
            iVar15 = iVar15 + -1;
          } while (iVar8 < iVar10 - index);
        }
        iVar8 = ((System_String_Fields *)((long)SVar9 + 0x10))->_stringLength - iVar8;
        if (index < iVar8) {
          do {
            pSVar14 = pSVar12[1].klass;
            value_00._stringLength = 0;
            value_00._firstChar = 0;
            value_00._6_2_ = 0;
            if (pSVar14 == (System_String_c *)0x0) goto label_04510c09;
            if (*(int *)&(pSVar14->_1).namespaze <= index) {
              return;
            }
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar14,index,
                       *(Il2CppObject **)(lVar13 + 0x98),MethodInfo_Void_set_Item);
            index = index + 1;
          } while (iVar8 != index);
        }
      }
      return;
    }
  }
  else {
    SVar9 = pSVar12->fields;
    if (SVar9 != (System_String_Fields)0x0) goto label_04510ad6;
label_04510ab5:
    SVar9 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    if (SVar9 != (System_String_Fields)0x0) goto label_04510ad6;
  }
label_04510c09:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed84 = '\x01';
  }
  if (value_00 == (System_String_Fields)0x0) {
    return;
  }
  SVar9 = *(System_String_Fields *)((long)value_00 + 0x10);
  if ((SVar9 != (System_String_Fields)0x0) ||
     (SVar9 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8), SVar9 != (System_String_Fields)0x0)) {
    pSVar1 = (System_String_Fields *)((long)value_00 + 0x10);
    if (0x1f < *(int *)((long)SVar9 + 0x10)) {
      SVar9 = (System_String_Fields)
              System_String__Substring_3af8da0((System_String_o *)SVar9,0,0x1f,(MethodInfo *)0x0);
    }
    *(System_String_Fields *)((long)value_00 + 0x10) = SVar9;
    il2cpp_runtime_helper_022b4080(pSVar1);
    pSVar14 = ((System_String_o *)((long)value_00 + 0x18))->klass;
    while ((pSVar14 != (System_String_c *)0x0 && (SVar9 = *pSVar1, SVar9 != (System_String_Fields)0x0))) {
      uVar11 = *(uint *)&(pSVar14->_1).namespaze;
      if ((int)uVar11 <= *(int *)((long)SVar9 + 0x10)) goto label_04510d10;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar14,uVar11 - 1,MethodInfo_Void_RemoveAt);
      pSVar14 = ((System_String_o *)((long)value_00 + 0x18))->klass;
    }
  }
label_04510d8b:
  il2cpp_runtime_helper_022b2c90();
  return;
  while( true ) {
    if (uVar11 < *(uint *)(pcVar3 + 0x18)) {
      *(uint *)&(pSVar14->_1).namespaze = uVar11 + 1;
      *(Il2CppObject **)(pcVar3 + (long)(int)uVar11 * 8 + 0x20) = item;
      il2cpp_runtime_helper_022b4080(pcVar3 + (long)(int)uVar11 * 8 + 0x20,item);
      pSVar14 = ((System_String_o *)((long)value_00 + 0x18))->klass;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar14,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      pSVar14 = ((System_String_o *)((long)value_00 + 0x18))->klass;
    }
    if (pSVar14 == (System_String_c *)0x0) break;
    uVar11 = *(uint *)&(pSVar14->_1).namespaze;
    SVar9 = *pSVar1;
    if (SVar9 == (System_String_Fields)0x0) break;
label_04510d10:
    item = "FFFFFF";
    lVar13 = MethodInfo_Void_Add;
    if (*(int *)((long)SVar9 + 0x10) <= (int)uVar11) {
      return;
    }
    puVar4 = (undefined1 *)((long)&(pSVar14->_1).namespaze + 4);
    *(int *)puVar4 = *(int *)puVar4 + 1;
    pcVar3 = (pSVar14->_1).name;
    if (pcVar3 == (char *)0x0) break;
  }
  goto label_04510d8b;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim (System_String_o* value, const MethodInfo* method);
// 0x45108f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim(System_String_o *value,MethodInfo *method)

{
  System_String_Fields *pSVar1;
  System_Collections_Generic_List_object__o *__this;
  char *pcVar2;
  undefined1 *puVar3;
  Il2CppObject *item;
  uint16_t uVar4;
  bool_conflict bVar5;
  int iVar6;
  System_String_o *pSVar7;
  undefined4 extraout_var_01;
  System_String_o *extraout_RAX;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  System_String_o *pSVar8;
  System_String_Fields SVar9;
  int index;
  System_String_o *pSVar10;
  int iVar11;
  uint uVar12;
  MethodInfo *pMVar13;
  long lVar14;
  System_String_c *pSVar15;
  System_String_o *__this_00;
  int iVar16;
  
  if ((value != (System_String_o *)0x0) ||
     (value = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), value != (System_String_o *)0x0)) {
    if ((value->fields)._stringLength < 0x20) {
      return value;
    }
    pSVar7 = System_String__Substring_3af8da0(value,0,0x1f,(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed83 = '\x01';
  }
  pSVar15 = value[4].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var_01,bVar5);
  }
  if (method == (MethodInfo *)0x0) {
    method = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if ((TMPro_TMP_InputField_o *)value[4].klass != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify
              ((TMPro_TMP_InputField_o *)value[4].klass,(System_String_o *)method,(MethodInfo *)0x0);
    pMVar13 = method;
    if ((TMPro_TMP_InputField_o *)value[4].klass != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__ForceLabelUpdate((TMPro_TMP_InputField_o *)value[4].klass,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057aed82 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar14 + 0x98),(MethodInfo *)0x0);
  if (pMVar13 == (MethodInfo *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((char)bVar5 != '\0') {
    return (System_String_o *)0x0;
  }
  pSVar7 = (System_String_o *)pMVar13->invoker_method;
  bVar5 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (System_String_o *)0x0;
  }
  pSVar8 = *(System_String_o **)(lVar14 + 0x50);
  if (pSVar8 == (System_String_o *)0x0) {
    pSVar8 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    __this_00 = (System_String_o *)pMVar13->invoker_method;
    if (__this_00 == (System_String_o *)0x0) goto label_04510ab5;
label_04510ad6:
    if (pSVar8 != (System_String_o *)0x0) {
      iVar6 = (__this_00->fields)._stringLength;
      iVar11 = (pSVar8->fields)._stringLength;
      index = 0;
      pSVar10 = (System_String_o *)0x0;
      if (iVar11 < iVar6) {
        if ((0 < iVar11) && (0 < iVar6)) {
          iVar6 = 0;
          do {
            index = iVar6;
            uVar4 = System_String__get_Chars(pSVar8,index,(MethodInfo *)0x0);
            pSVar10 = (System_String_o *)(CONCAT62(extraout_var,uVar4) & 0xffffffff);
            uVar4 = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
            if ((uint16_t)pSVar10 != uVar4) {
              iVar11 = (pSVar8->fields)._stringLength;
              goto label_04510b4d;
            }
            iVar6 = index + 1;
            iVar11 = (pSVar8->fields)._stringLength;
          } while ((iVar6 < iVar11) && (iVar6 < (__this_00->fields)._stringLength));
          index = index + 1;
        }
label_04510b4d:
        iVar6 = 0;
        if (0 < iVar11 - index) {
          iVar16 = -1;
          do {
            if ((__this_00->fields)._stringLength - index <= iVar6) break;
            uVar4 = System_String__get_Chars(pSVar8,iVar11 + iVar16,(MethodInfo *)0x0);
            pSVar10 = (System_String_o *)(CONCAT62(extraout_var_00,uVar4) & 0xffffffff);
            uVar4 = System_String__get_Chars
                              (__this_00,(__this_00->fields)._stringLength + iVar16,(MethodInfo *)0x0);
            if ((uint16_t)pSVar10 != uVar4) break;
            iVar6 = iVar6 + 1;
            iVar11 = (pSVar8->fields)._stringLength;
            iVar16 = iVar16 + -1;
          } while (iVar6 < iVar11 - index);
        }
        iVar6 = (__this_00->fields)._stringLength - iVar6;
        if (index < iVar6) {
          do {
            __this = (System_Collections_Generic_List_object__o *)pMVar13->name;
            pSVar7 = (System_String_o *)0x0;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_04510c09;
            pSVar10 = (System_String_o *)CONCAT71((int7)((ulong)pSVar10 >> 8),1);
            if ((__this->fields)._size <= index) {
              return pSVar10;
            }
            System_Collections_Generic_List_object___set_Item
                      (__this,index,*(Il2CppObject **)(lVar14 + 0x98),MethodInfo_Void_set_Item);
            index = index + 1;
          } while (iVar6 != index);
        }
        else {
          pSVar10 = (System_String_o *)0x0;
        }
      }
      return pSVar10;
    }
  }
  else {
    __this_00 = (System_String_o *)pMVar13->invoker_method;
    if (__this_00 != (System_String_o *)0x0) goto label_04510ad6;
label_04510ab5:
    __this_00 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (__this_00 != (System_String_o *)0x0) goto label_04510ad6;
  }
label_04510c09:
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed84 = '\x01';
  }
  if (pSVar7 == (System_String_o *)0x0) {
    return pSVar8;
  }
  SVar9 = pSVar7->fields;
  if ((SVar9 != (System_String_Fields)0x0) ||
     (SVar9 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8), SVar9 != (System_String_Fields)0x0)) {
    pSVar1 = &pSVar7->fields;
    if (0x1f < *(int *)((long)SVar9 + 0x10)) {
      SVar9 = (System_String_Fields)
              System_String__Substring_3af8da0((System_String_o *)SVar9,0,0x1f,(MethodInfo *)0x0);
    }
    pSVar7->fields = SVar9;
    il2cpp_runtime_helper_022b4080(pSVar1);
    pSVar15 = pSVar7[1].klass;
    while ((pSVar15 != (System_String_c *)0x0 && (SVar9 = *pSVar1, SVar9 != (System_String_Fields)0x0))) {
      uVar12 = *(uint *)&(pSVar15->_1).namespaze;
      if ((int)uVar12 <= *(int *)((long)SVar9 + 0x10)) goto label_04510d10;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar15,uVar12 - 1,MethodInfo_Void_RemoveAt);
      pSVar15 = pSVar7[1].klass;
    }
  }
label_04510d8b:
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar7;
  while( true ) {
    if (uVar12 < *(uint *)(pcVar2 + 0x18)) {
      *(uint *)&(pSVar15->_1).namespaze = uVar12 + 1;
      *(Il2CppObject **)(pcVar2 + (long)(int)uVar12 * 8 + 0x20) = item;
      il2cpp_runtime_helper_022b4080(pcVar2 + (long)(int)uVar12 * 8 + 0x20,item);
      pSVar15 = pSVar7[1].klass;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar15,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      pSVar15 = pSVar7[1].klass;
    }
    if (pSVar15 == (System_String_c *)0x0) break;
    uVar12 = *(uint *)&(pSVar15->_1).namespaze;
    SVar9 = *pSVar1;
    if (SVar9 == (System_String_Fields)0x0) break;
label_04510d10:
    item = "FFFFFF";
    lVar14 = MethodInfo_Void_Add;
    if (*(int *)((long)SVar9 + 0x10) <= (int)uVar12) {
      return (System_String_o *)SVar9;
    }
    puVar3 = (undefined1 *)((long)&(pSVar15->_1).namespaze + 4);
    *(int *)puVar3 = *(int *)puVar3 + 1;
    pcVar2 = (pSVar15->_1).name;
    if (pcVar2 == (char *)0x0) break;
  }
  goto label_04510d8b;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* document, const MethodInfo* method);
// 0x4510c10

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_4410c10
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar1;
  int32_t *piVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *item;
  System_String_o *pSVar5;
  uint uVar6;
  System_Collections_Generic_List_string__o *__this;
  
  if (g_data_057aed84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed84 = '\x01';
  }
  if (document == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return;
  }
  pSVar5 = (document->fields).Text;
  if ((pSVar5 != (System_String_o *)0x0) ||
     (pSVar5 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar5 != (System_String_o *)0x0)) {
    pGVar1 = &document->fields;
    if (0x1f < (pSVar5->fields)._stringLength) {
      pSVar5 = System_String__Substring_3af8da0(pSVar5,0,0x1f,(MethodInfo *)0x0);
    }
    (document->fields).Text = pSVar5;
    il2cpp_runtime_helper_022b4080(pGVar1);
    __this = (document->fields).Colors;
    while ((__this != (System_Collections_Generic_List_string__o *)0x0 &&
           (pSVar5 = pGVar1->Text, pSVar5 != (System_String_o *)0x0))) {
      uVar6 = (__this->fields)._size;
      if ((int)uVar6 <= (pSVar5->fields)._stringLength) goto label_04510d10;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,uVar6 - 1,MethodInfo_Void_RemoveAt);
      __this = (document->fields).Colors;
    }
  }
  goto label_04510d8b;
  while( true ) {
    if (uVar6 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar6 + 1;
      pSVar3->m_Items[(int)uVar6] = item;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar6,item);
      __this = (document->fields).Colors;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      __this = (document->fields).Colors;
    }
    if (__this == (System_Collections_Generic_List_string__o *)0x0) break;
    uVar6 = (__this->fields)._size;
    pSVar5 = pGVar1->Text;
    if (pSVar5 == (System_String_o *)0x0) break;
label_04510d10:
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
label_04510d8b:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* __, int32_t start, int32_t end, const MethodInfo* method);
// 0x4510da0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__OnTextSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *__,
               int32_t start,int32_t end,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_UI_Selectable_o *pUVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  bool_conflict bVar11;
  float fVar12;
  long lVar13;
  undefined8 uVar14;
  Il2CppObject *pIVar15;
  System_Object_array *call;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 in_RAX;
  float fVar16;
  undefined4 in_register_0000000c;
  MethodInfo *method_00;
  float fVar17;
  ulong uVar18;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x;
  System_Object_array *unaff_RBX;
  undefined1 *puVar19;
  int index;
  ulong uVar20;
  long *plVar21;
  TMPro_TMP_InputField_o *unaff_RBP;
  System_Object_array *method_01;
  MethodInfo *pMVar22;
  System_String_o *pSVar23;
  TMPro_TMP_InputField_o *pTVar24;
  TMPro_TMP_InputField_o *pTVar25;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar26;
  System_Object_array *unaff_R14;
  uint uVar27;
  System_Object_array *unaff_R15;
  undefined1 auVar28 [16];
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000000c,end);
  pMVar22 = (MethodInfo *)(ulong)(uint)start;
  uVar18 = (ulong)(uint)end;
  puVar19 = (undefined1 *)register0x00000020;
  do {
    *(TMPro_TMP_InputField_o **)(puVar19 + -8) = unaff_RBP;
    *(System_Object_array **)(puVar19 + -0x10) = unaff_R15;
    *(System_Object_array **)(puVar19 + -0x18) = unaff_R14;
    *(System_Object_array **)(puVar19 + -0x20) = unaff_RBX;
    *(undefined8 *)(puVar19 + -0x28) = in_RAX;
    fVar26 = (float)uVar18;
    fVar12 = SUB84(pMVar22,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)(puVar19 + -0x30) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pTVar24 = *(TMPro_TMP_InputField_o **)
               &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x30) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar23 = (System_String_o *)0x0;
    *(undefined8 *)(puVar19 + -0x30) = 0x4510373;
    pTVar25 = pTVar24;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    pTVar5 = *(TMPro_TMP_InputField_o **)
              &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
      lVar13 = *(long *)&(pTVar5->fields).m_SelectionColor.fields.a;
      method_00 = (MethodInfo *)0x0;
      if (lVar13 != 0) {
        fVar16 = *(float *)(lVar13 + 0x10);
        fVar17 = fVar12;
        if ((int)fVar16 <= (int)fVar12) {
          fVar17 = fVar16;
        }
        if ((int)fVar12 < 0) {
          fVar17 = 0.0;
        }
        if ((int)fVar26 < (int)fVar16) {
          fVar16 = fVar26;
        }
        if ((int)fVar26 < 0) {
          fVar16 = 0.0;
        }
        if (fVar17 == fVar16) {
          if (*(char *)&(pTVar5->fields).m_Mesh == '\0') {
            return;
          }
          *(undefined8 *)&(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_PressedColor.fields.a
               = 0xffffffffffffffff;
          return;
        }
        fVar12 = fVar16;
        if ((int)fVar17 <= (int)fVar16) {
          fVar12 = fVar17;
        }
        (((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_PressedColor.fields.a = fVar12;
        if ((int)fVar16 <= (int)fVar17) {
          fVar16 = fVar17;
        }
        (((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar16;
        return;
      }
    }
    *(undefined8 *)(puVar19 + -0x30) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)(puVar19 + -0x30) = pTVar24;
    pUVar6 = (pTVar25->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)(puVar19 + -0x38) = 0x4510405;
    bVar11 = System_String__op_Equality(pSVar23,(System_String_o *)pUVar6,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    pUVar6 = (pTVar25->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)(puVar19 + -0x38) = 0x4510414;
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)pUVar6,(MethodInfo *)0x0);
    uVar14 = CONCAT44(extraout_var,bVar11);
    if ((char)bVar11 == '\0') {
      pGVar4 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)
                &(pTVar25->fields).m_Colors.fields.m_NormalColor.fields.g;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar1 = *(undefined1 *)((long)&(pTVar25->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
        pUVar6 = (pTVar25->fields).m_Navigation.fields.m_SelectOnLeft;
        method_00 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar19 + -0x38) = 0x451043e;
        bVar11 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           (pGVar4,(System_String_o *)pUVar6,(uint)bVar1,(MethodInfo *)0x0);
        uVar14 = CONCAT44(extraout_var_00,bVar11);
        cVar8 = (char)bVar11;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar8 = *(undefined1 *)((long)&(pTVar25->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
joined_r0x04510440:
      if (cVar8 != '\0') {
        return;
      }
    }
    uVar7 = *(undefined8 *)(puVar19 + -0x30);
    *(ulong *)(puVar19 + -0x30) = (ulong)pMVar22 & 0xffffffff;
    *(undefined8 *)(puVar19 + -0x38) = uVar7;
    *(undefined8 *)(puVar19 + -0x40) = uVar14;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)(puVar19 + -0x48) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)(puVar19 + -0x48) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(pTVar25->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x48) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar19 + -0x48) = 0x450fb46;
    bVar11 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    fVar12 = (pTVar25->fields).m_Colors.fields.m_SelectedColor.fields.r;
    uVar20 = (ulong)(uint)fVar12;
    pTVar24 = *(TMPro_TMP_InputField_o **)&(pTVar25->fields).m_Colors.fields.m_NormalColor.fields.a;
    if ((int)fVar12 < 0) {
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)(puVar19 + -0x48) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition(pTVar24,(MethodInfo *)0x0);
        pTVar24 = *(TMPro_TMP_InputField_o **)&(pTVar25->fields).m_Colors.fields.m_NormalColor.fields.a;
        if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
          uVar20 = (ulong)uVar9;
          lVar13 = *(long *)&(pTVar24->fields).m_SelectionColor.fields.a;
          if (lVar13 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            uVar20 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar24 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar13 = *(long *)&(pTVar24->fields).m_SelectionColor.fields.a, lVar13 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar13 + 0x10) < (int)uVar20) {
        uVar20 = (ulong)*(uint *)(lVar13 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)(puVar19 + -0x48) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar24,(int32_t)uVar20,(MethodInfo *)0x0);
      pTVar24 = *(TMPro_TMP_InputField_o **)&(pTVar25->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)(puVar19 + -0x48) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar24,(int32_t)uVar20,(MethodInfo *)0x0);
        (pTVar25->fields).m_Colors.fields.m_PressedColor.fields.a = -NAN;
        (pTVar25->fields).m_Colors.fields.m_SelectedColor.fields.r = -NAN;
        (pTVar25->fields).m_Colors.fields.m_SelectedColor.fields.g = -NAN;
        (pTVar25->fields).m_Colors.fields.m_SelectedColor.fields.b = -NAN;
        lVar13 = *(long *)&(pTVar25->fields).m_Navigation.fields;
        if (lVar13 != 0) {
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          length = *(int32_t *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar13 + 0x10);
            *(undefined8 *)(puVar19 + -0x48) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(pTVar25->fields).m_Colors.fields.m_SelectedColor.fields.a + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)(puVar19 + -0x48) = 0x450fc0f;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar19 + -0x48) = uVar18 & 0xffffffff;
    *(TMPro_TMP_InputField_o **)(puVar19 + -0x50) = pTVar25;
    *(undefined8 *)(puVar19 + -0x58) = uVar14;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)(puVar19 + -0x60) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x = *(System_Collections_Generic_List_object__o **)
         &(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x60) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar19 + -0x60) = 0x450fc5b;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    pTVar25 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar25 != (TMPro_TMP_InputField_o *)0x0) {
      fVar12 = (pTVar24->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)(puVar19 + -0x60) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar25,(int32_t)fVar12,(MethodInfo *)0x0);
      pTVar25 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar25 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar25,(int32_t)(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    unaff_R14 = (System_Object_array *)0x0;
    *(undefined8 *)(puVar19 + -0x60) = 0x450fca1;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar19 + -0x60) = uVar20;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar19 + -0x68) = __this;
    *(TMPro_TMP_InputField_o **)(puVar19 + -0x70) = pTVar24;
    *(MethodInfo ***)(puVar19 + -0x78) = unaff_R13;
    *(MethodInfo_2A669C0 ***)(puVar19 + -0x80) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)(puVar19 + -0x88) = x;
    *(undefined8 *)(puVar19 + -0x90) = uVar14;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)(puVar19 + -0x98) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar19 + -0x98) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)(puVar19 + -0x98) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)unaff_R14->m_Items + 0x71) == '\0') {
      return;
    }
    unaff_R15 = (System_Object_array *)unaff_R14->m_Items[1];
    if (unaff_R15 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
      x = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar9 = *(uint *)(unaff_R14->m_Items + 0xc);
        uVar20 = (ulong)uVar9;
        uVar10 = (__this_01->fields)._size;
        uVar27 = (int)unaff_R15->max_length + uVar9;
        if ((int)uVar10 < (int)uVar27) {
          uVar27 = uVar10;
        }
        __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(ulong)uVar27;
        if ((int)uVar9 < (int)uVar27) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar20;
            iVar2 = *(int *)(unaff_R14->m_Items + 0xc);
            *(undefined8 *)(puVar19 + -0x98) = 0x450fd62;
            pIVar15 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)unaff_R15,index - iVar2,
                                 MethodInfo_String_get_Item);
            x = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)(puVar19 + -0x98) = 0x450fd7c;
            method_00 = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar15,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar20 = (ulong)(index + 1U);
            if ((int)uVar27 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
            unaff_R15 = (System_Object_array *)unaff_R14->m_Items[1];
            x = __this_01;
          } while (unaff_R15 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)(puVar19 + -0x98) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar19 + -0x98) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar19 + -0x98) = 0x450fdda;
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return;
          }
          pIVar15 = unaff_R14->m_Items[9];
          unaff_R15 = (System_Object_array *)0x0;
          if (pIVar15 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar15->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar15,0,0,pIVar15->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)(puVar19 + -0x98) = 0x450fe21;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar19 + -0x98) = uVar20;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar19 + -0xa0) = __this;
    *(System_Object_array **)(puVar19 + -0xa8) = unaff_R14;
    *(MethodInfo ***)(puVar19 + -0xb0) = unaff_R13;
    *(MethodInfo_2A669C0 ***)(puVar19 + -0xb8) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)(puVar19 + -0xc0) = x;
    *(undefined8 *)(puVar19 + -200) = uVar14;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)unaff_R15->m_Items[8];
    plVar21 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0xd0) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (System_Object_array *)0x0;
    *(undefined8 *)(puVar19 + -0xd0) = 0x450feff;
    unaff_RBX = call;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
label_04510010:
      plVar21 = &TypeInfo_Object;
      pUVar3 = (UnityEngine_Object_o *)unaff_R15->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar19 + -0xd0) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R14 = (System_Object_array *)0x0;
      *(undefined8 *)(puVar19 + -0xd0) = 0x4510032;
      bVar11 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
label_0451007e:
        *(undefined8 *)(puVar19 + -0xd0) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R15,
                   (MethodInfo *)unaff_R14);
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_R15->m_Items[7];
        if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)(puVar19 + -0xd0) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)(puVar19 + -0xd0) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar15 = unaff_R15->m_Items[9];
      *(undefined8 *)(puVar19 + -0xd0) = 0x4510049;
      unaff_R14 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      method_00 = (MethodInfo *)0x0;
      *(undefined8 *)(puVar19 + -0xd0) = 0x4510063;
      method_01 = unaff_R15;
      unaff_RBX = unaff_R14;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar15 != (Il2CppObject *)0x0) {
        pMVar22 = pIVar15->klass->vtable[0x4f].method;
        vtableDispatch = pIVar15->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)(puVar19 + -0xd0) = 0x451007e;
        (*vtableDispatch)(pIVar15,unaff_R14,pMVar22);
        goto label_0451007e;
      }
    }
    else if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
      unaff_R14 = (System_Object_array *)unaff_R15->m_Items[8][0x1e].klass;
      *(undefined8 *)(puVar19 + -0xd0) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      method_00 = (MethodInfo *)0x0;
      *(undefined8 *)(puVar19 + -0xd0) = 0x450ff44;
      method_01 = unaff_R15;
      unaff_RBX = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (unaff_R14 != (System_Object_array *)0x0) {
        *(undefined8 *)(puVar19 + -0xd0) = 0x450ff62;
        method_01 = call;
        unaff_RBX = unaff_R14;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)unaff_R14,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
          unaff_R14 = (System_Object_array *)unaff_R15->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)(puVar19 + -0xd0) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar21 = &MethodInfo_Void_OnTextSelection;
          method_00 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar19 + -0xd0) = 0x450ffa1;
          method_01 = unaff_R15;
          unaff_RBX = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (unaff_R14 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)(puVar19 + -0xd0) = 0x450ffc0;
            method_01 = call;
            unaff_RBX = unaff_R14;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)unaff_R14,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = unaff_R15->m_Items[8][0x1d].monitor;
              *(undefined8 *)(puVar19 + -0xd0) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              method_00 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar19 + -0xd0) = 0x450fff1;
              method_01 = unaff_R15;
              unaff_RBX = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              unaff_R14 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)(puVar19 + -0xd0) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar19 + -0xd0) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)(puVar19 + -0xd0) = plVar21;
    *(System_Object_array **)(puVar19 + -0xd8) = unaff_R14;
    *(System_Object_array **)(puVar19 + -0xe0) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)(puVar19 + -0x128) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)(puVar19 + -0x128) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(unaff_RBX->m_Items + 0xe) == '\0') {
      *(undefined8 *)(puVar19 + -0x128) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX,
                 (MethodInfo *)method_01);
    }
    unaff_RBP = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar19 + -0x128) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar22 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar19 + -0x128) = 0x451015c;
    __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBP;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar23 = (System_String_o *)unaff_RBX->m_Items[4];
      pMVar22 = (MethodInfo *)0x0;
      *(undefined8 *)(puVar19 + -0x128) = 0x4510189;
      bVar11 = System_String__IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_RBX->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)unaff_RBX->m_Items + 0x72);
        pMVar22 = (MethodInfo *)unaff_RBX->m_Items[4];
        method_00 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar19 + -0x128) = 0x4510265;
        bVar11 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           (pGVar4,(System_String_o *)pMVar22,(uint)bVar1,(MethodInfo *)0x0);
        cVar8 = (char)bVar11;
      }
      else {
        cVar8 = *(undefined1 *)((long)unaff_RBX->m_Items + 0x72);
      }
      if (cVar8 == '\0') {
        return;
      }
      pTVar24 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar22 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar19 + -0x128) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar24,(MethodInfo *)0x0);
        pTVar24 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
        __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
          unaff_RBP = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar22 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar19 + -0x128) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar24,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          unaff_R14 = (System_Object_array *)(ulong)uVar10;
          pTVar24 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
          __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
          if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar22 = (MethodInfo *)0x0;
            *(undefined8 *)(puVar19 + -0x128) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar24,(MethodInfo *)0x0);
            pTVar24 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
            __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
            if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)(puVar19 + -0x128) = 0x45101fb;
              uVar27 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar24,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar27) {
                uVar9 = uVar27;
              }
              unaff_RBP = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)(puVar19 + -0x128) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX,uVar10,
                         uVar9,method_00);
              if ((*(int *)(unaff_RBX->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)unaff_RBX->m_Items + 100) <= *(int *)(unaff_RBX->m_Items + 0xc))) {
                unaff_RBX->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar22 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar19 + -0x128) = 0x4510228;
              bVar11 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                return;
              }
              if (*(int *)(unaff_RBX->m_Items + 0xd) == *(int *)(unaff_RBX->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)unaff_RBX->m_Items + 100);
                if (*(int32_t *)((long)unaff_RBX->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)unaff_RBX->m_Items + 100);
              }
              method_00 = (MethodInfo *)(ulong)uVar9;
              *(int *)(unaff_RBX->m_Items + 0xd) = *(int *)(unaff_RBX->m_Items + 0xc);
              *(uint *)((long)unaff_RBX->m_Items + 0x6c) = uVar9;
              *(undefined8 *)(puVar19 + -0x128) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX,pMVar22);
              pTVar24 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
              __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
              if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar23 = (System_String_o *)unaff_RBX->m_Items[3];
                *(undefined8 *)(puVar19 + -0x128) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar24,(MethodInfo *)0x0);
                *(undefined8 *)(puVar19 + -0xf0) = 0;
                *(undefined8 *)(puVar19 + -0xe8) = 0;
                *(undefined8 *)(puVar19 + -0x100) = 0;
                *(undefined8 *)(puVar19 + -0xf8) = 0;
                *(undefined8 *)(puVar19 + -0x128) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)(puVar19 + -0x120),
                           (System_String_o *)(puVar19 + -0x100),(UnityEngine_GameObject_o *)pSVar23,node,
                           (MethodInfo *)0x0);
                pSVar23 = (System_String_o *)unaff_RBX->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)(puVar19 + -0x128) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar19 + -0x110) = *(undefined8 *)(puVar19 + -0xf0);
                *(undefined8 *)(puVar19 + -0x108) = *(undefined8 *)(puVar19 + -0xe8);
                *(undefined8 *)(puVar19 + -0x120) = *(undefined8 *)(puVar19 + -0x100);
                *(undefined8 *)(puVar19 + -0x118) = *(undefined8 *)(puVar19 + -0xf8);
                *(undefined8 *)(puVar19 + -0x128) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)(puVar19 + -0x120),
                           pSVar23,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar19 + -0x128) = 0x4510318;
    auVar28 = il2cpp_runtime_helper_022b2c90();
    uVar18 = auVar28._8_8_;
    in_RAX = auVar28._0_8_;
    puVar19 = puVar19 + -0x120;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x4510320

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,int32_t start,
               int32_t end,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_UI_Selectable_o *pUVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  bool_conflict bVar11;
  float fVar12;
  long lVar13;
  undefined8 uVar14;
  Il2CppObject *pIVar15;
  System_Object_array *call;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar16;
  float fVar17;
  ulong uVar18;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x;
  System_Object_array *unaff_RBX;
  int index;
  ulong uVar19;
  long *plVar20;
  TMPro_TMP_InputField_o *unaff_RBP;
  System_Object_array *method_00;
  MethodInfo *pMVar21;
  System_String_o *pSVar22;
  TMPro_TMP_InputField_o *pTVar23;
  TMPro_TMP_InputField_o *pTVar24;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar25;
  System_Object_array *unaff_R14;
  uint uVar26;
  System_Object_array *unaff_R15;
  undefined1 auVar27 [16];
  
  pMVar21 = (MethodInfo *)(ulong)(uint)start;
  uVar18 = (ulong)(uint)end;
  do {
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(System_Object_array **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(System_Object_array **)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
    fVar25 = (float)uVar18;
    fVar12 = SUB84(pMVar21,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pTVar23 = *(TMPro_TMP_InputField_o **)
               &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4510373;
    pTVar24 = pTVar23;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    pTVar5 = *(TMPro_TMP_InputField_o **)
              &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
      lVar13 = *(long *)&(pTVar5->fields).m_SelectionColor.fields.a;
      method = (MethodInfo *)0x0;
      if (lVar13 != 0) {
        fVar16 = *(float *)(lVar13 + 0x10);
        fVar17 = fVar12;
        if ((int)fVar16 <= (int)fVar12) {
          fVar17 = fVar16;
        }
        if ((int)fVar12 < 0) {
          fVar17 = 0.0;
        }
        if ((int)fVar25 < (int)fVar16) {
          fVar16 = fVar25;
        }
        if ((int)fVar25 < 0) {
          fVar16 = 0.0;
        }
        if (fVar17 == fVar16) {
          if (*(char *)&(pTVar5->fields).m_Mesh == '\0') {
            return;
          }
          *(undefined8 *)&(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_PressedColor.fields.a
               = 0xffffffffffffffff;
          return;
        }
        fVar12 = fVar16;
        if ((int)fVar17 <= (int)fVar16) {
          fVar12 = fVar17;
        }
        (((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_PressedColor.fields.a = fVar12;
        if ((int)fVar16 <= (int)fVar17) {
          fVar16 = fVar17;
        }
        (((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar16;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x30) = pTVar23;
    pUVar6 = (pTVar24->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4510405;
    bVar11 = System_String__op_Equality(pSVar22,(System_String_o *)pUVar6,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    pUVar6 = (pTVar24->fields).m_Navigation.fields.m_SelectOnLeft;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4510414;
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)pUVar6,(MethodInfo *)0x0);
    uVar14 = CONCAT44(extraout_var,bVar11);
    if ((char)bVar11 == '\0') {
      pGVar4 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)
                &(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.g;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar1 = *(undefined1 *)((long)&(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
        pUVar6 = (pTVar24->fields).m_Navigation.fields.m_SelectOnLeft;
        method = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x451043e;
        bVar11 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           (pGVar4,(System_String_o *)pUVar6,(uint)bVar1,(MethodInfo *)0x0);
        uVar14 = CONCAT44(extraout_var_00,bVar11);
        cVar8 = (char)bVar11;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar8 = *(undefined1 *)((long)&(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.a + 2);
joined_r0x04510440:
      if (cVar8 != '\0') {
        return;
      }
    }
    uVar7 = *(undefined8 *)((long)register0x00000020 + -0x30);
    *(ulong *)((long)register0x00000020 + -0x30) = (ulong)pMVar21 & 0xffffffff;
    *(undefined8 *)((long)register0x00000020 + -0x38) = uVar7;
    *(undefined8 *)((long)register0x00000020 + -0x40) = uVar14;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fb46;
    bVar11 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    fVar12 = (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.r;
    uVar19 = (ulong)(uint)fVar12;
    pTVar23 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
    if ((int)fVar12 < 0) {
      if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition(pTVar23,(MethodInfo *)0x0);
        pTVar23 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
        if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
          uVar19 = (ulong)uVar9;
          lVar13 = *(long *)&(pTVar23->fields).m_SelectionColor.fields.a;
          if (lVar13 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            uVar19 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar23 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar13 = *(long *)&(pTVar23->fields).m_SelectionColor.fields.a, lVar13 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar13 + 0x10) < (int)uVar19) {
        uVar19 = (ulong)*(uint *)(lVar13 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar23,(int32_t)uVar19,(MethodInfo *)0x0);
      pTVar23 = *(TMPro_TMP_InputField_o **)&(pTVar24->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar23,(int32_t)uVar19,(MethodInfo *)0x0);
        (pTVar24->fields).m_Colors.fields.m_PressedColor.fields.a = -NAN;
        (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.r = -NAN;
        (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.g = -NAN;
        (pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.b = -NAN;
        lVar13 = *(long *)&(pTVar24->fields).m_Navigation.fields;
        if (lVar13 != 0) {
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          length = *(int32_t *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar13 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(pTVar24->fields).m_Colors.fields.m_SelectedColor.fields.a + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x450fc0f;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x48) = uVar18 & 0xffffffff;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x50) = pTVar24;
    *(undefined8 *)((long)register0x00000020 + -0x58) = uVar14;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x = *(System_Collections_Generic_List_object__o **)
         &(pTVar23->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x450fc5b;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    pTVar24 = *(TMPro_TMP_InputField_o **)&(pTVar23->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
      fVar12 = (pTVar23->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar24,(int32_t)fVar12,(MethodInfo *)0x0);
      pTVar24 = *(TMPro_TMP_InputField_o **)&(pTVar23->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar24 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar24,(int32_t)(pTVar23->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    unaff_R14 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x450fca1;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x60) = uVar19;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x68) =
         __this;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x70) = pTVar23;
    *(MethodInfo ***)((long)register0x00000020 + -0x78) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x80) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x88) = x;
    *(undefined8 *)((long)register0x00000020 + -0x90) = uVar14;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)unaff_R14->m_Items + 0x71) == '\0') {
      return;
    }
    unaff_R15 = (System_Object_array *)unaff_R14->m_Items[1];
    if (unaff_R15 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
      x = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar9 = *(uint *)(unaff_R14->m_Items + 0xc);
        uVar19 = (ulong)uVar9;
        uVar10 = (__this_01->fields)._size;
        uVar26 = (int)unaff_R15->max_length + uVar9;
        if ((int)uVar10 < (int)uVar26) {
          uVar26 = uVar10;
        }
        __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(ulong)uVar26;
        if ((int)uVar9 < (int)uVar26) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar19;
            iVar2 = *(int *)(unaff_R14->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fd62;
            pIVar15 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)unaff_R15,index - iVar2,
                                 MethodInfo_String_get_Item);
            x = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fd7c;
            method = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar15,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar19 = (ulong)(index + 1U);
            if ((int)uVar26 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[0];
            unaff_R15 = (System_Object_array *)unaff_R14->m_Items[1];
            x = __this_01;
          } while (unaff_R15 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x = (System_Collections_Generic_List_object__o *)unaff_R14->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fdda;
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return;
          }
          pIVar15 = unaff_R14->m_Items[9];
          unaff_R15 = (System_Object_array *)0x0;
          if (pIVar15 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar15->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar15,0,0,pIVar15->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x450fe21;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x98) = uVar19;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0xa0) =
         __this;
    *(System_Object_array **)((long)register0x00000020 + -0xa8) = unaff_R14;
    *(MethodInfo ***)((long)register0x00000020 + -0xb0) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0xb8) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0xc0) = x;
    *(undefined8 *)((long)register0x00000020 + -200) = uVar14;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)unaff_R15->m_Items[8];
    plVar20 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450feff;
    unaff_RBX = call;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
label_04510010:
      plVar20 = &TypeInfo_Object;
      pUVar3 = (UnityEngine_Object_o *)unaff_R15->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R14 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510032;
      bVar11 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_R15,
                   (MethodInfo *)unaff_R14);
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_R15->m_Items[7];
        if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar15 = unaff_R15->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510049;
      unaff_R14 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      method = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510063;
      method_00 = unaff_R15;
      unaff_RBX = unaff_R14;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar15 != (Il2CppObject *)0x0) {
        pMVar21 = pIVar15->klass->vtable[0x4f].method;
        vtableDispatch = pIVar15->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x451007e;
        (*vtableDispatch)(pIVar15,unaff_R14,pMVar21);
        goto label_0451007e;
      }
    }
    else if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
      unaff_R14 = (System_Object_array *)unaff_R15->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      method = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450ff44;
      method_00 = unaff_R15;
      unaff_RBX = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (unaff_R14 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450ff62;
        method_00 = call;
        unaff_RBX = unaff_R14;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)unaff_R14,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
          unaff_R14 = (System_Object_array *)unaff_R15->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar20 = &MethodInfo_Void_OnTextSelection;
          method = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450ffa1;
          method_00 = unaff_R15;
          unaff_RBX = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (unaff_R14 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450ffc0;
            method_00 = call;
            unaff_RBX = unaff_R14;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)unaff_R14,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (unaff_R15->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = unaff_R15->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              method = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x450fff1;
              method_00 = unaff_R15;
              unaff_RBX = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              unaff_R14 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0xd0) = plVar20;
    *(System_Object_array **)((long)register0x00000020 + -0xd8) = unaff_R14;
    *(System_Object_array **)((long)register0x00000020 + -0xe0) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(unaff_RBX->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX,
                 (MethodInfo *)method_00);
    }
    unaff_RBP = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar21 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x451015c;
    __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBP;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar22 = (System_String_o *)unaff_RBX->m_Items[4];
      pMVar21 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510189;
      bVar11 = System_String__IsNullOrEmpty(pSVar22,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_RBX->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)unaff_RBX->m_Items + 0x72);
        pMVar21 = (MethodInfo *)unaff_RBX->m_Items[4];
        method = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510265;
        bVar11 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           (pGVar4,(System_String_o *)pMVar21,(uint)bVar1,(MethodInfo *)0x0);
        cVar8 = (char)bVar11;
      }
      else {
        cVar8 = *(undefined1 *)((long)unaff_RBX->m_Items + 0x72);
      }
      if (cVar8 == '\0') {
        return;
      }
      pTVar23 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar21 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar23,(MethodInfo *)0x0);
        pTVar23 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
        __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
          unaff_RBP = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar21 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar23,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          unaff_R14 = (System_Object_array *)(ulong)uVar10;
          pTVar23 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
          __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
          if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar21 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar23,(MethodInfo *)0x0);
            pTVar23 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
            __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
            if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45101fb;
              uVar26 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar23,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar26) {
                uVar9 = uVar26;
              }
              unaff_RBP = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x128) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX,uVar10,
                         uVar9,method);
              if ((*(int *)(unaff_RBX->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)unaff_RBX->m_Items + 100) <= *(int *)(unaff_RBX->m_Items + 0xc))) {
                unaff_RBX->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar21 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510228;
              bVar11 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                return;
              }
              if (*(int *)(unaff_RBX->m_Items + 0xd) == *(int *)(unaff_RBX->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)unaff_RBX->m_Items + 100);
                if (*(int32_t *)((long)unaff_RBX->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)unaff_RBX->m_Items + 100);
              }
              method = (MethodInfo *)(ulong)uVar9;
              *(int *)(unaff_RBX->m_Items + 0xd) = *(int *)(unaff_RBX->m_Items + 0xc);
              *(uint *)((long)unaff_RBX->m_Items + 0x6c) = uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x128) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX,pMVar21);
              pTVar23 = (TMPro_TMP_InputField_o *)unaff_RBX->m_Items[8];
              __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
              if (pTVar23 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar22 = (System_String_o *)unaff_RBX->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar23,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0xf0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xf8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0x120),
                           (System_String_o *)((long)register0x00000020 + -0x100),
                           (UnityEngine_GameObject_o *)pSVar22,node,(MethodInfo *)0x0);
                pSVar22 = (System_String_o *)unaff_RBX->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0x110) =
                     *(undefined8 *)((long)register0x00000020 + -0xf0);
                *(undefined8 *)((long)register0x00000020 + -0x108) =
                     *(undefined8 *)((long)register0x00000020 + -0xe8);
                *(undefined8 *)((long)register0x00000020 + -0x120) =
                     *(undefined8 *)((long)register0x00000020 + -0x100);
                *(undefined8 *)((long)register0x00000020 + -0x118) =
                     *(undefined8 *)((long)register0x00000020 + -0xf8);
                *(undefined8 *)((long)register0x00000020 + -0x128) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0x120),pSVar22,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510318;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    uVar18 = auVar27._8_8_;
    in_RAX = auVar27._0_8_;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CapturePreviewColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450f990

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *array;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *x_00;
  System_String_o *b;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  System_String_o *pSVar12;
  undefined8 uVar13;
  long lVar14;
  Il2CppObject *pIVar15;
  System_Object_array *call;
  System_Object_array *method_00;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar16;
  System_String_array *in_RCX;
  float fVar17;
  System_Collections_Generic_List_string__o *unaff_RBX;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x_01;
  undefined1 *puVar18;
  int iVar19;
  int index;
  ulong unaff_RBP;
  ulong uVar20;
  long *plVar21;
  TMPro_TMP_InputField_o *pTVar22;
  System_Object_array *method_01;
  MethodInfo *pMVar23;
  MethodInfo_362BED0 **__this_02;
  System_Object_array *__this_03;
  System_Object_array *__this_04;
  MethodInfo_2A669C0 **unaff_R12;
  System_String_array **unaff_R13;
  float fVar24;
  uint uVar25;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar26 [16];
  undefined1 auStack_38 [8];
  
  puVar18 = auStack_38;
  __this_02 = (MethodInfo_362BED0 **)__this;
  if (g_data_057aed86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_02 = &MethodInfo_String_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed86 = '\x01';
  }
  pSVar4 = (__this->fields)._previewColors;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar3) {
      in_RCX = (System_String_array *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    __this_02 = (MethodInfo_362BED0 **)(__this->fields)._colors;
    if ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02 !=
        (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      uVar9 = (__this->fields)._selectionEnd;
      uVar10 = *(uint *)&(((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields
                         ).m_CancellationTokenSource;
      if ((int)uVar9 <= (int)uVar10) {
        uVar10 = uVar9;
      }
      unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar10;
      uVar9 = (__this->fields)._selectionStart;
      unaff_RBP = (ulong)uVar9;
      if ((int)uVar10 <= (int)uVar9) {
label_0450fad2:
        *(undefined1 *)((long)&(__this->fields)._attached + 1) = 1;
        return;
      }
      do {
        unaff_RBX = (__this->fields)._previewColors;
        iVar19 = (int)unaff_RBP;
        pSVar12 = (System_String_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,iVar19,MethodInfo_String_get_Item);
        lVar14 = MethodInfo_Void_Add;
        unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
        unaff_R13 = (System_String_array **)&MethodInfo_Void_Add;
        if (unaff_RBX == (System_Collections_Generic_List_string__o *)0x0) break;
        piVar1 = &(unaff_RBX->fields)._version;
        *piVar1 = *piVar1 + 1;
        in_RCX = (unaff_RBX->fields)._items;
        if (in_RCX == (System_String_array *)0x0) break;
        uVar9 = (unaff_RBX->fields)._size;
        if (uVar9 < (uint)in_RCX->max_length) {
          (unaff_RBX->fields)._size = uVar9 + 1;
          in_RCX->m_Items[(int)uVar9] = pSVar12;
          il2cpp_runtime_helper_022b4080(in_RCX->m_Items + (int)uVar9);
        }
        else {
          in_RCX = *(System_String_array **)(*(long *)(lVar14 + 0x20) + 0xc0);
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)unaff_RBX,(Il2CppObject *)pSVar12,
                     (MethodInfo_362C220 *)in_RCX->m_Items[10]);
        }
        if ((int)uVar10 <= iVar19 + 1) goto label_0450fad2;
        unaff_RBP = (ulong)(iVar19 + 1);
        __this_02 = (MethodInfo_362BED0 **)(__this->fields)._colors;
      } while ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02 !=
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0);
    }
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  do {
    *(ulong *)(puVar18 + -8) = unaff_RBP;
    *(System_Collections_Generic_List_string__o **)(puVar18 + -0x10) = unaff_RBX;
    *(undefined8 *)(puVar18 + -0x18) = uVar13;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)(puVar18 + -0x20) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)(puVar18 + -0x20) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pTVar22 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._input;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x20) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar18 + -0x20) = 0x450fb46;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    uVar9 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
            _selectionEnd;
    uVar20 = (ulong)uVar9;
    pTVar22 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._input;
    if ((int)uVar9 < 0) {
      if (pTVar22 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)(puVar18 + -0x20) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition(pTVar22,(MethodInfo *)0x0);
        pTVar22 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
                  _input;
        if (pTVar22 != (TMPro_TMP_InputField_o *)0x0) {
          uVar20 = (ulong)uVar9;
          lVar14 = *(long *)&(pTVar22->fields).m_SelectionColor.fields.a;
          if (lVar14 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            uVar20 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar22 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar14 = *(long *)&(pTVar22->fields).m_SelectionColor.fields.a, lVar14 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar14 + 0x10) < (int)uVar20) {
        uVar20 = (ulong)*(uint *)(lVar14 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)(puVar18 + -0x20) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar22,(int32_t)uVar20,(MethodInfo *)0x0);
      pTVar22 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._input;
      if (pTVar22 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)(puVar18 + -0x20) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar22,(int32_t)uVar20,(MethodInfo *)0x0);
        (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._selectionStart
             = -1;
        (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._selectionEnd =
             -1;
        (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._openedStart =
             -1;
        (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._openedEnd = -1
        ;
        pSVar4 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
                 _previewColors;
        if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar3 = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          if (0 < iVar3) {
            array = (pSVar4->fields)._items;
            *(undefined8 *)(puVar18 + -0x20) = 0x450fbf8;
            System_Array__Clear((System_Array_o *)array,0,iVar3,(MethodInfo *)0x0);
          }
          *(undefined1 *)
           ((long)&(((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
                   _attached + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)(puVar18 + -0x20) = 0x450fc0f;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar18 + -0x20) = __this;
    *(MethodInfo_362BED0 ***)(puVar18 + -0x28) = __this_02;
    *(undefined8 *)(puVar18 + -0x30) = uVar13;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)(puVar18 + -0x38) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x_01 = *(System_Collections_Generic_List_object__o **)
            &(pTVar22->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x38) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar18 + -0x38) = 0x450fc5b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar22->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
      fVar11 = (pTVar22->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)(puVar18 + -0x38) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar5,(int32_t)fVar11,(MethodInfo *)0x0);
      pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar22->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar5,(int32_t)(pTVar22->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)(puVar18 + -0x38) = 0x450fca1;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar18 + -0x38) = uVar20;
    *(TMPro_TMP_InputField_o **)(puVar18 + -0x40) = unaff_R15;
    *(TMPro_TMP_InputField_o **)(puVar18 + -0x48) = pTVar22;
    *(System_String_array ***)(puVar18 + -0x50) = unaff_R13;
    *(MethodInfo_2A669C0 ***)(puVar18 + -0x58) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)(puVar18 + -0x60) = x_01;
    *(undefined8 *)(puVar18 + -0x68) = uVar13;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)(puVar18 + -0x70) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar18 + -0x70) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)(puVar18 + -0x70) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)method_00->m_Items + 0x71) == '\0') {
      return;
    }
    __this_03 = (System_Object_array *)method_00->m_Items[1];
    if (__this_03 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
      x_01 = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar9 = *(uint *)(method_00->m_Items + 0xc);
        uVar20 = (ulong)uVar9;
        uVar10 = (__this_01->fields)._size;
        uVar25 = (int)__this_03->max_length + uVar9;
        if ((int)uVar10 < (int)uVar25) {
          uVar25 = uVar10;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar25;
        if ((int)uVar9 < (int)uVar25) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar20;
            iVar19 = *(int *)(method_00->m_Items + 0xc);
            *(undefined8 *)(puVar18 + -0x70) = 0x450fd62;
            pIVar15 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_03,index - iVar19,
                                 MethodInfo_String_get_Item);
            x_01 = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)(puVar18 + -0x70) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar15,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar20 = (ulong)(index + 1U);
            if ((int)uVar25 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
            __this_03 = (System_Object_array *)method_00->m_Items[1];
            x_01 = __this_01;
          } while (__this_03 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)(puVar18 + -0x70) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar18 + -0x70) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar18 + -0x70) = 0x450fdda;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pIVar15 = method_00->m_Items[9];
          __this_03 = (System_Object_array *)0x0;
          if (pIVar15 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar15->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar15,0,0,pIVar15->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)(puVar18 + -0x70) = 0x450fe21;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar18 + -0x70) = uVar20;
    *(TMPro_TMP_InputField_o **)(puVar18 + -0x78) = unaff_R15;
    *(System_Object_array **)(puVar18 + -0x80) = method_00;
    *(System_String_array ***)(puVar18 + -0x88) = unaff_R13;
    *(MethodInfo_2A669C0 ***)(puVar18 + -0x90) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)(puVar18 + -0x98) = x_01;
    *(undefined8 *)(puVar18 + -0xa0) = uVar13;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_03->m_Items[8];
    plVar21 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0xa8) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (System_Object_array *)0x0;
    *(undefined8 *)(puVar18 + -0xa8) = 0x450feff;
    __this_04 = call;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04510010:
      plVar21 = &TypeInfo_Object;
      x = (UnityEngine_Object_o *)__this_03->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar18 + -0xa8) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (System_Object_array *)0x0;
      *(undefined8 *)(puVar18 + -0xa8) = 0x4510032;
      bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
label_0451007e:
        *(undefined8 *)(puVar18 + -0xa8) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                   (MethodInfo *)method_00);
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
        if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)(puVar18 + -0xa8) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)(puVar18 + -0xa8) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar6,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar15 = __this_03->m_Items[9];
      *(undefined8 *)(puVar18 + -0xa8) = 0x4510049;
      method_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (System_String_array *)0x0;
      *(undefined8 *)(puVar18 + -0xa8) = 0x4510063;
      method_01 = __this_03;
      __this_04 = method_00;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar15 != (Il2CppObject *)0x0) {
        pMVar23 = pIVar15->klass->vtable[0x4f].method;
        vtableDispatch = pIVar15->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)(puVar18 + -0xa8) = 0x451007e;
        (*vtableDispatch)(pIVar15,method_00,pMVar23);
        goto label_0451007e;
      }
    }
    else if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
      method_00 = (System_Object_array *)__this_03->m_Items[8][0x1e].klass;
      *(undefined8 *)(puVar18 + -0xa8) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (System_String_array *)0x0;
      *(undefined8 *)(puVar18 + -0xa8) = 0x450ff44;
      method_01 = __this_03;
      __this_04 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (method_00 != (System_Object_array *)0x0) {
        *(undefined8 *)(puVar18 + -0xa8) = 0x450ff62;
        method_01 = call;
        __this_04 = method_00;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)method_00,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
          method_00 = (System_Object_array *)__this_03->m_Items[8][0x1d].klass;
          unaff_R13 = (System_String_array **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)(puVar18 + -0xa8) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar21 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (System_String_array *)0x0;
          *(undefined8 *)(puVar18 + -0xa8) = 0x450ffa1;
          method_01 = __this_03;
          __this_04 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (method_00 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)(puVar18 + -0xa8) = 0x450ffc0;
            method_01 = call;
            __this_04 = method_00;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)method_00,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_03->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = __this_03->m_Items[8][0x1d].monitor;
              *(undefined8 *)(puVar18 + -0xa8) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (System_String_array *)0x0;
              *(undefined8 *)(puVar18 + -0xa8) = 0x450fff1;
              method_01 = __this_03;
              __this_04 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              method_00 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)(puVar18 + -0xa8) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar18 + -0xa8) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)(puVar18 + -0xa8) = plVar21;
    *(System_Object_array **)(puVar18 + -0xb0) = method_00;
    *(System_Object_array **)(puVar18 + -0xb8) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)(puVar18 + -0x100) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)(puVar18 + -0x100) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_04->m_Items + 0xe) == '\0') {
      *(undefined8 *)(puVar18 + -0x100) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,
                 (MethodInfo *)method_01);
    }
    pTVar22 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x100) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar23 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar18 + -0x100) = 0x451015c;
    unaff_R15 = pTVar22;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_04->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_04->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar12 = (System_String_o *)__this_04->m_Items[4];
      pMVar23 = (MethodInfo *)0x0;
      *(undefined8 *)(puVar18 + -0x100) = 0x4510189;
      bVar8 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_04->m_Items[7];
        if (pGVar6 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar2 = *(undefined1 *)((long)__this_04->m_Items + 0x72);
        pMVar23 = (MethodInfo *)__this_04->m_Items[4];
        in_RCX = (System_String_array *)0x0;
        *(undefined8 *)(puVar18 + -0x100) = 0x4510265;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar6,(System_String_o *)pMVar23,(uint)bVar2,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
      }
      else {
        cVar7 = *(undefined1 *)((long)__this_04->m_Items + 0x72);
      }
      if (cVar7 == '\0') {
        return;
      }
      pTVar5 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar23 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar18 + -0x100) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
        pTVar5 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar22 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar23 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar18 + -0x100) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          method_00 = (System_Object_array *)(ulong)uVar10;
          pTVar5 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar23 = (MethodInfo *)0x0;
            *(undefined8 *)(puVar18 + -0x100) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
            pTVar5 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)(puVar18 + -0x100) = 0x45101fb;
              uVar25 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar25) {
                uVar9 = uVar25;
              }
              pTVar22 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)(puVar18 + -0x100) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,uVar10,
                         uVar9,(MethodInfo *)in_RCX);
              if ((*(int *)(__this_04->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_04->m_Items + 100) <= *(int *)(__this_04->m_Items + 0xc))) {
                __this_04->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar23 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar18 + -0x100) = 0x4510228;
              bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              if (*(int *)(__this_04->m_Items + 0xd) == *(int *)(__this_04->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)__this_04->m_Items + 100);
                if (*(int32_t *)((long)__this_04->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)__this_04->m_Items + 100);
              }
              in_RCX = (System_String_array *)(ulong)uVar9;
              *(int *)(__this_04->m_Items + 0xd) = *(int *)(__this_04->m_Items + 0xc);
              *(uint *)((long)__this_04->m_Items + 0x6c) = uVar9;
              *(undefined8 *)(puVar18 + -0x100) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_04,pMVar23);
              pTVar5 = (TMPro_TMP_InputField_o *)__this_04->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar12 = (System_String_o *)__this_04->m_Items[3];
                *(undefined8 *)(puVar18 + -0x100) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
                *(undefined8 *)(puVar18 + -200) = 0;
                *(undefined8 *)(puVar18 + -0xc0) = 0;
                *(undefined8 *)(puVar18 + -0xd8) = 0;
                *(undefined8 *)(puVar18 + -0xd0) = 0;
                *(undefined8 *)(puVar18 + -0x100) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)(puVar18 + -0xf8),
                           (System_String_o *)(puVar18 + -0xd8),(UnityEngine_GameObject_o *)pSVar12,node,
                           (MethodInfo *)0x0);
                pSVar12 = (System_String_o *)__this_04->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)(puVar18 + -0x100) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar18 + -0xe8) = *(undefined8 *)(puVar18 + -200);
                *(undefined8 *)(puVar18 + -0xe0) = *(undefined8 *)(puVar18 + -0xc0);
                *(undefined8 *)(puVar18 + -0xf8) = *(undefined8 *)(puVar18 + -0xd8);
                *(undefined8 *)(puVar18 + -0xf0) = *(undefined8 *)(puVar18 + -0xd0);
                *(undefined8 *)(puVar18 + -0x100) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)(puVar18 + -0xf8),
                           pSVar12,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar18 + -0x100) = 0x4510318;
    auVar26 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)(puVar18 + -0x100) = pTVar22;
    *(System_Object_array **)(puVar18 + -0x108) = __this_03;
    *(System_Object_array **)(puVar18 + -0x110) = method_00;
    *(System_Object_array **)(puVar18 + -0x118) = __this_04;
    *(long *)(puVar18 + -0x120) = auVar26._0_8_;
    __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(auVar26._8_8_ & 0xffffffff);
    fVar24 = auVar26._8_4_;
    unaff_RBP = (ulong)pMVar23 & 0xffffffff;
    fVar11 = SUB84(pMVar23,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)(puVar18 + -0x128) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    x_00 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
            &(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x128) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = (System_String_o *)0x0;
    *(undefined8 *)(puVar18 + -0x128) = 0x4510373;
    __this_02 = (MethodInfo_362BED0 **)x_00;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    lVar14 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar14 != 0) {
      in_RCX = (System_String_array *)0x0;
      if (*(long *)(lVar14 + 0x220) != 0) {
        fVar16 = *(float *)(*(long *)(lVar14 + 0x220) + 0x10);
        fVar17 = fVar11;
        if ((int)fVar16 <= (int)fVar11) {
          fVar17 = fVar16;
        }
        if ((int)fVar11 < 0) {
          fVar17 = 0.0;
        }
        if ((int)fVar24 < (int)fVar16) {
          fVar16 = fVar24;
        }
        if ((int)fVar24 < 0) {
          fVar16 = 0.0;
        }
        if (fVar17 == fVar16) {
          if (*(char *)(lVar14 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar11 = fVar16;
        if ((int)fVar17 <= (int)fVar16) {
          fVar11 = fVar17;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar11;
        if ((int)fVar16 <= (int)fVar17) {
          fVar16 = fVar17;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar16;
        return;
      }
    }
    *(undefined8 *)(puVar18 + -0x128) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)(puVar18 + -0x128) = x_00;
    b = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
        _colorsEnabledKey;
    *(undefined8 *)(puVar18 + -0x130) = 0x4510405;
    bVar8 = System_String__op_Equality(pSVar12,b,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pSVar12 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
              _colorsEnabledKey;
    *(undefined8 *)(puVar18 + -0x130) = 0x4510414;
    bVar8 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
    uVar13 = CONCAT44(extraout_var,bVar8);
    if ((char)bVar8 == '\0') {
      pGVar6 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields)._state;
      if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar2 = *(undefined1 *)
                 ((long)&(((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields
                         )._attached + 2);
        pSVar12 = (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
                  _colorsEnabledKey;
        in_RCX = (System_String_array *)0x0;
        *(undefined8 *)(puVar18 + -0x130) = 0x451043e;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar6,pSVar12,(uint)bVar2,(MethodInfo *)0x0)
        ;
        uVar13 = CONCAT44(extraout_var_00,bVar8);
        cVar7 = (char)bVar8;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar7 = *(undefined1 *)
               ((long)&(((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02)->fields).
                       _attached + 2);
joined_r0x04510440:
      if (cVar7 != '\0') {
        return;
      }
    }
    unaff_RBX = *(System_Collections_Generic_List_string__o **)(puVar18 + -0x128);
    puVar18 = puVar18 + -0x120;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestorePreviewColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450fcb0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  int iVar2;
  UnityEngine_Object_c *x;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  TMPro_TMP_InputField_o *pTVar5;
  System_String_o *b;
  undefined8 uVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  long lVar12;
  undefined8 in_RAX;
  Il2CppObject *pIVar13;
  undefined8 uVar14;
  System_Object_array *call;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar15;
  MethodInfo *in_RCX;
  float fVar16;
  TMPro_TMP_Text_o *unaff_RBX;
  TMPro_TMP_Text_o *pTVar17;
  int index;
  ulong unaff_RBP;
  long *plVar18;
  TMPro_TMP_InputField_o *pTVar19;
  System_Object_array *method_00;
  MethodInfo *pMVar20;
  System_String_o *pSVar21;
  System_Object_array *__this_01;
  System_Object_array *__this_02;
  UnityEngine_Object_o *pUVar22;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar23;
  TMPro_TMP_InputField_o *unaff_R14;
  uint uVar24;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar25 [16];
  
  do {
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(MethodInfo ***)((long)register0x00000020 + -0x20) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x28) = unaff_R12;
    *(TMPro_TMP_Text_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)((System_Object_array *)__this)->m_Items + 0x71) == '\0') {
      return;
    }
    __this_01 = (System_Object_array *)((System_Object_array *)__this)->m_Items[1];
    if (__this_01 != (System_Object_array *)0x0) {
      pTVar17 = (TMPro_TMP_Text_o *)((System_Object_array *)__this)->m_Items[0];
      unaff_RBX = (TMPro_TMP_Text_o *)0x0;
      if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
        uVar9 = *(uint *)(((System_Object_array *)__this)->m_Items + 0xc);
        unaff_RBP = (ulong)uVar9;
        uVar10 = *(uint *)&(pTVar17->fields).m_CancellationTokenSource;
        uVar24 = (int)__this_01->max_length + uVar9;
        if ((int)uVar10 < (int)uVar24) {
          uVar24 = uVar10;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar24;
        if ((int)uVar9 < (int)uVar24) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)unaff_RBP;
            iVar2 = *(int *)(((System_Object_array *)__this)->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fd62;
            pIVar13 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index - iVar2,
                                 MethodInfo_String_get_Item);
            unaff_RBX = (TMPro_TMP_Text_o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (pTVar17 == (TMPro_TMP_Text_o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pTVar17,index,pIVar13,
                       (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            unaff_RBP = (ulong)(index + 1U);
            if ((int)uVar24 <= (int)(index + 1U)) goto label_0450fd96;
            pTVar17 = (TMPro_TMP_Text_o *)((System_Object_array *)__this)->m_Items[0];
            __this_01 = (System_Object_array *)((System_Object_array *)__this)->m_Items[1];
            unaff_RBX = pTVar17;
          } while (__this_01 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          unaff_RBX = (TMPro_TMP_Text_o *)((System_Object_array *)__this)->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fdda;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pTVar17 = (TMPro_TMP_Text_o *)((System_Object_array *)__this)->m_Items[9];
          __this_01 = (System_Object_array *)0x0;
          if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
            vtableDispatch = (pTVar17->klass->vtable)._106_ForceMeshUpdate.methodPtr;
            (*vtableDispatch)
                      (pTVar17,0,0,(pTVar17->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch)
            ;
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x450fe21;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x40) = unaff_RBP;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x48) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x50) =
         __this;
    *(MethodInfo ***)((long)register0x00000020 + -0x58) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x60) = unaff_R12;
    *(TMPro_TMP_Text_o **)((long)register0x00000020 + -0x68) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x70) = uVar14;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_01->m_Items[8];
    plVar18 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450feff;
    __this_02 = call;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04510010:
      plVar18 = &TypeInfo_Object;
      pUVar3 = (UnityEngine_Object_o *)__this_01->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4510032;
      bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_01,
                   (MethodInfo *)__this);
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_01->m_Items[7];
        if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar13 = __this_01->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4510049;
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4510063;
      method_00 = __this_01;
      __this_02 = (System_Object_array *)__this;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar13 != (Il2CppObject *)0x0) {
        pMVar20 = pIVar13->klass->vtable[0x4f].method;
        vtableDispatch = pIVar13->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x451007e;
        (*vtableDispatch)(pIVar13,__this,pMVar20);
        goto label_0451007e;
      }
    }
    else if (__this_01->m_Items[8] != (Il2CppObject *)0x0) {
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
               __this_01->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450ff44;
      method_00 = __this_01;
      __this_02 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if ((System_Object_array *)__this != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450ff62;
        method_00 = call;
        __this_02 = (System_Object_array *)__this;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this,(UnityEngine_Events_UnityAction_T0__o *)call,
                   MethodInfo_Void_RemoveListener);
        if (__this_01->m_Items[8] != (Il2CppObject *)0x0) {
          __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                   __this_01->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar18 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450ffa1;
          method_00 = __this_01;
          __this_02 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if ((System_Object_array *)__this != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450ffc0;
            method_00 = call;
            __this_02 = (System_Object_array *)__this;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_01->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = __this_01->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x78) = 0x450fff1;
              method_00 = __this_01;
              __this_02 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0x78) = plVar18;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x80) =
         __this;
    *(System_Object_array **)((long)register0x00000020 + -0x88) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_02->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                 (MethodInfo *)method_00);
    }
    pTVar19 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x451015c;
    unaff_R15 = pTVar19;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_02->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_02->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar21 = (System_String_o *)__this_02->m_Items[4];
      pMVar20 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510189;
      bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)__this_02->m_Items + 0x72);
        pMVar20 = (MethodInfo *)__this_02->m_Items[4];
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510265;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar4,(System_String_o *)pMVar20,(uint)bVar1,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
      }
      else {
        cVar7 = *(undefined1 *)((long)__this_02->m_Items + 0x72);
      }
      if (cVar7 == '\0') {
        return;
      }
      pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar20 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
        pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar20 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(ulong)uVar10;
          pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar20 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
            pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45101fb;
              uVar24 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar24) {
                uVar9 = uVar24;
              }
              pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,uVar10,
                         uVar9,in_RCX);
              if ((*(int *)(__this_02->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_02->m_Items + 100) <= *(int *)(__this_02->m_Items + 0xc))) {
                __this_02->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar20 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510228;
              bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              if (*(int *)(__this_02->m_Items + 0xd) == *(int *)(__this_02->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)__this_02->m_Items + 100);
                if (*(int32_t *)((long)__this_02->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)__this_02->m_Items + 100);
              }
              in_RCX = (MethodInfo *)(ulong)uVar9;
              *(int *)(__this_02->m_Items + 0xd) = *(int *)(__this_02->m_Items + 0xc);
              *(uint *)((long)__this_02->m_Items + 0x6c) = uVar9;
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,pMVar20);
              pTVar5 = (TMPro_TMP_InputField_o *)__this_02->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar21 = (System_String_o *)__this_02->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -200),
                           (System_String_o *)((long)register0x00000020 + -0xa8),
                           (UnityEngine_GameObject_o *)pSVar21,node,(MethodInfo *)0x0);
                pSVar21 = (System_String_o *)__this_02->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0xb8) =
                     *(undefined8 *)((long)register0x00000020 + -0x98);
                *(undefined8 *)((long)register0x00000020 + -0xb0) =
                     *(undefined8 *)((long)register0x00000020 + -0x90);
                *(undefined8 *)((long)register0x00000020 + -200) =
                     *(undefined8 *)((long)register0x00000020 + -0xa8);
                *(undefined8 *)((long)register0x00000020 + -0xc0) =
                     *(undefined8 *)((long)register0x00000020 + -0xa0);
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -200),pSVar21,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x4510318;
    auVar25 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0xd0) = pTVar19;
    *(System_Object_array **)((long)register0x00000020 + -0xd8) = __this_01;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0xe0) =
         __this;
    *(System_Object_array **)((long)register0x00000020 + -0xe8) = __this_02;
    *(long *)((long)register0x00000020 + -0xf0) = auVar25._0_8_;
    fVar23 = auVar25._8_4_;
    fVar11 = SUB84(pMVar20,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xf8) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xf8) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xf8) = 0x4510373;
    pUVar22 = pUVar3;
    bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    lVar12 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar12 != 0) {
      in_RCX = (MethodInfo *)0x0;
      if (*(long *)(lVar12 + 0x220) != 0) {
        fVar15 = *(float *)(*(long *)(lVar12 + 0x220) + 0x10);
        fVar16 = fVar11;
        if ((int)fVar15 <= (int)fVar11) {
          fVar16 = fVar15;
        }
        if ((int)fVar11 < 0) {
          fVar16 = 0.0;
        }
        if ((int)fVar23 < (int)fVar15) {
          fVar15 = fVar23;
        }
        if ((int)fVar23 < 0) {
          fVar15 = 0.0;
        }
        if (fVar16 == fVar15) {
          if (*(char *)(lVar12 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar11 = fVar15;
        if ((int)fVar16 <= (int)fVar15) {
          fVar11 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar11;
        if ((int)fVar15 <= (int)fVar16) {
          fVar15 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar15;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xf8) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0xf8) = pUVar3;
    b = (System_String_o *)pUVar22[2].fields.m_CachedPtr;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510405;
    bVar8 = System_String__op_Equality(pSVar21,b,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pSVar21 = (System_String_o *)pUVar22[2].fields.m_CachedPtr;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510414;
    bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
    uVar14 = CONCAT44(extraout_var,bVar8);
    if ((char)bVar8 == '\0') {
      pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)pUVar22[3].fields.m_CachedPtr;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar1 = *(undefined1 *)((long)&pUVar22[6].klass + 2);
        pSVar21 = (System_String_o *)pUVar22[2].fields.m_CachedPtr;
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451043e;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar4,pSVar21,(uint)bVar1,(MethodInfo *)0x0)
        ;
        uVar14 = CONCAT44(extraout_var_00,bVar8);
        cVar7 = (char)bVar8;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar7 = *(undefined1 *)((long)&pUVar22[6].klass + 2);
joined_r0x04510440:
      if (cVar7 != '\0') {
        return;
      }
    }
    uVar6 = *(undefined8 *)((long)register0x00000020 + -0xf8);
    *(ulong *)((long)register0x00000020 + -0xf8) = (ulong)pMVar20 & 0xffffffff;
    *(undefined8 *)((long)register0x00000020 + -0x100) = uVar6;
    *(undefined8 *)((long)register0x00000020 + -0x108) = uVar14;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    x = pUVar22[4].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fb46;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    uVar9 = *(uint *)((long)&pUVar22[5].monitor + 4);
    unaff_RBP = (ulong)uVar9;
    unaff_R14 = (TMPro_TMP_InputField_o *)pUVar22[4].klass;
    if ((int)uVar9 < 0) {
      if (unaff_R14 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition(unaff_R14,(MethodInfo *)0x0);
        unaff_R14 = (TMPro_TMP_InputField_o *)pUVar22[4].klass;
        if (unaff_R14 != (TMPro_TMP_InputField_o *)0x0) {
          unaff_RBP = (ulong)uVar9;
          lVar12 = *(long *)&(unaff_R14->fields).m_SelectionColor.fields.a;
          if (lVar12 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            unaff_RBP = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((unaff_R14 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar12 = *(long *)&(unaff_R14->fields).m_SelectionColor.fields.a, lVar12 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar12 + 0x10) < (int)unaff_RBP) {
        unaff_RBP = (ulong)*(uint *)(lVar12 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(unaff_R14,(int32_t)unaff_RBP,(MethodInfo *)0x0);
      unaff_R14 = (TMPro_TMP_InputField_o *)pUVar22[4].klass;
      if (unaff_R14 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(unaff_R14,(int32_t)unaff_RBP,(MethodInfo *)0x0)
        ;
        *(undefined4 *)&pUVar22[5].monitor = 0xffffffff;
        *(undefined4 *)((long)&pUVar22[5].monitor + 4) = 0xffffffff;
        *(undefined4 *)&pUVar22[5].fields.m_CachedPtr = 0xffffffff;
        *(undefined4 *)((long)&pUVar22[5].fields.m_CachedPtr + 4) = 0xffffffff;
        lVar12 = pUVar22[1].fields.m_CachedPtr;
        if (lVar12 != 0) {
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          length = *(int32_t *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar12 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&pUVar22[6].klass + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x110) = 0x450fc0f;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x110) = auVar25._8_8_ & 0xffffffff;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x118) = pUVar22;
    *(undefined8 *)((long)register0x00000020 + -0x120) = uVar14;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    unaff_RBX = *(TMPro_TMP_Text_o **)&(unaff_R14->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fc5b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pTVar19 = *(TMPro_TMP_InputField_o **)&(unaff_R14->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
      fVar11 = (unaff_R14->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar19,(int32_t)fVar11,(MethodInfo *)0x0);
      pTVar19 = *(TMPro_TMP_InputField_o **)&(unaff_R14->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar19,(int32_t)(unaff_R14->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fca1;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyTextColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x4510db0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyTextColors
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,
               TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  TMPro_TMP_MeshInfo_array *pTVar4;
  UnityEngine_Color32_array *pUVar5;
  TMPro_TMP_Text_c *pTVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  bool_conflict bVar8;
  int iVar9;
  int32_t iVar10;
  int iVar11;
  TMPro_TMP_CharacterInfo_array *pTVar12;
  UnityEngine_Color32_o UVar13;
  System_String_o *pSVar14;
  Il2CppMethodPointer *ppIVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  undefined8 *extraout_RDX_00;
  PatreonEffects_NameEffectController_o *x;
  uint uVar16;
  ulong unaff_RBP;
  ulong uVar17;
  ulong uVar18;
  PatreonEffects_NameEffectController_o *pPVar19;
  TMPro_TMP_Text_o *pTVar20;
  long lVar21;
  long unaff_R14;
  float fVar22;
  undefined8 uVar23;
  UnityEngine_Color_Fields UStack_88;
  ulong uStack_78;
  PatreonEffects_NameEffectController_o *pPStack_70;
  ulong uStack_68;
  UnityEngine_Color_Fields UStack_60;
  PatreonEffects_NameEffectController_o *pPStack_48;
  long lStack_40;
  PatreonEffects_NameEffectController_o *pPStack_38;
  
  pPStack_38 = (PatreonEffects_NameEffectController_o *)__this;
  if (g_data_057aed88 == '\0') {
    lStack_40 = 0x4510dd7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    lStack_40 = 0x4510de3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed88 = '\x01';
  }
  x = *(PatreonEffects_NameEffectController_o **)&(pPStack_38->fields).cleared;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    lStack_40 = 0x4510e0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar17 = 0;
  lStack_40 = 0x4510e16;
  pPVar19 = x;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) &&
     (pTVar20 = (pPStack_38->fields).text, pTVar20 != (TMPro_TMP_Text_o *)0x0)) {
    iVar11 = (textInfo->fields).characterCount;
    iVar9 = *(int *)&(pTVar20->fields).m_CancellationTokenSource;
    if (iVar11 <= iVar9) {
      iVar9 = iVar11;
    }
    if (iVar9 < 1) {
      return;
    }
    lVar21 = 0x58;
    x = (PatreonEffects_NameEffectController_o *)0x0;
    pTVar12 = (textInfo->fields).characterInfo;
    method_00 = extraout_RDX;
    if (pTVar12 != (TMPro_TMP_CharacterInfo_array *)0x0) {
label_04510e91:
      if (x < (PatreonEffects_NameEffectController_o *)(ulong)(uint)pTVar12->max_length) {
        if ((*(byte *)((long)&pTVar12->m_Items[0].fields.topRight.fields.y + lVar21) & 1) == 0) {
label_04510e70:
          x = (PatreonEffects_NameEffectController_o *)((long)&x->klass + 1);
          lVar21 = lVar21 + 0x178;
          if ((long)iVar9 <= (long)x) {
            return;
          }
          pTVar12 = (textInfo->fields).characterInfo;
          if (pTVar12 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_04510f2c;
          goto label_04510e91;
        }
        uVar3 = *(uint *)((long)pTVar12->m_Items + lVar21 + -0x20);
        unaff_R14 = (long)(int)uVar3;
        uVar16 = *(uint *)((long)pTVar12->m_Items + lVar21 + -0xc);
        unaff_RBP = (ulong)(int)uVar16;
        uVar17 = (ulong)x & 0xffffffff;
        lStack_40 = 0x4510ebc;
        pPVar19 = pPStack_38;
        UVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
                           ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pPStack_38,
                            (int32_t)x,method_00);
        pTVar4 = (textInfo->fields).meshInfo;
        if (pTVar4 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_04510f2c;
        if (uVar3 < (uint)pTVar4->max_length) {
          pUVar5 = pTVar4->m_Items[unaff_R14].fields.colors32;
          if (pUVar5 != (UnityEngine_Color32_array *)0x0) {
            if (uVar16 < (uint)pUVar5->max_length) {
              iVar10 = UVar13.fields.rgba;
              (&pUVar5->m_Items[0].fields.rgba)[unaff_RBP] = iVar10;
              if (uVar16 + 1 < (uint)pUVar5->max_length) {
                (&pUVar5->m_Items[0].fields.rgba)[(int)(uVar16 + 1)] = iVar10;
                if (uVar16 + 2 < (uint)pUVar5->max_length) {
                  (&pUVar5->m_Items[0].fields.rgba)[(int)(uVar16 + 2)] = iVar10;
                  uVar16 = uVar16 + 3;
                  unaff_RBP = (ulong)uVar16;
                  if (uVar16 < (uint)pUVar5->max_length) {
                    method_00 = (MethodInfo *)(long)(int)uVar16;
                    (&pUVar5->m_Items[0].fields.rgba)[(long)method_00] = iVar10;
                    goto label_04510e70;
                  }
                }
              }
            }
            goto label_04510f27;
          }
          goto label_04510f2c;
        }
      }
label_04510f27:
      lStack_40 = 0x4510f2c;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04510f2c:
  lStack_40 = 0x4510f31;
  il2cpp_runtime_helper_022b2c90();
  uVar18 = uVar17;
  pPStack_48 = x;
  lStack_40 = unaff_R14;
  if (g_data_057aed89 == '\0') {
    uStack_68 = 0x4510f61;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    uStack_68 = 0x4510f6d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    uStack_68 = 0x4510f79;
    il2cpp_runtime_helper_023445d0(&"#");
    uStack_68 = 0x4510f85;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057aed89 = '\x01';
  }
  UStack_60.r = 0.0;
  UStack_60.g = 0.0;
  UStack_60.b = 0.0;
  UStack_60.a = 0.0;
  iVar11 = (int)uVar17;
  pSVar14 = "#FFFFFF";
  if (-1 < iVar11) {
    pTVar20 = (pPVar19->fields).text;
    if (pTVar20 == (TMPro_TMP_Text_o *)0x0) {
      uStack_68 = 0x4511012;
      il2cpp_runtime_helper_022b2c90();
      uStack_78 = uVar17 & 0xffffffff;
      pPStack_70 = pPVar19;
      uStack_68 = unaff_RBP;
      if (g_data_057aed8c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
        il2cpp_runtime_helper_023445d0();
        g_data_057aed8c = '\x01';
      }
      UStack_88.r = 0.0;
      UStack_88.g = 0.0;
      UStack_88.b = 0.0;
      UStack_88.a = 0.0;
      if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
        pTVar6 = pTVar20->klass;
        uVar1._0_1_ = (pTVar6->_2).rank;
        uVar1._1_1_ = (pTVar6->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar7 = (pTVar6->_1).interfaceOffsets;
          lVar21 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar21) == TypeInfo_ICollection_string) {
              ppIVar15 = &(&(pTVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar21)].methodPtr;
              goto label_045110c1;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar21);
        }
        ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pTVar20,TypeInfo_ICollection_string,0);
label_045110c1:
        iVar11 = (**ppIVar15)(pTVar20,(MethodInfo *)ppIVar15[1]);
        if ((int)uVar18 < iVar11) {
          pTVar6 = pTVar20->klass;
          uVar2._0_1_ = (pTVar6->_2).rank;
          uVar2._1_1_ = (pTVar6->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pTVar6->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar21) == TypeInfo_IList_string) {
                ppIVar15 = &(&(pTVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar21)].methodPtr;
                goto label_04511131;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar21);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pTVar20,TypeInfo_IList_string,0);
label_04511131:
          pSVar14 = (System_String_o *)(**ppIVar15)(pTVar20,uVar18 & 0xffffffff,(MethodInfo *)ppIVar15[1]);
          bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                            (pSVar14,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            *extraout_RDX_00 = UStack_88._0_8_;
            extraout_RDX_00[1] = UStack_88._8_8_;
          }
        }
      }
      return;
    }
    if (iVar11 < *(int *)&(pTVar20->fields).m_CancellationTokenSource) {
      uStack_68 = 0x4510fb6;
      pSVar14 = (System_String_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pTVar20,iVar11,MethodInfo_String_get_Item);
      uStack_68 = 0x4510fca;
      pSVar14 = System_String__Concat_3ae5ba0("#",pSVar14,(MethodInfo *)0x0);
    }
  }
  uStack_68 = 0x4510fe3;
  bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar14,(UnityEngine_Color_o *)&UStack_60,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    uVar23._0_4_ = 1.0;
    uVar23._4_4_ = 1.0;
    fVar22 = 1.0;
  }
  else {
    fVar22 = UStack_60.r;
    uVar23 = UStack_60._8_8_;
  }
  uStack_68 = 0x4511005;
  il2cpp_runtime_helper_03b428b0(fVar22,uVar23,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorFor
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, int32_t index, const MethodInfo* method);
// 0x4510f40

UnityEngine_Color32_o
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ColorFor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,int32_t index,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UnityEngine_Color32_o UVar7;
  UnityEngine_Color32_Fields UVar8;
  VirtualInvokeData *pVVar9;
  undefined4 extraout_var;
  ulong uVar10;
  System_Collections_Generic_List_string__o *__this_00;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  UnityEngine_Color_Fields UStack_50;
  ulong uStack_40;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGStack_38;
  UnityEngine_Color_Fields local_28;
  
  uVar10 = (ulong)(uint)index;
  if (g_data_057aed89 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&"#");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057aed89 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  pSVar6 = "#FFFFFF";
  if (-1 < index) {
    __this_00 = (__this->fields)._colors;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      auVar14 = il2cpp_runtime_helper_022b2c90();
      UVar8 = auVar14._0_8_;
      uStack_40 = (ulong)(uint)index;
      pGStack_38 = __this;
      if (g_data_057aed8c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
        UVar8 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_023445d0();
        g_data_057aed8c = '\x01';
      }
      UStack_50.r = 0.0;
      UStack_50.g = 0.0;
      UStack_50.b = 0.0;
      UStack_50.a = 0.0;
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar3 = __this_00->klass;
        uVar1._0_1_ = (pSVar3->_2).rank;
        uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pSVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_ICollection_string) {
              pVVar9 = &((System_Collections_Generic_List_object__VTable *)&pSVar3->vtable)->_0_Equals +
                       *(int *)((long)&pIVar4->offset + lVar11);
              goto label_045110c1;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar11);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_ICollection_string,0);
label_045110c1:
        UVar8 = (UnityEngine_Color32_Fields)(*pVVar9->methodPtr)(__this_00,pVVar9->method);
        if ((int)uVar10 < UVar8.rgba) {
          pSVar3 = __this_00->klass;
          uVar2._0_1_ = (pSVar3->_2).rank;
          uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar4 = (pSVar3->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IList_string) {
                pVVar9 = &((System_Collections_Generic_List_object__VTable *)&pSVar3->vtable)->_0_Equals +
                         *(int *)((long)&pIVar4->offset + lVar11);
                goto label_04511131;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar11);
          }
          pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IList_string,0);
label_04511131:
          pSVar6 = (System_String_o *)(*pVVar9->methodPtr)(__this_00,uVar10 & 0xffffffff,pVVar9->method);
          UVar8.rgba = UnityEngine_ColorUtility__TryParseHtmlString
                                 (pSVar6,(UnityEngine_Color_o *)&UStack_50,(MethodInfo *)0x0);
          UVar8.r = (char)extraout_var;
          UVar8.g = (char)((uint)extraout_var >> 8);
          UVar8.b = (char)((uint)extraout_var >> 0x10);
          UVar8.a = (char)((uint)extraout_var >> 0x18);
          if ((char)UVar8.rgba != '\0') {
            *auVar14._8_8_ = UStack_50._0_8_;
            auVar14._8_8_[1] = UStack_50._8_8_;
          }
        }
      }
      return (UnityEngine_Color32_o)UVar8;
    }
    if (index < (__this_00->fields)._size) {
      pSVar6 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_String_get_Item);
      pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
    }
  }
  bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar6,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    uVar13._0_4_ = 1.0;
    uVar13._4_4_ = 1.0;
    fVar12 = 1.0;
  }
  else {
    fVar12 = local_28.r;
    uVar13 = local_28._8_8_;
  }
  UVar7.fields = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_03b428b0(fVar12,uVar13,0);
  return (UnityEngine_Color32_o)UVar7.fields;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$StoreEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, System_String_o* type, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x450ef10

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,System_String_o *type,
               System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int32_t length;
  System_Collections_Generic_IList_string__c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar7;
  Il2CppMethodPointer vtableDispatch;
  undefined4 uVar8;
  int iVar9;
  bool_conflict bVar10;
  VirtualInvokeData *pVVar11;
  System_String_o *pSVar12;
  MethodInfo *method_00;
  void *pvVar13;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  char extraout_DL;
  MethodInfo *method_01;
  MethodInfo *pMVar14;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *method_02;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *method_03;
  long lVar15;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o **ppSVar16;
  
  if (g_data_057aed8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aed8a = '\x01';
  }
  (__this->fields)._gradientStops = (System_String_array *)type;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._gradientStops,type);
  if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
    (__this->fields)._previewEffectType = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._previewEffectType,0);
    return;
  }
  pSVar5 = colors->klass;
  uVar2._0_1_ = (pSVar5->_2).rank;
  uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar6 = (pSVar5->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_ICollection_string) {
        pVVar11 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar15);
        goto label_0450effb;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar15);
  }
  pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_0450effb:
  uVar8 = (*pVVar11->methodPtr)(colors,pVVar11->method);
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,uVar8);
  (__this->fields)._previewEffectType = pSVar12;
  ppSVar16 = &(__this->fields)._previewEffectType;
  il2cpp_runtime_helper_022b4080(ppSVar16,pSVar12);
  pMVar14 = (MethodInfo *)0x0;
label_0450f040:
  pSVar5 = colors->klass;
  uVar3._0_1_ = (pSVar5->_2).rank;
  uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar6 = (pSVar5->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_ICollection_string) {
        pVVar11 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar15);
        goto label_0450f093;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar15);
  }
  pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_0450f093:
  iVar9 = (*pVVar11->methodPtr)(colors,pVVar11->method);
  if ((long)iVar9 <= (long)pMVar14) {
    return;
  }
  pSVar12 = *ppSVar16;
  pSVar5 = colors->klass;
  uVar4._0_1_ = (pSVar5->_2).rank;
  uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
  if ((ulong)uVar4 != 0) {
    pIVar6 = (pSVar5->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IList_string) {
        method_00 = (MethodInfo *)(pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar15));
        goto label_0450f103;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar15);
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_IList_string,0);
label_0450f103:
  method_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)((ulong)pMVar14 & 0xffffffff);
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)colors;
  pvVar13 = (void *)(*method_00->methodPointer)(colors,method_02,method_00->virtualMethodPointer);
  if (pSVar12 != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)(ulong)*(uint *)&pSVar12[1].klass;
    if (method_00 <= pMVar14) goto label_0450f150;
    (&pSVar12[1].monitor)[(long)pMVar14] = pvVar13;
    il2cpp_runtime_helper_022b4080(&pSVar12[1].monitor + (long)pMVar14,pvVar13);
    pMVar14 = (MethodInfo *)((long)&pMVar14->methodPointer + 1);
    goto label_0450f040;
  }
  il2cpp_runtime_helper_022b2c90();
label_0450f150:
  il2cpp_runtime_helper_022b2ca0();
  if (method_02 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    method_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                **(ulong **)(g_data_057b9c00 + 0xb8);
  }
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    (__this_00->fields)._initialValue = (System_String_o *)method_02;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._initialValue);
    if ((char)(__this_00->fields)._attached != '\0') {
      document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                           ((__this_00->fields)._initialValue,(MethodInfo *)method_02);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                (__this_00,document,1,method_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_03 = method_02;
  if (g_data_057aed80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed80 = '\x01';
  }
  __this_01 = method_02;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_4410c10
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)method_02,
             (MethodInfo *)method_03);
  if (method_02 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    method_03 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                (method_02->fields).m_CachedPtr;
    (__this_00->fields)._lastText = (System_String_o *)method_03;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._lastText);
    __this_02 = (__this_00->fields)._colors;
    __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
    if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_02->fields)._size;
      (__this_02->fields)._size = 0;
      if (0 < length) {
        method_03 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        System_Array__Clear((System_Array_o *)(__this_02->fields)._items,0,length,(MethodInfo *)0x0);
        __this_02 = (__this_00->fields)._colors;
        __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) goto label_0450f31d;
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Collections_Generic_IEnumerable_T__o *)(method_02->fields).m_CancellationTokenSource,
                 MethodInfo_Void_AddRange);
      if (extraout_DL != '\0') {
        x = (__this_00->fields)._input;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                    (__this_00,(System_String_o *)(method_02->fields).m_CachedPtr,method_01);
        }
      }
      if (g_data_057aed7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed7f = '\x01';
      }
      pTVar7 = (__this_00->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_03 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pTVar7 = (__this_00->fields)._text;
      __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar7->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar7,0,0,(pTVar7->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
label_0450f31d:
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this_01,(MethodInfo *)method_03);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyStoredEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450f640

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **ppPVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Object_o *pUVar3;
  code *vtableDispatch;
  uint in_EAX;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar5;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo_255A020 **in_RCX;
  bool_conflict *pbVar6;
  TMPro_TMP_Text_o *pTVar7;
  long *plVar8;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (g_data_057aed8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed8b = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  pTVar7 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)(__this->fields)._gradientStops,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  bVar4 = PatreonEffects_NameEffectPresets__TryResolve
                    ((System_String_o *)(__this->fields)._gradientStops,(int32_t *)((long)&uStack_28 + 4),
                     (MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pPVar5 = (__this->fields)._effectPreview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppPVar1 = &(__this->fields)._effectPreview;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pTVar7 = (__this->fields)._text;
    if ((pTVar7 == (TMPro_TMP_Text_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar7,(MethodInfo *)0x0)
       , __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_0450f809;
    in_RCX = &MethodInfo_NameEffectController_AddComponent_NameEffectController;
    pPVar5 = (PatreonEffects_NameEffectController_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *ppPVar1 = pPVar5;
    il2cpp_runtime_helper_022b4080(ppPVar1);
  }
  pTVar7 = (TMPro_TMP_Text_o *)0x0;
  if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(*ppPVar1,(MethodInfo *)0x0);
    pTVar7 = (TMPro_TMP_Text_o *)(ulong)uStack_28._4_4_;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_28._4_4_,(MethodInfo *)0x0);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,0,
                 &(settings->fields).gradientA,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,1,
                 &(settings->fields).gradientB,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,2,
                 &(settings->fields).gradientC,(MethodInfo *)in_RCX);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
                ((System_Collections_Generic_IList_string__o *)(__this->fields)._previewEffectType,3,
                 &(settings->fields).gradientD,(MethodInfo *)in_RCX);
      pTVar2 = (__this->fields)._text;
      pTVar7 = (TMPro_TMP_Text_o *)0x0;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar2->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
        pTVar7 = (TMPro_TMP_Text_o *)0x0;
        if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppPVar1,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0450f809:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7b = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(pTVar7->fields).m_VertsDirty;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pbVar6 = &(pTVar7->fields).m_VertsDirty;
  pPVar5 = *(PatreonEffects_NameEffectController_o **)pbVar6;
  if (pPVar5 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__Clear(pPVar5,(MethodInfo *)0x0);
    pUVar3 = *(UnityEngine_Object_o **)pbVar6;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    (pTVar7->fields).m_VertsDirty = 0;
    (pTVar7->fields).m_MaterialDirty = 0;
    il2cpp_runtime_helper_022b4080(pbVar6,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed7f = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(pPVar5->fields).popGradientHooked;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  plVar8 = *(long **)&(pPVar5->fields).popGradientHooked;
  if (plVar8 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar8 + 0x7d8);
    (*vtableDispatch)(plVar8,0,0,*(undefined8 *)(*plVar8 + 0x7e0),vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)plVar8[8],(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if ((Gisketch_Aottg2UI_State_GisketchUIState_o *)plVar8[0xb] ==
        (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    Gisketch_Aottg2UI_State_GisketchUIState__GetBool
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)plVar8[0xb],(System_String_o *)plVar8[8],
               (uint)*(byte *)((long)plVar8 + 0x92),(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPreviewColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor (System_Collections_Generic_IList_string__o* colors, int32_t index, UnityEngine_Color_o* target, const MethodInfo* method);
// 0x4511020

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyPreviewColor
               (System_Collections_Generic_IList_string__o *colors,int32_t index,UnityEngine_Color_o *target,
               MethodInfo *method)

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
  
  if (g_data_057aed8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    il2cpp_runtime_helper_023445d0();
    g_data_057aed8c = '\x01';
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
          goto label_045110c1;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar8);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_045110c1:
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
            goto label_04511131;
          }
          lVar8 = lVar8 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar8);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_IList_string,0);
label_04511131:
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
// 0x450fc10

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestoreSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t length;
  int iVar2;
  UnityEngine_Object_c *x;
  System_Array_o *array;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar4;
  TMPro_TMP_InputField_o *pTVar5;
  System_String_o *b;
  undefined8 uVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  long lVar12;
  undefined8 in_RAX;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  System_Object_array *call;
  System_Object_array *method_00;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar15;
  MethodInfo *in_RCX;
  float fVar16;
  UnityEngine_Object_o *unaff_RBX;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x_00;
  int index;
  ulong unaff_RBP;
  long *plVar17;
  TMPro_TMP_InputField_o *pTVar18;
  System_Object_array *method_01;
  MethodInfo *pMVar19;
  System_String_o *pSVar20;
  System_Object_array *__this_02;
  System_Object_array *__this_03;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar21;
  ulong unaff_R14;
  uint uVar22;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar23 [16];
  
  do {
    *(ulong *)((long)register0x00000020 + -8) = unaff_R14;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x_00 = *(System_Collections_Generic_List_object__o **)
            &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc5b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pTVar18 = *(TMPro_TMP_InputField_o **)
               &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar18 != (TMPro_TMP_InputField_o *)0x0) {
      fVar11 = (((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar18,(int32_t)fVar11,(MethodInfo *)0x0);
      pTVar18 = *(TMPro_TMP_InputField_o **)
                 &(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar18 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar18,(int32_t)(((TMPro_TMP_InputField_o *)__this)->fields).m_Colors.fields.
                                    m_SelectedColor.fields.r,(MethodInfo *)0x0);
        return;
      }
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fca1;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x20) = unaff_RBP;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x28) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x30) =
         __this;
    *(MethodInfo ***)((long)register0x00000020 + -0x38) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x40) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x48) = x_00;
    *(undefined8 *)((long)register0x00000020 + -0x50) = uVar13;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)method_00->m_Items + 0x71) == '\0') {
      return;
    }
    __this_02 = (System_Object_array *)method_00->m_Items[1];
    if (__this_02 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
      x_00 = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar9 = *(uint *)(method_00->m_Items + 0xc);
        unaff_RBP = (ulong)uVar9;
        uVar10 = (__this_01->fields)._size;
        uVar22 = (int)__this_02->max_length + uVar9;
        if ((int)uVar10 < (int)uVar22) {
          uVar22 = uVar10;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar22;
        if ((int)uVar9 < (int)uVar22) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)unaff_RBP;
            iVar2 = *(int *)(method_00->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fd62;
            pIVar14 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index - iVar2,
                                 MethodInfo_String_get_Item);
            x_00 = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar14,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            unaff_RBP = (ulong)(index + 1U);
            if ((int)uVar22 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
            __this_02 = (System_Object_array *)method_00->m_Items[1];
            x_00 = __this_01;
          } while (__this_02 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x_00 = (System_Collections_Generic_List_object__o *)method_00->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fdda;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pIVar14 = method_00->m_Items[9];
          __this_02 = (System_Object_array *)0x0;
          if (pIVar14 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar14->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar14,0,0,pIVar14->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x450fe21;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x58) = unaff_RBP;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x60) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x68) = method_00;
    *(MethodInfo ***)((long)register0x00000020 + -0x70) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x78) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x80) = x_00;
    *(undefined8 *)((long)register0x00000020 + -0x88) = uVar13;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_02->m_Items[8];
    plVar17 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450feff;
    __this_03 = call;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04510010:
      plVar17 = &TypeInfo_Object;
      pUVar3 = (UnityEngine_Object_o *)__this_02->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510032;
      bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                   (MethodInfo *)method_00);
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar4,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar14 = __this_02->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510049;
      method_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510063;
      method_01 = __this_02;
      __this_03 = method_00;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar14 != (Il2CppObject *)0x0) {
        pMVar19 = pIVar14->klass->vtable[0x4f].method;
        vtableDispatch = pIVar14->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x451007e;
        (*vtableDispatch)(pIVar14,method_00,pMVar19);
        goto label_0451007e;
      }
    }
    else if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
      method_00 = (System_Object_array *)__this_02->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff44;
      method_01 = __this_02;
      __this_03 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (method_00 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff62;
        method_01 = call;
        __this_03 = method_00;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)method_00,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
          method_00 = (System_Object_array *)__this_02->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar17 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ffa1;
          method_01 = __this_02;
          __this_03 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (method_00 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ffc0;
            method_01 = call;
            __this_03 = method_00;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)method_00,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = __this_02->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x450fff1;
              method_01 = __this_02;
              __this_03 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              method_00 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0x90) = plVar17;
    *(System_Object_array **)((long)register0x00000020 + -0x98) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0xa0) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_03->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                 (MethodInfo *)method_01);
    }
    pTVar18 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451015c;
    unaff_R15 = pTVar18;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_03->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_03->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar20 = (System_String_o *)__this_03->m_Items[4];
      pMVar19 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510189;
      bVar8 = System_String__IsNullOrEmpty(pSVar20,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
        if (pGVar4 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar1 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
        pMVar19 = (MethodInfo *)__this_03->m_Items[4];
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510265;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar4,(System_String_o *)pMVar19,(uint)bVar1,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
      }
      else {
        cVar7 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
      }
      if (cVar7 == '\0') {
        return;
      }
      pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar19 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
        pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar18 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar19 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          method_00 = (System_Object_array *)(ulong)uVar10;
          pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar19 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
            pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45101fb;
              uVar22 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar22) {
                uVar9 = uVar22;
              }
              pTVar18 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,uVar10,
                         uVar9,in_RCX);
              if ((*(int *)(__this_03->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_03->m_Items + 100) <= *(int *)(__this_03->m_Items + 0xc))) {
                __this_03->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar19 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510228;
              bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              if (*(int *)(__this_03->m_Items + 0xd) == *(int *)(__this_03->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)__this_03->m_Items + 100);
                if (*(int32_t *)((long)__this_03->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)__this_03->m_Items + 100);
              }
              in_RCX = (MethodInfo *)(ulong)uVar9;
              *(int *)(__this_03->m_Items + 0xd) = *(int *)(__this_03->m_Items + 0xc);
              *(uint *)((long)__this_03->m_Items + 0x6c) = uVar9;
              *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,pMVar19);
              pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar20 = (System_String_o *)__this_03->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xe0),
                           (System_String_o *)((long)register0x00000020 + -0xc0),
                           (UnityEngine_GameObject_o *)pSVar20,node,(MethodInfo *)0x0);
                pSVar20 = (System_String_o *)__this_03->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0xd0) =
                     *(undefined8 *)((long)register0x00000020 + -0xb0);
                *(undefined8 *)((long)register0x00000020 + -200) =
                     *(undefined8 *)((long)register0x00000020 + -0xa8);
                *(undefined8 *)((long)register0x00000020 + -0xe0) =
                     *(undefined8 *)((long)register0x00000020 + -0xc0);
                *(undefined8 *)((long)register0x00000020 + -0xd8) =
                     *(undefined8 *)((long)register0x00000020 + -0xb8);
                *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xe0),pSVar20,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x4510318;
    auVar23 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0xe8) = pTVar18;
    *(System_Object_array **)((long)register0x00000020 + -0xf0) = __this_02;
    *(System_Object_array **)((long)register0x00000020 + -0xf8) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0x100) = __this_03;
    *(long *)((long)register0x00000020 + -0x108) = auVar23._0_8_;
    unaff_R14 = auVar23._8_8_ & 0xffffffff;
    fVar21 = auVar23._8_4_;
    fVar11 = SUB84(pMVar19,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar20 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x110) = 0x4510373;
    unaff_RBX = pUVar3;
    bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    lVar12 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar12 != 0) {
      in_RCX = (MethodInfo *)0x0;
      if (*(long *)(lVar12 + 0x220) != 0) {
        fVar15 = *(float *)(*(long *)(lVar12 + 0x220) + 0x10);
        fVar16 = fVar11;
        if ((int)fVar15 <= (int)fVar11) {
          fVar16 = fVar15;
        }
        if ((int)fVar11 < 0) {
          fVar16 = 0.0;
        }
        if ((int)fVar21 < (int)fVar15) {
          fVar15 = fVar21;
        }
        if ((int)fVar21 < 0) {
          fVar15 = 0.0;
        }
        if (fVar16 == fVar15) {
          if (*(char *)(lVar12 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar11 = fVar15;
        if ((int)fVar16 <= (int)fVar15) {
          fVar11 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar11;
        if ((int)fVar15 <= (int)fVar16) {
          fVar15 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar15;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x110) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x110) = pUVar3;
    b = (System_String_o *)unaff_RBX[2].fields.m_CachedPtr;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x4510405;
    bVar8 = System_String__op_Equality(pSVar20,b,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pSVar20 = (System_String_o *)unaff_RBX[2].fields.m_CachedPtr;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x4510414;
    bVar8 = System_String__IsNullOrEmpty(pSVar20,(MethodInfo *)0x0);
    uVar13 = CONCAT44(extraout_var,bVar8);
    if ((char)bVar8 == '\0') {
      pGVar4 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_RBX[3].fields.m_CachedPtr;
      if (pGVar4 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar1 = *(undefined1 *)((long)&unaff_RBX[6].klass + 2);
        pSVar20 = (System_String_o *)unaff_RBX[2].fields.m_CachedPtr;
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0x451043e;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar4,pSVar20,(uint)bVar1,(MethodInfo *)0x0)
        ;
        uVar13 = CONCAT44(extraout_var_00,bVar8);
        cVar7 = (char)bVar8;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar7 = *(undefined1 *)((long)&unaff_RBX[6].klass + 2);
joined_r0x04510440:
      if (cVar7 != '\0') {
        return;
      }
    }
    uVar6 = *(undefined8 *)((long)register0x00000020 + -0x110);
    *(ulong *)((long)register0x00000020 + -0x110) = (ulong)pMVar19 & 0xffffffff;
    *(undefined8 *)((long)register0x00000020 + -0x118) = uVar6;
    *(undefined8 *)((long)register0x00000020 + -0x120) = uVar13;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    x = unaff_RBX[4].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fb46;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    uVar9 = *(uint *)((long)&unaff_RBX[5].monitor + 4);
    unaff_RBP = (ulong)uVar9;
    __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX[4].klass;
    if ((int)uVar9 < 0) {
      if ((TMPro_TMP_InputField_o *)__this != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition((TMPro_TMP_InputField_o *)__this,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX[4].klass;
        if ((TMPro_TMP_InputField_o *)__this != (TMPro_TMP_InputField_o *)0x0) {
          unaff_RBP = (ulong)uVar9;
          lVar12 = *(long *)&(((TMPro_TMP_InputField_o *)__this)->fields).m_SelectionColor.fields.a;
          if (lVar12 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            unaff_RBP = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if (((TMPro_TMP_InputField_o *)__this != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar12 = *(long *)&(((TMPro_TMP_InputField_o *)__this)->fields).m_SelectionColor.fields.a,
            lVar12 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar12 + 0x10) < (int)unaff_RBP) {
        unaff_RBP = (ulong)*(uint *)(lVar12 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition
                ((TMPro_TMP_InputField_o *)__this,(int32_t)unaff_RBP,(MethodInfo *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)unaff_RBX[4].klass;
      if ((TMPro_TMP_InputField_o *)__this != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  ((TMPro_TMP_InputField_o *)__this,(int32_t)unaff_RBP,(MethodInfo *)0x0);
        *(undefined4 *)&unaff_RBX[5].monitor = 0xffffffff;
        *(undefined4 *)((long)&unaff_RBX[5].monitor + 4) = 0xffffffff;
        *(undefined4 *)&unaff_RBX[5].fields.m_CachedPtr = 0xffffffff;
        *(undefined4 *)((long)&unaff_RBX[5].fields.m_CachedPtr + 4) = 0xffffffff;
        lVar12 = unaff_RBX[1].fields.m_CachedPtr;
        if (lVar12 != 0) {
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          length = *(int32_t *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          if (0 < length) {
            array = *(System_Array_o **)(lVar12 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fbf8;
            System_Array__Clear(array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&unaff_RBX[6].klass + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x450fc0f;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x450faf0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  int iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *array;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_Events_UnityEvent_T0__T1__T2__o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *x_00;
  System_String_o *b;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined8 in_RAX;
  long lVar12;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  System_Object_array *call;
  System_Object_array *method_00;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar15;
  MethodInfo *in_RCX;
  float fVar16;
  undefined8 unaff_RBX;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o *x_01;
  int index;
  ulong unaff_RBP;
  ulong uVar17;
  long *plVar18;
  TMPro_TMP_InputField_o *pTVar19;
  System_Object_array *method_01;
  MethodInfo *pMVar20;
  System_String_o *pSVar21;
  System_Object_array *__this_02;
  System_Object_array *__this_03;
  MethodInfo_2A669C0 **unaff_R12;
  MethodInfo **unaff_R13;
  float fVar22;
  ulong unaff_R14;
  uint uVar23;
  TMPro_TMP_InputField_o *unaff_R15;
  undefined1 auVar24 [16];
  
  do {
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aed8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8e = '\x01';
    }
    pTVar19 = (__this->fields)._input;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb3a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb46;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    uVar9 = (__this->fields)._selectionEnd;
    uVar17 = (ulong)uVar9;
    pTVar19 = (__this->fields)._input;
    if ((int)uVar9 < 0) {
      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fb86;
        uVar9 = TMPro_TMP_InputField__get_caretPosition(pTVar19,(MethodInfo *)0x0);
        pTVar19 = (__this->fields)._input;
        if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
          uVar17 = (ulong)uVar9;
          lVar12 = *(long *)&(pTVar19->fields).m_SelectionColor.fields.a;
          if (lVar12 != 0) {
            if (-1 < (int)uVar9) goto label_0450fba1;
            uVar17 = 0;
            goto label_0450fba9;
          }
        }
      }
    }
    else if ((pTVar19 != (TMPro_TMP_InputField_o *)0x0) &&
            (lVar12 = *(long *)&(pTVar19->fields).m_SelectionColor.fields.a, lVar12 != 0)) {
label_0450fba1:
      if ((int)*(uint *)(lVar12 + 0x10) < (int)uVar17) {
        uVar17 = (ulong)*(uint *)(lVar12 + 0x10);
      }
label_0450fba9:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbb2;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar19,(int32_t)uVar17,(MethodInfo *)0x0);
      pTVar19 = (__this->fields)._input;
      if (pTVar19 != (TMPro_TMP_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbc4;
        TMPro_TMP_InputField__set_selectionStringFocusPosition(pTVar19,(int32_t)uVar17,(MethodInfo *)0x0);
        (__this->fields)._selectionStart = -1;
        (__this->fields)._selectionEnd = -1;
        (__this->fields)._openedStart = -1;
        (__this->fields)._openedEnd = -1;
        pSVar4 = (__this->fields)._previewColors;
        if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          if (0 < length) {
            array = (pSVar4->fields)._items;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fbf8;
            System_Array__Clear((System_Array_o *)array,0,length,(MethodInfo *)0x0);
          }
          *(undefined1 *)((long)&(__this->fields)._attached + 1) = 0;
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x450fc0f;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x20) = unaff_R14;
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x28) =
         __this;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar13;
    if (g_data_057aed8d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed8d = '\x01';
    }
    x_01 = *(System_Collections_Generic_List_object__o **)
            &(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc4f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc5b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
      fVar11 = (pTVar19->fields).m_Colors.fields.m_PressedColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fc7e;
      TMPro_TMP_InputField__set_selectionStringAnchorPosition(pTVar5,(int32_t)fVar11,(MethodInfo *)0x0);
      pTVar5 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_Colors.fields.m_NormalColor.fields.a;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__set_selectionStringFocusPosition
                  (pTVar5,(int32_t)(pTVar19->fields).m_Colors.fields.m_SelectedColor.fields.r,
                   (MethodInfo *)0x0);
        return;
      }
    }
    method_00 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x450fca1;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x38) = uVar17;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x40) = unaff_R15;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x48) = pTVar19;
    *(MethodInfo ***)((long)register0x00000020 + -0x50) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x58) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x60) = x_01;
    *(undefined8 *)((long)register0x00000020 + -0x68) = uVar13;
    if (g_data_057aed87 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcd3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fcdf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fceb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057aed87 = '\x01';
    }
    if (*(undefined1 *)((long)method_00->m_Items + 0x71) == '\0') {
      return;
    }
    __this_02 = (System_Object_array *)method_00->m_Items[1];
    if (__this_02 != (System_Object_array *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
      x_01 = (System_Collections_Generic_List_object__o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        uVar9 = *(uint *)(method_00->m_Items + 0xc);
        uVar17 = (ulong)uVar9;
        uVar10 = (__this_01->fields)._size;
        uVar23 = (int)__this_02->max_length + uVar9;
        if ((int)uVar10 < (int)uVar23) {
          uVar23 = uVar10;
        }
        unaff_R15 = (TMPro_TMP_InputField_o *)(ulong)uVar23;
        if ((int)uVar9 < (int)uVar23) {
          unaff_R13 = &MethodInfo_Void_set_Item;
          do {
            index = (int)uVar17;
            iVar3 = *(int *)(method_00->m_Items + 0xc);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd62;
            pIVar14 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index - iVar3,
                                 MethodInfo_String_get_Item);
            x_01 = (System_Collections_Generic_List_object__o *)0x0;
            unaff_R12 = (MethodInfo_2A669C0 **)&MethodInfo_String_get_Item;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fd7c;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_List_object___set_Item
                      (__this_01,index,pIVar14,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
            uVar17 = (ulong)(index + 1U);
            if ((int)uVar23 <= (int)(index + 1U)) goto label_0450fd96;
            __this_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[0];
            __this_02 = (System_Object_array *)method_00->m_Items[1];
            x_01 = __this_01;
          } while (__this_02 != (System_Object_array *)0x0);
        }
        else {
label_0450fd96:
          if (g_data_057aed7f == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdab;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057aed7f = '\x01';
          }
          x_01 = (System_Collections_Generic_List_object__o *)method_00->m_Items[9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdce;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fdda;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pIVar14 = method_00->m_Items[9];
          __this_02 = (System_Object_array *)0x0;
          if (pIVar14 != (Il2CppObject *)0x0) {
            vtableDispatch = pIVar14->klass->vtable[0x6a].methodPtr;
            (*vtableDispatch)(pIVar14,0,0,pIVar14->klass->vtable[0x6a].method,vtableDispatch);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x450fe21;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x70) = uVar17;
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x78) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x80) = method_00;
    *(MethodInfo ***)((long)register0x00000020 + -0x88) = unaff_R13;
    *(MethodInfo_2A669C0 ***)((long)register0x00000020 + -0x90) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x98) = x_01;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar13;
    if (g_data_057aed7c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe57;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyTextColors);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe7b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe87;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextChanged);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe93;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnTextSelection);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fe9f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feb7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string_int_int);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fec3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fecf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
      g_data_057aed7c = '\x01';
    }
    call = (System_Object_array *)__this_02->m_Items[8];
    plVar18 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fef3;
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (System_Object_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450feff;
    __this_03 = call;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04510010:
      plVar18 = &TypeInfo_Object;
      x = (UnityEngine_Object_o *)__this_02->m_Items[9];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510026;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (System_Object_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510032;
      bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
label_0451007e:
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510086;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                  ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_02,
                   (MethodInfo *)method_00);
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_02->m_Items[7];
        if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451009e;
          value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100b8;
          System_Action_object____ctor();
          Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar6,value,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      pIVar14 = __this_02->m_Items[9];
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510049;
      method_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510063;
      method_01 = __this_02;
      __this_03 = method_00;
      System_Action_object____ctor();
      call = (System_Object_array *)0x0;
      if (pIVar14 != (Il2CppObject *)0x0) {
        pMVar20 = pIVar14->klass->vtable[0x4f].method;
        vtableDispatch = pIVar14->klass->vtable[0x4f].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x451007e;
        (*vtableDispatch)(pIVar14,method_00,pMVar20);
        goto label_0451007e;
      }
    }
    else if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
      method_00 = (System_Object_array *)__this_02->m_Items[8][0x1e].klass;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff2a;
      call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff44;
      method_01 = __this_02;
      __this_03 = call;
      UnityEngine_Events_UnityAction_object____ctor();
      if (method_00 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff62;
        method_01 = call;
        __this_03 = method_00;
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)method_00,
                   (UnityEngine_Events_UnityAction_T0__o *)call,MethodInfo_Void_RemoveListener);
        if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
          method_00 = (System_Object_array *)__this_02->m_Items[8][0x1d].klass;
          unaff_R13 = (MethodInfo **)&TypeInfo_UnityAction_string_int_int;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ff86;
          call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
          plVar18 = &MethodInfo_Void_OnTextSelection;
          in_RCX = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffa1;
          method_01 = __this_02;
          __this_03 = call;
          UnityEngine_Events_UnityAction_object__int__int____ctor();
          if (method_00 != (System_Object_array *)0x0) {
            unaff_R12 = &MethodInfo_Void_RemoveListener;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffc0;
            method_01 = call;
            __this_03 = method_00;
            UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)method_00,
                       (UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
            if (__this_02->m_Items[8] != (Il2CppObject *)0x0) {
              __this_00 = __this_02->m_Items[8][0x1d].monitor;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450ffdd;
              call = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string_int_int);
              in_RCX = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x450fff1;
              method_01 = __this_02;
              __this_03 = call;
              UnityEngine_Events_UnityAction_object__int__int____ctor();
              method_00 = (System_Object_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_T0__T1__T2__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4510009;
                UnityEngine_Events_UnityEvent_object__int__int___RemoveListener
                          (__this_00,(UnityEngine_Events_UnityAction_T0__T1__T2__o *)call,MethodInfo_Void_RemoveListener);
                goto label_04510010;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x45100e7;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0xa8) = plVar18;
    *(System_Object_array **)((long)register0x00000020 + -0xb0) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0xb8) = call;
    if (g_data_057aed7d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510110;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451011c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed7d = '\x01';
    }
    if ((char)*(bool_conflict *)(__this_03->m_Items + 0xe) == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510134;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach
                ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,
                 (MethodInfo *)method_01);
    }
    pTVar19 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510150;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451015c;
    unaff_R15 = pTVar19;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if ((TMPro_TMP_InputField_o *)__this_03->m_Items[8] != (TMPro_TMP_InputField_o *)0x0) {
      if (*(char *)&(((TMPro_TMP_InputField_o *)__this_03->m_Items[8])->fields).m_Mesh == '\0') {
        return;
      }
      pSVar21 = (System_String_o *)__this_03->m_Items[4];
      pMVar20 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510189;
      bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pGVar6 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03->m_Items[7];
        if (pGVar6 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          return;
        }
        bVar2 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
        pMVar20 = (MethodInfo *)__this_03->m_Items[4];
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510265;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (pGVar6,(System_String_o *)pMVar20,(uint)bVar2,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
      }
      else {
        cVar7 = *(undefined1 *)((long)__this_03->m_Items + 0x72);
      }
      if (cVar7 == '\0') {
        return;
      }
      pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
      unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        pMVar20 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101b2;
        uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
        pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
        unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
          pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
          pMVar20 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101c8;
          uVar10 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
          if ((int)uVar9 <= (int)uVar10) {
            uVar10 = uVar9;
          }
          method_00 = (System_Object_array *)(ulong)uVar10;
          pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
          unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
          if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
            pMVar20 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101e5;
            uVar9 = TMPro_TMP_InputField__get_selectionStringAnchorPosition(pTVar5,(MethodInfo *)0x0);
            pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
            unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
            if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45101fb;
              uVar23 = TMPro_TMP_InputField__get_selectionStringFocusPosition(pTVar5,(MethodInfo *)0x0);
              if ((int)uVar9 < (int)uVar23) {
                uVar9 = uVar23;
              }
              pTVar19 = (TMPro_TMP_InputField_o *)(ulong)uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451020d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetSelection
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,uVar10,
                         uVar9,in_RCX);
              if ((*(int *)(__this_03->m_Items + 0xc) < 0) ||
                 (*(int32_t *)((long)__this_03->m_Items + 100) <= *(int *)(__this_03->m_Items + 0xc))) {
                __this_03->m_Items[0xd] = (Il2CppObject *)0xffffffffffffffff;
                return;
              }
              pMVar20 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510228;
              bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              if (*(int *)(__this_03->m_Items + 0xd) == *(int *)(__this_03->m_Items + 0xc)) {
                uVar9 = *(int32_t *)((long)__this_03->m_Items + 100);
                if (*(int32_t *)((long)__this_03->m_Items + 0x6c) == uVar9) {
                  return;
                }
              }
              else {
                uVar9 = *(int32_t *)((long)__this_03->m_Items + 100);
              }
              in_RCX = (MethodInfo *)(ulong)uVar9;
              *(int *)(__this_03->m_Items + 0xd) = *(int *)(__this_03->m_Items + 0xc);
              *(uint *)((long)__this_03->m_Items + 0x6c) = uVar9;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451029d;
              Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__CapturePreviewColors
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)__this_03,pMVar20);
              pTVar5 = (TMPro_TMP_InputField_o *)__this_03->m_Items[8];
              unaff_R15 = (TMPro_TMP_InputField_o *)0x0;
              if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
                pSVar21 = (System_String_o *)__this_03->m_Items[3];
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102b1;
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -200) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102d3;
                Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),
                           (System_String_o *)((long)register0x00000020 + -0xd8),
                           (UnityEngine_GameObject_o *)pSVar21,node,(MethodInfo *)0x0);
                pSVar21 = (System_String_o *)__this_03->m_Items[3];
                if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x45102ef;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0xe8) =
                     *(undefined8 *)((long)register0x00000020 + -200);
                *(undefined8 *)((long)register0x00000020 + -0xe0) =
                     *(undefined8 *)((long)register0x00000020 + -0xc0);
                *(undefined8 *)((long)register0x00000020 + -0xf8) =
                     *(undefined8 *)((long)register0x00000020 + -0xd8);
                *(undefined8 *)((long)register0x00000020 + -0xf0) =
                     *(undefined8 *)((long)register0x00000020 + -0xd0);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x451030e;
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
                          ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                           *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)
                            ((long)register0x00000020 + -0xf8),pSVar21,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4510318;
    auVar24 = il2cpp_runtime_helper_022b2c90();
    *(TMPro_TMP_InputField_o **)((long)register0x00000020 + -0x100) = pTVar19;
    *(System_Object_array **)((long)register0x00000020 + -0x108) = __this_02;
    *(System_Object_array **)((long)register0x00000020 + -0x110) = method_00;
    *(System_Object_array **)((long)register0x00000020 + -0x118) = __this_03;
    *(long *)((long)register0x00000020 + -0x120) = auVar24._0_8_;
    unaff_R14 = auVar24._8_8_ & 0xffffffff;
    fVar22 = auVar24._8_4_;
    unaff_RBP = (ulong)pMVar20 & 0xffffffff;
    fVar11 = SUB84(pMVar20,0);
    if (g_data_057aed85 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510344;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed85 = '\x01';
    }
    x_00 = *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)
            &(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510367;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x4510373;
    __this = x_00;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    lVar12 = *(long *)&(unaff_R15->fields).m_Colors.fields.m_NormalColor.fields.a;
    if (lVar12 != 0) {
      in_RCX = (MethodInfo *)0x0;
      if (*(long *)(lVar12 + 0x220) != 0) {
        fVar15 = *(float *)(*(long *)(lVar12 + 0x220) + 0x10);
        fVar16 = fVar11;
        if ((int)fVar15 <= (int)fVar11) {
          fVar16 = fVar15;
        }
        if ((int)fVar11 < 0) {
          fVar16 = 0.0;
        }
        if ((int)fVar22 < (int)fVar15) {
          fVar15 = fVar22;
        }
        if ((int)fVar22 < 0) {
          fVar15 = 0.0;
        }
        if (fVar16 == fVar15) {
          if (*(char *)(lVar12 + 0x270) == '\0') {
            return;
          }
          *(undefined8 *)&(unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = 0xffffffffffffffff;
          return;
        }
        fVar11 = fVar15;
        if ((int)fVar16 <= (int)fVar15) {
          fVar11 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_PressedColor.fields.a = fVar11;
        if ((int)fVar15 <= (int)fVar16) {
          fVar15 = fVar16;
        }
        (unaff_R15->fields).m_Colors.fields.m_SelectedColor.fields.r = fVar15;
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x45103ea;
    il2cpp_runtime_helper_022b2c90();
    *(Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o **)((long)register0x00000020 + -0x128) =
         x_00;
    b = (__this->fields)._colorsEnabledKey;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x4510405;
    bVar8 = System_String__op_Equality(pSVar21,b,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pSVar21 = (__this->fields)._colorsEnabledKey;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x4510414;
    bVar8 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
    in_RAX = CONCAT44(extraout_var,bVar8);
    if ((char)bVar8 == '\0') {
      pGVar6 = (__this->fields)._state;
      if (pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        bVar2 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
        pSVar21 = (__this->fields)._colorsEnabledKey;
        in_RCX = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x130) = 0x451043e;
        bVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(pGVar6,pSVar21,(uint)bVar2,(MethodInfo *)0x0)
        ;
        in_RAX = CONCAT44(extraout_var_00,bVar8);
        cVar7 = (char)bVar8;
        goto joined_r0x04510440;
      }
    }
    else {
      cVar7 = *(undefined1 *)((long)&(__this->fields)._attached + 2);
joined_r0x04510440:
      if (cVar7 != '\0') {
        return;
      }
    }
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x128);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_253D000* method);
// 0x263d000

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_253D000 *method)

{
  int iVar1;
  uint uVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_Type_o *type;
  undefined8 uVar5;
  System_RuntimeTypeHandle_Fields *pSVar6;
  System_Type_o *pSVar7;
  long lVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  ulong unaff_RBX;
  System_String_o *pSVar12;
  System_Type_o *pSVar13;
  System_RuntimeTypeHandle_o handle;
  undefined8 in_R8;
  undefined8 in_R9;
  
  if ((method->rgctx_data == (MethodInfo_253D000_RGCTXs *)0x0) &&
     (il2cpp_runtime_helper_023445d0(&TypeInfo_Object), method->rgctx_data == (MethodInfo_253D000_RGCTXs *)0x0)) {
    il2cpp_runtime_helper_02300a20(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = (System_String_o *)0x0;
  type = (System_Type_o *)root;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (Il2CppObject *)(System_Type_o *)0x0;
  }
  if (root == (UnityEngine_Transform_o *)0x0) {
label_0263d15c:
    il2cpp_runtime_helper_022b2c90();
    pSVar4 = (System_Object_array *)root;
  }
  else {
    pSVar12 = (System_String_o *)0x1;
    type = (System_Type_o *)root;
    pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,1,
                        (MethodInfo_24E85B0 *)
                        method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_);
    if (pSVar4 == (System_Object_array *)0x0) goto label_0263d15c;
    if ((int)pSVar4->max_length < 1) {
      return (Il2CppObject *)(System_Type_o *)0x0;
    }
    unaff_RBX = 0;
    if ((pSVar4->max_length & 0xffffffff) != 0) {
      do {
        pSVar13 = (System_Type_o *)pSVar4->m_Items[unaff_RBX];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_String_o *)0x0;
        type = pSVar13;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          root = (UnityEngine_Transform_o *)pSVar4;
          if (pSVar13 == (System_Type_o *)0x0) goto label_0263d15c;
          pSVar12 = (System_String_o *)0x0;
          type = pSVar13;
          __this = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar13,(MethodInfo *)0x0)
          ;
          if (__this == (UnityEngine_Object_o *)0x0) goto label_0263d15c;
          type = (System_Type_o *)UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          pSVar12 = id;
          bVar3 = System_String__op_Equality((System_String_o *)type,id,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return (Il2CppObject *)pSVar13;
          }
        }
        unaff_RBX = unaff_RBX + 1;
        uVar2 = (uint)pSVar4->max_length;
        if ((long)(int)uVar2 <= (long)unaff_RBX) {
          return (Il2CppObject *)(System_Type_o *)0x0;
        }
      } while (unaff_RBX < uVar2);
    }
  }
  uVar5 = il2cpp_runtime_helper_022b2ca0();
  pSVar6 = pSVar12[2].monitor;
  if (pSVar6 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(pSVar12);
    pSVar6 = pSVar12[2].monitor;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar6->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = (System_Type_o *)0x0;
  pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((type != (System_Type_o *)0x0) &&
     (lVar8 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                        (type,pSVar7,0,(type->klass->vtable)._14_GetCustomAttributes.method,in_R8,in_R9,uVar5,
                         unaff_RBX,method,id,pSVar4), pSVar13 = pSVar7,
     handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)type, lVar8 != 0)
     ) {
    if (*(long *)(lVar8 + 0x18) != 0) {
      if ((int)*(long *)(lVar8 + 0x18) == 0) goto label_0263d23f;
      lVar8 = *(long *)(lVar8 + 0x20);
      lVar9 = *(long *)((long)pSVar12[2].monitor + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
      }
      if (lVar8 != 0) {
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(lVar8,lVar9);
        if (pIVar10 != (Il2CppObject *)0x0) {
          return pIVar10;
        }
        il2cpp_runtime_helper_022b2fd0(lVar8,lVar9);
      }
    }
    return (Il2CppObject *)0x0;
  }
  type = (System_Type_o *)handle.fields.value;
  pSVar7 = pSVar13;
  il2cpp_runtime_helper_022b2c90();
label_0263d23f:
  il2cpp_runtime_helper_022b2ca0();
  if (pSVar7[2].monitor == (void *)0x0) {
    il2cpp_runtime_helper_02300a20(pSVar7);
  }
  pIVar10 = System_Activator__CreateInstance_3ce7ba0(type,(MethodInfo *)0x0);
  lVar8 = *(long *)pSVar7[2].monitor;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
  }
  if (pIVar10 != (Il2CppObject *)0x0) {
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar10,lVar8);
    if (pIVar11 != (Il2CppObject *)0x0) {
      return pIVar11;
    }
    il2cpp_runtime_helper_022b2fd0(pIVar10,lVar8);
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* __this, const MethodInfo* method);
// 0x4511160

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (g_data_057aed8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aed8f = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_System_String);
  (__this->fields)._colors = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colors,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_System_String);
  (__this->fields)._previewColors = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._previewColors,pSVar1);
  (__this->fields)._lastText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._lastText);
  (__this->fields)._selectionStart = -1;
  (__this->fields)._selectionEnd = -1;
  (__this->fields)._openedStart = -1;
  (__this->fields)._openedEnd = -1;
  *(undefined1 *)((long)&(__this->fields)._attached + 2) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


