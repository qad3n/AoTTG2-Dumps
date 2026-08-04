// Type: UI.KeybindSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KeybindSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/KeybindSettingElement.cs
// --------------------------------

// UI.KeybindSettingElement.<>c__DisplayClass5_0$$.ctor
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___ctor (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x4394290

void UI_KeybindSettingElement___c__DisplayClass5_0___ctor
               (UI_KeybindSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement.<>c__DisplayClass5_0$$<CreateKeybindButton>b__0
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___CreateKeybindButton_b__0 (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x4394540

void UI_KeybindSettingElement___c__DisplayClass5_0___CreateKeybindButton_b__0
               (UI_KeybindSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  UI_KeybindPopup_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  UI_KeybindSettingElement_o *pUVar2;
  Settings_InputKey_o *setting;
  UnityEngine_UI_Text_o *label;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  System_Threading_CancellationTokenSource_o *__this_02;
  System_Collections_Generic_HashSet_T__o *__this_03;
  int index_00;
  System_Collections_Generic_List_Text__o *__this_04;
  UnityEngine_UI_Text_array *pUVar6;
  UnityEngine_MonoBehaviour_o *__this_05;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_KeybindSettingElement_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae2c4 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
      il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
      g_data_057ae2c4 = '\x01';
    }
    __this_03 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
    System_Collections_Generic_HashSet_Int32Enum____ctor(__this_03,MethodInfo_HashSet_1_Settings_SettingType);
    return;
  }
  index = (__this->fields).index;
  if (g_data_057ae2c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_get_Item);
    g_data_057ae2c1 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_Text__o *)(pUVar2->fields)._setting;
  if (__this_04 != (System_Collections_Generic_List_Text__o *)0x0) {
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((__this_04->klass->_2).naturalAligment < bVar1) ||
       ((__this_04->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_04394379;
    pUVar6 = (__this_04->fields)._items;
    __this_04 = (System_Collections_Generic_List_Text__o *)0x0;
    if (pUVar6 != (UnityEngine_UI_Text_array *)0x0) {
      __this_00 = (pUVar2->fields)._keybindPopup;
      setting = (Settings_InputKey_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pUVar6,index,MethodInfo_InputKey_get_Item);
      __this_04 = (pUVar2->fields)._buttonLabels;
      if ((__this_04 != (System_Collections_Generic_List_Text__o *)0x0) &&
         (label = (UnityEngine_UI_Text_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_04,index,MethodInfo_Text_get_Item),
         __this_00 != (UI_KeybindPopup_o *)0x0)) {
        UI_KeybindPopup__Show(__this_00,setting,label,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04394379:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae2c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_get_Item);
    g_data_057ae2c2 = '\x01';
  }
  pUVar6 = __this_04[1].fields._items;
  if (pUVar6 != (UnityEngine_UI_Text_array *)0x0) {
    index_00 = 0;
    while( true ) {
      if ((int)pUVar6->max_length <= index_00) {
        return;
      }
      pIVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pUVar6,index_00,MethodInfo_Text_get_Item);
      __this_05 = (UnityEngine_MonoBehaviour_o *)(__this_04->fields)._syncRoot;
      if (__this_05 == (UnityEngine_MonoBehaviour_o *)0x0) break;
      bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
      if (((((Il2CppClass *)__this_05->klass)->_2).naturalAligment < bVar1) ||
         ((((Il2CppClass *)__this_05->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
        il2cpp_runtime_helper_022b2fd0();
        if (g_data_057ae2c3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Text);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Text);
          g_data_057ae2c3 = '\x01';
        }
        __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Text);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_UI_Text);
        __this_05[1].fields.m_CancellationTokenSource = __this_02;
        il2cpp_runtime_helper_022b4080(&__this_05[1].fields.m_CancellationTokenSource);
        UnityEngine_MonoBehaviour___ctor(__this_05,(MethodInfo *)0x0);
        return;
      }
      __this_01 = (System_Collections_Generic_List_object__o *)(__this_05->fields).m_CachedPtr;
      if (((__this_01 == (System_Collections_Generic_List_object__o *)0x0) ||
          (pIVar4 = System_Collections_Generic_List_object___get_Item(__this_01,index_00,MethodInfo_InputKey_get_Item),
          pIVar4 == (Il2CppObject *)0x0)) ||
         (uVar5 = (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method),
         pIVar3 == (Il2CppObject *)0x0)) break;
      (*pIVar3->klass->vtable[0x4b].methodPtr)(pIVar3,uVar5,pIVar3->klass->vtable[0x4b].method);
      index_00 = index_00 + 1;
      pUVar6 = __this_04[1].fields._items;
      if (pUVar6 == (UnityEngine_UI_Text_array *)0x0) break;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.KeybindSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_KeybindSettingElement__get_SupportedSettingTypes (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x4393c90

System_Collections_Generic_HashSet_SettingType__o *
UI_KeybindSettingElement__get_SupportedSettingTypes(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  UI_ElementStyle_o *style;
  int index;
  MethodInfo_33DA550 *setting;
  System_Collections_Generic_HashSet_SettingType__o *__this_01;
  System_Runtime_Serialization_SerializationInfo_o *in_R8;
  System_String_o *in_R9;
  float width;
  float in_XMM1_Da;
  int unaff_retaddr;
  
  if (g_data_057ae2bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2bf = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  setting = MethodInfo_HashSet_1_Settings_SettingType;
  __this_01 = __this_00;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,5,MethodInfo_Boolean_Add);
    return __this_00;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  ((System_Collections_Generic_HashSet_T__Fields *)&__this_01->fields)->_siInfo = in_R8;
  method_00 = in_RCX;
  il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_HashSet_T__Fields *)&__this_01->fields)->_siInfo,in_R8);
  if (0 < unaff_retaddr) {
    index = 0;
    do {
      UI_KeybindSettingElement__CreateKeybindButton
                ((UI_KeybindSettingElement_o *)__this_01,index,style,width,in_XMM1_Da,method_00);
      index = index + 1;
    } while (unaff_retaddr != index);
  }
  UI_BaseSettingElement__Setup
            ((UI_BaseSettingElement_o *)__this_01,(Settings_BaseSetting_o *)setting,style,
             (System_String_o *)in_RCX,in_R9,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.KeybindSettingElement$$Setup
// il2cpp: void UI_KeybindSettingElement__Setup (UI_KeybindSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_KeybindPopup_o* keybindPopup, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t bindCount, const MethodInfo* method);
// 0x4393d10

void UI_KeybindSettingElement__Setup
               (UI_KeybindSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_KeybindPopup_o *keybindPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,int32_t bindCount,MethodInfo *method)

{
  MethodInfo *method_00;
  int index;
  
  (__this->fields)._keybindPopup = keybindPopup;
  method_00 = (MethodInfo *)title;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._keybindPopup,keybindPopup);
  if (0 < bindCount) {
    index = 0;
    do {
      UI_KeybindSettingElement__CreateKeybindButton(__this,index,style,elementWidth,elementHeight,method_00);
      index = index + 1;
    } while (bindCount != index);
  }
  UI_BaseSettingElement__Setup
            ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement$$CreateKeybindButton
// il2cpp: void UI_KeybindSettingElement__CreateKeybindButton (UI_KeybindSettingElement_o* __this, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x4393db0

void UI_KeybindSettingElement__CreateKeybindButton
               (UI_KeybindSettingElement_o *__this,int32_t index,UI_ElementStyle_o *style,float width,
               float height,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  System_Object_array *pSVar3;
  UnityEngine_UI_ColorBlock_o value;
  long lVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Selectable_o *__this_04;
  UnityEngine_Events_UnityAction_o *__this_05;
  UnityEngine_Color_o UVar8;
  UnityEngine_Events_UnityAction_c *local_88;
  void *pvStack_80;
  intptr_t local_78;
  intptr_t iStack_70;
  Il2CppObject *local_68;
  intptr_t iStack_60;
  intptr_t local_58;
  intptr_t iStack_50;
  intptr_t local_48;
  intptr_t iStack_40;
  intptr_t local_38;
  
  if (g_data_057ae2c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateKeybindButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"KeybindTextColor");
    il2cpp_runtime_helper_023445d0(&"Keybind");
    il2cpp_runtime_helper_023445d0(&"Prefabs/elements/KeybindButton");
    g_data_057ae2c0 = '\x01';
  }
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  __this_05 = pUVar5;
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar5->fields).method_ptr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&pUVar5->fields,__this);
    *(int32_t *)&(pUVar5->fields).invoke_impl = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar5 = (UnityEngine_Events_UnityAction_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)__this_05,"Prefabs/elements/KeybindButton",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
      __this_05 = pUVar5;
      pUVar6 = (UnityEngine_Events_UnityAction_o *)
               UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityAction_o *)
                    UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar6,"Text",(MethodInfo *)0x0);
        __this_05 = pUVar6;
        if (__this_01 != (UnityEngine_Events_UnityAction_o *)0x0) {
          __this_02 = (UnityEngine_UI_Text_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_Text_GetComponent_Text);
          __this_05 = __this_01;
          if (style != (UI_ElementStyle_o *)0x0) {
            __this_05 = (UnityEngine_Events_UnityAction_o *)(style->fields).ThemePanel;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UVar8 = UI_UIManager__GetThemeColor
                              ((System_String_o *)__this_05,"DefaultSetting","KeybindTextColor","DefaultPanel",
                               (MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
              (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                        (UVar8.fields.r,UVar8.fields.b,__this_02,
                         (__this_02->klass->vtable)._23_set_color.method);
              UnityEngine_UI_Text__set_fontSize(__this_02,(style->fields).FontSize,(MethodInfo *)0x0);
              __this_05 = pUVar5;
              pIVar7 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar7 != (Il2CppObject *)0x0) {
                (*pIVar7->klass->vtable[0x24].methodPtr)(width,pIVar7,pIVar7->klass->vtable[0x24].method);
                __this_05 = pUVar5;
                pIVar7 = UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar7 != (Il2CppObject *)0x0) {
                  (*pIVar7->klass->vtable[0x26].methodPtr)(height,pIVar7);
                  __this_03 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                  __this_05 = (UnityEngine_Events_UnityAction_o *)__this;
                  parent = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent_4e09e30(__this_03,parent,0,(MethodInfo *)0x0);
                    __this_05 = pUVar5;
                    pIVar7 = UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Button_GetComponent_Button);
                    if (pIVar7 != (Il2CppObject *)0x0) {
                      __this_00 = pIVar7[0x10].klass;
                      pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      __this_05 = pUVar6;
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_00 != (Il2CppClass *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener
                                  ((UnityEngine_Events_UnityEvent_o *)__this_00,pUVar6,(MethodInfo *)0x0);
                        __this_04 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Button_GetComponent_Button);
                        __this_05 = (UnityEngine_Events_UnityAction_o *)&local_88;
                        UI_UIManager__GetThemeColorBlock
                                  ((UnityEngine_UI_ColorBlock_o *)__this_05,(style->fields).ThemePanel,
                                   "DefaultSetting","Keybind","DefaultPanel",(MethodInfo *)0x0);
                        if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                          value.fields.m_NormalColor.fields._8_8_ = pvStack_80;
                          value.fields.m_NormalColor.fields._0_8_ = local_88;
                          value.fields.m_HighlightedColor.fields.r = (float)(undefined4)local_78;
                          value.fields.m_HighlightedColor.fields.g = (float)local_78._4_4_;
                          value.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_70;
                          value.fields.m_HighlightedColor.fields.a = (float)iStack_70._4_4_;
                          value.fields.m_PressedColor.fields._0_8_ = local_68;
                          value.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_60;
                          value.fields.m_PressedColor.fields.a = (float)iStack_60._4_4_;
                          value.fields.m_SelectedColor.fields.r = (float)(undefined4)local_58;
                          value.fields.m_SelectedColor.fields.g = (float)local_58._4_4_;
                          value.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_50;
                          value.fields.m_SelectedColor.fields.a = (float)iStack_50._4_4_;
                          value.fields.m_DisabledColor.fields.r = (float)(undefined4)local_48;
                          value.fields.m_DisabledColor.fields.g = (float)local_48._4_4_;
                          value.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_40;
                          value.fields.m_DisabledColor.fields.a = (float)iStack_40._4_4_;
                          value.fields.m_ColorMultiplier = (float)(undefined4)local_38;
                          value.fields.m_FadeDuration = (float)local_38._4_4_;
                          UnityEngine_UI_Selectable__set_colors(__this_04,value,(MethodInfo *)0x0);
                          lVar4 = MethodInfo_Void_Add;
                          __this_05 = (UnityEngine_Events_UnityAction_o *)(__this->fields)._buttonLabels;
                          if (__this_05 != (UnityEngine_Events_UnityAction_o *)0x0) {
                            piVar1 = (int32_t *)((long)&(__this_05->fields).invoke_impl + 4);
                            *piVar1 = *piVar1 + 1;
                            pSVar3 = (System_Object_array *)(__this_05->fields).method_ptr;
                            if (pSVar3 != (System_Object_array *)0x0) {
                              uVar2 = (uint)(__this_05->fields).invoke_impl;
                              if (uVar2 < (uint)pSVar3->max_length) {
                                *(uint *)&(__this_05->fields).invoke_impl = uVar2 + 1;
                                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_02;
                                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this_02);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_05,
                                           (Il2CppObject *)__this_02,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement$$OnButtonClicked
// il2cpp: void UI_KeybindSettingElement__OnButtonClicked (UI_KeybindSettingElement_o* __this, int32_t index, const MethodInfo* method);
// 0x43942a0

void UI_KeybindSettingElement__OnButtonClicked
               (UI_KeybindSettingElement_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  UI_KeybindPopup_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Settings_InputKey_o *setting;
  UnityEngine_UI_Text_o *label;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  System_Threading_CancellationTokenSource_o *__this_02;
  int index_00;
  System_Collections_Generic_List_Text__o *__this_03;
  UnityEngine_UI_Text_array *pUVar5;
  UnityEngine_MonoBehaviour_o *__this_04;
  
  if (g_data_057ae2c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_get_Item);
    g_data_057ae2c1 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_Text__o *)(__this->fields)._setting;
  if (__this_03 != (System_Collections_Generic_List_Text__o *)0x0) {
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((__this_03->klass->_2).naturalAligment < bVar1) ||
       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_04394379;
    pUVar5 = (__this_03->fields)._items;
    __this_03 = (System_Collections_Generic_List_Text__o *)0x0;
    if (pUVar5 != (UnityEngine_UI_Text_array *)0x0) {
      __this_00 = (__this->fields)._keybindPopup;
      setting = (Settings_InputKey_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pUVar5,index,MethodInfo_InputKey_get_Item);
      __this_03 = (__this->fields)._buttonLabels;
      if ((__this_03 != (System_Collections_Generic_List_Text__o *)0x0) &&
         (label = (UnityEngine_UI_Text_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_03,index,MethodInfo_Text_get_Item),
         __this_00 != (UI_KeybindPopup_o *)0x0)) {
        UI_KeybindPopup__Show(__this_00,setting,label,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04394379:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae2c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_get_Item);
    g_data_057ae2c2 = '\x01';
  }
  pUVar5 = __this_03[1].fields._items;
  if (pUVar5 != (UnityEngine_UI_Text_array *)0x0) {
    index_00 = 0;
    while( true ) {
      if ((int)pUVar5->max_length <= index_00) {
        return;
      }
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pUVar5,index_00,MethodInfo_Text_get_Item);
      __this_04 = (UnityEngine_MonoBehaviour_o *)(__this_03->fields)._syncRoot;
      if (__this_04 == (UnityEngine_MonoBehaviour_o *)0x0) break;
      bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
      if (((((Il2CppClass *)__this_04->klass)->_2).naturalAligment < bVar1) ||
         ((((Il2CppClass *)__this_04->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
        il2cpp_runtime_helper_022b2fd0();
        if (g_data_057ae2c3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Text);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Text);
          g_data_057ae2c3 = '\x01';
        }
        __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Text);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_UI_Text);
        __this_04[1].fields.m_CancellationTokenSource = __this_02;
        il2cpp_runtime_helper_022b4080(&__this_04[1].fields.m_CancellationTokenSource);
        UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
        return;
      }
      __this_01 = (System_Collections_Generic_List_object__o *)(__this_04->fields).m_CachedPtr;
      if (((__this_01 == (System_Collections_Generic_List_object__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List_object___get_Item(__this_01,index_00,MethodInfo_InputKey_get_Item),
          pIVar3 == (Il2CppObject *)0x0)) ||
         (uVar4 = (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method),
         pIVar2 == (Il2CppObject *)0x0)) break;
      (*pIVar2->klass->vtable[0x4b].methodPtr)(pIVar2,uVar4,pIVar2->klass->vtable[0x4b].method);
      index_00 = index_00 + 1;
      pUVar5 = __this_03[1].fields._items;
      if (pUVar5 == (UnityEngine_UI_Text_array *)0x0) break;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.KeybindSettingElement$$SyncElement
// il2cpp: void UI_KeybindSettingElement__SyncElement (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x4394380

void UI_KeybindSettingElement__SyncElement(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  System_Threading_CancellationTokenSource_o *__this_01;
  int index;
  System_Collections_Generic_List_Text__o *__this_02;
  UnityEngine_MonoBehaviour_o *__this_03;
  
  if (g_data_057ae2c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_get_Item);
    g_data_057ae2c2 = '\x01';
  }
  __this_02 = (__this->fields)._buttonLabels;
  if (__this_02 != (System_Collections_Generic_List_Text__o *)0x0) {
    index = 0;
    while( true ) {
      if ((__this_02->fields)._size <= index) {
        return;
      }
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Text_get_Item);
      __this_03 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
      if (__this_03 == (UnityEngine_MonoBehaviour_o *)0x0) break;
      bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
      if (((((Settings_BaseSetting_c *)__this_03->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetting_c *)__this_03->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting))
      {
        il2cpp_runtime_helper_022b2fd0();
        if (g_data_057ae2c3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Text);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Text);
          g_data_057ae2c3 = '\x01';
        }
        __this_01 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Text);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_UI_Text);
        __this_03[1].fields.m_CancellationTokenSource = __this_01;
        il2cpp_runtime_helper_022b4080(&__this_03[1].fields.m_CancellationTokenSource);
        UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
        return;
      }
      __this_00 = (System_Collections_Generic_List_object__o *)(__this_03->fields).m_CachedPtr;
      if (((__this_00 == (System_Collections_Generic_List_object__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List_object___get_Item(__this_00,index,MethodInfo_InputKey_get_Item),
          pIVar3 == (Il2CppObject *)0x0)) ||
         (uVar4 = (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method),
         pIVar2 == (Il2CppObject *)0x0)) break;
      (*pIVar2->klass->vtable[0x4b].methodPtr)(pIVar2,uVar4,pIVar2->klass->vtable[0x4b].method);
      index = index + 1;
      __this_02 = (__this->fields)._buttonLabels;
      if (__this_02 == (System_Collections_Generic_List_Text__o *)0x0) break;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.KeybindSettingElement$$.ctor
// il2cpp: void UI_KeybindSettingElement___ctor (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x43944c0

void UI_KeybindSettingElement___ctor(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Text__o *__this_00;
  
  if (g_data_057ae2c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Text);
    g_data_057ae2c3 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Text__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Text);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_UI_Text);
  (__this->fields)._buttonLabels = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._buttonLabels);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


