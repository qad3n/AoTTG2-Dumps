// Type: UI.KeybindSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KeybindSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/KeybindSettingElement.cs
// --------------------------------

// UI.KeybindSettingElement.<>c__DisplayClass5_0$$.ctor
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___ctor (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5cf37b0

void UI_KeybindSettingElement___c__DisplayClass5_0___ctor
               (UI_KeybindSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement.<>c__DisplayClass5_0$$<CreateKeybindButton>b__0
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___CreateKeybindButton_b__0 (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5cf3a60

void UI_KeybindSettingElement___c__DisplayClass5_0___CreateKeybindButton_b__0
               (UI_KeybindSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  UI_KeybindSettingElement_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_KeybindSettingElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_KeybindSettingElement__OnButtonClicked(__this_00,(__this->fields).index,in_RDX);
  return;
}


// UI.KeybindSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_KeybindSettingElement__get_SupportedSettingTypes (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x5cf31e0

System_Collections_Generic_HashSet_SettingType__o *
UI_KeybindSettingElement__get_SupportedSettingTypes(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547c9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547c9d = '\x01';
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
            ((System_Collections_Generic_HashSet_T__o *)__this_00,5,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.KeybindSettingElement$$Setup
// il2cpp: void UI_KeybindSettingElement__Setup (UI_KeybindSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_KeybindPopup_o* keybindPopup, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t bindCount, const MethodInfo* method);
// 0x5cf3260

void UI_KeybindSettingElement__Setup
               (UI_KeybindSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_KeybindPopup_o *keybindPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,int32_t bindCount,MethodInfo *method)

{
  MethodInfo *method_00;
  int index;
  MethodInfo *method_01;
  
  (__this->fields)._keybindPopup = keybindPopup;
  method_00 = (MethodInfo *)title;
  method_01 = (MethodInfo *)tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._keybindPopup);
  if (0 < bindCount) {
    index = 0;
    do {
      UI_KeybindSettingElement__CreateKeybindButton(__this,index,style,elementWidth,elementHeight,method_00);
      index = index + 1;
    } while (bindCount != index);
  }
  UI_BaseSettingElement__Setup((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,method_01);
  return;
}


// UI.KeybindSettingElement$$CreateKeybindButton
// il2cpp: void UI_KeybindSettingElement__CreateKeybindButton (UI_KeybindSettingElement_o* __this, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x5cf3300

void UI_KeybindSettingElement__CreateKeybindButton
               (UI_KeybindSettingElement_o *__this,int32_t index,UI_ElementStyle_o *style,float width,
               float height,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  UnityEngine_UI_Text_array *pUVar4;
  UnityEngine_UI_ColorBlock_o value;
  MethodInfo *pMVar5;
  UI_KeybindSettingElement___c__DisplayClass5_0_o *__this_02;
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Button_o *pUVar8;
  UnityEngine_Events_UnityAction_o *__this_04;
  UnityEngine_Color_o UVar9;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547c9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_KeybindSettingElement_c__DisplayClass5_0_CreateKeybindButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_KeybindSettingElement_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"KeybindTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybind");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/elements/KeybindButton");
    Il2CppMethodInitialized_07547c9e = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_KeybindSettingElement_c__DisplayClass5_0);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (UI_KeybindSettingElement___c__DisplayClass5_0_o *)0x0) {
    (__this_02->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
    (__this_02->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar3,"Prefabs/elements/KeybindButton",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
    if (root != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          __this_03 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar6,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          if (style != (UI_ElementStyle_o *)0x0) {
            pSVar3 = (style->fields).ThemePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            UVar9 = UI_UIManager__GetThemeColor
                              (pSVar3,"DefaultSetting","KeybindTextColor","DefaultPanel",
                               (MethodInfo *)0x0);
            if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
              (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                        (__this_03,UVar9,(__this_03->klass->vtable)._23_set_color.method);
              UnityEngine_UI_Text__set_fontSize(__this_03,(style->fields).FontSize,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                 (root,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar7,width,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
                pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                   (root,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar7,height,(pUVar7->klass->vtable)._38_set_preferredHeight.method);
                  pUVar6 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                  parent = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent_692d510(pUVar6,parent,false,(MethodInfo *)0x0);
                    pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                       (root,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                    if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
                      __this_04 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                (__this_04,(Il2CppObject *)__this_02,
                                 (intptr_t)
                                 MethodInfo_UI_KeybindSettingElement_c__DisplayClass5_0_CreateKeybindButton_b__0
                                 ,(MethodInfo *)0x0);
                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
                        pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                           (root,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                        UI_UIManager__GetThemeColorBlock
                                  (&local_88,(style->fields).ThemePanel,"DefaultSetting",
                                   "Keybind","DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                          value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                          value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                          value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                          value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                          value.fields.m_HighlightedColor.fields.r =
                               local_88.fields.m_HighlightedColor.fields.r;
                          value.fields.m_HighlightedColor.fields.g =
                               local_88.fields.m_HighlightedColor.fields.g;
                          value.fields.m_HighlightedColor.fields.b =
                               local_88.fields.m_HighlightedColor.fields.b;
                          value.fields.m_HighlightedColor.fields.a =
                               local_88.fields.m_HighlightedColor.fields.a;
                          value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
                          value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
                          value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
                          value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
                          value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
                          value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
                          value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
                          value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
                          value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
                          value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
                          value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
                          value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
                          value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                          value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                          UnityEngine_UI_Selectable__set_colors
                                    ((UnityEngine_UI_Selectable_o *)pUVar8,value,(MethodInfo *)0x0);
                          pMVar5 = MethodInfo_System_Collections_Generic_List_Text_Add;
                          __this_01 = (__this->fields)._buttonLabels;
                          if (__this_01 != (System_Collections_Generic_List_Text__o *)0x0) {
                            piVar1 = &(__this_01->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar4 = (__this_01->fields)._items;
                            if (pUVar4 != (UnityEngine_UI_Text_array *)0x0) {
                              uVar2 = (__this_01->fields)._size;
                              if (uVar2 < (uint)pUVar4->max_length) {
                                (__this_01->fields)._size = uVar2 + 1;
                                pUVar4->m_Items[(int)uVar2] = __this_03;
                                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_01,
                                           (Il2CppObject *)__this_03,
                                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
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
  ThrowNullReferenceException();
}


// UI.KeybindSettingElement$$OnButtonClicked
// il2cpp: void UI_KeybindSettingElement__OnButtonClicked (UI_KeybindSettingElement_o* __this, int32_t index, const MethodInfo* method);
// 0x5cf37c0

void UI_KeybindSettingElement__OnButtonClicked
               (UI_KeybindSettingElement_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UI_KeybindPopup_o *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  Settings_InputKey_o *setting;
  UnityEngine_UI_Text_o *label;
  
  if (Il2CppMethodInitialized_07547c9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_get_Item);
    Il2CppMethodInitialized_07547c9f = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_KeybindSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    if ((*(uint64_t *)((char *)pSVar2 + 0x18)) != (Settings_BaseSetting_c *)0x0) {
      __this_00 = (__this->fields)._keybindPopup;
      setting = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)(*(uint64_t *)((char *)pSVar2 + 0x18)),index,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item)
      ;
      __this_01 = (__this->fields)._buttonLabels;
      if (__this_01 != (System_Collections_Generic_List_Text__o *)0x0) {
        label = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,index,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Text_get_Item);
        if (__this_00 != (UI_KeybindPopup_o *)0x0) {
          UI_KeybindPopup__Show(__this_00,setting,label,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindSettingElement$$SyncElement
// il2cpp: void UI_KeybindSettingElement__SyncElement (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x5cf38a0

void UI_KeybindSettingElement__SyncElement(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Settings_InputKey_o *pSVar4;
  System_String_o *pSVar5;
  int32_t index;
  System_Collections_Generic_List_Text__o *__this_00;
  
  if (Il2CppMethodInitialized_07547ca0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_get_Item);
    Il2CppMethodInitialized_07547ca0 = '\x01';
  }
  __this_00 = (__this->fields)._buttonLabels;
  if (__this_00 != (System_Collections_Generic_List_Text__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      pUVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Text_get_Item);
      pSVar2 = (__this->fields)._setting;
      if (pSVar2 == (Settings_BaseSetting_o *)0x0) break;
      bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
      if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      if ((*(uint64_t *)((char *)pSVar2 + 0x18)) == (Settings_BaseSetting_c *)0x0) break;
      pSVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)(*(uint64_t *)((char *)pSVar2 + 0x18)),index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      if (pSVar4 == (Settings_InputKey_o *)0x0) break;
      pSVar5 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
      if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) break;
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar5,(pUVar3->klass->vtable)._75_set_text.method);
      index = index + 1;
      __this_00 = (__this->fields)._buttonLabels;
    } while (__this_00 != (System_Collections_Generic_List_Text__o *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.KeybindSettingElement$$.ctor
// il2cpp: void UI_KeybindSettingElement___ctor (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x5cf39e0

void UI_KeybindSettingElement___ctor(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Text__o *__this_00;
  
  if (Il2CppMethodInitialized_07547ca1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Text);
    Il2CppMethodInitialized_07547ca1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Text);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Text_ctor);
  (__this->fields)._buttonLabels = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buttonLabels);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


