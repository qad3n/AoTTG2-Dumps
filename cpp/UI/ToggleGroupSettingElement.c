// Type: UI.ToggleGroupSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ToggleGroupSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/ToggleGroupSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___ctor (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x408b410

void UI_ToggleGroupSettingElement_<>c__DisplayClass8_0___ctor
               (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___CreateOptionToggle_b__0 (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, bool value, const MethodInfo* method);
// 0x408b7d0

void UI_ToggleGroupSettingElement_<>c__DisplayClass8_0__<CreateOptionToggle>b__0
               (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UI_ToggleGroupSettingElement_o *__this_00;
  MethodInfo *in_R8;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_ToggleGroupSettingElement_o *)0x0) {
    UI_ToggleGroupSettingElement__OnValueChanged
              (__this_00,(__this->fields).option,(__this->fields).index,value & 0xff,in_R8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleGroupSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleGroupSettingElement__get_SupportedSettingTypes (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x408aa80

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleGroupSettingElement__get_SupportedSettingTypes
          (UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704565 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704565 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleGroupSettingElement$$Setup
// il2cpp: void UI_ToggleGroupSettingElement__Setup (UI_ToggleGroupSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x408ab20

void UI_ToggleGroupSettingElement__Setup
               (UI_ToggleGroupSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Toggle__o *__this_00;
  UnityEngine_UI_Toggle_array *pUVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_ToggleGroup_o *pUVar7;
  UnityEngine_UI_Toggle_o *item;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  System_String_o *message;
  System_String_array *method_00;
  ulong uVar10;
  
  method_00 = options;
  if (DAT_05704566 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_ToggleGroup_GetComponent_ToggleGroup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"Options");
    DAT_05704566 = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      uVar9 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar9);
      message = (System_String_o *)il2cpp_init_method_metadata(&"ToggleGroup cannot have 0 options.");
      System_ArgumentException___ctor(__this_01,message,(MethodInfo *)0x0);
      uVar9 = il2cpp_init_method_metadata(&MethodInfo_Void_Setup);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar9);
    }
    (__this->fields)._options = options;
    il2cpp_runtime_glue(&(__this->fields)._options);
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Options",(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      (__this->fields)._optionsPanel = pUVar6;
      il2cpp_runtime_glue(&(__this->fields)._optionsPanel,pUVar6);
      pUVar6 = (__this->fields)._optionsPanel;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = (UnityEngine_UI_ToggleGroup_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_ToggleGroup_GetComponent_ToggleGroup);
        (__this->fields)._toggleGroup = pUVar7;
        il2cpp_runtime_glue(&(__this->fields)._toggleGroup);
        if (0 < (int)options->max_length) {
          uVar10 = 0;
          if ((options->max_length & 0xffffffff) != 0) {
            do {
              __this_00 = (__this->fields)._toggles;
              item = UI_ToggleGroupSettingElement__CreateOptionToggle
                               (__this,options->m_Items[uVar10],(int32_t)uVar10,style,elementWidth,
                                elementHeight,(MethodInfo *)method_00);
              lVar4 = MethodInfo_Void_Add;
              if (__this_00 == (System_Collections_Generic_List_Toggle__o *)0x0) goto LAB_0408adaf;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar3 = (__this_00->fields)._items;
              if (pUVar3 == (UnityEngine_UI_Toggle_array *)0x0) goto LAB_0408adaf;
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2] = item;
                il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)item,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              uVar10 = uVar10 + 1;
              uVar2 = (uint)options->max_length;
              if ((long)(int)uVar2 <= (long)uVar10) goto LAB_0408ad10;
            } while (uVar10 < uVar2);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0408ad10:
        pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
            (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Label",(MethodInfo *)0x0),
            pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
           (pIVar8 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement),
           pIVar8 != (Il2CppObject *)0x0)) {
          (*pIVar8->klass->vtable[0x26].methodPtr)
                    (elementHeight,pIVar8,pIVar8->klass->vtable[0x26].method);
          UI_BaseSettingElement__Setup
                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
LAB_0408adaf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleGroupSettingElement$$CreateOptionToggle
// il2cpp: UnityEngine_UI_Toggle_o* UI_ToggleGroupSettingElement__CreateOptionToggle (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x408ae00

UnityEngine_UI_Toggle_o *
UI_ToggleGroupSettingElement__CreateOptionToggle
          (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,
          UI_ElementStyle_o *style,float width,float height,MethodInfo *method)

{
  float fVar1;
  System_String_o *pSVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Component_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Toggle_o *__this_04;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Color_o UVar7;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_05704567 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateOptionToggle_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass8_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_bool);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"Toggle");
    il2cpp_init_method_metadata(&"Prefabs/Elements/ToggleGroupOption");
    il2cpp_init_method_metadata(&"ToggleFilledColor");
    il2cpp_init_method_metadata(&"Checkmark");
    DAT_05704567 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass8_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar3 + 1,__this);
    pIVar3[1].monitor = option;
    il2cpp_runtime_glue(&pIVar3[1].monitor,option);
    *(int32_t *)&pIVar3[2].klass = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset<object>
                          (pSVar2,"Prefabs/Elements/ToggleGroupOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._optionsPanel;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar4,parent,0,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Transform__Find(pUVar4,"Label",(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pIVar5 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
              if (style != (UI_ElementStyle_o *)0x0) {
                pSVar2 = (style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UVar7 = UI_UIManager__GetThemeColor
                                  (pSVar2,"DefaultSetting","TextColor","DefaultPanel",(MethodInfo *)0x0);
                if (pIVar5 != (Il2CppObject *)0x0) {
                  (*pIVar5->klass->vtable[0x17].methodPtr)(UVar7.fields.r,UVar7.fields.b,pIVar5);
                  pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Label",(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      pUVar6 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                      UI_BaseSettingElement__SetupLabel
                                ((UI_BaseSettingElement_o *)__this,pUVar6,pIVar3[1].monitor,
                                 (style->fields).FontSize,(MethodInfo *)0x0);
                      pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                          __this_02 = (UnityEngine_Component_o *)
                                      UnityEngine_Component__GetComponent<object>
                                                ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                          if (__this_02 != (UnityEngine_Component_o *)0x0) {
                            pUVar4 = UnityEngine_Component__get_transform
                                               (__this_02,(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                              pUVar4 = UnityEngine_Transform__Find
                                                 (pUVar4,"Checkmark",(MethodInfo *)0x0);
                              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                __this_03 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_Component__GetComponent<object>
                                                      ((UnityEngine_Component_o *)pUVar4,
                                                       MethodInfo_RectTransform_GetComponent_RectTransform);
                                (*__this_02->klass[2]._1.events)
                                          (width,__this_02,__this_02->klass[2]._1.properties);
                                (*(code *)__this_02->klass[2]._1.implementedInterfaces)
                                          (height,__this_02);
                                if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                                  fVar1 = (__this->fields)._checkMarkSizeMultiplier;
                                  value.fields.y = height * fVar1;
                                  value.fields.x = width * fVar1;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (__this_03,value,(MethodInfo *)0x0);
                                  __this_04 = (UnityEngine_UI_Toggle_o *)
                                              UnityEngine_GameObject__GetComponent<object>
                                                        (__this_01,MethodInfo_Toggle_GetComponent_Toggle);
                                  if (__this_04 != (UnityEngine_UI_Toggle_o *)0x0) {
                                    UnityEngine_UI_Toggle__set_group
                                              (__this_04,(__this->fields)._toggleGroup,
                                               (MethodInfo *)0x0);
                                    UnityEngine_UI_Toggle__set_isOn(__this_04,0,(MethodInfo *)0x0);
                                    __this_00 = (__this_04->fields).m_Group;
                                    call = (UnityEngine_Events_UnityAction_T0__o *)
                                           il2cpp_runtime_glue(TypeInfo_UnityAction_bool);
                                    UnityEngine_Events_UnityAction<bool>___ctor();
                                    if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
                                      UnityEngine_Events_UnityEvent<bool>__AddListener
                                                ((UnityEngine_Events_UnityEvent_bool__o *)__this_00,
                                                 call,MethodInfo_Void_AddListener);
                                      UI_UIManager__GetThemeColorBlock
                                                (&local_88,(style->fields).ThemePanel,"DefaultSetting",
                                                 "Toggle","DefaultPanel",(MethodInfo *)0x0);
                                      value_00.fields.m_NormalColor.fields.b =
                                           local_88.fields.m_NormalColor.fields.b;
                                      value_00.fields.m_NormalColor.fields.a =
                                           local_88.fields.m_NormalColor.fields.a;
                                      value_00.fields.m_NormalColor.fields.r =
                                           local_88.fields.m_NormalColor.fields.r;
                                      value_00.fields.m_NormalColor.fields.g =
                                           local_88.fields.m_NormalColor.fields.g;
                                      value_00.fields.m_HighlightedColor.fields.r =
                                           local_88.fields.m_HighlightedColor.fields.r;
                                      value_00.fields.m_HighlightedColor.fields.g =
                                           local_88.fields.m_HighlightedColor.fields.g;
                                      value_00.fields.m_HighlightedColor.fields.b =
                                           local_88.fields.m_HighlightedColor.fields.b;
                                      value_00.fields.m_HighlightedColor.fields.a =
                                           local_88.fields.m_HighlightedColor.fields.a;
                                      value_00.fields.m_PressedColor.fields.r =
                                           local_88.fields.m_PressedColor.fields.r;
                                      value_00.fields.m_PressedColor.fields.g =
                                           local_88.fields.m_PressedColor.fields.g;
                                      value_00.fields.m_PressedColor.fields.b =
                                           local_88.fields.m_PressedColor.fields.b;
                                      value_00.fields.m_PressedColor.fields.a =
                                           local_88.fields.m_PressedColor.fields.a;
                                      value_00.fields.m_SelectedColor.fields.r =
                                           local_88.fields.m_SelectedColor.fields.r;
                                      value_00.fields.m_SelectedColor.fields.g =
                                           local_88.fields.m_SelectedColor.fields.g;
                                      value_00.fields.m_SelectedColor.fields.b =
                                           local_88.fields.m_SelectedColor.fields.b;
                                      value_00.fields.m_SelectedColor.fields.a =
                                           local_88.fields.m_SelectedColor.fields.a;
                                      value_00.fields.m_DisabledColor.fields.r =
                                           local_88.fields.m_DisabledColor.fields.r;
                                      value_00.fields.m_DisabledColor.fields.g =
                                           local_88.fields.m_DisabledColor.fields.g;
                                      value_00.fields.m_DisabledColor.fields.b =
                                           local_88.fields.m_DisabledColor.fields.b;
                                      value_00.fields.m_DisabledColor.fields.a =
                                           local_88.fields.m_DisabledColor.fields.a;
                                      value_00.fields.m_ColorMultiplier =
                                           local_88.fields.m_ColorMultiplier;
                                      value_00.fields.m_FadeDuration =
                                           local_88.fields.m_FadeDuration;
                                      UnityEngine_UI_Selectable__set_colors
                                                ((UnityEngine_UI_Selectable_o *)__this_04,value_00,
                                                 (MethodInfo *)0x0);
                                      pIVar3 = UnityEngine_Component__GetComponent<object>
                                                         ((UnityEngine_Component_o *)__this_03,
                                                          MethodInfo_Image_GetComponent_Image);
                                      UVar7 = UI_UIManager__GetThemeColor
                                                        ((style->fields).ThemePanel,"DefaultSetting",
                                                         "ToggleFilledColor","DefaultPanel",(MethodInfo *)0x0
                                                        );
                                      if (pIVar3 != (Il2CppObject *)0x0) {
                                        (*pIVar3->klass->vtable[0x17].methodPtr)
                                                  (UVar7.fields.r,UVar7.fields.b,pIVar3,
                                                   pIVar3->klass->vtable[0x17].method);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleGroupSettingElement$$OnValueChanged
// il2cpp: void UI_ToggleGroupSettingElement__OnValueChanged (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, bool value, const MethodInfo* method);
// 0x408b420

void UI_ToggleGroupSettingElement__OnValueChanged
               (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,
               bool_conflict value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_TypedSetting_T__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  
  if (DAT_05704568 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704568 = '\x01';
  }
  if ((char)value == '\0') {
    return;
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_int__o *)0x0) goto LAB_0408b53a;
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
      Settings_TypedSetting<int>__set_Value(__this_01,index,MethodInfo_Void_set_Value);
      return;
    }
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_T__o *)0x0) {
LAB_0408b53a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      Settings_TypedSetting<object>__set_Value(__this_00,(Il2CppObject *)option,MethodInfo_Void_set_Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// UI.ToggleGroupSettingElement$$SyncElement
// il2cpp: void UI_ToggleGroupSettingElement__SyncElement (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x408b540

void UI_ToggleGroupSettingElement__SyncElement
               (UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  Settings_BaseSetting_o *pSVar3;
  System_Collections_Generic_List_Toggle__o *pSVar4;
  int32_t index;
  UnityEngine_UI_Toggle_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05704569 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704569 = '\x01';
  }
  __this_00 = (__this->fields)._toggleGroup;
  if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
    UnityEngine_UI_ToggleGroup__SetAllTogglesOff(__this_00,1,(MethodInfo *)0x0);
    iVar2 = (__this->fields)._settingType;
    if (iVar2 == 2) {
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_0408b692;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto LAB_0408b697;
      pSVar4 = (__this->fields)._toggles;
      if (pSVar4 == (System_Collections_Generic_List_Toggle__o *)0x0) goto LAB_0408b692;
      __this_01 = (UnityEngine_UI_Toggle_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             *(int32_t *)((long)&pSVar3[1].klass + 4),MethodInfo_Toggle_get_Item);
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_0408b692;
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
LAB_0408b697:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      index = UI_ToggleGroupSettingElement__FindOptionIndex(__this,pSVar3[1].monitor,method_00);
      pSVar4 = (__this->fields)._toggles;
      if (pSVar4 == (System_Collections_Generic_List_Toggle__o *)0x0) goto LAB_0408b692;
      __this_01 = (UnityEngine_UI_Toggle_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,index,MethodInfo_Toggle_get_Item)
      ;
    }
    if (__this_01 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(__this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0408b692:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleGroupSettingElement$$FindOptionIndex
// il2cpp: int32_t UI_ToggleGroupSettingElement__FindOptionIndex (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, const MethodInfo* method);
// 0x408b6a0

int32_t UI_ToggleGroupSettingElement__FindOptionIndex
                  (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,MethodInfo *method
                  )

{
  uint uVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  undefined8 uVar4;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  ulong uVar5;
  
  pSVar3 = (__this->fields)._options;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar5 = 0;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar5) {
        uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
        __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar4);
        paramName = (System_String_o *)il2cpp_init_method_metadata(&"Option not found");
        System_ArgumentOutOfRangeException___ctor(__this_00,paramName,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&MethodInfo_Int32_FindOptionIndex);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar4);
      }
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = System_String__op_Equality(pSVar3->m_Items[uVar5],option,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (int32_t)uVar5;
      }
      uVar5 = uVar5 + 1;
      pSVar3 = (__this->fields)._options;
    } while (pSVar3 != (System_String_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleGroupSettingElement$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___ctor (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x408b750

void UI_ToggleGroupSettingElement___ctor(UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Toggle__o *__this_00;
  
  if (DAT_0570456a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_UI_Toggle);
    il2cpp_init_method_metadata(&TypeInfo_List_Toggle);
    DAT_0570456a = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Toggle__o *)il2cpp_runtime_glue(TypeInfo_List_Toggle);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_UI_Toggle);
  (__this->fields)._toggles = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._toggles);
  (__this->fields)._checkMarkSizeMultiplier = 0.67;
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


