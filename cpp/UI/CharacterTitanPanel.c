// Type: UI.CharacterTitanPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterTitanPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CharacterTitanPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterTitanPanel.<>c$$.cctor
// il2cpp: void UI_CharacterTitanPanel___c___cctor (const MethodInfo* method);
// 0x4098660

void UI_CharacterTitanPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057045ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057045ba = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CharacterTitanPanel.<>c$$.ctor
// il2cpp: void UI_CharacterTitanPanel___c___ctor (UI_CharacterTitanPanel___c_o* __this, const MethodInfo* method);
// 0x40986d0

void UI_CharacterTitanPanel_<>c___ctor(UI_CharacterTitanPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterTitanPanel.<>c$$<Setup>b__1_0
// il2cpp: void UI_CharacterTitanPanel___c___Setup_b__1_0 (UI_CharacterTitanPanel___c_o* __this, const MethodInfo* method);
// 0x40986e0

void UI_CharacterTitanPanel_<>c__<Setup>b__1_0
               (UI_CharacterTitanPanel___c_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterTitanPanel$$Setup
// il2cpp: void UI_CharacterTitanPanel__Setup (UI_CharacterTitanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4097300

void UI_CharacterTitanPanel__Setup
               (UI_CharacterTitanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Settings_TypedSetting_T__o *__this_00;
  System_Object_array *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  Settings_BaseSetting_o *pSVar8;
  Il2CppObject *pIVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  UI_ElementStyle_o *pUVar12;
  UI_CharacterTitanPanel_o *__this_01;
  MethodInfo *method_00;
  System_String_array *pSVar13;
  System_String_array *icons;
  UnityEngine_Events_UnityAction_o *pUVar14;
  UI_IconPickPopup_o *popup;
  MethodInfo *method_01;
  UI_CharacterTitanPanel_o *pUVar15;
  Settings_TypedSetting_int__o *__this_02;
  System_Nullable_float__Fields SStack_80;
  long lStack_78;
  System_String_o *pSStack_70;
  UI_CharacterTitanPanel_o *pUStack_68;
  System_String_array *pSStack_60;
  UI_IconPickPopup_o *pUStack_58;
  System_String_o *pSStack_50;
  UnityEngine_Transform_o *pUStack_48;
  System_String_array *pSStack_40;
  long lStack_38;
  
  if (DAT_057045b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
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
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"Large");
    il2cpp_init_method_metadata(&"Character");
    il2cpp_init_method_metadata(&"Size");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Small");
    il2cpp_init_method_metadata(&"Medium");
    DAT_057045b5 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  lVar3 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  if (((*(long *)(lVar3 + 0x50) != 0) && (*(long *)(lVar3 + 0x40) != 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x70), lVar4 != 0)) {
    pSStack_70 = "General";
    lVar5 = *(long *)(*(long *)(lVar3 + 0x50) + 0x58);
    lVar3 = *(long *)(*(long *)(lVar3 + 0x40) + 0x28);
    __this_00 = *(Settings_TypedSetting_T__o **)(lVar4 + 0x28);
    lStack_78 = lVar4;
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (Settings_TypedSetting_T__o *)0x0) {
      lStack_38 = lVar5;
      Settings_TypedSetting<object>__set_Value
                (__this_00,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),MethodInfo_Void_set_Value);
      pSVar11 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pUVar12 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(pUVar12,0x18,200.0,20.0,pSVar11,(MethodInfo *)0x0);
      __this_01 = (UI_CharacterTitanPanel_o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
      lVar5 = lStack_78;
      pIVar9 = "Small";
      lVar4 = MethodInfo_Void_Add;
      if (__this_01 != (UI_CharacterTitanPanel_o *)0x0) {
        piVar1 = (int32_t *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar6 = (System_Object_array *)(__this_01->fields).m_CachedPtr;
        if (pSVar6 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
          if (uVar2 < (uint)pSVar6->max_length) {
            *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = pIVar9;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,pIVar9,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          pIVar9 = "Medium";
          lVar4 = MethodInfo_Void_Add;
          piVar1 = (int32_t *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar6 = (System_Object_array *)(__this_01->fields).m_CachedPtr;
          if (pSVar6 != (System_Object_array *)0x0) {
            uVar2 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
            if (uVar2 < (uint)pSVar6->max_length) {
              *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = pIVar9;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,pIVar9,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar9 = "Large";
            lVar4 = MethodInfo_Void_Add;
            piVar1 = (int32_t *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
            *piVar1 = *piVar1 + 1;
            pSVar6 = (System_Object_array *)(__this_01->fields).m_CachedPtr;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar2 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
              if (uVar2 < (uint)pSVar6->max_length) {
                *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar2 + 1;
                pSVar6->m_Items[(int)uVar2] = pIVar9;
                il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,pIVar9,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              if ((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) {
                bVar10 = System_String__op_Equality
                                   (*(System_String_o **)(*(long *)(lVar3 + 0x28) + 0x18),
                                    *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  if ((*(long *)(lVar3 + 0x40) == 0) ||
                     (*(Settings_TypedSetting_int__o **)(lVar5 + 0x40) ==
                      (Settings_TypedSetting_int__o *)0x0)) goto LAB_04097c78;
                  Settings_TypedSetting<int>__set_Value
                            (*(Settings_TypedSetting_int__o **)(lVar5 + 0x40),
                             *(int32_t *)(*(long *)(lVar3 + 0x40) + 0x14),MethodInfo_Void_set_Value);
                  if ((*(long *)(lVar3 + 0x30) == 0) ||
                     (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30) ==
                      (Settings_TypedSetting_T__o *)0x0)) goto LAB_04097c78;
                  Settings_TypedSetting<object>__set_Value
                            (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30),
                             *(Il2CppObject **)(*(long *)(lVar3 + 0x30) + 0x18),MethodInfo_Void_set_Value);
                }
                if (*(long *)(lVar5 + 0x30) != 0) {
                  method_00 = *(MethodInfo **)(*(long *)(lVar5 + 0x30) + 0x18);
                  pUVar15 = __this_01;
                  bVar10 = System_Collections_Generic_List<object>__Contains
                                     ((System_Collections_Generic_List_object__o *)__this_01,
                                      (Il2CppObject *)method_00,MethodInfo_Boolean_Contains);
                  if ((char)bVar10 == '\0') {
                    pUVar15 = *(UI_CharacterTitanPanel_o **)(lVar5 + 0x30);
                    method_00 = (MethodInfo *)
                                System_Collections_Generic_List<object>__get_Item
                                          ((System_Collections_Generic_List_object__o *)__this_01,
                                           *(int *)&(__this_01->fields).m_CancellationTokenSource +
                                           -1,MethodInfo_String_get_Item);
                    if (pUVar15 == (UI_CharacterTitanPanel_o *)0x0) goto LAB_04097c78;
                    Settings_TypedSetting<object>__set_Value
                              ((Settings_TypedSetting_T__o *)pUVar15,(Il2CppObject *)method_00,
                               MethodInfo_Void_set_Value);
                  }
                  pUStack_68 = __this;
                  pSVar13 = UI_CharacterTitanPanel__GetCharOptions(pUVar15,method_00);
                  __this_02 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x40);
                  if ((__this_02 != (Settings_TypedSetting_int__o *)0x0) &&
                     (pSVar13 != (System_String_array *)0x0)) {
                    if ((int)pSVar13->max_length <= (__this_02->fields)._value) {
                      Settings_TypedSetting<int>__set_Value(__this_02,0,MethodInfo_Void_set_Value);
                      __this_02 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x40);
                    }
                    pUStack_48 = (pUStack_68->fields).DoublePanelLeft;
                    pUVar15 = (UI_CharacterTitanPanel_o *)(pUStack_68->fields).LocaleCategory;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSStack_50 = UI_UIManager__GetLocale
                                           ((System_String_o *)pUVar15,pSStack_70,"Character",
                                            "","",(MethodInfo *)0x0);
                    icons = UI_CharacterTitanPanel__GetCharIcons(pUVar15,pSVar13,method_01);
                    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (lVar3 != 0) {
                      popup = *(UI_IconPickPopup_o **)(lVar3 + 0x50);
                      pSStack_40 = pSVar13;
                      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar11 = "";
                      pUVar14 = *(UnityEngine_Events_UnityAction_o **)
                                 (*(long *)(TypeInfo_c + 0xb8) + 8);
                      if (pUVar14 == (UnityEngine_Events_UnityAction_o *)0x0) {
                        pSStack_60 = icons;
                        pUStack_58 = popup;
                        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                  il2cpp_runtime_glue(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        lVar3 = *(long *)(TypeInfo_c + 0xb8);
                        *(UnityEngine_Events_UnityAction_o **)(lVar3 + 8) = pUVar14;
                        il2cpp_runtime_glue(lVar3 + 8,pUVar14);
                        popup = pUStack_58;
                        icons = pSStack_60;
                      }
                      UI_ElementFactory__CreateIconPickSetting
                                (pUStack_48,pUVar12,(Settings_BaseSetting_o *)__this_02,pSStack_50,
                                 pSStack_40,icons,popup,pSVar11,(System_String_array *)0x0,180.0,
                                 40.0,pUVar14,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                      pUVar15 = pUStack_68;
                      pUVar7 = (pUStack_68->fields).DoublePanelLeft;
                      pSVar11 = (pUStack_68->fields).LocaleCategory;
                      pSVar8 = *(Settings_BaseSetting_o **)(lStack_78 + 0x30);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar11 = UI_UIManager__GetLocale
                                          (pSVar11,pSStack_70,"Size","",""
                                           ,(MethodInfo *)0x0);
                      pSVar13 = (System_String_array *)
                                System_Collections_Generic_List<object>__ToArray
                                          ((System_Collections_Generic_List_object__o *)__this_01,
                                           MethodInfo_String___ToArray);
                      SStack_80.hasValue = 0;
                      SStack_80.value = 0.0;
                      System_Nullable<float>___ctor
                                ((System_Nullable_float__o)&SStack_80,180.0,MethodInfo_Nullable_1_Single);
                      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction)
                      ;
                      UnityEngine_Events_UnityAction___ctor();
                      UI_ElementFactory__CreateDropdownSetting
                                (pUVar7,pUVar12,pSVar8,pSVar11,pSVar13,"",180.0,40.0,300.0
                                 ,(System_Nullable_float__o)SStack_80,pUVar14,(MethodInfo *)0x0);
                      if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x20) != 0)) {
                        if (*(int *)(*(long *)(lStack_38 + 0x20) + 0x14) != 2) {
                          return;
                        }
                        pUVar7 = (pUVar15->fields).DoublePanelRight;
                        pSVar11 = (System_String_o *)
                                  (*(pUVar15->klass->vtable)._4_get_ThemePanel.methodPtr)
                                            (pUVar15,(pUVar15->klass->vtable)._4_get_ThemePanel.
                                                     method);
                        pUVar12 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                        UI_ElementStyle___ctor(pUVar12,0x18,100.0,20.0,pSVar11,(MethodInfo *)0x0);
                        pSVar8 = *(Settings_BaseSetting_o **)(lStack_78 + 0x50);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pSVar11 = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
                        pSVar13 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        if (pSVar13 != (System_String_array *)0x0) {
                          if ((int)pSVar13->max_length != 0) {
                            pSVar13->m_Items[0] =
                                 (System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
                            il2cpp_runtime_glue(pSVar13->m_Items);
                            if (1 < (uint)pSVar13->max_length) {
                              pSVar13->m_Items[1] =
                                   *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
                              il2cpp_runtime_glue(pSVar13->m_Items + 1);
                              SStack_80.hasValue = 0;
                              SStack_80.value = 0.0;
                              System_Nullable<float>___ctor
                                        ((System_Nullable_float__o)&SStack_80,180.0,MethodInfo_Nullable_1_Single);
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar7,pUVar12,pSVar8,pSVar11,pSVar13,"",180.0,
                                         40.0,300.0,(System_Nullable_float__o)SStack_80,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              return;
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
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
LAB_04097c78:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterTitanPanel$$OnLoadoutClick
// il2cpp: void UI_CharacterTitanPanel__OnLoadoutClick (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x4098520

void UI_CharacterTitanPanel__OnLoadoutClick(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_057045b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057045b6 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
      (lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar2 != 0)) &&
     ((*(long *)(lVar2 + 0x40) != 0 &&
      (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40) != (Settings_TypedSetting_int__o *)0x0)))) {
    Settings_TypedSetting<int>__set_Value
              (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40),
               *(int32_t *)(*(long *)(lVar2 + 0x40) + 0x14),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar2 + 0x30) != 0) &&
       (*(Settings_TypedSetting_T__o **)(lVar1 + 0x30) != (Settings_TypedSetting_T__o *)0x0)) {
      Settings_TypedSetting<object>__set_Value
                (*(Settings_TypedSetting_T__o **)(lVar1 + 0x30),
                 *(Il2CppObject **)(*(long *)(lVar2 + 0x30) + 0x18),MethodInfo_Void_set_Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterTitanPanel$$GetCharOptions
// il2cpp: System_String_array* UI_CharacterTitanPanel__GetCharOptions (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x4097c90

System_String_array *
UI_CharacterTitanPanel__GetCharOptions(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_String_array *pSVar2;
  System_Collections_Generic_List_object__o *__this_01;
  
  if (DAT_057045b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Random");
    DAT_057045b7 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar1 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar1 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar2 = Settings_SetSettingsContainer<object>__GetSetNames(__this_00,MethodInfo_String___GetSetNames);
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)pSVar2,MethodInfo_List_1_System_String);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Insert(__this_01,0,"Random",MethodInfo_Void_Insert);
      pSVar2 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this_01,MethodInfo_String___ToArray);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterTitanPanel$$GetCharIcons
// il2cpp: System_String_array* UI_CharacterTitanPanel__GetCharIcons (UI_CharacterTitanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x4097da0

System_String_array *
UI_CharacterTitanPanel__GetCharIcons
          (UI_CharacterTitanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppObject **ppIVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  System_String_o *path1;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  Il2CppObject *pIVar9;
  bool_conflict bVar10;
  System_Collections_Generic_List_object__o *__this_03;
  undefined8 *puVar11;
  System_Collections_Generic_List_object__o *__this_04;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar12;
  System_String_o *key;
  System_String_array *pSVar13;
  MethodInfo_35A7350 *method_00;
  long lVar14;
  ulong uVar15;
  System_String_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_057045b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Random");
    il2cpp_init_method_metadata(&"/Human/Previews/PresetNone");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"/Icons/Navigation/TooltipIcon");
    il2cpp_init_method_metadata(&".png");
    il2cpp_init_method_metadata(&"CharacterPreview_Titans_");
    il2cpp_init_method_metadata(&"Preset");
    DAT_057045b8 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_03,MethodInfo_List_1_System_String);
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
     (plVar7 = *(long **)(lVar6 + 0x28), plVar7 != (long *)0x0)) {
    lVar6 = *plVar7;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar14) == TypeInfo_IListSetting) {
          puVar11 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar6 +
                    0x138);
          goto LAB_04097fc9;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IListSetting,2);
LAB_04097fc9:
    __this_04 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar11)(plVar7,puVar11[1]);
    if (options != (System_String_array *)0x0) {
      if (0 < (int)options->max_length) {
        uVar15 = 0;
        pSVar13 = options;
        if ((options->max_length & 0xffffffff) != 0) {
          do {
            pSVar12 = options->m_Items[uVar15];
            bVar10 = System_String__op_Equality(pSVar12,"Random",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040984cf;
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_48,__this_04,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
              pIVar9 = local_48.fields._current;
              options = pSVar13;
              pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
              do {
                __this_00.fields._8_8_ = in_stack_ffffffffffffff90;
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)options;
                __this_00.fields._current = (Il2CppObject *)pSVar16;
                bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
                if ((char)bVar10 == '\0') {
                  __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
                  __this_02.fields._list = (System_Collections_Generic_List_T__o *)options;
                  __this_02.fields._current = (Il2CppObject *)pSVar16;
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
                  goto LAB_04098348;
                }
                if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar3 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
                if (((pIVar9->klass->_2).naturalAligment < bVar3) ||
                   ((pIVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pIVar9);
                }
                if (pIVar9[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)((pIVar9[2].klass)->_1).namespaze,pSVar12,
                                    (MethodInfo *)0x0);
              } while ((char)bVar10 == '\0');
              if (pIVar9[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar12 = (System_String_o *)((pIVar9[3].klass)->_1).namespaze;
              __this_01.fields._8_8_ = in_stack_ffffffffffffff90;
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)options;
              __this_01.fields._current = (Il2CppObject *)pSVar16;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
              if (pSVar12 == (System_String_o *)0x0) {
LAB_04098348:
                iVar5 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
joined_r0x04098356:
                pSVar13 = options;
                if (iVar5 == 0) {
                  il2cpp_init_class();
                }
                pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                puVar11 = &"/Human/Previews/PresetNone";
                goto LAB_04098373;
              }
              key = System_String__Concat("CharacterPreview_Titans_",pSVar12,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar10 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                path1 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
                pSVar12 = System_String__Concat("Preset",pSVar12,".png",(MethodInfo *)0x0)
                ;
                if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar12 = System_IO_Path__Combine(path1,"Titans",pSVar12,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                x = ApplicationManagers_ResourceManager__LoadExternalTexture
                              (pSVar12,key,1,(MethodInfo *)0x0);
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              lVar6 = MethodInfo_Void_Add;
              in_stack_ffffffffffffff90 = key;
              if ((char)bVar10 == '\0') {
                iVar5 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
                goto joined_r0x04098356;
              }
              if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040984cf;
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_03->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) goto LAB_040984cf;
              uVar4 = (__this_03->fields)._size;
              pSVar13 = options;
              if ((uint)pSVar8->max_length <= uVar4) {
                method_00 = *(MethodInfo_35A7350 **)
                             (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
                goto LAB_04098025;
              }
              (__this_03->fields)._size = uVar4 + 1;
              ppIVar2 = pSVar8->m_Items + (long)(int)uVar4 + -4;
              pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)key;
LAB_040983c6:
              il2cpp_runtime_glue(ppIVar2 + 4,key);
            }
            else {
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              puVar11 = &"/Icons/Navigation/TooltipIcon";
LAB_04098373:
              key = System_String__Concat(pSVar12,(System_String_o *)*puVar11,(MethodInfo *)0x0);
              lVar6 = MethodInfo_Void_Add;
              if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040984cf;
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_03->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) goto LAB_040984cf;
              uVar4 = (__this_03->fields)._size;
              if (uVar4 < (uint)pSVar8->max_length) {
                (__this_03->fields)._size = uVar4 + 1;
                ppIVar2 = pSVar8->m_Items + (long)(int)uVar4 + -4;
                pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)key;
                goto LAB_040983c6;
              }
              method_00 = *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
              ;
LAB_04098025:
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_03,(Il2CppObject *)key,method_00);
            }
            uVar15 = uVar15 + 1;
            uVar4 = (uint)options->max_length;
            if ((long)(int)uVar4 <= (long)uVar15) goto LAB_040984a9;
          } while (uVar15 < uVar4);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_040984a9:
      if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar13 = (System_String_array *)
                  System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
        return pSVar13;
      }
    }
  }
LAB_040984cf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterTitanPanel$$.ctor
// il2cpp: void UI_CharacterTitanPanel___ctor (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x4098600

void UI_CharacterTitanPanel___ctor(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  if (DAT_057045b9 == '\0') {
    il2cpp_init_method_metadata(&"CharacterPopup");
    DAT_057045b9 = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterTitanPanel$$<Setup>b__1_1
// il2cpp: void UI_CharacterTitanPanel___Setup_b__1_1 (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x4098650

void UI_CharacterTitanPanel__<Setup>b__1_1(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  UI_CharacterTitanPanel__OnLoadoutClick(__this,method);
  return;
}


