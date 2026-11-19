// Type: UI.MobileLayoutSkinPickerModal
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileLayoutSkinPickerModal.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutSkinPickerModal.<>c__DisplayClass39_0$$.ctor
// il2cpp: void UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0___ctor (UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0_o* __this, const MethodInfo* method);
// 0x5cadb90

void UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0___ctor
               (UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutSkinPickerModal.<>c__DisplayClass39_0$$<CreateOptionRow>b__0
// il2cpp: void UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0___CreateOptionRow_b__0 (UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0_o* __this, const MethodInfo* method);
// 0x5cadcc0

void UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0___CreateOptionRow_b__0
               (UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  UnityEngine_Object_o *obj;
  UI_MobileLayoutSkinPickerModal_o *__this_00;
  
  if (Il2CppMethodInitialized_07547a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a83 = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MobileLayoutSkinPickerModal_o *)0x0) {
label_05cadd45:
    ThrowNullReferenceException();
  }
  pSVar1 = (__this_00->fields)._onSelect;
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,(__this->fields).option,(pSVar1->fields).method);
    __this_00 = (__this->fields).__4__this;
    if (__this_00 == (UI_MobileLayoutSkinPickerModal_o *)0x0) goto label_05cadd45;
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


// UI.MobileLayoutSkinPickerModal$$get_Title
// il2cpp: System_String_o* UI_MobileLayoutSkinPickerModal__get_Title (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabd50

System_String_o *
UI_MobileLayoutSkinPickerModal__get_Title(UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547a76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"ControlSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a76 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout","ControlSkin","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileLayoutSkinPickerModal$$get_Width
// il2cpp: float UI_MobileLayoutSkinPickerModal__get_Width (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabdf0

float UI_MobileLayoutSkinPickerModal__get_Width(UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.MobileLayoutSkinPickerModal$$get_Height
// il2cpp: float UI_MobileLayoutSkinPickerModal__get_Height (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe00

float UI_MobileLayoutSkinPickerModal__get_Height(UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.MobileLayoutSkinPickerModal$$get_TopBarHeight
// il2cpp: float UI_MobileLayoutSkinPickerModal__get_TopBarHeight (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe10

float UI_MobileLayoutSkinPickerModal__get_TopBarHeight
                (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 56.0;
}


// UI.MobileLayoutSkinPickerModal$$get_BottomBarHeight
// il2cpp: float UI_MobileLayoutSkinPickerModal__get_BottomBarHeight (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe20

float UI_MobileLayoutSkinPickerModal__get_BottomBarHeight
                (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 58.0;
}


// UI.MobileLayoutSkinPickerModal$$get_TitleFontSize
// il2cpp: int32_t UI_MobileLayoutSkinPickerModal__get_TitleFontSize (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe30

int32_t UI_MobileLayoutSkinPickerModal__get_TitleFontSize
                  (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 0x18;
}


// UI.MobileLayoutSkinPickerModal$$get_ButtonFontSize
// il2cpp: int32_t UI_MobileLayoutSkinPickerModal__get_ButtonFontSize (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe40

int32_t UI_MobileLayoutSkinPickerModal__get_ButtonFontSize
                  (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MobileLayoutSkinPickerModal$$get_VerticalPadding
// il2cpp: int32_t UI_MobileLayoutSkinPickerModal__get_VerticalPadding (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe50

int32_t UI_MobileLayoutSkinPickerModal__get_VerticalPadding
                  (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 0x10;
}


// UI.MobileLayoutSkinPickerModal$$get_HorizontalPadding
// il2cpp: int32_t UI_MobileLayoutSkinPickerModal__get_HorizontalPadding (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe60

int32_t UI_MobileLayoutSkinPickerModal__get_HorizontalPadding
                  (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 0x12;
}


// UI.MobileLayoutSkinPickerModal$$get_VerticalSpacing
// il2cpp: float UI_MobileLayoutSkinPickerModal__get_VerticalSpacing (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe70

float UI_MobileLayoutSkinPickerModal__get_VerticalSpacing
                (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 8.0;
}


// UI.MobileLayoutSkinPickerModal$$get_ScrollBar
// il2cpp: bool UI_MobileLayoutSkinPickerModal__get_ScrollBar (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe80

bool UI_MobileLayoutSkinPickerModal__get_ScrollBar
               (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MobileLayoutSkinPickerModal$$get_PopupAnimationType
// il2cpp: int32_t UI_MobileLayoutSkinPickerModal__get_PopupAnimationType (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cabe90

int32_t UI_MobileLayoutSkinPickerModal__get_PopupAnimationType
                  (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MobileLayoutSkinPickerModal$$Open
// il2cpp: void UI_MobileLayoutSkinPickerModal__Open (UnityEngine_Transform_o* parent, System_String_o* current, System_Action_string__o* onSelect, const MethodInfo* method);
// 0x5cab600

void UI_MobileLayoutSkinPickerModal__Open
               (UnityEngine_Transform_o *parent,System_String_o *current,System_Action_string__o *onSelect,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_MobileLayoutSkinPickerModal_o *__this_00;
  MethodInfo **method_00;
  
  if (Il2CppMethodInitialized_07547a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutSkinPickerModal);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    Il2CppMethodInitialized_07547a77 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/HeadedPanel",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutSkinPickerModal;
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutSkinPickerModal);
    if (__this_00 != (UI_MobileLayoutSkinPickerModal_o *)0x0) {
      UI_MobileLayoutSkinPickerModal__SetupPicker(__this_00,current,onSelect,(MethodInfo *)method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutSkinPickerModal$$SetupPicker
// il2cpp: void UI_MobileLayoutSkinPickerModal__SetupPicker (UI_MobileLayoutSkinPickerModal_o* __this, System_String_o* current, System_Action_string__o* onSelect, const MethodInfo* method);
// 0x5cabea0

void UI_MobileLayoutSkinPickerModal__SetupPicker
               (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *current,
               System_Action_string__o *onSelect,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  Settings_IntSetting_o *__this_00;
  UnityEngine_Font_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UI_ElementStyle_o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_MobileLayoutSkinPickerModal_o *__this_04;
  
  if (Il2CppMethodInitialized_07547a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_GetBuiltinResource_Font);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Rows");
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyRuntime.ttf");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547a78 = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar3 = UI_MobileControlSkinManager__NormalizeSkinReference(current,(MethodInfo *)0x0);
  (__this->fields)._current = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._current);
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect);
  pSVar4 = UI_MobileControlSkinManager__GetSkinSourceOptions((MethodInfo *)0x0);
  (__this->fields)._sourceOptions = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sourceOptions);
  iVar2 = UI_MobileLayoutSkinPickerModal__GetSourceFilterValue(__this,(__this->fields)._current,method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(__this_00,iVar2,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._sourceFilter = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sourceFilter);
  pSVar4 = UI_MobileControlSkinManager__GetSkinOptions((MethodInfo *)0x0);
  (__this->fields)._options = pSVar4;
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
  method_02 = (MethodInfo *)0x0;
  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  UI_MobileLayoutSkinPickerModal__CreateSearchInput(__this,method_02);
  __this_04 = (UI_MobileLayoutSkinPickerModal_o *)(__this->fields).SinglePanel;
  if (__this_04 != (UI_MobileLayoutSkinPickerModal_o *)0x0) {
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_04,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    __this_01 = UI_MobileLayoutSkinPickerModal__CreateRect
                          (__this_04,"Rows",pUVar6,(MethodInfo *)&"Rows");
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      (__this->fields)._rowsRoot = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rowsRoot);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_01,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
      if (__this_02 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,6.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)__this_02,0,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_GameObject__AddComponent_object_
                           (__this_01,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                           );
        if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar7->klass->vtable)._42_set_flexibleHeight.methodPtr)
                    (pUVar7,1.0,(pUVar7->klass->vtable)._42_set_flexibleHeight.method);
          iVar2 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                            (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
          pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
          UI_ElementStyle___ctor(__this_03,iVar2,120.0,20.0,pSVar3,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).BottomBar;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar3 = UI_UIManager__GetLocaleCommon("Clear",(MethodInfo *)0x0);
          pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar8,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_0,(MethodInfo *)0x0
                    );
          UI_ElementFactory__CreateDefaultButton(pUVar1,__this_03,pSVar3,120.0,42.0,pUVar8,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).BottomBar;
          pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
          pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar8,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_1,(MethodInfo *)0x0
                    );
          UI_ElementFactory__CreateDefaultButton(pUVar1,__this_03,pSVar3,120.0,42.0,pUVar8,(MethodInfo *)0x0);
          UI_MobileLayoutSkinPickerModal__Populate(__this,(System_String_o *)__this_03,method_01);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutSkinPickerModal$$CreateSearchInput
// il2cpp: void UI_MobileLayoutSkinPickerModal__CreateSearchInput (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cac410

void UI_MobileLayoutSkinPickerModal__CreateSearchInput
               (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o **targetAddress;
  Settings_IntSetting_o *setting;
  System_String_array *options;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UI_MobileLayoutSkinPickerModal_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_GameObject_o *pUVar7;
  UI_DropdownSettingElement_o *dropdown;
  UI_MobileLayoutDropdownOverlay_o *__this_04;
  UnityEngine_UI_Image_o *value_00;
  UnityEngine_UI_InputField_o *pUVar8;
  UnityEngine_UI_Text_o *value_01;
  UnityEngine_UI_Text_o *value_02;
  UnityEngine_Events_UnityAction_T0__o *__this_05;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o UVar9;
  UnityEngine_Color_o UVar10;
  UnityEngine_Color_o UVar11;
  float fStack_a4;
  float local_98;
  System_Nullable_float__Fields local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07547a79 == '\0') {
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
              (&MethodInfo_UI_MobileLayoutSkinPickerModal_CreateSearchInput_b__34_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutSkinPickerModal_CreateSearchInput_b__34_1);
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
    Il2CppMethodInitialized_07547a79 = '\x01';
  }
  pUVar3 = (UI_MobileLayoutSkinPickerModal_o *)(__this->fields).SinglePanel;
  if (pUVar3 != (UI_MobileLayoutSkinPickerModal_o *)0x0) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    pUVar3 = (UI_MobileLayoutSkinPickerModal_o *)
             UI_MobileLayoutSkinPickerModal__CreateRect
                       (pUVar3,"Filters",pUVar2,(MethodInfo *)&"Filters");
    if (pUVar3 != (UI_MobileLayoutSkinPickerModal_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)pUVar3,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (pUVar4,500.0,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
        (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar4,40.0,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
        (*(pUVar4->klass->vtable)._40_set_flexibleWidth.methodPtr)
                  (pUVar4,1.0,(pUVar4->klass->vtable)._40_set_flexibleWidth.method);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pUVar3,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
        if (__this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,8.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_01,3,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0)
          ;
          pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
          UI_ElementStyle___ctor(__this_02,0x12,0.0,20.0,pSVar6,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
          setting = (__this->fields)._sourceFilter;
          options = (__this->fields)._sourceOptions;
          local_88.hasValue = false;
          local_88._1_3_ = 0;
          local_88.value = 0.0;
          System_Nullable_float____ctor
                    ((System_Nullable_float__o *)&local_88,128.0,
                     (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (__this_03,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutSkinPickerModal_CreateSearchInput_b__34_0,
                     (MethodInfo *)0x0);
          method_01 = (MethodInfo *)"";
          pUVar7 = UI_ElementFactory__CreateDropdownSetting
                             (pUVar5,__this_02,(Settings_BaseSetting_o *)setting,(System_String_o *)method_00,
                              options,"",128.0,40.0,128.0,
                              (System_Nullable_float__o)local_88,__this_03,(System_Int32_array *)0x0,
                              (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar7,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar7,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
              if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05caccae;
            }
            (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar4,128.0,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
            (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar4,40.0,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
            dropdown = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar7,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement
                                 );
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)dropdown,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (bVar1) {
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    (pUVar7,(MethodInfo_353B6A0 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutDropdownOverlay
                                    );
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (__this_04 == (UI_MobileLayoutDropdownOverlay_o *)0x0) goto label_05caccae;
              UI_MobileLayoutDropdownOverlay__Setup(__this_04,dropdown,pUVar5,method_00);
            }
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)pUVar3,
                                (MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            pUVar7 = UI_MobileLayoutSkinPickerModal__CreateRect
                               (pUVar3,"Search",pUVar2,(MethodInfo *)&"Search");
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar7,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
              if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar4,364.0,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
                (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                          (pUVar4,40.0,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
                (*(pUVar4->klass->vtable)._40_set_flexibleWidth.methodPtr)
                          (pUVar4,1.0,(pUVar4->klass->vtable)._40_set_flexibleWidth.method);
                value_00 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar7,(MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                UVar9 = UI_UIManager__GetThemeColor
                                  (pSVar6,"DefaultSetting","InputNormalColor","DefaultPanel",
                                   (MethodInfo *)0x0);
                if (value_00 != (UnityEngine_UI_Image_o *)0x0) {
                  (*(value_00->klass->vtable)._23_set_color.methodPtr)
                            (value_00,UVar9,(value_00->klass->vtable)._23_set_color.method);
                  (*(value_00->klass->vtable)._25_set_raycastTarget.methodPtr)
                            (value_00,true,(value_00->klass->vtable)._25_set_raycastTarget.method);
                  pUVar8 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar7,(MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_InputField);
                  targetAddress = &(__this->fields)._searchInput;
                  (__this->fields)._searchInput = pUVar8;
                  Il2CppCodeGenWriteBarrier(targetAddress);
                  pUVar8 = (__this->fields)._searchInput;
                  if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
                    UnityEngine_UI_Selectable__set_targetGraphic
                              ((UnityEngine_UI_Selectable_o *)pUVar8,(UnityEngine_UI_Graphic_o *)value_00,
                               (MethodInfo *)0x0);
                    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                       (pUVar7,(MethodInfo_353B730 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    value_01 = UI_MobileLayoutSkinPickerModal__CreateText
                                         (__this,"Text",pUVar2,
                                          (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),3,
                                          method_01);
                    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                       (pUVar7,(MethodInfo_353B730 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    pSVar6 = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
                    value_02 = UI_MobileLayoutSkinPickerModal__CreateText
                                         (__this,"Placeholder",pUVar2,pSVar6,3,method_01);
                    if (value_01 != (UnityEngine_UI_Text_o *)0x0) {
                      UVar9 = (*(value_01->klass->vtable)._22_get_color.methodPtr)
                                        (value_01,(value_01->klass->vtable)._22_get_color.method);
                      UVar10 = (*(value_01->klass->vtable)._22_get_color.methodPtr)
                                         (value_01,(value_01->klass->vtable)._22_get_color.method);
                      UVar11 = (*(value_01->klass->vtable)._22_get_color.methodPtr)
                                         (value_01,(value_01->klass->vtable)._22_get_color.method);
                      if (value_02 != (UnityEngine_UI_Text_o *)0x0) {
                        local_98 = UVar9.fields.r;
                        fStack_a4 = UVar10.fields.g;
                        UVar11.fields.g = fStack_a4;
                        UVar11.fields.r = local_98;
                        UVar11.fields.a = 0.42;
                        (*(value_02->klass->vtable)._23_set_color.methodPtr)
                                  (value_02,UVar11,(value_02->klass->vtable)._23_set_color.method);
                        if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
                          UnityEngine_UI_InputField__set_textComponent
                                    (*targetAddress,value_01,(MethodInfo *)0x0);
                          if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
                            UnityEngine_UI_InputField__set_placeholder
                                      (*targetAddress,(UnityEngine_UI_Graphic_o *)value_02,(MethodInfo *)0x0);
                            pUVar8 = (__this->fields)._searchInput;
                            pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            UI_UIManager__GetThemeColorBlock
                                      ((UnityEngine_UI_ColorBlock_o *)&local_88,pSVar6,"DefaultSetting",
                                       "Input","DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
                              value.fields.m_NormalColor.fields.b = (float)(undefined4)uStack_80;
                              value.fields.m_NormalColor.fields.a = (float)uStack_80._4_4_;
                              value.fields.m_NormalColor.fields._0_8_ = local_88;
                              value.fields.m_HighlightedColor.fields.r = (float)(undefined4)local_78;
                              value.fields.m_HighlightedColor.fields.g = (float)local_78._4_4_;
                              value.fields.m_HighlightedColor.fields.b = (float)(undefined4)uStack_70;
                              value.fields.m_HighlightedColor.fields.a = (float)uStack_70._4_4_;
                              value.fields.m_PressedColor.fields.r = (float)(undefined4)local_68;
                              value.fields.m_PressedColor.fields.g = (float)local_68._4_4_;
                              value.fields.m_PressedColor.fields.b = (float)(undefined4)uStack_60;
                              value.fields.m_PressedColor.fields.a = (float)uStack_60._4_4_;
                              value.fields.m_SelectedColor.fields.r = (float)(undefined4)local_58;
                              value.fields.m_SelectedColor.fields.g = (float)local_58._4_4_;
                              value.fields.m_SelectedColor.fields.b = (float)(undefined4)uStack_50;
                              value.fields.m_SelectedColor.fields.a = (float)uStack_50._4_4_;
                              value.fields.m_DisabledColor.fields.r = (float)(undefined4)local_48;
                              value.fields.m_DisabledColor.fields.g = (float)local_48._4_4_;
                              value.fields.m_DisabledColor.fields.b = (float)(undefined4)uStack_40;
                              value.fields.m_DisabledColor.fields.a = (float)uStack_40._4_4_;
                              value.fields.m_ColorMultiplier = (float)(undefined4)local_38;
                              value.fields.m_FadeDuration = (float)local_38._4_4_;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)pUVar8,value,(MethodInfo *)0x0);
                              pUVar8 = (__this->fields)._searchInput;
                              pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                              UVar9 = UI_UIManager__GetThemeColor
                                                (pSVar6,"DefaultSetting","InputSelectionColor",
                                                 "DefaultPanel",(MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
                                UnityEngine_UI_InputField__set_selectionColor(pUVar8,UVar9,(MethodInfo *)0x0);
                                if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
                                  __this_00 = ((*targetAddress)->fields).m_OnValueChanged;
                                  __this_05 = (UnityEngine_Events_UnityAction_T0__o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction_string);
                                  UnityEngine_Events_UnityAction_object____ctor
                                            (__this_05,(Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_UI_MobileLayoutSkinPickerModal_CreateSearchInput_b__34_1
                                             ,(MethodInfo_4311A10 *)0x0);
                                  if (__this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent_object___AddListener
                                              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,__this_05,
                                               (MethodInfo_4318F80 *)
                                               MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
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
label_05caccae:
  ThrowNullReferenceException();
}


// UI.MobileLayoutSkinPickerModal$$Populate
// il2cpp: void UI_MobileLayoutSkinPickerModal__Populate (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cacf30
// eh: try 0x5cad020..0x5cad39f -> pad 0x5cad3b9 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5cad3d6..0x5cad3db -> pad 0x5cad3e0 cleanup
// eh: try 0x5cad3e3..0x5cad3ed -> pad 0x5cad3f5 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cad34e: jmp 0x5cad2ce
// asm:   0x5cad3a9: mov rdi, r14
// asm:   0x5cad3ac: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cad3b1: jmp 0x5cad3bb
// asm:   0x5cad3b3: jmp 0x5cad3bb
// asm:   0x5cad3b5: jmp 0x5cad3bb
// asm:   0x5cad3b7: jmp 0x5cad3bb
// asm:   0x5cad3b9: jmp 0x5cad3bb
// asm:   0x5cad3bb: mov rbx, rax
// asm:   0x5cad3be: cmp edx, 1
// asm:   0x5cad3c1: jne 0x5cad3e3
// asm:   0x5cad3c3: mov rdi, rbx
// asm:   0x5cad3c6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cad3cb: mov r14, qword ptr [rax]
// asm:   0x5cad3ce: mov qword ptr [rsp + 0x10], r14
// asm:   0x5cad3d3: xor r13d, r13d
// asm:   0x5cad3d6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cad3db: jmp 0x5cad193
// asm:   0x5cad3e0: mov rbx, rax
// asm:   0x5cad3e3: lea rdi, [rsp + 0x10]
// asm:   0x5cad3e8: call 0x2fdaf60  ; il2cpp_runtime_helper_02fdaf60()
// asm:   0x5cad3ed: mov rdi, rbx
// asm:   0x5cad3f0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cad3f5: mov rdi, rax
// asm:   0x5cad3f8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutSkinPickerModal__Populate
               (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *__,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_UI_InputField_o *pUVar6;
  System_String_array *pSVar7;
  System_String_o *option;
  bool bVar8;
  int32_t iVar9;
  MethodInfo *method_00;
  VirtualInvokeData *pVVar10;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar11;
  System_String_o *pSVar12;
  ulong uVar13;
  System_String_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  ulong uVar14;
  long lVar15;
  Il2CppObject *pIStack_58;
  Il2CppObject *pIStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  Il2CppObject **ppIStack_38;
  
  if (Il2CppMethodInitialized_07547a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547a7a = '\x01';
  }
  pIStack_50 = (Il2CppObject *)0x0;
  pUVar3 = (__this->fields)._rowsRoot;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pUVar3 = (__this->fields)._rowsRoot;
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pIStack_58 = (Il2CppObject *)
                 UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
    puStack_40 = (undefined1 *)&pIStack_58;
    uStack_48 = 0;
    ppIStack_38 = &pIStack_50;
    do {
      pIVar11 = pIStack_58;
      if (pIStack_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIStack_58->klass;
      uVar13 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar15) ==
              TypeInfo_System_Collections_IEnumerator) {
            method_00 = (MethodInfo *)(pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar15));
            goto label_05cad093;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar13 * 0x10 != lVar15);
      }
      method_00 = (MethodInfo *)
                  GetInterfaceInvokeDataFromVTableSlowPath
                            (pIStack_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05cad093:
      bVar8 = (*method_00->methodPointer)(pIVar11,(MethodInfo *)method_00->virtualMethodPointer);
      pIVar11 = pIStack_58;
      if (!bVar8) {
        pIVar11 = il2cpp_vm_Object_IsInst(pIStack_58,(Il2CppClass *)TypeInfo_System_IDisposable);
        pIStack_50 = pIVar11;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_05cad216;
        pIVar4 = pIVar11->klass;
        uVar13 = (ulong)(pIVar4->_2).interface_offsets_count;
        method_00 = (MethodInfo *)0x0;
        if (uVar13 == 0) goto label_05cad1ef;
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        method_00 = (MethodInfo *)(uVar13 * 0x10);
        lVar15 = 0;
        goto label_05cad1e0;
      }
      if (pIStack_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIStack_58->klass;
      uVar13 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar15) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar10 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar15) + 1);
            goto label_05cad127;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar13 * 0x10 != lVar15);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIStack_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05cad127:
      __this_00 = (UnityEngine_Component_o *)(*pVVar10->methodPtr)(pIVar11,pVVar10->method);
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
  goto label_05cad3a4;
  while (lVar15 = lVar15 + 0x10, method_00 != (MethodInfo *)lVar15) {
label_05cad1e0:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      method_00 = (MethodInfo *)((long)*(int *)((long)&pIVar5->offset + lVar15) * 0x10);
      pVVar10 = (VirtualInvokeData *)((long)&method_00[3].parameters + (long)pIVar4);
      goto label_05cad20d;
    }
  }
label_05cad1ef:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05cad20d:
  (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
label_05cad216:
  pUVar6 = (__this->fields)._searchInput;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar6 = (__this->fields)._searchInput;
    if ((pUVar6 == (UnityEngine_UI_InputField_o *)0x0) ||
       (pSVar12 = (pUVar6->fields).m_Text, pSVar12 == (System_String_o *)0x0)) goto label_05cad3a4;
    pSVar12 = System_String__Trim(pSVar12,(MethodInfo *)0x0);
    method_01 = extraout_RDX_00;
  }
  else {
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    method_01 = extraout_RDX;
  }
  pSVar7 = (__this->fields)._options;
  if (pSVar7 != (System_String_array *)0x0) {
    if (0 < (int)pSVar7->max_length) {
      uVar13 = pSVar7->max_length & 0xffffffff;
      uVar14 = 0;
      do {
        if (uVar13 <= uVar14) {
          ThrowIndexOutOfRangeException();
        }
        option = pSVar7->m_Items[uVar14];
        bVar8 = UI_MobileLayoutSkinPickerModal__MatchesSourceFilter(__this,option,method_01);
        method_01 = extraout_RDX_02;
        if (bVar8) {
          if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
          }
          __this_01 = UI_MobileControlSkinManager__GetSkinDisplayName(option,(MethodInfo *)0x0);
          bVar8 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
          if (!bVar8) {
            if (__this_01 == (System_String_o *)0x0) goto label_05cad3a4;
            method_00 = (MethodInfo *)0x0;
            iVar9 = System_String__IndexOf_53072b0(__this_01,pSVar12,5,(MethodInfo *)0x0);
            method_01 = extraout_RDX_03;
            if (iVar9 < 0) goto label_05cad2ce;
          }
          UI_MobileLayoutSkinPickerModal__CreateOptionRow(__this,option,__this_01,method_00);
          method_01 = extraout_RDX_01;
        }
label_05cad2ce:
        uVar14 = uVar14 + 1;
        uVar2 = (uint)pSVar7->max_length;
        uVar13 = (ulong)uVar2;
        method_00 = (MethodInfo *)(long)(int)uVar2;
      } while ((long)uVar14 < (long)method_00);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
    return;
  }
label_05cad3a4:
  ThrowNullReferenceException();
}


// UI.MobileLayoutSkinPickerModal$$MatchesSourceFilter
// il2cpp: bool UI_MobileLayoutSkinPickerModal__MatchesSourceFilter (UI_MobileLayoutSkinPickerModal_o* __this, System_String_o* option, const MethodInfo* method);
// 0x5cad5c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cad5e8: jmp 0x5cad65d

bool UI_MobileLayoutSkinPickerModal__MatchesSourceFilter
               (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *option,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *value;
  uint uVar4;
  bool bVar5;
  System_String_o **ppSVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_07547a7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    Il2CppMethodInitialized_07547a7b = '\x01';
    if (Il2CppMethodInitialized_07547a7d == '\0') goto label_05cad606;
label_05cad5dc:
    pSVar2 = (__this->fields)._sourceOptions;
  }
  else {
    if (Il2CppMethodInitialized_07547a7d != '\0') goto label_05cad5dc;
label_05cad606:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547a7d = '\x01';
    pSVar2 = (__this->fields)._sourceOptions;
  }
  if ((pSVar2 == (System_String_array *)0x0) || (pSVar2->max_length == 0)) {
    ppSVar6 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar3 = (__this->fields)._sourceFilter;
    uVar7 = (uint)pSVar2->max_length;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) {
      lVar8 = 0;
      if (uVar7 == 0) goto label_05cad6bf;
    }
    else {
      uVar1 = (pSVar3->fields)._value;
      uVar4 = uVar7 - 1;
      if ((int)uVar1 < (int)(uVar7 - 1)) {
        uVar4 = uVar1;
      }
      uVar9 = 0;
      if (-1 < (int)uVar1) {
        uVar9 = uVar4;
      }
      lVar8 = (long)(int)uVar9;
      if (uVar7 <= uVar9) {
label_05cad6bf:
        ThrowIndexOutOfRangeException();
      }
    }
    ppSVar6 = pSVar2->m_Items + lVar8;
  }
  value = *ppSVar6;
  bVar5 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if (bVar5) {
    return true;
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  bVar5 = UI_MobileControlSkinManager__IsSkinReferenceFromSource(option,value,(MethodInfo *)0x0);
  return bVar5;
}


// UI.MobileLayoutSkinPickerModal$$GetSourceFilterValue
// il2cpp: int32_t UI_MobileLayoutSkinPickerModal__GetSourceFilterValue (UI_MobileLayoutSkinPickerModal_o* __this, System_String_o* path, const MethodInfo* method);
// 0x5cac330

int32_t UI_MobileLayoutSkinPickerModal__GetSourceFilterValue
                  (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *path,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *b;
  System_String_array *pSVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07547a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    Il2CppMethodInitialized_07547a7c = '\x01';
  }
  pSVar3 = (__this->fields)._sourceOptions;
  if ((pSVar3 == (System_String_array *)0x0) || (pSVar3->max_length == 0)) {
    return 0;
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  b = UI_MobileControlSkinManager__GetSkinSourceName(path,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._sourceOptions;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar4 = 0;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        return 0;
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_String__Equals_52ffe30(pSVar3->m_Items[uVar4],b,5,(MethodInfo *)0x0);
      if (bVar2) {
        return (int32_t)uVar4;
      }
      uVar4 = uVar4 + 1;
      pSVar3 = (__this->fields)._sourceOptions;
    } while (pSVar3 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutSkinPickerModal$$GetSelectedSource
// il2cpp: System_String_o* UI_MobileLayoutSkinPickerModal__GetSelectedSource (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cadb00

System_String_o *
UI_MobileLayoutSkinPickerModal__GetSelectedSource(UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  Settings_IntSetting_o *pSVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_07547a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547a7d = '\x01';
  }
  pSVar2 = (__this->fields)._sourceOptions;
  if ((pSVar2 == (System_String_array *)0x0) || (pSVar2->max_length == 0)) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar3 = (__this->fields)._sourceFilter;
  uVar4 = (uint)pSVar2->max_length;
  if (pSVar3 == (Settings_IntSetting_o *)0x0) {
    lVar5 = 0;
    if (uVar4 == 0) goto label_05cadb87;
  }
  else {
    uVar1 = (pSVar3->fields)._value;
    uVar6 = uVar4 - 1;
    if ((int)uVar1 < (int)(uVar4 - 1)) {
      uVar6 = uVar1;
    }
    uVar7 = 0;
    if (-1 < (int)uVar1) {
      uVar7 = uVar6;
    }
    lVar5 = (long)(int)uVar7;
    if (uVar4 <= uVar7) {
label_05cadb87:
      ThrowIndexOutOfRangeException();
    }
  }
  return pSVar2->m_Items[lVar5];
}


// UI.MobileLayoutSkinPickerModal$$CreateOptionRow
// il2cpp: void UI_MobileLayoutSkinPickerModal__CreateOptionRow (UI_MobileLayoutSkinPickerModal_o* __this, System_String_o* option, System_String_o* displayName, const MethodInfo* method);
// 0x5cad6d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cada4a: mov r15, qword ptr [rsp + 8]

void UI_MobileLayoutSkinPickerModal__CreateOptionRow
               (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *option,System_String_o *displayName,
               MethodInfo *method)

{
  bool bVar1;
  UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0_o *__this_00;
  UI_MobileLayoutSkinPickerModal_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_03;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_Events_UnityAction_o *__this_04;
  UI_MobileLayoutSkinPickerModal_o *__this_05;
  System_String_o **targetAddress;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07547a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutSkinPickerModal_c__DisplayClass39_0_CreateOptionRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutSkinPickerModal_c__DisplayClass39_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinRow");
    il2cpp_codegen_initialize_runtime_metadata(&" *");
    Il2CppMethodInitialized_07547a7e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutSkinPickerModal_c__DisplayClass39_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileLayoutSkinPickerModal___c__DisplayClass39_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    targetAddress = &(__this_00->fields).option;
    (__this_00->fields).option = option;
    pUVar2 = (UI_MobileLayoutSkinPickerModal_o *)targetAddress;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (UI_MobileLayoutSkinPickerModal_o *)
             UI_MobileLayoutSkinPickerModal__CreateRect
                       (pUVar2,"SkinRow",(__this->fields)._rowsRoot,method);
    if ((pUVar2 != (UI_MobileLayoutSkinPickerModal_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)pUVar2,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                           ), pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
      (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar3,500.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar3,54.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar2,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
      if (__this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,8.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)__this_01,3,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
        __this_05 = pUVar2;
        parent = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)pUVar2,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                           );
        pUVar4 = UI_MobileLayoutSkinPickerModal__CreateRect
                           (__this_05,"Preview",parent,(MethodInfo *)&"Preview");
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar4,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
           pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
          (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar3,46.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
          (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar3,46.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar4,(MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          pSVar5 = *targetAddress;
          if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
          }
          value = UI_MobileControlSkinManager__GetSprite(pSVar5,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
            UnityEngine_UI_Image__set_preserveAspect(__this_02,true,(MethodInfo *)0x0);
            UVar6.fields.b = 1.0;
            UVar6.fields.a = 1.0;
            UVar6.fields.r = 1.0;
            UVar6.fields.g = 1.0;
            (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                      (__this_02,UVar6,(__this_02->klass->vtable)._23_set_color.method);
            (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
            pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
            UI_ElementStyle___ctor(__this_03,0x12,120.0,20.0,pSVar5,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(*targetAddress,(__this->fields)._current,(MethodInfo *)0x0);
            if (bVar1) {
              displayName = System_String__Concat_52f0320(displayName," *",(MethodInfo *)0x0)
              ;
            }
            parent_00 = UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
            __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_04,(Il2CppObject *)__this_00,
                       (intptr_t)
                       MethodInfo_UI_MobileLayoutSkinPickerModal_c__DisplayClass39_0_CreateOptionRow_b__0,
                       (MethodInfo *)0x0);
            pUVar4 = UI_ElementFactory__CreateDefaultButton
                               (parent_00,__this_03,displayName,420.0,44.0,__this_04,(MethodInfo *)0x0);
            if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar4,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
               pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
              (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                        (pUVar3,1.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutSkinPickerModal$$CreateText
// il2cpp: UnityEngine_UI_Text_o* UI_MobileLayoutSkinPickerModal__CreateText (UI_MobileLayoutSkinPickerModal_o* __this, System_String_o* name, UnityEngine_RectTransform_o* parent, System_String_o* value, int32_t alignment, const MethodInfo* method);
// 0x5cad400

UnityEngine_UI_Text_o *
UI_MobileLayoutSkinPickerModal__CreateText
          (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *name,UnityEngine_RectTransform_o *parent,
          System_String_o *value,int32_t alignment,MethodInfo *method)

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
  if (Il2CppMethodInitialized_07547a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    __this_03 = &"InputTextColor";
    il2cpp_codegen_initialize_runtime_metadata(&"InputTextColor");
    Il2CppMethodInitialized_07547a7f = '\x01';
  }
  __this_00 = UI_MobileLayoutSkinPickerModal__CreateRect
                        ((UI_MobileLayoutSkinPickerModal_o *)__this_03,name,parent,method_00);
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


// UI.MobileLayoutSkinPickerModal$$CreateRect
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutSkinPickerModal__CreateRect (UI_MobileLayoutSkinPickerModal_o* __this, System_String_o* name, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5caccc0

UnityEngine_GameObject_o *
UI_MobileLayoutSkinPickerModal__CreateRect
          (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *name,UnityEngine_RectTransform_o *parent,
          MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_07547a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07547a80 = '\x01';
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


// UI.MobileLayoutSkinPickerModal$$.ctor
// il2cpp: void UI_MobileLayoutSkinPickerModal___ctor (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cadba0

void UI_MobileLayoutSkinPickerModal___ctor(UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutSkinPickerModal$$<SetupPicker>b__33_0
// il2cpp: void UI_MobileLayoutSkinPickerModal___SetupPicker_b__33_0 (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cadbb0

void UI_MobileLayoutSkinPickerModal___SetupPicker_b__33_0
               (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547a81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a81 = '\x01';
  }
  pSVar1 = (__this->fields)._onSelect;
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,**(undefined8 **)(g_data_07556758 + 0xb8),(pSVar1->fields).method);
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


// UI.MobileLayoutSkinPickerModal$$<SetupPicker>b__33_1
// il2cpp: void UI_MobileLayoutSkinPickerModal___SetupPicker_b__33_1 (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cadc40

void UI_MobileLayoutSkinPickerModal___SetupPicker_b__33_1
               (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a82 = '\x01';
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


// UI.MobileLayoutSkinPickerModal$$<CreateSearchInput>b__34_0
// il2cpp: void UI_MobileLayoutSkinPickerModal___CreateSearchInput_b__34_0 (UI_MobileLayoutSkinPickerModal_o* __this, const MethodInfo* method);
// 0x5cadca0

void UI_MobileLayoutSkinPickerModal___CreateSearchInput_b__34_0
               (UI_MobileLayoutSkinPickerModal_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_MobileLayoutSkinPickerModal__Populate(__this,(System_String_o *)method,in_RDX);
  return;
}


// UI.MobileLayoutSkinPickerModal$$<CreateSearchInput>b__34_1
// il2cpp: void UI_MobileLayoutSkinPickerModal___CreateSearchInput_b__34_1 (UI_MobileLayoutSkinPickerModal_o* __this, System_String_o* __, const MethodInfo* method);
// 0x5cadcb0

void UI_MobileLayoutSkinPickerModal___CreateSearchInput_b__34_1
               (UI_MobileLayoutSkinPickerModal_o *__this,System_String_o *__,MethodInfo *method)

{
  UI_MobileLayoutSkinPickerModal__Populate(__this,__,method);
  return;
}


