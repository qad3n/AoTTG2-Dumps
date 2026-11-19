// Type: UI.ToggleGroupSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/ToggleGroupSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleGroupSettingElement.cs
// --------------------------------

// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___ctor (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x5cf8b20

void UI_ToggleGroupSettingElement___c__DisplayClass8_0___ctor
               (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___CreateOptionToggle_b__0 (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, bool value, const MethodInfo* method);
// 0x5cf8ed0

void UI_ToggleGroupSettingElement___c__DisplayClass8_0___CreateOptionToggle_b__0
               (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this,bool value,MethodInfo *method)

{
  UI_ToggleGroupSettingElement_o *__this_00;
  MethodInfo *in_R8;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ToggleGroupSettingElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ToggleGroupSettingElement__OnValueChanged
            (__this_00,(__this->fields).option,(__this->fields).index,value,in_R8);
  return;
}


// UI.ToggleGroupSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleGroupSettingElement__get_SupportedSettingTypes (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x5cf8170

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleGroupSettingElement__get_SupportedSettingTypes
          (UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547cbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547cbe = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_4FAD1E0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 == (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.ToggleGroupSettingElement$$Setup
// il2cpp: void UI_ToggleGroupSettingElement__Setup (UI_ToggleGroupSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x5cf8210

void UI_ToggleGroupSettingElement__Setup
               (UI_ToggleGroupSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Toggle__o *__this_00;
  UnityEngine_UI_Toggle_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_ToggleGroup_o *pUVar7;
  ulong uVar8;
  UnityEngine_UI_Toggle_o *item;
  UnityEngine_UI_LayoutElement_o *pUVar9;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  System_String_o *message;
  MethodInfo *pMVar10;
  System_String_array *method_00;
  ulong uVar11;
  
  method_00 = options;
  pMVar10 = (MethodInfo *)tooltip;
  if (Il2CppMethodInitialized_07547cbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ToggleGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Toggle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07547cbf = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"ToggleGroup cannot have 0 options.");
      System_ArgumentException___ctor_54186d0(__this_01,message,(MethodInfo *)0x0);
      pMVar10 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ToggleGroupSettingElement_Setup);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar10);
    }
    (__this->fields)._options = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Options",(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        (__this->fields)._optionsPanel = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._optionsPanel);
        pUVar6 = (__this->fields)._optionsPanel;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar6,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_ToggleGroup);
          (__this->fields)._toggleGroup = pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._toggleGroup);
          if (0 < (int)options->max_length) {
            uVar8 = options->max_length & 0xffffffff;
            uVar11 = 0;
            do {
              if (uVar8 <= uVar11) {
                ThrowIndexOutOfRangeException();
              }
              __this_00 = (__this->fields)._toggles;
              item = UI_ToggleGroupSettingElement__CreateOptionToggle
                               (__this,options->m_Items[uVar11],(int32_t)uVar11,style,elementWidth,
                                elementHeight,(MethodInfo *)method_00);
              pMVar4 = MethodInfo_System_Collections_Generic_List_Toggle_Add;
              if (__this_00 == (System_Collections_Generic_List_Toggle__o *)0x0) goto label_05cf848a;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar3 = (__this_00->fields)._items;
              if (pUVar3 == (UnityEngine_UI_Toggle_array *)0x0) goto label_05cf848a;
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2] = item;
                Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                           (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
              }
              uVar11 = uVar11 + 1;
              uVar2 = (uint)options->max_length;
              uVar8 = (ulong)uVar2;
            } while ((long)uVar11 < (long)(int)uVar2);
          }
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Transform__Find(pUVar5,"Label",(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar9 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar5,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (pUVar9 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar9->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar9,elementHeight,(pUVar9->klass->vtable)._38_set_preferredHeight.method);
                  UI_BaseSettingElement__Setup
                            ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,pMVar10);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_05cf848a:
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$CreateOptionToggle
// il2cpp: UnityEngine_UI_Toggle_o* UI_ToggleGroupSettingElement__CreateOptionToggle (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x5cf84e0

UnityEngine_UI_Toggle_o *
UI_ToggleGroupSettingElement__CreateOptionToggle
          (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,
          UI_ElementStyle_o *style,float width,float height,MethodInfo *method)

{
  float fVar1;
  int32_t value;
  System_String_o *pSVar2;
  UnityEngine_Events_UnityEvent_bool__o *__this_00;
  UnityEngine_Vector2_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this_01;
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Toggle_o *__this_04;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_UI_Image_o *pUVar6;
  System_String_o **targetAddress;
  UnityEngine_Color_o UVar7;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547cc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0_CreateOptionToggle_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleGroupOption");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleFilledColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkmark");
    Il2CppMethodInitialized_07547cc0 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    targetAddress = &(__this_01->fields).option;
    (__this_01->fields).option = option;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this_01->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar2,"Prefabs/Elements/ToggleGroupOption",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
    if (root != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._optionsPanel;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar3,parent,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Transform__Find(pUVar3,"Label",(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar3,
                                  (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
              if (style != (UI_ElementStyle_o *)0x0) {
                pSVar2 = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                UVar7 = UI_UIManager__GetThemeColor
                                  (pSVar2,"DefaultSetting","TextColor","DefaultPanel",
                                   (MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                  (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                            (pUVar4,UVar7,(pUVar4->klass->vtable)._23_set_color.method);
                  pUVar3 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Label",(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      pUVar5 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                      pSVar2 = *targetAddress;
                      value = (style->fields).FontSize;
                      if (Il2CppMethodInitialized_07547c72 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                        Il2CppMethodInitialized_07547c72 = '\x01';
                      }
                      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar5,(MethodInfo_353B730 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                                    (pUVar4,pSVar2,(pUVar4->klass->vtable)._75_set_text.method);
                          UnityEngine_UI_Text__set_fontSize(pUVar4,value,(MethodInfo *)0x0);
                          pUVar3 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                            pUVar3 = UnityEngine_Transform__Find
                                               (pUVar3,"Background",(MethodInfo *)0x0);
                            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                              __this_02 = UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar3,
                                                     (MethodInfo_34B0830 *)
                                                     MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                    );
                              if (__this_02 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                pUVar3 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar3 = UnityEngine_Transform__Find
                                                     (pUVar3,"Checkmark",(MethodInfo *)0x0);
                                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                    __this_03 = UnityEngine_Component__GetComponent_object_
                                                          ((UnityEngine_Component_o *)pUVar3,
                                                           (MethodInfo_34B0830 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                    (*(__this_02->klass->vtable)._36_set_preferredWidth.methodPtr)
                                              (__this_02,width,
                                               (__this_02->klass->vtable)._36_set_preferredWidth.method);
                                    (*(__this_02->klass->vtable)._38_set_preferredHeight.methodPtr)
                                              (__this_02,height,
                                               (__this_02->klass->vtable)._38_set_preferredHeight.method);
                                    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                                      fVar1 = (__this->fields)._checkMarkSizeMultiplier;
                                      value_00.fields.y = height * fVar1;
                                      value_00.fields.x = width * fVar1;
                                      UnityEngine_RectTransform__set_sizeDelta
                                                (__this_03,value_00,(MethodInfo *)0x0);
                                      __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                            (root,(MethodInfo_353B730 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
                                      if (__this_04 != (UnityEngine_UI_Toggle_o *)0x0) {
                                        UnityEngine_UI_Toggle__set_group
                                                  (__this_04,(__this->fields)._toggleGroup,(MethodInfo *)0x0);
                                        UnityEngine_UI_Toggle__set_isOn(__this_04,false,(MethodInfo *)0x0);
                                        __this_00 = (UnityEngine_Events_UnityEvent_bool__o *)
                                                    (__this_04->fields).onValueChanged;
                                        call = (UnityEngine_Events_UnityAction_T0__o *)
                                               il2cpp_codegen_object_new
                                                         ((Il2CppClass *)
                                                          TypeInfo_UnityEngine_Events_UnityAction_bool);
                                        UnityEngine_Events_UnityAction_bool____ctor
                                                  ((UnityEngine_Events_UnityAction_bool__o *)call,
                                                   (Il2CppObject *)__this_01,
                                                   (intptr_t)
                                                   MethodInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0_CreateOptionToggle_b__0
                                                   ,(MethodInfo_4311710 *)0x0);
                                        if (__this_00 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                                          UnityEngine_Events_UnityEvent_bool___AddListener
                                                    (__this_00,call,
                                                     (MethodInfo_43179D0 *)
                                                     MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener
                                                    );
                                          UI_UIManager__GetThemeColorBlock
                                                    (&local_88,(style->fields).ThemePanel,
                                                     "DefaultSetting","Toggle",
                                                     "DefaultPanel",(MethodInfo *)0x0);
                                          value_01.fields.m_NormalColor.fields.b =
                                               local_88.fields.m_NormalColor.fields.b;
                                          value_01.fields.m_NormalColor.fields.a =
                                               local_88.fields.m_NormalColor.fields.a;
                                          value_01.fields.m_NormalColor.fields.r =
                                               local_88.fields.m_NormalColor.fields.r;
                                          value_01.fields.m_NormalColor.fields.g =
                                               local_88.fields.m_NormalColor.fields.g;
                                          value_01.fields.m_HighlightedColor.fields.r =
                                               local_88.fields.m_HighlightedColor.fields.r;
                                          value_01.fields.m_HighlightedColor.fields.g =
                                               local_88.fields.m_HighlightedColor.fields.g;
                                          value_01.fields.m_HighlightedColor.fields.b =
                                               local_88.fields.m_HighlightedColor.fields.b;
                                          value_01.fields.m_HighlightedColor.fields.a =
                                               local_88.fields.m_HighlightedColor.fields.a;
                                          value_01.fields.m_PressedColor.fields.r =
                                               local_88.fields.m_PressedColor.fields.r;
                                          value_01.fields.m_PressedColor.fields.g =
                                               local_88.fields.m_PressedColor.fields.g;
                                          value_01.fields.m_PressedColor.fields.b =
                                               local_88.fields.m_PressedColor.fields.b;
                                          value_01.fields.m_PressedColor.fields.a =
                                               local_88.fields.m_PressedColor.fields.a;
                                          value_01.fields.m_SelectedColor.fields.r =
                                               local_88.fields.m_SelectedColor.fields.r;
                                          value_01.fields.m_SelectedColor.fields.g =
                                               local_88.fields.m_SelectedColor.fields.g;
                                          value_01.fields.m_SelectedColor.fields.b =
                                               local_88.fields.m_SelectedColor.fields.b;
                                          value_01.fields.m_SelectedColor.fields.a =
                                               local_88.fields.m_SelectedColor.fields.a;
                                          value_01.fields.m_DisabledColor.fields.r =
                                               local_88.fields.m_DisabledColor.fields.r;
                                          value_01.fields.m_DisabledColor.fields.g =
                                               local_88.fields.m_DisabledColor.fields.g;
                                          value_01.fields.m_DisabledColor.fields.b =
                                               local_88.fields.m_DisabledColor.fields.b;
                                          value_01.fields.m_DisabledColor.fields.a =
                                               local_88.fields.m_DisabledColor.fields.a;
                                          value_01.fields.m_ColorMultiplier =
                                               local_88.fields.m_ColorMultiplier;
                                          value_01.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                          UnityEngine_UI_Selectable__set_colors
                                                    ((UnityEngine_UI_Selectable_o *)__this_04,value_01,
                                                     (MethodInfo *)0x0);
                                          pUVar6 = UnityEngine_Component__GetComponent_object_
                                                             ((UnityEngine_Component_o *)__this_03,
                                                              (MethodInfo_34B0830 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                          UVar7 = UI_UIManager__GetThemeColor
                                                            ((style->fields).ThemePanel,"DefaultSetting",
                                                             "ToggleFilledColor","DefaultPanel",
                                                             (MethodInfo *)0x0);
                                          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                                            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                                      (pUVar6,UVar7,
                                                       (pUVar6->klass->vtable)._23_set_color.method);
                                            return __this_04;
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
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$OnValueChanged
// il2cpp: void UI_ToggleGroupSettingElement__OnValueChanged (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, bool value, const MethodInfo* method);
// 0x5cf8b30

void UI_ToggleGroupSettingElement__OnValueChanged
               (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,bool value,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_TypedSetting_T__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  
  if (Il2CppMethodInitialized_07547cc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547cc1 = '\x01';
  }
  if (!value) {
    return;
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_int__o *)0x0) goto label_05cf8c4a;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)
       ) {
      Settings_TypedSetting_int___set_Value
                (__this_01,index,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_T__o *)0x0) {
label_05cf8c4a:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      Settings_TypedSetting_object___set_Value
                (__this_00,(Il2CppObject *)option,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception();
}


// UI.ToggleGroupSettingElement$$SyncElement
// il2cpp: void UI_ToggleGroupSettingElement__SyncElement (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x5cf8c50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cf8d1e: lea rcx, [rip + 0x159e3db]  ; MethodInfo_System_Collections_Generic_List_Toggle_get_Item
// asm:   0x5cf8d25: mov rdx, qword ptr [rcx]
// asm:   0x5cf8d28: mov esi, eax
// asm:   0x5cf8d2a: jmp 0x5cf8d78

void UI_ToggleGroupSettingElement__SyncElement(UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  Settings_BaseSetting_o *pSVar3;
  int32_t index;
  UnityEngine_UI_Toggle_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Toggle__o *__this_02;
  
  if (Il2CppMethodInitialized_07547cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Toggle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547cc2 = '\x01';
  }
  __this_00 = (__this->fields)._toggleGroup;
  if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
    UnityEngine_UI_ToggleGroup__SetAllTogglesOff(__this_00,true,(MethodInfo *)0x0);
    iVar2 = (__this->fields)._settingType;
    if (iVar2 == 2) {
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_05cf8d94;
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
      goto label_05cf8d99;
      __this_02 = (__this->fields)._toggles;
      if (__this_02 == (System_Collections_Generic_List_Toggle__o *)0x0) goto label_05cf8d94;
      index = *(int32_t *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_05cf8d94;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
label_05cf8d99:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      index = UI_ToggleGroupSettingElement__FindOptionIndex(__this,(*(uint64_t *)((char *)pSVar3 + 0x20)),method_00);
      __this_02 = (__this->fields)._toggles;
      if (__this_02 == (System_Collections_Generic_List_Toggle__o *)0x0) goto label_05cf8d94;
    }
    __this_01 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_02,index,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Toggle_get_Item);
    if (__this_01 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
label_05cf8d94:
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$FindOptionIndex
// il2cpp: int32_t UI_ToggleGroupSettingElement__FindOptionIndex (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, const MethodInfo* method);
// 0x5cf8da0

int32_t UI_ToggleGroupSettingElement__FindOptionIndex
                  (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  ulong uVar4;
  
  pSVar3 = (__this->fields)._options;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar4 = 0;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
        __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
        paramName = il2cpp_codegen_get_runtime_metadata(&"Option not found");
        System_ArgumentOutOfRangeException___ctor_5419ca0(__this_00,paramName,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ToggleGroupSettingElement_FindOptionIndex);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_String__op_Equality(pSVar3->m_Items[uVar4],option,(MethodInfo *)0x0);
      if (bVar2) {
        return (int32_t)uVar4;
      }
      uVar4 = uVar4 + 1;
      pSVar3 = (__this->fields)._options;
    } while (pSVar3 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___ctor (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x5cf8e50

void UI_ToggleGroupSettingElement___ctor(UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Toggle__o *__this_00;
  
  if (Il2CppMethodInitialized_07547cc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Toggle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Toggle);
    Il2CppMethodInitialized_07547cc3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Toggle);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Toggle_ctor);
  (__this->fields)._toggles = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggles);
  (__this->fields)._checkMarkSizeMultiplier = 0.67;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


