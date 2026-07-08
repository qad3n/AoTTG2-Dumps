// Type: UI.KeybindSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/KeybindSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/KeybindSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.KeybindSettingElement.<>c__DisplayClass5_0$$.ctor
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___ctor (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x4086320

void UI_KeybindSettingElement_<>c__DisplayClass5_0___ctor
               (UI_KeybindSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement.<>c__DisplayClass5_0$$<CreateKeybindButton>b__0
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___CreateKeybindButton_b__0 (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x40865d0

void UI_KeybindSettingElement_<>c__DisplayClass5_0__<CreateKeybindButton>b__0
               (UI_KeybindSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  Settings_BaseSetting_o *pSVar2;
  UI_KeybindPopup_o *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  UI_KeybindSettingElement_o *pUVar3;
  Settings_InputKey_o *setting;
  UnityEngine_UI_Text_o *label;
  
  pUVar3 = (__this->fields).__4__this;
  if (pUVar3 == (UI_KeybindSettingElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = (__this->fields).index;
  if (DAT_05704546 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Text_get_Item);
    DAT_05704546 = '\x01';
  }
  pSVar2 = (pUVar3->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if (pSVar2[1].klass != (Settings_BaseSetting_c *)0x0) {
      __this_00 = (pUVar3->fields)._keybindPopup;
      setting = (Settings_InputKey_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar2[1].klass,index,
                           MethodInfo_InputKey_get_Item);
      __this_01 = (pUVar3->fields)._buttonLabels;
      if (__this_01 != (System_Collections_Generic_List_Text__o *)0x0) {
        label = (UnityEngine_UI_Text_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_Text_get_Item
                          );
        if (__this_00 != (UI_KeybindPopup_o *)0x0) {
          UI_KeybindPopup__Show(__this_00,setting,label,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_KeybindSettingElement__get_SupportedSettingTypes (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x4085d20

System_Collections_Generic_HashSet_SettingType__o *
UI_KeybindSettingElement__get_SupportedSettingTypes
          (UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704544 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704544 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,5,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindSettingElement$$Setup
// il2cpp: void UI_KeybindSettingElement__Setup (UI_KeybindSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_KeybindPopup_o* keybindPopup, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t bindCount, const MethodInfo* method);
// 0x4085da0

void UI_KeybindSettingElement__Setup
               (UI_KeybindSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,UI_KeybindPopup_o *keybindPopup,
               System_String_o *tooltip,float elementWidth,float elementHeight,int32_t bindCount,
               MethodInfo *method)

{
  MethodInfo *method_00;
  int index;
  
  (__this->fields)._keybindPopup = keybindPopup;
  method_00 = (MethodInfo *)title;
  il2cpp_runtime_glue(&(__this->fields)._keybindPopup,keybindPopup);
  if (0 < bindCount) {
    index = 0;
    do {
      UI_KeybindSettingElement__CreateKeybindButton
                (__this,index,style,elementWidth,elementHeight,method_00);
      index = index + 1;
    } while (bindCount != index);
  }
  UI_BaseSettingElement__Setup
            ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement$$CreateKeybindButton
// il2cpp: void UI_KeybindSettingElement__CreateKeybindButton (UI_KeybindSettingElement_o* __this, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x4085e40

void UI_KeybindSettingElement__CreateKeybindButton
               (UI_KeybindSettingElement_o *__this,int32_t index,UI_ElementStyle_o *style,
               float width,float height,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Il2CppClass *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  UnityEngine_UI_Text_array *pUVar4;
  UnityEngine_UI_ColorBlock_o value;
  long lVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Selectable_o *__this_04;
  UnityEngine_Color_o UVar8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_05704545 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateKeybindButton_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass5_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"KeybindTextColor");
    il2cpp_init_method_metadata(&"Keybind");
    il2cpp_init_method_metadata(&"Prefabs/elements/KeybindButton");
    DAT_05704545 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass5_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar6[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar6 + 1,__this);
    *(int32_t *)&pIVar6[1].monitor = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_02 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset<object>
                          (pSVar3,"Prefabs/elements/KeybindButton",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          __this_03 = (UnityEngine_UI_Text_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
          if (style != (UI_ElementStyle_o *)0x0) {
            pSVar3 = (style->fields).ThemePanel;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UVar8 = UI_UIManager__GetThemeColor
                              (pSVar3,"DefaultSetting","KeybindTextColor","DefaultPanel",(MethodInfo *)0x0);
            if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
              (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                        (UVar8.fields.r,UVar8.fields.b,__this_03,
                         (__this_03->klass->vtable)._23_set_color.method);
              UnityEngine_UI_Text__set_fontSize
                        (__this_03,(style->fields).FontSize,(MethodInfo *)0x0);
              pIVar6 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar6 != (Il2CppObject *)0x0) {
                (*pIVar6->klass->vtable[0x24].methodPtr)
                          (width,pIVar6,pIVar6->klass->vtable[0x24].method);
                pIVar6 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  (*pIVar6->klass->vtable[0x26].methodPtr)(height,pIVar6);
                  pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  parent = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent(pUVar7,parent,0,(MethodInfo *)0x0);
                    pIVar6 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
                    if (pIVar6 != (Il2CppObject *)0x0) {
                      __this_00 = pIVar6[0x10].klass;
                      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_00 != (Il2CppClass *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener
                                  ((UnityEngine_Events_UnityEvent_o *)__this_00,call,
                                   (MethodInfo *)0x0);
                        __this_04 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent<object>
                                              (__this_02,MethodInfo_Button_GetComponent_Button);
                        UI_UIManager__GetThemeColorBlock
                                  (&local_88,(style->fields).ThemePanel,"DefaultSetting","Keybind",
                                   "DefaultPanel",(MethodInfo *)0x0);
                        if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                          value.fields.m_NormalColor.fields.b =
                               local_88.fields.m_NormalColor.fields.b;
                          value.fields.m_NormalColor.fields.a =
                               local_88.fields.m_NormalColor.fields.a;
                          value.fields.m_NormalColor.fields.r =
                               local_88.fields.m_NormalColor.fields.r;
                          value.fields.m_NormalColor.fields.g =
                               local_88.fields.m_NormalColor.fields.g;
                          value.fields.m_HighlightedColor.fields.r =
                               local_88.fields.m_HighlightedColor.fields.r;
                          value.fields.m_HighlightedColor.fields.g =
                               local_88.fields.m_HighlightedColor.fields.g;
                          value.fields.m_HighlightedColor.fields.b =
                               local_88.fields.m_HighlightedColor.fields.b;
                          value.fields.m_HighlightedColor.fields.a =
                               local_88.fields.m_HighlightedColor.fields.a;
                          value.fields.m_PressedColor.fields.r =
                               local_88.fields.m_PressedColor.fields.r;
                          value.fields.m_PressedColor.fields.g =
                               local_88.fields.m_PressedColor.fields.g;
                          value.fields.m_PressedColor.fields.b =
                               local_88.fields.m_PressedColor.fields.b;
                          value.fields.m_PressedColor.fields.a =
                               local_88.fields.m_PressedColor.fields.a;
                          value.fields.m_SelectedColor.fields.r =
                               local_88.fields.m_SelectedColor.fields.r;
                          value.fields.m_SelectedColor.fields.g =
                               local_88.fields.m_SelectedColor.fields.g;
                          value.fields.m_SelectedColor.fields.b =
                               local_88.fields.m_SelectedColor.fields.b;
                          value.fields.m_SelectedColor.fields.a =
                               local_88.fields.m_SelectedColor.fields.a;
                          value.fields.m_DisabledColor.fields.r =
                               local_88.fields.m_DisabledColor.fields.r;
                          value.fields.m_DisabledColor.fields.g =
                               local_88.fields.m_DisabledColor.fields.g;
                          value.fields.m_DisabledColor.fields.b =
                               local_88.fields.m_DisabledColor.fields.b;
                          value.fields.m_DisabledColor.fields.a =
                               local_88.fields.m_DisabledColor.fields.a;
                          value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                          value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                          UnityEngine_UI_Selectable__set_colors(__this_04,value,(MethodInfo *)0x0);
                          lVar5 = MethodInfo_Void_Add;
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
                                il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,__this_03);
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_01,
                                           (Il2CppObject *)__this_03,
                                           *(MethodInfo_35A7350 **)
                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindSettingElement$$OnButtonClicked
// il2cpp: void UI_KeybindSettingElement__OnButtonClicked (UI_KeybindSettingElement_o* __this, int32_t index, const MethodInfo* method);
// 0x4086330

void UI_KeybindSettingElement__OnButtonClicked
               (UI_KeybindSettingElement_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UI_KeybindPopup_o *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  Settings_InputKey_o *setting;
  UnityEngine_UI_Text_o *label;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704546 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Text_get_Item);
    DAT_05704546 = '\x01';
    method = extraout_RDX;
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar2,TypeInfo_KeybindSetting,method);
    }
    if (pSVar2[1].klass != (Settings_BaseSetting_c *)0x0) {
      __this_00 = (__this->fields)._keybindPopup;
      setting = (Settings_InputKey_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar2[1].klass,index,
                           MethodInfo_InputKey_get_Item);
      __this_01 = (__this->fields)._buttonLabels;
      if (__this_01 != (System_Collections_Generic_List_Text__o *)0x0) {
        label = (UnityEngine_UI_Text_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_Text_get_Item
                          );
        if (__this_00 != (UI_KeybindPopup_o *)0x0) {
          UI_KeybindPopup__Show(__this_00,setting,label,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindSettingElement$$SyncElement
// il2cpp: void UI_KeybindSettingElement__SyncElement (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x4086410

void UI_KeybindSettingElement__SyncElement(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int index;
  System_Collections_Generic_List_Text__o *__this_00;
  
  if (DAT_05704547 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Text_get_Item);
    DAT_05704547 = '\x01';
  }
  __this_00 = (__this->fields)._buttonLabels;
  if (__this_00 != (System_Collections_Generic_List_Text__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Text_get_Item)
      ;
      pSVar2 = (__this->fields)._setting;
      if (pSVar2 == (Settings_BaseSetting_o *)0x0) break;
      bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
      if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
         ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      if (pSVar2[1].klass == (Settings_BaseSetting_c *)0x0) break;
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2[1].klass,index,
                          MethodInfo_InputKey_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) break;
      uVar5 = (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      (*pIVar3->klass->vtable[0x4b].methodPtr)(pIVar3,uVar5,pIVar3->klass->vtable[0x4b].method);
      index = index + 1;
      __this_00 = (__this->fields)._buttonLabels;
    } while (__this_00 != (System_Collections_Generic_List_Text__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindSettingElement$$.ctor
// il2cpp: void UI_KeybindSettingElement___ctor (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x4086550

void UI_KeybindSettingElement___ctor(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Text__o *__this_00;
  
  if (DAT_05704548 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_UI_Text);
    il2cpp_init_method_metadata(&TypeInfo_List_Text);
    DAT_05704548 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Text__o *)il2cpp_runtime_glue(TypeInfo_List_Text);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_UI_Text);
  (__this->fields)._buttonLabels = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._buttonLabels);
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


