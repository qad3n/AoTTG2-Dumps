// Type: UI.CharacterEditorEditStatsPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorEditStatsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditStatsPopup.cs
// --------------------------------

// UI.CharacterEditorEditStatsPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorEditStatsPopup__get_Title (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d91a0

System_String_o *
UI_CharacterEditorEditStatsPopup__get_Title(UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f9c = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Stats","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorEditStatsPopup$$get_Width
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_Width (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d9240

float
UI_CharacterEditorEditStatsPopup__get_Width(UI_CharacterEditorEditStatsPopup_o* __this, MethodInfo* method)

{
  return 325.0;
}


// UI.CharacterEditorEditStatsPopup$$get_Height
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_Height (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d9190

float
UI_CharacterEditorEditStatsPopup__get_Height(UI_CharacterEditorEditStatsPopup_o* __this, MethodInfo* method)

{
  return 425.0;
}


// UI.CharacterEditorEditStatsPopup$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_VerticalSpacing (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CharacterEditorEditStatsPopup__get_VerticalSpacing(UI_CharacterEditorEditStatsPopup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CharacterEditorEditStatsPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorEditStatsPopup__get_HorizontalPadding (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorEditStatsPopup__get_HorizontalPadding(UI_CharacterEditorEditStatsPopup_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorEditStatsPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorEditStatsPopup__get_VerticalPadding (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorEditStatsPopup__get_VerticalPadding(UI_CharacterEditorEditStatsPopup_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorEditStatsPopup$$Setup
// il2cpp: void UI_CharacterEditorEditStatsPopup__Setup (UI_CharacterEditorEditStatsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821d8850

void UI_CharacterEditorEditStatsPopup__Setup
               (UI_CharacterEditorEditStatsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_o *category;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  Settings_BaseSetSetting_o *pSVar8;
  Characters_HumanStats_o *pCVar9;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *value;
  System_String_o *pSVar10;
  
  if (Il2CppMethodInitialized_184346f9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ammunition");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Points Left");
    Il2CppMethodInitialized_184346f9d = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,130.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  category = "CharacterEditor";
  pSVar6 = "Stats";
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar3 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar3->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar8 == (Settings_BaseSetSetting_o *)0x0) {
      pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar9,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
      }
      pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar9,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
      pSVar4 = (*(uint64_t *)((char *)pSVar8 + 0x108));
      if (pSVar4 != (Settings_StringSetting_o *)0x0) {
        pSVar10 = (pSVar4->fields)._value;
        if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
        }
        pCVar9 = Characters_HumanStats__Deserialize(pCVar9,pSVar10,(MethodInfo *)0x0);
        __this_02 = UI_ElementFactory__CreateDefaultLabel
                              ((__this->fields).SinglePanel,__this_01,"Points Left",0,4,
                               (MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          value = UnityEngine_GameObject__GetComponent_object_
                            (__this_02,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
          (__this->fields)._pointsLeftLabel = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._pointsLeftLabel,value);
          if ((pCVar9 != (Characters_HumanStats_o *)0x0) &&
             (pSVar5 = (__this->fields).Speed, pSVar5 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Speed,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar5 = (__this->fields).Acceleration;
            if (pSVar5 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Acceleration,
                         (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              pSVar5 = (__this->fields).Gas;
              if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Gas,
                           (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pSVar5 = (__this->fields).Ammunition;
                if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar5,(pCVar9->fields).Ammunition,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pUVar2 = (__this->fields).SinglePanel;
                  pSVar5 = (__this->fields).Acceleration;
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar6,"Acceleration","",
                                       "",(MethodInfo *)0x0);
                  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                             (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_2,
                             (MethodInfo *)0x0);
                  UI_ElementFactory__CreateIncrementSetting
                            (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar10,"",
                             33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                             (MethodInfo *)0x0);
                  pUVar2 = (__this->fields).SinglePanel;
                  pSVar5 = (__this->fields).Speed;
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar6,"Speed","",
                                       "",(MethodInfo *)0x0);
                  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                             (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_3,
                             (MethodInfo *)0x0);
                  UI_ElementFactory__CreateIncrementSetting
                            (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar10,"",
                             33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                             (MethodInfo *)0x0);
                  pUVar2 = (__this->fields).SinglePanel;
                  pSVar5 = (__this->fields).Gas;
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar6,"Gas","",
                                       "",(MethodInfo *)0x0);
                  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                             (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_4,
                             (MethodInfo *)0x0);
                  UI_ElementFactory__CreateIncrementSetting
                            (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar10,"",
                             33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                             (MethodInfo *)0x0);
                  pUVar2 = (__this->fields).SinglePanel;
                  pSVar5 = (__this->fields).Ammunition;
                  pSVar6 = UI_UIManager__GetLocale
                                     (category,pSVar6,"Ammunition","",
                                      "",(MethodInfo *)0x0);
                  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                             (intptr_t)MethodInfo_UI_CharacterEditorEditStatsPopup_Setup_b__17_5,
                             (MethodInfo *)0x0);
                  UI_ElementFactory__CreateIncrementSetting
                            (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar6,"",
                             33.0,30.0,(System_String_array *)0x0,pUVar7,(System_Func_bool__o *)0x0,
                             (MethodInfo *)0x0);
                  UI_CharacterEditorEditStatsPopup__OnStatChanged
                            (__this,(__this->fields).Speed,(MethodInfo *)0x0);
                  return;
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


// UI.CharacterEditorEditStatsPopup$$OnButtonClick
// il2cpp: void UI_CharacterEditorEditStatsPopup__OnButtonClick (UI_CharacterEditorEditStatsPopup_o* __this, System_String_o* button, const MethodInfo* method);
// 0x1821d82c0

void UI_CharacterEditorEditStatsPopup__OnButtonClick
               (UI_CharacterEditorEditStatsPopup_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UI_BaseMenu_o *pUVar5;
  UI_BaseMenu_c *pUVar6;
  bool bVar7;
  Settings_BaseSetSetting_o *pSVar8;
  Characters_HumanStats_o *pCVar9;
  System_String_o *pSVar10;
  
  if (Il2CppMethodInitialized_184346f9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f9e = '\x01';
  }
  bVar7 = System_String__op_Equality(button,"Back",(MethodInfo *)0x0);
  if (bVar7) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar7 = System_String__op_Equality(button,"Save",(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar8 == (Settings_BaseSetSetting_o *)0x0) {
      pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar9,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
      }
      pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar9,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (*(uint64_t *)((char *)pSVar8 + 0x108));
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        pSVar10 = (pSVar3->fields)._value;
        if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
        }
        pCVar9 = Characters_HumanStats__Deserialize(pCVar9,pSVar10,(MethodInfo *)0x0);
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
                pSVar3 = (*(uint64_t *)((char *)pSVar8 + 0x108));
                pSVar10 = Characters_HumanStats__Serialize(pCVar9,(MethodInfo *)0x0);
                if (pSVar3 != (Settings_StringSetting_o *)0x0) {
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar10,
                             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                  if (pSVar2 != (Settings_HumanCustomSettings_o *)0x0) {
                    (*(pSVar2->klass->vtable)._18_Save.methodPtr)
                              (pSVar2,(pSVar2->klass->vtable)._18_Save.method);
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    pUVar5 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                    if (pUVar5 != (UI_BaseMenu_o *)0x0) {
                      pUVar6 = pUVar5->klass;
                      bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
                      if ((bVar1 <= (pUVar6->_2).typeHierarchyDepth) &&
                         ((pUVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                          (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
                        (*(code *)((Il2CppClass *)pUVar6)->vtable[8].methodPtr)(pUVar5,0,((Il2CppClass *)pUVar6)->vtable[8].method);
                        return;
                      }
                      il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UI_CharacterEditorMenu);
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


// UI.CharacterEditorEditStatsPopup$$OnStatChanged
// il2cpp: void UI_CharacterEditorEditStatsPopup__OnStatChanged (UI_CharacterEditorEditStatsPopup_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x1821d8600

void UI_CharacterEditorEditStatsPopup__OnStatChanged
               (UI_CharacterEditorEditStatsPopup_o *__this,Settings_IntSetting_o *setting,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  UnityEngine_UI_Text_o *pUVar8;
  System_String_o *pSVar9;
  int iVar10;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346f9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Points left: ");
    Il2CppMethodInitialized_184346f9f = '\x01';
  }
  pSVar4 = (__this->fields).Speed;
  local_res8[0] = 0;
  if ((((pSVar4 == (Settings_IntSetting_o *)0x0) ||
       (pSVar5 = (__this->fields).Gas, pSVar5 == (Settings_IntSetting_o *)0x0)) ||
      (pSVar6 = (__this->fields).Ammunition, pSVar6 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar7 = (__this->fields).Acceleration, pSVar7 == (Settings_IntSetting_o *)0x0)) goto label_1821d883e;
  iVar10 = (pSVar4->fields)._value +
           (pSVar7->fields)._value + (pSVar6->fields)._value + (pSVar5->fields)._value;
  if (0x140 < iVar10) {
    if (setting == (Settings_IntSetting_o *)0x0) goto label_1821d883e;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)setting,((setting->fields)._value - iVar10) + 0x140,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if ((setting->fields)._value < 0) {
      pSVar4 = (__this->fields).Speed;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_1821d883e;
      (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
      pSVar4 = (__this->fields).Gas;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_1821d883e;
      (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
      pSVar4 = (__this->fields).Ammunition;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_1821d883e;
      (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
      pSVar4 = (__this->fields).Acceleration;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_1821d883e;
      (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
    }
    (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
  }
  pSVar4 = (__this->fields).Speed;
  if (((pSVar4 != (Settings_IntSetting_o *)0x0) &&
      (pSVar5 = (__this->fields).Gas, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
     ((pSVar6 = (__this->fields).Ammunition, pSVar6 != (Settings_IntSetting_o *)0x0 &&
      (pSVar7 = (__this->fields).Acceleration, pSVar7 != (Settings_IntSetting_o *)0x0)))) {
    iVar10 = (pSVar7->fields)._value;
    iVar1 = (pSVar6->fields)._value;
    iVar2 = (pSVar5->fields)._value;
    iVar3 = (pSVar4->fields)._value;
    pUVar8 = (__this->fields)._pointsLeftLabel;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    local_res8[0] = System_Math__Max_1b2c0d0(0,0x140 - (iVar10 + iVar1 + iVar2 + iVar3),(MethodInfo *)0x0);
    pSVar9 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_1969e50("Points left: ",pSVar9,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                (pUVar8,pSVar9,(pUVar8->klass->vtable)._75_set_text.method);
      return;
    }
  }
label_1821d883e:
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditStatsPopup$$.ctor
// il2cpp: void UI_CharacterEditorEditStatsPopup___ctor (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d9030

void UI_CharacterEditorEditStatsPopup___ctor(UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_184346fa0 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Speed = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Speed,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Acceleration = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Acceleration,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Ammunition = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Ammunition,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Gas = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Gas,pSVar1);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_0
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_0 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d8f70

void UI_CharacterEditorEditStatsPopup___Setup_b__17_0
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346fa1 = '\x01';
  }
  UI_CharacterEditorEditStatsPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_1
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_1 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d8fb0

void UI_CharacterEditorEditStatsPopup___Setup_b__17_1
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184346fa2 = '\x01';
  }
  UI_CharacterEditorEditStatsPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_2
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_2 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d8ff0

void UI_CharacterEditorEditStatsPopup___Setup_b__17_2
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Acceleration,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_3
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_3 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d9000

void UI_CharacterEditorEditStatsPopup___Setup_b__17_3
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Speed,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_4
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_4 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d9010

void UI_CharacterEditorEditStatsPopup___Setup_b__17_4
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Gas,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_5
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_5 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x1821d9020

void UI_CharacterEditorEditStatsPopup___Setup_b__17_5
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditStatsPopup__OnStatChanged(__this,(__this->fields).Ammunition,(MethodInfo *)0x0);
  return;
}


