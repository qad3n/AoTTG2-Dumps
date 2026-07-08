// Type: UI.CharacterHumanPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterHumanPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CharacterHumanPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterHumanPanel$$Setup
// il2cpp: void UI_CharacterHumanPanel__Setup (UI_CharacterHumanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x408e460

void UI_CharacterHumanPanel__Setup
               (UI_CharacterHumanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Settings_TypedSetting_T__o *pSVar7;
  System_Object_array *pSVar8;
  long lVar9;
  UI_IconPickPopup_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Settings_BaseSetting_o *pSVar12;
  long *plVar13;
  bool_conflict bVar14;
  uint uVar15;
  System_String_o *pSVar16;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar17;
  UI_CharacterHumanPanel_o *pUVar18;
  System_String_array *pSVar19;
  UnityEngine_Events_UnityAction_o *pUVar20;
  UI_TooltipPopup_o *tooltipPopup;
  System_String_array *icons;
  System_String_array *tooltips;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_CharacterHumanPanel_o *__this_01;
  Settings_TypedSetting_int__o *__this_02;
  System_Nullable_float__Fields SStack_80;
  long lStack_78;
  UnityEngine_Transform_o *pUStack_70;
  MethodInfo *pMStack_68;
  System_String_o *pSStack_60;
  System_Nullable_float__Fields SStack_58;
  System_String_array *pSStack_50;
  System_String_o *pSStack_48;
  UI_CharacterHumanPanel_o *pUStack_40;
  long lStack_38;
  
  if (DAT_05704587 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__2_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__2_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"Costume");
    il2cpp_init_method_metadata(&"Character");
    il2cpp_init_method_metadata(&"Loadout");
    il2cpp_init_method_metadata(&"Costume3");
    il2cpp_init_method_metadata(&"Costume2");
    il2cpp_init_method_metadata(&"Costume1");
    il2cpp_init_method_metadata(&"Special");
    il2cpp_init_method_metadata(&"");
    DAT_05704587 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  lVar4 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  if (((*(long *)(lVar4 + 0x50) == 0) || (*(long *)(lVar4 + 0x40) == 0)) ||
     (lVar5 = *(long *)(lVar4 + 0x70), lVar5 == 0)) goto LAB_0408f312;
  pSStack_60 = "General";
  lVar6 = *(long *)(*(long *)(lVar4 + 0x50) + 0x58);
  lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 0x28);
  pSVar7 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x28);
  if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pSVar7 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0408f312;
  Settings_TypedSetting<object>__set_Value
            (pSVar7,(Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),MethodInfo_Void_set_Value);
  pSVar16 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pMStack_68 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pMStack_68,0x18,200.0,20.0,pSVar16,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto LAB_0408f312;
  if (*(char *)(*(long *)(lVar6 + 0x58) + 0x11) == '\0') {
LAB_0408e7fc:
    lVar9 = *(long *)(lVar6 + 0x60);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0408f312;
    pIVar17 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_0408f312;
    uVar15 = (__this_00->fields)._size;
    if ((uint)pSVar8->max_length <= uVar15) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar17,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      goto LAB_0408e7fc;
    }
    (__this_00->fields)._size = uVar15 + 1;
    pSVar8->m_Items[(int)uVar15] = pIVar17;
    il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar15);
    lVar9 = *(long *)(lVar6 + 0x60);
  }
  if (lVar9 == 0) goto LAB_0408f312;
  if (*(char *)(lVar9 + 0x11) == '\0') {
LAB_0408e8a8:
    lVar9 = *(long *)(lVar6 + 0x68);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0408f312;
    pIVar17 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_0408f312;
    uVar15 = (__this_00->fields)._size;
    if ((uint)pSVar8->max_length <= uVar15) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar17,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      goto LAB_0408e8a8;
    }
    (__this_00->fields)._size = uVar15 + 1;
    pSVar8->m_Items[(int)uVar15] = pIVar17;
    il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar15);
    lVar9 = *(long *)(lVar6 + 0x68);
  }
  if (lVar9 == 0) goto LAB_0408f312;
  if (*(char *)(lVar9 + 0x11) == '\0') {
LAB_0408e954:
    lVar9 = *(long *)(lVar6 + 0x70);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0408f312;
    pIVar17 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_0408f312;
    uVar15 = (__this_00->fields)._size;
    if ((uint)pSVar8->max_length <= uVar15) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar17,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      goto LAB_0408e954;
    }
    (__this_00->fields)._size = uVar15 + 1;
    pSVar8->m_Items[(int)uVar15] = pIVar17;
    il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar15);
    lVar9 = *(long *)(lVar6 + 0x70);
  }
  if (lVar9 == 0) goto LAB_0408f312;
  if (*(char *)(lVar9 + 0x11) == '\0') {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0408f312;
    iVar3 = (__this_00->fields)._size;
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0408f312;
    pIVar17 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_0408f312;
    uVar15 = (__this_00->fields)._size;
    if (uVar15 < (uint)pSVar8->max_length) {
      (__this_00->fields)._size = uVar15 + 1;
      pSVar8->m_Items[(int)uVar15] = pIVar17;
      il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar15);
      iVar3 = (__this_00->fields)._size;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar17,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      iVar3 = (__this_00->fields)._size;
    }
  }
  if (iVar3 == 0) {
    uVar15 = 0;
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
      uVar15 = (__this_00->fields)._size;
    }
    lVar9 = MethodInfo_Void_Add;
    pIVar17 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_0408f312;
    if (uVar15 < (uint)pSVar8->max_length) {
      (__this_00->fields)._size = uVar15 + 1;
      pSVar8->m_Items[(int)uVar15] = pIVar17;
      il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar15);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar17,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_0408f312;
  pSVar16 = *(System_String_o **)(*(long *)(lVar4 + 0x28) + 0x18);
  if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar14 = System_String__op_Equality
                     (pSVar16,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    if ((*(long *)(lVar4 + 0x38) == 0) ||
       (*(Settings_TypedSetting_T__o **)(lVar5 + 0x38) == (Settings_TypedSetting_T__o *)0x0))
    goto LAB_0408f312;
    Settings_TypedSetting<object>__set_Value
              (*(Settings_TypedSetting_T__o **)(lVar5 + 0x38),
               *(Il2CppObject **)(*(long *)(lVar4 + 0x38) + 0x18),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar4 + 0x48) == 0) ||
       (*(Settings_TypedSetting_int__o **)(lVar5 + 0x48) == (Settings_TypedSetting_int__o *)0x0))
    goto LAB_0408f312;
    Settings_TypedSetting<int>__set_Value
              (*(Settings_TypedSetting_int__o **)(lVar5 + 0x48),
               *(int32_t *)(*(long *)(lVar4 + 0x48) + 0x14),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar4 + 0x40) == 0) ||
       (*(Settings_TypedSetting_int__o **)(lVar5 + 0x40) == (Settings_TypedSetting_int__o *)0x0))
    goto LAB_0408f312;
    Settings_TypedSetting<int>__set_Value
              (*(Settings_TypedSetting_int__o **)(lVar5 + 0x40),
               *(int32_t *)(*(long *)(lVar4 + 0x40) + 0x14),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar4 + 0x30) == 0) ||
       (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30) == (Settings_TypedSetting_T__o *)0x0))
    goto LAB_0408f312;
    Settings_TypedSetting<object>__set_Value
              (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30),
               *(Il2CppObject **)(*(long *)(lVar4 + 0x30) + 0x18),MethodInfo_Void_set_Value);
  }
  if (*(long *)(lVar5 + 0x30) == 0) goto LAB_0408f312;
  bVar14 = System_Collections_Generic_List<object>__Contains
                     (__this_00,*(Il2CppObject **)(*(long *)(lVar5 + 0x30) + 0x18),MethodInfo_Boolean_Contains);
  if ((char)bVar14 == '\0') {
    pSVar7 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x30);
    pIVar17 = System_Collections_Generic_List<object>__get_Item(__this_00,0,MethodInfo_String_get_Item);
    if (pSVar7 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0408f312;
    Settings_TypedSetting<object>__set_Value(pSVar7,pIVar17,MethodInfo_Void_set_Value);
  }
  if ((*(long *)(lVar5 + 0x30) == 0) || (lStack_38 = lVar6, *(long *)(lVar6 + 0x80) == 0))
  goto LAB_0408f312;
  pSVar16 = *(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18);
  bVar2 = *(byte *)(*(long *)(lVar6 + 0x80) + 0x11);
  if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar18 = (UI_CharacterHumanPanel_o *)
            Characters_HumanSpecials__GetSpecialNames(pSVar16,(uint)bVar2,(MethodInfo *)0x0);
  if ((*(long *)(lVar5 + 0x38) == 0) || (pUVar18 == (UI_CharacterHumanPanel_o *)0x0))
  goto LAB_0408f312;
  pMVar21 = *(MethodInfo **)(*(long *)(lVar5 + 0x38) + 0x18);
  __this_01 = pUVar18;
  bVar14 = System_Collections_Generic_List<object>__Contains
                     ((System_Collections_Generic_List_object__o *)pUVar18,(Il2CppObject *)pMVar21,
                      MethodInfo_Boolean_Contains);
  if ((char)bVar14 == '\0') {
    __this_01 = *(UI_CharacterHumanPanel_o **)(lVar5 + 0x38);
    if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_01 == (UI_CharacterHumanPanel_o *)0x0) goto LAB_0408f312;
    pMVar21 = *(MethodInfo **)(*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x20);
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)pMVar21,MethodInfo_Void_set_Value);
  }
  pUStack_40 = pUVar18;
  pSVar19 = UI_CharacterHumanPanel__GetCharOptions(__this_01,pMVar21);
  __this_02 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x40);
  if ((__this_02 == (Settings_TypedSetting_int__o *)0x0) || (pSVar19 == (System_String_array *)0x0))
  goto LAB_0408f312;
  if ((int)pSVar19->max_length <= (__this_02->fields)._value) {
    Settings_TypedSetting<int>__set_Value(__this_02,0,MethodInfo_Void_set_Value);
    __this_02 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x40);
  }
  pUStack_70 = (__this->fields).DoublePanelLeft;
  pUVar18 = (UI_CharacterHumanPanel_o *)(__this->fields).LocaleCategory;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = pSStack_60;
  lStack_78 = lVar5;
  pSStack_48 = UI_UIManager__GetLocale
                         ((System_String_o *)pUVar18,pSStack_60,"Character","",
                          "",(MethodInfo *)0x0);
  pSStack_50 = UI_CharacterHumanPanel__GetCharIcons(pUVar18,pSVar19,method_00);
  lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar4 == 0) goto LAB_0408f312;
  pUVar10 = *(UI_IconPickPopup_o **)(lVar4 + 0x50);
  pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateIconPickSetting
            (pUStack_70,(UI_ElementStyle_o *)pMStack_68,(Settings_BaseSetting_o *)__this_02,
             pSStack_48,pSVar19,pSStack_50,pUVar10,"",(System_String_array *)0x0,180.0,
             40.0,pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
  pUVar11 = (__this->fields).DoublePanelLeft;
  pSVar12 = *(Settings_BaseSetting_o **)(lStack_78 + 0x48);
  pSVar16 = UI_UIManager__GetLocale
                      ((__this->fields).LocaleCategory,pSVar16,"Costume","",
                       "",(MethodInfo *)0x0);
  pSVar19 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
  if (pSVar19 == (System_String_array *)0x0) goto LAB_0408f312;
  if ((int)pSVar19->max_length == 0) goto LAB_0408f323;
  pSVar19->m_Items[0] = "Costume1";
  il2cpp_runtime_glue(pSVar19->m_Items);
  if ((uint)pSVar19->max_length < 2) goto LAB_0408f323;
  pSVar19->m_Items[1] = "Costume2";
  il2cpp_runtime_glue(pSVar19->m_Items + 1);
  if ((uint)pSVar19->max_length < 3) goto LAB_0408f323;
  pSVar19->m_Items[2] = "Costume3";
  il2cpp_runtime_glue(pSVar19->m_Items + 2);
  SStack_80.hasValue = 0;
  SStack_80.value = 0.0;
  System_Nullable<float>___ctor((System_Nullable_float__o)&SStack_80,180.0,MethodInfo_Nullable_1_Single);
  pMVar21 = pMStack_68;
  UI_ElementFactory__CreateDropdownSetting
            (pUVar11,(UI_ElementStyle_o *)pMStack_68,pSVar12,pSVar16,pSVar19,"",180.0,40.0
             ,300.0,(System_Nullable_float__o)SStack_80,(UnityEngine_Events_UnityAction_o *)0x0,
             (MethodInfo *)0x0);
  pUStack_70 = *(UnityEngine_Transform_o **)(lStack_78 + 0x30);
  pUVar11 = (__this->fields).DoublePanelLeft;
  pSVar16 = UI_UIManager__GetLocale
                      ((__this->fields).LocaleCategory,pSStack_60,"Loadout","",
                       "",(MethodInfo *)0x0);
  pSVar19 = (System_String_array *)
            System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
  SStack_58.hasValue = 0;
  SStack_58.value = 0.0;
  System_Nullable<float>___ctor((System_Nullable_float__o)&SStack_58,180.0,MethodInfo_Nullable_1_Single);
  pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (pUVar11,(UI_ElementStyle_o *)pMVar21,(Settings_BaseSetting_o *)pUStack_70,pSVar16,
             pSVar19,"",180.0,40.0,300.0,(System_Nullable_float__o)SStack_58,pUVar20,
             (MethodInfo *)0x0);
  pSVar19 = (System_String_array *)
            System_Collections_Generic_List<object>__ToArray
                      ((System_Collections_Generic_List_object__o *)pUStack_40,MethodInfo_String___ToArray);
  plVar13 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (plVar13 == (long *)0x0) {
LAB_0408efde:
    tooltipPopup = (UI_TooltipPopup_o *)0x0;
  }
  else {
    if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar13 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) goto LAB_0408efde;
    tooltipPopup = (UI_TooltipPopup_o *)plVar13[0x29];
  }
  pUVar11 = (__this->fields).DoublePanelLeft;
  pUVar18 = (UI_CharacterHumanPanel_o *)(__this->fields).LocaleCategory;
  pSVar12 = *(Settings_BaseSetting_o **)(lStack_78 + 0x38);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = UI_UIManager__GetLocale
                      ((System_String_o *)pUVar18,pSStack_60,"Special","","",
                       (MethodInfo *)0x0);
  icons = UI_CharacterHumanPanel__GetSpecialIcons(pUVar18,pSVar19,method_01);
  lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar4 != 0) {
    pUVar10 = *(UI_IconPickPopup_o **)(lVar4 + 0x50);
    tooltips = UI_CharacterHumanPanel__GetSpecialTooltips(__this,pSVar19,method_02);
    pMVar21 = pMStack_68;
    UI_ElementFactory__CreateIconPickSetting
              (pUVar11,(UI_ElementStyle_o *)pMStack_68,pSVar12,pSVar16,pSVar19,icons,pUVar10,
               "",tooltips,180.0,40.0,(UnityEngine_Events_UnityAction_o *)0x0,tooltipPopup
               ,(MethodInfo *)0x0);
    if (*(long *)(lStack_38 + 0x20) != 0) {
      if (*(int *)(*(long *)(lStack_38 + 0x20) + 0x14) != 2) {
LAB_0408f241:
        UI_CharacterHumanPanel__SyncStatBars(__this,pMVar21);
        return;
      }
      pUVar11 = (__this->fields).DoublePanelRight;
      pSVar16 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pMVar21 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar21,0x18,100.0,20.0,pSVar16,(MethodInfo *)0x0)
      ;
      pSVar12 = *(Settings_BaseSetting_o **)(lStack_78 + 0x50);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar16 = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
      pSVar19 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pSVar19 != (System_String_array *)0x0) {
        if ((int)pSVar19->max_length != 0) {
          pSVar19->m_Items[0] = (System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
          il2cpp_runtime_glue(pSVar19->m_Items);
          if (1 < (uint)pSVar19->max_length) {
            pSVar19->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
            il2cpp_runtime_glue(pSVar19->m_Items + 1);
            SStack_80.hasValue = 0;
            SStack_80.value = 0.0;
            System_Nullable<float>___ctor((System_Nullable_float__o)&SStack_80,180.0,MethodInfo_Nullable_1_Single);
            UI_ElementFactory__CreateDropdownSetting
                      (pUVar11,(UI_ElementStyle_o *)pMVar21,pSVar12,pSVar16,pSVar19,"",
                       180.0,40.0,300.0,(System_Nullable_float__o)SStack_80,
                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
            goto LAB_0408f241;
          }
        }
LAB_0408f323:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_0408f312:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterHumanPanel$$OnLoadoutClick
// il2cpp: void UI_CharacterHumanPanel__OnLoadoutClick (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x40904c0

void UI_CharacterHumanPanel__OnLoadoutClick(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  UI_BasePanel_o *__this_00;
  
  if (DAT_05704588 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704588 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
      (lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar2 != 0)) &&
     ((*(long *)(lVar2 + 0x38) != 0 &&
      (*(Settings_TypedSetting_T__o **)(lVar1 + 0x38) != (Settings_TypedSetting_T__o *)0x0)))) {
    Settings_TypedSetting<object>__set_Value
              (*(Settings_TypedSetting_T__o **)(lVar1 + 0x38),
               *(Il2CppObject **)(*(long *)(lVar2 + 0x38) + 0x18),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar2 + 0x48) != 0) &&
       (*(Settings_TypedSetting_int__o **)(lVar1 + 0x48) != (Settings_TypedSetting_int__o *)0x0)) {
      Settings_TypedSetting<int>__set_Value
                (*(Settings_TypedSetting_int__o **)(lVar1 + 0x48),
                 *(int32_t *)(*(long *)(lVar2 + 0x48) + 0x14),MethodInfo_Void_set_Value);
      if ((*(long *)(lVar2 + 0x40) != 0) &&
         (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40) != (Settings_TypedSetting_int__o *)0x0))
      {
        Settings_TypedSetting<int>__set_Value
                  (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40),
                   *(int32_t *)(*(long *)(lVar2 + 0x40) + 0x14),MethodInfo_Void_set_Value);
        if ((*(long *)(lVar2 + 0x30) != 0) &&
           (*(Settings_TypedSetting_T__o **)(lVar1 + 0x30) != (Settings_TypedSetting_T__o *)0x0)) {
          Settings_TypedSetting<object>__set_Value
                    (*(Settings_TypedSetting_T__o **)(lVar1 + 0x30),
                     *(Il2CppObject **)(*(long *)(lVar2 + 0x30) + 0x18),MethodInfo_Void_set_Value);
          __this_00 = (__this->fields).Parent;
          if (__this_00 != (UI_BasePanel_o *)0x0) {
            UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterHumanPanel$$SyncStatBars
// il2cpp: void UI_CharacterHumanPanel__SyncStatBars (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x408ff50

void UI_CharacterHumanPanel__SyncStatBars(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int index;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  long lVar5;
  long lVar6;
  Settings_ListSetting_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_String_o *subCategory;
  bool_conflict bVar8;
  int32_t iVar9;
  Settings_BaseSetting_o *pSVar10;
  Characters_HumanStats_o *pCVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  MethodInfo *pMVar14;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  Il2CppType *pIVar16;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar17;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (DAT_05704589 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetCount);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"Speed");
    il2cpp_init_method_metadata(&"Ammunition");
    il2cpp_init_method_metadata(&"Gas");
    il2cpp_init_method_metadata(&"");
    DAT_05704589 = '\x01';
  }
  pSVar4 = (__this->fields)._statBars;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_04090430;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar16 = (Il2CppType *)local_48._8_8_;
  obj = local_38;
  while (__this_00.fields._8_8_ = pIVar16,
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar15,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
        (char)bVar8 != '\0') {
    pUVar17 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    obj = pUVar17;
  }
  __this_01.fields._8_8_ = pIVar16;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  pSVar4 = (__this->fields)._statBars;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_04090430;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar9 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar9) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar9,(MethodInfo *)0x0);
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((((lVar5 == 0) || (lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x40) == 0)) ||
      ((*(long *)(lVar6 + 0x48) == 0 || (*(long *)(lVar5 + 0x28) == 0)))) ||
     (pSVar7 = *(Settings_ListSetting_T__o **)(*(long *)(lVar5 + 0x28) + 0x28),
     pSVar7 == (Settings_ListSetting_T__o *)0x0)) goto LAB_04090430;
  lVar5 = *(long *)(lVar5 + 0x20);
  index = *(int *)(*(long *)(lVar6 + 0x40) + 0x14);
  iVar3 = *(int *)(*(long *)(lVar6 + 0x48) + 0x14);
  iVar9 = Settings_ListSetting<object>__GetCount(pSVar7,MethodInfo_Int32_GetCount);
  if (index < iVar9) {
    if (iVar3 == 2) {
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar5 == 0) goto LAB_04090430;
      lVar5 = *(long *)(lVar5 + 0x38);
    }
    else if (iVar3 == 1) {
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar5 == 0) goto LAB_04090430;
      lVar5 = *(long *)(lVar5 + 0x30);
    }
    else {
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar5 == 0) goto LAB_04090430;
      lVar5 = *(long *)(lVar5 + 0x28);
    }
    if ((lVar5 == 0) ||
       (*(Settings_ListSetting_T__o **)(lVar5 + 0x28) == (Settings_ListSetting_T__o *)0x0))
    goto LAB_04090430;
    pSVar10 = Settings_ListSetting<object>__GetItemAt
                        (*(Settings_ListSetting_T__o **)(lVar5 + 0x28),index,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar10 == (Settings_BaseSetting_o *)0x0) goto LAB_040902d0;
LAB_0409022a:
    bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((pSVar10->klass->_2).naturalAligment < bVar2) ||
       ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar10);
    }
  }
  else {
    if ((lVar5 == 0) ||
       (pSVar7 = *(Settings_ListSetting_T__o **)(lVar5 + 0x28),
       pSVar7 == (Settings_ListSetting_T__o *)0x0)) goto LAB_04090430;
    pSVar10 = Settings_ListSetting<object>__GetItemAt(pSVar7,index - iVar9,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar10 != (Settings_BaseSetting_o *)0x0) goto LAB_0409022a;
LAB_040902d0:
    pSVar10 = (Settings_BaseSetting_o *)0x0;
  }
  pCVar11 = (Characters_HumanStats_o *)il2cpp_runtime_glue(TypeInfo_HumanStats);
  Characters_HumanStats___ctor(pCVar11,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
  if ((pSVar10 != (Settings_BaseSetting_o *)0x0) &&
     (pSVar10[0xf].klass != (Settings_BaseSetting_c *)0x0)) {
    pSVar13 = (System_String_o *)((pSVar10[0xf].klass)->_1).namespaze;
    if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar11 = Characters_HumanStats__Deserialize(pCVar11,pSVar13,(MethodInfo *)0x0);
    subCategory = "Stats";
    pSVar13 = "CharacterEditor";
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar14 = "";
    pSVar12 = UI_UIManager__GetLocale
                        (pSVar13,subCategory,"Acceleration",(System_String_o *)"",
                         (System_String_o *)"",(MethodInfo *)0x0);
    if (pCVar11 != (Characters_HumanStats_o *)0x0) {
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar12,(pCVar11->fields).Acceleration,pMVar14);
      pMVar14 = "";
      pSVar12 = UI_UIManager__GetLocale
                          (pSVar13,subCategory,"Speed",(System_String_o *)"",
                           (System_String_o *)"",(MethodInfo *)0x0);
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar12,(pCVar11->fields).Speed,pMVar14);
      pMVar14 = "";
      pSVar12 = UI_UIManager__GetLocale
                          (pSVar13,subCategory,"Gas",(System_String_o *)"",
                           (System_String_o *)"",(MethodInfo *)0x0);
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar12,(pCVar11->fields).Gas,pMVar14);
      pMVar14 = "";
      pSVar13 = UI_UIManager__GetLocale
                          (pSVar13,subCategory,"Ammunition",(System_String_o *)"",
                           (System_String_o *)"",(MethodInfo *)0x0);
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar13,(pCVar11->fields).Ammunition,pMVar14);
      return;
    }
  }
LAB_04090430:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterHumanPanel$$CreateStatBar
// il2cpp: void UI_CharacterHumanPanel__CreateStatBar (UI_CharacterHumanPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x4090600

void UI_CharacterHumanPanel__CreateStatBar
               (UI_CharacterHumanPanel_o *__this,System_String_o *title,int32_t value,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  float fVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  undefined1 local_34 [4];
  
  if (DAT_0570458a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"ProgressBar/Background");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"QuestPopup");
    il2cpp_init_method_metadata(&"ProgressBarFillColor");
    il2cpp_init_method_metadata(&"ProgressBar");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"QuestItem");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"ProgressBar/Fill Area/Fill");
    il2cpp_init_method_metadata(&"ProgressBarBackgroundColor");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"Prefabs/Misc/StatBar");
    DAT_0570458a = '\x01';
  }
  pUVar6 = UI_ElementFactory__InstantiateAndBind
                     ((__this->fields).DoublePanelRight,"Prefabs/Misc/StatBar",(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(__this_01,"Label",(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pIVar8 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x4b].methodPtr)(pIVar8,title,pIVar8->klass->vtable[0x4b].method);
          pUVar7 = UnityEngine_Transform__Find(__this_01,"Label",(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pIVar8 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UVar11 = UI_UIManager__GetThemeColor
                               ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",
                                (MethodInfo *)0x0);
            if (pIVar8 != (Il2CppObject *)0x0) {
              (*pIVar8->klass->vtable[0x17].methodPtr)
                        (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar8,
                         pIVar8->klass->vtable[0x17].method);
              pUVar7 = UnityEngine_Transform__Find(__this_01,"ProgressBar",(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pIVar8 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar7,MethodInfo_Slider_GetComponent_Slider);
                if (pIVar8 != (Il2CppObject *)0x0) {
                  fVar10 = ((float)value + -50.0) / 50.0;
                  fVar4 = 1.0;
                  if (fVar10 <= 1.0) {
                    fVar4 = fVar10;
                  }
                  (*pIVar8->klass->vtable[0x2f].methodPtr)
                            ((ulong)(-(uint)(0.0 <= fVar10) & (uint)fVar4),pIVar8,
                             pIVar8->klass->vtable[0x2f].method);
                  pUVar7 = UnityEngine_Transform__Find(__this_01,"ProgressBar/Background",(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    pIVar8 = UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
                    UVar11 = UI_UIManager__GetThemeColor
                                       ("QuestPopup","QuestItem","ProgressBarBackgroundColor","DefaultPanel",
                                        (MethodInfo *)0x0);
                    if (pIVar8 != (Il2CppObject *)0x0) {
                      (*pIVar8->klass->vtable[0x17].methodPtr)
                                (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar8,
                                 pIVar8->klass->vtable[0x17].method);
                      pUVar7 = UnityEngine_Transform__Find(__this_01,"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0)
                      ;
                      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                        pIVar8 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
                        UVar11 = UI_UIManager__GetThemeColor
                                           ("QuestPopup","QuestItem","ProgressBarFillColor","DefaultPanel",
                                            (MethodInfo *)0x0);
                        if (pIVar8 != (Il2CppObject *)0x0) {
                          (*pIVar8->klass->vtable[0x17].methodPtr)
                                    (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar8,
                                     pIVar8->klass->vtable[0x17].method);
                          pUVar7 = UnityEngine_Transform__Find
                                             (__this_01,"Value",(MethodInfo *)0x0);
                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                            pIVar8 = UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
                            pSVar9 = System_Int32__ToString((int32_t)local_34,(MethodInfo *)0x0);
                            if (pIVar8 != (Il2CppObject *)0x0) {
                              (*pIVar8->klass->vtable[0x4b].methodPtr)
                                        (pIVar8,pSVar9,pIVar8->klass->vtable[0x4b].method);
                              pUVar7 = UnityEngine_Transform__Find
                                                 (__this_01,"Value",(MethodInfo *)0x0);
                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                pIVar8 = UnityEngine_Component__GetComponent<object>
                                                   ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
                                pSVar9 = (System_String_o *)
                                         (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this,(__this->klass->vtable)._4_get_ThemePanel
                                                           .method);
                                UVar11 = UI_UIManager__GetThemeColor
                                                   (pSVar9,"DefaultLabel","TextColor","DefaultPanel",
                                                    (MethodInfo *)0x0);
                                if (pIVar8 != (Il2CppObject *)0x0) {
                                  (*pIVar8->klass->vtable[0x17].methodPtr)
                                            (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar8);
                                  __this_00 = (__this->fields)._statBars;
                                  pUVar6 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)__this_01,
                                                      (MethodInfo *)0x0);
                                  lVar5 = MethodInfo_Void_Add;
                                  if (__this_00 !=
                                      (System_Collections_Generic_List_GameObject__o *)0x0) {
                                    piVar1 = &(__this_00->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar3 = (__this_00->fields)._items;
                                    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
                                      uVar2 = (__this_00->fields)._size;
                                      if (uVar2 < (uint)pUVar3->max_length) {
                                        (__this_00->fields)._size = uVar2 + 1;
                                        pUVar3->m_Items[(int)uVar2] = pUVar6;
                                        il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,pUVar6);
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)
                                                   __this_00,(Il2CppObject *)pUVar6,
                                                   *(MethodInfo_35A7350 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterHumanPanel$$GetCharOptions
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetCharOptions (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x408f330

System_String_array *
UI_CharacterHumanPanel__GetCharOptions(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_SetSettingsContainer_T__o *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_0570458b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570458b = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar1 != 0) &&
     (pSVar2 = *(Settings_SetSettingsContainer_T__o **)(lVar1 + 0x28),
     pSVar2 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar3 = Settings_SetSettingsContainer<object>__GetSetNames(pSVar2,MethodInfo_String___GetSetNames);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar3,MethodInfo_List_1_System_String);
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar1 != 0) &&
       (pSVar2 = *(Settings_SetSettingsContainer_T__o **)(lVar1 + 0x20),
       pSVar2 != (Settings_SetSettingsContainer_T__o *)0x0)) {
      pSVar3 = Settings_SetSettingsContainer<object>__GetSetNames(pSVar2,MethodInfo_String___GetSetNames);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__AddRange
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar3,MethodInfo_Void_AddRange);
        pSVar3 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterHumanPanel$$GetCharIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetCharIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x408f460

System_String_array *
UI_CharacterHumanPanel__GetCharIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  long *plVar4;
  System_Object_array *pSVar5;
  Il2CppObject **ppIVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  Il2CppObject *pIVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_object__o *__this_04;
  System_String_array *pSVar9;
  System_Collections_Generic_List_object__o *__this_05;
  undefined8 *puVar10;
  System_Collections_Generic_List_object__o *__this_06;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar11;
  MethodInfo_35A7350 *method_00;
  long lVar12;
  ulong uVar13;
  System_String_o *in_stack_ffffffffffffff78;
  System_String_o *pSVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_0570458c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"CharacterPreview_Human_");
    il2cpp_init_method_metadata(&"/Human/Previews/PresetNone");
    il2cpp_init_method_metadata(&"/Human/Previews/Preset");
    il2cpp_init_method_metadata(&".png");
    il2cpp_init_method_metadata(&"Preset");
    DAT_0570458c = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar3 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x28),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar9 = Settings_SetSettingsContainer<object>__GetSetNames(__this_00,MethodInfo_String___GetSetNames);
    __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              (__this_05,(System_Collections_Generic_IEnumerable_T__o *)pSVar9,MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar3 != 0) &&
       ((lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0 &&
        (plVar4 = *(long **)(lVar3 + 0x28), plVar4 != (long *)0x0)))) {
      lVar3 = *plVar4;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IListSetting) {
            puVar10 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) + 2) * 0x10 + lVar3 +
                      0x138);
            goto LAB_0408f6f9;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar4,TypeInfo_IListSetting,2);
LAB_0408f6f9:
      __this_06 = (System_Collections_Generic_List_object__o *)
                  (*(code *)*puVar10)(plVar4,puVar10[1]);
      if (options != (System_String_array *)0x0) {
        if (0 < (int)options->max_length) {
          uVar13 = 0;
          if ((options->max_length & 0xffffffff) != 0) {
            do {
              if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0408fc15;
              pSVar11 = options->m_Items[uVar13];
              bVar8 = System_Collections_Generic_List<object>__Contains
                                (__this_05,(Il2CppObject *)pSVar11,MethodInfo_Boolean_Contains);
              if ((char)bVar8 == '\0') {
                if (__this_06 == (System_Collections_Generic_List_object__o *)0x0)
                goto LAB_0408fc15;
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_48,__this_06,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
                pIVar7 = local_48.fields._current;
                pSVar15 = local_48.fields._list;
                do {
                  __this_01.fields._8_8_ = options;
                  __this_01.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
                  __this_01.fields._current = (Il2CppObject *)pSVar15;
                  bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
                  if ((char)bVar8 == '\0') {
                    __this_03.fields._8_8_ = options;
                    __this_03.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
                    __this_03.fields._current = (Il2CppObject *)pSVar15;
                    System_Collections_Generic_List_Enumerator<object>__Dispose
                              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
                    goto LAB_0408faa9;
                  }
                  if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if ((*(byte *)(*(long *)pIVar7 + 0x130) < *(byte *)(TypeInfo_HumanCustomSet + 0x130)) ||
                     (*(long *)(*(long *)(*(long *)pIVar7 + 200) + -8 +
                               (ulong)*(byte *)(TypeInfo_HumanCustomSet + 0x130) * 8) != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_unwind_resume(pIVar7);
                  }
                  if (*(long *)((long)pIVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar8 = System_String__op_Equality
                                    (*(System_String_o **)(*(long *)((long)pIVar7 + 0x20) + 0x18),
                                     pSVar11,(MethodInfo *)0x0);
                } while ((char)bVar8 == '\0');
                if (*(long *)((long)pIVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar11 = *(System_String_o **)(*(long *)((long)pIVar7 + 0x30) + 0x18);
                __this_02.fields._8_8_ = options;
                __this_02.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
                __this_02.fields._current = (Il2CppObject *)pSVar15;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
                if (pSVar11 == (System_String_o *)0x0) {
LAB_0408faa9:
                  pSVar14 = in_stack_ffffffffffffff78;
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_init_class();
                    pSVar14 = in_stack_ffffffffffffff78;
                  }
                  in_stack_ffffffffffffff78 =
                       System_String__Concat
                                 (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),
                                  "/Human/Previews/PresetNone",(MethodInfo *)0x0);
                  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0)
                  goto LAB_0408fae4;
                  goto LAB_0408fc15;
                }
                in_stack_ffffffffffffff78 =
                     System_String__Concat("CharacterPreview_Human_",pSVar11,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                x = ApplicationManagers_ResourceManager__GetExternalTexture
                              (in_stack_ffffffffffffff78,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
                  pSVar11 = System_String__Concat
                                      ("Preset",pSVar11,".png",(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar11 = System_IO_Path__Combine(pSVar14,"Human",pSVar11,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  x = ApplicationManagers_ResourceManager__LoadExternalTexture
                                (pSVar11,in_stack_ffffffffffffff78,1,(MethodInfo *)0x0);
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                lVar3 = MethodInfo_Void_Add;
                if ((char)bVar8 == '\0') goto LAB_0408faa9;
                if (__this_04 == (System_Collections_Generic_List_object__o *)0x0)
                goto LAB_0408fc15;
                piVar1 = &(__this_04->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_04->fields)._items;
                if (pSVar5 == (System_Object_array *)0x0) goto LAB_0408fc15;
                uVar2 = (__this_04->fields)._size;
                pSVar14 = in_stack_ffffffffffffff78;
                if ((uint)pSVar5->max_length <= uVar2) {
                  method_00 = *(MethodInfo_35A7350 **)
                               (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                  goto LAB_0408fb25;
                }
                (__this_04->fields)._size = uVar2 + 1;
                ppIVar6 = pSVar5->m_Items + (long)(int)uVar2 + -4;
                pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)in_stack_ffffffffffffff78;
LAB_0408f768:
                il2cpp_runtime_glue(ppIVar6 + 4,in_stack_ffffffffffffff78);
              }
              else {
                pSVar14 = in_stack_ffffffffffffff78;
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_init_class();
                  pSVar14 = in_stack_ffffffffffffff78;
                }
                in_stack_ffffffffffffff78 =
                     System_String__Concat
                               (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),
                                "/Human/Previews/Preset",pSVar11,(MethodInfo *)0x0);
                if (__this_04 == (System_Collections_Generic_List_object__o *)0x0)
                goto LAB_0408fc15;
LAB_0408fae4:
                lVar3 = MethodInfo_Void_Add;
                piVar1 = &(__this_04->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_04->fields)._items;
                if (pSVar5 == (System_Object_array *)0x0) goto LAB_0408fc15;
                uVar2 = (__this_04->fields)._size;
                if (uVar2 < (uint)pSVar5->max_length) {
                  (__this_04->fields)._size = uVar2 + 1;
                  ppIVar6 = pSVar5->m_Items + (long)(int)uVar2 + -4;
                  pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)in_stack_ffffffffffffff78;
                  goto LAB_0408f768;
                }
                method_00 = *(MethodInfo_35A7350 **)
                             (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
LAB_0408fb25:
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_04,(Il2CppObject *)in_stack_ffffffffffffff78,method_00);
              }
              uVar13 = uVar13 + 1;
              uVar2 = (uint)options->max_length;
              if ((long)(int)uVar2 <= (long)uVar13) goto LAB_0408fbef;
              in_stack_ffffffffffffff78 = pSVar14;
            } while (uVar13 < uVar2);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0408fbef:
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar9 = (System_String_array *)
                   System_Collections_Generic_List<object>__ToArray(__this_04,MethodInfo_String___ToArray);
          return pSVar9;
        }
      }
    }
  }
LAB_0408fc15:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterHumanPanel$$GetSpecialIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x408fc60

System_String_array *
UI_CharacterHumanPanel__GetSpecialIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  int iVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  ulong uVar9;
  
  if (DAT_0570458d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"/Icons/Specials/");
    DAT_0570458d = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    iVar6 = (int)options->max_length;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar6 < 1) {
LAB_0408fe11:
        pSVar8 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
        return pSVar8;
      }
      uVar9 = 0;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          pSVar7 = options->m_Items[uVar9];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = Characters_HumanSpecials__GetSpecialIcon(pSVar7,(MethodInfo *)0x0);
          pSVar7 = System_String__Concat(pSVar3,"/Icons/Specials/",pSVar7,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_0408fe9c;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)pSVar7,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)options->max_length;
          if ((long)(int)uVar2 <= (long)uVar9) goto LAB_0408fe11;
        } while (uVar9 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < iVar6) {
      pSVar7 = options->m_Items[0];
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = Characters_HumanSpecials__GetSpecialIcon(pSVar7,(MethodInfo *)0x0);
      System_String__Concat(pSVar3,"/Icons/Specials/",pSVar7,(MethodInfo *)0x0);
    }
  }
LAB_0408fe9c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterHumanPanel$$GetSpecialTooltips
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialTooltips (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x408feb0

System_String_array *
UI_CharacterHumanPanel__GetSpecialTooltips
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *pSVar1;
  
  if (DAT_0570458e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String__GetSpecialTooltips_b__9_0);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    DAT_0570458e = '\x01';
  }
  selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
  System_Func<object__object>___ctor();
  source = System_Linq_Enumerable__Select<object__object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)options,selector,
                      MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String___ToArray_String);
  return pSVar1;
}


// UI.CharacterHumanPanel$$.ctor
// il2cpp: void UI_CharacterHumanPanel___ctor (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x4090ad0

void UI_CharacterHumanPanel___ctor(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_0570458f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&"CharacterPopup");
    DAT_0570458f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._statBars = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._statBars,__this_00);
  (__this->fields).LocaleCategory = "CharacterPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel$$<Setup>b__2_0
// il2cpp: void UI_CharacterHumanPanel___Setup_b__2_0 (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x4090b70

void UI_CharacterHumanPanel__<Setup>b__2_0(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  UI_CharacterHumanPanel__SyncStatBars(__this,method);
  return;
}


// UI.CharacterHumanPanel$$<Setup>b__2_1
// il2cpp: void UI_CharacterHumanPanel___Setup_b__2_1 (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x4090b80

void UI_CharacterHumanPanel__<Setup>b__2_1(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  UI_CharacterHumanPanel__OnLoadoutClick(__this,method);
  return;
}


// UI.CharacterHumanPanel$$<GetSpecialTooltips>b__9_0
// il2cpp: System_String_o* UI_CharacterHumanPanel___GetSpecialTooltips_b__9_0 (UI_CharacterHumanPanel_o* __this, System_String_o* option, const MethodInfo* method);
// 0x4090b90

System_String_o *
UI_CharacterHumanPanel__<GetSpecialTooltips>b__9_0
          (UI_CharacterHumanPanel_o *__this,System_String_o *option,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704590 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SpecialTooltip");
    il2cpp_init_method_metadata(&"");
    DAT_05704590 = '\x01';
  }
  pSVar1 = (__this->fields).LocaleCategory;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     (pSVar1,"SpecialTooltip",option,"","",(MethodInfo *)0x0);
  return pSVar1;
}


