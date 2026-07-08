// Type: UI.CharacterEditorEditStatsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorEditStatsPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditStatsPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorEditStatsPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorEditStatsPopup__get_Title (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4051e40

System_String_o *
UI_CharacterEditorEditStatsPopup__get_Title
          (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570441f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"");
    DAT_0570441f = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Stats","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorEditStatsPopup$$get_Width
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_Width (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4051ee0

float UI_CharacterEditorEditStatsPopup__get_Width
                (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 325.0;
}


// UI.CharacterEditorEditStatsPopup$$get_Height
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_Height (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4051ef0

float UI_CharacterEditorEditStatsPopup__get_Height
                (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 425.0;
}


// UI.CharacterEditorEditStatsPopup$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_VerticalSpacing (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4051f00

float UI_CharacterEditorEditStatsPopup__get_VerticalSpacing
                (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorEditStatsPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorEditStatsPopup__get_HorizontalPadding (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4051f10

int32_t UI_CharacterEditorEditStatsPopup__get_HorizontalPadding
                  (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorEditStatsPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorEditStatsPopup__get_VerticalPadding (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4051f20

int32_t UI_CharacterEditorEditStatsPopup__get_VerticalPadding
                  (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorEditStatsPopup$$Setup
// il2cpp: void UI_CharacterEditorEditStatsPopup__Setup (UI_CharacterEditorEditStatsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4051f30

void UI_CharacterEditorEditStatsPopup__Setup
               (UI_CharacterEditorEditStatsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method
               )

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  System_Collections_Hashtable_o *str;
  Settings_IntSetting_o *pSVar5;
  System_String_o *subCategory;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  Settings_BaseSetSetting_o *pSVar8;
  Characters_HumanStats_o *pCVar9;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar10;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  
  if (DAT_05704420 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_4);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_5);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"Speed");
    il2cpp_init_method_metadata(&"Ammunition");
    il2cpp_init_method_metadata(&"Gas");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Points Left");
    DAT_05704420 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,130.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  subCategory = "Stats";
  pSVar6 = "CharacterEditor";
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar3 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar8 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar8 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar8);
      }
    }
    pCVar9 = (Characters_HumanStats_o *)il2cpp_runtime_glue(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar9,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pSVar8 != (Settings_BaseSetSetting_o *)0x0) &&
       (pSVar4 = pSVar8[4].fields.Settings,
       pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
      str = (pSVar4->fields)._objectsTable;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar9 = Characters_HumanStats__Deserialize(pCVar9,(System_String_o *)str,(MethodInfo *)0x0);
      __this_02 = UI_ElementFactory__CreateDefaultLabel
                            ((__this->fields).SinglePanel,__this_01,"Points Left",0,4,
                             (MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        pUVar10 = (UnityEngine_UI_Text_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._pointsLeftLabel = pUVar10;
        il2cpp_runtime_glue(&(__this->fields)._pointsLeftLabel,pUVar10);
        if ((pCVar9 != (Characters_HumanStats_o *)0x0) &&
           (pSVar5 = (__this->fields).Speed, pSVar5 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting<int>__set_Value
                    ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Speed,MethodInfo_Void_set_Value);
          pSVar5 = (__this->fields).Acceleration;
          if (pSVar5 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting<int>__set_Value
                      ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Acceleration,
                       MethodInfo_Void_set_Value);
            pSVar5 = (__this->fields).Gas;
            if (pSVar5 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting<int>__set_Value
                        ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Gas,MethodInfo_Void_set_Value);
              pSVar5 = (__this->fields).Ammunition;
              if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                Settings_TypedSetting<int>__set_Value
                          ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Ammunition,
                           MethodInfo_Void_set_Value);
                pUVar2 = (__this->fields).SinglePanel;
                pSVar5 = (__this->fields).Acceleration;
                pSVar11 = UI_UIManager__GetLocale
                                    (pSVar6,subCategory,"Acceleration","","",
                                     (MethodInfo *)0x0);
                pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateIncrementSetting
                          (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar11,"",
                           33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar2 = (__this->fields).SinglePanel;
                pSVar5 = (__this->fields).Speed;
                pSVar11 = UI_UIManager__GetLocale
                                    (pSVar6,subCategory,"Speed","","",
                                     (MethodInfo *)0x0);
                pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateIncrementSetting
                          (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar11,"",
                           33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar2 = (__this->fields).SinglePanel;
                pSVar5 = (__this->fields).Gas;
                pSVar11 = UI_UIManager__GetLocale
                                    (pSVar6,subCategory,"Gas","","",
                                     (MethodInfo *)0x0);
                pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateIncrementSetting
                          (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar11,"",
                           33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar2 = (__this->fields).SinglePanel;
                pSVar5 = (__this->fields).Ammunition;
                pSVar6 = UI_UIManager__GetLocale
                                   (pSVar6,subCategory,"Ammunition","","",
                                    (MethodInfo *)0x0);
                pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateIncrementSetting
                          (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar6,"",
                           33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                           (MethodInfo *)0x0);
                UI_CharacterEditorEditStatsPopup__OnStatChanged
                          (__this,(__this->fields).Speed,method_00);
                return;
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


// UI.CharacterEditorEditStatsPopup$$OnButtonClick
// il2cpp: void UI_CharacterEditorEditStatsPopup__OnButtonClick (UI_CharacterEditorEditStatsPopup_o* __this, System_String_o* button, const MethodInfo* method);
// 0x4052860

void UI_CharacterEditorEditStatsPopup__OnButtonClick
               (UI_CharacterEditorEditStatsPopup_o *__this,System_String_o *button,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_Collections_Hashtable_o *str;
  Settings_IntSetting_o *pSVar4;
  long *plVar5;
  Settings_BaseSetSetting_c *pSVar6;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar7;
  Settings_BaseSetSetting_o *pSVar8;
  Characters_HumanStats_o *pCVar9;
  System_String_o *value;
  
  if (DAT_05704421 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704421 = '\x01';
  }
  bVar7 = System_String__op_Equality(button,"Back",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar7 = System_String__op_Equality(button,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar8 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar8 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto LAB_04052b95;
    }
    pCVar9 = (Characters_HumanStats_o *)il2cpp_runtime_glue(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar9,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pSVar8 != (Settings_BaseSetSetting_o *)0x0) &&
       (pSVar3 = pSVar8[4].fields.Settings,
       pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
      str = (pSVar3->fields)._objectsTable;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar9 = Characters_HumanStats__Deserialize(pCVar9,(System_String_o *)str,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).Speed;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) && (pCVar9 != (Characters_HumanStats_o *)0x0)) {
        (pCVar9->fields).Speed = (pSVar4->fields)._value;
        pSVar4 = (__this->fields).Acceleration;
        if (pSVar4 != (Settings_IntSetting_o *)0x0) {
          (pCVar9->fields).Acceleration = (pSVar4->fields)._value;
          pSVar4 = (__this->fields).Gas;
          if (pSVar4 != (Settings_IntSetting_o *)0x0) {
            (pCVar9->fields).Gas = (pSVar4->fields)._value;
            pSVar4 = (__this->fields).Ammunition;
            if (pSVar4 != (Settings_IntSetting_o *)0x0) {
              (pCVar9->fields).Ammunition = (pSVar4->fields)._value;
              pSVar3 = pSVar8[4].fields.Settings;
              value = Characters_HumanStats__Serialize(pCVar9,(MethodInfo *)0x0);
              if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                Settings_TypedSetting<object>__set_Value
                          ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)value,MethodInfo_Void_set_Value);
                plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar8 = *(Settings_BaseSetSetting_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pSVar8 != (Settings_BaseSetSetting_o *)0x0) {
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    if ((bVar1 <= (pSVar8->klass->_2).naturalAligment) &&
                       ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pSVar6 = pSVar8->klass;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pSVar6->_2).naturalAligment) &&
                         ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtable_dispatch =
                             (pSVar6->vtable)._8_DeserializeFromJsonString.methodPtr;
                        (*vtable_dispatch)
                                  (pSVar8,0,(pSVar6->vtable)._8_DeserializeFromJsonString.method,
                                   vtable_dispatch);
                        return;
                      }
                    }
LAB_04052b95:
                    /* WARNING: Subroutine does not return */
                    il2cpp_unwind_resume(pSVar8);
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


// UI.CharacterEditorEditStatsPopup$$OnStatChanged
// il2cpp: void UI_CharacterEditorEditStatsPopup__OnStatChanged (UI_CharacterEditorEditStatsPopup_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x4052610

void UI_CharacterEditorEditStatsPopup__OnStatChanged
               (UI_CharacterEditorEditStatsPopup_o *__this,Settings_IntSetting_o *setting,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  UnityEngine_UI_Text_o *pUVar7;
  Settings_IntSetting_o *pSVar8;
  System_String_o *pSVar9;
  int iVar10;
  int32_t local_2c;
  
  if (DAT_05704422 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Points left: ");
    DAT_05704422 = '\x01';
  }
  local_2c = 0;
  pSVar8 = (__this->fields).Speed;
  if ((((pSVar8 == (Settings_IntSetting_o *)0x0) ||
       (pSVar4 = (__this->fields).Gas, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
      (pSVar5 = (__this->fields).Ammunition, pSVar5 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar6 = (__this->fields).Acceleration, pSVar6 == (Settings_IntSetting_o *)0x0))
  goto LAB_0405285a;
  iVar10 = (pSVar8->fields)._value + (pSVar4->fields)._value + (pSVar5->fields)._value +
           (pSVar6->fields)._value;
  if (0x140 < iVar10) {
    if (setting == (Settings_IntSetting_o *)0x0) goto LAB_0405285a;
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)setting,((setting->fields)._value - iVar10) + 0x140,
               MethodInfo_Void_set_Value);
    if ((setting->fields)._value < 0) {
      pSVar8 = (__this->fields).Speed;
      if (pSVar8 == (Settings_IntSetting_o *)0x0) goto LAB_0405285a;
      (*(pSVar8->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar8,(pSVar8->klass->vtable)._4_SetDefault.method);
      pSVar8 = (__this->fields).Gas;
      if (pSVar8 == (Settings_IntSetting_o *)0x0) goto LAB_0405285a;
      (*(pSVar8->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar8,(pSVar8->klass->vtable)._4_SetDefault.method);
      pSVar8 = (__this->fields).Ammunition;
      if (pSVar8 == (Settings_IntSetting_o *)0x0) goto LAB_0405285a;
      (*(pSVar8->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar8,(pSVar8->klass->vtable)._4_SetDefault.method);
      pSVar8 = (__this->fields).Acceleration;
      if (pSVar8 == (Settings_IntSetting_o *)0x0) goto LAB_0405285a;
      (*(pSVar8->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar8,(pSVar8->klass->vtable)._4_SetDefault.method);
    }
    (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
    pSVar8 = (__this->fields).Speed;
    if (pSVar8 == (Settings_IntSetting_o *)0x0) goto LAB_0405285a;
  }
  pSVar4 = (__this->fields).Gas;
  if (((pSVar4 != (Settings_IntSetting_o *)0x0) &&
      (pSVar5 = (__this->fields).Ammunition, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar6 = (__this->fields).Acceleration, pSVar6 != (Settings_IntSetting_o *)0x0)) {
    iVar10 = (pSVar8->fields)._value;
    iVar1 = (pSVar4->fields)._value;
    iVar2 = (pSVar5->fields)._value;
    iVar3 = (pSVar6->fields)._value;
    pUVar7 = (__this->fields)._pointsLeftLabel;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = System_Math__Max(0,0x140 - (iVar10 + iVar1 + iVar2 + iVar3),(MethodInfo *)0x0);
    pSVar9 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat("Points left: ",pSVar9,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                (pUVar7,pSVar9,(pUVar7->klass->vtable)._75_set_text.method);
      return;
    }
  }
LAB_0405285a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorEditStatsPopup$$.ctor
// il2cpp: void UI_CharacterEditorEditStatsPopup___ctor (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4052ba0

void UI_CharacterEditorEditStatsPopup___ctor
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (DAT_05704423 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    DAT_05704423 = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Speed = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Speed,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Acceleration = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Acceleration,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Ammunition = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Ammunition,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Gas = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Gas);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_0
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_0 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4052cd0

void UI_CharacterEditorEditStatsPopup__<Setup>b__17_0
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704424 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_05704424 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditStatsPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_1
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_1 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4052d10

void UI_CharacterEditorEditStatsPopup__<Setup>b__17_1
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704425 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704425 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditStatsPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_2
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_2 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4052d50

void UI_CharacterEditorEditStatsPopup__<Setup>b__17_2
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Acceleration,in_RDX);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_3
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_3 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4052d60

void UI_CharacterEditorEditStatsPopup__<Setup>b__17_3
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Speed,in_RDX);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_4
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_4 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4052d70

void UI_CharacterEditorEditStatsPopup__<Setup>b__17_4
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Gas,in_RDX);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_5
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_5 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4052d80

void UI_CharacterEditorEditStatsPopup__<Setup>b__17_5
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Ammunition,in_RDX);
  return;
}


