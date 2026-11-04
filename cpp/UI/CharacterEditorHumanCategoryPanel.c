// Type: UI.CharacterEditorHumanCategoryPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorHumanCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorHumanCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorHumanCategoryPanel__get_Title (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d9b70

System_String_o *
UI_CharacterEditorHumanCategoryPanel__get_Title
          (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Editor");
    Il2CppMethodInitialized_184346fa3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorHumanCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorHumanCategoryPanel__get_Height (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d9b60

float
UI_CharacterEditorHumanCategoryPanel__get_Height(UI_CharacterEditorHumanCategoryPanel_o* __this, MethodInfo* method)

{
  return 340.0;
}


// UI.CharacterEditorHumanCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__Setup (UI_CharacterEditorHumanCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821d9400

void UI_CharacterEditorHumanCategoryPanel__Setup
               (UI_CharacterEditorHumanCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_IntSetting_o *setting;
  Settings_StringSetting_o *setting_00;
  System_String_o *pSVar4;
  System_String_o *category;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_01;
  System_String_o *title;
  System_String_array *pSVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UI_CharacterEditorHumanMenu_o *pUVar8;
  
  if (Il2CppMethodInitialized_184346fa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Eat");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    il2cpp_codegen_initialize_runtime_metadata(&"Flip");
    Il2CppMethodInitialized_184346fa4 = '\x01';
  }
  UI_CharacterEditorCategoryPanel__Setup((UI_CharacterEditorCategoryPanel_o *)__this,parent,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar8 = (UI_CharacterEditorHumanMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar8 == (UI_CharacterEditorHumanMenu_o *)0x0) {
    (__this->fields)._menu = (UI_CharacterEditorHumanMenu_o *)0x0;
    pUVar8 = (UI_CharacterEditorHumanMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar8->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
    }
    (__this->fields)._menu = pUVar8;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar8->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,pUVar8);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,95.0,20.0,pSVar5,(MethodInfo *)0x0);
  category = "CharacterEditor";
  pSVar5 = "Preview";
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    Settings_SetSettingsContainer_object___GetSelectedSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,
               (MethodInfo_C8EAF0 *)MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    pUVar8 = (__this->fields)._menu;
    if (pUVar8 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      pUVar3 = (__this->fields).SinglePanel;
      setting = (pUVar8->fields).Weapon;
      title = UI_UIManager__GetLocale
                        (category,pSVar5,"Weapon","","",
                         (MethodInfo *)0x0);
      pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
      pSVar4 = "Blade";
      if (pSVar6 != (System_String_array *)0x0) {
        if ((int)pSVar6->max_length != 0) {
          pSVar6->m_Items[0] = "Blade";
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar4);
          pSVar4 = "AHSS";
          if (1 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[1] = "AHSS";
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar4);
            pSVar4 = "Thunderspear";
            if (2 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[2] = "Thunderspear";
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2,pSVar4);
              pSVar4 = "APG";
              if (3 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[3] = "APG";
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3,pSVar4);
                pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_0,
                           (MethodInfo *)0x0);
                UI_ElementFactory__CreateDropdownSetting
                          (pUVar3,__this_01,(Settings_BaseSetting_o *)setting,title,pSVar6,
                           "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar7,
                           (System_Int32_array *)0x0,(MethodInfo *)0x0);
                pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
                pSVar4 = "Salute";
                if (pSVar6 == (System_String_array *)0x0) goto label_1821d9a6b;
                if ((int)pSVar6->max_length != 0) {
                  pSVar6->m_Items[0] = "Salute";
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar4);
                  pSVar4 = "Wave";
                  if (1 < (uint)pSVar6->max_length) {
                    pSVar6->m_Items[1] = "Wave";
                    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar4);
                    pSVar4 = "Nod";
                    if (2 < (uint)pSVar6->max_length) {
                      pSVar6->m_Items[2] = "Nod";
                      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2,pSVar4);
                      pSVar4 = "Shake";
                      if (3 < (uint)pSVar6->max_length) {
                        pSVar6->m_Items[3] = "Shake";
                        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3,pSVar4);
                        pSVar4 = "Dance";
                        if (4 < (uint)pSVar6->max_length) {
                          pSVar6->m_Items[4] = "Dance";
                          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 4,pSVar4);
                          pSVar4 = "Eat";
                          if (5 < (uint)pSVar6->max_length) {
                            pSVar6->m_Items[5] = "Eat";
                            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 5,pSVar4);
                            pSVar4 = "Flip";
                            if (6 < (uint)pSVar6->max_length) {
                              pSVar6->m_Items[6] = "Flip";
                              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 6,pSVar4);
                              pUVar3 = (__this->fields).SinglePanel;
                              setting_00 = (__this->fields)._emote;
                              pSVar5 = UI_UIManager__GetLocale
                                                 (category,pSVar5,"Emote","",
                                                  "",(MethodInfo *)0x0);
                              pUVar7 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                              UnityEngine_Events_UnityAction___ctor
                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,
                                         (Il2CppObject *)__this,
                                         (intptr_t)
                                         MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_1,
                                         (MethodInfo *)0x0);
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)setting_00,pSVar5,pSVar6,
                                         "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                                         pUVar7,(System_Int32_array *)0x0,(MethodInfo *)0x0);
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
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1821d9a6b:
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanCategoryPanel$$OnWeaponChanged
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d92b0

void
UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged(UI_CharacterEditorHumanCategoryPanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorHumanMenu_o *pUVar1;
  UI_CharacterEditorCostumePanel_o *x;
  bool bVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *routine;
  
  if (Il2CppMethodInitialized_184346fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346fa5 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,true,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    if (Il2CppMethodInitialized_184346ff7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_184346ff7 = '\x01';
    }
    if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
      if (Il2CppMethodInitialized_184346ff8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
        Il2CppMethodInitialized_184346ff8 = '\x01';
      }
      if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview == false) {
        return;
      }
    }
    pUVar1 = (__this->fields)._menu;
    if (pUVar1 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      x = (pUVar1->fields)._costumePanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (x == (UI_CharacterEditorCostumePanel_o *)0x0) goto label_1821d93f6;
        if (Il2CppMethodInitialized_184346f83 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31);
          Il2CppMethodInitialized_184346f83 = '\x01';
        }
        routine = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31)
        ;
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
label_1821d93f6:
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanCategoryPanel$$OnEmote
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnEmote (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d9250

void
UI_CharacterEditorHumanCategoryPanel__OnEmote(UI_CharacterEditorHumanCategoryPanel_o* __this, MethodInfo* method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346fa6 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___ctor (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d9a80

void UI_CharacterEditorHumanCategoryPanel___ctor
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    Il2CppMethodInitialized_184346fa7 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar1,"Salute",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._emote = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emote,pSVar1);
  if (Il2CppMethodInitialized_184346f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184346f77 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._category = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._category,pSVar1);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_0
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_0 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d92b0

void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_0
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorHumanMenu_o *pUVar1;
  UI_CharacterEditorCostumePanel_o *x;
  bool bVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *routine;
  
  if (Il2CppMethodInitialized_184346fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346fa5 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,true,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    if (Il2CppMethodInitialized_184346ff7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_184346ff7 = '\x01';
    }
    if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
      if (Il2CppMethodInitialized_184346ff8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
        Il2CppMethodInitialized_184346ff8 = '\x01';
      }
      if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview == false) {
        return;
      }
    }
    pUVar1 = (__this->fields)._menu;
    if (pUVar1 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      x = (pUVar1->fields)._costumePanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (x == (UI_CharacterEditorCostumePanel_o *)0x0) goto label_1821d93f6;
        if (Il2CppMethodInitialized_184346f83 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31);
          Il2CppMethodInitialized_184346f83 = '\x01';
        }
        routine = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31)
        ;
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
label_1821d93f6:
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_1
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_1 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d9250

void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_1
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346fa6 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


