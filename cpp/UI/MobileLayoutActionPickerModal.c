// Type: UI.MobileLayoutActionPickerModal
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileLayoutActionPickerModal.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutActionPickerModal.<>c__DisplayClass38_0$$.ctor
// il2cpp: void UI_MobileLayoutActionPickerModal___c__DisplayClass38_0___ctor (UI_MobileLayoutActionPickerModal___c__DisplayClass38_0_o* __this, const MethodInfo* method);
// 0x5cb0690

void UI_MobileLayoutActionPickerModal___c__DisplayClass38_0___ctor
               (UI_MobileLayoutActionPickerModal___c__DisplayClass38_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutActionPickerModal.<>c__DisplayClass38_0$$<Populate>b__0
// il2cpp: void UI_MobileLayoutActionPickerModal___c__DisplayClass38_0___Populate_b__0 (UI_MobileLayoutActionPickerModal___c__DisplayClass38_0_o* __this, const MethodInfo* method);
// 0x5cb0730

void UI_MobileLayoutActionPickerModal___c__DisplayClass38_0___Populate_b__0
               (UI_MobileLayoutActionPickerModal___c__DisplayClass38_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  UnityEngine_Object_o *obj;
  UI_MobileLayoutActionPickerModal_o *__this_00;
  
  if (Il2CppMethodInitialized_07547a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a99 = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MobileLayoutActionPickerModal_o *)0x0) {
label_05cb07b5:
    ThrowNullReferenceException();
  }
  pSVar1 = (__this_00->fields)._onSelect;
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,(__this->fields).option,(pSVar1->fields).method);
    __this_00 = (__this->fields).__4__this;
    if (__this_00 == (UI_MobileLayoutActionPickerModal_o *)0x0) goto label_05cb07b5;
  }
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutActionPickerModal$$get_Title
// il2cpp: System_String_o* UI_MobileLayoutActionPickerModal__get_Title (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea10

System_String_o *
UI_MobileLayoutActionPickerModal__get_Title(UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return (__this->fields)._title;
}


// UI.MobileLayoutActionPickerModal$$get_Width
// il2cpp: float UI_MobileLayoutActionPickerModal__get_Width (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea20

float UI_MobileLayoutActionPickerModal__get_Width
                (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.MobileLayoutActionPickerModal$$get_Height
// il2cpp: float UI_MobileLayoutActionPickerModal__get_Height (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea30

float UI_MobileLayoutActionPickerModal__get_Height
                (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.MobileLayoutActionPickerModal$$get_TopBarHeight
// il2cpp: float UI_MobileLayoutActionPickerModal__get_TopBarHeight (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea40

float UI_MobileLayoutActionPickerModal__get_TopBarHeight
                (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 56.0;
}


// UI.MobileLayoutActionPickerModal$$get_BottomBarHeight
// il2cpp: float UI_MobileLayoutActionPickerModal__get_BottomBarHeight (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea50

float UI_MobileLayoutActionPickerModal__get_BottomBarHeight
                (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 58.0;
}


// UI.MobileLayoutActionPickerModal$$get_TitleFontSize
// il2cpp: int32_t UI_MobileLayoutActionPickerModal__get_TitleFontSize (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea60

int32_t UI_MobileLayoutActionPickerModal__get_TitleFontSize
                  (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 0x18;
}


// UI.MobileLayoutActionPickerModal$$get_ButtonFontSize
// il2cpp: int32_t UI_MobileLayoutActionPickerModal__get_ButtonFontSize (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea70

int32_t UI_MobileLayoutActionPickerModal__get_ButtonFontSize
                  (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MobileLayoutActionPickerModal$$get_VerticalPadding
// il2cpp: int32_t UI_MobileLayoutActionPickerModal__get_VerticalPadding (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea80

int32_t UI_MobileLayoutActionPickerModal__get_VerticalPadding
                  (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 0x10;
}


// UI.MobileLayoutActionPickerModal$$get_HorizontalPadding
// il2cpp: int32_t UI_MobileLayoutActionPickerModal__get_HorizontalPadding (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caea90

int32_t UI_MobileLayoutActionPickerModal__get_HorizontalPadding
                  (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 0x12;
}


// UI.MobileLayoutActionPickerModal$$get_VerticalSpacing
// il2cpp: float UI_MobileLayoutActionPickerModal__get_VerticalSpacing (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caeaa0

float UI_MobileLayoutActionPickerModal__get_VerticalSpacing
                (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 8.0;
}


// UI.MobileLayoutActionPickerModal$$get_ScrollBar
// il2cpp: bool UI_MobileLayoutActionPickerModal__get_ScrollBar (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caeab0

bool UI_MobileLayoutActionPickerModal__get_ScrollBar
               (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MobileLayoutActionPickerModal$$get_PopupAnimationType
// il2cpp: int32_t UI_MobileLayoutActionPickerModal__get_PopupAnimationType (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caeac0

int32_t UI_MobileLayoutActionPickerModal__get_PopupAnimationType
                  (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MobileLayoutActionPickerModal$$Open
// il2cpp: void UI_MobileLayoutActionPickerModal__Open (UnityEngine_Transform_o* parent, System_String_o* current, int32_t role, System_Action_string__o* onSelect, const MethodInfo* method);
// 0x5cae7a0

void UI_MobileLayoutActionPickerModal__Open
               (UnityEngine_Transform_o *parent,System_String_o *current,int32_t role,
               System_Action_string__o *onSelect,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_MobileLayoutActionPickerModal_o *__this_00;
  
  if (Il2CppMethodInitialized_07547a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutActionPickerModal);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    Il2CppMethodInitialized_07547a90 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/HeadedPanel",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutActionPickerModal
                          );
    if (__this_00 != (UI_MobileLayoutActionPickerModal_o *)0x0) {
      UI_MobileLayoutActionPickerModal__SetupPicker(__this_00,current,role,onSelect,method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionPickerModal$$SetupPicker
// il2cpp: void UI_MobileLayoutActionPickerModal__SetupPicker (UI_MobileLayoutActionPickerModal_o* __this, System_String_o* current, int32_t role, System_Action_string__o* onSelect, const MethodInfo* method);
// 0x5caead0

void UI_MobileLayoutActionPickerModal__SetupPicker
               (UI_MobileLayoutActionPickerModal_o *__this,System_String_o *current,int32_t role,
               System_Action_string__o *onSelect,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  bool bVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_Font_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  MethodInfo *pMVar8;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_String_o **ppSVar9;
  UI_MobileLayoutActionPickerModal_o *pUVar10;
  
  if (Il2CppMethodInitialized_07547a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutActionPickerModal_SetupPicker_b__36_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_GetBuiltinResource_Font);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Rows");
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyRuntime.ttf");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Action");
    Il2CppMethodInitialized_07547a91 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout","Action","",
                      "",(MethodInfo *)0x0);
  (__this->fields)._title = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._current = current;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._current);
  pUVar10 = (UI_MobileLayoutActionPickerModal_o *)&(__this->fields)._onSelect;
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier((void **)pUVar10);
  (__this->fields)._role = role;
  pSVar3 = UI_MobileLayoutActionPickerModal__GetGroupOptions(pUVar10,(MethodInfo *)onSelect);
  (__this->fields)._groupOptions = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groupOptions);
  pSVar3 = (__this->fields)._groupOptions;
  pSVar2 = UI_MobileInputBindingUtil__GetActionGroup(current,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((pSVar3 == (System_String_array *)0x0) || (pSVar3->max_length == 0)) {
      ppSVar9 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      ppSVar9 = pSVar3->m_Items;
    }
    pSVar2 = *ppSVar9;
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar2,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._groupFilter = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groupFilter);
  pSVar4 = (__this->fields)._groupFilter;
  if (pSVar4 != (Settings_StringSetting_o *)0x0) {
    pSVar3 = UI_MobileInputBindingUtil__GetActionNamesForGroup((pSVar4->fields)._value,(MethodInfo *)0x0);
    (__this->fields)._options = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
    pUVar5 = UnityEngine_Resources__GetBuiltinResource_object_
                       ("LegacyRuntime.ttf",
                        (MethodInfo_3665B80 *)MethodInfo_UnityEngine_Resources_GetBuiltinResource_Font);
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    pUVar5 = UI_LanguageFonts__LegacyFont(pUVar5,(MethodInfo *)0x0);
    (__this->fields)._font = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._font);
    (*(__this->klass->vtable)._20_Setup.methodPtr)
              (__this,(UI_BasePanel_o *)0x0,(__this->klass->vtable)._20_Setup.method);
    pMVar8 = (MethodInfo *)0x0;
    UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    UI_MobileLayoutActionPickerModal__CreateSearchInput(__this,pMVar8);
    pUVar10 = (UI_MobileLayoutActionPickerModal_o *)(__this->fields).SinglePanel;
    if (pUVar10 != (UI_MobileLayoutActionPickerModal_o *)0x0) {
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar10,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      __this_00 = UI_MobileLayoutActionPickerModal__CreateRect
                            (pUVar10,"Rows",pUVar6,(MethodInfo *)&"Rows");
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                           );
        (__this->fields)._rowsRoot = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._rowsRoot);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
        if (__this_01 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,6.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_01,0,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
          pUVar7 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
          if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar7->klass->vtable)._42_set_flexibleHeight.methodPtr)
                      (pUVar7,1.0,(pUVar7->klass->vtable)._42_set_flexibleHeight.method);
            parent = (__this->fields).BottomBar;
            fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                                 (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
            pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            pMVar8 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
            UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar8,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
            pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_02,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MobileLayoutActionPickerModal_SetupPicker_b__36_0,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateDefaultButton
                      (parent,(UI_ElementStyle_o *)pMVar8,pSVar2,120.0,42.0,__this_02,(MethodInfo *)0x0);
            UI_MobileLayoutActionPickerModal__Populate(__this,pMVar8);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionPickerModal$$CreateSearchInput
// il2cpp: void UI_MobileLayoutActionPickerModal__CreateSearchInput (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caf1e0
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


void UI_MobileLayoutActionPickerModal__CreateSearchInput
               (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o **targetAddress;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  System_String_array *options;
  Settings_StringSetting_o *setting;
  UnityEngine_UI_ColorBlock_o value;
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UI_MobileLayoutActionPickerModal_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Graphic_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_UI_InputField_o *pUVar8;
  long *plVar9;
  UnityEngine_Events_UnityAction_T0__o *__this_02;
  UI_ElementStyle_o *__this_03;
  UnityEngine_Events_UnityAction_o *__this_04;
  UI_DropdownSettingElement_o *dropdown;
  UI_MobileLayoutDropdownOverlay_o *pUVar10;
  UnityEngine_Transform_o *overlayRoot;
  MethodInfo *method_00;
  UI_MobileLayoutActionPickerModal_o *__this_05;
  float fVar11;
  UnityEngine_Color_o UVar12;
  System_Nullable_float__Fields SStack_b0;
  UnityEngine_Transform_o *pUStack_a8;
  undefined8 uStack_98;
  UnityEngine_UI_ColorBlock_o UStack_88;
  
  if (Il2CppMethodInitialized_07547a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutDropdownOverlay);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutActionPickerModal_CreateSearchInput_b__37_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutActionPickerModal_CreateSearchInput_b__37_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"InputNormalColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Placeholder");
    il2cpp_codegen_initialize_runtime_metadata(&"Input");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Filters");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"InputSelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_07547a92 = '\x01';
  }
  pUVar3 = (UI_MobileLayoutActionPickerModal_o *)(__this->fields).SinglePanel;
  if (pUVar3 != (UI_MobileLayoutActionPickerModal_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    pUVar3 = (UI_MobileLayoutActionPickerModal_o *)
             UI_MobileLayoutActionPickerModal__CreateRect
                       (pUVar3,"Filters",pUVar2,(MethodInfo *)&"Filters");
    if (pUVar3 != (UI_MobileLayoutActionPickerModal_o *)0x0) {
      pIVar4 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)pUVar3,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pIVar4 != (Il2CppObject *)0x0) {
        (*pIVar4->klass->vtable[0x24].methodPtr)(0x43e60000,pIVar4,pIVar4->klass->vtable[0x24].method);
        (*pIVar4->klass->vtable[0x26].methodPtr)(0x42200000,pIVar4,pIVar4->klass->vtable[0x26].method);
        (*pIVar4->klass->vtable[0x28].methodPtr)(0x3f800000,pIVar4,pIVar4->klass->vtable[0x28].method);
        __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pUVar3,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
        if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,8.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_01,3,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                    (__this_01,false,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                    (__this_01,false,(MethodInfo *)0x0);
          __this_05 = pUVar3;
          pUVar2 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar3,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          pUVar5 = UI_MobileLayoutActionPickerModal__CreateRect
                             (__this_05,"Search",pUVar2,(MethodInfo *)&"Search");
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pIVar4 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar5,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
            if (pIVar4 != (Il2CppObject *)0x0) {
              (*pIVar4->klass->vtable[0x24].methodPtr)(0x439e0000,pIVar4,pIVar4->klass->vtable[0x24].method);
              (*pIVar4->klass->vtable[0x26].methodPtr)(0x42200000,pIVar4,pIVar4->klass->vtable[0x26].method);
              (*pIVar4->klass->vtable[0x28].methodPtr)(0x3f800000,pIVar4,pIVar4->klass->vtable[0x28].method);
              pUVar6 = (UnityEngine_UI_Graphic_o *)
                       UnityEngine_GameObject__AddComponent_object_
                                 (pUVar5,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_Image);
              pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              UVar12 = UI_UIManager__GetThemeColor
                                 (pSVar7,"DefaultSetting","InputNormalColor","DefaultPanel",
                                  (MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_UI_Graphic_o *)0x0) {
                fVar11 = UVar12.fields.b;
                (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                          (pUVar6,UVar12,(pUVar6->klass->vtable)._23_set_color.method);
                (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar6,true,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
                pUVar8 = (UnityEngine_UI_InputField_o *)
                         UnityEngine_GameObject__AddComponent_object_
                                   (pUVar5,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_InputField);
                targetAddress = &(__this->fields)._searchInput;
                (__this->fields)._searchInput = pUVar8;
                Il2CppCodeGenWriteBarrier(targetAddress);
                pUVar8 = (__this->fields)._searchInput;
                if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
                  UnityEngine_UI_Selectable__set_targetGraphic
                            ((UnityEngine_UI_Selectable_o *)pUVar8,pUVar6,(MethodInfo *)0x0);
                  pIVar4 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar5,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  plVar9 = (long *)UI_MobileLayoutActionPickerModal__CreateText
                                             (__this,"Text",pIVar4,
                                              **(undefined8 **)(g_data_07556758 + 0xb8),3);
                  pIVar4 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar5,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  pSVar7 = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
                  pUVar6 = (UnityEngine_UI_Graphic_o *)
                           UI_MobileLayoutActionPickerModal__CreateText
                                     (__this,"Placeholder",pIVar4,pSVar7,3);
                  if (plVar9 != (long *)0x0) {
                    pUStack_a8 = (UnityEngine_Transform_o *)
                                 (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                    uStack_98 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                    (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                    if (pUVar6 != (UnityEngine_UI_Graphic_o *)0x0) {
                      UVar12.fields.g = (float)uStack_98._4_4_;
                      UVar12.fields.r = (float)pUStack_a8._0_4_;
                      UVar12.fields.a = 0.42;
                      UVar12.fields.b = fVar11;
                      (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                (pUVar6,UVar12,(pUVar6->klass->vtable)._23_set_color.method);
                      if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
                        UnityEngine_UI_InputField__set_textComponent(*targetAddress,plVar9,0);
                        if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
                          UnityEngine_UI_InputField__set_placeholder(*targetAddress,pUVar6,(MethodInfo *)0x0);
                          pUVar8 = (__this->fields)._searchInput;
                          pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                          UI_UIManager__GetThemeColorBlock
                                    (&UStack_88,pSVar7,"DefaultSetting","Input",
                                     "DefaultPanel",(MethodInfo *)0x0);
                          if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
                            value.fields.m_NormalColor.fields.b = UStack_88.fields.m_NormalColor.fields.b;
                            value.fields.m_NormalColor.fields.a = UStack_88.fields.m_NormalColor.fields.a;
                            value.fields.m_NormalColor.fields.r = UStack_88.fields.m_NormalColor.fields.r;
                            value.fields.m_NormalColor.fields.g = UStack_88.fields.m_NormalColor.fields.g;
                            value.fields.m_HighlightedColor.fields.r =
                                 UStack_88.fields.m_HighlightedColor.fields.r;
                            value.fields.m_HighlightedColor.fields.g =
                                 UStack_88.fields.m_HighlightedColor.fields.g;
                            value.fields.m_HighlightedColor.fields.b =
                                 UStack_88.fields.m_HighlightedColor.fields.b;
                            value.fields.m_HighlightedColor.fields.a =
                                 UStack_88.fields.m_HighlightedColor.fields.a;
                            value.fields.m_PressedColor.fields.r = UStack_88.fields.m_PressedColor.fields.r;
                            value.fields.m_PressedColor.fields.g = UStack_88.fields.m_PressedColor.fields.g;
                            value.fields.m_PressedColor.fields.b = UStack_88.fields.m_PressedColor.fields.b;
                            value.fields.m_PressedColor.fields.a = UStack_88.fields.m_PressedColor.fields.a;
                            value.fields.m_SelectedColor.fields.r = UStack_88.fields.m_SelectedColor.fields.r;
                            value.fields.m_SelectedColor.fields.g = UStack_88.fields.m_SelectedColor.fields.g;
                            value.fields.m_SelectedColor.fields.b = UStack_88.fields.m_SelectedColor.fields.b;
                            value.fields.m_SelectedColor.fields.a = UStack_88.fields.m_SelectedColor.fields.a;
                            value.fields.m_DisabledColor.fields.r = UStack_88.fields.m_DisabledColor.fields.r;
                            value.fields.m_DisabledColor.fields.g = UStack_88.fields.m_DisabledColor.fields.g;
                            value.fields.m_DisabledColor.fields.b = UStack_88.fields.m_DisabledColor.fields.b;
                            value.fields.m_DisabledColor.fields.a = UStack_88.fields.m_DisabledColor.fields.a;
                            value.fields.m_ColorMultiplier = UStack_88.fields.m_ColorMultiplier;
                            value.fields.m_FadeDuration = UStack_88.fields.m_FadeDuration;
                            UnityEngine_UI_Selectable__set_colors
                                      ((UnityEngine_UI_Selectable_o *)pUVar8,value,(MethodInfo *)0x0);
                            pUVar8 = (__this->fields)._searchInput;
                            pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            UVar12 = UI_UIManager__GetThemeColor
                                               (pSVar7,"DefaultSetting","InputSelectionColor",
                                                "DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
                              UnityEngine_UI_InputField__set_selectionColor(pUVar8,UVar12,(MethodInfo *)0x0);
                              if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
                                __this_00 = ((*targetAddress)->fields).m_OnValueChanged;
                                __this_02 = (UnityEngine_Events_UnityAction_T0__o *)
                                            il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UnityEngine_Events_UnityAction_string);
                                UnityEngine_Events_UnityAction_object____ctor
                                          (__this_02,(Il2CppObject *)__this,
                                           (intptr_t)
                                           MethodInfo_UI_MobileLayoutActionPickerModal_CreateSearchInput_b__37_0
                                           ,(MethodInfo_4311A10 *)0x0);
                                if (__this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
                                  UnityEngine_Events_UnityEvent_object___AddListener
                                            ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,__this_02,
                                             (MethodInfo_4318F80 *)
                                             MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
                                  pUStack_a8 = UnityEngine_GameObject__get_transform
                                                         ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0
                                                         );
                                  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method)
                                  ;
                                  __this_03 = (UI_ElementStyle_o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_UI_ElementStyle);
                                  UI_ElementStyle___ctor(__this_03,0x12,0.0,20.0,pSVar7,(MethodInfo *)0x0);
                                  options = (__this->fields)._groupOptions;
                                  setting = (__this->fields)._groupFilter;
                                  method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
                                  SStack_b0.hasValue = false;
                                  SStack_b0._1_3_ = 0;
                                  SStack_b0.value = 0.0;
                                  System_Nullable_float____ctor
                                            ((System_Nullable_float__o *)&SStack_b0,160.0,
                                             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
                                  __this_04 = (UnityEngine_Events_UnityAction_o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor
                                            (__this_04,(Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_UI_MobileLayoutActionPickerModal_CreateSearchInput_b__37_1
                                             ,(MethodInfo *)0x0);
                                  pUVar5 = UI_ElementFactory__CreateDropdownSetting
                                                     (pUStack_a8,__this_03,(Settings_BaseSetting_o *)setting,
                                                      (System_String_o *)method_00,options,
                                                      "",136.0,40.0,260.0,
                                                      (System_Nullable_float__o)SStack_b0,__this_04,
                                                      (System_Int32_array *)0x0,
                                                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar4 = UnityEngine_GameObject__GetComponent_object_
                                                       (pUVar5,(MethodInfo_353B730 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                       );
                                    if (pIVar4 == (Il2CppObject *)0x0) {
                                      pIVar4 = UnityEngine_GameObject__AddComponent_object_
                                                         (pUVar5,(MethodInfo_353B6A0 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                                                       );
                                      if (pIVar4 == (Il2CppObject *)0x0) goto label_05cafaac;
                                    }
                                    (*pIVar4->klass->vtable[0x24].methodPtr)
                                              (0x43080000,pIVar4,pIVar4->klass->vtable[0x24].method);
                                    (*pIVar4->klass->vtable[0x26].methodPtr)
                                              (0x42200000,pIVar4,pIVar4->klass->vtable[0x26].method);
                                    dropdown = (UI_DropdownSettingElement_o *)
                                               UnityEngine_GameObject__GetComponent_object_
                                                         (pUVar5,(MethodInfo_353B730 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement
                                                       );
                                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                    }
                                    bVar1 = UnityEngine_Object__op_Inequality
                                                      ((UnityEngine_Object_o *)dropdown,
                                                       (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                    if (bVar1) {
                                      pUVar10 = (UI_MobileLayoutDropdownOverlay_o *)
                                                UnityEngine_GameObject__AddComponent_object_
                                                          (pUVar5,(MethodInfo_353B6A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutDropdownOverlay
                                                       );
                                      (__this->fields)._groupDropdownOverlay = pUVar10;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields)._groupDropdownOverlay);
                                      pUVar10 = (__this->fields)._groupDropdownOverlay;
                                      overlayRoot = UnityEngine_Component__get_transform
                                                              ((UnityEngine_Component_o *)__this,
                                                               (MethodInfo *)0x0);
                                      if (pUVar10 == (UI_MobileLayoutDropdownOverlay_o *)0x0)
                                      goto label_05cafaac;
                                      UI_MobileLayoutDropdownOverlay__Setup
                                                (pUVar10,dropdown,overlayRoot,method_00);
                                    }
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
                }
              }
            }
          }
        }
      }
    }
  }
label_05cafaac:
  ThrowNullReferenceException();
}

// UI.MobileLayoutActionPickerModal$$Populate
// il2cpp: void UI_MobileLayoutActionPickerModal__Populate (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5cafd30
// eh: try 0x5cafe70..0x5cb041c -> pad 0x5cb0431 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5cb044e..0x5cb0453 -> pad 0x5cb0458 cleanup
// eh: try 0x5cb045b..0x5cb0465 -> pad 0x5cb046d catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb00df: jmp 0x5cb0119
// asm:   0x5cb0257: nop word ptr [rax + rax]
// asm:   0x5cb0421: mov rdi, r14
// asm:   0x5cb0424: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cb0429: jmp 0x5cb0433
// asm:   0x5cb042b: jmp 0x5cb0433
// asm:   0x5cb042d: jmp 0x5cb0433
// asm:   0x5cb042f: jmp 0x5cb0433
// asm:   0x5cb0431: jmp 0x5cb0433
// asm:   0x5cb0433: mov rbx, rax
// asm:   0x5cb0436: cmp edx, 1
// asm:   0x5cb0439: jne 0x5cb045b
// asm:   0x5cb043b: mov rdi, rbx
// asm:   0x5cb043e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cb0443: mov r14, qword ptr [rax]
// asm:   0x5cb0446: mov qword ptr [rsp + 0x30], r14
// asm:   0x5cb044b: xor r12d, r12d
// asm:   0x5cb044e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cb0453: jmp 0x5caffe2
// asm:   0x5cb0458: mov rbx, rax
// asm:   0x5cb045b: lea rdi, [rsp + 0x30]
// asm:   0x5cb0460: call 0x2fdb030  ; il2cpp_runtime_helper_02fdb030()
// asm:   0x5cb0465: mov rdi, rbx
// asm:   0x5cb0468: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cb046d: mov rdi, rax
// asm:   0x5cb0470: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutActionPickerModal__Populate(UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UI_InputField_o *pUVar5;
  Settings_StringSetting_o *pSVar6;
  bool bVar7;
  int32_t iVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  System_String_o **ppSVar12;
  System_String_array *pSVar13;
  UI_MobileLayoutActionPickerModal___c__DisplayClass38_0_o *__this_01;
  System_String_o *pSVar14;
  UI_ElementStyle_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_UI_LayoutElement_o *pUVar15;
  long lVar16;
  ulong uVar17;
  UI_MobileLayoutActionPickerModal___c__DisplayClass38_0_Fields *targetAddress;
  UI_MobileLayoutActionPickerModal_o *pUVar18;
  Il2CppObject *pIStack_70;
  System_String_o *pSStack_68;
  UI_MobileLayoutActionPickerModal_o *pUStack_60;
  Il2CppObject *pIStack_58;
  System_String_array *pSStack_50;
  undefined8 uStack_48;
  Il2CppObject **ppIStack_40;
  Il2CppObject **ppIStack_38;
  
  if (Il2CppMethodInitialized_07547a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutActionPickerModal_c__DisplayClass38_0_Populate_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutActionPickerModal_c__DisplayClass38_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&" *");
    Il2CppMethodInitialized_07547a93 = '\x01';
  }
  pIStack_58 = (Il2CppObject *)0x0;
  pUVar2 = (__this->fields)._rowsRoot;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  pUVar2 = (__this->fields)._rowsRoot;
  pUStack_60 = __this;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    pIStack_70 = (Il2CppObject *)
                 UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
    uStack_48 = 0;
    ppIStack_40 = &pIStack_70;
    ppIStack_38 = &pIStack_58;
    do {
      pIVar10 = pIStack_70;
      if (pIStack_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIStack_70->klass;
      uVar17 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar16) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar16);
            goto label_05cafee3;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar17 * 0x10 != lVar16);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05cafee3:
      bVar7 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
      pIVar10 = pIStack_70;
      if (!bVar7) {
        pIVar10 = il2cpp_vm_Object_IsInst(pIStack_70,(Il2CppClass *)TypeInfo_System_IDisposable);
        pIStack_58 = pIVar10;
        if (pIVar10 == (Il2CppObject *)0x0) goto label_05cb0066;
        pIVar3 = pIVar10->klass;
        uVar17 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar17 == 0) goto label_05cb003f;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar16 = 0;
        goto label_05cb0030;
      }
      if (pIStack_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIStack_70->klass;
      uVar17 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar16) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar16) + 1);
            goto label_05caff77;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar17 * 0x10 != lVar16);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05caff77:
      __this_00 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(pIVar10,pVVar9->method);
      if (__this_00 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    } while( true );
  }
  goto label_05cb0400;
  while (lVar16 = lVar16 + 0x10, uVar17 * 0x10 != lVar16) {
label_05cb0030:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar16);
      goto label_05cb005d;
    }
  }
label_05cb003f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar10,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05cb005d:
  (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
label_05cb0066:
  pUVar18 = pUStack_60;
  pUVar5 = (pUStack_60->fields)._searchInput;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar5 = (pUVar18->fields)._searchInput;
    if ((pUVar5 == (UnityEngine_UI_InputField_o *)0x0) ||
       (pSVar11 = (pUVar5->fields).m_Text, pSVar11 == (System_String_o *)0x0)) goto label_05cb0400;
    pSVar11 = System_String__Trim(pSVar11,(MethodInfo *)0x0);
  }
  else {
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (Il2CppMethodInitialized_07547a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547a94 = '\x01';
  }
  pSVar6 = (pUVar18->fields)._groupFilter;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
    ppSVar12 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    ppSVar12 = &(pSVar6->fields)._value;
  }
  pSVar13 = UI_MobileInputBindingUtil__GetActionNamesForGroup(*ppSVar12,(MethodInfo *)0x0);
  (pUVar18->fields)._options = pSVar13;
  Il2CppCodeGenWriteBarrier(&(pUVar18->fields)._options);
  pSVar13 = (pUVar18->fields)._options;
  if (pSVar13 != (System_String_array *)0x0) {
    if (0 < (int)pSVar13->max_length) {
      uVar17 = 0;
      pSStack_50 = pSVar13;
      do {
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_UI_MobileLayoutActionPickerModal_c__DisplayClass38_0);
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_MobileLayoutActionPickerModal___c__DisplayClass38_0_o *)0x0) goto label_05cb0400;
        (__this_01->fields).__4__this = pUVar18;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
        if ((uint)pSVar13->max_length <= uVar17) {
          ThrowIndexOutOfRangeException();
        }
        targetAddress = &__this_01->fields;
        (__this_01->fields).option = pSVar13->m_Items[uVar17];
        Il2CppCodeGenWriteBarrier(&targetAddress->option);
        pSStack_68 = UI_MobileInputBindingUtil__GetActionLabel
                               ((__this_01->fields).option,(pUVar18->fields)._role,(MethodInfo *)0x0);
        bVar7 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
        if (bVar7) {
label_05cb0260:
          pSVar14 = (*(pUVar18->klass->vtable)._4_get_ThemePanel.methodPtr)
                              (pUVar18,(pUVar18->klass->vtable)._4_get_ThemePanel.method);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
          UI_ElementStyle___ctor(__this_02,0x12,120.0,20.0,pSVar14,(MethodInfo *)0x0);
          pUVar2 = (pUVar18->fields)._rowsRoot;
          bVar7 = System_String__op_Equality
                            (targetAddress->option,(pUVar18->fields)._current,(MethodInfo *)0x0);
          if (bVar7) {
            pSVar14 = System_String__Concat_52f0320(pSStack_68," *",(MethodInfo *)0x0);
          }
          else {
            pSVar14 = pSStack_68;
          }
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (__this_03,(Il2CppObject *)__this_01,
                     (intptr_t)MethodInfo_UI_MobileLayoutActionPickerModal_c__DisplayClass38_0_Populate_b__0,
                     (MethodInfo *)0x0);
          __this_04 = UI_ElementFactory__CreateDefaultButton
                                ((UnityEngine_Transform_o *)pUVar2,__this_02,pSVar14,440.0,34.0,__this_03,
                                 (MethodInfo *)0x0);
          if ((__this_04 == (UnityEngine_GameObject_o *)0x0) ||
             (pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_04,
                                   (MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
             pSVar13 = pSStack_50, pUVar18 = pUStack_60, pUVar15 == (UnityEngine_UI_LayoutElement_o *)0x0))
          goto label_05cb0400;
          (*(pUVar15->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar15,460.0,(pUVar15->klass->vtable)._36_set_preferredWidth.method);
          pUVar15 = UnityEngine_GameObject__GetComponent_object_
                              (__this_04,
                               (MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar15 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cb0400;
          (*(pUVar15->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar15,34.0,(pUVar15->klass->vtable)._38_set_preferredHeight.method);
        }
        else {
          if (targetAddress->option == (System_String_o *)0x0) goto label_05cb0400;
          iVar8 = System_String__IndexOf_53072b0(targetAddress->option,pSVar11,5,(MethodInfo *)0x0);
          if (-1 < iVar8) goto label_05cb0260;
          if (pSStack_68 == (System_String_o *)0x0) goto label_05cb0400;
          iVar8 = System_String__IndexOf_53072b0(pSStack_68,pSVar11,5,(MethodInfo *)0x0);
          if (-1 < iVar8) goto label_05cb0260;
        }
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)pSVar13->max_length);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
    return;
  }
label_05cb0400:
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionPickerModal$$GetSelectedGroup
// il2cpp: System_String_o* UI_MobileLayoutActionPickerModal__GetSelectedGroup (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5cb0640

System_String_o *
UI_MobileLayoutActionPickerModal__GetSelectedGroup
          (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547a94 = '\x01';
  }
  pSVar1 = (__this->fields)._groupFilter;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return (pSVar1->fields)._value;
}


// UI.MobileLayoutActionPickerModal$$GetGroupOptions
// il2cpp: System_String_array* UI_MobileLayoutActionPickerModal__GetGroupOptions (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5caefa0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5caf10d: nop dword ptr [rax]

System_String_array *
UI_MobileLayoutActionPickerModal__GetGroupOptions
          (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *value;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_07547a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07547a95 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar6 = UI_MobileInputBindingUtil__GetActionGroups((MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    iVar8 = (int)pSVar6->max_length;
    uVar7 = pSVar6->max_length & 0xffffffff;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      if (iVar8 < 1) goto label_05caf160;
      uVar9 = 0;
      do {
        if (uVar7 <= uVar9) goto label_05caf15b;
        bVar5 = System_String__IsNullOrEmpty(pSVar6->m_Items[uVar9],(MethodInfo *)0x0);
        if (!bVar5) goto label_05caf160;
        uVar9 = uVar9 + 1;
        uVar2 = (uint)pSVar6->max_length;
        uVar7 = (ulong)uVar2;
      } while ((long)uVar9 < (long)(int)uVar2);
    }
    else {
      if (iVar8 < 1) goto label_05caf13b;
      uVar9 = 0;
      do {
        if (uVar7 <= uVar9) {
label_05caf15b:
          ThrowIndexOutOfRangeException();
        }
        value = pSVar6->m_Items[uVar9];
        bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar5) {
          bVar5 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)value,
                             (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains)
          ;
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (!bVar5) {
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_00->fields)._items;
            if (pSVar3 == (System_String_array *)0x0) goto label_05caf160;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = value;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)value,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
        }
        uVar9 = uVar9 + 1;
        uVar2 = (uint)pSVar6->max_length;
        uVar7 = (ulong)uVar2;
      } while ((long)uVar9 < (long)(int)uVar2);
    }
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
label_05caf13b:
      pSVar6 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar6;
    }
  }
label_05caf160:
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionPickerModal$$GetInitialGroup
// il2cpp: System_String_o* UI_MobileLayoutActionPickerModal__GetInitialGroup (UI_MobileLayoutActionPickerModal_o* __this, System_String_o* current, System_String_array* groups, const MethodInfo* method);
// 0x5caf170

System_String_o *
UI_MobileLayoutActionPickerModal__GetInitialGroup
          (UI_MobileLayoutActionPickerModal_o *__this,System_String_o *current,System_String_array *groups,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  System_String_o **ppSVar2;
  
  value = UI_MobileInputBindingUtil__GetActionGroup(current,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    if ((groups == (System_String_array *)0x0) || (groups->max_length == 0)) {
      ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      if ((int)groups->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      ppSVar2 = groups->m_Items;
    }
    value = *ppSVar2;
  }
  return value;
}


// UI.MobileLayoutActionPickerModal$$CreateText
// il2cpp: UnityEngine_UI_Text_o* UI_MobileLayoutActionPickerModal__CreateText (UI_MobileLayoutActionPickerModal_o* __this, System_String_o* name, UnityEngine_RectTransform_o* parent, System_String_o* value, int32_t alignment, const MethodInfo* method);
// 0x5cb0480

UnityEngine_UI_Text_o *
UI_MobileLayoutActionPickerModal__CreateText
          (UI_MobileLayoutActionPickerModal_o *__this,System_String_o *name,
          UnityEngine_RectTransform_o *parent,System_String_o *value,int32_t alignment,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  System_String_o *panel;
  UnityEngine_RectTransform_o *__this_02;
  MethodInfo *method_00;
  System_String_o **__this_03;
  UnityEngine_Color_o UVar1;
  
  method_00 = (MethodInfo *)value;
  __this_03 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07547a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    __this_03 = &"InputTextColor";
    il2cpp_codegen_initialize_runtime_metadata(&"InputTextColor");
    Il2CppMethodInitialized_07547a96 = '\x01';
  }
  __this_00 = UI_MobileLayoutActionPickerModal__CreateRect
                        ((UI_MobileLayoutActionPickerModal_o *)__this_03,name,parent,method_00);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Text
                          );
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,value,(__this_01->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_font(__this_01,(__this->fields)._font,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_fontSize(__this_01,0x12,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_alignment(__this_01,alignment,(MethodInfo *)0x0);
      panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UVar1 = UI_UIManager__GetThemeColor
                        (panel,"DefaultSetting","InputTextColor","DefaultPanel",
                         (MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                (__this_01,UVar1,(__this_01->klass->vtable)._23_set_color.method);
      (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
      __this_02 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_offsetMin
                  (__this_02,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMax
                  (__this_02,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionPickerModal$$CreateRect
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutActionPickerModal__CreateRect (UI_MobileLayoutActionPickerModal_o* __this, System_String_o* name, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5cafac0

UnityEngine_GameObject_o *
UI_MobileLayoutActionPickerModal__CreateRect
          (UI_MobileLayoutActionPickerModal_o *__this,System_String_o *name,
          UnityEngine_RectTransform_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_07547a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07547a97 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,name,components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Transform_o *)parent,false,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_anchorMin
                  (__this_01,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_07542885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
        }
        UnityEngine_RectTransform__set_anchorMax
                  (__this_01,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_sizeDelta
                  (__this_01,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_offsetMin
                  (__this_01,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_offsetMax
                  (__this_01,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionPickerModal$$.ctor
// il2cpp: void UI_MobileLayoutActionPickerModal___ctor (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5cb06a0

void UI_MobileLayoutActionPickerModal___ctor(UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutActionPickerModal$$<SetupPicker>b__36_0
// il2cpp: void UI_MobileLayoutActionPickerModal___SetupPicker_b__36_0 (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5cb06b0

void UI_MobileLayoutActionPickerModal___SetupPicker_b__36_0
               (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a98 = '\x01';
  }
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutActionPickerModal$$<CreateSearchInput>b__37_0
// il2cpp: void UI_MobileLayoutActionPickerModal___CreateSearchInput_b__37_0 (UI_MobileLayoutActionPickerModal_o* __this, System_String_o* __, const MethodInfo* method);
// 0x5cb0710

void UI_MobileLayoutActionPickerModal___CreateSearchInput_b__37_0
               (UI_MobileLayoutActionPickerModal_o *__this,System_String_o *__,MethodInfo *method)

{
  UI_MobileLayoutActionPickerModal__Populate(__this,(MethodInfo *)__);
  return;
}


// UI.MobileLayoutActionPickerModal$$<CreateSearchInput>b__37_1
// il2cpp: void UI_MobileLayoutActionPickerModal___CreateSearchInput_b__37_1 (UI_MobileLayoutActionPickerModal_o* __this, const MethodInfo* method);
// 0x5cb0720

void UI_MobileLayoutActionPickerModal___CreateSearchInput_b__37_1
               (UI_MobileLayoutActionPickerModal_o *__this,MethodInfo *method)

{
  UI_MobileLayoutActionPickerModal__Populate(__this,method);
  return;
}


