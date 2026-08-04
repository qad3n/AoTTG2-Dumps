// Type: UI.ToggleGroupSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ToggleGroupSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleGroupSettingElement.cs
// --------------------------------

// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___ctor (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x4399380

void UI_ToggleGroupSettingElement___c__DisplayClass8_0___ctor
               (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___CreateOptionToggle_b__0 (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, bool value, const MethodInfo* method);
// 0x4399740

void UI_ToggleGroupSettingElement___c__DisplayClass8_0___CreateOptionToggle_b__0
               (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this,bool_conflict value,
               MethodInfo *method)

{
  uint *puVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  int32_t value_00;
  Settings_TypedSetting_T__c *pSVar5;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  System_Collections_Generic_List_object__c *pSVar6;
  UI_ToggleGroupSettingElement_o *pUVar7;
  long lVar8;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  System_String_c *pSVar9;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_Vector2_o value_01;
  UnityEngine_UI_ColorBlock_o value_02;
  uint uVar10;
  bool_conflict bVar11;
  UnityEngine_UI_Toggle_o *__this_03;
  Il2CppClass *pIVar12;
  undefined8 uVar13;
  Il2CppClass *pIVar14;
  System_String_o *pSVar15;
  UnityEngine_Transform_o *pUVar16;
  Il2CppObject *pIVar17;
  Il2CppClass *pIVar18;
  System_String_o *in_RCX;
  MethodInfo *method_00;
  UI_ElementStyle_o *style;
  Il2CppClass *pIVar19;
  MethodInfo_33DA550 *setting;
  MethodInfo_24E7B40 *pMVar20;
  Il2CppClass *pIVar21;
  Settings_TypedSetting_bool__o *__this_04;
  System_String_o *in_R8;
  Il2CppClass *in_R9;
  float fVar22;
  float in_XMM1_Da;
  UnityEngine_Color_o UVar23;
  void *pvStack_98;
  void *pvStack_90;
  char *pcStack_88;
  char *pcStack_80;
  void *pvStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  void *pvStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  Il2CppClass *pIStack_58;
  Il2CppClass *pIStack_50;
  Il2CppClass *pIStack_48;
  Il2CppClass *pIStack_40;
  
  pUVar7 = (__this->fields).__4__this;
  if (pUVar7 == (UI_ToggleGroupSettingElement_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae2e6 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
      il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
      g_data_057ae2e6 = '\x01';
    }
    pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
    setting = MethodInfo_HashSet_1_Settings_SettingType;
    pIVar21 = pIVar19;
    System_Collections_Generic_HashSet_Int32Enum____ctor
              ((System_Collections_Generic_HashSet_T__o *)pIVar19,MethodInfo_HashSet_1_Settings_SettingType);
    if (pIVar19 != (Il2CppClass *)0x0) {
      System_Collections_Generic_HashSet_Int32Enum___Add
                ((System_Collections_Generic_HashSet_T__o *)pIVar19,1,MethodInfo_Boolean_Add);
      return;
    }
    fVar22 = (float)il2cpp_runtime_helper_022b2c90();
    pIStack_40 = pIVar19;
    if (g_data_057ae2e7 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponent_Toggle);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
      il2cpp_runtime_helper_023445d0(&"DefaultPanel");
      il2cpp_runtime_helper_023445d0(&"DefaultSetting");
      il2cpp_runtime_helper_023445d0(&"Background");
      il2cpp_runtime_helper_023445d0(&"Toggle");
      il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
      il2cpp_runtime_helper_023445d0(&"Checkmark");
      g_data_057ae2e7 = '\x01';
    }
    (pIVar21->_1).castClass = in_R9;
    il2cpp_runtime_helper_022b4080(&(pIVar21->_1).castClass);
    uVar10 = 0;
    pIVar19 = pIVar21;
    pIVar14 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar21,(MethodInfo *)0x0);
    if (pIVar14 != (Il2CppClass *)0x0) {
      pSVar15 = "Toggle";
      pUVar16 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pIVar14,"Toggle",(MethodInfo *)0x0)
      ;
      uVar10 = (uint)pSVar15;
      pIVar19 = pIVar14;
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        pIVar17 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar16,MethodInfo_Toggle_GetComponent_Toggle)
        ;
        puVar1 = &(pIVar21->_1).this_arg.bits;
        *(Il2CppObject **)&(pIVar21->_1).this_arg.bits = pIVar17;
        pIVar19 = (Il2CppClass *)puVar1;
        il2cpp_runtime_helper_022b4080();
        uVar10 = (uint)pIVar17;
        lVar8 = *(long *)&(pIVar21->_1).this_arg.bits;
        if (lVar8 != 0) {
          __this_01 = *(UnityEngine_Events_UnityEvent_bool__o **)(lVar8 + 0x118);
          pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
          pIVar14 = pIVar21;
          pIVar19 = pIVar18;
          UnityEngine_Events_UnityAction_bool____ctor();
          uVar10 = (uint)pIVar14;
          if (__this_01 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
            UnityEngine_Events_UnityEvent_bool___AddListener
                      (__this_01,(UnityEngine_Events_UnityAction_T0__o *)pIVar18,MethodInfo_Void_AddListener);
            uVar10 = (uint)pIVar18;
            pIVar19 = *(Il2CppClass **)puVar1;
            if (pIVar19 != (Il2CppClass *)0x0) {
              uVar10 = 0;
              pIVar14 = (Il2CppClass *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pIVar19,(MethodInfo *)0x0);
              if (pIVar14 != (Il2CppClass *)0x0) {
                pSVar15 = "Background";
                pIVar18 = (Il2CppClass *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pIVar14,"Background",(MethodInfo *)0x0);
                uVar10 = (uint)pSVar15;
                pIVar19 = pIVar14;
                if (pIVar18 != (Il2CppClass *)0x0) {
                  pMVar20 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                  pIVar14 = (Il2CppClass *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pIVar18,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  uVar10 = (uint)pMVar20;
                  pIVar19 = pIVar18;
                  if (pIVar14 != (Il2CppClass *)0x0) {
                    uVar10 = 0;
                    pIVar19 = pIVar14;
                    pIVar18 = (Il2CppClass *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
                    if (pIVar18 != (Il2CppClass *)0x0) {
                      pSVar15 = "Checkmark";
                      pUVar16 = UnityEngine_Transform__Find
                                          ((UnityEngine_Transform_o *)pIVar18,"Checkmark",(MethodInfo *)0x0);
                      uVar10 = (uint)pSVar15;
                      pIVar19 = pIVar18;
                      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                        pIVar18 = (Il2CppClass *)
                                  UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
                        pSVar9 = (pIVar14->_1).image;
                        (*(code *)pSVar9[1]._1.interfaceOffsets)(in_XMM1_Da,pIVar14,pSVar9[1].static_fields);
                        pSVar9 = (pIVar14->_1).image;
                        uVar10 = (uint)pSVar9[1]._1.methods;
                        (*pSVar9[1]._1.properties)(fVar22);
                        pIVar19 = pIVar14;
                        if (pIVar18 != (Il2CppClass *)0x0) {
                          fVar2 = *(float *)&(pIVar21->_1).element_class;
                          value_01.fields.y = in_XMM1_Da * fVar2;
                          value_01.fields.x = fVar22 * fVar2;
                          UnityEngine_RectTransform__set_sizeDelta
                                    ((UnityEngine_RectTransform_o *)pIVar18,value_01,(MethodInfo *)0x0);
                          UI_BaseSettingElement__Setup
                                    ((UI_BaseSettingElement_o *)pIVar21,(Settings_BaseSetting_o *)setting,
                                     style,in_RCX,in_R8,(MethodInfo *)0x0);
                          pMVar20 = MethodInfo_Image_GetComponent_Image;
                          pIVar17 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pIVar18,MethodInfo_Image_GetComponent_Image);
                          uVar10 = (uint)pMVar20;
                          pIVar19 = pIVar18;
                          if (style != (UI_ElementStyle_o *)0x0) {
                            pIVar19 = (Il2CppClass *)(style->fields).ThemePanel;
                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar15 = "DefaultSetting";
                            UVar23 = UI_UIManager__GetThemeColor
                                               ((System_String_o *)pIVar19,"DefaultSetting","ToggleFilledColor",
                                                "DefaultPanel",(MethodInfo *)0x0);
                            uVar10 = (uint)pSVar15;
                            if (pIVar17 != (Il2CppObject *)0x0) {
                              (*pIVar17->klass->vtable[0x17].methodPtr)
                                        (UVar23.fields.r,UVar23.fields.b,pIVar17,
                                         pIVar17->klass->vtable[0x17].method);
                              __this_02 = *(UnityEngine_UI_Selectable_o **)puVar1;
                              pSVar15 = (style->fields).ThemePanel;
                              pIVar19 = (Il2CppClass *)&stack0xffffffffffffff68;
                              UI_UIManager__GetThemeColorBlock
                                        ((UnityEngine_UI_ColorBlock_o *)pIVar19,pSVar15,"DefaultSetting",
                                         "Toggle","DefaultPanel",(MethodInfo *)0x0);
                              uVar10 = (uint)pSVar15;
                              if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                                value_02.fields.m_NormalColor.fields._8_8_ = pvStack_90;
                                value_02.fields.m_NormalColor.fields._0_8_ = pvStack_98;
                                value_02.fields.m_HighlightedColor.fields._0_8_ = pcStack_88;
                                value_02.fields.m_HighlightedColor.fields._8_8_ = pcStack_80;
                                value_02.fields.m_PressedColor.fields._0_8_ = pvStack_78;
                                value_02.fields.m_PressedColor.fields.b = (float)uStack_70;
                                value_02.fields.m_PressedColor.fields.a = (float)uStack_6c;
                                value_02.fields.m_SelectedColor.fields._0_8_ = pvStack_68;
                                value_02.fields.m_SelectedColor.fields.b = (float)uStack_60;
                                value_02.fields.m_SelectedColor.fields.a = (float)uStack_5c;
                                value_02.fields.m_DisabledColor.fields._0_8_ = pIStack_58;
                                value_02.fields.m_DisabledColor.fields._8_8_ = pIStack_50;
                                value_02.fields._80_8_ = pIStack_48;
                                UnityEngine_UI_Selectable__set_colors(__this_02,value_02,(MethodInfo *)0x0);
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
    if (g_data_057ae2e8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae2e8 = '\x01';
    }
    __this_04 = *(Settings_TypedSetting_bool__o **)&(pIVar19->_1).byval_arg.data;
    if (__this_04 != (Settings_TypedSetting_bool__o *)0x0) {
      bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if ((bVar3 <= (__this_04->klass->_2).naturalAligment) &&
         ((__this_04->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_BoolSetting)) {
        Settings_TypedSetting_bool___set_Value(__this_04,uVar10 & 0xff,MethodInfo_Void_set_Value);
        pIVar21 = (pIVar19->_1).castClass;
        if (pIVar21 == (Il2CppClass *)0x0) {
          return;
        }
        (*(code *)(pIVar21->_1).namespaze)
                  ((pIVar21->_1).element_class,*(undefined8 *)&(pIVar21->_1).byval_arg.bits);
        return;
      }
      il2cpp_runtime_helper_022b2fd0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae2e9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057ae2e9 = '\x01';
    }
    pIVar21 = __this_04[1].monitor;
    if (pIVar21 != (Il2CppClass *)0x0) {
      pSVar6 = (pIVar21->_1).image;
      bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if (((pSVar6->_2).naturalAligment < bVar3) ||
         ((pSVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BoolSetting)) {
        il2cpp_runtime_helper_022b2fd0();
      }
      else if (__this_04[2].monitor != (UnityEngine_UI_Toggle_o *)0x0) {
        UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                  (__this_04[2].monitor,
                   (uint)*(byte *)((long)&((System_Collections_Generic_List_object__Fields *)
                                          &(pIVar21->_1).name)->_items + 1),(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&(pIVar21->_1).element_class = 0x3f28f5c3;
UI_BaseSettingElement___ctor:
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pIVar21,(MethodInfo *)0x0);
    return;
  }
  value_00 = (__this->fields).index;
  pIVar21 = (Il2CppClass *)(__this->fields).option;
  pIVar19 = pIVar21;
  if (g_data_057ae2e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2e3 = '\x01';
  }
  if ((char)value == '\0') {
    return;
  }
  iVar4 = (pUVar7->fields)._settingType;
  if (iVar4 == 2) {
    pIVar14 = (Il2CppClass *)(pUVar7->fields)._setting;
    if (pIVar14 != (Il2CppClass *)0x0) {
      pSVar5 = (pIVar14->_1).image;
      bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
      pIVar19 = TypeInfo_IntSetting;
      if ((bVar3 <= (pSVar5->_2).naturalAligment) &&
         ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar14,value_00,MethodInfo_Void_set_Value);
        return;
      }
      goto label_043994a5;
    }
  }
  else {
    if (iVar4 != 4) {
      return;
    }
    pIVar14 = (Il2CppClass *)(pUVar7->fields)._setting;
    if (pIVar14 != (Il2CppClass *)0x0) {
      pSVar5 = (pIVar14->_1).image;
      bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
      pIVar19 = TypeInfo_StringSetting;
      if ((bVar3 <= (pSVar5->_2).naturalAligment) &&
         ((pSVar5->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pIVar14,(Il2CppObject *)pIVar21,MethodInfo_Void_set_Value);
        return;
      }
label_043994a5:
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae2e4 = '\x01';
  }
  __this_00 = *(UnityEngine_UI_ToggleGroup_o **)&(pIVar14->_1).this_arg.bits;
  pIVar18 = (Il2CppClass *)0x0;
  if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
    pIVar19 = (Il2CppClass *)0x1;
    UnityEngine_UI_ToggleGroup__SetAllTogglesOff(__this_00,1,(MethodInfo *)0x0);
    uVar10 = (pIVar14->_1).byval_arg.bits;
    if (uVar10 == 2) {
      pIVar18 = (pIVar14->_1).byval_arg.data;
      if (pIVar18 != (Il2CppClass *)0x0) {
        pSVar6 = (pIVar18->_1).image;
        bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
        pIVar19 = TypeInfo_IntSetting;
        if (((pSVar6->_2).naturalAligment < bVar3) ||
           ((pSVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto label_04399607;
        pIVar12 = (pIVar14->_1).declaringType;
        if (pIVar12 != (Il2CppClass *)0x0) {
          uVar10 = *(uint *)((long)&((System_Collections_Generic_List_object__Fields *)&(pIVar18->_1).name)->
                                    _items + 4);
          pIVar19 = (Il2CppClass *)(ulong)uVar10;
          __this_03 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pIVar12,uVar10,MethodInfo_Toggle_get_Item);
          pIVar18 = pIVar12;
          goto joined_r0x043995ee;
        }
      }
    }
    else {
      if (uVar10 != 4) {
        return;
      }
      pIVar18 = (pIVar14->_1).byval_arg.data;
      if (pIVar18 != (Il2CppClass *)0x0) {
        pSVar6 = (pIVar18->_1).image;
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        pIVar19 = TypeInfo_StringSetting;
        if (((pSVar6->_2).naturalAligment < bVar3) ||
           ((pSVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StringSetting)) goto label_04399607;
        pIVar19 = (Il2CppClass *)(pIVar18->_1).namespaze;
        uVar10 = UI_ToggleGroupSettingElement__FindOptionIndex
                           ((UI_ToggleGroupSettingElement_o *)pIVar14,(System_String_o *)pIVar19,method_00);
        pIVar18 = (pIVar14->_1).declaringType;
        if (pIVar18 != (Il2CppClass *)0x0) {
          pIVar19 = (Il2CppClass *)(ulong)uVar10;
          __this_03 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pIVar18,uVar10,MethodInfo_Toggle_get_Item);
joined_r0x043995ee:
          if (__this_03 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Toggle__set_isOn(__this_03,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04399607:
  il2cpp_runtime_helper_022b2fd0();
  pIVar12 = (pIVar18->_1).castClass;
  pIStack_48 = pIVar14;
  pIStack_40 = pIVar21;
  if (pIVar12 != (Il2CppClass *)0x0) {
    pIVar14 = (Il2CppClass *)0x0;
    pIVar21 = pIVar18;
    do {
      uVar10 = *(uint *)&(pIVar12->_1).namespaze;
      if ((long)(int)uVar10 <= (long)pIVar14) {
        pIStack_50 = (Il2CppClass *)0x4399679;
        uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
        pIStack_50 = (Il2CppClass *)0x4399681;
        pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(uVar13);
        pIStack_50 = (Il2CppClass *)0x4399690;
        pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Option not found");
        pIStack_50 = (Il2CppClass *)0x439969d;
        System_ArgumentOutOfRangeException___ctor_3c13a50
                  ((System_ArgumentOutOfRangeException_o *)pIVar14,pSVar15,(MethodInfo *)0x0);
        pIStack_50 = (Il2CppClass *)0x43996a9;
        uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_FindOptionIndex);
        pIStack_50 = (Il2CppClass *)0x43996b4;
        pIVar21 = pIVar14;
        il2cpp_runtime_helper_022b2b10(pIVar14,uVar13);
label_043996b4:
        pIStack_50 = (Il2CppClass *)0x43996b9;
        _uStack_60 = il2cpp_runtime_helper_022b2ca0();
        pIStack_58 = pIVar14;
        pIStack_50 = pIVar19;
        if (g_data_057ae2e5 == '\0') {
          pvStack_68 = (void *)0x43996dc;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Toggle);
          pvStack_68 = (void *)0x43996e8;
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Toggle);
          g_data_057ae2e5 = '\x01';
        }
        pvStack_68 = (void *)0x43996fe;
        pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Toggle);
        pvStack_68 = (void *)0x4399713;
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pIVar19,MethodInfo_List_1_UnityEngine_UI_Toggle);
        (pIVar21->_1).declaringType = pIVar19;
        pvStack_68 = (void *)0x4399723;
        il2cpp_runtime_helper_022b4080(&(pIVar21->_1).declaringType);
        *(undefined4 *)&(pIVar21->_1).parent = 0x3f2b851f;
        goto UI_BaseSettingElement___ctor;
      }
      if ((Il2CppClass *)(ulong)uVar10 <= pIVar14) goto label_043996b4;
      pIVar21 = (&(pIVar12->_1).byval_arg.data)[(long)pIVar14];
      pIStack_50 = (Il2CppClass *)0x439964f;
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar21,(System_String_o *)pIVar19,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        return;
      }
      pIVar14 = (Il2CppClass *)((long)&(pIVar14->_1).image + 1);
      pIVar12 = (pIVar18->_1).castClass;
    } while (pIVar12 != (Il2CppClass *)0x0);
  }
  pIStack_50 = (Il2CppClass *)0x4399665;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.ToggleGroupSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleGroupSettingElement__get_SupportedSettingTypes (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x43989f0

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleGroupSettingElement__get_SupportedSettingTypes
          (UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  UnityEngine_UI_Toggle_array *pUVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  long lVar5;
  UI_ToggleGroupSettingElement_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_ToggleGroup_o *pUVar8;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  System_String_o *message;
  intptr_t iVar10;
  UnityEngine_Events_UnityAction_T0__o *pUVar11;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_T0__o *pUVar12;
  UnityEngine_Events_UnityAction_T0__o *pUVar13;
  Il2CppObject *pIVar14;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Toggle_o *pUVar15;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  System_Collections_Generic_List_Toggle__o *in_RCX;
  System_String_o **ppSVar16;
  MethodInfo_24E7B40 **ppMVar17;
  undefined4 extraout_EDX;
  System_Collections_Generic_List_Toggle__o *style;
  UI_ToggleGroupSettingElement_o *__this_03;
  System_ArgumentException_o *__this_04;
  UnityEngine_Events_UnityAction_T0__o *path;
  System_String_array *in_R8;
  System_String_array *method_00;
  System_String_o *in_R9;
  long *plVar18;
  intptr_t *piVar19;
  float fVar20;
  float in_XMM1_Da;
  UnityEngine_Color_o UVar21;
  UnityEngine_UI_ColorBlock_o UStack_f8;
  System_ArgumentException_o *pSStack_a0;
  System_String_array *pSStack_98;
  System_Collections_Generic_List_Toggle__o *pSStack_90;
  System_String_o *pSStack_88;
  System_Collections_Generic_List_Toggle__o *pSStack_80;
  System_String_array *pSStack_78;
  float fStack_68;
  float fStack_64;
  System_String_array *pSStack_60;
  System_Collections_Generic_List_Toggle__o *pSStack_58;
  System_String_o *pSStack_50;
  UI_ToggleGroupSettingElement_o *pUStack_48;
  
  if (g_data_057ae2e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2e0 = '\x01';
  }
  __this_00 = (UI_ToggleGroupSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  plVar18 = (long *)MethodInfo_HashSet_1_Settings_SettingType;
  __this_03 = __this_00;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,(MethodInfo_33DA550 *)MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (UI_ToggleGroupSettingElement_o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)__this_00;
  }
  fStack_64 = (float)il2cpp_runtime_helper_022b2c90();
  ppSVar16 = (System_String_o **)in_RCX;
  method_00 = in_R8;
  fStack_68 = in_XMM1_Da;
  pUStack_48 = __this_00;
  if (g_data_057ae2e1 == '\0') {
    pSStack_78 = (System_String_array *)0x4398ad1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_78 = (System_String_array *)0x4398add;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToggleGroup_GetComponent_ToggleGroup);
    pSStack_78 = (System_String_array *)0x4398ae9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_78 = (System_String_array *)0x4398af5;
    il2cpp_runtime_helper_023445d0(&"Label");
    pSStack_78 = (System_String_array *)0x4398b01;
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ae2e1 = '\x01';
  }
  if (in_R8 == (System_String_array *)0x0) goto label_04398d1f;
  if (in_R8->max_length == 0) goto label_04398d29;
  (__this_03->fields)._options = in_R8;
  pSStack_78 = (System_String_array *)0x4398b2c;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._options);
  pSStack_78 = (System_String_array *)0x4398b36;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
label_04398d1f:
    pSStack_78 = (System_String_array *)0x4398d24;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    ppSVar16 = &"Options";
    pSStack_78 = (System_String_array *)0x4398b53;
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Options",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04398d1f;
    pSStack_78 = (System_String_array *)0x4398b75;
    pSStack_60 = (System_String_array *)plVar18;
    pSStack_58 = in_RCX;
    pSStack_50 = in_R9;
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    (__this_03->fields)._optionsPanel = pUVar7;
    pSStack_78 = (System_String_array *)0x4398b85;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._optionsPanel,pUVar7);
    pUVar7 = (__this_03->fields)._optionsPanel;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_04398d1f;
    pSStack_78 = (System_String_array *)0x4398ba1;
    pUVar8 = (UnityEngine_UI_ToggleGroup_o *)UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_ToggleGroup_GetComponent_ToggleGroup)
    ;
    (__this_03->fields)._toggleGroup = pUVar8;
    pSStack_78 = (System_String_array *)0x4398bb1;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._toggleGroup);
    if ((int)in_R8->max_length < 1) {
label_04398c80:
      pSStack_78 = (System_String_array *)0x4398c8a;
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pSStack_78 = (System_String_array *)0x4398c9d;
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        in_R8 = pSStack_60;
        in_R9 = pSStack_50;
        in_RCX = pSStack_58;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          ppSVar16 = &"Label";
          pSStack_78 = (System_String_array *)0x4398cc5;
          pUVar6 = UnityEngine_Transform__Find(pUVar6,"Label",(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            ppMVar17 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
            pSStack_78 = (System_String_array *)0x4398cdc;
            pIVar14 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            ppSVar16 = (System_String_o **)ppMVar17;
            if (pIVar14 != (Il2CppObject *)0x0) {
              pSStack_78 = (System_String_array *)0x4398cfa;
              (*pIVar14->klass->vtable[0x26].methodPtr)(fStack_68,pIVar14,pIVar14->klass->vtable[0x26].method)
              ;
              UI_BaseSettingElement__Setup
                        ((UI_BaseSettingElement_o *)__this_03,(Settings_BaseSetting_o *)in_R8,
                         (UI_ElementStyle_o *)style,(System_String_o *)pSStack_58,pSStack_50,(MethodInfo *)0x0
                        );
              return extraout_RAX;
            }
          }
        }
      }
      goto label_04398d1f;
    }
    in_R9 = (System_String_o *)0x0;
    plVar18 = &MethodInfo_Void_Add;
    if ((in_R8->max_length & 0xffffffff) != 0) {
      do {
        in_RCX = (__this_03->fields)._toggles;
        pSStack_78 = (System_String_array *)0x4398c37;
        ppSVar16 = (System_String_o **)style;
        in_XMM1_Da = fStack_68;
        pUVar15 = UI_ToggleGroupSettingElement__CreateOptionToggle
                            (__this_03,in_R8->m_Items[(long)in_R9],(int32_t)in_R9,(UI_ElementStyle_o *)style,
                             fStack_64,fStack_68,(MethodInfo *)method_00);
        lVar5 = MethodInfo_Void_Add;
        if (in_RCX == (System_Collections_Generic_List_Toggle__o *)0x0) goto label_04398d1f;
        piVar1 = &(in_RCX->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (in_RCX->fields)._items;
        ppSVar16 = (System_String_o **)0x0;
        if (pUVar4 == (UnityEngine_UI_Toggle_array *)0x0) goto label_04398d1f;
        uVar3 = (in_RCX->fields)._size;
        if (uVar3 < (uint)pUVar4->max_length) {
          (in_RCX->fields)._size = uVar3 + 1;
          pUVar4->m_Items[(int)uVar3] = pUVar15;
          pSStack_78 = (System_String_array *)0x4398c7b;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
        }
        else {
          pSStack_78 = (System_String_array *)0x4398bfa;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)in_RCX,(Il2CppObject *)pUVar15,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        in_R9 = (System_String_o *)((long)&in_R9->klass + 1);
        uVar3 = (uint)in_R8->max_length;
        ppSVar16 = (System_String_o **)(long)(int)uVar3;
        if ((long)ppSVar16 <= (long)in_R9) goto label_04398c80;
      } while (in_R9 < (System_String_o *)(ulong)uVar3);
    }
  }
  pSStack_78 = (System_String_array *)0x4398d29;
  il2cpp_runtime_helper_022b2ca0();
label_04398d29:
  pSStack_78 = (System_String_array *)0x4398d35;
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_78 = (System_String_array *)0x4398d3d;
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSStack_78 = (System_String_array *)0x4398d4c;
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"ToggleGroup cannot have 0 options.");
  pSStack_78 = (System_String_array *)0x4398d59;
  System_ArgumentException___ctor_3c12490(__this_01,message,(MethodInfo *)0x0);
  pSStack_78 = (System_String_array *)0x4398d65;
  iVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup);
  pSStack_78 = (System_String_array *)UI_ToggleGroupSettingElement__CreateOptionToggle;
  __this_04 = __this_01;
  fVar20 = (float)il2cpp_runtime_helper_022b2b10();
  pSStack_a0 = __this_01;
  pSStack_98 = (System_String_array *)plVar18;
  pSStack_90 = style;
  pSStack_88 = in_R9;
  pSStack_80 = in_RCX;
  pSStack_78 = in_R8;
  if (g_data_057ae2e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionToggle_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ToggleGroupOption");
    il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
    il2cpp_runtime_helper_023445d0(&"Checkmark");
    g_data_057ae2e2 = '\x01';
  }
  pUVar11 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  path = pUVar11;
  System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
    (pUVar11->fields).method_ptr = (intptr_t)__this_04;
    il2cpp_runtime_helper_022b4080(&pUVar11->fields,__this_04);
    piVar19 = &(pUVar11->fields).invoke_impl;
    (pUVar11->fields).invoke_impl = iVar10;
    il2cpp_runtime_helper_022b4080(piVar19,iVar10);
    *(undefined4 *)&(pUVar11->fields).m_target = extraout_EDX;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = (UnityEngine_Events_UnityAction_T0__o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar11 = (UnityEngine_Events_UnityAction_T0__o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)path,"Prefabs/Elements/ToggleGroupOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar11 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
      path = (UnityEngine_Events_UnityAction_T0__o *)(__this_04->fields)._stackTraceString;
      if ((path != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)path,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar6,parent,0,(MethodInfo *)0x0);
        path = pUVar11;
        pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0)
        ;
        if ((pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
           ((pUVar13 = (UnityEngine_Events_UnityAction_T0__o *)
                       UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)pUVar12,"Label",(MethodInfo *)0x0),
            path = pUVar12, pUVar13 != (UnityEngine_Events_UnityAction_T0__o *)0x0 &&
            (pIVar14 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar13,MethodInfo_Text_GetComponent_Text), path = pUVar13,
            (System_Collections_Generic_List_Toggle__o *)ppSVar16 !=
            (System_Collections_Generic_List_Toggle__o *)0x0)))) {
          path = *(UnityEngine_Events_UnityAction_T0__o **)
                  &(((System_Collections_Generic_List_Toggle__o *)ppSVar16)->fields)._size;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar21 = UI_UIManager__GetThemeColor
                             ((System_String_o *)path,"DefaultSetting","TextColor","DefaultPanel",(MethodInfo *)0x0
                             );
          if (pIVar14 != (Il2CppObject *)0x0) {
            (*pIVar14->klass->vtable[0x17].methodPtr)(UVar21.fields.r,UVar21.fields.b,pIVar14);
            path = pUVar11;
            pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
            if ((pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
               (pUVar6 = UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar12,"Label",(MethodInfo *)0x0),
               path = pUVar12, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
              UI_BaseSettingElement__SetupLabel
                        ((UI_BaseSettingElement_o *)__this_04,pUVar7,(System_String_o *)*piVar19,
                         *(int32_t *)&(((System_Collections_Generic_List_Toggle__o *)ppSVar16)->fields)._items
                         ,(MethodInfo *)0x0);
              path = pUVar11;
              pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
              if (((pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
                  (((pUVar13 = (UnityEngine_Events_UnityAction_T0__o *)
                               UnityEngine_Transform__Find
                                         ((UnityEngine_Transform_o *)pUVar12,"Background",(MethodInfo *)0x0),
                    path = pUVar12, pUVar13 != (UnityEngine_Events_UnityAction_T0__o *)0x0 &&
                    (pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar13,MethodInfo_LayoutElement_GetComponent_LayoutElement), path = pUVar13,
                    pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0)) &&
                   (path = pUVar12,
                   pUVar13 = (UnityEngine_Events_UnityAction_T0__o *)
                             UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
                   pUVar13 != (UnityEngine_Events_UnityAction_T0__o *)0x0)))) &&
                 (pUVar6 = UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)pUVar13,"Checkmark",(MethodInfo *)0x0),
                 path = pUVar13, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                __this_02 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
                (*((System_String_c *)pUVar12->klass)[1]._1.properties)
                          (fVar20,pUVar12,((System_String_c *)pUVar12->klass)[1]._1.methods);
                (*(code *)((System_String_c *)pUVar12->klass)[1]._1.interfaceOffsets)(in_XMM1_Da);
                path = pUVar12;
                if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                  fVar2 = *(float *)&(__this_04->fields)._dynamicMethods;
                  value.fields.y = in_XMM1_Da * fVar2;
                  value.fields.x = fVar20 * fVar2;
                  UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
                  pUVar15 = (UnityEngine_UI_Toggle_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_Toggle_GetComponent_Toggle);
                  path = pUVar11;
                  if (pUVar15 != (UnityEngine_UI_Toggle_o *)0x0) {
                    UnityEngine_UI_Toggle__set_group
                              (pUVar15,(UnityEngine_UI_ToggleGroup_o *)(__this_04->fields)._stackTrace,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_Toggle__set_isOn(pUVar15,0,(MethodInfo *)0x0);
                    pUVar8 = (pUVar15->fields).m_Group;
                    pUVar11 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
                    path = pUVar11;
                    UnityEngine_Events_UnityAction_bool____ctor();
                    if (pUVar8 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
                      UnityEngine_Events_UnityEvent_bool___AddListener
                                ((UnityEngine_Events_UnityEvent_bool__o *)pUVar8,pUVar11,MethodInfo_Void_AddListener);
                      UI_UIManager__GetThemeColorBlock
                                (&UStack_f8,
                                 *(System_String_o **)
                                  &(((System_Collections_Generic_List_Toggle__o *)ppSVar16)->fields)._size,
                                 "DefaultSetting","Toggle","DefaultPanel",(MethodInfo *)0x0);
                      value_00.fields.m_NormalColor.fields.b = UStack_f8.fields.m_NormalColor.fields.b;
                      value_00.fields.m_NormalColor.fields.a = UStack_f8.fields.m_NormalColor.fields.a;
                      value_00.fields.m_NormalColor.fields.r = UStack_f8.fields.m_NormalColor.fields.r;
                      value_00.fields.m_NormalColor.fields.g = UStack_f8.fields.m_NormalColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.r =
                           UStack_f8.fields.m_HighlightedColor.fields.r;
                      value_00.fields.m_HighlightedColor.fields.g =
                           UStack_f8.fields.m_HighlightedColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.b =
                           UStack_f8.fields.m_HighlightedColor.fields.b;
                      value_00.fields.m_HighlightedColor.fields.a =
                           UStack_f8.fields.m_HighlightedColor.fields.a;
                      value_00.fields.m_PressedColor.fields.r = UStack_f8.fields.m_PressedColor.fields.r;
                      value_00.fields.m_PressedColor.fields.g = UStack_f8.fields.m_PressedColor.fields.g;
                      value_00.fields.m_PressedColor.fields.b = UStack_f8.fields.m_PressedColor.fields.b;
                      value_00.fields.m_PressedColor.fields.a = UStack_f8.fields.m_PressedColor.fields.a;
                      value_00.fields.m_SelectedColor.fields.r = UStack_f8.fields.m_SelectedColor.fields.r;
                      value_00.fields.m_SelectedColor.fields.g = UStack_f8.fields.m_SelectedColor.fields.g;
                      value_00.fields.m_SelectedColor.fields.b = UStack_f8.fields.m_SelectedColor.fields.b;
                      value_00.fields.m_SelectedColor.fields.a = UStack_f8.fields.m_SelectedColor.fields.a;
                      value_00.fields.m_DisabledColor.fields.r = UStack_f8.fields.m_DisabledColor.fields.r;
                      value_00.fields.m_DisabledColor.fields.g = UStack_f8.fields.m_DisabledColor.fields.g;
                      value_00.fields.m_DisabledColor.fields.b = UStack_f8.fields.m_DisabledColor.fields.b;
                      value_00.fields.m_DisabledColor.fields.a = UStack_f8.fields.m_DisabledColor.fields.a;
                      value_00.fields.m_ColorMultiplier = UStack_f8.fields.m_ColorMultiplier;
                      value_00.fields.m_FadeDuration = UStack_f8.fields.m_FadeDuration;
                      UnityEngine_UI_Selectable__set_colors
                                ((UnityEngine_UI_Selectable_o *)pUVar15,value_00,(MethodInfo *)0x0);
                      pIVar14 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)__this_02,MethodInfo_Image_GetComponent_Image);
                      path = *(UnityEngine_Events_UnityAction_T0__o **)
                              &(((System_Collections_Generic_List_Toggle__o *)ppSVar16)->fields)._size;
                      UVar21 = UI_UIManager__GetThemeColor
                                         ((System_String_o *)path,"DefaultSetting","ToggleFilledColor","DefaultPanel",
                                          (MethodInfo *)0x0);
                      if (pIVar14 != (Il2CppObject *)0x0) {
                        (*pIVar14->klass->vtable[0x17].methodPtr)
                                  (UVar21.fields.r,UVar21.fields.b,pIVar14,pIVar14->klass->vtable[0x17].method
                                  );
                        return (System_Collections_Generic_HashSet_SettingType__o *)pUVar15;
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
  System_Object___ctor((Il2CppObject *)path,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// UI.ToggleGroupSettingElement$$Setup
// il2cpp: void UI_ToggleGroupSettingElement__Setup (UI_ToggleGroupSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x4398a90

void UI_ToggleGroupSettingElement__Setup
               (UI_ToggleGroupSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  UnityEngine_UI_Toggle_array *pUVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_ToggleGroup_o *pUVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_00;
  System_String_o *message;
  intptr_t iVar10;
  UnityEngine_Events_UnityAction_T0__o *pUVar11;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_T0__o *pUVar12;
  UnityEngine_Events_UnityAction_T0__o *pUVar13;
  Il2CppObject *pIVar14;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Toggle_o *pUVar15;
  System_String_o **ppSVar16;
  MethodInfo_24E7B40 **ppMVar17;
  undefined4 extraout_EDX;
  System_ArgumentException_o *__this_02;
  UnityEngine_Events_UnityAction_T0__o *path;
  System_String_array *method_00;
  long *plVar18;
  intptr_t *piVar19;
  float fVar20;
  UnityEngine_Color_o UVar21;
  UnityEngine_UI_ColorBlock_o UStack_e0;
  System_ArgumentException_o *pSStack_88;
  Settings_BaseSetting_o *pSStack_80;
  UI_ElementStyle_o *pUStack_78;
  System_String_o *pSStack_70;
  System_Collections_Generic_List_Toggle__o *pSStack_68;
  System_String_array *pSStack_60;
  float local_50;
  float local_4c;
  System_String_array *local_48;
  System_Collections_Generic_List_Toggle__o *local_40;
  System_String_o *local_38;
  
  ppSVar16 = (System_String_o **)title;
  method_00 = options;
  local_50 = elementHeight;
  local_4c = elementWidth;
  if (g_data_057ae2e1 == '\0') {
    pSStack_60 = (System_String_array *)0x4398ad1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_60 = (System_String_array *)0x4398add;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToggleGroup_GetComponent_ToggleGroup);
    pSStack_60 = (System_String_array *)0x4398ae9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_60 = (System_String_array *)0x4398af5;
    il2cpp_runtime_helper_023445d0(&"Label");
    pSStack_60 = (System_String_array *)0x4398b01;
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ae2e1 = '\x01';
  }
  if (options == (System_String_array *)0x0) goto label_04398d1f;
  if (options->max_length == 0) goto label_04398d29;
  (__this->fields)._options = options;
  pSStack_60 = (System_String_array *)0x4398b2c;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._options);
  pSStack_60 = (System_String_array *)0x4398b36;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
label_04398d1f:
    pSStack_60 = (System_String_array *)0x4398d24;
    il2cpp_runtime_helper_022b2c90();
    plVar18 = (long *)setting;
  }
  else {
    ppSVar16 = &"Options";
    pSStack_60 = (System_String_array *)0x4398b53;
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Options",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04398d1f;
    pSStack_60 = (System_String_array *)0x4398b75;
    local_48 = (System_String_array *)setting;
    local_40 = (System_Collections_Generic_List_Toggle__o *)title;
    local_38 = tooltip;
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    (__this->fields)._optionsPanel = pUVar7;
    pSStack_60 = (System_String_array *)0x4398b85;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._optionsPanel,pUVar7);
    pUVar7 = (__this->fields)._optionsPanel;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_04398d1f;
    pSStack_60 = (System_String_array *)0x4398ba1;
    pUVar8 = (UnityEngine_UI_ToggleGroup_o *)UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_ToggleGroup_GetComponent_ToggleGroup)
    ;
    (__this->fields)._toggleGroup = pUVar8;
    pSStack_60 = (System_String_array *)0x4398bb1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._toggleGroup);
    if ((int)options->max_length < 1) {
label_04398c80:
      pSStack_60 = (System_String_array *)0x4398c8a;
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pSStack_60 = (System_String_array *)0x4398c9d;
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        tooltip = local_38;
        title = (System_String_o *)local_40;
        options = local_48;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          ppSVar16 = &"Label";
          pSStack_60 = (System_String_array *)0x4398cc5;
          pUVar6 = UnityEngine_Transform__Find(pUVar6,"Label",(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            ppMVar17 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
            pSStack_60 = (System_String_array *)0x4398cdc;
            pIVar14 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            ppSVar16 = (System_String_o **)ppMVar17;
            if (pIVar14 != (Il2CppObject *)0x0) {
              pSStack_60 = (System_String_array *)0x4398cfa;
              (*pIVar14->klass->vtable[0x26].methodPtr)(local_50,pIVar14,pIVar14->klass->vtable[0x26].method);
              UI_BaseSettingElement__Setup
                        ((UI_BaseSettingElement_o *)__this,(Settings_BaseSetting_o *)options,style,title,
                         tooltip,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_04398d1f;
    }
    tooltip = (System_String_o *)0x0;
    plVar18 = &MethodInfo_Void_Add;
    if ((options->max_length & 0xffffffff) != 0) {
      do {
        title = (System_String_o *)(__this->fields)._toggles;
        pSStack_60 = (System_String_array *)0x4398c37;
        ppSVar16 = (System_String_o **)style;
        elementHeight = local_50;
        pUVar15 = UI_ToggleGroupSettingElement__CreateOptionToggle
                            (__this,options->m_Items[(long)tooltip],(int32_t)tooltip,style,local_4c,local_50,
                             (MethodInfo *)method_00);
        lVar5 = MethodInfo_Void_Add;
        setting = (Settings_BaseSetting_o *)plVar18;
        if ((System_Collections_Generic_List_Toggle__o *)title ==
            (System_Collections_Generic_List_Toggle__o *)0x0) goto label_04398d1f;
        piVar1 = &(((System_Collections_Generic_List_Toggle__o *)title)->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (((System_Collections_Generic_List_Toggle__o *)title)->fields)._items;
        ppSVar16 = (System_String_o **)0x0;
        if (pUVar4 == (UnityEngine_UI_Toggle_array *)0x0) goto label_04398d1f;
        uVar3 = (((System_Collections_Generic_List_Toggle__o *)title)->fields)._size;
        if (uVar3 < (uint)pUVar4->max_length) {
          (((System_Collections_Generic_List_Toggle__o *)title)->fields)._size = uVar3 + 1;
          pUVar4->m_Items[(int)uVar3] = pUVar15;
          pSStack_60 = (System_String_array *)0x4398c7b;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
        }
        else {
          pSStack_60 = (System_String_array *)0x4398bfa;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)title,(Il2CppObject *)pUVar15,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        tooltip = (System_String_o *)((long)&tooltip->klass + 1);
        uVar3 = (uint)options->max_length;
        ppSVar16 = (System_String_o **)(long)(int)uVar3;
        if ((long)ppSVar16 <= (long)tooltip) goto label_04398c80;
      } while (tooltip < (System_String_o *)(ulong)uVar3);
    }
  }
  pSStack_60 = (System_String_array *)0x4398d29;
  il2cpp_runtime_helper_022b2ca0();
  setting = (Settings_BaseSetting_o *)plVar18;
label_04398d29:
  pSStack_60 = (System_String_array *)0x4398d35;
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_60 = (System_String_array *)0x4398d3d;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSStack_60 = (System_String_array *)0x4398d4c;
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"ToggleGroup cannot have 0 options.");
  pSStack_60 = (System_String_array *)0x4398d59;
  System_ArgumentException___ctor_3c12490(__this_00,message,(MethodInfo *)0x0);
  pSStack_60 = (System_String_array *)0x4398d65;
  iVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup);
  pSStack_60 = (System_String_array *)UI_ToggleGroupSettingElement__CreateOptionToggle;
  __this_02 = __this_00;
  fVar20 = (float)il2cpp_runtime_helper_022b2b10();
  pSStack_88 = __this_00;
  pSStack_80 = setting;
  pUStack_78 = style;
  pSStack_70 = tooltip;
  pSStack_68 = (System_Collections_Generic_List_Toggle__o *)title;
  pSStack_60 = options;
  if (g_data_057ae2e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionToggle_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ToggleGroupOption");
    il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
    il2cpp_runtime_helper_023445d0(&"Checkmark");
    g_data_057ae2e2 = '\x01';
  }
  pUVar11 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  path = pUVar11;
  System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
    (pUVar11->fields).method_ptr = (intptr_t)__this_02;
    il2cpp_runtime_helper_022b4080(&pUVar11->fields,__this_02);
    piVar19 = &(pUVar11->fields).invoke_impl;
    (pUVar11->fields).invoke_impl = iVar10;
    il2cpp_runtime_helper_022b4080(piVar19,iVar10);
    *(undefined4 *)&(pUVar11->fields).m_target = extraout_EDX;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = (UnityEngine_Events_UnityAction_T0__o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar11 = (UnityEngine_Events_UnityAction_T0__o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)path,"Prefabs/Elements/ToggleGroupOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar11 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
      path = (UnityEngine_Events_UnityAction_T0__o *)(__this_02->fields)._stackTraceString;
      if ((path != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)path,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar6,parent,0,(MethodInfo *)0x0);
        path = pUVar11;
        pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0)
        ;
        if ((pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
           ((pUVar13 = (UnityEngine_Events_UnityAction_T0__o *)
                       UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)pUVar12,"Label",(MethodInfo *)0x0),
            path = pUVar12, pUVar13 != (UnityEngine_Events_UnityAction_T0__o *)0x0 &&
            (pIVar14 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar13,MethodInfo_Text_GetComponent_Text), path = pUVar13,
            (UI_ElementStyle_o *)ppSVar16 != (UI_ElementStyle_o *)0x0)))) {
          path = (UnityEngine_Events_UnityAction_T0__o *)(((UI_ElementStyle_o *)ppSVar16)->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar21 = UI_UIManager__GetThemeColor
                             ((System_String_o *)path,"DefaultSetting","TextColor","DefaultPanel",(MethodInfo *)0x0
                             );
          if (pIVar14 != (Il2CppObject *)0x0) {
            (*pIVar14->klass->vtable[0x17].methodPtr)(UVar21.fields.r,UVar21.fields.b,pIVar14);
            path = pUVar11;
            pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
            if ((pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
               (pUVar6 = UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar12,"Label",(MethodInfo *)0x0),
               path = pUVar12, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
              UI_BaseSettingElement__SetupLabel
                        ((UI_BaseSettingElement_o *)__this_02,pUVar7,(System_String_o *)*piVar19,
                         (((UI_ElementStyle_o *)ppSVar16)->fields).FontSize,(MethodInfo *)0x0);
              path = pUVar11;
              pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
              if (((pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0) &&
                  (((pUVar13 = (UnityEngine_Events_UnityAction_T0__o *)
                               UnityEngine_Transform__Find
                                         ((UnityEngine_Transform_o *)pUVar12,"Background",(MethodInfo *)0x0),
                    path = pUVar12, pUVar13 != (UnityEngine_Events_UnityAction_T0__o *)0x0 &&
                    (pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar13,MethodInfo_LayoutElement_GetComponent_LayoutElement), path = pUVar13,
                    pUVar12 != (UnityEngine_Events_UnityAction_T0__o *)0x0)) &&
                   (path = pUVar12,
                   pUVar13 = (UnityEngine_Events_UnityAction_T0__o *)
                             UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
                   pUVar13 != (UnityEngine_Events_UnityAction_T0__o *)0x0)))) &&
                 (pUVar6 = UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)pUVar13,"Checkmark",(MethodInfo *)0x0),
                 path = pUVar13, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                __this_01 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
                (*((System_String_c *)pUVar12->klass)[1]._1.properties)
                          (fVar20,pUVar12,((System_String_c *)pUVar12->klass)[1]._1.methods);
                (*(code *)((System_String_c *)pUVar12->klass)[1]._1.interfaceOffsets)(elementHeight);
                path = pUVar12;
                if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                  fVar2 = *(float *)&(__this_02->fields)._dynamicMethods;
                  value.fields.y = elementHeight * fVar2;
                  value.fields.x = fVar20 * fVar2;
                  UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
                  pUVar15 = (UnityEngine_UI_Toggle_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_Toggle_GetComponent_Toggle);
                  path = pUVar11;
                  if (pUVar15 != (UnityEngine_UI_Toggle_o *)0x0) {
                    UnityEngine_UI_Toggle__set_group
                              (pUVar15,(UnityEngine_UI_ToggleGroup_o *)(__this_02->fields)._stackTrace,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_Toggle__set_isOn(pUVar15,0,(MethodInfo *)0x0);
                    pUVar8 = (pUVar15->fields).m_Group;
                    pUVar11 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
                    path = pUVar11;
                    UnityEngine_Events_UnityAction_bool____ctor();
                    if (pUVar8 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
                      UnityEngine_Events_UnityEvent_bool___AddListener
                                ((UnityEngine_Events_UnityEvent_bool__o *)pUVar8,pUVar11,MethodInfo_Void_AddListener);
                      UI_UIManager__GetThemeColorBlock
                                (&UStack_e0,(((UI_ElementStyle_o *)ppSVar16)->fields).ThemePanel,"DefaultSetting",
                                 "Toggle","DefaultPanel",(MethodInfo *)0x0);
                      value_00.fields.m_NormalColor.fields.b = UStack_e0.fields.m_NormalColor.fields.b;
                      value_00.fields.m_NormalColor.fields.a = UStack_e0.fields.m_NormalColor.fields.a;
                      value_00.fields.m_NormalColor.fields.r = UStack_e0.fields.m_NormalColor.fields.r;
                      value_00.fields.m_NormalColor.fields.g = UStack_e0.fields.m_NormalColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.r =
                           UStack_e0.fields.m_HighlightedColor.fields.r;
                      value_00.fields.m_HighlightedColor.fields.g =
                           UStack_e0.fields.m_HighlightedColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.b =
                           UStack_e0.fields.m_HighlightedColor.fields.b;
                      value_00.fields.m_HighlightedColor.fields.a =
                           UStack_e0.fields.m_HighlightedColor.fields.a;
                      value_00.fields.m_PressedColor.fields.r = UStack_e0.fields.m_PressedColor.fields.r;
                      value_00.fields.m_PressedColor.fields.g = UStack_e0.fields.m_PressedColor.fields.g;
                      value_00.fields.m_PressedColor.fields.b = UStack_e0.fields.m_PressedColor.fields.b;
                      value_00.fields.m_PressedColor.fields.a = UStack_e0.fields.m_PressedColor.fields.a;
                      value_00.fields.m_SelectedColor.fields.r = UStack_e0.fields.m_SelectedColor.fields.r;
                      value_00.fields.m_SelectedColor.fields.g = UStack_e0.fields.m_SelectedColor.fields.g;
                      value_00.fields.m_SelectedColor.fields.b = UStack_e0.fields.m_SelectedColor.fields.b;
                      value_00.fields.m_SelectedColor.fields.a = UStack_e0.fields.m_SelectedColor.fields.a;
                      value_00.fields.m_DisabledColor.fields.r = UStack_e0.fields.m_DisabledColor.fields.r;
                      value_00.fields.m_DisabledColor.fields.g = UStack_e0.fields.m_DisabledColor.fields.g;
                      value_00.fields.m_DisabledColor.fields.b = UStack_e0.fields.m_DisabledColor.fields.b;
                      value_00.fields.m_DisabledColor.fields.a = UStack_e0.fields.m_DisabledColor.fields.a;
                      value_00.fields.m_ColorMultiplier = UStack_e0.fields.m_ColorMultiplier;
                      value_00.fields.m_FadeDuration = UStack_e0.fields.m_FadeDuration;
                      UnityEngine_UI_Selectable__set_colors
                                ((UnityEngine_UI_Selectable_o *)pUVar15,value_00,(MethodInfo *)0x0);
                      pIVar14 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
                      path = (UnityEngine_Events_UnityAction_T0__o *)
                             (((UI_ElementStyle_o *)ppSVar16)->fields).ThemePanel;
                      UVar21 = UI_UIManager__GetThemeColor
                                         ((System_String_o *)path,"DefaultSetting","ToggleFilledColor","DefaultPanel",
                                          (MethodInfo *)0x0);
                      if (pIVar14 != (Il2CppObject *)0x0) {
                        (*pIVar14->klass->vtable[0x17].methodPtr)
                                  (UVar21.fields.r,UVar21.fields.b,pIVar14,pIVar14->klass->vtable[0x17].method
                                  );
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
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)path,(MethodInfo *)0x0);
  return;
}


// UI.ToggleGroupSettingElement$$CreateOptionToggle
// il2cpp: UnityEngine_UI_Toggle_o* UI_ToggleGroupSettingElement__CreateOptionToggle (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x4398d70

UnityEngine_UI_Toggle_o *
UI_ToggleGroupSettingElement__CreateOptionToggle
          (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,
          UI_ElementStyle_o *style,float width,float height,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_T0__o *pUVar4;
  UnityEngine_Events_UnityAction_T0__o *pUVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *obj;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Toggle_o *__this_02;
  UnityEngine_UI_Toggle_o *extraout_RAX;
  UnityEngine_Events_UnityAction_T0__o *path;
  intptr_t *piVar7;
  UnityEngine_Color_o UVar8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (g_data_057ae2e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionToggle_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ToggleGroupOption");
    il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
    il2cpp_runtime_helper_023445d0(&"Checkmark");
    g_data_057ae2e2 = '\x01';
  }
  pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  path = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
    (pUVar2->fields).method_ptr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&pUVar2->fields,__this);
    piVar7 = &(pUVar2->fields).invoke_impl;
    (pUVar2->fields).invoke_impl = (intptr_t)option;
    il2cpp_runtime_helper_022b4080(piVar7,option);
    *(int32_t *)&(pUVar2->fields).m_target = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = (UnityEngine_Events_UnityAction_T0__o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)path,"Prefabs/Elements/ToggleGroupOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar2 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
      path = (UnityEngine_Events_UnityAction_T0__o *)(__this->fields)._optionsPanel;
      if (path != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
        parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)path,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar3,parent,0,(MethodInfo *)0x0);
          path = pUVar2;
          pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0)
          ;
          if (pUVar4 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
            pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                     UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar4,"Label",(MethodInfo *)0x0);
            path = pUVar4;
            if (pUVar5 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
              pIVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
              path = pUVar5;
              if (style != (UI_ElementStyle_o *)0x0) {
                path = (UnityEngine_Events_UnityAction_T0__o *)(style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UVar8 = UI_UIManager__GetThemeColor
                                  ((System_String_o *)path,"DefaultSetting","TextColor","DefaultPanel",
                                   (MethodInfo *)0x0);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  (*pIVar6->klass->vtable[0x17].methodPtr)(UVar8.fields.r,UVar8.fields.b,pIVar6);
                  path = pUVar2;
                  pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                           UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                    pUVar3 = UnityEngine_Transform__Find
                                       ((UnityEngine_Transform_o *)pUVar4,"Label",(MethodInfo *)0x0);
                    path = pUVar4;
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      obj = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                      UI_BaseSettingElement__SetupLabel
                                ((UI_BaseSettingElement_o *)__this,obj,(System_String_o *)*piVar7,
                                 (style->fields).FontSize,(MethodInfo *)0x0);
                      path = pUVar2;
                      pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                               UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                        pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                                 UnityEngine_Transform__Find
                                           ((UnityEngine_Transform_o *)pUVar4,"Background",(MethodInfo *)0x0);
                        path = pUVar4;
                        if (pUVar5 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                          pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                                   UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                          path = pUVar5;
                          if (pUVar4 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                            path = pUVar4;
                            pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                                     UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                            if (pUVar5 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                              pUVar3 = UnityEngine_Transform__Find
                                                 ((UnityEngine_Transform_o *)pUVar5,"Checkmark",
                                                  (MethodInfo *)0x0);
                              path = pUVar5;
                              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                __this_01 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
                                (*((System_String_c *)pUVar4->klass)[1]._1.properties)
                                          (width,pUVar4,((System_String_c *)pUVar4->klass)[1]._1.methods);
                                (*(code *)((System_String_c *)pUVar4->klass)[1]._1.interfaceOffsets)(height);
                                path = pUVar4;
                                if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                  fVar1 = (__this->fields)._checkMarkSizeMultiplier;
                                  value.fields.y = height * fVar1;
                                  value.fields.x = width * fVar1;
                                  UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
                                  __this_02 = (UnityEngine_UI_Toggle_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_Toggle_GetComponent_Toggle);
                                  path = pUVar2;
                                  if (__this_02 != (UnityEngine_UI_Toggle_o *)0x0) {
                                    UnityEngine_UI_Toggle__set_group
                                              (__this_02,(__this->fields)._toggleGroup,(MethodInfo *)0x0);
                                    UnityEngine_UI_Toggle__set_isOn(__this_02,0,(MethodInfo *)0x0);
                                    __this_00 = (__this_02->fields).m_Group;
                                    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                                             il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
                                    path = pUVar2;
                                    UnityEngine_Events_UnityAction_bool____ctor();
                                    if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
                                      UnityEngine_Events_UnityEvent_bool___AddListener
                                                ((UnityEngine_Events_UnityEvent_bool__o *)__this_00,pUVar2,
                                                 MethodInfo_Void_AddListener);
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
                                      value_00.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                                      value_00.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                      UnityEngine_UI_Selectable__set_colors
                                                ((UnityEngine_UI_Selectable_o *)__this_02,value_00,
                                                 (MethodInfo *)0x0);
                                      pIVar6 = UnityEngine_Component__GetComponent_object_
                                                         ((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
                                      path = (UnityEngine_Events_UnityAction_T0__o *)
                                             (style->fields).ThemePanel;
                                      UVar8 = UI_UIManager__GetThemeColor
                                                        ((System_String_o *)path,"DefaultSetting","ToggleFilledColor",
                                                         "DefaultPanel",(MethodInfo *)0x0);
                                      if (pIVar6 != (Il2CppObject *)0x0) {
                                        (*pIVar6->klass->vtable[0x17].methodPtr)
                                                  (UVar8.fields.r,UVar8.fields.b,pIVar6,
                                                   pIVar6->klass->vtable[0x17].method);
                                        return __this_02;
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
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)path,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.ToggleGroupSettingElement$$OnValueChanged
// il2cpp: void UI_ToggleGroupSettingElement__OnValueChanged (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, bool value, const MethodInfo* method);
// 0x4399390

void UI_ToggleGroupSettingElement__OnValueChanged
               (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,
               bool_conflict value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  uint uVar3;
  bool_conflict bVar4;
  UnityEngine_UI_Toggle_o *__this_01;
  undefined8 uVar5;
  System_ArgumentOutOfRangeException_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *method_00;
  ulong uVar8;
  Il2CppClass *option_00;
  UI_ToggleGroupSettingElement_o *__this_03;
  System_ArgumentOutOfRangeException_o *__this_04;
  
  option_00 = (Il2CppClass *)option;
  if (g_data_057ae2e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2e3 = '\x01';
  }
  if ((char)value == '\0') {
    return;
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_03 = (UI_ToggleGroupSettingElement_o *)(__this->fields)._setting;
    if (__this_03 != (UI_ToggleGroupSettingElement_o *)0x0) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      option_00 = TypeInfo_IntSetting;
      if ((bVar1 <= (((Settings_TypedSetting_T__c *)__this_03->klass)->_2).naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_IntSetting)) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_03,index,MethodInfo_Void_set_Value);
        return;
      }
      goto label_043994a5;
    }
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    __this_03 = (UI_ToggleGroupSettingElement_o *)(__this->fields)._setting;
    if (__this_03 != (UI_ToggleGroupSettingElement_o *)0x0) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      option_00 = TypeInfo_StringSetting;
      if ((bVar1 <= (((Settings_TypedSetting_T__c *)__this_03->klass)->_2).naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_StringSetting)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)option,MethodInfo_Void_set_Value);
        return;
      }
label_043994a5:
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae2e4 = '\x01';
  }
  __this_00 = (__this_03->fields)._toggleGroup;
  __this_04 = (System_ArgumentOutOfRangeException_o *)0x0;
  if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
    option_00 = (Il2CppClass *)0x1;
    UnityEngine_UI_ToggleGroup__SetAllTogglesOff(__this_00,1,(MethodInfo *)0x0);
    iVar2 = (__this_03->fields)._settingType;
    if (iVar2 == 2) {
      __this_04 = (System_ArgumentOutOfRangeException_o *)(__this_03->fields)._setting;
      if (__this_04 != (System_ArgumentOutOfRangeException_o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        option_00 = TypeInfo_IntSetting;
        if (((((System_Collections_Generic_List_object__c *)__this_04->klass)->_2).naturalAligment < bVar1) ||
           ((((System_Collections_Generic_List_object__c *)__this_04->klass)->_2).typeHierarchy
            [(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04399607;
        pSVar6 = (System_ArgumentOutOfRangeException_o *)(__this_03->fields)._toggles;
        if (pSVar6 != (System_ArgumentOutOfRangeException_o *)0x0) {
          uVar3 = *(uint *)((long)&(__this_04->fields)._className + 4);
          option_00 = (Il2CppClass *)(ulong)uVar3;
          __this_01 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar6,uVar3,MethodInfo_Toggle_get_Item);
          __this_04 = pSVar6;
          goto joined_r0x043995ee;
        }
      }
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      __this_04 = (System_ArgumentOutOfRangeException_o *)(__this_03->fields)._setting;
      if (__this_04 != (System_ArgumentOutOfRangeException_o *)0x0) {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        option_00 = TypeInfo_StringSetting;
        if (((((System_Collections_Generic_List_object__c *)__this_04->klass)->_2).naturalAligment < bVar1) ||
           ((((System_Collections_Generic_List_object__c *)__this_04->klass)->_2).typeHierarchy
            [(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04399607;
        option_00 = (Il2CppClass *)(__this_04->fields)._message;
        uVar3 = UI_ToggleGroupSettingElement__FindOptionIndex
                          (__this_03,(System_String_o *)option_00,method_00);
        __this_04 = (System_ArgumentOutOfRangeException_o *)(__this_03->fields)._toggles;
        if (__this_04 != (System_ArgumentOutOfRangeException_o *)0x0) {
          option_00 = (Il2CppClass *)(ulong)uVar3;
          __this_01 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_04,uVar3,MethodInfo_Toggle_get_Item);
joined_r0x043995ee:
          if (__this_01 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Toggle__set_isOn(__this_01,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04399607:
  il2cpp_runtime_helper_022b2fd0();
  pSVar7 = (__this_04->fields)._remoteStackTraceString;
  if (pSVar7 != (System_String_o *)0x0) {
    uVar8 = 0;
    pSVar6 = __this_04;
    do {
      if ((long)(int)*(uint *)&pSVar7[1].klass <= (long)uVar8) {
        uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
        pSVar6 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar5);
        pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Option not found");
        System_ArgumentOutOfRangeException___ctor_3c13a50(pSVar6,pSVar7,(MethodInfo *)0x0);
        uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_FindOptionIndex);
        il2cpp_runtime_helper_022b2b10(pSVar6,uVar5);
label_043996b4:
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057ae2e5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Toggle);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Toggle);
          g_data_057ae2e5 = '\x01';
        }
        __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Toggle);
        System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_UI_Toggle);
        *(System_Collections_Generic_List_object__o **)&(pSVar6->fields)._remoteStackIndex = __this_02;
        il2cpp_runtime_helper_022b4080(&(pSVar6->fields)._remoteStackIndex);
        *(undefined4 *)&(pSVar6->fields)._dynamicMethods = 0x3f2b851f;
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      if (*(uint *)&pSVar7[1].klass <= uVar8) goto label_043996b4;
      pSVar6 = (&pSVar7[1].monitor)[uVar8];
      bVar4 = System_String__op_Equality
                        ((System_String_o *)pSVar6,(System_String_o *)option_00,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      uVar8 = uVar8 + 1;
      pSVar7 = (__this_04->fields)._remoteStackTraceString;
    } while (pSVar7 != (System_String_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.ToggleGroupSettingElement$$SyncElement
// il2cpp: void UI_ToggleGroupSettingElement__SyncElement (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x43994b0

void UI_ToggleGroupSettingElement__SyncElement(UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  uint uVar3;
  bool_conflict bVar4;
  UnityEngine_UI_Toggle_o *__this_01;
  undefined8 uVar5;
  System_ArgumentOutOfRangeException_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *method_00;
  ulong uVar8;
  System_ArgumentOutOfRangeException_o *__this_03;
  
  if (g_data_057ae2e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae2e4 = '\x01';
  }
  __this_00 = (__this->fields)._toggleGroup;
  __this_03 = (System_ArgumentOutOfRangeException_o *)0x0;
  if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
    method = (MethodInfo *)0x1;
    UnityEngine_UI_ToggleGroup__SetAllTogglesOff(__this_00,1,(MethodInfo *)0x0);
    iVar2 = (__this->fields)._settingType;
    if (iVar2 == 2) {
      __this_03 = (System_ArgumentOutOfRangeException_o *)(__this->fields)._setting;
      if (__this_03 != (System_ArgumentOutOfRangeException_o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        method = (MethodInfo *)TypeInfo_IntSetting;
        if (((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).naturalAligment < bVar1) ||
           ((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).typeHierarchy
            [(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04399607;
        pSVar6 = (System_ArgumentOutOfRangeException_o *)(__this->fields)._toggles;
        if (pSVar6 != (System_ArgumentOutOfRangeException_o *)0x0) {
          uVar3 = *(uint *)((long)&(__this_03->fields)._className + 4);
          method = (MethodInfo *)(ulong)uVar3;
          __this_01 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar6,uVar3,MethodInfo_Toggle_get_Item);
          __this_03 = pSVar6;
          goto joined_r0x043995ee;
        }
      }
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      __this_03 = (System_ArgumentOutOfRangeException_o *)(__this->fields)._setting;
      if (__this_03 != (System_ArgumentOutOfRangeException_o *)0x0) {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        method = (MethodInfo *)TypeInfo_StringSetting;
        if (((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).naturalAligment < bVar1) ||
           ((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).typeHierarchy
            [(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04399607;
        method = (MethodInfo *)(__this_03->fields)._message;
        uVar3 = UI_ToggleGroupSettingElement__FindOptionIndex(__this,(System_String_o *)method,method_00);
        __this_03 = (System_ArgumentOutOfRangeException_o *)(__this->fields)._toggles;
        if (__this_03 != (System_ArgumentOutOfRangeException_o *)0x0) {
          method = (MethodInfo *)(ulong)uVar3;
          __this_01 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_03,uVar3,MethodInfo_Toggle_get_Item);
joined_r0x043995ee:
          if (__this_01 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Toggle__set_isOn(__this_01,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04399607:
  il2cpp_runtime_helper_022b2fd0();
  pSVar7 = (__this_03->fields)._remoteStackTraceString;
  if (pSVar7 != (System_String_o *)0x0) {
    uVar8 = 0;
    pSVar6 = __this_03;
    do {
      if ((long)(int)*(uint *)&pSVar7[1].klass <= (long)uVar8) {
        uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
        pSVar6 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar5);
        pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Option not found");
        System_ArgumentOutOfRangeException___ctor_3c13a50(pSVar6,pSVar7,(MethodInfo *)0x0);
        uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_FindOptionIndex);
        il2cpp_runtime_helper_022b2b10(pSVar6,uVar5);
label_043996b4:
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057ae2e5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Toggle);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Toggle);
          g_data_057ae2e5 = '\x01';
        }
        __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Toggle);
        System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_UI_Toggle);
        *(System_Collections_Generic_List_object__o **)&(pSVar6->fields)._remoteStackIndex = __this_02;
        il2cpp_runtime_helper_022b4080(&(pSVar6->fields)._remoteStackIndex);
        *(undefined4 *)&(pSVar6->fields)._dynamicMethods = 0x3f2b851f;
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      if (*(uint *)&pSVar7[1].klass <= uVar8) goto label_043996b4;
      pSVar6 = (&pSVar7[1].monitor)[uVar8];
      bVar4 = System_String__op_Equality
                        ((System_String_o *)pSVar6,(System_String_o *)method,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      uVar8 = uVar8 + 1;
      pSVar7 = (__this_03->fields)._remoteStackTraceString;
    } while (pSVar7 != (System_String_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.ToggleGroupSettingElement$$FindOptionIndex
// il2cpp: int32_t UI_ToggleGroupSettingElement__FindOptionIndex (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, const MethodInfo* method);
// 0x4399610

int32_t UI_ToggleGroupSettingElement__FindOptionIndex
                  (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,MethodInfo *method)

{
  uint uVar1;
  int32_t extraout_EAX;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  undefined8 uVar4;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_Collections_Generic_List_object__o *__this_01;
  ulong unaff_RBX;
  
  pSVar3 = (__this->fields)._options;
  if (pSVar3 != (System_String_array *)0x0) {
    unaff_RBX = 0;
    __this_00 = (System_ArgumentOutOfRangeException_o *)__this;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)unaff_RBX) {
        uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
        __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar4);
        paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Option not found");
        System_ArgumentOutOfRangeException___ctor_3c13a50(__this_00,paramName,(MethodInfo *)0x0);
        uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_FindOptionIndex);
        il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
label_043996b4:
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057ae2e5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Toggle);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Toggle);
          g_data_057ae2e5 = '\x01';
        }
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Toggle);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_UI_Toggle);
        *(System_Collections_Generic_List_object__o **)&(__this_00->fields)._remoteStackIndex = __this_01;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._remoteStackIndex);
        *(undefined4 *)&(__this_00->fields)._dynamicMethods = 0x3f2b851f;
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
        return extraout_EAX;
      }
      if (uVar1 <= unaff_RBX) goto label_043996b4;
      __this_00 = (System_ArgumentOutOfRangeException_o *)pSVar3->m_Items[unaff_RBX];
      bVar2 = System_String__op_Equality((System_String_o *)__this_00,option,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') goto label_04399665;
      unaff_RBX = unaff_RBX + 1;
      pSVar3 = (__this->fields)._options;
    } while (pSVar3 != (System_String_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_04399665:
  return (int32_t)unaff_RBX;
}


// UI.ToggleGroupSettingElement$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___ctor (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x43996c0

void UI_ToggleGroupSettingElement___ctor(UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Toggle__o *__this_00;
  
  if (g_data_057ae2e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Toggle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Toggle);
    g_data_057ae2e5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Toggle__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Toggle);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_UI_Toggle);
  (__this->fields)._toggles = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._toggles);
  (__this->fields)._checkMarkSizeMultiplier = 0.67;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


